// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperZDCharacter.h"
#include "PVCharacterBase.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTV_API APVCharacterBase : public APaperZDCharacter
{
	GENERATED_BODY()

public:
	APVCharacterBase();

protected:
	UPROPERTY(EditAnywhere)
	TObjectPtr<class USpringArmComponent> CameraBoom;

	UPROPERTY(EditAnywhere)
	TObjectPtr<class UCameraComponent> FollowCamera;
	
};
