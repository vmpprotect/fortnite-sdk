#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: AudioClustersRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct AudioClustersRuntime.AudioClusterActorInfo
	// Size: 0xC (0xC - 0x0)
	struct FAudioClusterActorInfo	
	{
	public:
		TWeakObjectPtr<AActor*> Actor; // 0x0(0x8)
		FGameplayTag Tag; // 0x8(0x4)
	};


	// Struct AudioClustersRuntime.AudioClusterOneShotInfo
	// Size: 0x28 (0x28 - 0x0)
	struct FAudioClusterOneShotInfo	
	{
	public:
		FGameplayTag Tag; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FVector Position; // 0x8(0x18)
		float LifetimeSeconds; // 0x20(0x4)
		float TimeRemainingSeconds; // 0x24(0x4)
	};

}
