// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "ObjectPoolSubsystem.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTV_API UObjectPoolSubsystem : public UWorldSubsystem
{
	GENERATED_BODY()

public:
	UObjectPoolSubsystem();
	
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;

private:
	UPROPERTY()
	TObjectPtr<UDataTable> DataTable;
	
};
