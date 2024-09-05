#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: DeveloperSettings
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct DeveloperSettings.PerPlatformSettings
	// Size: 0x10 (0x10 - 0x0)
	struct FPerPlatformSettings	
	{
	public:
		TArray Settings; // 0x0(0x10)
	};


	// Struct DeveloperSettings.PlatformSettingsInstances
	// Size: 0x58 (0x58 - 0x0)
	struct FPlatformSettingsInstances	
	{
	public:
		UPlatformSettings PlatformInstance; // 0x0(0x8)
		TMap OtherPlatforms; // 0x8(0x50)
	};

}
