// Copyright Epic Games, Inc. All Rights Reserved.

#include "StudyUE4GameMode.h"
#include "StudyUE4HUD.h"
#include "StudyUE4Character.h"
#include "UObject/ConstructorHelpers.h"

AStudyUE4GameMode::AStudyUE4GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AStudyUE4HUD::StaticClass();
}
