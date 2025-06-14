// Fill out your copyright notice in the Description page of Project Settings.


#include "GameMode/PVGameMode.h"
#include "Widgets/PlayerHUDWidget.h"

APVGameMode::APVGameMode()
{
	PrimaryActorTick.bCanEverTick = true;
}

void APVGameMode::BeginPlay()
{
	Super::BeginPlay();

	PlayerHUD = CreateWidget<UPlayerHUDWidget>(GetWorld(), PlayerHUDClass);
	if (IsValid(PlayerHUD))
	{
		PlayerHUD->AddToViewport();
	}
}

void APVGameMode::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	Timer += DeltaSeconds;
	PlayerHUD->SetTimer(Timer);
}
