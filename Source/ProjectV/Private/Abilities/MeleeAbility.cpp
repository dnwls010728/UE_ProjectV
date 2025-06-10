// Fill out your copyright notice in the Description page of Project Settings.


#include "Abilities/MeleeAbility.h"

AMeleeAbility::AMeleeAbility()
{
}

void AMeleeAbility::BeginPlay()
{
	Super::BeginPlay();

	GetWorld()->GetTimerManager().SetTimer(
		AttackTimerHandle,
		this, &AMeleeAbility::OnAttack,
		AttackDelay
	);
}

void AMeleeAbility::OnAttack()
{
}
