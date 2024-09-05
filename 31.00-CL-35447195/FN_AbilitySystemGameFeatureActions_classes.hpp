#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: AbilitySystemGameFeatureActions
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class AbilitySystemGameFeatureActions.GameFeatureAction_AddAttributeDefaults
	// Inherited from UGameFeatureAction -> UObject
	// Size: 0x20 (0x48 - 0x28)
	class UGameFeatureAction_AddAttributeDefaults : public UGameFeatureAction	
	{
	public:
		bool bApplyOnRegister; // 0x28(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x29(0x7) UNKNOWN PROPERTY
		TArray AttribDefaultTableNames; // 0x30(0x10)
		unsigned char UnknownData03_7[0x8]; // 0x40(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AbilitySystemGameFeatureActions.GameFeatureAction_AddAttributeDefaults");
			return ret;
		}
	};

}
