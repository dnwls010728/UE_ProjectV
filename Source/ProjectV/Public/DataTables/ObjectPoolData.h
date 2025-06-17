#pragma once

#include "CoreMinimal.h"
#include "ObjectPoolData.generated.h"

USTRUCT(BlueprintType)
struct PROJECTV_API FObjectPoolData : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> PoolClass = nullptr;

	UPROPERTY(EditAnywhere)
	int32 PoolSize = 0;

	UPROPERTY(EditAnywhere)
	bool bCanExpand = false;

};
