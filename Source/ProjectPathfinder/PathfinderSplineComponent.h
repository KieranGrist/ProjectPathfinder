// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "LandscapeSplineActor.h"
#include "LandscapeSplineControlPoint.h"
#include "LandscapeSplinesComponent.h"
#include "Components/ActorComponent.h"
#include "Components/SplineMeshComponent.h"
#include "PathfinderSplineComponent.generated.h"

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECTPATHFINDER_API UPathfinderSplineComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UPathfinderSplineComponent();
	
	// Called when the game starts
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable, CallInEditor)
	void FillArrays();
	
	void FillSplineMeshComponentsArray();
	
	void FillLandscapeSplineControlPointsArray();

	void FillLandscapeSplineSegmentsArray();

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ALandscapeSplineActor* Spline = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ULandscapeSplinesComponent* SplineComponent = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<USplineMeshComponent*> SplineMeshComponents;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<ULandscapeSplineControlPoint*> LandscapeSplineControlPoints;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<ULandscapeSplineSegment*> LandscapeSplineSegments;
};
