// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperZDCharacter.h"
#include "Components/TimelineComponent.h"
#include "PVCharacterBase.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTV_API APVCharacterBase : public APaperZDCharacter
{
	GENERATED_BODY()

public:
	virtual void BeginPlay() override;

	void Flash(float Multiplier = 1.f, FLinearColor Color = FLinearColor::Red, float PlayRate = 5.f);

protected:
	virtual void Tick(float DeltaTime) override;
	
	UFUNCTION()
	void UpdateTimeline(float Alpha);
	
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UMaterialInstanceDynamic> DynamicSpriteMaterial;

	UPROPERTY(EditAnywhere)
	TObjectPtr<UCurveFloat> FlashCurve;

	UPROPERTY()
	float FlashMultiplier;
	
	FTimeline FlashTimeline;
	
};
