#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: DiscoveryBrowserUI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

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
		unsigned char UnknownData00_6[0x3]; // 0x6D(0x3) UNKNOWN PROPERTY
		int32_t CurrentPartySize; // 0x70(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x74(0x4) UNKNOWN PROPERTY
		FText RichPresenceText; // 0x78(0x10)
		UFortActivityViewModel* ActivityVM; // 0x88(0x8)
		unsigned char UnknownData02_7[0x8]; // 0x90(0x8) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_1[0x60]; // 0x1390(0x60) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DiscoveryBrowserUI.FortActivityBrowserTileBase");
			return ret;
		}
	};


	// Class DiscoveryBrowserUI.FortActivityBrowserLibraryTile
	// Inherited from UFortActivityBrowserTileBase -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x30 (0x1420 - 0x13F0)
	class UFortActivityBrowserLibraryTile : public UFortActivityBrowserTileBase	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0x13F0(0x10) UNKNOWN PROPERTY
		UFortSidebarOnboardTooltipWidget* OnboardingTooltip; // 0x1400(0x8)
		unsigned char UnknownData01_7[0x18]; // 0x1408(0x18) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_1[0x10]; // 0x28(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DiscoveryBrowserUI.FortActivityListItemWrapper");
			return ret;
		}
	};


	// Class DiscoveryBrowserUI.FortActivityBrowserRow
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xF8 (0x3D0 - 0x2D8)
	class UFortActivityBrowserRow : public UCommonUserWidget	
	{
	public:
		unsigned char UnknownData00_3[0x18]; // 0x2D8(0x18) UNKNOWN PROPERTY
		float MinimumVisibilityPercentageForRowActivation; // 0x2F0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x2F4(0x4) UNKNOWN PROPERTY
		UFortDiscoverItemSelectorBase* OverrideItemSelector; // 0x2F8(0x8)
		UFortDiscoverSurfaceViewModel* SurfaceViewModel; // 0x300(0x8)
		EActivityBrowserRowViewModelSource PanelViewModelSource; // 0x308(0x1)
		unsigned char UnknownData02_6[0xB7]; // 0x309(0xB7) UNKNOWN PROPERTY
		UCommonTextBlock* Text_CategoryName; // 0x3C0(0x8)
		unsigned char UnknownData03_7[0x8]; // 0x3C8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DiscoveryBrowserUI.FortActivityBrowserRow");
			return ret;
		}

		void OnRowPeekStateChanged(bool bIsInPeekState); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRowMoveUp(bool bMovingOffscreen); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRowMoveDown(bool bMovingOffscreen); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRowIsSelectedChanged(bool bIsSelected); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRowIsActiveChanged(bool bIsActive); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnOverrideItemSelectorSet(UFortDiscoverItemSelectorBase* ItemSelector); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCategoryTextChanged(FText& CategoryText, FText& CategorySubtitle); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCategoryItemChanged(bool bPlayAnimation); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		int32_t GetNumDisplayedSubRows(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF751968270(relative to base address)
		bool GetIsSelected(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7519681A8(relative to base address)
		bool GetIsInPeekState(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751968180(relative to base address)
		bool GetIsActive(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7500516FC(relative to base address)
	};


	// Class DiscoveryBrowserUI.FortDiscoverBrowserGridRow
	// Inherited from UFortActivityBrowserRow -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x18 (0x3E8 - 0x3D0)
	class UFortDiscoverBrowserGridRow : public UFortActivityBrowserRow	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x3D0(0x8) UNKNOWN PROPERTY
		int32_t ItemIndexRepresented; // 0x3D8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x3DC(0x4) UNKNOWN PROPERTY
		bool bSupportLessThanMaxVisibleSubRows; // 0x3E0(0x1)
		unsigned char UnknownData02_7[0x7]; // 0x3E1(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DiscoveryBrowserUI.FortDiscoverBrowserGridRow");
			return ret;
		}

		void UpdateAnalyticsStates(bool bStopImpressions); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetPanelViewModel(UFortDiscoverProviderViewModel* ViewModel); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetMaxVisibleRows(int32_t MaxRowsShown); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751968E98(relative to base address)
		void SetFocusOffset(int32_t FocusOffset, bool bSelectFromBelow); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void NavigateWithinGrid(int32_t Row); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7519689AC(relative to base address)
		void HandleActivitySelected(int32_t Index, int32_t IndexInRow); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751968344(relative to base address)
		bool GetSupportsLessThanMaxVisibleRows(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7519682C8(relative to base address)
		UFortDiscoverProviderViewModel GetPanelViewModel(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		int32_t GetNumberOfVisibleSubRows(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751968298(relative to base address)
		int32_t GetFirstVisibleSubRow(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7519680B8(relative to base address)
	};


	// Class DiscoveryBrowserUI.FortDiscoverHomespace
	// Inherited from UScrollableActivatableWidget -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x410 - 0x410)
	class UFortDiscoverHomespace : public UScrollableActivatableWidget	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DiscoveryBrowserUI.FortDiscoverHomespace");
			return ret;
		}

		void SendHomespaceSubviewEvent(UWidget* SubWidget, FString Text); // Flags: Final|Native|Protected|BlueprintCallable|Const, Memory Exec: 0x7FF751968BBC(relative to base address)
		void OnPeekPushPercentMobileCVarChanged(float PeekPushPercent); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class DiscoveryBrowserUI.FortDiscoverPreviewManager
	// Inherited from UObject
	// Size: 0xC8 (0xF0 - 0x28)
	class UFortDiscoverPreviewManager : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0xC8]; // 0x28(0xC8) UNKNOWN PROPERTY

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
		TMap<UMaterialParameterCollection*, FColorSchemeParamaterValues> MaterialCollectionOverrides; // 0x30(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DiscoveryBrowserUI.FortActivityBrowserColorSchemeAsset");
			return ret;
		}
	};


	// Class DiscoveryBrowserUI.FortActivityBrowserListView
	// Inherited from UListViewBase -> UWidget -> UVisual -> UObject
	// Size: 0x248 (0x4C8 - 0x280)
	class UFortActivityBrowserListView : public UListViewBase	
	{
	public:
		unsigned char UnknownData00_3[0xE8]; // 0x280(0xE8) UNKNOWN PROPERTY
		float DirectionalNavigationTimeThreshold; // 0x368(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x36C(0x4) UNKNOWN PROPERTY
		UClass* DiscoverItemRowClass; // 0x370(0x8)
		UClass* HomebarItemRowClass; // 0x378(0x8)
		UClass* NonScrollingItemRowClass; // 0x380(0x8)
		TMap<FName, UClass*> RowTypes; // 0x388(0x50)
		UFortDiscoverItemSelectorBase* OverrideItemSelector; // 0x3D8(0x8)
		UFortDiscoverSurfaceViewModel* SurfaceViewModel; // 0x3E0(0x8)
		bool bAllowNonFullGridRows; // 0x3E8(0x1)
		bool bUseTinyOffsetWhenScrollingIntoView; // 0x3E9(0x1)
		bool bAllowInternalRowSelection; // 0x3EA(0x1)
		unsigned char UnknownData02_7[0xDD]; // 0x3EB(0xDD) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DiscoveryBrowserUI.FortActivityBrowserListView");
			return ret;
		}

		void SetAllowInternalRowSelection(bool bInAllowInternalRowSelection); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751968E18(relative to base address)
		void ScrollToTopOfSelectedCategory(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751968B70(relative to base address)
		bool NavigateToCategory(FName ActivityCategoryName, bool bAnimateScroll); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751968804(relative to base address)
		void NavigateToActivityInFirstRow(int32_t ActivityItemIndex, bool bRequestNavigationToItem); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7499C9C94(relative to base address)
		void HandleVisibleEntriesChanged(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751968584(relative to base address)
	};


	// Class DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile
	// Inherited from UFortActivityBrowserTileBase -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xD0 (0x14C0 - 0x13F0)
	class UFortActivityBrowserPlayWithFriendsTile : public UFortActivityBrowserTileBase	
	{
	public:
		int32_t MaxNamesToDisplay; // 0x13F0(0x4)
		int32_t MaxPortraitsToDisplay; // 0x13F4(0x4)
		unsigned char UnknownData00_6[0x10]; // 0x13F8(0x10) UNKNOWN PROPERTY
		UFortJoinablePartyPortraitsDisplay* PartyMembersAvatarsDisplay; // 0x1408(0x8)
		bool bIsActiveInvite; // 0x1410(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x1411(0x3) UNKNOWN PROPERTY
		int32_t CurrentPartySize; // 0x1414(0x4)
		bool bIsPartyPrivate; // 0x1418(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x1419(0x7) UNKNOWN PROPERTY
		UFortGameActivity* CachedGameActivity; // 0x1420(0x8)
		unsigned char UnknownData03_6[0x10]; // 0x1428(0x10) UNKNOWN PROPERTY
		TWeakObjectPtr<USocialUser*> CachedTargetSocialUser; // 0x1438(0x8)
		FText CurrentCTAButtonText; // 0x1440(0x10)
		FText JoinPartyText; // 0x1450(0x10)
		FText RequestToJoinText; // 0x1460(0x10)
		FDataTableRowHandle JoinFriendInputAction_Touch; // 0x1470(0x10)
		unsigned char UnknownData04_7[0x40]; // 0x1480(0x40) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile");
			return ret;
		}

		void UpdateSingleFriendName(FText& SingleFriendName); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateRichPresence(FText& RichPresence); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdatePartyMemberNames(FText& Names); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateOtherPlayersSubText(FText& OtherPlayersSubText); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateLastInteraction(FText& LastInteraction); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateIslandThumbnail(UTexture* ThumbnailTexture); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateCTAButtonInteraction(bool bIsInteractionEnabled); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateCTAButtonInfo(FText& InteractionText, bool bInteractionFound); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OpenSidebar(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751968AF0(relative to base address)
		void OnUpdateColumnSize(int32_t NewColumnSize); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTileActiveChanged(bool bIsTileActive); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTextureLoadingComplete(UTexture* ThumbnailTexture); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTextureBeginLoading(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnGameActivityChanged(UFortGameActivity* GameActivity); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleCTAButtonClicked(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751968420(relative to base address)
		int32_t GetMaxPartySize(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7519681F8(relative to base address)
		FText GetCTAButtonText(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751968034(relative to base address)
		void BP_PartyInformationUpdated(bool bInIsTileSelected); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class DiscoveryBrowserUI.FortActivityBrowserRowList
	// Inherited from UFortActivityBrowserRow -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x3F0 - 0x3D0)
	class UFortActivityBrowserRowList : public UFortActivityBrowserRow	
	{
	public:
		UFortActivityListView* ListView_Activities; // 0x3D0(0x8)
		UCommonButtonBase* Button_PageLeft; // 0x3D8(0x8)
		UCommonButtonBase* Button_PageRight; // 0x3E0(0x8)
		unsigned char UnknownData00_7[0x8]; // 0x3E8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DiscoveryBrowserUI.FortActivityBrowserRowList");
			return ret;
		}

		void OnQueryStatusChanged(bool bIsActive); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class DiscoveryBrowserUI.FortActivityBrowserView
	// Inherited from UFortActivityView -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xD0 (0x510 - 0x440)
	class UFortActivityBrowserView : public UFortActivityView	
	{
	public:
		bool bShowCustomMatchmakingModalButton; // 0x440(0x1)
		bool bShowSpectateMatchModalButton; // 0x441(0x1)
		bool bShowMobileGameDetailsButton; // 0x442(0x1)
		bool bShowMobileAcceptButton; // 0x443(0x1)
		bool bShowBackToTopButton; // 0x444(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x445(0x3) UNKNOWN PROPERTY
		FName DiscoverySurfaceName; // 0x448(0x4)
		unsigned char UnknownData01_7[0xC4]; // 0x44C(0xC4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DiscoveryBrowserUI.FortActivityBrowserView");
			return ret;
		}

		void OnSurfaceDataDirty(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		EFortInvalidActivityReason GetInvalidActivityReason(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751968148(relative to base address)
	};


	// Class DiscoveryBrowserUI.FortActivityBrowserRowView
	// Inherited from UFortActivityBrowserView -> UFortActivityView -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x1A0 (0x6B0 - 0x510)
	class UFortActivityBrowserRowView : public UFortActivityBrowserView	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x510(0x8) UNKNOWN PROPERTY
		float MouseWheelScrollTimeThreshold; // 0x518(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x51C(0x4) UNKNOWN PROPERTY
		UFortActivityBrowserListView* BrowserList_Activities; // 0x520(0x8)
		unsigned char UnknownData02_6[0x60]; // 0x528(0x60) UNKNOWN PROPERTY
		FName TabNameID; // 0x588(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x58C(0x4) UNKNOWN PROPERTY
		FFortTabButtonLabelInfo TabButtonLabelInfo; // 0x590(0xF0)
		UFortSwipePanel* SwipePanel_Navigation; // 0x680(0x8)
		TArray<FName> ActivityProviderFilter; // 0x688(0x10)
		EActivityBrowserFilterType ActivityProviderFilterType; // 0x698(0x1)
		unsigned char UnknownData04_7[0x17]; // 0x699(0x17) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DiscoveryBrowserUI.FortActivityBrowserRowView");
			return ret;
		}

		void SetSurfaceViewModel(UFortDiscoverSurfaceViewModel* SurfaceViewModel); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751968F20(relative to base address)
		void SetActivityProviderFilter(TArray<FName> PanelNames, EActivityBrowserFilterType FilterType); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751968D08(relative to base address)
		void OnRowChanged(int32_t NewCategoryIndex); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnQueryActivitiesFinished(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnListViewScrolled(float ItemOffset, float DistanceRemaining); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnActivityUpdated(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleVerticalSwipe(int32_t Direction); // Flags: Final|Native|Private|BlueprintCallable, Memory Exec: 0x7FF751968504(relative to base address)
	};


	// Class DiscoveryBrowserUI.FortActivityBrowserTile
	// Inherited from UFortActivityBrowserTileBase -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x60 (0x1450 - 0x13F0)
	class UFortActivityBrowserTile : public UFortActivityBrowserTileBase	
	{
	public:
		UFortActivityTileDetailsDisplay* Display_TileDetails; // 0x13F0(0x8)
		unsigned char UnknownData00_7[0x58]; // 0x13F8(0x58) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DiscoveryBrowserUI.FortActivityBrowserTile");
			return ret;
		}

		void HandleDisplayTileDetailsHoldTriggered(UCommonButtonBase* Button); // Flags: Final|Native|Private, Memory Exec: 0x7FF751968434(relative to base address)
		void HandleActivitySelected(); // Flags: Final|Native|Private, Memory Exec: 0x7FF751968308(relative to base address)
	};


	// Class DiscoveryBrowserUI.FortActivityPlayerBrowserView
	// Inherited from UFortActivityBrowserView -> UFortActivityView -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x130 (0x640 - 0x510)
	class UFortActivityPlayerBrowserView : public UFortActivityBrowserView	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x510(0x8) UNKNOWN PROPERTY
		UFortGameActivityProvider* ActivityProvider; // 0x518(0x8)
		UFortActivityTileView* TileView_PlayerActivities; // 0x520(0x8)
		FName TabNameID; // 0x528(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x52C(0x4) UNKNOWN PROPERTY
		FFortTabButtonLabelInfo TabButtonLabelInfo; // 0x530(0xF0)
		EFortCreativeDiscoveryPlayHistoryType PlayHistoryProviderType; // 0x620(0x1)
		unsigned char UnknownData02_7[0x1F]; // 0x621(0x1F) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DiscoveryBrowserUI.FortActivityPlayerBrowserView");
			return ret;
		}

		void PlayViewIntro(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751968B20(relative to base address)
		void OnQueryActivitiesStarted(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnQueryActivitiesComplete(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPlayViewIntro(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnTileViewUpdated(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class DiscoveryBrowserUI.FortActivityCategoryPageView
	// Inherited from UFortActivityPlayerBrowserView -> UFortActivityBrowserView -> UFortActivityView -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x40 (0x680 - 0x640)
	class UFortActivityCategoryPageView : public UFortActivityPlayerBrowserView	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x640(0x8) UNKNOWN PROPERTY
		UCommonRichTextBlock* Text_CategoryTitle; // 0x648(0x8)
		UCommonButtonBase* Button_BackToTop; // 0x650(0x8)
		UCommonButtonBase* Button_CloseTouch; // 0x658(0x8)
		UCommonButtonBase* Button_Back; // 0x660(0x8)
		UCommonButtonBase* Button_MobileAccept; // 0x668(0x8)
		UCommonButtonBase* Button_MobileShowGameDetails; // 0x670(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x678(0x8) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_1[0x90]; // 0x1390(0x90) UNKNOWN PROPERTY

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
		UCommonTextBlock* Text_CategoryTitle; // 0x1420(0x8)
		unsigned char UnknownData00_7[0x8]; // 0x1428(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DiscoveryBrowserUI.FortActivityCategoryTile");
			return ret;
		}

		void OnTileActiveSet(bool bIsTileActive); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class DiscoveryBrowserUI.FortActivityCategoryTilePanel
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x70 (0x348 - 0x2D8)
	class UFortActivityCategoryTilePanel : public UCommonUserWidget	
	{
	public:
		UFortActivityTileView* TileView_Categories; // 0x2D8(0x8)
		UCommonTextBlock* Text_Title; // 0x2E0(0x8)
		int32_t TileViewQueryThreshold; // 0x2E8(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x2EC(0x4) UNKNOWN PROPERTY
		UFortCreativeDiscoveryActivityProvider* CachedActivityProvider; // 0x2F0(0x8)
		unsigned char UnknownData01_7[0x50]; // 0x2F8(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DiscoveryBrowserUI.FortActivityCategoryTilePanel");
			return ret;
		}
	};


	// Class DiscoveryBrowserUI.FortActivityCategoryView
	// Inherited from UFortActivityBrowserView -> UFortActivityView -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x120 (0x630 - 0x510)
	class UFortActivityCategoryView : public UFortActivityBrowserView	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x510(0x8) UNKNOWN PROPERTY
		FName TabNameID; // 0x518(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x51C(0x4) UNKNOWN PROPERTY
		FFortTabButtonLabelInfo TabButtonLabelInfo; // 0x520(0xF0)
		UFortActivityCategoryTilePanel* TilePanel_Featured; // 0x610(0x8)
		UFortActivityCategoryTilePanel* TilePanel_All; // 0x618(0x8)
		UFortActivityCategoryTilePanel* CurrentSelectedPanel; // 0x620(0x8)
		unsigned char UnknownData02_7[0x8]; // 0x628(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DiscoveryBrowserUI.FortActivityCategoryView");
			return ret;
		}

		void OnSurfaceDataReady(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCategoryTilePanelSelected(UFortActivityCategoryTilePanel* SelectedPanel); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UFortActivityCategoryTilePanel NavigateFromPanel(EUINavigation Direction, UFortActivityCategoryTilePanel* NavigatingPanel); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751968740(relative to base address)
		UFortActivityCategoryTilePanel GetTopMostVisiblePanel(); // Flags: Native|Event|Protected|BlueprintEvent|Const, Memory Exec: 0x7FF7519682E0(relative to base address)
		UFortActivityCategoryTilePanel GetCurrentSelectedPanel(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751968078(relative to base address)
	};


	// Class DiscoveryBrowserUI.FortActivityCreatorPageView
	// Inherited from UFortActivityCategoryPageView -> UFortActivityPlayerBrowserView -> UFortActivityBrowserView -> UFortActivityView -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x140 (0x7C0 - 0x680)
	class UFortActivityCreatorPageView : public UFortActivityCategoryPageView	
	{
	public:
		unsigned char UnknownData00_3[0xE8]; // 0x680(0xE8) UNKNOWN PROPERTY
		int32_t AmountOfCreatorLinkEntriesQueried; // 0x768(0x4)
		int32_t ProcessedCreatorLinkEntries; // 0x76C(0x4)
		int32_t AmountOfEntriesQueried; // 0x770(0x4)
		unsigned char UnknownData01_7[0x4C]; // 0x774(0x4C) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DiscoveryBrowserUI.FortActivityCreatorPageView");
			return ret;
		}

		void OnNoContentFoundForCreator(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCreatorActivitiesQueryFinished(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class DiscoveryBrowserUI.FortActivityDiscoverView
	// Inherited from UFortActivityBrowserRowView -> UFortActivityBrowserView -> UFortActivityView -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xA0 (0x750 - 0x6B0)
	class UFortActivityDiscoverView : public UFortActivityBrowserRowView	
	{
	public:
		bool bPlayDetailsAnimationOnScreenOpen; // 0x6B0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x6B1(0x3) UNKNOWN PROPERTY
		float DetailsDisplayUpdateDelay; // 0x6B4(0x4)
		UClass* MovieWidgetClass; // 0x6B8(0x8)
		UFortActivityDetailsDisplay* DetailsDisplay_SelectedActivity; // 0x6C0(0x8)
		UFortActivityDetailsDisplay* DetailsDisplay_PromotedActivity; // 0x6C8(0x8)
		UPanelWidget* Panel_VideoSlot; // 0x6D0(0x8)
		UPanelWidget* Panel_PromotedVideoSlot; // 0x6D8(0x8)
		UFortActivatableMovieWidget* ActivityMovieWidget; // 0x6E0(0x8)
		UFortActivatableMovieWidget* PromotedActivityMovieWidget; // 0x6E8(0x8)
		unsigned char UnknownData01_6[0x48]; // 0x6F0(0x48) UNKNOWN PROPERTY
		UWidgetAnimation* BoundKeyArtOutroAnimation; // 0x738(0x8)
		unsigned char UnknownData02_7[0x10]; // 0x740(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DiscoveryBrowserUI.FortActivityDiscoverView");
			return ret;
		}

		void OnUpdateDetailsDisplay(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPreviewImageChanged(bool bIsLoading, UTexture* Texture); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPlayKeyArtOutro(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPlayKeyArtIntro(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnMoviePreEndEvent(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnMoviePlayingChanged(bool bIsPlaying); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool IsShowingSeasonalContent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751968714(relative to base address)
		bool IsShowingPromotedContent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7519686E8(relative to base address)
		bool IsInOutroState(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7519686A0(relative to base address)
		bool IsImageLoading(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751968688(relative to base address)
		void HandleMovieWidgetMediaStarted(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7519684C8(relative to base address)
		void HandleMovieWidgetMediaPreEndEvent(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7519684B4(relative to base address)
		UFortActivatableMovieWidget GetPromotedMovieWidget(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7519682B0(relative to base address)
		UFortActivatableMovieWidget GetMovieWidget(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751968258(relative to base address)
		UWidgetAnimation GetKeyArtOutroAnimation(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7519681D0(relative to base address)
		UTexture GetCurrentTexture(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF751968090(relative to base address)
		void CheckUpdateDetailsDelay(); // Flags: Final|Native|Private, Memory Exec: 0x7FF751967E58(relative to base address)
	};


	// Class DiscoveryBrowserUI.FortActivityDiscoverViewV2
	// Inherited from UFortActivityBrowserRowView -> UFortActivityBrowserView -> UFortActivityView -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x150 (0x800 - 0x6B0)
	class UFortActivityDiscoverViewV2 : public UFortActivityBrowserRowView	
	{
	public:
		FMulticastInlineDelegate OnActivityRequested; // 0x6B0(0x10)
		UFortDiscoverPreviewManager* DiscoverPreviewManager; // 0x6C0(0x8)
		unsigned char UnknownData00_6[0x28]; // 0x6C8(0x28) UNKNOWN PROPERTY
		UDiscoverSelectedActivityViewModel* SelectedActivityVM; // 0x6F0(0x8)
		TWeakObjectPtr<UClass*> SoftCustomMatchmakingModalClass; // 0x6F8(0x20)
		TWeakObjectPtr<UClass*> SoftSpectateMatchModalClass; // 0x718(0x20)
		unsigned char UnknownData01_6[0x8]; // 0x738(0x8) UNKNOWN PROPERTY
		FDataTableRowHandle BackToTopInputAction; // 0x740(0x10)
		unsigned char UnknownData02_6[0x8]; // 0x750(0x8) UNKNOWN PROPERTY
		FDataTableRowHandle CustomKeyInputAction; // 0x758(0x10)
		unsigned char UnknownData03_6[0x8]; // 0x768(0x8) UNKNOWN PROPERTY
		FDataTableRowHandle ShowSpectateMatchModalInputAction; // 0x770(0x10)
		unsigned char UnknownData04_6[0x8]; // 0x780(0x8) UNKNOWN PROPERTY
		FDataTableRowHandle JoinAsSpectatorInputAction; // 0x788(0x10)
		unsigned char UnknownData05_6[0x8]; // 0x798(0x8) UNKNOWN PROPERTY
		FDataTableRowHandle JoinAsPlayerInputAction; // 0x7A0(0x10)
		unsigned char UnknownData06_6[0x8]; // 0x7B0(0x8) UNKNOWN PROPERTY
		FDataTableRowHandle SelectActivityInputAction_Touch; // 0x7B8(0x10)
		unsigned char UnknownData07_7[0x38]; // 0x7C8(0x38) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DiscoveryBrowserUI.FortActivityDiscoverViewV2");
			return ret;
		}

		void UpdateMiscActionBindingVisibility(bool bVisible); // Flags: Final|Native|Private|BlueprintCallable, Memory Exec: 0x7FF7499A3808(relative to base address)
		void StartDiscoverAnalyticSession(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF749FC54D8(relative to base address)
		bool IsShowingSeasonalContent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751968714(relative to base address)
		bool IsShowingPromotedContent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7519686E8(relative to base address)
		void FireDiscoverExitedAnalyticEvent(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF749FC5520(relative to base address)
		void DeactivationTransitionCompleted(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751967E80(relative to base address)
	};


	// Class DiscoveryBrowserUI.FortActivityListView
	// Inherited from UListViewBase -> UWidget -> UVisual -> UObject
	// Size: 0x1A8 (0x428 - 0x280)
	class UFortActivityListView : public UListViewBase	
	{
	public:
		unsigned char UnknownData00_3[0xE8]; // 0x280(0xE8) UNKNOWN PROPERTY
		float DirectionalNavigationTimeThreshold; // 0x368(0x4)
		TEnumAsByte<EOrientation> orientation; // 0x36C(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x36D(0x3) UNKNOWN PROPERTY
		float EntrySpacing; // 0x370(0x4)
		bool bCircularNavigationEnabled; // 0x374(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x375(0x3) UNKNOWN PROPERTY
		TMap<EActivityBrowserTileStyle, UClass*> TileTypes; // 0x378(0x50)
		unsigned char UnknownData03_7[0x60]; // 0x3C8(0x60) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DiscoveryBrowserUI.FortActivityListView");
			return ret;
		}

		int32_t GetMaxRows(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751968240(relative to base address)
		int32_t GetInViewCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751968100(relative to base address)
		bool GetHorizontalScrollingEnabled(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7519680E8(relative to base address)
		bool GetHasViewAllButton(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7519680D0(relative to base address)
		void AddTileType(EActivityBrowserTileStyle Style, UClass* WidgetClass); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751967D54(relative to base address)
	};


	// Class DiscoveryBrowserUI.FortActivityLobbyTile
	// Inherited from UCommonButtonLegacy -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x50 (0x1430 - 0x13E0)
	class UFortActivityLobbyTile : public UCommonButtonLegacy	
	{
	public:
		UCommonTextBlock* Text_ActivityName; // 0x13E0(0x8)
		UFortActivityBrowserTag* ActivityBrowserTag_EpicOriginal; // 0x13E8(0x8)
		UClass* ActivityModeSetSelectionModalClass; // 0x13F0(0x8)
		UFortGameActivityProvider* ActivityProvider; // 0x13F8(0x8)
		unsigned char UnknownData00_7[0x30]; // 0x1400(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DiscoveryBrowserUI.FortActivityLobbyTile");
			return ret;
		}

		void ShowModeSetSelectionModal(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751968FB4(relative to base address)
		void OnPreviewImageChanged(bool bIsLoading, UTexture* Texture); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnDetailsUpdated(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool IsActivityEpicCreated(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751968598(relative to base address)
		FText GetChildActivityDisplayName(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74949851C(relative to base address)
	};


	// Class DiscoveryBrowserUI.FortActivityModeSetSelectionModal
	// Inherited from UFortActivityModeSetSelectionModalBase -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x68 (0x470 - 0x408)
	class UFortActivityModeSetSelectionModal : public UFortActivityModeSetSelectionModalBase	
	{
	public:
		UCommonTextBlock* Text_ActivityName; // 0x408(0x8)
		unsigned char UnknownData00_6[0x28]; // 0x410(0x28) UNKNOWN PROPERTY
		UCommonButtonBase* Button_Back; // 0x438(0x8)
		UCommonButtonBase* Button_BackBoard; // 0x440(0x8)
		UFortActivityModeSetSelection* List_SubModeList; // 0x448(0x8)
		UFortActivitySquadFillButton* Button_ActivitySquadFill; // 0x450(0x8)
		UFortActivityPrivacyButton* Button_ActivityPrivacy; // 0x458(0x8)
		UFortActivityHabaneroButton* Button_Activity_Habanero; // 0x460(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x468(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DiscoveryBrowserUI.FortActivityModeSetSelectionModal");
			return ret;
		}

		void SetIsRankedSwitchAvailable(bool bIsRankedSwitchAvailable); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetHabaneroValues(bool bHabaneroEnabled, bool bHabaneroExists); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SaveSelectionAndClose(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751968B5C(relative to base address)
		void OnSubModeSelectionChanged(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSubModeSelected(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPreviewImageChanged(bool bIsLoading, UTexture* Texture); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnActivityChanged(UFortGameActivity* GameActivity, FString StartingSelectedMnemonic); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool IsCreativeModeSetActivity(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751968648(relative to base address)
	};


	// Class DiscoveryBrowserUI.FortActivityPlayerBrowserTile
	// Inherited from UFortActivityTileViewTileBase -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x60 (0x1480 - 0x1420)
	class UFortActivityPlayerBrowserTile : public UFortActivityTileViewTileBase	
	{
	public:
		UFortActivityTileDetailsDisplay* Display_TileDetails; // 0x1420(0x8)
		UCommonTextBlock* Text_LastPlayedDate; // 0x1428(0x8)
		unsigned char UnknownData00_7[0x50]; // 0x1430(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DiscoveryBrowserUI.FortActivityPlayerBrowserTile");
			return ret;
		}

		void HandleActivitySelected(); // Flags: Final|Native|Private, Memory Exec: 0x7FF75196831C(relative to base address)
	};


	// Class DiscoveryBrowserUI.FortActivitySelector
	// Inherited from UFortLocalPlayerSubsystem -> ULocalPlayerSubsystem -> USubsystem -> UObject
	// Size: 0x1B8 (0x1E8 - 0x30)
	class UFortActivitySelector : public UFortLocalPlayerSubsystem	
	{
	public:
		unsigned char UnknownData00_3[0x100]; // 0x30(0x100) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnShowActivityDetailsOnCreatorPageDelegate; // 0x130(0x10)
		unsigned char UnknownData01_6[0x10]; // 0x140(0x10) UNKNOWN PROPERTY
		TMap<FName, UFortActivityBrowserColorSchemeAsset*> ColorSchemes; // 0x150(0x50)
		unsigned char UnknownData02_7[0x48]; // 0x1A0(0x48) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DiscoveryBrowserUI.FortActivitySelector");
			return ret;
		}

		void ToggleFavorite(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751968FF0(relative to base address)
		void OpenCreatorPage(); // Flags: Final|Native|Private|BlueprintCallable, Memory Exec: 0x7FF751968ADC(relative to base address)
		void OnSwapColorScheme(bool bInIsUsingAlternateColorScheme); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnShowActivityDetailsOnCreatorPage__DelegateSignature(); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnEnableColorScheme(bool bIsColorSchemeActive); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleShowActivityDetails(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7519684DC(relative to base address)
		void ConfirmSelectedActivity(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751967E6C(relative to base address)
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
		unsigned char UnknownData00_6[0x3]; // 0x14B1(0x3) UNKNOWN PROPERTY
		int32_t DefaultColumnSize; // 0x14B4(0x4)
		UCommonTextBlock* Text_ActivityName; // 0x14B8(0x8)
		UCommonTextBlock* Text_PlayerCount; // 0x14C0(0x8)
		UCommonButtonBase* Button_Favorite; // 0x14C8(0x8)
		UCommonButtonBase* Button_Details; // 0x14D0(0x8)
		UFortActivityBrowserTag* ActivityBrowserTag_EpicOriginal; // 0x14D8(0x8)
		UTextBlock* Text_DebugId; // 0x14E0(0x8)
		UFortActivityVideoCycle* ActivityVideoCycleWidget; // 0x14E8(0x8)
		TMap<uint32_t, ECreativeLinkPreviewSize> MinColumnSizeToImageSize; // 0x14F0(0x50)
		UClass* ActivityDetailsModalClass; // 0x1540(0x8)
		UClass* ActivityCreatorPageViewClass; // 0x1548(0x8)
		UClass* ActivityCampaignPurchaseScreenClass; // 0x1550(0x8)
		UClass* ActivityAttributionsClass; // 0x1558(0x8)
		unsigned char UnknownData01_7[0xD0]; // 0x1560(0xD0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay");
			return ret;
		}

		void UpdateSqueegeeWidgets(UFortGameActivity* GameActivity); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateFromFortActivityViewModel(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF75196908C(relative to base address)
		void UpdateCCU(int32_t CCUCount); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateActivitySelector(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751969078(relative to base address)
		void StopTileVideo(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751968FDC(relative to base address)
		void StartTileVideo(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751968FC8(relative to base address)
		void ShouldPlayTileVideo(bool& bOutResult); // Flags: Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTileClicked(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751968A54(relative to base address)
		void OnTileActiveSet(bool bIsTileActive); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRespondToTileViewVisibilityChange(bool bIsVisible); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRequiresPurchaseChanged(bool bRequiresPurchase); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPreviewImageChanged(bool bIsLoading, UTexture* Texture); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPartySizeChanged(int32_t PartySize); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnLogoImageChanged(bool bIsLoading, UTexture* Texture); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnLocalPlayerPromotedToLeader(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnLocalPlayerDemoted(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnIsFavoriteChanged(bool bIsFavorite); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnFriendsPlayingChanged(int32_t NumPlaying); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnDetailsUpdated(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnActivityUnSelected__DelegateSignature(); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnActivitySelected__DelegateSignature(); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void NotifyAnalyticsTileWasClicked(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751968A2C(relative to base address)
		bool IsModeSetActivity(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7519686B8(relative to base address)
		bool IsActivityLocked(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7519685F4(relative to base address)
		bool IsActivityFavorited(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7519685D0(relative to base address)
		void HandleShowActivityDetails(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7519684F0(relative to base address)
		void HandleActivitySelected(); // Flags: Final|Native|Private, Memory Exec: 0x7FF751968330(relative to base address)
		EFortInvalidActivityReason GetInvalidActivityReason(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75196815C(relative to base address)
		EFortActivityIsLockedReason GetBestActivityLockedReason(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751967FB4(relative to base address)
		UFortActivitySelector GetActivitySelector(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751967F90(relative to base address)
		FString GetActivityCreatorDisplayText(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751967F50(relative to base address)
		bool DoesActivityRequirePurchase(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751967ED8(relative to base address)
		void BroadcastOnActivityConfirmed(); // Flags: Final|Native|Public|BlueprintCallable|Const, Memory Exec: 0x7FF751967E3C(relative to base address)
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

		void SetListenForMouseWheelInput(bool bListenForInput); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7489CD6E0(relative to base address)
		void RespondToVisibilityChange(bool bIsVisible); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF749C9B464(relative to base address)
		void NavigateToTop(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751968980(relative to base address)
	};


	// Class DiscoveryBrowserUI.FortDiscoverItemBrowserRow
	// Inherited from UFortActivityBrowserRow -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x50 (0x420 - 0x3D0)
	class UFortDiscoverItemBrowserRow : public UFortActivityBrowserRow	
	{
	public:
		UFortDiscoverItemListView* ListView_Tiles; // 0x3D0(0x8)
		UCommonButtonBase* Button_PageLeft; // 0x3D8(0x8)
		UCommonButtonBase* Button_PageRight; // 0x3E0(0x8)
		unsigned char UnknownData00_7[0x38]; // 0x3E8(0x38) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DiscoveryBrowserUI.FortDiscoverItemBrowserRow");
			return ret;
		}
	};


	// Class DiscoveryBrowserUI.FortDiscoverItemListView
	// Inherited from UListViewBase -> UWidget -> UVisual -> UObject
	// Size: 0x158 (0x3D8 - 0x280)
	class UFortDiscoverItemListView : public UListViewBase	
	{
	public:
		unsigned char UnknownData00_3[0xE8]; // 0x280(0xE8) UNKNOWN PROPERTY
		float DirectionalNavigationTimeThreshold; // 0x368(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x36C(0x4) UNKNOWN PROPERTY
		UClass* PlayWithFriendsEntryWidgetClass; // 0x370(0x8)
		UClass* ActivityEntryWidgetClass; // 0x378(0x8)
		UClass* LibraryEntryWidgetClass; // 0x380(0x8)
		TEnumAsByte<EOrientation> orientation; // 0x388(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x389(0x3) UNKNOWN PROPERTY
		float EntrySpacing; // 0x38C(0x4)
		bool bCircularNavigationEnabled; // 0x390(0x1)
		unsigned char UnknownData03_7[0x47]; // 0x391(0x47) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DiscoveryBrowserUI.FortDiscoverItemListView");
			return ret;
		}

		int32_t GetInViewCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751968124(relative to base address)
	};


	// Class DiscoveryBrowserUI.ActivityLibraryComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x30 (0xD0 - 0xA0)
	class UActivityLibraryComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0xA0(0x10) UNKNOWN PROPERTY
		TWeakObjectPtr<UClass*> CreatorPageOverrideClass; // 0xB0(0x20)

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
		unsigned char UnknownData00_1[0x18]; // 0x30(0x18) UNKNOWN PROPERTY

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
