#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: HighTowerUI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class HighTowerUI.HighTowerAbilityContainerWidget
	// Inherited from ULTMWidgetBase -> UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x390 - 0x388)
	class UHighTowerAbilityContainerWidget : public ULTMWidgetBase	
	{
	public:
		FGameplayTag ShowAbilityIntroTag; // 0x388(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x38C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/HighTowerUI.HighTowerAbilityContainerWidget");
			return ret;
		}

		void ShowAbilityIntro(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
