// Fill out your copyright notice in the Description page of Project Settings.


#include "Subsystems/ObjectPoolSubsystem.h"

#include "DataTables/ObjectPoolData.h"

UObjectPoolSubsystem::UObjectPoolSubsystem()
{
	static ConstructorHelpers::FObjectFinder<UDataTable> DataTableFinder(TEXT("DataTable'/Game/DataTables/DT_ObjectPoolData.DT_ObjectPoolData'"));
	if (DataTableFinder.Succeeded()) DataTable = DataTableFinder.Object;
	else UE_LOG(LogTemp, Error, TEXT("Failed to load DataTable"));
}

void UObjectPoolSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	TArray<FObjectPoolData*> ObjectPools;
	DataTable->GetAllRows("", ObjectPools);
	for (const auto& Pool : ObjectPools)
	{
		for (int32 i = 0; i < Pool->PoolSize; ++i)
		{
			if (!Pool->PoolClass) break;
		}
	}
	
}
