// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "PVPlayerController.generated.h"

struct FInputActionValue;
class UInputAction;
/**
 * 
 */
UCLASS()
class PROJECTV_API APVPlayerController : public APlayerController
{
	GENERATED_BODY()

protected:
	virtual void SetupInputComponent() override;
	virtual void BeginPlay() override;

	void Move(const FInputActionValue& Value);

	UPROPERTY(EditAnywhere, Category = "Input")
	TObjectPtr<class UInputMappingContext> InputMappingContext;

	UPROPERTY(EditAnywhere, Category = "Input")
	TObjectPtr<UInputAction> MoveAction;

	UPROPERTY()
	TObjectPtr<class APVCharacterBase> PlayerCharacter;
	
};
