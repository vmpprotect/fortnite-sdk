#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: Overlay
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

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
