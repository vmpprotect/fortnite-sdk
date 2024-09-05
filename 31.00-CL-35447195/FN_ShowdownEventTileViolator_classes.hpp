#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: ShowdownEventTileViolator
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class /Game/ShowdownEventTileViolator.ShowdownEventTileViolator_C
	// Inherited from UFortShowdownDetailView -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x39 (0x749 - 0x710)
	class UShowdownEventTileViolator_C : public UFortShowdownDetailView	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x710(0x8)
		UWidgetAnimation Focus; // 0x718(0x8)
		UCommonTextBlock CommonTextBlock; // 0x720(0x8)
		UCommonTextBlock CommonTextBlock_RoundNumber; // 0x728(0x8)
		UCommonWidgetSwitcherLegacy CommonWidgetSwitcher_EventState; // 0x730(0x8)
		UCommonWidgetSwitcherLegacy CommonWidgetSwitcher_Proximity; // 0x738(0x8)
		ULiveViolator_C LiveViolator; // 0x740(0x8)
		bool OverrideDoNotShowRound; // 0x748(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/ShowdownEventTileViolator.ShowdownEventTileViolator_C");
			return ret;
		}

		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D87675000
		void RefreshDataBP(); // Flags: Event|Protected|BlueprintEvent 0x15D87674E00
		void RefreshViolatorData(); // Flags: BlueprintCallable|BlueprintEvent 0x15D87674D00
		void ExecuteUbergraph_ShowdownEventTileViolator(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D87674F00
	};

}
