#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: ModularGameplay
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct ModularGameplay.ActorInitStateChangedParams
	// Size: 0x20 (0x20 - 0x0)
	struct FActorInitStateChangedParams	
	{
	public:
		AActor* OwningActor; // 0x0(0x8)
		FName FeatureName; // 0x8(0x4)
		unsigned char UnknownData00_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		UObject* Implementer; // 0x10(0x8)
		FGameplayTag FeatureState; // 0x18(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
	};

}
