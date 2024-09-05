#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: SharedWeaponAnimsRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class SharedWeaponAnimsRuntime.ChapWormChooserData
	// Inherited from UFortItemChooserData -> UObject
	// Size: 0x8 (0x30 - 0x28)
	class UChapWormChooserData : public UFortItemChooserData	
	{
	public:
		bool bIsOverpower; // 0x28(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x29(0x3) UNKNOWN PROPERTY
		FGameplayTag OPTagName; // 0x2C(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SharedWeaponAnimsRuntime.ChapWormChooserData");
			return ret;
		}
	};


	// Class SharedWeaponAnimsRuntime.FlexLegendChooserData
	// Inherited from UFortItemChooserData -> UObject
	// Size: 0x18 (0x40 - 0x28)
	class UFlexLegendChooserData : public UFortItemChooserData	
	{
	public:
		bool bIsTargetingCustom; // 0x28(0x1)
		bool bPlayUpperBodyTargetingCustom; // 0x29(0x1)
		unsigned char UnknownData00_7[0x16]; // 0x2A(0x16) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SharedWeaponAnimsRuntime.FlexLegendChooserData");
			return ret;
		}
	};


	// Class SharedWeaponAnimsRuntime.RATTPistolChooserData
	// Inherited from UFortItemChooserData -> UObject
	// Size: 0x10 (0x38 - 0x28)
	class URATTPistolChooserData : public UFortItemChooserData	
	{
	public:
		bool bPlayUpperBodyTargetingCustom; // 0x28(0x1)
		unsigned char UnknownData00_7[0xF]; // 0x29(0xF) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SharedWeaponAnimsRuntime.RATTPistolChooserData");
			return ret;
		}
	};

}
