#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: BattlePassS31UI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class BattlePassS31UI.BattlePassBulkBuyPageS31
	// Inherited from UFortBattlePassBulkBuyPageBase -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x590 - 0x590)
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
	// Size: 0x68 (0x5B0 - 0x548)
	class UBattlePassLandingPageS31 : public UBattlePassLandingPageBase	
	{
	public:
		UBattlePassLandingPageButton* Button_Rewards; // 0x548(0x8)
		UBattlePassLandingPageButton* Button_CharacterCustomizer; // 0x550(0x8)
		UBattlePassLandingPageButton* Button_BonusRewards; // 0x558(0x8)
		UBattlePassLandingPageButton* Button_Quests; // 0x560(0x8)
		UBattlePassLandingPageButton* Button_JoinSubscription; // 0x568(0x8)
		UBattlePassLandingPageButton* Button_WeeklyRewards; // 0x570(0x8)
		UCommonTextBlock* Text_SeasonNumber; // 0x578(0x8)
		UAthenaSeasonItemData_BattleStar* SeasonData_BattleStar; // 0x580(0x8)
		unsigned char UnknownData00_7[0x28]; // 0x588(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BattlePassS31UI.BattlePassLandingPageS31");
			return ret;
		}

		void OnBattlePassSubscriptionAllowed(bool bSubscriptionAllowed); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class BattlePassS31UI.BattlePassRewardPageS31
	// Inherited from UBattlePassRewardPageBase -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xA0 (0x5A8 - 0x508)
	class UBattlePassRewardPageS31 : public UBattlePassRewardPageBase	
	{
	public:
		UClass* RewardsTrackClass; // 0x508(0x8)
		UFortBattlePassTile* FocusedReward; // 0x510(0x8)
		TArray<UFortBattlePassRewardTrack*> TrackPages; // 0x518(0x10)
		unsigned char UnknownData00_6[0x4]; // 0x528(0x4) UNKNOWN PROPERTY
		ERewardPageType RewardPageType; // 0x52C(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x52D(0x3) UNKNOWN PROPERTY
		TArray<FFlowAnalyticsImpressionSectionContent> AnalyticsSectionContents; // 0x530(0x10)
		int32_t HoldTileTooltip_ClaimedRewardsToHide; // 0x540(0x4)
		int32_t HoldTileTooltip_ClaimedBattlePassToHide; // 0x544(0x4)
		int32_t HoldTileTooltip_RequiredBattleStarsToShow; // 0x548(0x4)
		int32_t LevelRequirementUnlockTooltip_RequiredLevel; // 0x54C(0x4)
		int32_t ClaimAllRewardsTooltip_RequiredLevelToShow; // 0x550(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x554(0x4) UNKNOWN PROPERTY
		UCommonAnimatedSwitcher* Switcher_RewardTracks; // 0x558(0x8)
		UFortBattlePassTutorialTooltipS31* TutorialTooltip_LevelRequirementUnlock; // 0x560(0x8)
		UFortBattlePassTutorialTooltipS31* TutorialTooltip_ClaimAllRewards; // 0x568(0x8)
		UFortBattlePassTutorialTooltipS31* TutorialTooltip_HoldTile; // 0x570(0x8)
		UAthenaSeasonItemData_BattleStar* SeasonData_BattleStar; // 0x578(0x8)
		UBattlePassBulkBuyInputData* BulkBuyInputData; // 0x580(0x8)
		UCommonButtonBase* Button_NextPage; // 0x588(0x8)
		UCommonButtonBase* Button_PreviousPage; // 0x590(0x8)
		unsigned char UnknownData03_7[0x10]; // 0x598(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BattlePassS31UI.BattlePassRewardPageS31");
			return ret;
		}

		void OnPageChanged(int32_t PageNumber, int32_t RewardPageTotal); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnLoadingScreenSelectedChanged(bool bIsSelected); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInputMethodChanged(ECommonInputType InputType); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInitForPageType(ERewardPageType InRewardPageType); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UWidget HandleRewardTracksBoundaryNavigation(EUINavigation InNavigation); // Flags: Final|Native|Private, Memory Exec: 0x7FF750F23A58(relative to base address)
		FVaultWorldBackgroundData GetRewardPageBackgroundData(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750F23728(relative to base address)
	};


	// Class BattlePassS31UI.BattlePassScreenS31
	// Inherited from UBattlePassScreenBase -> UFortItemPreviewScreen -> UFortActivatablePanel -> UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x530 (0xE60 - 0x930)
	class UBattlePassScreenS31 : public UBattlePassScreenBase	
	{
	public:
		UClass* ResourcePurchaseScreenClass; // 0x930(0x8)
		unsigned char UnknownData00_6[0x8]; // 0x938(0x8) UNKNOWN PROPERTY
		UCommonButtonBase* Button_Close; // 0x940(0x8)
		UCommonButtonLegacy* Button_TouchClose; // 0x948(0x8)
		UCommonButtonBase* Button_ToggleViewDetails; // 0x950(0x8)
		UCommonButtonBase* Button_ReplayTrailer; // 0x958(0x8)
		UCommonButtonBase* Button_ReplayTrailer_Mobile; // 0x960(0x8)
		UCommonButtonBase* Button_ShowAbout; // 0x968(0x8)
		UCommonButtonBase* Button_RewardDetails; // 0x970(0x8)
		UCommonButtonBase* Button_ShowAbout_Mobile; // 0x978(0x8)
		UCommonButtonBase* Button_ShowAboutCustomization; // 0x980(0x8)
		UCommonButtonBase* Button_ShowAboutCustomization_Mobile; // 0x988(0x8)
		UCommonButtonBase* Button_BulkBuyRewards; // 0x990(0x8)
		UCommonButtonBase* Button_PageComplete; // 0x998(0x8)
		UCommonButtonBase* Button_GiftBattlePass; // 0x9A0(0x8)
		UCommonVisibilitySwitcher* VisibilitySwitcher_PlatformBasedButtons; // 0x9A8(0x8)
		UFortBattlePassResourcesWidgetBase* BattlePassCurrencyPanel; // 0x9B0(0x8)
		UAthenaExclusiveRewardBanner* AthenaExclusiveRewardBanner; // 0x9B8(0x8)
		UCommonTextBlock* Text_Description; // 0x9C0(0x8)
		UCommonTextBlock* Text_ItemName; // 0x9C8(0x8)
		UAthenaRewardItemTypeRarityTag* ItemRewardTag; // 0x9D0(0x8)
		UCommonTextBlock* Text_SetDetails; // 0x9D8(0x8)
		UWidgetSwitcher* Switcher_PrerequisiteInfo; // 0x9E0(0x8)
		UCommonTextBlock* Text_Prerequisite; // 0x9E8(0x8)
		UWidget* Widget_PrerequisiteProgress; // 0x9F0(0x8)
		UWidget* Widget_LevelUpMessageFree; // 0x9F8(0x8)
		UWidget* Widget_LevelUpMessagePremium; // 0xA00(0x8)
		UWidget* Widget_CustomResourceMessage; // 0xA08(0x8)
		UWidgetSwitcher* Switcher_PrimaryAction; // 0xA10(0x8)
		UFortCTAButton* Button_BuyLevels; // 0xA18(0x8)
		UFortCTAButton* Button_BuyBattlePass; // 0xA20(0x8)
		UFortCTAButton* Button_ClaimReward; // 0xA28(0x8)
		UCommonButtonBase* Button_ViewQuests; // 0xA30(0x8)
		UCommonButtonBase* Button_PreviewLoadingScreen; // 0xA38(0x8)
		UFortDynamicEntryBox* ItemVMCards; // 0xA40(0x8)
		UBorder* Tag_RequiresBP; // 0xA48(0x8)
		UBorder* Tag_PageLocked; // 0xA50(0x8)
		UBorder* Tag_BaseItem; // 0xA58(0x8)
		UBorder* Tag_Prerequisite; // 0xA60(0x8)
		UBorder* Tag_CompletePage; // 0xA68(0x8)
		UBorder* Tag_NotEnough_Currency; // 0xA70(0x8)
		UBorder* Tag_Cost; // 0xA78(0x8)
		UBorder* Tag_Owned; // 0xA80(0x8)
		UBorder* Tag_Delayed; // 0xA88(0x8)
		FGameplayTag QuestCategoryParentTag; // 0xA90(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xA94(0x4) UNKNOWN PROPERTY
		UClass* PreviewLoadingScreenWidgetClass; // 0xA98(0x8)
		unsigned char UnknownData02_6[0x58]; // 0xAA0(0x58) UNKNOWN PROPERTY
		UAthenaSeasonItemData_BattleStar* SeasonData_BattleStar; // 0xAF8(0x8)
		UAthenaSeasonItemEntryBase* CurrentSelectedEntry; // 0xB00(0x8)
		TArray<EBattlePassView> SwitcherSubPageTypes; // 0xB08(0x10)
		UCommonVisibilitySwitcher* VisibilitySwitcher_SubPage; // 0xB18(0x8)
		unsigned char UnknownData03_6[0x108]; // 0xB20(0x108) UNKNOWN PROPERTY
		UFortItemDefinition* SeasonalBaseCustomizationItem; // 0xC28(0x8)
		bool bHasSubscription; // 0xC30(0x1)
		unsigned char UnknownData04_6[0x7]; // 0xC31(0x7) UNKNOWN PROPERTY
		UFortBattlePassTutorialTooltipS31* TutorialTooltip_BattleStars; // 0xC38(0x8)
		UFortBattlePassTutorialTooltipS31* TutorialTooltip_StylePoints; // 0xC40(0x8)
		UFortSwipePanel* SwipePanel_Navigation; // 0xC48(0x8)
		unsigned char UnknownData05_6[0x1C0]; // 0xC50(0x1C0) UNKNOWN PROPERTY
		TMap<EBattlePassFeatures, UCommonButtonBase*> FeatureButtons; // 0xE10(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BattlePassS31UI.BattlePassScreenS31");
			return ret;
		}

		void SetFocusToFirstItemDetailsCard(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OverviewShowAnimationFinished(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void OnUpdateStatusBar(FText& StatusText, EBattlePassStatusBarTypeS31& BarType); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnUpdateOwnedOrEquippedTag(FText& StatusText); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnUpdateBattlePassRequiredBar(bool bPassRequiredVisible); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTransitionItemDetails(bool bTransitionForward); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSetWeeklyRewardsInfo(FTimespan& DelayTimespan, int32_t AvailableRewards, int32_t OwnedRewards, int32_t TotalRewards, int32_t AvailablePages, int32_t CompletedPages, int32_t TotalPages); // Flags: Event|Protected|HasOutParms|HasDefaults|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSetWarningToolTip(ERewardWarningTooltipType31& WarningTooltipType, FText& Description); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSetResourcePrice(int32_t Cost, UFortPersistentResourceItemDefinition* PersistentResource); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSetQuestRewardsInfo(FTimespan& DelayTimespan, int32_t OwnedRewards, int32_t TotalRewards, int32_t CompletedPages, int32_t TotalPages); // Flags: Event|Protected|HasOutParms|HasDefaults|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSetPrerequisiteInfo(FText& Description, int32_t CurrentAmount, int32_t NeededAmount, EBattlePassRewardPrerequisiteType PrerequisiteType, bool bShowPrerequisiteLock); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSetItemPrice(int32_t Cost, EBattlePassCurrencyType CurrencyType); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSetEquipButtonEnable(bool bIsEnable); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSetCrewInfo(bool bIsNextMonthRewards, FText& MonthText, FTimespan& NextMonthlyRewardTimespan, FText& CharacterDisplayName, FText& CharacterDescription); // Flags: Event|Protected|HasOutParms|HasDefaults|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSetCoverPageData(FText& Title, FText& Description, bool bPageComplete); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSetBonusRewardsInfo(bool bIsUnlocked, int32_t OwnedRewards, int32_t TotalRewards, int32_t CompletedPages, int32_t TotalPages, int32_t ClaimedOutfits, int32_t TotalOutfits); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSetBonusInfo(FBonusInfoMiniTagData& BonusInfo); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSetBaseRewardsInfo(int32_t OwnedRewards, int32_t TotalRewards, int32_t CompletedPages, int32_t TotalPages); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnJunoCustomBannerUpdate(UClass* BannerClassReference, TArray<UFortItemVM*>& ItemVMs); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnItemVmCardUpdate(FExpandedItemVM ItemVMs, UAthenaSeasonItemEntryBase* EntrySelected); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnItemDetailsClicked(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnItemDelayed(FTimespan Delay); // Flags: Event|Protected|HasDefaults|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInsufficientResource(UFortPersistentResourceItemDefinition* PersistentResource); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInsufficientFunds(EBattlePassCurrencyType CurrencyType); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnHideItemDetails(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnGameModeCompatibilityTagUpdate(UFortItemVM* FortItem); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCreateViewRewardCard(UFortItemVM* ItemVM, UFortItemDefinition* EffectiveActivedef, TArray<FMcpVariantChannelInfo>& Variants, bool bForceEffectiveImage); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnBattlePassOwned(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnBattlePassGiftingAllowed(bool bGiftingAllowed); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool IsSeasonalCustomizationItemOwned(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750F23B10(relative to base address)
		void HandleSwitcherVisibilityShown(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750F23AE8(relative to base address)
		void HandleItemVMCardClicked(UFortItemVM* ItemVM, TArray<FMcpVariantChannelInfo>& Variants); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750F23978(relative to base address)
		void HandleFullScreenMapToggled(bool bMapVisible); // Flags: Final|Native|Private, Memory Exec: 0x7FF750F238F8(relative to base address)
		void HandleClaimRewardComplete(bool bSuccess, TArray<FString>& OfferTemplateIdList); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF750F237DC(relative to base address)
		void GoBackOneScreen(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750F237C8(relative to base address)
		FTimespan GetQuestPageDelay(); // Flags: Final|Native|Protected|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750F236FC(relative to base address)
		bool GetEquipButtonEnable(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750F236E0(relative to base address)
	};


	// Class BattlePassS31UI.FortBattlePassCustomSkinPageS31
	// Inherited from UFortBattlePassCustomSkinPageBase -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x18 (0x5E0 - 0x5C8)
	class UFortBattlePassCustomSkinPageS31 : public UFortBattlePassCustomSkinPageBase	
	{
	public:
		FString ClaimBaseItemTooltip_ClaimCheckTemplateId; // 0x5C8(0x10)
		UFortBattlePassTutorialTooltip* TutorialTooltip_ClaimBaseItem; // 0x5D8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BattlePassS31UI.FortBattlePassCustomSkinPageS31");
			return ret;
		}
	};


	// Class BattlePassS31UI.FortBattlePassResourcesWidgetS31
	// Inherited from UFortBattlePassResourcesWidgetBase -> UFortGlobalSeasonResourceWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x308 - 0x2E8)
	class UFortBattlePassResourcesWidgetS31 : public UFortBattlePassResourcesWidgetBase	
	{
	public:
		UCommonTextBlock* Text_BattleStarsAmount; // 0x2E8(0x8)
		UCommonTextBlock* Text_StylePointsAmount; // 0x2F0(0x8)
		UBorder* Border_StylePointsRewardsTag; // 0x2F8(0x8)
		UBorder* Border_BattleStarsRewardsTag; // 0x300(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BattlePassS31UI.FortBattlePassResourcesWidgetS31");
			return ret;
		}

		void OnStylePointsRewardsSet(int32_t Rewards); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnBattleStarRewardsSet(int32_t Rewards); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class BattlePassS31UI.FortBattlePassTutorialTooltipS31
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x2E8 - 0x2D8)
	class UFortBattlePassTutorialTooltipS31 : public UCommonUserWidget	
	{
	public:
		UCommonRichTextBlock* Text_Tooltip; // 0x2D8(0x8)
		unsigned char UnknownData00_7[0x8]; // 0x2E0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BattlePassS31UI.FortBattlePassTutorialTooltipS31");
			return ret;
		}

		void ShowTooltip(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetText(FText Text); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7507B8AB0(relative to base address)
		void HideTooltip(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}