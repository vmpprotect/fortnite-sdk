#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: PlayerAugmentsUI
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class PlayerAugmentsUI.FortMobileButtonBehaviorComponent_AugmentsListIconPicker
	// Inherited from UFortMobileButtonBehaviorComponent_IconPicker -> UFortMobileButtonBehaviorComponent -> UObject
	// Size: 0x10 (0x58 - 0x48)
	class UFortMobileButtonBehaviorComponent_AugmentsListIconPicker : public UFortMobileButtonBehaviorComponent_IconPicker	
	{
	public:
		bool bCachedIsInInventoryView; // 0x48(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x49(0x7) UNKNOWN PROPERTY
		UPaperSprite ListViewSprite; // 0x50(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PlayerAugmentsUI.FortMobileButtonBehaviorComponent_AugmentsListIconPicker");
			return ret;
		}

		void OnAugmentToolViewSwap(bool bIsInInventoryView); // Flags: Final|Native|Private 0x7FF414D133B8
	};


	// Class PlayerAugmentsUI.FortMobileButtonBehaviorComponent_AugmentsListVisibility
	// Inherited from UFortMobileButtonBehaviorComponent_Visibility -> UFortMobileButtonBehaviorComponent -> UObject
	// Size: 0x8 (0x50 - 0x48)
	class UFortMobileButtonBehaviorComponent_AugmentsListVisibility : public UFortMobileButtonBehaviorComponent_Visibility	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x48(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PlayerAugmentsUI.FortMobileButtonBehaviorComponent_AugmentsListVisibility");
			return ret;
		}

		void HandleAugmentToolViewSwap(bool bInIsInventoryView); // Flags: Final|Native|Private 0x7FF414D13578
		void HandleAugmentToolOpenedStatusChanged(bool bIsOpened, bool bInIsInventoryView); // Flags: Final|Native|Private 0x7FF414D13498
	};


	// Class PlayerAugmentsUI.FortMobileButtonBehaviorComponent_AugmentsListVisibility_Swap
	// Inherited from UFortMobileButtonBehaviorComponent_AugmentsListVisibility -> UFortMobileButtonBehaviorComponent_Visibility -> UFortMobileButtonBehaviorComponent -> UObject
	// Size: 0x8 (0x58 - 0x50)
	class UFortMobileButtonBehaviorComponent_AugmentsListVisibility_Swap : public UFortMobileButtonBehaviorComponent_AugmentsListVisibility	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x50(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PlayerAugmentsUI.FortMobileButtonBehaviorComponent_AugmentsListVisibility_Swap");
			return ret;
		}
	};


	// Class PlayerAugmentsUI.FortPlayerAugmentHUDTimerWidget
	// Inherited from UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x320 - 0x320)
	class UFortPlayerAugmentHUDTimerWidget : public UFortHUDElementWidget	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PlayerAugmentsUI.FortPlayerAugmentHUDTimerWidget");
			return ret;
		}

		void OnTimerUpdated(float TimeRemaining, float TimePercentage); // Flags: Native|Event|Protected|BlueprintEvent 0x7FF414D14618
		void OnNumPendingAugmentsToGrantUpdated(int32_t NumPendingAugmentsToGrant); // Flags: Event|Protected|BlueprintEvent 0x7FF414D14538
		void OnMovementModeChanged(); // Flags: Event|Protected|BlueprintEvent 0x7FF414D14458
		void OnHUDElementVisibilityChanged(FGameplayTagContainer& HiddenElementTagContainer); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414D14378
		void OnCanSelectAugmentChanged(bool bCanSelectAugment); // Flags: Event|Protected|BlueprintEvent 0x7FF414D14298
		void OnAugmentSelectorOpenedStatusChanged(bool bIsOpened); // Flags: Event|Protected|BlueprintEvent 0x7FF414D141B8
		void OnAugmentGrantingTimersResetForMatch(); // Flags: Event|Protected|BlueprintEvent 0x7FF414D140D8
		void OnAugmentGrantingTimersFinishedForMatch(); // Flags: Event|Protected|BlueprintEvent 0x7FF414D13FF8
		void HandleTimerUpdated(float TimeRemaining, float TimePercentage); // Flags: Final|Native|Private 0x7FF414D13F18
		void HandleNumPendingAugmentsToGrantUpdated(int8_t NumPendingAugmentsToGrant); // Flags: Final|Native|Private 0x7FF414D13E38
		void HandleHUDElementVisibilityChanged(FGameplayTagContainer& HiddenElementTagContainer); // Flags: Final|Native|Private|HasOutParms 0x7FF414D13D58
		void HandleCanSelectAugmentChanged(bool bCanSelectAugment); // Flags: Final|Native|Private 0x7FF414D13C78
		void HandleAugmentSelectorOpenedStatusChanged(bool bIsOpened, bool bViewingAugmentInventory); // Flags: Final|Native|Private 0x7FF414D13B98
		void HandleAugmentGrantingTimersResetForMatch(); // Flags: Final|Native|Private 0x7FF414D13AB8
		void HandleAugmentGrantingTimersFinishedForMatch(); // Flags: Final|Native|Private 0x7FF414D139D8
		int32_t GetPendingAugmentsToGrant(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414D138F8
		FText FormatTime(float TotalSeconds); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414D13818
		bool CanSelectAugment(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414D13738
		bool CanEquipSelectionTool(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414D13658
	};


	// Class PlayerAugmentsUI.FortPlayerAugmentHUDSelectionTimerWidget
	// Inherited from UFortPlayerAugmentHUDTimerWidget -> UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x58 (0x378 - 0x320)
	class UFortPlayerAugmentHUDSelectionTimerWidget : public UFortPlayerAugmentHUDTimerWidget	
	{
	public:
		bool bIsAugmentReadyVisible; // 0x320(0x1)
		bool bIsCountdownActive; // 0x321(0x1)
		bool bIsOffline; // 0x322(0x1)
		unsigned char UnknownData01_6[0x5]; // 0x323(0x5) UNKNOWN PROPERTY
		FTimerHandle HideTimerHandle; // 0x328(0x8)
		UMaterialInstanceDynamic TimerProgressDMI; // 0x330(0x8)
		FScalableFloat CountdownStartTimeHF; // 0x338(0x28)
		UCommonTextBlock NativeAugmentTimerText; // 0x360(0x8)
		UWidgetAnimation NativeAnimTimerTextCountdownUpdated; // 0x368(0x8)
		UWidgetAnimation NativeAnimProgressBarCountdownUpdated; // 0x370(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PlayerAugmentsUI.FortPlayerAugmentHUDSelectionTimerWidget");
			return ret;
		}

		void UpdateCountdown(float TimeRemaining); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414D14998
		void SetMobileProgressTimer(float TimePercentage); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414D148B8
		void OnCountdownActivated(); // Flags: Event|Protected|BlueprintEvent 0x7FF414D147D8
		bool IsCountdownVisible(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414D146F8
	};


	// Class PlayerAugmentsUI.FortMobileActionBBE_AugmentShoot
	// Inherited from UFortMobileActionButtonBehaviorExtension -> UFortMobileHUDWidgetBehaviorExtension -> UObject
	// Size: 0x10 (0x90 - 0x80)
	class UFortMobileActionBBE_AugmentShoot : public UFortMobileActionButtonBehaviorExtension	
	{
	public:
		UPaperSprite IconOverrideSprite; // 0x80(0x8)
		FGameplayTag IconOverrideTag; // 0x88(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x8C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PlayerAugmentsUI.FortMobileActionBBE_AugmentShoot");
			return ret;
		}
	};


	// Class PlayerAugmentsUI.FortMobileActionButtonBehavior_RerollAugments
	// Inherited from UFortMobileActionButtonBehavior -> UHUDWidgetBehavior -> UObject
	// Size: 0x8 (0x138 - 0x130)
	class UFortMobileActionButtonBehavior_RerollAugments : public UFortMobileActionButtonBehavior	
	{
	public:
		UFortItemDefinition RerollCurrency; // 0x130(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PlayerAugmentsUI.FortMobileActionButtonBehavior_RerollAugments");
			return ret;
		}
	};


	// Class PlayerAugmentsUI.FortMobilePlayerAugmentTimer
	// Inherited from UFortMobileHUDElement -> UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x370 - 0x350)
	class UFortMobilePlayerAugmentTimer : public UFortMobileHUDElement	
	{
	public:
		TWeakObjectPtr AugmentControllerComponent; // 0x350(0x8)
		UClass PlayerAugmentGranterWidgetClass; // 0x358(0x8)
		UUserWidget PlayerAugmentGranterWidget; // 0x360(0x8)
		UCommonButtonBase Button_PlayerAugmentTimer; // 0x368(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PlayerAugmentsUI.FortMobilePlayerAugmentTimer");
			return ret;
		}

		void HandleHUDElementVisibilityChanged(FGameplayTagContainer& HiddenElementTagContainer); // Flags: Final|Native|Private|HasOutParms 0x7FF414D14B58
		void BP_OnHUDElementVisibilityChanged(FGameplayTagContainer& HiddenElementTagContainer, bool bIsSelectionItemEquipped, bool bForceCollapse); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414D14A78
	};


	// Class PlayerAugmentsUI.FortPickupInteractOverrideComponent_Augments
	// Inherited from UFortPickupInteractOverrideComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x20 (0xE0 - 0xC0)
	class UFortPickupInteractOverrideComponent_Augments : public UFortPickupInteractOverrideComponent	
	{
	public:
		FGameplayTagContainer AllowedAugmentGameplayTags; // 0xC0(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PlayerAugmentsUI.FortPickupInteractOverrideComponent_Augments");
			return ret;
		}
	};


	// Class PlayerAugmentsUI.FortPlayerAugmentCollectionListEntry
	// Inherited from UAthenaCollectionListEntry -> UCommonButtonLegacy -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x1480 - 0x1470)
	class UFortPlayerAugmentCollectionListEntry : public UAthenaCollectionListEntry	
	{
	public:
		UImage Image_Background; // 0x1470(0x8)
		FName ParamName_ItemIcon; // 0x1478(0x4)
		FName ParamName_IsDiscovered; // 0x147C(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PlayerAugmentsUI.FortPlayerAugmentCollectionListEntry");
			return ret;
		}
	};


	// Class PlayerAugmentsUI.FortPlayerAugmentCollectionScreen
	// Inherited from UAthenaCollectionScreenBase -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x80 (0x6C0 - 0x640)
	class UFortPlayerAugmentCollectionScreen : public UAthenaCollectionScreenBase	
	{
	public:
		FScalableFloat AugmentsEnabledViaHotfix; // 0x640(0x28)
		TMap TagToImageMap; // 0x668(0x50)
		UCommonTextBlock Text_CategoryTitle; // 0x6B8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PlayerAugmentsUI.FortPlayerAugmentCollectionScreen");
			return ret;
		}
	};


	// Class PlayerAugmentsUI.FortPlayerAugmentCollectionScreenContainer
	// Inherited from UAthenaCollectionScreenContainer -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x530 - 0x530)
	class UFortPlayerAugmentCollectionScreenContainer : public UAthenaCollectionScreenContainer	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PlayerAugmentsUI.FortPlayerAugmentCollectionScreenContainer");
			return ret;
		}
	};


	// Class PlayerAugmentsUI.FortPlayerAugmentCollectionScreenInfoOverlay
	// Inherited from UAthenaCollectionScreenInfoOverlay -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x4D0 - 0x4B0)
	class UFortPlayerAugmentCollectionScreenInfoOverlay : public UAthenaCollectionScreenInfoOverlay	
	{
	public:
		FName ParamName_Progress; // 0x4B0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4B4(0x4) UNKNOWN PROPERTY
		UCommonTextBlock Text_ItemCategory; // 0x4B8(0x8)
		UFortItemCategoryIndicator ItemCategoryIndicator; // 0x4C0(0x8)
		UOverlay Overlay_UndiscoveredText; // 0x4C8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PlayerAugmentsUI.FortPlayerAugmentCollectionScreenInfoOverlay");
			return ret;
		}
	};


	// Class PlayerAugmentsUI.FortPlayerAugmentGranterWidget
	// Inherited from UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x58 (0x378 - 0x320)
	class UFortPlayerAugmentGranterWidget : public UFortHUDElementWidget	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x320(0x8) UNKNOWN PROPERTY
		FScalableFloat UnblockInteractionWithChoicesTime; // 0x328(0x28)
		TArray AvailableAugmentItemDefinitions; // 0x350(0x10)
		UWidget Overlay_Reroll; // 0x360(0x8)
		unsigned char UnknownData03_7[0x10]; // 0x368(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PlayerAugmentsUI.FortPlayerAugmentGranterWidget");
			return ret;
		}

		void OnTimerUpdated(float TimeRemaining, float TimePercentage); // Flags: Event|Protected|BlueprintEvent 0x7FF414D16058
		void OnSelectedAugmentForGrant(UFortPlayerAugmentItemDefinition HighlightedAugment); // Flags: Event|Protected|BlueprintEvent 0x7FF414D15F78
		void OnRerollAugments(); // Flags: Event|Protected|BlueprintEvent 0x7FF414D15E98
		void OnPopulateAvailableAugmentsHUD(TArray& AugmentItemDefinition); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414D15DB8
		void OnNumPendingAugmentsToGrantUpdated(int32_t NumPendingAugmentsToGrant); // Flags: Event|Protected|BlueprintEvent 0x7FF414D15CD8
		void OnInputTypeChanged(ECommonInputType NewInputType); // Flags: Event|Protected|BlueprintEvent 0x7FF414D15BF8
		void OnCanSelectAugmentChanged(bool bCanSelectAugment); // Flags: Event|Protected|BlueprintEvent 0x7FF414D15B18
		void OnAugmentSelectorToolViewSwapped(bool bViewingAugmentInventory); // Flags: Event|Protected|BlueprintEvent 0x7FF414D15A38
		void OnAugmentSelectorOpenedStatusChanged(bool bIsOpened, bool bViewingAugmentInventory); // Flags: Event|Protected|BlueprintEvent 0x7FF414D15958
		void OnAugmentSelectionStarted(int32_t SelectedAugmentIndex); // Flags: Event|Protected|BlueprintEvent 0x7FF414D15878
		void OnAugmentScrollUpEvent(); // Flags: Event|Protected|BlueprintEvent 0x7FF414D15798
		void OnAugmentScrollDownEvent(); // Flags: Event|Protected|BlueprintEvent 0x7FF414D156B8
		void OnAugmentHighlighted(int32_t HighlightedAugmentIndex); // Flags: Event|Protected|BlueprintEvent 0x7FF414D155D8
		void HandleTimerUpdated(float TimeRemaining, float TimePercentage); // Flags: Final|Native|Private 0x7FF414D154F8
		void HandleSelectedAugmentForGrant(UFortPlayerAugmentItemDefinition SelectedAugment); // Flags: Final|Native|Private 0x7FF414D15418
		void HandleRerollAugments(); // Flags: Final|Native|Private 0x7FF414D15338
		void HandleNumPendingAugmentsToGrantUpdated(int8_t NumPendingAugmentsToGrant); // Flags: Final|Native|Private 0x7FF414D15258
		void HandleCanSelectAugmentChanged(bool bCanSelectAugment); // Flags: Final|Native|Private 0x7FF414D15178
		void HandleAvailableAugmentsForGrantingUpdated(UFortControllerComponent_AugmentGrantingSystem GrantingComponent); // Flags: Final|Native|Private 0x7FF414D15098
		void HandleAugmentSelectorToolViewSwapped(bool bViewingAugmentsInventory); // Flags: Final|Native|Private 0x7FF414D14FB8
		void HandleAugmentSelectorOpenedStatusChanged(bool bIsOpened, bool bViewingAugmentInventory); // Flags: Final|Native|Private 0x7FF414D14ED8
		void HandleAugmentSelectionStarted(int32_t SelectedAugmentIndex); // Flags: Final|Native|Private 0x7FF414D14DF8
		void HandleAugmentHighlighted(int32_t HighlightedAugmentIndex); // Flags: Final|Native|Private 0x7FF414D14D18
		int32_t GetPendingAugmentsToGrant(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414D14C38
	};


	// Class PlayerAugmentsUI.FortPlayerAugmentHUDQuickbarWidget
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x48 (0x328 - 0x2E0)
	class UFortPlayerAugmentHUDQuickbarWidget : public UCommonUserWidget	
	{
	public:
		FGameplayTagContainer HiddenAugmentGameplayTags; // 0x2E0(0x20)
		FScalableFloat NumAugmentGrantRoundsForPlaylist; // 0x300(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PlayerAugmentsUI.FortPlayerAugmentHUDQuickbarWidget");
			return ret;
		}

		void OnAugmentsUpdated(TArray& ActiveAugments); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414D16138
	};


	// Class PlayerAugmentsUI.FortPlayerAugmentHUDRerollWidget
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x50 (0x330 - 0x2E0)
	class UFortPlayerAugmentHUDRerollWidget : public UCommonUserWidget	
	{
	public:
		UCommonLazyImage Image_CurrencyIcon; // 0x2E0(0x8)
		UFortWorldItemDefinition RerollCurrency; // 0x2E8(0x8)
		int32_t CachedNumFreeRerolls; // 0x2F0(0x4)
		FName RerollHoldMaterialParamName; // 0x2F4(0x4)
		unsigned char UnknownData02_6[0x8]; // 0x2F8(0x8) UNKNOWN PROPERTY
		UImage Image_ProgressBar; // 0x300(0x8)
		UCommonTextBlock Text_OwnedCurrency; // 0x308(0x8)
		UCommonTextBlock Text_RerollCost; // 0x310(0x8)
		unsigned char UnknownData03_7[0x18]; // 0x318(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PlayerAugmentsUI.FortPlayerAugmentHUDRerollWidget");
			return ret;
		}

		void StartRerollHoldProgress(float duration); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414D16838
		void OnUpdateCurrency(int32_t OwnedCurrency, int32_t RerollCost); // Flags: Event|Protected|BlueprintEvent 0x7FF414D16758
		void OnRerollAugments(); // Flags: Event|Protected|BlueprintEvent 0x7FF414D16678
		void OnFreeRerollsUpdated(int32_t NewNumFreeRerolls); // Flags: Event|Protected|BlueprintEvent 0x7FF414D16598
		void HandleRerollAugments(); // Flags: Final|Native|Private 0x7FF414D164B8
		void HandleFreeRerollsUpdated(int32_t NewNumFreeRerolls); // Flags: Final|Native|Private 0x7FF414D163D8
		void HandleAugmentSelectorOpenedStatusChanged(bool bIsOpened, bool bViewingInventory); // Flags: Final|Native|Private 0x7FF414D162F8
		void EndRerollHoldProgress(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414D16218
	};


	// Class PlayerAugmentsUI.FortPlayerAugmentInfoEntryWidget
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x60 (0x340 - 0x2E0)
	class UFortPlayerAugmentInfoEntryWidget : public UCommonUserWidget	
	{
	public:
		FText RarityTextFormat; // 0x2E0(0x10)
		UCommonTextBlock Text_AugmentName; // 0x2F0(0x8)
		UCommonTextBlock Text_AugmentRarity; // 0x2F8(0x8)
		UCommonTextBlock Text_AugmentCategory; // 0x300(0x8)
		UFortItemCategoryIndicator ItemCategoryIndicator; // 0x308(0x8)
		UFortLazyImage Image_CategoryAsImage; // 0x310(0x8)
		UCommonTextBlock Text_AugmentDescription; // 0x318(0x8)
		UFortSocialAvatarIcon Icon_LenderAvatarIcon; // 0x320(0x8)
		UWidget Overlay_LenderAvatarIcon; // 0x328(0x8)
		UFortLazyImage Image_LenderSquadColor; // 0x330(0x8)
		UCommonTextBlock Text_BorrowingText; // 0x338(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PlayerAugmentsUI.FortPlayerAugmentInfoEntryWidget");
			return ret;
		}

		void UpdateAugment(UFortPlayerAugmentItemDefinition AugmentItemDefinition); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D16BB8
		void OnItemRaritySet(EFortRarity Rarity, FFortRarityItemData RarityItemData); // Flags: Event|Protected|BlueprintEvent 0x7FF414D16AD8
		void OnItemPinColorSet(FLinearColor PinColor); // Flags: Event|Protected|HasDefaults|BlueprintEvent 0x7FF414D169F8
		void OnItemNewOrBorrowedSet(bool bIsNew, bool bIsBorrowed); // Flags: Event|Protected|BlueprintEvent 0x7FF414D16918
	};


	// Class PlayerAugmentsUI.FortPlayerAugmentInGameCarriedWidget
	// Inherited from UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x320 - 0x320)
	class UFortPlayerAugmentInGameCarriedWidget : public UFortHUDElementWidget	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PlayerAugmentsUI.FortPlayerAugmentInGameCarriedWidget");
			return ret;
		}

		void OnShowInitialAugment(UFortPlayerAugmentItemDefinition PlayerAugmentItemDefinition); // Flags: Event|Protected|BlueprintEvent 0x7FF414D16D78
		void HandleExitBus(AFortPlayerControllerZone FortPCZone); // Flags: Final|Native|Private 0x7FF414D16C98
	};


	// Class PlayerAugmentsUI.FortPlayerAugmentInventoryExtensionRow
	// Inherited from UAthenaInventoryGroupBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x50 (0x3A0 - 0x350)
	class UFortPlayerAugmentInventoryExtensionRow : public UAthenaInventoryGroupBase	
	{
	public:
		FScalableFloat AugmentsEnabledViaHotfix; // 0x350(0x28)
		FGameplayTagContainer BlockedGameplayTags; // 0x378(0x20)
		unsigned char UnknownData01_7[0x8]; // 0x398(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PlayerAugmentsUI.FortPlayerAugmentInventoryExtensionRow");
			return ret;
		}

		void RequestOpenSelector(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414D17638
		void OnTimerUpdated(float TimeRemaining, float TimePercentage); // Flags: Event|Protected|BlueprintEvent 0x7FF414D17558
		void OnNumPendingAugmentsToGrantUpdated(int32_t NumPendingAugmentsToGrant); // Flags: Event|Protected|BlueprintEvent 0x7FF414D17478
		void OnAugmentGrantingTimersResetForMatch(); // Flags: Event|Protected|BlueprintEvent 0x7FF414D17398
		void OnAugmentGrantingTimersFinishedForMatch(); // Flags: Event|Protected|BlueprintEvent 0x7FF414D172B8
		void HandleTimerUpdated(float TimeRemaining, float TimePercentage); // Flags: Final|Native|Private 0x7FF414D171D8
		void HandleNumPendingAugmentsToGrantUpdated(int8_t NumPendingAugmentsToGrant); // Flags: Final|Native|Private 0x7FF414D170F8
		void HandleAugmentGrantingTimersResetForMatch(); // Flags: Final|Native|Private 0x7FF414D17018
		void HandleAugmentGrantingTimersFinishedForMatch(); // Flags: Final|Native|Private 0x7FF414D16F38
		int32_t GetPendingAugmentsToGrant(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414D16E58
	};


	// Class PlayerAugmentsUI.FortPlayerAugmentInventoryInfoWidget
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x58 (0x450 - 0x3F8)
	class UFortPlayerAugmentInventoryInfoWidget : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x3F8(0x8) UNKNOWN PROPERTY
		FText RarityTextFormat; // 0x400(0x10)
		UCommonTextBlock Text_ItemName; // 0x410(0x8)
		UCommonTextBlock Text_ItemRarity; // 0x418(0x8)
		UCommonTextBlock Text_ItemCategory; // 0x420(0x8)
		UFortItemCategoryIndicator ItemCategoryIndicator; // 0x428(0x8)
		UCommonTextBlock Text_ItemDescription; // 0x430(0x8)
		UFortSocialAvatarIcon Icon_LenderAvatarIcon; // 0x438(0x8)
		UFortLazyImage Image_LenderSquadColor; // 0x440(0x8)
		UCommonTextBlock Text_BorrowingText; // 0x448(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PlayerAugmentsUI.FortPlayerAugmentInventoryInfoWidget");
			return ret;
		}

		void OnItemRaritySet(EFortRarity Rarity, FFortRarityItemData RarityItemData); // Flags: Event|Protected|BlueprintEvent 0x7FF414D177F8
		void OnItemNewOrBorrowedSet(bool bIsNew, bool bIsBorrowed); // Flags: Event|Protected|BlueprintEvent 0x7FF414D17718
	};


	// Class PlayerAugmentsUI.FortPlayerAugmentInventoryListEntry
	// Inherited from UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x13A0 - 0x1390)
	class UFortPlayerAugmentInventoryListEntry : public UCommonButtonBase	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0x1390(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PlayerAugmentsUI.FortPlayerAugmentInventoryListEntry");
			return ret;
		}

		void OnAugmentListItemSet(UItemDefinitionBase ItemDefinition); // Flags: Event|Protected|BlueprintEvent 0x7FF414D178D8
	};


	// Class PlayerAugmentsUI.FortPlayerAugmentInventoryTab
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x158 (0x550 - 0x3F8)
	class UFortPlayerAugmentInventoryTab : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x3F8(0x8) UNKNOWN PROPERTY
		FScalableFloat AugmentsEnabledViaHotfix; // 0x400(0x28)
		FGameplayTagContainer HiddenAugmentGameplayTags; // 0x428(0x20)
		FName TabNameID; // 0x448(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x44C(0x4) UNKNOWN PROPERTY
		FFortTabButtonLabelInfo TabButtonLabelInfo; // 0x450(0xF0)
		UFortPlayerAugmentInventoryInfoWidget AugmentInfo; // 0x540(0x8)
		UCommonListView ListView_Augments; // 0x548(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PlayerAugmentsUI.FortPlayerAugmentInventoryTab");
			return ret;
		}

		void RequestOpenSelector(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414D18278
		void OnTimerUpdated(float TimeRemaining, float TimePercentage); // Flags: Event|Protected|BlueprintEvent 0x7FF414D18198
		void OnNumPendingAugmentsToGrantUpdated(int32_t NumPendingAugmentsToGrant); // Flags: Event|Protected|BlueprintEvent 0x7FF414D180B8
		void OnAugmentListUpdated(int32_t NumAugments); // Flags: Event|Protected|BlueprintEvent 0x7FF414D17FD8
		void OnAugmentGrantingTimersResetForMatch(); // Flags: Event|Protected|BlueprintEvent 0x7FF414D17EF8
		void OnAugmentGrantingTimersFinishedForMatch(); // Flags: Event|Protected|BlueprintEvent 0x7FF414D17E18
		void HandleTimerUpdated(float TimeRemaining, float TimePercentage); // Flags: Final|Native|Private 0x7FF414D17D38
		void HandleNumPendingAugmentsToGrantUpdated(int8_t NumPendingAugmentsToGrant); // Flags: Final|Native|Private 0x7FF414D17C58
		void HandleAugmentGrantingTimersResetForMatch(); // Flags: Final|Native|Private 0x7FF414D17B78
		void HandleAugmentGrantingTimersFinishedForMatch(); // Flags: Final|Native|Private 0x7FF414D17A98
		int32_t GetPendingAugmentsToGrant(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414D179B8
	};


	// Class PlayerAugmentsUI.FortPlayerAugmentLobbyWidget
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x2E0 - 0x2E0)
	class UFortPlayerAugmentLobbyWidget : public UCommonUserWidget	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PlayerAugmentsUI.FortPlayerAugmentLobbyWidget");
			return ret;
		}

		void OnShowInitialAugment(UFortPlayerAugmentItemDefinition CarriedAugment); // Flags: Event|Protected|BlueprintEvent 0x7FF414D18358
	};


	// Class PlayerAugmentsUI.FortPlayerAugmentPostMatchUnlocksWidget
	// Inherited from UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x28 (0x348 - 0x320)
	class UFortPlayerAugmentPostMatchUnlocksWidget : public UFortHUDElementWidget	
	{
	public:
		FScalableFloat AugmentsEnabledViaHotfix; // 0x320(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PlayerAugmentsUI.FortPlayerAugmentPostMatchUnlocksWidget");
			return ret;
		}

		void OnShowUnlockedAugments(TArray& UnlockedAugments); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414D18438
	};


	// Class PlayerAugmentsUI.FortPlayerAugmentSpecialAcquiredNotificationWidget
	// Inherited from UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x90 (0x3B0 - 0x320)
	class UFortPlayerAugmentSpecialAcquiredNotificationWidget : public UFortHUDElementWidget	
	{
	public:
		unsigned char UnknownData03_3[0x60]; // 0x320(0x60) UNKNOWN PROPERTY
		FFortPrioritizedWidgetData PrioritizationData; // 0x380(0x2)
		unsigned char UnknownData04_6[0x6]; // 0x382(0x6) UNKNOWN PROPERTY
		FGameplayTagContainer TargetGameplayTags; // 0x388(0x20)
		unsigned char UnknownData05_7[0x8]; // 0x3A8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PlayerAugmentsUI.FortPlayerAugmentSpecialAcquiredNotificationWidget");
			return ret;
		}

		void OpenWidget(UFortPlayerAugmentItemDefinition ItemDef); // Flags: Event|Protected|BlueprintEvent 0x7FF414D18978
		void OnStompedByOtherWidget(); // Flags: Event|Protected|BlueprintEvent 0x7FF414D18898
		void OnEventAdded(); // Flags: Event|Protected|BlueprintEvent 0x7FF414D187B8
		bool HasMoreAugmentEvents(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414D186D8
		FText ConstructEventDescription(UFortPlayerAugmentItemDefinition ItemDef); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414D185F8
		void CloseWidget(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414D18518
	};


	// Class PlayerAugmentsUI.FortPlayerAugmentInfoTouchWidget
	// Inherited from UFortTouchUserWidget -> UFortUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x388 - 0x380)
	class UFortPlayerAugmentInfoTouchWidget : public UFortTouchUserWidget	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x380(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PlayerAugmentsUI.FortPlayerAugmentInfoTouchWidget");
			return ret;
		}

		void SetAugmentIndexInList(int32_t InAugmentIndexInList); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D18A58
	};

}
