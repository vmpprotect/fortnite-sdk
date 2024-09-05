#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: SaveTheWorldUI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class SaveTheWorldUI.BottomBar_STW
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x2E0 - 0x2D8)
	class UBottomBar_STW : public UCommonUserWidget	
	{
	public:
		UBoundActionBarSTW* BoundActionBar_STW; // 0x2D8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.BottomBar_STW");
			return ret;
		}
	};


	// Class SaveTheWorldUI.BoundActionBarWithSecondaryBar
	// Inherited from UCommonBoundActionBar -> UDynamicEntryBoxBase -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x288 - 0x268)
	class UBoundActionBarWithSecondaryBar : public UCommonBoundActionBar	
	{
	public:
		UDynamicEntryBox* SecondaryActionBar; // 0x268(0x8)
		TArray<FDataTableRowHandle> SecondaryActionBarInputActions; // 0x270(0x10)
		UClass* SecondaryActionBarButtonClassOverride; // 0x280(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.BoundActionBarWithSecondaryBar");
			return ret;
		}
	};


	// Class SaveTheWorldUI.BoundActionBarSTW
	// Inherited from UBoundActionBarWithSecondaryBar -> UCommonBoundActionBar -> UDynamicEntryBoxBase -> UWidget -> UVisual -> UObject
	// Size: 0x18 (0x2A0 - 0x288)
	class UBoundActionBarSTW : public UBoundActionBarWithSecondaryBar	
	{
	public:
		unsigned char UnknownData00_1[0x18]; // 0x288(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.BoundActionBarSTW");
			return ret;
		}
	};


	// Class SaveTheWorldUI.FortEventStoreOfferDetailsScreen
	// Inherited from UFortStoreFrontOfferDetailsWidgetBase -> UFortActivatablePanelWithItemPreview -> UFortActivatablePanel -> UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x28 (0x848 - 0x820)
	class UFortEventStoreOfferDetailsScreen : public UFortStoreFrontOfferDetailsWidgetBase	
	{
	public:
		FDataTableRowHandle BackAction; // 0x820(0x10)
		FDataTableRowHandle UndoAction; // 0x830(0x10)
		bool bIsPurchasing; // 0x840(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x841(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortEventStoreOfferDetailsScreen");
			return ret;
		}

		void SetIsPurchasing(bool bNewIsPurchasing); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751D3ECC0(relative to base address)
		void HandleUndo(bool& bPassThrough); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751D3DEEC(relative to base address)
		void HandleBack(bool& bPassThrough); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751D3DAB0(relative to base address)
		bool GetIsPurchasing(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74ED4C2D0(relative to base address)
		void BP_HandleScreenClosed(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class SaveTheWorldUI.FortOutpostSubscreenBase
	// Inherited from UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x538 - 0x528)
	class UFortOutpostSubscreenBase : public UCommonActivatablePanelLegacy	
	{
	public:
		FDataTableRowHandle BackActionInputRowHandle; // 0x528(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortOutpostSubscreenBase");
			return ret;
		}

		void HandleBackAction(bool& bPassThrough); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF751D3DB3C(relative to base address)
		void BP_HandleBackAction(bool& bPassThrough); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class SaveTheWorldUI.FortIronCityContentScreen
	// Inherited from UFortOutpostSubscreenBase -> UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x538 - 0x538)
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
	// Size: 0x8 (0x550 - 0x548)
	class UFortItemManagementItemPopupMenu_STW : public UFortPopupMenu_Legacy	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x548(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortItemManagementItemPopupMenu_STW");
			return ret;
		}

		void MulchItem(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751D3DF84(relative to base address)
		void HandleItemChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleCompareAction(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751D3DBC8(relative to base address)
		UFortItemManagementItemTileButton_STW GetHostButton(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D3DA8C(relative to base address)
	};


	// Class SaveTheWorldUI.FortModalMenu_STW
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x3F8 - 0x3F0)
	class UFortModalMenu_STW : public UCommonActivatableWidget	
	{
	public:
		TWeakObjectPtr<UObject*> ContextProvidingObject; // 0x3F0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortModalMenu_STW");
			return ret;
		}

		void SetContextProvider(UObject* InContextProvidingObject); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D3EBC0(relative to base address)
	};


	// Class SaveTheWorldUI.FortOutpostPermissionsScreen
	// Inherited from UFortOutpostSubscreenBase -> UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x540 - 0x538)
	class UFortOutpostPermissionsScreen : public UFortOutpostSubscreenBase	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x538(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortOutpostPermissionsScreen");
			return ret;
		}
	};


	// Class SaveTheWorldUI.FortOutpostScreenStormShieldBase
	// Inherited from UFortOutpostSubscreenBase -> UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x538 - 0x538)
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
	// Size: 0x80 (0x358 - 0x2D8)
	class UFortQuestMapViewer : public UCommonUserWidget	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0x2D8(0x10) UNKNOWN PROPERTY
		UCommonButtonBase* Button_PageRight; // 0x2E8(0x8)
		UCommonButtonBase* Button_PageLeft; // 0x2F0(0x8)
		UCommonTextBlock* Text_Title; // 0x2F8(0x8)
		UCommonTextBlock* Text_Page; // 0x300(0x8)
		USizeBox* SizeBox_Viewer; // 0x308(0x8)
		UCanvasPanel* CanvasPanel_Cosmetic; // 0x310(0x8)
		UFortQuestMapScreen* ParentScreen; // 0x318(0x8)
		UFortQuestMapNodeLayout* NodeLayout; // 0x320(0x8)
		unsigned char UnknownData01_7[0x30]; // 0x328(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortQuestMapViewer");
			return ret;
		}

		void UpdateViewerData(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D3F06C(relative to base address)
		void OnTryUpdateUserWidgetColor(UUserWidget* Widget, FSlateColor OverrideColor); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPlayLayoutOutroAnimation(EViewerNavigationDirection TravelDirection); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPlayLayoutFadeInAnimation(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleLayoutOutroAnimationFinished(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D3DC34(relative to base address)
	};


	// Class SaveTheWorldUI.FortStoreOpeningCardPack
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x60 (0x450 - 0x3F0)
	class UFortStoreOpeningCardPack : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x3F0(0x8) UNKNOWN PROPERTY
		EFortStoreState CachedStoreState; // 0x3F8(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x3F9(0x7) UNKNOWN PROPERTY
		UFortStoreSummary* Store_Summary; // 0x400(0x8)
		TArray<FCard> CachedCards; // 0x408(0x10)
		UClass* CardItemWidgetType; // 0x418(0x8)
		UClass* CardItemWidgetStyle; // 0x420(0x8)
		TArray<UFortStoreSummaryItemButton*> CachedCardArraySinglePack; // 0x428(0x10)
		TArray<UFortStoreSummaryItemButton*> CachedCardArrayMultiplePacks; // 0x438(0x10)
		unsigned char UnknownData02_7[0x8]; // 0x448(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortStoreOpeningCardPack");
			return ret;
		}

		void HandleSummaryAdd(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751D3DED8(relative to base address)
		void HandleStoreStateChange_BP(EFortStoreState NewState); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleInputMethodChanged_BP(ECommonInputType CommonInput); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class SaveTheWorldUI.FortUIStateWidget_Cinematic
	// Inherited from UFortUIStateWidgetBase -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x410 - 0x408)
	class UFortUIStateWidget_Cinematic : public UFortUIStateWidgetBase	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x408(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortUIStateWidget_Cinematic");
			return ret;
		}
	};


	// Class SaveTheWorldUI.FortUIStateWidget_STW
	// Inherited from UFortUIStateWidgetBase -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x30 (0x438 - 0x408)
	class UFortUIStateWidget_STW : public UFortUIStateWidgetBase	
	{
	public:
		UMainMenu_STW* MainMenu_STW; // 0x408(0x8)
		UFortActivatableChatWidget* ChatWidget_STW; // 0x410(0x8)
		UBottomBar_STW* BottomBar_STW; // 0x418(0x8)
		FDataTableRowHandle OpenChatAction; // 0x420(0x10)
		unsigned char UnknownData00_7[0x8]; // 0x430(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortUIStateWidget_STW");
			return ret;
		}
	};


	// Class SaveTheWorldUI.MgmtTabsScreen_STW
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x3F8 - 0x3F0)
	class UMgmtTabsScreen_STW : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x3F0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.MgmtTabsScreen_STW");
			return ret;
		}
	};


	// Class SaveTheWorldUI.ObjectivesPage
	// Inherited from UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x548 - 0x528)
	class UObjectivesPage : public UCommonActivatablePanelLegacy	
	{
	public:
		FDataTableRowHandle LeaveInventoryInputHandle; // 0x528(0x10)
		FDataTableRowHandle BackInputHandle; // 0x538(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.ObjectivesPage");
			return ret;
		}

		void BackAction(bool& bPassThrough); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class SaveTheWorldUI.STWDeathWidget
	// Inherited from UFortActivatablePanel -> UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x30 (0x590 - 0x560)
	class USTWDeathWidget : public UFortActivatablePanel	
	{
	public:
		FDataTableRowHandle PreviousTeammateActionRowHandle; // 0x560(0x10)
		FDataTableRowHandle NextTeammateActionRowHandle; // 0x570(0x10)
		FDataTableRowHandle RespawnActionRowHandle; // 0x580(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.STWDeathWidget");
			return ret;
		}

		void ToggleRespawnAction(bool bEnabled); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751D3EFCC(relative to base address)
		void HandleRespawnAction(bool& bPassThrough); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF751D3DE38(relative to base address)
		void HandlePreviousTeammateAction(bool& bPassThrough); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF751D3DDAC(relative to base address)
		void HandleNextTeammateAction(bool& bPassThrough); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF751D3DCA4(relative to base address)
		void EnableAndShowNavActions(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751D3DA0C(relative to base address)
		void DisableAndHideRespawnAction(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751D3D97C(relative to base address)
		void DisableAndHideNavActions(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751D3D920(relative to base address)
	};


	// Class SaveTheWorldUI.XpBoostsRootWidget
	// Inherited from UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x30 (0x558 - 0x528)
	class UXpBoostsRootWidget : public UCommonActivatablePanelLegacy	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x528(0x8) UNKNOWN PROPERTY
		FDataTableRowHandle BackInputActionRowHandle; // 0x530(0x10)
		FDataTableRowHandle ShowLeaderboardInputActionRowHandle; // 0x540(0x10)
		bool bCanShowLeaderboard; // 0x550(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x551(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.XpBoostsRootWidget");
			return ret;
		}

		void HandleShowLeaderboard(bool& bPassThrough); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleBack(bool& bPassThrough); // Flags: Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class SaveTheWorldUI.FortArmoryScreen
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x410 - 0x3F0)
	class UFortArmoryScreen : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x3F0(0x8) UNKNOWN PROPERTY
		FDataTableRowHandle BackActionRowHandle; // 0x3F8(0x10)
		unsigned char UnknownData01_7[0x8]; // 0x408(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortArmoryScreen");
			return ret;
		}

		void HandleCustomBackAction(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF749B1B2C4(relative to base address)
	};


	// Class SaveTheWorldUI.FortArmoryScreen_Legacy
	// Inherited from UFortActivatablePanel -> UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x560 - 0x560)
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
	// Size: 0x28 (0x418 - 0x3F0)
	class UFortCommandScreen : public UCommonActivatableWidget	
	{
	public:
		FDataTableRowHandle ShowAllStatsActionData; // 0x3F0(0x10)
		FDataTableRowHandle InspectHeroActionData; // 0x400(0x10)
		unsigned char UnknownData00_7[0x8]; // 0x410(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortCommandScreen");
			return ret;
		}

		void HandleUpgradeInspectHero(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleShowAllStats(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class SaveTheWorldUI.FortCollectionBookGenericRewardWidget
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x18 (0x2F0 - 0x2D8)
	class UFortCollectionBookGenericRewardWidget : public UCommonUserWidget	
	{
	public:
		bool bUpdateVisibilityBasedOnRewardExistence : 1; // 0x2D8:0(0x1)
		unsigned char UnknownData00_5[0x3]; // 0x2D9(0x3) UNKNOWN PROPERTY
		ESlateVisibility VisibilityWhenNoRewardSpecified; // 0x2DC(0x1)
		ESlateVisibility VisibilityWhenRewardSpecified; // 0x2DD(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x2DE(0x2) UNKNOWN PROPERTY
		UFortCollectionBookRewardCardWidget* RewardCardWidget; // 0x2E0(0x8)
		ECollectionBookRewardStatus RewardStatus; // 0x2E8(0x1)
		unsigned char UnknownData02_7[0x7]; // 0x2E9(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortCollectionBookGenericRewardWidget");
			return ret;
		}

		void SetRewardStatus(ECollectionBookRewardStatus Status); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D09BB8C(relative to base address)
		void SetRewards(FFortRewardInfo& Rewards); // Flags: Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751D3ED40(relative to base address)
		void SetCurrentItemToDisplay(UFortItem* ItemToDisplay); // Flags: Native|Protected, Memory Exec: 0x7FF74F5AA820(relative to base address)
		void OnRewardStatusChanged(ECollectionBookRewardStatus NewStatus); // Flags: Native|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF750F6A1FC(relative to base address)
		bool HasRewards(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74E0AB77C(relative to base address)
		ECollectionBookRewardStatus GetRewardStatus(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74CDBD9C8(relative to base address)
		void ClearRewards(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F0F9DB4(relative to base address)
	};


	// Class SaveTheWorldUI.FortCollectionBookHelpWidget
	// Inherited from UFortActivatablePanel -> UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x560 - 0x560)
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
	// Size: 0x8 (0x550 - 0x548)
	class UFortCollectionBookItemPopupMenu : public UFortPopupMenu_Legacy	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x548(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortCollectionBookItemPopupMenu");
			return ret;
		}

		void HandleItemUpdated(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleItemChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UFortCollectionBookSlotButton GetHostButton(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D3DA68(relative to base address)
		bool CanItemBeUnslotted(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751D3D8CC(relative to base address)
		bool CanItemBePurchased(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751D3D878(relative to base address)
	};


	// Class SaveTheWorldUI.FortCollectionBookOverviewWidget
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x48 (0x320 - 0x2D8)
	class UFortCollectionBookOverviewWidget : public UCommonUserWidget	
	{
	public:
		FMulticastInlineDelegate OnCollectionBookPageSelected; // 0x2D8(0x10)
		FMulticastInlineDelegate OnCollectionBookPageClicked; // 0x2E8(0x10)
		UFortCollectionBookPage* LastSelectedPage; // 0x2F8(0x8)
		UFortCollectionBookCategory* LastSelectedCategory; // 0x300(0x8)
		TArray<UFortCollectionBookCategory*> CategoryObjectPool; // 0x308(0x10)
		UCommonTreeView* PageTreeViewWidget; // 0x318(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortCollectionBookOverviewWidget");
			return ret;
		}

		void OnDeactivated(); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7474A9F44(relative to base address)
		void OnActivated(); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7470D9EB4(relative to base address)
		void HandlePagesChanged(UFortCollectionBookManager* CBManager); // Flags: Final|Native|Private, Memory Exec: 0x7FF751D3DD30(relative to base address)
	};


	// Class SaveTheWorldUI.FortCollectionBookPageCompletionRewardWidget
	// Inherited from UFortCollectionBookGenericRewardWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x2F0 - 0x2F0)
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
	// Size: 0x60 (0x338 - 0x2D8)
	class UFortCollectionBookPageDetailsWidget : public UCommonUserWidget	
	{
	public:
		UCommonTextBlock* PageCompletionText; // 0x2D8(0x8)
		UFortMaterialProgressBar* ProgressBar; // 0x2E0(0x8)
		UFortCollectionBookPageCompletionRewardWidget* PageRewardWidget; // 0x2E8(0x8)
		UCommonButtonBase* RewardDetailsButton; // 0x2F0(0x8)
		UFortCollectionBookPage* DetailsPage; // 0x2F8(0x8)
		TWeakObjectPtr<UClass*> RewardDetailsModalWidgetClass; // 0x300(0x20)
		FText ModalTitle; // 0x320(0x10)
		UFortCollectionBookRewardModalWidget* RewardDetailsModalWidget; // 0x330(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortCollectionBookPageDetailsWidget");
			return ret;
		}

		void OnUnslotItemComplete(UFortAccountItem* SlottedItem, UFortAccountItem* OldItem, FName SlotId); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751D3E8D0(relative to base address)
		void OnSlotItemComplete(UFortAccountItem* SlottedItem, FName SlotId); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751D3E5D8(relative to base address)
		void OnPageProgressionUpdated(int32_t TotalFilledSlots, int32_t TotalSlots, EFortCollectionBookState State); // Flags: Native|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF751D3E288(relative to base address)
		void OnDetailsPageChanged(UFortCollectionBookPage* InNewDetailsPage); // Flags: Native|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF74EA68858(relative to base address)
	};


	// Class SaveTheWorldUI.FortCollectionBookPageListWidget
	// Inherited from UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x30 (0x13C0 - 0x1390)
	class UFortCollectionBookPageListWidget : public UCommonButtonBase	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x1390(0x8) UNKNOWN PROPERTY
		UCommonTextBlock* PageNameWidget; // 0x1398(0x8)
		UCommonNumericTextBlock* AvailableSlotsWidget; // 0x13A0(0x8)
		UCommonTextBlock* PageCompletionWidget; // 0x13A8(0x8)
		TWeakObjectPtr<UObject*> AssociatedPageOrCategory; // 0x13B0(0x8)
		bool bIsExpanded; // 0x13B8(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x13B9(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortCollectionBookPageListWidget");
			return ret;
		}

		void SetupAsPage(UFortCollectionBookPage* Page); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetupAsCategory(UFortCollectionBookCategory* category); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSlottedItemOperationComplete(UFortAccountItem* SlottedItem, FName SlotId); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751D3E690(relative to base address)
		void OnPageDetailsUpdated(int32_t AvailableSlots, int32_t FilledSlots, int32_t TotalSlots, EFortCollectionBookState State); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCategoryDetailsUpdated(int32_t AvailableSlots, int32_t FilledSlots, int32_t TotalSlots); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class SaveTheWorldUI.FortCollectionBookPicker
	// Inherited from UFortItemPickerBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x28 (0x438 - 0x410)
	class UFortCollectionBookPicker : public UFortItemPickerBase	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x410(0x8) UNKNOWN PROPERTY
		UClass* MulchConfirmationModalClass; // 0x418(0x8)
		unsigned char UnknownData01_6[0x8]; // 0x420(0x8) UNKNOWN PROPERTY
		UFortAccountItem* CurrentSlottedItem; // 0x428(0x8)
		UFortMulchConfirmationModalWidget* MulchConfirmationModal; // 0x430(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortCollectionBookPicker");
			return ret;
		}

		void ShowMulchDialogForItem(UFortItem* ItemToMulch); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D3EF4C(relative to base address)
		void ShowMulchConfirmationModal(); // Flags: Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751D3EF30(relative to base address)
		void OnCollectComplete(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void NotifyPanelDeactivated(); // Flags: Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751D3DFB4(relative to base address)
		void NotifyPanelActivated(); // Flags: Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751D3DF98(relative to base address)
		void HideMulchConfirmationModal(); // Flags: Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751D3DF68(relative to base address)
	};


	// Class SaveTheWorldUI.FortCollectionBookPrimaryPanel
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xC8 (0x4B8 - 0x3F0)
	class UFortCollectionBookPrimaryPanel : public UCommonActivatableWidget	
	{
	public:
		FMulticastInlineDelegate OnCollectionBookPageSelectedDelegate; // 0x3F0(0x10)
		FMulticastInlineDelegate OnCollectionBookPageClickedDelegate; // 0x400(0x10)
		FMulticastInlineDelegate OnCollectionBookSectionClickedDelegate; // 0x410(0x10)
		FDataTableRowHandle BackActionRowHandle; // 0x420(0x10)
		FDataTableRowHandle SummonInfoPanelActionRowHandle; // 0x430(0x10)
		UFortCollectionBookOverviewWidget* OverviewWidget; // 0x440(0x8)
		UCommonTileView* SectionTileViewWidget; // 0x448(0x8)
		ECollectionBookPrimaryNavTarget CurrentNavTarget; // 0x450(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x451(0x7) UNKNOWN PROPERTY
		UFortCollectionBookSection* LastClickedSection; // 0x458(0x8)
		unsigned char UnknownData01_7[0x58]; // 0x460(0x58) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortCollectionBookPrimaryPanel");
			return ret;
		}

		void OnSummonInfoPanelExecuted(bool& bPassThrough); // Flags: Native|Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF74D098B50(relative to base address)
		void OnInputMethodChanged(ECommonInputType CurrentInputType); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751D3E070(relative to base address)
		void OnCollectionBookSectionClicked(UFortCollectionBookSection* ClickedSection); // Flags: Native|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF74FF645D4(relative to base address)
		void OnCollectionBookPageSelected(UFortCollectionBookPage* SelectedPage); // Flags: Native|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF74FDC3D54(relative to base address)
		void OnCollectionBookPageClicked(UFortCollectionBookPage* ClickedPage); // Flags: Native|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF751A298A0(relative to base address)
		void OnBackActionExecuted(); // Flags: Final|Native|Public, Memory Exec: 0x7FF751D3DFD0(relative to base address)
	};


	// Class SaveTheWorldUI.FortCollectionBookPrimaryPanel_Legacy
	// Inherited from UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xC0 (0x5E8 - 0x528)
	class UFortCollectionBookPrimaryPanel_Legacy : public UCommonActivatablePanelLegacy	
	{
	public:
		FMulticastInlineDelegate OnCollectionBookPageSelectedDelegate; // 0x528(0x10)
		FMulticastInlineDelegate OnCollectionBookPageClickedDelegate; // 0x538(0x10)
		FMulticastInlineDelegate OnCollectionBookSectionClickedDelegate; // 0x548(0x10)
		FDataTableRowHandle BackActionRowHandle; // 0x558(0x10)
		FDataTableRowHandle SummonInfoPanelActionRowHandle; // 0x568(0x10)
		UFortCollectionBookOverviewWidget* OverviewWidget; // 0x578(0x8)
		UCommonTileView* SectionTileViewWidget; // 0x580(0x8)
		ECollectionBookPrimaryNavTarget CurrentNavTarget; // 0x588(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x589(0x7) UNKNOWN PROPERTY
		UFortCollectionBookSection* LastClickedSection; // 0x590(0x8)
		unsigned char UnknownData01_7[0x50]; // 0x598(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortCollectionBookPrimaryPanel_Legacy");
			return ret;
		}

		void OnSummonInfoPanelExecuted(bool& bPassThrough); // Flags: Native|Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF750021154(relative to base address)
		void OnInputMethodChanged(ECommonInputType CurrentInputType); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751D3E0F4(relative to base address)
		void OnCollectionBookSectionClicked(UFortCollectionBookSection* ClickedSection); // Flags: Native|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7506AF3E8(relative to base address)
		void OnCollectionBookPageSelected(UFortCollectionBookPage* SelectedPage); // Flags: Native|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF74EA6764C(relative to base address)
		void OnCollectionBookPageClicked(UFortCollectionBookPage* ClickedPage); // Flags: Native|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF74E313DEC(relative to base address)
		void OnBackActionExecuted(bool& bPassThrough); // Flags: Final|Native|Public|HasOutParms, Memory Exec: 0x7FF751D3DFE4(relative to base address)
	};


	// Class SaveTheWorldUI.FortCollectionBookProgressionRewardDetailInspectWidget
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x2F8 - 0x2D8)
	class UFortCollectionBookProgressionRewardDetailInspectWidget : public UCommonUserWidget	
	{
	public:
		UCommonNumericTextBlock* LevelTextWidget; // 0x2D8(0x8)
		UFortRewardInfoWidget* RewardWidget; // 0x2E0(0x8)
		UWidget* CheckmarkImage; // 0x2E8(0x8)
		unsigned char UnknownData00_7[0x8]; // 0x2F0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortCollectionBookProgressionRewardDetailInspectWidget");
			return ret;
		}

		void SetAssociatedLevel(int32_t Level); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D3EAC0(relative to base address)
		void OnXPRequiredChanged(int32_t NewXPRequired); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		int32_t GetXPRequired(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750076B80(relative to base address)
	};


	// Class SaveTheWorldUI.FortCollectionBookProgressionRewardsModalWidget
	// Inherited from UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x60 (0x588 - 0x528)
	class UFortCollectionBookProgressionRewardsModalWidget : public UCommonActivatablePanelLegacy	
	{
	public:
		TWeakObjectPtr<UClass*> RewardWidgetClass; // 0x528(0x20)
		FMargin RewardWidgetPadding; // 0x548(0x10)
		int32_t NumRewardsToShow; // 0x558(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x55C(0x4) UNKNOWN PROPERTY
		UVerticalBox* RewardBoxWidget; // 0x560(0x8)
		UVerticalBox* MajorRewardBoxWidget; // 0x568(0x8)
		UCommonTextBlock* XPTextWidget; // 0x570(0x8)
		UCommonNumericTextBlock* LevelTextWidget; // 0x578(0x8)
		UCommonButtonGroupBase* ButtonGroup; // 0x580(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortCollectionBookProgressionRewardsModalWidget");
			return ret;
		}

		void OnSelectedButtonChanged(UCommonButtonBase* SelectedButton, int32_t ButtonIndex); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751D3E468(relative to base address)
		void OnLevelProgressionSet(int32_t CurrentLevel, float NextLvlPct, int32_t MaxAchievedLevel); // Flags: Native|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF751D3E18C(relative to base address)
		void InspectItemBP(UFortItem* Item); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Dismiss(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751D3D9B8(relative to base address)
	};


	// Class SaveTheWorldUI.FortCollectionBookProgressionRewardsPreviewWidget
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x2E8 - 0x2D8)
	class UFortCollectionBookProgressionRewardsPreviewWidget : public UCommonUserWidget	
	{
	public:
		UFortCollectionBookProgressionRewardWidget* NextRewardWidget; // 0x2D8(0x8)
		UFortCollectionBookProgressionRewardWidget* NextMajorRewardWidget; // 0x2E0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortCollectionBookProgressionRewardsPreviewWidget");
			return ret;
		}
	};


	// Class SaveTheWorldUI.FortCollectionBookProgressionRewardWidget
	// Inherited from UFortCollectionBookGenericRewardWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x300 - 0x2F0)
	class UFortCollectionBookProgressionRewardWidget : public UFortCollectionBookGenericRewardWidget	
	{
	public:
		UCommonNumericTextBlock* LevelTextWidget; // 0x2F0(0x8)
		UCommonTextBlock* DisplayNameWidget; // 0x2F8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortCollectionBookProgressionRewardWidget");
			return ret;
		}

		void SetAssociatedLevel(int32_t Level); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D3EB40(relative to base address)
	};


	// Class SaveTheWorldUI.FortCollectionBookProgressWidget
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x58 (0x330 - 0x2D8)
	class UFortCollectionBookProgressWidget : public UCommonUserWidget	
	{
	public:
		int32_t CachedXPLevel; // 0x2D8(0x4)
		float CachedXPCompletionPct; // 0x2DC(0x4)
		TWeakObjectPtr<UClass*> RewardDetailsModalWidgetClass; // 0x2E0(0x20)
		UFortCollectionBookProgressionRewardsPreviewWidget* ProgressionRewardsPreviewWidget; // 0x300(0x8)
		UCommonTextBlock* XPTextWidget; // 0x308(0x8)
		UCommonNumericTextBlock* LevelTextWidget; // 0x310(0x8)
		UCommonButtonBase* DetailsButtonWidget; // 0x318(0x8)
		UFortCollectionBookPageDetailsWidget* PageDetailsWidget; // 0x320(0x8)
		UFortCollectionBookProgressionRewardsModalWidget* DetailsModalWidget; // 0x328(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortCollectionBookProgressWidget");
			return ret;
		}

		void OnSlottedItemOperationComplete(UFortAccountItem* ItemSlotted, FName SlotId); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751D3E754(relative to base address)
		void OnInventoryUpdated(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751D3E178(relative to base address)
		void OnCollectionBookPreviewXPChange(float PreviewCompletionPct); // Flags: Native|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF74CE00A98(relative to base address)
		void OnCollectionBookPageSelected(UFortCollectionBookPage* SelectedPage); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF74E94BB5C(relative to base address)
		void OnCollectionBookLevelProgressionChanged(float NewCompletionPct); // Flags: Native|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF751551B94(relative to base address)
		void OnCollectionBookLevelChanged(int32_t NewLevel); // Flags: Native|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7518341D4(relative to base address)
		void HandleDetailsModalWidgetDeactivated(); // Flags: Final|Native|Private, Memory Exec: 0x7FF751D3DC20(relative to base address)
	};


	// Class SaveTheWorldUI.FortCollectionBookRecycleSlotResultsWidget
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x18 (0x2F0 - 0x2D8)
	class UFortCollectionBookRecycleSlotResultsWidget : public UCommonUserWidget	
	{
	public:
		UPanelWidget* RecycleResultsWidget; // 0x2D8(0x8)
		EFortItemCardSize ItemCardSize; // 0x2E0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x2E1(0x7) UNKNOWN PROPERTY
		UFortAccountItem* ItemToRecycle; // 0x2E8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortCollectionBookRecycleSlotResultsWidget");
			return ret;
		}

		void SetCurrentItemToRecycle(UFortAccountItem* InItemToRecycle); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D3EC40(relative to base address)
	};


	// Class SaveTheWorldUI.FortCollectionBookRewardCardWidget
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x88 (0x360 - 0x2D8)
	class UFortCollectionBookRewardCardWidget : public UCommonUserWidget	
	{
	public:
		FMulticastInlineDelegate OnDisplayedItemChangedEvent; // 0x2D8(0x10)
		UFortMultiSizeItemCard* ItemCardWidget; // 0x2E8(0x8)
		UWidget* MultiItemRewardOverlay; // 0x2F0(0x8)
		UWidget* ChoiceRewardOverlay; // 0x2F8(0x8)
		UWidget* CheckmarkImage; // 0x300(0x8)
		float UpdateCardInterval; // 0x308(0x4)
		EFortItemCardSize ItemCardSize; // 0x30C(0x1)
		bool bDisplayAsRewardCard; // 0x30D(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x30E(0x2) UNKNOWN PROPERTY
		FFortRewardInfo RepresentedRewards; // 0x310(0x30)
		TArray<UFortItem*> DummyItems; // 0x340(0x10)
		FTimerHandle UpdateCardTimer; // 0x350(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x358(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortCollectionBookRewardCardWidget");
			return ret;
		}

		void SetRewards(FFortRewardInfo& Rewards); // Flags: Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751D3EE38(relative to base address)
		void OnDisplayedItemChangedEvent__DelegateSignature(UFortItem* DisplayedItem); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool HasRewards(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74E0AB7A4(relative to base address)
		void ClearRewards(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF7470D9EB4(relative to base address)
	};


	// Class SaveTheWorldUI.FortCollectionBookRewardModalWidget
	// Inherited from UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x50 (0x578 - 0x528)
	class UFortCollectionBookRewardModalWidget : public UCommonActivatablePanelLegacy	
	{
	public:
		UCommonTextBlock* TitleWidget; // 0x528(0x8)
		UFortRewardInfoWidget* RewardWidget; // 0x530(0x8)
		UFortMaterialProgressBar* ProgressBar; // 0x538(0x8)
		UCommonTextBlock* ProgressTextWidget; // 0x540(0x8)
		unsigned char UnknownData00_7[0x30]; // 0x548(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortCollectionBookRewardModalWidget");
			return ret;
		}
	};


	// Class SaveTheWorldUI.FortCollectionBookSectionCompletionRewardWidget
	// Inherited from UFortCollectionBookGenericRewardWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x48 (0x338 - 0x2F0)
	class UFortCollectionBookSectionCompletionRewardWidget : public UFortCollectionBookGenericRewardWidget	
	{
	public:
		UCommonButtonBase* RewardDetailsButton; // 0x2F0(0x8)
		TWeakObjectPtr<UClass*> RewardDetailsModalWidgetClass; // 0x2F8(0x20)
		FText ModalTitle; // 0x318(0x10)
		UFortCollectionBookRewardModalWidget* RewardDetailsModalWidget; // 0x328(0x8)
		UFortCollectionBookSection* Section; // 0x330(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortCollectionBookSectionCompletionRewardWidget");
			return ret;
		}

		void HandleRewardDetailsModalWidgetDeactivated(); // Flags: Final|Native|Private, Memory Exec: 0x7FF751D3DEC4(relative to base address)
	};


	// Class SaveTheWorldUI.FortCollectionBookSectionPanel
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x200 (0x5F0 - 0x3F0)
	class UFortCollectionBookSectionPanel : public UCommonActivatableWidget	
	{
	public:
		FMulticastInlineDelegate OnSectionCloseRequest; // 0x3F0(0x10)
		FMulticastInlineDelegate OnPreviewXPChangeEvent; // 0x400(0x10)
		UCommonTextBlock* SectionNameTextWidget; // 0x410(0x8)
		UFortCollectionBookSlotView* SlotViewWidget; // 0x418(0x8)
		UFortCollectionBookPicker* SlotItemPicker; // 0x420(0x8)
		UWidget* ContextOverlayWidget; // 0x428(0x8)
		UTextBlock* ContextTextWidget; // 0x430(0x8)
		UFortCollectionBookSectionCompletionRewardWidget* SectionRewardWidget; // 0x438(0x8)
		UWidget* ItemAcquisitionSourceContainerWidget; // 0x440(0x8)
		UCommonTextBlock* ItemAcquisitionSourceDescWidget; // 0x448(0x8)
		UCommonTextBlock* ItemAcquisitionSourceDesc2Widget; // 0x450(0x8)
		UWidget* ResearchRecruitUnslotContainerWidget; // 0x458(0x8)
		UCommonTextBlock* PersonRecruitUnavailableMessageWidget; // 0x460(0x8)
		UCommonTextBlock* ItemResearchUnavailableMessageWidget; // 0x468(0x8)
		UCommonTextBlock* UnslotUnavailableMessageWidget; // 0x470(0x8)
		FDataTableRowHandle BackActionRowHandle; // 0x478(0x10)
		FDataTableRowHandle CloseActionRowHandle; // 0x488(0x10)
		FDataTableRowHandle SlotItemActionRowHandle; // 0x498(0x10)
		FDataTableRowHandle InspectItemActionRowHandle; // 0x4A8(0x10)
		FDataTableRowHandle InspectCollectionBookItemActionRowHandle; // 0x4B8(0x10)
		FDataTableRowHandle InspectPreviewItemActionRowHandle; // 0x4C8(0x10)
		FDataTableRowHandle OpenPickerActionRowHandle; // 0x4D8(0x10)
		FDataTableRowHandle LogAllowedItemsActionRowHandle; // 0x4E8(0x10)
		FDataTableRowHandle ResearchItemActionRowHandle; // 0x4F8(0x10)
		FDataTableRowHandle RecruitActionRowHandle; // 0x508(0x10)
		FDataTableRowHandle UnslotItemActionRowHandle; // 0x518(0x10)
		ECollectionBookSectionNavTarget CurrentNavTarget; // 0x528(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x529(0x7) UNKNOWN PROPERTY
		UFortCollectionBookSection* AssociatedSection; // 0x530(0x8)
		bool bHasSummonedPanel; // 0x538(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x539(0x3) UNKNOWN PROPERTY
		FFortDialogExternalLatentActionHandle SlotConfirmationDialogLatentHandle; // 0x53C(0x4)
		FMulticastInlineDelegate OnShowItemDetailEvent; // 0x540(0x10)
		FMulticastInlineDelegate OnSlotItemConfirmEvent; // 0x550(0x10)
		FMulticastInlineDelegate OnResearchItemConfirmEvent; // 0x560(0x10)
		FMulticastInlineDelegate OnUnslotItemConfirmEvent; // 0x570(0x10)
		FMulticastInlineDelegate OnInspectItemEvent; // 0x580(0x10)
		unsigned char UnknownData02_6[0x28]; // 0x590(0x28) UNKNOWN PROPERTY
		UClass* SlotConfirmationModalClass; // 0x5B8(0x8)
		unsigned char UnknownData03_7[0x30]; // 0x5C0(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortCollectionBookSectionPanel");
			return ret;
		}

		void OnUnslotItemOperationComplete(UFortAccountItem* UnslottedItem, UFortAccountItem* OldSlottedItem, FName SlotId); // Flags: Final|Native|Private, Memory Exec: 0x7FF751D3E9C8(relative to base address)
		void OnUnslotItemComplete(UFortItem* UnslottedItem, FName SlotId); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSlottedItemOperationComplete(UFortAccountItem* SlottedItem, FName SlotId); // Flags: Final|Native|Private, Memory Exec: 0x7FF751D3E80C(relative to base address)
		void OnSlotButtonHovered(int32_t ButtonIx); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751D3E558(relative to base address)
		void OnSectionChanged(UFortCollectionBookSection* Section); // Flags: Native|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7501F089C(relative to base address)
		void OnResearchItemOperationComplete(UFortAccountItem* NewItem, FString TemplateId); // Flags: Final|Native|Private, Memory Exec: 0x7FF751D3E384(relative to base address)
		void OnResearchItemAction__DelegateSignature(UFortItem* SelectedItem, FFortCollectionBookSlotData SlotData); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnItemInspectAction__DelegateSignature(UFortItem* SelectedItem, bool EnableItemActions, bool IsPlaceholderItem); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnItemAction__DelegateSignature(UFortItem* SelectedItem); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class SaveTheWorldUI.FortCollectionBookSectionPanel_Legacy
	// Inherited from UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x1D0 (0x6F8 - 0x528)
	class UFortCollectionBookSectionPanel_Legacy : public UCommonActivatablePanelLegacy	
	{
	public:
		FMulticastInlineDelegate OnSectionCloseRequest; // 0x528(0x10)
		FMulticastInlineDelegate OnPreviewXPChangeEvent; // 0x538(0x10)
		UCommonTextBlock* SectionNameTextWidget; // 0x548(0x8)
		UFortCollectionBookSlotView* SlotViewWidget; // 0x550(0x8)
		UFortCollectionBookPicker* SlotItemPicker; // 0x558(0x8)
		UWidget* ContextOverlayWidget; // 0x560(0x8)
		UTextBlock* ContextTextWidget; // 0x568(0x8)
		UFortCollectionBookSectionCompletionRewardWidget* SectionRewardWidget; // 0x570(0x8)
		UWidget* ItemAcquisitionSourceContainerWidget; // 0x578(0x8)
		UCommonTextBlock* ItemAcquisitionSourceDescWidget; // 0x580(0x8)
		UCommonTextBlock* ItemAcquisitionSourceDesc2Widget; // 0x588(0x8)
		UWidget* ResearchRecruitUnslotContainerWidget; // 0x590(0x8)
		UCommonTextBlock* PersonRecruitUnavailableMessageWidget; // 0x598(0x8)
		UCommonTextBlock* ItemResearchUnavailableMessageWidget; // 0x5A0(0x8)
		UCommonTextBlock* UnslotUnavailableMessageWidget; // 0x5A8(0x8)
		FDataTableRowHandle BackActionRowHandle; // 0x5B0(0x10)
		FDataTableRowHandle CloseActionRowHandle; // 0x5C0(0x10)
		FDataTableRowHandle SlotItemActionRowHandle; // 0x5D0(0x10)
		FDataTableRowHandle InspectItemActionRowHandle; // 0x5E0(0x10)
		FDataTableRowHandle InspectCollectionBookItemActionRowHandle; // 0x5F0(0x10)
		FDataTableRowHandle InspectPreviewItemActionRowHandle; // 0x600(0x10)
		FDataTableRowHandle OpenPickerActionRowHandle; // 0x610(0x10)
		FDataTableRowHandle LogAllowedItemsActionRowHandle; // 0x620(0x10)
		FDataTableRowHandle ResearchItemActionRowHandle; // 0x630(0x10)
		FDataTableRowHandle RecruitActionRowHandle; // 0x640(0x10)
		FDataTableRowHandle UnslotItemActionRowHandle; // 0x650(0x10)
		ECollectionBookSectionNavTarget CurrentNavTarget; // 0x660(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x661(0x7) UNKNOWN PROPERTY
		UFortCollectionBookSection* AssociatedSection; // 0x668(0x8)
		bool bHasSummonedPanel; // 0x670(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x671(0x3) UNKNOWN PROPERTY
		FFortDialogExternalLatentActionHandle SlotConfirmationDialogLatentHandle; // 0x674(0x4)
		FMulticastInlineDelegate OnShowItemDetailEvent; // 0x678(0x10)
		FMulticastInlineDelegate OnSlotItemConfirmEvent; // 0x688(0x10)
		FMulticastInlineDelegate OnResearchItemConfirmEvent; // 0x698(0x10)
		FMulticastInlineDelegate OnUnslotItemConfirmEvent; // 0x6A8(0x10)
		FMulticastInlineDelegate OnInspectItemEvent; // 0x6B8(0x10)
		unsigned char UnknownData02_6[0x28]; // 0x6C8(0x28) UNKNOWN PROPERTY
		UClass* SlotConfirmationModalClass; // 0x6F0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortCollectionBookSectionPanel_Legacy");
			return ret;
		}

		void OnUnslotItemOperationComplete(UFortAccountItem* UnslottedItem, UFortAccountItem* OldSlottedItem, FName SlotId); // Flags: Final|Native|Private, Memory Exec: 0x7FF751D64750(relative to base address)
		void OnUnslotItemComplete(UFortItem* UnslottedItem, FName SlotId); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnUnslotItemActionExecuted(bool& bPassThrough); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF751D646C8(relative to base address)
		void OnSlottedItemOperationComplete(UFortAccountItem* SlottedItem, FName SlotId); // Flags: Final|Native|Private, Memory Exec: 0x7FF751D645F0(relative to base address)
		void OnSlotItemActionExecuted(bool& bPassThrough); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF751D64458(relative to base address)
		void OnSlotButtonSelected(UFortCollectionBookSlotButton* SlotButton); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751D643D8(relative to base address)
		void OnSlotButtonHovered(int32_t ButtonIx); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751D64290(relative to base address)
		void OnSlotButtonContextAction(EFortCollectionBookPopupButtonType ContextAction); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751D64210(relative to base address)
		void OnSectionChanged(UFortCollectionBookSection* Section); // Flags: Native|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF74FCB13CC(relative to base address)
		void OnResearchItemOperationComplete(UFortAccountItem* NewItem, FString TemplateId); // Flags: Final|Native|Private, Memory Exec: 0x7FF751D63EA0(relative to base address)
		void OnResearchItemAction__DelegateSignature(UFortItem* SelectedItem, FFortCollectionBookSlotData SlotData); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPurchaseItemActionExecuted(bool& bPassThrough); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF751D63E18(relative to base address)
		void OnOpenPickerActionExecuted(bool& bPassThrough); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF751D63C98(relative to base address)
		void OnLogAllowedItemsActionExecuted(bool& bPassThrough); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF751D63C24(relative to base address)
		void OnItemInspectAction__DelegateSignature(UFortItem* SelectedItem, bool EnableItemActions, bool IsPlaceholderItem); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnItemAction__DelegateSignature(UFortItem* SelectedItem); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInspectActionExecuted(bool& bPassThrough); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF751D639C4(relative to base address)
		void OnBackActionExecuted(bool& bPassThrough); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF751D6386C(relative to base address)
	};


	// Class SaveTheWorldUI.FortCollectionBookSectionTileWidget
	// Inherited from UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x70 (0x1400 - 0x1390)
	class UFortCollectionBookSectionTileWidget : public UCommonButtonBase	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x1390(0x8) UNKNOWN PROPERTY
		TWeakObjectPtr<UClass*> SlotWidgetClass; // 0x1398(0x20)
		FMargin SlotWidgetPadding; // 0x13B8(0x10)
		TEnumAsByte<EHorizontalAlignment> SlotWidgetHorizontalAlignment; // 0x13C8(0x1)
		TEnumAsByte<EVerticalAlignment> SlotWidgetVerticalAlignment; // 0x13C9(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x13CA(0x2) UNKNOWN PROPERTY
		int32_t MaxNumSlotsSupported; // 0x13CC(0x4)
		UHorizontalBox* SlotBoxWidget; // 0x13D0(0x8)
		UCommonTextBlock* SectionNameWidget; // 0x13D8(0x8)
		UFortCollectionBookGenericRewardWidget* SectionRewardWidget; // 0x13E0(0x8)
		UFortCollectionBookSection* AssociatedSection; // 0x13E8(0x8)
		TArray<UFortCollectionBookSlotWidget*> SlotWidgets; // 0x13F0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortCollectionBookSectionTileWidget");
			return ret;
		}

		void OnSectionSlotUpdate(int32_t NumFilledSlots, int32_t NumSlots, EFortCollectionBookState SectionState); // Flags: Native|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF751D63F84(relative to base address)
		void OnItemUnslotted(UFortAccountItem* ItemUnslotted, UFortAccountItem* OldSlottedItem, FName SlotId); // Flags: Native|Protected, Memory Exec: 0x7FF751D63B28(relative to base address)
		void OnItemSlotted(UFortAccountItem* ItemSlotted, FName SlotId); // Flags: Native|Protected, Memory Exec: 0x7FF751D63A60(relative to base address)
	};


	// Class SaveTheWorldUI.FortCollectionBookSlotButton
	// Inherited from UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x40 (0x13D0 - 0x1390)
	class UFortCollectionBookSlotButton : public UCommonButtonBase	
	{
	public:
		UFortCollectionBookSlotWidget* CollectionBookSlotWidget; // 0x1390(0x8)
		UMenuAnchor* PopupMenuAnchor; // 0x1398(0x8)
		unsigned char UnknownData00_7[0x30]; // 0x13A0(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortCollectionBookSlotButton");
			return ret;
		}

		void PopupMenuClosedWithAction(EFortCollectionBookPopupButtonType Selection); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D64924(relative to base address)
		void OnSlottedItemUpdated(); // Flags: Final|Native|Private, Memory Exec: 0x7FF751D646B4(relative to base address)
		UUserWidget GetPopupMenu(); // Flags: Final|Native|Private, Memory Exec: 0x7FF751D613E0(relative to base address)
	};


	// Class SaveTheWorldUI.FortCollectionBookSlotConfirmationModal
	// Inherited from UFortActivatablePanel -> UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x58 (0x5B8 - 0x560)
	class UFortCollectionBookSlotConfirmationModal : public UFortActivatablePanel	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x560(0x8) UNKNOWN PROPERTY
		UFortAccountItem* CurrentlySlottedItem; // 0x568(0x8)
		UFortAccountItem* NewItemToSlot; // 0x570(0x8)
		UCommonTextBlock* Text_SlottingDescription; // 0x578(0x8)
		UFortMultiSizeItemCard* ItemCard_NewlySlottedItem; // 0x580(0x8)
		UFortCollectionBookRecycleSlotResultsWidget* RecycleSlotResultsWidget; // 0x588(0x8)
		UCommonButtonBase* Button_SlotItem; // 0x590(0x8)
		UCommonButtonBase* Button_Back; // 0x598(0x8)
		unsigned char UnknownData01_7[0x18]; // 0x5A0(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortCollectionBookSlotConfirmationModal");
			return ret;
		}

		void OnSlotItemRequestedComplete(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSlotItemRequested(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleSlotItemComplete(UFortAccountItem* SlottedItem, FName SlotId); // Flags: Final|Native|Private, Memory Exec: 0x7FF751D62E0C(relative to base address)
	};


	// Class SaveTheWorldUI.FortCollectionBookSlotDetailsWidget
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x2D8 - 0x2D8)
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
	// Size: 0xA8 (0x380 - 0x2D8)
	class UFortCollectionBookSlotView : public UCommonUserWidget	
	{
	public:
		TWeakObjectPtr<UClass*> CollectionBookButtonClass; // 0x2D8(0x20)
		UHorizontalBox* CollectionBookButtonBox; // 0x2F8(0x8)
		UCommonButtonGroupBase* CollectionBookSlotButtonGroup; // 0x300(0x8)
		TArray<UFortCollectionBookSlotButton*> CollectionBookSlotButtons; // 0x308(0x10)
		UFortCollectionBookSection* AssociatedSection; // 0x318(0x8)
		unsigned char UnknownData00_6[0x48]; // 0x320(0x48) UNKNOWN PROPERTY
		UCommonPopupMenuLegacy* PopupMenu; // 0x368(0x8)
		int32_t PreviousSelectedButtonIdx; // 0x370(0x4)
		int32_t CurrentSelectedButtonIdx; // 0x374(0x4)
		unsigned char UnknownData01_7[0x8]; // 0x378(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortCollectionBookSlotView");
			return ret;
		}

		void OnSlotButtonHovered(UCommonButtonBase* HoveredButton, int32_t ButtonIdx); // Flags: Native|Protected, Memory Exec: 0x7FF751D64310(relative to base address)
		void OnSlotButtonClicked(UCommonButtonBase* ClickedButton, int32_t ButtonIdx); // Flags: Native|Protected, Memory Exec: 0x7FF751D64148(relative to base address)
		void OnSelectedSlotButtonChanged(UCommonButtonBase* SelectedButton, int32_t ButtonIdx); // Flags: Native|Protected, Memory Exec: 0x7FF751D64080(relative to base address)
		UFortCollectionBookSlotWidget GetSelectedSlotWidget(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D615CC(relative to base address)
		UFortCollectionBookSlotButton GetSelectedSlotButton(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D615A8(relative to base address)
	};


	// Class SaveTheWorldUI.FortCollectionBookSlotWidget
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xE0 (0x3B8 - 0x2D8)
	class UFortCollectionBookSlotWidget : public UCommonUserWidget	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0x2D8(0x10) UNKNOWN PROPERTY
		EFortItemCardSize ItemCardSize; // 0x2E8(0x1)
		bool bIsRewardCard; // 0x2E9(0x1)
		unsigned char UnknownData01_6[0x6]; // 0x2EA(0x6) UNKNOWN PROPERTY
		UFortMultiSizeItemCard* ItemCardWidget; // 0x2F0(0x8)
		UWidget* UnslottedOverlayWidget; // 0x2F8(0x8)
		UWidget* ReadyToSlotOverlayWidget; // 0x300(0x8)
		UWidget* UnslottedButReadyOverlayWidget; // 0x308(0x8)
		FName SlotRowName; // 0x310(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x314(0x4) UNKNOWN PROPERTY
		FText ItemAvailableToSlotText; // 0x318(0x10)
		FText NoItemsAvailableToSlotText; // 0x328(0x10)
		FText HigherQualityItemsAvailableToSlotAndUpgradeAvailableText; // 0x338(0x10)
		FText HigherQualityItemsAvailableToSlotAndEvolveAvailableText; // 0x348(0x10)
		FText HigherQualityItemsAvailableToSlotText; // 0x358(0x10)
		FText ItemInSlotFullyUpgradedText; // 0x368(0x10)
		FText ItemInSlotCanBeUpgradedText; // 0x378(0x10)
		FText ItemInSlotCanBeEvolvedText; // 0x388(0x10)
		UFortItem* SlottedItemRepresentation; // 0x398(0x8)
		unsigned char UnknownData03_7[0x18]; // 0x3A0(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortCollectionBookSlotWidget");
			return ret;
		}

		void OnItemDestroyed(); // Flags: Final|Native|Private, Memory Exec: 0x7FF751D63A4C(relative to base address)
		void OnItemCardUpdated(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool IsItemSlotted(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D63480(relative to base address)
		bool HasItemsToSlot(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D631E8(relative to base address)
		void HandleUnslotItemComplete(UFortAccountItem* UnslottedItem, UFortAccountItem* OldItem, FName SlotId); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751D62F94(relative to base address)
		void HandleSlottedItemOperationComplete(UFortAccountItem* NewItem, FName TemplateId); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751D62ED0(relative to base address)
		void HandleResearchItemComplete(UFortAccountItem* ResearchedItem, FString SlotId); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751D62D28(relative to base address)
		UFortItem GetSlottedItemRepresentation(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF748A14390(relative to base address)
		FName GetSlotRowName(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DC16674(relative to base address)
		int32_t GetNumItemsToSlot(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D613BC(relative to base address)
		void FortCollectionBookSlottedItemUpdatedDelegate__DelegateSignature(); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class SaveTheWorldUI.FortCollectionBookWidget
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x38 (0x428 - 0x3F0)
	class UFortCollectionBookWidget : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x3F0(0x8) UNKNOWN PROPERTY
		UFortCollectionBookProgressWidget* ProgressWidget; // 0x3F8(0x8)
		UCommonActivatableWidgetSwitcher* MainWidgetSwitcher; // 0x400(0x8)
		UFortCollectionBookPrimaryPanel* PrimaryPanelWidget; // 0x408(0x8)
		UFortCollectionBookSectionPanel* SectionPanelWidget; // 0x410(0x8)
		int32_t PrimaryPanelIdx; // 0x418(0x4)
		int32_t SectionPanelIdx; // 0x41C(0x4)
		unsigned char UnknownData01_6[0x1]; // 0x420(0x1) UNKNOWN PROPERTY
		FPrimaryContentSetup PrimaryContentSetup; // 0x421(0x3)
		unsigned char UnknownData02_7[0x4]; // 0x424(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortCollectionBookWidget");
			return ret;
		}

		void RequestToClose(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751D6531C(relative to base address)
		void OnPreviewXPChangeRequest(int32_t XPChange); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751D63D18(relative to base address)
		void OnCollectionBookSectionCloseRequest(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751D638F8(relative to base address)
		void OnCollectionBookSectionClicked(UFortCollectionBookSection* ClickedSection); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7501F089C(relative to base address)
		void OnCollectionBookPageSelected(UFortCollectionBookPage* SelectedPage); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF751A298A0(relative to base address)
		void OnCollectionBookPageClicked(UFortCollectionBookPage* ClickedPage); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF74FF645D4(relative to base address)
	};


	// Class SaveTheWorldUI.FortCollectionBookWidget_Legacy
	// Inherited from UFortActivatablePanel -> UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x30 (0x590 - 0x560)
	class UFortCollectionBookWidget_Legacy : public UFortActivatablePanel	
	{
	public:
		UFortCollectionBookProgressWidget* ProgressWidget; // 0x560(0x8)
		UCommonWidgetSwitcherLegacy* MainWidgetSwitcher; // 0x568(0x8)
		UFortCollectionBookPrimaryPanel_Legacy* PrimaryPanelWidget; // 0x570(0x8)
		UFortCollectionBookSectionPanel_Legacy* SectionPanelWidget; // 0x578(0x8)
		int32_t PrimaryPanelIdx; // 0x580(0x4)
		int32_t SectionPanelIdx; // 0x584(0x4)
		unsigned char UnknownData00_7[0x8]; // 0x588(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortCollectionBookWidget_Legacy");
			return ret;
		}

		void RequestToClose(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751D65364(relative to base address)
		void OnPreviewXPChangeRequest(int32_t XPChange); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751D63D98(relative to base address)
		void OnCollectionBookSectionCloseRequest(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751D6390C(relative to base address)
		void OnCollectionBookSectionClicked(UFortCollectionBookSection* ClickedSection); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF74FCB13CC(relative to base address)
		void OnCollectionBookPageSelected(UFortCollectionBookPage* SelectedPage); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF74E313DEC(relative to base address)
		void OnCollectionBookPageClicked(UFortCollectionBookPage* ClickedPage); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7506AF3E8(relative to base address)
	};


	// Class SaveTheWorldUI.FortAbilitySystemContext
	// Inherited from UBlueprintContextBase -> USubsystem -> UObject
	// Size: 0x50 (0x80 - 0x30)
	class UFortAbilitySystemContext : public UBlueprintContextBase	
	{
	public:
		unsigned char UnknownData00_1[0x50]; // 0x30(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortAbilitySystemContext");
			return ret;
		}

		void RemoveDelegatesFromWidget(UWidget* Widget); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D651CC(relative to base address)
		void RegisterForAttributeChanged(UWidget* Widget, UAbilitySystemComponent* ASC, FGameplayAttribute Attribute, FDelegateProperty Callback); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D64BE4(relative to base address)
		bool HasMatchingGameplayTag(FGameplayTag TagToCheck); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D63200(relative to base address)
	};


	// Class SaveTheWorldUI.FortDirectAcquisitionWidgetBase
	// Inherited from UFortMtxStoreRootBase -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x58 (0x4D8 - 0x480)
	class UFortDirectAcquisitionWidgetBase : public UFortMtxStoreRootBase	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x480(0x8) UNKNOWN PROPERTY
		bool bShowIneligible; // 0x488(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x489(0x7) UNKNOWN PROPERTY
		UUserWidget* FirstOfferGenerated; // 0x490(0x8)
		unsigned char UnknownData02_6[0x10]; // 0x498(0x10) UNKNOWN PROPERTY
		UHorizontalBox* HorizontalBox_LargeTile; // 0x4A8(0x8)
		UGridPanel* GridPanel_SmallTile; // 0x4B0(0x8)
		UHorizontalBox* HorizontalBox_ReorderedItems; // 0x4B8(0x8)
		UVerticalBox* VerticalBox_FeatureItems; // 0x4C0(0x8)
		UVerticalBox* VerticalBox_DailyItems; // 0x4C8(0x8)
		UScaleBox* ScaleBox_Main; // 0x4D0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortDirectAcquisitionWidgetBase");
			return ret;
		}

		void OnDisplayToast(bool bDisplayToast); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void IsTabsLayout(bool bShouldDisplayTabs); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleAffiliateButtonClicked(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D620C0(relative to base address)
		FDateTime GetWeeklyStoreEndDate(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D61F2C(relative to base address)
		TArray GetStoreCurrencies(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D61684(relative to base address)
		FDateTime GetSeasonStoreEndDate(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D6157C(relative to base address)
		FDateTime GetDailyStoreEndDate(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D60D54(relative to base address)
	};


	// Class SaveTheWorldUI.FortDirectAcquisitionWidgetBase_Legacy
	// Inherited from UFortMtxStoreRootBase_Legacy -> UFortActivatablePanel -> UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x58 (0x640 - 0x5E8)
	class UFortDirectAcquisitionWidgetBase_Legacy : public UFortMtxStoreRootBase_Legacy	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x5E8(0x8) UNKNOWN PROPERTY
		bool bShowIneligible; // 0x5F0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x5F1(0x7) UNKNOWN PROPERTY
		UUserWidget* FirstOfferGenerated; // 0x5F8(0x8)
		unsigned char UnknownData02_6[0x10]; // 0x600(0x10) UNKNOWN PROPERTY
		UHorizontalBox* HorizontalBox_LargeTile; // 0x610(0x8)
		UGridPanel* GridPanel_SmallTile; // 0x618(0x8)
		UHorizontalBox* HorizontalBox_ReorderedItems; // 0x620(0x8)
		UVerticalBox* VerticalBox_FeatureItems; // 0x628(0x8)
		UVerticalBox* VerticalBox_DailyItems; // 0x630(0x8)
		UScaleBox* ScaleBox_Main; // 0x638(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortDirectAcquisitionWidgetBase_Legacy");
			return ret;
		}

		void OnDisplayToast(bool bDisplayToast); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void IsTabsLayout(bool bShouldDisplayTabs); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleAffiliateButtonClicked(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D620C0(relative to base address)
		FDateTime GetWeeklyStoreEndDate(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D61F2C(relative to base address)
		TArray GetStoreCurrencies(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D616C0(relative to base address)
		FDateTime GetSeasonStoreEndDate(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D6157C(relative to base address)
		FDateTime GetDailyStoreEndDate(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D60D54(relative to base address)
	};


	// Class SaveTheWorldUI.FortExpeditionBuildSquadWidget
	// Inherited from UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x78 (0x5A0 - 0x528)
	class UFortExpeditionBuildSquadWidget : public UCommonActivatablePanelLegacy	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x528(0x8) UNKNOWN PROPERTY
		TWeakObjectPtr<UFortExpeditionItem*> Item; // 0x530(0x8)
		FName CurrentSquadId; // 0x538(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x53C(0x4) UNKNOWN PROPERTY
		UFortSquadSlotsView* ExpeditionSquadSlotsView; // 0x540(0x8)
		UFortSquadSlotDetailsPanel* ExpeditionSquadSlotDetails; // 0x548(0x8)
		UFortSquadSlotItemPicker* ExpeditionSquadSlotPicker; // 0x550(0x8)
		UFortExpeditionMasterWidget* MasterWidget; // 0x558(0x8)
		FPrimaryContentSetup PrimaryContentSetup; // 0x560(0x3)
		unsigned char UnknownData02_6[0x5]; // 0x563(0x5) UNKNOWN PROPERTY
		UFortItemViewContext_ExpeditionSquadSlotsView* ItemViewContext_ExpeditionSlotsView; // 0x568(0x8)
		UFortItemViewContext_ExpeditionSquadSlotItemPicker* ItemViewContext_ExpeditionSlotItemPicker; // 0x570(0x8)
		unsigned char UnknownData03_7[0x28]; // 0x578(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortExpeditionBuildSquadWidget");
			return ret;
		}

		void SetMasterWidget(UFortExpeditionMasterWidget* Widget); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D661B0(relative to base address)
		void SetData(UFortExpeditionItem* InItem); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7506AF3E8(relative to base address)
		void SetCurrentSquadId(FName SquadID); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D6596C(relative to base address)
		void OnRequestClosePicker(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRefreshBuildSquadWidget(); // Flags: Native|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF74D8BB404(relative to base address)
		bool IsSquadSlotLocked(int32_t SlotIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D63640(relative to base address)
		bool IsExpeditionValidToStart(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D6345C(relative to base address)
		void HandleRequestStartExpedition(bool& bPassThrough); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751D62CAC(relative to base address)
		void HandleDifferentSquadSlotSelected(int32_t SquadSlotIndex); // Flags: Final|Native|Private, Memory Exec: 0x7FF751D6242C(relative to base address)
		void ClearTemporaryExpeditionSquadState(bool bPreviewOnly); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D602D0(relative to base address)
	};


	// Class SaveTheWorldUI.FortExpeditionDetailsWidget
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x40 (0x318 - 0x2D8)
	class UFortExpeditionDetailsWidget : public UCommonUserWidget	
	{
	public:
		TWeakObjectPtr<UFortExpeditionItem*> Item; // 0x2D8(0x8)
		UFortSquadSlotsView* ExpeditionSquadSlotsView; // 0x2E0(0x8)
		FName CurrentSquadId; // 0x2E8(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x2EC(0x4) UNKNOWN PROPERTY
		UFortItemViewContext_ExpeditionSquadSlotsView* ItemViewContext_ExpeditionSlotsView; // 0x2F0(0x8)
		unsigned char UnknownData01_7[0x20]; // 0x2F8(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortExpeditionDetailsWidget");
			return ret;
		}

		void SetData(UFortExpeditionItem* InItem); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF74DC86EF4(relative to base address)
		void SetCurrentSquadId(FName SquadID); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D65A00(relative to base address)
		void RequestAbandonExpedition(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D6524C(relative to base address)
		void HandleAbandonExpeditionCompleted(UFortExpeditionItem* Expedition, bool bSuccess); // Flags: Final|Native|Private, Memory Exec: 0x7FF751D61FF4(relative to base address)
	};


	// Class SaveTheWorldUI.FortExpeditionExpiresWidget
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x2E8 - 0x2D8)
	class UFortExpeditionExpiresWidget : public UCommonUserWidget	
	{
	public:
		TWeakObjectPtr<UFortExpeditionItem*> Item; // 0x2D8(0x8)
		unsigned char UnknownData00_7[0x8]; // 0x2E0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortExpeditionExpiresWidget");
			return ret;
		}

		void SetData(UFortExpeditionItem* InItem); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF74EA68858(relative to base address)
		void OnExpeditionExpirationUpdated(); // Flags: Native|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7474A9F44(relative to base address)
	};


	// Class SaveTheWorldUI.FortExpeditionListItemWidget
	// Inherited from UCommonButtonLegacy -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x1400 - 0x13E0)
	class UFortExpeditionListItemWidget : public UCommonButtonLegacy	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x13E0(0x8) UNKNOWN PROPERTY
		TWeakObjectPtr<UFortExpeditionItem*> Item; // 0x13E8(0x8)
		unsigned char UnknownData01_7[0x10]; // 0x13F0(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortExpeditionListItemWidget");
			return ret;
		}

		void OnItemChanged(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class SaveTheWorldUI.FortExpeditionListViewWidget
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x30 (0x308 - 0x2D8)
	class UFortExpeditionListViewWidget : public UCommonUserWidget	
	{
	public:
		FMulticastInlineDelegate OnExpeditionSelected; // 0x2D8(0x10)
		FMulticastInlineDelegate OnExpeditionListViewRefreshed; // 0x2E8(0x10)
		UCommonListView* ExpeditionListView; // 0x2F8(0x8)
		FName CurrentTabNameId; // 0x300(0x4)
		EFortExpeditionListSort SortType; // 0x304(0x1)
		unsigned char UnknownData00_7[0x3]; // 0x305(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortExpeditionListViewWidget");
			return ret;
		}

		void SetExpeditionListSortType(EFortExpeditionListSort InSortType); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D65B10(relative to base address)
		FText GetExpeditionListSortName(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D60DF4(relative to base address)
	};


	// Class SaveTheWorldUI.FortExpeditionMasterWidget
	// Inherited from UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x78 (0x5A0 - 0x528)
	class UFortExpeditionMasterWidget : public UCommonActivatablePanelLegacy	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x528(0x8) UNKNOWN PROPERTY
		FDataTableRowHandle BackInputAction; // 0x530(0x10)
		FDataTableRowHandle BuildExpeditionInputAction; // 0x540(0x10)
		FDataTableRowHandle AbandonExpeditionInputAction; // 0x550(0x10)
		FDataTableRowHandle CollectExpeditionInputAction; // 0x560(0x10)
		FDataTableRowHandle SortInputAction; // 0x570(0x10)
		unsigned char UnknownData01_7[0x20]; // 0x580(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortExpeditionMasterWidget");
			return ret;
		}

		void SetupInputAction(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751D663CC(relative to base address)
		void HandleSortInput(bool& bPassThrough); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleCollectExpeditionInput(bool& bPassThrough); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleBuildExpeditionInput(bool& bPassThrough); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleBackInput(bool& bPassThrough); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleAbandonExpeditionInput(bool& bPassThrough); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class SaveTheWorldUI.FortExpeditionOverviewWidget
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x28 (0x300 - 0x2D8)
	class UFortExpeditionOverviewWidget : public UCommonUserWidget	
	{
	public:
		UClass* TabButtonType; // 0x2D8(0x8)
		TArray<FExpeditionTabInfo> TabListRegistrationInfo; // 0x2E0(0x10)
		UFortTabListWidgetBase_Legacy* ExpeditionTabList; // 0x2F0(0x8)
		UFortExpeditionListViewWidget* ExpeditionListView; // 0x2F8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortExpeditionOverviewWidget");
			return ret;
		}

		void UpdateExpeditionTabs(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751D668BC(relative to base address)
		void OnExpeditionTabSelected(FName& TabNameID); // Flags: Native|Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF751D63934(relative to base address)
		void OnExpeditionOverviewRefresh(); // Flags: Native|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7470D9EB4(relative to base address)
		void HandleExpeditionTabSelected(FName TabNameID); // Flags: Final|Native|Private, Memory Exec: 0x7FF751D625D8(relative to base address)
		void HandleExpeditionTabButtonCreated(FName TabNameID, UCommonButtonBase* TabButton); // Flags: Final|Native|Private, Memory Exec: 0x7FF74E922328(relative to base address)
	};


	// Class SaveTheWorldUI.FortExpeditionPickVehicleWidget
	// Inherited from UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x28 (0x550 - 0x528)
	class UFortExpeditionPickVehicleWidget : public UCommonActivatablePanelLegacy	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x528(0x8) UNKNOWN PROPERTY
		FDataTableRowHandle BackInputAction; // 0x530(0x10)
		TWeakObjectPtr<UFortExpeditionItem*> Item; // 0x540(0x8)
		FPrimaryContentSetup PrimaryContentSetup; // 0x548(0x3)
		unsigned char UnknownData01_7[0x5]; // 0x54B(0x5) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortExpeditionPickVehicleWidget");
			return ret;
		}

		void SetData(UFortExpeditionItem* InItem); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF74FCB13CC(relative to base address)
		void HandleBackInput(bool& bPassThrough); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF751D62108(relative to base address)
	};


	// Class SaveTheWorldUI.FortExpeditionReturnsWidget
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x2E8 - 0x2D8)
	class UFortExpeditionReturnsWidget : public UCommonUserWidget	
	{
	public:
		TWeakObjectPtr<UFortExpeditionItem*> Item; // 0x2D8(0x8)
		unsigned char UnknownData00_7[0x8]; // 0x2E0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortExpeditionReturnsWidget");
			return ret;
		}

		void SetData(UFortExpeditionItem* InItem); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF74EA68858(relative to base address)
		void OnExpeditionInProgressUpdated(); // Flags: Native|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7474A9F44(relative to base address)
	};


	// Class SaveTheWorldUI.FortExpeditionRewardsWidget
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x28 (0x300 - 0x2D8)
	class UFortExpeditionRewardsWidget : public UCommonUserWidget	
	{
	public:
		FMulticastInlineDelegate OnAllExpeditionsCollected; // 0x2D8(0x10)
		UCommonTileView* RewardsTileView; // 0x2E8(0x8)
		bool bPendingCollection; // 0x2F0(0x1)
		unsigned char UnknownData00_7[0xF]; // 0x2F1(0xF) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortExpeditionRewardsWidget");
			return ret;
		}

		void RefreshRewardsUI(UFortExpeditionItem* Expedition, bool bExpeditionSucceeded, TArray<FFortItemInstanceQuantityPair>& Rewards); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF751D64A34(relative to base address)
		void ProcessNextReward(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D649A8(relative to base address)
		void HandleCollectionExpeditionCompleted(bool bMcpSuccess, UFortExpeditionItem* Expedition, bool bExpeditionSuccess, TArray<FFortItemInstanceQuantityPair>& Rewards); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF751D62184(relative to base address)
	};


	// Class SaveTheWorldUI.FortExpeditionSummaryWidget
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x58 (0x330 - 0x2D8)
	class UFortExpeditionSummaryWidget : public UCommonUserWidget	
	{
	public:
		int32_t AvailableExpeditions; // 0x2D8(0x4)
		int32_t CompletedExpeditions; // 0x2DC(0x4)
		int32_t LandVehiclesTotal; // 0x2E0(0x4)
		int32_t LandVehiclesAvailable; // 0x2E4(0x4)
		int32_t AirVehiclesTotal; // 0x2E8(0x4)
		int32_t AirVehiclesAvailable; // 0x2EC(0x4)
		int32_t SeaVehiclesTotal; // 0x2F0(0x4)
		int32_t SeaVehiclesAvailable; // 0x2F4(0x4)
		int32_t LandExpeditionsTotal; // 0x2F8(0x4)
		int32_t LandExpeditionsAvailable; // 0x2FC(0x4)
		int32_t AirExpeditionsTotal; // 0x300(0x4)
		int32_t AirExpeditionsAvailable; // 0x304(0x4)
		int32_t SeaExpeditionsTotal; // 0x308(0x4)
		int32_t SeaExpeditionsAvailable; // 0x30C(0x4)
		TArray<UFortExpeditionItem*> InProgressExpeditions; // 0x310(0x10)
		unsigned char UnknownData00_7[0x10]; // 0x320(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortExpeditionSummaryWidget");
			return ret;
		}

		void UnbindInventoryDelegates(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D667CC(relative to base address)
		void OnRefreshSummaryWidget(); // Flags: Native|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7474A9F44(relative to base address)
		void BindInventoryDelegates(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D5FCF0(relative to base address)
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

		int32_t TotalUnseenExpeditionsForTab(UWidget* Widget, FName& TabNameID); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751D66654(relative to base address)
		bool IsSquadOnExpedition(UWidget* Widget, FName& SquadID); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751D63570(relative to base address)
		FGameplayTag GetVehicleTagRequiredForExpedition(UFortExpeditionItem* Expedition); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF751D61DB0(relative to base address)
		bool GetVehicleTagFromSquadId(FName& SquadID, FGameplayTag& OutFoundVehicleTag); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751D61CD8(relative to base address)
		void GetTotalExpeditionVehiclesAvailable(UWidget* Widget, AFortPlayerController* FortPC, int32_t& OutLandVehicles, int32_t& OutLandVehiclesAvailable, int32_t& OutSeaVehicles, int32_t& OutSeaVehiclesAvailable, int32_t& OutAirVehicles, int32_t& OutAirVehiclesAvailable); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751D617AC(relative to base address)
		void GetMatchedCriteriaTags(UFortExpeditionItem* Expedition, TArray<UFortItem*>& SlottedItems, TArray<FGameplayTag>& OutMatchedCriteria); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751D6123C(relative to base address)
		bool GetExpeditionSquadsThatMatchRequirements(FGameplayTagContainer& RequirementTags, AFortPlayerController* FortPC, TArray<FName>& OutExpeditionSquadIds); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751D60F60(relative to base address)
		float GetExpeditionSquadPower(AFortPlayerController* FortPC, FName& SquadID); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751D60E90(relative to base address)
		void GetAllExpeditionSquadIds(TArray<FName>& OutExpeditionSquadIds); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751D60C88(relative to base address)
		float CalculateTotalPower(AFortPlayerController* FortPC, UFortExpeditionItem* Expedition, FName& SquadID, TArray<UFortItem*>& SlottedItems); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751D60038(relative to base address)
		void CalculateGlobalAndItemRatingModValuesBP(UFortExpeditionItem* Expedition, TArray<UFortItem*>& SlottedItems, float& GlobalPowerMod, TArray<float>& SlottedItemMods); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751D5FE2C(relative to base address)
		float CalculateExpeditionPercentageChanceForSuccess(UFortExpeditionItem* Expedition, float TotalPower); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF751D5FD18(relative to base address)
		bool AreExpeditionsUnlocked(UObject* WorldContextObject, FUniqueNetIdRepl& UniqueID); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751D5FB9C(relative to base address)
		bool AreAnyExpeditionsComplete(UWidget* Widget); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF751D5FB1C(relative to base address)
	};


	// Class SaveTheWorldUI.FortExpeditionVehicleTileItemWidget
	// Inherited from UCommonButtonLegacy -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x13F0 - 0x13E0)
	class UFortExpeditionVehicleTileItemWidget : public UCommonButtonLegacy	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x13E0(0x8) UNKNOWN PROPERTY
		TWeakObjectPtr<UObject*> SquadID; // 0x13E8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortExpeditionVehicleTileItemWidget");
			return ret;
		}
	};


	// Class SaveTheWorldUI.FortFeatureUnlockWidget
	// Inherited from UFortActivatablePanel -> UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x38 (0x598 - 0x560)
	class UFortFeatureUnlockWidget : public UFortActivatablePanel	
	{
	public:
		UCommonWidgetSwitcherLegacy* MediaSwitcher; // 0x560(0x8)
		UWidget* VideoContent; // 0x568(0x8)
		UWidget* ImageContent; // 0x570(0x8)
		UFortVideoPlayerWidget* VideoWidget; // 0x578(0x8)
		UCommonLazyImage* ImageWidget; // 0x580(0x8)
		unsigned char UnknownData00_7[0x10]; // 0x588(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortFeatureUnlockWidget");
			return ret;
		}

		void SetData(FString ItemTemplateID); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D65A80(relative to base address)
		void RefreshDataBP(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UMediaSource GetVideo(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D61F0C(relative to base address)
		FText GetTitle(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D61738(relative to base address)
		TWeakObjectPtr GetSmallIcon(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D6163C(relative to base address)
		TWeakObjectPtr GetLargeIcon(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D611F4(relative to base address)
		FText GetDescription(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D60D80(relative to base address)
	};


	// Class SaveTheWorldUI.FortCraftingBarWidget
	// Inherited from UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x28 (0x340 - 0x318)
	class UFortCraftingBarWidget : public UFortHUDElementWidget	
	{
	public:
		UCommonTextBlock* CraftingText; // 0x318(0x8)
		UProgressBar* CraftingProgressBar; // 0x320(0x8)
		float CompletedRemainVisibleTime; // 0x328(0x4)
		unsigned char UnknownData00_7[0x14]; // 0x32C(0x14) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortCraftingBarWidget");
			return ret;
		}

		void SetHideCraftingBar(bool bInHideCraftBar); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D65C9C(relative to base address)
		void OnCompletedSetHidden(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751D63920(relative to base address)
		void HandlePlayerStoppedCrafting(bool bSuccess, EFortCraftFailCause CraftFailureCause); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751D62B10(relative to base address)
		void HandlePlayerStartedCrafting(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751D62AFC(relative to base address)
	};


	// Class SaveTheWorldUI.FortResultsWidgetSTW
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x100 (0x4F0 - 0x3F0)
	class UFortResultsWidgetSTW : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0x3F0(0x10) UNKNOWN PROPERTY
		FDataTableRowHandle SkipInputAction; // 0x400(0x10)
		unsigned char UnknownData01_6[0x8]; // 0x410(0x8) UNKNOWN PROPERTY
		FDataTableRowHandle EmoteInputAction; // 0x418(0x10)
		unsigned char UnknownData02_6[0x8]; // 0x428(0x8) UNKNOWN PROPERTY
		FDataTableRowHandle PickerCancelInputAction; // 0x430(0x10)
		unsigned char UnknownData03_6[0x60]; // 0x440(0x60) UNKNOWN PROPERTY
		int32_t AdditionalGrantedMissionPoints; // 0x4A0(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x4A4(0x4) UNKNOWN PROPERTY
		TArray<UFortItem*> RewardedBadges; // 0x4A8(0x10)
		TArray<UFortItem*> MissedBadges; // 0x4B8(0x10)
		TArray<UFortItem*> RewardedItems; // 0x4C8(0x10)
		TArray<UFortItem*> RewardedAccountItems; // 0x4D8(0x10)
		unsigned char UnknownData05_7[0x8]; // 0x4E8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortResultsWidgetSTW");
			return ret;
		}

		void TriggerSetupTeleportCameraEvent(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D667A4(relative to base address)
		void ToggleChat(bool bShow); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751D66438(relative to base address)
		void SendEndOfRoundUpVoteAnalytic(FUniqueNetIdRepl& TargetId, FString TargetPlayerName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751D656F0(relative to base address)
		void SendEndOfRoundScreenAnalytic(FString ScreenName, bool Skipped, float TimeSpent); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D655BC(relative to base address)
		void SendEndOfRoundFriendInviteAnalytic(FUniqueNetIdRepl& TargetId, FString TargetPlayerName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751D65454(relative to base address)
		void RequestExitZone(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D65260(relative to base address)
		void LogXPData(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D637E4(relative to base address)
		bool IsDataFinalized(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D63438(relative to base address)
		void HandleDisplayedPrimaryContentChanged(UCommonActivatableWidget* DisplayWidget); // Flags: Final|Native|Private, Memory Exec: 0x7FF751D624B0(relative to base address)
		void HandleActionSkip(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleActionPickerCancel(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751D620AC(relative to base address)
		FText GetZoneCompletionResultText(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D61F88(relative to base address)
		EFortCompletionResult GetZoneCompletionResult(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D61F58(relative to base address)
		int32_t GetTotalMissionPointsEarned(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D61C20(relative to base address)
		void GetRewardsByType(EFortRewardItemTypeSTW Type, TArray<UFortItem*>& OutRewards); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751D61464(relative to base address)
		void EnableSkipAction(bool Enabled); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751D608D0(relative to base address)
		void EnableEmoteAction(bool Enabled); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751D60850(relative to base address)
	};


	// Class SaveTheWorldUI.FortSTWUIData
	// Inherited from UFortSTWUIDataBase -> UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x80 (0xB0 - 0x30)
	class UFortSTWUIData : public UFortSTWUIDataBase	
	{
	public:
		TWeakObjectPtr<UDataTable*> UpgradesDisplayDataTable; // 0x30(0x20)
		TWeakObjectPtr<UFortMultiSizeBrushAsset*> UnlockedSquadSlotBorderMultiSizeBrush; // 0x50(0x20)
		TWeakObjectPtr<UFortMultiSizeBrushAsset*> LockedSquadSlotBorderMultiSizeBrush; // 0x70(0x20)
		TWeakObjectPtr<UFortMultiSizeBrushAsset*> ReadOnlySquadSlotBorderMultiSizeBrush; // 0x90(0x20)

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
		UTalkingHead* TalkingHead; // 0x418(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortRootViewportLayout_STW");
			return ret;
		}
	};


	// Class SaveTheWorldUI.FortItemAutoMulchActivatablePanel_STW
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x58 (0x448 - 0x3F0)
	class UFortItemAutoMulchActivatablePanel_STW : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData00_1[0x58]; // 0x3F0(0x58) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortItemAutoMulchActivatablePanel_STW");
			return ret;
		}

		void SetItemManagementScreen(UFortItemManagementScreen_STW* InItemManagementScreen); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D65FB0(relative to base address)
		void SaveSettings(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751D653C8(relative to base address)
		void RestoreAutoMulchSettings(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751D653B4(relative to base address)
		TArray GetMulchCategoriesForInventoryFilter(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D61380(relative to base address)
		EFortFrontendInventoryFilter GetFrontendInventoryFilter(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D61114(relative to base address)
		void EnterMulchModeForAutoMulch(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751D60BB8(relative to base address)
		void CacheAutoMulchSettings(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751D5FD04(relative to base address)
	};


	// Class SaveTheWorldUI.FortItemCraftingOptionsActivatablePanel_STW
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xB0 (0x4A0 - 0x3F0)
	class UFortItemCraftingOptionsActivatablePanel_STW : public UCommonActivatableWidget	
	{
	public:
		UFortSchematicItem* BaseItem; // 0x3F0(0x8)
		UFortSchematicItem* TargetItem; // 0x3F8(0x8)
		int32_t MaxCraftingTierIndex; // 0x400(0x4)
		int32_t TargetCraftingTierIndex; // 0x404(0x4)
		int32_t TargetPromotionTierIndex; // 0x408(0x4)
		int32_t MaxQuantity; // 0x40C(0x4)
		int32_t SelectedQuantity; // 0x410(0x4)
		bool CanCraftTargetItem; // 0x414(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x415(0x3) UNKNOWN PROPERTY
		UWidget* TierImageParent; // 0x418(0x8)
		UWidget* TierImageParent; // 0x420(0x8)
		UWidget* TierImageParent; // 0x428(0x8)
		UWidget* TierImageParent; // 0x430(0x8)
		UWidget* TierImageParent; // 0x438(0x8)
		UImage* TierImage; // 0x440(0x8)
		UImage* TierImage; // 0x448(0x8)
		UImage* TierImage; // 0x450(0x8)
		UImage* TierImage; // 0x458(0x8)
		UImage* TierImage; // 0x460(0x8)
		FDataTableRowHandle BackInputActionRowHandle; // 0x468(0x10)
		unsigned char UnknownData01_6[0x8]; // 0x478(0x8) UNKNOWN PROPERTY
		TArray<UWidget*> TierImageParentList; // 0x480(0x10)
		TArray<UImage*> TierImageList; // 0x490(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortItemCraftingOptionsActivatablePanel_STW");
			return ret;
		}

		void UpdateTierImages(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751D668E4(relative to base address)
		void SetTargetCraftingTierIndex(int32_t NewTierIndex); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751D6633C(relative to base address)
		void SetSelectedQuantity_BP(int32_t NewQuantity); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751D6623C(relative to base address)
		void SetItemManagementScreen(UFortItemManagementScreen_STW* InItemManagementScreen); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D660B0(relative to base address)
		void SetBaseSchematicItem(UFortSchematicItem* InBaseItem); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D65858(relative to base address)
		void SelectPreviousTier(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751D6541C(relative to base address)
		void SelectNextTier(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751D653DC(relative to base address)
		void OnTargetItemChanged(UFortSchematicItem* NewTargetItem); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSelectedQuantityChanged(int32_t NewSelectedQuantity); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnMaxQuantityChanged(int32_t NewMaxQuantity); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnBaseItemChanged(UFortSchematicItem* NewBaseItem); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void IncreaseSelectedQuantity(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751D6338C(relative to base address)
		void HandleBack(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF749B1B2C4(relative to base address)
		void DecreaseSelectedQuantity(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751D606F0(relative to base address)
		void CraftTargetItem(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751D60644(relative to base address)
		void CraftAndSlotTargetItem(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751D604DC(relative to base address)
	};


	// Class SaveTheWorldUI.FortItemDetailsActivatablePanel_STW
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xA8 (0x498 - 0x3F0)
	class UFortItemDetailsActivatablePanel_STW : public UCommonActivatableWidget	
	{
	public:
		UCommonLoadGuard* ItemToDetailLoadGuard; // 0x3F0(0x8)
		unsigned char UnknownData00_6[0x8]; // 0x3F8(0x8) UNKNOWN PROPERTY
		UFortTooltipLoadingWrapper* ItemToDetailLoadingWrapper; // 0x400(0x8)
		unsigned char UnknownData01_6[0x18]; // 0x408(0x18) UNKNOWN PROPERTY
		FDataTableRowHandle BackInputActionHandle; // 0x420(0x10)
		TWeakObjectPtr<UFortItem*> ItemToDetail; // 0x430(0x8)
		TWeakObjectPtr<UFortItem*> ItemToCompareWith; // 0x438(0x8)
		TWeakObjectPtr<UFortItemManagementScreen_STW*> HostItemManagementScreen; // 0x440(0x8)
		unsigned char UnknownData02_7[0x50]; // 0x448(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW");
			return ret;
		}

		void SetInputActionEnabled(FDataTableRowHandle& InputActionRowHandle, bool bEnable); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751D65E40(relative to base address)
		void HandleItemToDetailTooltipAssetsLoaded(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751D62A18(relative to base address)
		void HandleDifferentItemToDetailSetBP(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleDifferentItemToCompareSetBP(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleConsumeItemProgressChangedBP(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleBack(); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UFortPopupMenu GetItemManagementViewPopup(); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class SaveTheWorldUI.FortItemDetailsModeActivatablePanel_STW
	// Inherited from UFortItemDetailsActivatablePanel_STW -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x150 (0x5E8 - 0x498)
	class UFortItemDetailsModeActivatablePanel_STW : public UFortItemDetailsActivatablePanel_STW	
	{
	public:
		UCommonActivatableWidgetSwitcher* DetailPanelWidgetSwitcher; // 0x498(0x8)
		FDataTableRowHandle SortInputActionHandle; // 0x4A0(0x10)
		FDataTableRowHandle SortInGameInputActionHandle; // 0x4B0(0x10)
		FDataTableRowHandle DropInputActionHandle; // 0x4C0(0x10)
		FDataTableRowHandle DestroyInputActionHandle; // 0x4D0(0x10)
		FDataTableRowHandle LeaveInventoryInputActionHandle; // 0x4E0(0x10)
		FDataTableRowHandle CraftingOptionsInputActionHandle; // 0x4F0(0x10)
		FDataTableRowHandle CraftInputActionHandle; // 0x500(0x10)
		FDataTableRowHandle MulchInputActionHandle; // 0x510(0x10)
		FDataTableRowHandle RetireInputActionHandle; // 0x520(0x10)
		FDataTableRowHandle InspectInputActionHandle; // 0x530(0x10)
		FDataTableRowHandle InventoryInspectInputActionHandle; // 0x540(0x10)
		FDataTableRowHandle UnequipInputActionHandle; // 0x550(0x10)
		FDataTableRowHandle EquipInputActionHandle; // 0x560(0x10)
		FDataTableRowHandle MoreInfoInputActionHandle; // 0x570(0x10)
		FDataTableRowHandle WithdrawAllInputActionHandle; // 0x580(0x10)
		FDataTableRowHandle SwitchPanelInputActionHandle; // 0x590(0x10)
		FDataTableRowHandle TransferInputActionHandle; // 0x5A0(0x10)
		FDataTableRowHandle ConsumeItemInputActionHandle; // 0x5B0(0x10)
		FDataTableRowHandle CompareInputActionHandle; // 0x5C0(0x10)
		FDataTableRowHandle OpenCustomFilterInputActionHandle; // 0x5D0(0x10)
		unsigned char UnknownData00_7[0x8]; // 0x5E0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortItemDetailsModeActivatablePanel_STW");
			return ret;
		}

		void SetupInputHandling(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751D663E0(relative to base address)
		void RegisterTransferActions(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751D651B8(relative to base address)
		void RegisterSort(bool bInGame); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751D65138(relative to base address)
		void RegisterRetire(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751D65124(relative to base address)
		void RegisterOpenCustomFilter(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751D65108(relative to base address)
		void RegisterMulch(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751D650F4(relative to base address)
		void RegisterMore(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751D650E0(relative to base address)
		void RegisterLeaveInventory(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751D650CC(relative to base address)
		void RegisterInventoryInspect(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751D650B8(relative to base address)
		void RegisterInspectUpgrade(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751D6509C(relative to base address)
		void RegisterInspect(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751D65088(relative to base address)
		void RegisterEquip(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751D64BD0(relative to base address)
		void RegisterDropOrDestroy(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751D64BBC(relative to base address)
		void RegisterCraft(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751D64BA8(relative to base address)
		void RegisterConsumeItem(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751D64B94(relative to base address)
		void RegisterCompare(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751D64B78(relative to base address)
		void RefreshTransferActions(); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RefreshSwitchPanelAction(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751D64B64(relative to base address)
		void RefreshMulchAction(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751D64A20(relative to base address)
		void RefreshDropAction(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751D64A0C(relative to base address)
		void RefreshDestroyAction(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751D649F8(relative to base address)
		void RefreshCraftActions(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751D649D0(relative to base address)
		void RefreshConsumeAction(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751D649BC(relative to base address)
		bool MulchQuestComplete(); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleWorldItemsChanged(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751D631A8(relative to base address)
		void HandleWorldItemListChanged(TArray<UFortWorldItem*>& ItemsAdded, TArray<UFortWorldItem*>& ItemsRemoved); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751D63094(relative to base address)
		void HandleWithdrawAll(); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleTransfer(); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleSwitchPanel(); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleSort(); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleQuickbarContentsChanged(EFortQuickBars QuickbarIndex, TArray<int32_t>& ChangedSlots); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751D62BD4(relative to base address)
		void HandleOpenCustomFilter(); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleOnActiveWidgetChanged(UWidget* ActiveWidget, int32_t ActiveWidgetIndex); // Flags: Final|Native|Private, Memory Exec: 0x7FF751D62A2C(relative to base address)
		void HandleMulchNative(); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleMulch(); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleMore(); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleInspect(); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleEquip(); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleDrop(); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleDestroy(); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleCraftingOptions(); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleCraft(); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleConsumeItem(); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleCompare(); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class SaveTheWorldUI.FortItemCompareModeActivatablePanel_STW
	// Inherited from UFortItemDetailsActivatablePanel_STW -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x4A8 - 0x498)
	class UFortItemCompareModeActivatablePanel_STW : public UFortItemDetailsActivatablePanel_STW	
	{
	public:
		UFortItemManagementItemDetailsPanel_STW* ComparisonModeLeftItemDetailsPanel_STW; // 0x498(0x8)
		UFortItemManagementItemDetailsPanel_STW* ComparisonModeRightItemDetailsPanel_STW; // 0x4A0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortItemCompareModeActivatablePanel_STW");
			return ret;
		}

		void RegisterInputActions(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF748178B90(relative to base address)
	};


	// Class SaveTheWorldUI.FortItemMulchModeActivatablePanel_STW
	// Inherited from UFortItemDetailsActivatablePanel_STW -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x50 (0x4E8 - 0x498)
	class UFortItemMulchModeActivatablePanel_STW : public UFortItemDetailsActivatablePanel_STW	
	{
	public:
		UFortItemManagementItemDetailsPanel_STW* MulchModeItemDetailsPanel_STW; // 0x498(0x8)
		UFortItemManagementMulchDetailsPanel_STW* MulchDetailsPanel_STW; // 0x4A0(0x8)
		FDataTableRowHandle AutoRecycleActionHandle; // 0x4A8(0x10)
		FDataTableRowHandle AutoRetireInputActionHandle; // 0x4B8(0x10)
		FDataTableRowHandle DetailsInputActionHandle; // 0x4C8(0x10)
		FDataTableRowHandle LeaveInventoryInputActionHandle; // 0x4D8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortItemMulchModeActivatablePanel_STW");
			return ret;
		}

		void RegisterInputActions(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751D6500C(relative to base address)
		void HandleLeaveInventory(); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleInfo(); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleAutoMulch(); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class SaveTheWorldUI.FortItemManagementCustomFilterModalWidget_STW
	// Inherited from UFortActivatablePanel -> UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x68 (0x5C8 - 0x560)
	class UFortItemManagementCustomFilterModalWidget_STW : public UFortActivatablePanel	
	{
	public:
		TWeakObjectPtr<UFortItemManagementScreen_STW*> HostItemManagementScreen; // 0x560(0x8)
		TArray<EFortInventoryCustomFilter> AvailableFilters; // 0x568(0x10)
		TSet<EFortInventoryCustomFilter> LocalCustomFilterSet; // 0x578(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortItemManagementCustomFilterModalWidget_STW");
			return ret;
		}

		void ToggleFilter(EFortInventoryCustomFilter Filter); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751D664E8(relative to base address)
		void OnEndCommitCustomFilter(bool bWasSuccessful); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCustomFilterSetUpdated(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnBeginCommitCustomFilter(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool IsCustomFilterEnabled(EFortInventoryCustomFilter Filter); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750145A54(relative to base address)
		void EnableAllFilters(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751D607E8(relative to base address)
		void DisableAllFilters(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751D60718(relative to base address)
		void CommitCustomFilters(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751D60350(relative to base address)
	};


	// Class SaveTheWorldUI.FortItemManagementInventoryPanel_STW
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x1D8 (0x5C8 - 0x3F0)
	class UFortItemManagementInventoryPanel_STW : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData00_3[0x50]; // 0x3F0(0x50) UNKNOWN PROPERTY
		FName CurrentFilterName; // 0x440(0x4)
		EInventoryContentSortType CurrentSortType; // 0x444(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x445(0x3) UNKNOWN PROPERTY
		UClass* FilterTabButtonType; // 0x448(0x8)
		UClass* FilterTabButtonStyle; // 0x450(0x8)
		TArray<FFortItemManagementInventoryFilterTabLabelInfo> FilterTabLabelInfoArray; // 0x458(0x10)
		UFortTabListWidgetBase* FilterTabList; // 0x468(0x8)
		UCommonLoadGuard* TileViewLoadGuard; // 0x470(0x8)
		UFortItemTileView* TileView; // 0x478(0x8)
		UPanelWidget* CraftingPanel; // 0x480(0x8)
		UCommonLoadGuard* CraftingTileViewLoadGuard; // 0x488(0x8)
		UFortItemTileView* CraftingTileView; // 0x490(0x8)
		UPanelWidget* StoragePanel; // 0x498(0x8)
		UCommonLoadGuard* StorageTileViewLoadGuard; // 0x4A0(0x8)
		UFortItemTileView* StorageTileView; // 0x4A8(0x8)
		UCommonTextBlock* MulchRestrictionReasonText; // 0x4B0(0x8)
		EFortItemCardSize SmallTileSize; // 0x4B8(0x1)
		EFortItemCardSize LargeTileSize; // 0x4B9(0x1)
		unsigned char UnknownData02_6[0x2]; // 0x4BA(0x2) UNKNOWN PROPERTY
		TWeakObjectPtr<UFortItemManagementScreen_STW*> HostItemManagementScreen; // 0x4BC(0x8)
		bool bCanDragItems; // 0x4C4(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x4C5(0x3) UNKNOWN PROPERTY
		TArray<FQuickbarEquipSlotIndicesConfig> DefaultQuickbarEquipSlotIndicesConfigs; // 0x4C8(0x10)
		TMap<FName, int32_t> QuickbarEquipSlotIndices; // 0x4D8(0x50)
		unsigned char UnknownData04_6[0x90]; // 0x528(0x90) UNKNOWN PROPERTY
		UFortInventoryContext* InventoryContext; // 0x5B8(0x8)
		UWidget* WidgetToCenter; // 0x5C0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW");
			return ret;
		}

		void UpdateSchematicTiles(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D668D0(relative to base address)
		void ToggleTileSize(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D66640(relative to base address)
		void TogglePrioritizeFavorites(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D66598(relative to base address)
		void SwitchPanelFocus(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D66424(relative to base address)
		void SetSortType(EInventoryContentSortType SortType); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D662BC(relative to base address)
		void SetFilter(FName FilterName); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751D65B9C(relative to base address)
		void RequestFocusEquipSlots(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D652B8(relative to base address)
		void RefreshCraftingSort(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D649E4(relative to base address)
		void OnMulchRestrictionTextShown(bool bShown); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void MarkAllItemsAsSeen(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D637F8(relative to base address)
		bool IsSwitchPanelAvailable(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D6372C(relative to base address)
		bool IsSelectedItem(UFortItem* Item); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D634BC(relative to base address)
		bool HasUnlockedStorageSlots(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7501458D0(relative to base address)
		void HandleSetOfItemsToMulchChangedBP(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleQuickBarChangedBP(EFortQuickBars QuickBarType); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleItemBeginDrag(UObject* Item); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D627C0(relative to base address)
		void HandleInventoryUpdatedEvent(); // Flags: Final|Native|Private, Memory Exec: 0x7FF751D627AC(relative to base address)
		void HandleFocusEquipSlotsBP(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleFilterTabSelected(FName TabNameID); // Flags: Final|Native|Private, Memory Exec: 0x7FF751D6272C(relative to base address)
		void HandleFilterTabButtonCreated(FName TabNameID, UCommonButtonBase* TabButton); // Flags: Final|Native|Private, Memory Exec: 0x7FF751D62658(relative to base address)
		void HandleDifferentSortTypeSetBP(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleDifferentItemManagementModeSetBP(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleDifferentFrontendInventoryFilterSetBP(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleDifferentFilterSetBP(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleCustomInventoryFilterChanged(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751D62418(relative to base address)
		void HandleCursorModeChangedBP(bool bCursorModeEnabled, FName ActionName, UUserWidget* CursorModeContentWidget); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleCursorModeChanged(bool bCursorModeEnabled, FName ActionName, UUserWidget* CursorModeContentWidget); // Flags: Final|Native|Private, Memory Exec: 0x7FF751D62310(relative to base address)
		void HandleCraftItemStarted(); // Flags: Final|Native|Private, Memory Exec: 0x7FF751D622FC(relative to base address)
		TArray GetUpgradeItemDefinitionsForCurrentInventory(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D61C98(relative to base address)
		TArray GetSupportedSortTypesForCurrentInventory(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D616FC(relative to base address)
		bool GetShouldPrioritizeFavorites(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D615F0(relative to base address)
		FText GetQualifiedFilterDisplayName(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D61428(relative to base address)
		void CycleSortType(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D606B4(relative to base address)
		bool CanDragItems(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D601A0(relative to base address)
		void AdvanceSelection(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D5FB08(relative to base address)
		void AddItemStackToMulch(UFortItem* Item, int32_t Count); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751D5F9BC(relative to base address)
	};


	// Class SaveTheWorldUI.FortItemManagementItemTileButton_STW
	// Inherited from UFortItemTileButton -> UCommonButtonLegacy -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x78 (0x1490 - 0x1418)
	class UFortItemManagementItemTileButton_STW : public UFortItemTileButton	
	{
	public:
		TWeakObjectPtr<UFortItemManagementScreen_STW*> HostItemManagementScreen; // 0x1418(0x8)
		bool HasTheItemToDetail; // 0x1420(0x1)
		bool HasTheItemToCompareDetailsWith; // 0x1421(0x1)
		bool HasAnItemMarkedForMulching; // 0x1422(0x1)
		unsigned char UnknownData00_6[0x1]; // 0x1423(0x1) UNKNOWN PROPERTY
		int32_t MulchCount; // 0x1424(0x4)
		UOverlay* NotCraftableOverlay; // 0x1428(0x8)
		UFortDynamicEntryBox* EquipSlotOverlay; // 0x1430(0x8)
		UMenuAnchor* PopupMenuAnchor; // 0x1438(0x8)
		bool ShowCollectionBookIndicator; // 0x1440(0x1)
		bool ShowRefundIndicator; // 0x1441(0x1)
		unsigned char UnknownData01_6[0x46]; // 0x1442(0x46) UNKNOWN PROPERTY
		UFortInventoryContext* InventoryContext; // 0x1488(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortItemManagementItemTileButton_STW");
			return ret;
		}

		void UpdateEquipSlotOverlay(int32_t CurrentSlotIndex); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D6683C(relative to base address)
		void PopulateEquipSlotOverlay(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D64910(relative to base address)
		void OnSlotItemComplete(UFortAccountItem* SlottedItem, FName SlotId); // Flags: Final|Native|Private, Memory Exec: 0x7FF751D644E4(relative to base address)
		bool IsValidEquipSlotOverlayIndex(int32_t SlotIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D63750(relative to base address)
		void HandleShowRefundIndicatorChanged(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleShowCollectionBookIndicatorChanged(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleItemMulchStateChanged(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleItemChangedBP(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleHasItemToDetailChanged(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleHasItemToCompareDetailsWithChanged(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleEquipSlotChanged(int32_t EquipSlot); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleDifferentItemManagementModeSetBP(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UUserWidget GetPopupMenu(); // Flags: Final|Native|Private, Memory Exec: 0x7FF751D61404(relative to base address)
		EFortItemManagementMode GetItemManagementMode(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D61158(relative to base address)
		FHomebaseSquadSlotId GetHomebaseSquadSlotForItem(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750144804(relative to base address)
	};


	// Class SaveTheWorldUI.FortItemManagementItemDetailsPanel_STW
	// Inherited from UFortItemDetailsHostPanel -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x3D8 - 0x3B8)
	class UFortItemManagementItemDetailsPanel_STW : public UFortItemDetailsHostPanel	
	{
	public:
		bool HasItemMarkedForMulching; // 0x3B8(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x3B9(0x3) UNKNOWN PROPERTY
		TWeakObjectPtr<UFortItemManagementScreen_STW*> HostItemManagementScreen; // 0x3BC(0x8)
		unsigned char UnknownData01_6[0xC]; // 0x3C4(0xC) UNKNOWN PROPERTY
		UFortInventoryContext* InventoryContext; // 0x3D0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortItemManagementItemDetailsPanel_STW");
			return ret;
		}

		void HandleHostSet(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleHasItemMarkedForMulchingChanged(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		TArray GetAmmoTypeItemDefinitions(); // Flags: Final|Native|Static|Protected|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7501447C8(relative to base address)
	};


	// Class SaveTheWorldUI.FortItemManagementMulchDetailsPanel_STW
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x28 (0x300 - 0x2D8)
	class UFortItemManagementMulchDetailsPanel_STW : public UCommonUserWidget	
	{
	public:
		UFortItemQuantityListBase* ResourceList; // 0x2D8(0x8)
		TScriptInterface<Class> HostItemManagementMulchPanel; // 0x2E0(0x10)
		unsigned char UnknownData00_6[0x8]; // 0x2F0(0x8) UNKNOWN PROPERTY
		UFortInventoryContext* InventoryContext; // 0x2F8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortItemManagementMulchDetailsPanel_STW");
			return ret;
		}

		void SetHost(TScriptInterface<Class> Host); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D65D1C(relative to base address)
		bool IsSpaceAvailableForMulch(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D6354C(relative to base address)
		void HandleSetOfItemsToMulchChangedBP(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleHostSet(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		TArray GetItemsToMulch(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7501449C4(relative to base address)
		TArray GetItemCountsToMulch(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7501448C0(relative to base address)
		void CommitMulch(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF75014409C(relative to base address)
	};


	// Class SaveTheWorldUI.FortItemManagementModeDetailsPanel_STW
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x30 (0x308 - 0x2D8)
	class UFortItemManagementModeDetailsPanel_STW : public UCommonUserWidget	
	{
	public:
		UCommonWidgetSwitcherLegacy* ModeWidgetSwitcher; // 0x2D8(0x8)
		UFortItemDetailsModeActivatablePanel_STW* DetailsModeItemDetailsPanel; // 0x2E0(0x8)
		UFortItemCompareModeActivatablePanel_STW* ComparisonModeItemDetailsPanel; // 0x2E8(0x8)
		UFortItemMulchModeActivatablePanel_STW* MulchModeItemDetailsPanel; // 0x2F0(0x8)
		TWeakObjectPtr<UFortItemManagementScreen_STW*> HostItemManagementScreen; // 0x2F8(0x8)
		unsigned char UnknownData00_7[0x8]; // 0x300(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortItemManagementModeDetailsPanel_STW");
			return ret;
		}

		void HandleHostSet(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleDifferentItemManagementModeSetBP(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		EFortItemManagementMode GetItemManagementMode(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D6117C(relative to base address)
	};


	// Class SaveTheWorldUI.FortItemManagementScreen_STW
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x210 (0x600 - 0x3F0)
	class UFortItemManagementScreen_STW : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0x3F0(0x10) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnItemViewRefreshed; // 0x400(0x10)
		unsigned char UnknownData01_6[0xC0]; // 0x410(0xC0) UNKNOWN PROPERTY
		EFortItemManagementMode Mode; // 0x4D0(0x1)
		EFortFrontendInventoryFilter FrontendInventoryFilter; // 0x4D1(0x1)
		bool bReadOnlyModeWIFE; // 0x4D2(0x1)
		bool ConsumeItemRequestInProgress; // 0x4D3(0x1)
		unsigned char UnknownData02_6[0x4]; // 0x4D4(0x4) UNKNOWN PROPERTY
		UClass* MoreMenuClass; // 0x4D8(0x8)
		UFortItemManagementInventoryPanel_STW* InventoryPanel; // 0x4E0(0x8)
		UFortItemManagementModeDetailsPanel_STW* ModeDetailsPanel; // 0x4E8(0x8)
		TWeakObjectPtr<UFortItem*> ItemToDetail; // 0x4F0(0x8)
		unsigned char UnknownData03_6[0x8]; // 0x4F8(0x8) UNKNOWN PROPERTY
		UClass* MulchConfirmationModalClass; // 0x500(0x8)
		UClass* CustomFilterModalClass; // 0x508(0x8)
		unsigned char UnknownData04_6[0x18]; // 0x510(0x18) UNKNOWN PROPERTY
		UFortMulchConfirmationModalWidget* MulchConfirmationModal; // 0x528(0x8)
		UFortItemManagementCustomFilterModalWidget_STW* CustomFilterModal; // 0x530(0x8)
		TMap<EInventoryContentSortType, FText> SortLabels; // 0x538(0x50)
		TMap<FName, FText> MoreLabels; // 0x588(0x50)
		unsigned char UnknownData05_6[0x8]; // 0x5D8(0x8) UNKNOWN PROPERTY
		UFortInventoryContext* InventoryContext; // 0x5E0(0x8)
		UFortItemManagementItemPopupMenu_STW* PopupMenuCache; // 0x5E8(0x8)
		unsigned char UnknownData06_7[0x10]; // 0x5F0(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortItemManagementScreen_STW");
			return ret;
		}

		void TransferItem(UFortItem* Item); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D66724(relative to base address)
		void ToggleShowRefundIndicator(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D66614(relative to base address)
		void ToggleShowCollectionBookIndicator(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D665E8(relative to base address)
		void ShowWarningReadOnlyWIFE(bool Force); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ShowMulchConfirmationModal(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D66408(relative to base address)
		void ShowCustomFilterModal(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D663F4(relative to base address)
		void SetFrontendInventoryFilter(EFortFrontendInventoryFilter FrontendInventoryFilter); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D65C1C(relative to base address)
		void SetConsumeItemRequestInProgress(bool InProgress); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D658D8(relative to base address)
		void RequestPopupMenuForSelectedItem(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D65300(relative to base address)
		void OpenMoreAndSortMenu(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D648FC(relative to base address)
		void OpenCraftingOptions(UFortSchematicItem* SchematicItem); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D6485C(relative to base address)
		void OpenAutoMulchOptions(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D64848(relative to base address)
		void NotifyPanelDeactivated(); // Flags: Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751D63850(relative to base address)
		void NotifyPanelActivated(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D63834(relative to base address)
		void MarkAllItemsAsSeen(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D6380C(relative to base address)
		bool IsScreenWIFE(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D63498(relative to base address)
		void InspectItem(UFortItem* Item); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D633B8(relative to base address)
		void HideMulchConfirmationModal(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D63370(relative to base address)
		void HideCustomFilterModal(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D63338(relative to base address)
		bool HasItemBeenSeen(UFortAccountItem* AccountItem); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F624E94(relative to base address)
		bool HasDefaultItemsToMulch(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D631BC(relative to base address)
		void HandleTransferItemBP(UFortItem* Item); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleOpenCraftingOptionsBP(UFortSchematicItem* SchematicItem); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleOpenAutoMulchOptionsBP(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleMulchQuantitySelection(UFortItem* Item); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleMoreButtonSelected(FName MoreNameId, UCommonButtonBase* NewButton); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleItemToDetailChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged); // Flags: Final|Native|Private, Memory Exec: 0x7FF751D6292C(relative to base address)
		void HandleItemToCompareWithChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged); // Flags: Final|Native|Private, Memory Exec: 0x7FF751D62840(relative to base address)
		void HandleInspectItemBP(UFortItem* Item); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleEquipItemBP(UFortItem* Item); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleDropItemBP(UFortItem* Item); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleDifferentItemManagementModeSetBP(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleCraftItemBP(UFortSchematicItem* SchematicItem, EFortItemTier RequestedTier, int32_t CraftCount); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleCraftAndSlotItemBP(UFortSchematicItem* SchematicItem, EFortItemTier RequestedTier, int32_t CraftCount); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleConsumeItemBP(UFortConsumableAccountItem* ConsumableItem); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool GuardActionForReadOnlyWIFE(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D61FD0(relative to base address)
		bool GetShouldShowRefundIndicator(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D61624(relative to base address)
		bool GetShouldShowCollectionBookIndicator(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D6160C(relative to base address)
		UFortItem GetItemToDetail(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D611D0(relative to base address)
		UFortItem GetItemToCompareDetailsWith(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D611AC(relative to base address)
		void EquipItem(UFortItem* Item); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D60C08(relative to base address)
		void EnterMulchModeForAutoMulch(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D60BF4(relative to base address)
		void EnterMulchMode(UFortItem* ItemToMulch); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D60A50(relative to base address)
		void EnterDetailsMode(UFortItem* ItemToDetail); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D609D0(relative to base address)
		void EnterComparisonMode(UFortItem* ItemToCompareDetailsWith); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D60950(relative to base address)
		void DropItem(UFortItem* Item); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D60748(relative to base address)
		void DefaultActionRefresh(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CycleSortType(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D606C8(relative to base address)
		void CraftItem(UFortSchematicItem* SchematicItem, EFortItemTier RequestedTier, int32_t CraftCount); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D6054C(relative to base address)
		void CraftAndSlotItem(UFortSchematicItem* SchematicItem, EFortItemTier RequestedTier, int32_t CraftCount); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D603E4(relative to base address)
		void ConsumeItem(UFortConsumableAccountItem* ConsumableItem); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D60364(relative to base address)
		bool CanRequestPopupMenuForSelectedItem(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D60248(relative to base address)
		bool CanEquipItem(UFortItem* Item); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D601B8(relative to base address)
		void CancelInventoryPanelTileViewRefresh(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751D60268(relative to base address)
	};


	// Class SaveTheWorldUI.MainMenu_STW
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x128 (0x518 - 0x3F0)
	class UMainMenu_STW : public UCommonActivatableWidget	
	{
	public:
		FText DefaultHelpText; // 0x3F0(0x10)
		UCommonTextBlock* Text_CountDownTimer; // 0x400(0x8)
		UCommonButtonBase* Button_LeaveExperience; // 0x408(0x8)
		UCommonUserWidget* Button_Leave; // 0x410(0x8)
		UCommonTextBlock* ContextualHelpText; // 0x418(0x8)
		UCommonButtonBase* Button_BackBoard; // 0x420(0x8)
		UBackgroundBlur* BackgroundBlur; // 0x428(0x8)
		UBorder* BackgroundDarkener; // 0x430(0x8)
		UCommonButtonBase* Button_ReportPlayer; // 0x438(0x8)
		UCommonButtonBase* Button_Logout; // 0x440(0x8)
		UCommonButtonBase* Button_Support; // 0x448(0x8)
		UCommonButtonBase* Button_Exit; // 0x450(0x8)
		UCommonButtonBase* Button_Settings; // 0x458(0x8)
		FDataTableRowHandle CloseMenuAction; // 0x460(0x10)
		FDataTableRowHandle OpenSocialMenuAction; // 0x470(0x10)
		FDataTableRowHandle ToggleMainMenuAction; // 0x480(0x10)
		FDataTableRowHandle SwitchProfileAction; // 0x490(0x10)
		UClass* SettingsScreenClass; // 0x4A0(0x8)
		FText LogoutTitle; // 0x4A8(0x10)
		FText LogoutDescription; // 0x4B8(0x10)
		FText ExitTitle; // 0x4C8(0x10)
		FText ExitDescription; // 0x4D8(0x10)
		bool bIsMainMenuOpen; // 0x4E8(0x1)
		unsigned char UnknownData00_6[0x27]; // 0x4E9(0x27) UNKNOWN PROPERTY
		UFortCampaignTabsScreenBase* MainTabsScreen; // 0x510(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.MainMenu_STW");
			return ret;
		}

		void TryShowPrimaryContent(TWeakObjectPtr<UClass*>& ContentWidgetClass); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751D8A2DC(relative to base address)
		void TryShowModal(TWeakObjectPtr<UClass*>& ModalWidgetClass); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751D8A234(relative to base address)
		bool ShouldShowLeaveExperienceButton(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D8A038(relative to base address)
		bool IsActiveTabMainShop(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D88098(relative to base address)
	};


	// Class SaveTheWorldUI.FortUIStateWidget_STWFrontend
	// Inherited from UFortUIStateWidget_STW -> UFortUIStateWidgetBase -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x68 (0x4A0 - 0x438)
	class UFortUIStateWidget_STWFrontend : public UFortUIStateWidget_STW	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0x438(0x10) UNKNOWN PROPERTY
		UTopBar_STW* TopBar_STW; // 0x448(0x8)
		TWeakObjectPtr<UFortCampaignTabsScreenBase*> MainTabsScreen; // 0x450(0x8)
		UClass* PlayerBannedScreenClass; // 0x458(0x8)
		TArray<UClass*> ScriptedActionsToRegister; // 0x460(0x10)
		TArray<EFortStoreState> DeferredSquadAutoSlottingStoreStates; // 0x470(0x10)
		unsigned char UnknownData01_7[0x20]; // 0x480(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortUIStateWidget_STWFrontend");
			return ret;
		}
	};


	// Class SaveTheWorldUI.FortUIStateWidget_STWJoinServer
	// Inherited from UFortUIStateWidgetBase -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x28 (0x430 - 0x408)
	class UFortUIStateWidget_STWJoinServer : public UFortUIStateWidgetBase	
	{
	public:
		UFortRejoinWindowBase* RejoinWindow; // 0x408(0x8)
		FDataTableRowHandle TutorialCompleteStatHandle; // 0x410(0x10)
		UClass* RejoinWindowClass; // 0x420(0x8)
		unsigned char UnknownData00_7[0x8]; // 0x428(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortUIStateWidget_STWJoinServer");
			return ret;
		}

		void OnShowTutorialDialog(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleMatchmakingStateChange(TEnumAsByte<EMatchmakingState> OldState, TEnumAsByte<EMatchmakingState> NewState); // Flags: Final|Native|Private, Memory Exec: 0x7FF751D87C40(relative to base address)
		void HandleMatchmakingComplete(EMatchmakingCompleteResult MatchmakingResult); // Flags: Final|Native|Private, Memory Exec: 0x7FF751D87B70(relative to base address)
		void HandleLobbyTimeUpdated(int32_t TimeRemaining); // Flags: Final|Native|Private, Memory Exec: 0x7FF751D87A70(relative to base address)
		void HandleLobbyDisconnected(); // Flags: Final|Native|Private, Memory Exec: 0x7FF751D87A5C(relative to base address)
	};


	// Class SaveTheWorldUI.TopBar_STW
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xB0 (0x4A0 - 0x3F0)
	class UTopBar_STW : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0x3F0(0x10) UNKNOWN PROPERTY
		UDataTable* PhoenixSeasonDisplayInfoMap; // 0x400(0x8)
		TMap<EFortUIFeatureStateReason, FText> ReasonDescriptions; // 0x408(0x50)
		TWeakObjectPtr<UMainMenu_STW*> MainMenu; // 0x458(0x8)
		UCommonButtonBase* Button_MainMenu; // 0x460(0x8)
		UImage* Image_ActiveInvitesNotification; // 0x468(0x8)
		UCommonButtonBase* Button_Social; // 0x470(0x8)
		unsigned char UnknownData01_6[0x10]; // 0x478(0x10) UNKNOWN PROPERTY
		FDataTableRowHandle OpenMainMenuInputAction; // 0x488(0x10)
		unsigned char UnknownData02_7[0x8]; // 0x498(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.TopBar_STW");
			return ret;
		}

		void SetOnlineFriendsCount(int32_t NewOnlineFriendsCount); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSocialMenuOpened(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnShouldShowPhoenixDisplay(bool bShow, UFortPhoenixSeasonDisplayInfo* PhoenixDisplayInfo); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnMainMenuOpening(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnMainMenuClosed(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleInputMethodChanged(ECommonInputType Type); // Flags: Final|Native|Private, Memory Exec: 0x7FF751D878C0(relative to base address)
	};


	// Class SaveTheWorldUI.FortHeroLoadoutGadgetPicker
	// Inherited from UFortItemPickerBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x30 (0x440 - 0x410)
	class UFortHeroLoadoutGadgetPicker : public UFortItemPickerBase	
	{
	public:
		unsigned char UnknownData00_3[0x14]; // 0x410(0x14) UNKNOWN PROPERTY
		TWeakObjectPtr<UFortCampaignHeroLoadoutItem*> TargetLoadoutItem; // 0x424(0x8)
		int32_t TargetSlotIndex; // 0x42C(0x4)
		TArray<UFortItem*> TemporaryGadgetItemInstances; // 0x430(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortHeroLoadoutGadgetPicker");
			return ret;
		}

		void SetTargetLoadoutSlot(UFortCampaignHeroLoadoutItem* LoadoutItem, int32_t SlotIndex); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D89C54(relative to base address)
		void HandleDifferentTargetLoadoutSlotSetBP(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class SaveTheWorldUI.FortHeroLoadoutHeroPicker
	// Inherited from UFortItemPickerBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x138 (0x548 - 0x410)
	class UFortHeroLoadoutHeroPicker : public UFortItemPickerBase	
	{
	public:
		unsigned char UnknownData00_3[0x18]; // 0x410(0x18) UNKNOWN PROPERTY
		UFortTabListWidgetBase_Legacy* ExternalFilterTabList; // 0x428(0x8)
		UFortTabListWidgetBase_Legacy* ExternalSubFilterTabList; // 0x430(0x8)
		TWeakObjectPtr<UFortCampaignHeroLoadoutItem*> TargetLoadoutItem; // 0x438(0x8)
		FName TargetSlotName; // 0x440(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x444(0x4) UNKNOWN PROPERTY
		UClass* FilterTabButtonType; // 0x448(0x8)
		TMap<FName, FFortTabButtonLabelInfo> TabButtonLabelInfoMap; // 0x450(0x50)
		TMap<FName, FFortTabButtonLabelInfo> AbilitiesLabelInfoMap; // 0x4A0(0x50)
		unsigned char UnknownData02_7[0x58]; // 0x4F0(0x58) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortHeroLoadoutHeroPicker");
			return ret;
		}

		void UpdateSubFilterVisibility(bool bVisible); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateSubFilterTabList(FName FilterSelectedTab); // Flags: Final|Native|Private|BlueprintCallable, Memory Exec: 0x7FF751D8ABA8(relative to base address)
		void UpdateFilterTabList(FName PreviouslySelectedTab); // Flags: Final|Native|Private|BlueprintCallable, Memory Exec: 0x7FF751D8A85C(relative to base address)
		void SetTargetLoadoutSlot(UFortCampaignHeroLoadoutItem* LoadoutItem, FName& SlotName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751D89D18(relative to base address)
		void HandleFilterTabSelectedBP(FName TabID); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleFilterTabSelected(FName TabID); // Flags: Final|Native|Private, Memory Exec: 0x7FF751D876EC(relative to base address)
		void HandleDifferentTargetLoadoutSetBP(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		FName GetCurrentlySelectedTab(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D8693C(relative to base address)
		void AssociateFilterTabList(UFortTabListWidgetBase_Legacy* InExternalFilterTabList, UFortTabListWidgetBase_Legacy* InExternalSubFilterTabList); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D860A8(relative to base address)
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
	// Size: 0x1B8 (0x5A8 - 0x3F0)
	class UFortHeroLoadoutScreenBase : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0x3F0(0x10) UNKNOWN PROPERTY
		UFortItemView* ItemViewObject; // 0x400(0x8)
		FDataTableRowHandle BackInputAction; // 0x408(0x10)
		FDataTableRowHandle HelpInputAction; // 0x418(0x10)
		FDataTableRowHandle CancelInputAction; // 0x428(0x10)
		FDataTableRowHandle ToggleDetailInputAction; // 0x438(0x10)
		FDataTableRowHandle ClearAllInputAction; // 0x448(0x10)
		FDataTableRowHandle ShowAllStatsInputAction; // 0x458(0x10)
		FDataTableRowHandle InspectRootSlotsInputAction; // 0x468(0x10)
		FDataTableRowHandle CyclePickerSortModeInputAction; // 0x478(0x10)
		FDataTableRowHandle InspectPickerInputAction; // 0x488(0x10)
		FDataTableRowHandle ToggleDescInputAction; // 0x498(0x10)
		unsigned char UnknownData01_6[0xA0]; // 0x4A8(0xA0) UNKNOWN PROPERTY
		bool AllowItemRotation; // 0x548(0x1)
		bool AllowItemZooming; // 0x549(0x1)
		bool AutomaticallyRegisterCameraView; // 0x54A(0x1)
		bool OverrideFixedCameras; // 0x54B(0x1)
		unsigned char UnknownData02_6[0x4]; // 0x54C(0x4) UNKNOWN PROPERTY
		UDataTable* ActionDataTable; // 0x550(0x8)
		UWidgetAnimation* AnimationToHideItemInfo; // 0x558(0x8)
		bool bAutoShowDetails; // 0x560(0x1)
		bool bItemDetailsHidden; // 0x561(0x1)
		unsigned char UnknownData03_6[0x2]; // 0x562(0x2) UNKNOWN PROPERTY
		float HideItemInfoHeaderDurationSecs; // 0x564(0x4)
		unsigned char UnknownData04_7[0x40]; // 0x568(0x40) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortHeroLoadoutScreenBase");
			return ret;
		}

		void ShowItemDetails(); // Flags: Final|Native|Private|BlueprintCallable, Memory Exec: 0x7FF751D8A05C(relative to base address)
		void SetInputBindings(bool ActivePickerBox, bool CommanderSlot, bool NoneSlot, bool CanClearAll); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751D8922C(relative to base address)
		void SetHeroLoadout(UFortCampaignHeroLoadoutItem* HeroLoadout); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnVaultItemsViewed(TArray<UFortItem*>& Items); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF751D88360(relative to base address)
		void OnItemPreviewChanged(AActor* NewPrefab, UFortItem* NewItem); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74C8E74BC(relative to base address)
		bool IsLoadoutSwitchingAllowed(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D8824C(relative to base address)
		void HideItemDetails(); // Flags: Final|Native|Private|BlueprintCallable, Memory Exec: 0x7FF751D88068(relative to base address)
		void HandleToggleDescInputAction(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleShowAllStatsInputAction(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleInspectRootSlotsInputAction(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleInspectPickerInputAction(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleHelpInputAction(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleDetailsInputAction(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleCyclePickerInputAction(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleClearAllInputAction(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleBackInputAction(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UWidget GetWidgetForFramingViewedItem(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool GetIsReadOnly(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D86BD8(relative to base address)
	};


	// Class SaveTheWorldUI.FortHeroLoadoutScreenLegacy
	// Inherited from UFortActivatablePanelWithItemPreview -> UFortActivatablePanel -> UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x6A8 - 0x6A8)
	class UFortHeroLoadoutScreenLegacy : public UFortActivatablePanelWithItemPreview	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortHeroLoadoutScreenLegacy");
			return ret;
		}

		void SetHeroLoadout(UFortCampaignHeroLoadoutItem* HeroLoadout); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool IsLoadoutSwitchingAllowed(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D8824C(relative to base address)
		bool GetIsReadOnly(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D86BD8(relative to base address)
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
		unsigned char UnknownData00_6[0x7]; // 0x13E9(0x7) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnRequestChangeHero; // 0x13F0(0x10)
		FMulticastInlineDelegate OnContextMenuOpenChanged; // 0x1400(0x10)
		UMenuAnchor* ContextMenuAnchor; // 0x1410(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x1418(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortHeroLoadoutSlotButton");
			return ret;
		}

		void OnRequestChangeHero__DelegateSignature(UFortHeroLoadoutSlotButton* SlotButton); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnMenuOpenChangedEvent__DelegateSignature(UFortHeroLoadoutSlotButton* SlotButton, bool bIsMenuOpen); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool IsContextMenuOpen(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D88124(relative to base address)
		void HandleMenuOpenChanged(bool bIsMenuOpen); // Flags: Final|Native|Private, Memory Exec: 0x7FF751D87D14(relative to base address)
	};


	// Class SaveTheWorldUI.FortHeroLoadoutTeamPerkPicker
	// Inherited from UFortItemPickerBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x430 - 0x410)
	class UFortHeroLoadoutTeamPerkPicker : public UFortItemPickerBase	
	{
	public:
		unsigned char UnknownData00_3[0x14]; // 0x410(0x14) UNKNOWN PROPERTY
		TWeakObjectPtr<UFortCampaignHeroLoadoutItem*> TargetLoadoutItem; // 0x424(0x8)
		unsigned char UnknownData01_7[0x4]; // 0x42C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortHeroLoadoutTeamPerkPicker");
			return ret;
		}

		void SetTargetLoadout(UFortCampaignHeroLoadoutItem* LoadoutItem); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D89BD4(relative to base address)
		void HandleDifferentTargetLoadoutSetBP(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class SaveTheWorldUI.FortCampaignTabsScreenBase
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x98 (0x488 - 0x3F0)
	class UFortCampaignTabsScreenBase : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x3F0(0x8) UNKNOWN PROPERTY
		TMap<EFortUIFeature, FName> FeaturesTabsMap; // 0x3F8(0x50)
		UHorizontalBox* TopTabContainer; // 0x448(0x8)
		UFortTabListWidgetBase* TopTabList; // 0x450(0x8)
		UClass* MainTabSet; // 0x458(0x8)
		unsigned char UnknownData01_6[0x8]; // 0x460(0x8) UNKNOWN PROPERTY
		UCommonAnimatedSwitcher* Switcher_TabContent; // 0x468(0x8)
		unsigned char UnknownData02_7[0x18]; // 0x470(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortCampaignTabsScreenBase");
			return ret;
		}

		void UpdateItemShopButtonBang(FName Tab); // Flags: Native|Event|Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF751D8AA24(relative to base address)
		bool ShouldShowItemShopBang(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D89FF8(relative to base address)
		void HandleMainTabSelected_Native(FName TabNameID); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751D87AF0(relative to base address)
		void HandleMainTabSelected(FName TabNameID); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleMainTabCreated(FName TabNameID, UCommonButtonBase* TabButton); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleFeatureStateChanged(EFortUIFeature ChangedFeature, EFortUIFeatureState NewState, EFortUIFeatureStateReason Reason); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751D874FC(relative to base address)
		void ConstructTabs(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751D8655C(relative to base address)
	};


	// Class SaveTheWorldUI.FortCampaignTabsScreenBase_Legacy
	// Inherited from UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x70 (0x598 - 0x528)
	class UFortCampaignTabsScreenBase_Legacy : public UCommonActivatablePanelLegacy	
	{
	public:
		TMap<EFortUIFeature, FName> FeaturesTabsMap; // 0x528(0x50)
		UHorizontalBox* TopTabContainer; // 0x578(0x8)
		UFortTabListWidgetBase_Legacy* TopTabList; // 0x580(0x8)
		UClass* MainTabSet; // 0x588(0x8)
		unsigned char UnknownData00_7[0x8]; // 0x590(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortCampaignTabsScreenBase_Legacy");
			return ret;
		}

		void HandleMainTabSelected(FName TabNameID); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleMainTabCreated(FName TabNameID, UCommonButtonBase* TabButton); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleFeatureStateChanged(EFortUIFeature ChangedFeature, EFortUIFeatureState NewState, EFortUIFeatureStateReason Reason); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751D875F4(relative to base address)
		void HandleFeatureNavigateRequest(EFortUIFeature Feature); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751D8747C(relative to base address)
		void ConstructTabs(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751D86570(relative to base address)
	};


	// Class SaveTheWorldUI.FortMissionSelect_STW
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x70 (0x460 - 0x3F0)
	class UFortMissionSelect_STW : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0x3F0(0x10) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnNavigation; // 0x400(0x10)
		FDataTableRowHandle FindPinnedQuestInputAction; // 0x410(0x10)
		FDataTableRowHandle RewardsInfoInputAction; // 0x420(0x10)
		FDataTableRowHandle MissionInfoInputAction; // 0x430(0x10)
		FDataTableRowHandle BackInputAction; // 0x440(0x10)
		unsigned char UnknownData01_7[0x10]; // 0x450(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortMissionSelect_STW");
			return ret;
		}

		void SetFindPinnedQuestActionEnabled(bool bEnabled); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751D88F68(relative to base address)
		void SetBackActionEnabled(bool bEnabled); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751D88C80(relative to base address)
		bool NavigateMissionTiles(EUINavigation Direction); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750326FB0(relative to base address)
		void HandleInputRewardsInfo(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleInputInfo(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleFindPinnedQuest(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleBack(); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool CanCaptureAcceptInput(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class SaveTheWorldUI.StoreCardObject
	// Inherited from UObject
	// Size: 0x20 (0x48 - 0x28)
	class UStoreCardObject : public UObject	
	{
	public:
		FCard Card; // 0x28(0x18)
		int32_t OriginalIndex; // 0x40(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x44(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.StoreCardObject");
			return ret;
		}
	};


	// Class SaveTheWorldUI.FortStoreSummary
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x48 (0x438 - 0x3F0)
	class UFortStoreSummary : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x3F0(0x8) UNKNOWN PROPERTY
		UClass* MulchConfirmationModalClass; // 0x3F8(0x8)
		TArray<UStoreCardObject*> StoreCardObjects; // 0x400(0x10)
		UCommonTileView* TileView; // 0x410(0x8)
		unsigned char UnknownData01_6[0x18]; // 0x418(0x18) UNKNOWN PROPERTY
		UFortMulchConfirmationModalWidget* MulchConfirmationModal; // 0x430(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortStoreSummary");
			return ret;
		}

		void ShowMulchConfirmationModal(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D66408(relative to base address)
		void SetIsInChoiceSelectionMode(bool InIsInChoiceSelectionMode); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D896E4(relative to base address)
		void SetCards(TArray<FCard>& Cards); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751D88DB0(relative to base address)
		void NotifyPanelDeactivated(); // Flags: Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751D63850(relative to base address)
		void NotifyPanelActivated(); // Flags: Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751D63834(relative to base address)
		void MarkDefaultItemsForMulch(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D882D8(relative to base address)
		void HideMulchConfirmationModal(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D63370(relative to base address)
		void HandleContextMenuOpenChangedBP(bool bIsOpen); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleContextMenuOpenChanged(bool bIsOpen); // Flags: Final|Native|Private, Memory Exec: 0x7FF751D8737C(relative to base address)
		bool GetIsInChoiceSelectionMode(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D86BA8(relative to base address)
		void FocusSummary_BP(bool bSelectingChoices); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void FinalizeFavoriteStatus(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D866E4(relative to base address)
		void CloseSummaryScreen(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class SaveTheWorldUI.FortStoreSummaryItemButton
	// Inherited from UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x70 (0x1400 - 0x1390)
	class UFortStoreSummaryItemButton : public UCommonButtonBase	
	{
	public:
		bool HasAnItemMarkedForMulching; // 0x1390(0x1)
		unsigned char UnknownData00_6[0x2F]; // 0x1391(0x2F) UNKNOWN PROPERTY
		UMenuAnchor* PopupMenuAnchor; // 0x13C0(0x8)
		FCard CachedCard; // 0x13C8(0x18)
		UStoreCardObject* StoreCardObject; // 0x13E0(0x8)
		UFortInventoryContext* InventoryContext; // 0x13E8(0x8)
		unsigned char UnknownData01_7[0x10]; // 0x13F0(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortStoreSummaryItemButton");
			return ret;
		}

		void UpdateMulchListWithItem(bool bAddingItem); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D8AAA8(relative to base address)
		void SetStoreCardObject(UStoreCardObject* CardObject); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D89A64(relative to base address)
		void SetCachedCard(FCard& NewCard); // Flags: Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751D88D18(relative to base address)
		void HandleMenuOpenChanged(bool bIsOpen); // Flags: Final|Native|Private, Memory Exec: 0x7FF751D87D94(relative to base address)
		void HandleItemMulchStateChanged(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleCachedCardSet_BP(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UStoreCardObject GetStoreCardObject(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750323DA0(relative to base address)
		UUserWidget GetPopupMenu(); // Flags: Final|Native|Private, Memory Exec: 0x7FF751D86D90(relative to base address)
		FCard GetCachedCard(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D86848(relative to base address)
	};


	// Class SaveTheWorldUI.FortStoreSummaryItemButton_Legacy
	// Inherited from UCommonButtonLegacy -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x50 (0x1430 - 0x13E0)
	class UFortStoreSummaryItemButton_Legacy : public UCommonButtonLegacy	
	{
	public:
		bool HasAnItemMarkedForMulching; // 0x13E0(0x1)
		unsigned char UnknownData00_6[0x2F]; // 0x13E1(0x2F) UNKNOWN PROPERTY
		UMenuAnchor* PopupMenuAnchor; // 0x1410(0x8)
		UStoreCardObject* StoreCardObject; // 0x1418(0x8)
		UFortInventoryContext* InventoryContext; // 0x1420(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x1428(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortStoreSummaryItemButton_Legacy");
			return ret;
		}

		void UpdateMulchListWithItem(bool bAddingItem); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D8AB28(relative to base address)
		void SetStoreCardObject(UStoreCardObject* CardObject); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D89AE4(relative to base address)
		void OnContextMenuOpenChangedEvent__DelegateSignature(bool bIsOpen); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleMenuOpenChanged(bool bIsOpen); // Flags: Final|Native|Private, Memory Exec: 0x7FF751D87E14(relative to base address)
		void HandleItemMulchStateChanged(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UStoreCardObject GetStoreCardObject(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D87178(relative to base address)
		UUserWidget GetPopupMenu(); // Flags: Final|Native|Private, Memory Exec: 0x7FF751D86DB4(relative to base address)
	};


	// Class SaveTheWorldUI.FortStoreSummaryItemPopupMenu
	// Inherited from UFortPopupMenu -> UCommonPopupMenuLegacy -> UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x550 - 0x548)
	class UFortStoreSummaryItemPopupMenu : public UFortPopupMenu	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x548(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortStoreSummaryItemPopupMenu");
			return ret;
		}

		void MulchItem(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751D88300(relative to base address)
		void HandleItemChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UFortStoreSummaryItemButton GetHostButton(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D86B18(relative to base address)
	};


	// Class SaveTheWorldUI.FortStoreSummaryItemPopupMenu_Legacy
	// Inherited from UFortPopupMenu_Legacy -> UCommonPopupMenuLegacy -> UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x550 - 0x548)
	class UFortStoreSummaryItemPopupMenu_Legacy : public UFortPopupMenu_Legacy	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x548(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortStoreSummaryItemPopupMenu_Legacy");
			return ret;
		}

		void MulchItem(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751D88314(relative to base address)
		void HandleItemChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UFortStoreSummaryItemButton_Legacy GetHostButton(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D86B3C(relative to base address)
	};


	// Class SaveTheWorldUI.FortStoreSummary_Legacy
	// Inherited from UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x48 (0x570 - 0x528)
	class UFortStoreSummary_Legacy : public UCommonActivatablePanelLegacy	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x528(0x8) UNKNOWN PROPERTY
		TArray<UStoreCardObject*> StoreCardObjects; // 0x530(0x10)
		UCommonTileView* TileView; // 0x540(0x8)
		UClass* MulchConfirmationModalClass; // 0x548(0x8)
		unsigned char UnknownData01_6[0x18]; // 0x550(0x18) UNKNOWN PROPERTY
		UFortMulchConfirmationModalWidget* MulchConfirmationModal; // 0x568(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortStoreSummary_Legacy");
			return ret;
		}

		void ShowMulchConfirmationModal(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D8A070(relative to base address)
		void SetIsInChoiceSelectionMode(bool InIsInChoiceSelectionMode); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D89764(relative to base address)
		void SetCards(TArray<FCard>& Cards); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751D88E4C(relative to base address)
		void NotifyPanelDeactivated(); // Flags: Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751D88344(relative to base address)
		void NotifyPanelActivated(); // Flags: Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751D88328(relative to base address)
		void MarkDefaultItemsForMulch(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D882EC(relative to base address)
		void HideMulchConfirmationModal(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D8807C(relative to base address)
		void HandleContextMenuOpenChangedBP(bool bIsOpen); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleContextMenuOpenChanged(bool bIsOpen); // Flags: Final|Native|Private, Memory Exec: 0x7FF751D873FC(relative to base address)
		bool GetIsInChoiceSelectionMode(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D86BC0(relative to base address)
		void FinalizeFavoriteStatus(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D86734(relative to base address)
		void CloseSummaryScreen(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class SaveTheWorldUI.FortHeroLoadoutGadgetTileBase
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x2F8 - 0x2D8)
	class UFortHeroLoadoutGadgetTileBase : public UCommonUserWidget	
	{
	public:
		UCommonTextBlock* Text_GadgetName; // 0x2D8(0x8)
		UCommonLazyImage* Image_Icon; // 0x2E0(0x8)
		URichTextBlock* RichText_Description; // 0x2E8(0x8)
		UFortGadgetItemDefinition* GadgetToRepresent; // 0x2F0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortHeroLoadoutGadgetTileBase");
			return ret;
		}

		void SetGadgetToRepresent(UFortGadgetItemDefinition* GadgetItemDefinition); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D89000(relative to base address)
		void OnGadgetUpdated(bool bIsValidGadget); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class SaveTheWorldUI.FortHeroLoadoutInGameScreenBase
	// Inherited from UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x70 (0x598 - 0x528)
	class UFortHeroLoadoutInGameScreenBase : public UCommonActivatablePanelLegacy	
	{
	public:
		TArray<FFortInGamePerkDisplayData> PerksDisplayData; // 0x528(0x10)
		UClass* TileClass; // 0x538(0x8)
		UScrollBox* ScrollBox_Content; // 0x540(0x8)
		UFortItemDetailsHostPanel* ItemDetailsHostPanel_Header; // 0x548(0x8)
		UGridPanel* GridPanel_Perks; // 0x550(0x8)
		UFortHeroLoadoutGadgetTileBase* GadgetTile_Gadget1; // 0x558(0x8)
		UFortHeroLoadoutGadgetTileBase* GadgetTile_Gadget2; // 0x560(0x8)
		TArray<UFortHeroLoadoutGadgetTileBase*> GadgetTiles; // 0x568(0x10)
		FDataTableRowHandle ShowStatsInputHandle; // 0x578(0x10)
		FDataTableRowHandle BackInputHandle; // 0x588(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortHeroLoadoutInGameScreenBase");
			return ret;
		}

		void ShowStats(bool& bPassThrough); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPerkWidgetAdded(UGridSlot* GridSlot); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UFortGadgetItemDefinition GetGadgetDefinitionBySlot(int32_t SlotIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D86A8C(relative to base address)
		void BackAction(bool& bPassThrough); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class SaveTheWorldUI.FortHeroLoadoutPerkTileBase
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x70 (0x348 - 0x2D8)
	class UFortHeroLoadoutPerkTileBase : public UCommonUserWidget	
	{
	public:
		TEnumAsByte<EFortBrushSize> BrushSize; // 0x2D8(0x1)
		bool bShowSummaryDescription; // 0x2D9(0x1)
		unsigned char UnknownData00_6[0x6]; // 0x2DA(0x6) UNKNOWN PROPERTY
		UCommonTextBlock* Text_PerkName; // 0x2E0(0x8)
		URichTextBlock* Text_Description; // 0x2E8(0x8)
		UFortLazyImage* Image_PerkIcon; // 0x2F0(0x8)
		UHorizontalBox* Hbox_PerkDetails; // 0x2F8(0x8)
		FText ActiveText; // 0x300(0x10)
		FText InactiveText; // 0x310(0x10)
		float InactiveOpacity; // 0x320(0x4)
		float ActiveOpacity; // 0x324(0x4)
		UFortAbilityKit* AbilityKit; // 0x328(0x8)
		unsigned char UnknownData01_7[0x18]; // 0x330(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortHeroLoadoutPerkTileBase");
			return ret;
		}

		void OnPerkInitialized(EFortHeroPerkDisplayType InPerkType, bool bActive, bool bShowWarning); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class SaveTheWorldUI.FortAlterationModOptinScreenBase
	// Inherited from UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x18 (0x540 - 0x528)
	class UFortAlterationModOptinScreenBase : public UCommonActivatablePanelLegacy	
	{
	public:
		UFortItem* ItemToOptin; // 0x528(0x8)
		unsigned char UnknownData00_7[0x10]; // 0x530(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortAlterationModOptinScreenBase");
			return ret;
		}

		void SetupItem(UFortItem* Item); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D89F78(relative to base address)
		void RequestClose(bool bCancelled); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751D8882C(relative to base address)
		void OnSetupItem(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnItemConversionComplete(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ConvertItemAlterations(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751D86584(relative to base address)
	};


	// Class SaveTheWorldUI.FortAlterationModScreenBase
	// Inherited from UFortActivatablePanel -> UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x60 (0x5C0 - 0x560)
	class UFortAlterationModScreenBase : public UFortActivatablePanel	
	{
	public:
		UFortAlterationsWidget* AlterationsToEdit; // 0x560(0x8)
		UFortAlterationOptionsBase* AlterationSlotOptions; // 0x568(0x8)
		UFortItemDetailsHostPanel* ItemInspectionMainItemDetailsHostPanel; // 0x570(0x8)
		UFortItemDetailsHostPanel* AlterationsExtraDetailsPanel; // 0x578(0x8)
		UClass* AlterationModOptinScreenClass; // 0x580(0x8)
		FDataTableRowHandle BackInputAction; // 0x588(0x10)
		TWeakObjectPtr<UFortAlterableItem*> AlterableItem; // 0x598(0x8)
		UFortAlterationOption* CurrentAlterationOptionInternal; // 0x5A0(0x8)
		unsigned char UnknownData00_7[0x18]; // 0x5A8(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortAlterationModScreenBase");
			return ret;
		}

		void SetItemForAlterationsModding(UFortAlterableItem* InAlterableItem); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D897E4(relative to base address)
		void RefreshItemAndAlterationsBP(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnItemSlotChanged(bool SelectedSlot); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnAlterationOptionChanged(UFortAlterationOption* CurrentAlterationOption); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnAlterationModificationSucess(int32_t ModifiedSlotIndex); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnAlterationModificationStarted(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnAlterationModificationCompleted(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleBackAction(bool& bPassThrough); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF751D872F0(relative to base address)
		void ConfirmSelection(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751D86548(relative to base address)
		void CancelSelection(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751D86534(relative to base address)
		bool AreIngredientRequirementsMent(TArray<FFortItemQuantityPair>& RequiredIngredients); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751D85FA4(relative to base address)
	};


	// Class SaveTheWorldUI.FortItemInspectionScreen
	// Inherited from UFortActivatablePanelWithItemPreview -> UFortActivatablePanel -> UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xF8 (0x7A0 - 0x6A8)
	class UFortItemInspectionScreen : public UFortActivatablePanelWithItemPreview	
	{
	public:
		EFortItemInspectionMode CurrentInspectMode; // 0x6A8(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x6A9(0x3) UNKNOWN PROPERTY
		TWeakObjectPtr<UFortItem*> InspectedItem; // 0x6AC(0x8)
		bool UpgradeAllowed; // 0x6B4(0x1)
		bool EvolveAllowed; // 0x6B5(0x1)
		bool FavoriteAllowed; // 0x6B6(0x1)
		bool RarityUpgradingAllowed; // 0x6B7(0x1)
		bool IsPreviewing; // 0x6B8(0x1)
		bool bHasSeenRefundHelpPrompt; // 0x6B9(0x1)
		unsigned char UnknownData01_6[0x6]; // 0x6BA(0x6) UNKNOWN PROPERTY
		UFortItemInspectCycleWidget* CycleWidget; // 0x6C0(0x8)
		FGameplayTagQuery InspectAnimationTag; // 0x6C8(0x48)
		UClass* AlterationModOptinScreenClass; // 0x710(0x8)
		UClass* AlterationModScreenClass; // 0x718(0x8)
		TWeakObjectPtr<UDataTable*> RefundDescriptionsDataTable; // 0x720(0x20)
		unsigned char UnknownData02_7[0x60]; // 0x740(0x60) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortItemInspectionScreen");
			return ret;
		}

		void SetItemToRepresent(UFortItem* Item); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751D898E4(relative to base address)
		void SetInspectionMode(EFortItemInspectionMode NewInspectMode); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751D89464(relative to base address)
		void SetAttemptingConversion(bool bIsAttemptingConversion); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D88BF8(relative to base address)
		void OpenItemInspect(UFortItem* ItemToInspect, EFortItemInspectionMode Mode, bool ShouldAllowUpgrading, bool ShouldAllowEvolution, bool ShouldAllowFavorite, bool IsTemporaryItem, bool bAllowRarityUpgrading, int32_t QuantityOverride, UFortItemTileView* TileViewWidget); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D883FC(relative to base address)
		bool IsItemSlottedInCollectionBook(UFortItem* Item); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D881A0(relative to base address)
		void HandleItemToInspectDestroyedBP(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleItemToInspectDestroyed(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751D87A48(relative to base address)
		void HandleItemToInspectChangedBP(bool bWasFavoritedChanged); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleItemToInspectChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751D8793C(relative to base address)
		void HandleIsPreviewingChanged(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleDifferentItemToInspectSetBP(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleDifferentInspectionModeSetBP(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UFortAccountItem GetRefundResultItem(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D86F6C(relative to base address)
		FText GetRefundDescriptionText(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D86F30(relative to base address)
		int32_t GetItemQuantityOverride(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D86C38(relative to base address)
		UFortItemInspectCycleWidget GetCycleWidget(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750F67568(relative to base address)
		bool DoesItemHaveLegacyAlterations(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D86678(relative to base address)
		void DoAlterationModification(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D865C0(relative to base address)
	};


	// Class SaveTheWorldUI.FortItemInspectCycleWidget
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x58 (0x330 - 0x2D8)
	class UFortItemInspectCycleWidget : public UCommonUserWidget	
	{
	public:
		FMulticastInlineDelegate OnItemToRepresentChanged; // 0x2D8(0x10)
		TWeakObjectPtr<UFortItemTileView*> ItemTileView; // 0x2E8(0x8)
		TWeakObjectPtr<UFortItem*> ItemToRepresent; // 0x2F0(0x8)
		FDataTableRowHandle PreviousItemActionRowHandle; // 0x2F8(0x10)
		FDataTableRowHandle NextItemActionRowHandle; // 0x308(0x10)
		unsigned char UnknownData00_7[0x18]; // 0x318(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortItemInspectCycleWidget");
			return ret;
		}

		void SetupActionHandlers(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D89F64(relative to base address)
		void SetOwningItemInspectScreen(UFortItemInspectionScreen* ItemInspect); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D89964(relative to base address)
		void SetItemToRepresent(UFortItem* NewItemToRepresent); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D89864(relative to base address)
		void SelectPreviousItem(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D88BE0(relative to base address)
		void SelectNextItem(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D88BC8(relative to base address)
		void SelectItemWithOffset(int32_t Offset); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D88B48(relative to base address)
		void OnItemCycled(UFortItem* OldItem, UFortItem* NewItem, int32_t OffsetFromPreviousItem); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UFortItem GetItemWithOffset_BP(int32_t IndexOffset); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D86C74(relative to base address)
	};


	// Class SaveTheWorldUI.FortAlterationOption
	// Inherited from UCommonButtonLegacy -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x40 (0x1420 - 0x13E0)
	class UFortAlterationOption : public UCommonButtonLegacy	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x13E0(0x8) UNKNOWN PROPERTY
		FAlterationOption AlterationOption; // 0x13E8(0x30)
		unsigned char UnknownData01_7[0x8]; // 0x1418(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortAlterationOption");
			return ret;
		}

		void Setup(FAlterationOption& InAlterationOption, EFortAlterationOptionType InAlterationOptionType); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751D89DE8(relative to base address)
		void OnSetup(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		TArray GetRequiredIngredients(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D86F90(relative to base address)
		float GetNextPipCount(float MaxPipCount); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D86D00(relative to base address)
		float GetCurrentPipCount(float MaxPipCount); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D86894(relative to base address)
		EFortAlterationOptionType GetAlterationOptionType(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D86830(relative to base address)
		UFortAlterationItemDefinition GetAlterationDefinition(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D8680C(relative to base address)
	};


	// Class SaveTheWorldUI.FortAlterationOptionsBase
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xA0 (0x378 - 0x2D8)
	class UFortAlterationOptionsBase : public UCommonUserWidget	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0x2D8(0x10) UNKNOWN PROPERTY
		UClass* AlterationOptionClass; // 0x2E8(0x8)
		UCommonButtonGroupLegacy* AlterationOptionButtons; // 0x2F0(0x8)
		unsigned char UnknownData01_6[0x20]; // 0x2F8(0x20) UNKNOWN PROPERTY
		UFortAlterableItem* Item; // 0x318(0x8)
		int32_t SlotIndex; // 0x320(0x4)
		bool bUpgradeOptionExists; // 0x324(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x325(0x3) UNKNOWN PROPERTY
		FAlterationOption UpgradeOption; // 0x328(0x30)
		TArray<FAlterationOption> RespecOptions; // 0x358(0x10)
		unsigned char UnknownData03_7[0x10]; // 0x368(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortAlterationOptionsBase");
			return ret;
		}

		void ProcessAlterationOptions(bool bIntroAlterations); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D88768(relative to base address)
		void OnItemChanged(bool bIntroAlterations); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnGenerateOption(EFortAlterationOptionType OptionType, UFortAlterationOption* OptionWidget); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool IsValidAlterationSlot(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D882AC(relative to base address)
		void HandleAlterationsOptionSelected(UCommonButtonLegacy* AlterationOptionButton, int32_t GroupIndex); // Flags: Final|Native|Public, Memory Exec: 0x7FF751D8722C(relative to base address)
		void HandleAlterationsOptionHovered(UCommonButtonLegacy* AlterationOptionButton, int32_t GroupIndex); // Flags: Final|Native|Public, Memory Exec: 0x7FF751D8722C(relative to base address)
		bool DoAlterationOptionsExist(EFortAlterationOptionType OptionType); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D865D4(relative to base address)
	};


	// Class SaveTheWorldUI.FortMissionActivationInfoSTW
	// Inherited from UObject
	// Size: 0x150 (0x178 - 0x28)
	class UFortMissionActivationInfoSTW : public UObject	
	{
	public:
		bool bIsMultiplayer; // 0x28(0x1)
		unsigned char UnknownData00_6[0x77]; // 0x29(0x77) UNKNOWN PROPERTY
		AFortPlayerController* FortPC; // 0xA0(0x8)
		AFortGameStateZone* GameStateZone; // 0xA8(0x8)
		UCurveFloat* DifficultyIncreaseBluGloCurve; // 0xB0(0x8)
		unsigned char UnknownData01_7[0xC0]; // 0xB8(0xC0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortMissionActivationInfoSTW");
			return ret;
		}

		FText TimeSecondsToText(float InSeconds); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7501F523C(relative to base address)
		void SubmitVote(EFortVoteType VoteType, bool bApprove); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D8A08C(relative to base address)
		void RequestVote(EFortVoteType VoteType, float VoteDuration, float FailedVoteLockOutDuration, EFortVoteArbitratorType ArbitratorType); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D889E4(relative to base address)
		bool IsVoteLocked(EFortVoteType VoteType); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7501F2808(relative to base address)
		bool IsVoteActive(EFortVoteType VoteType); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7501F277C(relative to base address)
		bool IsPlayerVoteInstigator(EFortVoteType VoteType); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7501F26CC(relative to base address)
		bool IsAnyVoteActive(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7501F25B8(relative to base address)
		bool HasPlayerVoted(EFortVoteType VoteType); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7501F2518(relative to base address)
		void HandleTeamMemberRemoved(int32_t RemovedIndex); // Flags: Final|Native|Private, Memory Exec: 0x7FF7501F22BC(relative to base address)
		void HandleTeamMemberAdded(FFortTeamMemberInfo NewInfo); // Flags: Final|Native|Private, Memory Exec: 0x7FF7501F2154(relative to base address)
		void HandleGameplayVoteUpdated(EFortVoteType VoteType, EFortVoteStatus VoteStatus, int32_t VoteResult, TArray<FVoter>& Voters); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF751D8776C(relative to base address)
		float GetVoteTimeRemaining(EFortVoteType VoteType); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7501F14D4(relative to base address)
		TArray GetVoters(EFortVoteType VoteType); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7501F1634(relative to base address)
		void GetVoteCounts(EFortVoteType VoteType, int32_t& OutYesVoteCount, int32_t& OutNoVoteCount); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7501F1300(relative to base address)
		int32_t GetStartObjectiveBluGloRequirement(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7501F11C8(relative to base address)
		UFortMissionInfo GetPrimaryMissionInfo(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7501F1058(relative to base address)
		AFortMission GetPrimaryMission(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7501F1034(relative to base address)
		EFortVoteType GetMissionVoteType(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7501F0F94(relative to base address)
		float GetMissionObjectiveTimeRemaining(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7501F0F6C(relative to base address)
		FText GetLockoutTimeRemaining(EFortVoteType VoteType); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7501F0E88(relative to base address)
		FUniqueNetIdRepl GetInstigatorId(EFortVoteType VoteType); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7501F0D78(relative to base address)
		int32_t GetIncreaseDifficultyBluGloRequirement(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7501F0CE0(relative to base address)
		void GetDeltaRewards(int32_t BaseDifficultyIncreaseTier, int32_t ComparedDifficultyIncreaseTier, TArray<FFortItemDelta>& DeltaRewards); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7501F0B2C(relative to base address)
		int32_t GetAvailableBluGloCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7501F0AC0(relative to base address)
		EFortVoteArbitratorType GetArbitratorType(EFortVoteType VoteType); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7501F0A2C(relative to base address)
		bool DoesPrimaryMissionContainTags(FGameplayTagContainer& Tags); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7501F0428(relative to base address)
		bool CanRequestVote(EFortVoteType VoteType); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7501EFE1C(relative to base address)
	};


	// Class SaveTheWorldUI.FortMissionActivationWidgetSTWPanel
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x28 (0x300 - 0x2D8)
	class UFortMissionActivationWidgetSTWPanel : public UCommonUserWidget	
	{
	public:
		UFortMissionActivationInfoSTW* InfoObject; // 0x2D8(0x8)
		unsigned char UnknownData00_7[0x20]; // 0x2E0(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortMissionActivationWidgetSTWPanel");
			return ret;
		}

		void SetInfoObject(UFortMissionActivationInfoSTW* NewInfoObject); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D89080(relative to base address)
		void OnVoteUpdatedBP(EFortVoteType VoteType); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnVoteLockoutChangedBP(EFortVoteType VoteType, bool bIsLocked); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnMultiplayerChangedBP(bool bIsMultiplayer); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnActiveVoteChangedBP(EFortVoteType VoteType, bool bIsVoteActive, int32_t VoteResult); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void InfoObjectUpdated(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class SaveTheWorldUI.FortMissionActivationWidgetSTW
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x50 (0x440 - 0x3F0)
	class UFortMissionActivationWidgetSTW : public UCommonActivatableWidget	
	{
	public:
		UFortMissionActivationInfoSTW* InfoObject; // 0x3F0(0x8)
		FGameplayTagContainer ReadyUpObjectiveHandle; // 0x3F8(0x20)
		UCurveFloat* DifficultyIncreaseBluGloCurve; // 0x418(0x8)
		unsigned char UnknownData00_7[0x20]; // 0x420(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortMissionActivationWidgetSTW");
			return ret;
		}

		void RequestStartObjectiveState(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D88980(relative to base address)
		void RequestDifficultyIncreaseState(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D88908(relative to base address)
		void RequestDefaultState(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D888AC(relative to base address)
		void OnVoteLockoutChangedBP(EFortVoteType VoteType, bool bIsLocked); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnStateUpdated(EFortMissionActivationWidgetSTWState ActiveState, EFortMissionActivationWidgetSTWState PreviousState); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnMultiplayerChangedBP(bool bIsMultiplayer); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnActiveVoteChangedBP(EFortVoteType VoteType, bool bIsVoteActive, int32_t VoteResult); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		EFortMissionActivationWidgetSTWState GetCurrentState(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D86924(relative to base address)
	};


	// Class SaveTheWorldUI.FortOutpostScreen
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x3F8 - 0x3F0)
	class UFortOutpostScreen : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x3F0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortOutpostScreen");
			return ret;
		}

		void SetInputReflectorBoxVisibility(bool bShow); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D89390(relative to base address)
	};


	// Class SaveTheWorldUI.FortCampaignPlayFlow
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x3F0 - 0x3F0)
	class UFortCampaignPlayFlow : public UCommonActivatableWidget	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortCampaignPlayFlow");
			return ret;
		}

		void TryBroadcastPhoenixDisplayVisibilityChange(bool bCanShow); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D8A16C(relative to base address)
	};


	// Class SaveTheWorldUI.FortJournalQuestDetails
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x2E0 - 0x2D8)
	class UFortJournalQuestDetails : public UCommonUserWidget	
	{
	public:
		UFortQuestItem* CurrentQuest; // 0x2D8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortJournalQuestDetails");
			return ret;
		}

		void SetCurrentQuest(UFortQuestItem* InCurrentQuest); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D88EE8(relative to base address)
		void RegisterEndSpokenDialogEvent(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751D887E8(relative to base address)
		void OnEndSpokenDialog(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleCurrentQuestChangedBP(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetVisibleObjectives(TArray<UFortQuestObjectiveInfo*>& VisibleObjectives); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751D87190(relative to base address)
		void GetRewards(TArray<FFortItemInstanceQuantityPair>& OutRewards, TArray<FFortItemInstanceQuantityPair>& OutSelectableRewards); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751D87064(relative to base address)
		void GetFutureObjectives(TArray<UFortQuestObjectiveInfo*>& FutureObjectives); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751D869F0(relative to base address)
		EFortTheaterMapTileType GetActiveMissionTileType(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D86784(relative to base address)
		bool CanPlayQuest(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D86510(relative to base address)
		bool CanPartyLeaderPlayQuest(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D864EC(relative to base address)
		bool CanGotoQuest(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D864C0(relative to base address)
	};


	// Class SaveTheWorldUI.FortJournalQuestProgressBar
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x2E8 - 0x2D8)
	class UFortJournalQuestProgressBar : public UCommonUserWidget	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x2D8(0x8) UNKNOWN PROPERTY
		TWeakObjectPtr<UFortQuestObjectiveInfo*> QuestObjectiveInfo; // 0x2E0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortJournalQuestProgressBar");
			return ret;
		}

		void GetProgressDetails(FText& OutNumerator, FText& OutDenominator, float& OutFraction); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751D86DD8(relative to base address)
	};


	// Class SaveTheWorldUI.FortLayoutQuestNode
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x28 (0x300 - 0x2D8)
	class UFortLayoutQuestNode : public UCommonUserWidget	
	{
	public:
		UFortQuestMapQuestTile* QuestTile; // 0x2D8(0x8)
		int32_t QuestNodeIndex; // 0x2E0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x2E4(0x4) UNKNOWN PROPERTY
		FFortQuestMapNode QuestMapNode; // 0x2E8(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortLayoutQuestNode");
			return ret;
		}
	};


	// Class SaveTheWorldUI.FortLayoutQuestNode_Legacy
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x28 (0x300 - 0x2D8)
	class UFortLayoutQuestNode_Legacy : public UCommonUserWidget	
	{
	public:
		UFortQuestMapQuestTile_Legacy* QuestTile; // 0x2D8(0x8)
		int32_t QuestNodeIndex; // 0x2E0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x2E4(0x4) UNKNOWN PROPERTY
		FFortQuestMapNode QuestMapNode; // 0x2E8(0x18)

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
		unsigned char UnknownData00_7[0x4]; // 0x13CC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortProgressArrowButton");
			return ret;
		}

		void UpdateArrowColor(FSlateColor Color, FSlateColor HoverColor); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D8A3FC(relative to base address)
		void OnShadowColorSet(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnIsInteractiveSet(bool bIsInteractive); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnArrowColorSet(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
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
		unsigned char UnknownData00_7[0x4]; // 0x141C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortProgressArrowButton_Legacy");
			return ret;
		}

		void UpdateArrowColor(FSlateColor Color, FSlateColor HoverColor); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D8A618(relative to base address)
		void OnShadowColorSet(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnIsInteractiveSet(bool bIsInteractive); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnArrowColorSet(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class SaveTheWorldUI.FortQuestExpiresWidget
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x2E8 - 0x2D8)
	class UFortQuestExpiresWidget : public UCommonUserWidget	
	{
	public:
		TWeakObjectPtr<UFortQuestItem*> Item; // 0x2D8(0x8)
		unsigned char UnknownData00_7[0x8]; // 0x2E0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortQuestExpiresWidget");
			return ret;
		}

		void SetData(UFortQuestItem* InItem); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF74EA68858(relative to base address)
		void OnQuestExpirationUpdated(); // Flags: Native|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7474A9F44(relative to base address)
	};


	// Class SaveTheWorldUI.FortQuestMapCosmeticListWidget
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x2E8 - 0x2D8)
	class UFortQuestMapCosmeticListWidget : public UCommonUserWidget	
	{
	public:
		unsigned char UnknownData00_1[0x10]; // 0x2D8(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortQuestMapCosmeticListWidget");
			return ret;
		}

		void UpdateCosmeticListDisplay(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		TArray GetDisplayItemDefs(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D8697C(relative to base address)
	};


	// Class SaveTheWorldUI.FortQuestMapDetailsPanelBase
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x18 (0x2F0 - 0x2D8)
	class UFortQuestMapDetailsPanelBase : public UCommonUserWidget	
	{
	public:
		UClass* QuestConversationClass; // 0x2D8(0x8)
		float QuestUpdateDelayTime; // 0x2E0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x2E4(0x4) UNKNOWN PROPERTY
		FTimerHandle QuestUpdateTimerHandle; // 0x2E8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortQuestMapDetailsPanelBase");
			return ret;
		}

		void SetScrollWidget(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F0F9DB4(relative to base address)
		void SetQuestToDisplay(UFortQuestItemDefinition* QuestDef); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DC86EF4(relative to base address)
		void HandleQuestsUpdatedInternal(); // Flags: Final|Native|Private, Memory Exec: 0x7FF751D88054(relative to base address)
	};


	// Class SaveTheWorldUI.FortQuestMapDetailsPanel
	// Inherited from UFortQuestMapDetailsPanelBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xB0 (0x3A0 - 0x2F0)
	class UFortQuestMapDetailsPanel : public UFortQuestMapDetailsPanelBase	
	{
	public:
		FDataTableRowHandle PlayButtonTriggeringAction; // 0x2F0(0x10)
		TArray<UClass*> PriorityActivatableWidgetClassList; // 0x300(0x10)
		UClass* CurrentQuestBorder; // 0x310(0x8)
		UClass* CompletedQuestBorder; // 0x318(0x8)
		UFortJournalQuestDetails* Panel_JournalDetails; // 0x320(0x8)
		UCommonTextBlock* Text_QuestTitle; // 0x328(0x8)
		UCommonTextBlock* Text_QuestDescription; // 0x330(0x8)
		UCommonTextBlock* Text_Header; // 0x338(0x8)
		UCommonTextBlock* Text_NotOwnedHeader; // 0x340(0x8)
		UCommonTextBlock* Text_InactiveQuestName; // 0x348(0x8)
		UImage* Image_QuestIcon; // 0x350(0x8)
		UCommonListView* List_Tasks; // 0x358(0x8)
		UCommonBorder* Border_Header; // 0x360(0x8)
		UWidgetSwitcher* Switcher_Body; // 0x368(0x8)
		UFortRewardInfoWidget* Widget_FutureQuestRewardInfo; // 0x370(0x8)
		UScrollBox* ScrollBox_Quest; // 0x378(0x8)
		UScrollBox* ScrollBox_NoQuest; // 0x380(0x8)
		TArray<UFortQuestObjectiveInfo*> VisibleObjectives; // 0x388(0x10)
		UFortQuestItem* CurrentQuestItem; // 0x398(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortQuestMapDetailsPanel");
			return ret;
		}
	};


	// Class SaveTheWorldUI.FortQuestMapDetailsPanel_Legacy
	// Inherited from UFortQuestMapDetailsPanelBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xB0 (0x3A0 - 0x2F0)
	class UFortQuestMapDetailsPanel_Legacy : public UFortQuestMapDetailsPanelBase	
	{
	public:
		FDataTableRowHandle PlayButtonTriggeringAction; // 0x2F0(0x10)
		TArray<UClass*> PriorityActivatablePanelClassList; // 0x300(0x10)
		UClass* CurrentQuestBorder; // 0x310(0x8)
		UClass* CompletedQuestBorder; // 0x318(0x8)
		UFortJournalQuestDetails* Panel_JournalDetails; // 0x320(0x8)
		UCommonTextBlock* Text_QuestTitle; // 0x328(0x8)
		UCommonTextBlock* Text_QuestDescription; // 0x330(0x8)
		UCommonTextBlock* Text_Header; // 0x338(0x8)
		UCommonTextBlock* Text_NotOwnedHeader; // 0x340(0x8)
		UCommonTextBlock* Text_InactiveQuestName; // 0x348(0x8)
		UImage* Image_QuestIcon; // 0x350(0x8)
		UCommonListView* List_Tasks; // 0x358(0x8)
		UCommonBorder* Border_Header; // 0x360(0x8)
		UWidgetSwitcher* Switcher_Body; // 0x368(0x8)
		UFortRewardInfoWidget_Legacy* Widget_FutureQuestRewardInfo; // 0x370(0x8)
		UScrollBox* ScrollBox_Quest; // 0x378(0x8)
		UScrollBox* ScrollBox_NoQuest; // 0x380(0x8)
		TArray<UFortQuestObjectiveInfo*> VisibleObjectives; // 0x388(0x10)
		UFortQuestItem* CurrentQuestItem; // 0x398(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortQuestMapDetailsPanel_Legacy");
			return ret;
		}
	};


	// Class SaveTheWorldUI.FortQuestMapEventCallout
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x138 (0x528 - 0x3F0)
	class UFortQuestMapEventCallout : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData00_3[0x48]; // 0x3F0(0x48) UNKNOWN PROPERTY
		UFortBangWrapper_NUI* BangWrapper_GoButton; // 0x438(0x8)
		UFortProgressArrowButton* Button_LeftNav; // 0x440(0x8)
		UFortProgressArrowButton* Button_RightNav; // 0x448(0x8)
		UCommonButtonBase* Button_SwitchMode; // 0x450(0x8)
		UFortQuestMapNewBangWrapper* BangWrapper_Arrow; // 0x458(0x8)
		UFortQuestMapEventSequence* Sequence_EventProgress; // 0x460(0x8)
		UHorizontalBox* HorizontalBox_NavButtons; // 0x468(0x8)
		UCommonTextBlock* Text_Header; // 0x470(0x8)
		UCommonTextBlock* Text_Body; // 0x478(0x8)
		UImage* Image_Callout; // 0x480(0x8)
		UFortBangWrapper_NUI* BangWrapper_UnHover; // 0x488(0x8)
		USoundBase* DefaultSound; // 0x490(0x8)
		UFortQuestItemDefinition* DefaultRequiredCompletedQuest; // 0x498(0x8)
		USoundBase* OverrideSound; // 0x4A0(0x8)
		UAudioComponent* SoundLoop; // 0x4A8(0x8)
		UFortQuestMapData* QuestMapData; // 0x4B0(0x8)
		unsigned char UnknownData01_7[0x70]; // 0x4B8(0x70) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortQuestMapEventCallout");
			return ret;
		}

		void UpdateGoButtonBangState(bool bClear); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D8A8DC(relative to base address)
		void UpdateCalloutData(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D8A834(relative to base address)
		void UpdateActiveEvents(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D8A384(relative to base address)
		void SetIsFaded(bool Faded); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D895E4(relative to base address)
		void SetIsExpanded(bool Expanded); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D894E4(relative to base address)
		void ResetCallout(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D88B20(relative to base address)
		void PlayFadeOut(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D88710(relative to base address)
		void PlayFadeIn(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D886B8(relative to base address)
		void OnResetCallout(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPlayFadeAnimation(bool bIsFadeOut); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnEventIndexChanged(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnDeactivatePlayAnimation(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnActivatePlayAnimation(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool IsCurrentEventUnlocked(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D88158(relative to base address)
		UFortQuestItemDefinition GetRequiredQuestForCurrentEvent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D86FEC(relative to base address)
		bool GetIsFaded(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D86B78(relative to base address)
		bool GetIsExpanded(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2B8208(relative to base address)
		int32_t GetEventCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D869D8(relative to base address)
		void DeactivateCallout(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D86598(relative to base address)
	};


	// Class SaveTheWorldUI.FortQuestMapEventCallout_Legacy
	// Inherited from UFortActivatablePanel -> UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x138 (0x698 - 0x560)
	class UFortQuestMapEventCallout_Legacy : public UFortActivatablePanel	
	{
	public:
		unsigned char UnknownData00_3[0x48]; // 0x560(0x48) UNKNOWN PROPERTY
		UFortBangWrapper_NUI* BangWrapper_GoButton; // 0x5A8(0x8)
		UFortProgressArrowButton_Legacy* Button_LeftNav; // 0x5B0(0x8)
		UFortProgressArrowButton_Legacy* Button_RightNav; // 0x5B8(0x8)
		UCommonButtonLegacy* Button_SwitchMode; // 0x5C0(0x8)
		UFortQuestMapNewBangWrapper_Legacy* BangWrapper_Arrow; // 0x5C8(0x8)
		UFortQuestMapEventSequence* Sequence_EventProgress; // 0x5D0(0x8)
		UHorizontalBox* HorizontalBox_NavButtons; // 0x5D8(0x8)
		UCommonTextBlock* Text_Header; // 0x5E0(0x8)
		UCommonTextBlock* Text_Body; // 0x5E8(0x8)
		UImage* Image_Callout; // 0x5F0(0x8)
		UFortBangWrapper_NUI* BangWrapper_UnHover; // 0x5F8(0x8)
		USoundBase* DefaultSound; // 0x600(0x8)
		UFortQuestItemDefinition* DefaultRequiredCompletedQuest; // 0x608(0x8)
		USoundBase* OverrideSound; // 0x610(0x8)
		UAudioComponent* SoundLoop; // 0x618(0x8)
		UFortQuestMapData* QuestMapData; // 0x620(0x8)
		unsigned char UnknownData01_7[0x70]; // 0x628(0x70) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortQuestMapEventCallout_Legacy");
			return ret;
		}

		void UpdateGoButtonBangState(bool bClear); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D8A980(relative to base address)
		void UpdateCalloutData(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D8A848(relative to base address)
		void UpdateActiveEvents(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D8A3C0(relative to base address)
		void SetIsFaded(bool Faded); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D89664(relative to base address)
		void SetIsExpanded(bool Expanded); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D89564(relative to base address)
		void ResetCallout(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D88B34(relative to base address)
		void PlayFadeOut(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D8873C(relative to base address)
		void PlayFadeIn(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D886E4(relative to base address)
		void OnResetCallout(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPlayFadeAnimation(bool bIsFadeOut); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnEventIndexChanged(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnDeactivatePlayAnimation(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnActivatePlayAnimation(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool IsCurrentEventUnlocked(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D8817C(relative to base address)
		UFortQuestItemDefinition GetRequiredQuestForCurrentEvent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D87028(relative to base address)
		bool GetIsFaded(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D86B90(relative to base address)
		bool GetIsExpanded(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751D86B60(relative to base address)
		int32_t GetEventCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2B82B8(relative to base address)
		void DeactivateCallout(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D865AC(relative to base address)
	};


	// Class SaveTheWorldUI.FortQuestMapEventDetailsPanel
	// Inherited from UFortQuestMapDetailsPanelBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x98 (0x388 - 0x2F0)
	class UFortQuestMapEventDetailsPanel : public UFortQuestMapDetailsPanelBase	
	{
	public:
		UClass* CurrentQuestBorder; // 0x2F0(0x8)
		UClass* CompletedQuestBorder; // 0x2F8(0x8)
		UClass* FutureQuestBorder; // 0x300(0x8)
		UVerticalBox* VBox_QuestContainer; // 0x308(0x8)
		UVerticalBox* VBox_CompletedQuestContainer; // 0x310(0x8)
		UCommonAnimatedSwitcher* Switcher_Quests; // 0x318(0x8)
		UCommonBorder* Border_NextQuest; // 0x320(0x8)
		UCommonTextBlock* Text_QuestName; // 0x328(0x8)
		UCommonTextBlock* Text_QuestDescription; // 0x330(0x8)
		UCommonTextBlock* Text_Title; // 0x338(0x8)
		UCommonListView* List_Tasks; // 0x340(0x8)
		UImage* Image_QuestIcon; // 0x348(0x8)
		UScrollBox* ScrollBox_SideBar; // 0x350(0x8)
		UDataTable* EventQuestTable; // 0x358(0x8)
		UClass* SideBarEntryClass; // 0x360(0x8)
		UFortQuestItemDefinition* UnlockEventQuestDefinition; // 0x368(0x8)
		UFortQuestItemDefinition* CurrentQuestDef; // 0x370(0x8)
		TArray<UFortQuestObjectiveInfo*> VisibleObjectives; // 0x378(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortQuestMapEventDetailsPanel");
			return ret;
		}
	};


	// Class SaveTheWorldUI.FortQuestMapEventDetailsPanel_Legacy
	// Inherited from UFortQuestMapDetailsPanelBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x98 (0x388 - 0x2F0)
	class UFortQuestMapEventDetailsPanel_Legacy : public UFortQuestMapDetailsPanelBase	
	{
	public:
		UClass* CurrentQuestBorder; // 0x2F0(0x8)
		UClass* CompletedQuestBorder; // 0x2F8(0x8)
		UClass* FutureQuestBorder; // 0x300(0x8)
		UVerticalBox* VBox_QuestContainer; // 0x308(0x8)
		UVerticalBox* VBox_CompletedQuestContainer; // 0x310(0x8)
		UCommonWidgetSwitcherLegacy* Switcher_Quests; // 0x318(0x8)
		UCommonBorder* Border_NextQuest; // 0x320(0x8)
		UCommonTextBlock* Text_QuestName; // 0x328(0x8)
		UCommonTextBlock* Text_QuestDescription; // 0x330(0x8)
		UCommonTextBlock* Text_Title; // 0x338(0x8)
		UCommonListView* List_Tasks; // 0x340(0x8)
		UImage* Image_QuestIcon; // 0x348(0x8)
		UScrollBox* ScrollBox_SideBar; // 0x350(0x8)
		UDataTable* EventQuestTable; // 0x358(0x8)
		UClass* SideBarEntryClass; // 0x360(0x8)
		UFortQuestItemDefinition* UnlockEventQuestDefinition; // 0x368(0x8)
		UFortQuestItemDefinition* CurrentQuestDef; // 0x370(0x8)
		TArray<UFortQuestObjectiveInfo*> VisibleObjectives; // 0x378(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortQuestMapEventDetailsPanel_Legacy");
			return ret;
		}
	};


	// Class SaveTheWorldUI.FortQuestMapEventDot
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x2E0 - 0x2D8)
	class UFortQuestMapEventDot : public UCommonUserWidget	
	{
	public:
		UImage* Image_ActiveDot; // 0x2D8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortQuestMapEventDot");
			return ret;
		}
	};


	// Class SaveTheWorldUI.FortQuestMapEventSequence
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x18 (0x2F0 - 0x2D8)
	class UFortQuestMapEventSequence : public UCommonUserWidget	
	{
	public:
		UHorizontalBox* HorizontalBox_DotBox; // 0x2D8(0x8)
		UClass* DotWidgetClass; // 0x2E0(0x8)
		unsigned char UnknownData00_7[0x8]; // 0x2E8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortQuestMapEventSequence");
			return ret;
		}
	};


	// Class SaveTheWorldUI.FortQuestMapEventSideEntry
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x60 (0x338 - 0x2D8)
	class UFortQuestMapEventSideEntry : public UCommonUserWidget	
	{
	public:
		UCommonAnimatedSwitcher* Switcher_Rewards; // 0x2D8(0x8)
		UCommonListView* List_SideTasks; // 0x2E0(0x8)
		UCommonTextBlock* Text_SideQuestTitle; // 0x2E8(0x8)
		UImage* Image_Arrow; // 0x2F0(0x8)
		UImage* Image_QuestComplete; // 0x2F8(0x8)
		FMargin RewardPadding; // 0x300(0x10)
		UFortQuestItemDefinition* CurrentQuestItemDef; // 0x310(0x8)
		UFortQuestItem* CurrentQuestItem; // 0x318(0x8)
		FTimerHandle RewardAnimationTimer; // 0x320(0x8)
		TArray<UFortQuestObjectiveInfo*> SideQuestObjectives; // 0x328(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortQuestMapEventSideEntry");
			return ret;
		}
	};


	// Class SaveTheWorldUI.FortQuestMapEventSideEntry_Legacy
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x70 (0x348 - 0x2D8)
	class UFortQuestMapEventSideEntry_Legacy : public UCommonUserWidget	
	{
	public:
		UCommonWidgetSwitcherLegacy* Switcher_Rewards; // 0x2D8(0x8)
		UCommonListView* List_SideTasks; // 0x2E0(0x8)
		UCommonTextBlock* Text_SideQuestTitle; // 0x2E8(0x8)
		UImage* Image_Arrow; // 0x2F0(0x8)
		UImage* Image_QuestComplete; // 0x2F8(0x8)
		FMargin RewardPadding; // 0x300(0x10)
		UFortQuestItemDefinition* CurrentQuestItemDef; // 0x310(0x8)
		UFortQuestItem* CurrentQuestItem; // 0x318(0x8)
		TArray<UCommonWidgetSwitcherLegacy*> RewardSwitchers; // 0x320(0x10)
		FTimerHandle RewardAnimationTimer; // 0x330(0x8)
		TArray<UFortQuestObjectiveInfo*> SideQuestObjectives; // 0x338(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortQuestMapEventSideEntry_Legacy");
			return ret;
		}
	};


	// Class SaveTheWorldUI.FortQuestMapNewBangWrapper
	// Inherited from UFortBangWrapper_NUI -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x300 - 0x2F0)
	class UFortQuestMapNewBangWrapper : public UFortBangWrapper_NUI	
	{
	public:
		UCommonAnimatedSwitcher* Switcher_Bangs; // 0x2F0(0x8)
		unsigned char UnknownData00_7[0x8]; // 0x2F8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortQuestMapNewBangWrapper");
			return ret;
		}
	};


	// Class SaveTheWorldUI.FortQuestMapNewBangWrapper_Legacy
	// Inherited from UFortBangWrapper_NUI -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x300 - 0x2F0)
	class UFortQuestMapNewBangWrapper_Legacy : public UFortBangWrapper_NUI	
	{
	public:
		UCommonWidgetSwitcherLegacy* Switcher_Bangs; // 0x2F0(0x8)
		unsigned char UnknownData00_7[0x8]; // 0x2F8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortQuestMapNewBangWrapper_Legacy");
			return ret;
		}
	};


	// Class SaveTheWorldUI.FortQuestMapNodeLayout
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x68 (0x318 - 0x2B0)
	class UFortQuestMapNodeLayout : public UUserWidget	
	{
	public:
		UPanelWidget* Panel_NodeLayout; // 0x2B0(0x8)
		UCommonButtonBase* ButtonPrevious; // 0x2B8(0x8)
		UCommonButtonBase* ButtonNext; // 0x2C0(0x8)
		USizeBox* StartArrow; // 0x2C8(0x8)
		USizeBox* EndArrow; // 0x2D0(0x8)
		UCommonButtonGroupBase* QuestButtonGroup; // 0x2D8(0x8)
		UFortQuestMapScreen* ParentScreen; // 0x2E0(0x8)
		unsigned char UnknownData00_7[0x30]; // 0x2E8(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortQuestMapNodeLayout");
			return ret;
		}

		void HandleQuestIndexSelectionModelIndexChanged(bool bUpdateButtonSelection); // Flags: Final|Native|Private, Memory Exec: 0x7FF751D87F58(relative to base address)
		void HandleQuestButtonSelected(UCommonButtonBase* SelectedQuestButton, int32_t ButtonIndex); // Flags: Final|Native|Private, Memory Exec: 0x7FF751D87E94(relative to base address)
	};


	// Class SaveTheWorldUI.FortQuestMapNodeLayout_Legacy
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x68 (0x318 - 0x2B0)
	class UFortQuestMapNodeLayout_Legacy : public UUserWidget	
	{
	public:
		UPanelWidget* Panel_NodeLayout; // 0x2B0(0x8)
		UCommonButtonLegacy* ButtonPrevious; // 0x2B8(0x8)
		UCommonButtonLegacy* ButtonNext; // 0x2C0(0x8)
		USizeBox* StartArrow; // 0x2C8(0x8)
		USizeBox* EndArrow; // 0x2D0(0x8)
		UCommonButtonGroupLegacy* QuestButtonGroup; // 0x2D8(0x8)
		UFortQuestMapScreen_Legacy* ParentScreen; // 0x2E0(0x8)
		unsigned char UnknownData00_7[0x30]; // 0x2E8(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortQuestMapNodeLayout_Legacy");
			return ret;
		}

		void HandleQuestIndexSelectionModelIndexChanged(bool bUpdateButtonSelection); // Flags: Final|Native|Private, Memory Exec: 0x7FF751D87FD8(relative to base address)
		void HandleQuestButtonSelected(UCommonButtonLegacy* SelectedQuestButton, int32_t ButtonIndex); // Flags: Final|Native|Private, Memory Exec: 0x7FF751D87E94(relative to base address)
	};


	// Class SaveTheWorldUI.FortQuestMapQuestTile
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x2F8 - 0x2D8)
	class UFortQuestMapQuestTile : public UCommonUserWidget	
	{
	public:
		UCommonButtonBase* QuestButton; // 0x2D8(0x8)
		FFortQuestMapNode QuestNodeData; // 0x2E0(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortQuestMapQuestTile");
			return ret;
		}

		void HandleSelectedChange(bool Selected); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleQuestDataChangedBP(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetQuestNodeData(UFortQuestItemDefinition* QuestItemDefinition, FFortQuestMapNode& NodeData); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751DAE76C(relative to base address)
	};


	// Class SaveTheWorldUI.FortQuestMapQuestTile_Legacy
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x2F8 - 0x2D8)
	class UFortQuestMapQuestTile_Legacy : public UCommonUserWidget	
	{
	public:
		UCommonButtonLegacy* QuestButton; // 0x2D8(0x8)
		FFortQuestMapNode QuestNodeData; // 0x2E0(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortQuestMapQuestTile_Legacy");
			return ret;
		}

		void HandleSelectedChange(bool Selected); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleQuestDataChangedBP(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetQuestNodeData(UFortQuestItemDefinition* QuestItemDefinition, FFortQuestMapNode& NodeData); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751DAE76C(relative to base address)
	};


	// Class SaveTheWorldUI.FortQuestMapScreen
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xB8 (0x4A8 - 0x3F0)
	class UFortQuestMapScreen : public UCommonActivatableWidget	
	{
	public:
		UFortQuestMapDetailsPanelBase* CampaignDetailsPanel; // 0x3F0(0x8)
		UFortQuestMapDetailsPanelBase* EventDetailsPanel; // 0x3F8(0x8)
		UFortQuestMapEventCallout* EventCalloutPanel; // 0x400(0x8)
		UFortQuestMapViewer* QuestMapViewer; // 0x408(0x8)
		EQuestMapScreenMode CurrentMode; // 0x410(0x1)
		bool bEventsActive; // 0x411(0x1)
		unsigned char UnknownData00_6[0x6]; // 0x412(0x6) UNKNOWN PROPERTY
		UFortQuestMapDataAsset* CampaignQuestMapDataTable; // 0x418(0x8)
		UFortQuestItemDefinition* CutoffQuest; // 0x420(0x8)
		UFortQuestMapDataAsset* CurrentQuestMapDataTable; // 0x428(0x8)
		unsigned char UnknownData01_6[0x28]; // 0x430(0x28) UNKNOWN PROPERTY
		UClass* CampaignNewsModalClass; // 0x458(0x8)
		UClass* QuestLogScreenClass; // 0x460(0x8)
		FDataTableRowHandle CurrentQuestAction; // 0x468(0x10)
		FDataTableRowHandle STWNewsAction; // 0x478(0x10)
		FDataTableRowHandle BackAction; // 0x488(0x10)
		unsigned char UnknownData02_7[0x10]; // 0x498(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortQuestMapScreen");
			return ret;
		}

		void UpdateQuestMapMode(EQuestMapScreenMode QuestMapMode); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateInputActionStates(bool bShowingCallout); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751DB2C4C(relative to base address)
		void ToggleQuestMapState(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751DB2020(relative to base address)
		void ShowQuestLog(UFortQuestItem* QuestItem); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751DB1FA0(relative to base address)
		void SetQuestMapViewer(UFortQuestMapViewer* Value); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751DB1A78(relative to base address)
		void SetIgnorePageNavigation(bool bIgnoreNavigation); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751DB12C0(relative to base address)
		void SetBeyondCutoffQuest(bool bBeyondCutoff); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751DB06E8(relative to base address)
		void OnShowCurrentQuestInputActionValueChanged(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnEventCalloutExpandChanged(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnEventCalloutButtonClicked(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool IsEventFlagActive(FString EventFlag); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751DAFB74(relative to base address)
		bool IsBeyondQuest(UFortQuestItemDefinition* QuestDef); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751DAFAE4(relative to base address)
		void InitializeQuestData(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751DAF9B8(relative to base address)
		void HandleQuestPageChanged(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleQuestIndexSelectionModelChanged(bool bUpdateButtonSelection); // Flags: Final|Native|Private, Memory Exec: 0x7FF751DAF5A8(relative to base address)
		void HandleQuestDetailsUpdated(UFortQuestItem* QuestDefinition); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleMapViewerNavigationRequest(EViewerNavigationDirection Direction); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751DAEF18(relative to base address)
		void HandleMapModeSwitch(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleEventQuestMapActivate(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751DAED7C(relative to base address)
		void HandleEventCalloutDataChangedBP(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleBackInputAction(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		EFrontEndCamera GetCurrentPageCameraMode(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751DAD8B0(relative to base address)
		bool GetBeyondCutoffQuest(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF749C9DEA8(relative to base address)
		void ClaimQuestRewards(UFortQuestItem* QuestItem); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CheckForNewMainQuest(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751DAD4C4(relative to base address)
	};


	// Class SaveTheWorldUI.FortQuestMapScreen_Legacy
	// Inherited from UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x68 (0x590 - 0x528)
	class UFortQuestMapScreen_Legacy : public UCommonActivatablePanelLegacy	
	{
	public:
		UFortQuestMapDetailsPanelBase* CampaignDetailsPanel; // 0x528(0x8)
		UFortQuestMapDetailsPanelBase* EventDetailsPanel; // 0x530(0x8)
		UFortQuestMapEventCallout_Legacy* EventCalloutPanel; // 0x538(0x8)
		UFortQuestMapViewer_Legacy* QuestMapViewer; // 0x540(0x8)
		EQuestMapScreenMode CurrentMode; // 0x548(0x1)
		bool bEventsActive; // 0x549(0x1)
		unsigned char UnknownData00_6[0x6]; // 0x54A(0x6) UNKNOWN PROPERTY
		UFortQuestMapDataAsset* CampaignQuestMapDataTable; // 0x550(0x8)
		UFortQuestItemDefinition* CutoffQuest; // 0x558(0x8)
		UFortQuestMapDataAsset* CurrentQuestMapDataTable; // 0x560(0x8)
		unsigned char UnknownData01_7[0x28]; // 0x568(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortQuestMapScreen_Legacy");
			return ret;
		}

		void UpdateQuestMapMode(EQuestMapScreenMode QuestMapMode); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ToggleQuestMapState(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751DB2040(relative to base address)
		void SetQuestMapViewer(UFortQuestMapViewer_Legacy* Value); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751DB1AF8(relative to base address)
		void SetIgnorePageNavigation(bool bIgnoreNavigation); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751DB134C(relative to base address)
		void SetFindCurrentActionVisibility(EInputActionState ActionVisibility); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetBeyondCutoffQuest(bool bBeyondCutoff); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751DB0780(relative to base address)
		void OnEventCalloutExpandChanged(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnEventCalloutButtonClicked(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool IsEventFlagActive(FString EventFlag); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751DAFB74(relative to base address)
		bool IsBeyondQuest(UFortQuestItemDefinition* QuestDef); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751DAFAE4(relative to base address)
		void InitializeQuestData(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751DAF9CC(relative to base address)
		void HandleRequestCurrentQuestNavigation(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751DAF6D0(relative to base address)
		void HandleQuestPageChanged(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleQuestIndexSelectionModelChanged(bool bUpdateButtonSelection); // Flags: Final|Native|Private, Memory Exec: 0x7FF751DAF628(relative to base address)
		void HandleQuestDetailsUpdated(UFortQuestItem* QuestDefinition); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleMapViewerNavigationRequest(EViewerNavigationDirection Direction); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751DAEF98(relative to base address)
		void HandleMapModeSwitch(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleEventQuestMapActivate(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751DAED90(relative to base address)
		void HandleEventCalloutDataChangedBP(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		EFrontEndCamera GetCurrentPageCameraMode(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751DAD8E0(relative to base address)
		bool GetBeyondCutoffQuest(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751DAD7F8(relative to base address)
		void CheckForNewMainQuest(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751DAD518(relative to base address)
	};


	// Class SaveTheWorldUI.FortQuestMapViewer_Legacy
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x80 (0x358 - 0x2D8)
	class UFortQuestMapViewer_Legacy : public UCommonUserWidget	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0x2D8(0x10) UNKNOWN PROPERTY
		UCommonButtonLegacy* Button_PageRight; // 0x2E8(0x8)
		UCommonButtonLegacy* Button_PageLeft; // 0x2F0(0x8)
		UCommonTextBlock* Text_Title; // 0x2F8(0x8)
		UCommonTextBlock* Text_Page; // 0x300(0x8)
		USizeBox* SizeBox_Viewer; // 0x308(0x8)
		UCanvasPanel* CanvasPanel_Cosmetic; // 0x310(0x8)
		UFortQuestMapScreen_Legacy* ParentScreen; // 0x318(0x8)
		UFortQuestMapNodeLayout_Legacy* NodeLayout; // 0x320(0x8)
		unsigned char UnknownData01_7[0x30]; // 0x328(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortQuestMapViewer_Legacy");
			return ret;
		}

		void UpdateViewerData(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751DB2CCC(relative to base address)
		void OnTryUpdateUserWidgetColor(UUserWidget* Widget, FSlateColor OverrideColor); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPlayLayoutOutroAnimation(EViewerNavigationDirection TravelDirection); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPlayLayoutFadeInAnimation(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleLayoutOutroAnimationFinished(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751DAEE94(relative to base address)
	};


	// Class SaveTheWorldUI.FortQuestPlayButton
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x2E0 - 0x2D8)
	class UFortQuestPlayButton : public UCommonUserWidget	
	{
	public:
		UFortQuestItem* QuestItem; // 0x2D8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortQuestPlayButton");
			return ret;
		}

		void OnContentMissing(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandlePlayerStateChanged(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleMatchmakingStarted(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleMatchmakingComplete(EMatchmakingCompleteResult Result); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleLobbyDisconnected(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool CanPlayQuest(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751DAD4A0(relative to base address)
		void AttemptToPlayQuest(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751DAD3C0(relative to base address)
	};


	// Class SaveTheWorldUI.FortQuestTreeItemWidget
	// Inherited from UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x13A0 - 0x1390)
	class UFortQuestTreeItemWidget : public UCommonButtonBase	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x1390(0x8) UNKNOWN PROPERTY
		TWeakObjectPtr<UObject*> QuestOrCategory; // 0x1398(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortQuestTreeItemWidget");
			return ret;
		}

		void SetupAsQuest(UFortQuestItem* category); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetupAsCategory(UFortQuestCategory* category); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnQuestsUpdated(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleQuestsUpdated(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751DAF6A8(relative to base address)
	};


	// Class SaveTheWorldUI.FortQuestTreeItemWidget_Legacy
	// Inherited from UCommonButtonLegacy -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x13F0 - 0x13E0)
	class UFortQuestTreeItemWidget_Legacy : public UCommonButtonLegacy	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x13E0(0x8) UNKNOWN PROPERTY
		TWeakObjectPtr<UObject*> QuestOrCategory; // 0x13E8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortQuestTreeItemWidget_Legacy");
			return ret;
		}

		void SetupAsQuest(UFortQuestItem* category); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetupAsCategory(UFortQuestCategory* category); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnQuestsUpdated(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleQuestsUpdated(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751DAF6BC(relative to base address)
	};


	// Class SaveTheWorldUI.FortQuestScreen
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x100 (0x4F0 - 0x3F0)
	class UFortQuestScreen : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x3F0(0x8) UNKNOWN PROPERTY
		UCommonTreeView* TreeView_Quests; // 0x3F8(0x8)
		UScrollBox* ScrollBox_QuestDetails; // 0x400(0x8)
		UClass* QuestManagerComponentClass; // 0x408(0x8)
		FDataTableRowHandle BackAction; // 0x410(0x10)
		FDataTableRowHandle LeaveInventoryAction; // 0x420(0x10)
		FDataTableRowHandle PlayQuestAction; // 0x430(0x10)
		FDataTableRowHandle AbandonQuestAction; // 0x440(0x10)
		FDataTableRowHandle ClaimRewardAction; // 0x450(0x10)
		FDataTableRowHandle ReplayIntroAction; // 0x460(0x10)
		FDataTableRowHandle ReplayOutroAction; // 0x470(0x10)
		FDataTableRowHandle PinQuestAction; // 0x480(0x10)
		FDataTableRowHandle UnpinQuestAction; // 0x490(0x10)
		FDataTableRowHandle StopConversationAction; // 0x4A0(0x10)
		unsigned char UnknownData01_7[0x40]; // 0x4B0(0x40) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortQuestScreen");
			return ret;
		}

		void TriggerClaimRewardEvent(UFortQuestItem* QuestItem); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751DB20BC(relative to base address)
		void SetInputActionStates(UFortQuestItem* QuestItem, bool bIsQuestAudioPlaying, bool bShouldShowPlayQuest, bool bAreQuestItemsDifferent); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751DB1588(relative to base address)
		void SetDisableClaimRewardButton(bool bToDisable); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751DB0A30(relative to base address)
		void ProcessPendingSeenQuestItems(); // Flags: Final|Native|Private|BlueprintCallable, Memory Exec: 0x7FF751DB01E0(relative to base address)
		void OnContentMissing(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_SetInitialQuestToSelect(UFortQuestItem* QuestItem); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_HandleUnpinQuestAction(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_HandleStopConversationAction(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_HandleReplayOutroAction(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_HandleReplayIntroAction(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_HandlePlayQuestAction(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_HandlePinQuestAction(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_HandleClaimRewardAction(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_HandleBackAction(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_HandleAbandonQuestAction(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AttemptToPlayQuest(UFortQuestItem* QuestItem); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751DAD3D4(relative to base address)
	};


	// Class SaveTheWorldUI.FortQuestScreen_Legacy
	// Inherited from UFortActivatablePanel -> UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x560 - 0x560)
	class UFortQuestScreen_Legacy : public UFortActivatablePanel	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortQuestScreen_Legacy");
			return ret;
		}

		void ProcessPendingSeenQuestItems(); // Flags: Final|Native|Private|BlueprintCallable, Memory Exec: 0x7FF751DB01E0(relative to base address)
	};


	// Class SaveTheWorldUI.FortResearchMenuBase
	// Inherited from UFortActivatablePanel -> UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x50 (0x5B0 - 0x560)
	class UFortResearchMenuBase : public UFortActivatablePanel	
	{
	public:
		UFortItemDefinition* ResearchRespecToken; // 0x560(0x8)
		FDataTableRowHandle RespecInputAction; // 0x568(0x10)
		unsigned char UnknownData00_6[0x8]; // 0x578(0x8) UNKNOWN PROPERTY
		FDataTableRowHandle ResearchDetailsInputAction; // 0x580(0x10)
		unsigned char UnknownData01_6[0x8]; // 0x590(0x8) UNKNOWN PROPERTY
		FDataTableRowHandle BackInputAction; // 0x598(0x10)
		unsigned char UnknownData02_7[0x8]; // 0x5A8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortResearchMenuBase");
			return ret;
		}

		void UseResearchRespecToken(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751DB2CE0(relative to base address)
		void SetupLegacyInputHandlers(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetupInputHandlers(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751DB1F8C(relative to base address)
		void RequestPurchaseResearchLevel(FString StatId); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751DB0330(relative to base address)
		void OnUseResearchRespecTokenComplete(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPurchaseResearchLevelStarted(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPurchaseResearchLevelCompleted(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleRespec(); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleResearchDetails(); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleBack(); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		int32_t GetResearchRespecTokenCount(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751DAE878(relative to base address)
		int32_t GetClaimableResearchPointEstimate(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751DAD810(relative to base address)
		bool AreResearchRespecTokensAvailable(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751DAD39C(relative to base address)
	};


	// Class SaveTheWorldUI.FortResearchStatTileWidget
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x40 (0x2F0 - 0x2B0)
	class UFortResearchStatTileWidget : public UUserWidget	
	{
	public:
		UFortStatItemDefinition* PersonalStatItemDefinition; // 0x2B0(0x8)
		UFortStatItemDefinition* TeamStatItemDefinition; // 0x2B8(0x8)
		FName StatCostCurveName; // 0x2C0(0x4)
		FName StatPersonalDeltaCurveName; // 0x2C4(0x4)
		FName StatPersonalCumulativeCurveName; // 0x2C8(0x4)
		FName StatTeamDeltaCurveName; // 0x2CC(0x4)
		FName StatTeamCumulativeCurveName; // 0x2D0(0x4)
		unsigned char UnknownData00_7[0x1C]; // 0x2D4(0x1C) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortResearchStatTileWidget");
			return ret;
		}

		void OnStatChanged(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool IsAtMaxResearchLevel(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751DAFACC(relative to base address)
		FString GetStatIdName(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751DAE968(relative to base address)
		EFortStatType GetPersonalStatType(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751DAE710(relative to base address)
		int32_t GetNextTeamStatValueDelta(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751DAE6C8(relative to base address)
		int32_t GetNextPersonalStatValueDelta(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751DAE6A4(relative to base address)
		int32_t GetNextCombinedStatValueDelta(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751DAE65C(relative to base address)
		int32_t GetCurrentTeamStatValue(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751DAD934(relative to base address)
		int32_t GetCurrentResearchLevel(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FEB20F0(relative to base address)
		int32_t GetCurrentPersonalStatValue(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751DAD910(relative to base address)
		int32_t GetCurrentCombinedStatValue(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751DAD868(relative to base address)
		int32_t GetCostToIncreaseStat(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751DAD834(relative to base address)
	};


	// Class SaveTheWorldUI.FortRewardNotificationData
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UFortRewardNotificationData : public UObject	
	{
	public:
		EFrontEndRewardType RewardType; // 0x28(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x29(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortRewardNotificationData");
			return ret;
		}

		bool GetIconBrush(FSlateBrush& IconBrush, TEnumAsByte<EFortBrushSize> BrushSize); // Flags: Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751DADB24(relative to base address)
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
	// Size: 0x28 (0x300 - 0x2D8)
	class UFortRewardNotificationSubWidget : public UCommonUserWidget	
	{
	public:
		FMulticastInlineDelegate OnTransitionInComplete; // 0x2D8(0x10)
		FMulticastInlineDelegate OnTransitionOutComplete; // 0x2E8(0x10)
		unsigned char UnknownData00_7[0x8]; // 0x2F8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortRewardNotificationSubWidget");
			return ret;
		}

		void TransitionOutBegin(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void TransitionOut(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751DB20A8(relative to base address)
		void TransitionInBegin(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void TransitionIn(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751DB2060(relative to base address)
		void SetPrimaryActionText(FText Text); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751DB1920(relative to base address)
		void SetPrimaryActionHidden(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751DB18F0(relative to base address)
		void SetPrimaryActionEnabled(bool bEnabled); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751DB17EC(relative to base address)
		void SetInputActionHandlerState(UDataTable* DataTable, FName RowName, EInputActionState State); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751DB1458(relative to base address)
		void RemoveInputActionHandler(FDataTableRowHandle InputActionRow); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751DB0210(relative to base address)
		void RemoveAllInputActionHandlers(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751DB01F4(relative to base address)
		void OnPrimaryAction(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnNavigationUp(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnNavigationRight(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnNavigationLeft(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnNavigationDown(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnDeactivated(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnActivated(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void IsPrimaryActionHidden(bool& bHidden); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751DAFC10(relative to base address)
		void IsPrimaryActionEnabled(bool& bEnabled); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751DAFC10(relative to base address)
		void InspectItem(UFortItem* ItemToInspect, int32_t QuantityOverride); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751DAF9E0(relative to base address)
		void Init(UFortRewardNotificationWidget* MainWidget); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751DAF938(relative to base address)
		void AddInputActionHandler(UDataTable* DataTable, FName RowName, FDelegateProperty CommittedEvent); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751DAD070(relative to base address)
	};


	// Class SaveTheWorldUI.FortRewardConversationWidget
	// Inherited from UFortRewardNotificationSubWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x300 - 0x300)
	class UFortRewardConversationWidget : public UFortRewardNotificationSubWidget	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortRewardConversationWidget");
			return ret;
		}

		bool IsValidConversation(UFortConversation* Conversation); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751DAFF78(relative to base address)
		void GetDataFromSentence(FFortConversationSentence& Sentence, FText& Text, UTexture2D* TalkingHeadTexture); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751DAD958(relative to base address)
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
		UFortQuestItem* Quest; // 0x30(0x8)

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
		UFortExpeditionItem* Expedition; // 0x30(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortRewardExpeditionData");
			return ret;
		}
	};


	// Class SaveTheWorldUI.FortRewardExpeditionWidget
	// Inherited from UFortRewardNotificationSubWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x68 (0x368 - 0x300)
	class UFortRewardExpeditionWidget : public UFortRewardNotificationSubWidget	
	{
	public:
		FMulticastInlineDelegate OnMcpError; // 0x300(0x10)
		unsigned char UnknownData00_7[0x58]; // 0x310(0x58) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortRewardExpeditionWidget");
			return ret;
		}

		void OnCollectExpeditionCompleted(UFortExpeditionItem* Expedition, bool bSucceeded, TArray<FFortItemInstanceQuantityPair>& Rewards); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CollectExpedition(UFortExpeditionItem* Expedition); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751DAD580(relative to base address)
	};


	// Class SaveTheWorldUI.FortRewardGiftBoxData
	// Inherited from UFortRewardNotificationData -> UObject
	// Size: 0x8 (0x38 - 0x30)
	class UFortRewardGiftBoxData : public UFortRewardNotificationData	
	{
	public:
		UFortGiftBoxItem* GiftBox; // 0x30(0x8)

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
		unsigned char UnknownData00_3[0x8]; // 0x1390(0x8) UNKNOWN PROPERTY
		UPanelWidget* ItemCardPanel; // 0x1398(0x8)
		EFortItemCardSize ItemCardSize; // 0x13A0(0x1)
		bool bDisplayAsRewardCard; // 0x13A1(0x1)
		unsigned char UnknownData01_6[0x6]; // 0x13A2(0x6) UNKNOWN PROPERTY
		UFortItem* ItemInstance; // 0x13A8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortRewardInfoButton");
			return ret;
		}

		void SetShowDescriptionBP(bool bInShowDescription); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetShowDescription(bool bInShowDescription); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751DB1D24(relative to base address)
		void SetItemInstanceQuantityPair(FFortItemInstanceQuantityPair& ItemQuantityPair); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751DB1758(relative to base address)
		void HandleDifferentItemOrQuantitySetBP(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		int32_t GetQuantity(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751DAE754(relative to base address)
		UFortItem GetItemInstance(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751DAE5EC(relative to base address)
	};


	// Class SaveTheWorldUI.FortRewardInfoWidget
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x88 (0x360 - 0x2D8)
	class UFortRewardInfoWidget : public UCommonUserWidget	
	{
	public:
		UPanelWidget* RewardListWidget; // 0x2D8(0x8)
		FMargin RewardWidgetPadding; // 0x2E0(0x10)
		TEnumAsByte<EHorizontalAlignment> HorizontalAlignment; // 0x2F0(0x1)
		TEnumAsByte<EVerticalAlignment> VerticalAlignment; // 0x2F1(0x1)
		bool bShowDescription; // 0x2F2(0x1)
		bool bAllowItemInteraction; // 0x2F3(0x1)
		int32_t MaxNumRewardsShown; // 0x2F4(0x4)
		UClass* OrWidgetType; // 0x2F8(0x8)
		UClass* RewardInfoButtonType; // 0x300(0x8)
		unsigned char UnknownData00_6[0x20]; // 0x308(0x20) UNKNOWN PROPERTY
		UCommonButtonGroupBase* ButtonGroup; // 0x328(0x8)
		unsigned char UnknownData01_7[0x30]; // 0x330(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortRewardInfoWidget");
			return ret;
		}

		void SetRewards(FFortRewardInfo& RewardsIn); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751DB1C08(relative to base address)
		void SetReward(FFortItemQuantityPair& RewardIn); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751DB1B78(relative to base address)
		void SetButtonGroup(UCommonButtonGroupBase* InButtonGroup); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75023D194(relative to base address)
		bool ContainsReward(FString TemplateIdToCheck); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75023B360(relative to base address)
	};


	// Class SaveTheWorldUI.FortRewardItemCacheData
	// Inherited from UFortRewardNotificationData -> UObject
	// Size: 0x8 (0x38 - 0x30)
	class UFortRewardItemCacheData : public UFortRewardNotificationData	
	{
	public:
		UFortItem* ItemCache; // 0x30(0x8)

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
	// Size: 0x0 (0x300 - 0x300)
	class UFortRewardNewQuestWidget : public UFortRewardNotificationSubWidget	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortRewardNewQuestWidget");
			return ret;
		}

		bool IsValidConversation(UFortConversation* Conversation); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751DAFF78(relative to base address)
		void GetDataFromSentence(FFortConversationSentence& Sentence, FText& Text, UTexture2D* TalkingHeadTexture); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751DAD958(relative to base address)
	};


	// Class SaveTheWorldUI.FortRewardNotificationWidget
	// Inherited from UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x100 (0x628 - 0x528)
	class UFortRewardNotificationWidget : public UCommonActivatablePanelLegacy	
	{
	public:
		unsigned char UnknownData00_3[0x28]; // 0x528(0x28) UNKNOWN PROPERTY
		UClass* MulchConfirmationModalClass; // 0x550(0x8)
		UFortMulchConfirmationModalWidget* MulchConfirmationModal; // 0x558(0x8)
		UOverlay* OverlayMain; // 0x560(0x8)
		FFortSwipeDetector SwipeDetector; // 0x568(0x98)
		TArray<UFortRewardNotificationData*> NotificationDataList; // 0x600(0x10)
		unsigned char UnknownData01_6[0x10]; // 0x610(0x10) UNKNOWN PROPERTY
		FPrimaryContentSetup PrimaryContentSetup; // 0x620(0x3)
		unsigned char UnknownData02_7[0x5]; // 0x623(0x5) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortRewardNotificationWidget");
			return ret;
		}

		void ShowMulchConfirmationModal(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D8A070(relative to base address)
		void SetPrimaryActionText(FText Text); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751DB19DC(relative to base address)
		void SetPrimaryActionHidden(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751DB190C(relative to base address)
		void SetPrimaryActionEnabled(bool bEnabled); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751DB1870(relative to base address)
		void ResetAllRewardData(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751DB0464(relative to base address)
		void PopulateReward(UFortRewardNotificationData* Reward); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751DB0160(relative to base address)
		void OnRewardsScreenClosed(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRewardsClaimFailed(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRewardsClaimed(TArray<FFortItemInstanceQuantityPair>& ItemList); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPrimaryActionTextChanged(FText& Text); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPrimaryActionHidden(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPrimaryActionEnabled(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPrimaryActionDisabled(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPopulateNewQuestReward(UFortRewardEpicQuestData* QuestReward); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPopulateGiftBoxReward(UFortRewardGiftBoxData* GiftBoxReward); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPopulateExpeditionReward(UFortRewardExpeditionData* ExpeditionReward); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPopulateChoiceRewards(TArray<FFortItemInstanceQuantityPair>& ItemList); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnNavigationUp(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnNavigationRight(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnNavigationLeft(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnNavigationDown(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnMulchCompleted(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void NotifyPanelDeactivated(); // Flags: Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751D88344(relative to base address)
		void NotifyPanelActivated(); // Flags: Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751D88328(relative to base address)
		void MarkDefaultItemsForMulch(TArray<FFortItemInstanceQuantityPair> ItemList); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751DB0000(relative to base address)
		void IsPrimaryActionHidden(bool& bHidden); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751DAFD30(relative to base address)
		void IsPrimaryActionEnabled(bool& bEnabled); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751DAFCA4(relative to base address)
		void InspectItem(UFortItem* ItemToInspect, int32_t QuantityOverride); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HideMulchConfirmationModal(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF751D8807C(relative to base address)
		void HandleOnQuestRewardClaimed(UFortQuestItem* Quest, TArray<FFortItemInstanceQuantityPair>& Rewards); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF751DAF334(relative to base address)
		void HandleOnNoQuestRewardsToClaim(); // Flags: Final|Native|Private, Memory Exec: 0x7FF751DAF284(relative to base address)
		void HandleOnMissionRewardsOpenFailed(); // Flags: Final|Native|Private, Memory Exec: 0x7FF751DAF284(relative to base address)
		void HandleOnMissionRewardsOpened(TArray<FFortItemInstanceQuantityPair>& MissionRewards); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF751DAF298(relative to base address)
		void HandleOnMissionAlertRewardsOpened(TArray<FFortItemInstanceQuantityPair>& AlertRewards); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF751DAF298(relative to base address)
		void HandleOnItemCacheRewardsClaimFailed(); // Flags: Final|Native|Private, Memory Exec: 0x7FF751DAF284(relative to base address)
		void HandleOnItemCacheRewardsClaimed(TArray<FFortItemInstanceQuantityPair>& ClaimedRewards); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF751DAF298(relative to base address)
		void HandleOnDifficultyIncreaseRewardsClaimFailed(); // Flags: Final|Native|Private, Memory Exec: 0x7FF751DAF284(relative to base address)
		void HandleOnDifficultyIncreaseRewardsClaimed(TArray<FFortItemInstanceQuantityPair>& DifficultyRewards); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF751DAF298(relative to base address)
		void HandleOnCollectionBookRewardClaimed(FFortCollectionBookRewards RewardClaimed, bool bSuccess, TArray<FFortItemInstanceQuantityPair>& ActualRewards); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF751DAF018(relative to base address)
		void BeginCloseRewardsScreen(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751DAD454(relative to base address)
		void AddQuestData(UFortQuestItem* Quest); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751DAD31C(relative to base address)
		void AddPhoenixLevelUpRewardData(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751DAD308(relative to base address)
		void AddMissionData(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751DAD280(relative to base address)
		void AddMissionAlertData(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751DAD1F8(relative to base address)
		void AddItemCacheRewardData(UFortItem* ItemCache); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751DAD178(relative to base address)
		void AddGiftBoxData(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751DACFE8(relative to base address)
		void AddExpeditionData(UFortExpeditionItem* ExpeditionItem); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751DACF68(relative to base address)
		void AddEpicQuestData(UFortQuestItem* Quest); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751DACEE8(relative to base address)
		void AddDifficultyIncreaseRewardData(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751DACE60(relative to base address)
		void AddCollectionBookData(FFortCollectionBookRewards& CollectionBookRewards); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751DACDBC(relative to base address)
	};


	// Class SaveTheWorldUI.FortRewardPhoenixLevelUpData
	// Inherited from UFortRewardNotificationData -> UObject
	// Size: 0x18 (0x48 - 0x30)
	class UFortRewardPhoenixLevelUpData : public UFortRewardNotificationData	
	{
	public:
		int32_t PhoenixLevel; // 0x30(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
		TArray<FFortItemInstanceQuantityPair> Rewards; // 0x38(0x10)

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
		UFortQuestItem* Quest; // 0x30(0x8)

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
		TWeakObjectPtr<UClass*> ItemManagementScreenClass; // 0x28(0x20)
		TWeakObjectPtr<UClass*> ItemManagementScreenClass_STW; // 0x48(0x20)
		TWeakObjectPtr<UClass*> ItemInspectionScreenClass; // 0x68(0x20)
		TWeakObjectPtr<UClass*> HeroLoadoutScreenClass; // 0x88(0x20)
		TWeakObjectPtr<UClass*> HeroLoadoutScreenLegacyClass; // 0xA8(0x20)
		TWeakObjectPtr<UClass*> SurvivorSquadManagementScreenClass; // 0xC8(0x20)

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
		unsigned char UnknownData00_3[0x10]; // 0x13E0(0x10) UNKNOWN PROPERTY
		int32_t SquadSlotIndex; // 0x13F0(0x4)
		unsigned char UnknownData01_7[0xC]; // 0x13F4(0xC) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortSquadSelectorButton");
			return ret;
		}

		bool TryGetStaticSquadDataBP(FHomebaseSquad& OutSquadData); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751DB28A4(relative to base address)
		void SetIdOfSquadToManageBP(FName& SquadID); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751DB11A0(relative to base address)
		void HandleSquadChangedBP(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleDifferentSquadSetBP(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		FName GetIdOfSquadToManageBP(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751DAE318(relative to base address)
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

		bool TryGetTheaterUniqueId(FString& OutTheaterUniqueId, bool& OutIsUnlocked); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751DB2AF4(relative to base address)
		bool TryGetPowerLevel(int32_t& OutPowerLevel); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751DB2400(relative to base address)
	};


	// Class SaveTheWorldUI.FortSquadIcon
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x2E8 - 0x2D8)
	class UFortSquadIcon : public UCommonUserWidget	
	{
	public:
		FName Name; // 0x2D8(0x4)
		TEnumAsByte<EFortBrushSize> ImageSize; // 0x2DC(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x2DD(0x3) UNKNOWN PROPERTY
		UImage* Icon; // 0x2E0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortSquadIcon");
			return ret;
		}

		void SetSquad(FName& InName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751DB1ED0(relative to base address)
		void HandleDifferentSquadSetBP(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class SaveTheWorldUI.FortSquadLandingPageDefenderSquadDetails
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x2E8 - 0x2D8)
	class UFortSquadLandingPageDefenderSquadDetails : public UCommonUserWidget	
	{
	public:
		UCommonTextBlock* OutpostName; // 0x2D8(0x8)
		UCommonNumericTextBlock* PowerRating; // 0x2E0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortSquadLandingPageDefenderSquadDetails");
			return ret;
		}

		void SetDefenderSquadInfo(FFortLandingPageDefenderSummaryInfo& DefenderSummaryInfo); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751DB08A4(relative to base address)
		void HandleDefenderSquadInfoSetBP(FFortLandingPageDefenderSummaryInfo& DefenderSummaryInfo); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleAddDefenderSquadMemberBP(FName& SquadID, int32_t Index); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class SaveTheWorldUI.FortSquadLandingPageDefenderSquadDetailsLocked
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x2E0 - 0x2D8)
	class UFortSquadLandingPageDefenderSquadDetailsLocked : public UCommonUserWidget	
	{
	public:
		UCommonTextBlock* OutpostName; // 0x2D8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortSquadLandingPageDefenderSquadDetailsLocked");
			return ret;
		}

		void SetDefenderSquadInfo(FFortLandingPageDefenderSummaryInfo& DefenderSummaryInfo); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751DB0940(relative to base address)
	};


	// Class SaveTheWorldUI.FortSquadLandingPageDefenderSummary
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x2E0 - 0x2D8)
	class UFortSquadLandingPageDefenderSummary : public UCommonUserWidget	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x2D8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortSquadLandingPageDefenderSummary");
			return ret;
		}

		void HandleClearDefenderSquadDetailsBP(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleAddLockedDefenderSquadDetailsBP(FFortLandingPageDefenderSummaryInfo DefenderSummaryInfo); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleAddDefenderSquadDetailsBP(FFortLandingPageDefenderSummaryInfo DefenderSummaryInfo); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class SaveTheWorldUI.FortSquadLandingPageSurvivorSummary
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x88 (0x360 - 0x2D8)
	class UFortSquadLandingPageSurvivorSummary : public UCommonUserWidget	
	{
	public:
		UFortSquadStatValueWithIcon* FortitudeStatValue; // 0x2D8(0x8)
		UFortSquadStatValueWithIcon* OffenseStatValue; // 0x2E0(0x8)
		UFortSquadStatValueWithIcon* ResistanceStatValue; // 0x2E8(0x8)
		UFortSquadStatValueWithIcon* TechStatValue; // 0x2F0(0x8)
		unsigned char UnknownData00_7[0x68]; // 0x2F8(0x68) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortSquadLandingPageSurvivorSummary");
			return ret;
		}

		void HandleClearSetBonusSummaryLineItemsBP(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleAddSetBonusSummaryLineItemBP(FFortAttributeModifierAccumulation AttributeModifierAccumulation); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class SaveTheWorldUI.FortSquadManagementItemViewContextBase
	// Inherited from UObject
	// Size: 0xD0 (0xF8 - 0x28)
	class UFortSquadManagementItemViewContextBase : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0xD0]; // 0x28(0xD0) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_1[0x8]; // 0xF8(0x8) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_1[0x8]; // 0xF8(0x8) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_1[0x8]; // 0x100(0x8) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_1[0x8]; // 0x100(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortItemViewContext_ExpeditionSquadSlotItemPicker");
			return ret;
		}
	};


	// Class SaveTheWorldUI.FortSquadManagementScreenBase
	// Inherited from UFortActivatablePanel -> UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x120 (0x680 - 0x560)
	class UFortSquadManagementScreenBase : public UFortActivatablePanel	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0x560(0x10) UNKNOWN PROPERTY
		bool bReadOnlyModeWIFE; // 0x570(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x571(0x7) UNKNOWN PROPERTY
		UFortSquadStatsWidgetBase* SquadStatsWidget; // 0x578(0x8)
		UFortSquadSlotsView* SquadSlotsView; // 0x580(0x8)
		UFortSquadSlotDetailsPanel* SelectedSlotDetailsPanel; // 0x588(0x8)
		UFortSquadSlotItemPicker* SelectedSlotItemPicker; // 0x590(0x8)
		FDataTableRowHandle InspectInputActionRowHandle; // 0x598(0x10)
		FDataTableRowHandle ManageInputActionRowHandle; // 0x5A8(0x10)
		FDataTableRowHandle BackInputActionRowHandle; // 0x5B8(0x10)
		FDataTableRowHandle InventoryInputActionRowHandle; // 0x5C8(0x10)
		FDataTableRowHandle InventoryCloseInputActionRowHandle; // 0x5D8(0x10)
		FDataTableRowHandle ClosePickerInputActionRowHandle; // 0x5E8(0x10)
		FDataTableRowHandle SelectPickerSlotActionRowHandle; // 0x5F8(0x10)
		FDataTableRowHandle CyclePickerSortActionRowHandle; // 0x608(0x10)
		FDataTableRowHandle PreviousSquadActionRowHandle; // 0x618(0x10)
		FDataTableRowHandle NextSquadActionRowHandle; // 0x628(0x10)
		FDataTableRowHandle ClearAllActionRowHandle; // 0x638(0x10)
		FDataTableRowHandle HelpScreenActionRowHandle; // 0x648(0x10)
		UClass* DisableAutoSlottingToClearSquadPromptAction; // 0x658(0x8)
		unsigned char UnknownData02_6[0x10]; // 0x660(0x10) UNKNOWN PROPERTY
		UFortItemViewContext_SquadSlotsView* ItemViewContext_SquadSlotsView; // 0x670(0x8)
		UFortItemViewContext_SquadSlotItemPicker* ItemViewContext_SquadSlotItemPicker; // 0x678(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortSquadManagementScreenBase");
			return ret;
		}

		bool TryGetStaticSquadDataBP(FHomebaseSquad& OutSquadData); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751DB27F4(relative to base address)
		bool TryGetSquadTeamAttribute(FGameplayAttribute& OutGameplayAttribute); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751DB2710(relative to base address)
		bool TryGetSquadMainAttribute(FGameplayAttribute& OutGameplayAttribute); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751DB2580(relative to base address)
		bool TryGetAttributeValueFromSquad(float& OutValue, FGameplayAttribute& Attribute); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751DB2148(relative to base address)
		void ShowWarningReadOnlyWIFE(bool Force); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetupInputHandlers(); // Flags: Native|Protected|BlueprintCallable, Memory Exec: 0x7FF74D8BB404(relative to base address)
		void SetIdOfSquadToManageBP(FName& SquadID); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751DB1110(relative to base address)
		void SelectSquadWithOffset(int32_t Offset); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751DB0544(relative to base address)
		void SelectPreviousSquad(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751DB04AC(relative to base address)
		void SelectNextSquad(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751DB0494(relative to base address)
		void NavigateToSquadSlot(int32_t SquadSlotIndex); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751DB00AC(relative to base address)
		bool IsSquadSlotItemPickerOpen(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751DAFE20(relative to base address)
		bool IsScreenWIFE(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751DAFDBC(relative to base address)
		void HandleViewInAll(int32_t SquadSlotIndex); // Flags: Final|Native|Private, Memory Exec: 0x7FF751DAF8BC(relative to base address)
		void HandleSquadStateChanged(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleSquadSlotPickerShown(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleSquadSlotPickerHidden(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleShouldAutoSlotSurvivorSquadsChanged(); // Flags: Final|Native|Private, Memory Exec: 0x7FF74D8BB404(relative to base address)
		void HandleSelectPickerSlotInputAction(); // Flags: Final|Native|Private, Memory Exec: 0x7FF751DAF7E4(relative to base address)
		void HandlePreviousSquadInputAction(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandlePickerSelectionCommitted(UFortItem* CommittedItem); // Flags: Final|Native|Private, Memory Exec: 0x7FF751DAF52C(relative to base address)
		void HandlePickerSelectionChanged(UFortItem* SelectedItem); // Flags: Final|Native|Private, Memory Exec: 0x7FF751DAF4AC(relative to base address)
		void HandleOpenSquadSlot(int32_t SquadSlotIndex); // Flags: Final|Native|Private, Memory Exec: 0x7FF751DAF418(relative to base address)
		void HandleNextSquadInputAction(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleManageInputAction(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751DAEF04(relative to base address)
		void HandleInventoryInputAction(); // Flags: Final|Native|Private, Memory Exec: 0x7FF751DAEE80(relative to base address)
		void HandleInspectInputAction(); // Flags: Final|Native|Private, Memory Exec: 0x7FF751DAEE6C(relative to base address)
		void HandleDifferentSquadSlotSelected(int32_t SquadSlotIndex); // Flags: Native|Protected, Memory Exec: 0x7FF751DAECF8(relative to base address)
		void HandleDifferentSquadSetBP(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleCyclePickerSortInputAction(); // Flags: Final|Native|Private, Memory Exec: 0x7FF751DAECE4(relative to base address)
		void HandleClosePickerInputAction(); // Flags: Final|Native|Private, Memory Exec: 0x7FF751DAECD0(relative to base address)
		void HandleBackInputAction(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751DAE9B8(relative to base address)
		int32_t GetNumUnlockedSquads(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751DAE6EC(relative to base address)
		FName GetIdOfSquadToManageBP(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751DAE300(relative to base address)
		void ClearSquad(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751DAD56C(relative to base address)
	};


	// Class SaveTheWorldUI.FortSquadSlotDetailsPanel
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x58 (0x330 - 0x2D8)
	class UFortSquadSlotDetailsPanel : public UCommonUserWidget	
	{
	public:
		unsigned char UnknownData00_3[0x20]; // 0x2D8(0x20) UNKNOWN PROPERTY
		UFortSquadSlotItemDetailsHostPanel* ItemDetailsPanel; // 0x2F8(0x8)
		TScriptInterface<Class> ItemViewContext; // 0x300(0x10)
		unsigned char UnknownData01_7[0x20]; // 0x310(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortSquadSlotDetailsPanel");
			return ret;
		}

		bool TryGetItemToPreviewInSlot(UFortItem* OutItemToPreviewInSlot); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751DB227C(relative to base address)
		void SetScrollWidget(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751DB1CFC(relative to base address)
		void SetIdOfSquadSlotToManageBP(FName& SquadID, int32_t SquadSlotIndex); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751DB0AB0(relative to base address)
		bool IsSquadSlotLockedBP(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751DAFE44(relative to base address)
		void HandleSquadSlotStateChangedBP(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleSquadSlotRestrictionFactorsChangedBP(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleDifferentSquadSlotSetBP(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		TArray GetSlottingRestrictionReasons(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751DAE89C(relative to base address)
		UFortItem GetItemInSquadSlotBP(ULocalPlayer* LocalPlayer); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751DAE360(relative to base address)
		void GetIdOfSquadSlotToManageBP(FName& OutSquadId, int32_t& OutSquadSlotIndex); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751DADC70(relative to base address)
	};


	// Class SaveTheWorldUI.FortSquadSlotItemDetailElementWidget
	// Inherited from UFortItemDetailElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x350 - 0x330)
	class UFortSquadSlotItemDetailElementWidget : public UFortItemDetailElementWidget	
	{
	public:
		unsigned char UnknownData00_1[0x20]; // 0x330(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortSquadSlotItemDetailElementWidget");
			return ret;
		}

		void SetIdOfSquadSlotToManageBP(FName& SquadID, int32_t SquadSlotIndex); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751DB0BC0(relative to base address)
		bool IsSquadSlotLockedBP(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751DAFE88(relative to base address)
		void HandlePostDifferentSquadSlotSetBP(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UFortItem GetItemInSquadSlotBP(ULocalPlayer* LocalPlayer); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751DAE418(relative to base address)
		void GetIdOfSquadSlotToManageBP(FName& OutSquadId, int32_t& OutSquadSlotIndex); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751DADD88(relative to base address)
	};


	// Class SaveTheWorldUI.FortSquadSlotItemDetailsHostPanel
	// Inherited from UFortItemDetailsHostPanel -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x3D8 - 0x3B8)
	class UFortSquadSlotItemDetailsHostPanel : public UFortItemDetailsHostPanel	
	{
	public:
		unsigned char UnknownData00_1[0x20]; // 0x3B8(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortSquadSlotItemDetailsHostPanel");
			return ret;
		}

		void SetIdOfSquadSlotToManageBP(FName& SquadID, int32_t SquadSlotIndex); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751DB0CD0(relative to base address)
		bool IsSquadSlotLockedBP(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751DAFECC(relative to base address)
		UFortItem GetItemInSquadSlotBP(ULocalPlayer* LocalPlayer); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751DAE4BC(relative to base address)
		void GetIdOfSquadSlotToManageBP(FName& OutSquadId, int32_t& OutSquadSlotIndex); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751DADEA0(relative to base address)
	};


	// Class SaveTheWorldUI.FortSquadSlotItemPicker
	// Inherited from UFortItemPickerBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xC8 (0x4D8 - 0x410)
	class UFortSquadSlotItemPicker : public UFortItemPickerBase	
	{
	public:
		unsigned char UnknownData00_3[0x38]; // 0x410(0x38) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnSortChanged; // 0x448(0x10)
		unsigned char UnknownData01_7[0x80]; // 0x458(0x80) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortSquadSlotItemPicker");
			return ret;
		}

		void SetSortTypes(FSquadSlotSortTypes SquadSlotSortTypes); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751DB1DA4(relative to base address)
		void SetIdOfSquadSlotToManageBP(FName& SquadID, int32_t SquadSlotIndex); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751DB0DE0(relative to base address)
		void GetIdOfSquadSlotToManageBP(FName& OutSquadId, int32_t& OutSquadSlotIndex); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751DADFB8(relative to base address)
		void FortSquadSlotSortChanged__DelegateSignature(ESquadSlotSortType CurrentSortType, ESquadSlotType SquadSlotType); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class SaveTheWorldUI.FortSquadSlotItemPickerTileButton
	// Inherited from UFortItemTileButton -> UCommonButtonLegacy -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x18 (0x1430 - 0x1418)
	class UFortSquadSlotItemPickerTileButton : public UFortItemTileButton	
	{
	public:
		unsigned char UnknownData00_1[0x18]; // 0x1418(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortSquadSlotItemPickerTileButton");
			return ret;
		}

		void HandleSlottingRestrictionReasonsChanged(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleItemSlottedToDifferentSquad(FHomebaseSquadSlotId& SquadSlotId); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		TArray GetSlottingRestrictionReasons(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751DAE8D8(relative to base address)
	};


	// Class SaveTheWorldUI.FortSquadSlotSelectorPopupMenu
	// Inherited from UFortPopupMenu_Legacy -> UCommonPopupMenuLegacy -> UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x550 - 0x548)
	class UFortSquadSlotSelectorPopupMenu : public UFortPopupMenu_Legacy	
	{
	public:
		bool bReadOnlyModeWIFE; // 0x548(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x549(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortSquadSlotSelectorPopupMenu");
			return ret;
		}

		bool IsScreenWIFE(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751DAFDBC(relative to base address)
		UFortSquadSlotSelectorButton GetHostButton(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751DADAD8(relative to base address)
	};


	// Class SaveTheWorldUI.FortSquadSlotSurvivorTraitMatchesDetailWidget
	// Inherited from UFortSquadSlotItemDetailElementWidget -> UFortItemDetailElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x28 (0x378 - 0x350)
	class UFortSquadSlotSurvivorTraitMatchesDetailWidget : public UFortSquadSlotItemDetailElementWidget	
	{
	public:
		bool IsSquadLeaderSlot; // 0x350(0x1)
		bool LeaderMatchesSquadType; // 0x351(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x352(0x2) UNKNOWN PROPERTY
		int32_t SubordinatePersonalityMatchCount; // 0x354(0x4)
		bool MatchesLeaderPersonality; // 0x358(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x359(0x3) UNKNOWN PROPERTY
		int32_t MatchingSetBonusCount; // 0x35C(0x4)
		int32_t SetBonusSize; // 0x360(0x4)
		unsigned char UnknownData02_7[0x14]; // 0x364(0x14) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortSquadSlotSurvivorTraitMatchesDetailWidget");
			return ret;
		}

		void HandleTraitValuesUpdatedBP(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class SaveTheWorldUI.FortSquadSlotSelectorButton
	// Inherited from UCommonButtonLegacy -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x80 (0x1460 - 0x13E0)
	class UFortSquadSlotSelectorButton : public UCommonButtonLegacy	
	{
	public:
		unsigned char UnknownData00_3[0x20]; // 0x13E0(0x20) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnRequestOpenSquadSlotEvent; // 0x1400(0x10)
		FMulticastInlineDelegate OnRequestViewInAllEvent; // 0x1410(0x10)
		UFortSquadSlotWidget* SquadSlotWidget; // 0x1420(0x8)
		UMenuAnchor* PopupMenuAnchor; // 0x1428(0x8)
		TScriptInterface<Class> ItemViewContext; // 0x1430(0x10)
		unsigned char UnknownData01_6[0x18]; // 0x1440(0x18) UNKNOWN PROPERTY
		UCommonPopupMenuLegacy* PopupMenu; // 0x1458(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortSquadSlotSelectorButton");
			return ret;
		}

		void ViewInAll(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751DB2CF4(relative to base address)
		void SquadSlotWidgetUpdated(); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF74F495B90(relative to base address)
		void SetIdOfSquadSlotToManageBP(FName& SquadID, int32_t SquadSlotIndex); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751DB0EF0(relative to base address)
		void OpenSquadSlot(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751DB012C(relative to base address)
		bool IsSquadSlotLockedBP(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751DAFF10(relative to base address)
		void HandlePreDifferentSquadSlotSetBP(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandlePostDifferentSquadSlotSetBP(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UUserWidget GetPopupMenu(); // Flags: Final|Native|Private, Memory Exec: 0x7FF751DAE730(relative to base address)
		bool GetInPreviewMode(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751DAE330(relative to base address)
		void GetIdOfSquadSlotToManageBP(FName& OutSquadId, int32_t& OutSquadSlotIndex); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751DAE0D0(relative to base address)
	};


	// Class SaveTheWorldUI.FortSquadSlotsView
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xF8 (0x3D0 - 0x2D8)
	class UFortSquadSlotsView : public UCommonUserWidget	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0x2D8(0x10) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnDifferentSquadSlotSelectedEvent; // 0x2E8(0x10)
		FMulticastInlineDelegate OnRequestOpenSquadSlotEvent; // 0x2F8(0x10)
		FMulticastInlineDelegate OnRequestViewInAllEvent; // 0x308(0x10)
		bool bReadOnlyModeWIFE; // 0x318(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x319(0x3) UNKNOWN PROPERTY
		int32_t IndexOfSelectedSquadSlot; // 0x31C(0x4)
		bool bSlotButtonsRequireSelection; // 0x320(0x1)
		bool bInPreviewMode; // 0x321(0x1)
		unsigned char UnknownData02_6[0x6]; // 0x322(0x6) UNKNOWN PROPERTY
		TMap<ESquadSlotType, FSquadSlotSortTypes> SquadSlotSortTypesMap; // 0x328(0x50)
		UClass* DisableAutoSlottingToOpenSquadSlotPromptAction; // 0x378(0x8)
		UFortCommittableButtonGroup* SquadSlotButtonGroup; // 0x380(0x8)
		unsigned char UnknownData03_6[0x30]; // 0x388(0x30) UNKNOWN PROPERTY
		TScriptInterface<Class> ItemViewContext; // 0x3B8(0x10)
		unsigned char UnknownData04_7[0x8]; // 0x3C8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortSquadSlotsView");
			return ret;
		}

		bool TryGetStaticSquadDataBP(FHomebaseSquad& OutSquadData); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751DB2974(relative to base address)
		bool TryGetSelectedSquadSlotSortTypes(FSquadSlotSortTypes& OutSlotSortTypes); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751DB24D4(relative to base address)
		void SetIsSelectionLocked(bool ShouldSelectionBeLocked); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751DB16D8(relative to base address)
		void SetInPreviewMode(bool bPreview); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751DB13D8(relative to base address)
		void SetIdOfSquadToManageBP(FName& SquadID); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751DB1230(relative to base address)
		void SelectSlot(int32_t SquadSlotIndex); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751DB04C4(relative to base address)
		void OnDifferentSquadSlotSelected__DelegateSignature(int32_t SquadSlotIndex); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleSelectedButtonChanged(UCommonButtonLegacy* SelectedButton, int32_t ButtonIndex); // Flags: Final|Native|Private, Memory Exec: 0x7FF751DAF7F8(relative to base address)
		void HandleRequestViewInAll(int32_t SquadSlotIndex); // Flags: Final|Native|Private, Memory Exec: 0x7FF751DAF764(relative to base address)
		void HandleRequestOpenSquadSlot(int32_t SquadSlotIndex); // Flags: Final|Native|Private, Memory Exec: 0x7FF751DAF6E4(relative to base address)
		void HandleHoveredButtonChanged(UCommonButtonLegacy* HoveredButton, int32_t ButtonIndex); // Flags: Final|Native|Private, Memory Exec: 0x7FF751DAEDA4(relative to base address)
		void HandleButtonDoubleClicked(UCommonButtonLegacy* CommittedButton, int32_t ButtonIndex); // Flags: Final|Native|Private, Memory Exec: 0x7FF751DAEBD0(relative to base address)
		void HandleButtonClicked(UCommonButtonLegacy* CommittedButton, int32_t ButtonIndex); // Flags: Final|Native|Private, Memory Exec: 0x7FF751DAEA58(relative to base address)
		int32_t GetIndexOfSelectedSquadSlot(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751DAE348(relative to base address)
		FName GetIdOfSquadToManageBP(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FE33B48(relative to base address)
		UFortSquadSlotSelectorButton CreateAndAddSquadSlotButton(int32_t SquadSlotIndex, FHomebaseSquadSlot& SquadSlotDefinition, UWidget* OutSquadSlotButtonHost); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class SaveTheWorldUI.FortSquadSlotWidget
	// Inherited from UWidget -> UVisual -> UObject
	// Size: 0x90 (0x1E8 - 0x158)
	class UFortSquadSlotWidget : public UWidget	
	{
	public:
		unsigned char UnknownData00_3[0x20]; // 0x158(0x20) UNKNOWN PROPERTY
		EFortItemCardSize ItemCardSize; // 0x178(0x1)
		unsigned char UnknownData01_6[0x3F]; // 0x179(0x3F) UNKNOWN PROPERTY
		UFortMultiSizeItemCard* SlottedItemCard; // 0x1B8(0x8)
		unsigned char UnknownData02_6[0x8]; // 0x1C0(0x8) UNKNOWN PROPERTY
		TScriptInterface<Class> ItemViewContext; // 0x1C8(0x10)
		unsigned char UnknownData03_7[0x10]; // 0x1D8(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortSquadSlotWidget");
			return ret;
		}

		void SetIdOfSquadSlotToManageBP(FName& SquadID, int32_t SquadSlotIndex); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751DB1000(relative to base address)
		void SetCardSize(EFortItemCardSize CardSize); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751DB0818(relative to base address)
		bool IsSquadSlotLockedBP(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751DAFF34(relative to base address)
		UFortItem GetItemInSquadSlotBP(ULocalPlayer* LocalPlayer); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751DAE560(relative to base address)
		void GetIdOfSquadSlotToManageBP(FName& OutSquadId, int32_t& OutSquadSlotIndex); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751DAE1E8(relative to base address)
	};


	// Class SaveTheWorldUI.FortSquadStatDetailsWidget
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x30 (0x308 - 0x2D8)
	class UFortSquadStatDetailsWidget : public UCommonUserWidget	
	{
	public:
		unsigned char UnknownData00_1[0x30]; // 0x2D8(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortSquadStatDetailsWidget");
			return ret;
		}
	};


	// Class SaveTheWorldUI.FortSquadStatsWidgetBase
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x38 (0x310 - 0x2D8)
	class UFortSquadStatsWidgetBase : public UCommonUserWidget	
	{
	public:
		TArray<UFortAttributeListItem_NUI*> OverviewStats; // 0x2D8(0x10)
		UFortAttributeList_NUI* DetailedStats; // 0x2E8(0x8)
		unsigned char UnknownData00_7[0x20]; // 0x2F0(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortSquadStatsWidgetBase");
			return ret;
		}

		void RequestStatsUpdate(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751DB0450(relative to base address)
		void RequestShowPreviewStats(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751DB043C(relative to base address)
		void HandleSquadSlottingPreviewStateChanged(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandlePowerRatingChanged_BP(bool bHasTeamMebers); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		FUniqueNetIdRepl GetLocalPlayerId(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751DAE604(relative to base address)
	};


	// Class SaveTheWorldUI.FortSquadStatValueWithIcon
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x88 (0x360 - 0x2D8)
	class UFortSquadStatValueWithIcon : public UCommonUserWidget	
	{
	public:
		FGameplayAttribute Attribute; // 0x2D8(0x38)
		FGameplayAttribute TeamAttribute; // 0x310(0x38)
		TEnumAsByte<EFortBrushSize> ImageSize; // 0x348(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x349(0x7) UNKNOWN PROPERTY
		UCommonNumericTextBlock* Value; // 0x350(0x8)
		UImage* Icon; // 0x358(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortSquadStatValueWithIcon");
			return ret;
		}

		void HandleDifferentAttributeSetBP(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class SaveTheWorldUI.FortSquadTypeLandingPageBase
	// Inherited from UFortActivatablePanel -> UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x38 (0x598 - 0x560)
	class UFortSquadTypeLandingPageBase : public UFortActivatablePanel	
	{
	public:
		bool bReadOnlyModeWIFE; // 0x560(0x1)
		EFortHomebaseSquadType SquadType; // 0x561(0x1)
		unsigned char UnknownData00_6[0x6]; // 0x562(0x6) UNKNOWN PROPERTY
		FDataTableRowHandle BackInputActionRowHandle; // 0x568(0x10)
		EFortFrontendInventoryFilter ItemManagementScreenFilter; // 0x578(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x579(0x7) UNKNOWN PROPERTY
		TArray<TWeakObjectPtr> SquadSelectorButtons; // 0x580(0x10)
		unsigned char UnknownData02_7[0x8]; // 0x590(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortSquadTypeLandingPageBase");
			return ret;
		}

		void ShowWarningReadOnlyWIFE(bool Force); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool IsScreenWIFE(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751DAFDBC(relative to base address)
		void HandlePendingNavigationOp(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751DAF498(relative to base address)
		void HandleBackInputAction(bool& bPassThrough); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751DAE9CC(relative to base address)
		UFortSquadSelectorButton CreateAndAddSquadButton(FName& SquadID); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class SaveTheWorldUI.FortStatIcon
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x48 (0x320 - 0x2D8)
	class UFortStatIcon : public UCommonUserWidget	
	{
	public:
		FGameplayAttribute Attribute; // 0x2D8(0x38)
		TEnumAsByte<EFortBrushSize> ImageSize; // 0x310(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x311(0x7) UNKNOWN PROPERTY
		UImage* Icon; // 0x318(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortStatIcon");
			return ret;
		}

		void SetAttribute(FGameplayAttribute& InAttribute); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751DB05C4(relative to base address)
		void HandleDifferentAttributeSetBP(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class SaveTheWorldUI.FortSurvivorSquadManagementScreen
	// Inherited from UFortSquadManagementScreenBase -> UFortActivatablePanel -> UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xE0 (0x760 - 0x680)
	class UFortSurvivorSquadManagementScreen : public UFortSquadManagementScreenBase	
	{
	public:
		UFortSurvivorSquadStatMatchesBase* StatMatchesWidget; // 0x680(0x8)
		unsigned char UnknownData00_7[0xD8]; // 0x688(0xD8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortSurvivorSquadManagementScreen");
			return ret;
		}

		void UpdateCycleButtons(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ShowHelpDialog(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PlayFeedbackForSlottingPerson(UFortWorker* Worker, int32_t SlotIndex, FFortSurvivorSquadSlottingFeedbackData& FeedbackData); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class SaveTheWorldUI.FortSurvivorSquadSelectorButton
	// Inherited from UFortSquadSelectorButton -> UCommonButtonLegacy -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x1420 - 0x1400)
	class UFortSurvivorSquadSelectorButton : public UFortSquadSelectorButton	
	{
	public:
		TArray<FGameplayAttribute> FortStatAttributes; // 0x1400(0x10)
		TArray<FGameplayAttribute> FortTeamStatAttributes; // 0x1410(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortSurvivorSquadSelectorButton");
			return ret;
		}

		bool TryGetSummaryStats(FFortSurvivorSquadSelectorButtonSummaryStats& OutSummaryStats); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751DB2A44(relative to base address)
		bool TryGetSquadMembers(TArray<UFortWorker*>& OutSquadMembers); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751DB2664(relative to base address)
		bool TryGetPersonalityMatches(FFortSurvivorSquadSelectorButtonPersonalityMatches& OutPersonalityMatches); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751DB2318(relative to base address)
	};


	// Class SaveTheWorldUI.FortSurvivorSquadStatMatchBase
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x458 (0x730 - 0x2D8)
	class UFortSurvivorSquadStatMatchBase : public UCommonUserWidget	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x2D8(0x8) UNKNOWN PROPERTY
		FFortUISurvivorSquadStatMatch StatMatch; // 0x2E0(0x450)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortSurvivorSquadStatMatchBase");
			return ret;
		}

		void OnStatMatchUpdated(FFortUISurvivorSquadStatMatch UpdatedMatch); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class SaveTheWorldUI.FortSurvivorSquadStatMatchesBase
	// Inherited from UFortSquadStatDetailsWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x30 (0x338 - 0x308)
	class UFortSurvivorSquadStatMatchesBase : public UFortSquadStatDetailsWidget	
	{
	public:
		UClass* StatMatchClass; // 0x308(0x8)
		bool bSummaryView; // 0x310(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x311(0x7) UNKNOWN PROPERTY
		TArray<UFortSurvivorSquadStatMatchBase*> StatMatches; // 0x318(0x10)
		unsigned char UnknownData01_7[0x10]; // 0x328(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortSurvivorSquadStatMatchesBase");
			return ret;
		}

		bool TryGetStaticSquadDataBP(FHomebaseSquad& OutSquadData); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751DB2974(relative to base address)
		void SetSummaryView(bool bInSummaryView); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751DC9C58(relative to base address)
		void SetIdOfSquadToManageBP(FName& SquadID); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751DB1230(relative to base address)
		void HandleDifferentSquadSetBP(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		FName GetIdOfSquadToManageBP(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FE33B48(relative to base address)
		void AddStatMatch(UFortSurvivorSquadStatMatchBase* SetBonus); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class SaveTheWorldUI.FortSurvivorSquadSummaryStatItem
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x2F8 - 0x2D8)
	class UFortSurvivorSquadSummaryStatItem : public UCommonUserWidget	
	{
	public:
		TEnumAsByte<EFortBrushSize> ImageSize; // 0x2D8(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x2D9(0x7) UNKNOWN PROPERTY
		UImage* Icon; // 0x2E0(0x8)
		UCommonTextBlock* Value; // 0x2E8(0x8)
		UCommonTextBlock* Name; // 0x2F0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortSurvivorSquadSummaryStatItem");
			return ret;
		}

		void SetAttributeModifierAccumulation(FFortAttributeModifierAccumulation& Accumulation); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751DC9A14(relative to base address)
	};


	// Class SaveTheWorldUI.FortWorkerSetBonusIcon
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x2E8 - 0x2D8)
	class UFortWorkerSetBonusIcon : public UCommonUserWidget	
	{
	public:
		FGameplayTag GameplayTag; // 0x2D8(0x4)
		TEnumAsByte<EFortBrushSize> ImageSize; // 0x2DC(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x2DD(0x3) UNKNOWN PROPERTY
		UImage* Icon; // 0x2E0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortWorkerSetBonusIcon");
			return ret;
		}

		void SetGameplayTag(FGameplayTag& InGameplayTag); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751DC9AF4(relative to base address)
		void HandleDifferentGameplayTagSetBP(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class SaveTheWorldUI.FortSelectableAttributeListItem
	// Inherited from UCommonButtonLegacy -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x13F0 - 0x13E0)
	class UFortSelectableAttributeListItem : public UCommonButtonLegacy	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x13E0(0x8) UNKNOWN PROPERTY
		UFortAttributeListItem_NUI* AttributeListItem; // 0x13E8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortSelectableAttributeListItem");
			return ret;
		}
	};


	// Class SaveTheWorldUI.FortStatsOverviewDetailsBase
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x38 (0x310 - 0x2D8)
	class UFortStatsOverviewDetailsBase : public UCommonUserWidget	
	{
	public:
		TArray<UFortAttributeListItem_NUI*> OverviewStats; // 0x2D8(0x10)
		UFortAttributeList_NUI* DetailedStats; // 0x2E8(0x8)
		unsigned char UnknownData00_7[0x20]; // 0x2F0(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortStatsOverviewDetailsBase");
			return ret;
		}

		void RequestStatsUpdate(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751DC9A00(relative to base address)
		void ListenForChanges(bool bListen); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751DC9718(relative to base address)
		FUniqueNetIdRepl GetLocalPlayerId(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751DAE604(relative to base address)
	};


	// Class SaveTheWorldUI.FortLlamaStoreData
	// Inherited from UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x48 (0x78 - 0x30)
	class UFortLlamaStoreData : public UPrimaryDataAsset	
	{
	public:
		TArray<FText> RandomLoadingTexts; // 0x30(0x10)
		FName NotEnoughCurrencyDialogCloseAction; // 0x40(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x44(0x4) UNKNOWN PROPERTY
		UClass* InspectWidgetClass; // 0x48(0x8)
		float ShowOfferDelay; // 0x50(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x54(0x4) UNKNOWN PROPERTY
		UClass* StoreOpeningCardPackClass; // 0x58(0x8)
		UClass* StoreOpeningCardPackClass_Legacy; // 0x60(0x8)
		UClass* UnopenedCardpacksModalClass; // 0x68(0x8)
		UClass* UnopenedCardpacksModalClass_Legacy; // 0x70(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortLlamaStoreData");
			return ret;
		}
	};


	// Class SaveTheWorldUI.FortLlamaStoreBase
	// Inherited from UFortDirectAcquisitionWidgetBase -> UFortMtxStoreRootBase -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xA0 (0x578 - 0x4D8)
	class UFortLlamaStoreBase : public UFortDirectAcquisitionWidgetBase	
	{
	public:
		TArray<FOfferGroup> OfferCategoriesToDisplay; // 0x4D8(0x10)
		FDataTableRowHandle TencentDetailsActionData; // 0x4E8(0x10)
		FDataTableRowHandle AddVBucksActionData; // 0x4F8(0x10)
		bool bShouldShowAddVBucksAction; // 0x508(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x509(0x7) UNKNOWN PROPERTY
		UDynamicEntryBox* OfferEntryBox; // 0x510(0x8)
		UCommonButtonGroupBase* OfferButtonGroup; // 0x518(0x8)
		UFortLlamaStoreDetailsBase* OfferDetails; // 0x520(0x8)
		UFortLlamaStoreData* StoreData; // 0x528(0x8)
		UCommonButtonBase* Button_UnopenedLlamas; // 0x530(0x8)
		UFortLlamaStoreOfferInfo* PendingPurchaseOffer; // 0x538(0x8)
		bool bHideSoldOffers; // 0x540(0x1)
		unsigned char UnknownData01_7[0x37]; // 0x541(0x37) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortLlamaStoreBase");
			return ret;
		}

		void SwapToCardEnterState(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetupFocus(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751DC9CD8(relative to base address)
		void OnStoreStateChanged(EFortStoreState NewStoreState); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751DC98B0(relative to base address)
		void OnStorePurchaseCompleted(); // Flags: Final|Native|Private, Memory Exec: 0x7FF751DC9888(relative to base address)
		void HandleTencentDetails(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleAddVBucks(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class SaveTheWorldUI.FortLlamaStoreBase_Legacy
	// Inherited from UFortDirectAcquisitionWidgetBase_Legacy -> UFortMtxStoreRootBase_Legacy -> UFortActivatablePanel -> UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x78 (0x6B8 - 0x640)
	class UFortLlamaStoreBase_Legacy : public UFortDirectAcquisitionWidgetBase_Legacy	
	{
	public:
		TArray<FOfferGroup> OfferCategoriesToDisplay; // 0x640(0x10)
		UDynamicEntryBox* OfferEntryBox; // 0x650(0x8)
		UCommonButtonGroupLegacy* OfferButtonGroup; // 0x658(0x8)
		UFortLlamaStoreDetailsBase* OfferDetails; // 0x660(0x8)
		UFortLlamaStoreData* StoreData; // 0x668(0x8)
		UCommonButtonLegacy* Button_UnopenedLlamas; // 0x670(0x8)
		UFortLlamaStoreOfferInfo* PendingPurchaseOffer; // 0x678(0x8)
		UCommonActivatablePanelLegacy* StoreOpeningCardPack; // 0x680(0x8)
		bool bHideSoldOffers; // 0x688(0x1)
		unsigned char UnknownData00_7[0x2F]; // 0x689(0x2F) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortLlamaStoreBase_Legacy");
			return ret;
		}

		void SwapToCardEnterState(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetupFocus(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751DC9CEC(relative to base address)
		void OnStoreStateChanged(EFortStoreState NewStoreState); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751DC9930(relative to base address)
		void OnStorePurchaseCompleted(); // Flags: Final|Native|Private, Memory Exec: 0x7FF751DC989C(relative to base address)
	};


	// Class SaveTheWorldUI.FortLlamaStoreDetailsBase
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x2F8 - 0x2D8)
	class UFortLlamaStoreDetailsBase : public UCommonUserWidget	
	{
	public:
		UFortStoreFrontOfferInfo* OfferInfo; // 0x2D8(0x8)
		UCommonTileView* ItemTileView; // 0x2E0(0x8)
		unsigned char UnknownData00_7[0x10]; // 0x2E8(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortLlamaStoreDetailsBase");
			return ret;
		}

		void StartUpgradingToSilver(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void StartUpgradingToGold(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetScrollWidget(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751DC9C30(relative to base address)
		void OnOfferInfoChanged(int32_t CurrentOfferRarity); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		int32_t GetNotInCollectionBookCount(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750075EC8(relative to base address)
		int32_t GetNewItemCount(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750076B80(relative to base address)
		int32_t GetChoiceItemCount(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FEB20F0(relative to base address)
	};


	// Class SaveTheWorldUI.FortLlamaStoreInspectionScreen
	// Inherited from UFortStoreFrontOfferDetailsWidgetBase -> UFortActivatablePanelWithItemPreview -> UFortActivatablePanel -> UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x40 (0x860 - 0x820)
	class UFortLlamaStoreInspectionScreen : public UFortStoreFrontOfferDetailsWidgetBase	
	{
	public:
		UCommonTileView* GrantedItemTileView; // 0x820(0x8)
		UCommonTileView* ChoiceTileView; // 0x828(0x8)
		bool bIsInChoiceViewMode; // 0x830(0x1)
		bool bIsPurchasing; // 0x831(0x1)
		unsigned char UnknownData00_6[0x6]; // 0x832(0x6) UNKNOWN PROPERTY
		FDataTableRowHandle InspectChoiceInputAction; // 0x838(0x10)
		FDataTableRowHandle BackInputAction; // 0x848(0x10)
		unsigned char UnknownData01_7[0x8]; // 0x858(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortLlamaStoreInspectionScreen");
			return ret;
		}

		void SetIsPurchasing(bool bNewIsPurchasing); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751DC9BB0(relative to base address)
		bool IsItemChoicePack(UObject* ItemToCheck); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751DC962C(relative to base address)
		void InspectItem(UObject* ItemToInspect, bool bCanEnterChoiceViewMode); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751DC9440(relative to base address)
		void HandleInspectChoice(bool& bPassThrough); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF751DC91A8(relative to base address)
		void HandleBack(bool& bPassThrough); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751DC9014(relative to base address)
		UFortCardPackItem GetSelectedCardPack(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751DC8D5C(relative to base address)
		bool GetIsPurchasing(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751DC8C54(relative to base address)
		EInputActionState GetInspectChoiceInputState(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751DC8C30(relative to base address)
		void BP_InspectFortItem(UFortItem* ItemToInspect, bool bForChoice); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_CheckViewVaultItem(UFortItem* ItemToCheck); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_BackOutFromItemViewMode(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class SaveTheWorldUI.FortOpenCardPackModal
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x40 (0x430 - 0x3F0)
	class UFortOpenCardPackModal : public UCommonActivatableWidget	
	{
	public:
		UCommonListView* CardPackList; // 0x3F0(0x8)
		UCommonButtonBase* OpenAllButton; // 0x3F8(0x8)
		UCommonButtonBase* CancelButton; // 0x400(0x8)
		FMulticastInlineDelegate BPOnRequestOpenCardPack; // 0x408(0x10)
		unsigned char UnknownData00_7[0x18]; // 0x418(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortOpenCardPackModal");
			return ret;
		}
	};


	// Class SaveTheWorldUI.FortOpenCardPackModal_Legacy
	// Inherited from UFortActivatablePanel -> UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x40 (0x5A0 - 0x560)
	class UFortOpenCardPackModal_Legacy : public UFortActivatablePanel	
	{
	public:
		UCommonListView* CardPackList; // 0x560(0x8)
		UCommonButtonLegacy* OpenAllButton; // 0x568(0x8)
		UCommonButtonLegacy* CancelButton; // 0x570(0x8)
		FMulticastInlineDelegate BPOnRequestOpenCardPack; // 0x578(0x10)
		unsigned char UnknownData00_7[0x18]; // 0x588(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortOpenCardPackModal_Legacy");
			return ret;
		}
	};


	// Class SaveTheWorldUI.StWHUD
	// Inherited from UFortUIStateWidget_STW -> UFortUIStateWidgetBase -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x148 (0x580 - 0x438)
	class UStWHUD : public UFortUIStateWidget_STW	
	{
	public:
		FMulticastInlineDelegate OnSTWHUDMenuStackChanged; // 0x438(0x10)
		UFortPickerData* PickerData; // 0x448(0x8)
		TWeakObjectPtr<UClass*> EmotePickerClass; // 0x450(0x20)
		unsigned char UnknownData00_6[0x8]; // 0x470(0x8) UNKNOWN PROPERTY
		TWeakObjectPtr<UClass*> ManagementTabsScreenClass; // 0x478(0x20)
		TWeakObjectPtr<UClass*> TopBarClass; // 0x498(0x20)
		TWeakObjectPtr<UClass*> PostGameScreenClass; // 0x4B8(0x20)
		TWeakObjectPtr<UClass*> DefenderConfigPanelClass; // 0x4D8(0x20)
		int32_t ReticleExtensionSize; // 0x4F8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4FC(0x4) UNKNOWN PROPERTY
		UOverlay* PersistentHUDContent; // 0x500(0x8)
		UCommonActivatableWidget* TitleBar; // 0x508(0x8)
		UWidgetSwitcher* ContentSwitcher; // 0x510(0x8)
		USpacer* ChatSpacer; // 0x518(0x8)
		TWeakObjectPtr<UClass*> InspectionScreenClass; // 0x520(0x20)
		UFortCraftingBarWidget* CraftingBar; // 0x540(0x8)
		UOverlay* IndicatorContent; // 0x548(0x8)
		unsigned char UnknownData02_6[0x18]; // 0x550(0x18) UNKNOWN PROPERTY
		UFortWeaponReticleExtensionWidgetBase* CurrentCustomReticleExtension; // 0x568(0x8)
		TArray<UFortWeaponReticleExtensionWidgetBase*> RecentReticleExtensions; // 0x570(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.StWHUD");
			return ret;
		}

		void OnHUDScaleChanged(float HUDScale); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnAutoHideBuildingMaterialsChanged(bool bGetAutoHideBuildingMaterials); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void NativeHandleWeaponEquipped(AFortWeapon* NewWeapon, AFortWeapon* PrevWeapon); // Flags: Final|Native|Public, Memory Exec: 0x7FF751DC97C4(relative to base address)
		void HandleZoneCompleted(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751DC942C(relative to base address)
		void HandlePickerOpenRequest(EFortPickerMode Mode, int32_t InitialOption, bool bIgnoreFirstAccept); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751DC9234(relative to base address)
		void HandleManagementTabsOpen_BP(UCommonActivatableWidget* ManagementScreen); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleGameViewportActivationChanged(bool bHasFocus); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74C079284(relative to base address)
		void HandleCursorModeChanged(bool bCursorModeEnabled, FName ActionName, UUserWidget* CursorModeContentWidget); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751DC90A0(relative to base address)
	};


	// Class SaveTheWorldUI.FortTheaterSelect
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x30 (0x420 - 0x3F0)
	class UFortTheaterSelect : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0x3F0(0x10) UNKNOWN PROPERTY
		UOverlay* OverlayMain; // 0x400(0x8)
		unsigned char UnknownData01_6[0x10]; // 0x408(0x10) UNKNOWN PROPERTY
		UFortQuestItemDefinition* DefaultRequiredCompletedQuest; // 0x418(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortTheaterSelect");
			return ret;
		}

		void OnNavigationRight(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnNavigationLeft(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool GetTheaterRecommendedRatingRange(FString UniqueID, int32_t& Minimum, int32_t& Maximum); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751DC8D80(relative to base address)
	};


	// Class SaveTheWorldUI.FortTheaterSelect_Legacy
	// Inherited from UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x30 (0x558 - 0x528)
	class UFortTheaterSelect_Legacy : public UCommonActivatablePanelLegacy	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0x528(0x10) UNKNOWN PROPERTY
		UOverlay* OverlayMain; // 0x538(0x8)
		unsigned char UnknownData01_6[0x10]; // 0x540(0x10) UNKNOWN PROPERTY
		UFortQuestItemDefinition* DefaultRequiredCompletedQuest; // 0x550(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortTheaterSelect_Legacy");
			return ret;
		}

		void OnNavigationRight(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnNavigationLeft(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool GetTheaterRecommendedRatingRange(FString UniqueID, int32_t& Minimum, int32_t& Maximum); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751DC8D80(relative to base address)
	};


	// Class SaveTheWorldUI.FortBangWrapperContentButton
	// Inherited from UCommonButtonLegacy -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x1400 - 0x13E0)
	class UFortBangWrapperContentButton : public UCommonButtonLegacy	
	{
	public:
		unsigned char UnknownData00_1[0x20]; // 0x13E0(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortBangWrapperContentButton");
			return ret;
		}

		void FinishTutorialCallout(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751DC8970(relative to base address)
	};


	// Class SaveTheWorldUI.FortBangWrapperContentWidget
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x18 (0x2F0 - 0x2D8)
	class UFortBangWrapperContentWidget : public UCommonUserWidget	
	{
	public:
		unsigned char UnknownData00_1[0x18]; // 0x2D8(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortBangWrapperContentWidget");
			return ret;
		}

		void FinishTutorialCallout(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751DC898C(relative to base address)
	};


	// Class SaveTheWorldUI.FortHomebaseNodeItemTooltip
	// Inherited from UFortItemTooltip -> UFortTooltip -> UObject
	// Size: 0x20 (0x68 - 0x48)
	class UFortHomebaseNodeItemTooltip : public UFortItemTooltip	
	{
	public:
		unsigned char UnknownData00_1[0x20]; // 0x48(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortHomebaseNodeItemTooltip");
			return ret;
		}
	};


	// Class SaveTheWorldUI.FortUpgradeDetailsBase
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x40 (0x318 - 0x2D8)
	class UFortUpgradeDetailsBase : public UCommonUserWidget	
	{
	public:
		UMediaPlayer* VideoPlayer; // 0x2D8(0x8)
		UFortUpgradeInfo* UpgradeInfo; // 0x2E0(0x8)
		unsigned char UnknownData00_7[0x30]; // 0x2E8(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortUpgradeDetailsBase");
			return ret;
		}

		void RequestPurchaseNode(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751DC99EC(relative to base address)
		void OnUpgradeToDetailChanged(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnShowIcon(UTexture2D* Icon); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnScreenActive(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPurchaseComplete(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class SaveTheWorldUI.FortUpgradeInfo
	// Inherited from UObject
	// Size: 0x70 (0x98 - 0x28)
	class UFortUpgradeInfo : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x20]; // 0x28(0x20) UNKNOWN PROPERTY
		UFortHomebaseNodeItemDefinition* NodeItemDef; // 0x48(0x8)
		unsigned char UnknownData01_7[0x48]; // 0x50(0x48) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortUpgradeInfo");
			return ret;
		}

		bool IsUpgradeUnlocked(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F6A3C7C(relative to base address)
		bool IsPreviewing(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751DC96C4(relative to base address)
		UMediaSource GetVideo(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751DC8FF0(relative to base address)
		int32_t GetUpgradeUnlockLevel(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF748BA0724(relative to base address)
		FText GetTitle(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751DC8F60(relative to base address)
		FText GetNextLevelTitle(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751DC8D20(relative to base address)
		FText GetNextLevelDescription(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751DC8CE4(relative to base address)
		int32_t GetNextLevel(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751DC8CC0(relative to base address)
		int32_t GetMaxLevel(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751DC8CA8(relative to base address)
		FText GetItemName(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751DC8C6C(relative to base address)
		TWeakObjectPtr GetIcon(EUpgradeInfoImageSize ImageSize); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751DC8B84(relative to base address)
		bool GetDisplayAttributes(TArray<FFortDisplayAttribute>& OutDisplayAttributes); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751DC8ADC(relative to base address)
		FText GetDescription(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751DC8A88(relative to base address)
		int32_t GetCurrentLevel(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751DC8A70(relative to base address)
		int32_t GetCost(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751DC89E4(relative to base address)
		void ForwardPreview(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751DC89A8(relative to base address)
		bool CanPreview(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751DC88F8(relative to base address)
		bool CanAffordUpgrade(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751DC88E4(relative to base address)
		void BackwardPreview(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751DC88A8(relative to base address)
	};


	// Class SaveTheWorldUI.FortUpgradeScreenBase
	// Inherited from UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x110 (0x638 - 0x528)
	class UFortUpgradeScreenBase : public UCommonActivatablePanelLegacy	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x528(0x8) UNKNOWN PROPERTY
		UFortTabListWidgetBase* UpgradesTabSelector; // 0x530(0x8)
		UCommonTileView* UpgradesTileView; // 0x538(0x8)
		UCommonLoadGuard* UpgradeTileViewLoadGuard; // 0x540(0x8)
		UFortUpgradeDetailsBase* Details; // 0x548(0x8)
		TMap<FName, EHomebaseNodeType> TabToNodeTypeMap; // 0x550(0x50)
		UFortItemDefinition* UpgradesRespecToken; // 0x5A0(0x8)
		unsigned char UnknownData01_6[0x50]; // 0x5A8(0x50) UNKNOWN PROPERTY
		FDataTableRowHandle RespecInputAction; // 0x5F8(0x10)
		FDataTableRowHandle StartPreviewUpgradesInputAction; // 0x608(0x10)
		FDataTableRowHandle StopPreviewUpgradesInputAction; // 0x618(0x10)
		FDataTableRowHandle BackInputAction; // 0x628(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortUpgradeScreenBase");
			return ret;
		}

		void UseUpgradesRespecToken(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751DC9E08(relative to base address)
		void TogglePreview(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751DC9D00(relative to base address)
		void RefreshInputActionStates(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751DC99D8(relative to base address)
		void RefreshFocus(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751DC99B0(relative to base address)
		void OnUseUpgradesRespecTokenComplete(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnUpgradeInfoChanged(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPurchaseNodeComplete(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool IsPreviewing(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751DC96D8(relative to base address)
		void HandleTabSelected(FName TabID); // Flags: Final|Native|Private, Memory Exec: 0x7FF751DC932C(relative to base address)
		void HandleStopPreview(bool& bPassThrough); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleStartPreview(bool& bPassThrough); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleRespec(bool& bPassThrough); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		int32_t GetUpgradesRespecTokenCount(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751DC8FA8(relative to base address)
		bool CanPreview(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751DC8918(relative to base address)
		void BackAction(bool& bPassThrough); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool AreUpgradesRespecTokensAvailable(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751DC885C(relative to base address)
	};


	// Class SaveTheWorldUI.FortUpgradeScreenBase_Legacy
	// Inherited from UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xC8 (0x5F0 - 0x528)
	class UFortUpgradeScreenBase_Legacy : public UCommonActivatablePanelLegacy	
	{
	public:
		UFortTabListWidgetBase_Legacy* UpgradesTabSelector; // 0x528(0x8)
		UCommonTileView* UpgradesTileView; // 0x530(0x8)
		UCommonLoadGuard* UpgradeTileViewLoadGuard; // 0x538(0x8)
		UFortUpgradeDetailsBase* Details; // 0x540(0x8)
		TMap<FName, EHomebaseNodeType> TabToNodeTypeMap; // 0x548(0x50)
		UFortItemDefinition* UpgradesRespecToken; // 0x598(0x8)
		unsigned char UnknownData00_7[0x50]; // 0x5A0(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortUpgradeScreenBase_Legacy");
			return ret;
		}

		void UseUpgradesRespecToken(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751DC9E1C(relative to base address)
		void TogglePreview(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751DC9D84(relative to base address)
		void RefreshFocus(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751DC99C4(relative to base address)
		void OnUseUpgradesRespecTokenComplete(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnUpgradeInfoChanged(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPurchaseNodeComplete(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool IsPreviewing(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751DC96F8(relative to base address)
		void HandleTabSelected(FName TabID); // Flags: Final|Native|Private, Memory Exec: 0x7FF751DC93AC(relative to base address)
		int32_t GetUpgradesRespecTokenCount(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751DC8FCC(relative to base address)
		bool CanPreview(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751DC8938(relative to base address)
		bool AreUpgradesRespecTokensAvailable(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751DC8880(relative to base address)
	};


	// Class SaveTheWorldUI.FortUpgradeTileBase
	// Inherited from UCommonButtonLegacy -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x13F0 - 0x13E0)
	class UFortUpgradeTileBase : public UCommonButtonLegacy	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x13E0(0x8) UNKNOWN PROPERTY
		UFortUpgradeInfo* UpgradeInfo; // 0x13E8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortUpgradeTileBase");
			return ret;
		}

		void OnDataRefresh(bool bUpgrade); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class SaveTheWorldUI.FortUpgradeTileBase_Legacy
	// Inherited from UCommonButtonLegacy -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x13F0 - 0x13E0)
	class UFortUpgradeTileBase_Legacy : public UCommonButtonLegacy	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x13E0(0x8) UNKNOWN PROPERTY
		UFortUpgradeInfo* UpgradeInfo; // 0x13E8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SaveTheWorldUI.FortUpgradeTileBase_Legacy");
			return ret;
		}

		void OnDataRefresh(bool bUpgrade); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
