// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameMode/PVGameModeBase.h"
#include "PVGameMode.generated.h"

class UPlayerHUDWidget;
/**
 * 
 */
UCLASS()
class PROJECTV_API APVGameMode : public APVGameModeBase
{
	GENERATED_BODY()

public:
	APVGameMode();
	
	virtual void BeginPlay() override;

protected:
	virtual void Tick(float DeltaSeconds) override;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UPlayerHUDWidget> PlayerHUDClass;

	UPROPERTY()
	TObjectPtr<UPlayerHUDWidget> PlayerHUD;

	UPROPERTY()
	float Timer;
	
};
