#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: CrewUI
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class CrewUI.BattlePassCrewContentInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UBattlePassCrewContentInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CrewUI.BattlePassCrewContentInterface");
			return ret;
		}
	};


	// Class CrewUI.CrewScreenContentBlockingInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UCrewScreenContentBlockingInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CrewUI.CrewScreenContentBlockingInterface");
			return ret;
		}

		void BlockScreenContent(bool bBlockScreen, FText& ContentBlockedText); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414CE9D58
	};


	// Class CrewUI.FortProgressiveContentInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortProgressiveContentInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CrewUI.FortProgressiveContentInterface");
			return ret;
		}
	};


	// Class CrewUI.FortTemporaryItemsComponent
	// Inherited from UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x10 (0xB0 - 0xA0)
	class UFortTemporaryItemsComponent : public UControllerComponent	
	{
	public:
		UFortTemporaryItemsManager TemporaryItemsManager; // 0xA0(0x8)
		TWeakObjectPtr AthenaProfile; // 0xA8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CrewUI.FortTemporaryItemsComponent");
			return ret;
		}

		void OnAthenaProfileInitialized(); // Flags: Final|Native|Private 0x7FF414CE9E38
	};


	// Class CrewUI.FortTemporaryItemsManager
	// Inherited from UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x30 (0x60 - 0x30)
	class UFortTemporaryItemsManager : public UWorldSubsystem	
	{
	public:
		unsigned char UnknownData01_1[0x30]; // 0x30(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CrewUI.FortTemporaryItemsManager");
			return ret;
		}

		void OnTemporaryItemsStateChanged(); // Flags: Final|Native|Private 0x7FF414CE9F18
	};


	// Class CrewUI.FortTemporaryItemsRewardGroupVM
	// Inherited from UMVVMViewModelBase -> UObject
	// Size: 0x20 (0x88 - 0x68)
	class UFortTemporaryItemsRewardGroupVM : public UMVVMViewModelBase	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x68(0x8) UNKNOWN PROPERTY
		EAthenaCustomizationCategory category; // 0x70(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x71(0x7) UNKNOWN PROPERTY
		TArray Rewards; // 0x78(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CrewUI.FortTemporaryItemsRewardGroupVM");
			return ret;
		}
	};


	// Class CrewUI.FortTemporaryItemsRewardVM
	// Inherited from UMVVMViewModelBase -> UObject
	// Size: 0x18 (0x80 - 0x68)
	class UFortTemporaryItemsRewardVM : public UMVVMViewModelBase	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x68(0x8) UNKNOWN PROPERTY
		UFortAccountItemDefinition ItemDefinition; // 0x70(0x8)
		bool bIsOwned; // 0x78(0x1)
		unsigned char UnknownData03_7[0x7]; // 0x79(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CrewUI.FortTemporaryItemsRewardVM");
			return ret;
		}
	};


	// Class CrewUI.FortTemporaryItemsRow
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x2D8 - 0x2B8)
	class UFortTemporaryItemsRow : public UUserWidget	
	{
	public:
		unsigned char UnknownData01_1[0x20]; // 0x2B8(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CrewUI.FortTemporaryItemsRow");
			return ret;
		}

		void SetTileView(UTileView InTileView); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414CEA0D8
		FText GetCategoryText(EAthenaCustomizationCategory InCategory); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CE9FF8
	};


	// Class CrewUI.FortTemporaryItemsScreenItemInfo
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x18 (0x2F8 - 0x2E0)
	class UFortTemporaryItemsScreenItemInfo : public UCommonUserWidget	
	{
	public:
		UAthenaRewardItemTypeRarityTag Widget_ItemTypeRarityTag; // 0x2E0(0x8)
		UCommonTextBlock Text_ItemName; // 0x2E8(0x8)
		UCommonRichTextBlock RichText_Description; // 0x2F0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CrewUI.FortTemporaryItemsScreenItemInfo");
			return ret;
		}

		void SetData(UFortSubscriptionVM SubscriptionVM, UFortTemporaryItemsRewardVM RewardVM); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414CEA298
		void OnDataSet(bool bValidItem, bool bIsSubscribed, bool IsOwned); // Flags: Event|Protected|BlueprintEvent 0x7FF414CEA1B8
	};


	// Class CrewUI.FortTemporaryItemsTileButton
	// Inherited from UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x13A0 - 0x1390)
	class UFortTemporaryItemsTileButton : public UCommonButtonBase	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x1390(0x8) UNKNOWN PROPERTY
		UFortCosmeticItemCard ItemCard; // 0x1398(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CrewUI.FortTemporaryItemsTileButton");
			return ret;
		}

		void SetupRewardItem(UFortAccountItemDefinition ItemDef); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414CEA378
	};


	// Class CrewUI.FortTemporaryItemsVM
	// Inherited from UFortPerUserViewModel -> UMVVMViewModelBase -> UObject
	// Size: 0x20 (0x90 - 0x70)
	class UFortTemporaryItemsVM : public UFortPerUserViewModel	
	{
	public:
		TArray RewardGroups; // 0x70(0x10)
		FDateTime ExpirationDate; // 0x80(0x8)
		UFortTemporaryItemsManager TemporaryItemsManager; // 0x88(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CrewUI.FortTemporaryItemsVM");
			return ret;
		}
	};


	// Class CrewUI.BattlePassCrewPurchaseButton
	// Inherited from UFortHoldableButton -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x28 (0x1450 - 0x1428)
	class UBattlePassCrewPurchaseButton : public UFortHoldableButton	
	{
	public:
		EBattlePassPurchaseButtonCurrencyType CurrencyType; // 0x1428(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x1429(0x7) UNKNOWN PROPERTY
		UCommonTextBlock Text_Label; // 0x1430(0x8)
		UCommonTextBlock Text_SecondaryLabel; // 0x1438(0x8)
		UCommonTextBlock Text_FinalCost; // 0x1440(0x8)
		UWidget Container_SecondaryLabel; // 0x1448(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CrewUI.BattlePassCrewPurchaseButton");
			return ret;
		}

		void OnCurrencyUpdated(); // Flags: Event|Protected|BlueprintEvent 0x7FF414CEA458
	};


	// Class CrewUI.BattlePassCrewPurchaseContainer
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x80 (0x478 - 0x3F8)
	class UBattlePassCrewPurchaseContainer : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData03_3[0x20]; // 0x3F8(0x20) UNKNOWN PROPERTY
		float CrewUpsellTransitionDelayTime; // 0x418(0x4)
		unsigned char UnknownData04_6[0xC]; // 0x41C(0xC) UNKNOWN PROPERTY
		UCommonActivatableWidgetSwitcher Switcher_ContentContainer; // 0x428(0x8)
		UBattlePassPurchaseScreen BattlePassPurchaseScreen; // 0x430(0x8)
		UWidgetAnimation Intro; // 0x438(0x8)
		UWidgetAnimation QuickIntro; // 0x440(0x8)
		UWidgetAnimation CrewBenefitsIntro; // 0x448(0x8)
		UClass CrewSubscriptionErrorModalClass; // 0x450(0x8)
		unsigned char UnknownData05_7[0x20]; // 0x458(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CrewUI.BattlePassCrewPurchaseContainer");
			return ret;
		}

		void OnTriggerIntroAnimation(bool bCanClaimRewards); // Flags: Event|Protected|BlueprintEvent 0x7FF414CEA618
		void OnContentStateUpdated(EBattlePassCrewContentState InState, bool bInScreenOpened); // Flags: Event|Protected|BlueprintEvent 0x7FF414CEA538
	};


	// Class CrewUI.BattlePassSeasonHeading
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x2E8 - 0x2E0)
	class UBattlePassSeasonHeading : public UCommonUserWidget	
	{
	public:
		UCommonRichTextBlock Text_Season; // 0x2E0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CrewUI.BattlePassSeasonHeading");
			return ret;
		}
	};


	// Class CrewUI.BattlePassPurchaseScreen
	// Inherited from UCMSBackgroundWidget -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x138 (0x570 - 0x438)
	class UBattlePassPurchaseScreen : public UCMSBackgroundWidget	
	{
	public:
		unsigned char UnknownData03_3[0x3C]; // 0x438(0x3C) UNKNOWN PROPERTY
		float CrewTransitionDelayTime; // 0x474(0x4)
		unsigned char UnknownData04_6[0x70]; // 0x478(0x70) UNKNOWN PROPERTY
		UClass PurchaseCompleteModal; // 0x4E8(0x8)
		UCommonButtonBase Button_ToCrew; // 0x4F0(0x8)
		UBattlePassCrewPurchaseButton Button_Purchase; // 0x4F8(0x8)
		UCommonButtonBase Button_MoreInfo; // 0x500(0x8)
		UCommonButtonBase Button_GiftBattlePass; // 0x508(0x8)
		UBattlePassCrewPurchaseButton Button_ConfirmBase; // 0x510(0x8)
		UBattlePassCrewPurchaseButton Button_ConfirmBundle; // 0x518(0x8)
		UBattlePassSeasonHeading Heading_Primary; // 0x520(0x8)
		UBattlePassSeasonHeading Heading_Secondary; // 0x528(0x8)
		UCommonRichTextBlock RichText_Disclaimer; // 0x530(0x8)
		UCommonTextBlock Text_Description; // 0x538(0x8)
		UCommonAnimatedSwitcher Switcher_PurchaseState; // 0x540(0x8)
		FString SourceContextName; // 0x548(0x10)
		unsigned char UnknownData05_7[0x18]; // 0x558(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CrewUI.BattlePassPurchaseScreen");
			return ret;
		}

		void RefreshFocus(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414CEAB58
		void OnShowNavButtonNotification(bool bShowNotification); // Flags: Event|Protected|BlueprintEvent 0x7FF414CEAA78
		void OnSetScreenInteractable(bool bInteractable); // Flags: Event|Protected|BlueprintEvent 0x7FF414CEA998
		void OnSetNavButtonNotificationText(FText& NotificationText); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414CEA8B8
		void OnPurchaseStateChanged(EBattlePassPurchaseState InCurrentState); // Flags: Event|Protected|BlueprintEvent 0x7FF414CEA7D8
		void OnPurchaseConfirmed(); // Flags: Event|Protected|BlueprintEvent 0x7FF414CEA6F8
	};


	// Class CrewUI.CrewMultiSubscriptionAlertModal
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xD0 (0x4C8 - 0x3F8)
	class UCrewMultiSubscriptionAlertModal : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x3F8(0x8) UNKNOWN PROPERTY
		UDynamicEntryBox EntryBox_BulletPoints; // 0x400(0x8)
		UCommonButtonBase Button_OpenHowToURL; // 0x408(0x8)
		UCommonButtonBase Button_TextURL; // 0x410(0x8)
		UCommonButtonBase Button_DoNotRemind; // 0x418(0x8)
		UCommonButtonBase Button_Close; // 0x420(0x8)
		UCommonButtonBase Button_TouchClose; // 0x428(0x8)
		TArray BulletPoints; // 0x430(0x10)
		TMap AppStorePlatformMapping; // 0x440(0x50)
		FString HowToCancelURL; // 0x490(0x10)
		unsigned char UnknownData03_6[0x18]; // 0x4A0(0x18) UNKNOWN PROPERTY
		FText PlatformTextStyle; // 0x4B8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CrewUI.CrewMultiSubscriptionAlertModal");
			return ret;
		}

		void OnSetHowToCancelURL(FString MoreInfoUrl); // Flags: Event|Protected|BlueprintEvent 0x7FF414CEAC38
	};


	// Class CrewUI.CrewPriceChangeAcknowledgeModal
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x140 (0x538 - 0x3F8)
	class UCrewPriceChangeAcknowledgeModal : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x3F8(0x8) UNKNOWN PROPERTY
		UCommonButtonBase Button_Accept; // 0x400(0x8)
		UCommonButtonBase Button_CancelSubscription; // 0x408(0x8)
		UCommonButtonBase Button_MoreInfo; // 0x410(0x8)
		UCommonButtonBase Button_TextURL; // 0x418(0x8)
		TWeakObjectPtr CancellationInfoModalClass; // 0x420(0x20)
		unsigned char UnknownData03_7[0xF8]; // 0x440(0xF8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CrewUI.CrewPriceChangeAcknowledgeModal");
			return ret;
		}

		void OnSetPriceChangeAcknowledgeTitle(FText& Title); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414CEB4F8
		void OnSetPriceChangeAcknowledgeMoreInfoUrl(FText& MoreInfoUrl); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414CEB418
		void OnSetPriceChangeAcknowledgeMoreInfoText(FText& ConfirmButtonText); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414CEB338
		void OnSetPriceChangeAcknowledgeConfirmButtonText(FText& ConfirmButtonText); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414CEB258
		void OnSetPriceChangeAcknowledgeCheckboxText(FText& CheckboxText); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414CEB178
		void OnSetPriceChangeAcknowledgeCancelSubscriptionButtonText(FText& CancelSubscriptionButtonText); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414CEB098
		void OnSetPriceChangeAcknowledgeBodyText(FText& BodyText); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414CEAFB8
		void OnSetPriceChangeAcknowledgeBodyTable(TArray& PriceChangeByRegionRows); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414CEAED8
		void OnModalBackout(); // Flags: Event|Protected|BlueprintEvent 0x7FF414CEADF8
		void ExitModal(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414CEAD18
	};


	// Class CrewUI.CrewPurchaseScreen
	// Inherited from UCMSBackgroundWidget -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x1B8 (0x5F0 - 0x438)
	class UCrewPurchaseScreen : public UCMSBackgroundWidget	
	{
	public:
		unsigned char UnknownData02_3[0x78]; // 0x438(0x78) UNKNOWN PROPERTY
		bool bManagementModeEnabled; // 0x4B0(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x4B1(0x7) UNKNOWN PROPERTY
		UWidget ContentPurchasedFocusWidget; // 0x4B8(0x8)
		UWidget FocusWidget; // 0x4C0(0x8)
		UCommonButtonGroupBase ButtonGroup_BenefitsTiles; // 0x4C8(0x8)
		TWeakObjectPtr CancellationInfoModalClass; // 0x4D0(0x20)
		TWeakObjectPtr LegalInfoModalClass; // 0x4F0(0x20)
		TWeakObjectPtr ResolveIssueModalClass; // 0x510(0x20)
		TWeakObjectPtr RejoinModalClass; // 0x530(0x20)
		TWeakObjectPtr ContinueModalClass; // 0x550(0x20)
		UCommonButtonBase Button_ToBattlePass; // 0x570(0x8)
		UBattlePassCrewPurchaseButton Button_Purchase; // 0x578(0x8)
		UBattlePassCrewPurchaseButton Button_Rejoin; // 0x580(0x8)
		UBattlePassCrewPurchaseButton Button_Continue; // 0x588(0x8)
		UCommonButtonBase Button_ResolvePayment; // 0x590(0x8)
		UCommonButtonBase Button_WatchTrailer; // 0x598(0x8)
		UCommonButtonBase Button_Terms; // 0x5A0(0x8)
		UCommonButtonBase Button_CancellationInfo; // 0x5A8(0x8)
		UDynamicEntryBox EntryBox_RecurringRewards; // 0x5B0(0x8)
		UDynamicEntryBox EntryBox_LimitedTimeRewards; // 0x5B8(0x8)
		UCrewTileDetails Details_CurrentCrewTile; // 0x5C0(0x8)
		UCommonTextBlock Text_LimitedTime; // 0x5C8(0x8)
		UOverlay Overlay_UserInformation; // 0x5D0(0x8)
		UCommonTextBlock Text_UserInformation; // 0x5D8(0x8)
		UCommonTextBlock Text_CrewDisclaimer; // 0x5E0(0x8)
		UCommonBorder Border_Disclaimer; // 0x5E8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CrewUI.CrewPurchaseScreen");
			return ret;
		}

		void OnUserInformationTextsUpdated(FText& UserInformationText1, FText& UserInformationText2, EMcpSubscriptionState SubscriptionState); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414CEBCD8
		void OnUpdateVBuckRefundVisibility(bool bVisible); // Flags: Event|Protected|BlueprintEvent 0x7FF414CEBBF8
		void OnUpdatePurchaseButtonState(ECrewPurchaseButtonState ButtonState); // Flags: Event|Protected|BlueprintEvent 0x7FF414CEBB18
		void OnShowNavButtonNotification(bool bShowNotification); // Flags: Event|Protected|BlueprintEvent 0x7FF414CEBA38
		void OnSetPaymentLegalText(FText& LegalText); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414CEB958
		void OnSetNavButtonNotificationText(FText& NotificationText); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414CEB878
		void OnContainerTabVisibilityUpdated(bool bTabsVisible, float SpacingAdjustmentForTabs); // Flags: Event|Protected|BlueprintEvent 0x7FF414CEB798
		void EndProgress(); // Flags: Event|Protected|BlueprintEvent 0x7FF414CEB6B8
		void BeginProgress(FText& ProgressLabel); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414CEB5D8
	};


	// Class CrewUI.CrewRewardTile
	// Inherited from UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x60 (0x13F0 - 0x1390)
	class UCrewRewardTile : public UCommonButtonBase	
	{
	public:
		unsigned char UnknownData03_3[0x40]; // 0x1390(0x40) UNKNOWN PROPERTY
		float TileImageStreamoutSeconds; // 0x13D0(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x13D4(0x4) UNKNOWN PROPERTY
		UImage Image_TileImage; // 0x13D8(0x8)
		UCommonTextBlock Text_TileLabel; // 0x13E0(0x8)
		unsigned char UnknownData05_7[0x8]; // 0x13E8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CrewUI.CrewRewardTile");
			return ret;
		}

		void OnUpdateOwnedState(bool bOwned); // Flags: Event|Protected|BlueprintEvent 0x7FF414CEC058
		void OnStartingDownloadTileImage(); // Flags: Event|Protected|BlueprintEvent 0x7FF414CEBF78
		void OnDownloadTileImageComplete(UTexture2D Texture); // Flags: Event|Protected|BlueprintEvent 0x7FF414CEBE98
		bool IsMonthlyBenefit(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414CEBDB8
	};


	// Class CrewUI.CrewSeasonLaunchScreen
	// Inherited from UCMSBackgroundWidget -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xE8 (0x520 - 0x438)
	class UCrewSeasonLaunchScreen : public UCMSBackgroundWidget	
	{
	public:
		unsigned char UnknownData02_3[0x38]; // 0x438(0x38) UNKNOWN PROPERTY
		TWeakObjectPtr ResolveIssueModalClass; // 0x470(0x20)
		UBattlePassSeasonHeading Heading_SeasonInfo; // 0x490(0x8)
		UCommonTextBlock Text_Description; // 0x498(0x8)
		UCommonButtonBase Button_Claim; // 0x4A0(0x8)
		UCommonButtonBase Button_ResolveIssue; // 0x4A8(0x8)
		UCommonButtonBase Button_GiftBattlePass; // 0x4B0(0x8)
		UCommonRichTextBlock RichText_Disclaimer; // 0x4B8(0x8)
		unsigned char UnknownData03_7[0x60]; // 0x4C0(0x60) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CrewUI.CrewSeasonLaunchScreen");
			return ret;
		}
	};


	// Class CrewUI.CrewStandaloneSubscriptionContentContainer
	// Inherited from UFortStandaloneFrontend -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x4D8 - 0x4D0)
	class UCrewStandaloneSubscriptionContentContainer : public UFortStandaloneFrontend	
	{
	public:
		UCrewSubscriptionContentContainer Widget_CrewContentContainer; // 0x4D0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CrewUI.CrewStandaloneSubscriptionContentContainer");
			return ret;
		}
	};


	// Class CrewUI.CrewSubscriptionContentContainer
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xA0 (0x498 - 0x3F8)
	class UCrewSubscriptionContentContainer : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData02_3[0x30]; // 0x3F8(0x30) UNKNOWN PROPERTY
		TArray TabsData; // 0x428(0x10)
		FDataTableRowHandle NextTabInputAction; // 0x438(0x10)
		FDataTableRowHandle PreviousTabInputAction; // 0x448(0x10)
		UDynamicEntryBox EntryBox_Tabs; // 0x458(0x8)
		UCommonButtonGroupBase ButtonGroup_Tabs; // 0x460(0x8)
		UCommonActivatableWidgetSwitcher Switcher_Tabs; // 0x468(0x8)
		UWidget Widget_TabsContainer; // 0x470(0x8)
		float SpacingAdjustmentForTabs; // 0x478(0x4)
		FPrimaryContentSetup ContentSetup; // 0x47C(0x3)
		unsigned char UnknownData03_7[0x19]; // 0x47F(0x19) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CrewUI.CrewSubscriptionContentContainer");
			return ret;
		}

		void OnTabSelected(int32_t TabIndex); // Flags: Event|Protected|BlueprintEvent 0x7FF414CEC138
	};


	// Class CrewUI.CrewSubscriptionErrorModal
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x408 - 0x3F8)
	class UCrewSubscriptionErrorModal : public UCommonActivatableWidget	
	{
	public:
		UCommonButtonBase Button_Close; // 0x3F8(0x8)
		UCommonButtonBase Button_TouchClose; // 0x400(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CrewUI.CrewSubscriptionErrorModal");
			return ret;
		}
	};


	// Class CrewUI.CrewTileDetails
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x48 (0x328 - 0x2E0)
	class UCrewTileDetails : public UCommonUserWidget	
	{
	public:
		unsigned char UnknownData01_3[0x28]; // 0x2E0(0x28) UNKNOWN PROPERTY
		UCommonTextBlock Text_Title; // 0x308(0x8)
		UCommonRichTextBlock RichText_Description; // 0x310(0x8)
		UDynamicEntryBox EntryBox_Tags; // 0x318(0x8)
		UCommonButtonBase Button_MobileMoreInfo; // 0x320(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CrewUI.CrewTileDetails");
			return ret;
		}
	};


	// Class CrewUI.CrewTileDetailsTag
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x2E8 - 0x2E0)
	class UCrewTileDetailsTag : public UCommonUserWidget	
	{
	public:
		UCommonRichTextBlock Text_Label; // 0x2E0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CrewUI.CrewTileDetailsTag");
			return ret;
		}

		void OnTagSetup(ECrewDetailsTag RewardTag, bool bIsOwnedTag); // Flags: Event|Protected|BlueprintEvent 0x7FF414CEC218
	};


	// Class CrewUI.CrewUIGameFeatureAction
	// Inherited from UFortUIGameFeatureAction -> UGameFeatureAction -> UObject
	// Size: 0x120 (0x148 - 0x28)
	class UCrewUIGameFeatureAction : public UFortUIGameFeatureAction	
	{
	public:
		TWeakObjectPtr BattlePassCrewContainerClass; // 0x28(0x20)
		TWeakObjectPtr CrewContentContainerClass; // 0x48(0x20)
		TWeakObjectPtr CrewStandaloneContentContainerClass; // 0x68(0x20)
		TWeakObjectPtr CrewPurchaseScreenClass; // 0x88(0x20)
		TWeakObjectPtr ProgressionScreenClass; // 0xA8(0x20)
		TWeakObjectPtr TemporaryItemsScreenClass; // 0xC8(0x20)
		TWeakObjectPtr CrewPriceChangeAcknowledgeModalClass; // 0xE8(0x20)
		TWeakObjectPtr MultiSubAlertModalClass; // 0x108(0x20)
		TArray ProgressiveCosmeticSets; // 0x128(0x10)
		unsigned char UnknownData01_7[0x10]; // 0x138(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CrewUI.CrewUIGameFeatureAction");
			return ret;
		}
	};


	// Class CrewUI.FortProgressiveContentContainer
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x50 (0x448 - 0x3F8)
	class UFortProgressiveContentContainer : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData01_3[0x38]; // 0x3F8(0x38) UNKNOWN PROPERTY
		UCommonActivatableWidgetSwitcher Switcher_PrimaryContent; // 0x430(0x8)
		UFortProgressiveTableOfContentsScreen Widget_ProgressiveTableOfContentsScreen; // 0x438(0x8)
		UFortProgressiveItemScreen Widget_ProgressiveItemScreen; // 0x440(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CrewUI.FortProgressiveContentContainer");
			return ret;
		}
	};


	// Class CrewUI.FortProgressiveItemDetailsWidget
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x28 (0x2E0 - 0x2B8)
	class UFortProgressiveItemDetailsWidget : public UUserWidget	
	{
	public:
		UCommonTextBlock Text_CosmeticStage; // 0x2B8(0x8)
		UCommonRichTextBlock Text_UnlockCriteria; // 0x2C0(0x8)
		UWidget Widget_UnlockCriteriaContainer; // 0x2C8(0x8)
		UAthenaRewardItemTypeRarityTag Widget_ItemTypeRarityTag; // 0x2D0(0x8)
		UWidget Tag_Owned; // 0x2D8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CrewUI.FortProgressiveItemDetailsWidget");
			return ret;
		}
	};


	// Class CrewUI.FortProgressiveScreenBase
	// Inherited from UFortItemPreviewScreen -> UFortActivatablePanel -> UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x78 (0x798 - 0x720)
	class UFortProgressiveScreenBase : public UFortItemPreviewScreen	
	{
	public:
		unsigned char UnknownData02_3[0x64]; // 0x720(0x64) UNKNOWN PROPERTY
		float RewardPreviewTime; // 0x784(0x4)
		unsigned char UnknownData03_7[0x10]; // 0x788(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CrewUI.FortProgressiveScreenBase");
			return ret;
		}

		void BP_OnContainerTabVisibilityUpdated(bool bTabsVisible, float SpacingAdjustmentForTabs); // Flags: Event|Protected|BlueprintEvent 0x7FF414CEC2F8
	};


	// Class CrewUI.FortProgressiveItemScreen
	// Inherited from UFortProgressiveScreenBase -> UFortItemPreviewScreen -> UFortActivatablePanel -> UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x108 (0x8A0 - 0x798)
	class UFortProgressiveItemScreen : public UFortProgressiveScreenBase	
	{
	public:
		UWidget ContentPurchasedFocusWidget; // 0x798(0x8)
		UCommonButtonBase Button_Back; // 0x7A0(0x8)
		UCommonButtonBase Button_TouchBack; // 0x7A8(0x8)
		UCommonButtonBase Button_MoreInfo; // 0x7B0(0x8)
		UBattlePassCrewPurchaseButton Button_Subscribe; // 0x7B8(0x8)
		UCommonButtonBase Button_PreviewStyles; // 0x7C0(0x8)
		UCommonTextBlock Text_ExpirationFinePrint; // 0x7C8(0x8)
		UCommonTextBlock Text_NewStagesUnlockFinePrint; // 0x7D0(0x8)
		UDynamicEntryBox EntryBox_StagesPips; // 0x7D8(0x8)
		UCommonButtonGroupBase ButtonGroup_StagesPips; // 0x7E0(0x8)
		UFortProgressiveItemDetailsWidget Widget_ProgressiveItemDetails; // 0x7E8(0x8)
		UFortProgressiveStageList Widget_ProgressiveStageList; // 0x7F0(0x8)
		UFortProgressiveItemStateTitleWidget ProgressiveItemStateTitle; // 0x7F8(0x8)
		TWeakObjectPtr MoreInfoModalClass; // 0x800(0x20)
		FName SubscribedMaterialParameterName; // 0x820(0x4)
		unsigned char UnknownData01_7[0x7C]; // 0x824(0x7C) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CrewUI.FortProgressiveItemScreen");
			return ret;
		}

		void OnUpdateSubscriptionState(bool bSubscribed); // Flags: Event|Protected|BlueprintEvent 0x7FF414CEC598
		void OnItemSelected(); // Flags: Event|Protected|BlueprintEvent 0x7FF414CEC4B8
		void OnErrorStateTextUpdated(FText& ErrorStateText); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414CEC3D8
	};


	// Class CrewUI.FortProgressiveItemStateTitleWidget
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x2B8 - 0x2B8)
	class UFortProgressiveItemStateTitleWidget : public UUserWidget	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CrewUI.FortProgressiveItemStateTitleWidget");
			return ret;
		}

		void BP_OnSetHeaderInfo(FText& Subheading, bool bSubscribed, int32_t UnlockedStages, int32_t MaxStages); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414CEC678
	};


	// Class CrewUI.FortProgressiveItemWidget
	// Inherited from UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x80 (0x1410 - 0x1390)
	class UFortProgressiveItemWidget : public UCommonButtonBase	
	{
	public:
		UAthenaItemShopReactiveTileText TileText_ItemName; // 0x1390(0x8)
		FProgressiveStageItemInfo StageItemInfo; // 0x1398(0x60)
		unsigned char UnknownData01_7[0x18]; // 0x13F8(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CrewUI.FortProgressiveItemWidget");
			return ret;
		}

		void OnUnhighlighted(); // Flags: Event|Protected|BlueprintEvent 0x7FF414CECAD8
		void OnTileMaterialLoaded(bool bSubscribed); // Flags: Event|Protected|BlueprintEvent 0x7FF414CEC9F8
		void OnStageItemChanged(FProgressiveStageItemInfo& InStageItemInfo); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414CEC918
		void OnPeekStateChanged(bool bIsInPeekState); // Flags: Event|Protected|BlueprintEvent 0x7FF414CEC838
		void OnHighlighted(); // Flags: Event|Protected|BlueprintEvent 0x7FF414CEC758
	};


	// Class CrewUI.FortProgressiveSetDetailsWidget
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x30 (0x2E8 - 0x2B8)
	class UFortProgressiveSetDetailsWidget : public UUserWidget	
	{
	public:
		UCommonButtonBase Button_MoreInfo; // 0x2B8(0x8)
		unsigned char UnknownData01_7[0x28]; // 0x2C0(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CrewUI.FortProgressiveSetDetailsWidget");
			return ret;
		}

		void BP_OnUpdateSetDetails(FText& SetName, FText& ExpiringText, bool bCompleted); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414CECBB8
	};


	// Class CrewUI.FortProgressiveSetList
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x80 (0x478 - 0x3F8)
	class UFortProgressiveSetList : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData03_3[0x8]; // 0x3F8(0x8) UNKNOWN PROPERTY
		UAthenaScrollBox ScrollBox_SetList; // 0x400(0x8)
		UFortSwipePanel SwipePanel_Navigation; // 0x408(0x8)
		UCommonButtonGroupBase ButtonGroup_SetTiles; // 0x410(0x8)
		int32_t NumTilesPerPage; // 0x418(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x41C(0x4) UNKNOWN PROPERTY
		TArray SetTiles; // 0x420(0x10)
		unsigned char UnknownData05_7[0x48]; // 0x430(0x48) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CrewUI.FortProgressiveSetList");
			return ret;
		}

		void ClearSetTiles(); // Flags: Event|Protected|BlueprintEvent 0x7FF414CECD78
		UFortProgressiveSetTile AddSetTile(); // Flags: Event|Protected|BlueprintEvent 0x7FF414CECC98
	};


	// Class CrewUI.FortProgressiveSetTile
	// Inherited from UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xA0 (0x1430 - 0x1390)
	class UFortProgressiveSetTile : public UCommonButtonBase	
	{
	public:
		unsigned char UnknownData01_1[0xA0]; // 0x1390(0xA0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CrewUI.FortProgressiveSetTile");
			return ret;
		}

		void BP_OnTileMaterialLoaded(bool bSubscribed); // Flags: Event|Protected|BlueprintEvent 0x7FF414CECF38
		void BP_OnInitializeSetInfo(FProgressiveSetInfo& InSetInfo, FText& BottomText, FText& BottomSubtext, bool bSubscribed); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414CECE58
	};


	// Class CrewUI.FortProgressiveStageList
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x50 (0x448 - 0x3F8)
	class UFortProgressiveStageList : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData03_3[0x18]; // 0x3F8(0x18) UNKNOWN PROPERTY
		UCommonButtonGroupBase ButtonGroup_StageItems; // 0x410(0x8)
		UAthenaScrollBox ScrollBox_StageList; // 0x418(0x8)
		UFortSwipePanel SwipePanel_Navigation; // 0x420(0x8)
		unsigned char UnknownData04_6[0x8]; // 0x428(0x8) UNKNOWN PROPERTY
		TArray Stages; // 0x430(0x10)
		unsigned char UnknownData05_7[0x8]; // 0x440(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CrewUI.FortProgressiveStageList");
			return ret;
		}

		void SelectStageInDirection(int32_t Direction); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414CED1D8
		void ClearStageWidgets(); // Flags: Event|Protected|BlueprintEvent 0x7FF414CED0F8
		UFortProgressiveStageWidget AddStageWidget(); // Flags: Event|Protected|BlueprintEvent 0x7FF414CED018
	};


	// Class CrewUI.FortProgressiveStageWidget
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x300 - 0x2E0)
	class UFortProgressiveStageWidget : public UCommonUserWidget	
	{
	public:
		UCommonTextBlock Text_Month; // 0x2E0(0x8)
		unsigned char UnknownData01_7[0x18]; // 0x2E8(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CrewUI.FortProgressiveStageWidget");
			return ret;
		}

		void OnSetTooltipVisible(bool bVisible); // Flags: Event|Protected|BlueprintEvent 0x7FF414CED638
		void OnSetTooltipText(FText& InToolTipText); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414CED558
		void OnPeekStateChanged(bool bIsInPeekState); // Flags: Event|Protected|BlueprintEvent 0x7FF414CED478
		void ClearStageItemWidgets(); // Flags: Event|Protected|BlueprintEvent 0x7FF414CED398
		UFortProgressiveItemWidget AddStageItemWidget(); // Flags: Event|Protected|BlueprintEvent 0x7FF414CED2B8
	};


	// Class CrewUI.FortProgressiveTableOfContentsScreen
	// Inherited from UFortProgressiveScreenBase -> UFortItemPreviewScreen -> UFortActivatablePanel -> UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x88 (0x820 - 0x798)
	class UFortProgressiveTableOfContentsScreen : public UFortProgressiveScreenBase	
	{
	public:
		UWidget ContentPurchasedFocusWidget; // 0x798(0x8)
		UCommonButtonBase Button_Back; // 0x7A0(0x8)
		UCommonButtonBase Button_TouchBack; // 0x7A8(0x8)
		UCommonButtonBase Button_MoreInfo; // 0x7B0(0x8)
		UBattlePassCrewPurchaseButton Button_Subscribe; // 0x7B8(0x8)
		UFortProgressiveSetList Widget_SetList; // 0x7C0(0x8)
		UFortProgressiveSetDetailsWidget Widget_SetDetails; // 0x7C8(0x8)
		UFortProgressiveItemStateTitleWidget Widget_ItemStateTitle; // 0x7D0(0x8)
		UDynamicEntryBox EntryBox_SetPagesPips; // 0x7D8(0x8)
		UCommonButtonGroupBase ButtonGroup_SetPagesPips; // 0x7E0(0x8)
		TWeakObjectPtr MoreInfoModalClass; // 0x7E8(0x20)
		FName SubscribedMaterialParameterName; // 0x808(0x4)
		unsigned char UnknownData01_7[0x14]; // 0x80C(0x14) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CrewUI.FortProgressiveTableOfContentsScreen");
			return ret;
		}

		void BP_OnUpdateSubscriptionState(bool bSubscribed); // Flags: Event|Protected|BlueprintEvent 0x7FF414CEDA98
		void BP_OnUpdateNumTilesAvailable(int32_t NumTiles); // Flags: Event|Protected|BlueprintEvent 0x7FF414CED9B8
		void BP_OnUpdateErrorStateText(FText& ErrorStateText); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414CED8D8
		void BP_OnUpdateBanner(FText& BannerText, bool bAllSetsCompleted, bool bSubscribed); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414CED7F8
		void BP_OnSetDescriptionText(FText& ProductDescription); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414CED718
	};


	// Class CrewUI.FortTemporaryItemsScreen
	// Inherited from UFortItemPreviewScreen -> UFortActivatablePanel -> UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xC8 (0x7E8 - 0x720)
	class UFortTemporaryItemsScreen : public UFortItemPreviewScreen	
	{
	public:
		unsigned char UnknownData03_3[0x60]; // 0x720(0x60) UNKNOWN PROPERTY
		UVerticalBox VerticalBox_CategoryList; // 0x780(0x8)
		unsigned char UnknownData04_6[0x18]; // 0x788(0x18) UNKNOWN PROPERTY
		UCommonButtonBase Button_Back; // 0x7A0(0x8)
		UCommonButtonBase Button_TouchBack; // 0x7A8(0x8)
		UCommonButtonBase Button_MoreInfo; // 0x7B0(0x8)
		UFortTemporaryItemsScreenItemInfo Widget_Description; // 0x7B8(0x8)
		TWeakObjectPtr MoreInfoModalClass; // 0x7C0(0x20)
		unsigned char UnknownData05_7[0x8]; // 0x7E0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CrewUI.FortTemporaryItemsScreen");
			return ret;
		}

		void SetupRowEntry(UFortTemporaryItemsRow RewardRow); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414CEDE18
		UFortSubscriptionVM GetSubscriptionVM(); // Flags: Event|Protected|BlueprintEvent 0x7FF414CEDD38
		FText GetRemainingDaysLabel(UFortTemporaryItemsVM TemporaryItemsVM); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414CEDC58
		void BP_OnContainerTabVisibilityUpdated(bool bTabsVisible, float SpacingAdjustmentForTabs); // Flags: Event|Protected|BlueprintEvent 0x7FF414CEDB78
	};

}
