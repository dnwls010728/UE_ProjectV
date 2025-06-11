// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/MeleeAbility.h"
#include "StabAbility.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTV_API AStabAbility : public AMeleeAbility
{
	GENERATED_BODY()

public:
	AStabAbility();

	virtual void BeginPlay() override;
	
protected:
	virtual void OnAttack() override;

	UPROPERTY(EditAnywhere)
	TObjectPtr<USceneComponent> Root;

	UPROPERTY(EditAnywhere)
	TObjectPtr<class UPaperFlipbookComponent> Sprite;

	UPROPERTY(EditAnywhere)
	float StabTime;
	
	UPROPERTY()
	TArray<AActor*> HitActors;

	FTimerHandle StabTimerHandle;
	
};
