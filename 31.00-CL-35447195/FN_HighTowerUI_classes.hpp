#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: HighTowerUI
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class HighTowerUI.HighTowerAbilityContainerWidget
	// Inherited from ULTMWidgetBase -> UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x398 - 0x390)
	class UHighTowerAbilityContainerWidget : public ULTMWidgetBase	
	{
	public:
		FGameplayTag ShowAbilityIntroTag; // 0x390(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x394(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/HighTowerUI.HighTowerAbilityContainerWidget");
			return ret;
		}

		void ShowAbilityIntro(); // Flags: Event|Protected|BlueprintEvent 0x7FF414BDA778
	};

}
