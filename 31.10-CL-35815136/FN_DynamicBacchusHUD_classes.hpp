#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: DynamicBacchusHUD
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class DynamicBacchusHUD.DynamicBacchusHUDDirector
	// Inherited from ADynamicUIDirectorBase -> AActor -> UObject
	// Size: 0x1F0 (0x4A0 - 0x2B0)
	class ADynamicBacchusHUDDirector : public ADynamicUIDirectorBase	
	{
	public:
		FDynamicUIAllowed TouchControlRegionAllowed; // 0x2B0(0x78)
		UFortMobileHUDWidgetRegistry* BaseHUDWidgetRegistry; // 0x328(0x8)
		UDynamicUIScene* WatermarkScene; // 0x330(0x8)
		TMap<FGameplayTag, UDynamicUIMobileScene*> ScenesPool; // 0x338(0x50)
		UFortMobileHUDWidgetRegistry* HUDWidgetRegistry; // 0x388(0x8)
		unsigned char UnknownData00_6[0xA0]; // 0x390(0xA0) UNKNOWN PROPERTY
		FGameplayTagContainer CurrentContextTags; // 0x430(0x20)
		FFortMobileHUDLayoutProfile LayoutProfile; // 0x450(0x38)
		FText ForcedPresetName; // 0x488(0x10)
		FGameplayTag ForcedProfile; // 0x498(0x4)
		FGameplayTag ForcedProfileContainer; // 0x49C(0x4)

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
		unsigned char UnknownData00_1[0xB8]; // 0x78(0xB8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DynamicBacchusHUD.DynamicUIMobileScene");
			return ret;
		}
	};

}
