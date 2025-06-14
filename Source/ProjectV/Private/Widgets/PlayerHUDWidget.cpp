// Fill out your copyright notice in the Description page of Project Settings.


#include "Widgets/PlayerHUDWidget.h"

#include "Components/TextBlock.h"
#include "Kismet/KismetStringLibrary.h"

void UPlayerHUDWidget::SetTimer(float InSeconds)
{
	int32 Minutes = FMath::FloorToInt(InSeconds / 60);
	int32 Seconds = FMath::FloorToInt(InSeconds) % 60;
	
	FString TimeString = FString::Printf(TEXT("%02d:%02d"), Minutes, Seconds);
	TimerText->SetText(FText::FromString(TimeString));
}
