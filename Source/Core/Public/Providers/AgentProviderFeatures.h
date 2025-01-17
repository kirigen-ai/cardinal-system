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

#include "AgentProviderFeatures.generated.h"

UENUM(BlueprintType, META = (DisplayName = "Agent Provider Features", Bitflags))
enum class EAgentProviderFeatures : uint8
{
	None	= 0x00 UMETA(DisplayName = "None", Hidden=true),

	Audio 	= (0x01 << 0) UMETA(DisplayName = "Audio"), 
	Chat	= (0x01 << 1) UMETA(DisplayName = "Chat"), 
	Image 	= (0x01 << 2) UMETA(DisplayName = "Image"), 
	Memory	= (0x01 << 3) UMETA(DisplayName = "Memory"), 
	Speech	= (0x01 << 4) UMETA(DisplayName = "Speech"),
	Video	= (0x01 << 5) UMETA(DisplayName = "Video"), 
	Vision	= (0x01 << 6) UMETA(DisplayName = "Vision"),
};

ENUM_CLASS_FLAGS(EAgentProviderFeatures);