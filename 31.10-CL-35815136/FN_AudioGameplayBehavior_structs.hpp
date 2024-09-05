#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: AudioGameplayBehavior
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct AudioGameplayBehavior.ActiveVoice
	// Size: 0x18 (0x18 - 0x0)
	struct FActiveVoice	
	{
	public:
		USoundBase* Sound; // 0x0(0x8)
		UAudioComponent* Component; // 0x8(0x8)
		FPlayingId ID; // 0x10(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct AudioGameplayBehavior.PlayingId
	// Size: 0x4 (0x4 - 0x0)
	struct FPlayingId	
	{
	public:
		unsigned char UnknownData00_2[0x4]; // 0x0(0x4) UNKNOWN PROPERTY
	};


	// Struct AudioGameplayBehavior.AudioGameplayBehaviorInstance
	// Size: 0x10 (0x10 - 0x0)
	struct FAudioGameplayBehaviorInstance	
	{
	public:
		UClass* Sound; // 0x0(0x8)
		UAudioGameplayBehavior* Instance; // 0x8(0x8)
	};

}
