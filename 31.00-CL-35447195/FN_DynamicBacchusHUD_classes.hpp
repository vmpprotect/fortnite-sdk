#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: DynamicBacchusHUD
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class DynamicBacchusHUD.DynamicBacchusHUDDirector
	// Inherited from ADynamicUIDirectorBase -> AActor -> UObject
	// Size: 0x1E0 (0x490 - 0x2B0)
	class ADynamicBacchusHUDDirector : public ADynamicUIDirectorBase	
	{
	public:
		FDynamicUIAllowed TouchControlRegionAllowed; // 0x2B0(0x68)
		UFortMobileHUDWidgetRegistry BaseHUDWidgetRegistry; // 0x318(0x8)
		UDynamicUIScene WatermarkScene; // 0x320(0x8)
		TMap ScenesPool; // 0x328(0x50)
		UFortMobileHUDWidgetRegistry HUDWidgetRegistry; // 0x378(0x8)
		unsigned char UnknownData01_6[0xA0]; // 0x380(0xA0) UNKNOWN PROPERTY
		FGameplayTagContainer CurrentContextTags; // 0x420(0x20)
		FFortMobileHUDLayoutProfile LayoutProfile; // 0x440(0x38)
		FText ForcedPresetName; // 0x478(0x10)
		FGameplayTag ForcedProfile; // 0x488(0x4)
		FGameplayTag ForcedProfileContainer; // 0x48C(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DynamicBacchusHUD.DynamicBacchusHUDDirector");
			return ret;
		}
	};


	// Class DynamicBacchusHUD.DynamicUIMobileScene
	// Inherited from UDynamicUIScene -> UDataAsset -> UObject
	// Size: 0xB8 (0x130 - 0x78)
	class UDynamicUIMobileScene : public UDynamicUIScene	
	{
	public:
		unsigned char UnknownData01_1[0xB8]; // 0x78(0xB8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DynamicBacchusHUD.DynamicUIMobileScene");
			return ret;
		}
	};

}
