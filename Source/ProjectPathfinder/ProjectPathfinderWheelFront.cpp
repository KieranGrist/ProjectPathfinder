// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProjectPathfinderWheelFront.h"
#include "UObject/ConstructorHelpers.h"

UProjectPathfinderWheelFront::UProjectPathfinderWheelFront()
{
	AxleType = EAxleType::Front;
	bAffectedBySteering = true;
	MaxSteerAngle = 40.f;
}