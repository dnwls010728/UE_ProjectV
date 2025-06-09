// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Ability/Ability.h"
#include "MeleeAbility.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTV_API AMeleeAbility : public AAbility
{
	GENERATED_BODY()

protected:
	virtual void OnAttack() override;
	
};
