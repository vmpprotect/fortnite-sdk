#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: GrappleParentRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct GrappleParentRuntime.SpeedScaledAxisOffsetData
	// Size: 0x60 (0x60 - 0x0)
	struct FSpeedScaledAxisOffsetData	
	{
	public:
		FScalableFloat OffsetModifier; // 0x0(0x28)
		float BaseOffset; // 0x28(0x4)
		float SpeedScaledOffset; // 0x2C(0x4)
		FVector2D SpeedBounds; // 0x30(0x10)
		FVector2D SpeedMultiplierBounds; // 0x40(0x10)
		unsigned char UnknownData01_7[0x10]; // 0x50(0x10) UNKNOWN PROPERTY
	};

}
