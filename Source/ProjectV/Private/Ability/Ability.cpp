// Fill out your copyright notice in the Description page of Project Settings.


#include "Ability/Ability.h"

#include "PaperFlipbookComponent.h"
#include "Components/SphereComponent.h"

// Sets default values
AAbility::AAbility() : AttackDelay(1.f)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	Sphere = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere"));
	Sphere->SetupAttachment(RootComponent);

	Sprite = CreateDefaultSubobject<UPaperFlipbookComponent>(TEXT("Sprite"));
	Sprite->SetupAttachment(Sphere);

}

// Called when the game starts or when spawned
void AAbility::BeginPlay()
{
	Super::BeginPlay();

	GetWorld()->GetTimerManager().SetTimer(
		AttackTimerHandle,
		this, &AAbility::OnAttack,
		AttackDelay,
		true
	);
	
}

void AAbility::OnAttack()
{
}

