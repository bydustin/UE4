// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "ProjectTestGameMode.h"
#include "ProjectTestHUD.h"
#include "ProjectTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProjectTestGameMode::AProjectTestGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AProjectTestHUD::StaticClass();
}
