/** 
	Copyright (c) 2025 Kirigen LLC. All rights reserved.
  
	This source code is licensed under the Kirigen Non-Commercial License v1.0
	that can be found in the LICENSE file in the root directory.

   	Non-commercial use is permitted subject to revenue (<$1M), valuation (<$5M),
	funding (<$2M), and user (<100K MAU) thresholds. Commercial use requires
	a separate license (contact: licensing@kirigen.co).

   	This is an Unreal Engine plugin and must comply with the Unreal Engine EULA.
*/


#pragma once

#include <CoreMinimal.h>
#include <Providers/AgentProviderFeatures.h>

#include "AgentProvider.generated.h"

/**
 * Base class for AI Agents in the Cardinal System Plugin.
 */
UCLASS(Abstract, BlueprintType, Blueprintable, META = (DisplayName = "Agent Provider"))
class CARDINALSYSTEM_API UAgentProvider : public UObject
{
    GENERATED_BODY()

	public:
		UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Cardinal System|Agent", META = (DisplayName = "Model ID"))
		FString ModelID = FString("");
	
    public:	
		UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category= "Cardinal System|Provider Info", META = (DisplayName = "Features", DisplayPriority=1, Bitmask, BitmaskEnum="EAgentProviderFeatures"))
		int32  Features = 0xFE & static_cast<int32>(EAgentProviderFeatures::Chat & EAgentProviderFeatures::Completion);
};