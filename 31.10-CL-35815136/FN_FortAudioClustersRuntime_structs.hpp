#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: FortAudioClustersRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct FortAudioClustersRuntime.GameFeatureAudioClusterEntry
	// Size: 0x18 (0x18 - 0x0)
	struct FGameFeatureAudioClusterEntry	
	{
	public:
		FGameplayTag ClusterTag; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TArray<TWeakObjectPtr> ActorClasses; // 0x8(0x10)
	};

}
