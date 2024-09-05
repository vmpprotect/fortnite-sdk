#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: CommonUILegacy
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class CommonUILegacy.CommonActivatablePanelLegacy
	// Inherited from UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x138 (0x528 - 0x3F0)
	class UCommonActivatablePanelLegacy : public UCommonActivatableWidget	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x3F0(0x8) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnWidgetActivated; // 0x3F8(0x10)
		FMulticastInlineDelegate OnWidgetDeactivated; // 0x408(0x10)
		bool bConsumeAllActions; // 0x418(0x1)
		bool bExposeActionsExternally; // 0x419(0x1)
		bool bShouldBypassStack; // 0x41A(0x1)
		unsigned char UnknownData01_7[0x10D]; // 0x41B(0x10D) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUILegacy.CommonActivatablePanelLegacy");
			return ret;
		}

		void SetInputActionHandlerWithProgressPopupMenu(FDataTableRowHandle InputActionRow, FDelegateProperty CommitedEvent, FDelegateProperty ProgressEvent, UCommonPopupMenuLegacy* PopupMenu); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D8BCFD4(relative to base address)
		void SetInputActionHandlerWithProgress(FDataTableRowHandle InputActionRow, FDelegateProperty CommitedEvent, FDelegateProperty ProgressEvent); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D8BCD00(relative to base address)
		void SetInputActionHandlerWithPopupMenu(FDataTableRowHandle InputActionRow, FDelegateProperty CommitedEvent, UCommonPopupMenuLegacy* PopupMenu); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D8BCA40(relative to base address)
		void SetInputActionHandler(FDataTableRowHandle InputActionRow, FDelegateProperty CommitedEvent); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D8BC83C(relative to base address)
		void SetActionHandlerStateWithDisabledCommitEvent(UDataTable* DataTable, FName RowName, EInputActionState State, FDelegateProperty DisabledCommitEvent); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D8BC3F0(relative to base address)
		void SetActionHandlerStateFromHandleWithDisabledCommitEvent(FDataTableRowHandle InputActionRow, EInputActionState State, FDelegateProperty DisabledCommitEvent); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D8BC134(relative to base address)
		void SetActionHandlerStateFromHandle(FDataTableRowHandle InputActionRow, EInputActionState State); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D8BBF48(relative to base address)
		void SetActionHandlerState(UDataTable* DataTable, FName RowName, EInputActionState State); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D8BBE10(relative to base address)
		void RemoveInputActionHandler(FDataTableRowHandle InputActionRow); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D8BBCC0(relative to base address)
		void RemoveAllInputActionHandlers(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D8BBCAC(relative to base address)
		void PopPanel(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D8BBAE4(relative to base address)
		void OnTransitionedBySwitcher(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRemovedFromActivationStack(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInputModeChanged(bool bUsingGamepad); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnBeginOutro(); // Flags: Native|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF74D8BB7F8(relative to base address)
		void OnBeginIntro(); // Flags: Native|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF74D8BB7E0(relative to base address)
		void OnAddedToActivationStack(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool IsIntroed(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D8BB738(relative to base address)
		bool IsInActivationStack(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D8BB6F4(relative to base address)
		bool HasInputActionHandler(FDataTableRowHandle InputActionRow); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D8BB5C4(relative to base address)
		bool GetInputActions(TArray<FCommonInputActionHandlerData>& InputActionDataRows); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D8BA96C(relative to base address)
		void EndOutro(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF74D8BA800(relative to base address)
		void EndIntro(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF74D8BA7EC(relative to base address)
		void BeginOutro(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D8BA6F4(relative to base address)
		void BeginIntro(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D8BA6E0(relative to base address)
		void AddInputActionNoHandler(UDataTable* DataTable, FName RowName); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D8BA5F8(relative to base address)
		void AddInputActionHandlerWithProgressPopup(UDataTable* DataTable, FName RowName, FDelegateProperty CommitedEvent, FDelegateProperty ProgressEvent, UCommonPopupMenuLegacy* PopupMenu); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D8BA408(relative to base address)
		void AddInputActionHandlerWithProgress(UDataTable* DataTable, FName RowName, FDelegateProperty CommitedEvent, FDelegateProperty ProgressEvent); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D8BA2A4(relative to base address)
		void AddInputActionHandlerWithPopup(UDataTable* DataTable, FName RowName, FDelegateProperty CommitedEvent, UCommonPopupMenuLegacy* PopupMenu); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D8BA0F0(relative to base address)
		void AddInputActionHandler(UDataTable* DataTable, FName RowName, FDelegateProperty CommitedEvent); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D8B9FE8(relative to base address)
	};


	// Class CommonUILegacy.CommonButtonInternalLegacy
	// Inherited from UCommonButtonInternalBase -> UButton -> UContentWidget -> UPanelWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x5E0 - 0x5E0)
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

		void SetTriggeredInputActionLegacy(FDataTableRowHandle& InputActionRow, UCommonActivatablePanelLegacy* OldPanel); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D8BD3E4(relative to base address)
		void HandleOnSelectedChanged(UCommonButtonBase* Button, bool InSelected); // Flags: Final|Native|Private, Memory Exec: 0x7FF7488925E0(relative to base address)
		void HandleOnButtonUnhovered(UCommonButtonBase* Button); // Flags: Final|Native|Private, Memory Exec: 0x7FF74D8BB138(relative to base address)
		void HandleOnButtonHovered(UCommonButtonBase* Button); // Flags: Final|Native|Private, Memory Exec: 0x7FF748891CBC(relative to base address)
		void HandleOnButtonDoubleClicked(UCommonButtonBase* Button); // Flags: Final|Native|Private, Memory Exec: 0x7FF74D8BB0B8(relative to base address)
		void HandleOnButtonClicked(UCommonButtonBase* Button); // Flags: Final|Native|Private, Memory Exec: 0x7FF74D8BAF74(relative to base address)
	};


	// Class CommonUILegacy.CommonGlobalInputHandlerLegacy
	// Inherited from UObject
	// Size: 0x48 (0x70 - 0x28)
	class UCommonGlobalInputHandlerLegacy : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0x48]; // 0x28(0x48) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_3[0x80]; // 0x28(0x80) UNKNOWN PROPERTY
		TScriptInterface<Class> CurrentlyHeldActionInputHandler; // 0xA8(0x10)
		TArray<UCommonActivatablePanelLegacy*> ActivatablePanelStack; // 0xB8(0x10)
		UCommonGlobalInputHandlerLegacy* GlobalInputHandler; // 0xC8(0x8)
		unsigned char UnknownData01_6[0x18]; // 0xD0(0x18) UNKNOWN PROPERTY
		TArray<FOperation> Operations; // 0xE8(0x10)
		unsigned char UnknownData02_7[0x10]; // 0xF8(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUILegacy.CommonInputManagerLegacy");
			return ret;
		}

		void SuspendStartingOperationProcessing(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D8BD838(relative to base address)
		bool StopListeningForExistingHeldAction(FDataTableRowHandle& InputActionDataRow, FDelegateProperty& CompleteEvent, FDelegateProperty& ProgressEvent); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D8BD6C4(relative to base address)
		bool StartListeningForExistingHeldAction(FDataTableRowHandle& InputActionDataRow, FDelegateProperty& CompleteEvent, FDelegateProperty& ProgressEvent); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D8BD550(relative to base address)
		void SetGlobalInputHandlerPriorityFilter(int32_t InFilterPriority); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D8BC7C0(relative to base address)
		void ResumeStartingOperationProcessing(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D8BBDF4(relative to base address)
		void PushActivatablePanel(UCommonActivatablePanelLegacy* ActivatablePanel, bool bIntroPanel, bool bOutroPanelBelow); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D8BBB20(relative to base address)
		void PopActivatablePanel(UCommonActivatablePanelLegacy* ActivatablePanel); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D8BBA64(relative to base address)
		bool IsPanelOnStack(UCommonActivatablePanelLegacy* InPanel); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D8BB750(relative to base address)
		bool IsInputSuspended(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D8BB70C(relative to base address)
		UCommonActivatablePanelLegacy GetTopPanel(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D8BAAF0(relative to base address)
		int32_t GetGlobalInputHandlerPriorityFilter(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D8BA94C(relative to base address)
		bool GetAvailableInputActions(TArray<FCommonInputActionHandlerData>& AvailableInputActions); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D8BA814(relative to base address)
	};


	// Class CommonUILegacy.CommonInputReflectorLegacy
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x30 (0x308 - 0x2D8)
	class UCommonInputReflectorLegacy : public UCommonUserWidget	
	{
	public:
		UClass* ButtonType; // 0x2D8(0x8)
		TArray<UCommonButtonLegacy*> ActiveButtons; // 0x2E0(0x10)
		TArray<UCommonButtonLegacy*> InactiveButtons; // 0x2F0(0x10)
		unsigned char UnknownData00_7[0x8]; // 0x300(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUILegacy.CommonInputReflectorLegacy");
			return ret;
		}

		void OnButtonAdded(UCommonButtonLegacy* AddedButton, FCommonInputActionHandlerData& Data); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class CommonUILegacy.CommonPopupButtonLegacy
	// Inherited from UCommonButtonLegacy -> UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x13F0 - 0x13E0)
	class UCommonPopupButtonLegacy : public UCommonButtonLegacy	
	{
	public:
		UMenuAnchor* PopupMenuAnchor; // 0x13E0(0x8)
		UCommonPopupMenuLegacy* PopupMenu; // 0x13E8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUILegacy.CommonPopupButtonLegacy");
			return ret;
		}

		UUserWidget GetMenuAnchorWidget(); // Flags: Final|Native|Private, Memory Exec: 0x7FF74D8BAA18(relative to base address)
	};


	// Class CommonUILegacy.CommonPopupMenuLegacy
	// Inherited from UCommonActivatablePanelLegacy -> UCommonActivatableWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x18 (0x540 - 0x528)
	class UCommonPopupMenuLegacy : public UCommonActivatablePanelLegacy	
	{
	public:
		bool bUseInputStack; // 0x528(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x529(0x3) UNKNOWN PROPERTY
		TWeakObjectPtr<UMenuAnchor*> OwningMenuAnchor; // 0x52C(0x8)
		TWeakObjectPtr<UObject*> ContextProvidingObject; // 0x534(0x8)
		unsigned char UnknownData01_7[0x4]; // 0x53C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUILegacy.CommonPopupMenuLegacy");
			return ret;
		}

		void SetOwningMenuAnchor(UMenuAnchor* MenuAnchor); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D8BD364(relative to base address)
		void SetContextProvider(UObject* ContextProvidingObject); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D8BC740(relative to base address)
		void RequestClose(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF74D8BBDE0(relative to base address)
		void OnIsOpenChanged(bool IsOpen); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74D8BB918(relative to base address)
		void HandlePreDifferentContextProviderSet(); // Flags: Native|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF74D8BB41C(relative to base address)
		void HandlePostDifferentContextProviderSet(); // Flags: Native|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF74D8BB404(relative to base address)
	};


	// Class CommonUILegacy.CommonTabListWidgetLegacy
	// Inherited from UCommonTabListWidgetBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x470 - 0x450)
	class UCommonTabListWidgetLegacy : public UCommonTabListWidgetBase	
	{
	public:
		FMulticastInlineDelegate OnTabButtonCreated; // 0x450(0x10)
		FMulticastInlineDelegate OnTabButtonRemoved; // 0x460(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUILegacy.CommonTabListWidgetLegacy");
			return ret;
		}

		void OnTabButtonRemoved__DelegateSignature(FName TabID, UCommonButtonLegacy* TabButton); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTabButtonCreated__DelegateSignature(FName TabID, UCommonButtonLegacy* TabButton); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleTabRemoved(FName TabNameID, UCommonButtonLegacy* TabButton); // Flags: Native|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF74D8BB4FC(relative to base address)
		void HandleTabCreated(FName TabNameID, UCommonButtonLegacy* TabButton); // Flags: Native|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF74D8BB434(relative to base address)
		void HandleOnTabButtonRemoved(FName TabID, UCommonButtonBase* TabButton); // Flags: Final|Native|Private, Memory Exec: 0x7FF74D8BB340(relative to base address)
		void HandleOnTabButtonCreated(FName TabID, UCommonButtonBase* TabButton); // Flags: Final|Native|Private, Memory Exec: 0x7FF748892704(relative to base address)
		UCommonButtonLegacy GetTabButtonByID(FName TabNameID); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF74D8BAA54(relative to base address)
	};


	// Class CommonUILegacy.CommonUISubsystemLegacy
	// Inherited from UCommonUISubsystemBase -> UGameInstanceSubsystem -> USubsystem -> UObject
	// Size: 0x30 (0x70 - 0x40)
	class UCommonUISubsystemLegacy : public UCommonUISubsystemBase	
	{
	public:
		FMulticastInlineDelegate OnInputSuspensionChanged; // 0x40(0x10)
		UCommonInputManagerLegacy* CommonInputManager; // 0x50(0x8)
		unsigned char UnknownData00_7[0x18]; // 0x58(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUILegacy.CommonUISubsystemLegacy");
			return ret;
		}

		void InputSuspensionChanged__DelegateSignature(bool bInputSuspended); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UCommonInputManagerLegacy GetInputManager(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D034578(relative to base address)
	};


	// Class CommonUILegacy.CommonVisibilityWidgetLegacy
	// Inherited from UCommonBorder -> UBorder -> UContentWidget -> UPanelWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x300 - 0x2F0)
	class UCommonVisibilityWidgetLegacy : public UCommonBorder	
	{
	public:
		bool bShowForGamepad; // 0x2F0(0x1)
		bool bShowForMouseAndKeyboard; // 0x2F1(0x1)
		bool bShowForTouch; // 0x2F2(0x1)
		bool bShowForPC; // 0x2F3(0x1)
		bool bShowForMac; // 0x2F4(0x1)
		bool bShowForPS4; // 0x2F5(0x1)
		bool bShowForPS5; // 0x2F6(0x1)
		bool bShowForXBox; // 0x2F7(0x1)
		bool bShowForXSX; // 0x2F8(0x1)
		bool bShowForIOS; // 0x2F9(0x1)
		bool bShowForAndroid; // 0x2FA(0x1)
		bool bShowForErebus; // 0x2FB(0x1)
		ESlateVisibility VisibleType; // 0x2FC(0x1)
		ESlateVisibility HiddenType; // 0x2FD(0x1)
		unsigned char UnknownData00_7[0x2]; // 0x2FE(0x2) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUILegacy.CommonVisibilityWidgetLegacy");
			return ret;
		}
	};


	// Class CommonUILegacy.CommonWidgetStackLegacy
	// Inherited from UCommonVisibilitySwitcher -> UOverlay -> UPanelWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x1B8 - 0x1A8)
	class UCommonWidgetStackLegacy : public UCommonVisibilitySwitcher	
	{
	public:
		FMulticastInlineDelegate OnActiveWidgetChangedLegacyEvent; // 0x1A8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUILegacy.CommonWidgetStackLegacy");
			return ret;
		}

		void PushWidget(UWidget* InWidget); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D8BBC2C(relative to base address)
		UWidget PopWidget(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D8BBAFC(relative to base address)
		void OnActiveWidgetChangedLegacy__DelegateSignature(UWidget* InActiveWidget, int32_t InActiveWidgetIndex); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void DeactivateWidget(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF74D8BA7D8(relative to base address)
		void ActivateWidget(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF74D8B9FBC(relative to base address)
	};


	// Class CommonUILegacy.CommonWidgetSwitcherLegacy
	// Inherited from UCommonAnimatedSwitcher -> UWidgetSwitcher -> UPanelWidget -> UWidget -> UVisual -> UObject
	// Size: 0x28 (0x238 - 0x210)
	class UCommonWidgetSwitcherLegacy : public UCommonAnimatedSwitcher	
	{
	public:
		FMulticastInlineDelegate OnActiveWidgetDeactivated; // 0x210(0x10)
		FMulticastInlineDelegate OnActiveWidgetChanged; // 0x220(0x10)
		bool bWidgetActivationEnabled; // 0x230(0x1)
		bool bOutroPanelBelow; // 0x231(0x1)
		unsigned char UnknownData00_7[0x6]; // 0x232(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUILegacy.CommonWidgetSwitcherLegacy");
			return ret;
		}

		void SetActiveWidgetIndex_Advanced(int32_t Index, bool AttemptActivationChange); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D8BC584(relative to base address)
		void SetActiveWidget_Advanced(UWidget* Widget, bool AttemptActivationChange); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D8BC648(relative to base address)
		void HandleActiveWidgetDeactivated(UCommonActivatablePanelLegacy* DeactivatedPanel); // Flags: Final|Native|Private, Memory Exec: 0x7FF74D8BAB14(relative to base address)
		void DeactivateWidget(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF7487DB18C(relative to base address)
		void ActivateWidget(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D8B9FD0(relative to base address)
	};


	// Class CommonUILegacy.CommonButtonGroupLegacy
	// Inherited from UCommonButtonGroupBase -> UCommonWidgetGroupBase -> UObject
	// Size: 0xA0 (0x200 - 0x160)
	class UCommonButtonGroupLegacy : public UCommonButtonGroupBase	
	{
	public:
		FMulticastInlineDelegate OnSelectedButtonChanged; // 0x160(0x10)
		unsigned char UnknownData00_6[0x18]; // 0x170(0x18) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnHoveredButtonChanged; // 0x188(0x10)
		unsigned char UnknownData01_6[0x18]; // 0x198(0x18) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnButtonClicked; // 0x1B0(0x10)
		unsigned char UnknownData02_6[0x18]; // 0x1C0(0x18) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnButtonDoubleClicked; // 0x1D8(0x10)
		unsigned char UnknownData03_7[0x18]; // 0x1E8(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUILegacy.CommonButtonGroupLegacy");
			return ret;
		}

		void OnSelectionStateChanged(UCommonButtonLegacy* BaseButton, bool bIsSelected); // Flags: Native|Protected, Memory Exec: 0x7FF74D8BB998(relative to base address)
		void OnHandleButtonDoubleClicked(UCommonButtonLegacy* BaseButton); // Flags: Native|Protected, Memory Exec: 0x7FF74C2B9D94(relative to base address)
		void OnHandleButtonClicked(UCommonButtonLegacy* BaseButton); // Flags: Native|Protected, Memory Exec: 0x7FF74D8BB894(relative to base address)
		void OnButtonUnhovered(UCommonButtonLegacy* BaseButton); // Flags: Native|Protected, Memory Exec: 0x7FF74C2D2C48(relative to base address)
		void OnButtonHovered(UCommonButtonLegacy* BaseButton); // Flags: Native|Protected, Memory Exec: 0x7FF74D8BB810(relative to base address)
		void HandleOnSelectedButtonChanged(UCommonButtonBase* BaseButton, int32_t InSelectedButtonIndex); // Flags: Final|Native|Private, Memory Exec: 0x7FF74D8BB27C(relative to base address)
		void HandleOnHoveredButtonChanged(UCommonButtonBase* BaseButton, int32_t InSelectedButtonIndex); // Flags: Final|Native|Private, Memory Exec: 0x7FF74D8BB1B8(relative to base address)
		void HandleOnButtonDoubleClicked(UCommonButtonBase* BaseButton, int32_t InSelectedButtonIndex); // Flags: Final|Native|Private, Memory Exec: 0x7FF74D8BAFF4(relative to base address)
		void HandleOnButtonClicked(UCommonButtonBase* BaseButton, int32_t InSelectedButtonIndex); // Flags: Final|Native|Private, Memory Exec: 0x7FF74D8BAEB0(relative to base address)
		void HandleNativeOnSelectedButtonChanged(UCommonButtonBase* BaseButton, int32_t InSelectedButtonIndex); // Flags: Final|Native|Private, Memory Exec: 0x7FF74D8BADEC(relative to base address)
		void HandleNativeOnHoveredButtonChanged(UCommonButtonBase* BaseButton, int32_t InSelectedButtonIndex); // Flags: Final|Native|Private, Memory Exec: 0x7FF74D8BAD28(relative to base address)
		void HandleNativeOnButtonDoubleClicked(UCommonButtonBase* BaseButton, int32_t InSelectedButtonIndex); // Flags: Final|Native|Private, Memory Exec: 0x7FF74D8BAC64(relative to base address)
		void HandleNativeOnButtonClicked(UCommonButtonBase* BaseButton, int32_t InSelectedButtonIndex); // Flags: Final|Native|Private, Memory Exec: 0x7FF74D8BABA0(relative to base address)
		UCommonButtonLegacy GetSelectedButton(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D8BAA30(relative to base address)
		UCommonButtonLegacy GetButtonAtIndex(int32_t Index); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D8BA8C0(relative to base address)
		UCommonButtonGroupLegacy CreateButtonGroup(UObject* ContextObject, bool bInSelectionRequired); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74D8BA708(relative to base address)
	};


	// Class CommonUILegacy.CommonUIActionRouterLegacy
	// Inherited from UCommonUIActionRouterBase -> ULocalPlayerSubsystem -> USubsystem -> UObject
	// Size: 0x8 (0x178 - 0x170)
	class UCommonUIActionRouterLegacy : public UCommonUIActionRouterBase	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x170(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUILegacy.CommonUIActionRouterLegacy");
			return ret;
		}
	};

}
