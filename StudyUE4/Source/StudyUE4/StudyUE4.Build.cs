// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class StudyUE4 : ModuleRules
{
	public StudyUE4(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" ,"UMG"});
	}
}
