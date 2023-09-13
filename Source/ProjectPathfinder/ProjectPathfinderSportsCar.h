// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "ProjectPathfinderPawn.h"
#include "ProjectPathfinderSportsCar.generated.h"

/**
 *  Sports car wheeled vehicle implementation
 */
UCLASS(abstract)
class PROJECTPATHFINDER_API AProjectPathfinderSportsCar : public AProjectPathfinderPawn
{
	GENERATED_BODY()
	
public:

	AProjectPathfinderSportsCar();
};
