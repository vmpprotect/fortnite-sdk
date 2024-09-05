#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: WBP_Discovery_BlankTileEntry_RoundedCorners
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /DiscoveryBrowser/WBP_Discovery_BlankTileEntry_RoundedCorners.WBP_Discovery_BlankTileEntry_RoundedCorners_C
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x2C0 - 0x2B0)
	class UWBP_Discovery_BlankTileEntry_RoundedCorners_C : public UUserWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2B0(0x8)
		UImage* Image; // 0x2B8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/WBP_Discovery_BlankTileEntry_RoundedCorners.WBP_Discovery_BlankTileEntry_RoundedCorners_C");
			return ret;
		}

		void BP_OnEntryReleased(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnItemExpansionChanged(bool bIsExpanded); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnItemSelectionChanged(bool bIsSelected); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_Discovery_BlankTileEntry_RoundedCorners(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
