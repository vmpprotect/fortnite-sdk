#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: CreativeEmporiumUI
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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
		UCommonTextBlock TextBlock_FilterName; // 0x13D0(0x8)
		bool bFilterActive; // 0x13D8(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x13D9(0x7) UNKNOWN PROPERTY
		UEmporiumBrowserTag tag; // 0x13E0(0x8)
		FText ButtonText; // 0x13E8(0x10)
		unsigned char UnknownData03_7[0x8]; // 0x13F8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CreativeEmporiumUI.EmporiumBrowserFilterEntry");
			return ret;
		}

		void UpdateItemCount(int32_t ItemCount); // Flags: Event|Public|BlueprintCallable|BlueprintEvent 0x7FF414D8E580
		void UpdateCheckMarkState(bool bIsChecked); // Flags: Event|Public|BlueprintCallable|BlueprintEvent 0x7FF414D8E4A0
		void UpdateButtonText(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D8E3C0
		void SetIsFilterActive(bool bInFilterActive); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D8E2E0
		bool IsFilterActive(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D8E200
	};


	// Class CreativeEmporiumUI.EmporiumBrowserFiltersPanel
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x300 (0x5E0 - 0x2E0)
	class UEmporiumBrowserFiltersPanel : public UCommonUserWidget	
	{
	public:
		FMulticastInlineDelegate OnFilterChanged; // 0x2E0(0x10)
		FMulticastInlineDelegate OnSortChanged; // 0x2F0(0x10)
		FMulticastInlineDelegate OnSortPanelToggled; // 0x300(0x10)
		FMulticastInlineDelegate OnFocusChanged; // 0x310(0x10)
		FMulticastInlineDelegate OnCategoryActivated; // 0x320(0x10)
		FMulticastInlineDelegate OnCategoryFocused; // 0x330(0x10)
		unsigned char UnknownData06_6[0x18]; // 0x340(0x18) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnUpdateCategoryCounts; // 0x358(0x10)
		unsigned char UnknownData07_6[0x88]; // 0x368(0x88) UNKNOWN PROPERTY
		UClass FilterSectionHeaderWidgetClass; // 0x3F0(0x8)
		UClass FilterCategoryHeaderWidgetClass; // 0x3F8(0x8)
		UClass FilterHomeHeaderWidgetClass; // 0x400(0x8)
		UClass FilterEntryWidgetClass; // 0x408(0x8)
		TArray SortEntries; // 0x410(0x10)
		TArray FilterEntries; // 0x420(0x10)
		TArray PriceFilterEntries; // 0x430(0x10)
		TArray LicenseFilterEntries; // 0x440(0x10)
		FName DefaultCategoryFilter; // 0x450(0x4)
		EFortEmporiumItemTagFilterMode DefaultTagFilterMode; // 0x454(0x1)
		unsigned char UnknownData08_6[0x53]; // 0x455(0x53) UNKNOWN PROPERTY
		UScrollBox ScrollBox_FilterScroll; // 0x4A8(0x8)
		UEmporiumBrowserFilterEntry Button_All; // 0x4B0(0x8)
		UCommonButtonBase Button_SortAndFilter; // 0x4B8(0x8)
		unsigned char UnknownData09_6[0x38]; // 0x4C0(0x38) UNKNOWN PROPERTY
		TWeakObjectPtr LastSelectedTab; // 0x4F8(0x8)
		unsigned char UnknownData10_6[0xC8]; // 0x500(0xC8) UNKNOWN PROPERTY
		FDataTableRowHandle CycleSectionsInputActionRow; // 0x5C8(0x10)
		unsigned char UnknownData11_7[0x8]; // 0x5D8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CreativeEmporiumUI.EmporiumBrowserFiltersPanel");
			return ret;
		}

		void SortPanelToggled__DelegateSignature(); // Flags: MulticastDelegate|Public|Delegate 0x7FF4140B2C88
		void SortChangedDelegate__DelegateSignature(); // Flags: MulticastDelegate|Public|Delegate 0x7FF4140B2BA8
		void SetItemDetailTags(TArray& TagIDs); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF4140B2AC8
		void SetActiveCategory(FName CategoryID, bool bAllowCategoryModal); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4140B29E8
		void ResetSearch(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4140B2908
		UWidget RefreshSideNavigationFocus(FName& OutFocusCategory); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF4140B2828
		void OnUpdateCategoryCountDisplay(FName& CategoryID, int32_t NumItems, bool bHideIfEmpty); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF4140B2748
		void OnUpdateActiveCategory(FName& CategoryID); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF4140B2668
		void OnSetSearchVisible(bool bVisible); // Flags: Event|Protected|BlueprintEvent 0x7FF4140B2588
		void OnSetSearchText(FText& NewSearchText); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF4140B24A8
		void OnSetSearchFocused(); // Flags: Event|Protected|BlueprintEvent 0x7FF4140B23C8
		void OnSetPanelLayout(EFortEmporiumLayoutVersion LayoutVersion); // Flags: Event|Public|BlueprintEvent 0x7FF4140B2280
		void OnPopulateCategories(TArray& CategoryIDs); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF4140B21A0
		void OnClearSearchProgress(float Progress); // Flags: Event|Protected|BlueprintEvent 0x7FF4140B20C0
		UWidget NavigateToNextSection(bool bReverse); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF4140B1FE0
		bool IsShowingCategoryModal(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140B1F00
		bool IsInFocusPath(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140B1E20
		void IncludeItemDetailTag(FName& TagID); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF4140B1D40
		void HandleSortAndFilterClicked(); // Flags: Final|Native|Private 0x7FF4140B1C60
		void HandleShowAllEnabled(bool bShowAllItems, UObject ListItemObject); // Flags: Final|Native|Public 0x7FF4140B1B80
		void HandleSearchTextChanged(FText& Text); // Flags: Final|Native|Private|HasOutParms|BlueprintCallable 0x7FF4140B1AA0
		void HandleFilterSelected(bool bIsFilterEnabled, UEmporiumBrowserFilterEntry Entry); // Flags: Final|Native|Private 0x7FF4140B19C0
		void HandleFilterEnabled(bool bIsFilterEnabled, UObject ListItemObject); // Flags: Final|Native|Public 0x7FF4140B18E0
		void HandleCategoryWidgetDestroyed(UObject ListItemObject); // Flags: Final|Native|Private 0x7FF4140B1800
		void HandleCategoryExpansion(UObject ListItemObject); // Flags: Final|Native|Private 0x7FF4140B1720
		void HandleCategoryButtonFocused(FName CategoryID); // Flags: Final|Native|Private|BlueprintCallable 0x7FF4140B1640
		void HandleCategoryButtonClicked(FName CategoryID); // Flags: Final|Native|Private|BlueprintCallable 0x7FF4140B1560
		void HandleCategoryActivated(bool bIsExpanded, UObject ListItemObject); // Flags: Final|Native|Private 0x7FF4140B1480
		int32_t GetNumFilterSectionWidgets(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140B13A0
		TArray GetItemDetailTags(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140B12C0
		TArray GetIncludedTags(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140B11E0
		FSlateBrush GetIconForInputAction(bool& bOutFoundIcon, FDataTableRowHandle& InInputActionRow); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable 0x7FF4140B1100
		FName GetHomeSectionID(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140B1020
		FDataTableRowHandle GetFocusSearchInputAction(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure 0x7FF4140B0F40
		int32_t GetFilterCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140B0E60
		FDataTableRowHandle GetClearSearchInputAction(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure 0x7FF4140B0D80
		void FocusChangedDelegate__DelegateSignature(bool bIsFocused); // Flags: MulticastDelegate|Public|Delegate 0x7FF4140B0CA0
		void FilterUpdateCategoryCountsDelegate__DelegateSignature(); // Flags: MulticastDelegate|Public|Delegate 0x7FF4140B0BC0
		void FilterChangedDelegate__DelegateSignature(); // Flags: MulticastDelegate|Public|Delegate 0x7FF4140B0AE0
		void ExcludeItemDetailTag(FName& TagID); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF4140B0A00
		void CategoryFocusedDelegate__DelegateSignature(FName CategoryID); // Flags: MulticastDelegate|Public|Delegate 0x7FF4140B0920
		void CategoryActivatedDelegate__DelegateSignature(FName CategoryID); // Flags: MulticastDelegate|Public|Delegate 0x7FF4140B0840
	};


	// Class CreativeEmporiumUI.FortEmporiumFilterCategoryHeader
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x38 (0x2F0 - 0x2B8)
	class UFortEmporiumFilterCategoryHeader : public UUserWidget	
	{
	public:
		FMulticastInlineDelegate OnCategoryActivated; // 0x2B8(0x10)
		FMulticastInlineDelegate OnWidgetDestroyed; // 0x2C8(0x10)
		FMulticastInlineDelegate OnExpandCategory; // 0x2D8(0x10)
		UEmporiumBrowserTag tag; // 0x2E8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CreativeEmporiumUI.FortEmporiumFilterCategoryHeader");
			return ret;
		}

		void UpdateCategoryCount(int32_t NewCount, bool bHideIfEmpty); // Flags: Event|Public|BlueprintEvent 0x7FF414D8F2A0
		void ShowUpperSpacer(bool bShow); // Flags: Event|Public|BlueprintEvent 0x7FF414D8F1C0
		void ShowCycleSectionPrompt(bool bShow); // Flags: Event|Public|BlueprintEvent 0x7FF414D8F0E0
		void ShowCategoryActive(bool bIsActive); // Flags: Event|Public|BlueprintEvent 0x7FF414D8F000
		void SetSubcategoryCount(int32_t NewCount); // Flags: Event|Protected|BlueprintEvent 0x7FF414D8EF20
		void SetCycleSectionIcon(FSlateBrush CycleSectionIcon); // Flags: Event|Public|BlueprintEvent 0x7FF414D8EE40
		void SetCategoryText(FText& NewButtonText); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414D8ED60
		TArray GetSubcategoryWidgets(); // Flags: Native|Event|Public|BlueprintEvent|Const 0x7FF414D8EC80
		UCommonButtonBase GetCategoryButton(); // Flags: Event|Public|BlueprintEvent|Const 0x7FF414D8EBA0
		void ExpandSection(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D8EAC0
		void ExpandCategory(bool bExpanded); // Flags: Event|Public|BlueprintEvent 0x7FF414D8E9E0
		void EnableCategoryExpansion(bool bShow); // Flags: Event|Public|BlueprintEvent 0x7FF414D8E900
		void ClearSubcategoryWidgets(); // Flags: Event|Public|BlueprintEvent 0x7FF414D8E820
		void AddSubcategoryWidget(UWidget SubcategoryWidget); // Flags: Event|Public|BlueprintEvent 0x7FF414D8E740
		void ActivateCategory(bool bExpanded); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414D8E660
	};


	// Class CreativeEmporiumUI.FortEmporiumFiltersSubPanel
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x48 (0x300 - 0x2B8)
	class UFortEmporiumFiltersSubPanel : public UUserWidget	
	{
	public:
		FMulticastInlineDelegate OnFilterEnabled; // 0x2B8(0x10)
		FMulticastInlineDelegate OnShowAllEnabled; // 0x2C8(0x10)
		UClass FilterEntryWidgetClass; // 0x2D8(0x8)
		UEmporiumBrowserFilterEntry Button_All; // 0x2E0(0x8)
		UEmporiumBrowserFilterEntry Button_LastSelected; // 0x2E8(0x8)
		UFortEmporiumItemListTabPanel CachedItemTab; // 0x2F0(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x2F8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CreativeEmporiumUI.FortEmporiumFiltersSubPanel");
			return ret;
		}

		void OnUpdateSubcategoryCount(FName& CategoryID, int32_t Count, bool bShowOnEmpty); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414D8FA80
		void OnUpdateFilterEntries(TArray& IncludedTags); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414D8F9A0
		void OnFilterSelected(UEmporiumBrowserFilterEntry SubcategoryWidget); // Flags: Event|Protected|BlueprintEvent 0x7FF414D8F8C0
		void OnAddSubcategoryWidget(UEmporiumBrowserFilterEntry SubcategoryWidget); // Flags: Event|Protected|BlueprintEvent 0x7FF414D8F7E0
		void HandleShowAllEnabled(bool bShowAllItems, UObject ListItemObject); // Flags: Final|Native|Private 0x7FF414D8F700
		void HandleFilterSelected(bool bIsFilterEnabled, UEmporiumBrowserFilterEntry Entry); // Flags: Final|Native|Private 0x7FF414D8F620
		void HandleFilterHovered(UEmporiumBrowserFilterEntry Entry); // Flags: Final|Native|Private 0x7FF414D8F540
		void HandleFilterEnabled(bool bIsFilterEnabled, UObject ListItemObject); // Flags: Final|Native|Private 0x7FF414D8F460
		void ClearFilterWidgets(); // Flags: Event|Protected|BlueprintEvent 0x7FF414D8F380
	};


	// Class CreativeEmporiumUI.FortEmporiumHomeEntryObjectWrapper
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UFortEmporiumHomeEntryObjectWrapper : public UObject	
	{
	public:
		UFortEmporiumItemListTabPanel TabPanel; // 0x28(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CreativeEmporiumUI.FortEmporiumHomeEntryObjectWrapper");
			return ret;
		}
	};


	// Class CreativeEmporiumUI.FortEmporiumHomeListEntry
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x228 (0x4E0 - 0x2B8)
	class UFortEmporiumHomeListEntry : public UUserWidget	
	{
	public:
		unsigned char UnknownData04_3[0x8]; // 0x2B8(0x8) UNKNOWN PROPERTY
		UFortEmporiumHomeListView ParentView; // 0x2C0(0x8)
		unsigned char UnknownData05_6[0x48]; // 0x2C8(0x48) UNKNOWN PROPERTY
		int32_t MaxItemsToShow; // 0x310(0x4)
		unsigned char UnknownData06_6[0x4]; // 0x314(0x4) UNKNOWN PROPERTY
		UFortEmporiumItemListTabPanel TabPanel; // 0x318(0x8)
		UCommonTextBlock Text_CategoryLabel; // 0x320(0x8)
		UAthenaCreativeItemTileView HomeListView_ItemOptions; // 0x328(0x8)
		unsigned char UnknownData07_7[0x1B0]; // 0x330(0x1B0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CreativeEmporiumUI.FortEmporiumHomeListEntry");
			return ret;
		}

		void UpdateWarningMessage(bool bShowMessage); // Flags: Event|Protected|BlueprintEvent 0x7FF414D8FE00
		void UpdateOverflowDisplay(UAthenaCreativeItemTileButton OverflowTile, int32_t OverflowCount); // Flags: Event|Protected|BlueprintEvent 0x7FF414D8FD20
		bool GetCollapseBorderPadFlagForCategory(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414D8FC40
		EFortItemCardSize GetCardSizeForCategory(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414D8FB60
	};


	// Class CreativeEmporiumUI.FortEmporiumHomeListView
	// Inherited from UCommonListView -> UListView -> UListViewBase -> UWidget -> UVisual -> UObject
	// Size: 0x270 (0xDA0 - 0xB30)
	class UFortEmporiumHomeListView : public UCommonListView	
	{
	public:
		unsigned char UnknownData02_3[0xB0]; // 0xB30(0xB0) UNKNOWN PROPERTY
		TArray TabPanelList; // 0xBE0(0x10)
		unsigned char UnknownData03_7[0x1B0]; // 0xBF0(0x1B0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CreativeEmporiumUI.FortEmporiumHomeListView");
			return ret;
		}

		UWidget GetFocusWidget(); // Flags: Native|Public|BlueprintCallable 0x7FF414D8FEE0
	};


	// Class CreativeEmporiumUI.FortEmporiumHomeTabPanel
	// Inherited from UFortCreativeContentBrowserTabPanelBase -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x58 (0x490 - 0x438)
	class UFortEmporiumHomeTabPanel : public UFortCreativeContentBrowserTabPanelBase	
	{
	public:
		unsigned char UnknownData02_3[0x48]; // 0x438(0x48) UNKNOWN PROPERTY
		FName FeaturedItemTag; // 0x480(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x484(0x4) UNKNOWN PROPERTY
		UFortEmporiumHomeListView FortEmporiumHomeListView_Options; // 0x488(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CreativeEmporiumUI.FortEmporiumHomeTabPanel");
			return ret;
		}

		void OnSetPanelLayout(EFortEmporiumLayoutVersion LayoutVersion); // Flags: Event|Public|BlueprintEvent 0x7FF414D8FFC0
	};


	// Class CreativeEmporiumUI.FortEmporiumItem
	// Inherited from UFortItem -> UObject
	// Size: 0x8 (0xA8 - 0xA0)
	class UFortEmporiumItem : public UFortItem	
	{
	public:
		UFortEmporiumItemDefinition ItemDefinition; // 0xA0(0x8)

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
		unsigned char UnknownData02_3[0x8]; // 0xA8(0x8) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnItemThumbnailDownloaded; // 0xB0(0x10)
		unsigned char UnknownData03_7[0xF0]; // 0xC0(0xF0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CreativeEmporiumUI.FortEmporiumItemDefinition");
			return ret;
		}

		FFortEmporiumItemData GetEmporiumItemData(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D900A0
	};


	// Class CreativeEmporiumUI.FortEmporiumItemDetailsPanel
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x68 (0x348 - 0x2E0)
	class UFortEmporiumItemDetailsPanel : public UCommonUserWidget	
	{
	public:
		unsigned char UnknownData02_3[0x30]; // 0x2E0(0x30) UNKNOWN PROPERTY
		FDataTableRowHandle ItemDetailTagsInputRowHandle; // 0x310(0x10)
		unsigned char UnknownData03_6[0x8]; // 0x320(0x8) UNKNOWN PROPERTY
		UItemDefinitionBase CachedItemDefinition; // 0x328(0x8)
		UCommonVisibilitySwitcher Switcher_Details; // 0x330(0x8)
		UFortEmporiumItemInfo ItemDetails; // 0x338(0x8)
		UAthenaInventoryItemInfo LegacyItemDetails; // 0x340(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CreativeEmporiumUI.FortEmporiumItemDetailsPanel");
			return ret;
		}

		void UpdateItemDetailsDisplay(bool bShowItemDetails); // Flags: Event|Protected|BlueprintEvent 0x7FF414D90DC0
		void ToggleItemDetailsPanel(); // Flags: Event|Public|BlueprintEvent 0x7FF414D90CE0
		void SwitchItemDetailsPanel(bool bUseLegacy); // Flags: Native|Event|Public|BlueprintEvent 0x7FF414D90C00
		void ShowExtendedDataPanel(); // Flags: Event|Protected|BlueprintEvent 0x7FF414D90B20
		void SetSpecialItemTagVisibility(FName& SpecialItemTag); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x7FF414D90A40
		void SetItemToDetail(UFortItem InItemToDetail, bool bUseLargeThumbnail, bool bAllowInteractiveTags); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D90960
		void SetItemDetails(UFortItem FortItem, bool bUseLargeThumbnail, bool bAllowInteractiveTags); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent 0x7FF414D90880
		void SetActiveItemDetailTags(TArray& ActiveTags); // Flags: Event|Public|HasOutParms|BlueprintEvent 0x7FF414D907A0
		bool IsShowingExtendedDataPanel(); // Flags: Native|Event|Protected|BlueprintEvent|Const 0x7FF414D906C0
		bool IsShowingAdditionalButtons(); // Flags: Native|Event|Protected|BlueprintEvent 0x7FF414D905E0
		void HideExtendedDataPanel(); // Flags: Event|Protected|BlueprintEvent 0x7FF414D90500
		void HideAdditionalButtons(); // Flags: Event|Protected|BlueprintEvent 0x7FF414D90420
		bool HasLegacyItemDetailsPanel(); // Flags: Native|Event|Public|BlueprintEvent|Const 0x7FF414D90340
		void HandleItemTagSelected(FName TagID, bool bSelected); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414D90260
		TArray BP_GetSpecialItemTags(); // Flags: Event|Protected|BlueprintEvent|Const 0x7FF414D90180
	};


	// Class CreativeEmporiumUI.FortEmporiumItemInfo
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x2F0 - 0x2E0)
	class UFortEmporiumItemInfo : public UCommonUserWidget	
	{
	public:
		TArray HiddenTags; // 0x2E0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CreativeEmporiumUI.FortEmporiumItemInfo");
			return ret;
		}

		void UpdateWithFortItem(UFortItem Item, bool bAllowInteractiveTags); // Flags: Event|Public|BlueprintCallable|BlueprintEvent 0x7FF414D91300
		void ShowSelectItemTagsPrompt(bool bShowPrompt); // Flags: Event|Public|BlueprintEvent 0x7FF414D91220
		void SetTagFocus(); // Flags: Event|Public|BlueprintEvent 0x7FF414D91140
		void SetSelectItemTagsPrompt(FText& Prompt); // Flags: Event|Public|HasOutParms|BlueprintEvent 0x7FF414D91060
		void SetSelectItemTagsIcon(FSlateBrush SelectItemTagsIcon); // Flags: Event|Public|BlueprintEvent 0x7FF414D90F80
		bool HasFocusableTags(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x7FF414D90EA0
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
	// Size: 0x788 (0xB80 - 0x3F8)
	class UFortEmporiumItemListMenu : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData09_3[0x30]; // 0x3F8(0x30) UNKNOWN PROPERTY
		UClass PanelDataClass; // 0x428(0x8)
		UDataTable ItemListCategorySource; // 0x430(0x8)
		UFortCreativeItemListPanelData ItemListPanelData; // 0x438(0x8)
		UClass InventoryTabClass; // 0x440(0x8)
		UClass LevelManagementTabClass; // 0x448(0x8)
		UClass HomeTabClass; // 0x450(0x8)
		UClass InventoryTabButton; // 0x458(0x8)
		TMap Map_CreativeBetaTagNames; // 0x460(0x50)
		TMap Map_ToggleFilterFocusKeys; // 0x4B0(0x50)
		TMap Map_ToggleFilterSubPanelFocusKeys; // 0x500(0x50)
		TMap Map_CycleTagFilterModeModifierKeys; // 0x550(0x50)
		TMap Map_ClearTagFiltersModifierKeys; // 0x5A0(0x50)
		TMap Map_ToggleSidePanelDockingModifierKeys; // 0x5F0(0x50)
		FKey ToggleSidePanelDockingKey; // 0x640(0x18)
		FKey ToggleSubPanelMode; // 0x658(0x18)
		FDataTableRowHandle FocusSearchInputActionRow; // 0x670(0x10)
		unsigned char UnknownData10_6[0x8]; // 0x680(0x8) UNKNOWN PROPERTY
		FDataTableRowHandle ClearSearchInputActionRow; // 0x688(0x10)
		unsigned char UnknownData11_6[0x8]; // 0x698(0x8) UNKNOWN PROPERTY
		FDataTableRowHandle CycleSortInputActionRow; // 0x6A0(0x10)
		unsigned char UnknownData12_6[0x8]; // 0x6B0(0x8) UNKNOWN PROPERTY
		UFortEmporiumItemListTabPanel ChestTabPanel; // 0x6B8(0x8)
		UFortCreativeLevelManagementTabPanel LevelManagementTabPanel; // 0x6C0(0x8)
		UFortEmporiumHomeTabPanel HomeTabPanel; // 0x6C8(0x8)
		UFortEmporiumItemListTabPanel FabTabPanel; // 0x6D0(0x8)
		UFortEmporiumItemListTabPanel SubItemsTabPanel; // 0x6D8(0x8)
		FName FabTabNameId; // 0x6E0(0x4)
		unsigned char UnknownData13_6[0xC]; // 0x6E4(0xC) UNKNOWN PROPERTY
		FFortTabButtonLabelInfo TabButtonLabelInfo; // 0x6F0(0xF0)
		FAthenaMapScreenContainerTabInfo MapScreenContainerTabInfo; // 0x7E0(0x40)
		bool bIsDefaultActiveTab; // 0x820(0x1)
		bool bAddItemToInventoryOnEquip; // 0x821(0x1)
		bool bLoadItemsOnInitialized; // 0x822(0x1)
		unsigned char UnknownData14_6[0x1]; // 0x823(0x1) UNKNOWN PROPERTY
		int32_t LastUsedSlot; // 0x824(0x4)
		unsigned char UnknownData15_6[0x8]; // 0x828(0x8) UNKNOWN PROPERTY
		TMap TabMap; // 0x830(0x50)
		unsigned char UnknownData16_6[0x1B8]; // 0x880(0x1B8) UNKNOWN PROPERTY
		TArray EmporiumItemDefinitionList; // 0xA38(0x10)
		unsigned char UnknownData17_6[0x18]; // 0xA48(0x18) UNKNOWN PROPERTY
		UCommonVisibilitySwitcher Switcher_SidePanels; // 0xA60(0x8)
		UCommonVisibilitySwitcher Switcher_Categories; // 0xA68(0x8)
		UWidgetSwitcher Switcher_ItemTabWarnings; // 0xA70(0x8)
		UOverlay Overlay_ChestEmpty; // 0xA78(0x8)
		UOverlay Overlay_TabEmpty; // 0xA80(0x8)
		UOverlay Overlay_DownloadingFabCategories; // 0xA88(0x8)
		UOverlay Overlay_FabCategoriesNotLoaded; // 0xA90(0x8)
		UWidgetSwitcher Switcher_CommandBar; // 0xA98(0x8)
		UOverlay Overlay_ChestCommands; // 0xAA0(0x8)
		UOverlay Overlay_VendCommands; // 0xAA8(0x8)
		UFortCreativeMenuQuickbar MenuQuickbar_QuickBars; // 0xAB0(0x8)
		UCommonButtonBase Button_ResetChest; // 0xAB8(0x8)
		UCommonButtonBase Button_CreateChest; // 0xAC0(0x8)
		UCommonButtonBase Button_AddToQuickBar; // 0xAC8(0x8)
		UCommonButtonBase Button_OpenItem; // 0xAD0(0x8)
		UCommonButtonBase Button_PlaceNow; // 0xAD8(0x8)
		UCommonButtonBase Button_Equip; // 0xAE0(0x8)
		UCommonButtonBase Button_AddToChest; // 0xAE8(0x8)
		UCommonButtonBase Button_Drop; // 0xAF0(0x8)
		UCommonButtonBase Button_CreateLlama; // 0xAF8(0x8)
		UCommonButtonBase Button_RemoveFromChest; // 0xB00(0x8)
		UOverlay Overlay_SearchFilters; // 0xB08(0x8)
		UCommonAnimatedSwitcher Switcher_LeftPanel; // 0xB10(0x8)
		UEmporiumBrowserFiltersPanel FiltersPanel; // 0xB18(0x8)
		UFortEmporiumFiltersSubPanel FiltersSubPanel; // 0xB20(0x8)
		UFortEmporiumItemDetailsPanel SubTabItemDetailsPanel; // 0xB28(0x8)
		UAthenaCustomizationPickerSortAndFilterBlade Blade_SortAndFilter; // 0xB30(0x8)
		UFortEmporiumItemDetailsPanel ItemDetailsSidePanel_DefaultSidePanel; // 0xB38(0x8)
		UCommonVisibilitySwitcher Switcher_ProductPage; // 0xB40(0x8)
		UOverlay Overlay_ItemBrowser; // 0xB48(0x8)
		UFortEmporiumItemDetailsPanel ItemProductPagePanel; // 0xB50(0x8)
		UWidgetSwitcher Switcher_InventoryPermission; // 0xB58(0x8)
		UOverlay Overlay_EmporiumPanel; // 0xB60(0x8)
		UOverlay Overlay_InventoryNotAllowed; // 0xB68(0x8)
		UOverlay Overlay_EditorDisconnected; // 0xB70(0x8)
		UOverlay Overlay_InitializingInventory; // 0xB78(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CreativeEmporiumUI.FortEmporiumItemListMenu");
			return ret;
		}

		void UpdatePermissionsDisplay(); // Flags: Final|Native|Private 0x7FF414D95AC0
		void UpdateDetailsPanel(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D959E0
		void UpdateBackButtonText(bool bFilterFocus); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414D95900
		void SwitchItemDetailsPanel(bool bUseLegacy); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D95820
		void SpawnContainer(UClass SupplyDropClass); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D95740
		void SetSubTabOpened(UItemDefinitionBase ItemDefinition); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D95660
		void SetIsItemCommandsEnabled(bool bInIsItemCommandEnabled); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D95580
		void SetActiveTab(UFortCreativeContentBrowserTabPanelBase Tab, bool bCaptureFocus); // Flags: Final|Native|Private|BlueprintCallable 0x7FF414D954A0
		void RefreshTabWarningState(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D953C0
		bool PlaceSelectionInMoveTool(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D952E0
		bool OpenSelection(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D95200
		void OnUpdateTagFilterButton(EFortEmporiumItemTagFilterMode Mode); // Flags: Event|Public|BlueprintEvent 0x7FF414D95120
		void OnUpdateCommandBarVisibility(bool bShowBar); // Flags: Event|Protected|BlueprintEvent 0x7FF414D95040
		void OnUpdateCategoryLabel(FText& SectionLabel, FText& CategoryLabel); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414D94F60
		void OnTabChanged(); // Flags: Event|Public|BlueprintEvent 0x7FF414D94E80
		void OnTabAdded(UFortCreativeContentBrowserTabPanelBase Tab); // Flags: Event|Protected|BlueprintEvent 0x7FF414D94DA0
		void OnSubPanelModeChanged(); // Flags: Event|Protected|BlueprintEvent 0x7FF414D94CC0
		void OnSidePanelDockToggled(); // Flags: Event|Protected|BlueprintEvent 0x7FF414D94BE0
		void OnShowGridBlocker(bool bShow); // Flags: Event|Public|BlueprintEvent 0x7FF414D94B00
		void OnShowCategoryModal(bool bShowModal); // Flags: Event|Protected|BlueprintEvent 0x7FF414D94A20
		bool OnShouldAllowCommandBar(UUserWidget FocusPathWidget, bool& bAllowCommandBar); // Flags: Event|Public|HasOutParms|BlueprintEvent 0x7FF414D94940
		void OnSetPanelLayout(EFortEmporiumLayoutVersion LayoutVersion); // Flags: Event|Public|BlueprintEvent 0x7FF414D94860
		void OnSelectionOpened(UItemDefinitionBase SelectedItemDefinition); // Flags: Event|Public|BlueprintCallable|BlueprintEvent 0x7FF414D94780
		void OnSearchFiltersVisibilityChanged(bool bIsVisible); // Flags: Event|Public|BlueprintEvent 0x7FF414D946A0
		void OnQuickbarStateChanged(EFortContentBrowserQuickbarState State); // Flags: Event|Protected|BlueprintEvent 0x7FF414D945C0
		void OnItemsLoaded(); // Flags: Event|Public|BlueprintEvent 0x7FF414D944E0
		void OnItemEquipped(FFortItemEntry& EquippedItemEntry); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414D94400
		void OnFabItemQueryComplete(bool bSuccess, FString JsonString); // Flags: Final|Native|Private 0x7FF414D94320
		void OnFabCategoryListLoaded(bool bSuccess, FString JsonString); // Flags: Final|Native|Private 0x7FF414D94240
		void OnExitSubTab(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent 0x7FF414D94160
		void OnCreativeQuickbarComponentLoaded(); // Flags: Final|Native|Public 0x7FF414D94080
		void OnContentRatingFilterChanged(); // Flags: Final|Native|Private 0x7FF414D93FA0
		void OnBuiltInItemsLoaded(); // Flags: Event|Public|BlueprintEvent 0x7FF414D93EC0
		void OnAnimateSidePanel(bool bIsRightPanel, bool bShow); // Flags: Event|Protected|BlueprintEvent 0x7FF414D93DE0
		void NativeOnItemsRefreshed(); // Flags: Final|Native|Public 0x7FF414D93D00
		void NativeOnItemsLoaded(); // Flags: Final|Native|Public 0x7FF414D93C20
		void NativeOnBuiltInItemsLoaded(); // Flags: Final|Native|Public 0x7FF414D93B40
		void LoadFabItems(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D93A60
		bool IsSubTabOpened(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D93980
		bool IsSidePanelOpen(bool bRightPanel); // Flags: Event|Protected|BlueprintEvent|Const 0x7FF414D938A0
		void InitializeTabs(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D937C0
		void InitializeFabTab(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D936E0
		void HandleUpdateCategoryCounts(); // Flags: Final|Native|Private 0x7FF414D93600
		void HandleTabSortButtonClicked(); // Flags: Final|Native|Private 0x7FF414D93520
		void HandleTabSelected(FName TabID, bool bCaptureFocus); // Flags: Final|Native|Private|BlueprintCallable 0x7FF414D93440
		void HandleTabItemDetailClicked(FName& TagID); // Flags: Final|Native|Private|HasOutParms 0x7FF414D93360
		void HandleSubFilterShowAllEnabled(bool bIsFilterEnabled, UObject ListItemObject); // Flags: Final|Native|Private 0x7FF414D93280
		void HandleSubFilterEnabled(bool bIsFilterEnabled, UObject ListItemObject); // Flags: Final|Native|Private 0x7FF414D931A0
		void HandleSortChanged(); // Flags: Final|Native|Private 0x7FF414D930C0
		void HandleSortButtonClicked(FName SortNameId, UCommonButtonBase NewButton); // Flags: Final|Native|Private 0x7FF414D92FE0
		void HandleSelectionChanged(UFortCreativeContentBrowserTabPanelBase Tab); // Flags: Final|Native|Private 0x7FF414D92F00
		void HandleQuickbarStateChanged(EFortContentBrowserQuickbarState State); // Flags: Final|Native|Private 0x7FF414D92E20
		void HandleQuickbarPanelIsFocused(bool bIsFocused); // Flags: Final|Native|Private 0x7FF414D92D40
		void HandleModalHitBlockerClicked(); // Flags: Final|Native|Private|BlueprintCallable 0x7FF414D92C60
		void HandleItemThumbnailDownloaded(UFortEmporiumItemDefinition ItemDefinition); // Flags: Final|Native|Private 0x7FF414D92B80
		void HandleItemTagSelected(FName& TagID, bool bSelected); // Flags: Final|Native|Private|HasOutParms 0x7FF414D92AA0
		void HandleItemDoubleClicked(FFortItemEntry& ItemEntry); // Flags: Final|Native|Private|HasOutParms 0x7FF414D929C0
		void HandleItemClicked(FFortItemEntry& ItemEntry); // Flags: Final|Native|Private|HasOutParms 0x7FF414D928E0
		void HandleHomeItemClicked(UFortEmporiumItemListTabPanel ItemTab); // Flags: Final|Native|Private 0x7FF414D92800
		void HandleGlobalSortPanelToggle(); // Flags: Final|Native|Private 0x7FF414D92720
		void HandleFilterPanelIsFocused(bool bIsFocused); // Flags: Final|Native|Private 0x7FF414D92640
		void HandleFilterChanged(); // Flags: Final|Native|Private 0x7FF414D92560
		void HandleFilterButtonClicked(FName FilterNameId, UCommonButtonBase NewButton); // Flags: Final|Native|Private 0x7FF414D92480
		void HandleEquipItem(FFortItemEntry& ItemEntry); // Flags: Final|Native|Private|HasOutParms 0x7FF414D923A0
		void HandleChestItemCountChanged(int32_t Count); // Flags: Final|Native|Private 0x7FF414D922C0
		void HandleCategoryFocused(FName CategoryID); // Flags: Final|Native|Private 0x7FF414D921E0
		void HandleCategoryButtonClicked(FName& CategoryID); // Flags: Final|Native|Private|HasOutParms 0x7FF414D92100
		void HandleCategoryActivated(FName CategoryID); // Flags: Final|Native|Private 0x7FF414D92020
		void HandleAddSelectionToMoveToolComplete(); // Flags: Final|Native|Private 0x7FF414D91F40
		UItemDefinitionBase GetSubTabSelectedItemDefinition(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D91E60
		FName GetLastSelectedTabName(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D91D80
		UFortCreativeContentBrowserTabPanelBase GetCurrentTab(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D91CA0
		FFortItemEntry GetCurrentSelection(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D91BC0
		void FocusSidePanel(bool bIsRightPanel, bool bFocus); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414D91AE0
		bool EquipSelection(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D91A00
		bool EquipItem(FFortItemEntry& ItemEntry); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414D91920
		bool DropItem(FFortItemEntry& SelectedItem); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414D91840
		void CycleTagFilterMode(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414D91760
		bool CanEquip(FFortItemEntry& SelectedItem); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414D91680
		bool CanDropItem(FFortItemEntry& SelectedItem); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414D915A0
		bool CanAddToChest(FFortItemEntry& SelectedItem); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414D914C0
		bool AddSelectionToQuickBar(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D913E0
	};


	// Class CreativeEmporiumUI.FortEmporiumItemListTabPanel
	// Inherited from UFortCreativeContentBrowserTabPanelBase -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x418 (0x850 - 0x438)
	class UFortEmporiumItemListTabPanel : public UFortCreativeContentBrowserTabPanelBase	
	{
	public:
		unsigned char UnknownData04_3[0x8]; // 0x438(0x8) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnSourceItemCountChanged; // 0x440(0x10)
		FMulticastInlineDelegate OnItemClickedDelegate; // 0x450(0x10)
		FMulticastInlineDelegate OnItemDoubleClickedDelegate; // 0x460(0x10)
		unsigned char UnknownData05_6[0x30]; // 0x470(0x30) UNKNOWN PROPERTY
		UAthenaCreativeItemTileView CreativeTileView_ItemOptions; // 0x4A0(0x8)
		UCommonButtonBase Button_Sort; // 0x4A8(0x8)
		FFortItemEntry CurrentItemEntry; // 0x4B0(0x1A8)
		FMulticastInlineDelegate OnItemCountChanged; // 0x658(0x10)
		TArray Items; // 0x668(0x10)
		TArray SourceItems; // 0x678(0x10)
		unsigned char UnknownData06_6[0x1B0]; // 0x688(0x1B0) UNKNOWN PROPERTY
		UFortEmporiumItemListMenu EmporiumItemListMenuParent; // 0x838(0x8)
		unsigned char UnknownData07_7[0x10]; // 0x840(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CreativeEmporiumUI.FortEmporiumItemListTabPanel");
			return ret;
		}

		void UpdateTabHeader(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent 0x7FF414D96D20
		void UpdateSortButton(FText& SortType); // Flags: Event|Public|HasOutParms|BlueprintEvent 0x7FF414D96C40
		void ShowTopButtonBar(bool bShow); // Flags: Event|Public|BlueprintEvent 0x7FF414D96B60
		bool ShowLegacyItemDetailsPanel(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D96A80
		void SetActiveItemDetailTags(TArray& TagIDs); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x7FF414D969A0
		void RestoreLastSelection(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D968C0
		void RemoveSelectedItem(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D967E0
		void OnSetPanelLayout(EFortEmporiumLayoutVersion LayoutVersion); // Flags: Event|Public|BlueprintEvent 0x7FF414D96700
		void ItemEquipped(FFortItemEntry& Item); // Flags: Event|Public|HasOutParms|BlueprintEvent 0x7FF414D96620
		bool IsSubTabOpened(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414D96540
		bool IsEmpty(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF414D96460
		void HandleItemDetailTagSelected(FName& TagID); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable 0x7FF414D96380
		UItemDefinitionBase GetSubTabSelectedItemDefinition(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414D962A0
		bool GetCollapseBorderPadFlagForCategory(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D961C0
		EFortItemCardSize GetCardSizeForCategory(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D960E0
		void FocusCurrentSelection(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent 0x7FF414D96000
		void ClearFilteredItems(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D95F20
		void ClearAllItems(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D95E40
		bool CanPlayerCreateInVolume(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D95D60
		void AddItemToSource(FFortItemEntry& ItemToAdd); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414D95C80
		void AddItem(FFortItemEntry& ItemToAdd); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414D95BA0
	};


	// Class CreativeEmporiumUI.EmporiumBrowserTag
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UEmporiumBrowserTag : public UObject	
	{
	public:
		FName TagID; // 0x28(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY

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

		TArray SplitTagID(FName& TagID); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414D97960
		bool ShouldShowLayoutVersion2FTUE(UUserWidget ContextWidget); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414D97880
		void SetLayoutVersion(UUserWidget ContextWidget, EFortEmporiumLayoutVersion NewLayoutVersion); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414D977A0
		void SetHasSeenCreativeContentBrowserV2FTUE(UUserWidget ContextWidget); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414D976C0
		void RequestLicenseText(EFortEmporiumItemLicense License, FDelegateProperty& Callback); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414D975E0
		void RequestJSON(UObject WorldContextObject, FUniqueNetIdRepl& UniqueNetId, FString JSONURL, FDelegateProperty& Callback); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414D97500
		bool IsCreativeBetaTag(FName& TagID); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414D97420
		FText GetTextFromEmporiumLicense(EFortEmporiumItemLicense License); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414D97340
		FName GetShowAllButtonID(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414D97260
		EFortEmporiumLayoutVersion GetLayoutVersion(UUserWidget ContextWidget); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414D97180
		FText GetCreativeTagLabel(FName& TagID, bool& bOutIsBeta); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414D970A0
		TArray GetCreativeTagIDs(UItemDefinitionBase ItemDefinition); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414D96FC0
		FText GetCategoryDisplayName(FName& CategoryID); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414D96EE0
		bool BP_GetCategoryHierarchyEntry(FName& CategoryID, FFortEmporiumFilterCategory& OutFoundCategory); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414D96E00
	};

}
