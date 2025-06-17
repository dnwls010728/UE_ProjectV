// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Character/PVCharacterBase.h"
#include "NavigatorCharacter.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTV_API ANavigatorCharacter : public APVCharacterBase
{
	GENERATED_BODY()

public:
	ANavigatorCharacter();

protected:
	UFUNCTION(BlueprintCallable)
	void Spawn();
	
	UPROPERTY(EditAnywhere)
	TObjectPtr<class USpringArmComponent> CameraBoom;

	UPROPERTY(EditAnywhere)
	TObjectPtr<class UCameraComponent> FollowCamera;
	
	UPROPERTY(EditAnywhere)
	TObjectPtr<class UWidgetComponent> HealthBarWidget;
	
	UPROPERTY(EditAnywhere)
	TObjectPtr<class UAbilityComponent> AbilityComponent;

	UPROPERTY(EditAnywhere)
	TSubclassOf<class AEnemyCharacter> EnemyClass;
	
};
