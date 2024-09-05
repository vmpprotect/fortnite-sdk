#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: BattlePassBase
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class BattlePassBase.FortBattlePassCustomSkinPageTab
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x238 (0x628 - 0x3F0)
	class UFortBattlePassCustomSkinPageTab : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData00_3[0x1B0]; // 0x3F0(0x1B0) UNKNOWN PROPERTY
		UScrollBox* ScrollBox_Categories; // 0x5A0(0x8)
		unsigned char UnknownData01_6[0x10]; // 0x5A8(0x10) UNKNOWN PROPERTY
		UBattlePassEnabledInputData* EquipEnabledData; // 0x5B8(0x8)
		unsigned char UnknownData02_6[0x8]; // 0x5C0(0x8) UNKNOWN PROPERTY
		UCommonVisibilitySwitcher* VisibilitySwitcher_Content; // 0x5C8(0x8)
		TArray<FBattlePassCharaterRewardTabInfo> TabInfos; // 0x5D0(0x10)
		UDynamicEntryBox* ListView_PrimaryTabs; // 0x5E0(0x8)
		TArray<FBattlePassCharaterRewardTabInfo> ActiveTabInfos; // 0x5E8(0x10)
		UClass* CustomizationRowClass; // 0x5F8(0x8)
		FDataTableRowHandle NextTabInputAction; // 0x600(0x10)
		FDataTableRowHandle PreviousTabInputAction; // 0x610(0x10)
		unsigned char UnknownData03_7[0x8]; // 0x620(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BattlePassBase.FortBattlePassCustomSkinPageTab");
			return ret;
		}

		void EnableTabActions(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF7507B7E20(relative to base address)
	};


	// Class BattlePassBase.FortBattlePassCustomSkinTab
	// Inherited from UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x13B0 - 0x1390)
	class UFortBattlePassCustomSkinTab : public UCommonButtonBase	
	{
	public:
		UCommonLazyImage* LazyImage_Icon; // 0x1390(0x8)
		FVector2D ImageSize_Mobile; // 0x1398(0x10)
		unsigned char UnknownData00_7[0x8]; // 0x13A8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BattlePassBase.FortBattlePassCustomSkinTab");
			return ret;
		}

		void SetIcon(TWeakObjectPtr<UObject*> LazyObject); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7507B87B4(relative to base address)
		void BP_ShowBang(bool bShow); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class BattlePassBase.FortBattlePassSkinCategoriesTile
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x3F8 - 0x3F0)
	class UFortBattlePassSkinCategoriesTile : public UCommonActivatableWidget	
	{
	public:
		UDynamicEntryBox* FortDynamicEntryBox_Categories; // 0x3F0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BattlePassBase.FortBattlePassSkinCategoriesTile");
			return ret;
		}
	};


	// Class BattlePassBase.BattlePassLandingPageBase
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x158 (0x548 - 0x3F0)
	class UBattlePassLandingPageBase : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData00_3[0x120]; // 0x3F0(0x120) UNKNOWN PROPERTY
		UBattlePassLandingPageButton* LastHoveredPageButton; // 0x510(0x8)
		UCommonButtonGroupBase* LandingPageButtonGroupBase; // 0x518(0x8)
		unsigned char UnknownData01_7[0x28]; // 0x520(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BattlePassBase.BattlePassLandingPageBase");
			return ret;
		}
	};


	// Class BattlePassBase.BattlePassLandingPageButton
	// Inherited from UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x220 (0x15B0 - 0x1390)
	class UBattlePassLandingPageButton : public UCommonButtonBase	
	{
	public:
		EBattlePassView SubPageType; // 0x1390(0x1)
		EBattlePassFeatures FeatureType; // 0x1391(0x1)
		unsigned char UnknownData00_6[0x6]; // 0x1392(0x6) UNKNOWN PROPERTY
		FBattlePassLandingPageEntryPreviewInfo PreviewInfo; // 0x1398(0x90)
		bool bNeedsBattlePass; // 0x1428(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x1429(0x7) UNKNOWN PROPERTY
		UFortChallengeBundleScheduleDefinition* DelayQuestSchedule; // 0x1430(0x8)
		int32_t DelayDaysSinceSeasonStart; // 0x1438(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x143C(0x4) UNKNOWN PROPERTY
		UFortItemDefinition* RequiredItem; // 0x1440(0x8)
		UFortBangWrapper_NUI* BangWrapper; // 0x1448(0x8)
		bool bUsesTelemetry; // 0x1450(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x1451(0x3) UNKNOWN PROPERTY
		FIntPoint Telemetry_Size; // 0x1454(0x8)
		FIntPoint Telemetry_Position; // 0x145C(0x8)
		unsigned char UnknownData04_6[0x4]; // 0x1464(0x4) UNKNOWN PROPERTY
		FBattlePassLandingPageButtonTexts DefaultTexts; // 0x1468(0x30)
		FBattlePassLandingPageButtonTexts DelayedTexts; // 0x1498(0x30)
		FBattlePassLandingPageButtonTexts SubscribedTexts; // 0x14C8(0x30)
		FBattlePassLandingPageButtonDisplayBehaviorData DisplayBehaviorData; // 0x14F8(0x18)
		unsigned char UnknownData05_7[0xA0]; // 0x1510(0xA0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BattlePassBase.BattlePassLandingPageButton");
			return ret;
		}

		void OnSubscriptionTextureLoaded(UTexture2D* Texture); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSubscriptionOwnershipUpdated(bool bOwnsSubsciption); // Flags: RequiredAPI|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnShowDisplayDetails(); // Flags: RequiredAPI|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSetTileImageMaterial(UMaterialInstance* Material); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnDisplayDetailsUpdated(FBattlePassLandingPageButtonDisplayDetails& NewDisplayDetails); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		FBattlePassLandingPageButtonDisplayDetails GetBattlePassDisplayDetails(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF747FD567C(relative to base address)
	};


	// Class BattlePassBase.BattlePassRewardPageBase
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x118 (0x508 - 0x3F0)
	class UBattlePassRewardPageBase : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData00_1[0x118]; // 0x3F0(0x118) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BattlePassBase.BattlePassRewardPageBase");
			return ret;
		}
	};


	// Class BattlePassBase.BattlePassUIGameFeatureAction
	// Inherited from UFortUIGameFeatureAction -> UGameFeatureAction -> UObject
	// Size: 0x60 (0x88 - 0x28)
	class UBattlePassUIGameFeatureAction : public UFortUIGameFeatureAction	
	{
	public:
		TWeakObjectPtr<UClass*> BattlePassScreenClass; // 0x28(0x20)
		TWeakObjectPtr<UClass*> BattlePassResourceWidgetClass; // 0x48(0x20)
		TWeakObjectPtr<UClass*> BattlePassInfoModalClass; // 0x68(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BattlePassBase.BattlePassUIGameFeatureAction");
			return ret;
		}
	};


	// Class BattlePassBase.FortBattlePassCustomSkinCategoryTile
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xB8 (0x368 - 0x2B0)
	class UFortBattlePassCustomSkinCategoryTile : public UUserWidget	
	{
	public:
		unsigned char UnknownData00_3[0x20]; // 0x2B0(0x20) UNKNOWN PROPERTY
		UProgressBar* ProgressBar; // 0x2D0(0x8)
		UFortDynamicEntryBox* FortDynamicEntryBox_Items; // 0x2D8(0x8)
		URichTextBlock* Text_CategoryTitle; // 0x2E0(0x8)
		UFortBattlePassTile* PreviewedTile; // 0x2E8(0x8)
		int32_t OwnedRewards; // 0x2F0(0x4)
		unsigned char UnknownData01_7[0x74]; // 0x2F4(0x74) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BattlePassBase.FortBattlePassCustomSkinCategoryTile");
			return ret;
		}

		void SetPreviewedTile(int32_t Index); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7507B88B0(relative to base address)
		void OnOwnedTilesUpdated(int32_t CurrentlyOwnedRewards, int32_t TotalRewards, float CategoryProgress); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnLockedStateChanged(bool bCategoryLocked); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnLockedProgressUpdated(int32_t CurrentlyOwnedBeforeCategory, int32_t TotalRewardsBeforeCategory, float LockedProgress); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void FocusTile(int32_t Index); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7507B7E34(relative to base address)
	};


	// Class BattlePassBase.FortBattlePassCustomSkinPageBase
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x1D8 (0x5C8 - 0x3F0)
	class UFortBattlePassCustomSkinPageBase : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData00_3[0x1B0]; // 0x3F0(0x1B0) UNKNOWN PROPERTY
		UScrollBox* ScrollBox_Categories; // 0x5A0(0x8)
		UFortDynamicEntryBox* FortDynamicEntryBox_Categories; // 0x5A8(0x8)
		unsigned char UnknownData01_6[0x8]; // 0x5B0(0x8) UNKNOWN PROPERTY
		UBattlePassEnabledInputData* EquipEnabledData; // 0x5B8(0x8)
		unsigned char UnknownData02_7[0x8]; // 0x5C0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BattlePassBase.FortBattlePassCustomSkinPageBase");
			return ret;
		}
	};


	// Class BattlePassBase.FortBattlePassBulkBuyPageBase
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x1A0 (0x590 - 0x3F0)
	class UFortBattlePassBulkBuyPageBase : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData00_3[0x118]; // 0x3F0(0x118) UNKNOWN PROPERTY
		UCommonButtonBase* Button_Addition; // 0x508(0x8)
		UCommonButtonBase* Button_Subtraction; // 0x510(0x8)
		UDynamicEntryBox* DynamicEntryBox_TilesEntries; // 0x518(0x8)
		UCommonVisibilitySwitcher* Switcher_BottomButtons; // 0x520(0x8)
		UFortCTAButton* Button_BuyLevels; // 0x528(0x8)
		UFortCTAButton* Button_ClaimReward; // 0x530(0x8)
		UWidget* Widget_LevelUpMessagePremium; // 0x538(0x8)
		UAthenaSeasonItemData_BattleStar* SeasonData_BattleStar; // 0x540(0x8)
		unsigned char UnknownData01_6[0x18]; // 0x548(0x18) UNKNOWN PROPERTY
		UAthenaSeasonItemDefinition* SeasonItemDefinition; // 0x560(0x8)
		UFortBattlePassTile* FocusedReward; // 0x568(0x8)
		unsigned char UnknownData02_6[0x18]; // 0x570(0x18) UNKNOWN PROPERTY
		UScrollBox* ScrollBox_Pages; // 0x588(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BattlePassBase.FortBattlePassBulkBuyPageBase");
			return ret;
		}

		void OnRewardCountChanged(int32_t Count); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPageRangeChanged(int32_t FromPage, int32_t ToPage); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCostChanged(int32_t Cost); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleUserScrolled(float ScrollAmount); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7507B85AC(relative to base address)
	};


	// Class BattlePassBase.FortBattlePassCheckBoxButton
	// Inherited from UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x13A0 - 0x1390)
	class UFortBattlePassCheckBoxButton : public UCommonButtonBase	
	{
	public:
		unsigned char UnknownData00_1[0x10]; // 0x1390(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BattlePassBase.FortBattlePassCheckBoxButton");
			return ret;
		}

		void OnStateChanged(bool bNewIsChecked); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class BattlePassBase.FortBattlePassContext
	// Inherited from UBlueprintContextBase -> USubsystem -> UObject
	// Size: 0x78 (0xA8 - 0x30)
	class UFortBattlePassContext : public UBlueprintContextBase	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x30(0x8) UNKNOWN PROPERTY
		TArray<UFortPersistentResourceItemDefinition*> CustomizationPageSeasonalResources; // 0x38(0x10)
		TArray<UFortPersistentResourceItemDefinition*> AllSeasonalResources; // 0x48(0x10)
		TMap<ERewardPageType, FSeasonalResourceList> RewardPageSeasonalResources; // 0x58(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BattlePassBase.FortBattlePassContext");
			return ret;
		}

		TArray GetSeasonalCurrencies(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7507B8130(relative to base address)
		FText GetLevelPurchaseDisclaimerText(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7507B808C(relative to base address)
		FText GetDefaultDisclaimerText(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF749472624(relative to base address)
		FText GetCurrentSeasonNumberAsText(bool bFullText); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7507B7FBC(relative to base address)
		FText GetCurrentChapterAsText(bool bFullText); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7507B7EEC(relative to base address)
		bool CanPurchaseBattlePassLevel(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7507B7DFC(relative to base address)
	};


	// Class BattlePassBase.FortBattlePassResourcesWidgetBase
	// Inherited from UFortGlobalSeasonResourceWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x2E8 - 0x2D8)
	class UFortBattlePassResourcesWidgetBase : public UFortGlobalSeasonResourceWidget	
	{
	public:
		UClass* ResourceCounterClass; // 0x2D8(0x8)
		UDynamicEntryBox* EntryBox_ResourceCounters; // 0x2E0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BattlePassBase.FortBattlePassResourcesWidgetBase");
			return ret;
		}

		void ShowResourcesInfoModal(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF7507B8BE0(relative to base address)
		void OnShowMoreInfo(bool bShouldShowMoreInfo); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class BattlePassBase.FortBattlePassCurrencyPanel
	// Inherited from UFortBattlePassResourcesWidgetBase -> UFortGlobalSeasonResourceWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x40 (0x328 - 0x2E8)
	class UFortBattlePassCurrencyPanel : public UFortBattlePassResourcesWidgetBase	
	{
	public:
		UHorizontalBox* HBox_BattleStarContainer; // 0x2E8(0x8)
		UCommonTextBlock* Text_BattleStar; // 0x2F0(0x8)
		UHorizontalBox* HBox_CustomSkinContainer; // 0x2F8(0x8)
		UCommonTextBlock* Text_CustomSkin; // 0x300(0x8)
		unsigned char UnknownData00_7[0x20]; // 0x308(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BattlePassBase.FortBattlePassCurrencyPanel");
			return ret;
		}
	};


	// Class BattlePassBase.FortBattlePassDynamicIcon
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x48 (0x2F8 - 0x2B0)
	class UFortBattlePassDynamicIcon : public UUserWidget	
	{
	public:
		TWeakObjectPtr<UObject*> BattlePassDefaultIcon; // 0x2B0(0x20)
		TWeakObjectPtr<UObject*> BattlePassOwnedIcon; // 0x2D0(0x20)
		UFortLazyImage* LazyImage_BattlePassIcon; // 0x2F0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BattlePassBase.FortBattlePassDynamicIcon");
			return ret;
		}

		void OnBattlePassInfoUpdated(bool bOwnsBattlePass); // Flags: Event|Protected|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class BattlePassBase.FortBattlePassLevelCount
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x2C0 - 0x2B0)
	class UFortBattlePassLevelCount : public UUserWidget	
	{
	public:
		UCommonTextBlock* Text_LevelCount; // 0x2B0(0x8)
		unsigned char UnknownData00_7[0x8]; // 0x2B8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BattlePassBase.FortBattlePassLevelCount");
			return ret;
		}
	};


	// Class BattlePassBase.FortBattlePassPrerequisiteHeader
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x2B8 - 0x2B0)
	class UFortBattlePassPrerequisiteHeader : public UUserWidget	
	{
	public:
		UTextBlock* Text_Prerequisite; // 0x2B0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BattlePassBase.FortBattlePassPrerequisiteHeader");
			return ret;
		}
	};


	// Class BattlePassBase.FortBattlePassPurchaseResourcesWidget
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xC0 (0x4B0 - 0x3F0)
	class UFortBattlePassPurchaseResourcesWidget : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x3F0(0x8) UNKNOWN PROPERTY
		UCommonButtonBase* Button_Addition; // 0x3F8(0x8)
		UCommonButtonBase* Button_BatchAddition; // 0x400(0x8)
		UCommonButtonBase* Button_Subtraction; // 0x408(0x8)
		UCommonButtonBase* Button_BatchSubtraction; // 0x410(0x8)
		UCommonVisibilitySwitcher* Switcher_PurchaseButtons; // 0x418(0x8)
		UFortHoldableButton* Button_Purchase; // 0x420(0x8)
		UCommonButtonBase* Button_GetVBucks; // 0x428(0x8)
		UCommonButtonBase* Button_ReloadMtx; // 0x430(0x8)
		UCommonButtonBase* Button_Back; // 0x438(0x8)
		UFortBattlePassCheckBoxButton* CheckBox_Bundle; // 0x440(0x8)
		UCommonButtonBase* Button_CloseTouch; // 0x448(0x8)
		int32_t CurrentLevel; // 0x450(0x4)
		bool bIsOfferActive; // 0x454(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x455(0x3) UNKNOWN PROPERTY
		int32_t CurrentVBucks; // 0x458(0x4)
		int32_t CurrentBattleStars; // 0x45C(0x4)
		int32_t BatchNum; // 0x460(0x4)
		bool bOfferUnavailable; // 0x464(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x465(0x3) UNKNOWN PROPERTY
		int32_t MaxBundleLevel; // 0x468(0x4)
		int32_t MaxLevel; // 0x46C(0x4)
		int32_t MaxLevelPurchases; // 0x470(0x4)
		int32_t BundleAmount; // 0x474(0x4)
		UFortItemDefinition* LevelPreviewItem; // 0x478(0x8)
		UAthenaSeasonItemData_BattleStar* BattleStarData; // 0x480(0x8)
		unsigned char UnknownData03_7[0x28]; // 0x488(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BattlePassBase.FortBattlePassPurchaseResourcesWidget");
			return ret;
		}

		void OnUpdatePageUnlockText(FText& PageUnlockText); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTotalPriceChanged(int32_t NewPrice); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPurchaseAmountChanged(int32_t NewAmount, int32_t LevelsLeft); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnOfferUnavailable(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnAmountChangeButtonClicked(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool IsReloadMtxEnabled(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF7507B8728(relative to base address)
		void HandlePurchaseMultiComplete(bool bSuccess, TArray<FPurchasedItemInfo>& PurchasedItems, TArray<FString>& OfferIdList); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF7507B842C(relative to base address)
		void HandlePurchaseComplete(bool bSuccess, TArray<FPurchasedItemInfo>& PurchasedItems, FString OfferId); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF7507B8258(relative to base address)
	};


	// Class BattlePassBase.FortBattlePassResourceCounter
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x2F8 - 0x2D8)
	class UFortBattlePassResourceCounter : public UCommonUserWidget	
	{
	public:
		UCommonTextBlock* Text_ResourceName; // 0x2D8(0x8)
		UFortLazyImage* LazyImage_ResourceIcon; // 0x2E0(0x8)
		UCommonTextBlock* Text_ResourceCount; // 0x2E8(0x8)
		UFortPersistentResourceItemDefinition* CurrentResource; // 0x2F0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BattlePassBase.FortBattlePassResourceCounter");
			return ret;
		}
	};


	// Class BattlePassBase.FortBattlePassRewardGrid
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xC8 (0x4B8 - 0x3F0)
	class UFortBattlePassRewardGrid : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData00_3[0x68]; // 0x3F0(0x68) UNKNOWN PROPERTY
		UClass* GridTileClass; // 0x458(0x8)
		UClass* GridEmptyTileClass; // 0x460(0x8)
		FVector2D GridCellPadding; // 0x468(0x10)
		UFortBattlePassRewardGridHeader* PageHeader; // 0x478(0x8)
		UGridPanel* GridPanel_Rewards; // 0x480(0x8)
		UFortBattlePassTileBase* DefaultFocusTile; // 0x488(0x8)
		TWeakObjectPtr<UCommonButtonBase*> LastFocusedTile; // 0x490(0x8)
		unsigned char UnknownData01_7[0x20]; // 0x498(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BattlePassBase.FortBattlePassRewardGrid");
			return ret;
		}

		void OnPageUnselected(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPageSelected(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class BattlePassBase.FortBattlePassRewardGridHeader
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x2B8 - 0x2B0)
	class UFortBattlePassRewardGridHeader : public UUserWidget	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x2B0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BattlePassBase.FortBattlePassRewardGridHeader");
			return ret;
		}

		void OnSetPageType(ERewardPageType PageType); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSetPageCustomName(FText& CustomName); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPageUnlocked(int32_t PurchasedRewards, int32_t TotalRewards); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPageNumberSet(int32_t InPageNumber); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPageLocked(int32_t RequiredLevel, int32_t RequiredRewards, bool IsTimeLocked, FTimespan TimeRemaining); // Flags: Event|Public|HasDefaults|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnBattlePassLevelSet(int32_t BattlePassLevel); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		int32_t GetPageNumber(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74EC991B8(relative to base address)
	};


	// Class BattlePassBase.FortBattlePassRewardTrack
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xA0 (0x490 - 0x3F0)
	class UFortBattlePassRewardTrack : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData00_3[0x50]; // 0x3F0(0x50) UNKNOWN PROPERTY
		UClass* RewardTileClass; // 0x440(0x8)
		UClass* RewardEmptyTileClass; // 0x448(0x8)
		UClass* PrerequisiteHeaderClass; // 0x450(0x8)
		FVector2D GridCellPadding; // 0x458(0x10)
		UGridPanel* GridPanel_Rewards; // 0x468(0x8)
		UFortBattlePassTileBase* DefaultFocusTile; // 0x470(0x8)
		TWeakObjectPtr<UCommonButtonBase*> LastFocusedTile; // 0x478(0x8)
		unsigned char UnknownData01_7[0x10]; // 0x480(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BattlePassBase.FortBattlePassRewardTrack");
			return ret;
		}

		void OnPageUnselected(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPageSelected(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class BattlePassBase.FortBattlePassTileBase
	// Inherited from UFortHoldableButton -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xC8 (0x14F0 - 0x1428)
	class UFortBattlePassTileBase : public UFortHoldableButton	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x1428(0x8) UNKNOWN PROPERTY
		ERewardPageType RewardPageType; // 0x1430(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x1431(0x7) UNKNOWN PROPERTY
		USizeBox* SizeBox_Content; // 0x1438(0x8)
		TMap<FName, FLinearColor> TileColors; // 0x1440(0x50)
		FLinearColor OverlayDimColor; // 0x1490(0x10)
		FVector2D TileDesiredCellSpan; // 0x14A0(0x10)
		float UnitHeight; // 0x14B0(0x4)
		float UnitWidth; // 0x14B4(0x4)
		unsigned char UnknownData02_7[0x38]; // 0x14B8(0x38) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BattlePassBase.FortBattlePassTileBase");
			return ret;
		}

		void SetState(BattlePassTileAvailabilityStates NewState); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF7507B8A2C(relative to base address)
		void SetSize(EPageItemTileSize TileSize, FVector2D& CellSpacing); // Flags: Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7507B895C(relative to base address)
		void OnStateChanged(BattlePassTileAvailabilityStates NewState); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSizeChanged(FVector2D& NewSize); // Flags: Event|Protected|HasOutParms|HasDefaults|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSetTileColors(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSetRequiresBattlePass(bool bRequiresBP); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRevealed(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPeeked(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool IsOwned(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7507B870C(relative to base address)
		bool IsLocked(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7507B86F0(relative to base address)
		bool IsAvailable(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7507B86D4(relative to base address)
		BattlePassTileAvailabilityStates GetState(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7507B8240(relative to base address)
		bool AreAnyGrantedItemsEquipped(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7507B7DD0(relative to base address)
	};


	// Class BattlePassBase.FortBattlePassTile
	// Inherited from UFortBattlePassTileBase -> UFortHoldableButton -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x80 (0x1570 - 0x14F0)
	class UFortBattlePassTile : public UFortBattlePassTileBase	
	{
	public:
		unsigned char UnknownData00_3[0x18]; // 0x14F0(0x18) UNKNOWN PROPERTY
		UFortLazyImage* Image_RewardItem; // 0x1508(0x8)
		UImage* Image_Currency; // 0x1510(0x8)
		UImage* Age_Gating_Item; // 0x1518(0x8)
		bool bIsOnBulkBuyMode; // 0x1520(0x1)
		unsigned char UnknownData01_7[0x4F]; // 0x1521(0x4F) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BattlePassBase.FortBattlePassTile");
			return ret;
		}

		void OnUnpreviewed(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnUnhighlighted(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTilePreviewCycled(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSetTrack(bool bIsFreeTrack, bool bOwnsBattlePass); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSetCurrencyAndPrice(EBattlePassCurrencyType Currency, int32_t Price); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPreviewed(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnLockedStateUpdated(bool OwnsBattlePass, bool ParentUnlocked, bool HasRemainingPrerequisites, bool bIsDelayed); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnLockedProgressUpdated(float Progress, int32_t CurrentlyOwnedRewards, int32_t NeededRewards); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnHighlighted(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnAffordabilityChanged(bool bHasEnougCurrency); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool IsAffordable(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7507B864C(relative to base address)
		bool HasPrerequisites(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7507B8628(relative to base address)
	};


	// Class BattlePassBase.FortBattlePassTutorialTooltip
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x2E8 - 0x2D8)
	class UFortBattlePassTutorialTooltip : public UCommonUserWidget	
	{
	public:
		UCommonRichTextBlock* Text_Tooltip; // 0x2D8(0x8)
		unsigned char UnknownData00_7[0x8]; // 0x2E0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BattlePassBase.FortBattlePassTutorialTooltip");
			return ret;
		}

		void ShowTooltip(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetTooltipEnabled(bool bEnable); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7507B8B60(relative to base address)
		void SetText(FText Text); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7507B8AB0(relative to base address)
		void HideTooltip(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class BattlePassBase.RebootRallyQuestPanel
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x2B0 - 0x2B0)
	class URebootRallyQuestPanel : public UUserWidget	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BattlePassBase.RebootRallyQuestPanel");
			return ret;
		}

		void OnRebootRallyEligibilityUpdated(bool bEligible); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
