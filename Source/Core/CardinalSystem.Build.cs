/**  
	This source code is licensed under the Kirigen Non-Commercial License v1.0
	that can be found in the LICENSE file in the root directory.

	Copyright (c) 2025 Kirigen LLC. All rights reserved.

   	Non-commercial use is permitted subject to revenue (<$1M), valuation (<$5M),
	funding (<$2M), and user (<100K MAU) thresholds. Commercial use requires
	a separate license (contact: licensing@kirigen.co)
*/

using System;
using System.IO;
using Internal;
using UnrealBuildTool;

public class CardinalSystem : ModuleRules
{
	public CardinalSystem(ReadOnlyTargetRules Target) : base(Target)
	{
		Type = ModuleType.CPlusPlus;
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
			"DeveloperSettings",
			"Projects"
		});
            
		#endregion

	}
}
