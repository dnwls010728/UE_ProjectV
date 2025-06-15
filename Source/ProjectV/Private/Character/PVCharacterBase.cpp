// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/PVCharacterBase.h"

#include "PaperFlipbookComponent.h"

void APVCharacterBase::BeginPlay()
{
	Super::BeginPlay();

	DynamicSpriteMaterial = GetSprite()->CreateDynamicMaterialInstance(0, nullptr, TEXT("None"));

	FOnTimelineFloat FlashUpdate;
	FlashUpdate.BindDynamic(this , &APVCharacterBase::UpdateTimeline);

	FlashTimeline.AddInterpFloat(FlashCurve, FlashUpdate);
	FlashTimeline.SetTimelineLength(1.f);
}

void APVCharacterBase::Flash(float Multiplier, FLinearColor Color, float PlayRate)
{
	FlashMultiplier = Multiplier;
	
	DynamicSpriteMaterial->SetScalarParameterValue("FlashMultiplier", Multiplier);
	DynamicSpriteMaterial->SetVectorParameterValue("FlashColor", Color);

	FlashTimeline.SetPlayRate(PlayRate);
	FlashTimeline.PlayFromStart();
}

void APVCharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (FlashTimeline.IsPlaying())
	{
		FlashTimeline.TickTimeline(DeltaTime);
	}
}

void APVCharacterBase::UpdateTimeline(float Alpha)
{
	float Multiplier = FMath::Lerp(0.f , FlashMultiplier, Alpha);
	DynamicSpriteMaterial->SetScalarParameterValue("FlashMultiplier", Multiplier);
}
