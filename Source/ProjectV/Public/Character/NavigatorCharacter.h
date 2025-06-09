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
	UPROPERTY(EditAnywhere)
	TObjectPtr<class UAbilityComponent> AbilityComponent;
	
};
