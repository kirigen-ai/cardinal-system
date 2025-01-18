/**  
	This source code is licensed under the Kirigen Non-Commercial License v1.0
	that can be found in the LICENSE file in the root directory.

	Copyright (c) 2025 Kirigen LLC. All rights reserved.

   	Non-commercial use is permitted subject to revenue (<$1M), valuation (<$5M),
	funding (<$2M), and user (<100K MAU) thresholds. Commercial use requires
	a separate license (contact: licensing@kirigen.co)
*/

#pragma once

#include <CoreMinimal.h>
#include <Pipelines/AgentPipeline.h>

#include "VisionPipeline.generated.h"

USTRUCT(BlueprintType, META = (DisplayName = "Vision Pipeline Config"))
struct FVisionPipelineConfig
{
	GENERATED_BODY()
	
};

UCLASS(Blueprintable, BlueprintType, META = (DisplayName = "Vision Pipeline"))
class CARDINALSYSTEM_API UVisionPipeline : public UAgentPipeline
{
	GENERATED_BODY()

	public:
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cardinal System|Vision Pipeline")
		FVisionPipelineConfig Config;	
};