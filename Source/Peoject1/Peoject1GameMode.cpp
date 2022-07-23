// Copyright Epic Games, Inc. All Rights Reserved.

#include "Peoject1GameMode.h"
#include "Peoject1HUD.h"
#include "Peoject1Character.h"
#include "UObject/ConstructorHelpers.h"

APeoject1GameMode::APeoject1GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = APeoject1HUD::StaticClass();
}
