// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProjectPathfinderGameMode.h"
#include "ProjectPathfinderPlayerController.h"

AProjectPathfinderGameMode::AProjectPathfinderGameMode()
{
	PlayerControllerClass = AProjectPathfinderPlayerController::StaticClass();
}
