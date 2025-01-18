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
#include <GameFramework/Actor.h>

#include "Agent.generated.h"

class UAgentProvider;
class UAgentComponent;

/**
 * Base class for AI Agents in the Cardinal System Plugin.
 */
UCLASS(abstract, BlueprintType, Blueprintable, META = (DisplayName = "Agent"))
class CARDINALSYSTEM_API UAgent : public UObject
{
    GENERATED_BODY()

    public:
		/**
			Defines a user-friendly way of identifying this agent out of many.
		 */
		UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Cardinal System", META = (DisplayName = "Name"))
		FName Name = NAME_None;

		/**
			A text description of what is who, what, and why this agent does (or does not)
		 */
		UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Cardinal System", META = (DisplayName = "Role", MultiLine=true))
		FString Role = FString();

	public:
		/**
			Defines the AI model provider class
		 */
        UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Cardinal System", META = (DisplayName = "Agent Provider Class", AllowAbstract=false))
        TSoftClassPtr<UAgentProvider> AgentProviderClass = nullptr;

	public:
		/** Gets the globally unique id for this object out of many. */
		UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Cardinal System", META = (DisplayName = "Unique ID"))
		const FGuid& GetUniqueId() const { return this->unique_ID; }
	
	private:
		/**
			Defines a unique way of identifying this agent out of many.
		 */
		UPROPERTY() FGuid unique_ID = FGuid::NewGuid();
};