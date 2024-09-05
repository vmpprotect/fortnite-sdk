#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: GameFeatureSet
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class GameFeatureSet.GameFeatureSetSubsystem
	// Inherited from UEngineSubsystem -> UDynamicSubsystem -> USubsystem -> UObject
	// Size: 0x1B8 (0x1E8 - 0x30)
	class UGameFeatureSetSubsystem : public UEngineSubsystem	
	{
	public:
		unsigned char UnknownData00_1[0x1B8]; // 0x30(0x1B8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameFeatureSet.GameFeatureSetSubsystem");
			return ret;
		}
	};

}
