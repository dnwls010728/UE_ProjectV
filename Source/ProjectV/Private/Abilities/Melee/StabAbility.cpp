// Fill out your copyright notice in the Description page of Project Settings.


#include "Abilities/Melee/StabAbility.h"

#include "FCTween.h"
#include "PaperFlipbook.h"
#include "PaperFlipbookComponent.h"
#include "Character/EnemyCharacter.h"
#include "Kismet/KismetSystemLibrary.h"

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
	SetActorTickEnabled(false);
	
}

void AStabAbility::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	FBoxSphereBounds Bounds = Sprite->GetFlipbook()->GetRenderBounds();
	FVector Size = Bounds.GetBox().GetSize();

	TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;

	TArray<AActor*> ActorsToIgnore;
	ActorsToIgnore.Add(GetOwner());

	TArray<AActor*> OutActors;

	bool bHit = UKismetSystemLibrary::BoxOverlapActors(
		GetWorld(),
		Sprite->GetComponentLocation(),
		Size * .5f,
		ObjectTypes,
		AEnemyCharacter::StaticClass(),
		ActorsToIgnore,
		OutActors
	);

	if (bHit)
	{
	}
}

void AStabAbility::OnAttack()
{
	Super::OnAttack();
	
	SetActorHiddenInGame(false);
	SetActorTickEnabled(true);

	FCTween::Play(0.f, 1.f, [&](float t)
	{
		FBoxSphereBounds Bounds = Sprite->GetFlipbook()->GetRenderBounds();
		FVector Size = Bounds.GetBox().GetSize();
		
		FVector location = FMath::Lerp(FVector::ZeroVector, FVector((Size.X * .5f) + 25.f, 0.f, 0.f), FCTween::Ease(t, EFCEase::InOutQuad));
		Sprite->SetRelativeLocation(location);
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
