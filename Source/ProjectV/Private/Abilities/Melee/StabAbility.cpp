// Fill out your copyright notice in the Description page of Project Settings.


#include "Abilities/Melee/StabAbility.h"

#include "FCTween.h"
#include "PaperFlipbook.h"
#include "PaperFlipbookComponent.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Engine/OverlapResult.h"
#include "Kismet/GameplayStatics.h"

AStabAbility::AStabAbility()
{
	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	Root->SetupAttachment(RootComponent);

	Sprite = CreateDefaultSubobject<UPaperFlipbookComponent>(TEXT("Sprite"));
	Sprite->SetupAttachment(Root);
	
}

void AStabAbility::BeginPlay()
{
	Super::BeginPlay();

	SetActorHiddenInGame(true);
	
}

void AStabAbility::OnAttack()
{
	Super::OnAttack();
	
	SetActorHiddenInGame(false);

	HitActors.Reset();

	FCTween::Play(0.f, 1.f, [&](float t)
	{
		FBoxSphereBounds Bounds = Sprite->GetFlipbook()->GetRenderBounds();
		FVector Size = Bounds.GetBox().GetSize();
		
		FVector location = FMath::Lerp(FVector::ZeroVector, FVector((Size.X * .5f) + 25.f, 0.f, 0.f), FCTween::Ease(t, EFCEase::InOutQuad));
		Sprite->SetRelativeLocation(location);

		FCollisionQueryParams CollisionParams;
		CollisionParams.AddIgnoredActor(GetOwner());
		CollisionParams.AddIgnoredActors(HitActors);

		TArray<FOverlapResult> OutOverlaps;
		bool bHit = GetWorld()->OverlapMultiByObjectType(
			OutOverlaps,
			Sprite->GetComponentLocation() + GetActorForwardVector() * (Size.X * .5f),
			Sprite->GetComponentQuat(),
			FCollisionObjectQueryParams(ECC_GameTraceChannel1),
			FCollisionShape::MakeBox(FVector(Size.X * .5f, 5.f, Size.Z * .5f)),
			CollisionParams
		);

		if (bHit)
		{
			for (const auto& Overlap : OutOverlaps)
			{
				AActor* HitActor = Overlap.GetActor();
				if (HitActor && !HitActors.Contains(HitActor))
				{
					HitActors.Add(HitActor);
					UKismetSystemLibrary::PrintString(this, FString::Printf(TEXT("Hit: %s"), *HitActor->GetName()), true, false, FLinearColor::Red, 2.f);
				
					UGameplayStatics::ApplyDamage(HitActor, 10.f, GetInstigatorController(), this, UDamageType::StaticClass());
				}
			}
		}
	}, StabTime)->SetOnComplete([&]()
	{
		FCTween::Play(0.f, 1.f, [&](float t)
		{
			FBoxSphereBounds Bounds = Sprite->GetFlipbook()->GetRenderBounds();
			FVector Size = Bounds.GetBox().GetSize();
		
			FVector location =  FVector(Sprite->GetRelativeScale3D().X / 1.f * Size.X * .5f + 25.f, 0.f, 0.f);
			Sprite->SetRelativeLocation(location);
		
			FVector scale = FMath::Lerp(FVector::One(), FVector::ZeroVector, FCTween::Ease(t, EFCEase::InQuart));
			Sprite->SetRelativeScale3D(scale);
		}, .25f)->SetOnComplete([&]()
		{
			GetWorld()->GetTimerManager().SetTimer(
				AttackTimerHandle,
				this, &AStabAbility::OnAttack,
				AttackDelay
			);

			Sprite->SetRelativeLocation(FVector::ZeroVector);
			Sprite->SetRelativeScale3D(FVector(1.f));
	
			SetActorHiddenInGame(true);
			SetActorTickEnabled(false);
		});
	});
	
}
