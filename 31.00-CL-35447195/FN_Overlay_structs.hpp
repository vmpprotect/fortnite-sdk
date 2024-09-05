#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: Overlay
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct Overlay.OverlayItem
	// Size: 0x30 (0x30 - 0x0)
	struct FOverlayItem	
	{
	public:
		FTimespan StartTime; // 0x0(0x8)
		FTimespan EndTime; // 0x8(0x8)
		FString Text; // 0x10(0x10)
		FVector2D Position; // 0x20(0x10)
	};

}
