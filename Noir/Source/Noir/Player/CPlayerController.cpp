// Fill out your copyright notice in the Description page of Project Settings.


#include "Noir/Player/CPlayerController.h"

ACPlayerController::ACPlayerController()
{
	bShowMouseCursor = true;
}

void ACPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	InputComponent->BindAxis("MoveForward", this, &ACPlayerController::SetMovementForwardBack);
	InputComponent->BindAxis("MoveRight", this, &ACPlayerController::SetMovementLeftRight);

}

void ACPlayerController::SetMovementForwardBack(float InNewAxis)
{

}

void ACPlayerController::SetMovementLeftRight(float InNewAxis)
{

}