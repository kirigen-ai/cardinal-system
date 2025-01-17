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