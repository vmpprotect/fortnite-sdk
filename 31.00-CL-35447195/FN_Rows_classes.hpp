#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: Rows
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class /DiscoveryBrowser/Rows/WBP_Row_Header.WBP_Row_Header_C
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x300 - 0x2E0)
	class UWBP_Row_Header_C : public UCommonUserWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2E0(0x8)
		UNamedSlot Slot_HeaderExtraContent; // 0x2E8(0x8)
		UCommonTextBlock SubText_HeaderRow; // 0x2F0(0x8)
		UCommonTextBlock Text_HeaderRow; // 0x2F8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/Rows/WBP_Row_Header.WBP_Row_Header_C");
			return ret;
		}

		void SetSubHeaderText(FText SubHeaderText); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D5F3B0B00
		void SetHeaderText(FText HeaderText); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D5F3B0C00
		void ExecuteUbergraph_WBP_Row_Header(int32_t EntryPoint); // Flags: Final 0x15D5F3B0D00
	};


	// Class /DiscoveryBrowser/Rows/WBP_Row_PanelList.WBP_Row_PanelList_C
	// Inherited from UFortPolymorphicTileView -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x60 (0x460 - 0x400)
	class UWBP_Row_PanelList_C : public UFortPolymorphicTileView	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x8)
		UOverlay OverlayRoot; // 0x408(0x8)
		USizeBox SizeBox_CapMaxRows; // 0x410(0x8)
		UWBP_Row_Header_C WBP_Row_Header; // 0x418(0x8)
		int32_t MaxRowsCached; // 0x420(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x424(0x4) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnTileFocusGained; // 0x428(0x10)
		bool RowHasViewAll; // 0x438(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x439(0x3) UNKNOWN PROPERTY
		int32_t OuterItemRowIndex; // 0x43C(0x4)
		bool TilesHandleTheirOwnStartVisibilityImpression; // 0x440(0x1)
		bool UseFocusToTriggerOutlineVisuals; // 0x441(0x1)
		unsigned char UnknownData05_6[0x6]; // 0x442(0x6) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnMaxRowsSet; // 0x448(0x10)
		UFortDiscoverItemSelectorBase OverrideItemSelector; // 0x458(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/Rows/WBP_Row_PanelList.WBP_Row_PanelList_C");
			return ret;
		}

		void RefreshAfterMaxRowsSet(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB6140700
		void GetNumDisplayedRows(int32_t& DisplayedRows); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15DB6085A00
		void UpdateViewAllTiles(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15DB6087800
		void UpdateBaseTileProperties(int32_t ItemIndex, UWBP_Discover_Tile_Base_C TileBaseWidget); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB608D500
		void UpdateTileViewLayout(UWBP_Discover_Tile_Base_C TileBaseWidget); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB6084D00
		void SetHasViewAll(bool ViewModelHasViewAll); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB6088000
		UClass GetDesiredEntryClassForItem(UObject Item); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15DB6085100
		void SetMaxVisibleRows(int32_t MaxRows); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB6086200
		void BndEvt__WBP_Row_PanelList_FortCommonTileView_91_K2Node_ComponentBoundEvent_0_OnListEntryGeneratedDynamic__DelegateSignature(UUserWidget Widget); // Flags: BlueprintEvent 0x15DB6141600
		void OnItemFocused(UWBP_IslandTile_Minimal_C FocusedItem); // Flags: BlueprintCallable|BlueprintEvent 0x15DB608A500
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15DB608CF00
		void BndEvt__WBP_Row_PolyTileList_TileView_K2Node_ComponentBoundEvent_0_OnListEntryInitializedDynamic__DelegateSignature(UObject Item, UUserWidget Widget); // Flags: BlueprintEvent 0x15DB6148700
		void OnListItemObjectSet(UObject ListItemObject); // Flags: Event|Protected|BlueprintEvent 0x15DB608FA00
		void BP_OnItemSelectionChanged(bool bIsSelected); // Flags: Event|Protected|BlueprintEvent 0x15DB614A200
		void OnCreatorItemFocusGained(UWBP_CreatorTile_C FocusedItem); // Flags: BlueprintCallable|BlueprintEvent 0x15DB608E200
		void BP_OnItemExpansionChanged(bool bIsExpanded); // Flags: Event|Protected|BlueprintEvent 0x15DB608E600
		void BP_OnEntryReleased(); // Flags: Event|Protected|BlueprintEvent 0x15DB6085300
		void BndEvt__WBP_Row_PanelList_TileView_K2Node_ComponentBoundEvent_1_OnListViewScrolledDynamic__DelegateSignature(float ItemOffset, float DistanceRemaining); // Flags: BlueprintEvent 0x15DB6086100
		void ExecuteUbergraph_WBP_Row_PanelList(int32_t EntryPoint); // Flags: Final 0x15DB6083100
		void OnMaxRowsSet__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15DB6084700
		void OnTileFocusGained__DelegateSignature(int32_t ItemFocused); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent 0x15DB6087D00
	};

}
