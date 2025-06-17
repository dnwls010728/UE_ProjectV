// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/EnemyCharacter.h"

#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Subsystems/ObjectPoolSubsystem.h"

AEnemyCharacter::AEnemyCharacter()
{
}

void AEnemyCharacter::BeginPlay()
{
	Super::BeginPlay();

	Target = Cast<APVCharacterBase>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
}

void AEnemyCharacter::OnActivate()
{
	SetActorHiddenInGame(false);
	SetActorEnableCollision(true);
	SetActorTickEnabled(true);

	GetCharacterMovement()->SetMovementMode(MOVE_Walking);
}

void AEnemyCharacter::OnDeactivate()
{
	SetActorHiddenInGame(true);
	SetActorEnableCollision(false);
	SetActorTickEnabled(false);

	GetCharacterMovement()->SetMovementMode(MOVE_None);
}

float AEnemyCharacter::TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser)
{
	float FinalDamage = Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);
	
	FVector Direction = (GetActorLocation() - DamageCauser->GetActorLocation()).GetSafeNormal();
	LaunchCharacter(Direction * 1000.f, true, true);

	Flash(1.f, FLinearColor::White, 10.f);

	// UObjectPoolSubsystem::Get(GetWorld())->ReturnToPool(this);
	
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
