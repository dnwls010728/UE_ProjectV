// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/EnemyCharacter.h"

#include "Kismet/GameplayStatics.h"

AEnemyCharacter::AEnemyCharacter()
{
}

void AEnemyCharacter::BeginPlay()
{
	Super::BeginPlay();

	Target = Cast<APVCharacterBase>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
}

float AEnemyCharacter::TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser)
{
	float FinalDamage = Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);
	
	FVector Direction = (GetActorLocation() - DamageCauser->GetActorLocation()).GetSafeNormal();
	LaunchCharacter(Direction * 1000.f, true, true);

	Flash(1.f, FLinearColor::White, 10.f);
	
	return FinalDamage;
}

void AEnemyCharacter::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	if (IsValid(Target))
	{
		FVector Direction = (Target->GetActorLocation() - GetActorLocation()).GetSafeNormal();
		AddMovementInput(Direction, .5f);
	}
}
