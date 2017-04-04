// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "Game.h"
#include "GameGameMode.h"
#include "GamePawn.h"

AGameGameMode::AGameGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AGamePawn::StaticClass();
}

