// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;

public class RPG_PlaygroundEditor : ModuleRules
{
	public RPG_PlaygroundEditor(ReadOnlyTargetRules Target) : base(Target)
	{
		PublicIncludePaths.AddRange(new string[]  { "RPG_PlaygroundEditor/Public" });
        PrivateIncludePaths.AddRange(new string[]  { "RPG_PlaygroundEditor/Private" });
        PublicDependencyModuleNames.AddRange(new string[] { "RPG_Playground" });
        PublicDependencyModuleNames.AddRange(
            new string[]
            {
                "Core",
                "CoreUObject",
                "UnrealEd",
            }
        );
        PrivateDependencyModuleNames.AddRange(
            new string[]
            {
                "AssetTools"
            }
        );
        PrivateIncludePathModuleNames.AddRange(new string[] { });
        DynamicallyLoadedModuleNames.AddRange(new string[] { });
	}
}
