#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: CRD_AudioPlayerRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct CRD_AudioPlayerRuntime.CreativeAudioPlayerData
	// Size: 0x40 (0x40 - 0x0)
	struct FCreativeAudioPlayerData	
	{
	public:
		FUniqueNetIdRepl NetId; // 0x0(0x30)
		APawn* Pawn; // 0x30(0x8)
		float ServerAudioStartTime; // 0x38(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY
	};

}
