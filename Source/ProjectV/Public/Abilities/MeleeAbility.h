// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/Ability.h"
#include "MeleeAbility.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTV_API AMeleeAbility : public AAbility
{
	GENERATED_BODY()

public:
	AMeleeAbility();
	
	virtual void BeginPlay() override;

protected:
	virtual void OnAttack();

	UPROPERTY(EditAnywhere, Category = "Melee Ability Properties")
	float AttackDelay;
	
	FTimerHandle AttackTimerHandle;
	
};
