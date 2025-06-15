// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/EnemyCharacter.h"

#include "Engine/DamageEvents.h"
#include "Kismet/KismetSystemLibrary.h"

float AEnemyCharacter::TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser)
{
	float FinalDamage = Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);
	
	// FVector Direction = (GetActorLocation() - DamageCauser->GetActorLocation()).GetSafeNormal() + FVector(0.f, 0.f, .5f);
	// LaunchCharacter(Direction * 1000.f, true, true);
	// UKismetSystemLibrary::PrintString(this, FString::Printf(TEXT("Hit!")), true, false, FLinearColor::Red, 2.f);

	Flash(1.f, FLinearColor::White, 10.f);
	
	return FinalDamage;
}
