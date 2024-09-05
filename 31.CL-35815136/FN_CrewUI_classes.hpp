#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: CrewUI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

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

		void BlockScreenContent(bool bBlockScreen, FText& ContentBlockedText); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
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
		UFortTemporaryItemsManager* TemporaryItemsManager; // 0xA0(0x8)
		TWeakObjectPtr<UFortMcpProfileAthena*> AthenaProfile; // 0xA8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CrewUI.FortTemporaryItemsComponent");
			return ret;
		}

		void OnAthenaProfileInitialized(); // Flags: Final|Native|Private, Memory Exec: 0x7FF749B19450(relative to base address)
	};


	// Class CrewUI.FortTemporaryItemsManager
	// Inherited from UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x30 (0x60 - 0x30)
	class UFortTemporaryItemsManager : public UWorldSubsystem	
	{
	public:
		unsigned char UnknownData00_1[0x30]; // 0x30(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CrewUI.FortTemporaryItemsManager");
			return ret;
		}

		void OnTemporaryItemsStateChanged(); // Flags: Final|Native|Private, Memory Exec: 0x7FF75132DDA8(relative to base address)
	};


	// Class CrewUI.FortTemporaryItemsRewardGroupVM
	// Inherited from UMVVMViewModelBase -> UObject
	// Size: 0x20 (0x88 - 0x68)
	class UFortTemporaryItemsRewardGroupVM : public UMVVMViewModelBase	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x68(0x8) UNKNOWN PROPERTY
		EAthenaCustomizationCategory category; // 0x70(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x71(0x7) UNKNOWN PROPERTY
		TArray<UFortTemporaryItemsRewardVM*> Rewards; // 0x78(0x10)

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
		unsigned char UnknownData00_3[0x8]; // 0x68(0x8) UNKNOWN PROPERTY
		UFortAccountItemDefinition* ItemDefinition; // 0x70(0x8)
		bool bIsOwned; // 0x78(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x79(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CrewUI.FortTemporaryItemsRewardVM");
			return ret;
		}
	};


	// Class CrewUI.FortTemporaryItemsRow
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x2D0 - 0x2B0)
	class UFortTemporaryItemsRow : public UUserWidget	
	{
	public:
		unsigned char UnknownData00_1[0x20]; // 0x2B0(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CrewUI.FortTemporaryItemsRow");
			return ret;
		}

		void SetTileView(UTileView* InTileView); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF74EA4CBC8(relative to base address)
		FText GetCategoryText(EAthenaCustomizationCategory InCategory); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75132DA98(relative to base address)
	};


	// Class CrewUI.FortTemporaryItemsScreenItemInfo
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x18 (0x2F0 - 0x2D8)
	class UFortTemporaryItemsScreenItemInfo : public UCommonUserWidget	
	{
	public:
		UAthenaRewardItemTypeRarityTag* Widget_ItemTypeRarityTag; // 0x2D8(0x8)
		UCommonTextBlock* Text_ItemName; // 0x2E0(0x8)
		UCommonRichTextBlock* RichText_Description; // 0x2E8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CrewUI.FortTemporaryItemsScreenItemInfo");
			return ret;
		}

		void SetData(UFortSubscriptionVM* SubscriptionVM, UFortTemporaryItemsRewardVM* RewardVM); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75132DFBC(relative to base address)
		void OnDataSet(bool bValidItem, bool bIsSubscribed, bool IsOwned); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class CrewUI.FortTemporaryItemsTileButton
	// Inherited from UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x13A0 - 0x1390)
	class UFortTemporaryItemsTileButton : public UCommonButtonBase	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x1390(0x8) UNKNOWN PROPERTY
		UFortCosmeticItemCard* ItemCard; // 0x1398(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CrewUI.FortTemporaryItemsTileButton");
			return ret;
		}

		void SetupRewardItem(UFortAccountItemDefinition* ItemDef); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75132E080(relative to base address)
	};


	// Class CrewUI.FortTemporaryItemsVM
	// Inherited from UFortPerUserViewModel -> UMVVMViewModelBase -> UObject
	// Size: 0x20 (0x90 - 0x70)
	class UFortTemporaryItemsVM : public UFortPerUserViewModel	
	{
	public:
		TArray<UFortTemporaryItemsRewardGroupVM*> RewardGroups; // 0x70(0x10)
		FDateTime ExpirationDate; // 0x80(0x8)
		UFortTemporaryItemsManager* TemporaryItemsManager; // 0x88(0x8)

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
		unsigned char UnknownData00_6[0x7]; // 0x1429(0x7) UNKNOWN PROPERTY
		UCommonTextBlock* Text_Label; // 0x1430(0x8)
		UCommonTextBlock* Text_SecondaryLabel; // 0x1438(0x8)
		UCommonTextBlock* Text_FinalCost; // 0x1440(0x8)
		UWidget* Container_SecondaryLabel; // 0x1448(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CrewUI.BattlePassCrewPurchaseButton");
			return ret;
		}

		void OnCurrencyUpdated(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class CrewUI.BattlePassCrewPurchaseContainer
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x80 (0x470 - 0x3F0)
	class UBattlePassCrewPurchaseContainer : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData00_1[0x80]; // 0x3F0(0x80) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CrewUI.BattlePassCrewPurchaseContainer");
			return ret;
		}

		void OnTriggerIntroAnimation(bool bCanClaimRewards); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnContentStateUpdated(EBattlePassCrewContentState InState, bool bInScreenOpened); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class CrewUI.BattlePassSeasonHeading
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x2E0 - 0x2D8)
	class UBattlePassSeasonHeading : public UCommonUserWidget	
	{
	public:
		UCommonRichTextBlock* Text_Season; // 0x2D8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CrewUI.BattlePassSeasonHeading");
			return ret;
		}
	};


	// Class CrewUI.BattlePassPurchaseScreen
	// Inherited from UCMSBackgroundWidget -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x138 (0x568 - 0x430)
	class UBattlePassPurchaseScreen : public UCMSBackgroundWidget	
	{
	public:
		unsigned char UnknownData00_3[0x3C]; // 0x430(0x3C) UNKNOWN PROPERTY
		float CrewTransitionDelayTime; // 0x46C(0x4)
		unsigned char UnknownData01_6[0x70]; // 0x470(0x70) UNKNOWN PROPERTY
		UClass* PurchaseCompleteModal; // 0x4E0(0x8)
		UCommonButtonBase* Button_ToCrew; // 0x4E8(0x8)
		UBattlePassCrewPurchaseButton* Button_Purchase; // 0x4F0(0x8)
		UCommonButtonBase* Button_MoreInfo; // 0x4F8(0x8)
		UCommonButtonBase* Button_GiftBattlePass; // 0x500(0x8)
		UBattlePassCrewPurchaseButton* Button_ConfirmBase; // 0x508(0x8)
		UBattlePassCrewPurchaseButton* Button_ConfirmBundle; // 0x510(0x8)
		UBattlePassSeasonHeading* Heading_Primary; // 0x518(0x8)
		UBattlePassSeasonHeading* Heading_Secondary; // 0x520(0x8)
		UCommonRichTextBlock* RichText_Disclaimer; // 0x528(0x8)
		UCommonTextBlock* Text_Description; // 0x530(0x8)
		UCommonAnimatedSwitcher* Switcher_PurchaseState; // 0x538(0x8)
		FString SourceContextName; // 0x540(0x10)
		unsigned char UnknownData02_7[0x18]; // 0x550(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CrewUI.BattlePassPurchaseScreen");
			return ret;
		}

		void RefreshFocus(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF749AAEBDC(relative to base address)
		void OnShowNavButtonNotification(bool bShowNotification); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSetScreenInteractable(bool bInteractable); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSetNavButtonNotificationText(FText& NotificationText); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPurchaseStateChanged(EBattlePassPurchaseState InCurrentState); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPurchaseConfirmed(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class CrewUI.CrewMultiSubscriptionAlertModal
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xD0 (0x4C0 - 0x3F0)
	class UCrewMultiSubscriptionAlertModal : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x3F0(0x8) UNKNOWN PROPERTY
		UDynamicEntryBox* EntryBox_BulletPoints; // 0x3F8(0x8)
		UCommonButtonBase* Button_OpenHowToURL; // 0x400(0x8)
		UCommonButtonBase* Button_TextURL; // 0x408(0x8)
		UCommonButtonBase* Button_DoNotRemind; // 0x410(0x8)
		UCommonButtonBase* Button_Close; // 0x418(0x8)
		UCommonButtonBase* Button_TouchClose; // 0x420(0x8)
		TArray<FText> BulletPoints; // 0x428(0x10)
		TMap<EAppStore, FText> AppStorePlatformMapping; // 0x438(0x50)
		FString HowToCancelURL; // 0x488(0x10)
		unsigned char UnknownData01_6[0x18]; // 0x498(0x18) UNKNOWN PROPERTY
		FText PlatformTextStyle; // 0x4B0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CrewUI.CrewMultiSubscriptionAlertModal");
			return ret;
		}

		void OnSetHowToCancelURL(FString MoreInfoUrl); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class CrewUI.CrewPriceChangeAcknowledgeModal
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x140 (0x530 - 0x3F0)
	class UCrewPriceChangeAcknowledgeModal : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x3F0(0x8) UNKNOWN PROPERTY
		UCommonButtonBase* Button_Accept; // 0x3F8(0x8)
		UCommonButtonBase* Button_CancelSubscription; // 0x400(0x8)
		UCommonButtonBase* Button_MoreInfo; // 0x408(0x8)
		UCommonButtonBase* Button_TextURL; // 0x410(0x8)
		TWeakObjectPtr<UClass*> CancellationInfoModalClass; // 0x418(0x20)
		unsigned char UnknownData01_7[0xF8]; // 0x438(0xF8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CrewUI.CrewPriceChangeAcknowledgeModal");
			return ret;
		}

		void OnSetPriceChangeAcknowledgeTitle(FText& Title); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSetPriceChangeAcknowledgeMoreInfoUrl(FText& MoreInfoUrl); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSetPriceChangeAcknowledgeMoreInfoText(FText& ConfirmButtonText); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSetPriceChangeAcknowledgeConfirmButtonText(FText& ConfirmButtonText); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSetPriceChangeAcknowledgeCheckboxText(FText& CheckboxText); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSetPriceChangeAcknowledgeCancelSubscriptionButtonText(FText& CancelSubscriptionButtonText); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSetPriceChangeAcknowledgeBodyText(FText& BodyText); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSetPriceChangeAcknowledgeBodyTable(TArray<FCrewTableRow>& PriceChangeByRegionRows); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnModalBackout(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExitModal(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF749B1B2C4(relative to base address)
	};


	// Class CrewUI.CrewPurchaseScreen
	// Inherited from UCMSBackgroundWidget -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x178 (0x5A8 - 0x430)
	class UCrewPurchaseScreen : public UCMSBackgroundWidget	
	{
	public:
		unsigned char UnknownData00_3[0x78]; // 0x430(0x78) UNKNOWN PROPERTY
		bool bManagementModeEnabled; // 0x4A8(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x4A9(0x7) UNKNOWN PROPERTY
		UWidget* ContentPurchasedFocusWidget; // 0x4B0(0x8)
		UWidget* FocusWidget; // 0x4B8(0x8)
		TWeakObjectPtr<UClass*> CancellationInfoModalClass; // 0x4C0(0x20)
		TWeakObjectPtr<UClass*> LegalInfoModalClass; // 0x4E0(0x20)
		TWeakObjectPtr<UClass*> ResolveIssueModalClass; // 0x500(0x20)
		TWeakObjectPtr<UClass*> RejoinModalClass; // 0x520(0x20)
		TWeakObjectPtr<UClass*> ContinueModalClass; // 0x540(0x20)
		UCommonButtonBase* Button_ToBattlePass; // 0x560(0x8)
		UBattlePassCrewPurchaseButton* Button_Purchase; // 0x568(0x8)
		UBattlePassCrewPurchaseButton* Button_Rejoin; // 0x570(0x8)
		UBattlePassCrewPurchaseButton* Button_Continue; // 0x578(0x8)
		UCommonButtonBase* Button_ResolvePayment; // 0x580(0x8)
		UCommonButtonBase* Button_WatchTrailer; // 0x588(0x8)
		UCommonButtonBase* Button_Terms; // 0x590(0x8)
		UCommonButtonBase* Button_CancellationInfo; // 0x598(0x8)
		UCommonBorder* Border_Disclaimer; // 0x5A0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CrewUI.CrewPurchaseScreen");
			return ret;
		}

		void ShowDefaultData(bool bFocusFirstReward); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RequestTabTileMoreInfo(ESubscriptionContentTab SubscriptionContentTab); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF75132DDE4(relative to base address)
		void RequestCrewPackMoreInfo(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF75132DDD0(relative to base address)
		void RequestBattlePassMoreInfo(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF75132DDBC(relative to base address)
		void OnUserInformationTextsUpdated(FText& UserInformationText1, FText& UserInformationText2, EMcpSubscriptionState SubscriptionState); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnUpdateVBuckRefundVisibility(bool bVisible); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnUpdatePurchaseButtonState(ECrewPurchaseButtonState ButtonState); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnShowNavButtonNotification(bool bShowNotification); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSetPaymentLegalText(FText& LegalText); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSetNavButtonNotificationText(FText& NotificationText); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnContainerTabVisibilityUpdated(bool bTabsVisible, float SpacingAdjustmentForTabs); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void FireCrewAnalytic(FString Interaction, float HoldTime); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF75132D9A8(relative to base address)
		void EndProgress(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BeginProgress(FText& ProgressLabel); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class CrewUI.CrewSeasonLaunchScreen
	// Inherited from UCMSBackgroundWidget -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xE8 (0x518 - 0x430)
	class UCrewSeasonLaunchScreen : public UCMSBackgroundWidget	
	{
	public:
		unsigned char UnknownData00_3[0x38]; // 0x430(0x38) UNKNOWN PROPERTY
		TWeakObjectPtr<UClass*> ResolveIssueModalClass; // 0x468(0x20)
		UBattlePassSeasonHeading* Heading_SeasonInfo; // 0x488(0x8)
		UCommonTextBlock* Text_Description; // 0x490(0x8)
		UCommonButtonBase* Button_Claim; // 0x498(0x8)
		UCommonButtonBase* Button_ResolveIssue; // 0x4A0(0x8)
		UCommonButtonBase* Button_GiftBattlePass; // 0x4A8(0x8)
		UCommonRichTextBlock* RichText_Disclaimer; // 0x4B0(0x8)
		unsigned char UnknownData01_7[0x60]; // 0x4B8(0x60) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CrewUI.CrewSeasonLaunchScreen");
			return ret;
		}
	};


	// Class CrewUI.CrewStandaloneSubscriptionContentContainer
	// Inherited from UFortStandaloneFrontend -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x4D0 - 0x4C8)
	class UCrewStandaloneSubscriptionContentContainer : public UFortStandaloneFrontend	
	{
	public:
		UCrewSubscriptionContentContainer* Widget_CrewContentContainer; // 0x4C8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CrewUI.CrewStandaloneSubscriptionContentContainer");
			return ret;
		}
	};


	// Class CrewUI.CrewSubscriptionContentContainer
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xA0 (0x490 - 0x3F0)
	class UCrewSubscriptionContentContainer : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData00_3[0x30]; // 0x3F0(0x30) UNKNOWN PROPERTY
		TArray<FCrewSubscriptionContentTabData> TabsData; // 0x420(0x10)
		FDataTableRowHandle NextTabInputAction; // 0x430(0x10)
		FDataTableRowHandle PreviousTabInputAction; // 0x440(0x10)
		UDynamicEntryBox* EntryBox_Tabs; // 0x450(0x8)
		UCommonButtonGroupBase* ButtonGroup_Tabs; // 0x458(0x8)
		UCommonActivatableWidgetSwitcher* Switcher_Tabs; // 0x460(0x8)
		UWidget* Widget_TabsContainer; // 0x468(0x8)
		float SpacingAdjustmentForTabs; // 0x470(0x4)
		FPrimaryContentSetup ContentSetup; // 0x474(0x3)
		unsigned char UnknownData01_7[0x19]; // 0x477(0x19) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CrewUI.CrewSubscriptionContentContainer");
			return ret;
		}

		void OnTabSelected(int32_t TabIndex); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class CrewUI.CrewSubscriptionErrorModal
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x400 - 0x3F0)
	class UCrewSubscriptionErrorModal : public UCommonActivatableWidget	
	{
	public:
		UCommonButtonBase* Button_Close; // 0x3F0(0x8)
		UCommonButtonBase* Button_TouchClose; // 0x3F8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CrewUI.CrewSubscriptionErrorModal");
			return ret;
		}
	};


	// Class CrewUI.CrewUIGameFeatureAction
	// Inherited from UFortUIGameFeatureAction -> UGameFeatureAction -> UObject
	// Size: 0x120 (0x148 - 0x28)
	class UCrewUIGameFeatureAction : public UFortUIGameFeatureAction	
	{
	public:
		TWeakObjectPtr<UClass*> BattlePassCrewContainerClass; // 0x28(0x20)
		TWeakObjectPtr<UClass*> CrewContentContainerClass; // 0x48(0x20)
		TWeakObjectPtr<UClass*> CrewStandaloneContentContainerClass; // 0x68(0x20)
		TWeakObjectPtr<UClass*> CrewPurchaseScreenClass; // 0x88(0x20)
		TWeakObjectPtr<UClass*> ProgressionScreenClass; // 0xA8(0x20)
		TWeakObjectPtr<UClass*> TemporaryItemsScreenClass; // 0xC8(0x20)
		TWeakObjectPtr<UClass*> CrewPriceChangeAcknowledgeModalClass; // 0xE8(0x20)
		TWeakObjectPtr<UClass*> MultiSubAlertModalClass; // 0x108(0x20)
		TArray<FFortProgressiveSet> ProgressiveCosmeticSets; // 0x128(0x10)
		unsigned char UnknownData00_7[0x10]; // 0x138(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CrewUI.CrewUIGameFeatureAction");
			return ret;
		}
	};


	// Class CrewUI.FortProgressiveContentContainer
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x50 (0x440 - 0x3F0)
	class UFortProgressiveContentContainer : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData00_3[0x38]; // 0x3F0(0x38) UNKNOWN PROPERTY
		UCommonActivatableWidgetSwitcher* Switcher_PrimaryContent; // 0x428(0x8)
		UFortProgressiveTableOfContentsScreen* Widget_ProgressiveTableOfContentsScreen; // 0x430(0x8)
		UFortProgressiveItemScreen* Widget_ProgressiveItemScreen; // 0x438(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CrewUI.FortProgressiveContentContainer");
			return ret;
		}
	};


	// Class CrewUI.FortProgressiveItemDetailsWidget
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x28 (0x2D8 - 0x2B0)
	class UFortProgressiveItemDetailsWidget : public UUserWidget	
	{
	public:
		UCommonTextBlock* Text_CosmeticStage; // 0x2B0(0x8)
		UCommonRichTextBlock* Text_UnlockCriteria; // 0x2B8(0x8)
		UWidget* Widget_UnlockCriteriaContainer; // 0x2C0(0x8)
		UAthenaRewardItemTypeRarityTag* Widget_ItemTypeRarityTag; // 0x2C8(0x8)
		UWidget* Tag_Owned; // 0x2D0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CrewUI.FortProgressiveItemDetailsWidget");
			return ret;
		}
	};


	// Class CrewUI.FortProgressiveScreenBase
	// Inherited from UFortItemPreviewScreen -> UFortActivatablePanel -> UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x78 (0x790 - 0x718)
	class UFortProgressiveScreenBase : public UFortItemPreviewScreen	
	{
	public:
		unsigned char UnknownData00_3[0x64]; // 0x718(0x64) UNKNOWN PROPERTY
		float RewardPreviewTime; // 0x77C(0x4)
		unsigned char UnknownData01_7[0x10]; // 0x780(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CrewUI.FortProgressiveScreenBase");
			return ret;
		}

		void BP_OnContainerTabVisibilityUpdated(bool bTabsVisible, float SpacingAdjustmentForTabs); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class CrewUI.FortProgressiveItemScreen
	// Inherited from UFortProgressiveScreenBase -> UFortItemPreviewScreen -> UFortActivatablePanel -> UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x108 (0x898 - 0x790)
	class UFortProgressiveItemScreen : public UFortProgressiveScreenBase	
	{
	public:
		UWidget* ContentPurchasedFocusWidget; // 0x790(0x8)
		UCommonButtonBase* Button_Back; // 0x798(0x8)
		UCommonButtonBase* Button_TouchBack; // 0x7A0(0x8)
		UCommonButtonBase* Button_MoreInfo; // 0x7A8(0x8)
		UBattlePassCrewPurchaseButton* Button_Subscribe; // 0x7B0(0x8)
		UCommonButtonBase* Button_PreviewStyles; // 0x7B8(0x8)
		UCommonTextBlock* Text_ExpirationFinePrint; // 0x7C0(0x8)
		UCommonTextBlock* Text_NewStagesUnlockFinePrint; // 0x7C8(0x8)
		UDynamicEntryBox* EntryBox_StagesPips; // 0x7D0(0x8)
		UCommonButtonGroupBase* ButtonGroup_StagesPips; // 0x7D8(0x8)
		UFortProgressiveItemDetailsWidget* Widget_ProgressiveItemDetails; // 0x7E0(0x8)
		UFortProgressiveStageList* Widget_ProgressiveStageList; // 0x7E8(0x8)
		UFortProgressiveItemStateTitleWidget* ProgressiveItemStateTitle; // 0x7F0(0x8)
		TWeakObjectPtr<UClass*> MoreInfoModalClass; // 0x7F8(0x20)
		FName SubscribedMaterialParameterName; // 0x818(0x4)
		unsigned char UnknownData00_7[0x7C]; // 0x81C(0x7C) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CrewUI.FortProgressiveItemScreen");
			return ret;
		}

		void OnUpdateSubscriptionState(bool bSubscribed); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnItemSelected(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnErrorStateTextUpdated(FText& ErrorStateText); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class CrewUI.FortProgressiveItemStateTitleWidget
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x2B0 - 0x2B0)
	class UFortProgressiveItemStateTitleWidget : public UUserWidget	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CrewUI.FortProgressiveItemStateTitleWidget");
			return ret;
		}

		void BP_OnSetHeaderInfo(FText& Subheading, bool bSubscribed, int32_t UnlockedStages, int32_t MaxStages); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class CrewUI.FortProgressiveItemWidget
	// Inherited from UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x80 (0x1410 - 0x1390)
	class UFortProgressiveItemWidget : public UCommonButtonBase	
	{
	public:
		UAthenaItemShopReactiveTileText* TileText_ItemName; // 0x1390(0x8)
		FProgressiveStageItemInfo StageItemInfo; // 0x1398(0x60)
		unsigned char UnknownData00_7[0x18]; // 0x13F8(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CrewUI.FortProgressiveItemWidget");
			return ret;
		}

		void OnUnhighlighted(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTileMaterialLoaded(bool bSubscribed); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnStageItemChanged(FProgressiveStageItemInfo& InStageItemInfo); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPeekStateChanged(bool bIsInPeekState); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnHighlighted(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class CrewUI.FortProgressiveSetDetailsWidget
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x30 (0x2E0 - 0x2B0)
	class UFortProgressiveSetDetailsWidget : public UUserWidget	
	{
	public:
		UCommonButtonBase* Button_MoreInfo; // 0x2B0(0x8)
		unsigned char UnknownData00_7[0x28]; // 0x2B8(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CrewUI.FortProgressiveSetDetailsWidget");
			return ret;
		}

		void BP_OnUpdateSetDetails(FText& SetName, FText& ExpiringText, bool bCompleted); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class CrewUI.FortProgressiveSetList
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x80 (0x470 - 0x3F0)
	class UFortProgressiveSetList : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x3F0(0x8) UNKNOWN PROPERTY
		UAthenaScrollBox* ScrollBox_SetList; // 0x3F8(0x8)
		UFortSwipePanel* SwipePanel_Navigation; // 0x400(0x8)
		UCommonButtonGroupBase* ButtonGroup_SetTiles; // 0x408(0x8)
		int32_t NumTilesPerPage; // 0x410(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x414(0x4) UNKNOWN PROPERTY
		TArray<UFortProgressiveSetTile*> SetTiles; // 0x418(0x10)
		unsigned char UnknownData02_7[0x48]; // 0x428(0x48) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CrewUI.FortProgressiveSetList");
			return ret;
		}

		void ClearSetTiles(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UFortProgressiveSetTile AddSetTile(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class CrewUI.FortProgressiveSetTile
	// Inherited from UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xA0 (0x1430 - 0x1390)
	class UFortProgressiveSetTile : public UCommonButtonBase	
	{
	public:
		unsigned char UnknownData00_1[0xA0]; // 0x1390(0xA0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CrewUI.FortProgressiveSetTile");
			return ret;
		}

		void BP_OnTileMaterialLoaded(bool bSubscribed); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnInitializeSetInfo(FProgressiveSetInfo& InSetInfo, FText& BottomText, FText& BottomSubtext, bool bSubscribed); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class CrewUI.FortProgressiveStageList
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x50 (0x440 - 0x3F0)
	class UFortProgressiveStageList : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData00_3[0x18]; // 0x3F0(0x18) UNKNOWN PROPERTY
		UCommonButtonGroupBase* ButtonGroup_StageItems; // 0x408(0x8)
		UAthenaScrollBox* ScrollBox_StageList; // 0x410(0x8)
		UFortSwipePanel* SwipePanel_Navigation; // 0x418(0x8)
		unsigned char UnknownData01_6[0x8]; // 0x420(0x8) UNKNOWN PROPERTY
		TArray<UFortProgressiveStageWidget*> Stages; // 0x428(0x10)
		unsigned char UnknownData02_7[0x8]; // 0x438(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CrewUI.FortProgressiveStageList");
			return ret;
		}

		void SelectStageInDirection(int32_t Direction); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75132DE90(relative to base address)
		void ClearStageWidgets(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UFortProgressiveStageWidget AddStageWidget(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class CrewUI.FortProgressiveStageWidget
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x2F8 - 0x2D8)
	class UFortProgressiveStageWidget : public UCommonUserWidget	
	{
	public:
		UCommonTextBlock* Text_Month; // 0x2D8(0x8)
		unsigned char UnknownData00_7[0x18]; // 0x2E0(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CrewUI.FortProgressiveStageWidget");
			return ret;
		}

		void OnSetTooltipVisible(bool bVisible); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSetTooltipText(FText& InToolTipText); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPeekStateChanged(bool bIsInPeekState); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ClearStageItemWidgets(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UFortProgressiveItemWidget AddStageItemWidget(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class CrewUI.FortProgressiveTableOfContentsScreen
	// Inherited from UFortProgressiveScreenBase -> UFortItemPreviewScreen -> UFortActivatablePanel -> UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x88 (0x818 - 0x790)
	class UFortProgressiveTableOfContentsScreen : public UFortProgressiveScreenBase	
	{
	public:
		UWidget* ContentPurchasedFocusWidget; // 0x790(0x8)
		UCommonButtonBase* Button_Back; // 0x798(0x8)
		UCommonButtonBase* Button_TouchBack; // 0x7A0(0x8)
		UCommonButtonBase* Button_MoreInfo; // 0x7A8(0x8)
		UBattlePassCrewPurchaseButton* Button_Subscribe; // 0x7B0(0x8)
		UFortProgressiveSetList* Widget_SetList; // 0x7B8(0x8)
		UFortProgressiveSetDetailsWidget* Widget_SetDetails; // 0x7C0(0x8)
		UFortProgressiveItemStateTitleWidget* Widget_ItemStateTitle; // 0x7C8(0x8)
		UDynamicEntryBox* EntryBox_SetPagesPips; // 0x7D0(0x8)
		UCommonButtonGroupBase* ButtonGroup_SetPagesPips; // 0x7D8(0x8)
		TWeakObjectPtr<UClass*> MoreInfoModalClass; // 0x7E0(0x20)
		FName SubscribedMaterialParameterName; // 0x800(0x4)
		unsigned char UnknownData00_7[0x14]; // 0x804(0x14) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CrewUI.FortProgressiveTableOfContentsScreen");
			return ret;
		}

		void BP_OnUpdateSubscriptionState(bool bSubscribed); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnUpdateNumTilesAvailable(int32_t NumTiles); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnUpdateErrorStateText(FText& ErrorStateText); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnUpdateBanner(FText& BannerText, bool bAllSetsCompleted, bool bSubscribed); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnSetDescriptionText(FText& ProductDescription); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class CrewUI.FortTemporaryItemsScreen
	// Inherited from UFortItemPreviewScreen -> UFortActivatablePanel -> UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0xC8 (0x7E0 - 0x718)
	class UFortTemporaryItemsScreen : public UFortItemPreviewScreen	
	{
	public:
		unsigned char UnknownData00_3[0x60]; // 0x718(0x60) UNKNOWN PROPERTY
		UVerticalBox* VerticalBox_CategoryList; // 0x778(0x8)
		unsigned char UnknownData01_6[0x18]; // 0x780(0x18) UNKNOWN PROPERTY
		UCommonButtonBase* Button_Back; // 0x798(0x8)
		UCommonButtonBase* Button_TouchBack; // 0x7A0(0x8)
		UCommonButtonBase* Button_MoreInfo; // 0x7A8(0x8)
		UFortTemporaryItemsScreenItemInfo* Widget_Description; // 0x7B0(0x8)
		TWeakObjectPtr<UClass*> MoreInfoModalClass; // 0x7B8(0x20)
		unsigned char UnknownData02_7[0x8]; // 0x7D8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CrewUI.FortTemporaryItemsScreen");
			return ret;
		}

		void SetupRowEntry(UFortTemporaryItemsRow* RewardRow); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF75132E118(relative to base address)
		UFortSubscriptionVM GetSubscriptionVM(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		FText GetRemainingDaysLabel(UFortTemporaryItemsVM* TemporaryItemsVM); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75132DB40(relative to base address)
		void BP_OnContainerTabVisibilityUpdated(bool bTabsVisible, float SpacingAdjustmentForTabs); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class CrewUI.CrewBenefitVM
	// Inherited from UMVVMViewModelBase -> UObject
	// Size: 0x58 (0xC0 - 0x68)
	class UCrewBenefitVM : public UMVVMViewModelBase	
	{
	public:
		FText TileLabel; // 0x68(0x10)
		FString TileImageURL; // 0x78(0x10)
		FText Title; // 0x88(0x10)
		FText Description; // 0x98(0x10)
		FString BackgroundImageURL; // 0xA8(0x10)
		ECrewDetailsTag Tag; // 0xB8(0x1)
		ECrewTileType Type; // 0xB9(0x1)
		bool bIsOwned; // 0xBA(0x1)
		bool bHasMoreInfo; // 0xBB(0x1)
		unsigned char UnknownData00_7[0x4]; // 0xBC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CrewUI.CrewBenefitVM");
			return ret;
		}

		bool IsMonthlySubscription(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75132DD6C(relative to base address)
		FText GetTagText(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75132DCD8(relative to base address)
	};


	// Class CrewUI.CrewItemShopDataVM
	// Inherited from UMVVMViewModelBase -> UObject
	// Size: 0x28 (0x90 - 0x68)
	class UCrewItemShopDataVM : public UMVVMViewModelBase	
	{
	public:
		FText HighlightText; // 0x68(0x10)
		EViolatorIntensity HighlightIntensity; // 0x78(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x79(0x7) UNKNOWN PROPERTY
		FString TileImageURL; // 0x80(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CrewUI.CrewItemShopDataVM");
			return ret;
		}
	};


	// Class CrewUI.CrewCancellationInfoVM
	// Inherited from UMVVMViewModelBase -> UObject
	// Size: 0x10 (0x78 - 0x68)
	class UCrewCancellationInfoVM : public UMVVMViewModelBase	
	{
	public:
		TArray<FText> BulletPoints; // 0x68(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CrewUI.CrewCancellationInfoVM");
			return ret;
		}
	};


	// Class CrewUI.CrewPlatformAndCountriesNotificationVM
	// Inherited from UMVVMViewModelBase -> UObject
	// Size: 0x90 (0xF8 - 0x68)
	class UCrewPlatformAndCountriesNotificationVM : public UMVVMViewModelBase	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0x68(0x10) UNKNOWN PROPERTY
		FText Title; // 0x78(0x10)
		FText BodyText; // 0x88(0x10)
		FText CheckboxText; // 0x98(0x10)
		FText ConfirmButtonText; // 0xA8(0x10)
		FText CancelSubscriptionButtonText; // 0xB8(0x10)
		FText MoreInfoText; // 0xC8(0x10)
		FText MoreInfoUrl; // 0xD8(0x10)
		TArray<FCrewTableRow> TableRows; // 0xE8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CrewUI.CrewPlatformAndCountriesNotificationVM");
			return ret;
		}
	};


	// Class CrewUI.CrewSubscriptionModalInfoVM
	// Inherited from UMVVMViewModelBase -> UObject
	// Size: 0x30 (0x98 - 0x68)
	class UCrewSubscriptionModalInfoVM : public UMVVMViewModelBase	
	{
	public:
		FString ModalId; // 0x68(0x10)
		TArray<FText> Entries; // 0x78(0x10)
		FString QrCodeImageUrl; // 0x88(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CrewUI.CrewSubscriptionModalInfoVM");
			return ret;
		}
	};


	// Class CrewUI.CrewSelectionVM
	// Inherited from UFortPerUserViewModel -> UMVVMViewModelBase -> UObject
	// Size: 0x10 (0x80 - 0x70)
	class UCrewSelectionVM : public UFortPerUserViewModel	
	{
	public:
		UCrewBenefitVM* HoveredBenefit; // 0x70(0x8)
		UCrewBenefitVM* SelectedBenefit; // 0x78(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CrewUI.CrewSelectionVM");
			return ret;
		}

		void Reset(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75132DE64(relative to base address)
		void ClearSelectedBenefit(UCrewBenefitVM* Benefit); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75132D918(relative to base address)
		void ClearHoveredBenefit(UCrewBenefitVM* Benefit); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75132D888(relative to base address)
	};


	// Class CrewUI.CrewVM
	// Inherited from UFortPerUserViewModel -> UMVVMViewModelBase -> UObject
	// Size: 0xE0 (0x150 - 0x70)
	class UCrewVM : public UFortPerUserViewModel	
	{
	public:
		EMcpSubscriptionState SubscriptionState; // 0x70(0x1)
		bool bIsBlocked; // 0x71(0x1)
		unsigned char UnknownData00_6[0x6]; // 0x72(0x6) UNKNOWN PROPERTY
		FText Title; // 0x78(0x10)
		FText Description; // 0x88(0x10)
		FString BackgroundURL; // 0x98(0x10)
		FText Disclaimer; // 0xA8(0x10)
		TArray<FText> ProgressiveInfoInfoModalEntries; // 0xB8(0x10)
		FText ProgressiveInfoNewStagesUnlockFinePrint; // 0xC8(0x10)
		TArray<FText> TemporaryItemsInfoModalEntries; // 0xD8(0x10)
		TArray<UFortItemVM*> CrewPackItems; // 0xE8(0x10)
		UCrewCancellationInfoVM* CancellationInfo; // 0xF8(0x8)
		UCrewPlatformAndCountriesNotificationVM* PlatformAndCountriesNotification; // 0x100(0x8)
		UCrewItemShopDataVM* SubscriptionShopData; // 0x108(0x8)
		UCrewItemShopDataVM* CrewShopData; // 0x110(0x8)
		TArray<UCrewBenefitVM*> RecurringBenefits; // 0x118(0x10)
		TArray<UCrewBenefitVM*> LimitedTimeBenefits; // 0x128(0x10)
		TArray<UCrewSubscriptionModalInfoVM*> SubscriptionModals; // 0x138(0x10)
		UCrewBenefitVM* PreviewBenefit; // 0x148(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CrewUI.CrewVM");
			return ret;
		}

		bool IsSubscribed(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75132DD88(relative to base address)
	};

}
