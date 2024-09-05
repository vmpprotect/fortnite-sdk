#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: CreativeLowMemoryFallbackRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct CreativeLowMemoryFallbackRuntime.CreativeLowMemoryFallbackUserFacingText
	// Size: 0x30 (0x30 - 0x0)
	struct FCreativeLowMemoryFallbackUserFacingText	
	{
	public:
		FText ExitToMainMenuReasonText; // 0x0(0x10)
		FText WarningToastTitle; // 0x10(0x10)
		FText WarningToastDescription; // 0x20(0x10)
	};


	// Struct CreativeLowMemoryFallbackRuntime.CreativeLowMemoryFallbackFreeMemoryThresholds
	// Size: 0xC (0xC - 0x0)
	struct FCreativeLowMemoryFallbackFreeMemoryThresholds	
	{
	public:
		float FallbackMB; // 0x0(0x4)
		float WarningMB; // 0x4(0x4)
		float RecoveryMB; // 0x8(0x4)
	};

}
