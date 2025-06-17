// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Subsystems/Interfaces/Poolable.h"
#include "Projectile.generated.h"

class USphereComponent;
class UPaperFlipbookComponent;
class UProjectileMovementComponent;

UCLASS()
class PROJECTV_API AProjectile : public AActor, public IPoolable
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AProjectile();
	
	virtual void OnActivate() override;
	virtual void OnDeactivate() override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UPROPERTY(EditAnywhere)
	TObjectPtr<USphereComponent> Sphere;

	UPROPERTY(EditAnywhere)
	TObjectPtr<UPaperFlipbookComponent> Sprite;

	UPROPERTY(EditAnywhere)
	TObjectPtr<UProjectileMovementComponent> ProjectileMovement;

	UPROPERTY(EditAnywhere)
	float Range;

	UPROPERTY(EditAnywhere)
	float MoveSpeed;
	
	UPROPERTY(EditAnywhere)
	bool bCanPierce;

	UPROPERTY()
	TArray<AActor*> HitActors;

	FTimerHandle TimerHandle;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
