// Fill out your copyright notice in the Description page of Project Settings.


#include "LandscapeSplineComponent.h"

// Sets default values for this component's properties
UPathfinderSplineComponent::UPathfinderSplineComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UPathfinderSplineComponent::BeginPlay()
{
	Super::BeginPlay();	
}


// Called every frame
void UPathfinderSplineComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    //Spline->

    // Assuming you have a LandscapeSplineComponent reference.
    UPathfinderSplineComponent* SplineComponent = YourLandscapeSplineComponent;

    // Check if the spline component is valid.
    if (SplineComponent)
    {
        TArray<FLandscapeSplineConnection> SplinePoints;
        SplineComponent->GetSplinePoints(SplinePoints);

        for (const FLandscapeSplineConnection& SplinePoint : SplinePoints)
        {
            // Access spline point data, e.g., location.
            FVector SplinePointLocation = SplinePoint.Location;

            // You can access other data like tangent, etc., as needed.
        }
    }
}

