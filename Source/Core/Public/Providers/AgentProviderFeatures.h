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

#include "AgentProviderFeatures.generated.h"

UENUM(BlueprintType, META = (DisplayName = "Agent Provider Features", Bitflags))
enum class EAgentProviderFeatures : uint8
{
	None		= 0x00 UMETA(DisplayName = "None", Hidden=true),
	
	Chat		= (0x01 << 0) UMETA(DisplayName = "Chat"),
	Completion  = (0x01 << 1) UMETA(DisplayName = "Completion"),	
	Imagination = (0x01 << 2) UMETA(DisplayName = "Imagination"),
	Memory		= (0x01 << 3) UMETA(DisplayName = "Memory"),
	Vision		= (0x01 << 4) UMETA(DisplayName = "Vision"),
};

ENUM_CLASS_FLAGS(EAgentProviderFeatures);