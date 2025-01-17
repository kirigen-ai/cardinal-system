// Copyright Epic Games, Inc. All Rights Reserved.

using System.IO;
using UnrealBuildTool;

public class CardinalSystem : ModuleRules
{
	public CardinalSystem(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
        
		#region Public Include Paths
    
		if (Directory.Exists(Path.Combine(ModuleDirectory, "Core", "Public")))
			PublicIncludePaths.AddRange(new string[] {
				Path.GetFullPath(Path.Combine(ModuleDirectory, "Core", "Public"))
		});
                
		if (Directory.Exists(Path.Combine(ModuleDirectory, "Editor", "Public")))
			PublicIncludePaths.AddRange(new string[] {
				Path.GetFullPath(Path.Combine(ModuleDirectory, "Editor", "Public"))
		});
                
		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"GameplayTags",
    
			"HTTP",
			"Json"
		});
    
		#endregion
            
		#region Private Include Paths
            
		if (Directory.Exists(Path.Combine(ModuleDirectory, "Core", "Private")))
			PrivateIncludePaths.AddRange(new string[] {
				Path.GetFullPath(Path.Combine(ModuleDirectory, "Core", "Private"))
		});
            
		if (Directory.Exists(Path.Combine(ModuleDirectory, "Editor", "Private")))
			PrivateIncludePaths.AddRange(new string[] {
				Path.GetFullPath(Path.Combine(ModuleDirectory, "Editor", "Private"))
		});
            
		PrivateDependencyModuleNames.AddRange(new string[] {
			"Slate",
			"SlateCore",            
		});
            
		#endregion
	}
}
