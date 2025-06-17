// Fill out your copyright notice in the Description page of Project Settings.


#include "Subsystems/ObjectPoolSubsystem.h"

#include "DataTables/ObjectPoolData.h"
#include "Subsystems/Interfaces/Poolable.h"

UObjectPoolSubsystem::UObjectPoolSubsystem()
{
	static ConstructorHelpers::FObjectFinder<UDataTable> DataTableFinder(TEXT("DataTable'/Game/DataTables/DT_ObjectPoolData.DT_ObjectPoolData'"));
	if (DataTableFinder.Succeeded()) DataTable = DataTableFinder.Object;
	else UE_LOG(LogTemp, Error, TEXT("Failed to load DataTable"));
}

void UObjectPoolSubsystem::OnWorldBeginPlay(UWorld& InWorld)
{
	Super::OnWorldBeginPlay(InWorld);
	
	TArray<FObjectPoolData*> ObjectPools;
	DataTable->GetAllRows("", ObjectPools);
	for (const auto& Pool : ObjectPools)
	{
		FPool& FoundPool = PoolMap.FindOrAdd(Pool->PoolClass);
		FoundPool.PoolSize = Pool->PoolSize;
		FoundPool.bCanExpand = Pool->bCanExpand;
		
		for (int32 i = 0; i < Pool->PoolSize; ++i)
		{
			if (!IsValid(Pool->PoolClass)) break;

			FActorSpawnParameters SpawnParams;
			SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
			
			FVector SpawnLocation = FVector::ZeroVector;
			FRotator SpawnRotation = FRotator::ZeroRotator;
			
			AActor* Actor = InWorld.SpawnActor(Pool->PoolClass, &SpawnLocation, &SpawnRotation, SpawnParams);
			if (IsValid(Actor))
			{
				if (APawn* Pawn = Cast<APawn>(Actor)) Pawn->SpawnDefaultController();
				if (IPoolable* Poolable = Cast<IPoolable>(Actor)) Poolable->OnDeactivate();
				FoundPool.Array.Push(Actor);
			}
		}
	}
}

bool UObjectPoolSubsystem::GetFromPool(TSubclassOf<AActor> Class, AActor*& OutActor)
{
	FPool* Pool = PoolMap.Find(Class);
	if (!Pool) return false;

	AActor* Actor = nullptr;
	if (!Pool->Array.IsEmpty()) Actor = Pool->Array.Pop();
	else if (Pool->bCanExpand)
	{
		FActorSpawnParameters SpawnParams;
		SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
			
		FVector SpawnLocation = FVector::ZeroVector;
		FRotator SpawnRotation = FRotator::ZeroRotator;
		
		Actor = GetWorld()->SpawnActor(Class, &SpawnLocation, &SpawnRotation, SpawnParams);
		if (IsValid(Actor))
		{
			if (APawn* Pawn = Cast<APawn>(Actor)) Pawn->SpawnDefaultController();
		}
	}
	
	if (!IsValid(Actor)) return false;
	if (IPoolable* Poolable = Cast<IPoolable>(Actor))
	{
		Poolable->OnActivate();
	}

	OutActor = Actor;
	return true;
}

bool UObjectPoolSubsystem::ReturnToPool(AActor* Actor)
{
	if (!IsValid(Actor)) return false;
	
	FPool* Pool = PoolMap.Find(Actor->GetClass());
	if (!Pool) return false;
	
	if (IPoolable* Poolable = Cast<IPoolable>(Actor))
	{
		Poolable->OnDeactivate();
	}

	if (Pool->Array.Num() >= Pool->PoolSize)
	{
		Actor->Destroy();
		return true;
	}

	Pool->Array.Push(Actor);
	return true;
}

UObjectPoolSubsystem* UObjectPoolSubsystem::Get(UObject* WorldContextObject)
{
	if (!IsValid(WorldContextObject)) return nullptr;

	if (UWorld* World = WorldContextObject->GetWorld())
	{
		if (UObjectPoolSubsystem* Subsystem = World->GetSubsystem<UObjectPoolSubsystem>())
			return Subsystem;
	}

	return nullptr;
}
