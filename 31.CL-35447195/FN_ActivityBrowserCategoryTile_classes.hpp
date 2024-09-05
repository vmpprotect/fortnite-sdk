#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: ActivityBrowserCategoryTile
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class /DiscoveryBrowser/ActivityBrowserCategoryTile.ActivityBrowserCategoryTile_C
	// Inherited from UFortActivityCategoryTile -> UFortActivityTileViewTileBase -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x18 (0x1448 - 0x1430)
	class UActivityBrowserCategoryTile_C : public UFortActivityCategoryTile	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x1430(0x8)
		UWidgetAnimation TileHover; // 0x1438(0x8)
		UImage Image_Tile; // 0x1440(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/ActivityBrowserCategoryTile.ActivityBrowserCategoryTile_C");
			return ret;
		}

		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D5F92C700
		void OnTileActiveSet(bool bIsTileActive); // Flags: Event|Protected|BlueprintEvent 0x15D5F92FE00
		void BP_OnEntryReleased(); // Flags: Event|Protected|BlueprintEvent 0x15D5F92C800
		void ExecuteUbergraph_ActivityBrowserCategoryTile(int32_t EntryPoint); // Flags: Final 0x15D5F92FF00
	};

}
