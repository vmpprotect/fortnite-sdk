#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: BattlePassBase
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class BattlePassBase.FortBattlePassCustomSkinPageTab
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x238 (0x630 - 0x3F8)
	class UFortBattlePassCustomSkinPageTab : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData04_3[0x1B0]; // 0x3F8(0x1B0) UNKNOWN PROPERTY
		UScrollBox ScrollBox_Categories; // 0x5A8(0x8)
		unsigned char UnknownData05_6[0x10]; // 0x5B0(0x10) UNKNOWN PROPERTY
		UBattlePassEnabledInputData EquipEnabledData; // 0x5C0(0x8)
		unsigned char UnknownData06_6[0x8]; // 0x5C8(0x8) UNKNOWN PROPERTY
		UCommonVisibilitySwitcher VisibilitySwitcher_Content; // 0x5D0(0x8)
		TArray TabInfos; // 0x5D8(0x10)
		UDynamicEntryBox ListView_PrimaryTabs; // 0x5E8(0x8)
		TArray ActiveTabInfos; // 0x5F0(0x10)
		UClass CustomizationRowClass; // 0x600(0x8)
		FDataTableRowHandle NextTabInputAction; // 0x608(0x10)
		FDataTableRowHandle PreviousTabInputAction; // 0x618(0x10)
		unsigned char UnknownData07_7[0x8]; // 0x628(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BattlePassBase.FortBattlePassCustomSkinPageTab");
			return ret;
		}

		void EnableTabActions(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414BF4558
	};


	// Class BattlePassBase.FortBattlePassCustomSkinTab
	// Inherited from UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x13B0 - 0x1390)
	class UFortBattlePassCustomSkinTab : public UCommonButtonBase	
	{
	public:
		UCommonLazyImage LazyImage_Icon; // 0x1390(0x8)
		FVector2D ImageSize_Mobile; // 0x1398(0x10)
		unsigned char UnknownData01_7[0x8]; // 0x13A8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BattlePassBase.FortBattlePassCustomSkinTab");
			return ret;
		}

		void SetIcon(TWeakObjectPtr LazyObject); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BF4718
		void BP_ShowBang(bool bShow); // Flags: Event|Public|BlueprintEvent 0x7FF414BF4638
	};


	// Class BattlePassBase.FortBattlePassSkinCategoriesTile
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x400 - 0x3F8)
	class UFortBattlePassSkinCategoriesTile : public UCommonActivatableWidget	
	{
	public:
		UDynamicEntryBox FortDynamicEntryBox_Categories; // 0x3F8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BattlePassBase.FortBattlePassSkinCategoriesTile");
			return ret;
		}
	};


	// Class BattlePassBase.BattlePassLandingPageBase
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x158 (0x550 - 0x3F8)
	class UBattlePassLandingPageBase : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData02_3[0x120]; // 0x3F8(0x120) UNKNOWN PROPERTY
		UBattlePassLandingPageButton LastHoveredPageButton; // 0x518(0x8)
		UCommonButtonGroupBase LandingPageButtonGroupBase; // 0x520(0x8)
		unsigned char UnknownData03_7[0x28]; // 0x528(0x28) UNKNOWN PROPERTY

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
		unsigned char UnknownData06_6[0x6]; // 0x1392(0x6) UNKNOWN PROPERTY
		FBattlePassLandingPageEntryPreviewInfo PreviewInfo; // 0x1398(0x90)
		bool bNeedsBattlePass; // 0x1428(0x1)
		unsigned char UnknownData07_6[0x7]; // 0x1429(0x7) UNKNOWN PROPERTY
		UFortChallengeBundleScheduleDefinition DelayQuestSchedule; // 0x1430(0x8)
		int32_t DelayDaysSinceSeasonStart; // 0x1438(0x4)
		unsigned char UnknownData08_6[0x4]; // 0x143C(0x4) UNKNOWN PROPERTY
		UFortItemDefinition RequiredItem; // 0x1440(0x8)
		UFortBangWrapper_NUI BangWrapper; // 0x1448(0x8)
		bool bUsesTelemetry; // 0x1450(0x1)
		unsigned char UnknownData09_6[0x3]; // 0x1451(0x3) UNKNOWN PROPERTY
		FIntPoint Telemetry_Size; // 0x1454(0x8)
		FIntPoint Telemetry_Position; // 0x145C(0x8)
		unsigned char UnknownData10_6[0x4]; // 0x1464(0x4) UNKNOWN PROPERTY
		FBattlePassLandingPageButtonTexts DefaultTexts; // 0x1468(0x30)
		FBattlePassLandingPageButtonTexts DelayedTexts; // 0x1498(0x30)
		FBattlePassLandingPageButtonTexts SubscribedTexts; // 0x14C8(0x30)
		FBattlePassLandingPageButtonDisplayBehaviorData DisplayBehaviorData; // 0x14F8(0x18)
		unsigned char UnknownData11_7[0xA0]; // 0x1510(0xA0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BattlePassBase.BattlePassLandingPageButton");
			return ret;
		}

		void OnSubscriptionTextureLoaded(UTexture2D Texture); // Flags: Event|Protected|BlueprintEvent 0x7FF414BF4C58
		void OnSubscriptionOwnershipUpdated(bool bOwnsSubsciption); // Flags: RequiredAPI|Event|Public|BlueprintEvent 0x7FF414BF4B78
		void OnShowDisplayDetails(); // Flags: RequiredAPI|Event|Public|BlueprintEvent 0x7FF414BF4A98
		void OnSetTileImageMaterial(UMaterialInstance Material); // Flags: Event|Protected|BlueprintEvent 0x7FF414BF49B8
		void OnDisplayDetailsUpdated(FBattlePassLandingPageButtonDisplayDetails& NewDisplayDetails); // Flags: Event|Public|HasOutParms|BlueprintEvent 0x7FF414BF48D8
		FBattlePassLandingPageButtonDisplayDetails GetBattlePassDisplayDetails(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BF47F8
	};


	// Class BattlePassBase.BattlePassRewardPageBase
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x118 (0x510 - 0x3F8)
	class UBattlePassRewardPageBase : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData01_1[0x118]; // 0x3F8(0x118) UNKNOWN PROPERTY

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
		TWeakObjectPtr BattlePassScreenClass; // 0x28(0x20)
		TWeakObjectPtr BattlePassResourceWidgetClass; // 0x48(0x20)
		TWeakObjectPtr BattlePassInfoModalClass; // 0x68(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BattlePassBase.BattlePassUIGameFeatureAction");
			return ret;
		}
	};


	// Class BattlePassBase.FortBattlePassCustomSkinCategoryTile
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xB8 (0x370 - 0x2B8)
	class UFortBattlePassCustomSkinCategoryTile : public UUserWidget	
	{
	public:
		unsigned char UnknownData02_3[0x20]; // 0x2B8(0x20) UNKNOWN PROPERTY
		UProgressBar ProgressBar; // 0x2D8(0x8)
		UFortDynamicEntryBox FortDynamicEntryBox_Items; // 0x2E0(0x8)
		URichTextBlock Text_CategoryTitle; // 0x2E8(0x8)
		UFortBattlePassTile PreviewedTile; // 0x2F0(0x8)
		int32_t OwnedRewards; // 0x2F8(0x4)
		unsigned char UnknownData03_7[0x74]; // 0x2FC(0x74) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BattlePassBase.FortBattlePassCustomSkinCategoryTile");
			return ret;
		}

		void SetPreviewedTile(int32_t Index); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BF50B8
		void OnOwnedTilesUpdated(int32_t CurrentlyOwnedRewards, int32_t TotalRewards, float CategoryProgress); // Flags: Event|Protected|BlueprintEvent 0x7FF414BF4FD8
		void OnLockedStateChanged(bool bCategoryLocked); // Flags: Event|Protected|BlueprintEvent 0x7FF414BF4EF8
		void OnLockedProgressUpdated(int32_t CurrentlyOwnedBeforeCategory, int32_t TotalRewardsBeforeCategory, float LockedProgress); // Flags: Event|Protected|BlueprintEvent 0x7FF414BF4E18
		void FocusTile(int32_t Index); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BF4D38
	};


	// Class BattlePassBase.FortBattlePassCustomSkinPageBase
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x1D8 (0x5D0 - 0x3F8)
	class UFortBattlePassCustomSkinPageBase : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData03_3[0x1B0]; // 0x3F8(0x1B0) UNKNOWN PROPERTY
		UScrollBox ScrollBox_Categories; // 0x5A8(0x8)
		UFortDynamicEntryBox FortDynamicEntryBox_Categories; // 0x5B0(0x8)
		unsigned char UnknownData04_6[0x8]; // 0x5B8(0x8) UNKNOWN PROPERTY
		UBattlePassEnabledInputData EquipEnabledData; // 0x5C0(0x8)
		unsigned char UnknownData05_7[0x8]; // 0x5C8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BattlePassBase.FortBattlePassCustomSkinPageBase");
			return ret;
		}
	};


	// Class BattlePassBase.FortBattlePassBulkBuyPageBase
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x1A0 (0x598 - 0x3F8)
	class UFortBattlePassBulkBuyPageBase : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData03_3[0x118]; // 0x3F8(0x118) UNKNOWN PROPERTY
		UCommonButtonBase Button_Addition; // 0x510(0x8)
		UCommonButtonBase Button_Subtraction; // 0x518(0x8)
		UDynamicEntryBox DynamicEntryBox_TilesEntries; // 0x520(0x8)
		UCommonVisibilitySwitcher Switcher_BottomButtons; // 0x528(0x8)
		UFortCTAButton Button_BuyLevels; // 0x530(0x8)
		UFortCTAButton Button_ClaimReward; // 0x538(0x8)
		UWidget Widget_LevelUpMessagePremium; // 0x540(0x8)
		UAthenaSeasonItemData_BattleStar SeasonData_BattleStar; // 0x548(0x8)
		unsigned char UnknownData04_6[0x18]; // 0x550(0x18) UNKNOWN PROPERTY
		UAthenaSeasonItemDefinition SeasonItemDefinition; // 0x568(0x8)
		UFortBattlePassTile FocusedReward; // 0x570(0x8)
		unsigned char UnknownData05_6[0x18]; // 0x578(0x18) UNKNOWN PROPERTY
		UScrollBox ScrollBox_Pages; // 0x590(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BattlePassBase.FortBattlePassBulkBuyPageBase");
			return ret;
		}

		void OnRewardCountChanged(int32_t Count); // Flags: Event|Public|BlueprintEvent 0x7FF414BF5438
		void OnPageRangeChanged(int32_t FromPage, int32_t ToPage); // Flags: Event|Public|BlueprintEvent 0x7FF414BF5358
		void OnCostChanged(int32_t Cost); // Flags: Event|Public|BlueprintEvent 0x7FF414BF5278
		void HandleUserScrolled(float ScrollAmount); // Flags: Final|Native|Protected 0x7FF414BF5198
	};


	// Class BattlePassBase.FortBattlePassCheckBoxButton
	// Inherited from UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x13A0 - 0x1390)
	class UFortBattlePassCheckBoxButton : public UCommonButtonBase	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0x1390(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BattlePassBase.FortBattlePassCheckBoxButton");
			return ret;
		}

		void OnStateChanged(bool bNewIsChecked); // Flags: Event|Protected|BlueprintEvent 0x7FF414BF5518
	};


	// Class BattlePassBase.FortBattlePassContext
	// Inherited from UBlueprintContextBase -> USubsystem -> UObject
	// Size: 0x78 (0xA8 - 0x30)
	class UFortBattlePassContext : public UBlueprintContextBase	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x30(0x8) UNKNOWN PROPERTY
		TArray CustomizationPageSeasonalResources; // 0x38(0x10)
		TArray AllSeasonalResources; // 0x48(0x10)
		TMap RewardPageSeasonalResources; // 0x58(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BattlePassBase.FortBattlePassContext");
			return ret;
		}

		TArray GetSeasonalCurrencies(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BF5A58
		FText GetLevelPurchaseDisclaimerText(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BF5978
		FText GetDefaultDisclaimerText(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BF5898
		FText GetCurrentSeasonNumberAsText(bool bFullText); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BF57B8
		FText GetCurrentChapterAsText(bool bFullText); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BF56D8
		bool CanPurchaseBattlePassLevel(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BF55F8
	};


	// Class BattlePassBase.FortBattlePassResourcesWidgetBase
	// Inherited from UFortGlobalSeasonResourceWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x2F0 - 0x2E0)
	class UFortBattlePassResourcesWidgetBase : public UFortGlobalSeasonResourceWidget	
	{
	public:
		UClass ResourceCounterClass; // 0x2E0(0x8)
		UDynamicEntryBox EntryBox_ResourceCounters; // 0x2E8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BattlePassBase.FortBattlePassResourcesWidgetBase");
			return ret;
		}

		void ShowResourcesInfoModal(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414BF5C18
		void OnShowMoreInfo(bool bShouldShowMoreInfo); // Flags: Event|Protected|BlueprintEvent 0x7FF414BF5B38
	};


	// Class BattlePassBase.FortBattlePassCurrencyPanel
	// Inherited from UFortBattlePassResourcesWidgetBase -> UFortGlobalSeasonResourceWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x40 (0x330 - 0x2F0)
	class UFortBattlePassCurrencyPanel : public UFortBattlePassResourcesWidgetBase	
	{
	public:
		UHorizontalBox HBox_BattleStarContainer; // 0x2F0(0x8)
		UCommonTextBlock Text_BattleStar; // 0x2F8(0x8)
		UHorizontalBox HBox_CustomSkinContainer; // 0x300(0x8)
		UCommonTextBlock Text_CustomSkin; // 0x308(0x8)
		unsigned char UnknownData01_7[0x20]; // 0x310(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BattlePassBase.FortBattlePassCurrencyPanel");
			return ret;
		}
	};


	// Class BattlePassBase.FortBattlePassDynamicIcon
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x48 (0x300 - 0x2B8)
	class UFortBattlePassDynamicIcon : public UUserWidget	
	{
	public:
		TWeakObjectPtr BattlePassDefaultIcon; // 0x2B8(0x20)
		TWeakObjectPtr BattlePassOwnedIcon; // 0x2D8(0x20)
		UFortLazyImage LazyImage_BattlePassIcon; // 0x2F8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BattlePassBase.FortBattlePassDynamicIcon");
			return ret;
		}

		void OnBattlePassInfoUpdated(bool bOwnsBattlePass); // Flags: Event|Protected|BlueprintEvent|Const 0x7FF414BF5CF8
	};


	// Class BattlePassBase.FortBattlePassLevelCount
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x2C8 - 0x2B8)
	class UFortBattlePassLevelCount : public UUserWidget	
	{
	public:
		UCommonTextBlock Text_LevelCount; // 0x2B8(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x2C0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BattlePassBase.FortBattlePassLevelCount");
			return ret;
		}
	};


	// Class BattlePassBase.FortBattlePassPrerequisiteHeader
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x2C0 - 0x2B8)
	class UFortBattlePassPrerequisiteHeader : public UUserWidget	
	{
	public:
		UTextBlock Text_Prerequisite; // 0x2B8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BattlePassBase.FortBattlePassPrerequisiteHeader");
			return ret;
		}
	};


	// Class BattlePassBase.FortBattlePassPurchaseResourcesWidget
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xC0 (0x4B8 - 0x3F8)
	class UFortBattlePassPurchaseResourcesWidget : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData04_3[0x8]; // 0x3F8(0x8) UNKNOWN PROPERTY
		UCommonButtonBase Button_Addition; // 0x400(0x8)
		UCommonButtonBase Button_BatchAddition; // 0x408(0x8)
		UCommonButtonBase Button_Subtraction; // 0x410(0x8)
		UCommonButtonBase Button_BatchSubtraction; // 0x418(0x8)
		UCommonVisibilitySwitcher Switcher_PurchaseButtons; // 0x420(0x8)
		UFortHoldableButton Button_Purchase; // 0x428(0x8)
		UCommonButtonBase Button_GetVBucks; // 0x430(0x8)
		UCommonButtonBase Button_ReloadMtx; // 0x438(0x8)
		UCommonButtonBase Button_Back; // 0x440(0x8)
		UFortBattlePassCheckBoxButton CheckBox_Bundle; // 0x448(0x8)
		UCommonButtonBase Button_CloseTouch; // 0x450(0x8)
		int32_t CurrentLevel; // 0x458(0x4)
		bool bIsOfferActive; // 0x45C(0x1)
		unsigned char UnknownData05_6[0x3]; // 0x45D(0x3) UNKNOWN PROPERTY
		int32_t CurrentVBucks; // 0x460(0x4)
		int32_t CurrentBattleStars; // 0x464(0x4)
		int32_t BatchNum; // 0x468(0x4)
		bool bOfferUnavailable; // 0x46C(0x1)
		unsigned char UnknownData06_6[0x3]; // 0x46D(0x3) UNKNOWN PROPERTY
		int32_t MaxBundleLevel; // 0x470(0x4)
		int32_t MaxLevel; // 0x474(0x4)
		int32_t MaxLevelPurchases; // 0x478(0x4)
		int32_t BundleAmount; // 0x47C(0x4)
		UFortItemDefinition LevelPreviewItem; // 0x480(0x8)
		UAthenaSeasonItemData_BattleStar BattleStarData; // 0x488(0x8)
		unsigned char UnknownData07_7[0x28]; // 0x490(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BattlePassBase.FortBattlePassPurchaseResourcesWidget");
			return ret;
		}

		void OnUpdatePageUnlockText(FText& PageUnlockText); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414BF63F8
		void OnTotalPriceChanged(int32_t NewPrice); // Flags: Event|Protected|BlueprintEvent 0x7FF414BF6318
		void OnPurchaseAmountChanged(int32_t NewAmount, int32_t LevelsLeft); // Flags: Event|Protected|BlueprintEvent 0x7FF414BF6238
		void OnOfferUnavailable(); // Flags: Event|Protected|BlueprintEvent 0x7FF414BF6158
		void OnAmountChangeButtonClicked(); // Flags: Event|Protected|BlueprintEvent 0x7FF414BF6078
		bool IsReloadMtxEnabled(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414BF5F98
		void HandlePurchaseMultiComplete(bool bSuccess, TArray& PurchasedItems, TArray& OfferIdList); // Flags: Final|Native|Private|HasOutParms 0x7FF414BF5EB8
		void HandlePurchaseComplete(bool bSuccess, TArray& PurchasedItems, FString OfferId); // Flags: Final|Native|Private|HasOutParms 0x7FF414BF5DD8
	};


	// Class BattlePassBase.FortBattlePassResourceCounter
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x300 - 0x2E0)
	class UFortBattlePassResourceCounter : public UCommonUserWidget	
	{
	public:
		UCommonTextBlock Text_ResourceName; // 0x2E0(0x8)
		UFortLazyImage LazyImage_ResourceIcon; // 0x2E8(0x8)
		UCommonTextBlock Text_ResourceCount; // 0x2F0(0x8)
		UFortPersistentResourceItemDefinition CurrentResource; // 0x2F8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BattlePassBase.FortBattlePassResourceCounter");
			return ret;
		}
	};


	// Class BattlePassBase.FortBattlePassRewardGrid
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xC8 (0x4C0 - 0x3F8)
	class UFortBattlePassRewardGrid : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData02_3[0x68]; // 0x3F8(0x68) UNKNOWN PROPERTY
		UClass GridTileClass; // 0x460(0x8)
		UClass GridEmptyTileClass; // 0x468(0x8)
		FVector2D GridCellPadding; // 0x470(0x10)
		UFortBattlePassRewardGridHeader PageHeader; // 0x480(0x8)
		UGridPanel GridPanel_Rewards; // 0x488(0x8)
		UFortBattlePassTileBase DefaultFocusTile; // 0x490(0x8)
		TWeakObjectPtr LastFocusedTile; // 0x498(0x8)
		unsigned char UnknownData03_7[0x20]; // 0x4A0(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BattlePassBase.FortBattlePassRewardGrid");
			return ret;
		}

		void OnPageUnselected(); // Flags: Event|Public|BlueprintEvent 0x7FF414BF65B8
		void OnPageSelected(); // Flags: Event|Public|BlueprintEvent 0x7FF414BF64D8
	};


	// Class BattlePassBase.FortBattlePassRewardGridHeader
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x2C0 - 0x2B8)
	class UFortBattlePassRewardGridHeader : public UUserWidget	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x2B8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BattlePassBase.FortBattlePassRewardGridHeader");
			return ret;
		}

		void OnSetPageType(ERewardPageType PageType); // Flags: Event|Public|BlueprintEvent 0x7FF414BF6BD8
		void OnSetPageCustomName(FText& CustomName); // Flags: Event|Public|HasOutParms|BlueprintEvent 0x7FF414BF6AF8
		void OnPageUnlocked(); // Flags: Event|Public|BlueprintEvent 0x7FF414BF6A18
		void OnPageNumberSet(int32_t InPageNumber); // Flags: Event|Public|BlueprintEvent 0x7FF414BF6938
		void OnPageLocked(int32_t RequiredLevel, int32_t RequiredRewards, bool IsTimeLocked, FTimespan TimeRemaining); // Flags: Event|Public|HasDefaults|BlueprintEvent 0x7FF414BF6858
		void OnBattlePassLevelSet(int32_t BattlePassLevel); // Flags: Event|Public|BlueprintEvent 0x7FF414BF6778
		int32_t GetPageNumber(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BF6698
	};


	// Class BattlePassBase.FortBattlePassRewardTrack
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xA0 (0x498 - 0x3F8)
	class UFortBattlePassRewardTrack : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData02_3[0x50]; // 0x3F8(0x50) UNKNOWN PROPERTY
		UClass RewardTileClass; // 0x448(0x8)
		UClass RewardEmptyTileClass; // 0x450(0x8)
		UClass PrerequisiteHeaderClass; // 0x458(0x8)
		FVector2D GridCellPadding; // 0x460(0x10)
		UGridPanel GridPanel_Rewards; // 0x470(0x8)
		UFortBattlePassTileBase DefaultFocusTile; // 0x478(0x8)
		TWeakObjectPtr LastFocusedTile; // 0x480(0x8)
		unsigned char UnknownData03_7[0x10]; // 0x488(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BattlePassBase.FortBattlePassRewardTrack");
			return ret;
		}

		void OnPageUnselected(); // Flags: Event|Public|BlueprintEvent 0x7FF414BF6D98
		void OnPageSelected(); // Flags: Event|Public|BlueprintEvent 0x7FF414BF6CB8
	};


	// Class BattlePassBase.FortBattlePassTileBase
	// Inherited from UFortHoldableButton -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xC8 (0x14F0 - 0x1428)
	class UFortBattlePassTileBase : public UFortHoldableButton	
	{
	public:
		unsigned char UnknownData03_3[0x8]; // 0x1428(0x8) UNKNOWN PROPERTY
		ERewardPageType RewardPageType; // 0x1430(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x1431(0x7) UNKNOWN PROPERTY
		USizeBox SizeBox_Content; // 0x1438(0x8)
		TMap TileColors; // 0x1440(0x50)
		FLinearColor OverlayDimColor; // 0x1490(0x10)
		FVector2D TileDesiredCellSpan; // 0x14A0(0x10)
		float UnitHeight; // 0x14B0(0x4)
		float UnitWidth; // 0x14B4(0x4)
		unsigned char UnknownData05_7[0x38]; // 0x14B8(0x38) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BattlePassBase.FortBattlePassTileBase");
			return ret;
		}

		void SetState(BattlePassTileAvailabilityStates NewState); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414BF78F8
		void SetSize(EPageItemTileSize TileSize, FVector2D& CellSpacing); // Flags: Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414BF7818
		void OnStateChanged(BattlePassTileAvailabilityStates NewState); // Flags: Event|Protected|BlueprintEvent 0x7FF414BF7738
		void OnSizeChanged(FVector2D& NewSize); // Flags: Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 0x7FF414BF7658
		void OnSetTileColors(); // Flags: Event|Protected|BlueprintEvent 0x7FF414BF7578
		void OnSetRequiresBattlePass(bool bRequiresBP); // Flags: Event|Protected|BlueprintEvent 0x7FF414BF7498
		void OnRevealed(); // Flags: Event|Public|BlueprintEvent 0x7FF414BF73B8
		void OnPeeked(); // Flags: Event|Public|BlueprintEvent 0x7FF414BF72D8
		bool IsOwned(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BF71F8
		bool IsLocked(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BF7118
		bool IsAvailable(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BF7038
		BattlePassTileAvailabilityStates GetState(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414BF6F58
		bool AreAnyGrantedItemsEquipped(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BF6E78
	};


	// Class BattlePassBase.FortBattlePassTile
	// Inherited from UFortBattlePassTileBase -> UFortHoldableButton -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x80 (0x1570 - 0x14F0)
	class UFortBattlePassTile : public UFortBattlePassTileBase	
	{
	public:
		unsigned char UnknownData02_3[0x18]; // 0x14F0(0x18) UNKNOWN PROPERTY
		UFortLazyImage Image_RewardItem; // 0x1508(0x8)
		UImage Image_Currency; // 0x1510(0x8)
		UImage Age_Gating_Item; // 0x1518(0x8)
		bool bIsOnBulkBuyMode; // 0x1520(0x1)
		unsigned char UnknownData03_7[0x4F]; // 0x1521(0x4F) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BattlePassBase.FortBattlePassTile");
			return ret;
		}

		void OnUnpreviewed(); // Flags: Event|Public|BlueprintEvent 0x7FF414BF8378
		void OnUnhighlighted(); // Flags: Event|Protected|BlueprintEvent 0x7FF414BF8298
		void OnTilePreviewCycled(); // Flags: Event|Protected|BlueprintEvent 0x7FF414BF81B8
		void OnSetTrack(bool bIsFreeTrack, bool bOwnsBattlePass); // Flags: Event|Protected|BlueprintEvent 0x7FF414BF80D8
		void OnSetCurrencyAndPrice(EBattlePassCurrencyType Currency, int32_t Price); // Flags: Event|Protected|BlueprintEvent 0x7FF414BF7FF8
		void OnPreviewed(); // Flags: Event|Public|BlueprintEvent 0x7FF414BF7F18
		void OnLockedStateUpdated(bool OwnsBattlePass, bool ParentUnlocked, bool HasRemainingPrerequisites, bool bIsDelayed); // Flags: Event|Protected|BlueprintEvent 0x7FF414BF7E38
		void OnLockedProgressUpdated(float Progress, int32_t CurrentlyOwnedRewards, int32_t NeededRewards); // Flags: Event|Protected|BlueprintEvent 0x7FF414BF7D58
		void OnHighlighted(); // Flags: Event|Protected|BlueprintEvent 0x7FF414BF7C78
		void OnAffordabilityChanged(bool bHasEnougCurrency); // Flags: Event|Protected|BlueprintEvent 0x7FF414BF7B98
		bool IsAffordable(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414BF7AB8
		bool HasPrerequisites(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BF79D8
	};


	// Class BattlePassBase.FortBattlePassTutorialTooltip
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x2F0 - 0x2E0)
	class UFortBattlePassTutorialTooltip : public UCommonUserWidget	
	{
	public:
		UCommonRichTextBlock Text_Tooltip; // 0x2E0(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x2E8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BattlePassBase.FortBattlePassTutorialTooltip");
			return ret;
		}

		void ShowTooltip(); // Flags: Event|Protected|BlueprintEvent 0x7FF414BF86F8
		void SetTooltipEnabled(bool bEnable); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414BF8618
		void SetText(FText Text); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BF8538
		void HideTooltip(); // Flags: Event|Protected|BlueprintEvent 0x7FF414BF8458
	};


	// Class BattlePassBase.RebootRallyQuestPanel
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x2B8 - 0x2B8)
	class URebootRallyQuestPanel : public UUserWidget	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BattlePassBase.RebootRallyQuestPanel");
			return ret;
		}

		void OnRebootRallyEligibilityUpdated(bool bEligible); // Flags: Event|Public|BlueprintEvent 0x7FF414BF87D8
	};

}
