#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: StatsigUnreal
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class StatsigUnreal.StatsigTestActorComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x28 (0xC8 - 0xA0)
	class UStatsigTestActorComponent : public UActorComponent	
	{
	public:
		bool bInitializeAsync; // 0xA0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0xA1(0x7) UNKNOWN PROPERTY
		FString SDKKey; // 0xA8(0x10)
		FString UserId; // 0xB8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/StatsigUnreal.StatsigTestActorComponent");
			return ret;
		}
	};

}
