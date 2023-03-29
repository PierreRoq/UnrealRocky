// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class u2023rocky : ModuleRules
{
	public u2023rocky(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}
