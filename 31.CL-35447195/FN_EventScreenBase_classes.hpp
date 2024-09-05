#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: EventScreenBase
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class EventScreenBase.FortEventScreenData
	// Inherited from UDataAsset -> UObject
	// Size: 0x2B8 (0x2E8 - 0x30)
	class UFortEventScreenData : public UDataAsset	
	{
	public:
		FString EventCMSId; // 0x30(0x10)
		FString AccountResourceName; // 0x40(0x10)
		FString AccountResourceNameGranter; // 0x50(0x10)
		FString LevelOfferId; // 0x60(0x10)
		FString PremiumTrackOfferId; // 0x70(0x10)
		UFortTokenType PremiumTrackPurchasedToken; // 0x80(0x8)
		FGameplayTag VaultWorldTag; // 0x88(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x8C(0x4) UNKNOWN PROPERTY
		FVaultWorldBackgroundData PreviewScreenBackgroundData; // 0x90(0x58)
		TWeakObjectPtr QuestBundle; // 0xE8(0x20)
		TWeakObjectPtr SpecialRewardItem; // 0x108(0x20)
		TWeakObjectPtr SpecialPremiumRewardItem; // 0x128(0x20)
		TArray ItemOverrides; // 0x148(0x10)
		FEventScreenTrackData FreeTrackData; // 0x158(0x30)
		FEventScreenTrackData PremiumTrackData; // 0x188(0x30)
		FGameplayTag QuestCategoryTag; // 0x1B8(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x1BC(0x4) UNKNOWN PROPERTY
		TArray RichTextDecorators; // 0x1C0(0x10)
		TMap RewardTileBackgroundColors; // 0x1D0(0x50)
		FText TimeRemainingFormat; // 0x220(0x10)
		FText CurrencyFormat; // 0x230(0x10)
		TWeakObjectPtr MoreInfoKeyArt; // 0x240(0x20)
		TArray MoreInfoGroups; // 0x260(0x10)
		float RewardPreviewZoomLevel; // 0x270(0x4)
		bool bUseWidgetCameraFraming; // 0x274(0x1)
		unsigned char UnknownData05_6[0x3]; // 0x275(0x3) UNKNOWN PROPERTY
		TWeakObjectPtr MoreInfoModalClass; // 0x278(0x20)
		TWeakObjectPtr PurchaseLevelsModalClass; // 0x298(0x20)
		TWeakObjectPtr PurchasePremiumTrackModalClass; // 0x2B8(0x20)
		TArray CalendarEvents; // 0x2D8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EventScreenBase.FortEventScreenData");
			return ret;
		}
	};


	// Class EventScreenBase.FortEventModalBase
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x408 - 0x3F8)
	class UFortEventModalBase : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0x3F8(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EventScreenBase.FortEventModalBase");
			return ret;
		}

		void CloseModal(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414CF1998
	};


	// Class EventScreenBase.FortEventMoreInfoGroup
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x2B8 - 0x2B8)
	class UFortEventMoreInfoGroup : public UUserWidget	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EventScreenBase.FortEventMoreInfoGroup");
			return ret;
		}

		void OnSetGroupText(FText& Header, FText& Body); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414CF1C38
		void OnIconLoaded(UObject Icon); // Flags: Event|Protected|BlueprintEvent 0x7FF414CF1B58
		void OnEventScreenDataSet(UFortEventScreenData InEventScreenData); // Flags: Event|Protected|BlueprintEvent 0x7FF414CF1A78
	};


	// Class EventScreenBase.FortEventMoreInfoModal
	// Inherited from UFortEventModalBase -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x28 (0x430 - 0x408)
	class UFortEventMoreInfoModal : public UFortEventModalBase	
	{
	public:
		UDynamicEntryBox DynamicEntryBox_Groups; // 0x408(0x8)
		UCommonButtonBase Button_Back; // 0x410(0x8)
		UCommonButtonBase Button_CloseTouch; // 0x418(0x8)
		unsigned char UnknownData01_6[0x8]; // 0x420(0x8) UNKNOWN PROPERTY
		UScrollBox SB_Vertical; // 0x428(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EventScreenBase.FortEventMoreInfoModal");
			return ret;
		}

		void SetModalText(FText& Header, FText& SubHeader, FText& Legal); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414CF2098
		void OnModalBackout(); // Flags: Event|Protected|BlueprintEvent 0x7FF414CF1FB8
		void OnKeyArtLoaded(UObject Icon); // Flags: Event|Protected|BlueprintEvent 0x7FF414CF1ED8
		void OnEventScreenDataSet(UFortEventScreenData InEventScreenData); // Flags: Event|Protected|BlueprintEvent 0x7FF414CF1DF8
		UFortEventScreenData GetEventScreenData(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414CF1D18
	};


	// Class EventScreenBase.FortEventPurchaseLevelsModal
	// Inherited from UFortEventModalBase -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x70 (0x478 - 0x408)
	class UFortEventPurchaseLevelsModal : public UFortEventModalBase	
	{
	public:
		UCommonButtonBase Button_Addition; // 0x408(0x8)
		UCommonButtonBase Button_Subtraction; // 0x410(0x8)
		UCommonButtonBase Button_Purchase; // 0x418(0x8)
		UCommonButtonBase Button_GetVBucks; // 0x420(0x8)
		UCommonButtonBase Button_Back; // 0x428(0x8)
		UCommonButtonBase Button_CloseTouch; // 0x430(0x8)
		UEventScreenListView ListView_RewardPreview; // 0x438(0x8)
		int32_t CurrentResourceValue; // 0x440(0x4)
		int32_t MaxResourceValue; // 0x444(0x4)
		int32_t CurrentVBucks; // 0x448(0x4)
		int32_t OfferResourceQuantity; // 0x44C(0x4)
		bool bAnimateListViewFromEmpty; // 0x450(0x1)
		unsigned char UnknownData01_7[0x27]; // 0x451(0x27) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EventScreenBase.FortEventPurchaseLevelsModal");
			return ret;
		}

		void OnPurchaseAmountChanged(int32_t TotalPrice, int32_t LevelQuantity, int32_t PurchaseQuantity, int32_t ResourceQuantity); // Flags: Event|Protected|BlueprintEvent 0x7FF414CF24F8
		void OnEventScreenDataSet(UFortEventScreenData InEventScreenData); // Flags: Event|Protected|BlueprintEvent 0x7FF414CF2418
		void OnCMSTextApplied(FText& LegalText); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414CF2338
		void OnAmountChangeButtonClicked(); // Flags: Event|Protected|BlueprintEvent 0x7FF414CF2258
		UFortEventScreenData GetEventScreenData(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414CF2178
	};


	// Class EventScreenBase.FortPurchasePremiumTrackBody
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x2B8 - 0x2B8)
	class UFortPurchasePremiumTrackBody : public UUserWidget	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EventScreenBase.FortPurchasePremiumTrackBody");
			return ret;
		}

		void OnPopulate(int32_t BodyIndex, FText& BodyText); // Flags: Event|Public|HasOutParms|BlueprintEvent 0x7FF414CF25D8
	};


	// Class EventScreenBase.FortEventPurchasePremiumTrackModal
	// Inherited from UFortEventModalBase -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x70 (0x478 - 0x408)
	class UFortEventPurchasePremiumTrackModal : public UFortEventModalBase	
	{
	public:
		UDynamicEntryBox DynamicEntryBox_Body; // 0x408(0x8)
		UScrollBox ScrollBox_Body; // 0x410(0x8)
		UFortCTAButton Button_Purchase; // 0x418(0x8)
		UCommonButtonBase Button_GetVBucks; // 0x420(0x8)
		UCommonButtonBase Button_Back; // 0x428(0x8)
		UCommonButtonBase Button_CloseTouch; // 0x430(0x8)
		UCommonButtonBase Button_PreviewReward; // 0x438(0x8)
		int32_t CurrentVBucks; // 0x440(0x4)
		unsigned char UnknownData01_7[0x34]; // 0x444(0x34) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EventScreenBase.FortEventPurchasePremiumTrackModal");
			return ret;
		}

		void OnPriceSet(int32_t Price); // Flags: Event|Protected|BlueprintEvent 0x7FF414CF2958
		void OnEventScreenDataSet(UFortEventScreenData InEventScreenData); // Flags: Event|Protected|BlueprintEvent 0x7FF414CF2878
		void OnCMSTextApplied(FText& HeaderText, FText& LegalText); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414CF2798
		UFortEventScreenData GetEventScreenData(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414CF26B8
	};


	// Class EventScreenBase.FortEventListViewWidgetBase
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x2C0 - 0x2B8)
	class UFortEventListViewWidgetBase : public UUserWidget	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x2B8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EventScreenBase.FortEventListViewWidgetBase");
			return ret;
		}
	};


	// Class EventScreenBase.FortEventRewardTracksWidget
	// Inherited from UFortEventListViewWidgetBase -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x50 (0x310 - 0x2C0)
	class UFortEventRewardTracksWidget : public UFortEventListViewWidgetBase	
	{
	public:
		UDynamicEntryBox DynamicEntryBox_RewardTracks; // 0x2C0(0x8)
		unsigned char UnknownData01_7[0x48]; // 0x2C8(0x48) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EventScreenBase.FortEventRewardTracksWidget");
			return ret;
		}

		void BPSetProgressPercent(); // Flags: Event|Protected|BlueprintEvent 0x7FF414CF2CD8
		void BPSetAllRewardsCollected(bool bAllCollected); // Flags: Event|Protected|BlueprintEvent 0x7FF414CF2BF8
		void BPOnSetRewardItem(int32_t RequiredProgress, int32_t RemainingProgress, float RewardProgressPercent, float PreviewProgressPercent, float OverallProgressPercent, bool bInPreviewMode); // Flags: Event|Protected|BlueprintEvent 0x7FF414CF2B18
		void BPOnEventScreenDataSet(UFortEventScreenData InEventScreenData); // Flags: Event|Protected|BlueprintEvent 0x7FF414CF2A38
	};


	// Class EventScreenBase.FortEventSpacerWidget
	// Inherited from UFortEventListViewWidgetBase -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x2C0 - 0x2C0)
	class UFortEventSpacerWidget : public UFortEventListViewWidgetBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EventScreenBase.FortEventSpacerWidget");
			return ret;
		}
	};


	// Class EventScreenBase.FortEventRewardWidget
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x90 (0x348 - 0x2B8)
	class UFortEventRewardWidget : public UUserWidget	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x2B8(0x8) UNKNOWN PROPERTY
		UCommonButtonBase Button_RewardPreview; // 0x2C0(0x8)
		UFortCosmeticItemCard UserWidget_ItemCard; // 0x2C8(0x8)
		bool bIsTrackOwned; // 0x2D0(0x1)
		bool bPreviewMode; // 0x2D1(0x1)
		bool bInPreviewSelectedState; // 0x2D2(0x1)
		bool bInPremiumUpgradeState; // 0x2D3(0x1)
		unsigned char UnknownData03_7[0x74]; // 0x2D4(0x74) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EventScreenBase.FortEventRewardWidget");
			return ret;
		}

		void SetTrackData(FEventScreenTrackData& TrackData, bool bIsOwned); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414CF39F8
		void SetProgressPercent(float Percent); // Flags: Event|Public|BlueprintEvent 0x7FF414CF3918
		void SetIsBannerItem(bool bIsBanner); // Flags: Event|Protected|BlueprintEvent 0x7FF414CF3838
		void SetInSelectedState(bool bSelected); // Flags: Event|Public|BlueprintEvent 0x7FF414CF3758
		void SetInPreviewSelectedState(bool bSelected); // Flags: Event|Protected|BlueprintEvent 0x7FF414CF3678
		void SetInPreviewedState(bool bPreviewed); // Flags: Event|Public|BlueprintEvent 0x7FF414CF3598
		void SetInPremiumUpgradeState(bool bHighlighted); // Flags: Event|Protected|BlueprintEvent 0x7FF414CF34B8
		void SetDoubleWidth(bool bDoubleWidth); // Flags: Event|Public|BlueprintEvent 0x7FF414CF33D8
		void SetCustomItemIcon(UTexture2D CustomItemIcon); // Flags: Event|Protected|BlueprintEvent 0x7FF414CF32F8
		void SetAllRewardsCollected(bool bAllCollected); // Flags: Event|Public|BlueprintEvent 0x7FF414CF3218
		void OnSetRewardItem(int32_t RequiredProgress, int32_t RemainingProgress, float RewardProgressPercent, float PreviewProgressPercent, float OverallProgressPercent, bool bInPreviewMode); // Flags: Event|Protected|BlueprintEvent 0x7FF414CF3138
		void OnRewardWidgetReset(); // Flags: Event|Public|BlueprintEvent 0x7FF414CF3058
		void OnInputMethodChanged(ECommonInputType NewInputType); // Flags: Event|Protected|BlueprintEvent 0x7FF414CF2F78
		void OnEventScreenDataSet(UFortEventScreenData InEventScreenData); // Flags: Event|Protected|BlueprintEvent 0x7FF414CF2E98
		UFortEventScreenData GetEventScreenData(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414CF2DB8
	};


	// Class EventScreenBase.FortEventScreenBase
	// Inherited from UFortItemPreviewScreen -> UFortActivatablePanel -> UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x380 (0xAA0 - 0x720)
	class UFortEventScreenBase : public UFortItemPreviewScreen	
	{
	public:
		unsigned char UnknownData03_3[0x28]; // 0x720(0x28) UNKNOWN PROPERTY
		TArray LayoutTemplateSlots; // 0x748(0x10)
		UFortLazyImage LazyImage_KeyArt; // 0x758(0x8)
		UCommonButtonBase Button_ViewQuests; // 0x760(0x8)
		UCommonButtonBase Button_MoreInfo; // 0x768(0x8)
		UCommonButtonBase Button_PurchaseLevels; // 0x770(0x8)
		UCommonButtonBase Button_Preview; // 0x778(0x8)
		UCommonButtonBase Button_ShowInItemShop; // 0x780(0x8)
		UCommonButtonBase Button_Previous; // 0x788(0x8)
		UCommonButtonBase Button_Next; // 0x790(0x8)
		UFortEventTrackerModule_CustomText CustomText_InspectItem; // 0x798(0x8)
		UPanelWidget Panel_LoadError; // 0x7A0(0x8)
		UCommonButtonBase Button_Close; // 0x7A8(0x8)
		UCommonButtonBase Button_CloseTouch; // 0x7B0(0x8)
		UFortEventScreenData EventScreenData; // 0x7B8(0x8)
		EEventScreenRewardPreviewType ActiveRewardPreviewType; // 0x7C0(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x7C1(0x7) UNKNOWN PROPERTY
		UFortChallengeBundleItemDefinition LoadedQuestBundle; // 0x7C8(0x8)
		AFortItemPreviewWorld CachedVaultWorld; // 0x7D0(0x8)
		UFortItemVM CachedItemVM; // 0x7D8(0x8)
		UEventScreenVariantManager VariantManager; // 0x7E0(0x8)
		unsigned char UnknownData05_7[0x2B8]; // 0x7E8(0x2B8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EventScreenBase.FortEventScreenBase");
			return ret;
		}

		void UpdateVariantCounter(int32_t CurrentVariantIndex, int32_t TotalNumVariants); // Flags: Event|Protected|BlueprintEvent 0x7FF414CF50B8
		void SetRewardTrackLegal(FText& LegalText); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414CF4FD8
		void SetItemShopOfferInfoVisibility(bool bIsVisible); // Flags: Event|Protected|BlueprintEvent 0x7FF414CF4EF8
		void SetItemShopCallout(FText& ItemShopCalloutText); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414CF4E18
		void RegisterLayoutSlots(); // Flags: Event|Protected|BlueprintEvent 0x7FF414CF4D38
		void OnSetBonusInfo(FBonusInfoMiniTagData& BonusInfo); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414CF4C58
		void OnScreenViewChanged(EEventScreenView PrevScreenView, EEventScreenView NewScreenView); // Flags: Event|Protected|BlueprintEvent 0x7FF414CF4B78
		void OnRewardTrackReady(); // Flags: Event|Protected|BlueprintEvent 0x7FF414CF4A98
		void OnRewardPreviewItemChanged(UFortAccountItemDefinition Item, bool bFreeTrack); // Flags: Event|Protected|BlueprintEvent 0x7FF414CF49B8
		void OnFirstViewAfterCompletion(); // Flags: Event|Protected|BlueprintEvent 0x7FF414CF48D8
		void OnCalendarEventStarted(FString EventName); // Flags: Event|Protected|BlueprintEvent 0x7FF414CF47F8
		void OnCalendarEventEnded(FString EventName); // Flags: Event|Protected|BlueprintEvent 0x7FF414CF4718
		bool IsCalendarEventActive(FString EventName); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414CF4638
		bool HasPurchasedPremiumTrack(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414CF4558
		bool HasAllRewardsCollected(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414CF4478
		UWidget HandleUpsellPromptNavigateUpEvent(EUINavigation InNavigation); // Flags: Final|Native|Private 0x7FF414CF4398
		void HandleToggleFullscreenMap(bool bVisible); // Flags: Final|Native|Private 0x7FF414CF42B8
		UWidget HandleRewardListNavigateUpEvent(EUINavigation InNavigation); // Flags: Final|Native|Private 0x7FF414CF41D8
		UWidget HandleRewardListNavigateRightEvent(EUINavigation InNavigation); // Flags: Final|Native|Private 0x7FF414CF40F8
		void HandleGiftBoxClosed(); // Flags: Final|Native|Private 0x7FF414CF4018
		void HandleActiveSeasonDataChanged(TArray& ActiveEventFlags); // Flags: Final|Native|Private|HasOutParms 0x7FF414CF3F38
		UMaterialInstanceDynamic GetVaultWorldFloorMID(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414CF3E58
		UMaterialInstanceDynamic GetVaultWorldBackgroundMID(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414CF3D78
		AFortItemPreviewWorld GetVaultWorld(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414CF3C98
		FTimespan GetEventTimeRemaining(); // Flags: Final|Native|Protected|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414CF3BB8
		UFortEventModalBase GetActiveModal(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414CF3AD8
	};


	// Class EventScreenBase.EventScreenListView
	// Inherited from UListViewBase -> UWidget -> UVisual -> UObject
	// Size: 0x1E8 (0x470 - 0x288)
	class UEventScreenListView : public UListViewBase	
	{
	public:
		unsigned char UnknownData05_3[0xE8]; // 0x288(0xE8) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnProgressBarAnimationStartedEvent; // 0x370(0x10)
		FMulticastInlineDelegate OnProgressBarAnimationCompletedEvent; // 0x380(0x10)
		FMulticastInlineDelegate OnProgressBarAnimationInterruptedEvent; // 0x390(0x10)
		FMulticastInlineDelegate OnResourcePreviewOffsetAnimationEvent; // 0x3A0(0x10)
		unsigned char UnknownData06_6[0x20]; // 0x3B0(0x20) UNKNOWN PROPERTY
		UClass RewardTrackWidgetClass; // 0x3D0(0x8)
		UClass SpacerWidgetClass; // 0x3D8(0x8)
		float EntrySpacing; // 0x3E0(0x4)
		bool bCenterSelection; // 0x3E4(0x1)
		unsigned char UnknownData07_6[0x3]; // 0x3E5(0x3) UNKNOWN PROPERTY
		float MaxItemsInView; // 0x3E8(0x4)
		bool bPreviewMode; // 0x3EC(0x1)
		unsigned char UnknownData08_6[0x3]; // 0x3ED(0x3) UNKNOWN PROPERTY
		UCurveFloat ProgressAnimationCurve; // 0x3F0(0x8)
		bool bCanAnimateOnceComplete; // 0x3F8(0x1)
		unsigned char UnknownData09_7[0x77]; // 0x3F9(0x77) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EventScreenBase.EventScreenListView");
			return ret;
		}

		void SetNativeTickAllowed(bool bAllowed); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414CF5278
		UFortEventScreenData GetEventScreenData(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414CF5198
	};


	// Class EventScreenBase.FortEventScreenTeaser
	// Inherited from UFortActivatablePanel -> UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x40 (0x5A8 - 0x568)
	class UFortEventScreenTeaser : public UFortActivatablePanel	
	{
	public:
		FString CountdownCalendarEventFlag; // 0x568(0x10)
		TArray CalendarEvents; // 0x578(0x10)
		FGameplayTag QuestCategoryTag; // 0x588(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x58C(0x4) UNKNOWN PROPERTY
		UCommonButtonBase Button_ViewQuests; // 0x590(0x8)
		unsigned char UnknownData03_7[0x10]; // 0x598(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EventScreenBase.FortEventScreenTeaser");
			return ret;
		}

		void OnCalendarEventStarted(FString EventName); // Flags: Event|Protected|BlueprintEvent 0x7FF414CF56D8
		void OnCalendarEventEnded(FString EventName); // Flags: Event|Protected|BlueprintEvent 0x7FF414CF55F8
		bool IsCalendarEventActive(FString EventName); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414CF5518
		void HandleActiveSeasonDataChanged(TArray& ActiveEventFlags); // Flags: Final|Native|Private|HasOutParms 0x7FF414CF5438
		void BP_SetCountdownTimeRemaining(FTimespan& TimeRemaining); // Flags: Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 0x7FF414CF5358
	};


	// Class EventScreenBase.EventScreenVariantManager
	// Inherited from UObject
	// Size: 0x48 (0x70 - 0x28)
	class UEventScreenVariantManager : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x48]; // 0x28(0x48) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EventScreenBase.EventScreenVariantManager");
			return ret;
		}
	};


	// Class EventScreenBase.FortEventTokenCollectionWidget
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x60 (0x318 - 0x2B8)
	class UFortEventTokenCollectionWidget : public UUserWidget	
	{
	public:
		UCommonLazyImage LazyImage_GhostIcon; // 0x2B8(0x8)
		UCommonLazyImage LazyImage_CompletedIcon; // 0x2C0(0x8)
		UImage Image_Glow; // 0x2C8(0x8)
		TWeakObjectPtr FallbackBrush; // 0x2D0(0x20)
		TWeakObjectPtr TokenDefinition; // 0x2F0(0x20)
		unsigned char UnknownData01_7[0x8]; // 0x310(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EventScreenBase.FortEventTokenCollectionWidget");
			return ret;
		}

		void OnRefreshIcon(bool IsCollected, bool bIsFirstViewAfterCollection); // Flags: Event|Protected|BlueprintEvent 0x7FF414CF57B8
	};


	// Class EventScreenBase.FortEventTrackerModule
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x2C0 - 0x2B8)
	class UFortEventTrackerModule : public UUserWidget	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x2B8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EventScreenBase.FortEventTrackerModule");
			return ret;
		}

		void OnModuleInitialized(UFortEventScreenData InEventScreenData); // Flags: Event|Protected|BlueprintEvent 0x7FF414CF5978
		UFortEventScreenData GetEventScreenData(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414CF5898
	};


	// Class EventScreenBase.FortEventTrackerModule_EventDetails
	// Inherited from UFortEventTrackerModule -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x2C0 - 0x2C0)
	class UFortEventTrackerModule_EventDetails : public UFortEventTrackerModule	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EventScreenBase.FortEventTrackerModule_EventDetails");
			return ret;
		}

		void UpdateEventTimeRemaining(FText& EventTimeRemainingText, FTimespan& TimeRemaining); // Flags: Event|Public|HasOutParms|HasDefaults|BlueprintEvent 0x7FF414CF5B38
		void OnPopulateEventDetailsText(FText& OutEventName, FText& OutEventDescription); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414CF5A58
	};


	// Class EventScreenBase.FortEventTrackerModule_Header
	// Inherited from UFortEventTrackerModule -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x2C0 - 0x2C0)
	class UFortEventTrackerModule_Header : public UFortEventTrackerModule	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EventScreenBase.FortEventTrackerModule_Header");
			return ret;
		}

		void OnPopulateEventResourceStarterHeader(FText& Header); // Flags: Event|Public|HasOutParms|BlueprintEvent 0x7FF414CF5CF8
		void OnPopulateEventResourceHeader(FText& Header, int32_t ResourceValue); // Flags: Event|Public|HasOutParms|BlueprintEvent 0x7FF414CF5C18
	};


	// Class EventScreenBase.FortEventTrackerModule_RewardDetails
	// Inherited from UFortEventTrackerModule -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x2C8 - 0x2C0)
	class UFortEventTrackerModule_RewardDetails : public UFortEventTrackerModule	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x2C0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EventScreenBase.FortEventTrackerModule_RewardDetails");
			return ret;
		}

		void OnPopulateNextRewardDetails(TArray& RewardNames, int32_t ResourceNeeded); // Flags: Event|Public|HasOutParms|BlueprintEvent 0x7FF414CF5F98
		void OnPopulateCompletedReward(TArray& RewardNames); // Flags: Event|Public|HasOutParms|BlueprintEvent 0x7FF414CF5EB8
		bool IsPremiumTrackOwned(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414CF5DD8
	};


	// Class EventScreenBase.FortEventTrackerModule_RewardRemaining
	// Inherited from UFortEventTrackerModule -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x2E0 - 0x2C0)
	class UFortEventTrackerModule_RewardRemaining : public UFortEventTrackerModule	
	{
	public:
		UCommonButtonBase Button_PurchasePremium; // 0x2C0(0x8)
		unsigned char UnknownData01_7[0x18]; // 0x2C8(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EventScreenBase.FortEventTrackerModule_RewardRemaining");
			return ret;
		}

		void OnPopulateRemaining(int32_t ResourceNeeded, int32_t TotalResourceRequired, bool bRequiresPremiumTrackPurchase); // Flags: Event|Public|BlueprintEvent 0x7FF414CF6078
	};


	// Class EventScreenBase.FortEventTrackerModule_ProgressiveRewards
	// Inherited from UFortEventTrackerModule -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x2C8 - 0x2C0)
	class UFortEventTrackerModule_ProgressiveRewards : public UFortEventTrackerModule	
	{
	public:
		UEventScreenListView ListView_Rewards; // 0x2C0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EventScreenBase.FortEventTrackerModule_ProgressiveRewards");
			return ret;
		}

		void OnPopulateCompletionMessage(bool bIsComplete, FText& CompletionText); // Flags: Event|Public|HasOutParms|BlueprintEvent 0x7FF414CF6158
	};


	// Class EventScreenBase.FortEventTrackerModule_Collection
	// Inherited from UFortEventTrackerModule -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x2C0 - 0x2C0)
	class UFortEventTrackerModule_Collection : public UFortEventTrackerModule	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EventScreenBase.FortEventTrackerModule_Collection");
			return ret;
		}

		void OnGatherTokenCollectionWidgets(TArray& OutCollectionWidgets); // Flags: Event|Protected|HasOutParms|BlueprintEvent|Const 0x7FF414CF6238
	};


	// Class EventScreenBase.FortEventTrackerModule_Banner
	// Inherited from UFortEventTrackerModule -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x2C8 - 0x2C0)
	class UFortEventTrackerModule_Banner : public UFortEventTrackerModule	
	{
	public:
		UFortLazyImage LazyImage_BannerArt; // 0x2C0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EventScreenBase.FortEventTrackerModule_Banner");
			return ret;
		}

		void OnPopulateHeaderCTAText(FText& HeaderCTAText); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414CF64D8
		void OnPopulateBannerText(FText& BannerText); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414CF63F8
		void OnCTACompleted(bool bIsComplete); // Flags: Event|Protected|BlueprintEvent 0x7FF414CF6318
	};


	// Class EventScreenBase.FortEventTrackerModule_PremiumUpsell
	// Inherited from UFortEventTrackerModule -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x60 (0x320 - 0x2C0)
	class UFortEventTrackerModule_PremiumUpsell : public UFortEventTrackerModule	
	{
	public:
		UFortCTAButton Button_Prompt; // 0x2C0(0x8)
		FText PromptTextUnowned; // 0x2C8(0x10)
		FText PromptTextOwned; // 0x2D8(0x10)
		unsigned char UnknownData01_7[0x38]; // 0x2E8(0x38) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EventScreenBase.FortEventTrackerModule_PremiumUpsell");
			return ret;
		}

		void OnPopulateText(FText& HeaderText, FText& BodyText); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414CF6778
		void OnIconLoaded(UTexture LoadedTexture); // Flags: Event|Protected|BlueprintEvent 0x7FF414CF6698
		bool IsPremiumTrackOwned(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414CF65B8
	};


	// Class EventScreenBase.FortEventTrackerModule_CustomText
	// Inherited from UFortEventTrackerModule -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x2C0 - 0x2C0)
	class UFortEventTrackerModule_CustomText : public UFortEventTrackerModule	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EventScreenBase.FortEventTrackerModule_CustomText");
			return ret;
		}

		void OnPopulateText(FText& CustomText); // Flags: Event|Public|HasOutParms|BlueprintEvent 0x7FF414CF6858
	};

}
