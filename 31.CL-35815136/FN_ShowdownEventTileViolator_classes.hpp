#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: ShowdownEventTileViolator
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /Game/ShowdownEventTileViolator.ShowdownEventTileViolator_C
	// Inherited from UFortShowdownDetailView -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x39 (0x741 - 0x708)
	class UShowdownEventTileViolator_C : public UFortShowdownDetailView	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x708(0x8)
		UWidgetAnimation* Focus; // 0x710(0x8)
		UCommonTextBlock* CommonTextBlock; // 0x718(0x8)
		UCommonTextBlock* CommonTextBlock_RoundNumber; // 0x720(0x8)
		UCommonWidgetSwitcherLegacy* CommonWidgetSwitcher_EventState; // 0x728(0x8)
		UCommonWidgetSwitcherLegacy* CommonWidgetSwitcher_Proximity; // 0x730(0x8)
		ULiveViolator_C* LiveViolator; // 0x738(0x8)
		bool OverrideDoNotShowRound; // 0x740(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/ShowdownEventTileViolator.ShowdownEventTileViolator_C");
			return ret;
		}

		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RefreshDataBP(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RefreshViolatorData(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_ShowdownEventTileViolator(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
