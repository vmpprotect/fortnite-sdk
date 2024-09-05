#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: BattlePassS31UI
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class BattlePassS31UI.BattlePassBulkBuyPageS31
	// Inherited from UFortBattlePassBulkBuyPageBase -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x598 - 0x598)
	class UBattlePassBulkBuyPageS31 : public UFortBattlePassBulkBuyPageBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BattlePassS31UI.BattlePassBulkBuyPageS31");
			return ret;
		}
	};


	// Class BattlePassS31UI.BattlePassLandingPageS31
	// Inherited from UBattlePassLandingPageBase -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x68 (0x5B8 - 0x550)
	class UBattlePassLandingPageS31 : public UBattlePassLandingPageBase	
	{
	public:
		UBattlePassLandingPageButton Button_Rewards; // 0x550(0x8)
		UBattlePassLandingPageButton Button_CharacterCustomizer; // 0x558(0x8)
		UBattlePassLandingPageButton Button_BonusRewards; // 0x560(0x8)
		UBattlePassLandingPageButton Button_Quests; // 0x568(0x8)
		UBattlePassLandingPageButton Button_JoinSubscription; // 0x570(0x8)
		UBattlePassLandingPageButton Button_WeeklyRewards; // 0x578(0x8)
		UCommonTextBlock Text_SeasonNumber; // 0x580(0x8)
		UAthenaSeasonItemData_BattleStar SeasonData_BattleStar; // 0x588(0x8)
		unsigned char UnknownData01_7[0x28]; // 0x590(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BattlePassS31UI.BattlePassLandingPageS31");
			return ret;
		}

		void OnBattlePassSubscriptionAllowed(bool bSubscriptionAllowed); // Flags: Event|Public|BlueprintEvent 0x7FF414BF88B8
	};


	// Class BattlePassS31UI.BattlePassRewardPageS31
	// Inherited from UBattlePassRewardPageBase -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x90 (0x5A0 - 0x510)
	class UBattlePassRewardPageS31 : public UBattlePassRewardPageBase	
	{
	public:
		UClass RewardsTrackClass; // 0x510(0x8)
		UFortBattlePassTile FocusedReward; // 0x518(0x8)
		TArray TrackPages; // 0x520(0x10)
		unsigned char UnknownData04_6[0x4]; // 0x530(0x4) UNKNOWN PROPERTY
		ERewardPageType RewardPageType; // 0x534(0x1)
		unsigned char UnknownData05_6[0x3]; // 0x535(0x3) UNKNOWN PROPERTY
		int32_t HoldTileTooltip_ClaimedRewardsToHide; // 0x538(0x4)
		int32_t HoldTileTooltip_ClaimedBattlePassToHide; // 0x53C(0x4)
		int32_t HoldTileTooltip_RequiredBattleStarsToShow; // 0x540(0x4)
		int32_t LevelRequirementUnlockTooltip_RequiredLevel; // 0x544(0x4)
		int32_t ClaimAllRewardsTooltip_RequiredLevelToShow; // 0x548(0x4)
		unsigned char UnknownData06_6[0x4]; // 0x54C(0x4) UNKNOWN PROPERTY
		UCommonAnimatedSwitcher Switcher_RewardTracks; // 0x550(0x8)
		UFortBattlePassTutorialTooltipS31 TutorialTooltip_LevelRequirementUnlock; // 0x558(0x8)
		UFortBattlePassTutorialTooltipS31 TutorialTooltip_ClaimAllRewards; // 0x560(0x8)
		UFortBattlePassTutorialTooltipS31 TutorialTooltip_HoldTile; // 0x568(0x8)
		UAthenaSeasonItemData_BattleStar SeasonData_BattleStar; // 0x570(0x8)
		UBattlePassBulkBuyInputData BulkBuyInputData; // 0x578(0x8)
		UCommonButtonBase Button_NextPage; // 0x580(0x8)
		UCommonButtonBase Button_PreviousPage; // 0x588(0x8)
		unsigned char UnknownData07_7[0x10]; // 0x590(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BattlePassS31UI.BattlePassRewardPageS31");
			return ret;
		}

		void OnPageChanged(int32_t PageNumber, int32_t RewardPageTotal); // Flags: Event|Public|BlueprintEvent 0x7FF414BF8DF8
		void OnLoadingScreenSelectedChanged(bool bIsSelected); // Flags: Event|Protected|BlueprintEvent 0x7FF414BF8D18
		void OnInputMethodChanged(ECommonInputType InputType); // Flags: Event|Protected|BlueprintEvent 0x7FF414BF8C38
		void OnInitForPageType(ERewardPageType InRewardPageType); // Flags: Event|Public|BlueprintEvent 0x7FF414BF8B58
		UWidget HandleRewardTracksBoundaryNavigation(EUINavigation InNavigation); // Flags: Final|Native|Private 0x7FF414BF8A78
		FVaultWorldBackgroundData GetRewardPageBackgroundData(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BF8998
	};


	// Class BattlePassS31UI.BattlePassScreenS31
	// Inherited from UBattlePassScreenBase -> UFortItemPreviewScreen -> UFortActivatablePanel -> UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x530 (0xE68 - 0x938)
	class UBattlePassScreenS31 : public UBattlePassScreenBase	
	{
	public:
		UClass ResourcePurchaseScreenClass; // 0x938(0x8)
		unsigned char UnknownData06_6[0x8]; // 0x940(0x8) UNKNOWN PROPERTY
		UCommonButtonBase Button_Close; // 0x948(0x8)
		UCommonButtonLegacy Button_TouchClose; // 0x950(0x8)
		UCommonButtonBase Button_ToggleViewDetails; // 0x958(0x8)
		UCommonButtonBase Button_ReplayTrailer; // 0x960(0x8)
		UCommonButtonBase Button_ReplayTrailer_Mobile; // 0x968(0x8)
		UCommonButtonBase Button_ShowAbout; // 0x970(0x8)
		UCommonButtonBase Button_RewardDetails; // 0x978(0x8)
		UCommonButtonBase Button_ShowAbout_Mobile; // 0x980(0x8)
		UCommonButtonBase Button_ShowAboutCustomization; // 0x988(0x8)
		UCommonButtonBase Button_ShowAboutCustomization_Mobile; // 0x990(0x8)
		UCommonButtonBase Button_BulkBuyRewards; // 0x998(0x8)
		UCommonButtonBase Button_PageComplete; // 0x9A0(0x8)
		UCommonButtonBase Button_GiftBattlePass; // 0x9A8(0x8)
		UCommonVisibilitySwitcher VisibilitySwitcher_PlatformBasedButtons; // 0x9B0(0x8)
		UFortBattlePassResourcesWidgetBase BattlePassCurrencyPanel; // 0x9B8(0x8)
		UAthenaExclusiveRewardBanner AthenaExclusiveRewardBanner; // 0x9C0(0x8)
		UCommonTextBlock Text_Description; // 0x9C8(0x8)
		UCommonTextBlock Text_ItemName; // 0x9D0(0x8)
		UAthenaRewardItemTypeRarityTag ItemRewardTag; // 0x9D8(0x8)
		UCommonTextBlock Text_SetDetails; // 0x9E0(0x8)
		UWidgetSwitcher Switcher_PrerequisiteInfo; // 0x9E8(0x8)
		UCommonTextBlock Text_Prerequisite; // 0x9F0(0x8)
		UWidget Widget_PrerequisiteProgress; // 0x9F8(0x8)
		UWidget Widget_LevelUpMessageFree; // 0xA00(0x8)
		UWidget Widget_LevelUpMessagePremium; // 0xA08(0x8)
		UWidget Widget_CustomResourceMessage; // 0xA10(0x8)
		UWidgetSwitcher Switcher_PrimaryAction; // 0xA18(0x8)
		UFortCTAButton Button_BuyLevels; // 0xA20(0x8)
		UFortCTAButton Button_BuyBattlePass; // 0xA28(0x8)
		UFortCTAButton Button_ClaimReward; // 0xA30(0x8)
		UCommonButtonBase Button_ViewQuests; // 0xA38(0x8)
		UCommonButtonBase Button_PreviewLoadingScreen; // 0xA40(0x8)
		UFortDynamicEntryBox ItemVMCards; // 0xA48(0x8)
		UBorder Tag_RequiresBP; // 0xA50(0x8)
		UBorder Tag_PageLocked; // 0xA58(0x8)
		UBorder Tag_BaseItem; // 0xA60(0x8)
		UBorder Tag_Prerequisite; // 0xA68(0x8)
		UBorder Tag_CompletePage; // 0xA70(0x8)
		UBorder Tag_NotEnough_Currency; // 0xA78(0x8)
		UBorder Tag_Cost; // 0xA80(0x8)
		UBorder Tag_Owned; // 0xA88(0x8)
		UBorder Tag_Delayed; // 0xA90(0x8)
		FGameplayTag QuestCategoryParentTag; // 0xA98(0x4)
		unsigned char UnknownData07_6[0x4]; // 0xA9C(0x4) UNKNOWN PROPERTY
		UClass PreviewLoadingScreenWidgetClass; // 0xAA0(0x8)
		unsigned char UnknownData08_6[0x58]; // 0xAA8(0x58) UNKNOWN PROPERTY
		UAthenaSeasonItemData_BattleStar SeasonData_BattleStar; // 0xB00(0x8)
		UAthenaSeasonItemEntryBase CurrentSelectedEntry; // 0xB08(0x8)
		TArray SwitcherSubPageTypes; // 0xB10(0x10)
		UCommonVisibilitySwitcher VisibilitySwitcher_SubPage; // 0xB20(0x8)
		unsigned char UnknownData09_6[0x108]; // 0xB28(0x108) UNKNOWN PROPERTY
		UFortItemDefinition SeasonalBaseCustomizationItem; // 0xC30(0x8)
		bool bHasSubscription; // 0xC38(0x1)
		unsigned char UnknownData10_6[0x7]; // 0xC39(0x7) UNKNOWN PROPERTY
		UFortBattlePassTutorialTooltipS31 TutorialTooltip_BattleStars; // 0xC40(0x8)
		UFortBattlePassTutorialTooltipS31 TutorialTooltip_StylePoints; // 0xC48(0x8)
		UFortSwipePanel SwipePanel_Navigation; // 0xC50(0x8)
		unsigned char UnknownData11_6[0x1C0]; // 0xC58(0x1C0) UNKNOWN PROPERTY
		TMap FeatureButtons; // 0xE18(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BattlePassS31UI.BattlePassScreenS31");
			return ret;
		}

		void SetFocusToFirstItemDetailsCard(); // Flags: Event|Protected|BlueprintEvent 0x7FF414BFAE58
		void OverviewShowAnimationFinished(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BFAD78
		void OnUpdateStatusBar(FText& StatusText, EBattlePassStatusBarTypeS31& BarType); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414BFAC98
		void OnUpdateOwnedOrEquippedTag(FText& StatusText); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414BFABB8
		void OnUpdateBattlePassRequiredBar(bool bPassRequiredVisible); // Flags: Event|Protected|BlueprintEvent 0x7FF414BFAAD8
		void OnTransitionItemDetails(bool bTransitionForward); // Flags: Event|Protected|BlueprintEvent 0x7FF414BFA9F8
		void OnSetWeeklyRewardsInfo(FTimespan& DelayTimespan, int32_t AvailableRewards, int32_t OwnedRewards, int32_t TotalRewards, int32_t AvailablePages, int32_t CompletedPages, int32_t TotalPages); // Flags: Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 0x7FF414BFA918
		void OnSetWarningToolTip(ERewardWarningTooltipType31& WarningTooltipType, FText& Description); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414BFA838
		void OnSetResourcePrice(int32_t Cost, UFortPersistentResourceItemDefinition PersistentResource); // Flags: Event|Protected|BlueprintEvent 0x7FF414BFA758
		void OnSetQuestRewardsInfo(FTimespan& DelayTimespan, int32_t OwnedRewards, int32_t TotalRewards, int32_t CompletedPages, int32_t TotalPages); // Flags: Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 0x7FF414BFA678
		void OnSetPrerequisiteInfo(FText& Description, int32_t CurrentAmount, int32_t NeededAmount, EBattlePassRewardPrerequisiteType PrerequisiteType, bool bShowPrerequisiteLock); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414BFA598
		void OnSetItemPrice(int32_t Cost, EBattlePassCurrencyType CurrencyType); // Flags: Event|Protected|BlueprintEvent 0x7FF414BFA4B8
		void OnSetEquipButtonEnable(bool bIsEnable); // Flags: Event|Protected|BlueprintEvent 0x7FF414BFA3D8
		void OnSetCrewInfo(bool bIsNextMonthRewards, FText& MonthText, FTimespan& NextMonthlyRewardTimespan, FText& CharacterDisplayName, FText& CharacterDescription); // Flags: Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 0x7FF414BFA2F8
		void OnSetCoverPageData(FText& Title, FText& Description, bool bPageComplete); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414BFA218
		void OnSetBonusRewardsInfo(bool bIsUnlocked, int32_t OwnedRewards, int32_t TotalRewards, int32_t CompletedPages, int32_t TotalPages, int32_t ClaimedOutfits, int32_t TotalOutfits); // Flags: Event|Protected|BlueprintEvent 0x7FF414BFA138
		void OnSetBonusInfo(FBonusInfoMiniTagData& BonusInfo); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414BFA058
		void OnSetBaseRewardsInfo(int32_t OwnedRewards, int32_t TotalRewards, int32_t CompletedPages, int32_t TotalPages); // Flags: Event|Protected|BlueprintEvent 0x7FF414BF9F78
		void OnJunoCustomBannerUpdate(UClass BannerClassReference, TArray& ItemVMs); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414BF9E98
		void OnItemVmCardUpdate(FExpandedItemVM ItemVMs, UAthenaSeasonItemEntryBase EntrySelected); // Flags: Event|Protected|BlueprintEvent 0x7FF414BF9DB8
		void OnItemDetailsClicked(); // Flags: Event|Protected|BlueprintEvent 0x7FF414BF9CD8
		void OnItemDelayed(FTimespan Delay); // Flags: Event|Protected|HasDefaults|BlueprintEvent 0x7FF414BF9BF8
		void OnInsufficientResource(UFortPersistentResourceItemDefinition PersistentResource); // Flags: Event|Protected|BlueprintEvent 0x7FF414BF9B18
		void OnInsufficientFunds(EBattlePassCurrencyType CurrencyType); // Flags: Event|Protected|BlueprintEvent 0x7FF414BF9A38
		void OnHideItemDetails(); // Flags: Event|Protected|BlueprintEvent 0x7FF414BF9958
		void OnGameModeCompatibilityTagUpdate(UFortItemVM FortItem); // Flags: Event|Protected|BlueprintEvent 0x7FF414BF9878
		void OnCreateViewRewardCard(UFortItemVM ItemVM, UFortItemDefinition EffectiveActivedef, TArray& Variants, bool bForceEffectiveImage); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414BF9798
		void OnBattlePassOwned(); // Flags: Event|Protected|BlueprintEvent 0x7FF414BF96B8
		void OnBattlePassGiftingAllowed(bool bGiftingAllowed); // Flags: Event|Protected|BlueprintEvent 0x7FF414BF95D8
		bool IsSeasonalCustomizationItemOwned(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414BF94F8
		void HandleSwitcherVisibilityShown(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BF9418
		void HandleItemVMCardClicked(UFortItemVM ItemVM, TArray& Variants); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414BF9338
		void HandleFullScreenMapToggled(bool bMapVisible); // Flags: Final|Native|Private 0x7FF414BF9258
		void HandleClaimRewardComplete(bool bSuccess, TArray& OfferTemplateIdList); // Flags: Final|Native|Private|HasOutParms 0x7FF414BF9178
		void GoBackOneScreen(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BF9098
		FTimespan GetQuestPageDelay(); // Flags: Final|Native|Protected|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414BF8FB8
		bool GetEquipButtonEnable(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BF8ED8
	};


	// Class BattlePassS31UI.FortBattlePassCustomSkinPageS31
	// Inherited from UFortBattlePassCustomSkinPageBase -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x18 (0x5E8 - 0x5D0)
	class UFortBattlePassCustomSkinPageS31 : public UFortBattlePassCustomSkinPageBase	
	{
	public:
		FString ClaimBaseItemTooltip_ClaimCheckTemplateId; // 0x5D0(0x10)
		UFortBattlePassTutorialTooltip TutorialTooltip_ClaimBaseItem; // 0x5E0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BattlePassS31UI.FortBattlePassCustomSkinPageS31");
			return ret;
		}
	};


	// Class BattlePassS31UI.FortBattlePassResourcesWidgetS31
	// Inherited from UFortBattlePassResourcesWidgetBase -> UFortGlobalSeasonResourceWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x310 - 0x2F0)
	class UFortBattlePassResourcesWidgetS31 : public UFortBattlePassResourcesWidgetBase	
	{
	public:
		UCommonTextBlock Text_BattleStarsAmount; // 0x2F0(0x8)
		UCommonTextBlock Text_StylePointsAmount; // 0x2F8(0x8)
		UBorder Border_StylePointsRewardsTag; // 0x300(0x8)
		UBorder Border_BattleStarsRewardsTag; // 0x308(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BattlePassS31UI.FortBattlePassResourcesWidgetS31");
			return ret;
		}

		void OnStylePointsRewardsSet(int32_t Rewards); // Flags: Event|Protected|BlueprintEvent 0x7FF414BFB018
		void OnBattleStarRewardsSet(int32_t Rewards); // Flags: Event|Protected|BlueprintEvent 0x7FF414BFAF38
	};


	// Class BattlePassS31UI.FortBattlePassTutorialTooltipS31
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x2F0 - 0x2E0)
	class UFortBattlePassTutorialTooltipS31 : public UCommonUserWidget	
	{
	public:
		UCommonRichTextBlock Text_Tooltip; // 0x2E0(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x2E8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BattlePassS31UI.FortBattlePassTutorialTooltipS31");
			return ret;
		}

		void ShowTooltip(); // Flags: Event|Protected|BlueprintEvent 0x7FF414BFB2B8
		void SetText(FText Text); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BFB1D8
		void HideTooltip(); // Flags: Event|Protected|BlueprintEvent 0x7FF414BFB0F8
	};

}
