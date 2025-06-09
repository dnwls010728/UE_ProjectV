// Fill out your copyright notice in the Description page of Project Settings.


#include "Ability/MeleeAbility.h"

void AMeleeAbility::OnAttack()
{
	Super::OnAttack();

	UE_LOG(LogTemp, Warning, TEXT("Melee attack executed!"));
}
