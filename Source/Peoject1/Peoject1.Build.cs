// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Peoject1 : ModuleRules
{
	public Peoject1(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
