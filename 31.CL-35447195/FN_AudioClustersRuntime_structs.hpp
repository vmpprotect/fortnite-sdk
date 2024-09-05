#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: AudioClustersRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct AudioClustersRuntime.AudioClusterActorInfo
	// Size: 0xC (0xC - 0x0)
	struct FAudioClusterActorInfo	
	{
	public:
		TWeakObjectPtr Actor; // 0x0(0x8)
		FGameplayTag tag; // 0x8(0x4)
	};


	// Struct AudioClustersRuntime.AudioClusterOneShotInfo
	// Size: 0x28 (0x28 - 0x0)
	struct FAudioClusterOneShotInfo	
	{
	public:
		FGameplayTag tag; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FVector Position; // 0x8(0x18)
		float LifetimeSeconds; // 0x20(0x4)
		float TimeRemainingSeconds; // 0x24(0x4)
	};

}
