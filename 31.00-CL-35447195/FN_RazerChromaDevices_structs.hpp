#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: RazerChromaDevices
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct RazerChromaDevices.RazerChromaAppInfo
	// Size: 0x48 (0x48 - 0x0)
	struct FRazerChromaAppInfo	
	{
	public:
		FString ApplicationTitle; // 0x0(0x10)
		FString ApplicationDescription; // 0x10(0x10)
		FString AuthorName; // 0x20(0x10)
		FString AuthorContact; // 0x30(0x10)
		int32_t SupportedDeviceTypes; // 0x40(0x4)
		int32_t category; // 0x44(0x4)
	};

}
