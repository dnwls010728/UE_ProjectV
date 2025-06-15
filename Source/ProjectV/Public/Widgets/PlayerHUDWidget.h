// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PlayerHUDWidget.generated.h"

class UProgressBar;
class UTextBlock;
/**
 * 
 */
UCLASS()
class PROJECTV_API UPlayerHUDWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	void SetTimer(float InSeconds);

protected:
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UTextBlock> TimerText;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UProgressBar> ExpBar;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UTextBlock> LevelText;
	
};
