// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProjectPathfinderWheelRear.h"
#include "UObject/ConstructorHelpers.h"

UProjectPathfinderWheelRear::UProjectPathfinderWheelRear()
{
	AxleType = EAxleType::Rear;
	bAffectedByHandbrake = true;
	bAffectedByEngine = true;
}