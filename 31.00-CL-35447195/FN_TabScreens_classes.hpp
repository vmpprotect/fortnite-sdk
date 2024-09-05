#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: TabScreens
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class /DiscoveryBrowser/TabScreens/WBP_LoadingMorePages.WBP_LoadingMorePages_C
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x2C8 - 0x2B8)
	class UWBP_LoadingMorePages_C : public UUserWidget	
	{
	public:
		UOverlay Overlay_LoadingMorePages; // 0x2B8(0x8)
		UWBP_UIKit_Throbber_C WBP_UIKit_Throbber; // 0x2C0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/TabScreens/WBP_LoadingMorePages.WBP_LoadingMorePages_C");
			return ret;
		}

		void WBP_LoadingMorePages_AutoGenFunc(ESlateVisibility InVisibility); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D5F3B0300
	};


	// Class /DiscoveryBrowser/TabScreens/Library/WBP_UIKit_Block_SideNav_Tab_Background.WBP_UIKit_Block_SideNav_Tab_Background_C
	// Inherited from UWBP_UIKit_Block_BackgroundGeneric_C -> UWBP_UIKit_BlockBackground_Base_C -> UWBP_UIKit_Block_Base_C -> UUIKitBlock -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x398 - 0x378)
	class UWBP_UIKit_Block_SideNav_Tab_Background_C : public UWBP_UIKit_Block_BackgroundGeneric_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x378(0x8)
		UWidgetAnimation Anim_SelectedFocused; // 0x380(0x8)
		UWidgetAnimation Anim_UnhoverOutline; // 0x388(0x8)
		UWidgetAnimation Anim_HoverOutline; // 0x390(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/TabScreens/Library/WBP_UIKit_Block_SideNav_Tab_Background.WBP_UIKit_Block_SideNav_Tab_Background_C");
			return ret;
		}

		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D63335700
		void OnTransitionFocusedRequested(); // Flags: Event|Protected|BlueprintEvent 0x15D63335400
		void OnTransitionUnfocusedRequested(); // Flags: Event|Protected|BlueprintEvent 0x15D63335600
		void OnTransitionSelectedRequested(); // Flags: Event|Protected|BlueprintEvent 0x15D63335500
		void OnTransitionDeselectedFocusedRequested(); // Flags: Event|Protected|BlueprintEvent 0x15D63335200
		void OnTransitionDeselectedIdleRequested(); // Flags: Event|Protected|BlueprintEvent 0x15D63335300
		void OnInstantTransitionToEnabled(); // Flags: Event|Protected|BlueprintEvent 0x15D63335000
		void OnInstantTransitionToSelected(); // Flags: Event|Protected|BlueprintEvent 0x15D63335100
		void ExecuteUbergraph_WBP_UIKit_Block_SideNav_Tab_Background(int32_t EntryPoint); // Flags: Final 0x15D63334F00
	};


	// Class /DiscoveryBrowser/TabScreens/Library/WBP_UIKit_Button_Tab_DiscoveryLibrary.WBP_UIKit_Button_Tab_DiscoveryLibrary_C
	// Inherited from UWBP_UIKit_Button_Selectable_C -> UWBP_UIKit_ButtonGeneric_Base_C -> UUIKitModularButton -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x1740 - 0x1738)
	class UWBP_UIKit_Button_Tab_DiscoveryLibrary_C : public UWBP_UIKit_Button_Selectable_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x1738(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/TabScreens/Library/WBP_UIKit_Button_Tab_DiscoveryLibrary.WBP_UIKit_Button_Tab_DiscoveryLibrary_C");
			return ret;
		}

		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D63335C00
		void BP_OnInputMethodChanged(ECommonInputType CurrentInputType); // Flags: Event|Protected|BlueprintEvent 0x15D63334200
		void ExecuteUbergraph_WBP_UIKit_Button_Tab_DiscoveryLibrary(int32_t EntryPoint); // Flags: Final 0x15D63335B00
	};


	// Class /DiscoveryBrowser/TabScreens/DiscoverHome/WBP_HomeBarDetails.WBP_HomeBarDetails_C
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x68 (0x320 - 0x2B8)
	class UWBP_HomeBarDetails_C : public UUserWidget	
	{
	public:
		UFortActivityViewModel FortActivityViewModel; // 0x2B8(0x8)
		UHorizontalBox HB_ActivityInfo; // 0x2C0(0x8)
		UHorizontalBox HB_GameIsland_FriendCount; // 0x2C8(0x8)
		UHorizontalBox HB_JP_FriendCount; // 0x2D0(0x8)
		UWBP_UIKit_Highlight_C JP_IslandName; // 0x2D8(0x8)
		UWBP_UIKit_StatusIndicator_C StatusIndicator_Locked; // 0x2E0(0x8)
		UCommonActivatableWidgetSwitcher Switcher_GameDetailsContent; // 0x2E8(0x8)
		UCommonTextBlock Text_Playing; // 0x2F0(0x8)
		UCommonTextBlock Text_Playing; // 0x2F8(0x8)
		UCommonTextBlock Text_SelectedGameName; // 0x300(0x8)
		UWBP_UIKit_Badge_C WBP_UIKit_Badge; // 0x308(0x8)
		UWBP_UIKit_Badge_C WBP_UIKit_Badge; // 0x310(0x8)
		UWBP_UIKit_Highlight_C WBP_UIKit_Highlight; // 0x318(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/TabScreens/DiscoverHome/WBP_HomeBarDetails.WBP_HomeBarDetails_C");
			return ret;
		}

		void SetFortActivityViewModel(UFortActivityViewModel ViewModel); // Flags: Final|Public|BlueprintCallable|BlueprintEvent 0x15DB608BA00
		void SetCurrentOrInvalidReasonText(EFortInvalidActivityReason InvalidActivityReason, bool IsCurrentActivity); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15DB608BB00
		void SetFriendsCountText(int32_t FriendsCount); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15DB608B900
	};


	// Class /DiscoveryBrowser/TabScreens/Library/DiscoverLibraryView.DiscoverLibraryView_C
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8D (0x485 - 0x3F8)
	class UDiscoverLibraryView_C : public UCommonActivatableWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x3F8(0x8)
		UFortDiscoverSurfaceViewModel FortDiscoverSurfaceViewModel; // 0x400(0x8)
		UWBP_CaptureForPostBufferUpdate_C CaptureForPostBufferUpdate; // 0x408(0x8)
		UCommonTextBlock HeaderText; // 0x410(0x8)
		UImage Image_HeaderSoftEdge; // 0x418(0x8)
		UOverlay LoadingResults_Spinner; // 0x420(0x8)
		USafeZone SafeZone; // 0x428(0x8)
		UCommonActivatableWidgetSwitcher Switcher_HasResultsEnum; // 0x430(0x8)
		USafeZone SZ_LoadingMore; // 0x438(0x8)
		UOverlay TileContainerOverlay; // 0x440(0x8)
		UFortActivityTileView TileView_LibraryResults; // 0x448(0x8)
		UWBP_BottomBarDecoyButton_C WBP_BottomBarDecoyButton_BackToTop; // 0x450(0x8)
		UWBP_Discovery_BlankTiles_RoundedCorners_C WBP_Discovery_BlankTiles_RoundedCorners; // 0x458(0x8)
		UWBP_LoadingMorePages_C WBP_LoadingMorePages; // 0x460(0x8)
		UWBP_UIKit_Tabs_C WBP_UIKit_Tabs_LIBRARY; // 0x468(0x8)
		UWBP_UIKit_Throbber_C WBP_UIKit_Throbber; // 0x470(0x8)
		USoundBase IntroWhooshSound; // 0x478(0x8)
		int32_t PreviousSelectedTileIndex; // 0x480(0x4)
		bool IsEmpty; // 0x484(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/TabScreens/Library/DiscoverLibraryView.DiscoverLibraryView_C");
			return ret;
		}

		void SetMobileStyle(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB53EFF00
		UWidget BP_GetDesiredFocusTarget(); // Flags: Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const 0x15DB53ED800
		void SendSelectedSubViewEvent(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB53EC800
		UWidget Navigate Left To Tabs(EUINavigation Navigation); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15DB53ED200
		void PopulateTabs(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB53ECB00
		void OnQueryingMorePages(bool IsQueryingNewPages); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB53ED000
		void Fill Out Tile View Data(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB53ED300
		void SetNoResultsAndHeaderText(int32_t SelectedTabIndex); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB53EFE00
		void OnUpdateNew(TArray& ProviderOuterArrayVM, int32_t OuterIndex, TArray& InnerArray); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x15DB53ECD00
		void OnUpdateProviders(TArray& ProvidersVM); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15DB53ECC00
		void SetRecentlyPlayedHeaderText(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB53EFD00
		void SetRecentlyPlayedNoResultsText(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB53EFC00
		void SetFavoritesHeaderText(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB53EC700
		void SetFavoritesNoResultsText(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB53EC900
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15DB53ECA00
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15DB53ED500
		void OnItemInitialized(UObject Item, UUserWidget Widget); // Flags: BlueprintCallable|BlueprintEvent 0x15DB53ED100
		void OnTileViewScrolled(float ItemOffset, float DistanceRemaining); // Flags: BlueprintCallable|BlueprintEvent 0x15DB53ECE00
		void OnTabSelectedSwitchContent(FName TabID); // Flags: BlueprintCallable|BlueprintEvent 0x15DB53ECF00
		void BP_OnActivated(); // Flags: Event|Protected|BlueprintEvent 0x15DB53ED700
		void BP_OnDeactivated(); // Flags: Event|Protected|BlueprintEvent 0x15DB53ED600
		void TopLevelTabChanged(EFortUIFeature LeavingFeature, EFortUIFeature EnteringFeature); // Flags: BlueprintCallable|BlueprintEvent 0x15DB53EFB00
		void BndEvt__DiscoverLibraryView_TileView_LibraryResults_K2Node_ComponentBoundEvent_1_OnListEntryGeneratedDynamic__DelegateSignature(UUserWidget Widget); // Flags: BlueprintEvent 0x15DB53EDB00
		void BndEvt__DiscoverLibraryView_WBP_UIKit_Tabs_LIBRARY_K2Node_ComponentBoundEvent_5_OnTabSelected__DelegateSignature(FName TabID); // Flags: BlueprintEvent 0x15DB53ED900
		void BndEvt__DiscoverLibraryView_WBP_BottomBarDecoyButton_BackToTop_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(UCommonButtonBase Button); // Flags: BlueprintEvent 0x15DB53EDA00
		void ExecuteUbergraph_DiscoverLibraryView(int32_t EntryPoint); // Flags: Final 0x15DB53ED400
	};


	// Class /DiscoveryBrowser/TabScreens/DiscoverHome/DiscoverHomespace.DiscoverHomespace_C
	// Inherited from UFortDiscoverHomespace -> UScrollableActivatableWidget -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xD8 (0x4F0 - 0x418)
	class UDiscoverHomespace_C : public UFortDiscoverHomespace	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x418(0x8)
		UDiscoverSelectedActivityViewModel DiscoverSelectedActivityViewModel; // 0x420(0x8)
		UWidgetAnimation Anim_DisplayFadeOverlay; // 0x428(0x8)
		UWidgetAnimation Anim_HomebarDetails; // 0x430(0x8)
		UWidgetAnimation Anim_Homebar_Reveal; // 0x438(0x8)
		UWidgetAnimation Anim_NebulousBGExitLeft; // 0x440(0x8)
		UWidgetAnimation Anim_NebulousBGExitTop; // 0x448(0x8)
		UWidgetAnimation Anim_NebulousBGEnterBottom; // 0x450(0x8)
		UWidgetAnimation Anim_NebulousBGEnterRight; // 0x458(0x8)
		UWidgetAnimation Anim_NebulousBGEnterLeft; // 0x460(0x8)
		UWidgetAnimation Anim_DiscoverHome_Expand; // 0x468(0x8)
		UActivityDiscoverView_NEW_VM_C ActivityDiscoverView_NEW_VM; // 0x470(0x8)
		UImage BottomGradient; // 0x478(0x8)
		UWBP_BottomBarDecoyButton_C Button_BackToTop_BottomBarHack; // 0x480(0x8)
		UCommonVisualAttachment CommonVisualAttachment; // 0x488(0x8)
		UImage HomeBarBacking; // 0x490(0x8)
		UImage Image_BottomFade; // 0x498(0x8)
		UImage Image_TopFade; // 0x4A0(0x8)
		UImage NebulousBackground; // 0x4A8(0x8)
		UImage TopBarGradient; // 0x4B0(0x8)
		UWBP_CaptureForPostBufferUpdate_C WBP_CaptureForPostBufferUpdate; // 0x4B8(0x8)
		UWBP_HomeBarDetails_C WBP_HomeBarDetails; // 0x4C0(0x8)
		UWBP_Blade_C WBP_SlidingBlade; // 0x4C8(0x8)
		double CurrentScrollOffset; // 0x4D0(0x8)
		float Mask_Fade_Power_Parameter; // 0x4D8(0x4)
		bool bSafezoneTopEnabled; // 0x4DC(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x4DD(0x3) UNKNOWN PROPERTY
		double MaskFadePowerParameterMobile; // 0x4E0(0x8)
		double MaskFadePowerParameterMobileSafezone; // 0x4E8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/TabScreens/DiscoverHome/DiscoverHomespace.DiscoverHomespace_C");
			return ret;
		}

		void ActivcateMOTDWidget(bool Activate); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB6503E00
		void UpdateVisualForArabic(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB6505A00
		void GetShouldImmediateTransitionToHomebar(bool& ShouldImmediateTransition); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15DB6503500
		void GetShouldSkipMouseWheelDown(bool& ShouldSkipMouseWheelDown); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15DB6503400
		void HandleInvalidActivityReasonChanged(EFortInvalidActivityReason InvalidActivityReason); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB6503300
		void SetDiscoverListScrollingAllowed(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB6506300
		void GetLobbyWidgetThenTransition(bool IsOnPlayView); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15DB6503600
		void GetIsLobbyActivatedWithNoModals(bool& IsLobbyActivated); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15DB6503700
		void SelectCurrentActivityTile(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB6502200
		void ContractBladeToLastPeekState(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB6503900
		void HandleOnActivityRequested(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB6503100
		UWidget HandleNavigateUpFromDiscover(EUINavigation Navigation); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15DB6503200
		void TransitionToPlayLobby(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB6505B00
		void TransitionToHomebar(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB6505C00
		void SetupActivityMessage(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB6506200
		void SetupFriendsPlayingText(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB6506100
		void SetupIslandName(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15DB6506000
		void SetupSelectedActivityForIsland(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB6505F00
		void SetupSelectedActivityForJoinableParty(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB6505E00
		void HandleSelectedActivityLoadingChanged(bool bLoading); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15DB6503000
		void InpActEvt_MouseScrollDown_K2Node_InputKeyEvent(FKey Key); // Flags: BlueprintEvent 0x15DB6502D00
		void InpActEvt_MouseScrollUp_K2Node_InputKeyEvent(FKey Key); // Flags: BlueprintEvent 0x15DB6502C00
		void OnListScrolled(double ItemOffset, double DistanceRemaining); // Flags: BlueprintCallable|BlueprintEvent 0x15DB6502500
		void OnBladeExpandStart(); // Flags: BlueprintCallable|BlueprintEvent 0x15DB6502900
		void OnBladeContractStart(); // Flags: BlueprintCallable|BlueprintEvent 0x15DB6502A00
		void OnBladePeekButtonClicked(); // Flags: BlueprintCallable|BlueprintEvent 0x15DB6502800
		void OnHomespaceTileClicked(); // Flags: BlueprintCallable|BlueprintEvent 0x15DB6502600
		void BP_OnDeactivated(); // Flags: Event|Protected|BlueprintEvent 0x15DB6503B00
		void BndEvt__DiscoverHomespace_Button_BackToTop_BottomBarHack_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(UCommonButtonBase Button); // Flags: BlueprintEvent 0x15DB6503D00
		void OnBladeContractExpandAnimationFinished(); // Flags: BlueprintCallable|BlueprintEvent 0x15DB6502B00
		void TopLevelTabsChanged(EFortUIFeature LeavingFeature, EFortUIFeature EnteringFeature); // Flags: BlueprintCallable|BlueprintEvent 0x15DB6505D00
		void BP_OnActivated(); // Flags: Event|Protected|BlueprintEvent 0x15DB6503C00
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15DB6503A00
		void OnPeekPushPercentMobileCVarChanged(float PeekPushPercent); // Flags: Event|Protected|BlueprintEvent 0x15DB6502400
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15DB6502300
		void HandleSwipeUp(); // Flags: Event|Public|BlueprintEvent 0x15DB6502E00
		void HandleSwipeDown(); // Flags: Event|Public|BlueprintEvent 0x15DB6502F00
		void OnBladePeekStateAnimationFinished(); // Flags: BlueprintCallable|BlueprintEvent 0x15DB6502700
		void ExecuteUbergraph_DiscoverHomespace(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15DB6503800
	};


	// Class /DiscoveryBrowser/TabScreens/Search/DiscoverSearchView.DiscoverSearchView_C
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xC1 (0x4B9 - 0x3F8)
	class UDiscoverSearchView_C : public UCommonActivatableWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x3F8(0x8)
		UFortDiscoverSearchViewModel FortDiscoverSearchViewModel; // 0x400(0x8)
		UFortDiscoverBrowseViewModel FortDiscoverBrowseViewModel; // 0x408(0x8)
		UWidgetAnimation Intro; // 0x410(0x8)
		UActivityBrowserBrowseView_VM_C ActivityBrowserBrowseView_VM; // 0x418(0x8)
		UWBP_CaptureForPostBufferUpdate_C CaptureForPostBufferUpdate; // 0x420(0x8)
		UWBP_UIKit_FilteredInputField_C FilteredInputField; // 0x428(0x8)
		UImage Image_SoftEdgeGradient_Islands; // 0x430(0x8)
		UImage NebulousBackground; // 0x438(0x8)
		UGridPanel ResultsGrid; // 0x440(0x8)
		UCommonRichTextBlock RichResultsText; // 0x448(0x8)
		USafeZone SafeZone; // 0x450(0x8)
		UCommonWidgetSwitcherLegacy SearchResult_Switcher; // 0x458(0x8)
		UGridPanel SearchSpinner; // 0x460(0x8)
		UCommonWidgetSwitcherLegacy Switcher_CategoriesOrSearch; // 0x468(0x8)
		UFortActivityTileView TileView_IslandsResults; // 0x470(0x8)
		UWBP_Discovery_NoResultsMessage_C WBP_BlockedIslandResult; // 0x478(0x8)
		UWBP_BottomBarDecoyButton_C WBP_BottomBarHack_Back; // 0x480(0x8)
		UWBP_BottomBarDecoyButton_C WBP_BottomBarHack_BackToTop; // 0x488(0x8)
		UWBP_CaptureForPostBufferUpdate_C WBP_CaptureForPostBufferUpdate; // 0x490(0x8)
		UWBP_LoadingMorePages_C WBP_LoadingMorePages; // 0x498(0x8)
		UWBP_Discovery_NoResultsMessage_C WBP_NoResults; // 0x4A0(0x8)
		UWBP_UIKit_Throbber_C WBP_UIKit_Throbber; // 0x4A8(0x8)
		USoundBase IntroWhooshSound; // 0x4B0(0x8)
		bool IsSearchActive; // 0x4B8(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/TabScreens/Search/DiscoverSearchView.DiscoverSearchView_C");
			return ret;
		}

		void SetMobileStyle(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D62C67E00
		void IsFullsizedOnScreen(UWidget Widget, bool& IsFullsized); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D62C64600
		void OnQueryingMorePages(bool IsQueryingNewPages); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D62C68200
		void SetSearchInProgress(bool SearchInProgress); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D62C67C00
		UWidget BP_GetDesiredFocusTarget(); // Flags: Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const 0x15D62C64B00
		void SetSearchResults(TArray& SearchResultsArray); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D62C67B00
		void SetResultsTerm(FString ResultsTerm); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D62C67D00
		UWidget NavigateUpToTextEntry(EUINavigation Navigation); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D62C64400
		UWidget NavigateDownToBrowseOrSearch(EUINavigation Navigation); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D62C64500
		void Switch Between Browse And Search Views(bool IsSearchActive); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D62C67A00
		void Set Browse View VM(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D62C67F00
		void On Update Providers(TArray& ProvidersVM); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D62C64300
		void BP_OnDeactivated(); // Flags: Event|Protected|BlueprintEvent 0x15D62C64900
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D62C68000
		void BP_OnActivated(); // Flags: Event|Protected|BlueprintEvent 0x15D62C64A00
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D62C64800
		void OnTileViewScrolled(float ItemOffset, float DistanceRemaining); // Flags: BlueprintCallable|BlueprintEvent 0x15D62C68100
		void TopLevelTabChanged(EFortUIFeature LeavingFeature, EFortUIFeature EnteringFeature); // Flags: BlueprintCallable|BlueprintEvent 0x15D62C67900
		void BndEvt__DiscoverSearchView_TileView_IslandsResults_K2Node_ComponentBoundEvent_0_OnListEntryGeneratedDynamic__DelegateSignature(UUserWidget Widget); // Flags: BlueprintEvent 0x15D62C64E00
		void BndEvt__DiscoverSearchView_WBP_BottomBarHack_Back_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(UCommonButtonBase Button); // Flags: BlueprintEvent 0x15D62C64D00
		void BndEvt__DiscoverSearchView_WBP_BottomBarHack_BackToTop_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature(UCommonButtonBase Button); // Flags: BlueprintEvent 0x15D62C64C00
		void OnBackToTopClickedCategory(); // Flags: BlueprintCallable|BlueprintEvent 0x15D62C68400
		void BndEvt__DiscoverSearchView_FilteredInputField_K2Node_ComponentBoundEvent_2_OnTextChanged__DelegateSignature(FText Text); // Flags: BlueprintEvent 0x15D62C65000
		void BndEvt__DiscoverSearchView_FilteredInputField_K2Node_ComponentBoundEvent_3_OnTextCommitted__DelegateSignature(TEnumAsByte CommitMethod); // Flags: BlueprintEvent 0x15D62C64F00
		void OnIntroFinished(); // Flags: BlueprintCallable|BlueprintEvent 0x15D62C68300
		void ExecuteUbergraph_DiscoverSearchView(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D62C64700
	};


	// Class /DiscoveryBrowser/TabScreens/Library/DiscoverLibraryView_V2.DiscoverLibraryView_V2_C
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8D (0x485 - 0x3F8)
	class UDiscoverLibraryView_V2_C : public UCommonActivatableWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x3F8(0x8)
		UFortDiscoverSurfaceViewModel FortDiscoverSurfaceViewModel; // 0x400(0x8)
		UWBP_CaptureForPostBufferUpdate_C CaptureForPostBufferUpdate; // 0x408(0x8)
		UCommonTextBlock HeaderText; // 0x410(0x8)
		UImage Image_HeaderSoftEdge; // 0x418(0x8)
		UOverlay LoadingResults_Spinner; // 0x420(0x8)
		USafeZone SafeZone; // 0x428(0x8)
		UCommonActivatableWidgetSwitcher Switcher_HasResultsEnum; // 0x430(0x8)
		USafeZone SZ_LoadingMore; // 0x438(0x8)
		UOverlay TileContainerOverlay; // 0x440(0x8)
		UFortActivityTileView TileView_LibraryResults; // 0x448(0x8)
		UWBP_BottomBarDecoyButton_C WBP_BottomBarDecoyButton_BackToTop; // 0x450(0x8)
		UWBP_Discovery_BlankTiles_RoundedCorners_C WBP_Discovery_BlankTiles_RoundedCorners; // 0x458(0x8)
		UWBP_LoadingMorePages_C WBP_LoadingMorePages; // 0x460(0x8)
		UWBP_UIKit_Tabs_C WBP_UIKit_Tabs_LIBRARY; // 0x468(0x8)
		UWBP_UIKit_Throbber_C WBP_UIKit_Throbber; // 0x470(0x8)
		USoundBase IntroWhooshSound; // 0x478(0x8)
		int32_t PreviousSelectedTileIndex; // 0x480(0x4)
		bool IsEmpty; // 0x484(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/TabScreens/Library/DiscoverLibraryView_V2.DiscoverLibraryView_V2_C");
			return ret;
		}

		void SetMobileStyle(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D62C6A100
		UWidget BP_GetDesiredFocusTarget(); // Flags: Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const 0x15D62C67100
		void SendSelectedSubViewEvent(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D62C6A400
		UWidget Navigate Left To Tabs(EUINavigation Navigation); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D62C66B00
		void PopulateTabs(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D62C66400
		void OnQueryingMorePages(bool IsQueryingNewPages); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D62C66900
		void Fill Out Tile View Data(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D62C66C00
		void SetNoResultsAndHeaderText(int32_t SelectedTabIndex); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D62C6A000
		void OnUpdateNew(TArray& ProviderOuterArrayVM, int32_t OuterIndex, TArray& InnerArray); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x15D62C66600
		void OnUpdateProviders(TArray& ProvidersVM); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D62C66500
		void SetRecentlyPlayedHeaderText(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D62C69F00
		void SetRecentlyPlayedNoResultsText(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D62C69E00
		void SetFavoritesHeaderText(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D62C6A300
		void SetFavoritesNoResultsText(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D62C6A200
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D62C6A500
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D62C66E00
		void OnItemInitialized(UObject Item, UUserWidget Widget); // Flags: BlueprintCallable|BlueprintEvent 0x15D62C66A00
		void OnTileViewScrolled(float ItemOffset, float DistanceRemaining); // Flags: BlueprintCallable|BlueprintEvent 0x15D62C66700
		void OnTabSelectedSwitchContent(FName TabID); // Flags: BlueprintCallable|BlueprintEvent 0x15D62C66800
		void BP_OnActivated(); // Flags: Event|Protected|BlueprintEvent 0x15D62C67000
		void BP_OnDeactivated(); // Flags: Event|Protected|BlueprintEvent 0x15D62C66F00
		void TopLevelTabChanged(EFortUIFeature LeavingFeature, EFortUIFeature EnteringFeature); // Flags: BlueprintCallable|BlueprintEvent 0x15D62C69D00
		void BndEvt__DiscoverLibraryView_TileView_LibraryResults_K2Node_ComponentBoundEvent_1_OnListEntryGeneratedDynamic__DelegateSignature(UUserWidget Widget); // Flags: BlueprintEvent 0x15D62C67400
		void BndEvt__DiscoverLibraryView_WBP_UIKit_Tabs_LIBRARY_K2Node_ComponentBoundEvent_5_OnTabSelected__DelegateSignature(FName TabID); // Flags: BlueprintEvent 0x15D62C67200
		void BndEvt__DiscoverLibraryView_WBP_BottomBarDecoyButton_BackToTop_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(UCommonButtonBase Button); // Flags: BlueprintEvent 0x15D62C67300
		void ExecuteUbergraph_DiscoverLibraryView_V2(int32_t EntryPoint); // Flags: Final 0x15D62C66D00
	};


	// Class /DiscoveryBrowser/TabScreens/Search/DiscoverSearchView_Creator.DiscoverSearchView_Creator_C
	// Inherited from UFortPolymorphicTileView -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xF9 (0x4F9 - 0x400)
	class UDiscoverSearchView_Creator_C : public UFortPolymorphicTileView	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x8)
		UFortDiscoverSearchViewModel FortDiscoverSearchViewModel; // 0x408(0x8)
		UFortDiscoverBrowseViewModel FortDiscoverBrowseViewModel; // 0x410(0x8)
		UWidgetAnimation Intro; // 0x418(0x8)
		UActivityBrowserBrowseView_VM_C ActivityBrowserBrowseView_VM; // 0x420(0x8)
		UWBP_CaptureForPostBufferUpdate_C CaptureForPostBufferUpdate; // 0x428(0x8)
		UCommonWidgetSwitcherLegacy CommonWidgetSwitcher_Results; // 0x430(0x8)
		UWBP_UIKit_FilteredInputField_C FilteredInputField; // 0x438(0x8)
		UImage Image_SearchRectangle; // 0x440(0x8)
		UImage Image_SoftEdgeGradient_Islands; // 0x448(0x8)
		UImage NebulousBackground; // 0x450(0x8)
		UGridPanel ResultsGrid; // 0x458(0x8)
		UCommonRichTextBlock RichResultsText; // 0x460(0x8)
		USafeZone SafeZone; // 0x468(0x8)
		UCommonWidgetSwitcherLegacy SearchResult_Switcher; // 0x470(0x8)
		UGridPanel SearchSpinner; // 0x478(0x8)
		UCommonWidgetSwitcherLegacy Switcher_CategoriesOrSearch; // 0x480(0x8)
		UVerticalBox VerticalBox_IslandBox; // 0x488(0x8)
		UWBP_BottomBarDecoyButton_C WBP_BottomBarHack_Back; // 0x490(0x8)
		UWBP_BottomBarDecoyButton_C WBP_BottomBarHack_BackToTop; // 0x498(0x8)
		UWBP_CaptureForPostBufferUpdate_C WBP_CaptureForPostBufferUpdate; // 0x4A0(0x8)
		UWBP_LoadingMorePages_C WBP_LoadingMorePages; // 0x4A8(0x8)
		UWBP_Discovery_NoResultsMessage_C WBP_NoResults_SearchResults; // 0x4B0(0x8)
		UWBP_Row_Header_C WBP_Row_Header; // 0x4B8(0x8)
		UWBP_UIKit_Tabs_C WBP_UIKit_Tabs; // 0x4C0(0x8)
		UWBP_UIKit_Throbber_C WBP_UIKit_Throbber; // 0x4C8(0x8)
		USoundBase IntroWhooshSound; // 0x4D0(0x8)
		bool IsSearchActive; // 0x4D8(0x1)
		EDiscoverSearchMode SearchMode; // 0x4D9(0x1)
		unsigned char UnknownData01_6[0x6]; // 0x4DA(0x6) UNKNOWN PROPERTY
		TArray TabBlockTextArray; // 0x4E0(0x10)
		int32_t TEMP_IslandResultCount; // 0x4F0(0x4)
		int32_t TEMP_CreatorResultCount; // 0x4F4(0x4)
		bool IsTileViewDataEmpty; // 0x4F8(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/TabScreens/Search/DiscoverSearchView_Creator.DiscoverSearchView_Creator_C");
			return ret;
		}

		void __Setter_SearchMode(EDiscoverSearchMode NewValue); // Flags: BlueprintCallable|BlueprintEvent 0x15D62C69B00
		void PopulateTabs(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D62C6C200
		void Set Bottom Bar Button Visibility(bool IsVisible); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D62C6C000
		UWidget Navigate Up from Results(EUINavigation Navigation); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D62C68900
		UWidget Navigate Down To Results(EUINavigation Navigation); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D62C68A00
		void Set Tab Result Count(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D62C6BC00
		void Set No Result Text(int32_t TabIndex); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D62C6BD00
		void Fill Out TileView Data(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D62C68D00
		void Set Material Instance Parameters(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D62C6BE00
		void SetRowHeaderText(int32_t TabIndex); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D62C6B700
		void Populate Additional Tab Content(FName TabID, UCommonButtonBase TabButton); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D62C6C300
		void SetCreatorSearchInProgress(bool SearchInProgress); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D62C6BB00
		void SetIslandSearchInProgress(bool SearchInProgress); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D62C6BA00
		UClass GetDesiredEntryClassForItem(UObject Item); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D62C68C00
		void SetMobileStyle(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D62C6B900
		void IsFullsizedOnScreen(UWidget Widget, bool& IsFullsized); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D62C68B00
		void OnQueryingMorePages(bool IsQueryingNewPages); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D62C6C500
		void SetSearchInProgress(bool SearchInProgress); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D62C6B600
		UWidget BP_GetDesiredFocusTarget(); // Flags: Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const 0x15D62C69200
		void SetSearchResults(TArray& SearchResultsArray); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D62C6B500
		void SetResultsTerm(FString ResultsTerm); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D62C6B800
		UWidget NavigateUpToTextEntry(EUINavigation Navigation); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D62C68700
		UWidget NavigateDownToBrowseOrSearch(EUINavigation Navigation); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D62C68800
		void Switch Between Browse And Search Views(bool IsSearchActive); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D62C6B400
		void Set Browse View VM(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D62C6BF00
		void On Update Providers(TArray& ProvidersVM); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D62C68600
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D62C68F00
		void BP_OnActivated(); // Flags: Event|Protected|BlueprintEvent 0x15D62C69100
		void BP_OnDeactivated(); // Flags: Event|Protected|BlueprintEvent 0x15D62C69000
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D62C6C100
		void OnTileViewScrolled(float ItemOffset, float DistanceRemaining); // Flags: BlueprintCallable|BlueprintEvent 0x15D62C6C400
		void TopLevelTabChanged(EFortUIFeature LeavingFeature, EFortUIFeature EnteringFeature); // Flags: BlueprintCallable|BlueprintEvent 0x15D62C6B300
		void BndEvt__DiscoverSearchView_WBP_BottomBarHack_Back_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(UCommonButtonBase Button); // Flags: BlueprintEvent 0x15D62C69400
		void BndEvt__DiscoverSearchView_WBP_BottomBarHack_BackToTop_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature(UCommonButtonBase Button); // Flags: BlueprintEvent 0x15D62C69300
		void OnBackToTopClickedCategory(); // Flags: BlueprintCallable|BlueprintEvent 0x15D62C68500
		void BndEvt__DiscoverSearchView_FilteredInputField_K2Node_ComponentBoundEvent_2_OnTextChanged__DelegateSignature(FText Text); // Flags: BlueprintEvent 0x15D62C69600
		void BndEvt__DiscoverSearchView_FilteredInputField_K2Node_ComponentBoundEvent_3_OnTextCommitted__DelegateSignature(TEnumAsByte CommitMethod); // Flags: BlueprintEvent 0x15D62C69500
		void OnIntroFinished(); // Flags: BlueprintCallable|BlueprintEvent 0x15D62C6C600
		void BndEvt__DiscoverSearchView_Creator_TileView_K2Node_ComponentBoundEvent_4_OnListEntryGeneratedDynamic__DelegateSignature(UUserWidget Widget); // Flags: BlueprintEvent 0x15D62C69A00
		void BndEvt__DiscoverSearchView_Creator_WBP_UIKit_Tabs_K2Node_ComponentBoundEvent_6_OnTabSelected__DelegateSignature(FName TabID); // Flags: BlueprintEvent 0x15D62C69900
		void BndEvt__DiscoverSearchView_Creator_WBP_UIKit_Tabs_K2Node_ComponentBoundEvent_8_OnTabButtonCreation__DelegateSignature(FName TabID, UCommonButtonBase TabButton); // Flags: BlueprintEvent 0x15D62C69800
		void BndEvt__DiscoverSearchView_Creator_WBP_UIKit_Tabs_K2Node_ComponentBoundEvent_9_OnTabInteraction__DelegateSignature(FName TabID, UMVVMViewModelBase TabVM); // Flags: BlueprintEvent 0x15D62C69700
		void ExecuteUbergraph_DiscoverSearchView_Creator(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D62C68E00
	};


	// Class /DiscoveryBrowser/TabScreens/Search/WBP_SearchWrapper.WBP_SearchWrapper_C
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x408 - 0x3F8)
	class UWBP_SearchWrapper_C : public UCommonActivatableWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x3F8(0x8)
		UOverlay Overlay_Content; // 0x400(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/TabScreens/Search/WBP_SearchWrapper.WBP_SearchWrapper_C");
			return ret;
		}

		void UpdateContent(UCommonActivatableWidget ConstructRef); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D62C6A700
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D62C6A800
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D62C6AA00
		void ExecuteUbergraph_WBP_SearchWrapper(int32_t EntryPoint); // Flags: Final 0x15D62C6A900
	};


	// Class /DiscoveryBrowser/TabScreens/Library/DiscoverLibraryView_Wrapper.DiscoverLibraryView_Wrapper_C
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x408 - 0x3F8)
	class UDiscoverLibraryView_Wrapper_C : public UCommonActivatableWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x3F8(0x8)
		UOverlay OverlayContent; // 0x400(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/TabScreens/Library/DiscoverLibraryView_Wrapper.DiscoverLibraryView_Wrapper_C");
			return ret;
		}

		void UpdateContent(UCommonActivatableWidget ConstructRef); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D62C6E600
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D62C6A600
		void ExecuteUbergraph_DiscoverLibraryView_Wrapper(int32_t EntryPoint); // Flags: Final 0x15D62C6E700
	};

}
