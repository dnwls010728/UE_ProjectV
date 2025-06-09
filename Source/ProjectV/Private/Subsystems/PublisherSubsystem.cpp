// Fill out your copyright notice in the Description page of Project Settings.


#include "Subsystems/PublisherSubsystem.h"

#include "Kismet/GameplayStatics.h"

void UPublisherSubsystem::Unsubscribe(EEventType type, FDelegateHandle Handle)
{
	if (FOnPublisherDelegate* Delegate = Events.Find(type))
	{
		Delegate->Remove(Handle);
	}
}

void UPublisherSubsystem::Publish(EEventType EventType)
{
	if (FOnPublisherDelegate* Delegate = Events.Find(EventType))
		Delegate->Broadcast();
}

UPublisherSubsystem* UPublisherSubsystem::Get(const UObject* WorldContextObject)
{
	if (!IsValid(WorldContextObject)) return nullptr;

	if (UGameInstance* GameInstance = UGameplayStatics::GetGameInstance(WorldContextObject))
		return GameInstance->GetSubsystem<UPublisherSubsystem>();

	return nullptr;
}
