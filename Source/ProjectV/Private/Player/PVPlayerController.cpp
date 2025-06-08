// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/PVPlayerController.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "InputMappingContext.h"
#include "Character/PVCharacterBase.h"

void APVPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(InputComponent);
	if (IsValid(EnhancedInputComponent))
	{
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &APVPlayerController::Move);
	}
}

void APVPlayerController::BeginPlay()
{
	Super::BeginPlay();

	PlayerCharacter = Cast<APVCharacterBase>(GetCharacter());
	if (IsValid(PlayerCharacter))
	{
		UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer());
		if (IsValid(Subsystem) && IsValid(InputMappingContext))
		{
			Subsystem->AddMappingContext(InputMappingContext, 0);
		}
	}
}

void APVPlayerController::Move(const FInputActionValue& Value)
{
	if (IsValid(PlayerCharacter))
	{
		const FVector2D MovementValue = Value.Get<FVector2D>();
		PlayerCharacter->AddMovementInput(FVector::UnitX(), MovementValue.X);
		PlayerCharacter->AddMovementInput(FVector::UnitY(), MovementValue.Y);
	}
}
