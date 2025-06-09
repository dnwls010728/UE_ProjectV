// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "PublisherSubsystem.generated.h"

UENUM(BlueprintType)
enum EEventType : uint8
{
	None UMETA(DisplayName = "None")
};

DECLARE_MULTICAST_DELEGATE(FOnPublisherDelegate)

/**
 * 
 */
UCLASS()
class PROJECTV_API UPublisherSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	template <typename UserClass>
	FDelegateHandle Subscribe(EEventType type, UserClass* Object, typename TMemFunPtrType<false, UserClass, void()>::Type Func);

	void Unsubscribe(EEventType type, FDelegateHandle Handle);
	void Publish(EEventType EventType);

	static UPublisherSubsystem* Get(const UObject* WorldContextObject);

private:
	TMap<EEventType, FOnPublisherDelegate> Events;
	
};

template <typename UserClass>
FDelegateHandle UPublisherSubsystem::Subscribe(EEventType type, UserClass* Object, typename TMemFunPtrType<false, UserClass, void()>::Type Func)
{
	return Events.FindOrAdd(type).AddUObject(Object, Func);
}
