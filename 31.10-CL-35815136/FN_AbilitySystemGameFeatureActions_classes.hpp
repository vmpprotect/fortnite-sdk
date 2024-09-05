#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: AbilitySystemGameFeatureActions
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class AbilitySystemGameFeatureActions.GameFeatureAction_AddAttributeDefaults
	// Inherited from UGameFeatureAction -> UObject
	// Size: 0x20 (0x48 - 0x28)
	class UGameFeatureAction_AddAttributeDefaults : public UGameFeatureAction	
	{
	public:
		bool bApplyOnRegister; // 0x28(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x29(0x7) UNKNOWN PROPERTY
		TArray<FSoftObjectPath> AttribDefaultTableNames; // 0x30(0x10)
		unsigned char UnknownData01_7[0x8]; // 0x40(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AbilitySystemGameFeatureActions.GameFeatureAction_AddAttributeDefaults");
			return ret;
		}
	};

}
