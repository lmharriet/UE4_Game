// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "CPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class NOIR_API ACPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:

	ACPlayerController();

	virtual void SetupInputComponent() override; 

protected:
	void SetMovementForwardBack(float InNewAxis);
	void SetMovementLeftRight(float InNewAxis);

};
