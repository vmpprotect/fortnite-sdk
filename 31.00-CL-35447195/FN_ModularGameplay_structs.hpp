#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: ModularGameplay
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct ModularGameplay.ActorInitStateChangedParams
	// Size: 0x20 (0x20 - 0x0)
	struct FActorInitStateChangedParams	
	{
	public:
		AActor OwningActor; // 0x0(0x8)
		FName FeatureName; // 0x8(0x4)
		unsigned char UnknownData02_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		UObject Implementer; // 0x10(0x8)
		FGameplayTag FeatureState; // 0x18(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
	};

}
