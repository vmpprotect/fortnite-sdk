#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: GameFeatureSet
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class GameFeatureSet.GameFeatureSetSubsystem
	// Inherited from UEngineSubsystem -> UDynamicSubsystem -> USubsystem -> UObject
	// Size: 0x1B8 (0x1E8 - 0x30)
	class UGameFeatureSetSubsystem : public UEngineSubsystem	
	{
	public:
		unsigned char UnknownData01_1[0x1B8]; // 0x30(0x1B8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameFeatureSet.GameFeatureSetSubsystem");
			return ret;
		}
	};

}
