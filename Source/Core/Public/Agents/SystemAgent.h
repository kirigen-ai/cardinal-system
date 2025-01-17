﻿/**  
	This source code is licensed under the Kirigen Non-Commercial License v1.0
	that can be found in the LICENSE file in the root directory.

	Copyright (c) 2025 Kirigen LLC. All rights reserved.

   	Non-commercial use is permitted subject to revenue (<$1M), valuation (<$5M),
	funding (<$2M), and user (<100K MAU) thresholds. Commercial use requires
	a separate license (contact: licensing@kirigen.co)
*/

#pragma once

#include <CoreMinimal.h>
#include <Agents/Agent.h>

#include "SystemAgent.generated.h"

/**
 * Base class for Agent Systems in the Cardinal System Plugin.
 */
UCLASS(abstract, BlueprintType, Blueprintable, META = (DisplayName = "System Agent"))
class CARDINALSYSTEM_API USystemAgent : public UAgent
{
	GENERATED_BODY()

};
