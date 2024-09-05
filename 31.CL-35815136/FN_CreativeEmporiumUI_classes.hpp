#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: CreativeEmporiumUI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class CreativeEmporiumUI.EmporiumBrowserFilterEntry
	// Inherited from UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x70 (0x1400 - 0x1390)
	class UEmporiumBrowserFilterEntry : public UCommonButtonBase	
	{
	public:
		FMulticastInlineDelegate OnFilterEnabled; // 0x1390(0x10)
		FMulticastInlineDelegate OnFilterSelected; // 0x13A0(0x10)
		FMulticastInlineDelegate OnFilterHovered; // 0x13B0(0x10)
		FMulticastInlineDelegate OnWidgetDestroyed; // 0x13C0(0x10)
		UCommonTextBlock* TextBlock_FilterName; // 0x13D0(0x8)
		bool bFilterActive; // 0x13D8(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x13D9(0x7) UNKNOWN PROPERTY
		UEmporiumBrowserTag* Tag; // 0x13E0(0x8)
		FText ButtonText; // 0x13E8(0x10)
		unsigned char UnknownData01_7[0x8]; // 0x13F8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CreativeEmporiumUI.EmporiumBrowserFilterEntry");
			return ret;
		}

		void UpdateItemCount(int32_t ItemCount); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateCheckMarkState(bool bIsChecked); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateButtonText(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751710CF8(relative to base address)
		void SetIsFilterActive(bool bInFilterActive); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751710610(relative to base address)
		bool IsFilterActive(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75170FCA8(relative to base address)
	};


	// Class CreativeEmporiumUI.EmporiumBrowserFiltersPanel
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x300 (0x5D8 - 0x2D8)
	class UEmporiumBrowserFiltersPanel : public UCommonUserWidget	
	{
	public:
		FMulticastInlineDelegate OnFilterChanged; // 0x2D8(0x10)
		FMulticastInlineDelegate OnSortChanged; // 0x2E8(0x10)
		FMulticastInlineDelegate OnSortPanelToggled; // 0x2F8(0x10)
		FMulticastInlineDelegate OnFocusChanged; // 0x308(0x10)
		FMulticastInlineDelegate OnCategoryActivated; // 0x318(0x10)
		FMulticastInlineDelegate OnCategoryFocused; // 0x328(0x10)
		unsigned char UnknownData00_6[0x18]; // 0x338(0x18) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnUpdateCategoryCounts; // 0x350(0x10)
		unsigned char UnknownData01_6[0x88]; // 0x360(0x88) UNKNOWN PROPERTY
		UClass* FilterSectionHeaderWidgetClass; // 0x3E8(0x8)
		UClass* FilterCategoryHeaderWidgetClass; // 0x3F0(0x8)
		UClass* FilterHomeHeaderWidgetClass; // 0x3F8(0x8)
		UClass* FilterEntryWidgetClass; // 0x400(0x8)
		TArray<FFortEmporiumSortEntry> SortEntries; // 0x408(0x10)
		TArray<FFortEmporiumFilterEntry> FilterEntries; // 0x418(0x10)
		TArray<FFortEmporiumPriceFilterEntry> PriceFilterEntries; // 0x428(0x10)
		TArray<FName> LicenseFilterEntries; // 0x438(0x10)
		FName DefaultCategoryFilter; // 0x448(0x4)
		EFortEmporiumItemTagFilterMode DefaultTagFilterMode; // 0x44C(0x1)
		unsigned char UnknownData02_6[0x53]; // 0x44D(0x53) UNKNOWN PROPERTY
		UScrollBox* ScrollBox_FilterScroll; // 0x4A0(0x8)
		UEmporiumBrowserFilterEntry* Button_All; // 0x4A8(0x8)
		UCommonButtonBase* Button_SortAndFilter; // 0x4B0(0x8)
		unsigned char UnknownData03_6[0x38]; // 0x4B8(0x38) UNKNOWN PROPERTY
		TWeakObjectPtr<UFortCreativeContentBrowserTabPanelBase*> LastSelectedTab; // 0x4F0(0x8)
		unsigned char UnknownData04_6[0xC8]; // 0x4F8(0xC8) UNKNOWN PROPERTY
		FDataTableRowHandle CycleSectionsInputActionRow; // 0x5C0(0x10)
		unsigned char UnknownData05_7[0x8]; // 0x5D0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CreativeEmporiumUI.EmporiumBrowserFiltersPanel");
			return ret;
		}

		void SortPanelToggled__DelegateSignature(); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SortChangedDelegate__DelegateSignature(); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetItemDetailTags(TArray<FName>& TagIDs); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751710710(relative to base address)
		void SetActiveCategory(FName CategoryID, bool bAllowCategoryModal); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751710318(relative to base address)
		void ResetSearch(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7517102F0(relative to base address)
		UWidget RefreshSideNavigationFocus(FName& OutFocusCategory); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnUpdateCategoryCountDisplay(FName& CategoryID, int32_t NumItems, bool bHideIfEmpty); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnUpdateActiveCategory(FName& CategoryID); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSetSearchVisible(bool bVisible); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSetSearchText(FText& NewSearchText); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSetSearchFocused(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSetPanelLayout(EFortEmporiumLayoutVersion LayoutVersion); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPopulateCategories(TArray<FName>& CategoryIDs); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnClearSearchProgress(float Progress); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UWidget NavigateToNextSection(bool bReverse); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF75170FD50(relative to base address)
		bool IsShowingCategoryModal(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F1F03E8(relative to base address)
		bool IsInFocusPath(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FCAF48C(relative to base address)
		void IncludeItemDetailTag(FName& TagID); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75170FB18(relative to base address)
		void HandleSortAndFilterClicked(); // Flags: Final|Native|Private, Memory Exec: 0x7FF75170F72C(relative to base address)
		void HandleShowAllEnabled(bool bShowAllItems, UObject* ListItemObject); // Flags: Final|Native|Public, Memory Exec: 0x7FF75170F5A4(relative to base address)
		void HandleSearchTextChanged(FText& Text); // Flags: Final|Native|Private|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75170F488(relative to base address)
		void HandleFilterSelected(bool bIsFilterEnabled, UEmporiumBrowserFilterEntry* Entry); // Flags: Final|Native|Private, Memory Exec: 0x7FF75170EC50(relative to base address)
		void HandleFilterEnabled(bool bIsFilterEnabled, UObject* ListItemObject); // Flags: Final|Native|Public, Memory Exec: 0x7FF75170E790(relative to base address)
		void HandleCategoryWidgetDestroyed(UObject* ListItemObject); // Flags: Final|Native|Private, Memory Exec: 0x7FF75170E4DC(relative to base address)
		void HandleCategoryExpansion(UObject* ListItemObject); // Flags: Final|Native|Private, Memory Exec: 0x7FF75170E3C4(relative to base address)
		void HandleCategoryButtonFocused(FName CategoryID); // Flags: Final|Native|Private|BlueprintCallable, Memory Exec: 0x7FF75170E344(relative to base address)
		void HandleCategoryButtonClicked(FName CategoryID); // Flags: Final|Native|Private|BlueprintCallable, Memory Exec: 0x7FF75170E22C(relative to base address)
		void HandleCategoryActivated(bool bIsExpanded, UObject* ListItemObject); // Flags: Final|Native|Private, Memory Exec: 0x7FF75170E0D8(relative to base address)
		int32_t GetNumFilterSectionWidgets(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75145FA9C(relative to base address)
		TArray GetItemDetailTags(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75170DEE8(relative to base address)
		TArray GetIncludedTags(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75170DECC(relative to base address)
		FSlateBrush GetIconForInputAction(bool& bOutFoundIcon, FDataTableRowHandle& InInputActionRow); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75170DDB8(relative to base address)
		FName GetHomeSectionID(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75170DDA0(relative to base address)
		FDataTableRowHandle GetFocusSearchInputAction(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF75170DCE4(relative to base address)
		int32_t GetFilterCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75170DCCC(relative to base address)
		FDataTableRowHandle GetClearSearchInputAction(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF75170D9D0(relative to base address)
		void FocusChangedDelegate__DelegateSignature(bool bIsFocused); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void FilterUpdateCategoryCountsDelegate__DelegateSignature(); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void FilterChangedDelegate__DelegateSignature(); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExcludeItemDetailTag(FName& TagID); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75170D780(relative to base address)
		void CategoryFocusedDelegate__DelegateSignature(FName CategoryID); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CategoryActivatedDelegate__DelegateSignature(FName CategoryID); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class CreativeEmporiumUI.FortEmporiumFilterCategoryHeader
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x38 (0x2E8 - 0x2B0)
	class UFortEmporiumFilterCategoryHeader : public UUserWidget	
	{
	public:
		FMulticastInlineDelegate OnCategoryActivated; // 0x2B0(0x10)
		FMulticastInlineDelegate OnWidgetDestroyed; // 0x2C0(0x10)
		FMulticastInlineDelegate OnExpandCategory; // 0x2D0(0x10)
		UEmporiumBrowserTag* Tag; // 0x2E0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CreativeEmporiumUI.FortEmporiumFilterCategoryHeader");
			return ret;
		}

		void UpdateCategoryCount(int32_t NewCount, bool bHideIfEmpty); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ShowUpperSpacer(bool bShow); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ShowCycleSectionPrompt(bool bShow); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ShowCategoryActive(bool bIsActive); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetSubcategoryCount(int32_t NewCount); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetCycleSectionIcon(FSlateBrush CycleSectionIcon); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetCategoryText(FText& NewButtonText); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		TArray GetSubcategoryWidgets(); // Flags: Native|Event|Public|BlueprintEvent|Const, Memory Exec: 0x7FF74C642A74(relative to base address)
		UCommonButtonBase GetCategoryButton(); // Flags: Event|Public|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExpandSection(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75170D80C(relative to base address)
		void ExpandCategory(bool bExpanded); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void EnableCategoryExpansion(bool bShow); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ClearSubcategoryWidgets(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AddSubcategoryWidget(UWidget* SubcategoryWidget); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ActivateCategory(bool bExpanded); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF75170CF64(relative to base address)
	};


	// Class CreativeEmporiumUI.FortEmporiumFiltersSubPanel
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x48 (0x2F8 - 0x2B0)
	class UFortEmporiumFiltersSubPanel : public UUserWidget	
	{
	public:
		FMulticastInlineDelegate OnFilterEnabled; // 0x2B0(0x10)
		FMulticastInlineDelegate OnShowAllEnabled; // 0x2C0(0x10)
		UClass* FilterEntryWidgetClass; // 0x2D0(0x8)
		UEmporiumBrowserFilterEntry* Button_All; // 0x2D8(0x8)
		UEmporiumBrowserFilterEntry* Button_LastSelected; // 0x2E0(0x8)
		UFortEmporiumItemListTabPanel* CachedItemTab; // 0x2E8(0x8)
		unsigned char UnknownData00_7[0x8]; // 0x2F0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CreativeEmporiumUI.FortEmporiumFiltersSubPanel");
			return ret;
		}

		void OnUpdateSubcategoryCount(FName& CategoryID, int32_t Count, bool bShowOnEmpty); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnUpdateFilterEntries(TArray<FName>& IncludedTags); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnFilterSelected(UEmporiumBrowserFilterEntry* SubcategoryWidget); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnAddSubcategoryWidget(UEmporiumBrowserFilterEntry* SubcategoryWidget); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleShowAllEnabled(bool bShowAllItems, UObject* ListItemObject); // Flags: Final|Native|Private, Memory Exec: 0x7FF75170F668(relative to base address)
		void HandleFilterSelected(bool bIsFilterEnabled, UEmporiumBrowserFilterEntry* Entry); // Flags: Final|Native|Private, Memory Exec: 0x7FF75170ED5C(relative to base address)
		void HandleFilterHovered(UEmporiumBrowserFilterEntry* Entry); // Flags: Final|Native|Private, Memory Exec: 0x7FF75170EB50(relative to base address)
		void HandleFilterEnabled(bool bIsFilterEnabled, UObject* ListItemObject); // Flags: Final|Native|Private, Memory Exec: 0x7FF75170EA8C(relative to base address)
		void ClearFilterWidgets(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class CreativeEmporiumUI.FortEmporiumHomeEntryObjectWrapper
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UFortEmporiumHomeEntryObjectWrapper : public UObject	
	{
	public:
		UFortEmporiumItemListTabPanel* TabPanel; // 0x28(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CreativeEmporiumUI.FortEmporiumHomeEntryObjectWrapper");
			return ret;
		}
	};


	// Class CreativeEmporiumUI.FortEmporiumHomeListEntry
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x228 (0x4D8 - 0x2B0)
	class UFortEmporiumHomeListEntry : public UUserWidget	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x2B0(0x8) UNKNOWN PROPERTY
		UFortEmporiumHomeListView* ParentView; // 0x2B8(0x8)
		unsigned char UnknownData01_6[0x48]; // 0x2C0(0x48) UNKNOWN PROPERTY
		int32_t MaxItemsToShow; // 0x308(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x30C(0x4) UNKNOWN PROPERTY
		UFortEmporiumItemListTabPanel* TabPanel; // 0x310(0x8)
		UCommonTextBlock* Text_CategoryLabel; // 0x318(0x8)
		UAthenaCreativeItemTileView* HomeListView_ItemOptions; // 0x320(0x8)
		unsigned char UnknownData03_7[0x1B0]; // 0x328(0x1B0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CreativeEmporiumUI.FortEmporiumHomeListEntry");
			return ret;
		}

		void UpdateWarningMessage(bool bShowMessage); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateOverflowDisplay(UAthenaCreativeItemTileButton* OverflowTile, int32_t OverflowCount); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool GetCollapseBorderPadFlagForCategory(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75170DA64(relative to base address)
		EFortItemCardSize GetCardSizeForCategory(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75170D904(relative to base address)
	};


	// Class CreativeEmporiumUI.FortEmporiumHomeListView
	// Inherited from UCommonListView -> UListView -> UListViewBase -> UWidget -> UVisual -> UObject
	// Size: 0x270 (0xDA0 - 0xB30)
	class UFortEmporiumHomeListView : public UCommonListView	
	{
	public:
		unsigned char UnknownData00_3[0xB0]; // 0xB30(0xB0) UNKNOWN PROPERTY
		TArray<UFortEmporiumItemListTabPanel*> TabPanelList; // 0xBE0(0x10)
		unsigned char UnknownData01_7[0x1B0]; // 0xBF0(0x1B0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CreativeEmporiumUI.FortEmporiumHomeListView");
			return ret;
		}

		UWidget GetFocusWidget(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF75170DD78(relative to base address)
	};


	// Class CreativeEmporiumUI.FortEmporiumHomeTabPanel
	// Inherited from UFortCreativeContentBrowserTabPanelBase -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x58 (0x488 - 0x430)
	class UFortEmporiumHomeTabPanel : public UFortCreativeContentBrowserTabPanelBase	
	{
	public:
		unsigned char UnknownData00_3[0x48]; // 0x430(0x48) UNKNOWN PROPERTY
		FName FeaturedItemTag; // 0x478(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x47C(0x4) UNKNOWN PROPERTY
		UFortEmporiumHomeListView* FortEmporiumHomeListView_Options; // 0x480(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CreativeEmporiumUI.FortEmporiumHomeTabPanel");
			return ret;
		}

		void OnSetPanelLayout(EFortEmporiumLayoutVersion LayoutVersion); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class CreativeEmporiumUI.FortEmporiumItem
	// Inherited from UFortItem -> UObject
	// Size: 0x8 (0xA8 - 0xA0)
	class UFortEmporiumItem : public UFortItem	
	{
	public:
		UFortEmporiumItemDefinition* ItemDefinition; // 0xA0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CreativeEmporiumUI.FortEmporiumItem");
			return ret;
		}
	};


	// Class CreativeEmporiumUI.FortEmporiumItemDefinition
	// Inherited from UFortItemDefinition -> UItemDefinitionBase -> UMcpItemDefinitionBase -> UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x108 (0x1B0 - 0xA8)
	class UFortEmporiumItemDefinition : public UFortItemDefinition	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0xA8(0x8) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnItemThumbnailDownloaded; // 0xB0(0x10)
		unsigned char UnknownData01_7[0xF0]; // 0xC0(0xF0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CreativeEmporiumUI.FortEmporiumItemDefinition");
			return ret;
		}

		FFortEmporiumItemData GetEmporiumItemData(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75170DCB0(relative to base address)
	};


	// Class CreativeEmporiumUI.FortEmporiumItemDetailsPanel
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x68 (0x340 - 0x2D8)
	class UFortEmporiumItemDetailsPanel : public UCommonUserWidget	
	{
	public:
		unsigned char UnknownData00_3[0x30]; // 0x2D8(0x30) UNKNOWN PROPERTY
		FDataTableRowHandle ItemDetailTagsInputRowHandle; // 0x308(0x10)
		unsigned char UnknownData01_6[0x8]; // 0x318(0x8) UNKNOWN PROPERTY
		UItemDefinitionBase* CachedItemDefinition; // 0x320(0x8)
		UCommonVisibilitySwitcher* Switcher_Details; // 0x328(0x8)
		UFortEmporiumItemInfo* ItemDetails; // 0x330(0x8)
		UAthenaInventoryItemInfo* LegacyItemDetails; // 0x338(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CreativeEmporiumUI.FortEmporiumItemDetailsPanel");
			return ret;
		}

		void UpdateItemDetailsDisplay(bool bShowItemDetails); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ToggleItemDetailsPanel(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SwitchItemDetailsPanel(bool bUseLegacy); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF75077F0AC(relative to base address)
		void ShowExtendedDataPanel(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetSpecialItemTagVisibility(FName& SpecialItemTag); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetItemToDetail(UFortItem* InItemToDetail, bool bUseLargeThumbnail, bool bAllowInteractiveTags); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7517107EC(relative to base address)
		void SetItemDetails(UFortItem* FortItem, bool bUseLargeThumbnail, bool bAllowInteractiveTags); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetActiveItemDetailTags(TArray<FName>& ActiveTags); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool IsShowingExtendedDataPanel(); // Flags: Native|Event|Protected|BlueprintEvent|Const, Memory Exec: 0x7FF748CDD424(relative to base address)
		bool IsShowingAdditionalButtons(); // Flags: Native|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF748CDD424(relative to base address)
		void HideExtendedDataPanel(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HideAdditionalButtons(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool HasLegacyItemDetailsPanel(); // Flags: Native|Event|Public|BlueprintEvent|Const, Memory Exec: 0x7FF748CDD424(relative to base address)
		void HandleItemTagSelected(FName TagID, bool bSelected); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF75170F0F8(relative to base address)
		TArray BP_GetSpecialItemTags(); // Flags: Event|Protected|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class CreativeEmporiumUI.FortEmporiumItemInfo
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x2E8 - 0x2D8)
	class UFortEmporiumItemInfo : public UCommonUserWidget	
	{
	public:
		TArray<FName> HiddenTags; // 0x2D8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CreativeEmporiumUI.FortEmporiumItemInfo");
			return ret;
		}

		void UpdateWithFortItem(UFortItem* Item, bool bAllowInteractiveTags); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ShowSelectItemTagsPrompt(bool bShowPrompt); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetTagFocus(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetSelectItemTagsPrompt(FText& Prompt); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetSelectItemTagsIcon(FSlateBrush SelectItemTagsIcon); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool HasFocusableTags(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class CreativeEmporiumUI.FortEmporiumCategoryEntry
	// Inherited from UObject
	// Size: 0x20 (0x48 - 0x28)
	class UFortEmporiumCategoryEntry : public UObject	
	{
	public:
		FString Path; // 0x28(0x10)
		FString Hash; // 0x38(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CreativeEmporiumUI.FortEmporiumCategoryEntry");
			return ret;
		}
	};


	// Class CreativeEmporiumUI.FortEmporiumItemListMenu
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x780 (0xB70 - 0x3F0)
	class UFortEmporiumItemListMenu : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData00_3[0x30]; // 0x3F0(0x30) UNKNOWN PROPERTY
		UClass* PanelDataClass; // 0x420(0x8)
		UDataTable* ItemListCategorySource; // 0x428(0x8)
		UFortCreativeItemListPanelData* ItemListPanelData; // 0x430(0x8)
		UClass* InventoryTabClass; // 0x438(0x8)
		UClass* LevelManagementTabClass; // 0x440(0x8)
		UClass* HomeTabClass; // 0x448(0x8)
		UClass* InventoryTabButton; // 0x450(0x8)
		TMap<FName, FText> Map_CreativeBetaTagNames; // 0x458(0x50)
		TMap<ECommonInputType, FFortEmporiumKeyEdgeMappings> Map_ToggleFilterFocusKeys; // 0x4A8(0x50)
		TMap<ECommonInputType, FFortEmporiumKeyEdgeMappings> Map_ToggleFilterSubPanelFocusKeys; // 0x4F8(0x50)
		TMap<ECommonInputType, FFortEmporiumKeyEdgeMappings> Map_CycleTagFilterModeModifierKeys; // 0x548(0x50)
		TMap<ECommonInputType, FFortEmporiumKeyEdgeMappings> Map_ClearTagFiltersModifierKeys; // 0x598(0x50)
		TMap<ECommonInputType, FFortEmporiumKeyEdgeMappings> Map_ToggleSidePanelDockingModifierKeys; // 0x5E8(0x50)
		FKey ToggleSidePanelDockingKey; // 0x638(0x18)
		FKey ToggleSubPanelMode; // 0x650(0x18)
		FDataTableRowHandle FocusSearchInputActionRow; // 0x668(0x10)
		unsigned char UnknownData01_6[0x8]; // 0x678(0x8) UNKNOWN PROPERTY
		FDataTableRowHandle ClearSearchInputActionRow; // 0x680(0x10)
		unsigned char UnknownData02_6[0x8]; // 0x690(0x8) UNKNOWN PROPERTY
		FDataTableRowHandle CycleSortInputActionRow; // 0x698(0x10)
		unsigned char UnknownData03_6[0x8]; // 0x6A8(0x8) UNKNOWN PROPERTY
		UFortEmporiumItemListTabPanel* ChestTabPanel; // 0x6B0(0x8)
		UFortCreativeLevelManagementTabPanel* LevelManagementTabPanel; // 0x6B8(0x8)
		UFortEmporiumHomeTabPanel* HomeTabPanel; // 0x6C0(0x8)
		UFortEmporiumItemListTabPanel* FabTabPanel; // 0x6C8(0x8)
		UFortEmporiumItemListTabPanel* SubItemsTabPanel; // 0x6D0(0x8)
		FName FabTabNameId; // 0x6D8(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x6DC(0x4) UNKNOWN PROPERTY
		FFortTabButtonLabelInfo TabButtonLabelInfo; // 0x6E0(0xF0)
		FAthenaMapScreenContainerTabInfo MapScreenContainerTabInfo; // 0x7D0(0x40)
		bool bIsDefaultActiveTab; // 0x810(0x1)
		bool bAddItemToInventoryOnEquip; // 0x811(0x1)
		bool bLoadItemsOnInitialized; // 0x812(0x1)
		unsigned char UnknownData05_6[0x1]; // 0x813(0x1) UNKNOWN PROPERTY
		int32_t LastUsedSlot; // 0x814(0x4)
		unsigned char UnknownData06_6[0x8]; // 0x818(0x8) UNKNOWN PROPERTY
		TMap<FName, UFortCreativeContentBrowserTabPanelBase*> TabMap; // 0x820(0x50)
		unsigned char UnknownData07_6[0x1B8]; // 0x870(0x1B8) UNKNOWN PROPERTY
		TArray<UFortEmporiumItemDefinition*> EmporiumItemDefinitionList; // 0xA28(0x10)
		unsigned char UnknownData08_6[0x18]; // 0xA38(0x18) UNKNOWN PROPERTY
		UCommonVisibilitySwitcher* Switcher_SidePanels; // 0xA50(0x8)
		UCommonVisibilitySwitcher* Switcher_Categories; // 0xA58(0x8)
		UWidgetSwitcher* Switcher_ItemTabWarnings; // 0xA60(0x8)
		UOverlay* Overlay_ChestEmpty; // 0xA68(0x8)
		UOverlay* Overlay_TabEmpty; // 0xA70(0x8)
		UOverlay* Overlay_DownloadingFabCategories; // 0xA78(0x8)
		UOverlay* Overlay_FabCategoriesNotLoaded; // 0xA80(0x8)
		UWidgetSwitcher* Switcher_CommandBar; // 0xA88(0x8)
		UOverlay* Overlay_ChestCommands; // 0xA90(0x8)
		UOverlay* Overlay_VendCommands; // 0xA98(0x8)
		UFortCreativeMenuQuickbar* MenuQuickbar_QuickBars; // 0xAA0(0x8)
		UCommonButtonBase* Button_ResetChest; // 0xAA8(0x8)
		UCommonButtonBase* Button_CreateChest; // 0xAB0(0x8)
		UCommonButtonBase* Button_AddToQuickBar; // 0xAB8(0x8)
		UCommonButtonBase* Button_OpenItem; // 0xAC0(0x8)
		UCommonButtonBase* Button_PlaceNow; // 0xAC8(0x8)
		UCommonButtonBase* Button_Equip; // 0xAD0(0x8)
		UCommonButtonBase* Button_AddToChest; // 0xAD8(0x8)
		UCommonButtonBase* Button_Drop; // 0xAE0(0x8)
		UCommonButtonBase* Button_CreateLlama; // 0xAE8(0x8)
		UCommonButtonBase* Button_RemoveFromChest; // 0xAF0(0x8)
		UOverlay* Overlay_SearchFilters; // 0xAF8(0x8)
		UCommonAnimatedSwitcher* Switcher_LeftPanel; // 0xB00(0x8)
		UEmporiumBrowserFiltersPanel* FiltersPanel; // 0xB08(0x8)
		UFortEmporiumFiltersSubPanel* FiltersSubPanel; // 0xB10(0x8)
		UFortEmporiumItemDetailsPanel* SubTabItemDetailsPanel; // 0xB18(0x8)
		UAthenaCustomizationPickerSortAndFilterBlade* Blade_SortAndFilter; // 0xB20(0x8)
		UFortEmporiumItemDetailsPanel* ItemDetailsSidePanel_DefaultSidePanel; // 0xB28(0x8)
		UCommonVisibilitySwitcher* Switcher_ProductPage; // 0xB30(0x8)
		UOverlay* Overlay_ItemBrowser; // 0xB38(0x8)
		UFortEmporiumItemDetailsPanel* ItemProductPagePanel; // 0xB40(0x8)
		UWidgetSwitcher* Switcher_InventoryPermission; // 0xB48(0x8)
		UOverlay* Overlay_EmporiumPanel; // 0xB50(0x8)
		UOverlay* Overlay_InventoryNotAllowed; // 0xB58(0x8)
		UOverlay* Overlay_EditorDisconnected; // 0xB60(0x8)
		UOverlay* Overlay_InitializingInventory; // 0xB68(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CreativeEmporiumUI.FortEmporiumItemListMenu");
			return ret;
		}

		void UpdatePermissionsDisplay(); // Flags: Final|Native|Private, Memory Exec: 0x7FF751710D20(relative to base address)
		void UpdateDetailsPanel(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751710D0C(relative to base address)
		void UpdateBackButtonText(bool bFilterFocus); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751710C78(relative to base address)
		void SwitchItemDetailsPanel(bool bUseLegacy); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751710BF8(relative to base address)
		void SpawnContainer(UClass* SupplyDropClass); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751710AC4(relative to base address)
		void SetSubTabOpened(UItemDefinitionBase* ItemDefinition); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7517109AC(relative to base address)
		void SetIsItemCommandsEnabled(bool bInIsItemCommandEnabled); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751710690(relative to base address)
		void SetActiveTab(UFortCreativeContentBrowserTabPanelBase* Tab, bool bCaptureFocus); // Flags: Final|Native|Private|BlueprintCallable, Memory Exec: 0x7FF7517103DC(relative to base address)
		void RefreshTabWarningState(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751710010(relative to base address)
		bool PlaceSelectionInMoveTool(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75170FFEC(relative to base address)
		bool OpenSelection(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75170FFC8(relative to base address)
		void OnUpdateTagFilterButton(EFortEmporiumItemTagFilterMode Mode); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnUpdateCommandBarVisibility(bool bShowBar); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnUpdateCategoryLabel(FText& SectionLabel, FText& CategoryLabel); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTabChanged(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTabAdded(UFortCreativeContentBrowserTabPanelBase* Tab); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSubPanelModeChanged(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSidePanelDockToggled(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnShowGridBlocker(bool bShow); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnShowCategoryModal(bool bShowModal); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool OnShouldAllowCommandBar(UUserWidget* FocusPathWidget, bool& bAllowCommandBar); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSetPanelLayout(EFortEmporiumLayoutVersion LayoutVersion); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSelectionOpened(UItemDefinitionBase* SelectedItemDefinition); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSearchFiltersVisibilityChanged(bool bIsVisible); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnQuickbarStateChanged(EFortContentBrowserQuickbarState State); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnItemsLoaded(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnItemEquipped(FFortItemEntry& EquippedItemEntry); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnFabItemQueryComplete(bool bSuccess, FString JsonString); // Flags: Final|Native|Private, Memory Exec: 0x7FF75170FED4(relative to base address)
		void OnFabCategoryListLoaded(bool bSuccess, FString JsonString); // Flags: Final|Native|Private, Memory Exec: 0x7FF75170FDE0(relative to base address)
		void OnExitSubTab(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCreativeQuickbarComponentLoaded(); // Flags: Final|Native|Public, Memory Exec: 0x7FF74FFC9C84(relative to base address)
		void OnContentRatingFilterChanged(); // Flags: Final|Native|Private, Memory Exec: 0x7FF75170F804(relative to base address)
		void OnBuiltInItemsLoaded(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnAnimateSidePanel(bool bIsRightPanel, bool bShow); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void NativeOnItemsRefreshed(); // Flags: Final|Native|Public, Memory Exec: 0x7FF75170FD3C(relative to base address)
		void NativeOnItemsLoaded(); // Flags: Final|Native|Public, Memory Exec: 0x7FF75170FD28(relative to base address)
		void NativeOnBuiltInItemsLoaded(); // Flags: Final|Native|Public, Memory Exec: 0x7FF75170FD14(relative to base address)
		void LoadFabItems(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75170FD00(relative to base address)
		bool IsSubTabOpened(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75170FCC0(relative to base address)
		bool IsSidePanelOpen(bool bRightPanel); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void InitializeTabs(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75170FBB8(relative to base address)
		void InitializeFabTab(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75170FBA4(relative to base address)
		void HandleUpdateCategoryCounts(); // Flags: Final|Native|Private, Memory Exec: 0x7FF75170FB04(relative to base address)
		void HandleTabSortButtonClicked(); // Flags: Final|Native|Private, Memory Exec: 0x7FF75170FAF0(relative to base address)
		void HandleTabSelected(FName TabID, bool bCaptureFocus); // Flags: Final|Native|Private|BlueprintCallable, Memory Exec: 0x7FF75170FA2C(relative to base address)
		void HandleTabItemDetailClicked(FName& TagID); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF75170F9A0(relative to base address)
		void HandleSubFilterShowAllEnabled(bool bIsFilterEnabled, UObject* ListItemObject); // Flags: Final|Native|Private, Memory Exec: 0x7FF75170F8DC(relative to base address)
		void HandleSubFilterEnabled(bool bIsFilterEnabled, UObject* ListItemObject); // Flags: Final|Native|Private, Memory Exec: 0x7FF75170F818(relative to base address)
		void HandleSortChanged(); // Flags: Final|Native|Private, Memory Exec: 0x7FF75170F804(relative to base address)
		void HandleSortButtonClicked(FName SortNameId, UCommonButtonBase* NewButton); // Flags: Final|Native|Private, Memory Exec: 0x7FF75170F740(relative to base address)
		void HandleSelectionChanged(UFortCreativeContentBrowserTabPanelBase* Tab); // Flags: Final|Native|Private, Memory Exec: 0x7FF75170F524(relative to base address)
		void HandleQuickbarStateChanged(EFortContentBrowserQuickbarState State); // Flags: Final|Native|Private, Memory Exec: 0x7FF75170F408(relative to base address)
		void HandleQuickbarPanelIsFocused(bool bIsFocused); // Flags: Final|Native|Private, Memory Exec: 0x7FF75170F388(relative to base address)
		void HandleModalHitBlockerClicked(); // Flags: Final|Native|Private|BlueprintCallable, Memory Exec: 0x7FF75170F34C(relative to base address)
		void HandleItemThumbnailDownloaded(UFortEmporiumItemDefinition* ItemDefinition); // Flags: Final|Native|Private, Memory Exec: 0x7FF75170F2CC(relative to base address)
		void HandleItemTagSelected(FName& TagID, bool bSelected); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF75170F1BC(relative to base address)
		void HandleItemDoubleClicked(FFortItemEntry& ItemEntry); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF75170F040(relative to base address)
		void HandleItemClicked(FFortItemEntry& ItemEntry); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF75170EEEC(relative to base address)
		void HandleHomeItemClicked(UFortEmporiumItemListTabPanel* ItemTab); // Flags: Final|Native|Private, Memory Exec: 0x7FF75170EE64(relative to base address)
		void HandleGlobalSortPanelToggle(); // Flags: Final|Native|Private, Memory Exec: 0x7FF75170EE50(relative to base address)
		void HandleFilterPanelIsFocused(bool bIsFocused); // Flags: Final|Native|Private, Memory Exec: 0x7FF75170EBD0(relative to base address)
		void HandleFilterChanged(); // Flags: Final|Native|Private, Memory Exec: 0x7FF75170E77C(relative to base address)
		void HandleFilterButtonClicked(FName FilterNameId, UCommonButtonBase* NewButton); // Flags: Final|Native|Private, Memory Exec: 0x7FF75170E6B8(relative to base address)
		void HandleEquipItem(FFortItemEntry& ItemEntry); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF75170E5F4(relative to base address)
		void HandleChestItemCountChanged(int32_t Count); // Flags: Final|Native|Private, Memory Exec: 0x7FF75170E574(relative to base address)
		void HandleCategoryFocused(FName CategoryID); // Flags: Final|Native|Private, Memory Exec: 0x7FF75170E45C(relative to base address)
		void HandleCategoryButtonClicked(FName& CategoryID); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF75170E2B8(relative to base address)
		void HandleCategoryActivated(FName CategoryID); // Flags: Final|Native|Private, Memory Exec: 0x7FF75170E1AC(relative to base address)
		void HandleAddSelectionToMoveToolComplete(); // Flags: Final|Native|Private, Memory Exec: 0x7FF75170E0C4(relative to base address)
		UItemDefinitionBase GetSubTabSelectedItemDefinition(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75170DFD8(relative to base address)
		FName GetLastSelectedTabName(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75170DF04(relative to base address)
		UFortCreativeContentBrowserTabPanelBase GetCurrentTab(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75170DC8C(relative to base address)
		FFortItemEntry GetCurrentSelection(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75170DC28(relative to base address)
		void FocusSidePanel(bool bIsRightPanel, bool bFocus); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF75170D840(relative to base address)
		bool EquipSelection(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75170D75C(relative to base address)
		bool EquipItem(FFortItemEntry& ItemEntry); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75170D694(relative to base address)
		bool DropItem(FFortItemEntry& SelectedItem); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75170D5CC(relative to base address)
		void CycleTagFilterMode(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF75170D5B8(relative to base address)
		bool CanEquip(FFortItemEntry& SelectedItem); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75170D490(relative to base address)
		bool CanDropItem(FFortItemEntry& SelectedItem); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75170D3C8(relative to base address)
		bool CanAddToChest(FFortItemEntry& SelectedItem); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75170D300(relative to base address)
		bool AddSelectionToQuickBar(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75170D1C8(relative to base address)
	};


	// Class CreativeEmporiumUI.FortEmporiumItemListTabPanel
	// Inherited from UFortCreativeContentBrowserTabPanelBase -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x418 (0x848 - 0x430)
	class UFortEmporiumItemListTabPanel : public UFortCreativeContentBrowserTabPanelBase	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x430(0x8) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnSourceItemCountChanged; // 0x438(0x10)
		FMulticastInlineDelegate OnItemClickedDelegate; // 0x448(0x10)
		FMulticastInlineDelegate OnItemDoubleClickedDelegate; // 0x458(0x10)
		unsigned char UnknownData01_6[0x30]; // 0x468(0x30) UNKNOWN PROPERTY
		UAthenaCreativeItemTileView* CreativeTileView_ItemOptions; // 0x498(0x8)
		UCommonButtonBase* Button_Sort; // 0x4A0(0x8)
		FFortItemEntry CurrentItemEntry; // 0x4A8(0x1A8)
		FMulticastInlineDelegate OnItemCountChanged; // 0x650(0x10)
		TArray<FFortItemEntry> Items; // 0x660(0x10)
		TArray<FFortItemEntry> SourceItems; // 0x670(0x10)
		unsigned char UnknownData02_6[0x1B0]; // 0x680(0x1B0) UNKNOWN PROPERTY
		UFortEmporiumItemListMenu* EmporiumItemListMenuParent; // 0x830(0x8)
		unsigned char UnknownData03_7[0x10]; // 0x838(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CreativeEmporiumUI.FortEmporiumItemListTabPanel");
			return ret;
		}

		void UpdateTabHeader(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateSortButton(FText& SortType); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ShowTopButtonBar(bool bShow); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool ShowLegacyItemDetailsPanel(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751710AAC(relative to base address)
		void SetActiveItemDetailTags(TArray<FName>& TagIDs); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RestoreLastSelection(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751710304(relative to base address)
		void RemoveSelectedItem(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751710024(relative to base address)
		void OnSetPanelLayout(EFortEmporiumLayoutVersion LayoutVersion); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ItemEquipped(FFortItemEntry& Item); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool IsSubTabOpened(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75170FCD8(relative to base address)
		bool IsEmpty(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF75170FC8C(relative to base address)
		void HandleItemDetailTagSelected(FName& TagID); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75170EFB0(relative to base address)
		UItemDefinitionBase GetSubTabSelectedItemDefinition(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75170E000(relative to base address)
		bool GetCollapseBorderPadFlagForCategory(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75170DA8C(relative to base address)
		EFortItemCardSize GetCardSizeForCategory(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75170D924(relative to base address)
		void FocusCurrentSelection(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ClearFilteredItems(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75170D5A4(relative to base address)
		void ClearAllItems(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75170D590(relative to base address)
		bool CanPlayerCreateInVolume(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75170D558(relative to base address)
		void AddItemToSource(FFortItemEntry& ItemToAdd); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75170D0C4(relative to base address)
		void AddItem(FFortItemEntry& ItemToAdd); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75170D000(relative to base address)
	};


	// Class CreativeEmporiumUI.EmporiumBrowserTag
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UEmporiumBrowserTag : public UObject	
	{
	public:
		FName TagID; // 0x28(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CreativeEmporiumUI.EmporiumBrowserTag");
			return ret;
		}
	};


	// Class CreativeEmporiumUI.FortEmporiumUtilities
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortEmporiumUtilities : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CreativeEmporiumUI.FortEmporiumUtilities");
			return ret;
		}

		TArray SplitTagID(FName& TagID); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751710B58(relative to base address)
		bool ShouldShowLayoutVersion2FTUE(UUserWidget* ContextWidget); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751710A2C(relative to base address)
		void SetLayoutVersion(UUserWidget* ContextWidget, EFortEmporiumLayoutVersion NewLayoutVersion); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7517108F8(relative to base address)
		void SetHasSeenCreativeContentBrowserV2FTUE(UUserWidget* ContextWidget); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7517105A0(relative to base address)
		void RequestLicenseText(EFortEmporiumItemLicense License, FDelegateProperty& Callback); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751710218(relative to base address)
		void RequestJSON(UObject* WorldContextObject, FUniqueNetIdRepl& UniqueNetId, FString JSONURL, FDelegateProperty& Callback); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751710038(relative to base address)
		bool IsCreativeBetaTag(FName& TagID); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF75170FBCC(relative to base address)
		FText GetTextFromEmporiumLicense(EFortEmporiumItemLicense License); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF75170E03C(relative to base address)
		FName GetShowAllButtonID(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF75170DFC0(relative to base address)
		EFortEmporiumLayoutVersion GetLayoutVersion(UUserWidget* ContextWidget); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF75170DF40(relative to base address)
		FText GetCreativeTagLabel(FName& TagID, bool& bOutIsBeta); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF75170DB38(relative to base address)
		TArray GetCreativeTagIDs(UItemDefinitionBase* ItemDefinition); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF75170DAA4(relative to base address)
		FText GetCategoryDisplayName(FName& CategoryID); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF75170D93C(relative to base address)
		bool BP_GetCategoryHierarchyEntry(FName& CategoryID, FFortEmporiumFilterCategory& OutFoundCategory); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF75170D1EC(relative to base address)
	};

}
