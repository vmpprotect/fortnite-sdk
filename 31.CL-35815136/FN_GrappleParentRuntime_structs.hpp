#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: GrappleParentRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

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
		unsigned char UnknownData00_7[0x10]; // 0x50(0x10) UNKNOWN PROPERTY
	};

}
