#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: SaveTheWorldUI
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class SaveTheWorldUI.BoundActionBarWithSecondaryBar
	// Inherited from UCommonBoundActionBar -> UDynamicEntryBoxBase -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x290 - 0x270)
	class UBoundActionBarWithSecondaryBar : public UCommonBoundActionBar	
	{
	public:
		UDynamicEntryBox SecondaryActionBar; // 0x270(0x8)
		TArray SecondaryActionBarInputActions; // 0x278(0x10)
		UClass SecondaryActionBarButtonClassOverride; // 0x288(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.BoundActionBarWithSecondaryBar");
			return ret;
		}
	};


	// Class SaveTheWorldUI.FortEventStoreOfferDetailsScreen
	// Inherited from UFortStoreFrontOfferDetailsWidgetBase -> UFortActivatablePanelWithItemPreview -> UFortActivatablePanel -> UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x28 (0x850 - 0x828)
	class UFortEventStoreOfferDetailsScreen : public UFortStoreFrontOfferDetailsWidgetBase	
	{
	public:
		FDataTableRowHandle BackAction; // 0x828(0x10)
		FDataTableRowHandle UndoAction; // 0x838(0x10)
		bool bIsPurchasing; // 0x848(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x849(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortEventStoreOfferDetailsScreen");
			return ret;
		}

		void SetIsPurchasing(bool bNewIsPurchasing); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E5E000
		void HandleUndo(bool& bPassThrough); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable 0x7FF414E5DF20
		void HandleBack(bool& bPassThrough); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable 0x7FF414E5DE40
		bool GetIsPurchasing(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414E5DD60
		void BP_HandleScreenClosed(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E5DC80
	};


	// Class SaveTheWorldUI.FortOutpostSubscreenBase
	// Inherited from UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x540 - 0x530)
	class UFortOutpostSubscreenBase : public UCommonActivatablePanelLegacy	
	{
	public:
		FDataTableRowHandle BackActionInputRowHandle; // 0x530(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortOutpostSubscreenBase");
			return ret;
		}

		void HandleBackAction(bool& bPassThrough); // Flags: Final|Native|Protected|HasOutParms 0x7FF414E5E1C0
		void BP_HandleBackAction(bool& bPassThrough); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414E5E0E0
	};


	// Class SaveTheWorldUI.FortIronCityContentScreen
	// Inherited from UFortOutpostSubscreenBase -> UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x540 - 0x540)
	class UFortIronCityContentScreen : public UFortOutpostSubscreenBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortIronCityContentScreen");
			return ret;
		}
	};


	// Class SaveTheWorldUI.FortItemManagementItemPopupMenu_STW
	// Inherited from UFortPopupMenu_Legacy -> UCommonPopupMenuLegacy -> UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x558 - 0x550)
	class UFortItemManagementItemPopupMenu_STW : public UFortPopupMenu_Legacy	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x550(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortItemManagementItemPopupMenu_STW");
			return ret;
		}

		void MulchItem(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E5E540
		void HandleItemChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged); // Flags: Event|Protected|BlueprintEvent 0x7FF414E5E460
		void HandleCompareAction(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E5E380
		UFortItemManagementItemTileButton_STW GetHostButton(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414E5E2A0
	};


	// Class SaveTheWorldUI.FortModalMenu_STW
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x400 - 0x3F8)
	class UFortModalMenu_STW : public UCommonActivatableWidget	
	{
	public:
		TWeakObjectPtr ContextProvidingObject; // 0x3F8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortModalMenu_STW");
			return ret;
		}

		void SetContextProvider(UObject InContextProvidingObject); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E5E620
	};


	// Class SaveTheWorldUI.FortOutpostPermissionsScreen
	// Inherited from UFortOutpostSubscreenBase -> UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x540 - 0x540)
	class UFortOutpostPermissionsScreen : public UFortOutpostSubscreenBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortOutpostPermissionsScreen");
			return ret;
		}
	};


	// Class SaveTheWorldUI.FortOutpostScreenStormShieldBase
	// Inherited from UFortOutpostSubscreenBase -> UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x540 - 0x540)
	class UFortOutpostScreenStormShieldBase : public UFortOutpostSubscreenBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortOutpostScreenStormShieldBase");
			return ret;
		}
	};


	// Class SaveTheWorldUI.FortQuestMapViewer
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x80 (0x360 - 0x2E0)
	class UFortQuestMapViewer : public UCommonUserWidget	
	{
	public:
		unsigned char UnknownData02_3[0x10]; // 0x2E0(0x10) UNKNOWN PROPERTY
		UCommonButtonBase Button_PageRight; // 0x2F0(0x8)
		UCommonButtonBase Button_PageLeft; // 0x2F8(0x8)
		UCommonTextBlock Text_Title; // 0x300(0x8)
		UCommonTextBlock Text_Page; // 0x308(0x8)
		USizeBox SizeBox_Viewer; // 0x310(0x8)
		UCanvasPanel CanvasPanel_Cosmetic; // 0x318(0x8)
		UFortQuestMapScreen ParentScreen; // 0x320(0x8)
		UFortQuestMapNodeLayout NodeLayout; // 0x328(0x8)
		unsigned char UnknownData03_7[0x30]; // 0x330(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortQuestMapViewer");
			return ret;
		}

		void UpdateViewerData(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E5EA80
		void OnTryUpdateUserWidgetColor(UUserWidget Widget, FSlateColor OverrideColor); // Flags: Event|Public|BlueprintEvent 0x7FF414E5E9A0
		void OnPlayLayoutOutroAnimation(EViewerNavigationDirection TravelDirection); // Flags: Event|Public|BlueprintEvent 0x7FF414E5E8C0
		void OnPlayLayoutFadeInAnimation(); // Flags: Event|Public|BlueprintEvent 0x7FF414E5E7E0
		void HandleLayoutOutroAnimationFinished(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E5E700
	};


	// Class SaveTheWorldUI.FortStoreOpeningCardPack
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x60 (0x458 - 0x3F8)
	class UFortStoreOpeningCardPack : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData03_3[0x8]; // 0x3F8(0x8) UNKNOWN PROPERTY
		EFortStoreState CachedStoreState; // 0x400(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x401(0x7) UNKNOWN PROPERTY
		UFortStoreSummary Store_Summary; // 0x408(0x8)
		TArray CachedCards; // 0x410(0x10)
		UClass CardItemWidgetType; // 0x420(0x8)
		UClass CardItemWidgetStyle; // 0x428(0x8)
		TArray CachedCardArraySinglePack; // 0x430(0x10)
		TArray CachedCardArrayMultiplePacks; // 0x440(0x10)
		unsigned char UnknownData05_7[0x8]; // 0x450(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortStoreOpeningCardPack");
			return ret;
		}

		void HandleSummaryAdd(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E5ED20
		void HandleStoreStateChange_BP(EFortStoreState NewState); // Flags: Event|Protected|BlueprintEvent 0x7FF414E5EC40
		void HandleInputMethodChanged_BP(ECommonInputType CommonInput); // Flags: Event|Protected|BlueprintEvent 0x7FF414E5EB60
	};


	// Class SaveTheWorldUI.FortUIStateWidget_Cinematic
	// Inherited from UFortUIStateWidgetBase -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x418 - 0x410)
	class UFortUIStateWidget_Cinematic : public UFortUIStateWidgetBase	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x410(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortUIStateWidget_Cinematic");
			return ret;
		}
	};


	// Class SaveTheWorldUI.FortUIStateWidget_STW
	// Inherited from UFortUIStateWidgetBase -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x418 - 0x410)
	class UFortUIStateWidget_STW : public UFortUIStateWidgetBase	
	{
	public:
		UMainMenu_STW MainMenu_STW; // 0x410(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortUIStateWidget_STW");
			return ret;
		}
	};


	// Class SaveTheWorldUI.MgmtTabsScreen_STW
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x18 (0x410 - 0x3F8)
	class UMgmtTabsScreen_STW : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x3F8(0x8) UNKNOWN PROPERTY
		FDataTableRowHandle OpenChatAction; // 0x400(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.MgmtTabsScreen_STW");
			return ret;
		}
	};


	// Class SaveTheWorldUI.ObjectivesPage
	// Inherited from UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x550 - 0x530)
	class UObjectivesPage : public UCommonActivatablePanelLegacy	
	{
	public:
		FDataTableRowHandle LeaveInventoryInputHandle; // 0x530(0x10)
		FDataTableRowHandle BackInputHandle; // 0x540(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.ObjectivesPage");
			return ret;
		}

		void BackAction(bool& bPassThrough); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414E5EE00
	};


	// Class SaveTheWorldUI.STWDeathWidget
	// Inherited from UFortActivatablePanel -> UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x30 (0x598 - 0x568)
	class USTWDeathWidget : public UFortActivatablePanel	
	{
	public:
		FDataTableRowHandle PreviousTeammateActionRowHandle; // 0x568(0x10)
		FDataTableRowHandle NextTeammateActionRowHandle; // 0x578(0x10)
		FDataTableRowHandle RespawnActionRowHandle; // 0x588(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.STWDeathWidget");
			return ret;
		}

		void ToggleRespawnAction(bool bEnabled); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E5F420
		void HandleRespawnAction(bool& bPassThrough); // Flags: Final|Native|Private|HasOutParms 0x7FF414E5F340
		void HandlePreviousTeammateAction(bool& bPassThrough); // Flags: Final|Native|Private|HasOutParms 0x7FF414E5F260
		void HandleNextTeammateAction(bool& bPassThrough); // Flags: Final|Native|Private|HasOutParms 0x7FF414E5F180
		void EnableAndShowNavActions(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E5F0A0
		void DisableAndHideRespawnAction(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E5EFC0
		void DisableAndHideNavActions(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E5EEE0
	};


	// Class SaveTheWorldUI.XpBoostsRootWidget
	// Inherited from UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x30 (0x560 - 0x530)
	class UXpBoostsRootWidget : public UCommonActivatablePanelLegacy	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x530(0x8) UNKNOWN PROPERTY
		FDataTableRowHandle BackInputActionRowHandle; // 0x538(0x10)
		FDataTableRowHandle ShowLeaderboardInputActionRowHandle; // 0x548(0x10)
		bool bCanShowLeaderboard; // 0x558(0x1)
		unsigned char UnknownData03_7[0x7]; // 0x559(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.XpBoostsRootWidget");
			return ret;
		}

		void HandleShowLeaderboard(bool& bPassThrough); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414E5F5E0
		void HandleBack(bool& bPassThrough); // Flags: Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 0x7FF414E5F500
	};


	// Class SaveTheWorldUI.FortArmoryScreen
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x418 - 0x3F8)
	class UFortArmoryScreen : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x3F8(0x8) UNKNOWN PROPERTY
		FDataTableRowHandle BackActionRowHandle; // 0x400(0x10)
		unsigned char UnknownData03_7[0x8]; // 0x410(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortArmoryScreen");
			return ret;
		}

		void HandleCustomBackAction(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E5F6C0
	};


	// Class SaveTheWorldUI.FortArmoryScreen_Legacy
	// Inherited from UFortActivatablePanel -> UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x568 - 0x568)
	class UFortArmoryScreen_Legacy : public UFortActivatablePanel	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortArmoryScreen_Legacy");
			return ret;
		}
	};


	// Class SaveTheWorldUI.FortCommandScreen
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x28 (0x420 - 0x3F8)
	class UFortCommandScreen : public UCommonActivatableWidget	
	{
	public:
		FDataTableRowHandle ShowAllStatsActionData; // 0x3F8(0x10)
		FDataTableRowHandle InspectHeroActionData; // 0x408(0x10)
		unsigned char UnknownData01_7[0x8]; // 0x418(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortCommandScreen");
			return ret;
		}

		void HandleUpgradeInspectHero(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E5F880
		void HandleShowAllStats(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E5F7A0
	};


	// Class SaveTheWorldUI.FortCollectionBookGenericRewardWidget
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x18 (0x2F8 - 0x2E0)
	class UFortCollectionBookGenericRewardWidget : public UCommonUserWidget	
	{
	public:
		bool bUpdateVisibilityBasedOnRewardExistence : 1; // 0x2E0:0(0x1)
		unsigned char UnknownData03_5[0x3]; // 0x2E1(0x3) UNKNOWN PROPERTY
		ESlateVisibility VisibilityWhenNoRewardSpecified; // 0x2E4(0x1)
		ESlateVisibility VisibilityWhenRewardSpecified; // 0x2E5(0x1)
		unsigned char UnknownData04_6[0x2]; // 0x2E6(0x2) UNKNOWN PROPERTY
		UFortCollectionBookRewardCardWidget RewardCardWidget; // 0x2E8(0x8)
		ECollectionBookRewardStatus RewardStatus; // 0x2F0(0x1)
		unsigned char UnknownData05_7[0x7]; // 0x2F1(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortCollectionBookGenericRewardWidget");
			return ret;
		}

		void SetRewardStatus(ECollectionBookRewardStatus Status); // Flags: Native|Public|BlueprintCallable 0x7FF414E5FEA0
		void SetRewards(FFortRewardInfo& Rewards); // Flags: Native|Public|HasOutParms|BlueprintCallable 0x7FF414E5FDC0
		void SetCurrentItemToDisplay(UFortItem ItemToDisplay); // Flags: Native|Protected 0x7FF414E5FCE0
		void OnRewardStatusChanged(ECollectionBookRewardStatus NewStatus); // Flags: Native|Event|Protected|BlueprintEvent 0x7FF414E5FC00
		bool HasRewards(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E5FB20
		ECollectionBookRewardStatus GetRewardStatus(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E5FA40
		void ClearRewards(); // Flags: Native|Public|BlueprintCallable 0x7FF414E5F960
	};


	// Class SaveTheWorldUI.FortCollectionBookHelpWidget
	// Inherited from UFortActivatablePanel -> UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x568 - 0x568)
	class UFortCollectionBookHelpWidget : public UFortActivatablePanel	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortCollectionBookHelpWidget");
			return ret;
		}
	};


	// Class SaveTheWorldUI.FortCollectionBookItemPopupMenu
	// Inherited from UFortPopupMenu_Legacy -> UCommonPopupMenuLegacy -> UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x558 - 0x550)
	class UFortCollectionBookItemPopupMenu : public UFortPopupMenu_Legacy	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x550(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortCollectionBookItemPopupMenu");
			return ret;
		}

		void HandleItemUpdated(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E60300
		void HandleItemChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged); // Flags: Event|Protected|BlueprintEvent 0x7FF414E60220
		UFortCollectionBookSlotButton GetHostButton(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414E60140
		bool CanItemBeUnslotted(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E60060
		bool CanItemBePurchased(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E5FF80
	};


	// Class SaveTheWorldUI.FortCollectionBookOverviewWidget
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x48 (0x328 - 0x2E0)
	class UFortCollectionBookOverviewWidget : public UCommonUserWidget	
	{
	public:
		FMulticastInlineDelegate OnCollectionBookPageSelected; // 0x2E0(0x10)
		FMulticastInlineDelegate OnCollectionBookPageClicked; // 0x2F0(0x10)
		UFortCollectionBookPage LastSelectedPage; // 0x300(0x8)
		UFortCollectionBookCategory LastSelectedCategory; // 0x308(0x8)
		TArray CategoryObjectPool; // 0x310(0x10)
		UCommonTreeView PageTreeViewWidget; // 0x320(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortCollectionBookOverviewWidget");
			return ret;
		}

		void OnDeactivated(); // Flags: Native|Event|Public|BlueprintEvent 0x7FF414E605A0
		void OnActivated(); // Flags: Native|Event|Public|BlueprintEvent 0x7FF414E604C0
		void HandlePagesChanged(UFortCollectionBookManager CBManager); // Flags: Final|Native|Private 0x7FF414E603E0
	};


	// Class SaveTheWorldUI.FortCollectionBookPageCompletionRewardWidget
	// Inherited from UFortCollectionBookGenericRewardWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x2F8 - 0x2F8)
	class UFortCollectionBookPageCompletionRewardWidget : public UFortCollectionBookGenericRewardWidget	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortCollectionBookPageCompletionRewardWidget");
			return ret;
		}
	};


	// Class SaveTheWorldUI.FortCollectionBookPageDetailsWidget
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x60 (0x340 - 0x2E0)
	class UFortCollectionBookPageDetailsWidget : public UCommonUserWidget	
	{
	public:
		UCommonTextBlock PageCompletionText; // 0x2E0(0x8)
		UFortMaterialProgressBar ProgressBar; // 0x2E8(0x8)
		UFortCollectionBookPageCompletionRewardWidget PageRewardWidget; // 0x2F0(0x8)
		UCommonButtonBase RewardDetailsButton; // 0x2F8(0x8)
		UFortCollectionBookPage DetailsPage; // 0x300(0x8)
		TWeakObjectPtr RewardDetailsModalWidgetClass; // 0x308(0x20)
		FText ModalTitle; // 0x328(0x10)
		UFortCollectionBookRewardModalWidget RewardDetailsModalWidget; // 0x338(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortCollectionBookPageDetailsWidget");
			return ret;
		}

		void OnUnslotItemComplete(UFortAccountItem SlottedItem, UFortAccountItem OldItem, FName SlotId); // Flags: Final|Native|Protected 0x7FF414E60920
		void OnSlotItemComplete(UFortAccountItem SlottedItem, FName SlotId); // Flags: Final|Native|Protected 0x7FF414E60840
		void OnPageProgressionUpdated(int32_t TotalFilledSlots, int32_t TotalSlots, EFortCollectionBookState State); // Flags: Native|Event|Protected|BlueprintEvent 0x7FF414E60760
		void OnDetailsPageChanged(UFortCollectionBookPage InNewDetailsPage); // Flags: Native|Event|Protected|BlueprintEvent 0x7FF414E60680
	};


	// Class SaveTheWorldUI.FortCollectionBookPageListWidget
	// Inherited from UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x30 (0x13C0 - 0x1390)
	class UFortCollectionBookPageListWidget : public UCommonButtonBase	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x1390(0x8) UNKNOWN PROPERTY
		UCommonTextBlock PageNameWidget; // 0x1398(0x8)
		UCommonNumericTextBlock AvailableSlotsWidget; // 0x13A0(0x8)
		UCommonTextBlock PageCompletionWidget; // 0x13A8(0x8)
		TWeakObjectPtr AssociatedPageOrCategory; // 0x13B0(0x8)
		bool bIsExpanded; // 0x13B8(0x1)
		unsigned char UnknownData03_7[0x7]; // 0x13B9(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortCollectionBookPageListWidget");
			return ret;
		}

		void SetupAsPage(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E60D80
		void SetupAsCategory(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E60CA0
		void OnSlottedItemOperationComplete(UFortAccountItem SlottedItem, FName SlotId); // Flags: Final|Native|Protected 0x7FF414E60BC0
		void OnPageDetailsUpdated(int32_t AvailableSlots, int32_t FilledSlots, int32_t TotalSlots, EFortCollectionBookState State); // Flags: Event|Protected|BlueprintEvent 0x7FF414E60AE0
		void OnCategoryDetailsUpdated(int32_t AvailableSlots, int32_t FilledSlots, int32_t TotalSlots); // Flags: Event|Protected|BlueprintEvent 0x7FF414E60A00
	};


	// Class SaveTheWorldUI.FortCollectionBookPicker
	// Inherited from UFortItemPickerBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x28 (0x440 - 0x418)
	class UFortCollectionBookPicker : public UFortItemPickerBase	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x418(0x8) UNKNOWN PROPERTY
		UClass MulchConfirmationModalClass; // 0x420(0x8)
		unsigned char UnknownData03_6[0x8]; // 0x428(0x8) UNKNOWN PROPERTY
		UFortAccountItem CurrentSlottedItem; // 0x430(0x8)
		UFortMulchConfirmationModalWidget MulchConfirmationModal; // 0x438(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortCollectionBookPicker");
			return ret;
		}

		void ShowMulchDialogForItem(UFortItem ItemToMulch); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E612C0
		void ShowMulchConfirmationModal(); // Flags: Native|Protected|BlueprintCallable 0x7FF414E611E0
		void OnCollectComplete(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E61100
		void NotifyPanelDeactivated(); // Flags: Native|Protected|BlueprintCallable 0x7FF414E61020
		void NotifyPanelActivated(); // Flags: Native|Protected|BlueprintCallable 0x7FF414E60F40
		void HideMulchConfirmationModal(); // Flags: Native|Protected|BlueprintCallable 0x7FF414E60E60
	};


	// Class SaveTheWorldUI.FortCollectionBookPrimaryPanel
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xC8 (0x4C0 - 0x3F8)
	class UFortCollectionBookPrimaryPanel : public UCommonActivatableWidget	
	{
	public:
		FMulticastInlineDelegate OnCollectionBookPageSelectedDelegate; // 0x3F8(0x10)
		FMulticastInlineDelegate OnCollectionBookPageClickedDelegate; // 0x408(0x10)
		FMulticastInlineDelegate OnCollectionBookSectionClickedDelegate; // 0x418(0x10)
		FDataTableRowHandle BackActionRowHandle; // 0x428(0x10)
		FDataTableRowHandle SummonInfoPanelActionRowHandle; // 0x438(0x10)
		UFortCollectionBookOverviewWidget OverviewWidget; // 0x448(0x8)
		UCommonTileView SectionTileViewWidget; // 0x450(0x8)
		ECollectionBookPrimaryNavTarget CurrentNavTarget; // 0x458(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x459(0x7) UNKNOWN PROPERTY
		UFortCollectionBookSection LastClickedSection; // 0x460(0x8)
		unsigned char UnknownData03_7[0x58]; // 0x468(0x58) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortCollectionBookPrimaryPanel");
			return ret;
		}

		void OnSummonInfoPanelExecuted(bool& bPassThrough); // Flags: Native|Event|Protected|HasOutParms|BlueprintEvent 0x7FF414E61800
		void OnInputMethodChanged(ECommonInputType CurrentInputType); // Flags: Final|Native|Protected 0x7FF414E61720
		void OnCollectionBookSectionClicked(UFortCollectionBookSection ClickedSection); // Flags: Native|Event|Protected|BlueprintEvent 0x7FF414E61640
		void OnCollectionBookPageSelected(UFortCollectionBookPage SelectedPage); // Flags: Native|Event|Protected|BlueprintEvent 0x7FF414E61560
		void OnCollectionBookPageClicked(UFortCollectionBookPage ClickedPage); // Flags: Native|Event|Protected|BlueprintEvent 0x7FF414E61480
		void OnBackActionExecuted(); // Flags: Final|Native|Public 0x7FF414E613A0
	};


	// Class SaveTheWorldUI.FortCollectionBookPrimaryPanel_Legacy
	// Inherited from UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xC0 (0x5F0 - 0x530)
	class UFortCollectionBookPrimaryPanel_Legacy : public UCommonActivatablePanelLegacy	
	{
	public:
		FMulticastInlineDelegate OnCollectionBookPageSelectedDelegate; // 0x530(0x10)
		FMulticastInlineDelegate OnCollectionBookPageClickedDelegate; // 0x540(0x10)
		FMulticastInlineDelegate OnCollectionBookSectionClickedDelegate; // 0x550(0x10)
		FDataTableRowHandle BackActionRowHandle; // 0x560(0x10)
		FDataTableRowHandle SummonInfoPanelActionRowHandle; // 0x570(0x10)
		UFortCollectionBookOverviewWidget OverviewWidget; // 0x580(0x8)
		UCommonTileView SectionTileViewWidget; // 0x588(0x8)
		ECollectionBookPrimaryNavTarget CurrentNavTarget; // 0x590(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x591(0x7) UNKNOWN PROPERTY
		UFortCollectionBookSection LastClickedSection; // 0x598(0x8)
		unsigned char UnknownData03_7[0x50]; // 0x5A0(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortCollectionBookPrimaryPanel_Legacy");
			return ret;
		}

		void OnSummonInfoPanelExecuted(bool& bPassThrough); // Flags: Native|Event|Protected|HasOutParms|BlueprintEvent 0x7FF414E61D40
		void OnInputMethodChanged(ECommonInputType CurrentInputType); // Flags: Final|Native|Protected 0x7FF414E61C60
		void OnCollectionBookSectionClicked(UFortCollectionBookSection ClickedSection); // Flags: Native|Event|Protected|BlueprintEvent 0x7FF414E61B80
		void OnCollectionBookPageSelected(UFortCollectionBookPage SelectedPage); // Flags: Native|Event|Protected|BlueprintEvent 0x7FF414E61AA0
		void OnCollectionBookPageClicked(UFortCollectionBookPage ClickedPage); // Flags: Native|Event|Protected|BlueprintEvent 0x7FF414E619C0
		void OnBackActionExecuted(bool& bPassThrough); // Flags: Final|Native|Public|HasOutParms 0x7FF414E618E0
	};


	// Class SaveTheWorldUI.FortCollectionBookProgressionRewardDetailInspectWidget
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x300 - 0x2E0)
	class UFortCollectionBookProgressionRewardDetailInspectWidget : public UCommonUserWidget	
	{
	public:
		UCommonNumericTextBlock LevelTextWidget; // 0x2E0(0x8)
		UFortRewardInfoWidget RewardWidget; // 0x2E8(0x8)
		UWidget CheckmarkImage; // 0x2F0(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x2F8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortCollectionBookProgressionRewardDetailInspectWidget");
			return ret;
		}

		void SetAssociatedLevel(int32_t Level); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E61FE0
		void OnXPRequiredChanged(int32_t NewXPRequired); // Flags: Event|Public|BlueprintEvent 0x7FF414E61F00
		int32_t GetXPRequired(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E61E20
	};


	// Class SaveTheWorldUI.FortCollectionBookProgressionRewardsModalWidget
	// Inherited from UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x60 (0x590 - 0x530)
	class UFortCollectionBookProgressionRewardsModalWidget : public UCommonActivatablePanelLegacy	
	{
	public:
		TWeakObjectPtr RewardWidgetClass; // 0x530(0x20)
		FMargin RewardWidgetPadding; // 0x550(0x10)
		int32_t NumRewardsToShow; // 0x560(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x564(0x4) UNKNOWN PROPERTY
		UVerticalBox RewardBoxWidget; // 0x568(0x8)
		UVerticalBox MajorRewardBoxWidget; // 0x570(0x8)
		UCommonTextBlock XPTextWidget; // 0x578(0x8)
		UCommonNumericTextBlock LevelTextWidget; // 0x580(0x8)
		UCommonButtonGroupBase ButtonGroup; // 0x588(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortCollectionBookProgressionRewardsModalWidget");
			return ret;
		}

		void OnSelectedButtonChanged(UCommonButtonBase SelectedButton, int32_t ButtonIndex); // Flags: Final|Native|Protected 0x7FF414E62360
		void OnLevelProgressionSet(int32_t CurrentLevel, float NextLvlPct, int32_t MaxAchievedLevel); // Flags: Native|Event|Protected|BlueprintEvent 0x7FF414E62280
		void InspectItemBP(UFortItem Item); // Flags: Event|Protected|BlueprintEvent 0x7FF414E621A0
		void Dismiss(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E620C0
	};


	// Class SaveTheWorldUI.FortCollectionBookProgressionRewardsPreviewWidget
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x2F0 - 0x2E0)
	class UFortCollectionBookProgressionRewardsPreviewWidget : public UCommonUserWidget	
	{
	public:
		UFortCollectionBookProgressionRewardWidget NextRewardWidget; // 0x2E0(0x8)
		UFortCollectionBookProgressionRewardWidget NextMajorRewardWidget; // 0x2E8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortCollectionBookProgressionRewardsPreviewWidget");
			return ret;
		}
	};


	// Class SaveTheWorldUI.FortCollectionBookProgressionRewardWidget
	// Inherited from UFortCollectionBookGenericRewardWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x308 - 0x2F8)
	class UFortCollectionBookProgressionRewardWidget : public UFortCollectionBookGenericRewardWidget	
	{
	public:
		UCommonNumericTextBlock LevelTextWidget; // 0x2F8(0x8)
		UCommonTextBlock DisplayNameWidget; // 0x300(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortCollectionBookProgressionRewardWidget");
			return ret;
		}

		void SetAssociatedLevel(int32_t Level); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E62440
	};


	// Class SaveTheWorldUI.FortCollectionBookProgressWidget
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x58 (0x338 - 0x2E0)
	class UFortCollectionBookProgressWidget : public UCommonUserWidget	
	{
	public:
		int32_t CachedXPLevel; // 0x2E0(0x4)
		float CachedXPCompletionPct; // 0x2E4(0x4)
		TWeakObjectPtr RewardDetailsModalWidgetClass; // 0x2E8(0x20)
		UFortCollectionBookProgressionRewardsPreviewWidget ProgressionRewardsPreviewWidget; // 0x308(0x8)
		UCommonTextBlock XPTextWidget; // 0x310(0x8)
		UCommonNumericTextBlock LevelTextWidget; // 0x318(0x8)
		UCommonButtonBase DetailsButtonWidget; // 0x320(0x8)
		UFortCollectionBookPageDetailsWidget PageDetailsWidget; // 0x328(0x8)
		UFortCollectionBookProgressionRewardsModalWidget DetailsModalWidget; // 0x330(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortCollectionBookProgressWidget");
			return ret;
		}

		void OnSlottedItemOperationComplete(UFortAccountItem ItemSlotted, FName SlotId); // Flags: Final|Native|Protected 0x7FF414E62A60
		void OnInventoryUpdated(); // Flags: Final|Native|Protected 0x7FF414E62980
		void OnCollectionBookPreviewXPChange(float PreviewCompletionPct); // Flags: Native|Event|Protected|BlueprintEvent 0x7FF414E628A0
		void OnCollectionBookPageSelected(UFortCollectionBookPage SelectedPage); // Flags: Native|Event|Public|BlueprintEvent 0x7FF414E627C0
		void OnCollectionBookLevelProgressionChanged(float NewCompletionPct); // Flags: Native|Event|Protected|BlueprintEvent 0x7FF414E626E0
		void OnCollectionBookLevelChanged(int32_t NewLevel); // Flags: Native|Event|Protected|BlueprintEvent 0x7FF414E62600
		void HandleDetailsModalWidgetDeactivated(); // Flags: Final|Native|Private 0x7FF414E62520
	};


	// Class SaveTheWorldUI.FortCollectionBookRecycleSlotResultsWidget
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x18 (0x2F8 - 0x2E0)
	class UFortCollectionBookRecycleSlotResultsWidget : public UCommonUserWidget	
	{
	public:
		UPanelWidget RecycleResultsWidget; // 0x2E0(0x8)
		EFortItemCardSize ItemCardSize; // 0x2E8(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x2E9(0x7) UNKNOWN PROPERTY
		UFortAccountItem ItemToRecycle; // 0x2F0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortCollectionBookRecycleSlotResultsWidget");
			return ret;
		}

		void SetCurrentItemToRecycle(UFortAccountItem InItemToRecycle); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E62B40
	};


	// Class SaveTheWorldUI.FortCollectionBookRewardCardWidget
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x88 (0x368 - 0x2E0)
	class UFortCollectionBookRewardCardWidget : public UCommonUserWidget	
	{
	public:
		FMulticastInlineDelegate OnDisplayedItemChangedEvent; // 0x2E0(0x10)
		UFortMultiSizeItemCard ItemCardWidget; // 0x2F0(0x8)
		UWidget MultiItemRewardOverlay; // 0x2F8(0x8)
		UWidget ChoiceRewardOverlay; // 0x300(0x8)
		UWidget CheckmarkImage; // 0x308(0x8)
		float UpdateCardInterval; // 0x310(0x4)
		EFortItemCardSize ItemCardSize; // 0x314(0x1)
		bool bDisplayAsRewardCard; // 0x315(0x1)
		unsigned char UnknownData02_6[0x2]; // 0x316(0x2) UNKNOWN PROPERTY
		FFortRewardInfo RepresentedRewards; // 0x318(0x30)
		TArray DummyItems; // 0x348(0x10)
		FTimerHandle UpdateCardTimer; // 0x358(0x8)
		unsigned char UnknownData03_7[0x8]; // 0x360(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortCollectionBookRewardCardWidget");
			return ret;
		}

		void SetRewards(FFortRewardInfo& Rewards); // Flags: Native|Public|HasOutParms|BlueprintCallable 0x7FF4140FBF08
		void OnDisplayedItemChangedEvent__DelegateSignature(UFortItem DisplayedItem); // Flags: MulticastDelegate|Public|Delegate 0x7FF4140FBE28
		bool HasRewards(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140FBD48
		void ClearRewards(); // Flags: Native|Public|BlueprintCallable 0x7FF4140FBC68
	};


	// Class SaveTheWorldUI.FortCollectionBookRewardModalWidget
	// Inherited from UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x50 (0x580 - 0x530)
	class UFortCollectionBookRewardModalWidget : public UCommonActivatablePanelLegacy	
	{
	public:
		UCommonTextBlock TitleWidget; // 0x530(0x8)
		UFortRewardInfoWidget RewardWidget; // 0x538(0x8)
		UFortMaterialProgressBar ProgressBar; // 0x540(0x8)
		UCommonTextBlock ProgressTextWidget; // 0x548(0x8)
		unsigned char UnknownData01_7[0x30]; // 0x550(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortCollectionBookRewardModalWidget");
			return ret;
		}
	};


	// Class SaveTheWorldUI.FortCollectionBookSectionCompletionRewardWidget
	// Inherited from UFortCollectionBookGenericRewardWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x48 (0x340 - 0x2F8)
	class UFortCollectionBookSectionCompletionRewardWidget : public UFortCollectionBookGenericRewardWidget	
	{
	public:
		UCommonButtonBase RewardDetailsButton; // 0x2F8(0x8)
		TWeakObjectPtr RewardDetailsModalWidgetClass; // 0x300(0x20)
		FText ModalTitle; // 0x320(0x10)
		UFortCollectionBookRewardModalWidget RewardDetailsModalWidget; // 0x330(0x8)
		UFortCollectionBookSection Section; // 0x338(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortCollectionBookSectionCompletionRewardWidget");
			return ret;
		}

		void HandleRewardDetailsModalWidgetDeactivated(); // Flags: Final|Native|Private 0x7FF414E62C20
	};


	// Class SaveTheWorldUI.FortCollectionBookSectionPanel
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x200 (0x5F8 - 0x3F8)
	class UFortCollectionBookSectionPanel : public UCommonActivatableWidget	
	{
	public:
		FMulticastInlineDelegate OnSectionCloseRequest; // 0x3F8(0x10)
		FMulticastInlineDelegate OnPreviewXPChangeEvent; // 0x408(0x10)
		UCommonTextBlock SectionNameTextWidget; // 0x418(0x8)
		UFortCollectionBookSlotView SlotViewWidget; // 0x420(0x8)
		UFortCollectionBookPicker SlotItemPicker; // 0x428(0x8)
		UWidget ContextOverlayWidget; // 0x430(0x8)
		UTextBlock ContextTextWidget; // 0x438(0x8)
		UFortCollectionBookSectionCompletionRewardWidget SectionRewardWidget; // 0x440(0x8)
		UWidget ItemAcquisitionSourceContainerWidget; // 0x448(0x8)
		UCommonTextBlock ItemAcquisitionSourceDescWidget; // 0x450(0x8)
		UCommonTextBlock ItemAcquisitionSourceDesc2Widget; // 0x458(0x8)
		UWidget ResearchRecruitUnslotContainerWidget; // 0x460(0x8)
		UCommonTextBlock PersonRecruitUnavailableMessageWidget; // 0x468(0x8)
		UCommonTextBlock ItemResearchUnavailableMessageWidget; // 0x470(0x8)
		UCommonTextBlock UnslotUnavailableMessageWidget; // 0x478(0x8)
		FDataTableRowHandle BackActionRowHandle; // 0x480(0x10)
		FDataTableRowHandle CloseActionRowHandle; // 0x490(0x10)
		FDataTableRowHandle SlotItemActionRowHandle; // 0x4A0(0x10)
		FDataTableRowHandle InspectItemActionRowHandle; // 0x4B0(0x10)
		FDataTableRowHandle InspectCollectionBookItemActionRowHandle; // 0x4C0(0x10)
		FDataTableRowHandle InspectPreviewItemActionRowHandle; // 0x4D0(0x10)
		FDataTableRowHandle OpenPickerActionRowHandle; // 0x4E0(0x10)
		FDataTableRowHandle LogAllowedItemsActionRowHandle; // 0x4F0(0x10)
		FDataTableRowHandle ResearchItemActionRowHandle; // 0x500(0x10)
		FDataTableRowHandle RecruitActionRowHandle; // 0x510(0x10)
		FDataTableRowHandle UnslotItemActionRowHandle; // 0x520(0x10)
		ECollectionBookSectionNavTarget CurrentNavTarget; // 0x530(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x531(0x7) UNKNOWN PROPERTY
		UFortCollectionBookSection AssociatedSection; // 0x538(0x8)
		bool bHasSummonedPanel; // 0x540(0x1)
		unsigned char UnknownData05_6[0x3]; // 0x541(0x3) UNKNOWN PROPERTY
		FFortDialogExternalLatentActionHandle SlotConfirmationDialogLatentHandle; // 0x544(0x4)
		FMulticastInlineDelegate OnShowItemDetailEvent; // 0x548(0x10)
		FMulticastInlineDelegate OnSlotItemConfirmEvent; // 0x558(0x10)
		FMulticastInlineDelegate OnResearchItemConfirmEvent; // 0x568(0x10)
		FMulticastInlineDelegate OnUnslotItemConfirmEvent; // 0x578(0x10)
		FMulticastInlineDelegate OnInspectItemEvent; // 0x588(0x10)
		unsigned char UnknownData06_6[0x28]; // 0x598(0x28) UNKNOWN PROPERTY
		UClass SlotConfirmationModalClass; // 0x5C0(0x8)
		unsigned char UnknownData07_7[0x30]; // 0x5C8(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortCollectionBookSectionPanel");
			return ret;
		}

		void OnUnslotItemOperationComplete(UFortAccountItem UnslottedItem, UFortAccountItem OldSlottedItem, FName SlotId); // Flags: Final|Native|Private 0x7FF4140FD838
		void OnUnslotItemComplete(UFortItem UnslottedItem, FName SlotId); // Flags: Event|Protected|BlueprintEvent 0x7FF4140FD758
		void OnSlottedItemOperationComplete(UFortAccountItem SlottedItem, FName SlotId); // Flags: Final|Native|Private 0x7FF4140FD678
		void OnSlotButtonHovered(int32_t ButtonIx); // Flags: Final|Native|Protected 0x7FF4140FD598
		void OnSectionChanged(UFortCollectionBookSection Section); // Flags: Native|Event|Protected|BlueprintEvent 0x7FF4140FD4B8
		void OnResearchItemOperationComplete(UFortAccountItem NewItem, FString TemplateId); // Flags: Final|Native|Private 0x7FF4140FD3D8
		void OnResearchItemAction__DelegateSignature(UFortItem SelectedItem, FFortCollectionBookSlotData SlotData); // Flags: MulticastDelegate|Public|Delegate 0x7FF4140FD2F8
		void OnItemInspectAction__DelegateSignature(UFortItem SelectedItem, bool EnableItemActions, bool IsPlaceholderItem); // Flags: MulticastDelegate|Public|Delegate 0x7FF4140FD218
		void OnItemAction__DelegateSignature(UFortItem SelectedItem); // Flags: MulticastDelegate|Public|Delegate 0x7FF4140FD138
	};


	// Class SaveTheWorldUI.FortCollectionBookSectionPanel_Legacy
	// Inherited from UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x1D0 (0x700 - 0x530)
	class UFortCollectionBookSectionPanel_Legacy : public UCommonActivatablePanelLegacy	
	{
	public:
		FMulticastInlineDelegate OnSectionCloseRequest; // 0x530(0x10)
		FMulticastInlineDelegate OnPreviewXPChangeEvent; // 0x540(0x10)
		UCommonTextBlock SectionNameTextWidget; // 0x550(0x8)
		UFortCollectionBookSlotView SlotViewWidget; // 0x558(0x8)
		UFortCollectionBookPicker SlotItemPicker; // 0x560(0x8)
		UWidget ContextOverlayWidget; // 0x568(0x8)
		UTextBlock ContextTextWidget; // 0x570(0x8)
		UFortCollectionBookSectionCompletionRewardWidget SectionRewardWidget; // 0x578(0x8)
		UWidget ItemAcquisitionSourceContainerWidget; // 0x580(0x8)
		UCommonTextBlock ItemAcquisitionSourceDescWidget; // 0x588(0x8)
		UCommonTextBlock ItemAcquisitionSourceDesc2Widget; // 0x590(0x8)
		UWidget ResearchRecruitUnslotContainerWidget; // 0x598(0x8)
		UCommonTextBlock PersonRecruitUnavailableMessageWidget; // 0x5A0(0x8)
		UCommonTextBlock ItemResearchUnavailableMessageWidget; // 0x5A8(0x8)
		UCommonTextBlock UnslotUnavailableMessageWidget; // 0x5B0(0x8)
		FDataTableRowHandle BackActionRowHandle; // 0x5B8(0x10)
		FDataTableRowHandle CloseActionRowHandle; // 0x5C8(0x10)
		FDataTableRowHandle SlotItemActionRowHandle; // 0x5D8(0x10)
		FDataTableRowHandle InspectItemActionRowHandle; // 0x5E8(0x10)
		FDataTableRowHandle InspectCollectionBookItemActionRowHandle; // 0x5F8(0x10)
		FDataTableRowHandle InspectPreviewItemActionRowHandle; // 0x608(0x10)
		FDataTableRowHandle OpenPickerActionRowHandle; // 0x618(0x10)
		FDataTableRowHandle LogAllowedItemsActionRowHandle; // 0x628(0x10)
		FDataTableRowHandle ResearchItemActionRowHandle; // 0x638(0x10)
		FDataTableRowHandle RecruitActionRowHandle; // 0x648(0x10)
		FDataTableRowHandle UnslotItemActionRowHandle; // 0x658(0x10)
		ECollectionBookSectionNavTarget CurrentNavTarget; // 0x668(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x669(0x7) UNKNOWN PROPERTY
		UFortCollectionBookSection AssociatedSection; // 0x670(0x8)
		bool bHasSummonedPanel; // 0x678(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x679(0x3) UNKNOWN PROPERTY
		FFortDialogExternalLatentActionHandle SlotConfirmationDialogLatentHandle; // 0x67C(0x4)
		FMulticastInlineDelegate OnShowItemDetailEvent; // 0x680(0x10)
		FMulticastInlineDelegate OnSlotItemConfirmEvent; // 0x690(0x10)
		FMulticastInlineDelegate OnResearchItemConfirmEvent; // 0x6A0(0x10)
		FMulticastInlineDelegate OnUnslotItemConfirmEvent; // 0x6B0(0x10)
		FMulticastInlineDelegate OnInspectItemEvent; // 0x6C0(0x10)
		unsigned char UnknownData05_6[0x28]; // 0x6D0(0x28) UNKNOWN PROPERTY
		UClass SlotConfirmationModalClass; // 0x6F8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortCollectionBookSectionPanel_Legacy");
			return ret;
		}

		void OnUnslotItemOperationComplete(UFortAccountItem UnslottedItem, UFortAccountItem OldSlottedItem, FName SlotId); // Flags: Final|Native|Private 0x7FF4140FCFF0
		void OnUnslotItemComplete(UFortItem UnslottedItem, FName SlotId); // Flags: Event|Protected|BlueprintEvent 0x7FF4140FCF10
		void OnUnslotItemActionExecuted(bool& bPassThrough); // Flags: Final|Native|Protected|HasOutParms 0x7FF4140FCE30
		void OnSlottedItemOperationComplete(UFortAccountItem SlottedItem, FName SlotId); // Flags: Final|Native|Private 0x7FF4140FCD50
		void OnSlotItemActionExecuted(bool& bPassThrough); // Flags: Final|Native|Protected|HasOutParms 0x7FF4140FCC70
		void OnSlotButtonSelected(UFortCollectionBookSlotButton SlotButton); // Flags: Final|Native|Protected 0x7FF4140FCB90
		void OnSlotButtonHovered(int32_t ButtonIx); // Flags: Final|Native|Protected 0x7FF4140FCAB0
		void OnSlotButtonContextAction(EFortCollectionBookPopupButtonType ContextAction); // Flags: Final|Native|Protected 0x7FF4140FC968
		void OnSectionChanged(UFortCollectionBookSection Section); // Flags: Native|Event|Protected|BlueprintEvent 0x7FF4140FC888
		void OnResearchItemOperationComplete(UFortAccountItem NewItem, FString TemplateId); // Flags: Final|Native|Private 0x7FF4140FC7A8
		void OnResearchItemAction__DelegateSignature(UFortItem SelectedItem, FFortCollectionBookSlotData SlotData); // Flags: MulticastDelegate|Public|Delegate 0x7FF4140FC608
		void OnPurchaseItemActionExecuted(bool& bPassThrough); // Flags: Final|Native|Protected|HasOutParms 0x7FF4140FC528
		void OnOpenPickerActionExecuted(bool& bPassThrough); // Flags: Final|Native|Protected|HasOutParms 0x7FF4140FC448
		void OnLogAllowedItemsActionExecuted(bool& bPassThrough); // Flags: Final|Native|Protected|HasOutParms 0x7FF4140FC368
		void OnItemInspectAction__DelegateSignature(UFortItem SelectedItem, bool EnableItemActions, bool IsPlaceholderItem); // Flags: MulticastDelegate|Public|Delegate 0x7FF4140FC288
		void OnItemAction__DelegateSignature(UFortItem SelectedItem); // Flags: MulticastDelegate|Public|Delegate 0x7FF4140FC1A8
		void OnInspectActionExecuted(bool& bPassThrough); // Flags: Final|Native|Protected|HasOutParms 0x7FF4140FC0C8
		void OnBackActionExecuted(bool& bPassThrough); // Flags: Final|Native|Protected|HasOutParms 0x7FF4140FBFE8
	};


	// Class SaveTheWorldUI.FortCollectionBookSectionTileWidget
	// Inherited from UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x70 (0x1400 - 0x1390)
	class UFortCollectionBookSectionTileWidget : public UCommonButtonBase	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x1390(0x8) UNKNOWN PROPERTY
		TWeakObjectPtr SlotWidgetClass; // 0x1398(0x20)
		FMargin SlotWidgetPadding; // 0x13B8(0x10)
		TEnumAsByte SlotWidgetHorizontalAlignment; // 0x13C8(0x1)
		TEnumAsByte SlotWidgetVerticalAlignment; // 0x13C9(0x1)
		unsigned char UnknownData03_6[0x2]; // 0x13CA(0x2) UNKNOWN PROPERTY
		int32_t MaxNumSlotsSupported; // 0x13CC(0x4)
		UHorizontalBox SlotBoxWidget; // 0x13D0(0x8)
		UCommonTextBlock SectionNameWidget; // 0x13D8(0x8)
		UFortCollectionBookGenericRewardWidget SectionRewardWidget; // 0x13E0(0x8)
		UFortCollectionBookSection AssociatedSection; // 0x13E8(0x8)
		TArray SlotWidgets; // 0x13F0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortCollectionBookSectionTileWidget");
			return ret;
		}

		void OnSectionSlotUpdate(int32_t NumFilledSlots, int32_t NumSlots, EFortCollectionBookState SectionState); // Flags: Native|Event|Protected|BlueprintEvent 0x7FF414E62EC0
		void OnItemUnslotted(UFortAccountItem ItemUnslotted, UFortAccountItem OldSlottedItem, FName SlotId); // Flags: Native|Protected 0x7FF414E62DE0
		void OnItemSlotted(UFortAccountItem ItemSlotted, FName SlotId); // Flags: Native|Protected 0x7FF414E62D00
	};


	// Class SaveTheWorldUI.FortCollectionBookSlotButton
	// Inherited from UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x40 (0x13D0 - 0x1390)
	class UFortCollectionBookSlotButton : public UCommonButtonBase	
	{
	public:
		UFortCollectionBookSlotWidget CollectionBookSlotWidget; // 0x1390(0x8)
		UMenuAnchor PopupMenuAnchor; // 0x1398(0x8)
		unsigned char UnknownData01_7[0x30]; // 0x13A0(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortCollectionBookSlotButton");
			return ret;
		}

		void PopupMenuClosedWithAction(EFortCollectionBookPopupButtonType Selection); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E63160
		void OnSlottedItemUpdated(); // Flags: Final|Native|Private 0x7FF414E63080
		UUserWidget GetPopupMenu(); // Flags: Final|Native|Private 0x7FF414E62FA0
	};


	// Class SaveTheWorldUI.FortCollectionBookSlotConfirmationModal
	// Inherited from UFortActivatablePanel -> UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x58 (0x5C0 - 0x568)
	class UFortCollectionBookSlotConfirmationModal : public UFortActivatablePanel	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x568(0x8) UNKNOWN PROPERTY
		UFortAccountItem CurrentlySlottedItem; // 0x570(0x8)
		UFortAccountItem NewItemToSlot; // 0x578(0x8)
		UCommonTextBlock Text_SlottingDescription; // 0x580(0x8)
		UFortMultiSizeItemCard ItemCard_NewlySlottedItem; // 0x588(0x8)
		UFortCollectionBookRecycleSlotResultsWidget RecycleSlotResultsWidget; // 0x590(0x8)
		UCommonButtonBase Button_SlotItem; // 0x598(0x8)
		UCommonButtonBase Button_Back; // 0x5A0(0x8)
		unsigned char UnknownData03_7[0x18]; // 0x5A8(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortCollectionBookSlotConfirmationModal");
			return ret;
		}

		void OnSlotItemRequestedComplete(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E63400
		void OnSlotItemRequested(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E63320
		void HandleSlotItemComplete(UFortAccountItem SlottedItem, FName SlotId); // Flags: Final|Native|Private 0x7FF414E63240
	};


	// Class SaveTheWorldUI.FortCollectionBookSlotDetailsWidget
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x2E0 - 0x2E0)
	class UFortCollectionBookSlotDetailsWidget : public UCommonUserWidget	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortCollectionBookSlotDetailsWidget");
			return ret;
		}
	};


	// Class SaveTheWorldUI.FortCollectionBookSlotView
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xA8 (0x388 - 0x2E0)
	class UFortCollectionBookSlotView : public UCommonUserWidget	
	{
	public:
		TWeakObjectPtr CollectionBookButtonClass; // 0x2E0(0x20)
		UHorizontalBox CollectionBookButtonBox; // 0x300(0x8)
		UCommonButtonGroupBase CollectionBookSlotButtonGroup; // 0x308(0x8)
		TArray CollectionBookSlotButtons; // 0x310(0x10)
		UFortCollectionBookSection AssociatedSection; // 0x320(0x8)
		unsigned char UnknownData02_6[0x48]; // 0x328(0x48) UNKNOWN PROPERTY
		UCommonPopupMenuLegacy PopupMenu; // 0x370(0x8)
		int32_t PreviousSelectedButtonIdx; // 0x378(0x4)
		int32_t CurrentSelectedButtonIdx; // 0x37C(0x4)
		unsigned char UnknownData03_7[0x8]; // 0x380(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortCollectionBookSlotView");
			return ret;
		}

		void OnSlotButtonHovered(UCommonButtonBase HoveredButton, int32_t ButtonIdx); // Flags: Native|Protected 0x7FF414E63860
		void OnSlotButtonClicked(UCommonButtonBase ClickedButton, int32_t ButtonIdx); // Flags: Native|Protected 0x7FF414E63780
		void OnSelectedSlotButtonChanged(UCommonButtonBase SelectedButton, int32_t ButtonIdx); // Flags: Native|Protected 0x7FF414E636A0
		UFortCollectionBookSlotWidget GetSelectedSlotWidget(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E635C0
		UFortCollectionBookSlotButton GetSelectedSlotButton(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E634E0
	};


	// Class SaveTheWorldUI.FortCollectionBookSlotWidget
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xE0 (0x3C0 - 0x2E0)
	class UFortCollectionBookSlotWidget : public UCommonUserWidget	
	{
	public:
		unsigned char UnknownData04_3[0x10]; // 0x2E0(0x10) UNKNOWN PROPERTY
		EFortItemCardSize ItemCardSize; // 0x2F0(0x1)
		bool bIsRewardCard; // 0x2F1(0x1)
		unsigned char UnknownData05_6[0x6]; // 0x2F2(0x6) UNKNOWN PROPERTY
		UFortMultiSizeItemCard ItemCardWidget; // 0x2F8(0x8)
		UWidget UnslottedOverlayWidget; // 0x300(0x8)
		UWidget ReadyToSlotOverlayWidget; // 0x308(0x8)
		UWidget UnslottedButReadyOverlayWidget; // 0x310(0x8)
		FName SlotRowName; // 0x318(0x4)
		unsigned char UnknownData06_6[0x4]; // 0x31C(0x4) UNKNOWN PROPERTY
		FText ItemAvailableToSlotText; // 0x320(0x10)
		FText NoItemsAvailableToSlotText; // 0x330(0x10)
		FText HigherQualityItemsAvailableToSlotAndUpgradeAvailableText; // 0x340(0x10)
		FText HigherQualityItemsAvailableToSlotAndEvolveAvailableText; // 0x350(0x10)
		FText HigherQualityItemsAvailableToSlotText; // 0x360(0x10)
		FText ItemInSlotFullyUpgradedText; // 0x370(0x10)
		FText ItemInSlotCanBeUpgradedText; // 0x380(0x10)
		FText ItemInSlotCanBeEvolvedText; // 0x390(0x10)
		UFortItem SlottedItemRepresentation; // 0x3A0(0x8)
		unsigned char UnknownData07_7[0x18]; // 0x3A8(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortCollectionBookSlotWidget");
			return ret;
		}

		void OnItemDestroyed(); // Flags: Final|Native|Private 0x7FF4140FE1D8
		void OnItemCardUpdated(); // Flags: Event|Protected|BlueprintEvent 0x7FF4140FE0F8
		bool IsItemSlotted(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140FE018
		bool HasItemsToSlot(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140FDF38
		void HandleUnslotItemComplete(UFortAccountItem UnslottedItem, UFortAccountItem OldItem, FName SlotId); // Flags: Final|Native|Protected 0x7FF4140FDE58
		void HandleSlottedItemOperationComplete(UFortAccountItem NewItem, FName TemplateId); // Flags: Final|Native|Protected 0x7FF4140FDD78
		void HandleResearchItemComplete(UFortAccountItem ResearchedItem, FString SlotId); // Flags: Final|Native|Protected 0x7FF4140FDC98
		UFortItem GetSlottedItemRepresentation(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140FDBB8
		FName GetSlotRowName(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140FDAD8
		int32_t GetNumItemsToSlot(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140FD9F8
		void FortCollectionBookSlottedItemUpdatedDelegate__DelegateSignature(); // Flags: MulticastDelegate|Public|Delegate 0x7FF4140FD918
	};


	// Class SaveTheWorldUI.FortCollectionBookWidget
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x38 (0x430 - 0x3F8)
	class UFortCollectionBookWidget : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData03_3[0x8]; // 0x3F8(0x8) UNKNOWN PROPERTY
		UFortCollectionBookProgressWidget ProgressWidget; // 0x400(0x8)
		UCommonActivatableWidgetSwitcher MainWidgetSwitcher; // 0x408(0x8)
		UFortCollectionBookPrimaryPanel PrimaryPanelWidget; // 0x410(0x8)
		UFortCollectionBookSectionPanel SectionPanelWidget; // 0x418(0x8)
		int32_t PrimaryPanelIdx; // 0x420(0x4)
		int32_t SectionPanelIdx; // 0x424(0x4)
		unsigned char UnknownData04_6[0x1]; // 0x428(0x1) UNKNOWN PROPERTY
		FPrimaryContentSetup PrimaryContentSetup; // 0x429(0x3)
		unsigned char UnknownData05_7[0x4]; // 0x42C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortCollectionBookWidget");
			return ret;
		}

		void RequestToClose(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E63DA0
		void OnPreviewXPChangeRequest(int32_t XPChange); // Flags: Final|Native|Protected 0x7FF414E63CC0
		void OnCollectionBookSectionCloseRequest(); // Flags: Final|Native|Protected 0x7FF414E63BE0
		void OnCollectionBookSectionClicked(UFortCollectionBookSection ClickedSection); // Flags: Native|Event|Public|BlueprintEvent 0x7FF414E63B00
		void OnCollectionBookPageSelected(UFortCollectionBookPage SelectedPage); // Flags: Native|Event|Public|BlueprintEvent 0x7FF414E63A20
		void OnCollectionBookPageClicked(UFortCollectionBookPage ClickedPage); // Flags: Native|Event|Public|BlueprintEvent 0x7FF414E63940
	};


	// Class SaveTheWorldUI.FortCollectionBookWidget_Legacy
	// Inherited from UFortActivatablePanel -> UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x30 (0x598 - 0x568)
	class UFortCollectionBookWidget_Legacy : public UFortActivatablePanel	
	{
	public:
		UFortCollectionBookProgressWidget ProgressWidget; // 0x568(0x8)
		UCommonWidgetSwitcherLegacy MainWidgetSwitcher; // 0x570(0x8)
		UFortCollectionBookPrimaryPanel_Legacy PrimaryPanelWidget; // 0x578(0x8)
		UFortCollectionBookSectionPanel_Legacy SectionPanelWidget; // 0x580(0x8)
		int32_t PrimaryPanelIdx; // 0x588(0x4)
		int32_t SectionPanelIdx; // 0x58C(0x4)
		unsigned char UnknownData01_7[0x8]; // 0x590(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortCollectionBookWidget_Legacy");
			return ret;
		}

		void RequestToClose(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E642E0
		void OnPreviewXPChangeRequest(int32_t XPChange); // Flags: Final|Native|Protected 0x7FF414E64200
		void OnCollectionBookSectionCloseRequest(); // Flags: Final|Native|Protected 0x7FF414E64120
		void OnCollectionBookSectionClicked(UFortCollectionBookSection ClickedSection); // Flags: Native|Event|Public|BlueprintEvent 0x7FF414E64040
		void OnCollectionBookPageSelected(UFortCollectionBookPage SelectedPage); // Flags: Native|Event|Public|BlueprintEvent 0x7FF414E63F60
		void OnCollectionBookPageClicked(UFortCollectionBookPage ClickedPage); // Flags: Native|Event|Public|BlueprintEvent 0x7FF414E63E80
	};


	// Class SaveTheWorldUI.FortAbilitySystemContext
	// Inherited from UBlueprintContextBase -> USubsystem -> UObject
	// Size: 0x50 (0x80 - 0x30)
	class UFortAbilitySystemContext : public UBlueprintContextBase	
	{
	public:
		unsigned char UnknownData01_1[0x50]; // 0x30(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortAbilitySystemContext");
			return ret;
		}

		void RemoveDelegatesFromWidget(UWidget Widget); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E64580
		void RegisterForAttributeChanged(UWidget Widget, UAbilitySystemComponent ASC, FGameplayAttribute Attribute, FDelegateProperty Callback); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E644A0
		bool HasMatchingGameplayTag(FGameplayTag TagToCheck); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E643C0
	};


	// Class SaveTheWorldUI.FortDirectAcquisitionWidgetBase
	// Inherited from UFortMtxStoreRootBase -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x58 (0x4E0 - 0x488)
	class UFortDirectAcquisitionWidgetBase : public UFortMtxStoreRootBase	
	{
	public:
		unsigned char UnknownData03_3[0x8]; // 0x488(0x8) UNKNOWN PROPERTY
		bool bShowIneligible; // 0x490(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x491(0x7) UNKNOWN PROPERTY
		UUserWidget FirstOfferGenerated; // 0x498(0x8)
		unsigned char UnknownData05_6[0x10]; // 0x4A0(0x10) UNKNOWN PROPERTY
		UHorizontalBox HorizontalBox_LargeTile; // 0x4B0(0x8)
		UGridPanel GridPanel_SmallTile; // 0x4B8(0x8)
		UHorizontalBox HorizontalBox_ReorderedItems; // 0x4C0(0x8)
		UVerticalBox VerticalBox_FeatureItems; // 0x4C8(0x8)
		UVerticalBox VerticalBox_DailyItems; // 0x4D0(0x8)
		UScaleBox ScaleBox_Main; // 0x4D8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortDirectAcquisitionWidgetBase");
			return ret;
		}

		void OnDisplayToast(bool bDisplayToast); // Flags: Event|Public|BlueprintEvent 0x7FF414E64BA0
		void IsTabsLayout(bool bShouldDisplayTabs); // Flags: Event|Public|BlueprintEvent 0x7FF414E64AC0
		void HandleAffiliateButtonClicked(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E649E0
		FDateTime GetWeeklyStoreEndDate(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414E64900
		TArray GetStoreCurrencies(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E64820
		FDateTime GetSeasonStoreEndDate(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414E64740
		FDateTime GetDailyStoreEndDate(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414E64660
	};


	// Class SaveTheWorldUI.FortDirectAcquisitionWidgetBase_Legacy
	// Inherited from UFortMtxStoreRootBase_Legacy -> UFortActivatablePanel -> UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x58 (0x648 - 0x5F0)
	class UFortDirectAcquisitionWidgetBase_Legacy : public UFortMtxStoreRootBase_Legacy	
	{
	public:
		unsigned char UnknownData03_3[0x8]; // 0x5F0(0x8) UNKNOWN PROPERTY
		bool bShowIneligible; // 0x5F8(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x5F9(0x7) UNKNOWN PROPERTY
		UUserWidget FirstOfferGenerated; // 0x600(0x8)
		unsigned char UnknownData05_6[0x10]; // 0x608(0x10) UNKNOWN PROPERTY
		UHorizontalBox HorizontalBox_LargeTile; // 0x618(0x8)
		UGridPanel GridPanel_SmallTile; // 0x620(0x8)
		UHorizontalBox HorizontalBox_ReorderedItems; // 0x628(0x8)
		UVerticalBox VerticalBox_FeatureItems; // 0x630(0x8)
		UVerticalBox VerticalBox_DailyItems; // 0x638(0x8)
		UScaleBox ScaleBox_Main; // 0x640(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortDirectAcquisitionWidgetBase_Legacy");
			return ret;
		}

		void OnDisplayToast(bool bDisplayToast); // Flags: Event|Public|BlueprintEvent 0x7FF414E651C0
		void IsTabsLayout(bool bShouldDisplayTabs); // Flags: Event|Public|BlueprintEvent 0x7FF414E650E0
		void HandleAffiliateButtonClicked(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E65000
		FDateTime GetWeeklyStoreEndDate(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414E64F20
		TArray GetStoreCurrencies(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E64E40
		FDateTime GetSeasonStoreEndDate(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414E64D60
		FDateTime GetDailyStoreEndDate(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414E64C80
	};


	// Class SaveTheWorldUI.FortExpeditionBuildSquadWidget
	// Inherited from UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x68 (0x598 - 0x530)
	class UFortExpeditionBuildSquadWidget : public UCommonActivatablePanelLegacy	
	{
	public:
		TWeakObjectPtr Item; // 0x530(0x8)
		FName CurrentSquadId; // 0x538(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x53C(0x4) UNKNOWN PROPERTY
		UFortSquadSlotsView ExpeditionSquadSlotsView; // 0x540(0x8)
		UFortSquadSlotDetailsPanel ExpeditionSquadSlotDetails; // 0x548(0x8)
		UFortSquadSlotItemPicker ExpeditionSquadSlotPicker; // 0x550(0x8)
		UFortExpeditionMasterWidget MasterWidget; // 0x558(0x8)
		UFortItemViewContext_ExpeditionSquadSlotsView ItemViewContext_ExpeditionSlotsView; // 0x560(0x8)
		UFortItemViewContext_ExpeditionSquadSlotItemPicker ItemViewContext_ExpeditionSlotItemPicker; // 0x568(0x8)
		unsigned char UnknownData03_7[0x28]; // 0x570(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortExpeditionBuildSquadWidget");
			return ret;
		}

		void SetMasterWidget(UFortExpeditionMasterWidget Widget); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E65A80
		void SetData(UFortExpeditionItem InItem); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent 0x7FF414E659A0
		void SetCurrentSquadId(FName SquadID); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E658C0
		void OnRequestClosePicker(); // Flags: Event|Public|BlueprintEvent 0x7FF414E657E0
		void OnRefreshBuildSquadWidget(); // Flags: Native|Event|Protected|BlueprintEvent 0x7FF414E65700
		bool IsSquadSlotLocked(int32_t SlotIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E65620
		bool IsExpeditionValidToStart(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E65540
		void HandleRequestStartExpedition(bool& bPassThrough); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable 0x7FF414E65460
		void HandleDifferentSquadSlotSelected(int32_t SquadSlotIndex); // Flags: Final|Native|Private 0x7FF414E65380
		void ClearTemporaryExpeditionSquadState(bool bPreviewOnly); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E652A0
	};


	// Class SaveTheWorldUI.FortExpeditionDetailsWidget
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x40 (0x320 - 0x2E0)
	class UFortExpeditionDetailsWidget : public UCommonUserWidget	
	{
	public:
		TWeakObjectPtr Item; // 0x2E0(0x8)
		UFortSquadSlotsView ExpeditionSquadSlotsView; // 0x2E8(0x8)
		FName CurrentSquadId; // 0x2F0(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x2F4(0x4) UNKNOWN PROPERTY
		UFortItemViewContext_ExpeditionSquadSlotsView ItemViewContext_ExpeditionSlotsView; // 0x2F8(0x8)
		unsigned char UnknownData03_7[0x20]; // 0x300(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortExpeditionDetailsWidget");
			return ret;
		}

		void SetData(UFortExpeditionItem InItem); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent 0x7FF414E65E00
		void SetCurrentSquadId(FName SquadID); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E65D20
		void RequestAbandonExpedition(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E65C40
		void HandleAbandonExpeditionCompleted(UFortExpeditionItem Expedition, bool bSuccess); // Flags: Final|Native|Private 0x7FF414E65B60
	};


	// Class SaveTheWorldUI.FortExpeditionExpiresWidget
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x2F0 - 0x2E0)
	class UFortExpeditionExpiresWidget : public UCommonUserWidget	
	{
	public:
		TWeakObjectPtr Item; // 0x2E0(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x2E8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortExpeditionExpiresWidget");
			return ret;
		}

		void SetData(UFortExpeditionItem InItem); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent 0x7FF414E65FC0
		void OnExpeditionExpirationUpdated(); // Flags: Native|Event|Protected|BlueprintEvent 0x7FF414E65EE0
	};


	// Class SaveTheWorldUI.FortExpeditionListItemWidget
	// Inherited from UCommonButtonLegacy -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x1400 - 0x13E0)
	class UFortExpeditionListItemWidget : public UCommonButtonLegacy	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x13E0(0x8) UNKNOWN PROPERTY
		TWeakObjectPtr Item; // 0x13E8(0x8)
		unsigned char UnknownData03_7[0x10]; // 0x13F0(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortExpeditionListItemWidget");
			return ret;
		}

		void OnItemChanged(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E660A0
	};


	// Class SaveTheWorldUI.FortExpeditionListViewWidget
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x30 (0x310 - 0x2E0)
	class UFortExpeditionListViewWidget : public UCommonUserWidget	
	{
	public:
		FMulticastInlineDelegate OnExpeditionSelected; // 0x2E0(0x10)
		FMulticastInlineDelegate OnExpeditionListViewRefreshed; // 0x2F0(0x10)
		UCommonListView ExpeditionListView; // 0x300(0x8)
		FName CurrentTabNameId; // 0x308(0x4)
		EFortExpeditionListSort SortType; // 0x30C(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x30D(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortExpeditionListViewWidget");
			return ret;
		}

		void SetExpeditionListSortType(EFortExpeditionListSort InSortType); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E66260
		FText GetExpeditionListSortName(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E66180
	};


	// Class SaveTheWorldUI.FortExpeditionMasterWidget
	// Inherited from UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x78 (0x5A8 - 0x530)
	class UFortExpeditionMasterWidget : public UCommonActivatablePanelLegacy	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x530(0x8) UNKNOWN PROPERTY
		FDataTableRowHandle BackInputAction; // 0x538(0x10)
		FDataTableRowHandle BuildExpeditionInputAction; // 0x548(0x10)
		FDataTableRowHandle AbandonExpeditionInputAction; // 0x558(0x10)
		FDataTableRowHandle CollectExpeditionInputAction; // 0x568(0x10)
		FDataTableRowHandle SortInputAction; // 0x578(0x10)
		unsigned char UnknownData03_7[0x20]; // 0x588(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortExpeditionMasterWidget");
			return ret;
		}

		void SetupInputAction(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E667A0
		void HandleSortInput(bool& bPassThrough); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414E666C0
		void HandleCollectExpeditionInput(bool& bPassThrough); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414E665E0
		void HandleBuildExpeditionInput(bool& bPassThrough); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414E66500
		void HandleBackInput(bool& bPassThrough); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414E66420
		void HandleAbandonExpeditionInput(bool& bPassThrough); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414E66340
	};


	// Class SaveTheWorldUI.FortExpeditionOverviewWidget
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x28 (0x308 - 0x2E0)
	class UFortExpeditionOverviewWidget : public UCommonUserWidget	
	{
	public:
		UClass TabButtonType; // 0x2E0(0x8)
		TArray TabListRegistrationInfo; // 0x2E8(0x10)
		UFortTabListWidgetBase_Legacy ExpeditionTabList; // 0x2F8(0x8)
		UFortExpeditionListViewWidget ExpeditionListView; // 0x300(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortExpeditionOverviewWidget");
			return ret;
		}

		void UpdateExpeditionTabs(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E66C00
		void OnExpeditionTabSelected(FName& TabNameID); // Flags: Native|Event|Protected|HasOutParms|BlueprintEvent 0x7FF414E66B20
		void OnExpeditionOverviewRefresh(); // Flags: Native|Event|Protected|BlueprintEvent 0x7FF414E66A40
		void HandleExpeditionTabSelected(FName TabNameID); // Flags: Final|Native|Private 0x7FF414E66960
		void HandleExpeditionTabButtonCreated(FName TabNameID, UCommonButtonBase TabButton); // Flags: Final|Native|Private 0x7FF414E66880
	};


	// Class SaveTheWorldUI.FortExpeditionPickVehicleWidget
	// Inherited from UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x18 (0x548 - 0x530)
	class UFortExpeditionPickVehicleWidget : public UCommonActivatablePanelLegacy	
	{
	public:
		FDataTableRowHandle BackInputAction; // 0x530(0x10)
		TWeakObjectPtr Item; // 0x540(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortExpeditionPickVehicleWidget");
			return ret;
		}

		void SetData(UFortExpeditionItem InItem); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent 0x7FF414E66DC0
		void HandleBackInput(bool& bPassThrough); // Flags: Final|Native|Protected|HasOutParms 0x7FF414E66CE0
	};


	// Class SaveTheWorldUI.FortExpeditionReturnsWidget
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x2F0 - 0x2E0)
	class UFortExpeditionReturnsWidget : public UCommonUserWidget	
	{
	public:
		TWeakObjectPtr Item; // 0x2E0(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x2E8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortExpeditionReturnsWidget");
			return ret;
		}

		void SetData(UFortExpeditionItem InItem); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent 0x7FF414E66F80
		void OnExpeditionInProgressUpdated(); // Flags: Native|Event|Protected|BlueprintEvent 0x7FF414E66EA0
	};


	// Class SaveTheWorldUI.FortExpeditionRewardsWidget
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x28 (0x308 - 0x2E0)
	class UFortExpeditionRewardsWidget : public UCommonUserWidget	
	{
	public:
		FMulticastInlineDelegate OnAllExpeditionsCollected; // 0x2E0(0x10)
		UCommonTileView RewardsTileView; // 0x2F0(0x8)
		bool bPendingCollection; // 0x2F8(0x1)
		unsigned char UnknownData01_7[0xF]; // 0x2F9(0xF) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortExpeditionRewardsWidget");
			return ret;
		}

		void RefreshRewardsUI(UFortExpeditionItem Expedition, bool bExpeditionSucceeded, TArray& Rewards); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent 0x7FF414E67220
		void ProcessNextReward(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E67140
		void HandleCollectionExpeditionCompleted(bool bMcpSuccess, UFortExpeditionItem Expedition, bool bExpeditionSuccess, TArray& Rewards); // Flags: Final|Native|Protected|HasOutParms 0x7FF414E67060
	};


	// Class SaveTheWorldUI.FortExpeditionSummaryWidget
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x58 (0x338 - 0x2E0)
	class UFortExpeditionSummaryWidget : public UCommonUserWidget	
	{
	public:
		int32_t AvailableExpeditions; // 0x2E0(0x4)
		int32_t CompletedExpeditions; // 0x2E4(0x4)
		int32_t LandVehiclesTotal; // 0x2E8(0x4)
		int32_t LandVehiclesAvailable; // 0x2EC(0x4)
		int32_t AirVehiclesTotal; // 0x2F0(0x4)
		int32_t AirVehiclesAvailable; // 0x2F4(0x4)
		int32_t SeaVehiclesTotal; // 0x2F8(0x4)
		int32_t SeaVehiclesAvailable; // 0x2FC(0x4)
		int32_t LandExpeditionsTotal; // 0x300(0x4)
		int32_t LandExpeditionsAvailable; // 0x304(0x4)
		int32_t AirExpeditionsTotal; // 0x308(0x4)
		int32_t AirExpeditionsAvailable; // 0x30C(0x4)
		int32_t SeaExpeditionsTotal; // 0x310(0x4)
		int32_t SeaExpeditionsAvailable; // 0x314(0x4)
		TArray InProgressExpeditions; // 0x318(0x10)
		unsigned char UnknownData01_7[0x10]; // 0x328(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortExpeditionSummaryWidget");
			return ret;
		}

		void UnbindInventoryDelegates(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E674C0
		void OnRefreshSummaryWidget(); // Flags: Native|Event|Protected|BlueprintEvent 0x7FF414E673E0
		void BindInventoryDelegates(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E67300
	};


	// Class SaveTheWorldUI.FortExpeditionUtilities
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortExpeditionUtilities : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortExpeditionUtilities");
			return ret;
		}

		int32_t TotalUnseenExpeditionsForTab(UWidget Widget, FName& TabNameID); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414E68100
		bool IsSquadOnExpedition(UWidget Widget, FName& SquadID); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414E68020
		FGameplayTag GetVehicleTagRequiredForExpedition(UFortExpeditionItem Expedition); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414E67F40
		bool GetVehicleTagFromSquadId(FName& SquadID, FGameplayTag& OutFoundVehicleTag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414E67E60
		void GetTotalExpeditionVehiclesAvailable(UWidget Widget, AFortPlayerController FortPC, int32_t& OutLandVehicles, int32_t& OutLandVehiclesAvailable, int32_t& OutSeaVehicles, int32_t& OutSeaVehiclesAvailable, int32_t& OutAirVehicles, int32_t& OutAirVehiclesAvailable); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414E67D80
		void GetMatchedCriteriaTags(UFortExpeditionItem Expedition, TArray& SlottedItems, TArray& OutMatchedCriteria); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414E67CA0
		bool GetExpeditionSquadsThatMatchRequirements(FGameplayTagContainer& RequirementTags, AFortPlayerController FortPC, TArray& OutExpeditionSquadIds); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414E67BC0
		float GetExpeditionSquadPower(AFortPlayerController FortPC, FName& SquadID); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414E67AE0
		void GetAllExpeditionSquadIds(TArray& OutExpeditionSquadIds); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414E67A00
		float CalculateTotalPower(AFortPlayerController FortPC, UFortExpeditionItem Expedition, FName& SquadID, TArray& SlottedItems); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414E67920
		void CalculateGlobalAndItemRatingModValuesBP(UFortExpeditionItem Expedition, TArray& SlottedItems, float& GlobalPowerMod, TArray& SlottedItemMods); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414E67840
		float CalculateExpeditionPercentageChanceForSuccess(UFortExpeditionItem Expedition, float TotalPower); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414E67760
		bool AreExpeditionsUnlocked(UObject WorldContextObject, FUniqueNetIdRepl& UniqueID); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414E67680
		bool AreAnyExpeditionsComplete(UWidget Widget); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414E675A0
	};


	// Class SaveTheWorldUI.FortExpeditionVehicleTileItemWidget
	// Inherited from UCommonButtonLegacy -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x13F0 - 0x13E0)
	class UFortExpeditionVehicleTileItemWidget : public UCommonButtonLegacy	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x13E0(0x8) UNKNOWN PROPERTY
		TWeakObjectPtr SquadID; // 0x13E8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortExpeditionVehicleTileItemWidget");
			return ret;
		}
	};


	// Class SaveTheWorldUI.FortFeatureUnlockWidget
	// Inherited from UFortActivatablePanel -> UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x38 (0x5A0 - 0x568)
	class UFortFeatureUnlockWidget : public UFortActivatablePanel	
	{
	public:
		UCommonWidgetSwitcherLegacy MediaSwitcher; // 0x568(0x8)
		UWidget VideoContent; // 0x570(0x8)
		UWidget ImageContent; // 0x578(0x8)
		UFortVideoPlayerWidget VideoWidget; // 0x580(0x8)
		UCommonLazyImage ImageWidget; // 0x588(0x8)
		unsigned char UnknownData01_7[0x10]; // 0x590(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortFeatureUnlockWidget");
			return ret;
		}

		void SetData(FString ItemTemplateID); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E68720
		void RefreshDataBP(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E68640
		UMediaSource GetVideo(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414E68560
		FText GetTitle(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414E68480
		TWeakObjectPtr GetSmallIcon(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414E683A0
		TWeakObjectPtr GetLargeIcon(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414E682C0
		FText GetDescription(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414E681E0
	};


	// Class SaveTheWorldUI.FortCraftingBarWidget
	// Inherited from UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x28 (0x348 - 0x320)
	class UFortCraftingBarWidget : public UFortHUDElementWidget	
	{
	public:
		UCommonTextBlock CraftingText; // 0x320(0x8)
		UProgressBar CraftingProgressBar; // 0x328(0x8)
		float CompletedRemainVisibleTime; // 0x330(0x4)
		unsigned char UnknownData01_7[0x14]; // 0x334(0x14) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortCraftingBarWidget");
			return ret;
		}

		void SetHideCraftingBar(bool bInHideCraftBar); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E68AA0
		void OnCompletedSetHidden(); // Flags: Final|Native|Protected 0x7FF414E689C0
		void HandlePlayerStoppedCrafting(bool bSuccess, EFortCraftFailCause CraftFailureCause); // Flags: Final|Native|Protected 0x7FF414E688E0
		void HandlePlayerStartedCrafting(); // Flags: Final|Native|Protected 0x7FF414E68800
	};


	// Class SaveTheWorldUI.FortResultsWidgetSTW
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x110 (0x508 - 0x3F8)
	class UFortResultsWidgetSTW : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData06_3[0x8]; // 0x3F8(0x8) UNKNOWN PROPERTY
		FDataTableRowHandle SkipInputAction; // 0x400(0x10)
		unsigned char UnknownData07_6[0x8]; // 0x410(0x8) UNKNOWN PROPERTY
		FDataTableRowHandle EmoteInputAction; // 0x418(0x10)
		unsigned char UnknownData08_6[0x8]; // 0x428(0x8) UNKNOWN PROPERTY
		FDataTableRowHandle PickerCancelInputAction; // 0x430(0x10)
		unsigned char UnknownData09_6[0x60]; // 0x440(0x60) UNKNOWN PROPERTY
		int32_t AdditionalGrantedMissionPoints; // 0x4A0(0x4)
		unsigned char UnknownData10_6[0x4]; // 0x4A4(0x4) UNKNOWN PROPERTY
		TArray RewardedBadges; // 0x4A8(0x10)
		TArray MissedBadges; // 0x4B8(0x10)
		TArray RewardedItems; // 0x4C8(0x10)
		TArray RewardedAccountItems; // 0x4D8(0x10)
		unsigned char UnknownData11_6[0x10]; // 0x4E8(0x10) UNKNOWN PROPERTY
		FDataTableRowHandle OpenChatAction; // 0x4F8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortResultsWidgetSTW");
			return ret;
		}

		void TriggerSetupTeleportCameraEvent(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E69980
		void ToggleChat(bool bShow); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E698A0
		void SendEndOfRoundUpVoteAnalytic(FUniqueNetIdRepl& TargetId, FString TargetPlayerName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414E697C0
		void SendEndOfRoundScreenAnalytic(FString ScreenName, bool Skipped, float TimeSpent); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E696E0
		void SendEndOfRoundFriendInviteAnalytic(FUniqueNetIdRepl& TargetId, FString TargetPlayerName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414E69600
		void RequestExitZone(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E69520
		void LogXPData(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E69440
		bool IsDataFinalized(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E69360
		void HandleDisplayedPrimaryContentChanged(UCommonActivatableWidget DisplayWidget); // Flags: Final|Native|Private 0x7FF414E69280
		void HandleActionSkip(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E691A0
		void HandleActionPickerCancel(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E690C0
		FText GetZoneCompletionResultText(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E68FE0
		EFortCompletionResult GetZoneCompletionResult(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E68F00
		int32_t GetTotalMissionPointsEarned(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E68E20
		void GetRewardsByType(EFortRewardItemTypeSTW Type, TArray& OutRewards); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414E68D40
		void EnableSkipAction(bool Enabled); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E68C60
		void EnableEmoteAction(bool Enabled); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E68B80
	};


	// Class SaveTheWorldUI.FortSTWUIData
	// Inherited from UFortSTWUIDataBase -> UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x80 (0xB0 - 0x30)
	class UFortSTWUIData : public UFortSTWUIDataBase	
	{
	public:
		TWeakObjectPtr UpgradesDisplayDataTable; // 0x30(0x20)
		TWeakObjectPtr UnlockedSquadSlotBorderMultiSizeBrush; // 0x50(0x20)
		TWeakObjectPtr LockedSquadSlotBorderMultiSizeBrush; // 0x70(0x20)
		TWeakObjectPtr ReadOnlySquadSlotBorderMultiSizeBrush; // 0x90(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortSTWUIData");
			return ret;
		}
	};


	// Class SaveTheWorldUI.FortRootViewportLayout_STW
	// Inherited from UFortRootViewportLayout -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x420 - 0x418)
	class UFortRootViewportLayout_STW : public UFortRootViewportLayout	
	{
	public:
		UTalkingHead TalkingHead; // 0x418(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortRootViewportLayout_STW");
			return ret;
		}
	};


	// Class SaveTheWorldUI.FortItemAutoMulchActivatablePanel_STW
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x58 (0x450 - 0x3F8)
	class UFortItemAutoMulchActivatablePanel_STW : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData01_1[0x58]; // 0x3F8(0x58) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortItemAutoMulchActivatablePanel_STW");
			return ret;
		}

		void SetItemManagementScreen(UFortItemManagementScreen_STW InItemManagementScreen); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E69FA0
		void SaveSettings(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E69EC0
		void RestoreAutoMulchSettings(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E69DE0
		TArray GetMulchCategoriesForInventoryFilter(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414E69D00
		EFortFrontendInventoryFilter GetFrontendInventoryFilter(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414E69C20
		void EnterMulchModeForAutoMulch(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E69B40
		void CacheAutoMulchSettings(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E69A60
	};


	// Class SaveTheWorldUI.FortItemCraftingOptionsActivatablePanel_STW
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xB0 (0x4A8 - 0x3F8)
	class UFortItemCraftingOptionsActivatablePanel_STW : public UCommonActivatableWidget	
	{
	public:
		UFortSchematicItem BaseItem; // 0x3F8(0x8)
		UFortSchematicItem TargetItem; // 0x400(0x8)
		int32_t MaxCraftingTierIndex; // 0x408(0x4)
		int32_t TargetCraftingTierIndex; // 0x40C(0x4)
		int32_t TargetPromotionTierIndex; // 0x410(0x4)
		int32_t MaxQuantity; // 0x414(0x4)
		int32_t SelectedQuantity; // 0x418(0x4)
		bool CanCraftTargetItem; // 0x41C(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x41D(0x3) UNKNOWN PROPERTY
		UWidget TierImageParent; // 0x420(0x8)
		UWidget TierImageParent; // 0x428(0x8)
		UWidget TierImageParent; // 0x430(0x8)
		UWidget TierImageParent; // 0x438(0x8)
		UWidget TierImageParent; // 0x440(0x8)
		UImage TierImage; // 0x448(0x8)
		UImage TierImage; // 0x450(0x8)
		UImage TierImage; // 0x458(0x8)
		UImage TierImage; // 0x460(0x8)
		UImage TierImage; // 0x468(0x8)
		FDataTableRowHandle BackInputActionRowHandle; // 0x470(0x10)
		unsigned char UnknownData03_6[0x8]; // 0x480(0x8) UNKNOWN PROPERTY
		TArray TierImageParentList; // 0x488(0x10)
		TArray TierImageList; // 0x498(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortItemCraftingOptionsActivatablePanel_STW");
			return ret;
		}

		void UpdateTierImages(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E6ADA0
		void SetTargetCraftingTierIndex(int32_t NewTierIndex); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E6ACC0
		void SetSelectedQuantity_BP(int32_t NewQuantity); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E6ABE0
		void SetItemManagementScreen(UFortItemManagementScreen_STW InItemManagementScreen); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E6AB00
		void SetBaseSchematicItem(UFortSchematicItem InBaseItem); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E6AA20
		void SelectPreviousTier(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E6A940
		void SelectNextTier(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E6A860
		void OnTargetItemChanged(UFortSchematicItem NewTargetItem); // Flags: Event|Protected|BlueprintEvent 0x7FF414E6A780
		void OnSelectedQuantityChanged(int32_t NewSelectedQuantity); // Flags: Event|Protected|BlueprintEvent 0x7FF414E6A6A0
		void OnMaxQuantityChanged(int32_t NewMaxQuantity); // Flags: Event|Protected|BlueprintEvent 0x7FF414E6A5C0
		void OnBaseItemChanged(UFortSchematicItem NewBaseItem); // Flags: Event|Protected|BlueprintEvent 0x7FF414E6A4E0
		void IncreaseSelectedQuantity(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E6A400
		void HandleBack(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E6A320
		void DecreaseSelectedQuantity(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E6A240
		void CraftTargetItem(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E6A160
		void CraftAndSlotTargetItem(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E6A080
	};


	// Class SaveTheWorldUI.FortItemDetailsActivatablePanel_STW
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xA8 (0x4A0 - 0x3F8)
	class UFortItemDetailsActivatablePanel_STW : public UCommonActivatableWidget	
	{
	public:
		UCommonLoadGuard ItemToDetailLoadGuard; // 0x3F8(0x8)
		unsigned char UnknownData03_6[0x8]; // 0x400(0x8) UNKNOWN PROPERTY
		UFortTooltipLoadingWrapper ItemToDetailLoadingWrapper; // 0x408(0x8)
		unsigned char UnknownData04_6[0x18]; // 0x410(0x18) UNKNOWN PROPERTY
		FDataTableRowHandle BackInputActionHandle; // 0x428(0x10)
		TWeakObjectPtr ItemToDetail; // 0x438(0x8)
		TWeakObjectPtr ItemToCompareWith; // 0x440(0x8)
		TWeakObjectPtr HostItemManagementScreen; // 0x448(0x8)
		unsigned char UnknownData05_7[0x50]; // 0x450(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW");
			return ret;
		}

		void SetInputActionEnabled(FDataTableRowHandle& InputActionRowHandle, bool bEnable); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable 0x7FF414E6B3C0
		void HandleItemToDetailTooltipAssetsLoaded(); // Flags: Final|Native|Protected 0x7FF414E6B2E0
		void HandleDifferentItemToDetailSetBP(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E6B200
		void HandleDifferentItemToCompareSetBP(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E6B120
		void HandleConsumeItemProgressChangedBP(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E6B040
		void HandleBack(); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent 0x7FF414E6AF60
		UFortPopupMenu GetItemManagementViewPopup(); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent 0x7FF414E6AE80
	};


	// Class SaveTheWorldUI.FortItemDetailsModeActivatablePanel_STW
	// Inherited from UFortItemDetailsActivatablePanel_STW -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x150 (0x5F0 - 0x4A0)
	class UFortItemDetailsModeActivatablePanel_STW : public UFortItemDetailsActivatablePanel_STW	
	{
	public:
		UCommonActivatableWidgetSwitcher DetailPanelWidgetSwitcher; // 0x4A0(0x8)
		FDataTableRowHandle SortInputActionHandle; // 0x4A8(0x10)
		FDataTableRowHandle SortInGameInputActionHandle; // 0x4B8(0x10)
		FDataTableRowHandle DropInputActionHandle; // 0x4C8(0x10)
		FDataTableRowHandle DestroyInputActionHandle; // 0x4D8(0x10)
		FDataTableRowHandle LeaveInventoryInputActionHandle; // 0x4E8(0x10)
		FDataTableRowHandle CraftingOptionsInputActionHandle; // 0x4F8(0x10)
		FDataTableRowHandle CraftInputActionHandle; // 0x508(0x10)
		FDataTableRowHandle MulchInputActionHandle; // 0x518(0x10)
		FDataTableRowHandle RetireInputActionHandle; // 0x528(0x10)
		FDataTableRowHandle InspectInputActionHandle; // 0x538(0x10)
		FDataTableRowHandle InventoryInspectInputActionHandle; // 0x548(0x10)
		FDataTableRowHandle UnequipInputActionHandle; // 0x558(0x10)
		FDataTableRowHandle EquipInputActionHandle; // 0x568(0x10)
		FDataTableRowHandle MoreInfoInputActionHandle; // 0x578(0x10)
		FDataTableRowHandle WithdrawAllInputActionHandle; // 0x588(0x10)
		FDataTableRowHandle SwitchPanelInputActionHandle; // 0x598(0x10)
		FDataTableRowHandle TransferInputActionHandle; // 0x5A8(0x10)
		FDataTableRowHandle ConsumeItemInputActionHandle; // 0x5B8(0x10)
		FDataTableRowHandle CompareInputActionHandle; // 0x5C8(0x10)
		FDataTableRowHandle OpenCustomFilterInputActionHandle; // 0x5D8(0x10)
		unsigned char UnknownData01_7[0x8]; // 0x5E8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortItemDetailsModeActivatablePanel_STW");
			return ret;
		}

		void SetupInputHandling(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E6DA40
		void RegisterTransferActions(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E6D960
		void RegisterSort(bool bInGame); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E6D880
		void RegisterRetire(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E6D7A0
		void RegisterOpenCustomFilter(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E6D6C0
		void RegisterMulch(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E6D5E0
		void RegisterMore(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E6D500
		void RegisterLeaveInventory(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E6D420
		void RegisterInventoryInspect(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E6D340
		void RegisterInspectUpgrade(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E6D260
		void RegisterInspect(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E6D180
		void RegisterEquip(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E6D0A0
		void RegisterDropOrDestroy(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E6CFC0
		void RegisterCraft(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E6CEE0
		void RegisterConsumeItem(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E6CE00
		void RegisterCompare(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E6CD20
		void RefreshTransferActions(); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent 0x7FF414E6CC40
		void RefreshSwitchPanelAction(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E6CB60
		void RefreshMulchAction(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E6CA80
		void RefreshDropAction(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E6C9A0
		void RefreshDestroyAction(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E6C8C0
		void RefreshCraftActions(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E6C7E0
		void RefreshConsumeAction(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E6C700
		bool MulchQuestComplete(); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent 0x7FF414E6C620
		void HandleWorldItemsChanged(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E6C540
		void HandleWorldItemListChanged(TArray& ItemsAdded, TArray& ItemsRemoved); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable 0x7FF414E6C460
		void HandleWithdrawAll(); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent 0x7FF414E6C380
		void HandleTransfer(); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent 0x7FF414E6C2A0
		void HandleSwitchPanel(); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent 0x7FF414E6C1C0
		void HandleSort(); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent 0x7FF414E6C0E0
		void HandleQuickbarContentsChanged(EFortQuickBars QuickbarIndex, TArray& ChangedSlots); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable 0x7FF414E6C000
		void HandleOpenCustomFilter(); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent 0x7FF414E6BF20
		void HandleOnActiveWidgetChanged(UWidget ActiveWidget, int32_t ActiveWidgetIndex); // Flags: Final|Native|Private 0x7FF414E6BE40
		void HandleMulchNative(); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent 0x7FF414E6BD60
		void HandleMulch(); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent 0x7FF414E6BC80
		void HandleMore(); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent 0x7FF414E6BBA0
		void HandleInspect(); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent 0x7FF414E6BAC0
		void HandleEquip(); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent 0x7FF414E6B9E0
		void HandleDrop(); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent 0x7FF414E6B900
		void HandleDestroy(); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent 0x7FF414E6B820
		void HandleCraftingOptions(); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent 0x7FF414E6B740
		void HandleCraft(); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent 0x7FF414E6B660
		void HandleConsumeItem(); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent 0x7FF414E6B580
		void HandleCompare(); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent 0x7FF414E6B4A0
	};


	// Class SaveTheWorldUI.FortItemCompareModeActivatablePanel_STW
	// Inherited from UFortItemDetailsActivatablePanel_STW -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x4B0 - 0x4A0)
	class UFortItemCompareModeActivatablePanel_STW : public UFortItemDetailsActivatablePanel_STW	
	{
	public:
		UFortItemManagementItemDetailsPanel_STW ComparisonModeLeftItemDetailsPanel_STW; // 0x4A0(0x8)
		UFortItemManagementItemDetailsPanel_STW ComparisonModeRightItemDetailsPanel_STW; // 0x4A8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortItemCompareModeActivatablePanel_STW");
			return ret;
		}

		void RegisterInputActions(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E6DB20
	};


	// Class SaveTheWorldUI.FortItemMulchModeActivatablePanel_STW
	// Inherited from UFortItemDetailsActivatablePanel_STW -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x50 (0x4F0 - 0x4A0)
	class UFortItemMulchModeActivatablePanel_STW : public UFortItemDetailsActivatablePanel_STW	
	{
	public:
		UFortItemManagementItemDetailsPanel_STW MulchModeItemDetailsPanel_STW; // 0x4A0(0x8)
		UFortItemManagementMulchDetailsPanel_STW MulchDetailsPanel_STW; // 0x4A8(0x8)
		FDataTableRowHandle AutoRecycleActionHandle; // 0x4B0(0x10)
		FDataTableRowHandle AutoRetireInputActionHandle; // 0x4C0(0x10)
		FDataTableRowHandle DetailsInputActionHandle; // 0x4D0(0x10)
		FDataTableRowHandle LeaveInventoryInputActionHandle; // 0x4E0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortItemMulchModeActivatablePanel_STW");
			return ret;
		}

		void RegisterInputActions(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E6DEA0
		void HandleLeaveInventory(); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent 0x7FF414E6DDC0
		void HandleInfo(); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent 0x7FF414E6DCE0
		void HandleAutoMulch(); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent 0x7FF414E6DC00
	};


	// Class SaveTheWorldUI.FortItemManagementCustomFilterModalWidget_STW
	// Inherited from UFortActivatablePanel -> UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x68 (0x5D0 - 0x568)
	class UFortItemManagementCustomFilterModalWidget_STW : public UFortActivatablePanel	
	{
	public:
		TWeakObjectPtr HostItemManagementScreen; // 0x568(0x8)
		TArray AvailableFilters; // 0x570(0x10)
		TSet LocalCustomFilterSet; // 0x580(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortItemManagementCustomFilterModalWidget_STW");
			return ret;
		}

		void ToggleFilter(EFortInventoryCustomFilter Filter); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E6E5A0
		void OnEndCommitCustomFilter(bool bWasSuccessful); // Flags: Event|Protected|BlueprintEvent 0x7FF414E6E4C0
		void OnCustomFilterSetUpdated(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E6E3E0
		void OnBeginCommitCustomFilter(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E6E300
		bool IsCustomFilterEnabled(EFortInventoryCustomFilter Filter); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414E6E220
		void EnableAllFilters(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E6E140
		void DisableAllFilters(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E6E060
		void CommitCustomFilters(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E6DF80
	};


	// Class SaveTheWorldUI.FortItemManagementInventoryPanel_STW
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x1D8 (0x5D0 - 0x3F8)
	class UFortItemManagementInventoryPanel_STW : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData05_3[0x50]; // 0x3F8(0x50) UNKNOWN PROPERTY
		FName CurrentFilterName; // 0x448(0x4)
		EInventoryContentSortType CurrentSortType; // 0x44C(0x1)
		unsigned char UnknownData06_6[0x3]; // 0x44D(0x3) UNKNOWN PROPERTY
		UClass FilterTabButtonType; // 0x450(0x8)
		UClass FilterTabButtonStyle; // 0x458(0x8)
		TArray FilterTabLabelInfoArray; // 0x460(0x10)
		UFortTabListWidgetBase FilterTabList; // 0x470(0x8)
		UCommonLoadGuard TileViewLoadGuard; // 0x478(0x8)
		UFortItemTileView TileView; // 0x480(0x8)
		UPanelWidget CraftingPanel; // 0x488(0x8)
		UCommonLoadGuard CraftingTileViewLoadGuard; // 0x490(0x8)
		UFortItemTileView CraftingTileView; // 0x498(0x8)
		UPanelWidget StoragePanel; // 0x4A0(0x8)
		UCommonLoadGuard StorageTileViewLoadGuard; // 0x4A8(0x8)
		UFortItemTileView StorageTileView; // 0x4B0(0x8)
		UCommonTextBlock MulchRestrictionReasonText; // 0x4B8(0x8)
		EFortItemCardSize SmallTileSize; // 0x4C0(0x1)
		EFortItemCardSize LargeTileSize; // 0x4C1(0x1)
		unsigned char UnknownData07_6[0x2]; // 0x4C2(0x2) UNKNOWN PROPERTY
		TWeakObjectPtr HostItemManagementScreen; // 0x4C4(0x8)
		bool bCanDragItems; // 0x4CC(0x1)
		unsigned char UnknownData08_6[0x3]; // 0x4CD(0x3) UNKNOWN PROPERTY
		TArray DefaultQuickbarEquipSlotIndicesConfigs; // 0x4D0(0x10)
		TMap QuickbarEquipSlotIndices; // 0x4E0(0x50)
		unsigned char UnknownData09_6[0x90]; // 0x530(0x90) UNKNOWN PROPERTY
		UFortInventoryContext InventoryContext; // 0x5C0(0x8)
		UWidget WidgetToCenter; // 0x5C8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW");
			return ret;
		}

		void UpdateSchematicTiles(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E70520
		void ToggleTileSize(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E70440
		void TogglePrioritizeFavorites(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E70360
		void SwitchPanelFocus(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E70280
		void SetSortType(EInventoryContentSortType SortType); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E701A0
		void SetFilter(FName FilterName); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E700C0
		void RequestFocusEquipSlots(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E6FFE0
		void RefreshCraftingSort(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E6FF00
		void OnMulchRestrictionTextShown(bool bShown); // Flags: Event|Protected|BlueprintEvent 0x7FF414E6FE20
		void MarkAllItemsAsSeen(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E6FD40
		bool IsSwitchPanelAvailable(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E6FC60
		bool IsSelectedItem(UFortItem Item); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E6FB80
		bool HasUnlockedStorageSlots(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E6FAA0
		void HandleSetOfItemsToMulchChangedBP(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E6F9C0
		void HandleQuickBarChangedBP(EFortQuickBars QuickBarType); // Flags: Event|Protected|BlueprintEvent 0x7FF414E6F8E0
		void HandleItemBeginDrag(UObject Item); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E6F800
		void HandleInventoryUpdatedEvent(); // Flags: Final|Native|Private 0x7FF414E6F720
		void HandleFocusEquipSlotsBP(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E6F640
		void HandleFilterTabSelected(FName TabNameID); // Flags: Final|Native|Private 0x7FF414E6F560
		void HandleFilterTabButtonCreated(FName TabNameID, UCommonButtonBase TabButton); // Flags: Final|Native|Private 0x7FF414E6F480
		void HandleDifferentSortTypeSetBP(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E6F3A0
		void HandleDifferentItemManagementModeSetBP(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E6F2C0
		void HandleDifferentFrontendInventoryFilterSetBP(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E6F1E0
		void HandleDifferentFilterSetBP(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E6F100
		void HandleCustomInventoryFilterChanged(); // Flags: Final|Native|Protected 0x7FF414E6F020
		void HandleCursorModeChangedBP(bool bCursorModeEnabled, FName ActionName, UUserWidget CursorModeContentWidget); // Flags: Event|Protected|BlueprintEvent 0x7FF414E6EF40
		void HandleCursorModeChanged(bool bCursorModeEnabled, FName ActionName, UUserWidget CursorModeContentWidget); // Flags: Final|Native|Private 0x7FF414E6EE60
		void HandleCraftItemStarted(); // Flags: Final|Native|Private 0x7FF414E6ED80
		TArray GetUpgradeItemDefinitionsForCurrentInventory(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414E6ECA0
		TArray GetSupportedSortTypesForCurrentInventory(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414E6EBC0
		bool GetShouldPrioritizeFavorites(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E6EAE0
		FText GetQualifiedFilterDisplayName(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414E6EA00
		void CycleSortType(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E6E920
		bool CanDragItems(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E6E840
		void AdvanceSelection(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E6E760
		void AddItemStackToMulch(UFortItem Item, int32_t Count); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E6E680
	};


	// Class SaveTheWorldUI.FortItemManagementItemTileButton_STW
	// Inherited from UFortItemTileButton -> UCommonButtonLegacy -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x78 (0x1490 - 0x1418)
	class UFortItemManagementItemTileButton_STW : public UFortItemTileButton	
	{
	public:
		TWeakObjectPtr HostItemManagementScreen; // 0x1418(0x8)
		bool HasTheItemToDetail; // 0x1420(0x1)
		bool HasTheItemToCompareDetailsWith; // 0x1421(0x1)
		bool HasAnItemMarkedForMulching; // 0x1422(0x1)
		unsigned char UnknownData02_6[0x1]; // 0x1423(0x1) UNKNOWN PROPERTY
		int32_t MulchCount; // 0x1424(0x4)
		UOverlay NotCraftableOverlay; // 0x1428(0x8)
		UFortDynamicEntryBox EquipSlotOverlay; // 0x1430(0x8)
		UMenuAnchor PopupMenuAnchor; // 0x1438(0x8)
		bool ShowCollectionBookIndicator; // 0x1440(0x1)
		bool ShowRefundIndicator; // 0x1441(0x1)
		unsigned char UnknownData03_6[0x46]; // 0x1442(0x46) UNKNOWN PROPERTY
		UFortInventoryContext InventoryContext; // 0x1488(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortItemManagementItemTileButton_STW");
			return ret;
		}

		void UpdateEquipSlotOverlay(int32_t CurrentSlotIndex); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E71240
		void PopulateEquipSlotOverlay(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E71160
		void OnSlotItemComplete(UFortAccountItem SlottedItem, FName SlotId); // Flags: Final|Native|Private 0x7FF414E71080
		bool IsValidEquipSlotOverlayIndex(int32_t SlotIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E70FA0
		void HandleShowRefundIndicatorChanged(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E70EC0
		void HandleShowCollectionBookIndicatorChanged(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E70DE0
		void HandleItemMulchStateChanged(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E70D00
		void HandleItemChangedBP(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E70C20
		void HandleHasItemToDetailChanged(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E70B40
		void HandleHasItemToCompareDetailsWithChanged(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E70A60
		void HandleEquipSlotChanged(int32_t EquipSlot); // Flags: Event|Protected|BlueprintEvent 0x7FF414E70980
		void HandleDifferentItemManagementModeSetBP(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E708A0
		UUserWidget GetPopupMenu(); // Flags: Final|Native|Private 0x7FF414E707C0
		EFortItemManagementMode GetItemManagementMode(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414E706E0
		FHomebaseSquadSlotId GetHomebaseSquadSlotForItem(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414E70600
	};


	// Class SaveTheWorldUI.FortItemManagementItemDetailsPanel_STW
	// Inherited from UFortItemDetailsHostPanel -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x3E0 - 0x3C0)
	class UFortItemManagementItemDetailsPanel_STW : public UFortItemDetailsHostPanel	
	{
	public:
		bool HasItemMarkedForMulching; // 0x3C0(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x3C1(0x3) UNKNOWN PROPERTY
		TWeakObjectPtr HostItemManagementScreen; // 0x3C4(0x8)
		unsigned char UnknownData03_6[0xC]; // 0x3CC(0xC) UNKNOWN PROPERTY
		UFortInventoryContext InventoryContext; // 0x3D8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortItemManagementItemDetailsPanel_STW");
			return ret;
		}

		void HandleHostSet(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E714E0
		void HandleHasItemMarkedForMulchingChanged(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E71400
		TArray GetAmmoTypeItemDefinitions(); // Flags: Final|Native|Static|Protected|BlueprintCallable|BlueprintPure 0x7FF414E71320
	};


	// Class SaveTheWorldUI.FortItemManagementMulchDetailsPanel_STW
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x28 (0x308 - 0x2E0)
	class UFortItemManagementMulchDetailsPanel_STW : public UCommonUserWidget	
	{
	public:
		UFortItemQuantityListBase ResourceList; // 0x2E0(0x8)
		TScriptInterface HostItemManagementMulchPanel; // 0x2E8(0x10)
		unsigned char UnknownData01_6[0x8]; // 0x2F8(0x8) UNKNOWN PROPERTY
		UFortInventoryContext InventoryContext; // 0x300(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortItemManagementMulchDetailsPanel_STW");
			return ret;
		}

		void SetHost(TScriptInterface Host); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E71B00
		bool IsSpaceAvailableForMulch(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414E71A20
		void HandleSetOfItemsToMulchChangedBP(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E71940
		void HandleHostSet(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E71860
		TArray GetItemsToMulch(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414E71780
		TArray GetItemCountsToMulch(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414E716A0
		void CommitMulch(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E715C0
	};


	// Class SaveTheWorldUI.FortItemManagementModeDetailsPanel_STW
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x30 (0x310 - 0x2E0)
	class UFortItemManagementModeDetailsPanel_STW : public UCommonUserWidget	
	{
	public:
		UCommonWidgetSwitcherLegacy ModeWidgetSwitcher; // 0x2E0(0x8)
		UFortItemDetailsModeActivatablePanel_STW DetailsModeItemDetailsPanel; // 0x2E8(0x8)
		UFortItemCompareModeActivatablePanel_STW ComparisonModeItemDetailsPanel; // 0x2F0(0x8)
		UFortItemMulchModeActivatablePanel_STW MulchModeItemDetailsPanel; // 0x2F8(0x8)
		TWeakObjectPtr HostItemManagementScreen; // 0x300(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x308(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortItemManagementModeDetailsPanel_STW");
			return ret;
		}

		void HandleHostSet(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E71DA0
		void HandleDifferentItemManagementModeSetBP(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E71CC0
		EFortItemManagementMode GetItemManagementMode(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414E71BE0
	};


	// Class SaveTheWorldUI.FortItemManagementScreen_STW
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x210 (0x608 - 0x3F8)
	class UFortItemManagementScreen_STW : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData07_3[0x10]; // 0x3F8(0x10) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnItemViewRefreshed; // 0x408(0x10)
		unsigned char UnknownData08_6[0xC0]; // 0x418(0xC0) UNKNOWN PROPERTY
		EFortItemManagementMode Mode; // 0x4D8(0x1)
		EFortFrontendInventoryFilter FrontendInventoryFilter; // 0x4D9(0x1)
		bool bReadOnlyModeWIFE; // 0x4DA(0x1)
		bool ConsumeItemRequestInProgress; // 0x4DB(0x1)
		unsigned char UnknownData09_6[0x4]; // 0x4DC(0x4) UNKNOWN PROPERTY
		UClass MoreMenuClass; // 0x4E0(0x8)
		UFortItemManagementInventoryPanel_STW InventoryPanel; // 0x4E8(0x8)
		UFortItemManagementModeDetailsPanel_STW ModeDetailsPanel; // 0x4F0(0x8)
		TWeakObjectPtr ItemToDetail; // 0x4F8(0x8)
		unsigned char UnknownData10_6[0x8]; // 0x500(0x8) UNKNOWN PROPERTY
		UClass MulchConfirmationModalClass; // 0x508(0x8)
		UClass CustomFilterModalClass; // 0x510(0x8)
		unsigned char UnknownData11_6[0x18]; // 0x518(0x18) UNKNOWN PROPERTY
		UFortMulchConfirmationModalWidget MulchConfirmationModal; // 0x530(0x8)
		UFortItemManagementCustomFilterModalWidget_STW CustomFilterModal; // 0x538(0x8)
		TMap SortLabels; // 0x540(0x50)
		TMap MoreLabels; // 0x590(0x50)
		unsigned char UnknownData12_6[0x8]; // 0x5E0(0x8) UNKNOWN PROPERTY
		UFortInventoryContext InventoryContext; // 0x5E8(0x8)
		UFortItemManagementItemPopupMenu_STW PopupMenuCache; // 0x5F0(0x8)
		unsigned char UnknownData13_7[0x10]; // 0x5F8(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortItemManagementScreen_STW");
			return ret;
		}

		void TransferItem(UFortItem Item); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E74CE0
		void ToggleShowRefundIndicator(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E74C00
		void ToggleShowCollectionBookIndicator(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E74B20
		void ShowWarningReadOnlyWIFE(bool Force); // Flags: Event|Public|BlueprintCallable|BlueprintEvent 0x7FF414E74A40
		void ShowMulchConfirmationModal(); // Flags: Native|Public|BlueprintCallable 0x7FF414E74960
		void ShowCustomFilterModal(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E74880
		void SetFrontendInventoryFilter(EFortFrontendInventoryFilter FrontendInventoryFilter); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E747A0
		void SetConsumeItemRequestInProgress(bool InProgress); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E746C0
		void RequestPopupMenuForSelectedItem(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E745E0
		void OpenMoreAndSortMenu(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E74500
		void OpenCraftingOptions(UFortSchematicItem SchematicItem); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E74420
		void OpenAutoMulchOptions(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E74340
		void NotifyPanelDeactivated(); // Flags: Native|Protected|BlueprintCallable 0x7FF414E74260
		void NotifyPanelActivated(); // Flags: Native|Public|BlueprintCallable 0x7FF414E74180
		void MarkAllItemsAsSeen(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E740A0
		bool IsScreenWIFE(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E73FC0
		void InspectItem(UFortItem Item); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E73EE0
		void HideMulchConfirmationModal(); // Flags: Native|Public|BlueprintCallable 0x7FF414E73E00
		void HideCustomFilterModal(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E73D20
		bool HasItemBeenSeen(UFortAccountItem AccountItem); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E73C40
		bool HasDefaultItemsToMulch(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E73B60
		void HandleTransferItemBP(UFortItem Item); // Flags: Event|Public|BlueprintEvent 0x7FF414E73A80
		void HandleOpenCraftingOptionsBP(UFortSchematicItem SchematicItem); // Flags: Event|Public|BlueprintEvent 0x7FF414E739A0
		void HandleOpenAutoMulchOptionsBP(); // Flags: Event|Public|BlueprintEvent 0x7FF414E738C0
		void HandleMulchQuantitySelection(UFortItem Item); // Flags: Event|Public|BlueprintEvent 0x7FF414E737E0
		void HandleMoreButtonSelected(FName MoreNameId, UCommonButtonBase NewButton); // Flags: Event|Protected|BlueprintEvent 0x7FF414E73700
		void HandleItemToDetailChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged); // Flags: Final|Native|Private 0x7FF414E73620
		void HandleItemToCompareWithChanged(bool bItemChanged); // Flags: Final|Native|Private 0x7FF414E73540
		void HandleInspectItemBP(UFortItem Item); // Flags: Event|Public|BlueprintEvent 0x7FF414E73460
		void HandleEquipItemBP(UFortItem Item); // Flags: Event|Public|BlueprintEvent 0x7FF414E73380
		void HandleDropItemBP(UFortItem Item); // Flags: Event|Public|BlueprintEvent 0x7FF414E732A0
		void HandleDifferentItemManagementModeSetBP(); // Flags: Event|Public|BlueprintEvent 0x7FF414E731C0
		void HandleCraftItemBP(UFortSchematicItem SchematicItem, EFortItemTier RequestedTier, int32_t CraftCount); // Flags: Event|Public|BlueprintEvent 0x7FF414E730E0
		void HandleCraftAndSlotItemBP(UFortSchematicItem SchematicItem, EFortItemTier RequestedTier, int32_t CraftCount); // Flags: Event|Public|BlueprintEvent 0x7FF414E73000
		void HandleConsumeItemBP(UFortConsumableAccountItem ConsumableItem); // Flags: Event|Public|BlueprintEvent 0x7FF414E72F20
		bool GuardActionForReadOnlyWIFE(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E72E40
		bool GetShouldShowRefundIndicator(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E72D60
		bool GetShouldShowCollectionBookIndicator(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E72C80
		UFortItem GetItemToDetail(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E72BA0
		UFortItem GetItemToCompareDetailsWith(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E72AC0
		void EquipItem(UFortItem Item); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E729E0
		void EnterMulchModeForAutoMulch(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E72900
		void EnterMulchMode(UFortItem ItemToMulch); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E72820
		void EnterDetailsMode(UFortItem ItemToDetail); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E72740
		void EnterComparisonMode(UFortItem ItemToCompareDetailsWith); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E72660
		void DropItem(UFortItem Item); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E72580
		void DefaultActionRefresh(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent 0x7FF414E724A0
		void CycleSortType(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E723C0
		void CraftItem(UFortSchematicItem SchematicItem, EFortItemTier RequestedTier, int32_t CraftCount); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E722E0
		void CraftAndSlotItem(UFortSchematicItem SchematicItem, EFortItemTier RequestedTier, int32_t CraftCount); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E72200
		void ConsumeItem(UFortConsumableAccountItem ConsumableItem); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E72120
		bool CanRequestPopupMenuForSelectedItem(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E72040
		bool CanEquipItem(UFortItem Item); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E71F60
		void CancelInventoryPanelTileViewRefresh(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E71E80
	};


	// Class SaveTheWorldUI.MainMenu_STW
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x138 (0x530 - 0x3F8)
	class UMainMenu_STW : public UCommonActivatableWidget	
	{
	public:
		FText DefaultHelpText; // 0x3F8(0x10)
		UCommonTextBlock Text_CountDownTimer; // 0x408(0x8)
		UCommonButtonBase Button_LeaveExperience; // 0x410(0x8)
		UCommonUserWidget Button_Leave; // 0x418(0x8)
		UCommonTextBlock ContextualHelpText; // 0x420(0x8)
		UCommonButtonBase Button_BackBoard; // 0x428(0x8)
		UBackgroundBlur BackgroundBlur; // 0x430(0x8)
		UBorder BackgroundDarkener; // 0x438(0x8)
		UCommonButtonBase Button_ReportPlayer; // 0x440(0x8)
		UCommonButtonBase Button_Logout; // 0x448(0x8)
		UCommonButtonBase Button_Support; // 0x450(0x8)
		UCommonButtonBase Button_Exit; // 0x458(0x8)
		UCommonButtonBase Button_Settings; // 0x460(0x8)
		FDataTableRowHandle CloseMenuAction; // 0x468(0x10)
		FDataTableRowHandle OpenSocialMenuAction; // 0x478(0x10)
		FDataTableRowHandle ToggleMainMenuAction; // 0x488(0x10)
		FDataTableRowHandle OpenChatAction; // 0x498(0x10)
		FDataTableRowHandle SwitchProfileAction; // 0x4A8(0x10)
		UClass SettingsScreenClass; // 0x4B8(0x8)
		FText LogoutTitle; // 0x4C0(0x10)
		FText LogoutDescription; // 0x4D0(0x10)
		FText ExitTitle; // 0x4E0(0x10)
		FText ExitDescription; // 0x4F0(0x10)
		bool bIsMainMenuOpen; // 0x500(0x1)
		unsigned char UnknownData01_6[0x27]; // 0x501(0x27) UNKNOWN PROPERTY
		UFortCampaignTabsScreenBase MainTabsScreen; // 0x528(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.MainMenu_STW");
			return ret;
		}

		void TryShowPrimaryContent(TWeakObjectPtr& ContentWidgetClass); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable 0x7FF414E75060
		void TryShowModal(TWeakObjectPtr& ModalWidgetClass); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable 0x7FF414E74F80
		bool ShouldShowLeaveExperienceButton(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414E74EA0
		bool IsActiveTabMainShop(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414E74DC0
	};


	// Class SaveTheWorldUI.FortUIStateWidget_STWFrontend
	// Inherited from UFortUIStateWidget_STW -> UFortUIStateWidgetBase -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x78 (0x490 - 0x418)
	class UFortUIStateWidget_STWFrontend : public UFortUIStateWidget_STW	
	{
	public:
		unsigned char UnknownData02_3[0x10]; // 0x418(0x10) UNKNOWN PROPERTY
		UTopBar_STW TopBar_STW; // 0x428(0x8)
		UCommonUserWidget BottomBar_STW; // 0x430(0x8)
		UFortActivatableChatWidget ChatPanel_Widget; // 0x438(0x8)
		TWeakObjectPtr MainTabsScreen; // 0x440(0x8)
		UClass PlayerBannedScreenClass; // 0x448(0x8)
		TArray ScriptedActionsToRegister; // 0x450(0x10)
		TArray DeferredSquadAutoSlottingStoreStates; // 0x460(0x10)
		unsigned char UnknownData03_7[0x20]; // 0x470(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortUIStateWidget_STWFrontend");
			return ret;
		}
	};


	// Class SaveTheWorldUI.FortUIStateWidget_STWJoinServer
	// Inherited from UFortUIStateWidgetBase -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x28 (0x438 - 0x410)
	class UFortUIStateWidget_STWJoinServer : public UFortUIStateWidgetBase	
	{
	public:
		UFortRejoinWindowBase RejoinWindow; // 0x410(0x8)
		FDataTableRowHandle TutorialCompleteStatHandle; // 0x418(0x10)
		UClass RejoinWindowClass; // 0x428(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x430(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortUIStateWidget_STWJoinServer");
			return ret;
		}

		void OnShowTutorialDialog(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E754C0
		void HandleMatchmakingStateChange(TEnumAsByte OldState, TEnumAsByte NewState); // Flags: Final|Native|Private 0x7FF414E753E0
		void HandleMatchmakingComplete(EMatchmakingCompleteResult MatchmakingResult); // Flags: Final|Native|Private 0x7FF414E75300
		void HandleLobbyTimeUpdated(int32_t TimeRemaining); // Flags: Final|Native|Private 0x7FF414E75220
		void HandleLobbyDisconnected(); // Flags: Final|Native|Private 0x7FF414E75140
	};


	// Class SaveTheWorldUI.TopBar_STW
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xB0 (0x4A8 - 0x3F8)
	class UTopBar_STW : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData03_3[0x10]; // 0x3F8(0x10) UNKNOWN PROPERTY
		UDataTable PhoenixSeasonDisplayInfoMap; // 0x408(0x8)
		TMap ReasonDescriptions; // 0x410(0x50)
		TWeakObjectPtr MainMenu; // 0x460(0x8)
		UCommonButtonBase Button_MainMenu; // 0x468(0x8)
		UImage Image_ActiveInvitesNotification; // 0x470(0x8)
		UCommonButtonBase Button_Social; // 0x478(0x8)
		unsigned char UnknownData04_6[0x10]; // 0x480(0x10) UNKNOWN PROPERTY
		FDataTableRowHandle OpenMainMenuInputAction; // 0x490(0x10)
		unsigned char UnknownData05_7[0x8]; // 0x4A0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.TopBar_STW");
			return ret;
		}

		void SetOnlineFriendsCount(int32_t NewOnlineFriendsCount); // Flags: Event|Protected|BlueprintEvent 0x7FF414E75A00
		void OnSocialMenuOpened(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E75920
		void OnShouldShowPhoenixDisplay(bool bShow, UFortPhoenixSeasonDisplayInfo PhoenixDisplayInfo); // Flags: Event|Protected|BlueprintEvent 0x7FF414E75840
		void OnMainMenuOpening(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E75760
		void OnMainMenuClosed(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E75680
		void HandleInputMethodChanged(ECommonInputType Type); // Flags: Final|Native|Private 0x7FF414E755A0
	};


	// Class SaveTheWorldUI.FortHeroLoadoutGadgetPicker
	// Inherited from UFortItemPickerBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x30 (0x448 - 0x418)
	class UFortHeroLoadoutGadgetPicker : public UFortItemPickerBase	
	{
	public:
		unsigned char UnknownData01_3[0x14]; // 0x418(0x14) UNKNOWN PROPERTY
		TWeakObjectPtr TargetLoadoutItem; // 0x42C(0x8)
		int32_t TargetSlotIndex; // 0x434(0x4)
		TArray TemporaryGadgetItemInstances; // 0x438(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortHeroLoadoutGadgetPicker");
			return ret;
		}

		void SetTargetLoadoutSlot(UFortCampaignHeroLoadoutItem LoadoutItem, int32_t SlotIndex); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E75BC0
		void HandleDifferentTargetLoadoutSlotSetBP(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E75AE0
	};


	// Class SaveTheWorldUI.FortHeroLoadoutHeroPicker
	// Inherited from UFortItemPickerBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x138 (0x550 - 0x418)
	class UFortHeroLoadoutHeroPicker : public UFortItemPickerBase	
	{
	public:
		unsigned char UnknownData03_3[0x18]; // 0x418(0x18) UNKNOWN PROPERTY
		UFortTabListWidgetBase_Legacy ExternalFilterTabList; // 0x430(0x8)
		UFortTabListWidgetBase_Legacy ExternalSubFilterTabList; // 0x438(0x8)
		TWeakObjectPtr TargetLoadoutItem; // 0x440(0x8)
		FName TargetSlotName; // 0x448(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x44C(0x4) UNKNOWN PROPERTY
		UClass FilterTabButtonType; // 0x450(0x8)
		TMap TabButtonLabelInfoMap; // 0x458(0x50)
		TMap AbilitiesLabelInfoMap; // 0x4A8(0x50)
		unsigned char UnknownData05_7[0x58]; // 0x4F8(0x58) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortHeroLoadoutHeroPicker");
			return ret;
		}

		void UpdateSubFilterVisibility(bool bVisible); // Flags: Event|Protected|BlueprintEvent 0x7FF414E763A0
		void UpdateSubFilterTabList(FName FilterSelectedTab); // Flags: Final|Native|Private|BlueprintCallable 0x7FF414E762C0
		void UpdateFilterTabList(FName PreviouslySelectedTab); // Flags: Final|Native|Private|BlueprintCallable 0x7FF414E761E0
		void SetTargetLoadoutSlot(UFortCampaignHeroLoadoutItem LoadoutItem, FName& SlotName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414E76100
		void HandleFilterTabSelectedBP(FName TabID); // Flags: Event|Protected|BlueprintEvent 0x7FF414E76020
		void HandleFilterTabSelected(FName TabID); // Flags: Final|Native|Private 0x7FF414E75F40
		void HandleDifferentTargetLoadoutSetBP(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E75E60
		FName GetCurrentlySelectedTab(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E75D80
		void AssociateFilterTabList(UFortTabListWidgetBase_Legacy InExternalFilterTabList, UFortTabListWidgetBase_Legacy InExternalSubFilterTabList); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E75CA0
	};


	// Class SaveTheWorldUI.FortHeroLoadoutHeroPickerFunctionLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortHeroLoadoutHeroPickerFunctionLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortHeroLoadoutHeroPickerFunctionLibrary");
			return ret;
		}
	};


	// Class SaveTheWorldUI.FortHeroLoadoutScreenBase
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x1B8 (0x5B0 - 0x3F8)
	class UFortHeroLoadoutScreenBase : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData05_3[0x10]; // 0x3F8(0x10) UNKNOWN PROPERTY
		UFortItemView ItemViewObject; // 0x408(0x8)
		FDataTableRowHandle BackInputAction; // 0x410(0x10)
		FDataTableRowHandle HelpInputAction; // 0x420(0x10)
		FDataTableRowHandle CancelInputAction; // 0x430(0x10)
		FDataTableRowHandle ToggleDetailInputAction; // 0x440(0x10)
		FDataTableRowHandle ClearAllInputAction; // 0x450(0x10)
		FDataTableRowHandle ShowAllStatsInputAction; // 0x460(0x10)
		FDataTableRowHandle InspectRootSlotsInputAction; // 0x470(0x10)
		FDataTableRowHandle CyclePickerSortModeInputAction; // 0x480(0x10)
		FDataTableRowHandle InspectPickerInputAction; // 0x490(0x10)
		FDataTableRowHandle ToggleDescInputAction; // 0x4A0(0x10)
		unsigned char UnknownData06_6[0xA0]; // 0x4B0(0xA0) UNKNOWN PROPERTY
		bool AllowItemRotation; // 0x550(0x1)
		bool AllowItemZooming; // 0x551(0x1)
		bool AutomaticallyRegisterCameraView; // 0x552(0x1)
		bool OverrideFixedCameras; // 0x553(0x1)
		unsigned char UnknownData07_6[0x4]; // 0x554(0x4) UNKNOWN PROPERTY
		UDataTable ActionDataTable; // 0x558(0x8)
		UWidgetAnimation AnimationToHideItemInfo; // 0x560(0x8)
		bool bAutoShowDetails; // 0x568(0x1)
		bool bItemDetailsHidden; // 0x569(0x1)
		unsigned char UnknownData08_6[0x2]; // 0x56A(0x2) UNKNOWN PROPERTY
		float HideItemInfoHeaderDurationSecs; // 0x56C(0x4)
		unsigned char UnknownData09_7[0x40]; // 0x570(0x40) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortHeroLoadoutScreenBase");
			return ret;
		}

		void ShowItemDetails(); // Flags: Final|Native|Private|BlueprintCallable 0x7FF414E77360
		void SetInputBindings(bool ActivePickerBox, bool CommanderSlot, bool NoneSlot, bool CanClearAll); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E77280
		void SetHeroLoadout(UFortCampaignHeroLoadoutItem HeroLoadout); // Flags: Event|Public|BlueprintCallable|BlueprintEvent 0x7FF414E771A0
		void OnVaultItemsViewed(TArray& Items); // Flags: Final|Native|Private|HasOutParms 0x7FF414E770C0
		void OnItemPreviewChanged(AActor NewPrefab, UFortItem NewItem); // Flags: Final|Native|Protected 0x7FF414E76FE0
		bool IsLoadoutSwitchingAllowed(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E76F00
		void HideItemDetails(); // Flags: Final|Native|Private|BlueprintCallable 0x7FF414E76E20
		void HandleToggleDescInputAction(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E76D40
		void HandleShowAllStatsInputAction(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E76C60
		void HandleInspectRootSlotsInputAction(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E76B80
		void HandleInspectPickerInputAction(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E76AA0
		void HandleHelpInputAction(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E769C0
		void HandleDetailsInputAction(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E768E0
		void HandleCyclePickerInputAction(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E76800
		void HandleClearAllInputAction(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E76720
		void HandleBackInputAction(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E76640
		UWidget GetWidgetForFramingViewedItem(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E76560
		bool GetIsReadOnly(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414E76480
	};


	// Class SaveTheWorldUI.FortHeroLoadoutScreenLegacy
	// Inherited from UFortActivatablePanelWithItemPreview -> UFortActivatablePanel -> UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x6B0 - 0x6B0)
	class UFortHeroLoadoutScreenLegacy : public UFortActivatablePanelWithItemPreview	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortHeroLoadoutScreenLegacy");
			return ret;
		}

		void SetHeroLoadout(UFortCampaignHeroLoadoutItem HeroLoadout); // Flags: Event|Public|BlueprintCallable|BlueprintEvent 0x7FF414E77600
		bool IsLoadoutSwitchingAllowed(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E77520
		bool GetIsReadOnly(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414E77440
	};


	// Class SaveTheWorldUI.FortHeroLoadoutSlotButton
	// Inherited from UCommonButtonLegacy -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x40 (0x1420 - 0x13E0)
	class UFortHeroLoadoutSlotButton : public UCommonButtonLegacy	
	{
	public:
		FName SlotName; // 0x13E0(0x4)
		int32_t SlotIndex; // 0x13E4(0x4)
		EHeroLoadoutSlotType SlotType; // 0x13E8(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x13E9(0x7) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnRequestChangeHero; // 0x13F0(0x10)
		FMulticastInlineDelegate OnContextMenuOpenChanged; // 0x1400(0x10)
		UMenuAnchor ContextMenuAnchor; // 0x1410(0x8)
		unsigned char UnknownData03_7[0x8]; // 0x1418(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortHeroLoadoutSlotButton");
			return ret;
		}

		void OnRequestChangeHero__DelegateSignature(UFortHeroLoadoutSlotButton SlotButton); // Flags: MulticastDelegate|Public|Delegate 0x7FF4140FEA98
		void OnMenuOpenChangedEvent__DelegateSignature(UFortHeroLoadoutSlotButton SlotButton, bool bIsMenuOpen); // Flags: MulticastDelegate|Public|Delegate 0x7FF4140FE9B8
		bool IsContextMenuOpen(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140FE8D8
		void HandleMenuOpenChanged(bool bIsMenuOpen); // Flags: Final|Native|Private 0x7FF4140FE7F8
	};


	// Class SaveTheWorldUI.FortHeroLoadoutTeamPerkPicker
	// Inherited from UFortItemPickerBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x438 - 0x418)
	class UFortHeroLoadoutTeamPerkPicker : public UFortItemPickerBase	
	{
	public:
		unsigned char UnknownData02_3[0x14]; // 0x418(0x14) UNKNOWN PROPERTY
		TWeakObjectPtr TargetLoadoutItem; // 0x42C(0x8)
		unsigned char UnknownData03_7[0x4]; // 0x434(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortHeroLoadoutTeamPerkPicker");
			return ret;
		}

		void SetTargetLoadout(UFortCampaignHeroLoadoutItem LoadoutItem); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E777C0
		void HandleDifferentTargetLoadoutSetBP(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E776E0
	};


	// Class SaveTheWorldUI.FortCampaignTabsScreenBase
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x98 (0x490 - 0x3F8)
	class UFortCampaignTabsScreenBase : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData03_3[0x8]; // 0x3F8(0x8) UNKNOWN PROPERTY
		TMap FeaturesTabsMap; // 0x400(0x50)
		UHorizontalBox TopTabContainer; // 0x450(0x8)
		UFortTabListWidgetBase TopTabList; // 0x458(0x8)
		UClass MainTabSet; // 0x460(0x8)
		unsigned char UnknownData04_6[0x8]; // 0x468(0x8) UNKNOWN PROPERTY
		UCommonAnimatedSwitcher Switcher_TabContent; // 0x470(0x8)
		unsigned char UnknownData05_7[0x18]; // 0x478(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortCampaignTabsScreenBase");
			return ret;
		}

		void UpdateItemShopButtonBang(FName Tab); // Flags: Native|Event|Protected|BlueprintCallable|BlueprintEvent 0x7FF414E77DE0
		bool ShouldShowItemShopBang(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414E77D00
		void HandleMainTabSelected_Native(FName TabNameID); // Flags: Final|Native|Protected 0x7FF414E77C20
		void HandleMainTabSelected(FName TabNameID); // Flags: Event|Protected|BlueprintEvent 0x7FF414E77B40
		void HandleMainTabCreated(FName TabNameID, UCommonButtonBase TabButton); // Flags: Event|Protected|BlueprintEvent 0x7FF414E77A60
		void HandleFeatureStateChanged(EFortUIFeature ChangedFeature, EFortUIFeatureState NewState, EFortUIFeatureStateReason Reason); // Flags: Final|Native|Protected 0x7FF414E77980
		void ConstructTabs(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E778A0
	};


	// Class SaveTheWorldUI.FortCampaignTabsScreenBase_Legacy
	// Inherited from UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x70 (0x5A0 - 0x530)
	class UFortCampaignTabsScreenBase_Legacy : public UCommonActivatablePanelLegacy	
	{
	public:
		TMap FeaturesTabsMap; // 0x530(0x50)
		UHorizontalBox TopTabContainer; // 0x580(0x8)
		UFortTabListWidgetBase_Legacy TopTabList; // 0x588(0x8)
		UClass MainTabSet; // 0x590(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x598(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortCampaignTabsScreenBase_Legacy");
			return ret;
		}

		void HandleMainTabSelected(FName TabNameID); // Flags: Event|Protected|BlueprintEvent 0x7FF414E78240
		void HandleMainTabCreated(FName TabNameID, UCommonButtonBase TabButton); // Flags: Event|Protected|BlueprintEvent 0x7FF414E78160
		void HandleFeatureStateChanged(EFortUIFeature ChangedFeature, EFortUIFeatureState NewState, EFortUIFeatureStateReason Reason); // Flags: Final|Native|Protected 0x7FF414E78080
		void HandleFeatureNavigateRequest(EFortUIFeature Feature); // Flags: Final|Native|Protected 0x7FF414E77FA0
		void ConstructTabs(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E77EC0
	};


	// Class SaveTheWorldUI.FortMissionSelect_STW
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x70 (0x468 - 0x3F8)
	class UFortMissionSelect_STW : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData02_3[0x10]; // 0x3F8(0x10) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnNavigation; // 0x408(0x10)
		FDataTableRowHandle FindPinnedQuestInputAction; // 0x418(0x10)
		FDataTableRowHandle RewardsInfoInputAction; // 0x428(0x10)
		FDataTableRowHandle MissionInfoInputAction; // 0x438(0x10)
		FDataTableRowHandle BackInputAction; // 0x448(0x10)
		unsigned char UnknownData03_7[0x10]; // 0x458(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortMissionSelect_STW");
			return ret;
		}

		void SetFindPinnedQuestActionEnabled(bool bEnabled); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E78940
		void SetBackActionEnabled(bool bEnabled); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E78860
		bool NavigateMissionTiles(EUINavigation Direction); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E78780
		void HandleInputRewardsInfo(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E786A0
		void HandleInputInfo(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E785C0
		void HandleFindPinnedQuest(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E784E0
		void HandleBack(); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent 0x7FF414E78400
		bool CanCaptureAcceptInput(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E78320
	};


	// Class SaveTheWorldUI.StoreCardObject
	// Inherited from UObject
	// Size: 0x20 (0x48 - 0x28)
	class UStoreCardObject : public UObject	
	{
	public:
		FCard Card; // 0x28(0x18)
		int32_t OriginalIndex; // 0x40(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x44(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.StoreCardObject");
			return ret;
		}
	};


	// Class SaveTheWorldUI.FortStoreSummary
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x48 (0x440 - 0x3F8)
	class UFortStoreSummary : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x3F8(0x8) UNKNOWN PROPERTY
		UClass MulchConfirmationModalClass; // 0x400(0x8)
		TArray StoreCardObjects; // 0x408(0x10)
		UCommonTileView TileView; // 0x418(0x8)
		unsigned char UnknownData03_6[0x18]; // 0x420(0x18) UNKNOWN PROPERTY
		UFortMulchConfirmationModalWidget MulchConfirmationModal; // 0x438(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortStoreSummary");
			return ret;
		}

		void ShowMulchConfirmationModal(); // Flags: Native|Public|BlueprintCallable 0x7FF414E794A0
		void SetIsInChoiceSelectionMode(bool InIsInChoiceSelectionMode); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E793C0
		void SetCards(TArray& Cards); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414E792E0
		void NotifyPanelDeactivated(); // Flags: Native|Protected|BlueprintCallable 0x7FF414E79200
		void NotifyPanelActivated(); // Flags: Native|Protected|BlueprintCallable 0x7FF414E79120
		void MarkDefaultItemsForMulch(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E79040
		void HideMulchConfirmationModal(); // Flags: Native|Public|BlueprintCallable 0x7FF414E78F60
		void HandleContextMenuOpenChangedBP(bool bIsOpen); // Flags: Event|Public|BlueprintEvent 0x7FF414E78E80
		void HandleContextMenuOpenChanged(bool bIsOpen); // Flags: Final|Native|Private 0x7FF414E78DA0
		bool GetIsInChoiceSelectionMode(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E78CC0
		void FocusSummary_BP(bool bSelectingChoices); // Flags: Event|Protected|BlueprintEvent 0x7FF414E78BE0
		void FinalizeFavoriteStatus(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E78B00
		void CloseSummaryScreen(); // Flags: Event|Public|BlueprintEvent 0x7FF414E78A20
	};


	// Class SaveTheWorldUI.FortStoreSummaryItemButton
	// Inherited from UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x70 (0x1400 - 0x1390)
	class UFortStoreSummaryItemButton : public UCommonButtonBase	
	{
	public:
		bool HasAnItemMarkedForMulching; // 0x1390(0x1)
		unsigned char UnknownData02_6[0x2F]; // 0x1391(0x2F) UNKNOWN PROPERTY
		UMenuAnchor PopupMenuAnchor; // 0x13C0(0x8)
		FCard CachedCard; // 0x13C8(0x18)
		UStoreCardObject StoreCardObject; // 0x13E0(0x8)
		UFortInventoryContext InventoryContext; // 0x13E8(0x8)
		unsigned char UnknownData03_7[0x10]; // 0x13F0(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortStoreSummaryItemButton");
			return ret;
		}

		void UpdateMulchListWithItem(bool bAddingItem); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E79C80
		void SetStoreCardObject(UStoreCardObject CardObject); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E79BA0
		void SetCachedCard(FCard& NewCard); // Flags: Native|Public|HasOutParms|BlueprintCallable 0x7FF414E79AC0
		void HandleMenuOpenChanged(bool bIsOpen); // Flags: Final|Native|Private 0x7FF414E799E0
		void HandleItemMulchStateChanged(); // Flags: Event|Public|BlueprintEvent 0x7FF414E79900
		void HandleCachedCardSet_BP(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E79820
		UStoreCardObject GetStoreCardObject(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E79740
		UUserWidget GetPopupMenu(); // Flags: Final|Native|Private 0x7FF414E79660
		FCard GetCachedCard(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E79580
	};


	// Class SaveTheWorldUI.FortStoreSummaryItemButton_Legacy
	// Inherited from UCommonButtonLegacy -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x50 (0x1430 - 0x13E0)
	class UFortStoreSummaryItemButton_Legacy : public UCommonButtonLegacy	
	{
	public:
		bool HasAnItemMarkedForMulching; // 0x13E0(0x1)
		unsigned char UnknownData02_6[0x2F]; // 0x13E1(0x2F) UNKNOWN PROPERTY
		UMenuAnchor PopupMenuAnchor; // 0x1410(0x8)
		UStoreCardObject StoreCardObject; // 0x1418(0x8)
		UFortInventoryContext InventoryContext; // 0x1420(0x8)
		unsigned char UnknownData03_7[0x8]; // 0x1428(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortStoreSummaryItemButton_Legacy");
			return ret;
		}

		void UpdateMulchListWithItem(bool bAddingItem); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414100608
		void SetStoreCardObject(UStoreCardObject CardObject); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414100528
		void OnContextMenuOpenChangedEvent__DelegateSignature(bool bIsOpen); // Flags: MulticastDelegate|Public|Delegate 0x7FF414100448
		void HandleMenuOpenChanged(bool bIsOpen); // Flags: Final|Native|Private 0x7FF414100368
		void HandleItemMulchStateChanged(); // Flags: Event|Public|BlueprintEvent 0x7FF414100288
		UStoreCardObject GetStoreCardObject(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4141001A8
		UUserWidget GetPopupMenu(); // Flags: Final|Native|Private 0x7FF4141000C8
	};


	// Class SaveTheWorldUI.FortStoreSummaryItemPopupMenu
	// Inherited from UFortPopupMenu -> UCommonPopupMenuLegacy -> UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x558 - 0x550)
	class UFortStoreSummaryItemPopupMenu : public UFortPopupMenu	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x550(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortStoreSummaryItemPopupMenu");
			return ret;
		}

		void MulchItem(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E79F20
		void HandleItemChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged); // Flags: Event|Protected|BlueprintEvent 0x7FF414E79E40
		UFortStoreSummaryItemButton GetHostButton(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414E79D60
	};


	// Class SaveTheWorldUI.FortStoreSummaryItemPopupMenu_Legacy
	// Inherited from UFortPopupMenu_Legacy -> UCommonPopupMenuLegacy -> UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x558 - 0x550)
	class UFortStoreSummaryItemPopupMenu_Legacy : public UFortPopupMenu_Legacy	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x550(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortStoreSummaryItemPopupMenu_Legacy");
			return ret;
		}

		void MulchItem(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E7A1C0
		void HandleItemChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged); // Flags: Event|Protected|BlueprintEvent 0x7FF414E7A0E0
		UFortStoreSummaryItemButton_Legacy GetHostButton(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414E7A000
	};


	// Class SaveTheWorldUI.FortStoreSummary_Legacy
	// Inherited from UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x48 (0x578 - 0x530)
	class UFortStoreSummary_Legacy : public UCommonActivatablePanelLegacy	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x530(0x8) UNKNOWN PROPERTY
		TArray StoreCardObjects; // 0x538(0x10)
		UCommonTileView TileView; // 0x548(0x8)
		UClass MulchConfirmationModalClass; // 0x550(0x8)
		unsigned char UnknownData03_6[0x18]; // 0x558(0x18) UNKNOWN PROPERTY
		UFortMulchConfirmationModalWidget MulchConfirmationModal; // 0x570(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortStoreSummary_Legacy");
			return ret;
		}

		void ShowMulchConfirmationModal(); // Flags: Native|Public|BlueprintCallable 0x7FF414E7AC40
		void SetIsInChoiceSelectionMode(bool InIsInChoiceSelectionMode); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E7AB60
		void SetCards(TArray& Cards); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414E7AA80
		void NotifyPanelDeactivated(); // Flags: Native|Protected|BlueprintCallable 0x7FF414E7A9A0
		void NotifyPanelActivated(); // Flags: Native|Protected|BlueprintCallable 0x7FF414E7A8C0
		void MarkDefaultItemsForMulch(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E7A7E0
		void HideMulchConfirmationModal(); // Flags: Native|Public|BlueprintCallable 0x7FF414E7A700
		void HandleContextMenuOpenChangedBP(bool bIsOpen); // Flags: Event|Public|BlueprintEvent 0x7FF414E7A620
		void HandleContextMenuOpenChanged(bool bIsOpen); // Flags: Final|Native|Private 0x7FF414E7A540
		bool GetIsInChoiceSelectionMode(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E7A460
		void FinalizeFavoriteStatus(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E7A380
		void CloseSummaryScreen(); // Flags: Event|Public|BlueprintEvent 0x7FF414E7A2A0
	};


	// Class SaveTheWorldUI.FortHeroLoadoutGadgetTileBase
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x300 - 0x2E0)
	class UFortHeroLoadoutGadgetTileBase : public UCommonUserWidget	
	{
	public:
		UCommonTextBlock Text_GadgetName; // 0x2E0(0x8)
		UCommonLazyImage Image_Icon; // 0x2E8(0x8)
		URichTextBlock RichText_Description; // 0x2F0(0x8)
		UFortGadgetItemDefinition GadgetToRepresent; // 0x2F8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortHeroLoadoutGadgetTileBase");
			return ret;
		}

		void SetGadgetToRepresent(UFortGadgetItemDefinition GadgetItemDefinition); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E7AE00
		void OnGadgetUpdated(bool bIsValidGadget); // Flags: Event|Public|BlueprintEvent 0x7FF414E7AD20
	};


	// Class SaveTheWorldUI.FortHeroLoadoutInGameScreenBase
	// Inherited from UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x70 (0x5A0 - 0x530)
	class UFortHeroLoadoutInGameScreenBase : public UCommonActivatablePanelLegacy	
	{
	public:
		TArray PerksDisplayData; // 0x530(0x10)
		UClass TileClass; // 0x540(0x8)
		UScrollBox ScrollBox_Content; // 0x548(0x8)
		UFortItemDetailsHostPanel ItemDetailsHostPanel_Header; // 0x550(0x8)
		UGridPanel GridPanel_Perks; // 0x558(0x8)
		UFortHeroLoadoutGadgetTileBase GadgetTile_Gadget1; // 0x560(0x8)
		UFortHeroLoadoutGadgetTileBase GadgetTile_Gadget2; // 0x568(0x8)
		TArray GadgetTiles; // 0x570(0x10)
		FDataTableRowHandle ShowStatsInputHandle; // 0x580(0x10)
		FDataTableRowHandle BackInputHandle; // 0x590(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortHeroLoadoutInGameScreenBase");
			return ret;
		}

		void ShowStats(bool& bPassThrough); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414E7B180
		void OnPerkWidgetAdded(UGridSlot GridSlot); // Flags: Event|Public|BlueprintEvent 0x7FF414E7B0A0
		UFortGadgetItemDefinition GetGadgetDefinitionBySlot(int32_t SlotIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E7AFC0
		void BackAction(bool& bPassThrough); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414E7AEE0
	};


	// Class SaveTheWorldUI.FortHeroLoadoutPerkTileBase
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x70 (0x350 - 0x2E0)
	class UFortHeroLoadoutPerkTileBase : public UCommonUserWidget	
	{
	public:
		TEnumAsByte BrushSize; // 0x2E0(0x1)
		bool bShowSummaryDescription; // 0x2E1(0x1)
		unsigned char UnknownData02_6[0x6]; // 0x2E2(0x6) UNKNOWN PROPERTY
		UCommonTextBlock Text_PerkName; // 0x2E8(0x8)
		URichTextBlock Text_Description; // 0x2F0(0x8)
		UFortLazyImage Image_PerkIcon; // 0x2F8(0x8)
		UHorizontalBox Hbox_PerkDetails; // 0x300(0x8)
		FText ActiveText; // 0x308(0x10)
		FText InactiveText; // 0x318(0x10)
		float InactiveOpacity; // 0x328(0x4)
		float ActiveOpacity; // 0x32C(0x4)
		UFortAbilityKit AbilityKit; // 0x330(0x8)
		unsigned char UnknownData03_7[0x18]; // 0x338(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortHeroLoadoutPerkTileBase");
			return ret;
		}

		void OnPerkInitialized(EFortHeroPerkDisplayType InPerkType, bool bActive, bool bShowWarning); // Flags: Event|Protected|BlueprintEvent 0x7FF414E7B260
	};


	// Class SaveTheWorldUI.FortAlterationModOptinScreenBase
	// Inherited from UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x18 (0x548 - 0x530)
	class UFortAlterationModOptinScreenBase : public UCommonActivatablePanelLegacy	
	{
	public:
		UFortItem ItemToOptin; // 0x530(0x8)
		unsigned char UnknownData01_7[0x10]; // 0x538(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortAlterationModOptinScreenBase");
			return ret;
		}

		void SetupItem(UFortItem Item); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E7B6C0
		void RequestClose(bool bCancelled); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E7B5E0
		void OnSetupItem(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E7B500
		void OnItemConversionComplete(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E7B420
		void ConvertItemAlterations(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E7B340
	};


	// Class SaveTheWorldUI.FortAlterationModScreenBase
	// Inherited from UFortActivatablePanel -> UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x60 (0x5C8 - 0x568)
	class UFortAlterationModScreenBase : public UFortActivatablePanel	
	{
	public:
		UFortAlterationsWidget AlterationsToEdit; // 0x568(0x8)
		UFortAlterationOptionsBase AlterationSlotOptions; // 0x570(0x8)
		UFortItemDetailsHostPanel ItemInspectionMainItemDetailsHostPanel; // 0x578(0x8)
		UFortItemDetailsHostPanel AlterationsExtraDetailsPanel; // 0x580(0x8)
		UClass AlterationModOptinScreenClass; // 0x588(0x8)
		FDataTableRowHandle BackInputAction; // 0x590(0x10)
		TWeakObjectPtr AlterableItem; // 0x5A0(0x8)
		UFortAlterationOption CurrentAlterationOptionInternal; // 0x5A8(0x8)
		unsigned char UnknownData01_7[0x18]; // 0x5B0(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortAlterationModScreenBase");
			return ret;
		}

		void SetItemForAlterationsModding(UFortAlterableItem InAlterableItem); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E7C060
		void RefreshItemAndAlterationsBP(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E7BF80
		void OnItemSlotChanged(bool SelectedSlot); // Flags: Event|Protected|BlueprintEvent 0x7FF414E7BEA0
		void OnAlterationOptionChanged(UFortAlterationOption CurrentAlterationOption); // Flags: Event|Protected|BlueprintEvent 0x7FF414E7BDC0
		void OnAlterationModificationSucess(int32_t ModifiedSlotIndex); // Flags: Event|Protected|BlueprintEvent 0x7FF414E7BCE0
		void OnAlterationModificationStarted(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E7BC00
		void OnAlterationModificationCompleted(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E7BB20
		void HandleBackAction(bool& bPassThrough); // Flags: Final|Native|Private|HasOutParms 0x7FF414E7BA40
		void ConfirmSelection(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E7B960
		void CancelSelection(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E7B880
		bool AreIngredientRequirementsMent(TArray& RequiredIngredients); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable 0x7FF414E7B7A0
	};


	// Class SaveTheWorldUI.FortItemInspectionScreen
	// Inherited from UFortActivatablePanelWithItemPreview -> UFortActivatablePanel -> UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xF8 (0x7A8 - 0x6B0)
	class UFortItemInspectionScreen : public UFortActivatablePanelWithItemPreview	
	{
	public:
		EFortItemInspectionMode CurrentInspectMode; // 0x6B0(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x6B1(0x3) UNKNOWN PROPERTY
		TWeakObjectPtr InspectedItem; // 0x6B4(0x8)
		bool UpgradeAllowed; // 0x6BC(0x1)
		bool EvolveAllowed; // 0x6BD(0x1)
		bool FavoriteAllowed; // 0x6BE(0x1)
		bool RarityUpgradingAllowed; // 0x6BF(0x1)
		bool IsPreviewing; // 0x6C0(0x1)
		bool bHasSeenRefundHelpPrompt; // 0x6C1(0x1)
		unsigned char UnknownData04_6[0x6]; // 0x6C2(0x6) UNKNOWN PROPERTY
		UFortItemInspectCycleWidget CycleWidget; // 0x6C8(0x8)
		FGameplayTagQuery InspectAnimationTag; // 0x6D0(0x48)
		UClass AlterationModOptinScreenClass; // 0x718(0x8)
		UClass AlterationModScreenClass; // 0x720(0x8)
		TWeakObjectPtr RefundDescriptionsDataTable; // 0x728(0x20)
		unsigned char UnknownData05_7[0x60]; // 0x748(0x60) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortItemInspectionScreen");
			return ret;
		}

		void SetItemToRepresent(UFortItem Item); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E7D020
		void SetInspectionMode(EFortItemInspectionMode NewInspectMode); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E7CF40
		void SetAttemptingConversion(bool bIsAttemptingConversion); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E7CE60
		void OpenItemInspect(UFortItem ItemToInspect, EFortItemInspectionMode Mode, bool ShouldAllowUpgrading, bool ShouldAllowEvolution, bool ShouldAllowFavorite, bool IsTemporaryItem, bool bAllowRarityUpgrading, int32_t QuantityOverride, UFortItemTileView TileViewWidget); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E7CD80
		bool IsItemSlottedInCollectionBook(UFortItem Item); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414E7CCA0
		void HandleItemToInspectDestroyedBP(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E7CBC0
		void HandleItemToInspectDestroyed(); // Flags: Final|Native|Protected 0x7FF414E7CAE0
		void HandleItemToInspectChangedBP(bool bWasFavoritedChanged); // Flags: Event|Protected|BlueprintEvent 0x7FF414E7CA00
		void HandleItemToInspectChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged); // Flags: Final|Native|Protected 0x7FF414E7C920
		void HandleIsPreviewingChanged(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E7C840
		void HandleDifferentItemToInspectSetBP(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E7C760
		void HandleDifferentInspectionModeSetBP(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E7C680
		UFortAccountItem GetRefundResultItem(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414E7C5A0
		FText GetRefundDescriptionText(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414E7C4C0
		int32_t GetItemQuantityOverride(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E7C3E0
		UFortItemInspectCycleWidget GetCycleWidget(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF414E7C300
		bool DoesItemHaveLegacyAlterations(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414E7C220
		void DoAlterationModification(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E7C140
	};


	// Class SaveTheWorldUI.FortItemInspectCycleWidget
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x58 (0x338 - 0x2E0)
	class UFortItemInspectCycleWidget : public UCommonUserWidget	
	{
	public:
		FMulticastInlineDelegate OnItemToRepresentChanged; // 0x2E0(0x10)
		TWeakObjectPtr ItemTileView; // 0x2F0(0x8)
		TWeakObjectPtr ItemToRepresent; // 0x2F8(0x8)
		FDataTableRowHandle PreviousItemActionRowHandle; // 0x300(0x10)
		FDataTableRowHandle NextItemActionRowHandle; // 0x310(0x10)
		unsigned char UnknownData01_7[0x18]; // 0x320(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortItemInspectCycleWidget");
			return ret;
		}

		void SetupActionHandlers(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E7D720
		void SetOwningItemInspectScreen(UFortItemInspectionScreen ItemInspect); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E7D640
		void SetItemToRepresent(UFortItem NewItemToRepresent); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E7D560
		void SelectPreviousItem(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E7D480
		void SelectNextItem(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E7D3A0
		void SelectItemWithOffset(int32_t Offset); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E7D2C0
		void OnItemCycled(UFortItem OldItem, UFortItem NewItem, int32_t OffsetFromPreviousItem); // Flags: Event|Protected|BlueprintEvent 0x7FF414E7D1E0
		UFortItem GetItemWithOffset_BP(int32_t IndexOffset); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E7D100
	};


	// Class SaveTheWorldUI.FortAlterationOption
	// Inherited from UCommonButtonLegacy -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x40 (0x1420 - 0x13E0)
	class UFortAlterationOption : public UCommonButtonLegacy	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x13E0(0x8) UNKNOWN PROPERTY
		FAlterationOption AlterationOption; // 0x13E8(0x30)
		unsigned char UnknownData03_7[0x8]; // 0x1418(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortAlterationOption");
			return ret;
		}

		void Setup(FAlterationOption& InAlterationOption, EFortAlterationOptionType InAlterationOptionType); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414E7DD40
		void OnSetup(); // Flags: Event|Public|BlueprintEvent 0x7FF414E7DC60
		TArray GetRequiredIngredients(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E7DB80
		float GetNextPipCount(float MaxPipCount); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E7DAA0
		float GetCurrentPipCount(float MaxPipCount); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E7D9C0
		EFortAlterationOptionType GetAlterationOptionType(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E7D8E0
		UFortAlterationItemDefinition GetAlterationDefinition(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E7D800
	};


	// Class SaveTheWorldUI.FortAlterationOptionsBase
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xA0 (0x380 - 0x2E0)
	class UFortAlterationOptionsBase : public UCommonUserWidget	
	{
	public:
		unsigned char UnknownData04_3[0x10]; // 0x2E0(0x10) UNKNOWN PROPERTY
		UClass AlterationOptionClass; // 0x2F0(0x8)
		UCommonButtonGroupLegacy AlterationOptionButtons; // 0x2F8(0x8)
		unsigned char UnknownData05_6[0x20]; // 0x300(0x20) UNKNOWN PROPERTY
		UFortAlterableItem Item; // 0x320(0x8)
		int32_t SlotIndex; // 0x328(0x4)
		bool bUpgradeOptionExists; // 0x32C(0x1)
		unsigned char UnknownData06_6[0x3]; // 0x32D(0x3) UNKNOWN PROPERTY
		FAlterationOption UpgradeOption; // 0x330(0x30)
		TArray RespecOptions; // 0x360(0x10)
		unsigned char UnknownData07_7[0x10]; // 0x370(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortAlterationOptionsBase");
			return ret;
		}

		void ProcessAlterationOptions(bool bIntroAlterations); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E7E360
		void OnItemChanged(bool bIntroAlterations); // Flags: Event|Public|BlueprintEvent 0x7FF414E7E280
		void OnGenerateOption(EFortAlterationOptionType OptionType, UFortAlterationOption OptionWidget); // Flags: Event|Public|BlueprintEvent 0x7FF414E7E1A0
		bool IsValidAlterationSlot(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E7E0C0
		void HandleAlterationsOptionSelected(UCommonButtonLegacy AlterationOptionButton, int32_t GroupIndex); // Flags: Final|Native|Public 0x7FF414E7DFE0
		void HandleAlterationsOptionHovered(UCommonButtonLegacy AlterationOptionButton, int32_t GroupIndex); // Flags: Final|Native|Public 0x7FF414E7DF00
		bool DoAlterationOptionsExist(EFortAlterationOptionType OptionType); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E7DE20
	};


	// Class SaveTheWorldUI.FortMissionActivationInfoSTW
	// Inherited from UObject
	// Size: 0x150 (0x178 - 0x28)
	class UFortMissionActivationInfoSTW : public UObject	
	{
	public:
		bool bIsMultiplayer; // 0x28(0x1)
		unsigned char UnknownData02_6[0x77]; // 0x29(0x77) UNKNOWN PROPERTY
		AFortPlayerController FortPC; // 0xA0(0x8)
		AFortGameStateZone GameStateZone; // 0xA8(0x8)
		UCurveFloat DifficultyIncreaseBluGloCurve; // 0xB0(0x8)
		unsigned char UnknownData03_7[0xC0]; // 0xB8(0xC0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortMissionActivationInfoSTW");
			return ret;
		}

		FText TimeSecondsToText(float InSeconds); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E7FB00
		void SubmitVote(EFortVoteType VoteType, bool bApprove); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E7FA20
		void RequestVote(EFortVoteType VoteType, float VoteDuration, float FailedVoteLockOutDuration, EFortVoteArbitratorType ArbitratorType); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E7F940
		bool IsVoteLocked(EFortVoteType VoteType); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E7F860
		bool IsVoteActive(EFortVoteType VoteType); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E7F780
		bool IsPlayerVoteInstigator(EFortVoteType VoteType); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E7F6A0
		bool IsAnyVoteActive(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E7F5C0
		bool HasPlayerVoted(EFortVoteType VoteType); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E7F4E0
		void HandleTeamMemberRemoved(int32_t RemovedIndex); // Flags: Final|Native|Private 0x7FF414E7F400
		void HandleTeamMemberAdded(FFortTeamMemberInfo NewInfo); // Flags: Final|Native|Private 0x7FF414E7F320
		void HandleGameplayVoteUpdated(EFortVoteType VoteType, EFortVoteStatus VoteStatus, int32_t VoteResult, TArray& Voters); // Flags: Final|Native|Private|HasOutParms 0x7FF414E7F240
		float GetVoteTimeRemaining(EFortVoteType VoteType); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E7F160
		TArray GetVoters(EFortVoteType VoteType); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E7F080
		void GetVoteCounts(EFortVoteType VoteType, int32_t& OutYesVoteCount, int32_t& OutNoVoteCount); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414E7EFA0
		int32_t GetStartObjectiveBluGloRequirement(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E7EEC0
		UFortMissionInfo GetPrimaryMissionInfo(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E7EDE0
		AFortMission GetPrimaryMission(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E7ED00
		EFortVoteType GetMissionVoteType(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E7EC20
		float GetMissionObjectiveTimeRemaining(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E7EB40
		FText GetLockoutTimeRemaining(EFortVoteType VoteType); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E7EA60
		FUniqueNetIdRepl GetInstigatorId(EFortVoteType VoteType); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E7E980
		int32_t GetIncreaseDifficultyBluGloRequirement(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E7E8A0
		void GetDeltaRewards(int32_t BaseDifficultyIncreaseTier, int32_t ComparedDifficultyIncreaseTier, TArray& DeltaRewards); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414E7E7C0
		int32_t GetAvailableBluGloCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E7E6E0
		EFortVoteArbitratorType GetArbitratorType(EFortVoteType VoteType); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E7E600
		bool DoesPrimaryMissionContainTags(FGameplayTagContainer& Tags); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414E7E520
		bool CanRequestVote(EFortVoteType VoteType); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E7E440
	};


	// Class SaveTheWorldUI.FortMissionActivationWidgetSTWPanel
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x28 (0x308 - 0x2E0)
	class UFortMissionActivationWidgetSTWPanel : public UCommonUserWidget	
	{
	public:
		UFortMissionActivationInfoSTW InfoObject; // 0x2E0(0x8)
		unsigned char UnknownData01_7[0x20]; // 0x2E8(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortMissionActivationWidgetSTWPanel");
			return ret;
		}

		void SetInfoObject(UFortMissionActivationInfoSTW NewInfoObject); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E80040
		void OnVoteUpdatedBP(EFortVoteType VoteType); // Flags: Event|Protected|BlueprintEvent 0x7FF414E7FF60
		void OnVoteLockoutChangedBP(EFortVoteType VoteType, bool bIsLocked); // Flags: Event|Protected|BlueprintEvent 0x7FF414E7FE80
		void OnMultiplayerChangedBP(bool bIsMultiplayer); // Flags: Event|Protected|BlueprintEvent 0x7FF414E7FDA0
		void OnActiveVoteChangedBP(EFortVoteType VoteType, bool bIsVoteActive, int32_t VoteResult); // Flags: Event|Protected|BlueprintEvent 0x7FF414E7FCC0
		void InfoObjectUpdated(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E7FBE0
	};


	// Class SaveTheWorldUI.FortMissionActivationWidgetSTW
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x50 (0x448 - 0x3F8)
	class UFortMissionActivationWidgetSTW : public UCommonActivatableWidget	
	{
	public:
		UFortMissionActivationInfoSTW InfoObject; // 0x3F8(0x8)
		FGameplayTagContainer ReadyUpObjectiveHandle; // 0x400(0x20)
		UCurveFloat DifficultyIncreaseBluGloCurve; // 0x420(0x8)
		unsigned char UnknownData01_7[0x20]; // 0x428(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortMissionActivationWidgetSTW");
			return ret;
		}

		void RequestStartObjectiveState(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E80740
		void RequestDifficultyIncreaseState(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E80660
		void RequestDefaultState(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E80580
		void OnVoteLockoutChangedBP(EFortVoteType VoteType, bool bIsLocked); // Flags: Event|Protected|BlueprintEvent 0x7FF414E804A0
		void OnStateUpdated(EFortMissionActivationWidgetSTWState ActiveState, EFortMissionActivationWidgetSTWState PreviousState); // Flags: Event|Protected|BlueprintEvent 0x7FF414E803C0
		void OnMultiplayerChangedBP(bool bIsMultiplayer); // Flags: Event|Protected|BlueprintEvent 0x7FF414E802E0
		void OnActiveVoteChangedBP(EFortVoteType VoteType, bool bIsVoteActive, int32_t VoteResult); // Flags: Event|Protected|BlueprintEvent 0x7FF414E80200
		EFortMissionActivationWidgetSTWState GetCurrentState(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414E80120
	};


	// Class SaveTheWorldUI.FortOutpostScreen
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x3F8 - 0x3F8)
	class UFortOutpostScreen : public UCommonActivatableWidget	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortOutpostScreen");
			return ret;
		}

		void SetInputReflectorBoxVisibility(bool bShow); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E80820
	};


	// Class SaveTheWorldUI.FortCampaignPlayFlow
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x3F8 - 0x3F8)
	class UFortCampaignPlayFlow : public UCommonActivatableWidget	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortCampaignPlayFlow");
			return ret;
		}

		void TryBroadcastPhoenixDisplayVisibilityChange(bool bCanShow); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E80900
	};


	// Class SaveTheWorldUI.FortJournalQuestDetails
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x2E8 - 0x2E0)
	class UFortJournalQuestDetails : public UCommonUserWidget	
	{
	public:
		UFortQuestItem CurrentQuest; // 0x2E0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortJournalQuestDetails");
			return ret;
		}

		void SetCurrentQuest(UFortQuestItem InCurrentQuest); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E812A0
		void RegisterEndSpokenDialogEvent(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E811C0
		void OnEndSpokenDialog(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E810E0
		void HandleCurrentQuestChangedBP(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E81000
		void GetVisibleObjectives(TArray& VisibleObjectives); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414E80F20
		void GetRewards(TArray& OutRewards, TArray& OutSelectableRewards); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414E80E40
		void GetFutureObjectives(TArray& FutureObjectives); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414E80D60
		EFortTheaterMapTileType GetActiveMissionTileType(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E80C80
		bool CanPlayQuest(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E80BA0
		bool CanPartyLeaderPlayQuest(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E80AC0
		bool CanGotoQuest(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E809E0
	};


	// Class SaveTheWorldUI.FortJournalQuestProgressBar
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x2F0 - 0x2E0)
	class UFortJournalQuestProgressBar : public UCommonUserWidget	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x2E0(0x8) UNKNOWN PROPERTY
		TWeakObjectPtr QuestObjectiveInfo; // 0x2E8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortJournalQuestProgressBar");
			return ret;
		}

		void GetProgressDetails(FText& OutNumerator, FText& OutDenominator, float& OutFraction); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable 0x7FF414E81380
	};


	// Class SaveTheWorldUI.FortLayoutQuestNode
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x28 (0x308 - 0x2E0)
	class UFortLayoutQuestNode : public UCommonUserWidget	
	{
	public:
		UFortQuestMapQuestTile QuestTile; // 0x2E0(0x8)
		int32_t QuestNodeIndex; // 0x2E8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x2EC(0x4) UNKNOWN PROPERTY
		FFortQuestMapNode QuestMapNode; // 0x2F0(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortLayoutQuestNode");
			return ret;
		}
	};


	// Class SaveTheWorldUI.FortLayoutQuestNode_Legacy
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x28 (0x308 - 0x2E0)
	class UFortLayoutQuestNode_Legacy : public UCommonUserWidget	
	{
	public:
		UFortQuestMapQuestTile_Legacy QuestTile; // 0x2E0(0x8)
		int32_t QuestNodeIndex; // 0x2E8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x2EC(0x4) UNKNOWN PROPERTY
		FFortQuestMapNode QuestMapNode; // 0x2F0(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortLayoutQuestNode_Legacy");
			return ret;
		}
	};


	// Class SaveTheWorldUI.FortProgressArrowButton
	// Inherited from UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x40 (0x13D0 - 0x1390)
	class UFortProgressArrowButton : public UCommonButtonBase	
	{
	public:
		FSlateColor ArrowColor; // 0x1390(0x14)
		FSlateColor HoverColor; // 0x13A4(0x14)
		FSlateColor ShadowColor; // 0x13B8(0x14)
		unsigned char UnknownData01_7[0x4]; // 0x13CC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortProgressArrowButton");
			return ret;
		}

		void UpdateArrowColor(FSlateColor Color, FSlateColor HoverColor); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E81700
		void OnShadowColorSet(); // Flags: Event|Public|BlueprintEvent 0x7FF414E81620
		void OnIsInteractiveSet(bool bIsInteractive); // Flags: Event|Public|BlueprintEvent 0x7FF414E81540
		void OnArrowColorSet(); // Flags: Event|Public|BlueprintEvent 0x7FF414E81460
	};


	// Class SaveTheWorldUI.FortProgressArrowButton_Legacy
	// Inherited from UCommonButtonLegacy -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x40 (0x1420 - 0x13E0)
	class UFortProgressArrowButton_Legacy : public UCommonButtonLegacy	
	{
	public:
		FSlateColor ArrowColor; // 0x13E0(0x14)
		FSlateColor HoverColor; // 0x13F4(0x14)
		FSlateColor ShadowColor; // 0x1408(0x14)
		unsigned char UnknownData01_7[0x4]; // 0x141C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortProgressArrowButton_Legacy");
			return ret;
		}

		void UpdateArrowColor(FSlateColor Color, FSlateColor HoverColor); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E81A80
		void OnShadowColorSet(); // Flags: Event|Public|BlueprintEvent 0x7FF414E819A0
		void OnIsInteractiveSet(bool bIsInteractive); // Flags: Event|Public|BlueprintEvent 0x7FF414E818C0
		void OnArrowColorSet(); // Flags: Event|Public|BlueprintEvent 0x7FF414E817E0
	};


	// Class SaveTheWorldUI.FortQuestExpiresWidget
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x2F0 - 0x2E0)
	class UFortQuestExpiresWidget : public UCommonUserWidget	
	{
	public:
		TWeakObjectPtr Item; // 0x2E0(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x2E8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortQuestExpiresWidget");
			return ret;
		}

		void SetData(UFortQuestItem InItem); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent 0x7FF414E81C40
		void OnQuestExpirationUpdated(); // Flags: Native|Event|Protected|BlueprintEvent 0x7FF414E81B60
	};


	// Class SaveTheWorldUI.FortQuestMapCosmeticListWidget
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x2F0 - 0x2E0)
	class UFortQuestMapCosmeticListWidget : public UCommonUserWidget	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0x2E0(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortQuestMapCosmeticListWidget");
			return ret;
		}

		void UpdateCosmeticListDisplay(); // Flags: Event|Public|BlueprintEvent 0x7FF414E81E00
		TArray GetDisplayItemDefs(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E81D20
	};


	// Class SaveTheWorldUI.FortQuestMapDetailsPanelBase
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x18 (0x2F8 - 0x2E0)
	class UFortQuestMapDetailsPanelBase : public UCommonUserWidget	
	{
	public:
		UClass QuestConversationClass; // 0x2E0(0x8)
		float QuestUpdateDelayTime; // 0x2E8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x2EC(0x4) UNKNOWN PROPERTY
		FTimerHandle QuestUpdateTimerHandle; // 0x2F0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortQuestMapDetailsPanelBase");
			return ret;
		}

		void SetScrollWidget(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E820A0
		void SetQuestToDisplay(UFortQuestItemDefinition QuestDef); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E81FC0
		void HandleQuestsUpdatedInternal(); // Flags: Final|Native|Private 0x7FF414E81EE0
	};


	// Class SaveTheWorldUI.FortQuestMapDetailsPanel
	// Inherited from UFortQuestMapDetailsPanelBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xB0 (0x3A8 - 0x2F8)
	class UFortQuestMapDetailsPanel : public UFortQuestMapDetailsPanelBase	
	{
	public:
		FDataTableRowHandle PlayButtonTriggeringAction; // 0x2F8(0x10)
		TArray PriorityActivatableWidgetClassList; // 0x308(0x10)
		UClass CurrentQuestBorder; // 0x318(0x8)
		UClass CompletedQuestBorder; // 0x320(0x8)
		UFortJournalQuestDetails Panel_JournalDetails; // 0x328(0x8)
		UCommonTextBlock Text_QuestTitle; // 0x330(0x8)
		UCommonTextBlock Text_QuestDescription; // 0x338(0x8)
		UCommonTextBlock Text_Header; // 0x340(0x8)
		UCommonTextBlock Text_NotOwnedHeader; // 0x348(0x8)
		UCommonTextBlock Text_InactiveQuestName; // 0x350(0x8)
		UImage Image_QuestIcon; // 0x358(0x8)
		UCommonListView List_Tasks; // 0x360(0x8)
		UCommonBorder Border_Header; // 0x368(0x8)
		UWidgetSwitcher Switcher_Body; // 0x370(0x8)
		UFortRewardInfoWidget Widget_FutureQuestRewardInfo; // 0x378(0x8)
		UScrollBox ScrollBox_Quest; // 0x380(0x8)
		UScrollBox ScrollBox_NoQuest; // 0x388(0x8)
		TArray VisibleObjectives; // 0x390(0x10)
		UFortQuestItem CurrentQuestItem; // 0x3A0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortQuestMapDetailsPanel");
			return ret;
		}
	};


	// Class SaveTheWorldUI.FortQuestMapDetailsPanel_Legacy
	// Inherited from UFortQuestMapDetailsPanelBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xB0 (0x3A8 - 0x2F8)
	class UFortQuestMapDetailsPanel_Legacy : public UFortQuestMapDetailsPanelBase	
	{
	public:
		FDataTableRowHandle PlayButtonTriggeringAction; // 0x2F8(0x10)
		TArray PriorityActivatablePanelClassList; // 0x308(0x10)
		UClass CurrentQuestBorder; // 0x318(0x8)
		UClass CompletedQuestBorder; // 0x320(0x8)
		UFortJournalQuestDetails Panel_JournalDetails; // 0x328(0x8)
		UCommonTextBlock Text_QuestTitle; // 0x330(0x8)
		UCommonTextBlock Text_QuestDescription; // 0x338(0x8)
		UCommonTextBlock Text_Header; // 0x340(0x8)
		UCommonTextBlock Text_NotOwnedHeader; // 0x348(0x8)
		UCommonTextBlock Text_InactiveQuestName; // 0x350(0x8)
		UImage Image_QuestIcon; // 0x358(0x8)
		UCommonListView List_Tasks; // 0x360(0x8)
		UCommonBorder Border_Header; // 0x368(0x8)
		UWidgetSwitcher Switcher_Body; // 0x370(0x8)
		UFortRewardInfoWidget_Legacy Widget_FutureQuestRewardInfo; // 0x378(0x8)
		UScrollBox ScrollBox_Quest; // 0x380(0x8)
		UScrollBox ScrollBox_NoQuest; // 0x388(0x8)
		TArray VisibleObjectives; // 0x390(0x10)
		UFortQuestItem CurrentQuestItem; // 0x3A0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortQuestMapDetailsPanel_Legacy");
			return ret;
		}
	};


	// Class SaveTheWorldUI.FortQuestMapEventCallout
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x138 (0x530 - 0x3F8)
	class UFortQuestMapEventCallout : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData02_3[0x48]; // 0x3F8(0x48) UNKNOWN PROPERTY
		UFortBangWrapper_NUI BangWrapper_GoButton; // 0x440(0x8)
		UFortProgressArrowButton Button_LeftNav; // 0x448(0x8)
		UFortProgressArrowButton Button_RightNav; // 0x450(0x8)
		UCommonButtonBase Button_SwitchMode; // 0x458(0x8)
		UFortQuestMapNewBangWrapper BangWrapper_Arrow; // 0x460(0x8)
		UFortQuestMapEventSequence Sequence_EventProgress; // 0x468(0x8)
		UHorizontalBox HorizontalBox_NavButtons; // 0x470(0x8)
		UCommonTextBlock Text_Header; // 0x478(0x8)
		UCommonTextBlock Text_Body; // 0x480(0x8)
		UImage Image_Callout; // 0x488(0x8)
		UFortBangWrapper_NUI BangWrapper_UnHover; // 0x490(0x8)
		USoundBase DefaultSound; // 0x498(0x8)
		UFortQuestItemDefinition DefaultRequiredCompletedQuest; // 0x4A0(0x8)
		USoundBase OverrideSound; // 0x4A8(0x8)
		UAudioComponent SoundLoop; // 0x4B0(0x8)
		UFortQuestMapData QuestMapData; // 0x4B8(0x8)
		unsigned char UnknownData03_7[0x70]; // 0x4C0(0x70) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortQuestMapEventCallout");
			return ret;
		}

		void UpdateGoButtonBangState(bool bClear); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E83140
		void UpdateCalloutData(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E83060
		void UpdateActiveEvents(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E82F80
		void SetIsFaded(bool Faded); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E82EA0
		void SetIsExpanded(bool Expanded); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E82DC0
		void ResetCallout(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E82CE0
		void PlayFadeOut(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E82C00
		void PlayFadeIn(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E82B20
		void OnResetCallout(); // Flags: Event|Public|BlueprintEvent 0x7FF414E82A40
		void OnPlayFadeAnimation(bool bIsFadeOut); // Flags: Event|Public|BlueprintEvent 0x7FF414E82960
		void OnEventIndexChanged(); // Flags: Event|Public|BlueprintEvent 0x7FF414E82880
		void OnDeactivatePlayAnimation(); // Flags: Event|Public|BlueprintEvent 0x7FF414E827A0
		void OnActivatePlayAnimation(); // Flags: Event|Public|BlueprintEvent 0x7FF414E826C0
		bool IsCurrentEventUnlocked(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E825E0
		UFortQuestItemDefinition GetRequiredQuestForCurrentEvent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E82500
		bool GetIsFaded(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E82420
		bool GetIsExpanded(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E82340
		int32_t GetEventCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E82260
		void DeactivateCallout(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E82180
	};


	// Class SaveTheWorldUI.FortQuestMapEventCallout_Legacy
	// Inherited from UFortActivatablePanel -> UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x138 (0x6A0 - 0x568)
	class UFortQuestMapEventCallout_Legacy : public UFortActivatablePanel	
	{
	public:
		unsigned char UnknownData02_3[0x48]; // 0x568(0x48) UNKNOWN PROPERTY
		UFortBangWrapper_NUI BangWrapper_GoButton; // 0x5B0(0x8)
		UFortProgressArrowButton_Legacy Button_LeftNav; // 0x5B8(0x8)
		UFortProgressArrowButton_Legacy Button_RightNav; // 0x5C0(0x8)
		UCommonButtonLegacy Button_SwitchMode; // 0x5C8(0x8)
		UFortQuestMapNewBangWrapper_Legacy BangWrapper_Arrow; // 0x5D0(0x8)
		UFortQuestMapEventSequence Sequence_EventProgress; // 0x5D8(0x8)
		UHorizontalBox HorizontalBox_NavButtons; // 0x5E0(0x8)
		UCommonTextBlock Text_Header; // 0x5E8(0x8)
		UCommonTextBlock Text_Body; // 0x5F0(0x8)
		UImage Image_Callout; // 0x5F8(0x8)
		UFortBangWrapper_NUI BangWrapper_UnHover; // 0x600(0x8)
		USoundBase DefaultSound; // 0x608(0x8)
		UFortQuestItemDefinition DefaultRequiredCompletedQuest; // 0x610(0x8)
		USoundBase OverrideSound; // 0x618(0x8)
		UAudioComponent SoundLoop; // 0x620(0x8)
		UFortQuestMapData QuestMapData; // 0x628(0x8)
		unsigned char UnknownData03_7[0x70]; // 0x630(0x70) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortQuestMapEventCallout_Legacy");
			return ret;
		}

		void UpdateGoButtonBangState(bool bClear); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E841E0
		void UpdateCalloutData(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E84100
		void UpdateActiveEvents(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E84020
		void SetIsFaded(bool Faded); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E83F40
		void SetIsExpanded(bool Expanded); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E83E60
		void ResetCallout(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E83D80
		void PlayFadeOut(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E83CA0
		void PlayFadeIn(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E83BC0
		void OnResetCallout(); // Flags: Event|Public|BlueprintEvent 0x7FF414E83AE0
		void OnPlayFadeAnimation(bool bIsFadeOut); // Flags: Event|Public|BlueprintEvent 0x7FF414E83A00
		void OnEventIndexChanged(); // Flags: Event|Public|BlueprintEvent 0x7FF414E83920
		void OnDeactivatePlayAnimation(); // Flags: Event|Public|BlueprintEvent 0x7FF414E83840
		void OnActivatePlayAnimation(); // Flags: Event|Public|BlueprintEvent 0x7FF414E83760
		bool IsCurrentEventUnlocked(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E83680
		UFortQuestItemDefinition GetRequiredQuestForCurrentEvent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E835A0
		bool GetIsFaded(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E834C0
		bool GetIsExpanded(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E833E0
		int32_t GetEventCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E83300
		void DeactivateCallout(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E83220
	};


	// Class SaveTheWorldUI.FortQuestMapEventDetailsPanel
	// Inherited from UFortQuestMapDetailsPanelBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x98 (0x390 - 0x2F8)
	class UFortQuestMapEventDetailsPanel : public UFortQuestMapDetailsPanelBase	
	{
	public:
		UClass CurrentQuestBorder; // 0x2F8(0x8)
		UClass CompletedQuestBorder; // 0x300(0x8)
		UClass FutureQuestBorder; // 0x308(0x8)
		UVerticalBox VBox_QuestContainer; // 0x310(0x8)
		UVerticalBox VBox_CompletedQuestContainer; // 0x318(0x8)
		UCommonAnimatedSwitcher Switcher_Quests; // 0x320(0x8)
		UCommonBorder Border_NextQuest; // 0x328(0x8)
		UCommonTextBlock Text_QuestName; // 0x330(0x8)
		UCommonTextBlock Text_QuestDescription; // 0x338(0x8)
		UCommonTextBlock Text_Title; // 0x340(0x8)
		UCommonListView List_Tasks; // 0x348(0x8)
		UImage Image_QuestIcon; // 0x350(0x8)
		UScrollBox ScrollBox_SideBar; // 0x358(0x8)
		UDataTable EventQuestTable; // 0x360(0x8)
		UClass SideBarEntryClass; // 0x368(0x8)
		UFortQuestItemDefinition UnlockEventQuestDefinition; // 0x370(0x8)
		UFortQuestItemDefinition CurrentQuestDef; // 0x378(0x8)
		TArray VisibleObjectives; // 0x380(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortQuestMapEventDetailsPanel");
			return ret;
		}
	};


	// Class SaveTheWorldUI.FortQuestMapEventDetailsPanel_Legacy
	// Inherited from UFortQuestMapDetailsPanelBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x98 (0x390 - 0x2F8)
	class UFortQuestMapEventDetailsPanel_Legacy : public UFortQuestMapDetailsPanelBase	
	{
	public:
		UClass CurrentQuestBorder; // 0x2F8(0x8)
		UClass CompletedQuestBorder; // 0x300(0x8)
		UClass FutureQuestBorder; // 0x308(0x8)
		UVerticalBox VBox_QuestContainer; // 0x310(0x8)
		UVerticalBox VBox_CompletedQuestContainer; // 0x318(0x8)
		UCommonWidgetSwitcherLegacy Switcher_Quests; // 0x320(0x8)
		UCommonBorder Border_NextQuest; // 0x328(0x8)
		UCommonTextBlock Text_QuestName; // 0x330(0x8)
		UCommonTextBlock Text_QuestDescription; // 0x338(0x8)
		UCommonTextBlock Text_Title; // 0x340(0x8)
		UCommonListView List_Tasks; // 0x348(0x8)
		UImage Image_QuestIcon; // 0x350(0x8)
		UScrollBox ScrollBox_SideBar; // 0x358(0x8)
		UDataTable EventQuestTable; // 0x360(0x8)
		UClass SideBarEntryClass; // 0x368(0x8)
		UFortQuestItemDefinition UnlockEventQuestDefinition; // 0x370(0x8)
		UFortQuestItemDefinition CurrentQuestDef; // 0x378(0x8)
		TArray VisibleObjectives; // 0x380(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortQuestMapEventDetailsPanel_Legacy");
			return ret;
		}
	};


	// Class SaveTheWorldUI.FortQuestMapEventDot
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x2E8 - 0x2E0)
	class UFortQuestMapEventDot : public UCommonUserWidget	
	{
	public:
		UImage Image_ActiveDot; // 0x2E0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortQuestMapEventDot");
			return ret;
		}
	};


	// Class SaveTheWorldUI.FortQuestMapEventSequence
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x18 (0x2F8 - 0x2E0)
	class UFortQuestMapEventSequence : public UCommonUserWidget	
	{
	public:
		UHorizontalBox HorizontalBox_DotBox; // 0x2E0(0x8)
		UClass DotWidgetClass; // 0x2E8(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x2F0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortQuestMapEventSequence");
			return ret;
		}
	};


	// Class SaveTheWorldUI.FortQuestMapEventSideEntry
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x60 (0x340 - 0x2E0)
	class UFortQuestMapEventSideEntry : public UCommonUserWidget	
	{
	public:
		UCommonAnimatedSwitcher Switcher_Rewards; // 0x2E0(0x8)
		UCommonListView List_SideTasks; // 0x2E8(0x8)
		UCommonTextBlock Text_SideQuestTitle; // 0x2F0(0x8)
		UImage Image_Arrow; // 0x2F8(0x8)
		unsigned char UnknownData01_7[0x40]; // 0x300(0x40) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortQuestMapEventSideEntry");
			return ret;
		}
	};


	// Class SaveTheWorldUI.FortQuestMapEventSideEntry_Legacy
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x70 (0x350 - 0x2E0)
	class UFortQuestMapEventSideEntry_Legacy : public UCommonUserWidget	
	{
	public:
		UCommonWidgetSwitcherLegacy Switcher_Rewards; // 0x2E0(0x8)
		UCommonListView List_SideTasks; // 0x2E8(0x8)
		UCommonTextBlock Text_SideQuestTitle; // 0x2F0(0x8)
		UImage Image_Arrow; // 0x2F8(0x8)
		UImage Image_QuestComplete; // 0x300(0x8)
		FMargin RewardPadding; // 0x308(0x10)
		UFortQuestItemDefinition CurrentQuestItemDef; // 0x318(0x8)
		UFortQuestItem CurrentQuestItem; // 0x320(0x8)
		TArray RewardSwitchers; // 0x328(0x10)
		FTimerHandle RewardAnimationTimer; // 0x338(0x8)
		TArray SideQuestObjectives; // 0x340(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortQuestMapEventSideEntry_Legacy");
			return ret;
		}
	};


	// Class SaveTheWorldUI.FortQuestMapNewBangWrapper
	// Inherited from UFortBangWrapper_NUI -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x308 - 0x2F8)
	class UFortQuestMapNewBangWrapper : public UFortBangWrapper_NUI	
	{
	public:
		UCommonAnimatedSwitcher Switcher_Bangs; // 0x2F8(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x300(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortQuestMapNewBangWrapper");
			return ret;
		}
	};


	// Class SaveTheWorldUI.FortQuestMapNewBangWrapper_Legacy
	// Inherited from UFortBangWrapper_NUI -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x308 - 0x2F8)
	class UFortQuestMapNewBangWrapper_Legacy : public UFortBangWrapper_NUI	
	{
	public:
		UCommonWidgetSwitcherLegacy Switcher_Bangs; // 0x2F8(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x300(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortQuestMapNewBangWrapper_Legacy");
			return ret;
		}
	};


	// Class SaveTheWorldUI.FortQuestMapNodeLayout
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x68 (0x320 - 0x2B8)
	class UFortQuestMapNodeLayout : public UUserWidget	
	{
	public:
		UPanelWidget Panel_NodeLayout; // 0x2B8(0x8)
		UCommonButtonBase ButtonPrevious; // 0x2C0(0x8)
		UCommonButtonBase ButtonNext; // 0x2C8(0x8)
		USizeBox StartArrow; // 0x2D0(0x8)
		USizeBox EndArrow; // 0x2D8(0x8)
		UCommonButtonGroupBase QuestButtonGroup; // 0x2E0(0x8)
		UFortQuestMapScreen ParentScreen; // 0x2E8(0x8)
		unsigned char UnknownData01_7[0x30]; // 0x2F0(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortQuestMapNodeLayout");
			return ret;
		}

		void HandleQuestIndexSelectionModelIndexChanged(bool bUpdateButtonSelection); // Flags: Final|Native|Private 0x7FF414E843A0
		void HandleQuestButtonSelected(UCommonButtonBase SelectedQuestButton, int32_t ButtonIndex); // Flags: Final|Native|Private 0x7FF414E842C0
	};


	// Class SaveTheWorldUI.FortQuestMapNodeLayout_Legacy
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x68 (0x320 - 0x2B8)
	class UFortQuestMapNodeLayout_Legacy : public UUserWidget	
	{
	public:
		UPanelWidget Panel_NodeLayout; // 0x2B8(0x8)
		UCommonButtonLegacy ButtonPrevious; // 0x2C0(0x8)
		UCommonButtonLegacy ButtonNext; // 0x2C8(0x8)
		USizeBox StartArrow; // 0x2D0(0x8)
		USizeBox EndArrow; // 0x2D8(0x8)
		UCommonButtonGroupLegacy QuestButtonGroup; // 0x2E0(0x8)
		UFortQuestMapScreen_Legacy ParentScreen; // 0x2E8(0x8)
		unsigned char UnknownData01_7[0x30]; // 0x2F0(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortQuestMapNodeLayout_Legacy");
			return ret;
		}

		void HandleQuestIndexSelectionModelIndexChanged(bool bUpdateButtonSelection); // Flags: Final|Native|Private 0x7FF414E84560
		void HandleQuestButtonSelected(UCommonButtonLegacy SelectedQuestButton, int32_t ButtonIndex); // Flags: Final|Native|Private 0x7FF414E84480
	};


	// Class SaveTheWorldUI.FortQuestMapQuestTile
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x300 - 0x2E0)
	class UFortQuestMapQuestTile : public UCommonUserWidget	
	{
	public:
		UCommonButtonBase QuestButton; // 0x2E0(0x8)
		FFortQuestMapNode QuestNodeData; // 0x2E8(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortQuestMapQuestTile");
			return ret;
		}

		void HandleSelectedChange(bool Selected); // Flags: Event|Public|BlueprintEvent 0x7FF414E84800
		void HandleQuestDataChangedBP(); // Flags: Event|Public|BlueprintEvent 0x7FF414E84720
		void GetQuestNodeData(UFortQuestItemDefinition& QuestItemDefinition, FFortQuestMapNode& NodeData); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414E84640
	};


	// Class SaveTheWorldUI.FortQuestMapQuestTile_Legacy
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x300 - 0x2E0)
	class UFortQuestMapQuestTile_Legacy : public UCommonUserWidget	
	{
	public:
		UCommonButtonLegacy QuestButton; // 0x2E0(0x8)
		FFortQuestMapNode QuestNodeData; // 0x2E8(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortQuestMapQuestTile_Legacy");
			return ret;
		}

		void HandleSelectedChange(bool Selected); // Flags: Event|Public|BlueprintEvent 0x7FF414E84AA0
		void HandleQuestDataChangedBP(); // Flags: Event|Public|BlueprintEvent 0x7FF414E849C0
		void GetQuestNodeData(UFortQuestItemDefinition& QuestItemDefinition, FFortQuestMapNode& NodeData); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414E848E0
	};


	// Class SaveTheWorldUI.FortQuestMapScreen
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xB8 (0x4B0 - 0x3F8)
	class UFortQuestMapScreen : public UCommonActivatableWidget	
	{
	public:
		UFortQuestMapDetailsPanelBase CampaignDetailsPanel; // 0x3F8(0x8)
		UFortQuestMapDetailsPanelBase EventDetailsPanel; // 0x400(0x8)
		UFortQuestMapEventCallout EventCalloutPanel; // 0x408(0x8)
		UFortQuestMapViewer QuestMapViewer; // 0x410(0x8)
		EQuestMapScreenMode CurrentMode; // 0x418(0x1)
		bool bEventsActive; // 0x419(0x1)
		unsigned char UnknownData03_6[0x6]; // 0x41A(0x6) UNKNOWN PROPERTY
		UFortQuestMapDataAsset CampaignQuestMapDataTable; // 0x420(0x8)
		UFortQuestItemDefinition CutoffQuest; // 0x428(0x8)
		UFortQuestMapDataAsset CurrentQuestMapDataTable; // 0x430(0x8)
		unsigned char UnknownData04_6[0x28]; // 0x438(0x28) UNKNOWN PROPERTY
		UClass CampaignNewsModalClass; // 0x460(0x8)
		UClass QuestLogScreenClass; // 0x468(0x8)
		FDataTableRowHandle CurrentQuestAction; // 0x470(0x10)
		FDataTableRowHandle STWNewsAction; // 0x480(0x10)
		FDataTableRowHandle BackAction; // 0x490(0x10)
		unsigned char UnknownData05_7[0x10]; // 0x4A0(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortQuestMapScreen");
			return ret;
		}

		void UpdateQuestMapMode(EQuestMapScreenMode QuestMapMode); // Flags: Event|Public|BlueprintEvent 0x7FF414E86080
		void UpdateInputActionStates(bool bShowingCallout); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E85FA0
		void ToggleQuestMapState(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E85EC0
		void ShowQuestLog(UFortQuestItem QuestItem); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E85DE0
		void SetQuestMapViewer(UFortQuestMapViewer Value); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E85D00
		void SetIgnorePageNavigation(bool bIgnoreNavigation); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E85C20
		void SetBeyondCutoffQuest(bool bBeyondCutoff); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E85B40
		void OnShowCurrentQuestInputActionValueChanged(); // Flags: Event|Public|BlueprintEvent 0x7FF414E85A60
		void OnEventCalloutExpandChanged(); // Flags: Event|Public|BlueprintEvent 0x7FF414E85980
		void OnEventCalloutButtonClicked(); // Flags: Event|Public|BlueprintEvent 0x7FF414E858A0
		bool IsEventFlagActive(FString EventFlag); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E857C0
		bool IsBeyondQuest(UFortQuestItemDefinition QuestDef); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E856E0
		void InitializeQuestData(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E85600
		void HandleQuestPageChanged(); // Flags: Event|Public|BlueprintEvent 0x7FF414E85520
		void HandleQuestIndexSelectionModelChanged(bool bUpdateButtonSelection); // Flags: Final|Native|Private 0x7FF414E85440
		void HandleQuestDetailsUpdated(UFortQuestItem QuestDefinition); // Flags: Event|Public|BlueprintEvent 0x7FF414E85360
		void HandleMapViewerNavigationRequest(EViewerNavigationDirection Direction); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E85280
		void HandleMapModeSwitch(); // Flags: Event|Public|BlueprintEvent 0x7FF414E851A0
		void HandleEventQuestMapActivate(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E850C0
		void HandleEventCalloutDataChangedBP(); // Flags: Event|Public|BlueprintEvent 0x7FF414E84FE0
		void HandleBackInputAction(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E84F00
		EFrontEndCamera GetCurrentPageCameraMode(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E84E20
		bool GetBeyondCutoffQuest(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E84D40
		void ClaimQuestRewards(UFortQuestItem QuestItem); // Flags: Event|Protected|BlueprintEvent 0x7FF414E84C60
		void CheckForNewMainQuest(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E84B80
	};


	// Class SaveTheWorldUI.FortQuestMapScreen_Legacy
	// Inherited from UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x68 (0x598 - 0x530)
	class UFortQuestMapScreen_Legacy : public UCommonActivatablePanelLegacy	
	{
	public:
		UFortQuestMapDetailsPanelBase CampaignDetailsPanel; // 0x530(0x8)
		UFortQuestMapDetailsPanelBase EventDetailsPanel; // 0x538(0x8)
		UFortQuestMapEventCallout_Legacy EventCalloutPanel; // 0x540(0x8)
		UFortQuestMapViewer_Legacy QuestMapViewer; // 0x548(0x8)
		EQuestMapScreenMode CurrentMode; // 0x550(0x1)
		bool bEventsActive; // 0x551(0x1)
		unsigned char UnknownData02_6[0x6]; // 0x552(0x6) UNKNOWN PROPERTY
		UFortQuestMapDataAsset CampaignQuestMapDataTable; // 0x558(0x8)
		UFortQuestItemDefinition CutoffQuest; // 0x560(0x8)
		UFortQuestMapDataAsset CurrentQuestMapDataTable; // 0x568(0x8)
		unsigned char UnknownData03_7[0x28]; // 0x570(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortQuestMapScreen_Legacy");
			return ret;
		}

		void UpdateQuestMapMode(EQuestMapScreenMode QuestMapMode); // Flags: Event|Public|BlueprintEvent 0x7FF414E873C0
		void ToggleQuestMapState(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E872E0
		void SetQuestMapViewer(UFortQuestMapViewer_Legacy Value); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E87200
		void SetIgnorePageNavigation(bool bIgnoreNavigation); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E87120
		void SetFindCurrentActionVisibility(EInputActionState ActionVisibility); // Flags: Event|Public|BlueprintEvent 0x7FF414E87040
		void SetBeyondCutoffQuest(bool bBeyondCutoff); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E86F60
		void OnEventCalloutExpandChanged(); // Flags: Event|Public|BlueprintEvent 0x7FF414E86E80
		void OnEventCalloutButtonClicked(); // Flags: Event|Public|BlueprintEvent 0x7FF414E86DA0
		bool IsEventFlagActive(FString EventFlag); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E86CC0
		bool IsBeyondQuest(UFortQuestItemDefinition QuestDef); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E86BE0
		void InitializeQuestData(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E86B00
		void HandleRequestCurrentQuestNavigation(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E86A20
		void HandleQuestPageChanged(); // Flags: Event|Public|BlueprintEvent 0x7FF414E86940
		void HandleQuestIndexSelectionModelChanged(bool bUpdateButtonSelection); // Flags: Final|Native|Private 0x7FF414E86860
		void HandleQuestDetailsUpdated(UFortQuestItem QuestDefinition); // Flags: Event|Public|BlueprintEvent 0x7FF414E86780
		void HandleMapViewerNavigationRequest(EViewerNavigationDirection Direction); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E866A0
		void HandleMapModeSwitch(); // Flags: Event|Public|BlueprintEvent 0x7FF414E865C0
		void HandleEventQuestMapActivate(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E864E0
		void HandleEventCalloutDataChangedBP(); // Flags: Event|Public|BlueprintEvent 0x7FF414E86400
		EFrontEndCamera GetCurrentPageCameraMode(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E86320
		bool GetBeyondCutoffQuest(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E86240
		void CheckForNewMainQuest(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E86160
	};


	// Class SaveTheWorldUI.FortQuestMapViewer_Legacy
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x80 (0x360 - 0x2E0)
	class UFortQuestMapViewer_Legacy : public UCommonUserWidget	
	{
	public:
		unsigned char UnknownData02_3[0x10]; // 0x2E0(0x10) UNKNOWN PROPERTY
		UCommonButtonLegacy Button_PageRight; // 0x2F0(0x8)
		UCommonButtonLegacy Button_PageLeft; // 0x2F8(0x8)
		UCommonTextBlock Text_Title; // 0x300(0x8)
		UCommonTextBlock Text_Page; // 0x308(0x8)
		USizeBox SizeBox_Viewer; // 0x310(0x8)
		UCanvasPanel CanvasPanel_Cosmetic; // 0x318(0x8)
		UFortQuestMapScreen_Legacy ParentScreen; // 0x320(0x8)
		UFortQuestMapNodeLayout_Legacy NodeLayout; // 0x328(0x8)
		unsigned char UnknownData03_7[0x30]; // 0x330(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortQuestMapViewer_Legacy");
			return ret;
		}

		void UpdateViewerData(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E87820
		void OnTryUpdateUserWidgetColor(UUserWidget Widget, FSlateColor OverrideColor); // Flags: Event|Public|BlueprintEvent 0x7FF414E87740
		void OnPlayLayoutOutroAnimation(EViewerNavigationDirection TravelDirection); // Flags: Event|Public|BlueprintEvent 0x7FF414E87660
		void OnPlayLayoutFadeInAnimation(); // Flags: Event|Public|BlueprintEvent 0x7FF414E87580
		void HandleLayoutOutroAnimationFinished(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E874A0
	};


	// Class SaveTheWorldUI.FortQuestPlayButton
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x2E8 - 0x2E0)
	class UFortQuestPlayButton : public UCommonUserWidget	
	{
	public:
		UFortQuestItem QuestItem; // 0x2E0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortQuestPlayButton");
			return ret;
		}

		void OnContentMissing(); // Flags: Event|Public|BlueprintEvent 0x7FF414E87E40
		void HandlePlayerStateChanged(); // Flags: Event|Public|BlueprintEvent 0x7FF414E87D60
		void HandleMatchmakingStarted(); // Flags: Event|Public|BlueprintEvent 0x7FF414E87C80
		void HandleMatchmakingComplete(EMatchmakingCompleteResult Result); // Flags: Event|Public|BlueprintEvent 0x7FF414E87BA0
		void HandleLobbyDisconnected(); // Flags: Event|Public|BlueprintEvent 0x7FF414E87AC0
		bool CanPlayQuest(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E879E0
		void AttemptToPlayQuest(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E87900
	};


	// Class SaveTheWorldUI.FortQuestTreeItemWidget
	// Inherited from UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x13A0 - 0x1390)
	class UFortQuestTreeItemWidget : public UCommonButtonBase	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x1390(0x8) UNKNOWN PROPERTY
		TWeakObjectPtr QuestOrCategory; // 0x1398(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortQuestTreeItemWidget");
			return ret;
		}

		void SetupAsQuest(UFortQuestItem category); // Flags: Event|Protected|BlueprintEvent 0x7FF414E881C0
		void SetupAsCategory(UFortQuestCategory category); // Flags: Event|Protected|BlueprintEvent 0x7FF414E880E0
		void OnQuestsUpdated(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E88000
		void HandleQuestsUpdated(); // Flags: Final|Native|Protected 0x7FF414E87F20
	};


	// Class SaveTheWorldUI.FortQuestTreeItemWidget_Legacy
	// Inherited from UCommonButtonLegacy -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x13F0 - 0x13E0)
	class UFortQuestTreeItemWidget_Legacy : public UCommonButtonLegacy	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x13E0(0x8) UNKNOWN PROPERTY
		TWeakObjectPtr QuestOrCategory; // 0x13E8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortQuestTreeItemWidget_Legacy");
			return ret;
		}

		void SetupAsQuest(UFortQuestItem category); // Flags: Event|Protected|BlueprintEvent 0x7FF414E88540
		void SetupAsCategory(UFortQuestCategory category); // Flags: Event|Protected|BlueprintEvent 0x7FF414E88460
		void OnQuestsUpdated(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E88380
		void HandleQuestsUpdated(); // Flags: Final|Native|Protected 0x7FF414E882A0
	};


	// Class SaveTheWorldUI.FortQuestScreen
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x100 (0x4F8 - 0x3F8)
	class UFortQuestScreen : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x3F8(0x8) UNKNOWN PROPERTY
		UCommonTreeView TreeView_Quests; // 0x400(0x8)
		UScrollBox ScrollBox_QuestDetails; // 0x408(0x8)
		UClass QuestManagerComponentClass; // 0x410(0x8)
		FDataTableRowHandle BackAction; // 0x418(0x10)
		FDataTableRowHandle LeaveInventoryAction; // 0x428(0x10)
		FDataTableRowHandle PlayQuestAction; // 0x438(0x10)
		FDataTableRowHandle AbandonQuestAction; // 0x448(0x10)
		FDataTableRowHandle ClaimRewardAction; // 0x458(0x10)
		FDataTableRowHandle ReplayIntroAction; // 0x468(0x10)
		FDataTableRowHandle ReplayOutroAction; // 0x478(0x10)
		FDataTableRowHandle PinQuestAction; // 0x488(0x10)
		FDataTableRowHandle UnpinQuestAction; // 0x498(0x10)
		FDataTableRowHandle StopConversationAction; // 0x4A8(0x10)
		unsigned char UnknownData03_7[0x40]; // 0x4B8(0x40) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortQuestScreen");
			return ret;
		}

		void TriggerClaimRewardEvent(UFortQuestItem QuestItem); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E89340
		void SetInputActionStates(UFortQuestItem QuestItem, bool bIsQuestAudioPlaying, bool bShouldShowPlayQuest, bool bAreQuestItemsDifferent); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E89260
		void SetDisableClaimRewardButton(bool bToDisable); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E89180
		void ProcessPendingSeenQuestItems(); // Flags: Final|Native|Private|BlueprintCallable 0x7FF414E890A0
		void OnContentMissing(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E88FC0
		void BP_SetInitialQuestToSelect(UFortQuestItem QuestItem); // Flags: Event|Public|BlueprintEvent 0x7FF414E88EE0
		void BP_HandleUnpinQuestAction(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E88E00
		void BP_HandleStopConversationAction(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E88D20
		void BP_HandleReplayOutroAction(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E88C40
		void BP_HandleReplayIntroAction(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E88B60
		void BP_HandlePlayQuestAction(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E88A80
		void BP_HandlePinQuestAction(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E889A0
		void BP_HandleClaimRewardAction(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E888C0
		void BP_HandleBackAction(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E887E0
		void BP_HandleAbandonQuestAction(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E88700
		void AttemptToPlayQuest(UFortQuestItem QuestItem); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E88620
	};


	// Class SaveTheWorldUI.FortQuestScreen_Legacy
	// Inherited from UFortActivatablePanel -> UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x568 - 0x568)
	class UFortQuestScreen_Legacy : public UFortActivatablePanel	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortQuestScreen_Legacy");
			return ret;
		}

		void ProcessPendingSeenQuestItems(); // Flags: Final|Native|Private|BlueprintCallable 0x7FF414E89420
	};


	// Class SaveTheWorldUI.FortResearchMenuBase
	// Inherited from UFortActivatablePanel -> UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x50 (0x5B8 - 0x568)
	class UFortResearchMenuBase : public UFortActivatablePanel	
	{
	public:
		UFortItemDefinition ResearchRespecToken; // 0x568(0x8)
		FDataTableRowHandle RespecInputAction; // 0x570(0x10)
		unsigned char UnknownData03_6[0x8]; // 0x580(0x8) UNKNOWN PROPERTY
		FDataTableRowHandle ResearchDetailsInputAction; // 0x588(0x10)
		unsigned char UnknownData04_6[0x8]; // 0x598(0x8) UNKNOWN PROPERTY
		FDataTableRowHandle BackInputAction; // 0x5A0(0x10)
		unsigned char UnknownData05_7[0x8]; // 0x5B0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortResearchMenuBase");
			return ret;
		}

		void UseResearchRespecToken(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E89F80
		void SetupLegacyInputHandlers(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E89EA0
		void SetupInputHandlers(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E89DC0
		void RequestPurchaseResearchLevel(FString StatId); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E89CE0
		void OnUseResearchRespecTokenComplete(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E89C00
		void OnPurchaseResearchLevelStarted(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E89B20
		void OnPurchaseResearchLevelCompleted(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E89A40
		void HandleRespec(); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent 0x7FF414E89960
		void HandleResearchDetails(); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent 0x7FF414E89880
		void HandleBack(); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent 0x7FF414E897A0
		int32_t GetResearchRespecTokenCount(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414E896C0
		int32_t GetClaimableResearchPointEstimate(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E895E0
		bool AreResearchRespecTokensAvailable(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414E89500
	};


	// Class SaveTheWorldUI.FortResearchStatTileWidget
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x40 (0x2F8 - 0x2B8)
	class UFortResearchStatTileWidget : public UUserWidget	
	{
	public:
		UFortStatItemDefinition PersonalStatItemDefinition; // 0x2B8(0x8)
		UFortStatItemDefinition TeamStatItemDefinition; // 0x2C0(0x8)
		FName StatCostCurveName; // 0x2C8(0x4)
		FName StatPersonalDeltaCurveName; // 0x2CC(0x4)
		FName StatPersonalCumulativeCurveName; // 0x2D0(0x4)
		FName StatTeamDeltaCurveName; // 0x2D4(0x4)
		FName StatTeamCumulativeCurveName; // 0x2D8(0x4)
		unsigned char UnknownData01_7[0x1C]; // 0x2DC(0x1C) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortResearchStatTileWidget");
			return ret;
		}

		void OnStatChanged(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E8AA00
		bool IsAtMaxResearchLevel(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E8A920
		FString GetStatIdName(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E8A840
		EFortStatType GetPersonalStatType(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E8A760
		int32_t GetNextTeamStatValueDelta(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E8A680
		int32_t GetNextPersonalStatValueDelta(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E8A5A0
		int32_t GetNextCombinedStatValueDelta(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E8A4C0
		int32_t GetCurrentTeamStatValue(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E8A3E0
		int32_t GetCurrentResearchLevel(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E8A300
		int32_t GetCurrentPersonalStatValue(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E8A220
		int32_t GetCurrentCombinedStatValue(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E8A140
		int32_t GetCostToIncreaseStat(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E8A060
	};


	// Class SaveTheWorldUI.FortRewardNotificationData
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UFortRewardNotificationData : public UObject	
	{
	public:
		EFrontEndRewardType RewardType; // 0x28(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x29(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortRewardNotificationData");
			return ret;
		}

		bool GetIconBrush(FSlateBrush& IconBrush, TEnumAsByte BrushSize); // Flags: Native|Public|HasOutParms|BlueprintCallable 0x7FF414E8AAE0
	};


	// Class SaveTheWorldUI.FortRewardCollectionBookData
	// Inherited from UFortRewardNotificationData -> UObject
	// Size: 0x58 (0x88 - 0x30)
	class UFortRewardCollectionBookData : public UFortRewardNotificationData	
	{
	public:
		FFortCollectionBookRewards CollectionBookRewards; // 0x30(0x58)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortRewardCollectionBookData");
			return ret;
		}
	};


	// Class SaveTheWorldUI.FortRewardNotificationSubWidget
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x28 (0x308 - 0x2E0)
	class UFortRewardNotificationSubWidget : public UCommonUserWidget	
	{
	public:
		FMulticastInlineDelegate OnTransitionInComplete; // 0x2E0(0x10)
		FMulticastInlineDelegate OnTransitionOutComplete; // 0x2F0(0x10)
		unsigned char UnknownData01_7[0x8]; // 0x300(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortRewardNotificationSubWidget");
			return ret;
		}

		void TransitionOutBegin(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E8BE20
		void TransitionOut(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E8BD40
		void TransitionInBegin(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E8BC60
		void TransitionIn(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E8BB80
		void SetPrimaryActionText(FText Text); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E8BAA0
		void SetPrimaryActionHidden(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E8B9C0
		void SetPrimaryActionEnabled(bool bEnabled); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E8B8E0
		void SetInputActionHandlerState(UDataTable DataTable, FName RowName, EInputActionState State); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E8B800
		void RemoveInputActionHandler(FDataTableRowHandle InputActionRow); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E8B720
		void RemoveAllInputActionHandlers(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E8B640
		void OnPrimaryAction(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent 0x7FF414E8B560
		void OnNavigationUp(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent 0x7FF414E8B480
		void OnNavigationRight(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent 0x7FF414E8B3A0
		void OnNavigationLeft(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent 0x7FF414E8B2C0
		void OnNavigationDown(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent 0x7FF414E8B1E0
		void OnDeactivated(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent 0x7FF414E8B100
		void OnActivated(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent 0x7FF414E8B020
		void IsPrimaryActionHidden(bool& bHidden); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414E8AF40
		void IsPrimaryActionEnabled(bool& bEnabled); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414E8AE60
		void InspectItem(UFortItem ItemToInspect, int32_t QuantityOverride); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E8AD80
		void Init(UFortRewardNotificationWidget MainWidget); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E8ACA0
		void AddInputActionHandler(UDataTable DataTable, FName RowName, FDelegateProperty CommittedEvent); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E8ABC0
	};


	// Class SaveTheWorldUI.FortRewardConversationWidget
	// Inherited from UFortRewardNotificationSubWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x308 - 0x308)
	class UFortRewardConversationWidget : public UFortRewardNotificationSubWidget	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortRewardConversationWidget");
			return ret;
		}

		bool IsValidConversation(UFortConversation Conversation); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E8BFE0
		void GetDataFromSentence(FFortConversationSentence& Sentence, FText& Text, UTexture2D& TalkingHeadTexture); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414E8BF00
	};


	// Class SaveTheWorldUI.FortRewardDifficultyIncrease
	// Inherited from UFortRewardNotificationData -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UFortRewardDifficultyIncrease : public UFortRewardNotificationData	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortRewardDifficultyIncrease");
			return ret;
		}
	};


	// Class SaveTheWorldUI.FortRewardEpicQuestData
	// Inherited from UFortRewardNotificationData -> UObject
	// Size: 0x8 (0x38 - 0x30)
	class UFortRewardEpicQuestData : public UFortRewardNotificationData	
	{
	public:
		UFortQuestItem Quest; // 0x30(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortRewardEpicQuestData");
			return ret;
		}
	};


	// Class SaveTheWorldUI.FortRewardExpeditionData
	// Inherited from UFortRewardNotificationData -> UObject
	// Size: 0x8 (0x38 - 0x30)
	class UFortRewardExpeditionData : public UFortRewardNotificationData	
	{
	public:
		UFortExpeditionItem Expedition; // 0x30(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortRewardExpeditionData");
			return ret;
		}
	};


	// Class SaveTheWorldUI.FortRewardExpeditionWidget
	// Inherited from UFortRewardNotificationSubWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x68 (0x370 - 0x308)
	class UFortRewardExpeditionWidget : public UFortRewardNotificationSubWidget	
	{
	public:
		FMulticastInlineDelegate OnMcpError; // 0x308(0x10)
		unsigned char UnknownData01_7[0x58]; // 0x318(0x58) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortRewardExpeditionWidget");
			return ret;
		}

		void OnCollectExpeditionCompleted(UFortExpeditionItem Expedition, bool bSucceeded, TArray& Rewards); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414E8C1A0
		void CollectExpedition(UFortExpeditionItem Expedition); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E8C0C0
	};


	// Class SaveTheWorldUI.FortRewardGiftBoxData
	// Inherited from UFortRewardNotificationData -> UObject
	// Size: 0x8 (0x38 - 0x30)
	class UFortRewardGiftBoxData : public UFortRewardNotificationData	
	{
	public:
		UFortGiftBoxItem GiftBox; // 0x30(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortRewardGiftBoxData");
			return ret;
		}
	};


	// Class SaveTheWorldUI.FortRewardInfoButton
	// Inherited from UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x13B0 - 0x1390)
	class UFortRewardInfoButton : public UCommonButtonBase	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x1390(0x8) UNKNOWN PROPERTY
		UPanelWidget ItemCardPanel; // 0x1398(0x8)
		EFortItemCardSize ItemCardSize; // 0x13A0(0x1)
		bool bDisplayAsRewardCard; // 0x13A1(0x1)
		unsigned char UnknownData03_6[0x6]; // 0x13A2(0x6) UNKNOWN PROPERTY
		UFortItem ItemInstance; // 0x13A8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortRewardInfoButton");
			return ret;
		}

		void SetShowDescriptionBP(bool bInShowDescription); // Flags: Event|Protected|BlueprintEvent 0x7FF414E8C6E0
		void SetShowDescription(bool bInShowDescription); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E8C600
		void SetItemInstanceQuantityPair(FFortItemInstanceQuantityPair& ItemQuantityPair); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414E8C520
		void HandleDifferentItemOrQuantitySetBP(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E8C440
		int32_t GetQuantity(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414E8C360
		UFortItem GetItemInstance(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E8C280
	};


	// Class SaveTheWorldUI.FortRewardInfoWidget
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x88 (0x368 - 0x2E0)
	class UFortRewardInfoWidget : public UCommonUserWidget	
	{
	public:
		UPanelWidget RewardListWidget; // 0x2E0(0x8)
		FMargin RewardWidgetPadding; // 0x2E8(0x10)
		TEnumAsByte HorizontalAlignment; // 0x2F8(0x1)
		TEnumAsByte VerticalAlignment; // 0x2F9(0x1)
		bool bShowDescription; // 0x2FA(0x1)
		bool bAllowItemInteraction; // 0x2FB(0x1)
		int32_t MaxNumRewardsShown; // 0x2FC(0x4)
		UClass OrWidgetType; // 0x300(0x8)
		UClass RewardInfoButtonType; // 0x308(0x8)
		unsigned char UnknownData02_6[0x20]; // 0x310(0x20) UNKNOWN PROPERTY
		UCommonButtonGroupBase ButtonGroup; // 0x330(0x8)
		unsigned char UnknownData03_7[0x30]; // 0x338(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortRewardInfoWidget");
			return ret;
		}

		void SetRewards(FFortRewardInfo& RewardsIn); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414E8CA60
		void SetReward(FFortItemQuantityPair& RewardIn); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414E8C980
		void SetButtonGroup(UCommonButtonGroupBase InButtonGroup); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E8C8A0
		bool ContainsReward(FString TemplateIdToCheck); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E8C7C0
	};


	// Class SaveTheWorldUI.FortRewardItemCacheData
	// Inherited from UFortRewardNotificationData -> UObject
	// Size: 0x8 (0x38 - 0x30)
	class UFortRewardItemCacheData : public UFortRewardNotificationData	
	{
	public:
		UFortItem ItemCache; // 0x30(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortRewardItemCacheData");
			return ret;
		}
	};


	// Class SaveTheWorldUI.FortRewardMissionAlertData
	// Inherited from UFortRewardNotificationData -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UFortRewardMissionAlertData : public UFortRewardNotificationData	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortRewardMissionAlertData");
			return ret;
		}
	};


	// Class SaveTheWorldUI.FortRewardMissionData
	// Inherited from UFortRewardNotificationData -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UFortRewardMissionData : public UFortRewardNotificationData	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortRewardMissionData");
			return ret;
		}
	};


	// Class SaveTheWorldUI.FortRewardNewQuestWidget
	// Inherited from UFortRewardNotificationSubWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x308 - 0x308)
	class UFortRewardNewQuestWidget : public UFortRewardNotificationSubWidget	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortRewardNewQuestWidget");
			return ret;
		}

		bool IsValidConversation(UFortConversation Conversation); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E8CC20
		void GetDataFromSentence(FFortConversationSentence& Sentence, FText& Text, UTexture2D& TalkingHeadTexture); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414E8CB40
	};


	// Class SaveTheWorldUI.FortRewardNotificationWidget
	// Inherited from UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x100 (0x630 - 0x530)
	class UFortRewardNotificationWidget : public UCommonActivatablePanelLegacy	
	{
	public:
		unsigned char UnknownData03_3[0x28]; // 0x530(0x28) UNKNOWN PROPERTY
		UClass MulchConfirmationModalClass; // 0x558(0x8)
		UFortMulchConfirmationModalWidget MulchConfirmationModal; // 0x560(0x8)
		UOverlay OverlayMain; // 0x568(0x8)
		FFortSwipeDetector SwipeDetector; // 0x570(0x98)
		TArray NotificationDataList; // 0x608(0x10)
		unsigned char UnknownData04_6[0x10]; // 0x618(0x10) UNKNOWN PROPERTY
		FPrimaryContentSetup PrimaryContentSetup; // 0x628(0x3)
		unsigned char UnknownData05_7[0x5]; // 0x62B(0x5) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortRewardNotificationWidget");
			return ret;
		}

		void ShowMulchConfirmationModal(); // Flags: Native|Public|BlueprintCallable 0x7FF414E8F7E0
		void SetPrimaryActionText(FText Text); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E8F700
		void SetPrimaryActionHidden(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E8F620
		void SetPrimaryActionEnabled(bool bEnabled); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E8F540
		void ResetAllRewardData(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E8F460
		void PopulateReward(UFortRewardNotificationData Reward); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E8F380
		void OnRewardsScreenClosed(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E8F2A0
		void OnRewardsClaimFailed(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E8F1C0
		void OnRewardsClaimed(TArray& ItemList); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414E8F0E0
		void OnPrimaryActionTextChanged(FText& Text); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414E8F000
		void OnPrimaryActionHidden(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E8EF20
		void OnPrimaryActionEnabled(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E8EE40
		void OnPrimaryActionDisabled(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E8ED60
		void OnPopulateNewQuestReward(UFortRewardEpicQuestData QuestReward); // Flags: Event|Protected|BlueprintEvent 0x7FF414E8EC80
		void OnPopulateGiftBoxReward(UFortRewardGiftBoxData GiftBoxReward); // Flags: Event|Protected|BlueprintEvent 0x7FF414E8EBA0
		void OnPopulateExpeditionReward(UFortRewardExpeditionData ExpeditionReward); // Flags: Event|Protected|BlueprintEvent 0x7FF414E8EAC0
		void OnPopulateChoiceRewards(TArray& ItemList); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414E8E9E0
		void OnNavigationUp(); // Flags: Event|Public|BlueprintEvent 0x7FF414E8E900
		void OnNavigationRight(); // Flags: Event|Public|BlueprintEvent 0x7FF414E8E820
		void OnNavigationLeft(); // Flags: Event|Public|BlueprintEvent 0x7FF414E8E740
		void OnNavigationDown(); // Flags: Event|Public|BlueprintEvent 0x7FF414E8E660
		void OnMulchCompleted(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E8E580
		void NotifyPanelDeactivated(); // Flags: Native|Protected|BlueprintCallable 0x7FF414E8E4A0
		void NotifyPanelActivated(); // Flags: Native|Protected|BlueprintCallable 0x7FF414E8E3C0
		void MarkDefaultItemsForMulch(TArray ItemList); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E8E2E0
		void IsPrimaryActionHidden(bool& bHidden); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414E8E200
		void IsPrimaryActionEnabled(bool& bEnabled); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414E8E120
		void InspectItem(UFortItem ItemToInspect, int32_t QuantityOverride); // Flags: Event|Public|BlueprintCallable|BlueprintEvent 0x7FF414E8E040
		void HideMulchConfirmationModal(); // Flags: Native|Public|BlueprintCallable 0x7FF414E8DF60
		void HandleOnQuestRewardClaimed(UFortQuestItem Quest, TArray& Rewards); // Flags: Final|Native|Private|HasOutParms 0x7FF414E8DE80
		void HandleOnNoQuestRewardsToClaim(); // Flags: Final|Native|Private 0x7FF414E8DDA0
		void HandleOnMissionRewardsOpenFailed(); // Flags: Final|Native|Private 0x7FF414E8DCC0
		void HandleOnMissionRewardsOpened(TArray& MissionRewards); // Flags: Final|Native|Private|HasOutParms 0x7FF414E8DBE0
		void HandleOnMissionAlertRewardsOpened(TArray& AlertRewards); // Flags: Final|Native|Private|HasOutParms 0x7FF414E8DB00
		void HandleOnItemCacheRewardsClaimFailed(); // Flags: Final|Native|Private 0x7FF414E8DA20
		void HandleOnItemCacheRewardsClaimed(TArray& ClaimedRewards); // Flags: Final|Native|Private|HasOutParms 0x7FF414E8D940
		void HandleOnDifficultyIncreaseRewardsClaimFailed(); // Flags: Final|Native|Private 0x7FF414E8D860
		void HandleOnDifficultyIncreaseRewardsClaimed(TArray& DifficultyRewards); // Flags: Final|Native|Private|HasOutParms 0x7FF414E8D780
		void HandleOnCollectionBookRewardClaimed(FFortCollectionBookRewards RewardClaimed, bool bSuccess, TArray& ActualRewards); // Flags: Final|Native|Private|HasOutParms 0x7FF414E8D6A0
		void BeginCloseRewardsScreen(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E8D5C0
		void AddQuestData(UFortQuestItem Quest); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E8D4E0
		void AddPhoenixLevelUpRewardData(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E8D400
		void AddMissionData(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E8D320
		void AddMissionAlertData(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E8D240
		void AddItemCacheRewardData(UFortItem ItemCache); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E8D160
		void AddGiftBoxData(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E8D080
		void AddExpeditionData(UFortExpeditionItem ExpeditionItem); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E8CFA0
		void AddEpicQuestData(UFortQuestItem Quest); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E8CEC0
		void AddDifficultyIncreaseRewardData(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E8CDE0
		void AddCollectionBookData(FFortCollectionBookRewards& CollectionBookRewards); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable 0x7FF414E8CD00
	};


	// Class SaveTheWorldUI.FortRewardPhoenixLevelUpData
	// Inherited from UFortRewardNotificationData -> UObject
	// Size: 0x18 (0x48 - 0x30)
	class UFortRewardPhoenixLevelUpData : public UFortRewardNotificationData	
	{
	public:
		int32_t PhoenixLevel; // 0x30(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
		TArray Rewards; // 0x38(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortRewardPhoenixLevelUpData");
			return ret;
		}
	};


	// Class SaveTheWorldUI.FortRewardQuestData
	// Inherited from UFortRewardNotificationData -> UObject
	// Size: 0x8 (0x38 - 0x30)
	class UFortRewardQuestData : public UFortRewardNotificationData	
	{
	public:
		UFortQuestItem Quest; // 0x30(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortRewardQuestData");
			return ret;
		}
	};


	// Class SaveTheWorldUI.SaveTheWorldRegisterUIManager
	// Inherited from UFortUIGameFeatureAction -> UGameFeatureAction -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class USaveTheWorldRegisterUIManager : public UFortUIGameFeatureAction	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.SaveTheWorldRegisterUIManager");
			return ret;
		}
	};


	// Class SaveTheWorldUI.SaveTheWorldRequestsFeatureAction
	// Inherited from UFortUIGameFeatureAction -> UGameFeatureAction -> UObject
	// Size: 0xC0 (0xE8 - 0x28)
	class USaveTheWorldRequestsFeatureAction : public UFortUIGameFeatureAction	
	{
	public:
		TWeakObjectPtr ItemManagementScreenClass; // 0x28(0x20)
		TWeakObjectPtr ItemManagementScreenClass_STW; // 0x48(0x20)
		TWeakObjectPtr ItemInspectionScreenClass; // 0x68(0x20)
		TWeakObjectPtr HeroLoadoutScreenClass; // 0x88(0x20)
		TWeakObjectPtr HeroLoadoutScreenLegacyClass; // 0xA8(0x20)
		TWeakObjectPtr SurvivorSquadManagementScreenClass; // 0xC8(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.SaveTheWorldRequestsFeatureAction");
			return ret;
		}
	};


	// Class SaveTheWorldUI.FortSquadSelectorButton
	// Inherited from UCommonButtonLegacy -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x1400 - 0x13E0)
	class UFortSquadSelectorButton : public UCommonButtonLegacy	
	{
	public:
		unsigned char UnknownData02_3[0x10]; // 0x13E0(0x10) UNKNOWN PROPERTY
		int32_t SquadSlotIndex; // 0x13F0(0x4)
		unsigned char UnknownData03_7[0xC]; // 0x13F4(0xC) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortSquadSelectorButton");
			return ret;
		}

		bool TryGetStaticSquadDataBP(FHomebaseSquad& OutSquadData); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414E8FC40
		void SetIdOfSquadToManageBP(FName& SquadID); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414E8FB60
		void HandleSquadChangedBP(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E8FA80
		void HandleDifferentSquadSetBP(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E8F9A0
		FName GetIdOfSquadToManageBP(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E8F8C0
	};


	// Class SaveTheWorldUI.FortDefenderSquadSelectorButton
	// Inherited from UFortSquadSelectorButton -> UCommonButtonLegacy -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x1400 - 0x1400)
	class UFortDefenderSquadSelectorButton : public UFortSquadSelectorButton	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortDefenderSquadSelectorButton");
			return ret;
		}

		bool TryGetTheaterUniqueId(FString& OutTheaterUniqueId, bool& OutIsUnlocked); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414E8FE00
		bool TryGetPowerLevel(int32_t& OutPowerLevel); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414E8FD20
	};


	// Class SaveTheWorldUI.FortSquadIcon
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x2F0 - 0x2E0)
	class UFortSquadIcon : public UCommonUserWidget	
	{
	public:
		FName Name; // 0x2E0(0x4)
		TEnumAsByte ImageSize; // 0x2E4(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x2E5(0x3) UNKNOWN PROPERTY
		UImage Icon; // 0x2E8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortSquadIcon");
			return ret;
		}

		void SetSquad(FName& InName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414E8FFC0
		void HandleDifferentSquadSetBP(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E8FEE0
	};


	// Class SaveTheWorldUI.FortSquadLandingPageDefenderSquadDetails
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x2F0 - 0x2E0)
	class UFortSquadLandingPageDefenderSquadDetails : public UCommonUserWidget	
	{
	public:
		UCommonTextBlock OutpostName; // 0x2E0(0x8)
		UCommonNumericTextBlock PowerRating; // 0x2E8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortSquadLandingPageDefenderSquadDetails");
			return ret;
		}

		void SetDefenderSquadInfo(FFortLandingPageDefenderSummaryInfo& DefenderSummaryInfo); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414E90260
		void HandleDefenderSquadInfoSetBP(FFortLandingPageDefenderSummaryInfo& DefenderSummaryInfo); // Flags: Event|Public|HasOutParms|BlueprintEvent 0x7FF414E90180
		void HandleAddDefenderSquadMemberBP(FName& SquadID, int32_t Index); // Flags: Event|Public|HasOutParms|BlueprintEvent 0x7FF414E900A0
	};


	// Class SaveTheWorldUI.FortSquadLandingPageDefenderSquadDetailsLocked
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x2E8 - 0x2E0)
	class UFortSquadLandingPageDefenderSquadDetailsLocked : public UCommonUserWidget	
	{
	public:
		UCommonTextBlock OutpostName; // 0x2E0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortSquadLandingPageDefenderSquadDetailsLocked");
			return ret;
		}

		void SetDefenderSquadInfo(FFortLandingPageDefenderSummaryInfo& DefenderSummaryInfo); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414E90340
	};


	// Class SaveTheWorldUI.FortSquadLandingPageDefenderSummary
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x2E8 - 0x2E0)
	class UFortSquadLandingPageDefenderSummary : public UCommonUserWidget	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x2E0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortSquadLandingPageDefenderSummary");
			return ret;
		}

		void HandleClearDefenderSquadDetailsBP(); // Flags: Event|Public|BlueprintEvent 0x7FF414E905E0
		void HandleAddLockedDefenderSquadDetailsBP(FFortLandingPageDefenderSummaryInfo DefenderSummaryInfo); // Flags: Event|Public|BlueprintEvent 0x7FF414E90500
		void HandleAddDefenderSquadDetailsBP(FFortLandingPageDefenderSummaryInfo DefenderSummaryInfo); // Flags: Event|Public|BlueprintEvent 0x7FF414E90420
	};


	// Class SaveTheWorldUI.FortSquadLandingPageSurvivorSummary
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x88 (0x368 - 0x2E0)
	class UFortSquadLandingPageSurvivorSummary : public UCommonUserWidget	
	{
	public:
		UFortSquadStatValueWithIcon FortitudeStatValue; // 0x2E0(0x8)
		UFortSquadStatValueWithIcon OffenseStatValue; // 0x2E8(0x8)
		UFortSquadStatValueWithIcon ResistanceStatValue; // 0x2F0(0x8)
		UFortSquadStatValueWithIcon TechStatValue; // 0x2F8(0x8)
		unsigned char UnknownData01_7[0x68]; // 0x300(0x68) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortSquadLandingPageSurvivorSummary");
			return ret;
		}

		void HandleClearSetBonusSummaryLineItemsBP(); // Flags: Event|Public|BlueprintEvent 0x7FF414E907A0
		void HandleAddSetBonusSummaryLineItemBP(FFortAttributeModifierAccumulation AttributeModifierAccumulation); // Flags: Event|Public|BlueprintEvent 0x7FF414E906C0
	};


	// Class SaveTheWorldUI.FortSquadManagementItemViewContextBase
	// Inherited from UObject
	// Size: 0xD0 (0xF8 - 0x28)
	class UFortSquadManagementItemViewContextBase : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0xD0]; // 0x28(0xD0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortSquadManagementItemViewContextBase");
			return ret;
		}
	};


	// Class SaveTheWorldUI.FortItemViewContext_SquadSlotsView
	// Inherited from UFortSquadManagementItemViewContextBase -> UObject
	// Size: 0x8 (0x100 - 0xF8)
	class UFortItemViewContext_SquadSlotsView : public UFortSquadManagementItemViewContextBase	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0xF8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortItemViewContext_SquadSlotsView");
			return ret;
		}
	};


	// Class SaveTheWorldUI.FortItemViewContext_SquadSlotItemPicker
	// Inherited from UFortSquadManagementItemViewContextBase -> UObject
	// Size: 0x8 (0x100 - 0xF8)
	class UFortItemViewContext_SquadSlotItemPicker : public UFortSquadManagementItemViewContextBase	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0xF8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortItemViewContext_SquadSlotItemPicker");
			return ret;
		}
	};


	// Class SaveTheWorldUI.FortItemViewContext_ExpeditionSquadSlotsView
	// Inherited from UFortItemViewContext_SquadSlotsView -> UFortSquadManagementItemViewContextBase -> UObject
	// Size: 0x8 (0x108 - 0x100)
	class UFortItemViewContext_ExpeditionSquadSlotsView : public UFortItemViewContext_SquadSlotsView	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x100(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortItemViewContext_ExpeditionSquadSlotsView");
			return ret;
		}
	};


	// Class SaveTheWorldUI.FortItemViewContext_ExpeditionSquadSlotItemPicker
	// Inherited from UFortItemViewContext_SquadSlotItemPicker -> UFortSquadManagementItemViewContextBase -> UObject
	// Size: 0x8 (0x108 - 0x100)
	class UFortItemViewContext_ExpeditionSquadSlotItemPicker : public UFortItemViewContext_SquadSlotItemPicker	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x100(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortItemViewContext_ExpeditionSquadSlotItemPicker");
			return ret;
		}
	};


	// Class SaveTheWorldUI.FortSquadManagementScreenBase
	// Inherited from UFortActivatablePanel -> UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x120 (0x688 - 0x568)
	class UFortSquadManagementScreenBase : public UFortActivatablePanel	
	{
	public:
		unsigned char UnknownData03_3[0x10]; // 0x568(0x10) UNKNOWN PROPERTY
		bool bReadOnlyModeWIFE; // 0x578(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x579(0x7) UNKNOWN PROPERTY
		UFortSquadStatsWidgetBase SquadStatsWidget; // 0x580(0x8)
		UFortSquadSlotsView SquadSlotsView; // 0x588(0x8)
		UFortSquadSlotDetailsPanel SelectedSlotDetailsPanel; // 0x590(0x8)
		UFortSquadSlotItemPicker SelectedSlotItemPicker; // 0x598(0x8)
		FDataTableRowHandle InspectInputActionRowHandle; // 0x5A0(0x10)
		FDataTableRowHandle ManageInputActionRowHandle; // 0x5B0(0x10)
		FDataTableRowHandle BackInputActionRowHandle; // 0x5C0(0x10)
		FDataTableRowHandle InventoryInputActionRowHandle; // 0x5D0(0x10)
		FDataTableRowHandle InventoryCloseInputActionRowHandle; // 0x5E0(0x10)
		FDataTableRowHandle ClosePickerInputActionRowHandle; // 0x5F0(0x10)
		FDataTableRowHandle SelectPickerSlotActionRowHandle; // 0x600(0x10)
		FDataTableRowHandle CyclePickerSortActionRowHandle; // 0x610(0x10)
		FDataTableRowHandle PreviousSquadActionRowHandle; // 0x620(0x10)
		FDataTableRowHandle NextSquadActionRowHandle; // 0x630(0x10)
		FDataTableRowHandle ClearAllActionRowHandle; // 0x640(0x10)
		FDataTableRowHandle HelpScreenActionRowHandle; // 0x650(0x10)
		UClass DisableAutoSlottingToClearSquadPromptAction; // 0x660(0x8)
		unsigned char UnknownData05_6[0x10]; // 0x668(0x10) UNKNOWN PROPERTY
		UFortItemViewContext_SquadSlotsView ItemViewContext_SquadSlotsView; // 0x678(0x8)
		UFortItemViewContext_SquadSlotItemPicker ItemViewContext_SquadSlotItemPicker; // 0x680(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortSquadManagementScreenBase");
			return ret;
		}

		bool TryGetStaticSquadDataBP(FHomebaseSquad& OutSquadData); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414E92560
		bool TryGetSquadTeamAttribute(FGameplayAttribute& OutGameplayAttribute); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414E92480
		bool TryGetSquadMainAttribute(FGameplayAttribute& OutGameplayAttribute); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414E923A0
		bool TryGetAttributeValueFromSquad(float& OutValue, FGameplayAttribute& Attribute); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414E922C0
		void ShowWarningReadOnlyWIFE(bool Force); // Flags: Event|Public|BlueprintCallable|BlueprintEvent 0x7FF414E921E0
		void SetupInputHandlers(); // Flags: Native|Protected|BlueprintCallable 0x7FF414E92100
		void SetIdOfSquadToManageBP(FName& SquadID); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414E92020
		void SelectSquadWithOffset(int32_t Offset); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E91F40
		void SelectPreviousSquad(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E91E60
		void SelectNextSquad(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E91D80
		void NavigateToSquadSlot(int32_t SquadSlotIndex); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E91CA0
		bool IsScreenWIFE(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E91BC0
		void HandleViewInAll(int32_t SquadSlotIndex); // Flags: Final|Native|Private 0x7FF414E91AE0
		void HandleSquadStateChanged(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E91A00
		void HandleSquadSlotPickerShown(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E91920
		void HandleSquadSlotPickerHidden(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E91840
		void HandleShouldAutoSlotSurvivorSquadsChanged(); // Flags: Final|Native|Private 0x7FF414E91760
		void HandleSelectPickerSlotInputAction(); // Flags: Final|Native|Private 0x7FF414E91680
		void HandlePreviousSquadInputAction(); // Flags: Event|Public|BlueprintEvent 0x7FF414E915A0
		void HandlePickerSelectionCommitted(UFortItem CommittedItem); // Flags: Final|Native|Private 0x7FF414E914C0
		void HandlePickerSelectionChanged(UFortItem SelectedItem); // Flags: Final|Native|Private 0x7FF414E913E0
		void HandleOpenSquadSlot(int32_t SquadSlotIndex); // Flags: Final|Native|Private 0x7FF414E91300
		void HandleNextSquadInputAction(); // Flags: Event|Public|BlueprintEvent 0x7FF414E91220
		void HandleManageInputAction(); // Flags: Final|Native|Protected 0x7FF414E91140
		void HandleInventoryInputAction(); // Flags: Final|Native|Private 0x7FF414E91060
		void HandleInspectInputAction(); // Flags: Final|Native|Private 0x7FF414E90F80
		void HandleDifferentSquadSlotSelected(int32_t SquadSlotIndex); // Flags: Native|Protected 0x7FF414E90EA0
		void HandleDifferentSquadSetBP(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E90DC0
		void HandleCyclePickerSortInputAction(); // Flags: Final|Native|Private 0x7FF414E90CE0
		void HandleClosePickerInputAction(); // Flags: Final|Native|Private 0x7FF414E90C00
		void HandleBackInputAction(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E90B20
		int32_t GetNumUnlockedSquads(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E90A40
		FName GetIdOfSquadToManageBP(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E90960
		void ClearSquad(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E90880
	};


	// Class SaveTheWorldUI.FortSquadSlotDetailsPanel
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x58 (0x338 - 0x2E0)
	class UFortSquadSlotDetailsPanel : public UCommonUserWidget	
	{
	public:
		unsigned char UnknownData02_3[0x20]; // 0x2E0(0x20) UNKNOWN PROPERTY
		UFortSquadSlotItemDetailsHostPanel ItemDetailsPanel; // 0x300(0x8)
		TScriptInterface ItemViewContext; // 0x308(0x10)
		unsigned char UnknownData03_7[0x20]; // 0x318(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortSquadSlotDetailsPanel");
			return ret;
		}

		bool TryGetItemToPreviewInSlot(UFortItem& OutItemToPreviewInSlot); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414E92E20
		void SetScrollWidget(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E92D40
		void SetIdOfSquadSlotToManageBP(FName& SquadID, int32_t SquadSlotIndex); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414E92C60
		bool IsSquadSlotLockedBP(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E92B80
		void HandleSquadSlotStateChangedBP(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E92AA0
		void HandleSquadSlotRestrictionFactorsChangedBP(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E929C0
		void HandleDifferentSquadSlotSetBP(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E928E0
		TArray GetSlottingRestrictionReasons(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E92800
		UFortItem GetItemInSquadSlotBP(ULocalPlayer LocalPlayer); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E92720
		void GetIdOfSquadSlotToManageBP(FName& OutSquadId, int32_t& OutSquadSlotIndex); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414E92640
	};


	// Class SaveTheWorldUI.FortSquadSlotItemDetailElementWidget
	// Inherited from UFortItemDetailElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x358 - 0x338)
	class UFortSquadSlotItemDetailElementWidget : public UFortItemDetailElementWidget	
	{
	public:
		unsigned char UnknownData01_1[0x20]; // 0x338(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortSquadSlotItemDetailElementWidget");
			return ret;
		}

		void SetIdOfSquadSlotToManageBP(FName& SquadID, int32_t SquadSlotIndex); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414E93280
		bool IsSquadSlotLockedBP(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E931A0
		void HandlePostDifferentSquadSlotSetBP(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E930C0
		UFortItem GetItemInSquadSlotBP(ULocalPlayer LocalPlayer); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E92FE0
		void GetIdOfSquadSlotToManageBP(FName& OutSquadId, int32_t& OutSquadSlotIndex); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414E92F00
	};


	// Class SaveTheWorldUI.FortSquadSlotItemDetailsHostPanel
	// Inherited from UFortItemDetailsHostPanel -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x3E0 - 0x3C0)
	class UFortSquadSlotItemDetailsHostPanel : public UFortItemDetailsHostPanel	
	{
	public:
		unsigned char UnknownData01_1[0x20]; // 0x3C0(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortSquadSlotItemDetailsHostPanel");
			return ret;
		}

		void SetIdOfSquadSlotToManageBP(FName& SquadID, int32_t SquadSlotIndex); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414E93600
		bool IsSquadSlotLockedBP(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E93520
		UFortItem GetItemInSquadSlotBP(ULocalPlayer LocalPlayer); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E93440
		void GetIdOfSquadSlotToManageBP(FName& OutSquadId, int32_t& OutSquadSlotIndex); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414E93360
	};


	// Class SaveTheWorldUI.FortSquadSlotItemPicker
	// Inherited from UFortItemPickerBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xC8 (0x4E0 - 0x418)
	class UFortSquadSlotItemPicker : public UFortItemPickerBase	
	{
	public:
		unsigned char UnknownData02_3[0x38]; // 0x418(0x38) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnSortChanged; // 0x450(0x10)
		unsigned char UnknownData03_7[0x80]; // 0x460(0x80) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortSquadSlotItemPicker");
			return ret;
		}

		void SetSortTypes(FSquadSlotSortTypes SquadSlotSortTypes); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4140FEEE8
		void SetIdOfSquadSlotToManageBP(FName& SquadID, int32_t SquadSlotIndex); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF4140FEE08
		void GetIdOfSquadSlotToManageBP(FName& OutSquadId, int32_t& OutSquadSlotIndex); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF4140FED28
		void FortSquadSlotSortChanged__DelegateSignature(ESquadSlotSortType CurrentSortType, ESquadSlotType SquadSlotType); // Flags: MulticastDelegate|Public|Delegate 0x7FF4140FEBE0
	};


	// Class SaveTheWorldUI.FortSquadSlotItemPickerTileButton
	// Inherited from UFortItemTileButton -> UCommonButtonLegacy -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x18 (0x1430 - 0x1418)
	class UFortSquadSlotItemPickerTileButton : public UFortItemTileButton	
	{
	public:
		unsigned char UnknownData01_1[0x18]; // 0x1418(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortSquadSlotItemPickerTileButton");
			return ret;
		}

		void HandleSlottingRestrictionReasonsChanged(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E938A0
		void HandleItemSlottedToDifferentSquad(FHomebaseSquadSlotId& SquadSlotId); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414E937C0
		TArray GetSlottingRestrictionReasons(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414E936E0
	};


	// Class SaveTheWorldUI.FortSquadSlotSelectorPopupMenu
	// Inherited from UFortPopupMenu_Legacy -> UCommonPopupMenuLegacy -> UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x558 - 0x550)
	class UFortSquadSlotSelectorPopupMenu : public UFortPopupMenu_Legacy	
	{
	public:
		bool bReadOnlyModeWIFE; // 0x550(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x551(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortSquadSlotSelectorPopupMenu");
			return ret;
		}

		bool IsScreenWIFE(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E93A60
		UFortSquadSlotSelectorButton GetHostButton(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414E93980
	};


	// Class SaveTheWorldUI.FortSquadSlotSurvivorTraitMatchesDetailWidget
	// Inherited from UFortSquadSlotItemDetailElementWidget -> UFortItemDetailElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x28 (0x380 - 0x358)
	class UFortSquadSlotSurvivorTraitMatchesDetailWidget : public UFortSquadSlotItemDetailElementWidget	
	{
	public:
		bool IsSquadLeaderSlot; // 0x358(0x1)
		bool LeaderMatchesSquadType; // 0x359(0x1)
		unsigned char UnknownData03_6[0x2]; // 0x35A(0x2) UNKNOWN PROPERTY
		int32_t SubordinatePersonalityMatchCount; // 0x35C(0x4)
		bool MatchesLeaderPersonality; // 0x360(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x361(0x3) UNKNOWN PROPERTY
		int32_t MatchingSetBonusCount; // 0x364(0x4)
		int32_t SetBonusSize; // 0x368(0x4)
		unsigned char UnknownData05_7[0x14]; // 0x36C(0x14) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortSquadSlotSurvivorTraitMatchesDetailWidget");
			return ret;
		}

		void HandleTraitValuesUpdatedBP(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E93B40
	};


	// Class SaveTheWorldUI.FortSquadSlotSelectorButton
	// Inherited from UCommonButtonLegacy -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x80 (0x1460 - 0x13E0)
	class UFortSquadSlotSelectorButton : public UCommonButtonLegacy	
	{
	public:
		unsigned char UnknownData02_3[0x20]; // 0x13E0(0x20) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnRequestOpenSquadSlotEvent; // 0x1400(0x10)
		FMulticastInlineDelegate OnRequestViewInAllEvent; // 0x1410(0x10)
		UFortSquadSlotWidget SquadSlotWidget; // 0x1420(0x8)
		UMenuAnchor PopupMenuAnchor; // 0x1428(0x8)
		TScriptInterface ItemViewContext; // 0x1430(0x10)
		unsigned char UnknownData03_6[0x18]; // 0x1440(0x18) UNKNOWN PROPERTY
		UCommonPopupMenuLegacy PopupMenu; // 0x1458(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortSquadSlotSelectorButton");
			return ret;
		}

		void ViewInAll(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E94400
		void SquadSlotWidgetUpdated(); // Flags: Native|Event|Public|BlueprintEvent 0x7FF414E94320
		void SetIdOfSquadSlotToManageBP(FName& SquadID, int32_t SquadSlotIndex); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414E94240
		void OpenSquadSlot(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E94160
		bool IsSquadSlotLockedBP(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E94080
		void HandlePreDifferentSquadSlotSetBP(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E93FA0
		void HandlePostDifferentSquadSlotSetBP(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E93EC0
		UUserWidget GetPopupMenu(); // Flags: Final|Native|Private 0x7FF414E93DE0
		bool GetInPreviewMode(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E93D00
		void GetIdOfSquadSlotToManageBP(FName& OutSquadId, int32_t& OutSquadSlotIndex); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414E93C20
	};


	// Class SaveTheWorldUI.FortSquadSlotsView
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xF8 (0x3D8 - 0x2E0)
	class UFortSquadSlotsView : public UCommonUserWidget	
	{
	public:
		unsigned char UnknownData05_3[0x10]; // 0x2E0(0x10) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnDifferentSquadSlotSelectedEvent; // 0x2F0(0x10)
		FMulticastInlineDelegate OnRequestOpenSquadSlotEvent; // 0x300(0x10)
		FMulticastInlineDelegate OnRequestViewInAllEvent; // 0x310(0x10)
		bool bReadOnlyModeWIFE; // 0x320(0x1)
		unsigned char UnknownData06_6[0x3]; // 0x321(0x3) UNKNOWN PROPERTY
		int32_t IndexOfSelectedSquadSlot; // 0x324(0x4)
		bool bSlotButtonsRequireSelection; // 0x328(0x1)
		bool bInPreviewMode; // 0x329(0x1)
		unsigned char UnknownData07_6[0x6]; // 0x32A(0x6) UNKNOWN PROPERTY
		TMap SquadSlotSortTypesMap; // 0x330(0x50)
		UClass DisableAutoSlottingToOpenSquadSlotPromptAction; // 0x380(0x8)
		UFortCommittableButtonGroup SquadSlotButtonGroup; // 0x388(0x8)
		unsigned char UnknownData08_6[0x30]; // 0x390(0x30) UNKNOWN PROPERTY
		TScriptInterface ItemViewContext; // 0x3C0(0x10)
		unsigned char UnknownData09_7[0x8]; // 0x3D0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortSquadSlotsView");
			return ret;
		}

		bool TryGetStaticSquadDataBP(FHomebaseSquad& OutSquadData); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF4140FFF28
		bool TryGetSelectedSquadSlotSortTypes(FSquadSlotSortTypes& OutSlotSortTypes); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF4140FFE48
		void SetIsSelectionLocked(bool ShouldSelectionBeLocked); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4140FFD68
		void SetInPreviewMode(bool bPreview); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4140FFC88
		void SetIdOfSquadToManageBP(FName& SquadID); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF4140FFBA8
		void SelectSlot(int32_t SquadSlotIndex); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4140FFAC8
		void OnDifferentSquadSlotSelected__DelegateSignature(int32_t SquadSlotIndex); // Flags: MulticastDelegate|Public|Delegate 0x7FF4140FF9E8
		void HandleSelectedButtonChanged(UCommonButtonLegacy SelectedButton, int32_t ButtonIndex); // Flags: Final|Native|Private 0x7FF4140FF908
		void HandleRequestViewInAll(int32_t SquadSlotIndex); // Flags: Final|Native|Private 0x7FF4140FF828
		void HandleRequestOpenSquadSlot(int32_t SquadSlotIndex); // Flags: Final|Native|Private 0x7FF4140FF748
		void HandleHoveredButtonChanged(UCommonButtonLegacy HoveredButton, int32_t ButtonIndex); // Flags: Final|Native|Private 0x7FF4140FF668
		void HandleButtonDoubleClicked(UCommonButtonLegacy CommittedButton, int32_t ButtonIndex); // Flags: Final|Native|Private 0x7FF4140FF588
		void HandleButtonClicked(UCommonButtonLegacy CommittedButton, int32_t ButtonIndex); // Flags: Final|Native|Private 0x7FF4140FF4A8
		int32_t GetIndexOfSelectedSquadSlot(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140FF3C8
		FName GetIdOfSquadToManageBP(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4140FF2E8
		UFortSquadSlotSelectorButton CreateAndAddSquadSlotButton(int32_t SquadSlotIndex, FHomebaseSquadSlot& SquadSlotDefinition, UWidget& OutSquadSlotButtonHost); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF4140FF088
	};


	// Class SaveTheWorldUI.FortSquadSlotWidget
	// Inherited from UWidget -> UVisual -> UObject
	// Size: 0x90 (0x1F0 - 0x160)
	class UFortSquadSlotWidget : public UWidget	
	{
	public:
		unsigned char UnknownData04_3[0x20]; // 0x160(0x20) UNKNOWN PROPERTY
		EFortItemCardSize ItemCardSize; // 0x180(0x1)
		unsigned char UnknownData05_6[0x3F]; // 0x181(0x3F) UNKNOWN PROPERTY
		UFortMultiSizeItemCard SlottedItemCard; // 0x1C0(0x8)
		unsigned char UnknownData06_6[0x8]; // 0x1C8(0x8) UNKNOWN PROPERTY
		TScriptInterface ItemViewContext; // 0x1D0(0x10)
		unsigned char UnknownData07_7[0x10]; // 0x1E0(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortSquadSlotWidget");
			return ret;
		}

		void SetIdOfSquadSlotToManageBP(FName& SquadID, int32_t SquadSlotIndex); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414E94860
		void SetCardSize(EFortItemCardSize CardSize); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E94780
		bool IsSquadSlotLockedBP(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E946A0
		UFortItem GetItemInSquadSlotBP(ULocalPlayer LocalPlayer); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E945C0
		void GetIdOfSquadSlotToManageBP(FName& OutSquadId, int32_t& OutSquadSlotIndex); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414E944E0
	};


	// Class SaveTheWorldUI.FortSquadStatDetailsWidget
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x30 (0x310 - 0x2E0)
	class UFortSquadStatDetailsWidget : public UCommonUserWidget	
	{
	public:
		unsigned char UnknownData01_1[0x30]; // 0x2E0(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortSquadStatDetailsWidget");
			return ret;
		}
	};


	// Class SaveTheWorldUI.FortSquadStatsWidgetBase
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x38 (0x318 - 0x2E0)
	class UFortSquadStatsWidgetBase : public UCommonUserWidget	
	{
	public:
		TArray OverviewStats; // 0x2E0(0x10)
		UFortAttributeList_NUI DetailedStats; // 0x2F0(0x8)
		unsigned char UnknownData01_7[0x20]; // 0x2F8(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortSquadStatsWidgetBase");
			return ret;
		}

		void RequestStatsUpdate(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E94CC0
		void RequestShowPreviewStats(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E94BE0
		void HandleSquadSlottingPreviewStateChanged(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E94B00
		void HandlePowerRatingChanged_BP(bool bHasTeamMebers); // Flags: Event|Public|BlueprintEvent 0x7FF414E94A20
		FUniqueNetIdRepl GetLocalPlayerId(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E94940
	};


	// Class SaveTheWorldUI.FortSquadStatValueWithIcon
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x88 (0x368 - 0x2E0)
	class UFortSquadStatValueWithIcon : public UCommonUserWidget	
	{
	public:
		FGameplayAttribute Attribute; // 0x2E0(0x38)
		FGameplayAttribute TeamAttribute; // 0x318(0x38)
		TEnumAsByte ImageSize; // 0x350(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x351(0x7) UNKNOWN PROPERTY
		UCommonNumericTextBlock Value; // 0x358(0x8)
		UImage Icon; // 0x360(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortSquadStatValueWithIcon");
			return ret;
		}

		void HandleDifferentAttributeSetBP(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E94DA0
	};


	// Class SaveTheWorldUI.FortSquadTypeLandingPageBase
	// Inherited from UFortActivatablePanel -> UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x38 (0x5A0 - 0x568)
	class UFortSquadTypeLandingPageBase : public UFortActivatablePanel	
	{
	public:
		bool bReadOnlyModeWIFE; // 0x568(0x1)
		EFortHomebaseSquadType SquadType; // 0x569(0x1)
		unsigned char UnknownData03_6[0x6]; // 0x56A(0x6) UNKNOWN PROPERTY
		FDataTableRowHandle BackInputActionRowHandle; // 0x570(0x10)
		EFortFrontendInventoryFilter ItemManagementScreenFilter; // 0x580(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x581(0x7) UNKNOWN PROPERTY
		TArray SquadSelectorButtons; // 0x588(0x10)
		unsigned char UnknownData05_7[0x8]; // 0x598(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortSquadTypeLandingPageBase");
			return ret;
		}

		void ShowWarningReadOnlyWIFE(bool Force); // Flags: Event|Public|BlueprintCallable|BlueprintEvent 0x7FF414E95200
		bool IsScreenWIFE(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E95120
		void HandlePendingNavigationOp(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E95040
		void HandleBackInputAction(bool& bPassThrough); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable 0x7FF414E94F60
		UFortSquadSelectorButton CreateAndAddSquadButton(FName& SquadID); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414E94E80
	};


	// Class SaveTheWorldUI.FortStatIcon
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x48 (0x328 - 0x2E0)
	class UFortStatIcon : public UCommonUserWidget	
	{
	public:
		FGameplayAttribute Attribute; // 0x2E0(0x38)
		TEnumAsByte ImageSize; // 0x318(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x319(0x7) UNKNOWN PROPERTY
		UImage Icon; // 0x320(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortStatIcon");
			return ret;
		}

		void SetAttribute(FGameplayAttribute& InAttribute); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414E953C0
		void HandleDifferentAttributeSetBP(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E952E0
	};


	// Class SaveTheWorldUI.FortSurvivorSquadManagementScreen
	// Inherited from UFortSquadManagementScreenBase -> UFortActivatablePanel -> UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xE0 (0x768 - 0x688)
	class UFortSurvivorSquadManagementScreen : public UFortSquadManagementScreenBase	
	{
	public:
		UFortSurvivorSquadStatMatchesBase StatMatchesWidget; // 0x688(0x8)
		unsigned char UnknownData01_7[0xD8]; // 0x690(0xD8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortSurvivorSquadManagementScreen");
			return ret;
		}

		void UpdateCycleButtons(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E95660
		void ShowHelpDialog(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E95580
		void PlayFeedbackForSlottingPerson(UFortWorker Worker, int32_t SlotIndex, FFortSurvivorSquadSlottingFeedbackData& FeedbackData); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414E954A0
	};


	// Class SaveTheWorldUI.FortSurvivorSquadSelectorButton
	// Inherited from UFortSquadSelectorButton -> UCommonButtonLegacy -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x1420 - 0x1400)
	class UFortSurvivorSquadSelectorButton : public UFortSquadSelectorButton	
	{
	public:
		TArray FortStatAttributes; // 0x1400(0x10)
		TArray FortTeamStatAttributes; // 0x1410(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortSurvivorSquadSelectorButton");
			return ret;
		}

		bool TryGetSummaryStats(FFortSurvivorSquadSelectorButtonSummaryStats& OutSummaryStats); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414E95900
		bool TryGetSquadMembers(TArray& OutSquadMembers); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414E95820
		bool TryGetPersonalityMatches(FFortSurvivorSquadSelectorButtonPersonalityMatches& OutPersonalityMatches); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414E95740
	};


	// Class SaveTheWorldUI.FortSurvivorSquadStatMatchBase
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x460 (0x740 - 0x2E0)
	class UFortSurvivorSquadStatMatchBase : public UCommonUserWidget	
	{
	public:
		unsigned char UnknownData01_3[0x10]; // 0x2E0(0x10) UNKNOWN PROPERTY
		FFortUISurvivorSquadStatMatch StatMatch; // 0x2F0(0x450)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortSurvivorSquadStatMatchBase");
			return ret;
		}

		void OnStatMatchUpdated(FFortUISurvivorSquadStatMatch UpdatedMatch); // Flags: Event|Protected|BlueprintEvent 0x7FF414E959E0
	};


	// Class SaveTheWorldUI.FortSurvivorSquadStatMatchesBase
	// Inherited from UFortSquadStatDetailsWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x30 (0x340 - 0x310)
	class UFortSurvivorSquadStatMatchesBase : public UFortSquadStatDetailsWidget	
	{
	public:
		UClass StatMatchClass; // 0x310(0x8)
		bool bSummaryView; // 0x318(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x319(0x7) UNKNOWN PROPERTY
		TArray StatMatches; // 0x320(0x10)
		unsigned char UnknownData03_7[0x10]; // 0x330(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortSurvivorSquadStatMatchesBase");
			return ret;
		}

		bool TryGetStaticSquadDataBP(FHomebaseSquad& OutSquadData); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414E95F20
		void SetSummaryView(bool bInSummaryView); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E95E40
		void SetIdOfSquadToManageBP(FName& SquadID); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414E95D60
		void HandleDifferentSquadSetBP(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E95C80
		FName GetIdOfSquadToManageBP(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E95BA0
		void AddStatMatch(UFortSurvivorSquadStatMatchBase SetBonus); // Flags: Event|Protected|BlueprintEvent 0x7FF414E95AC0
	};


	// Class SaveTheWorldUI.FortSurvivorSquadSummaryStatItem
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x300 - 0x2E0)
	class UFortSurvivorSquadSummaryStatItem : public UCommonUserWidget	
	{
	public:
		TEnumAsByte ImageSize; // 0x2E0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x2E1(0x7) UNKNOWN PROPERTY
		UImage Icon; // 0x2E8(0x8)
		UCommonTextBlock Value; // 0x2F0(0x8)
		UCommonTextBlock Name; // 0x2F8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortSurvivorSquadSummaryStatItem");
			return ret;
		}

		void SetAttributeModifierAccumulation(FFortAttributeModifierAccumulation& Accumulation); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414E96000
	};


	// Class SaveTheWorldUI.FortWorkerSetBonusIcon
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x2F0 - 0x2E0)
	class UFortWorkerSetBonusIcon : public UCommonUserWidget	
	{
	public:
		FGameplayTag GameplayTag; // 0x2E0(0x4)
		TEnumAsByte ImageSize; // 0x2E4(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x2E5(0x3) UNKNOWN PROPERTY
		UImage Icon; // 0x2E8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortWorkerSetBonusIcon");
			return ret;
		}

		void SetGameplayTag(FGameplayTag& InGameplayTag); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414E961C0
		void HandleDifferentGameplayTagSetBP(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E960E0
	};


	// Class SaveTheWorldUI.FortSelectableAttributeListItem
	// Inherited from UCommonButtonLegacy -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x13F0 - 0x13E0)
	class UFortSelectableAttributeListItem : public UCommonButtonLegacy	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x13E0(0x8) UNKNOWN PROPERTY
		UFortAttributeListItem_NUI AttributeListItem; // 0x13E8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortSelectableAttributeListItem");
			return ret;
		}
	};


	// Class SaveTheWorldUI.FortStatsOverviewDetailsBase
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x38 (0x318 - 0x2E0)
	class UFortStatsOverviewDetailsBase : public UCommonUserWidget	
	{
	public:
		TArray OverviewStats; // 0x2E0(0x10)
		UFortAttributeList_NUI DetailedStats; // 0x2F0(0x8)
		unsigned char UnknownData01_7[0x20]; // 0x2F8(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortStatsOverviewDetailsBase");
			return ret;
		}

		void RequestStatsUpdate(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E96460
		void ListenForChanges(bool bListen); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E96380
		FUniqueNetIdRepl GetLocalPlayerId(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E962A0
	};


	// Class SaveTheWorldUI.FortLlamaStoreData
	// Inherited from UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x48 (0x78 - 0x30)
	class UFortLlamaStoreData : public UPrimaryDataAsset	
	{
	public:
		TArray RandomLoadingTexts; // 0x30(0x10)
		FName NotEnoughCurrencyDialogCloseAction; // 0x40(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x44(0x4) UNKNOWN PROPERTY
		UClass InspectWidgetClass; // 0x48(0x8)
		float ShowOfferDelay; // 0x50(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x54(0x4) UNKNOWN PROPERTY
		UClass StoreOpeningCardPackClass; // 0x58(0x8)
		UClass StoreOpeningCardPackClass_Legacy; // 0x60(0x8)
		UClass UnopenedCardpacksModalClass; // 0x68(0x8)
		UClass UnopenedCardpacksModalClass_Legacy; // 0x70(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortLlamaStoreData");
			return ret;
		}
	};


	// Class SaveTheWorldUI.FortLlamaStoreBase
	// Inherited from UFortDirectAcquisitionWidgetBase -> UFortMtxStoreRootBase -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xA0 (0x580 - 0x4E0)
	class UFortLlamaStoreBase : public UFortDirectAcquisitionWidgetBase	
	{
	public:
		TArray OfferCategoriesToDisplay; // 0x4E0(0x10)
		FDataTableRowHandle TencentDetailsActionData; // 0x4F0(0x10)
		FDataTableRowHandle AddVBucksActionData; // 0x500(0x10)
		bool bShouldShowAddVBucksAction; // 0x510(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x511(0x7) UNKNOWN PROPERTY
		UDynamicEntryBox OfferEntryBox; // 0x518(0x8)
		UCommonButtonGroupBase OfferButtonGroup; // 0x520(0x8)
		UFortLlamaStoreDetailsBase OfferDetails; // 0x528(0x8)
		UFortLlamaStoreData StoreData; // 0x530(0x8)
		UCommonButtonBase Button_UnopenedLlamas; // 0x538(0x8)
		UFortLlamaStoreOfferInfo PendingPurchaseOffer; // 0x540(0x8)
		bool bHideSoldOffers; // 0x548(0x1)
		unsigned char UnknownData03_7[0x37]; // 0x549(0x37) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortLlamaStoreBase");
			return ret;
		}

		void SwapToCardEnterState(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E969A0
		void SetupFocus(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E968C0
		void OnStoreStateChanged(EFortStoreState NewStoreState); // Flags: Final|Native|Protected 0x7FF414E967E0
		void OnStorePurchaseCompleted(); // Flags: Final|Native|Private 0x7FF414E96700
		void HandleTencentDetails(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E96620
		void HandleAddVBucks(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E96540
	};


	// Class SaveTheWorldUI.FortLlamaStoreBase_Legacy
	// Inherited from UFortDirectAcquisitionWidgetBase_Legacy -> UFortMtxStoreRootBase_Legacy -> UFortActivatablePanel -> UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x78 (0x6C0 - 0x648)
	class UFortLlamaStoreBase_Legacy : public UFortDirectAcquisitionWidgetBase_Legacy	
	{
	public:
		TArray OfferCategoriesToDisplay; // 0x648(0x10)
		UDynamicEntryBox OfferEntryBox; // 0x658(0x8)
		UCommonButtonGroupLegacy OfferButtonGroup; // 0x660(0x8)
		UFortLlamaStoreDetailsBase OfferDetails; // 0x668(0x8)
		UFortLlamaStoreData StoreData; // 0x670(0x8)
		UCommonButtonLegacy Button_UnopenedLlamas; // 0x678(0x8)
		UFortLlamaStoreOfferInfo PendingPurchaseOffer; // 0x680(0x8)
		UCommonActivatablePanelLegacy StoreOpeningCardPack; // 0x688(0x8)
		bool bHideSoldOffers; // 0x690(0x1)
		unsigned char UnknownData01_7[0x2F]; // 0x691(0x2F) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortLlamaStoreBase_Legacy");
			return ret;
		}

		void SwapToCardEnterState(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E96D20
		void SetupFocus(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E96C40
		void OnStoreStateChanged(EFortStoreState NewStoreState); // Flags: Final|Native|Protected 0x7FF414E96B60
		void OnStorePurchaseCompleted(); // Flags: Final|Native|Private 0x7FF414E96A80
	};


	// Class SaveTheWorldUI.FortLlamaStoreDetailsBase
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x300 - 0x2E0)
	class UFortLlamaStoreDetailsBase : public UCommonUserWidget	
	{
	public:
		UFortStoreFrontOfferInfo OfferInfo; // 0x2E0(0x8)
		UCommonTileView ItemTileView; // 0x2E8(0x8)
		unsigned char UnknownData01_7[0x10]; // 0x2F0(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortLlamaStoreDetailsBase");
			return ret;
		}

		void StartUpgradingToSilver(); // Flags: Event|Public|BlueprintEvent 0x7FF414E97340
		void StartUpgradingToGold(); // Flags: Event|Public|BlueprintEvent 0x7FF414E97260
		void SetScrollWidget(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E97180
		void OnOfferInfoChanged(int32_t CurrentOfferRarity); // Flags: Event|Protected|BlueprintEvent 0x7FF414E970A0
		int32_t GetNotInCollectionBookCount(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414E96FC0
		int32_t GetNewItemCount(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414E96EE0
		int32_t GetChoiceItemCount(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414E96E00
	};


	// Class SaveTheWorldUI.FortLlamaStoreInspectionScreen
	// Inherited from UFortStoreFrontOfferDetailsWidgetBase -> UFortActivatablePanelWithItemPreview -> UFortActivatablePanel -> UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x40 (0x868 - 0x828)
	class UFortLlamaStoreInspectionScreen : public UFortStoreFrontOfferDetailsWidgetBase	
	{
	public:
		UCommonTileView GrantedItemTileView; // 0x828(0x8)
		UCommonTileView ChoiceTileView; // 0x830(0x8)
		bool bIsInChoiceViewMode; // 0x838(0x1)
		bool bIsPurchasing; // 0x839(0x1)
		unsigned char UnknownData02_6[0x6]; // 0x83A(0x6) UNKNOWN PROPERTY
		FDataTableRowHandle InspectChoiceInputAction; // 0x840(0x10)
		FDataTableRowHandle BackInputAction; // 0x850(0x10)
		unsigned char UnknownData03_7[0x8]; // 0x860(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortLlamaStoreInspectionScreen");
			return ret;
		}

		void SetIsPurchasing(bool bNewIsPurchasing); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E97CE0
		bool IsItemChoicePack(UObject ItemToCheck); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414E97C00
		void InspectItem(UObject ItemToInspect, bool bCanEnterChoiceViewMode); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E97B20
		void HandleInspectChoice(bool& bPassThrough); // Flags: Final|Native|Protected|HasOutParms 0x7FF414E97A40
		void HandleBack(bool& bPassThrough); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable 0x7FF414E97960
		UFortCardPackItem GetSelectedCardPack(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414E97880
		bool GetIsPurchasing(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E977A0
		EInputActionState GetInspectChoiceInputState(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414E976C0
		void BP_InspectFortItem(UFortItem ItemToInspect, bool bForChoice); // Flags: Event|Protected|BlueprintEvent 0x7FF414E975E0
		void BP_CheckViewVaultItem(UFortItem ItemToCheck); // Flags: Event|Protected|BlueprintEvent 0x7FF414E97500
		void BP_BackOutFromItemViewMode(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E97420
	};


	// Class SaveTheWorldUI.FortOpenCardPackModal
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x40 (0x438 - 0x3F8)
	class UFortOpenCardPackModal : public UCommonActivatableWidget	
	{
	public:
		UCommonListView CardPackList; // 0x3F8(0x8)
		UCommonButtonBase OpenAllButton; // 0x400(0x8)
		UCommonButtonBase CancelButton; // 0x408(0x8)
		FMulticastInlineDelegate BPOnRequestOpenCardPack; // 0x410(0x10)
		unsigned char UnknownData01_7[0x18]; // 0x420(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortOpenCardPackModal");
			return ret;
		}
	};


	// Class SaveTheWorldUI.FortOpenCardPackModal_Legacy
	// Inherited from UFortActivatablePanel -> UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x40 (0x5A8 - 0x568)
	class UFortOpenCardPackModal_Legacy : public UFortActivatablePanel	
	{
	public:
		UCommonListView CardPackList; // 0x568(0x8)
		UCommonButtonLegacy OpenAllButton; // 0x570(0x8)
		UCommonButtonLegacy CancelButton; // 0x578(0x8)
		FMulticastInlineDelegate BPOnRequestOpenCardPack; // 0x580(0x10)
		unsigned char UnknownData01_7[0x18]; // 0x590(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortOpenCardPackModal_Legacy");
			return ret;
		}
	};


	// Class SaveTheWorldUI.StWHUD
	// Inherited from UFortUIStateWidget_STW -> UFortUIStateWidgetBase -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x178 (0x590 - 0x418)
	class UStWHUD : public UFortUIStateWidget_STW	
	{
	public:
		UFortPickerData PickerData; // 0x418(0x8)
		TWeakObjectPtr EmotePickerClass; // 0x420(0x20)
		unsigned char UnknownData04_6[0x8]; // 0x440(0x8) UNKNOWN PROPERTY
		TWeakObjectPtr ManagementTabsScreenClass; // 0x448(0x20)
		TWeakObjectPtr TopBarClass; // 0x468(0x20)
		TWeakObjectPtr MissionActivationWidgetClass; // 0x488(0x20)
		TWeakObjectPtr PostGameScreenClass; // 0x4A8(0x20)
		TWeakObjectPtr DefenderConfigPanelClass; // 0x4C8(0x20)
		FMulticastInlineDelegate OnSTWHUDMenuStackChanged; // 0x4E8(0x10)
		int32_t ReticleExtensionSize; // 0x4F8(0x4)
		unsigned char UnknownData05_6[0x4]; // 0x4FC(0x4) UNKNOWN PROPERTY
		UCommonUserWidget BottomBarWidget; // 0x500(0x8)
		UOverlay PersistentHUDContent; // 0x508(0x8)
		UCommonActivatableWidget TitleBar; // 0x510(0x8)
		UWidgetSwitcher ContentSwitcher; // 0x518(0x8)
		UFortActivatableChatWidget ChatWidget_STW; // 0x520(0x8)
		USpacer ChatSpacer; // 0x528(0x8)
		TWeakObjectPtr InspectionScreenClass; // 0x530(0x20)
		unsigned char UnknownData06_6[0x10]; // 0x550(0x10) UNKNOWN PROPERTY
		UFortCraftingBarWidget CraftingBar; // 0x560(0x8)
		UOverlay IndicatorContent; // 0x568(0x8)
		unsigned char UnknownData07_6[0x8]; // 0x570(0x8) UNKNOWN PROPERTY
		UFortWeaponReticleExtensionWidgetBase CurrentCustomReticleExtension; // 0x578(0x8)
		TArray RecentReticleExtensions; // 0x580(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.StWHUD");
			return ret;
		}

		void OnHUDScaleChanged(float HUDScale); // Flags: Event|Protected|BlueprintEvent 0x7FF414E983E0
		void OnAutoHideBuildingMaterialsChanged(bool bGetAutoHideBuildingMaterials); // Flags: Event|Protected|BlueprintEvent 0x7FF414E98300
		void NativeHandleWeaponEquipped(AFortWeapon NewWeapon, AFortWeapon PrevWeapon); // Flags: Final|Native|Public 0x7FF414E98220
		void HandleZoneCompleted(); // Flags: Final|Native|Protected 0x7FF414E98140
		void HandlePickerOpenRequest(EFortPickerMode Mode, int32_t InitialOption, bool bIgnoreFirstAccept); // Flags: Final|Native|Protected 0x7FF414E98060
		void HandleManagementTabsOpen_BP(UCommonActivatableWidget ManagementScreen); // Flags: Event|Protected|BlueprintEvent 0x7FF414E97F80
		void HandleGameViewportActivationChanged(bool bHasFocus); // Flags: Final|Native|Protected 0x7FF414E97EA0
		void HandleCursorModeChanged(bool bCursorModeEnabled, FName ActionName, UUserWidget CursorModeContentWidget); // Flags: Final|Native|Protected 0x7FF414E97DC0
	};


	// Class SaveTheWorldUI.FortTheaterSelect
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x30 (0x428 - 0x3F8)
	class UFortTheaterSelect : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData02_3[0x10]; // 0x3F8(0x10) UNKNOWN PROPERTY
		UOverlay OverlayMain; // 0x408(0x8)
		unsigned char UnknownData03_6[0x10]; // 0x410(0x10) UNKNOWN PROPERTY
		UFortQuestItemDefinition DefaultRequiredCompletedQuest; // 0x420(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortTheaterSelect");
			return ret;
		}

		void OnNavigationRight(); // Flags: Event|Public|BlueprintEvent 0x7FF414E98680
		void OnNavigationLeft(); // Flags: Event|Public|BlueprintEvent 0x7FF414E985A0
		bool GetTheaterRecommendedRatingRange(FString UniqueID, int32_t& Minimum, int32_t& Maximum); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414E984C0
	};


	// Class SaveTheWorldUI.FortTheaterSelect_Legacy
	// Inherited from UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x30 (0x560 - 0x530)
	class UFortTheaterSelect_Legacy : public UCommonActivatablePanelLegacy	
	{
	public:
		unsigned char UnknownData02_3[0x10]; // 0x530(0x10) UNKNOWN PROPERTY
		UOverlay OverlayMain; // 0x540(0x8)
		unsigned char UnknownData03_6[0x10]; // 0x548(0x10) UNKNOWN PROPERTY
		UFortQuestItemDefinition DefaultRequiredCompletedQuest; // 0x558(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortTheaterSelect_Legacy");
			return ret;
		}

		void OnNavigationRight(); // Flags: Event|Public|BlueprintEvent 0x7FF414E98920
		void OnNavigationLeft(); // Flags: Event|Public|BlueprintEvent 0x7FF414E98840
		bool GetTheaterRecommendedRatingRange(FString UniqueID, int32_t& Minimum, int32_t& Maximum); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414E98760
	};


	// Class SaveTheWorldUI.FortBangWrapperContentButton
	// Inherited from UCommonButtonLegacy -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x1400 - 0x13E0)
	class UFortBangWrapperContentButton : public UCommonButtonLegacy	
	{
	public:
		unsigned char UnknownData01_1[0x20]; // 0x13E0(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortBangWrapperContentButton");
			return ret;
		}

		void FinishTutorialCallout(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E98A00
	};


	// Class SaveTheWorldUI.FortBangWrapperContentWidget
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x18 (0x2F8 - 0x2E0)
	class UFortBangWrapperContentWidget : public UCommonUserWidget	
	{
	public:
		unsigned char UnknownData01_1[0x18]; // 0x2E0(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortBangWrapperContentWidget");
			return ret;
		}

		void FinishTutorialCallout(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E98AE0
	};


	// Class SaveTheWorldUI.FortHomebaseNodeItemTooltip
	// Inherited from UFortItemTooltip -> UFortTooltip -> UObject
	// Size: 0x20 (0x68 - 0x48)
	class UFortHomebaseNodeItemTooltip : public UFortItemTooltip	
	{
	public:
		unsigned char UnknownData01_1[0x20]; // 0x48(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortHomebaseNodeItemTooltip");
			return ret;
		}
	};


	// Class SaveTheWorldUI.FortUpgradeDetailsBase
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x40 (0x320 - 0x2E0)
	class UFortUpgradeDetailsBase : public UCommonUserWidget	
	{
	public:
		UMediaPlayer VideoPlayer; // 0x2E0(0x8)
		UFortUpgradeInfo UpgradeInfo; // 0x2E8(0x8)
		unsigned char UnknownData01_7[0x30]; // 0x2F0(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortUpgradeDetailsBase");
			return ret;
		}

		void RequestPurchaseNode(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E98F40
		void OnUpgradeToDetailChanged(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E98E60
		void OnShowIcon(UTexture2D Icon); // Flags: Event|Protected|BlueprintEvent 0x7FF414E98D80
		void OnScreenActive(); // Flags: Event|Public|BlueprintEvent 0x7FF414E98CA0
		void OnPurchaseComplete(); // Flags: Event|Public|BlueprintEvent 0x7FF414E98BC0
	};


	// Class SaveTheWorldUI.FortUpgradeInfo
	// Inherited from UObject
	// Size: 0x70 (0x98 - 0x28)
	class UFortUpgradeInfo : public UObject	
	{
	public:
		unsigned char UnknownData02_3[0x20]; // 0x28(0x20) UNKNOWN PROPERTY
		UFortHomebaseNodeItemDefinition NodeItemDef; // 0x48(0x8)
		unsigned char UnknownData03_7[0x48]; // 0x50(0x48) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortUpgradeInfo");
			return ret;
		}

		bool IsUpgradeUnlocked(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E99FE0
		bool IsPreviewing(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E99F00
		UMediaSource GetVideo(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E99E20
		int32_t GetUpgradeUnlockLevel(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E99D40
		FText GetTitle(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E99C60
		FText GetNextLevelTitle(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E99B80
		FText GetNextLevelDescription(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E99AA0
		int32_t GetNextLevel(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E999C0
		int32_t GetMaxLevel(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E998E0
		FText GetItemName(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E99800
		TWeakObjectPtr GetIcon(EUpgradeInfoImageSize ImageSize); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E99720
		bool GetDisplayAttributes(TArray& OutDisplayAttributes); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414E99640
		FText GetDescription(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E99560
		int32_t GetCurrentLevel(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E99480
		int32_t GetCost(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E993A0
		void ForwardPreview(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E992C0
		bool CanPreview(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E991E0
		bool CanAffordUpgrade(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414E99100
		void BackwardPreview(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414E99020
	};


	// Class SaveTheWorldUI.FortUpgradeScreenBase
	// Inherited from UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x110 (0x640 - 0x530)
	class UFortUpgradeScreenBase : public UCommonActivatablePanelLegacy	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x530(0x8) UNKNOWN PROPERTY
		UFortTabListWidgetBase UpgradesTabSelector; // 0x538(0x8)
		UCommonTileView UpgradesTileView; // 0x540(0x8)
		UCommonLoadGuard UpgradeTileViewLoadGuard; // 0x548(0x8)
		UFortUpgradeDetailsBase Details; // 0x550(0x8)
		TMap TabToNodeTypeMap; // 0x558(0x50)
		UFortItemDefinition UpgradesRespecToken; // 0x5A8(0x8)
		unsigned char UnknownData03_6[0x50]; // 0x5B0(0x50) UNKNOWN PROPERTY
		FDataTableRowHandle RespecInputAction; // 0x600(0x10)
		FDataTableRowHandle StartPreviewUpgradesInputAction; // 0x610(0x10)
		FDataTableRowHandle StopPreviewUpgradesInputAction; // 0x620(0x10)
		FDataTableRowHandle BackInputAction; // 0x630(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortUpgradeScreenBase");
			return ret;
		}

		void UseUpgradesRespecToken(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E9ADE0
		void TogglePreview(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E9AD00
		void RefreshInputActionStates(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E9AC20
		void RefreshFocus(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E9AB40
		void OnUseUpgradesRespecTokenComplete(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E9AA60
		void OnUpgradeInfoChanged(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E9A980
		void OnPurchaseNodeComplete(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E9A8A0
		bool IsPreviewing(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414E9A7C0
		void HandleTabSelected(FName TabID); // Flags: Final|Native|Private 0x7FF414E9A6E0
		void HandleStopPreview(); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414E9A600
		void HandleStartPreview(); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414E9A520
		void HandleRespec(bool& bPassThrough); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414E9A440
		int32_t GetUpgradesRespecTokenCount(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414E9A360
		bool CanPreview(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414E9A280
		void BackAction(bool& bPassThrough); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414E9A1A0
		bool AreUpgradesRespecTokensAvailable(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414E9A0C0
	};


	// Class SaveTheWorldUI.FortUpgradeScreenBase_Legacy
	// Inherited from UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xC8 (0x5F8 - 0x530)
	class UFortUpgradeScreenBase_Legacy : public UCommonActivatablePanelLegacy	
	{
	public:
		UFortTabListWidgetBase_Legacy UpgradesTabSelector; // 0x530(0x8)
		UCommonTileView UpgradesTileView; // 0x538(0x8)
		UCommonLoadGuard UpgradeTileViewLoadGuard; // 0x540(0x8)
		UFortUpgradeDetailsBase Details; // 0x548(0x8)
		TMap TabToNodeTypeMap; // 0x550(0x50)
		UFortItemDefinition UpgradesRespecToken; // 0x5A0(0x8)
		unsigned char UnknownData01_7[0x50]; // 0x5A8(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortUpgradeScreenBase_Legacy");
			return ret;
		}

		void UseUpgradesRespecToken(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E9B780
		void TogglePreview(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E9B6A0
		void RefreshFocus(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E9B5C0
		void OnUseUpgradesRespecTokenComplete(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E9B4E0
		void OnUpgradeInfoChanged(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E9B400
		void OnPurchaseNodeComplete(); // Flags: Event|Protected|BlueprintEvent 0x7FF414E9B320
		bool IsPreviewing(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414E9B240
		void HandleTabSelected(FName TabID); // Flags: Final|Native|Private 0x7FF414E9B160
		int32_t GetUpgradesRespecTokenCount(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414E9B080
		bool CanPreview(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414E9AFA0
		bool AreUpgradesRespecTokensAvailable(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414E9AEC0
	};


	// Class SaveTheWorldUI.FortUpgradeTileBase
	// Inherited from UCommonButtonLegacy -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x13F0 - 0x13E0)
	class UFortUpgradeTileBase : public UCommonButtonLegacy	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x13E0(0x8) UNKNOWN PROPERTY
		UFortUpgradeInfo UpgradeInfo; // 0x13E8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortUpgradeTileBase");
			return ret;
		}

		void OnDataRefresh(bool bUpgrade); // Flags: Event|Protected|BlueprintEvent 0x7FF414E9B860
	};


	// Class SaveTheWorldUI.FortUpgradeTileBase_Legacy
	// Inherited from UCommonButtonLegacy -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x13F0 - 0x13E0)
	class UFortUpgradeTileBase_Legacy : public UCommonButtonLegacy	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x13E0(0x8) UNKNOWN PROPERTY
		UFortUpgradeInfo UpgradeInfo; // 0x13E8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortUpgradeTileBase_Legacy");
			return ret;
		}

		void OnDataRefresh(bool bUpgrade); // Flags: Event|Protected|BlueprintEvent 0x7FF414E9B940
	};

}
