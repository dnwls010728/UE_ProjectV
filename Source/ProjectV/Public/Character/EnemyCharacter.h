// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Character/PVCharacterBase.h"
#include "EnemyCharacter.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTV_API AEnemyCharacter : public APVCharacterBase
{
	GENERATED_BODY()

public:
	AEnemyCharacter();

	virtual void BeginPlay() override;
	
	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser) override;

protected:
	virtual void Tick(float DeltaSeconds) override;
	
	UPROPERTY()
	TObjectPtr<APVCharacterBase> Target;
	
};
