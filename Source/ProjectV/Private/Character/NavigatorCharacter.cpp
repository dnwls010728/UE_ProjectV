// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/NavigatorCharacter.h"

#include "Character/Components/AbilityComponent.h"

ANavigatorCharacter::ANavigatorCharacter()
{
	AbilityComponent = CreateDefaultSubobject<UAbilityComponent>(TEXT("AbilityComponent"));
}
