#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: SharedWeaponAnimsRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class SharedWeaponAnimsRuntime.FlexLegendChooserData
	// Inherited from UFortItemChooserData -> UObject
	// Size: 0x18 (0x40 - 0x28)
	class UFlexLegendChooserData : public UFortItemChooserData	
	{
	public:
		bool bIsTargetingCustom; // 0x28(0x1)
		bool bPlayUpperBodyTargetingCustom; // 0x29(0x1)
		unsigned char UnknownData01_7[0x16]; // 0x2A(0x16) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_7[0xF]; // 0x29(0xF) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SharedWeaponAnimsRuntime.RATTPistolChooserData");
			return ret;
		}
	};

}
