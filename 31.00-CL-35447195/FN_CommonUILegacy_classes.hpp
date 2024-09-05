#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: CommonUILegacy
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class CommonUILegacy.CommonActivatablePanelLegacy
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x138 (0x530 - 0x3F8)
	class UCommonActivatablePanelLegacy : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x3F8(0x8) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnWidgetActivated; // 0x400(0x10)
		FMulticastInlineDelegate OnWidgetDeactivated; // 0x410(0x10)
		bool bConsumeAllActions; // 0x420(0x1)
		bool bExposeActionsExternally; // 0x421(0x1)
		bool bShouldBypassStack; // 0x422(0x1)
		unsigned char UnknownData03_7[0x10D]; // 0x423(0x10D) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUILegacy.CommonActivatablePanelLegacy");
			return ret;
		}

		void SetInputActionHandlerWithProgressPopupMenu(FDataTableRowHandle InputActionRow, FDelegateProperty CommitedEvent, FDelegateProperty ProgressEvent, UCommonPopupMenuLegacy PopupMenu); // Flags: Final|Native|Public|BlueprintCallable 0x7FF413FC6C68
		void SetInputActionHandlerWithProgress(FDataTableRowHandle InputActionRow, FDelegateProperty CommitedEvent, FDelegateProperty ProgressEvent); // Flags: Final|Native|Public|BlueprintCallable 0x7FF413FC6B88
		void SetInputActionHandlerWithPopupMenu(FDataTableRowHandle InputActionRow, FDelegateProperty CommitedEvent, UCommonPopupMenuLegacy PopupMenu); // Flags: Final|Native|Public|BlueprintCallable 0x7FF413FC6AA8
		void SetInputActionHandler(FDataTableRowHandle InputActionRow, FDelegateProperty CommitedEvent); // Flags: Final|Native|Public|BlueprintCallable 0x7FF413FC69C8
		void SetActionHandlerStateWithDisabledCommitEvent(UDataTable DataTable, FName RowName, EInputActionState State, FDelegateProperty DisabledCommitEvent); // Flags: Final|Native|Public|BlueprintCallable 0x7FF413FC68E8
		void SetActionHandlerStateFromHandleWithDisabledCommitEvent(FDataTableRowHandle InputActionRow, EInputActionState State, FDelegateProperty DisabledCommitEvent); // Flags: Final|Native|Public|BlueprintCallable 0x7FF413FC6808
		void SetActionHandlerStateFromHandle(FDataTableRowHandle InputActionRow, EInputActionState State); // Flags: Final|Native|Public|BlueprintCallable 0x7FF413FC6728
		void SetActionHandlerState(UDataTable DataTable, FName RowName, EInputActionState State); // Flags: Final|Native|Public|BlueprintCallable 0x7FF413FC6648
		void RemoveInputActionHandler(FDataTableRowHandle InputActionRow); // Flags: Final|Native|Public|BlueprintCallable 0x7FF413FC6568
		void RemoveAllInputActionHandlers(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF413FC6488
		void PopPanel(); // Flags: Native|Public|BlueprintCallable 0x7FF413FC63A8
		void OnTransitionedBySwitcher(); // Flags: Event|Protected|BlueprintEvent 0x7FF413FC62C8
		void OnRemovedFromActivationStack(); // Flags: Event|Protected|BlueprintEvent 0x7FF413FC61E8
		void OnInputModeChanged(bool bUsingGamepad); // Flags: Event|Protected|BlueprintEvent 0x7FF413FC6108
		void OnBeginOutro(); // Flags: Native|Event|Protected|BlueprintEvent 0x7FF413FC6028
		void OnBeginIntro(); // Flags: Native|Event|Protected|BlueprintEvent 0x7FF413FC5F48
		void OnAddedToActivationStack(); // Flags: Event|Protected|BlueprintEvent 0x7FF413FC5E68
		bool IsIntroed(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF413FC5D88
		bool IsInActivationStack(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF413FC5CA8
		bool HasInputActionHandler(FDataTableRowHandle InputActionRow); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF413FC5BC8
		bool GetInputActions(TArray& InputActionDataRows); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF413FC5A28
		void EndOutro(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF413FC5948
		void EndIntro(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF413FC5868
		void BeginOutro(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF413FC5788
		void BeginIntro(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF413FC56A8
		void AddInputActionNoHandler(UDataTable DataTable, FName RowName); // Flags: Final|Native|Public|BlueprintCallable 0x7FF413FC55C8
		void AddInputActionHandlerWithProgressPopup(UDataTable DataTable, FName RowName, FDelegateProperty CommitedEvent, FDelegateProperty ProgressEvent, UCommonPopupMenuLegacy PopupMenu); // Flags: Final|Native|Public|BlueprintCallable 0x7FF413FC54E8
		void AddInputActionHandlerWithProgress(UDataTable DataTable, FName RowName, FDelegateProperty CommitedEvent, FDelegateProperty ProgressEvent); // Flags: Final|Native|Public|BlueprintCallable 0x7FF413FC5408
		void AddInputActionHandlerWithPopup(UDataTable DataTable, FName RowName, FDelegateProperty CommitedEvent, UCommonPopupMenuLegacy PopupMenu); // Flags: Final|Native|Public|BlueprintCallable 0x7FF413FC5328
		void AddInputActionHandler(UDataTable DataTable, FName RowName, FDelegateProperty CommitedEvent); // Flags: Final|Native|Public|BlueprintCallable 0x7FF413FC5248
	};


	// Class CommonUILegacy.CommonButtonInternalLegacy
	// Inherited from UCommonButtonInternalBase -> UButton -> UContentWidget -> UPanelWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x5F0 - 0x5F0)
	class UCommonButtonInternalLegacy : public UCommonButtonInternalBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUILegacy.CommonButtonInternalLegacy");
			return ret;
		}
	};


	// Class CommonUILegacy.CommonButtonLegacy
	// Inherited from UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x50 (0x13E0 - 0x1390)
	class UCommonButtonLegacy : public UCommonButtonBase	
	{
	public:
		FMulticastInlineDelegate OnSelectedChanged; // 0x1390(0x10)
		FMulticastInlineDelegate OnButtonClicked; // 0x13A0(0x10)
		FMulticastInlineDelegate OnButtonDoubleClicked; // 0x13B0(0x10)
		FMulticastInlineDelegate OnButtonHovered; // 0x13C0(0x10)
		FMulticastInlineDelegate OnButtonUnhovered; // 0x13D0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUILegacy.CommonButtonLegacy");
			return ret;
		}

		void SetTriggeredInputActionLegacy(FDataTableRowHandle& InputActionRow, UCommonActivatablePanelLegacy OldPanel); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF4140FE718
		void HandleOnSelectedChanged(UCommonButtonBase Button, bool InSelected); // Flags: Final|Native|Private 0x7FF4140FE638
		void HandleOnButtonUnhovered(UCommonButtonBase Button); // Flags: Final|Native|Private 0x7FF4140FE558
		void HandleOnButtonHovered(UCommonButtonBase Button); // Flags: Final|Native|Private 0x7FF4140FE478
		void HandleOnButtonDoubleClicked(UCommonButtonBase Button); // Flags: Final|Native|Private 0x7FF4140FE398
		void HandleOnButtonClicked(UCommonButtonBase Button); // Flags: Final|Native|Private 0x7FF4140FE2B8
	};


	// Class CommonUILegacy.CommonGlobalInputHandlerLegacy
	// Inherited from UObject
	// Size: 0x48 (0x70 - 0x28)
	class UCommonGlobalInputHandlerLegacy : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x48]; // 0x28(0x48) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUILegacy.CommonGlobalInputHandlerLegacy");
			return ret;
		}
	};


	// Class CommonUILegacy.CommonInputManagerLegacy
	// Inherited from UObject
	// Size: 0xE0 (0x108 - 0x28)
	class UCommonInputManagerLegacy : public UObject	
	{
	public:
		unsigned char UnknownData03_3[0x80]; // 0x28(0x80) UNKNOWN PROPERTY
		TScriptInterface CurrentlyHeldActionInputHandler; // 0xA8(0x10)
		TArray ActivatablePanelStack; // 0xB8(0x10)
		UCommonGlobalInputHandlerLegacy GlobalInputHandler; // 0xC8(0x8)
		unsigned char UnknownData04_6[0x18]; // 0xD0(0x18) UNKNOWN PROPERTY
		TArray Operations; // 0xE8(0x10)
		unsigned char UnknownData05_7[0x10]; // 0xF8(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUILegacy.CommonInputManagerLegacy");
			return ret;
		}

		void SuspendStartingOperationProcessing(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4146297D8
		bool StopListeningForExistingHeldAction(FDataTableRowHandle& InputActionDataRow, FDelegateProperty& CompleteEvent, FDelegateProperty& ProgressEvent); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF4146296F8
		bool StartListeningForExistingHeldAction(FDataTableRowHandle& InputActionDataRow, FDelegateProperty& CompleteEvent, FDelegateProperty& ProgressEvent); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414629618
		void SetGlobalInputHandlerPriorityFilter(int32_t InFilterPriority); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414629538
		void ResumeStartingOperationProcessing(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414629458
		void PushActivatablePanel(UCommonActivatablePanelLegacy ActivatablePanel, bool bIntroPanel, bool bOutroPanelBelow); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414629378
		void PopActivatablePanel(UCommonActivatablePanelLegacy ActivatablePanel); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414629298
		bool IsPanelOnStack(UCommonActivatablePanelLegacy InPanel); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4146291B8
		bool IsInputSuspended(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4146290D8
		UCommonActivatablePanelLegacy GetTopPanel(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414628FF8
		int32_t GetGlobalInputHandlerPriorityFilter(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414628F18
		bool GetAvailableInputActions(TArray& AvailableInputActions); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414628E38
	};


	// Class CommonUILegacy.CommonInputReflectorLegacy
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x30 (0x310 - 0x2E0)
	class UCommonInputReflectorLegacy : public UCommonUserWidget	
	{
	public:
		UClass ButtonType; // 0x2E0(0x8)
		TArray ActiveButtons; // 0x2E8(0x10)
		TArray InactiveButtons; // 0x2F8(0x10)
		unsigned char UnknownData01_7[0x8]; // 0x308(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUILegacy.CommonInputReflectorLegacy");
			return ret;
		}

		void OnButtonAdded(UCommonButtonLegacy AddedButton, FCommonInputActionHandlerData& Data); // Flags: Event|Public|HasOutParms|BlueprintEvent 0x7FF4146298B8
	};


	// Class CommonUILegacy.CommonPopupButtonLegacy
	// Inherited from UCommonButtonLegacy -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x13F0 - 0x13E0)
	class UCommonPopupButtonLegacy : public UCommonButtonLegacy	
	{
	public:
		UMenuAnchor PopupMenuAnchor; // 0x13E0(0x8)
		UCommonPopupMenuLegacy PopupMenu; // 0x13E8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUILegacy.CommonPopupButtonLegacy");
			return ret;
		}

		UUserWidget GetMenuAnchorWidget(); // Flags: Final|Native|Private 0x7FF414629998
	};


	// Class CommonUILegacy.CommonPopupMenuLegacy
	// Inherited from UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x18 (0x548 - 0x530)
	class UCommonPopupMenuLegacy : public UCommonActivatablePanelLegacy	
	{
	public:
		bool bUseInputStack; // 0x530(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x531(0x3) UNKNOWN PROPERTY
		TWeakObjectPtr OwningMenuAnchor; // 0x534(0x8)
		TWeakObjectPtr ContextProvidingObject; // 0x53C(0x8)
		unsigned char UnknownData03_7[0x4]; // 0x544(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUILegacy.CommonPopupMenuLegacy");
			return ret;
		}

		void SetOwningMenuAnchor(UMenuAnchor MenuAnchor); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414629ED8
		void SetContextProvider(UObject ContextProvidingObject); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414629DF8
		void RequestClose(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414629D18
		void OnIsOpenChanged(bool IsOpen); // Flags: Final|Native|Protected 0x7FF414629C38
		void HandlePreDifferentContextProviderSet(); // Flags: Native|Event|Protected|BlueprintEvent 0x7FF414629B58
		void HandlePostDifferentContextProviderSet(); // Flags: Native|Event|Protected|BlueprintEvent 0x7FF414629A78
	};


	// Class CommonUILegacy.CommonTabListWidgetLegacy
	// Inherited from UCommonTabListWidgetBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x478 - 0x458)
	class UCommonTabListWidgetLegacy : public UCommonTabListWidgetBase	
	{
	public:
		FMulticastInlineDelegate OnTabButtonCreated; // 0x458(0x10)
		FMulticastInlineDelegate OnTabButtonRemoved; // 0x468(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUILegacy.CommonTabListWidgetLegacy");
			return ret;
		}

		void OnTabButtonRemoved__DelegateSignature(FName TabID, UCommonButtonLegacy TabButton); // Flags: MulticastDelegate|Public|Delegate 0x7FF411E04EF0
		void OnTabButtonCreated__DelegateSignature(FName TabID, UCommonButtonLegacy TabButton); // Flags: MulticastDelegate|Public|Delegate 0x7FF411E04E10
		void HandleTabRemoved(FName TabNameID, UCommonButtonLegacy TabButton); // Flags: Native|Event|Protected|BlueprintEvent 0x7FF411E04D30
		void HandleTabCreated(FName TabNameID, UCommonButtonLegacy TabButton); // Flags: Native|Event|Protected|BlueprintEvent 0x7FF411E04C50
		void HandleOnTabButtonRemoved(FName TabID, UCommonButtonBase TabButton); // Flags: Final|Native|Private 0x7FF411E04B70
		void HandleOnTabButtonCreated(FName TabID, UCommonButtonBase TabButton); // Flags: Final|Native|Private 0x7FF411E04A90
		UCommonButtonLegacy GetTabButtonByID(FName TabNameID); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF411E049B0
	};


	// Class CommonUILegacy.CommonUISubsystemLegacy
	// Inherited from UCommonUISubsystemBase -> UGameInstanceSubsystem -> USubsystem -> UObject
	// Size: 0x30 (0x70 - 0x40)
	class UCommonUISubsystemLegacy : public UCommonUISubsystemBase	
	{
	public:
		FMulticastInlineDelegate OnInputSuspensionChanged; // 0x40(0x10)
		UCommonInputManagerLegacy CommonInputManager; // 0x50(0x8)
		unsigned char UnknownData01_7[0x18]; // 0x58(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUILegacy.CommonUISubsystemLegacy");
			return ret;
		}

		void InputSuspensionChanged__DelegateSignature(bool bInputSuspended); // Flags: MulticastDelegate|Public|Delegate 0x7FF411E05270
		UCommonInputManagerLegacy GetInputManager(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF411E05190
	};


	// Class CommonUILegacy.CommonVisibilityWidgetLegacy
	// Inherited from UCommonBorder -> UBorder -> UContentWidget -> UPanelWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x310 - 0x300)
	class UCommonVisibilityWidgetLegacy : public UCommonBorder	
	{
	public:
		bool bShowForGamepad; // 0x300(0x1)
		bool bShowForMouseAndKeyboard; // 0x301(0x1)
		bool bShowForTouch; // 0x302(0x1)
		bool bShowForPC; // 0x303(0x1)
		bool bShowForMac; // 0x304(0x1)
		bool bShowForPS4; // 0x305(0x1)
		bool bShowForPS5; // 0x306(0x1)
		bool bShowForXBox; // 0x307(0x1)
		bool bShowForXSX; // 0x308(0x1)
		bool bShowForIOS; // 0x309(0x1)
		bool bShowForAndroid; // 0x30A(0x1)
		bool bShowForErebus; // 0x30B(0x1)
		ESlateVisibility VisibleType; // 0x30C(0x1)
		ESlateVisibility HiddenType; // 0x30D(0x1)
		unsigned char UnknownData01_7[0x2]; // 0x30E(0x2) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUILegacy.CommonVisibilityWidgetLegacy");
			return ret;
		}
	};


	// Class CommonUILegacy.CommonWidgetStackLegacy
	// Inherited from UCommonVisibilitySwitcher -> UOverlay -> UPanelWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x1C0 - 0x1B0)
	class UCommonWidgetStackLegacy : public UCommonVisibilitySwitcher	
	{
	public:
		FMulticastInlineDelegate OnActiveWidgetChangedLegacyEvent; // 0x1B0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUILegacy.CommonWidgetStackLegacy");
			return ret;
		}

		void PushWidget(UWidget InWidget); // Flags: Final|Native|Public|BlueprintCallable 0x7FF411E26070
		UWidget PopWidget(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF411E25F90
		void OnActiveWidgetChangedLegacy__DelegateSignature(UWidget InActiveWidget, int32_t InActiveWidgetIndex); // Flags: MulticastDelegate|Public|Delegate 0x7FF411E25EB0
		void DeactivateWidget(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF411E25DD0
		void ActivateWidget(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF411E25CF0
	};


	// Class CommonUILegacy.CommonWidgetSwitcherLegacy
	// Inherited from UCommonAnimatedSwitcher -> UWidgetSwitcher -> UPanelWidget -> UWidget -> UVisual -> UObject
	// Size: 0x28 (0x240 - 0x218)
	class UCommonWidgetSwitcherLegacy : public UCommonAnimatedSwitcher	
	{
	public:
		FMulticastInlineDelegate OnActiveWidgetDeactivated; // 0x218(0x10)
		FMulticastInlineDelegate OnActiveWidgetChanged; // 0x228(0x10)
		bool bWidgetActivationEnabled; // 0x238(0x1)
		bool bOutroPanelBelow; // 0x239(0x1)
		unsigned char UnknownData01_7[0x6]; // 0x23A(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUILegacy.CommonWidgetSwitcherLegacy");
			return ret;
		}

		void SetActiveWidgetIndex_Advanced(int32_t Index, bool AttemptActivationChange); // Flags: Final|Native|Public|BlueprintCallable 0x7FF413FEB0D8
		void SetActiveWidget_Advanced(UWidget Widget, bool AttemptActivationChange); // Flags: Final|Native|Public|BlueprintCallable 0x7FF413FEAFF8
		void HandleActiveWidgetDeactivated(UCommonActivatablePanelLegacy DeactivatedPanel); // Flags: Final|Native|Private 0x7FF413FEAF18
		void DeactivateWidget(); // Flags: Native|Public|BlueprintCallable 0x7FF413FEAE38
		void ActivateWidget(); // Flags: Native|Public|BlueprintCallable 0x7FF413FEAD58
	};


	// Class CommonUILegacy.CommonButtonGroupLegacy
	// Inherited from UCommonButtonGroupBase -> UCommonWidgetGroupBase -> UObject
	// Size: 0xA0 (0x200 - 0x160)
	class UCommonButtonGroupLegacy : public UCommonButtonGroupBase	
	{
	public:
		FMulticastInlineDelegate OnSelectedButtonChanged; // 0x160(0x10)
		unsigned char UnknownData04_6[0x18]; // 0x170(0x18) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnHoveredButtonChanged; // 0x188(0x10)
		unsigned char UnknownData05_6[0x18]; // 0x198(0x18) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnButtonClicked; // 0x1B0(0x10)
		unsigned char UnknownData06_6[0x18]; // 0x1C0(0x18) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnButtonDoubleClicked; // 0x1D8(0x10)
		unsigned char UnknownData07_7[0x18]; // 0x1E8(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUILegacy.CommonButtonGroupLegacy");
			return ret;
		}

		void OnSelectionStateChanged(UCommonButtonLegacy BaseButton, bool bIsSelected); // Flags: Native|Protected 0x7FF41462ACD8
		void OnHandleButtonDoubleClicked(UCommonButtonLegacy BaseButton); // Flags: Native|Protected 0x7FF41462ABF8
		void OnHandleButtonClicked(UCommonButtonLegacy BaseButton); // Flags: Native|Protected 0x7FF41462AB18
		void OnButtonUnhovered(UCommonButtonLegacy BaseButton); // Flags: Native|Protected 0x7FF41462AA38
		void OnButtonHovered(UCommonButtonLegacy BaseButton); // Flags: Native|Protected 0x7FF41462A958
		void HandleOnSelectedButtonChanged(UCommonButtonBase BaseButton, int32_t InSelectedButtonIndex); // Flags: Final|Native|Private 0x7FF41462A878
		void HandleOnHoveredButtonChanged(UCommonButtonBase BaseButton, int32_t InSelectedButtonIndex); // Flags: Final|Native|Private 0x7FF41462A798
		void HandleOnButtonDoubleClicked(UCommonButtonBase BaseButton, int32_t InSelectedButtonIndex); // Flags: Final|Native|Private 0x7FF41462A6B8
		void HandleOnButtonClicked(UCommonButtonBase BaseButton, int32_t InSelectedButtonIndex); // Flags: Final|Native|Private 0x7FF41462A5D8
		void HandleNativeOnSelectedButtonChanged(UCommonButtonBase BaseButton, int32_t InSelectedButtonIndex); // Flags: Final|Native|Private 0x7FF41462A4F8
		void HandleNativeOnHoveredButtonChanged(UCommonButtonBase BaseButton, int32_t InSelectedButtonIndex); // Flags: Final|Native|Private 0x7FF41462A418
		void HandleNativeOnButtonDoubleClicked(UCommonButtonBase BaseButton, int32_t InSelectedButtonIndex); // Flags: Final|Native|Private 0x7FF41462A338
		void HandleNativeOnButtonClicked(UCommonButtonBase BaseButton, int32_t InSelectedButtonIndex); // Flags: Final|Native|Private 0x7FF41462A258
		UCommonButtonLegacy GetSelectedButton(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41462A178
		UCommonButtonLegacy GetButtonAtIndex(int32_t Index); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41462A098
		UCommonButtonGroupLegacy CreateButtonGroup(UObject ContextObject, bool bInSelectionRequired); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414629FB8
	};


	// Class CommonUILegacy.CommonUIActionRouterLegacy
	// Inherited from UCommonUIActionRouterBase -> ULocalPlayerSubsystem -> USubsystem -> UObject
	// Size: 0x8 (0x178 - 0x170)
	class UCommonUIActionRouterLegacy : public UCommonUIActionRouterBase	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x170(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUILegacy.CommonUIActionRouterLegacy");
			return ret;
		}
	};

}
