#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: DeveloperSettings
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct DeveloperSettings.PerPlatformSettings
	// Size: 0x10 (0x10 - 0x0)
	struct FPerPlatformSettings	
	{
	public:
		TArray<UPlatformSettings*> Settings; // 0x0(0x10)
	};


	// Struct DeveloperSettings.PlatformSettingsInstances
	// Size: 0x58 (0x58 - 0x0)
	struct FPlatformSettingsInstances	
	{
	public:
		UPlatformSettings* PlatformInstance; // 0x0(0x8)
		TMap<FName, UPlatformSettings*> OtherPlatforms; // 0x8(0x50)
	};

}
