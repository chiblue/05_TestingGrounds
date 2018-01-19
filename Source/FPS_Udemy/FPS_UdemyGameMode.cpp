// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "FPS_UdemyGameMode.h"
#include "FPS_UdemyHUD.h"
#include "FPS_UdemyCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFPS_UdemyGameMode::AFPS_UdemyGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AFPS_UdemyHUD::StaticClass();
}
