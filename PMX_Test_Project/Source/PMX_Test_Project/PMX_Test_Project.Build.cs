// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class PMX_Test_Project : ModuleRules
{
	public PMX_Test_Project(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
