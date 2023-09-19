// Fill out your copyright notice in the Description page of Project Settings.


#include "PathfinderSplineComponent.h"

// Sets default values for this component's properties
UPathfinderSplineComponent::UPathfinderSplineComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	
}


// Called when the game starts
void UPathfinderSplineComponent::BeginPlay()
{
	Super::BeginPlay();	
	
	FillArrays();
}


// Called every frame
void UPathfinderSplineComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

void UPathfinderSplineComponent::FillArrays()
{
	// Assuming you have a LandscapeSplineComponent reference.
	Spline = Cast<ALandscapeSplineActor>(GetOwner());
	SplineComponent = Spline->GetSplinesComponent();
	FillSplineMeshComponentsArray();
	FillLandscapeSplineControlPointsArray();
	FillLandscapeSplineSegmentsArray();
}

void UPathfinderSplineComponent::FillSplineMeshComponentsArray()
{
	SplineMeshComponents.Empty();
	for (auto SplineMeshComponent : SplineComponent->GetSplineMeshComponents())
	{
		SplineMeshComponents.Add(SplineMeshComponent);
	}
}

void UPathfinderSplineComponent::FillLandscapeSplineControlPointsArray()
{
	LandscapeSplineControlPoints.Empty();
	for (auto ControlPoint : SplineComponent->GetControlPoints())
	{
		LandscapeSplineControlPoints.Add(ControlPoint.Get());
	}
}

void UPathfinderSplineComponent::FillLandscapeSplineSegmentsArray()
{
	LandscapeSplineSegments.Empty();
	for (auto SplineSegment : SplineComponent->GetSegments())
	{
		LandscapeSplineSegments.Add(SplineSegment.Get());
	}
}
