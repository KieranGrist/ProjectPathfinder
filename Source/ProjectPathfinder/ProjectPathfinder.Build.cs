// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ProjectPathfinder : ModuleRules
{
	public ProjectPathfinder(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core","Landscape", "CoreUObject", "Engine", "InputCore", "EnhancedInput", "ChaosVehicles", "PhysicsCore" });
	}
}
