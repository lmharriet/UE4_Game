// Copyright Epic Games, Inc. All Rights Reserved.

#include "NoirGameMode.h"
#include "NoirCharacter.h"
#include "UObject/ConstructorHelpers.h"

ANoirGameMode::ANoirGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
