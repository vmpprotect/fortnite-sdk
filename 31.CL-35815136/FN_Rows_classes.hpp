#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: Rows
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /DiscoveryBrowser/Rows/WBP_Row_PanelList.WBP_Row_PanelList_C
	// Inherited from UFortPolymorphicTileView -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x68 (0x460 - 0x3F8)
	class UWBP_Row_PanelList_C : public UFortPolymorphicTileView	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x3F8(0x8)
		UOverlay* OverlayRoot; // 0x400(0x8)
		USizeBox* SizeBox_CapMaxRows; // 0x408(0x8)
		UWBP_Row_Header_C* WBP_Row_Header; // 0x410(0x8)
		int32_t MaxRowsCached; // 0x418(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x41C(0x4) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnTileFocusGained; // 0x420(0x10)
		bool RowHasViewAll; // 0x430(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x431(0x3) UNKNOWN PROPERTY
		int32_t OuterItemRowIndex; // 0x434(0x4)
		bool TilesHandleTheirOwnStartVisibilityImpression; // 0x438(0x1)
		bool UseFocusToTriggerOutlineVisuals; // 0x439(0x1)
		unsigned char UnknownData02_6[0x6]; // 0x43A(0x6) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnMaxRowsSet; // 0x440(0x10)
		UFortDiscoverItemSelectorBase* OverrideItemSelector; // 0x450(0x8)
		UWBP_Row_Poly_TileStackWrapper_C* Row_Poly_Wrapper_Parent; // 0x458(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/Rows/WBP_Row_PanelList.WBP_Row_PanelList_C");
			return ret;
		}

		void RefreshAfterMaxRowsSet(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetNumDisplayedRows(int32_t& DisplayedRows); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateViewAllTiles(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateBaseTileProperties(int32_t ItemIndex, UWBP_Discover_Tile_Base_C* TileBaseWidget); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateTileViewLayout(UWBP_Discover_Tile_Base_C* TileBaseWidget); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetHasViewAll(bool ViewModelHasViewAll); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UClass GetDesiredEntryClassForItem(UObject* Item); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetMaxVisibleRows(int32_t MaxRows); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__WBP_Row_PanelList_FortCommonTileView_91_K2Node_ComponentBoundEvent_0_OnListEntryGeneratedDynamic__DelegateSignature(UUserWidget* Widget); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnItemFocused(UWBP_IslandTile_Minimal_C* FocusedItem); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__WBP_Row_PolyTileList_TileView_K2Node_ComponentBoundEvent_0_OnListEntryInitializedDynamic__DelegateSignature(UObject* Item, UUserWidget* Widget); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnListItemObjectSet(UObject* ListItemObject); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnItemSelectionChanged(bool bIsSelected); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCreatorItemFocusGained(UWBP_CreatorTile_C* FocusedItem); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnItemExpansionChanged(bool bIsExpanded); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnEntryReleased(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__WBP_Row_PanelList_TileView_K2Node_ComponentBoundEvent_1_OnListViewScrolledDynamic__DelegateSignature(float ItemOffset, float DistanceRemaining); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_Row_PanelList(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnMaxRowsSet__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTileFocusGained__DelegateSignature(int32_t ItemFocused); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /DiscoveryBrowser/Rows/WBP_Row_Poly_TileStackWrapper.WBP_Row_Poly_TileStackWrapper_C
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x38 (0x310 - 0x2D8)
	class UWBP_Row_Poly_TileStackWrapper_C : public UCommonUserWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2D8(0x8)
		UFortDiscoverProviderViewModel* FortDiscoverProviderViewModel; // 0x2E0(0x8)
		UWBP_Row_PanelList_C* WBP_Row_PanelList; // 0x2E8(0x8)
		FMulticastInlineDelegate OnAdjustOuterListScrollOffset; // 0x2F0(0x10)
		FMulticastInlineDelegate OnNavigateToNewOuterRow; // 0x300(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/Rows/WBP_Row_Poly_TileStackWrapper.WBP_Row_Poly_TileStackWrapper_C");
			return ret;
		}

		void SetFortDiscoverProviderViewModel(UFortDiscoverProviderViewModel* ViewModel); // Flags: Final|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void DoCustomBoundaryNavigation(EUINavigation Navigation); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetSelectedSubRowIndex(int32_t& SelectedSubRowZeroBased); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPrimaryContentPushed_0B22D1104EF6329EC824CEBB039486F1(UCommonActivatableWidget* ActivatableWidget); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnListItemObjectSet(UObject* ListItemObject); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnItemSelectionChanged(bool bIsSelected); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnItemExpansionChanged(bool bIsExpanded); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnItemFocused(int32_t ItemFocused); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnEntryReleased(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnItemHovered(UObject* Item, bool bIsHovered); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Open View All Activity Modal(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_Row_Poly_TileStackWrapper(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnNavigateToNewOuterRow__DelegateSignature(bool IsDirectionUp, int32_t PreviousSubrowSelectedIndex, int32_t PreviousNumItemsPerSubrow); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnAdjustOuterListScrollOffset__DelegateSignature(int32_t SubRowIndex); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /DiscoveryBrowser/Rows/WBP_Row_Header.WBP_Row_Header_C
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x18 (0x2F0 - 0x2D8)
	class UWBP_Row_Header_C : public UCommonUserWidget	
	{
	public:
		UNamedSlot* Slot_HeaderExtraContent; // 0x2D8(0x8)
		UCommonTextBlock* SubText_HeaderRow; // 0x2E0(0x8)
		UCommonTextBlock* Text_HeaderRow; // 0x2E8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/Rows/WBP_Row_Header.WBP_Row_Header_C");
			return ret;
		}

		void SetSubHeaderText(FText SubHeaderText); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetHeaderText(FText HeaderText); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
