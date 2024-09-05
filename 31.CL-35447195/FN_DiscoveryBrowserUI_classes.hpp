#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: DiscoveryBrowserUI
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class DiscoveryBrowserUI.DiscoverSelectedActivityViewModel
	// Inherited from UMVVMViewModelBase -> UObject
	// Size: 0x30 (0x98 - 0x68)
	class UDiscoverSelectedActivityViewModel : public UMVVMViewModelBase	
	{
	public:
		bool bLoading; // 0x68(0x1)
		bool bHasPartyData; // 0x69(0x1)
		bool bIsLibrary; // 0x6A(0x1)
		bool bIsActiveInvite; // 0x6B(0x1)
		bool bIsPartyPrivate; // 0x6C(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x6D(0x3) UNKNOWN PROPERTY
		int32_t CurrentPartySize; // 0x70(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x74(0x4) UNKNOWN PROPERTY
		FText RichPresenceText; // 0x78(0x10)
		UFortActivityViewModel ActivityVM; // 0x88(0x8)
		unsigned char UnknownData05_7[0x8]; // 0x90(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DiscoveryBrowserUI.DiscoverSelectedActivityViewModel");
			return ret;
		}
	};


	// Class DiscoveryBrowserUI.FortActivityBrowserTileBase
	// Inherited from UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x60 (0x13F0 - 0x1390)
	class UFortActivityBrowserTileBase : public UCommonButtonBase	
	{
	public:
		unsigned char UnknownData01_1[0x60]; // 0x1390(0x60) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DiscoveryBrowserUI.FortActivityBrowserTileBase");
			return ret;
		}
	};


	// Class DiscoveryBrowserUI.FortActivityBrowserLibraryTile
	// Inherited from UFortActivityBrowserTileBase -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x1400 - 0x13F0)
	class UFortActivityBrowserLibraryTile : public UFortActivityBrowserTileBase	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0x13F0(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DiscoveryBrowserUI.FortActivityBrowserLibraryTile");
			return ret;
		}
	};


	// Class DiscoveryBrowserUI.FortActivityListItemWrapper
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UFortActivityListItemWrapper : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0x28(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DiscoveryBrowserUI.FortActivityListItemWrapper");
			return ret;
		}
	};


	// Class DiscoveryBrowserUI.FortActivityBrowserRow
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xE8 (0x3C8 - 0x2E0)
	class UFortActivityBrowserRow : public UCommonUserWidget	
	{
	public:
		unsigned char UnknownData04_3[0x18]; // 0x2E0(0x18) UNKNOWN PROPERTY
		float MinimumVisibilityPercentageForRowActivation; // 0x2F8(0x4)
		unsigned char UnknownData05_6[0x4]; // 0x2FC(0x4) UNKNOWN PROPERTY
		UFortDiscoverItemSelectorBase OverrideItemSelector; // 0x300(0x8)
		unsigned char UnknownData06_6[0xB0]; // 0x308(0xB0) UNKNOWN PROPERTY
		UCommonTextBlock Text_CategoryName; // 0x3B8(0x8)
		unsigned char UnknownData07_7[0x8]; // 0x3C0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DiscoveryBrowserUI.FortActivityBrowserRow");
			return ret;
		}

		void OnRowPeekStateChanged(bool bIsInPeekState); // Flags: Event|Protected|BlueprintEvent 0x7FF414DDB580
		void OnRowMoveUp(bool bMovingOffscreen); // Flags: Event|Protected|BlueprintEvent 0x7FF414DDB4A0
		void OnRowMoveDown(bool bMovingOffscreen); // Flags: Event|Protected|BlueprintEvent 0x7FF414DDB3C0
		void OnRowIsSelectedChanged(bool bIsSelected); // Flags: Event|Protected|BlueprintEvent 0x7FF414DDB2E0
		void OnRowIsActiveChanged(bool bIsActive); // Flags: Event|Protected|BlueprintEvent 0x7FF414DDB200
		void OnOverrideItemSelectorSet(UFortDiscoverItemSelectorBase ItemSelector); // Flags: Event|Protected|BlueprintEvent 0x7FF414DDB120
		void OnCategoryTextChanged(FText& CategoryText, FText& CategorySubtitle); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414DDB040
		void OnCategoryItemChanged(bool bPlayAnimation); // Flags: Event|Protected|BlueprintEvent 0x7FF414DDAF60
		int32_t GetNumDisplayedSubRows(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x7FF414DDAE80
		bool GetIsSelected(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DDADA0
		bool GetIsInPeekState(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DDACC0
		bool GetIsActive(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DDABE0
	};


	// Class DiscoveryBrowserUI.FortDiscoverBrowserGridRow
	// Inherited from UFortActivityBrowserRow -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x18 (0x3E0 - 0x3C8)
	class UFortDiscoverBrowserGridRow : public UFortActivityBrowserRow	
	{
	public:
		unsigned char UnknownData03_3[0x8]; // 0x3C8(0x8) UNKNOWN PROPERTY
		int32_t ItemIndexRepresented; // 0x3D0(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x3D4(0x4) UNKNOWN PROPERTY
		bool bSupportLessThanMaxVisibleSubRows; // 0x3D8(0x1)
		unsigned char UnknownData05_7[0x7]; // 0x3D9(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DiscoveryBrowserUI.FortDiscoverBrowserGridRow");
			return ret;
		}

		void UpdateAnalyticsStates(bool bStopImpressions); // Flags: Event|Public|BlueprintEvent 0x7FF414DDBC80
		void SetMaxVisibleRows(int32_t MaxRowsShown); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DDBBA0
		void SetFocusOffset(int32_t FocusOffset, bool bSelectFromBelow); // Flags: Event|Public|BlueprintEvent 0x7FF414DDBAC0
		void NavigateWithinGrid(int32_t Row); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DDB9E0
		void HandleActivitySelected(int32_t Index, int32_t IndexInRow); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DDB900
		bool GetSupportsLessThanMaxVisibleRows(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DDB820
		int32_t GetNumberOfVisibleSubRows(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DDB740
		int32_t GetFirstVisibleSubRow(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DDB660
	};


	// Class DiscoveryBrowserUI.FortDiscoverHomespace
	// Inherited from UScrollableActivatableWidget -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x418 - 0x418)
	class UFortDiscoverHomespace : public UScrollableActivatableWidget	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DiscoveryBrowserUI.FortDiscoverHomespace");
			return ret;
		}

		void SendHomespaceSubviewEvent(UWidget SubWidget, FString Text); // Flags: Final|Native|Protected|BlueprintCallable|Const 0x7FF414DDBE40
		void OnPeekPushPercentMobileCVarChanged(float PeekPushPercent); // Flags: Event|Protected|BlueprintEvent 0x7FF414DDBD60
	};


	// Class DiscoveryBrowserUI.FortDiscoverPreviewManager
	// Inherited from UObject
	// Size: 0xC8 (0xF0 - 0x28)
	class UFortDiscoverPreviewManager : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0xC8]; // 0x28(0xC8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DiscoveryBrowserUI.FortDiscoverPreviewManager");
			return ret;
		}
	};


	// Class DiscoveryBrowserUI.FortActivityBrowserColorSchemeAsset
	// Inherited from UDataAsset -> UObject
	// Size: 0x50 (0x80 - 0x30)
	class UFortActivityBrowserColorSchemeAsset : public UDataAsset	
	{
	public:
		TMap MaterialCollectionOverrides; // 0x30(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DiscoveryBrowserUI.FortActivityBrowserColorSchemeAsset");
			return ret;
		}
	};


	// Class DiscoveryBrowserUI.FortActivityBrowserListView
	// Inherited from UListViewBase -> UWidget -> UVisual -> UObject
	// Size: 0x240 (0x4C8 - 0x288)
	class UFortActivityBrowserListView : public UListViewBase	
	{
	public:
		unsigned char UnknownData03_3[0xE8]; // 0x288(0xE8) UNKNOWN PROPERTY
		float DirectionalNavigationTimeThreshold; // 0x370(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x374(0x4) UNKNOWN PROPERTY
		UClass DiscoverItemRowClass; // 0x378(0x8)
		UClass HomebarItemRowClass; // 0x380(0x8)
		UClass NonScrollingItemRowClass; // 0x388(0x8)
		TMap RowTypes; // 0x390(0x50)
		UFortDiscoverItemSelectorBase OverrideItemSelector; // 0x3E0(0x8)
		bool bAllowNonFullGridRows; // 0x3E8(0x1)
		bool bUseTinyOffsetWhenScrollingIntoView; // 0x3E9(0x1)
		bool bAllowInternalRowSelection; // 0x3EA(0x1)
		unsigned char UnknownData05_7[0xDD]; // 0x3EB(0xDD) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DiscoveryBrowserUI.FortActivityBrowserListView");
			return ret;
		}

		void SetAllowInternalRowSelection(bool bInAllowInternalRowSelection); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DDC2A0
		void ScrollToTopOfSelectedCategory(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DDC1C0
		bool NavigateToCategory(FName ActivityCategoryName, bool bAnimateScroll); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DDC0E0
		void NavigateToActivityInFirstRow(int32_t ActivityItemIndex, bool bRequestNavigationToItem); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DDC000
		void HandleVisibleEntriesChanged(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414DDBF20
	};


	// Class DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile
	// Inherited from UFortActivityBrowserTileBase -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xD0 (0x14C0 - 0x13F0)
	class UFortActivityBrowserPlayWithFriendsTile : public UFortActivityBrowserTileBase	
	{
	public:
		int32_t MaxNamesToDisplay; // 0x13F0(0x4)
		int32_t MaxPortraitsToDisplay; // 0x13F4(0x4)
		unsigned char UnknownData05_6[0x10]; // 0x13F8(0x10) UNKNOWN PROPERTY
		UFortJoinablePartyPortraitsDisplay PartyMembersAvatarsDisplay; // 0x1408(0x8)
		bool bIsActiveInvite; // 0x1410(0x1)
		unsigned char UnknownData06_6[0x3]; // 0x1411(0x3) UNKNOWN PROPERTY
		int32_t CurrentPartySize; // 0x1414(0x4)
		bool bIsPartyPrivate; // 0x1418(0x1)
		unsigned char UnknownData07_6[0x7]; // 0x1419(0x7) UNKNOWN PROPERTY
		UFortGameActivity CachedGameActivity; // 0x1420(0x8)
		unsigned char UnknownData08_6[0x10]; // 0x1428(0x10) UNKNOWN PROPERTY
		TWeakObjectPtr CachedTargetSocialUser; // 0x1438(0x8)
		FText CurrentCTAButtonText; // 0x1440(0x10)
		FText JoinPartyText; // 0x1450(0x10)
		FText RequestToJoinText; // 0x1460(0x10)
		FDataTableRowHandle JoinFriendInputAction_Touch; // 0x1470(0x10)
		unsigned char UnknownData09_7[0x40]; // 0x1480(0x40) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile");
			return ret;
		}

		void UpdateSingleFriendName(FText& SingleFriendName); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414DDD260
		void UpdateRichPresence(FText& RichPresence); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414DDD180
		void UpdatePartyMemberNames(FText& Names); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414DDD0A0
		void UpdateOtherPlayersSubText(FText& OtherPlayersSubText); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414DDCFC0
		void UpdateLastInteraction(FText& LastInteraction); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414DDCEE0
		void UpdateIslandThumbnail(UTexture ThumbnailTexture); // Flags: Event|Protected|BlueprintEvent 0x7FF414DDCE00
		void UpdateCTAButtonInteraction(bool bIsInteractionEnabled); // Flags: Event|Protected|BlueprintEvent 0x7FF414DDCD20
		void UpdateCTAButtonInfo(FText& InteractionText, bool bInteractionFound); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414DDCC40
		void OpenSidebar(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414DDCB60
		void OnUpdateColumnSize(int32_t NewColumnSize); // Flags: Event|Protected|BlueprintEvent 0x7FF414DDCA80
		void OnTileActiveChanged(bool bIsTileActive); // Flags: Event|Protected|BlueprintEvent 0x7FF414DDC9A0
		void OnTextureLoadingComplete(UTexture ThumbnailTexture); // Flags: Event|Protected|BlueprintEvent 0x7FF414DDC8C0
		void OnTextureBeginLoading(); // Flags: Event|Protected|BlueprintEvent 0x7FF414DDC7E0
		void OnGameActivityChanged(UFortGameActivity GameActivity); // Flags: Event|Protected|BlueprintEvent 0x7FF414DDC700
		void HandleCTAButtonClicked(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414DDC620
		int32_t GetMaxPartySize(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414DDC540
		FText GetCTAButtonText(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DDC460
		void BP_PartyInformationUpdated(bool bInIsTileSelected); // Flags: Event|Protected|BlueprintEvent 0x7FF414DDC380
	};


	// Class DiscoveryBrowserUI.FortActivityBrowserRowList
	// Inherited from UFortActivityBrowserRow -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x3E8 - 0x3C8)
	class UFortActivityBrowserRowList : public UFortActivityBrowserRow	
	{
	public:
		UFortActivityListView ListView_Activities; // 0x3C8(0x8)
		UCommonButtonBase Button_PageLeft; // 0x3D0(0x8)
		UCommonButtonBase Button_PageRight; // 0x3D8(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x3E0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DiscoveryBrowserUI.FortActivityBrowserRowList");
			return ret;
		}

		void OnQueryStatusChanged(bool bIsActive); // Flags: Event|Public|BlueprintEvent 0x7FF414DDD340
	};


	// Class DiscoveryBrowserUI.FortActivityBrowserView
	// Inherited from UFortActivityView -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xD0 (0x518 - 0x448)
	class UFortActivityBrowserView : public UFortActivityView	
	{
	public:
		bool bShowCustomMatchmakingModalButton; // 0x448(0x1)
		bool bShowSpectateMatchModalButton; // 0x449(0x1)
		bool bShowMobileGameDetailsButton; // 0x44A(0x1)
		bool bShowMobileAcceptButton; // 0x44B(0x1)
		bool bShowBackToTopButton; // 0x44C(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x44D(0x3) UNKNOWN PROPERTY
		FName DiscoverySurfaceName; // 0x450(0x4)
		unsigned char UnknownData03_7[0xC4]; // 0x454(0xC4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DiscoveryBrowserUI.FortActivityBrowserView");
			return ret;
		}

		void OnSurfaceDataDirty(); // Flags: Event|Protected|BlueprintEvent 0x7FF414DDD500
		EFortInvalidActivityReason GetInvalidActivityReason(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DDD420
	};


	// Class DiscoveryBrowserUI.FortActivityBrowserRowView
	// Inherited from UFortActivityBrowserView -> UFortActivityView -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x1A8 (0x6C0 - 0x518)
	class UFortActivityBrowserRowView : public UFortActivityBrowserView	
	{
	public:
		unsigned char UnknownData05_3[0x8]; // 0x518(0x8) UNKNOWN PROPERTY
		float MouseWheelScrollTimeThreshold; // 0x520(0x4)
		unsigned char UnknownData06_6[0x4]; // 0x524(0x4) UNKNOWN PROPERTY
		UFortActivityBrowserListView BrowserList_Activities; // 0x528(0x8)
		unsigned char UnknownData07_6[0x60]; // 0x530(0x60) UNKNOWN PROPERTY
		FName TabNameID; // 0x590(0x4)
		unsigned char UnknownData08_6[0xC]; // 0x594(0xC) UNKNOWN PROPERTY
		FFortTabButtonLabelInfo TabButtonLabelInfo; // 0x5A0(0xF0)
		UFortSwipePanel SwipePanel_Navigation; // 0x690(0x8)
		TArray ActivityProviderFilter; // 0x698(0x10)
		EActivityBrowserFilterType ActivityProviderFilterType; // 0x6A8(0x1)
		unsigned char UnknownData09_7[0x17]; // 0x6A9(0x17) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DiscoveryBrowserUI.FortActivityBrowserRowView");
			return ret;
		}

		void SetActivityProviderFilter(TArray PanelNames, EActivityBrowserFilterType FilterType); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DDDA40
		void OnRowChanged(int32_t NewCategoryIndex); // Flags: Event|Public|BlueprintEvent 0x7FF414DDD960
		void OnQueryActivitiesFinished(); // Flags: Event|Public|BlueprintEvent 0x7FF414DDD880
		void OnListViewScrolled(float ItemOffset, float DistanceRemaining); // Flags: Event|Public|BlueprintEvent 0x7FF414DDD7A0
		void OnActivityUpdated(); // Flags: Event|Public|BlueprintEvent 0x7FF414DDD6C0
		void HandleVerticalSwipe(int32_t Direction); // Flags: Final|Native|Private|BlueprintCallable 0x7FF414DDD5E0
	};


	// Class DiscoveryBrowserUI.FortActivityBrowserTile
	// Inherited from UFortActivityBrowserTileBase -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x60 (0x1450 - 0x13F0)
	class UFortActivityBrowserTile : public UFortActivityBrowserTileBase	
	{
	public:
		UFortActivityTileDetailsDisplay Display_TileDetails; // 0x13F0(0x8)
		unsigned char UnknownData01_7[0x58]; // 0x13F8(0x58) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DiscoveryBrowserUI.FortActivityBrowserTile");
			return ret;
		}

		void HandleDisplayTileDetailsHoldTriggered(UCommonButtonBase Button); // Flags: Final|Native|Private 0x7FF414DDDC00
		void HandleActivitySelected(); // Flags: Final|Native|Private 0x7FF414DDDB20
	};


	// Class DiscoveryBrowserUI.FortActivityPlayerBrowserView
	// Inherited from UFortActivityBrowserView -> UFortActivityView -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x138 (0x650 - 0x518)
	class UFortActivityPlayerBrowserView : public UFortActivityBrowserView	
	{
	public:
		unsigned char UnknownData03_3[0x8]; // 0x518(0x8) UNKNOWN PROPERTY
		UFortGameActivityProvider ActivityProvider; // 0x520(0x8)
		UFortActivityTileView TileView_PlayerActivities; // 0x528(0x8)
		FName TabNameID; // 0x530(0x4)
		unsigned char UnknownData04_6[0xC]; // 0x534(0xC) UNKNOWN PROPERTY
		FFortTabButtonLabelInfo TabButtonLabelInfo; // 0x540(0xF0)
		EFortCreativeDiscoveryPlayHistoryType PlayHistoryProviderType; // 0x630(0x1)
		unsigned char UnknownData05_7[0x1F]; // 0x631(0x1F) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DiscoveryBrowserUI.FortActivityPlayerBrowserView");
			return ret;
		}

		void PlayViewIntro(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DDE060
		void OnQueryActivitiesStarted(); // Flags: Event|Protected|BlueprintEvent 0x7FF414DDDF80
		void OnQueryActivitiesComplete(); // Flags: Event|Protected|BlueprintEvent 0x7FF414DDDEA0
		void OnPlayViewIntro(); // Flags: Event|Protected|BlueprintEvent 0x7FF414DDDDC0
		void BP_OnTileViewUpdated(); // Flags: Event|Protected|BlueprintEvent 0x7FF414DDDCE0
	};


	// Class DiscoveryBrowserUI.FortActivityCategoryPageView
	// Inherited from UFortActivityPlayerBrowserView -> UFortActivityBrowserView -> UFortActivityView -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x40 (0x690 - 0x650)
	class UFortActivityCategoryPageView : public UFortActivityPlayerBrowserView	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x650(0x8) UNKNOWN PROPERTY
		UCommonRichTextBlock Text_CategoryTitle; // 0x658(0x8)
		UCommonButtonBase Button_BackToTop; // 0x660(0x8)
		UCommonButtonBase Button_CloseTouch; // 0x668(0x8)
		UCommonButtonBase Button_Back; // 0x670(0x8)
		UCommonButtonBase Button_MobileAccept; // 0x678(0x8)
		UCommonButtonBase Button_MobileShowGameDetails; // 0x680(0x8)
		unsigned char UnknownData03_7[0x8]; // 0x688(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DiscoveryBrowserUI.FortActivityCategoryPageView");
			return ret;
		}
	};


	// Class DiscoveryBrowserUI.FortActivityTileViewTileBase
	// Inherited from UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x90 (0x1420 - 0x1390)
	class UFortActivityTileViewTileBase : public UCommonButtonBase	
	{
	public:
		unsigned char UnknownData01_1[0x90]; // 0x1390(0x90) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DiscoveryBrowserUI.FortActivityTileViewTileBase");
			return ret;
		}
	};


	// Class DiscoveryBrowserUI.FortActivityCategoryTile
	// Inherited from UFortActivityTileViewTileBase -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x1430 - 0x1420)
	class UFortActivityCategoryTile : public UFortActivityTileViewTileBase	
	{
	public:
		UCommonTextBlock Text_CategoryTitle; // 0x1420(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x1428(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DiscoveryBrowserUI.FortActivityCategoryTile");
			return ret;
		}

		void OnTileActiveSet(bool bIsTileActive); // Flags: Event|Protected|BlueprintEvent 0x7FF414DDE140
	};


	// Class DiscoveryBrowserUI.FortActivityCategoryTilePanel
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x70 (0x350 - 0x2E0)
	class UFortActivityCategoryTilePanel : public UCommonUserWidget	
	{
	public:
		UFortActivityTileView TileView_Categories; // 0x2E0(0x8)
		UCommonTextBlock Text_Title; // 0x2E8(0x8)
		int32_t TileViewQueryThreshold; // 0x2F0(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x2F4(0x4) UNKNOWN PROPERTY
		UFortCreativeDiscoveryActivityProvider CachedActivityProvider; // 0x2F8(0x8)
		unsigned char UnknownData03_7[0x50]; // 0x300(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DiscoveryBrowserUI.FortActivityCategoryTilePanel");
			return ret;
		}
	};


	// Class DiscoveryBrowserUI.FortActivityCategoryView
	// Inherited from UFortActivityBrowserView -> UFortActivityView -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x128 (0x640 - 0x518)
	class UFortActivityCategoryView : public UFortActivityBrowserView	
	{
	public:
		unsigned char UnknownData03_3[0x8]; // 0x518(0x8) UNKNOWN PROPERTY
		FName TabNameID; // 0x520(0x4)
		unsigned char UnknownData04_6[0xC]; // 0x524(0xC) UNKNOWN PROPERTY
		FFortTabButtonLabelInfo TabButtonLabelInfo; // 0x530(0xF0)
		UFortActivityCategoryTilePanel TilePanel_Featured; // 0x620(0x8)
		UFortActivityCategoryTilePanel TilePanel_All; // 0x628(0x8)
		UFortActivityCategoryTilePanel CurrentSelectedPanel; // 0x630(0x8)
		unsigned char UnknownData05_7[0x8]; // 0x638(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DiscoveryBrowserUI.FortActivityCategoryView");
			return ret;
		}

		void OnSurfaceDataReady(); // Flags: Event|Protected|BlueprintEvent 0x7FF414DDE5A0
		void OnCategoryTilePanelSelected(UFortActivityCategoryTilePanel SelectedPanel); // Flags: Event|Protected|BlueprintEvent 0x7FF414DDE4C0
		UFortActivityCategoryTilePanel NavigateFromPanel(EUINavigation Direction, UFortActivityCategoryTilePanel NavigatingPanel); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414DDE3E0
		UFortActivityCategoryTilePanel GetTopMostVisiblePanel(); // Flags: Native|Event|Protected|BlueprintEvent|Const 0x7FF414DDE300
		UFortActivityCategoryTilePanel GetCurrentSelectedPanel(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414DDE220
	};


	// Class DiscoveryBrowserUI.FortActivityCreatorPageView
	// Inherited from UFortActivityCategoryPageView -> UFortActivityPlayerBrowserView -> UFortActivityBrowserView -> UFortActivityView -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x140 (0x7D0 - 0x690)
	class UFortActivityCreatorPageView : public UFortActivityCategoryPageView	
	{
	public:
		unsigned char UnknownData02_3[0xE8]; // 0x690(0xE8) UNKNOWN PROPERTY
		int32_t AmountOfCreatorLinkEntriesQueried; // 0x778(0x4)
		int32_t ProcessedCreatorLinkEntries; // 0x77C(0x4)
		int32_t AmountOfEntriesQueried; // 0x780(0x4)
		unsigned char UnknownData03_7[0x4C]; // 0x784(0x4C) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DiscoveryBrowserUI.FortActivityCreatorPageView");
			return ret;
		}

		void OnNoContentFoundForCreator(); // Flags: Event|Protected|BlueprintEvent 0x7FF414DDE760
		void OnCreatorActivitiesQueryFinished(); // Flags: Event|Protected|BlueprintEvent 0x7FF414DDE680
	};


	// Class DiscoveryBrowserUI.FortActivityDiscoverView
	// Inherited from UFortActivityBrowserRowView -> UFortActivityBrowserView -> UFortActivityView -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xA0 (0x760 - 0x6C0)
	class UFortActivityDiscoverView : public UFortActivityBrowserRowView	
	{
	public:
		bool bPlayDetailsAnimationOnScreenOpen; // 0x6C0(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x6C1(0x3) UNKNOWN PROPERTY
		float DetailsDisplayUpdateDelay; // 0x6C4(0x4)
		UClass MovieWidgetClass; // 0x6C8(0x8)
		UFortActivityDetailsDisplay DetailsDisplay_SelectedActivity; // 0x6D0(0x8)
		UFortActivityDetailsDisplay DetailsDisplay_PromotedActivity; // 0x6D8(0x8)
		UPanelWidget Panel_VideoSlot; // 0x6E0(0x8)
		UPanelWidget Panel_PromotedVideoSlot; // 0x6E8(0x8)
		UFortActivatableMovieWidget ActivityMovieWidget; // 0x6F0(0x8)
		UFortActivatableMovieWidget PromotedActivityMovieWidget; // 0x6F8(0x8)
		unsigned char UnknownData04_6[0x48]; // 0x700(0x48) UNKNOWN PROPERTY
		UWidgetAnimation BoundKeyArtOutroAnimation; // 0x748(0x8)
		unsigned char UnknownData05_7[0x10]; // 0x750(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DiscoveryBrowserUI.FortActivityDiscoverView");
			return ret;
		}

		void OnUpdateDetailsDisplay(); // Flags: Event|Public|BlueprintEvent 0x7FF414DDF640
		void OnPreviewImageChanged(bool bIsLoading, UTexture Texture); // Flags: Event|Public|BlueprintEvent 0x7FF414DDF560
		void OnPlayKeyArtOutro(); // Flags: Event|Public|BlueprintEvent 0x7FF414DDF480
		void OnPlayKeyArtIntro(); // Flags: Event|Public|BlueprintEvent 0x7FF414DDF3A0
		void OnMoviePreEndEvent(); // Flags: Event|Public|BlueprintEvent 0x7FF414DDF2C0
		void OnMoviePlayingChanged(bool bIsPlaying); // Flags: Event|Public|BlueprintEvent 0x7FF414DDF1E0
		bool IsShowingSeasonalContent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DDF100
		bool IsShowingPromotedContent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DDF020
		bool IsInOutroState(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DDEF40
		bool IsImageLoading(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DDEE60
		void HandleMovieWidgetMediaStarted(); // Flags: Final|Native|Private 0x7FF414DDED80
		void HandleMovieWidgetMediaPreEndEvent(); // Flags: Final|Native|Private 0x7FF414DDECA0
		UFortActivatableMovieWidget GetPromotedMovieWidget(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DDEBC0
		UFortActivatableMovieWidget GetMovieWidget(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DDEAE0
		UWidgetAnimation GetKeyArtOutroAnimation(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x7FF414DDEA00
		UTexture GetCurrentTexture(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x7FF414DDE920
		void CheckUpdateDetailsDelay(); // Flags: Final|Native|Private 0x7FF414DDE840
	};


	// Class DiscoveryBrowserUI.FortActivityDiscoverViewV2
	// Inherited from UFortActivityBrowserRowView -> UFortActivityBrowserView -> UFortActivityView -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x150 (0x810 - 0x6C0)
	class UFortActivityDiscoverViewV2 : public UFortActivityBrowserRowView	
	{
	public:
		FMulticastInlineDelegate OnActivityRequested; // 0x6C0(0x10)
		UFortDiscoverPreviewManager DiscoverPreviewManager; // 0x6D0(0x8)
		unsigned char UnknownData08_6[0x28]; // 0x6D8(0x28) UNKNOWN PROPERTY
		UDiscoverSelectedActivityViewModel SelectedActivityVM; // 0x700(0x8)
		TWeakObjectPtr SoftCustomMatchmakingModalClass; // 0x708(0x20)
		TWeakObjectPtr SoftSpectateMatchModalClass; // 0x728(0x20)
		unsigned char UnknownData09_6[0x8]; // 0x748(0x8) UNKNOWN PROPERTY
		FDataTableRowHandle BackToTopInputAction; // 0x750(0x10)
		unsigned char UnknownData10_6[0x8]; // 0x760(0x8) UNKNOWN PROPERTY
		FDataTableRowHandle CustomKeyInputAction; // 0x768(0x10)
		unsigned char UnknownData11_6[0x8]; // 0x778(0x8) UNKNOWN PROPERTY
		FDataTableRowHandle ShowSpectateMatchModalInputAction; // 0x780(0x10)
		unsigned char UnknownData12_6[0x8]; // 0x790(0x8) UNKNOWN PROPERTY
		FDataTableRowHandle JoinAsSpectatorInputAction; // 0x798(0x10)
		unsigned char UnknownData13_6[0x8]; // 0x7A8(0x8) UNKNOWN PROPERTY
		FDataTableRowHandle JoinAsPlayerInputAction; // 0x7B0(0x10)
		unsigned char UnknownData14_6[0x8]; // 0x7C0(0x8) UNKNOWN PROPERTY
		FDataTableRowHandle SelectActivityInputAction_Touch; // 0x7C8(0x10)
		unsigned char UnknownData15_7[0x38]; // 0x7D8(0x38) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DiscoveryBrowserUI.FortActivityDiscoverViewV2");
			return ret;
		}

		void UpdateMiscActionBindingVisibility(bool bVisible); // Flags: Final|Native|Private|BlueprintCallable 0x7FF414DDFB80
		void StartDiscoverAnalyticSession(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DDFAA0
		bool IsShowingSeasonalContent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DDF9C0
		bool IsShowingPromotedContent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DDF8E0
		void FireDiscoverExitedAnalyticEvent(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DDF800
		void DeactivationTransitionCompleted(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DDF720
	};


	// Class DiscoveryBrowserUI.FortActivityListView
	// Inherited from UListViewBase -> UWidget -> UVisual -> UObject
	// Size: 0x1A8 (0x430 - 0x288)
	class UFortActivityListView : public UListViewBase	
	{
	public:
		unsigned char UnknownData04_3[0xE8]; // 0x288(0xE8) UNKNOWN PROPERTY
		float DirectionalNavigationTimeThreshold; // 0x370(0x4)
		TEnumAsByte orientation; // 0x374(0x1)
		unsigned char UnknownData05_6[0x3]; // 0x375(0x3) UNKNOWN PROPERTY
		float EntrySpacing; // 0x378(0x4)
		bool bCircularNavigationEnabled; // 0x37C(0x1)
		unsigned char UnknownData06_6[0x3]; // 0x37D(0x3) UNKNOWN PROPERTY
		TMap TileTypes; // 0x380(0x50)
		unsigned char UnknownData07_7[0x60]; // 0x3D0(0x60) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DiscoveryBrowserUI.FortActivityListView");
			return ret;
		}

		int32_t GetMaxRows(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF414DDFFE0
		int32_t GetInViewCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DDFF00
		bool GetHorizontalScrollingEnabled(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF414DDFE20
		bool GetHasViewAllButton(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF414DDFD40
		void AddTileType(EActivityBrowserTileStyle Style, UClass WidgetClass); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DDFC60
	};


	// Class DiscoveryBrowserUI.FortActivityLobbyTile
	// Inherited from UCommonButtonLegacy -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x50 (0x1430 - 0x13E0)
	class UFortActivityLobbyTile : public UCommonButtonLegacy	
	{
	public:
		UCommonTextBlock Text_ActivityName; // 0x13E0(0x8)
		UFortActivityBrowserTag ActivityBrowserTag_EpicOriginal; // 0x13E8(0x8)
		UClass ActivityModeSetSelectionModalClass; // 0x13F0(0x8)
		UFortGameActivityProvider ActivityProvider; // 0x13F8(0x8)
		unsigned char UnknownData01_7[0x30]; // 0x1400(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DiscoveryBrowserUI.FortActivityLobbyTile");
			return ret;
		}

		void ShowModeSetSelectionModal(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DE0440
		void OnPreviewImageChanged(bool bIsLoading, UTexture Texture); // Flags: Event|Protected|BlueprintEvent 0x7FF414DE0360
		void OnDetailsUpdated(); // Flags: Event|Protected|BlueprintEvent 0x7FF414DE0280
		bool IsActivityEpicCreated(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DE01A0
		FText GetChildActivityDisplayName(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DE00C0
	};


	// Class DiscoveryBrowserUI.FortActivityModeSetSelectionModal
	// Inherited from UFortActivityModeSetSelectionModalBase -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x68 (0x478 - 0x410)
	class UFortActivityModeSetSelectionModal : public UFortActivityModeSetSelectionModalBase	
	{
	public:
		UCommonTextBlock Text_ActivityName; // 0x410(0x8)
		unsigned char UnknownData02_6[0x28]; // 0x418(0x28) UNKNOWN PROPERTY
		UCommonButtonBase Button_Back; // 0x440(0x8)
		UCommonButtonBase Button_BackBoard; // 0x448(0x8)
		UFortActivityModeSetSelection List_SubModeList; // 0x450(0x8)
		UFortActivitySquadFillButton Button_ActivitySquadFill; // 0x458(0x8)
		UFortActivityPrivacyButton Button_ActivityPrivacy; // 0x460(0x8)
		UFortActivityHabaneroButton Button_Activity_Habanero; // 0x468(0x8)
		unsigned char UnknownData03_7[0x8]; // 0x470(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DiscoveryBrowserUI.FortActivityModeSetSelectionModal");
			return ret;
		}

		void SetIsRankedSwitchAvailable(bool bIsRankedSwitchAvailable); // Flags: Event|Protected|BlueprintEvent 0x7FF414DE0B40
		void SetHabaneroValues(bool bHabaneroEnabled, bool bHabaneroExists); // Flags: Event|Protected|BlueprintEvent 0x7FF414DE0A60
		void SaveSelectionAndClose(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414DE0980
		void OnSubModeSelectionChanged(); // Flags: Event|Protected|BlueprintEvent 0x7FF414DE08A0
		void OnSubModeSelected(); // Flags: Event|Protected|BlueprintEvent 0x7FF414DE07C0
		void OnPreviewImageChanged(bool bIsLoading, UTexture Texture); // Flags: Event|Protected|BlueprintEvent 0x7FF414DE06E0
		void OnActivityChanged(UFortGameActivity GameActivity, FString StartingSelectedMnemonic); // Flags: Event|Protected|BlueprintEvent 0x7FF414DE0600
		bool IsCreativeModeSetActivity(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414DE0520
	};


	// Class DiscoveryBrowserUI.FortActivityPlayerBrowserTile
	// Inherited from UFortActivityTileViewTileBase -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x60 (0x1480 - 0x1420)
	class UFortActivityPlayerBrowserTile : public UFortActivityTileViewTileBase	
	{
	public:
		UFortActivityTileDetailsDisplay Display_TileDetails; // 0x1420(0x8)
		UCommonTextBlock Text_LastPlayedDate; // 0x1428(0x8)
		unsigned char UnknownData01_7[0x50]; // 0x1430(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DiscoveryBrowserUI.FortActivityPlayerBrowserTile");
			return ret;
		}

		void HandleActivitySelected(); // Flags: Final|Native|Private 0x7FF414DE0C20
	};


	// Class DiscoveryBrowserUI.FortActivitySelector
	// Inherited from UFortLocalPlayerSubsystem -> ULocalPlayerSubsystem -> USubsystem -> UObject
	// Size: 0x1B8 (0x1E8 - 0x30)
	class UFortActivitySelector : public UFortLocalPlayerSubsystem	
	{
	public:
		unsigned char UnknownData03_3[0x100]; // 0x30(0x100) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnShowActivityDetailsOnCreatorPageDelegate; // 0x130(0x10)
		unsigned char UnknownData04_6[0x10]; // 0x140(0x10) UNKNOWN PROPERTY
		TMap ColorSchemes; // 0x150(0x50)
		unsigned char UnknownData05_7[0x48]; // 0x1A0(0x48) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DiscoveryBrowserUI.FortActivitySelector");
			return ret;
		}

		void ToggleFavorite(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4140DB0E8
		void OpenCreatorPage(); // Flags: Final|Native|Private|BlueprintCallable 0x7FF4140DB008
		void OnSwapColorScheme(bool bInIsUsingAlternateColorScheme); // Flags: Event|Protected|BlueprintEvent 0x7FF4140DAF28
		void OnShowActivityDetailsOnCreatorPage__DelegateSignature(); // Flags: MulticastDelegate|Public|Delegate 0x7FF4140DAE48
		void OnEnableColorScheme(bool bIsColorSchemeActive); // Flags: Event|Protected|BlueprintEvent 0x7FF4140DAD68
		void HandleShowActivityDetails(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4140DAC88
		void ConfirmSelectedActivity(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4140DABA8
	};


	// Class DiscoveryBrowserUI.FortActivityTileDetailsDisplay
	// Inherited from UUIKitHoldableModularButton -> UUIKitModularButton -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x1A0 (0x1630 - 0x1490)
	class UFortActivityTileDetailsDisplay : public UUIKitHoldableModularButton	
	{
	public:
		FMulticastInlineDelegate OnActivitySelectedDelegate; // 0x1490(0x10)
		FMulticastInlineDelegate OnActivityUnSelectedDelegate; // 0x14A0(0x10)
		bool bShowDetailsButton; // 0x14B0(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x14B1(0x3) UNKNOWN PROPERTY
		int32_t DefaultColumnSize; // 0x14B4(0x4)
		UCommonTextBlock Text_ActivityName; // 0x14B8(0x8)
		UCommonTextBlock Text_PlayerCount; // 0x14C0(0x8)
		UCommonButtonBase Button_Favorite; // 0x14C8(0x8)
		UCommonButtonBase Button_Details; // 0x14D0(0x8)
		UFortActivityBrowserTag ActivityBrowserTag_EpicOriginal; // 0x14D8(0x8)
		UTextBlock Text_DebugId; // 0x14E0(0x8)
		UFortActivityVideoCycle ActivityVideoCycleWidget; // 0x14E8(0x8)
		TMap MinColumnSizeToImageSize; // 0x14F0(0x50)
		UClass ActivityDetailsModalClass; // 0x1540(0x8)
		UClass ActivityCreatorPageViewClass; // 0x1548(0x8)
		UClass ActivityCampaignPurchaseScreenClass; // 0x1550(0x8)
		UClass ActivityAttributionsClass; // 0x1558(0x8)
		unsigned char UnknownData03_7[0xD0]; // 0x1560(0xD0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay");
			return ret;
		}

		void UpdateSqueegeeWidgets(UFortGameActivity GameActivity); // Flags: Event|Protected|BlueprintEvent 0x7FF4140DD4A8
		void UpdateFromFortActivityViewModel(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF4140DD3C8
		void UpdateCCU(int32_t CCUCount); // Flags: Event|Protected|BlueprintEvent 0x7FF4140DD2E8
		void UpdateActivitySelector(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4140DD208
		void StopTileVideo(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF4140DD128
		void StartTileVideo(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF4140DD048
		void ShouldPlayTileVideo(bool& bOutResult); // Flags: Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 0x7FF4140DCF68
		void OnTileClicked(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF4140DCE88
		void OnTileActiveSet(bool bIsTileActive); // Flags: Event|Protected|BlueprintEvent 0x7FF4140DCDA8
		void OnRespondToTileViewVisibilityChange(bool bIsVisible); // Flags: Event|Public|BlueprintCallable|BlueprintEvent 0x7FF4140DCCC8
		void OnRequiresPurchaseChanged(bool bRequiresPurchase); // Flags: Event|Protected|BlueprintEvent 0x7FF4140DCBE8
		void OnPreviewImageChanged(bool bIsLoading, UTexture Texture); // Flags: Event|Protected|BlueprintEvent 0x7FF4140DCB08
		void OnPartySizeChanged(int32_t PartySize); // Flags: Event|Protected|BlueprintEvent 0x7FF4140DCA28
		void OnLogoImageChanged(bool bIsLoading, UTexture Texture); // Flags: Event|Protected|BlueprintEvent 0x7FF4140DC948
		void OnLocalPlayerPromotedToLeader(); // Flags: Event|Protected|BlueprintEvent 0x7FF4140DC868
		void OnLocalPlayerDemoted(); // Flags: Event|Protected|BlueprintEvent 0x7FF4140DC788
		void OnIsFavoriteChanged(bool bIsFavorite); // Flags: Event|Protected|BlueprintEvent 0x7FF4140DC6A8
		void OnFriendsPlayingChanged(int32_t NumPlaying); // Flags: Event|Protected|BlueprintEvent 0x7FF4140DC5C8
		void OnDetailsUpdated(); // Flags: Event|Protected|BlueprintEvent 0x7FF4140DC4E8
		void OnActivityUnSelected__DelegateSignature(); // Flags: MulticastDelegate|Public|Delegate 0x7FF4140DC408
		void OnActivitySelected__DelegateSignature(); // Flags: MulticastDelegate|Public|Delegate 0x7FF4140DC328
		void NotifyAnalyticsTileWasClicked(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF4140DC248
		bool IsModeSetActivity(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF4140DC168
		bool IsActivityLocked(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF4140DC088
		bool IsActivityFavorited(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF4140DBFA8
		void HandleShowActivityDetails(); // Flags: Final|Native|Private 0x7FF4140DBEC8
		void HandleActivitySelected(); // Flags: Final|Native|Private 0x7FF4140DBDE8
		EFortActivityIsLockedReason GetIsActivityLockedReason(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF4140DBD08
		EFortInvalidActivityReason GetInvalidActivityReason(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF4140DBC28
		UFortActivitySelector GetActivitySelector(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF4140DBB48
		FString GetActivityCreatorDisplayText(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF4140DBA68
		bool DoesActivityRequirePurchase(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF4140DB988
		void BroadcastOnActivityConfirmed(); // Flags: Final|Native|Public|BlueprintCallable|Const 0x7FF4140DB8A8
	};


	// Class DiscoveryBrowserUI.FortActivityTileView
	// Inherited from UFortCommonTileView -> UCommonTileView -> UTileView -> UListView -> UListViewBase -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0xB60 - 0xB60)
	class UFortActivityTileView : public UFortCommonTileView	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DiscoveryBrowserUI.FortActivityTileView");
			return ret;
		}

		void SetListenForMouseWheelInput(bool bListenForInput); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DE0EC0
		void RespondToVisibilityChange(bool bIsVisible); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DE0DE0
		void NavigateToTop(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DE0D00
	};


	// Class DiscoveryBrowserUI.FortDiscoverItemBrowserRow
	// Inherited from UFortActivityBrowserRow -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x50 (0x418 - 0x3C8)
	class UFortDiscoverItemBrowserRow : public UFortActivityBrowserRow	
	{
	public:
		UFortDiscoverItemListView ListView_Tiles; // 0x3C8(0x8)
		UCommonButtonBase Button_PageLeft; // 0x3D0(0x8)
		UCommonButtonBase Button_PageRight; // 0x3D8(0x8)
		unsigned char UnknownData01_7[0x38]; // 0x3E0(0x38) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DiscoveryBrowserUI.FortDiscoverItemBrowserRow");
			return ret;
		}
	};


	// Class DiscoveryBrowserUI.FortDiscoverItemListView
	// Inherited from UListViewBase -> UWidget -> UVisual -> UObject
	// Size: 0x158 (0x3E0 - 0x288)
	class UFortDiscoverItemListView : public UListViewBase	
	{
	public:
		unsigned char UnknownData04_3[0xE8]; // 0x288(0xE8) UNKNOWN PROPERTY
		float DirectionalNavigationTimeThreshold; // 0x370(0x4)
		unsigned char UnknownData05_6[0x4]; // 0x374(0x4) UNKNOWN PROPERTY
		UClass PlayWithFriendsEntryWidgetClass; // 0x378(0x8)
		UClass ActivityEntryWidgetClass; // 0x380(0x8)
		UClass LibraryEntryWidgetClass; // 0x388(0x8)
		TEnumAsByte orientation; // 0x390(0x1)
		unsigned char UnknownData06_6[0x3]; // 0x391(0x3) UNKNOWN PROPERTY
		float EntrySpacing; // 0x394(0x4)
		bool bCircularNavigationEnabled; // 0x398(0x1)
		unsigned char UnknownData07_7[0x47]; // 0x399(0x47) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DiscoveryBrowserUI.FortDiscoverItemListView");
			return ret;
		}

		int32_t GetInViewCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DE0FA0
	};


	// Class DiscoveryBrowserUI.ActivityLibraryComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x30 (0xD0 - 0xA0)
	class UActivityLibraryComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData01_3[0x10]; // 0xA0(0x10) UNKNOWN PROPERTY
		TWeakObjectPtr CreatorPageOverrideClass; // 0xB0(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DiscoveryBrowserUI.ActivityLibraryComponent");
			return ret;
		}
	};


	// Class DiscoveryBrowserUI.FortActivityBrowserContext
	// Inherited from UGameInstanceSubsystem -> USubsystem -> UObject
	// Size: 0x18 (0x48 - 0x30)
	class UFortActivityBrowserContext : public UGameInstanceSubsystem	
	{
	public:
		unsigned char UnknownData01_1[0x18]; // 0x30(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DiscoveryBrowserUI.FortActivityBrowserContext");
			return ret;
		}
	};


	// Class DiscoveryBrowserUI.OverrideMatchmakingUIComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x40 (0xE0 - 0xA0)
	class UOverrideMatchmakingUIComponent : public UActorComponent	
	{
	public:
		FMatchmakingUIOverride MatchmakingUIOverride; // 0xA0(0x40)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DiscoveryBrowserUI.OverrideMatchmakingUIComponent");
			return ret;
		}
	};

}
