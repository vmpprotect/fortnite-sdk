#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: WBP_Discovery_BlankTileEntry
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class /DiscoveryBrowser/WBP_Discovery_BlankTileEntry.WBP_Discovery_BlankTileEntry_C
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x2C0 - 0x2B8)
	class UWBP_Discovery_BlankTileEntry_C : public UUserWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2B8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/WBP_Discovery_BlankTileEntry.WBP_Discovery_BlankTileEntry_C");
			return ret;
		}

		void BP_OnEntryReleased(); // Flags: Event|Protected|BlueprintEvent 0x15D5DC7E900
		void BP_OnItemExpansionChanged(bool bIsExpanded); // Flags: Event|Protected|BlueprintEvent 0x15D5DC7AB00
		void BP_OnItemSelectionChanged(bool bIsSelected); // Flags: Event|Protected|BlueprintEvent 0x15D5DC7E800
		void ExecuteUbergraph_WBP_Discovery_BlankTileEntry(int32_t EntryPoint); // Flags: Final 0x15D5DC7AA00
	};

}
