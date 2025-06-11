// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/EnemyCharacter.h"

#include "Kismet/KismetSystemLibrary.h"

float AEnemyCharacter::TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser)
{
	UKismetSystemLibrary::PrintString(this, FString::Printf(TEXT("Hit!")), true, false, FLinearColor::Red, 2.f);
	return DamageAmount;
}
