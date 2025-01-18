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
#include <UObject/Object.h>

#include "AgentPipeline.generated.h"

/**
 * Base class for AI Agent Pipelines in the Cardinal System Plugin.
*/
UCLASS(abstract, BlueprintType, Blueprintable, META = (DisplayName = "Agent Pipeline"))
class CARDINALSYSTEM_API UAgentPipeline : public UObject
{
    GENERATED_BODY()

	private:
		/** Defines a unique way of identifying this agent out of many. */
		UPROPERTY() FGuid unique_id = FGuid::NewGuid();

	public:
		/** Gets the globally unique id for this object out of many. */
		UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Cardinal System", META = (DisplayName = "Unique ID"))
		const FGuid& GetUniqueId() const { return this->unique_id; }
};