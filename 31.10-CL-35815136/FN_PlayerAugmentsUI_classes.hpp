#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: PlayerAugmentsUI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class PlayerAugmentsUI.FortMobileButtonBehaviorComponent_AugmentsListIconPicker
	// Inherited from UFortMobileButtonBehaviorComponent_IconPicker -> UFortMobileButtonBehaviorComponent -> UObject
	// Size: 0x10 (0x58 - 0x48)
	class UFortMobileButtonBehaviorComponent_AugmentsListIconPicker : public UFortMobileButtonBehaviorComponent_IconPicker	
	{
	public:
		bool bCachedIsInInventoryView; // 0x48(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x49(0x7) UNKNOWN PROPERTY
		UPaperSprite* ListViewSprite; // 0x50(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PlayerAugmentsUI.FortMobileButtonBehaviorComponent_AugmentsListIconPicker");
			return ret;
		}

		void OnAugmentToolViewSwap(bool bIsInInventoryView); // Flags: Final|Native|Private, Memory Exec: 0x7FF7514A1734(relative to base address)
	};


	// Class PlayerAugmentsUI.FortMobileButtonBehaviorComponent_AugmentsListVisibility
	// Inherited from UFortMobileButtonBehaviorComponent_Visibility -> UFortMobileButtonBehaviorComponent -> UObject
	// Size: 0x8 (0x50 - 0x48)
	class UFortMobileButtonBehaviorComponent_AugmentsListVisibility : public UFortMobileButtonBehaviorComponent_Visibility	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x48(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PlayerAugmentsUI.FortMobileButtonBehaviorComponent_AugmentsListVisibility");
			return ret;
		}

		void HandleAugmentToolViewSwap(bool bInIsInventoryView); // Flags: Final|Native|Private, Memory Exec: 0x7FF74F930390(relative to base address)
		void HandleAugmentToolOpenedStatusChanged(bool bIsOpened, bool bInIsInventoryView); // Flags: Final|Native|Private, Memory Exec: 0x7FF7514A0958(relative to base address)
	};


	// Class PlayerAugmentsUI.FortMobileButtonBehaviorComponent_AugmentsListVisibility_Swap
	// Inherited from UFortMobileButtonBehaviorComponent_AugmentsListVisibility -> UFortMobileButtonBehaviorComponent_Visibility -> UFortMobileButtonBehaviorComponent -> UObject
	// Size: 0x8 (0x58 - 0x50)
	class UFortMobileButtonBehaviorComponent_AugmentsListVisibility_Swap : public UFortMobileButtonBehaviorComponent_AugmentsListVisibility	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x50(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PlayerAugmentsUI.FortMobileButtonBehaviorComponent_AugmentsListVisibility_Swap");
			return ret;
		}
	};


	// Class PlayerAugmentsUI.FortPlayerAugmentHUDTimerWidget
	// Inherited from UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x318 - 0x318)
	class UFortPlayerAugmentHUDTimerWidget : public UFortHUDElementWidget	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PlayerAugmentsUI.FortPlayerAugmentHUDTimerWidget");
			return ret;
		}

		void OnTimerUpdated(float TimeRemaining, float TimePercentage); // Flags: Native|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7514A17B4(relative to base address)
		void OnNumPendingAugmentsToGrantUpdated(int32_t NumPendingAugmentsToGrant); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnMovementModeChanged(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnHUDElementVisibilityChanged(FGameplayTagContainer& HiddenElementTagContainer); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCanSelectAugmentChanged(bool bCanSelectAugment); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnAugmentSelectorOpenedStatusChanged(bool bIsOpened); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnAugmentGrantingTimersResetForMatch(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnAugmentGrantingTimersFinishedForMatch(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleTimerUpdated(float TimeRemaining, float TimePercentage); // Flags: Final|Native|Private, Memory Exec: 0x7FF7514A14A0(relative to base address)
		void HandleNumPendingAugmentsToGrantUpdated(int8_t NumPendingAugmentsToGrant); // Flags: Final|Native|Private, Memory Exec: 0x7FF7514A1004(relative to base address)
		void HandleHUDElementVisibilityChanged(FGameplayTagContainer& HiddenElementTagContainer); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF7514A0E3C(relative to base address)
		void HandleCanSelectAugmentChanged(bool bCanSelectAugment); // Flags: Final|Native|Private, Memory Exec: 0x7FF7514A0C04(relative to base address)
		void HandleAugmentSelectorOpenedStatusChanged(bool bIsOpened, bool bViewingAugmentInventory); // Flags: Final|Native|Private, Memory Exec: 0x7FF7514A0814(relative to base address)
		void HandleAugmentGrantingTimersResetForMatch(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7514A0550(relative to base address)
		void HandleAugmentGrantingTimersFinishedForMatch(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7514A0514(relative to base address)
		int32_t GetPendingAugmentsToGrant(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7514A04A4(relative to base address)
		FText FormatTime(float TotalSeconds); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7514A040C(relative to base address)
		bool CanSelectAugment(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7514A02EC(relative to base address)
		bool CanEquipSelectionTool(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7514A029C(relative to base address)
	};


	// Class PlayerAugmentsUI.FortPlayerAugmentHUDSelectionTimerWidget
	// Inherited from UFortPlayerAugmentHUDTimerWidget -> UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x58 (0x370 - 0x318)
	class UFortPlayerAugmentHUDSelectionTimerWidget : public UFortPlayerAugmentHUDTimerWidget	
	{
	public:
		bool bIsAugmentReadyVisible; // 0x318(0x1)
		bool bIsCountdownActive; // 0x319(0x1)
		bool bIsOffline; // 0x31A(0x1)
		unsigned char UnknownData00_6[0x5]; // 0x31B(0x5) UNKNOWN PROPERTY
		FTimerHandle HideTimerHandle; // 0x320(0x8)
		UMaterialInstanceDynamic* TimerProgressDMI; // 0x328(0x8)
		FScalableFloat CountdownStartTimeHF; // 0x330(0x28)
		UCommonTextBlock* NativeAugmentTimerText; // 0x358(0x8)
		UWidgetAnimation* NativeAnimTimerTextCountdownUpdated; // 0x360(0x8)
		UWidgetAnimation* NativeAnimProgressBarCountdownUpdated; // 0x368(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PlayerAugmentsUI.FortPlayerAugmentHUDSelectionTimerWidget");
			return ret;
		}

		void UpdateCountdown(float TimeRemaining); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF7514A1AD8(relative to base address)
		void SetMobileProgressTimer(float TimePercentage); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF7514A1958(relative to base address)
		void OnCountdownActivated(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool IsCountdownVisible(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7514A1710(relative to base address)
	};


	// Class PlayerAugmentsUI.FortMobileActionBBE_AugmentShoot
	// Inherited from UFortMobileActionButtonBehaviorExtension -> UFortMobileHUDWidgetBehaviorExtension -> UObject
	// Size: 0x10 (0x90 - 0x80)
	class UFortMobileActionBBE_AugmentShoot : public UFortMobileActionButtonBehaviorExtension	
	{
	public:
		UPaperSprite* IconOverrideSprite; // 0x80(0x8)
		FGameplayTag IconOverrideTag; // 0x88(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x8C(0x4) UNKNOWN PROPERTY

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
		UFortItemDefinition* RerollCurrency; // 0x130(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PlayerAugmentsUI.FortMobileActionButtonBehavior_RerollAugments");
			return ret;
		}
	};


	// Class PlayerAugmentsUI.FortMobilePlayerAugmentTimer
	// Inherited from UFortMobileHUDElement -> UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x368 - 0x348)
	class UFortMobilePlayerAugmentTimer : public UFortMobileHUDElement	
	{
	public:
		TWeakObjectPtr<UFortControllerComponent_AugmentGrantingSystem*> AugmentControllerComponent; // 0x348(0x8)
		UClass* PlayerAugmentGranterWidgetClass; // 0x350(0x8)
		UUserWidget* PlayerAugmentGranterWidget; // 0x358(0x8)
		UCommonButtonBase* Button_PlayerAugmentTimer; // 0x360(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PlayerAugmentsUI.FortMobilePlayerAugmentTimer");
			return ret;
		}

		void HandleHUDElementVisibilityChanged(FGameplayTagContainer& HiddenElementTagContainer); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF7514A0D84(relative to base address)
		void BP_OnHUDElementVisibilityChanged(FGameplayTagContainer& HiddenElementTagContainer, bool bIsSelectionItemEquipped, bool bForceCollapse); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
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
		UImage* Image_Background; // 0x1470(0x8)
		FName ParamName_ItemIcon; // 0x1478(0x4)
		FName ParamName_IsDiscovered; // 0x147C(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PlayerAugmentsUI.FortPlayerAugmentCollectionListEntry");
			return ret;
		}
	};


	// Class PlayerAugmentsUI.FortPlayerAugmentCollectionScreen
	// Inherited from UAthenaCollectionScreenBase -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x80 (0x6B8 - 0x638)
	class UFortPlayerAugmentCollectionScreen : public UAthenaCollectionScreenBase	
	{
	public:
		FScalableFloat AugmentsEnabledViaHotfix; // 0x638(0x28)
		TMap<FGameplayTag, TWeakObjectPtr> TagToImageMap; // 0x660(0x50)
		UCommonTextBlock* Text_CategoryTitle; // 0x6B0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PlayerAugmentsUI.FortPlayerAugmentCollectionScreen");
			return ret;
		}
	};


	// Class PlayerAugmentsUI.FortPlayerAugmentCollectionScreenContainer
	// Inherited from UAthenaCollectionScreenContainer -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x528 - 0x528)
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
	// Size: 0x20 (0x4C8 - 0x4A8)
	class UFortPlayerAugmentCollectionScreenInfoOverlay : public UAthenaCollectionScreenInfoOverlay	
	{
	public:
		FName ParamName_Progress; // 0x4A8(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4AC(0x4) UNKNOWN PROPERTY
		UCommonTextBlock* Text_ItemCategory; // 0x4B0(0x8)
		UFortItemCategoryIndicator* ItemCategoryIndicator; // 0x4B8(0x8)
		UOverlay* Overlay_UndiscoveredText; // 0x4C0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PlayerAugmentsUI.FortPlayerAugmentCollectionScreenInfoOverlay");
			return ret;
		}
	};


	// Class PlayerAugmentsUI.FortPlayerAugmentGranterWidget
	// Inherited from UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x58 (0x370 - 0x318)
	class UFortPlayerAugmentGranterWidget : public UFortHUDElementWidget	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x318(0x8) UNKNOWN PROPERTY
		FScalableFloat UnblockInteractionWithChoicesTime; // 0x320(0x28)
		TArray<UFortPlayerAugmentItemDefinition*> AvailableAugmentItemDefinitions; // 0x348(0x10)
		UWidget* Overlay_Reroll; // 0x358(0x8)
		unsigned char UnknownData01_7[0x10]; // 0x360(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PlayerAugmentsUI.FortPlayerAugmentGranterWidget");
			return ret;
		}

		void OnTimerUpdated(float TimeRemaining, float TimePercentage); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSelectedAugmentForGrant(UFortPlayerAugmentItemDefinition* HighlightedAugment); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRerollAugments(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPopulateAvailableAugmentsHUD(TArray<UFortPlayerAugmentItemDefinition*>& AugmentItemDefinition); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnNumPendingAugmentsToGrantUpdated(int32_t NumPendingAugmentsToGrant); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInputTypeChanged(ECommonInputType NewInputType); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCanSelectAugmentChanged(bool bCanSelectAugment); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnAugmentSelectorToolViewSwapped(bool bViewingAugmentInventory); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnAugmentSelectorOpenedStatusChanged(bool bIsOpened, bool bViewingAugmentInventory); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnAugmentSelectionStarted(int32_t SelectedAugmentIndex); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnAugmentScrollUpEvent(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnAugmentScrollDownEvent(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnAugmentHighlighted(int32_t HighlightedAugmentIndex); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleTimerUpdated(float TimeRemaining, float TimePercentage); // Flags: Final|Native|Private, Memory Exec: 0x7FF7514A13DC(relative to base address)
		void HandleSelectedAugmentForGrant(UFortPlayerAugmentItemDefinition* SelectedAugment); // Flags: Final|Native|Private, Memory Exec: 0x7FF7514A135C(relative to base address)
		void HandleRerollAugments(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7514A1334(relative to base address)
		void HandleNumPendingAugmentsToGrantUpdated(int8_t NumPendingAugmentsToGrant); // Flags: Final|Native|Private, Memory Exec: 0x7FF7514A0EF4(relative to base address)
		void HandleCanSelectAugmentChanged(bool bCanSelectAugment); // Flags: Final|Native|Private, Memory Exec: 0x7FF7514A0B84(relative to base address)
		void HandleAvailableAugmentsForGrantingUpdated(UFortControllerComponent_AugmentGrantingSystem* GrantingComponent); // Flags: Final|Native|Private, Memory Exec: 0x7FF7514A0A1C(relative to base address)
		void HandleAugmentSelectorToolViewSwapped(bool bViewingAugmentsInventory); // Flags: Final|Native|Private, Memory Exec: 0x7FF7514A08D8(relative to base address)
		void HandleAugmentSelectorOpenedStatusChanged(bool bIsOpened, bool bViewingAugmentInventory); // Flags: Final|Native|Private, Memory Exec: 0x7FF7514A068C(relative to base address)
		void HandleAugmentSelectionStarted(int32_t SelectedAugmentIndex); // Flags: Final|Native|Private, Memory Exec: 0x7FF7514A060C(relative to base address)
		void HandleAugmentHighlighted(int32_t HighlightedAugmentIndex); // Flags: Final|Native|Private, Memory Exec: 0x7FF7514A058C(relative to base address)
		int32_t GetPendingAugmentsToGrant(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7514A04A4(relative to base address)
	};


	// Class PlayerAugmentsUI.FortPlayerAugmentHUDQuickbarWidget
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x48 (0x320 - 0x2D8)
	class UFortPlayerAugmentHUDQuickbarWidget : public UCommonUserWidget	
	{
	public:
		FGameplayTagContainer HiddenAugmentGameplayTags; // 0x2D8(0x20)
		FScalableFloat NumAugmentGrantRoundsForPlaylist; // 0x2F8(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PlayerAugmentsUI.FortPlayerAugmentHUDQuickbarWidget");
			return ret;
		}

		void OnAugmentsUpdated(TArray<UFortPlayerAugmentItemDefinition*>& ActiveAugments); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class PlayerAugmentsUI.FortPlayerAugmentHUDRerollWidget
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x50 (0x328 - 0x2D8)
	class UFortPlayerAugmentHUDRerollWidget : public UCommonUserWidget	
	{
	public:
		UCommonLazyImage* Image_CurrencyIcon; // 0x2D8(0x8)
		UFortWorldItemDefinition* RerollCurrency; // 0x2E0(0x8)
		int32_t CachedNumFreeRerolls; // 0x2E8(0x4)
		FName RerollHoldMaterialParamName; // 0x2EC(0x4)
		unsigned char UnknownData00_6[0x8]; // 0x2F0(0x8) UNKNOWN PROPERTY
		UImage* Image_ProgressBar; // 0x2F8(0x8)
		UCommonTextBlock* Text_OwnedCurrency; // 0x300(0x8)
		UCommonTextBlock* Text_RerollCost; // 0x308(0x8)
		unsigned char UnknownData01_7[0x18]; // 0x310(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PlayerAugmentsUI.FortPlayerAugmentHUDRerollWidget");
			return ret;
		}

		void StartRerollHoldProgress(float duration); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF7514A19D8(relative to base address)
		void OnUpdateCurrency(int32_t OwnedCurrency, int32_t RerollCost); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRerollAugments(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnFreeRerollsUpdated(int32_t NewNumFreeRerolls); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleRerollAugments(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7514A1348(relative to base address)
		void HandleFreeRerollsUpdated(int32_t NewNumFreeRerolls); // Flags: Final|Native|Private, Memory Exec: 0x7FF7514A0D04(relative to base address)
		void HandleAugmentSelectorOpenedStatusChanged(bool bIsOpened, bool bViewingInventory); // Flags: Final|Native|Private, Memory Exec: 0x7FF7514A0750(relative to base address)
		void EndRerollHoldProgress(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF7514A03F8(relative to base address)
	};


	// Class PlayerAugmentsUI.FortPlayerAugmentInfoEntryWidget
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x60 (0x338 - 0x2D8)
	class UFortPlayerAugmentInfoEntryWidget : public UCommonUserWidget	
	{
	public:
		FText RarityTextFormat; // 0x2D8(0x10)
		UCommonTextBlock* Text_AugmentName; // 0x2E8(0x8)
		UCommonTextBlock* Text_AugmentRarity; // 0x2F0(0x8)
		UCommonTextBlock* Text_AugmentCategory; // 0x2F8(0x8)
		UFortItemCategoryIndicator* ItemCategoryIndicator; // 0x300(0x8)
		UFortLazyImage* Image_CategoryAsImage; // 0x308(0x8)
		UCommonTextBlock* Text_AugmentDescription; // 0x310(0x8)
		UFortSocialAvatarIcon* Icon_LenderAvatarIcon; // 0x318(0x8)
		UWidget* Overlay_LenderAvatarIcon; // 0x320(0x8)
		UFortLazyImage* Image_LenderSquadColor; // 0x328(0x8)
		UCommonTextBlock* Text_BorrowingText; // 0x330(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PlayerAugmentsUI.FortPlayerAugmentInfoEntryWidget");
			return ret;
		}

		void UpdateAugment(UFortPlayerAugmentItemDefinition* AugmentItemDefinition); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7514A1A58(relative to base address)
		void OnItemRaritySet(EFortRarity Rarity, FFortRarityItemData RarityItemData); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnItemPinColorSet(FLinearColor PinColor); // Flags: Event|Protected|HasDefaults|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnItemNewOrBorrowedSet(bool bIsNew, bool bIsBorrowed); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class PlayerAugmentsUI.FortPlayerAugmentInGameCarriedWidget
	// Inherited from UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x318 - 0x318)
	class UFortPlayerAugmentInGameCarriedWidget : public UFortHUDElementWidget	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PlayerAugmentsUI.FortPlayerAugmentInGameCarriedWidget");
			return ret;
		}

		void OnShowInitialAugment(UFortPlayerAugmentItemDefinition* PlayerAugmentItemDefinition); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleExitBus(AFortPlayerControllerZone* FortPCZone); // Flags: Final|Native|Private, Memory Exec: 0x7FF7514A0C84(relative to base address)
	};


	// Class PlayerAugmentsUI.FortPlayerAugmentInventoryExtensionRow
	// Inherited from UAthenaInventoryGroupBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x50 (0x390 - 0x340)
	class UFortPlayerAugmentInventoryExtensionRow : public UAthenaInventoryGroupBase	
	{
	public:
		FScalableFloat AugmentsEnabledViaHotfix; // 0x340(0x28)
		FGameplayTagContainer BlockedGameplayTags; // 0x368(0x20)
		unsigned char UnknownData00_7[0x8]; // 0x388(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PlayerAugmentsUI.FortPlayerAugmentInventoryExtensionRow");
			return ret;
		}

		void RequestOpenSelector(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF7514A187C(relative to base address)
		void OnTimerUpdated(float TimeRemaining, float TimePercentage); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnNumPendingAugmentsToGrantUpdated(int32_t NumPendingAugmentsToGrant); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnAugmentGrantingTimersResetForMatch(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnAugmentGrantingTimersFinishedForMatch(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleTimerUpdated(float TimeRemaining, float TimePercentage); // Flags: Final|Native|Private, Memory Exec: 0x7FF7514A1564(relative to base address)
		void HandleNumPendingAugmentsToGrantUpdated(int8_t NumPendingAugmentsToGrant); // Flags: Final|Native|Private, Memory Exec: 0x7FF7514A1114(relative to base address)
		void HandleAugmentGrantingTimersResetForMatch(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7514A0564(relative to base address)
		void HandleAugmentGrantingTimersFinishedForMatch(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7514A0528(relative to base address)
		int32_t GetPendingAugmentsToGrant(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7514A04F0(relative to base address)
	};


	// Class PlayerAugmentsUI.FortPlayerAugmentInventoryInfoWidget
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x58 (0x448 - 0x3F0)
	class UFortPlayerAugmentInventoryInfoWidget : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x3F0(0x8) UNKNOWN PROPERTY
		FText RarityTextFormat; // 0x3F8(0x10)
		UCommonTextBlock* Text_ItemName; // 0x408(0x8)
		UCommonTextBlock* Text_ItemRarity; // 0x410(0x8)
		UCommonTextBlock* Text_ItemCategory; // 0x418(0x8)
		UFortItemCategoryIndicator* ItemCategoryIndicator; // 0x420(0x8)
		UCommonTextBlock* Text_ItemDescription; // 0x428(0x8)
		UFortSocialAvatarIcon* Icon_LenderAvatarIcon; // 0x430(0x8)
		UFortLazyImage* Image_LenderSquadColor; // 0x438(0x8)
		UCommonTextBlock* Text_BorrowingText; // 0x440(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PlayerAugmentsUI.FortPlayerAugmentInventoryInfoWidget");
			return ret;
		}

		void OnItemRaritySet(EFortRarity Rarity, FFortRarityItemData RarityItemData); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnItemNewOrBorrowedSet(bool bIsNew, bool bIsBorrowed); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class PlayerAugmentsUI.FortPlayerAugmentInventoryListEntry
	// Inherited from UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x13A0 - 0x1390)
	class UFortPlayerAugmentInventoryListEntry : public UCommonButtonBase	
	{
	public:
		unsigned char UnknownData00_1[0x10]; // 0x1390(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PlayerAugmentsUI.FortPlayerAugmentInventoryListEntry");
			return ret;
		}

		void OnAugmentListItemSet(UItemDefinitionBase* ItemDefinition); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class PlayerAugmentsUI.FortPlayerAugmentInventoryTab
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x160 (0x550 - 0x3F0)
	class UFortPlayerAugmentInventoryTab : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x3F0(0x8) UNKNOWN PROPERTY
		FScalableFloat AugmentsEnabledViaHotfix; // 0x3F8(0x28)
		FGameplayTagContainer HiddenAugmentGameplayTags; // 0x420(0x20)
		FName TabNameID; // 0x440(0x4)
		unsigned char UnknownData01_6[0xC]; // 0x444(0xC) UNKNOWN PROPERTY
		FFortTabButtonLabelInfo TabButtonLabelInfo; // 0x450(0xF0)
		UFortPlayerAugmentInventoryInfoWidget* AugmentInfo; // 0x540(0x8)
		UCommonListView* ListView_Augments; // 0x548(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PlayerAugmentsUI.FortPlayerAugmentInventoryTab");
			return ret;
		}

		void RequestOpenSelector(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF7514A187C(relative to base address)
		void OnTimerUpdated(float TimeRemaining, float TimePercentage); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnNumPendingAugmentsToGrantUpdated(int32_t NumPendingAugmentsToGrant); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnAugmentListUpdated(int32_t NumAugments); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnAugmentGrantingTimersResetForMatch(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnAugmentGrantingTimersFinishedForMatch(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleTimerUpdated(float TimeRemaining, float TimePercentage); // Flags: Final|Native|Private, Memory Exec: 0x7FF7514A1628(relative to base address)
		void HandleNumPendingAugmentsToGrantUpdated(int8_t NumPendingAugmentsToGrant); // Flags: Final|Native|Private, Memory Exec: 0x7FF7514A1224(relative to base address)
		void HandleAugmentGrantingTimersResetForMatch(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7514A0578(relative to base address)
		void HandleAugmentGrantingTimersFinishedForMatch(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7514A053C(relative to base address)
		int32_t GetPendingAugmentsToGrant(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7514A04F0(relative to base address)
	};


	// Class PlayerAugmentsUI.FortPlayerAugmentLobbyWidget
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x2D8 - 0x2D8)
	class UFortPlayerAugmentLobbyWidget : public UCommonUserWidget	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PlayerAugmentsUI.FortPlayerAugmentLobbyWidget");
			return ret;
		}

		void OnShowInitialAugment(UFortPlayerAugmentItemDefinition* CarriedAugment); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class PlayerAugmentsUI.FortPlayerAugmentPostMatchUnlocksWidget
	// Inherited from UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x28 (0x340 - 0x318)
	class UFortPlayerAugmentPostMatchUnlocksWidget : public UFortHUDElementWidget	
	{
	public:
		FScalableFloat AugmentsEnabledViaHotfix; // 0x318(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PlayerAugmentsUI.FortPlayerAugmentPostMatchUnlocksWidget");
			return ret;
		}

		void OnShowUnlockedAugments(TArray<UFortPlayerAugmentItemDefinition*>& UnlockedAugments); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class PlayerAugmentsUI.FortPlayerAugmentSpecialAcquiredNotificationWidget
	// Inherited from UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x98 (0x3B0 - 0x318)
	class UFortPlayerAugmentSpecialAcquiredNotificationWidget : public UFortHUDElementWidget	
	{
	public:
		unsigned char UnknownData00_3[0x68]; // 0x318(0x68) UNKNOWN PROPERTY
		FFortPrioritizedWidgetData PrioritizationData; // 0x380(0x2)
		unsigned char UnknownData01_6[0x6]; // 0x382(0x6) UNKNOWN PROPERTY
		FGameplayTagContainer TargetGameplayTags; // 0x388(0x20)
		unsigned char UnknownData02_7[0x8]; // 0x3A8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PlayerAugmentsUI.FortPlayerAugmentSpecialAcquiredNotificationWidget");
			return ret;
		}

		void OpenWidget(UFortPlayerAugmentItemDefinition* ItemDef); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnStompedByOtherWidget(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnEventAdded(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool HasMoreAugmentEvents(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7514A16EC(relative to base address)
		FText ConstructEventDescription(UFortPlayerAugmentItemDefinition* ItemDef); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7514A0350(relative to base address)
		void CloseWidget(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF7514A033C(relative to base address)
	};


	// Class PlayerAugmentsUI.FortPlayerAugmentInfoTouchWidget
	// Inherited from UFortTouchUserWidget -> UFortUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x380 - 0x378)
	class UFortPlayerAugmentInfoTouchWidget : public UFortTouchUserWidget	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x378(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PlayerAugmentsUI.FortPlayerAugmentInfoTouchWidget");
			return ret;
		}

		void SetAugmentIndexInList(int32_t InAugmentIndexInList); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7514A18CC(relative to base address)
	};

}
