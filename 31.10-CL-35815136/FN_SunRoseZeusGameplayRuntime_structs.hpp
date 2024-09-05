#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: SunRoseZeusGameplayRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct SunRoseZeusGameplayRuntime.LightningStrikeInfo
	// Size: 0x30 (0x30 - 0x0)
	struct FLightningStrikeInfo	
	{
	public:
		FTimerHandle BoltFXTimerHandle; // 0x0(0x8)
		FTimerHandle TelegraphTimerHandle; // 0x8(0x8)
		FVector Location; // 0x10(0x18)
		float BoltHeight; // 0x28(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
	};

}
