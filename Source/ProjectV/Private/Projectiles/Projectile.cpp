// Fill out your copyright notice in the Description page of Project Settings.


#include "Projectiles/Projectile.h"

#include "MeshPassProcessor.h"
#include "PaperFlipbookComponent.h"
#include "Components/SphereComponent.h"
#include "Engine/DamageEvents.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Subsystems/ObjectPoolSubsystem.h"


// Sets default values
AProjectile::AProjectile()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Sphere = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere"));
	Sphere->SetupAttachment(RootComponent);

	Sprite = CreateDefaultSubobject<UPaperFlipbookComponent>(TEXT("Sprite"));
	Sprite->SetupAttachment(Sphere);

	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement"));
}

void AProjectile::OnActivate()
{
	SetActorHiddenInGame(false);
	SetActorEnableCollision(true);
	SetActorTickEnabled(true);
	
	float Time = Range / MoveSpeed;
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, [&]()
	{
		UObjectPoolSubsystem::Get(GetWorld())->ReturnToPool(this);
	}, Time, false);

	ProjectileMovement->Velocity = {MoveSpeed, 0.f, 0.f };
}

void AProjectile::OnDeactivate()
{
	HitActors.Reset();
	
	SetActorHiddenInGame(true);
	SetActorEnableCollision(false);
	SetActorTickEnabled(false);

	ProjectileMovement->Velocity = {0.f, 0.f, 0.f};
}

// Called when the game starts or when spawned
void AProjectile::BeginPlay()
{
	Super::BeginPlay();

	Sphere->OnComponentBeginOverlap.AddDynamic(this, &AProjectile::OnOverlapBegin);
	
}

void AProjectile::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (HitActors.Contains(OtherActor)) return;

	FDamageEvent DamageEvent;
	OtherActor->TakeDamage(10.f, DamageEvent, GetInstigatorController(), this);
	HitActors.Add(OtherActor);
}

// Called every frame
void AProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

