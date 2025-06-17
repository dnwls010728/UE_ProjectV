// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/NavigatorCharacter.h"

#include "Camera/CameraComponent.h"
#include "Character/Components/AbilityComponent.h"
#include "Components/WidgetComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Projectiles/Projectile.h"
#include "Subsystems/ObjectPoolSubsystem.h"

ANavigatorCharacter::ANavigatorCharacter()
{
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom);
	
	HealthBarWidget = CreateDefaultSubobject<UWidgetComponent>(TEXT("HealthBarWidget"));
	HealthBarWidget->SetupAttachment(RootComponent);
	
	AbilityComponent = CreateDefaultSubobject<UAbilityComponent>(TEXT("AbilityComponent"));
}

void ANavigatorCharacter::Spawn()
{
	AActor* OutActor = nullptr;
	UObjectPoolSubsystem::Get(GetWorld())->GetFromPool(ProjectileClass, OutActor);

	if (IsValid(OutActor)) OutActor->SetActorLocation({0.f, 0.f, 100.f});
}
