// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "PublisherSubsystem.generated.h"

UENUM(BlueprintType)
enum EEventType : uint8
{
	None UMETA(DisplayName = "None"),
	EnemyDeath UMETA(DisplayName = "Enemy Death")
};

USTRUCT(BlueprintType)
struct FEventData
{
	GENERATED_BODY()
	
};

DECLARE_MULTICAST_DELEGATE_OneParam(FOnPublisherDelegate, FEventData);

/**
 * 
 */
UCLASS()
class PROJECTV_API UPublisherSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	template <typename UserClass>
	FDelegateHandle Subscribe(EEventType type, UserClass* Object, typename TMemFunPtrType<false, UserClass, void(const FEventData&)>::Type Func);

	void Unsubscribe(EEventType type, FDelegateHandle Handle);
	void Publish(EEventType EventType, const FEventData& EventData);

	static UPublisherSubsystem* Get(const UObject* WorldContextObject);

private:
	TMap<EEventType, FOnPublisherDelegate> Events;
	
};

template <typename UserClass>
FDelegateHandle UPublisherSubsystem::Subscribe(EEventType type, UserClass* Object, typename TMemFunPtrType<false, UserClass, void(const FEventData&)>::Type Func)
{
	return Events.FindOrAdd(type).AddUObject(Object, Func);
}
