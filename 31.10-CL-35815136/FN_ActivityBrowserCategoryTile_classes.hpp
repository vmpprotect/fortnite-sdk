#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: ActivityBrowserCategoryTile
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /DiscoveryBrowser/ActivityBrowserCategoryTile.ActivityBrowserCategoryTile_C
	// Inherited from UFortActivityCategoryTile -> UFortActivityTileViewTileBase -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x18 (0x1448 - 0x1430)
	class UActivityBrowserCategoryTile_C : public UFortActivityCategoryTile	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x1430(0x8)
		UWidgetAnimation* TileHover; // 0x1438(0x8)
		UImage* Image_Tile; // 0x1440(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/ActivityBrowserCategoryTile.ActivityBrowserCategoryTile_C");
			return ret;
		}

		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTileActiveSet(bool bIsTileActive); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnEntryReleased(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_ActivityBrowserCategoryTile(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
