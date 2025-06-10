// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/Components/AbilityComponent.h"
#include "Abilities/Ability.h"

// Sets default values for this component's properties
UAbilityComponent::UAbilityComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	// ...
}


// Called when the game starts
void UAbilityComponent::BeginPlay()
{
	Super::BeginPlay();

	for (const auto& AbilityClass : AbilityClasses)
	{
		TObjectPtr<AAbility> Ability = GetWorld()->SpawnActor<AAbility>(AbilityClass);
		if (!IsValid(Ability)) continue;

		Ability->SetOwner(GetOwner());
		Ability->SetInstigator(Cast<APawn>(GetOwner()));

		// Ability->SetActorHiddenInGame(true);
		// Ability->SetActorEnableCollision(false);
		
		Ability->AttachToActor(GetOwner(), FAttachmentTransformRules::KeepRelativeTransform);
		Abilities.Add(Ability);
	}
	
}

