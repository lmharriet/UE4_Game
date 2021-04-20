// Copyright Epic Games, Inc. All Rights Reserved.


#include "shooterGameGameModeBase.h"

void AshooterGameGameModeBase::StartPlay()
{
	Super::StartPlay();

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("Hello World, This is shooterGameMode!"));
	}
}