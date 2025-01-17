/** 
	Copyright (c) 2025 Kirigen LLC.

	Permission is hereby granted, free of charge, to any person obtaining a copy
	of this software and associated documentation files (the "Software"), to deal
	in the Software without restriction, including without limitation the rights
	to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
	copies of the Software, and to permit persons to whom the Software is
	furnished to do so, subject to the following conditions:

	The above copyright notice and this permission notice shall be included in all
	copies or substantial portions of the Software.

	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
	IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
	FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
	AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
	LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
	OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
	SOFTWARE.
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