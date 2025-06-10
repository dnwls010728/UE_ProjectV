// Fill out your copyright notice in the Description page of Project Settings.


#include "Abilities/Melee/StabAbility.h"

#include "FCTween.h"
#include "PaperFlipbookComponent.h"

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

	
}

void AStabAbility::OnAttack()
{
	Super::OnAttack();
	
	SetActorHiddenInGame(false);
	SetActorTickEnabled(true);

	FCTween::Play(0.f, 1.f, [&](float t)
	{
		FVector location = FMath::Lerp(FVector(0.f), FVector(100.f, 0.f, 0.f), FCTween::Ease(t, EFCEase::InOutQuad));
		Root->SetRelativeLocation(location);
	}, StabTime);

	FCTween::Play(0.f, 1.f, [&](float t)
	{
		FVector scale = FMath::Lerp(FVector(1.f), FVector(0.f), FCTween::Ease(t, EFCEase::InQuart));
		Root->SetRelativeScale3D(scale);
	}, StabTime);
	
	GetWorld()->GetTimerManager().SetTimer(
		StabTimerHandle,
		this, &AStabAbility::OnStabEnd,
		StabTime
	);
	
}

void AStabAbility::OnStabEnd()
{
	GetWorld()->GetTimerManager().SetTimer(
		AttackTimerHandle,
		this, &AStabAbility::OnAttack,
		AttackDelay
	);
	
	SetActorHiddenInGame(true);
	SetActorTickEnabled(false);
	
}
