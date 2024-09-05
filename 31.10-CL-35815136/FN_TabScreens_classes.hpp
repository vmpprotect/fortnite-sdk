#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: TabScreens
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /DiscoveryBrowser/TabScreens/Library/DiscoverLibraryView_Wrapper.DiscoverLibraryView_Wrapper_C
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x400 - 0x3F0)
	class UDiscoverLibraryView_Wrapper_C : public UCommonActivatableWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x3F0(0x8)
		UOverlay* OverlayContent; // 0x3F8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/TabScreens/Library/DiscoverLibraryView_Wrapper.DiscoverLibraryView_Wrapper_C");
			return ret;
		}

		void UpdateContent(UCommonActivatableWidget* ConstructRef); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_DiscoverLibraryView_Wrapper(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /DiscoveryBrowser/TabScreens/Library/DiscoverLibraryView_V2.DiscoverLibraryView_V2_C
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8D (0x47D - 0x3F0)
	class UDiscoverLibraryView_V2_C : public UCommonActivatableWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x3F0(0x8)
		UFortDiscoverSurfaceViewModel* FortDiscoverSurfaceViewModel; // 0x3F8(0x8)
		UWBP_CaptureForPostBufferUpdate_C* CaptureForPostBufferUpdate; // 0x400(0x8)
		UCommonTextBlock* HeaderText; // 0x408(0x8)
		UImage* Image_HeaderSoftEdge; // 0x410(0x8)
		UOverlay* LoadingResults_Spinner; // 0x418(0x8)
		USafeZone* SafeZone; // 0x420(0x8)
		UCommonActivatableWidgetSwitcher* Switcher_HasResultsEnum; // 0x428(0x8)
		USafeZone* SZ_LoadingMore; // 0x430(0x8)
		UOverlay* TileContainerOverlay; // 0x438(0x8)
		UFortActivityTileView* TileView_LibraryResults; // 0x440(0x8)
		UWBP_BottomBarDecoyButton_C* WBP_BottomBarDecoyButton_BackToTop; // 0x448(0x8)
		UWBP_Discovery_BlankTiles_RoundedCorners_C* WBP_Discovery_BlankTiles_RoundedCorners; // 0x450(0x8)
		UWBP_LoadingMorePages_C* WBP_LoadingMorePages; // 0x458(0x8)
		UWBP_UIKit_Tabs_C* WBP_UIKit_Tabs_LIBRARY; // 0x460(0x8)
		UWBP_UIKit_Throbber_C* WBP_UIKit_Throbber; // 0x468(0x8)
		USoundBase* IntroWhooshSound; // 0x470(0x8)
		int32_t PreviousSelectedTileIndex; // 0x478(0x4)
		bool IsEmpty; // 0x47C(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/TabScreens/Library/DiscoverLibraryView_V2.DiscoverLibraryView_V2_C");
			return ret;
		}

		void SetMobileStyle(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UWidget BP_GetDesiredFocusTarget(); // Flags: Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SendSelectedSubViewEvent(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UWidget Navigate Left To Tabs(EUINavigation Navigation); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PopulateTabs(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnQueryingMorePages(bool IsQueryingNewPages); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Fill Out Tile View Data(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetNoResultsAndHeaderText(int32_t SelectedTabIndex); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnUpdateNew(TArray<UFortDiscoverProviderViewModel*>& ProviderOuterArrayVM, int32_t OuterIndex, TArray<UFortDiscoverTileItemVM*>& InnerArray); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnUpdateProviders(TArray<UFortDiscoverProviderViewModel*>& ProvidersVM); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetRecentlyPlayedHeaderText(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetRecentlyPlayedNoResultsText(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetFavoritesHeaderText(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetFavoritesNoResultsText(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnItemInitialized(UObject* Item, UUserWidget* Widget); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTileViewScrolled(float ItemOffset, float DistanceRemaining); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTabSelectedSwitchContent(FName TabID); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnActivated(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnDeactivated(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void TopLevelTabChanged(EFortUIFeature LeavingFeature, EFortUIFeature EnteringFeature); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__DiscoverLibraryView_TileView_LibraryResults_K2Node_ComponentBoundEvent_1_OnListEntryGeneratedDynamic__DelegateSignature(UUserWidget* Widget); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__DiscoverLibraryView_WBP_UIKit_Tabs_LIBRARY_K2Node_ComponentBoundEvent_5_OnTabSelected__DelegateSignature(FName TabID); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__DiscoverLibraryView_WBP_BottomBarDecoyButton_BackToTop_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(UCommonButtonBase* Button); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_DiscoverLibraryView_V2(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /DiscoveryBrowser/TabScreens/Search/WBP_SearchWrapper.WBP_SearchWrapper_C
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x400 - 0x3F0)
	class UWBP_SearchWrapper_C : public UCommonActivatableWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x3F0(0x8)
		UOverlay* Overlay_Content; // 0x3F8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/TabScreens/Search/WBP_SearchWrapper.WBP_SearchWrapper_C");
			return ret;
		}

		void UpdateContent(UCommonActivatableWidget* ConstructRef); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_SearchWrapper(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /DiscoveryBrowser/TabScreens/Search/DiscoverSearchView_Creator.DiscoverSearchView_Creator_C
	// Inherited from UFortPolymorphicTileView -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xF9 (0x4F1 - 0x3F8)
	class UDiscoverSearchView_Creator_C : public UFortPolymorphicTileView	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x3F8(0x8)
		UFortDiscoverSearchViewModel* FortDiscoverSearchViewModel; // 0x400(0x8)
		UFortDiscoverBrowseViewModel* FortDiscoverBrowseViewModel; // 0x408(0x8)
		UWidgetAnimation* Intro; // 0x410(0x8)
		UActivityBrowserBrowseView_VM_C* ActivityBrowserBrowseView_VM; // 0x418(0x8)
		UWBP_CaptureForPostBufferUpdate_C* CaptureForPostBufferUpdate; // 0x420(0x8)
		UCommonWidgetSwitcherLegacy* CommonWidgetSwitcher_Results; // 0x428(0x8)
		UWBP_UIKit_FilteredInputField_C* FilteredInputField; // 0x430(0x8)
		UImage* Image_SearchRectangle; // 0x438(0x8)
		UImage* Image_SoftEdgeGradient_Islands; // 0x440(0x8)
		UImage* NebulousBackground; // 0x448(0x8)
		UGridPanel* ResultsGrid; // 0x450(0x8)
		UCommonRichTextBlock* RichResultsText; // 0x458(0x8)
		USafeZone* SafeZone; // 0x460(0x8)
		UCommonWidgetSwitcherLegacy* SearchResult_Switcher; // 0x468(0x8)
		UGridPanel* SearchSpinner; // 0x470(0x8)
		UCommonWidgetSwitcherLegacy* Switcher_CategoriesOrSearch; // 0x478(0x8)
		UVerticalBox* VerticalBox_IslandBox; // 0x480(0x8)
		UWBP_BottomBarDecoyButton_C* WBP_BottomBarHack_Back; // 0x488(0x8)
		UWBP_BottomBarDecoyButton_C* WBP_BottomBarHack_BackToTop; // 0x490(0x8)
		UWBP_CaptureForPostBufferUpdate_C* WBP_CaptureForPostBufferUpdate; // 0x498(0x8)
		UWBP_LoadingMorePages_C* WBP_LoadingMorePages; // 0x4A0(0x8)
		UWBP_Discovery_NoResultsMessage_C* WBP_NoResults_SearchResults; // 0x4A8(0x8)
		UWBP_Row_Header_C* WBP_Row_Header; // 0x4B0(0x8)
		UWBP_UIKit_Tabs_C* WBP_UIKit_Tabs; // 0x4B8(0x8)
		UWBP_UIKit_Throbber_C* WBP_UIKit_Throbber; // 0x4C0(0x8)
		USoundBase* IntroWhooshSound; // 0x4C8(0x8)
		bool IsSearchActive; // 0x4D0(0x1)
		EDiscoverSearchMode SearchMode; // 0x4D1(0x1)
		unsigned char UnknownData00_6[0x6]; // 0x4D2(0x6) UNKNOWN PROPERTY
		TArray<UWBP_UIKit_Block_Text_C*> TabBlockTextArray; // 0x4D8(0x10)
		int32_t TEMP_IslandResultCount; // 0x4E8(0x4)
		int32_t TEMP_CreatorResultCount; // 0x4EC(0x4)
		bool IsTileViewDataEmpty; // 0x4F0(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/TabScreens/Search/DiscoverSearchView_Creator.DiscoverSearchView_Creator_C");
			return ret;
		}

		void __Setter_SearchMode(EDiscoverSearchMode NewValue); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PopulateTabs(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Set Bottom Bar Button Visibility(bool IsVisible); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UWidget Navigate Up from Results(EUINavigation Navigation); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UWidget Navigate Down To Results(EUINavigation Navigation); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Set Tab Result Count(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Set No Result Text(int32_t TabIndex); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Fill Out TileView Data(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Set Material Instance Parameters(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetRowHeaderText(int32_t TabIndex); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Populate Additional Tab Content(FName TabID, UCommonButtonBase* TabButton); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetCreatorSearchInProgress(bool SearchInProgress); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetIslandSearchInProgress(bool SearchInProgress); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UClass GetDesiredEntryClassForItem(UObject* Item); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetMobileStyle(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void IsFullsizedOnScreen(UWidget* Widget, bool& IsFullSized); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnQueryingMorePages(bool IsQueryingNewPages); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetSearchInProgress(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UWidget BP_GetDesiredFocusTarget(); // Flags: Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetSearchResults(TArray<UFortDiscoverTileItemVM*>& SearchResultsArray); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetResultsTerm(FString ResultsTerm); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UWidget NavigateUpToTextEntry(EUINavigation Navigation); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UWidget NavigateDownToBrowseOrSearch(EUINavigation Navigation); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Switch Between Browse And Search Views(bool IsSearchActive); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Set Browse View VM(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void On Update Providers(TArray<UFortDiscoverProviderViewModel*>& ProvidersVM); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnActivated(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnDeactivated(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTileViewScrolled(float ItemOffset, float DistanceRemaining); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void TopLevelTabChanged(EFortUIFeature LeavingFeature, EFortUIFeature EnteringFeature); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__DiscoverSearchView_WBP_BottomBarHack_Back_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(UCommonButtonBase* Button); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__DiscoverSearchView_WBP_BottomBarHack_BackToTop_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature(UCommonButtonBase* Button); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnBackToTopClickedCategory(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__DiscoverSearchView_FilteredInputField_K2Node_ComponentBoundEvent_2_OnTextChanged__DelegateSignature(FText Text); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__DiscoverSearchView_FilteredInputField_K2Node_ComponentBoundEvent_3_OnTextCommitted__DelegateSignature(TEnumAsByte<ETextCommit> CommitMethod); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnIntroFinished(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__DiscoverSearchView_Creator_TileView_K2Node_ComponentBoundEvent_4_OnListEntryGeneratedDynamic__DelegateSignature(UUserWidget* Widget); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__DiscoverSearchView_Creator_WBP_UIKit_Tabs_K2Node_ComponentBoundEvent_6_OnTabSelected__DelegateSignature(FName TabID); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__DiscoverSearchView_Creator_WBP_UIKit_Tabs_K2Node_ComponentBoundEvent_8_OnTabButtonCreation__DelegateSignature(FName TabID, UCommonButtonBase* TabButton); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__DiscoverSearchView_Creator_WBP_UIKit_Tabs_K2Node_ComponentBoundEvent_9_OnTabInteraction__DelegateSignature(FName TabID, UMVVMViewModelBase* TabVM); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_DiscoverSearchView_Creator(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /DiscoveryBrowser/TabScreens/Search/DiscoverSearchView.DiscoverSearchView_C
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xC1 (0x4B1 - 0x3F0)
	class UDiscoverSearchView_C : public UCommonActivatableWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x3F0(0x8)
		UFortDiscoverSearchViewModel* FortDiscoverSearchViewModel; // 0x3F8(0x8)
		UFortDiscoverBrowseViewModel* FortDiscoverBrowseViewModel; // 0x400(0x8)
		UWidgetAnimation* Intro; // 0x408(0x8)
		UActivityBrowserBrowseView_VM_C* ActivityBrowserBrowseView_VM; // 0x410(0x8)
		UWBP_CaptureForPostBufferUpdate_C* CaptureForPostBufferUpdate; // 0x418(0x8)
		UWBP_UIKit_FilteredInputField_C* FilteredInputField; // 0x420(0x8)
		UImage* Image_SoftEdgeGradient_Islands; // 0x428(0x8)
		UImage* NebulousBackground; // 0x430(0x8)
		UGridPanel* ResultsGrid; // 0x438(0x8)
		UCommonRichTextBlock* RichResultsText; // 0x440(0x8)
		USafeZone* SafeZone; // 0x448(0x8)
		UCommonWidgetSwitcherLegacy* SearchResult_Switcher; // 0x450(0x8)
		UGridPanel* SearchSpinner; // 0x458(0x8)
		UCommonWidgetSwitcherLegacy* Switcher_CategoriesOrSearch; // 0x460(0x8)
		UFortActivityTileView* TileView_IslandsResults; // 0x468(0x8)
		UWBP_Discovery_NoResultsMessage_C* WBP_BlockedIslandResult; // 0x470(0x8)
		UWBP_BottomBarDecoyButton_C* WBP_BottomBarHack_Back; // 0x478(0x8)
		UWBP_BottomBarDecoyButton_C* WBP_BottomBarHack_BackToTop; // 0x480(0x8)
		UWBP_CaptureForPostBufferUpdate_C* WBP_CaptureForPostBufferUpdate; // 0x488(0x8)
		UWBP_LoadingMorePages_C* WBP_LoadingMorePages; // 0x490(0x8)
		UWBP_Discovery_NoResultsMessage_C* WBP_NoResults; // 0x498(0x8)
		UWBP_UIKit_Throbber_C* WBP_UIKit_Throbber; // 0x4A0(0x8)
		USoundBase* IntroWhooshSound; // 0x4A8(0x8)
		bool IsSearchActive; // 0x4B0(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/TabScreens/Search/DiscoverSearchView.DiscoverSearchView_C");
			return ret;
		}

		void SetMobileStyle(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void IsFullsizedOnScreen(UWidget* Widget, bool& IsFullSized); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnQueryingMorePages(bool IsQueryingNewPages); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetSearchInProgress(bool SearchInProgress); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UWidget BP_GetDesiredFocusTarget(); // Flags: Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetSearchResults(TArray<UFortDiscoverTileItemVM*>& SearchResultsArray); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetResultsTerm(FString ResultsTerm); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UWidget NavigateUpToTextEntry(EUINavigation Navigation); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UWidget NavigateDownToBrowseOrSearch(EUINavigation Navigation); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Switch Between Browse And Search Views(bool IsSearchActive); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Set Browse View VM(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void On Update Providers(TArray<UFortDiscoverProviderViewModel*>& ProvidersVM); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnDeactivated(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnActivated(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTileViewScrolled(float ItemOffset, float DistanceRemaining); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void TopLevelTabChanged(EFortUIFeature LeavingFeature, EFortUIFeature EnteringFeature); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__DiscoverSearchView_TileView_IslandsResults_K2Node_ComponentBoundEvent_0_OnListEntryGeneratedDynamic__DelegateSignature(UUserWidget* Widget); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__DiscoverSearchView_WBP_BottomBarHack_Back_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(UCommonButtonBase* Button); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__DiscoverSearchView_WBP_BottomBarHack_BackToTop_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature(UCommonButtonBase* Button); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnBackToTopClickedCategory(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__DiscoverSearchView_FilteredInputField_K2Node_ComponentBoundEvent_2_OnTextChanged__DelegateSignature(FText Text); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__DiscoverSearchView_FilteredInputField_K2Node_ComponentBoundEvent_3_OnTextCommitted__DelegateSignature(TEnumAsByte<ETextCommit> CommitMethod); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnIntroFinished(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_DiscoverSearchView(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /DiscoveryBrowser/TabScreens/DiscoverHome/DiscoverHomespace.DiscoverHomespace_C
	// Inherited from UFortDiscoverHomespace -> UScrollableActivatableWidget -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xD8 (0x4E8 - 0x410)
	class UDiscoverHomespace_C : public UFortDiscoverHomespace	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x410(0x8)
		UDiscoverSelectedActivityViewModel* DiscoverSelectedActivityViewModel; // 0x418(0x8)
		UWidgetAnimation* Anim_DisplayFadeOverlay; // 0x420(0x8)
		UWidgetAnimation* Anim_HomebarDetails; // 0x428(0x8)
		UWidgetAnimation* Anim_Homebar_Reveal; // 0x430(0x8)
		UWidgetAnimation* Anim_NebulousBGExitLeft; // 0x438(0x8)
		UWidgetAnimation* Anim_NebulousBGExitTop; // 0x440(0x8)
		UWidgetAnimation* Anim_NebulousBGEnterBottom; // 0x448(0x8)
		UWidgetAnimation* Anim_NebulousBGEnterRight; // 0x450(0x8)
		UWidgetAnimation* Anim_NebulousBGEnterLeft; // 0x458(0x8)
		UWidgetAnimation* Anim_DiscoverHome_Expand; // 0x460(0x8)
		UActivityDiscoverView_NEW_VM_C* ActivityDiscoverView_NEW_VM; // 0x468(0x8)
		UImage* BottomGradient; // 0x470(0x8)
		UWBP_BottomBarDecoyButton_C* Button_BackToTop_BottomBarHack; // 0x478(0x8)
		UCommonVisualAttachment* CommonVisualAttachment; // 0x480(0x8)
		UImage* HomeBarBacking; // 0x488(0x8)
		UImage* Image_BottomFade; // 0x490(0x8)
		UImage* Image_TopFade; // 0x498(0x8)
		UImage* NebulousBackground; // 0x4A0(0x8)
		UImage* TopBarGradient; // 0x4A8(0x8)
		UWBP_CaptureForPostBufferUpdate_C* WBP_CaptureForPostBufferUpdate; // 0x4B0(0x8)
		UWBP_HomeBarDetails_C* WBP_HomeBarDetails; // 0x4B8(0x8)
		UWBP_Blade_C* WBP_SlidingBlade; // 0x4C0(0x8)
		double CurrentScrollOffset; // 0x4C8(0x8)
		float Mask_Fade_Power_Parameter; // 0x4D0(0x4)
		bool bSafezoneTopEnabled; // 0x4D4(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x4D5(0x3) UNKNOWN PROPERTY
		double MaskFadePowerParameterMobile; // 0x4D8(0x8)
		double MaskFadePowerParameterMobileSafezone; // 0x4E0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/TabScreens/DiscoverHome/DiscoverHomespace.DiscoverHomespace_C");
			return ret;
		}

		void Setup Selected Tile For Library(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ActivcateMOTDWidget(bool Activate); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateVisualForArabic(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetShouldImmediateTransitionToHomebar(bool& ShouldImmediateTransition); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetShouldSkipMouseWheelDown(bool& ShouldSkipMouseWheelDown); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleInvalidActivityReasonChanged(EFortInvalidActivityReason InvalidActivityReason); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetDiscoverListScrollingAllowed(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetLobbyWidgetThenTransition(bool IsOnPlayView); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetIsLobbyActivatedWithNoModals(bool& IsLobbyActivated); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SelectCurrentActivityTile(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ContractBladeToLastPeekState(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleOnActivityRequested(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UWidget HandleNavigateUpFromDiscover(EUINavigation Navigation); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void TransitionToPlayLobby(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void TransitionToHomebar(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetupActivityMessage(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetupFriendsPlayingText(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetupIslandName(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetupSelectedActivityForIsland(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetupSelectedActivityForJoinableParty(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleSelectedActivityLoadingChanged(bool bLoading); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void InpActEvt_MouseScrollDown_K2Node_InputKeyEvent(FKey Key); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void InpActEvt_MouseScrollUp_K2Node_InputKeyEvent(FKey Key); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnListScrolled(double ItemOffset, double DistanceRemaining); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnBladeExpandStart(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnBladeContractStart(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnBladePeekButtonClicked(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnHomespaceTileClicked(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnDeactivated(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__DiscoverHomespace_Button_BackToTop_BottomBarHack_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(UCommonButtonBase* Button); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnBladeContractExpandAnimationFinished(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void TopLevelTabsChanged(EFortUIFeature LeavingFeature, EFortUIFeature EnteringFeature); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnActivated(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPeekPushPercentMobileCVarChanged(float PeekPushPercent); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleSwipeUp(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleSwipeDown(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnBladePeekStateAnimationFinished(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_DiscoverHomespace(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /DiscoveryBrowser/TabScreens/Library/DiscoverLibraryView.DiscoverLibraryView_C
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xAE (0x49E - 0x3F0)
	class UDiscoverLibraryView_C : public UCommonActivatableWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x3F0(0x8)
		UFortDiscoverSurfaceViewModel* FortDiscoverSurfaceViewModel; // 0x3F8(0x8)
		UCloseButton_C* Button_CloseTouch; // 0x400(0x8)
		UWBP_CaptureForPostBufferUpdate_C* CaptureForPostBufferUpdate; // 0x408(0x8)
		UCommonTextBlock* HeaderText; // 0x410(0x8)
		UImage* Image_HeaderSoftEdge; // 0x418(0x8)
		UImage* Image_HeaderSoftEdge_Bottom; // 0x420(0x8)
		UOverlay* LoadingResults_Spinner; // 0x428(0x8)
		USafeZone* MobileClose; // 0x430(0x8)
		USafeZone* SafeZone; // 0x438(0x8)
		UCommonActivatableWidgetSwitcher* Switcher_HasResultsEnum; // 0x440(0x8)
		USafeZone* SZ_LoadingMore; // 0x448(0x8)
		UOverlay* TileContainerOverlay; // 0x450(0x8)
		UFortActivityTileView* TileView_LibraryResults; // 0x458(0x8)
		UWBP_BottomBarDecoyButton_C* WBP_BottomBarDecoyButton_Back; // 0x460(0x8)
		UWBP_BottomBarDecoyButton_C* WBP_BottomBarDecoyButton_BackToTop; // 0x468(0x8)
		UWBP_Discovery_BlankTiles_RoundedCorners_C* WBP_Discovery_BlankTiles_RoundedCorners; // 0x470(0x8)
		UWBP_LoadingMorePages_C* WBP_LoadingMorePages; // 0x478(0x8)
		UWBP_UIKit_Tabs_C* WBP_UIKit_Tabs_LIBRARY; // 0x480(0x8)
		UWBP_UIKit_Throbber_C* WBP_UIKit_Throbber; // 0x488(0x8)
		USoundBase* IntroWhooshSound; // 0x490(0x8)
		int32_t PreviousSelectedTileIndex; // 0x498(0x4)
		bool IsEmpty; // 0x49C(0x1)
		bool isLibraryInHomeBar; // 0x49D(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/TabScreens/Library/DiscoverLibraryView.DiscoverLibraryView_C");
			return ret;
		}

		void SetBottomButtonIfHomeLibraryEnabled(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetMobileStyle(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UWidget BP_GetDesiredFocusTarget(); // Flags: Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SendSelectedSubViewEvent(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UWidget Navigate Left To Tabs(EUINavigation Navigation); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PopulateTabs(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnQueryingMorePages(bool IsQueryingNewPages); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Fill Out Tile View Data(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetNoResultsAndHeaderText(int32_t SelectedTabIndex); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnUpdateNew(TArray<UFortDiscoverProviderViewModel*>& ProviderOuterArrayVM, int32_t OuterIndex, TArray<UFortDiscoverTileItemVM*>& InnerArray); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnUpdateProviders(TArray<UFortDiscoverProviderViewModel*>& ProvidersVM); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetRecentlyPlayedHeaderText(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetRecentlyPlayedNoResultsText(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetFavoritesHeaderText(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetFavoritesNoResultsText(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnItemInitialized(UObject* Item, UUserWidget* Widget); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTileViewScrolled(float ItemOffset, float DistanceRemaining); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTabSelectedSwitchContent(FName TabID); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnActivated(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnDeactivated(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void TopLevelTabChanged(EFortUIFeature LeavingFeature, EFortUIFeature EnteringFeature); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__DiscoverLibraryView_TileView_LibraryResults_K2Node_ComponentBoundEvent_1_OnListEntryGeneratedDynamic__DelegateSignature(UUserWidget* Widget); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__DiscoverLibraryView_WBP_UIKit_Tabs_LIBRARY_K2Node_ComponentBoundEvent_5_OnTabSelected__DelegateSignature(FName TabID); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__DiscoverLibraryView_WBP_BottomBarDecoyButton_BackToTop_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(UCommonButtonBase* Button); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__DiscoverLibraryView_WBP_BottomBarDecoyButton_Back_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(UCommonButtonBase* Button); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__DiscoverLibraryView_Button_CloseTouch_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(UCommonButtonBase* Button); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInputMethodChanged(ECommonInputType bNewInputType); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_DiscoverLibraryView(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /DiscoveryBrowser/TabScreens/DiscoverHome/WBP_HomeBarDetails.WBP_HomeBarDetails_C
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x68 (0x318 - 0x2B0)
	class UWBP_HomeBarDetails_C : public UUserWidget	
	{
	public:
		UFortActivityViewModel* FortActivityViewModel; // 0x2B0(0x8)
		UHorizontalBox* HB_ActivityInfo; // 0x2B8(0x8)
		UHorizontalBox* HB_GameIsland_FriendCount; // 0x2C0(0x8)
		UHorizontalBox* HB_JP_FriendCount; // 0x2C8(0x8)
		UWBP_UIKit_Highlight_C* JP_IslandName; // 0x2D0(0x8)
		UWBP_UIKit_StatusIndicator_C* StatusIndicator_Locked; // 0x2D8(0x8)
		UCommonActivatableWidgetSwitcher* Switcher_GameDetailsContent; // 0x2E0(0x8)
		UCommonTextBlock* Text_Playing; // 0x2E8(0x8)
		UCommonTextBlock* Text_Playing; // 0x2F0(0x8)
		UCommonTextBlock* Text_SelectedTile; // 0x2F8(0x8)
		UWBP_UIKit_Badge_C* WBP_UIKit_Badge; // 0x300(0x8)
		UWBP_UIKit_Badge_C* WBP_UIKit_Badge; // 0x308(0x8)
		UWBP_UIKit_Highlight_C* WBP_UIKit_Highlight; // 0x310(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/TabScreens/DiscoverHome/WBP_HomeBarDetails.WBP_HomeBarDetails_C");
			return ret;
		}

		void SetFortActivityViewModel(UFortActivityViewModel* ViewModel); // Flags: Final|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetCurrentOrInvalidReasonText(EFortInvalidActivityReason InvalidActivityReason, bool IsCurrentActivity); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetFriendsCountText(int32_t FriendsCount); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /DiscoveryBrowser/TabScreens/Library/WBP_UIKit_Button_Tab_DiscoveryLibrary.WBP_UIKit_Button_Tab_DiscoveryLibrary_C
	// Inherited from UWBP_UIKit_Button_Selectable_C -> UWBP_UIKit_ButtonGeneric_Base_C -> UUIKitModularButton -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x1758 - 0x1750)
	class UWBP_UIKit_Button_Tab_DiscoveryLibrary_C : public UWBP_UIKit_Button_Selectable_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x1750(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/TabScreens/Library/WBP_UIKit_Button_Tab_DiscoveryLibrary.WBP_UIKit_Button_Tab_DiscoveryLibrary_C");
			return ret;
		}

		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnInputMethodChanged(ECommonInputType CurrentInputType); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_UIKit_Button_Tab_DiscoveryLibrary(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /DiscoveryBrowser/TabScreens/Library/WBP_UIKit_Block_SideNav_Tab_Background.WBP_UIKit_Block_SideNav_Tab_Background_C
	// Inherited from UWBP_UIKit_Block_BackgroundGeneric_C -> UWBP_UIKit_BlockBackground_Base_C -> UWBP_UIKit_Block_Base_C -> UUIKitBlock -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x390 - 0x370)
	class UWBP_UIKit_Block_SideNav_Tab_Background_C : public UWBP_UIKit_Block_BackgroundGeneric_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x370(0x8)
		UWidgetAnimation* Anim_SelectedFocused; // 0x378(0x8)
		UWidgetAnimation* Anim_UnhoverOutline; // 0x380(0x8)
		UWidgetAnimation* Anim_HoverOutline; // 0x388(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/TabScreens/Library/WBP_UIKit_Block_SideNav_Tab_Background.WBP_UIKit_Block_SideNav_Tab_Background_C");
			return ret;
		}

		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionFocusedRequested(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionUnfocusedRequested(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionSelectedRequested(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionDeselectedFocusedRequested(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionDeselectedIdleRequested(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInstantTransitionToEnabled(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInstantTransitionToSelected(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_UIKit_Block_SideNav_Tab_Background(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /DiscoveryBrowser/TabScreens/WBP_LoadingMorePages.WBP_LoadingMorePages_C
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x2C0 - 0x2B0)
	class UWBP_LoadingMorePages_C : public UUserWidget	
	{
	public:
		UOverlay* Overlay_LoadingMorePages; // 0x2B0(0x8)
		UWBP_UIKit_Throbber_C* WBP_UIKit_Throbber; // 0x2B8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/TabScreens/WBP_LoadingMorePages.WBP_LoadingMorePages_C");
			return ret;
		}

		void WBP_LoadingMorePages_AutoGenFunc(ESlateVisibility InVisibility); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
