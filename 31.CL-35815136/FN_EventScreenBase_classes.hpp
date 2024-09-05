#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: EventScreenBase
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

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
		UFortTokenType* PremiumTrackPurchasedToken; // 0x80(0x8)
		FGameplayTag VaultWorldTag; // 0x88(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x8C(0x4) UNKNOWN PROPERTY
		FVaultWorldBackgroundData PreviewScreenBackgroundData; // 0x90(0x58)
		TWeakObjectPtr<UFortChallengeBundleItemDefinition*> QuestBundle; // 0xE8(0x20)
		TWeakObjectPtr<UFortItemDefinition*> SpecialRewardItem; // 0x108(0x20)
		TWeakObjectPtr<UFortItemDefinition*> SpecialPremiumRewardItem; // 0x128(0x20)
		TArray<FEventItemOverride> ItemOverrides; // 0x148(0x10)
		FEventScreenTrackData FreeTrackData; // 0x158(0x30)
		FEventScreenTrackData PremiumTrackData; // 0x188(0x30)
		FGameplayTag QuestCategoryTag; // 0x1B8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x1BC(0x4) UNKNOWN PROPERTY
		TArray<UClass*> RichTextDecorators; // 0x1C0(0x10)
		TMap<FName, FLinearColor> RewardTileBackgroundColors; // 0x1D0(0x50)
		FText TimeRemainingFormat; // 0x220(0x10)
		FText CurrencyFormat; // 0x230(0x10)
		TWeakObjectPtr<UObject*> MoreInfoKeyArt; // 0x240(0x20)
		TArray<FEventScreenMoreInfoGroup> MoreInfoGroups; // 0x260(0x10)
		float RewardPreviewZoomLevel; // 0x270(0x4)
		bool bUseWidgetCameraFraming; // 0x274(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x275(0x3) UNKNOWN PROPERTY
		TWeakObjectPtr<UClass*> MoreInfoModalClass; // 0x278(0x20)
		TWeakObjectPtr<UClass*> PurchaseLevelsModalClass; // 0x298(0x20)
		TWeakObjectPtr<UClass*> PurchasePremiumTrackModalClass; // 0x2B8(0x20)
		TArray<FString> CalendarEvents; // 0x2D8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EventScreenBase.FortEventScreenData");
			return ret;
		}
	};


	// Class EventScreenBase.FortEventModalBase
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x400 - 0x3F0)
	class UFortEventModalBase : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData00_1[0x10]; // 0x3F0(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EventScreenBase.FortEventModalBase");
			return ret;
		}

		void CloseModal(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF749B1B2C4(relative to base address)
	};


	// Class EventScreenBase.FortEventMoreInfoGroup
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x2B0 - 0x2B0)
	class UFortEventMoreInfoGroup : public UUserWidget	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EventScreenBase.FortEventMoreInfoGroup");
			return ret;
		}

		void OnSetGroupText(FText& Header, FText& Body); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnIconLoaded(UObject* Icon); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnEventScreenDataSet(UFortEventScreenData* InEventScreenData); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class EventScreenBase.FortEventMoreInfoModal
	// Inherited from UFortEventModalBase -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x28 (0x428 - 0x400)
	class UFortEventMoreInfoModal : public UFortEventModalBase	
	{
	public:
		UDynamicEntryBox* DynamicEntryBox_Groups; // 0x400(0x8)
		UCommonButtonBase* Button_Back; // 0x408(0x8)
		UCommonButtonBase* Button_CloseTouch; // 0x410(0x8)
		unsigned char UnknownData00_6[0x8]; // 0x418(0x8) UNKNOWN PROPERTY
		UScrollBox* SB_Vertical; // 0x420(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EventScreenBase.FortEventMoreInfoModal");
			return ret;
		}

		void SetModalText(FText& Header, FText& SubHeader, FText& Legal); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnModalBackout(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnKeyArtLoaded(UObject* Icon); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnEventScreenDataSet(UFortEventScreenData* InEventScreenData); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UFortEventScreenData GetEventScreenData(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7513629D0(relative to base address)
	};


	// Class EventScreenBase.FortEventPurchaseLevelsModal
	// Inherited from UFortEventModalBase -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x70 (0x470 - 0x400)
	class UFortEventPurchaseLevelsModal : public UFortEventModalBase	
	{
	public:
		UCommonButtonBase* Button_Addition; // 0x400(0x8)
		UCommonButtonBase* Button_Subtraction; // 0x408(0x8)
		UCommonButtonBase* Button_Purchase; // 0x410(0x8)
		UCommonButtonBase* Button_GetVBucks; // 0x418(0x8)
		UCommonButtonBase* Button_Back; // 0x420(0x8)
		UCommonButtonBase* Button_CloseTouch; // 0x428(0x8)
		UEventScreenListView* ListView_RewardPreview; // 0x430(0x8)
		int32_t CurrentResourceValue; // 0x438(0x4)
		int32_t MaxResourceValue; // 0x43C(0x4)
		int32_t CurrentVBucks; // 0x440(0x4)
		int32_t OfferResourceQuantity; // 0x444(0x4)
		bool bAnimateListViewFromEmpty; // 0x448(0x1)
		unsigned char UnknownData00_7[0x27]; // 0x449(0x27) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EventScreenBase.FortEventPurchaseLevelsModal");
			return ret;
		}

		void OnPurchaseAmountChanged(int32_t TotalPrice, int32_t LevelQuantity, int32_t PurchaseQuantity, int32_t ResourceQuantity); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnEventScreenDataSet(UFortEventScreenData* InEventScreenData); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCMSTextApplied(FText& LegalText); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnAmountChangeButtonClicked(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UFortEventScreenData GetEventScreenData(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7513629F8(relative to base address)
	};


	// Class EventScreenBase.FortPurchasePremiumTrackBody
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x2B0 - 0x2B0)
	class UFortPurchasePremiumTrackBody : public UUserWidget	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EventScreenBase.FortPurchasePremiumTrackBody");
			return ret;
		}

		void OnPopulate(int32_t BodyIndex, FText& BodyText); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class EventScreenBase.FortEventPurchasePremiumTrackModal
	// Inherited from UFortEventModalBase -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x70 (0x470 - 0x400)
	class UFortEventPurchasePremiumTrackModal : public UFortEventModalBase	
	{
	public:
		UDynamicEntryBox* DynamicEntryBox_Body; // 0x400(0x8)
		UScrollBox* ScrollBox_Body; // 0x408(0x8)
		UFortCTAButton* Button_Purchase; // 0x410(0x8)
		UCommonButtonBase* Button_GetVBucks; // 0x418(0x8)
		UCommonButtonBase* Button_Back; // 0x420(0x8)
		UCommonButtonBase* Button_CloseTouch; // 0x428(0x8)
		UCommonButtonBase* Button_PreviewReward; // 0x430(0x8)
		int32_t CurrentVBucks; // 0x438(0x4)
		unsigned char UnknownData00_7[0x34]; // 0x43C(0x34) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EventScreenBase.FortEventPurchasePremiumTrackModal");
			return ret;
		}

		void OnPriceSet(int32_t Price); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnEventScreenDataSet(UFortEventScreenData* InEventScreenData); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCMSTextApplied(FText& HeaderText, FText& LegalText); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UFortEventScreenData GetEventScreenData(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751362A20(relative to base address)
	};


	// Class EventScreenBase.FortEventListViewWidgetBase
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x2B8 - 0x2B0)
	class UFortEventListViewWidgetBase : public UUserWidget	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x2B0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EventScreenBase.FortEventListViewWidgetBase");
			return ret;
		}
	};


	// Class EventScreenBase.FortEventRewardTracksWidget
	// Inherited from UFortEventListViewWidgetBase -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x50 (0x308 - 0x2B8)
	class UFortEventRewardTracksWidget : public UFortEventListViewWidgetBase	
	{
	public:
		UDynamicEntryBox* DynamicEntryBox_RewardTracks; // 0x2B8(0x8)
		bool bPreviewMode; // 0x2C0(0x1)
		unsigned char UnknownData00_7[0x47]; // 0x2C1(0x47) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EventScreenBase.FortEventRewardTracksWidget");
			return ret;
		}

		void BPSetProgressPercent(float Percent); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BPSetAllRewardsCollected(bool bAllCollected); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BPOnSetRewardItem(int32_t RequiredProgress, int32_t RemainingProgress, float RewardProgressPercent, float PreviewProgressPercent, float OverallProgressPercent, bool bInPreviewMode); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BPOnEventScreenDataSet(UFortEventScreenData* InEventScreenData); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class EventScreenBase.FortEventSpacerWidget
	// Inherited from UFortEventListViewWidgetBase -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x2B8 - 0x2B8)
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
	// Size: 0x90 (0x340 - 0x2B0)
	class UFortEventRewardWidget : public UUserWidget	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x2B0(0x8) UNKNOWN PROPERTY
		UCommonButtonBase* Button_RewardPreview; // 0x2B8(0x8)
		UFortCosmeticItemCard* UserWidget_ItemCard; // 0x2C0(0x8)
		bool bIsTrackOwned; // 0x2C8(0x1)
		bool bPreviewMode; // 0x2C9(0x1)
		bool bInPreviewSelectedState; // 0x2CA(0x1)
		bool bInPremiumUpgradeState; // 0x2CB(0x1)
		unsigned char UnknownData01_7[0x74]; // 0x2CC(0x74) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EventScreenBase.FortEventRewardWidget");
			return ret;
		}

		void SetTrackData(FEventScreenTrackData& TrackData, bool bIsOwned); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetProgressPercent(float Percent); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetIsBannerItem(bool bIsBanner); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetInSelectedState(bool bSelected); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetInPreviewSelectedState(bool bSelected); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetInPreviewedState(bool bPreviewed); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetInPremiumUpgradeState(bool bHighlighted); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetDoubleWidth(bool bDoubleWidth); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetCustomItemIcon(UTexture2D* CustomItemIcon); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetAllRewardsCollected(bool bAllCollected); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSetRewardItem(int32_t RequiredProgress, int32_t RemainingProgress, float RewardProgressPercent, float PreviewProgressPercent, float OverallProgressPercent, bool bInPreviewMode); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRewardWidgetReset(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInputMethodChanged(ECommonInputType NewInputType); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnEventScreenDataSet(UFortEventScreenData* InEventScreenData); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UFortEventScreenData GetEventScreenData(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751362A48(relative to base address)
	};


	// Class EventScreenBase.FortEventScreenBase
	// Inherited from UFortItemPreviewScreen -> UFortActivatablePanel -> UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x380 (0xA98 - 0x718)
	class UFortEventScreenBase : public UFortItemPreviewScreen	
	{
	public:
		unsigned char UnknownData00_3[0x28]; // 0x718(0x28) UNKNOWN PROPERTY
		TArray<UNamedSlot*> LayoutTemplateSlots; // 0x740(0x10)
		UFortLazyImage* LazyImage_KeyArt; // 0x750(0x8)
		UCommonButtonBase* Button_ViewQuests; // 0x758(0x8)
		UCommonButtonBase* Button_MoreInfo; // 0x760(0x8)
		UCommonButtonBase* Button_PurchaseLevels; // 0x768(0x8)
		UCommonButtonBase* Button_Preview; // 0x770(0x8)
		UCommonButtonBase* Button_ShowInItemShop; // 0x778(0x8)
		UCommonButtonBase* Button_Previous; // 0x780(0x8)
		UCommonButtonBase* Button_Next; // 0x788(0x8)
		UFortEventTrackerModule_CustomText* CustomText_InspectItem; // 0x790(0x8)
		UPanelWidget* Panel_LoadError; // 0x798(0x8)
		UCommonButtonBase* Button_Close; // 0x7A0(0x8)
		UCommonButtonBase* Button_CloseTouch; // 0x7A8(0x8)
		UFortEventScreenData* EventScreenData; // 0x7B0(0x8)
		EEventScreenRewardPreviewType ActiveRewardPreviewType; // 0x7B8(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x7B9(0x7) UNKNOWN PROPERTY
		UFortChallengeBundleItemDefinition* LoadedQuestBundle; // 0x7C0(0x8)
		AFortItemPreviewWorld* CachedVaultWorld; // 0x7C8(0x8)
		UFortItemVM* CachedItemVM; // 0x7D0(0x8)
		UEventScreenVariantManager* VariantManager; // 0x7D8(0x8)
		unsigned char UnknownData02_7[0x2B8]; // 0x7E0(0x2B8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EventScreenBase.FortEventScreenBase");
			return ret;
		}

		void UpdateVariantCounter(int32_t CurrentVariantIndex, int32_t TotalNumVariants); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetRewardTrackLegal(FText& LegalText); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetItemShopOfferInfoVisibility(bool bIsVisible); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetItemShopCallout(FText& ItemShopCalloutText); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RegisterLayoutSlots(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSetBonusInfo(FBonusInfoMiniTagData& BonusInfo); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnScreenViewChanged(EEventScreenView PrevScreenView, EEventScreenView NewScreenView); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRewardTrackReady(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRewardPreviewItemChanged(UFortAccountItemDefinition* Item, bool bFreeTrack); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnFirstViewAfterCompletion(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCalendarEventStarted(FString EventName); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCalendarEventEnded(FString EventName); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool IsCalendarEventActive(FString EventName); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751362F10(relative to base address)
		bool HasPurchasedPremiumTrack(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751362EEC(relative to base address)
		bool HasAllRewardsCollected(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751362EC8(relative to base address)
		UWidget HandleUpsellPromptNavigateUpEvent(EUINavigation InNavigation); // Flags: Final|Native|Private, Memory Exec: 0x7FF751362E40(relative to base address)
		void HandleToggleFullscreenMap(bool bVisible); // Flags: Final|Native|Private, Memory Exec: 0x7FF751362DC0(relative to base address)
		UWidget HandleRewardListNavigateUpEvent(EUINavigation InNavigation); // Flags: Final|Native|Private, Memory Exec: 0x7FF751362D30(relative to base address)
		UWidget HandleRewardListNavigateRightEvent(EUINavigation InNavigation); // Flags: Final|Native|Private, Memory Exec: 0x7FF751362CA0(relative to base address)
		void HandleGiftBoxClosed(); // Flags: Final|Native|Private, Memory Exec: 0x7FF751362C8C(relative to base address)
		void HandleActiveSeasonDataChanged(TArray<FString>& ActiveEventFlags); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF751362B04(relative to base address)
		UMaterialInstanceDynamic GetVaultWorldFloorMID(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751362ADC(relative to base address)
		UMaterialInstanceDynamic GetVaultWorldBackgroundMID(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751362AB4(relative to base address)
		AFortItemPreviewWorld GetVaultWorld(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751362A9C(relative to base address)
		FTimespan GetEventTimeRemaining(); // Flags: Final|Native|Protected|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751362A70(relative to base address)
		UFortEventModalBase GetActiveModal(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751362980(relative to base address)
	};


	// Class EventScreenBase.EventScreenListView
	// Inherited from UListViewBase -> UWidget -> UVisual -> UObject
	// Size: 0x1E8 (0x468 - 0x280)
	class UEventScreenListView : public UListViewBase	
	{
	public:
		unsigned char UnknownData00_3[0xE8]; // 0x280(0xE8) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnProgressBarAnimationStartedEvent; // 0x368(0x10)
		FMulticastInlineDelegate OnProgressBarAnimationCompletedEvent; // 0x378(0x10)
		FMulticastInlineDelegate OnProgressBarAnimationInterruptedEvent; // 0x388(0x10)
		FMulticastInlineDelegate OnResourcePreviewOffsetAnimationEvent; // 0x398(0x10)
		unsigned char UnknownData01_6[0x20]; // 0x3A8(0x20) UNKNOWN PROPERTY
		UClass* RewardTrackWidgetClass; // 0x3C8(0x8)
		UClass* SpacerWidgetClass; // 0x3D0(0x8)
		float EntrySpacing; // 0x3D8(0x4)
		bool bCenterSelection; // 0x3DC(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x3DD(0x3) UNKNOWN PROPERTY
		float MaxItemsInView; // 0x3E0(0x4)
		bool bPreviewMode; // 0x3E4(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x3E5(0x3) UNKNOWN PROPERTY
		UCurveFloat* ProgressAnimationCurve; // 0x3E8(0x8)
		bool bCanAnimateOnceComplete; // 0x3F0(0x1)
		unsigned char UnknownData04_7[0x77]; // 0x3F1(0x77) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EventScreenBase.EventScreenListView");
			return ret;
		}

		void SetNativeTickAllowed(bool bAllowed); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751363068(relative to base address)
		UFortEventScreenData GetEventScreenData(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7513629A8(relative to base address)
	};


	// Class EventScreenBase.FortEventScreenTeaser
	// Inherited from UFortActivatablePanel -> UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x40 (0x5A0 - 0x560)
	class UFortEventScreenTeaser : public UFortActivatablePanel	
	{
	public:
		FString CountdownCalendarEventFlag; // 0x560(0x10)
		TArray<FString> CalendarEvents; // 0x570(0x10)
		FGameplayTag QuestCategoryTag; // 0x580(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x584(0x4) UNKNOWN PROPERTY
		UCommonButtonBase* Button_ViewQuests; // 0x588(0x8)
		unsigned char UnknownData01_7[0x10]; // 0x590(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EventScreenBase.FortEventScreenTeaser");
			return ret;
		}

		void OnCalendarEventStarted(FString EventName); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCalendarEventEnded(FString EventName); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool IsCalendarEventActive(FString EventName); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751362FB0(relative to base address)
		void HandleActiveSeasonDataChanged(TArray<FString>& ActiveEventFlags); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF751362BC8(relative to base address)
		void BP_SetCountdownTimeRemaining(FTimespan& TimeRemaining); // Flags: Event|Protected|HasOutParms|HasDefaults|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class EventScreenBase.EventScreenVariantManager
	// Inherited from UObject
	// Size: 0x48 (0x70 - 0x28)
	class UEventScreenVariantManager : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0x48]; // 0x28(0x48) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EventScreenBase.EventScreenVariantManager");
			return ret;
		}
	};


	// Class EventScreenBase.FortEventTokenCollectionWidget
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x60 (0x310 - 0x2B0)
	class UFortEventTokenCollectionWidget : public UUserWidget	
	{
	public:
		UCommonLazyImage* LazyImage_GhostIcon; // 0x2B0(0x8)
		UCommonLazyImage* LazyImage_CompletedIcon; // 0x2B8(0x8)
		UImage* Image_Glow; // 0x2C0(0x8)
		TWeakObjectPtr<UTexture2D*> FallbackBrush; // 0x2C8(0x20)
		TWeakObjectPtr<UFortTokenType*> TokenDefinition; // 0x2E8(0x20)
		unsigned char UnknownData00_7[0x8]; // 0x308(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EventScreenBase.FortEventTokenCollectionWidget");
			return ret;
		}

		void OnRefreshIcon(bool IsCollected, bool bIsFirstViewAfterCollection); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class EventScreenBase.FortEventTrackerModule
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x2B8 - 0x2B0)
	class UFortEventTrackerModule : public UUserWidget	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x2B0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EventScreenBase.FortEventTrackerModule");
			return ret;
		}

		void OnModuleInitialized(UFortEventScreenData* InEventScreenData); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UFortEventScreenData GetEventScreenData(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74EA67BDC(relative to base address)
	};


	// Class EventScreenBase.FortEventTrackerModule_EventDetails
	// Inherited from UFortEventTrackerModule -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x2B8 - 0x2B8)
	class UFortEventTrackerModule_EventDetails : public UFortEventTrackerModule	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EventScreenBase.FortEventTrackerModule_EventDetails");
			return ret;
		}

		void UpdateEventTimeRemaining(FText& EventTimeRemainingText, FTimespan& TimeRemaining); // Flags: Event|Public|HasOutParms|HasDefaults|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPopulateEventDetailsText(FText& OutEventName, FText& OutEventDescription); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class EventScreenBase.FortEventTrackerModule_Header
	// Inherited from UFortEventTrackerModule -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x2B8 - 0x2B8)
	class UFortEventTrackerModule_Header : public UFortEventTrackerModule	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EventScreenBase.FortEventTrackerModule_Header");
			return ret;
		}

		void OnPopulateEventResourceStarterHeader(FText& Header); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPopulateEventResourceHeader(FText& Header, int32_t ResourceValue); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class EventScreenBase.FortEventTrackerModule_RewardDetails
	// Inherited from UFortEventTrackerModule -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x2C0 - 0x2B8)
	class UFortEventTrackerModule_RewardDetails : public UFortEventTrackerModule	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x2B8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EventScreenBase.FortEventTrackerModule_RewardDetails");
			return ret;
		}

		void OnPopulateNextRewardDetails(TArray<FText>& RewardNames, int32_t ResourceNeeded); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPopulateCompletedReward(TArray<FText>& RewardNames); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool IsPremiumTrackOwned(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74E84EE30(relative to base address)
	};


	// Class EventScreenBase.FortEventTrackerModule_RewardRemaining
	// Inherited from UFortEventTrackerModule -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x2D8 - 0x2B8)
	class UFortEventTrackerModule_RewardRemaining : public UFortEventTrackerModule	
	{
	public:
		UCommonButtonBase* Button_PurchasePremium; // 0x2B8(0x8)
		unsigned char UnknownData00_7[0x18]; // 0x2C0(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EventScreenBase.FortEventTrackerModule_RewardRemaining");
			return ret;
		}

		void OnPopulateRemaining(int32_t ResourceNeeded, int32_t TotalResourceRequired, bool bRequiresPremiumTrackPurchase); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class EventScreenBase.FortEventTrackerModule_ProgressiveRewards
	// Inherited from UFortEventTrackerModule -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x2C0 - 0x2B8)
	class UFortEventTrackerModule_ProgressiveRewards : public UFortEventTrackerModule	
	{
	public:
		UEventScreenListView* ListView_Rewards; // 0x2B8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EventScreenBase.FortEventTrackerModule_ProgressiveRewards");
			return ret;
		}

		void OnPopulateCompletionMessage(bool bIsComplete, FText& CompletionText); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class EventScreenBase.FortEventTrackerModule_Collection
	// Inherited from UFortEventTrackerModule -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x2B8 - 0x2B8)
	class UFortEventTrackerModule_Collection : public UFortEventTrackerModule	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EventScreenBase.FortEventTrackerModule_Collection");
			return ret;
		}

		void OnGatherTokenCollectionWidgets(TArray<UFortEventTokenCollectionWidget*>& OutCollectionWidgets); // Flags: Event|Protected|HasOutParms|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class EventScreenBase.FortEventTrackerModule_Banner
	// Inherited from UFortEventTrackerModule -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x2C0 - 0x2B8)
	class UFortEventTrackerModule_Banner : public UFortEventTrackerModule	
	{
	public:
		UFortLazyImage* LazyImage_BannerArt; // 0x2B8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EventScreenBase.FortEventTrackerModule_Banner");
			return ret;
		}

		void OnPopulateHeaderCTAText(FText& HeaderCTAText); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPopulateBannerText(FText& BannerText); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCTACompleted(bool bIsComplete); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class EventScreenBase.FortEventTrackerModule_PremiumUpsell
	// Inherited from UFortEventTrackerModule -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x60 (0x318 - 0x2B8)
	class UFortEventTrackerModule_PremiumUpsell : public UFortEventTrackerModule	
	{
	public:
		UFortCTAButton* Button_Prompt; // 0x2B8(0x8)
		FText PromptTextUnowned; // 0x2C0(0x10)
		FText PromptTextOwned; // 0x2D0(0x10)
		unsigned char UnknownData00_7[0x38]; // 0x2E0(0x38) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EventScreenBase.FortEventTrackerModule_PremiumUpsell");
			return ret;
		}

		void OnPopulateText(FText& HeaderText, FText& BodyText); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnIconLoaded(UTexture* LoadedTexture); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool IsPremiumTrackOwned(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751363050(relative to base address)
	};


	// Class EventScreenBase.FortEventTrackerModule_CustomText
	// Inherited from UFortEventTrackerModule -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x2B8 - 0x2B8)
	class UFortEventTrackerModule_CustomText : public UFortEventTrackerModule	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EventScreenBase.FortEventTrackerModule_CustomText");
			return ret;
		}

		void OnPopulateText(FText& CustomText); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
