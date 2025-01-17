/** 
	Copyright (c) 2025 Kirigen LLC. All rights reserved.
  
	This source code is licensed under the Kirigen Non-Commercial License v1.0
	that can be found in the LICENSE file in the root directory.

   	Non-commercial use is permitted subject to revenue (<$1M), valuation (<$5M),
	funding (<$2M), and user (<100K MAU) thresholds. Commercial use requires
	a separate license (contact: licensing@kirigen.co).

   	This is an Unreal Engine plugin and must comply with the Unreal Engine EULA.
*/

#include <CardinalSystemModule.h>

#define LOCTEXT_NAMESPACE "FCardinalSystemModule"

class FCardinalSystemModule : public IModuleInterface
{
	public:
		/** IModuleInterface implementation */
		virtual void StartupModule() override
		{
			// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
		}

		virtual void ShutdownModule() override
		{
			// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
			// we call this function before unloading the module.
		}
};

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FCardinalSystemModule, CardinalSystem)