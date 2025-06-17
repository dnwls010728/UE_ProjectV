// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "ObjectPoolSubsystem.generated.h"

USTRUCT(BlueprintType)
struct FPool
{
	GENERATED_BODY()

	UPROPERTY()
	TArray<AActor*> Array;

	UPROPERTY()
	int32 PoolSize = 0;

	UPROPERTY()
	bool bCanExpand = false;
};

/**
 * 
 */
UCLASS()
class PROJECTV_API UObjectPoolSubsystem : public UWorldSubsystem
{
	GENERATED_BODY()

public:
	UObjectPoolSubsystem();
	
	virtual void OnWorldBeginPlay(UWorld& InWorld) override;

	bool GetFromPool(TSubclassOf<AActor> Class, AActor*& OutActor);
	bool ReturnToPool(AActor* Actor);

	static UObjectPoolSubsystem* Get(UObject* WorldContextObject);

private:
	UPROPERTY()
	TObjectPtr<UDataTable> DataTable;

	UPROPERTY()
	TMap<TSubclassOf<AActor>, FPool> PoolMap;
	
};
