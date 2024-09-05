#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: CommonUI
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class CommonUI.CommonBoundActionButtonInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UCommonBoundActionButtonInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUI.CommonBoundActionButtonInterface");
			return ret;
		}
	};


	// Class CommonUI.AnalogSlider
	// Inherited from USlider -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x670 - 0x650)
	class UAnalogSlider : public USlider	
	{
	public:
		FMulticastInlineDelegate OnAnalogCapture; // 0x650(0x10)
		unsigned char UnknownData01_7[0x10]; // 0x660(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUI.AnalogSlider");
			return ret;
		}
	};


	// Class CommonUI.CommonActionHandlerInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UCommonActionHandlerInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUI.CommonActionHandlerInterface");
			return ret;
		}
	};


	// Class CommonUI.CommonActionWidget
	// Inherited from UWidget -> UVisual -> UObject
	// Size: 0x2C0 (0x420 - 0x160)
	class UCommonActionWidget : public UWidget	
	{
	public:
		FMulticastInlineDelegate OnInputMethodChanged; // 0x160(0x10)
		FMulticastInlineDelegate OnInputIconUpdated; // 0x170(0x10)
		FSlateBrush ProgressMaterialBrush; // 0x180(0xB0)
		FName ProgressMaterialParam; // 0x230(0x4)
		unsigned char UnknownData04_6[0xC]; // 0x234(0xC) UNKNOWN PROPERTY
		FSlateBrush IconRimBrush; // 0x240(0xB0)
		TArray InputActions; // 0x2F0(0x10)
		UInputAction EnhancedInputAction; // 0x300(0x8)
		unsigned char UnknownData05_6[0x8]; // 0x308(0x8) UNKNOWN PROPERTY
		UMaterialInstanceDynamic ProgressDynamicMaterial; // 0x310(0x8)
		unsigned char UnknownData06_6[0x48]; // 0x318(0x48) UNKNOWN PROPERTY
		FSlateBrush Icon; // 0x360(0xB0)
		unsigned char UnknownData07_7[0x10]; // 0x410(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUI.CommonActionWidget");
			return ret;
		}

		void SetInputActions(TArray NewInputActions); // Flags: Final|Native|Public|BlueprintCallable 0x7FF411500B48
		void SetInputAction(FDataTableRowHandle InputActionRow); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4115009A8
		void SetIconRimBrush(FSlateBrush InIconRimBrush); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4115008C8
		void SetEnhancedInputAction(UInputAction InInputAction); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4115007E8
		void OnInputMethodChanged__DelegateSignature(bool bUsingGamepad); // Flags: MulticastDelegate|Public|Delegate 0x7FF411500708
		void OnInputIconUpdated__DelegateSignature(); // Flags: MulticastDelegate|Public|Delegate 0x7FF411500628
		bool IsHeldAction(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF411500548
		UMaterialInstanceDynamic GetIconDynamicMaterial(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF411500468
		FSlateBrush GetIcon(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF411500388
		FText GetDisplayText(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4115002A8
	};


	// Class CommonUI.CommonUserWidget
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x28 (0x2E0 - 0x2B8)
	class UCommonUserWidget : public UUserWidget	
	{
	public:
		bool bDisplayInActionBar; // 0x2B8(0x1)
		bool bConsumePointerInput; // 0x2B9(0x1)
		unsigned char UnknownData01_7[0x26]; // 0x2BA(0x26) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUI.CommonUserWidget");
			return ret;
		}

		void UnregisterScrollRecipientExternal(UWidget AnalogScrollRecipient); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4115A9CD0
		void SetConsumePointerInput(bool bInConsumePointerInput); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4115A9BF0
		void RegisterScrollRecipientExternal(UWidget AnalogScrollRecipient); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4115A9B10
	};


	// Class CommonUI.CommonActivatableWidget
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x118 (0x3F8 - 0x2E0)
	class UCommonActivatableWidget : public UCommonUserWidget	
	{
	public:
		bool bIsBackHandler; // 0x2E0(0x1)
		bool bIsBackActionDisplayedInActionBar; // 0x2E1(0x1)
		bool bAutoActivate; // 0x2E2(0x1)
		bool bSupportsActivationFocus; // 0x2E3(0x1)
		bool bIsModal; // 0x2E4(0x1)
		bool bAutoRestoreFocus; // 0x2E5(0x1)
		bool bOverrideActionDomain; // 0x2E6(0x1)
		unsigned char UnknownData05_6[0x1]; // 0x2E7(0x1) UNKNOWN PROPERTY
		UInputMappingContext InputMapping; // 0x2E8(0x8)
		int32_t InputMappingPriority; // 0x2F0(0x4)
		unsigned char UnknownData06_6[0x4]; // 0x2F4(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr ActionDomainOverride; // 0x2F8(0x20)
		FMulticastInlineDelegate BP_OnWidgetActivated; // 0x318(0x10)
		FMulticastInlineDelegate BP_OnWidgetDeactivated; // 0x328(0x10)
		bool bIsActive; // 0x338(0x1)
		unsigned char UnknownData07_6[0x7]; // 0x339(0x7) UNKNOWN PROPERTY
		TArray VisibilityBoundWidgets; // 0x340(0x10)
		unsigned char UnknownData08_6[0xA0]; // 0x350(0xA0) UNKNOWN PROPERTY
		bool bSetVisibilityOnActivated; // 0x3F0(0x1)
		ESlateVisibility ActivatedVisibility; // 0x3F1(0x1)
		bool bSetVisibilityOnDeactivated; // 0x3F2(0x1)
		ESlateVisibility DeactivatedVisibility; // 0x3F3(0x1)
		unsigned char UnknownData09_7[0x4]; // 0x3F4(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUI.CommonActivatableWidget");
			return ret;
		}

		void SetBindVisibilities(ESlateVisibility OnActivatedVisibility, ESlateVisibility OnDeactivatedVisibility, bool bInAllActive); // Flags: Final|Native|Public|BlueprintCallable 0x7FF413FB2F18
		void RequestRefreshFocus(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF413FB2E38
		bool IsActivated(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF413FB2D58
		UWidget GetDesiredFocusTarget(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF413FB2C78
		void DeactivateWidget(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF413FB2B98
		void ClearFocusRestorationTarget(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF413FB2AB8
		bool BP_OnHandleBackAction(); // Flags: Event|Protected|BlueprintEvent 0x7FF413FB29D8
		void BP_OnDeactivated(); // Flags: Event|Protected|BlueprintEvent 0x7FF413FB28F8
		void BP_OnActivated(); // Flags: Event|Protected|BlueprintEvent 0x7FF413FB2818
		FUIInputConfig BP_GetDesiredInputConfig(); // Flags: Event|Protected|BlueprintEvent|Const 0x7FF413FB2678
		UWidget BP_GetDesiredFocusTarget(); // Flags: Event|Protected|BlueprintEvent|Const 0x7FF413FB2598
		void BindVisibilityToActivation(UCommonActivatableWidget ActivatableWidget); // Flags: Final|Native|Public|BlueprintCallable 0x7FF413FB24B8
		void ActivateWidget(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF413FB23D8
	};


	// Class CommonUI.CommonAnimatedSwitcher
	// Inherited from UWidgetSwitcher -> UPanelWidget -> UWidget -> UVisual -> UObject
	// Size: 0x88 (0x218 - 0x190)
	class UCommonAnimatedSwitcher : public UWidgetSwitcher	
	{
	public:
		unsigned char UnknownData03_3[0x30]; // 0x190(0x30) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnActiveWidgetIndexChangedBP; // 0x1C0(0x10)
		ECommonSwitcherTransition TransitionType; // 0x1D0(0x1)
		ETransitionCurve TransitionCurveType; // 0x1D1(0x1)
		unsigned char UnknownData04_6[0x2]; // 0x1D2(0x2) UNKNOWN PROPERTY
		float TransitionDuration; // 0x1D4(0x4)
		ECommonSwitcherTransitionFallbackStrategy TransitionFallbackStrategy; // 0x1D8(0x1)
		unsigned char UnknownData05_7[0x3F]; // 0x1D9(0x3F) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUI.CommonAnimatedSwitcher");
			return ret;
		}

		void SetDisableTransitionAnimation(bool bDisableAnimation); // Flags: Final|Native|Public|BlueprintCallable 0x7FF413FEAC78
		bool IsTransitionPlaying(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF413FEAB98
		bool IsCurrentlySwitching(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF413FEAAB8
		bool HasWidgets(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF413FEA9D8
		void ActivatePreviousWidget(bool bCanWrap); // Flags: Final|Native|Public|BlueprintCallable 0x7FF413FEA8F8
		void ActivateNextWidget(bool bCanWrap); // Flags: Final|Native|Public|BlueprintCallable 0x7FF413FEA818
	};


	// Class CommonUI.CommonActivatableWidgetSwitcher
	// Inherited from UCommonAnimatedSwitcher -> UWidgetSwitcher -> UPanelWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x228 - 0x218)
	class UCommonActivatableWidgetSwitcher : public UCommonAnimatedSwitcher	
	{
	public:
		bool bClearFocusRestorationTargetOfDeactivatedWidgets; // 0x218(0x1)
		unsigned char UnknownData01_7[0xF]; // 0x219(0xF) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUI.CommonActivatableWidgetSwitcher");
			return ret;
		}
	};


	// Class CommonUI.CommonBorderStyle
	// Inherited from UObject
	// Size: 0xB8 (0xE0 - 0x28)
	class UCommonBorderStyle : public UObject	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		FSlateBrush Background; // 0x30(0xB0)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUI.CommonBorderStyle");
			return ret;
		}

		void GetBackgroundBrush(FSlateBrush& Brush); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF4145B4E38
	};


	// Class CommonUI.CommonBorder
	// Inherited from UBorder -> UContentWidget -> UPanelWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x300 - 0x2E0)
	class UCommonBorder : public UBorder	
	{
	public:
		UClass Style; // 0x2E0(0x8)
		bool bReducePaddingBySafezone; // 0x2E8(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x2E9(0x3) UNKNOWN PROPERTY
		FMargin MinimumPadding; // 0x2EC(0x10)
		unsigned char UnknownData03_7[0x4]; // 0x2FC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUI.CommonBorder");
			return ret;
		}

		void SetStyle(UClass InStyle); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4145B4F18
	};


	// Class CommonUI.CommonButtonStyle
	// Inherited from UObject
	// Size: 0x688 (0x6B0 - 0x28)
	class UCommonButtonStyle : public UObject	
	{
	public:
		bool bSingleMaterial; // 0x28(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x29(0x7) UNKNOWN PROPERTY
		FSlateBrush SingleMaterialBrush; // 0x30(0xB0)
		FSlateBrush NormalBase; // 0xE0(0xB0)
		FSlateBrush NormalHovered; // 0x190(0xB0)
		FSlateBrush NormalPressed; // 0x240(0xB0)
		FSlateBrush SelectedBase; // 0x2F0(0xB0)
		FSlateBrush SelectedHovered; // 0x3A0(0xB0)
		FSlateBrush SelectedPressed; // 0x450(0xB0)
		FSlateBrush Disabled; // 0x500(0xB0)
		FMargin ButtonPadding; // 0x5B0(0x10)
		FMargin CustomPadding; // 0x5C0(0x10)
		int32_t MinWidth; // 0x5D0(0x4)
		int32_t MinHeight; // 0x5D4(0x4)
		UClass NormalTextStyle; // 0x5D8(0x8)
		UClass NormalHoveredTextStyle; // 0x5E0(0x8)
		UClass SelectedTextStyle; // 0x5E8(0x8)
		UClass SelectedHoveredTextStyle; // 0x5F0(0x8)
		UClass DisabledTextStyle; // 0x5F8(0x8)
		FSlateSound PressedSlateSound; // 0x600(0x18)
		FCommonButtonStyleOptionalSlateSound SelectedPressedSlateSound; // 0x618(0x20)
		FCommonButtonStyleOptionalSlateSound LockedPressedSlateSound; // 0x638(0x20)
		FSlateSound HoveredSlateSound; // 0x658(0x18)
		FCommonButtonStyleOptionalSlateSound SelectedHoveredSlateSound; // 0x670(0x20)
		FCommonButtonStyleOptionalSlateSound LockedHoveredSlateSound; // 0x690(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUI.CommonButtonStyle");
			return ret;
		}

		UCommonTextStyle GetSelectedTextStyle(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145B5C38
		void GetSelectedPressedBrush(FSlateBrush& Brush); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF4145B5B58
		UCommonTextStyle GetSelectedHoveredTextStyle(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145B5A78
		void GetSelectedHoveredBrush(FSlateBrush& Brush); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF4145B5998
		void GetSelectedBaseBrush(FSlateBrush& Brush); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF4145B58B8
		UCommonTextStyle GetNormalTextStyle(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145B57D8
		void GetNormalPressedBrush(FSlateBrush& Brush); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF4145B56F8
		UCommonTextStyle GetNormalHoveredTextStyle(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145B5618
		void GetNormalHoveredBrush(FSlateBrush& Brush); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF4145B5538
		void GetNormalBaseBrush(FSlateBrush& Brush); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF4145B5458
		void GetMaterialBrush(FSlateBrush& Brush); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF4145B5378
		UCommonTextStyle GetDisabledTextStyle(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145B5298
		void GetDisabledBrush(FSlateBrush& Brush); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF4145B51B8
		void GetCustomPadding(FMargin& OutCustomPadding); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF4145B50D8
		void GetButtonPadding(FMargin& OutButtonPadding); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF4145B4FF8
	};


	// Class CommonUI.CommonButtonInternalBase
	// Inherited from UButton -> UContentWidget -> UPanelWidget -> UWidget -> UVisual -> UObject
	// Size: 0x78 (0x5F0 - 0x578)
	class UCommonButtonInternalBase : public UButton	
	{
	public:
		unsigned char UnknownData03_3[0x10]; // 0x578(0x10) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnDoubleClicked; // 0x588(0x10)
		unsigned char UnknownData04_6[0x20]; // 0x598(0x20) UNKNOWN PROPERTY
		int32_t MinWidth; // 0x5B8(0x4)
		int32_t MinHeight; // 0x5BC(0x4)
		bool bButtonEnabled; // 0x5C0(0x1)
		bool bInteractionEnabled; // 0x5C1(0x1)
		unsigned char UnknownData05_7[0x2E]; // 0x5C2(0x2E) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUI.CommonButtonInternalBase");
			return ret;
		}
	};


	// Class CommonUI.CommonButtonBase
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10B0 (0x1390 - 0x2E0)
	class UCommonButtonBase : public UCommonUserWidget	
	{
	public:
		FWidgetEventField ClickEvent; // 0x2E0(0x1)
		unsigned char UnknownData11_6[0x3]; // 0x2E1(0x3) UNKNOWN PROPERTY
		int32_t MinWidth; // 0x2E4(0x4)
		int32_t MinHeight; // 0x2E8(0x4)
		unsigned char UnknownData12_6[0x4]; // 0x2EC(0x4) UNKNOWN PROPERTY
		UClass Style; // 0x2F0(0x8)
		bool bHideInputAction; // 0x2F8(0x1)
		unsigned char UnknownData13_6[0x7]; // 0x2F9(0x7) UNKNOWN PROPERTY
		FSlateSound PressedSlateSoundOverride; // 0x300(0x18)
		FSlateSound HoveredSlateSoundOverride; // 0x318(0x18)
		FSlateSound SelectedPressedSlateSoundOverride; // 0x330(0x18)
		FSlateSound SelectedHoveredSlateSoundOverride; // 0x348(0x18)
		FSlateSound LockedPressedSlateSoundOverride; // 0x360(0x18)
		FSlateSound LockedHoveredSlateSoundOverride; // 0x378(0x18)
		bool bApplyAlphaOnDisable : 1; // 0x390:0(0x1)
		bool bLocked : 1; // 0x390:1(0x1)
		bool bSelectable : 1; // 0x390:2(0x1)
		bool bShouldSelectUponReceivingFocus : 1; // 0x390:3(0x1)
		bool bInteractableWhenSelected : 1; // 0x390:4(0x1)
		bool bToggleable : 1; // 0x390:5(0x1)
		bool bTriggerClickedAfterSelection : 1; // 0x390:6(0x1)
		bool bDisplayInputActionWhenNotInteractable : 1; // 0x390:7(0x1)
		bool bHideInputActionWithKeyboard : 1; // 0x391:0(0x1)
		bool bShouldUseFallbackDefaultInputAction : 1; // 0x391:1(0x1)
		bool bRequiresHold : 1; // 0x391:2(0x1)
		unsigned char UnknownData14_5[0x6]; // 0x392(0x6) UNKNOWN PROPERTY
		UClass HoldData; // 0x398(0x8)
		bool bSimulateHoverOnTouchInput; // 0x3A0(0x1)
		unsigned char UnknownData15_6[0x1]; // 0x3A1(0x1) UNKNOWN PROPERTY
		TEnumAsByte ClickMethod; // 0x3A2(0x1)
		TEnumAsByte TouchMethod; // 0x3A3(0x1)
		TEnumAsByte PressMethod; // 0x3A4(0x1)
		unsigned char UnknownData16_6[0x3]; // 0x3A5(0x3) UNKNOWN PROPERTY
		int32_t InputPriority; // 0x3A8(0x4)
		unsigned char UnknownData17_6[0x4]; // 0x3AC(0x4) UNKNOWN PROPERTY
		FDataTableRowHandle TriggeringInputAction; // 0x3B0(0x10)
		UInputAction TriggeringEnhancedInputAction; // 0x3C0(0x8)
		unsigned char UnknownData18_6[0x10]; // 0x3C8(0x10) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnSelectedChangedBase; // 0x3D8(0x10)
		FMulticastInlineDelegate OnButtonBaseClicked; // 0x3E8(0x10)
		FMulticastInlineDelegate OnButtonBaseDoubleClicked; // 0x3F8(0x10)
		FMulticastInlineDelegate OnButtonBaseHovered; // 0x408(0x10)
		FMulticastInlineDelegate OnButtonBaseUnhovered; // 0x418(0x10)
		FMulticastInlineDelegate OnButtonBaseLockClicked; // 0x428(0x10)
		FMulticastInlineDelegate OnButtonBaseLockDoubleClicked; // 0x438(0x10)
		unsigned char UnknownData19_6[0x38]; // 0x448(0x38) UNKNOWN PROPERTY
		bool bIsPersistentBinding; // 0x480(0x1)
		ECommonInputMode InputModeOverride; // 0x481(0x1)
		unsigned char UnknownData20_6[0x26]; // 0x482(0x26) UNKNOWN PROPERTY
		UMaterialInstanceDynamic SingleMaterialStyleMID; // 0x4A8(0x8)
		FButtonStyle NormalStyle; // 0x4B0(0x370)
		FButtonStyle SelectedStyle; // 0x820(0x370)
		FButtonStyle DisabledStyle; // 0xB90(0x370)
		FButtonStyle LockedStyle; // 0xF00(0x370)
		bool bStopDoubleClickPropagation : 1; // 0x1270:0(0x1)
		unsigned char UnknownData21_5[0x117]; // 0x1271(0x117) UNKNOWN PROPERTY
		UCommonActionWidget InputActionWidget; // 0x1388(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUI.CommonButtonBase");
			return ret;
		}

		void UpdateHoldData(ECommonInputType CurrentInputType); // Flags: Native|Protected 0x7FF413FD03E8
		void StopDoubleClickPropagation(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF413FD0308
		void SetTriggeringInputAction(FDataTableRowHandle& InputActionRow); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF413FD0228
		void SetTriggeringEnhancedInputAction(UInputAction InInputAction); // Flags: Final|Native|Public|BlueprintCallable 0x7FF413FD0148
		void SetTriggeredInputAction(FDataTableRowHandle& InputActionRow); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF413FD0068
		void SetTouchMethod(TEnumAsByte InTouchMethod); // Flags: Final|Native|Public|BlueprintCallable 0x7FF413FCFF88
		void SetStyle(UClass InStyle); // Flags: Final|Native|Public|BlueprintCallable 0x7FF413FCFEA8
		void SetShouldUseFallbackDefaultInputAction(bool bInShouldUseFallbackDefaultInputAction); // Flags: Final|Native|Public|BlueprintCallable 0x7FF413FCFDC8
		void SetShouldSelectUponReceivingFocus(bool bInShouldSelectUponReceivingFocus); // Flags: Final|Native|Public|BlueprintCallable 0x7FF413FCFCE8
		void SetSelectedPressedSoundOverride(USoundBase Sound); // Flags: Final|Native|Public|BlueprintCallable 0x7FF413FCFC08
		void SetSelectedInternal(bool bInSelected, bool bAllowSound, bool bBroadcast); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF413FCFB28
		void SetSelectedHoveredSoundOverride(USoundBase Sound); // Flags: Final|Native|Public|BlueprintCallable 0x7FF413FCFA48
		void SetRequiresHold(bool bInRequiresHold); // Flags: Final|Native|Public|BlueprintCallable 0x7FF413FCF968
		void SetPressMethod(TEnumAsByte InPressMethod); // Flags: Final|Native|Public|BlueprintCallable 0x7FF413FCF888
		void SetPressedSoundOverride(USoundBase Sound); // Flags: Final|Native|Public|BlueprintCallable 0x7FF413FCF7A8
		void SetMinDimensions(int32_t InMinWidth, int32_t InMinHeight); // Flags: Final|Native|Public|BlueprintCallable 0x7FF413FCF6C8
		void SetLockedPressedSoundOverride(USoundBase Sound); // Flags: Final|Native|Public|BlueprintCallable 0x7FF413FCF5E8
		void SetLockedHoveredSoundOverride(USoundBase Sound); // Flags: Final|Native|Public|BlueprintCallable 0x7FF413FCF508
		void SetIsToggleable(bool bInIsToggleable); // Flags: Final|Native|Public|BlueprintCallable 0x7FF413FCF428
		void SetIsSelected(bool InSelected, bool bGiveClickFeedback); // Flags: Final|Native|Public|BlueprintCallable 0x7FF413FCF348
		void SetIsSelectable(bool bInIsSelectable); // Flags: Final|Native|Public|BlueprintCallable 0x7FF413FCF268
		void SetIsLocked(bool bInIsLocked); // Flags: Final|Native|Public|BlueprintCallable 0x7FF413FCF188
		void SetIsInteractionEnabled(bool bInIsInteractionEnabled); // Flags: Final|Native|Public|BlueprintCallable 0x7FF413FCF0A8
		void SetIsInteractableWhenSelected(bool bInInteractableWhenSelected); // Flags: Final|Native|Public|BlueprintCallable 0x7FF413FCEFC8
		void SetIsFocusable(bool bInIsFocusable); // Flags: Final|Native|Public|BlueprintCallable 0x7FF413FCEEE8
		void SetInputActionProgressMaterial(FSlateBrush& InProgressMaterialBrush, FName& InProgressMaterialParam); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF413FCEE08
		void SetHoveredSoundOverride(USoundBase Sound); // Flags: Final|Native|Public|BlueprintCallable 0x7FF413FCED28
		void SetHideInputAction(bool bInHideInputAction); // Flags: Final|Native|Public|BlueprintCallable 0x7FF413FCEC48
		void SetClickMethod(TEnumAsByte InClickMethod); // Flags: Final|Native|Public|BlueprintCallable 0x7FF413FCEB68
		void OnTriggeringInputActionChanged(FDataTableRowHandle& NewTriggeredAction); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF413FCEA88
		void OnTriggeringEnhancedInputActionChanged(UInputAction InInputAction); // Flags: Event|Protected|BlueprintEvent 0x7FF413FCE9A8
		void OnTriggeredInputActionChanged(FDataTableRowHandle& NewTriggeredAction); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF413FCE8C8
		void OnInputMethodChanged(ECommonInputType CurrentInputType); // Flags: Native|Protected 0x7FF413FCE7E8
		void OnCurrentTextStyleChanged(); // Flags: Event|Protected|BlueprintEvent 0x7FF413FCE708
		void OnActionProgress(float HeldPercent); // Flags: Event|Protected|BlueprintEvent 0x7FF413FCE628
		void OnActionComplete(); // Flags: Event|Protected|BlueprintEvent 0x7FF413FCE548
		bool NativeOnHoldProgressRollback(float DeltaTime); // Flags: Native|Protected 0x7FF413FCE468
		bool NativeOnHoldProgress(float DeltaTime); // Flags: Native|Protected 0x7FF413FCE388
		void NativeOnActionProgress(float HeldPercent); // Flags: Native|Protected 0x7FF413FCE2A8
		void NativeOnActionComplete(); // Flags: Native|Protected 0x7FF413FCE1C8
		bool IsPressed(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF413FCE0E8
		bool IsInteractionEnabled(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF413FCE008
		void HoldReset(); // Flags: Native|Protected 0x7FF413FCDF28
		void HandleTriggeringActionCommited(bool& bPassThrough); // Flags: Native|Protected|HasOutParms 0x7FF413FCDE48
		void HandleFocusReceived(); // Flags: Native|Protected 0x7FF413FCDD68
		void HandleFocusLost(); // Flags: Native|Protected 0x7FF413FCDC88
		void HandleButtonReleased(); // Flags: Final|Native|Protected 0x7FF413FCDBA8
		void HandleButtonPressed(); // Flags: Final|Native|Protected 0x7FF413FCDAC8
		void HandleButtonClicked(); // Flags: Final|Native|Protected 0x7FF413FCD9E8
		UCommonButtonStyle GetStyle(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF413FCD908
		UMaterialInstanceDynamic GetSingleMaterialStyleMID(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF413FCD828
		bool GetShouldSelectUponReceivingFocus(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF413FCD748
		bool GetSelected(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF413FCD668
		bool GetRequiresHold(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF413FCD588
		float GetRequiredHoldTime(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF413FCD4A8
		bool GetLocked(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF413FCD3C8
		bool GetIsFocusable(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF413FCD2E8
		bool GetInputAction(FDataTableRowHandle& InputActionRow); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF413FCD208
		UInputAction GetEnhancedInputAction(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF413FCD128
		UClass GetCurrentTextStyleClass(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF413FCD048
		UCommonTextStyle GetCurrentTextStyle(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF413FCCF68
		void GetCurrentCustomPadding(FMargin& OutCustomPadding); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF413FCCE88
		void GetCurrentButtonPadding(FMargin& OutButtonPadding); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF413FCCDA8
		bool GetConvertInputActionToHold(); // Flags: Native|Protected 0x7FF413FCCCC8
		void DisableButtonWithReason(FText& DisabledReason); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF413FCCBE8
		void ClearSelection(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF413FCCB08
		void BP_OnUnhovered(); // Flags: Event|Protected|BlueprintEvent 0x7FF413FCCA28
		void BP_OnSelected(); // Flags: Event|Protected|BlueprintEvent 0x7FF413FCC948
		void BP_OnReleased(); // Flags: Event|Protected|BlueprintEvent 0x7FF413FCC868
		void BP_OnPressed(); // Flags: Event|Protected|BlueprintEvent 0x7FF413FCC788
		void BP_OnLockedChanged(bool bIsLocked); // Flags: Event|Protected|BlueprintEvent 0x7FF413FCC6A8
		void BP_OnLockDoubleClicked(); // Flags: Event|Protected|BlueprintEvent 0x7FF413FCC5C8
		void BP_OnLockClicked(); // Flags: Event|Protected|BlueprintEvent 0x7FF413FCC4E8
		void BP_OnInputMethodChanged(ECommonInputType CurrentInputType); // Flags: Event|Protected|BlueprintEvent 0x7FF413FCC408
		void BP_OnInputActionTriggered(); // Flags: Event|Protected|BlueprintEvent 0x7FF413FCC328
		void BP_OnHovered(); // Flags: Event|Protected|BlueprintEvent 0x7FF413FCC248
		void BP_OnFocusReceived(); // Flags: Event|Protected|BlueprintEvent 0x7FF413FCC168
		void BP_OnFocusLost(); // Flags: Event|Protected|BlueprintEvent 0x7FF413FCC088
		void BP_OnEnabled(); // Flags: Event|Protected|BlueprintEvent 0x7FF413FCBFA8
		void BP_OnDoubleClicked(); // Flags: Event|Protected|BlueprintEvent 0x7FF413FCBEC8
		void BP_OnDisabled(); // Flags: Event|Protected|BlueprintEvent 0x7FF413FCBDE8
		void BP_OnDeselected(); // Flags: Event|Protected|BlueprintEvent 0x7FF413FCBD08
		void BP_OnClicked(); // Flags: Event|Protected|BlueprintEvent 0x7FF413FCBC28
	};


	// Class CommonUI.WidgetLockedStateRegistration
	// Inherited from UWidgetBinaryStateRegistration -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UWidgetLockedStateRegistration : public UWidgetBinaryStateRegistration	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUI.WidgetLockedStateRegistration");
			return ret;
		}
	};


	// Class CommonUI.CommonCustomNavigation
	// Inherited from UBorder -> UContentWidget -> UPanelWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x2F0 - 0x2E0)
	class UCommonCustomNavigation : public UBorder	
	{
	public:
		FDelegateProperty OnNavigationEvent; // 0x2E0(0xC)
		unsigned char UnknownData01_7[0x4]; // 0x2EC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUI.CommonCustomNavigation");
			return ret;
		}

		bool OnCustomNavigationEvent__DelegateSignature(EUINavigation NavigationType); // Flags: Public|Delegate 0x7FF4115016A8
	};


	// Class CommonUI.CommonTextBlock
	// Inherited from UTextBlock -> UTextLayoutWidget -> UWidget -> UVisual -> UObject
	// Size: 0x38 (0x350 - 0x318)
	class UCommonTextBlock : public UTextBlock	
	{
	public:
		float MobileFontSizeMultiplier; // 0x318(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x31C(0x4) UNKNOWN PROPERTY
		UClass Style; // 0x320(0x8)
		UClass ScrollStyle; // 0x328(0x8)
		bool bIsScrollingEnabled; // 0x330(0x1)
		bool bDisplayAllCaps; // 0x331(0x1)
		bool bAutoCollapseWithEmptyText; // 0x332(0x1)
		unsigned char UnknownData03_7[0x15]; // 0x333(0x15) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUI.CommonTextBlock");
			return ret;
		}

		void SetWrapTextWidth(int32_t InWrapTextAt); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4115032A8
		void SetTextCase(bool bUseAllCaps); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4115031C8
		void SetStyle(UClass InStyle); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4115030E8
		void SetScrollingEnabled(bool bInIsScrollingEnabled); // Flags: Final|Native|Public|BlueprintCallable 0x7FF411503008
		void SetMobileFontSizeMultiplier(float InMobileFontSizeMultiplier); // Flags: Final|Native|Public|BlueprintCallable 0x7FF411502F28
		void SetMargin(FMargin& InMargin); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF411502E48
		void SetLineHeightPercentage(float InLineHeightPercentage); // Flags: Final|Native|Public|BlueprintCallable 0x7FF411502D68
		void SetApplyLineHeightToBottomLine(bool InApplyLineHeightToBottomLine); // Flags: Final|Native|Public|BlueprintCallable 0x7FF411502C88
		void ResetScrollState(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF411502BA8
		float GetMobileFontSizeMultiplier(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF411502AC8
		FMargin GetMargin(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4115029E8
	};


	// Class CommonUI.CommonDateTimeTextBlock
	// Inherited from UCommonTextBlock -> UTextBlock -> UTextLayoutWidget -> UWidget -> UVisual -> UObject
	// Size: 0x68 (0x3B0 - 0x348)
	class UCommonDateTimeTextBlock : public UCommonTextBlock	
	{
	public:
		FText CustomTimespanFormat; // 0x348(0x10)
		bool bCustomTimespanLeadingZeros; // 0x358(0x1)
		unsigned char UnknownData01_7[0x57]; // 0x359(0x57) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUI.CommonDateTimeTextBlock");
			return ret;
		}

		void SetTimespanValue(FTimespan InTimespan); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF4145B5FB8
		void SetDateTimeValue(FDateTime InDateTime, bool bShowAsCountdown, float InRefreshDelay); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF4145B5ED8
		void SetCountDownCompletionText(FText InCompletionText); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4145B5DF8
		FDateTime GetDateTime(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF4145B5D18
	};


	// Class CommonUI.CommonGameViewportClient
	// Inherited from UGameViewportClient -> UScriptViewportClient -> UObject
	// Size: 0x40 (0x3E8 - 0x3A8)
	class UCommonGameViewportClient : public UGameViewportClient	
	{
	public:
		unsigned char UnknownData01_1[0x40]; // 0x3A8(0x40) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUI.CommonGameViewportClient");
			return ret;
		}
	};


	// Class CommonUI.CommonHardwareVisibilityBorder
	// Inherited from UCommonBorder -> UBorder -> UContentWidget -> UPanelWidget -> UWidget -> UVisual -> UObject
	// Size: 0x50 (0x350 - 0x300)
	class UCommonHardwareVisibilityBorder : public UCommonBorder	
	{
	public:
		unsigned char UnknownData01_1[0x50]; // 0x300(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUI.CommonHardwareVisibilityBorder");
			return ret;
		}
	};


	// Class CommonUI.CommonHierarchicalScrollBox
	// Inherited from UScrollBox -> UPanelWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0xB40 - 0xB38)
	class UCommonHierarchicalScrollBox : public UScrollBox	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0xB38(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUI.CommonHierarchicalScrollBox");
			return ret;
		}
	};


	// Class CommonUI.CommonLazyImage
	// Inherited from UImage -> UWidget -> UVisual -> UObject
	// Size: 0xF0 (0x370 - 0x280)
	class UCommonLazyImage : public UImage	
	{
	public:
		FSlateBrush LoadingBackgroundBrush; // 0x280(0xB0)
		FName MaterialTextureParamName; // 0x330(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x334(0x4) UNKNOWN PROPERTY
		FMulticastInlineDelegate BP_OnLoadingStateChanged; // 0x338(0x10)
		unsigned char UnknownData03_7[0x28]; // 0x348(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUI.CommonLazyImage");
			return ret;
		}

		void SetMaterialTextureParamName(FName TextureParamName); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4145B6418
		void SetBrushFromLazyTexture(TWeakObjectPtr& LazyTexture, bool bMatchSize); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF4145B6338
		void SetBrushFromLazyMaterial(TWeakObjectPtr& LazyMaterial); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF4145B6258
		void SetBrushFromLazyDisplayAsset(TWeakObjectPtr& LazyObject, bool bMatchTextureSize); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF4145B6178
		bool IsLoading(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145B6098
	};


	// Class CommonUI.CommonLazyWidget
	// Inherited from UWidget -> UVisual -> UObject
	// Size: 0x130 (0x290 - 0x160)
	class UCommonLazyWidget : public UWidget	
	{
	public:
		FSlateBrush LoadingBackgroundBrush; // 0x160(0xB0)
		UUserWidget Content; // 0x210(0x8)
		unsigned char UnknownData02_6[0x28]; // 0x218(0x28) UNKNOWN PROPERTY
		FMulticastInlineDelegate BP_OnLoadingStateChanged; // 0x240(0x10)
		unsigned char UnknownData03_7[0x40]; // 0x250(0x40) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUI.CommonLazyWidget");
			return ret;
		}

		void SetLazyContent(TWeakObjectPtr SoftWidget); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4145B66B8
		bool IsLoading(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145B65D8
		UUserWidget GetContent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145B64F8
	};


	// Class CommonUI.CommonListView
	// Inherited from UListView -> UListViewBase -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0xB30 - 0xB30)
	class UCommonListView : public UListView	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUI.CommonListView");
			return ret;
		}

		void SetEntrySpacing(float InEntrySpacing); // Flags: Final|Native|Public|BlueprintCallable 0x7FF413FDF930
	};


	// Class CommonUI.LoadGuardSlot
	// Inherited from UPanelSlot -> UVisual -> UObject
	// Size: 0x28 (0x60 - 0x38)
	class ULoadGuardSlot : public UPanelSlot	
	{
	public:
		FMargin Padding; // 0x38(0x10)
		TEnumAsByte HorizontalAlignment; // 0x48(0x1)
		TEnumAsByte VerticalAlignment; // 0x49(0x1)
		unsigned char UnknownData01_7[0x16]; // 0x4A(0x16) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUI.LoadGuardSlot");
			return ret;
		}

		void SetVerticalAlignment(TEnumAsByte InVerticalAlignment); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4145B6958
		void SetPadding(FMargin InPadding); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4145B6878
		void SetHorizontalAlignment(TEnumAsByte InHorizontalAlignment); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4145B6798
	};


	// Class CommonUI.CommonLoadGuard
	// Inherited from UContentWidget -> UPanelWidget -> UWidget -> UVisual -> UObject
	// Size: 0x138 (0x2B0 - 0x178)
	class UCommonLoadGuard : public UContentWidget	
	{
	public:
		unsigned char UnknownData04_3[0x8]; // 0x178(0x8) UNKNOWN PROPERTY
		FSlateBrush LoadingBackgroundBrush; // 0x180(0xB0)
		TEnumAsByte ThrobberAlignment; // 0x230(0x1)
		unsigned char UnknownData05_6[0x3]; // 0x231(0x3) UNKNOWN PROPERTY
		FMargin ThrobberPadding; // 0x234(0x10)
		unsigned char UnknownData06_6[0x4]; // 0x244(0x4) UNKNOWN PROPERTY
		FText LoadingText; // 0x248(0x10)
		UClass TextStyle; // 0x258(0x8)
		FMulticastInlineDelegate BP_OnLoadingStateChanged; // 0x260(0x10)
		FSoftObjectPath SpinnerMaterialPath; // 0x270(0x18)
		unsigned char UnknownData07_7[0x28]; // 0x288(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUI.CommonLoadGuard");
			return ret;
		}

		void SetLoadingText(FText& InLoadingText); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF411501B08
		void SetIsLoading(bool bInIsLoading); // Flags: Final|Native|Public|BlueprintCallable 0x7FF411501A28
		void OnAssetLoaded__DelegateSignature(UObject Object); // Flags: Public|Delegate 0x7FF411501868
		bool IsLoading(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF411501948
		void BP_GuardAndLoadAsset(TWeakObjectPtr& InLazyAsset, FDelegateProperty& OnAssetLoaded); // Flags: Final|Native|Private|HasOutParms|BlueprintCallable 0x7FF411501788
	};


	// Class CommonUI.CommonNumericTextBlock
	// Inherited from UCommonTextBlock -> UTextBlock -> UTextLayoutWidget -> UWidget -> UVisual -> UObject
	// Size: 0xA8 (0x3F0 - 0x348)
	class UCommonNumericTextBlock : public UCommonTextBlock	
	{
	public:
		FMulticastInlineDelegate OnInterpolationStartedEvent; // 0x348(0x10)
		FMulticastInlineDelegate OnInterpolationUpdatedEvent; // 0x358(0x10)
		FMulticastInlineDelegate OnOutroEvent; // 0x368(0x10)
		FMulticastInlineDelegate OnInterpolationEndedEvent; // 0x378(0x10)
		float CurrentNumericValue; // 0x388(0x4)
		ECommonNumericType NumericType; // 0x38C(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x38D(0x3) UNKNOWN PROPERTY
		FCommonNumberFormattingOptions FormattingSpecification; // 0x390(0x14)
		float EaseOutInterpolationExponent; // 0x3A4(0x4)
		float InterpolationUpdateInterval; // 0x3A8(0x4)
		float PostInterpolationShrinkDuration; // 0x3AC(0x4)
		bool PerformSizeInterpolation; // 0x3B0(0x1)
		bool IsPercentage; // 0x3B1(0x1)
		unsigned char UnknownData03_7[0x36]; // 0x3B2(0x36) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUI.CommonNumericTextBlock");
			return ret;
		}

		void SetNumericType(ECommonNumericType InNumericType); // Flags: Final|Native|Public|BlueprintCallable 0x7FF411503A88
		void SetCurrentValue(float NewValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4115039A8
		void OnOutro__DelegateSignature(UCommonNumericTextBlock NumericTextBlock); // Flags: MulticastDelegate|Public|Delegate 0x7FF4115038C8
		void OnInterpolationUpdated__DelegateSignature(UCommonNumericTextBlock NumericTextBlock, float LastValue, float NewValue); // Flags: MulticastDelegate|Public|Delegate 0x7FF4115037E8
		void OnInterpolationStarted__DelegateSignature(UCommonNumericTextBlock NumericTextBlock); // Flags: MulticastDelegate|Public|Delegate 0x7FF411503708
		void OnInterpolationEnded__DelegateSignature(UCommonNumericTextBlock NumericTextBlock, bool HadCompleted); // Flags: MulticastDelegate|Public|Delegate 0x7FF411503628
		bool IsInterpolatingNumericValue(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF411503548
		void InterpolateToValue(float TargetValue, float MaximumInterpolationDuration, float MinimumChangeRate, float OutroOffset); // Flags: Final|Native|Public|BlueprintCallable 0x7FF411503468
		float GetTargetValue(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF411503388
	};


	// Class CommonUI.CommonPoolableWidgetInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UCommonPoolableWidgetInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUI.CommonPoolableWidgetInterface");
			return ret;
		}

		void OnReleaseToPool(); // Flags: Native|Event|Protected|BlueprintEvent 0x7FF4145B6B18
		void OnAcquireFromPool(); // Flags: Native|Event|Protected|BlueprintEvent 0x7FF4145B6A38
	};


	// Class CommonUI.CommonRichTextBlock
	// Inherited from URichTextBlock -> UTextLayoutWidget -> UWidget -> UVisual -> UObject
	// Size: 0x40 (0x800 - 0x7C0)
	class UCommonRichTextBlock : public URichTextBlock	
	{
	public:
		ERichTextInlineIconDisplayMode InlineIconDisplayMode; // 0x7C0(0x1)
		bool bTintInlineIcon; // 0x7C1(0x1)
		unsigned char UnknownData03_6[0x6]; // 0x7C2(0x6) UNKNOWN PROPERTY
		UClass DefaultTextStyleOverrideClass; // 0x7C8(0x8)
		float MobileTextBlockScale; // 0x7D0(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x7D4(0x4) UNKNOWN PROPERTY
		UClass ScrollStyle; // 0x7D8(0x8)
		bool bIsScrollingEnabled; // 0x7E0(0x1)
		bool bDisplayAllCaps; // 0x7E1(0x1)
		bool bAutoCollapseWithEmptyText; // 0x7E2(0x1)
		unsigned char UnknownData05_7[0x15]; // 0x7E3(0x15) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUI.CommonRichTextBlock");
			return ret;
		}

		void SetScrollingEnabled(bool bInIsScrollingEnabled); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4145B6BF8
	};


	// Class CommonUI.CommonRotator
	// Inherited from UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x70 (0x1400 - 0x1390)
	class UCommonRotator : public UCommonButtonBase	
	{
	public:
		unsigned char UnknownData03_3[0x10]; // 0x1390(0x10) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnRotatedWithDirection; // 0x13A0(0x10)
		FMulticastInlineDelegate OnRotated; // 0x13B0(0x10)
		unsigned char UnknownData04_6[0x18]; // 0x13C0(0x18) UNKNOWN PROPERTY
		UCommonTextBlock MyText; // 0x13D8(0x8)
		unsigned char UnknownData05_7[0x18]; // 0x13E0(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUI.CommonRotator");
			return ret;
		}

		void ShiftTextRight(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4145B72F8
		void ShiftTextLeft(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4145B7218
		void SetSelectedItem(int32_t InValue); // Flags: Native|Public|BlueprintCallable 0x7FF4145B7138
		void PopulateTextLabels(TArray Labels); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4145B7058
		FText GetSelectedText(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145B6F78
		int32_t GetSelectedIndex(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145B6E98
		void BP_OnOptionsPopulated(int32_t Count); // Flags: Event|Protected|BlueprintEvent 0x7FF4145B6DB8
		void BP_OnOptionSelected(int32_t Index); // Flags: Event|Protected|BlueprintEvent 0x7FF4145B6CD8
	};


	// Class CommonUI.CommonTabListWidgetBase
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x178 (0x458 - 0x2E0)
	class UCommonTabListWidgetBase : public UCommonUserWidget	
	{
	public:
		FMulticastInlineDelegate OnTabSelected; // 0x2E0(0x10)
		FMulticastInlineDelegate OnTabButtonCreation; // 0x2F0(0x10)
		FMulticastInlineDelegate OnTabButtonRemoval; // 0x300(0x10)
		FMulticastInlineDelegate OnTabListRebuilt; // 0x310(0x10)
		FDataTableRowHandle NextTabInputActionData; // 0x320(0x10)
		FDataTableRowHandle PreviousTabInputActionData; // 0x330(0x10)
		UInputAction NextTabEnhancedInputAction; // 0x340(0x8)
		UInputAction PreviousTabEnhancedInputAction; // 0x348(0x8)
		bool bAutoListenForInput; // 0x350(0x1)
		bool bDeferRebuildingTabList; // 0x351(0x1)
		unsigned char UnknownData04_6[0x2]; // 0x352(0x2) UNKNOWN PROPERTY
		TWeakObjectPtr LinkedSwitcher; // 0x354(0x8)
		unsigned char UnknownData05_6[0x4]; // 0x35C(0x4) UNKNOWN PROPERTY
		UCommonButtonGroupBase TabButtonGroup; // 0x360(0x8)
		unsigned char UnknownData06_6[0x8]; // 0x368(0x8) UNKNOWN PROPERTY
		TMap RegisteredTabsByID; // 0x370(0x50)
		FUserWidgetPool TabButtonWidgetPool; // 0x3C0(0x88)
		unsigned char UnknownData07_7[0x10]; // 0x448(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUI.CommonTabListWidgetBase");
			return ret;
		}

		void SetTabVisibility(FName TabNameID, ESlateVisibility NewVisibility); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4115EB470
		void SetTabInteractionEnabled(FName TabNameID, bool bEnable); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4115EB390
		void SetTabEnabled(FName TabNameID, bool bEnable); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4115EB2B0
		void SetListeningForInput(bool bShouldListen); // Flags: Native|Public|BlueprintCallable 0x7FF4115EB1D0
		void SetLinkedSwitcher(UCommonAnimatedSwitcher CommonSwitcher); // Flags: Native|Public|BlueprintCallable 0x7FF4115EB0F0
		bool SelectTabByID(FName TabNameID, bool bSuppressClickFeedback); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4115EB010
		bool RemoveTab(FName TabNameID); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4115EAF30
		void RemoveAllTabs(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4115EAE50
		bool RegisterTab(FName TabNameID, UClass ButtonWidgetType, UWidget ContentWidget, int32_t TabIndex); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4115EAD70
		void OnTabSelected__DelegateSignature(FName TabID); // Flags: MulticastDelegate|Public|Delegate 0x7FF4115EAC90
		void OnTabListRebuilt__DelegateSignature(); // Flags: MulticastDelegate|Public|Delegate 0x7FF4115EABB0
		void OnTabButtonRemoval__DelegateSignature(FName TabID, UCommonButtonBase TabButton); // Flags: MulticastDelegate|Public|Delegate 0x7FF4115EAAD0
		void OnTabButtonCreation__DelegateSignature(FName TabID, UCommonButtonBase TabButton); // Flags: MulticastDelegate|Public|Delegate 0x7FF4115EA9F0
		void HandleTabRemoval(FName TabNameID, UCommonButtonBase TabButton); // Flags: Native|Event|Protected|BlueprintEvent 0x7FF4115EA910
		void HandleTabCreation(FName TabNameID, UCommonButtonBase TabButton); // Flags: Native|Event|Protected|BlueprintEvent 0x7FF4115EA830
		void HandleTabButtonSelected(UCommonButtonBase SelectedTabButton, int32_t ButtonIndex); // Flags: Final|Native|Protected 0x7FF4115AA750
		void HandlePreviousTabInputAction(bool& bPassThrough); // Flags: Final|Native|Protected|HasOutParms 0x7FF4115AA670
		void HandlePreLinkedSwitcherChanged_BP(); // Flags: Event|Protected|BlueprintEvent 0x7FF4115AA590
		void HandlePostLinkedSwitcherChanged_BP(); // Flags: Event|Protected|BlueprintEvent 0x7FF4115AA4B0
		void HandleNextTabInputAction(bool& bPassThrough); // Flags: Final|Native|Protected|HasOutParms 0x7FF4115AA3D0
		FName GetTabIdAtIndex(int32_t Index); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4115AA2F0
		int32_t GetTabCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4115AA210
		UCommonButtonBase GetTabButtonBaseByID(FName TabNameID); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4115AA130
		FName GetSelectedTabId(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4115AA050
		UCommonAnimatedSwitcher GetLinkedSwitcher(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4115A9F70
		FName GetActiveTab(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4115A9E90
		void DisableTabWithReason(FName TabNameID, FText& Reason); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF4115A9DB0
	};


	// Class CommonUI.CommonTextStyle
	// Inherited from UObject
	// Size: 0x168 (0x190 - 0x28)
	class UCommonTextStyle : public UObject	
	{
	public:
		FSlateFontInfo Font; // 0x28(0x58)
		FLinearColor Color; // 0x80(0x10)
		bool bUsesDropShadow; // 0x90(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x91(0x7) UNKNOWN PROPERTY
		FVector2D ShadowOffset; // 0x98(0x10)
		FLinearColor ShadowColor; // 0xA8(0x10)
		FMargin Margin; // 0xB8(0x10)
		unsigned char UnknownData04_6[0x8]; // 0xC8(0x8) UNKNOWN PROPERTY
		FSlateBrush StrikeBrush; // 0xD0(0xB0)
		float LineHeightPercentage; // 0x180(0x4)
		bool ApplyLineHeightToBottomLine; // 0x184(0x1)
		unsigned char UnknownData05_7[0xB]; // 0x185(0xB) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUI.CommonTextStyle");
			return ret;
		}

		void GetStrikeBrush(FSlateBrush& OutStrikeBrush); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF4145B79F8
		void GetShadowOffset(FVector2D& OutShadowOffset); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF4145B7918
		void GetShadowColor(FLinearColor& OutColor); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF4145B7838
		void GetMargin(FMargin& OutMargin); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF4145B7758
		float GetLineHeightPercentage(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145B7678
		void GetFont(FSlateFontInfo& OutFont); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF4145B7598
		void GetColor(FLinearColor& OutColor); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF4145B74B8
		bool GetApplyLineHeightToBottomLine(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145B73D8
	};


	// Class CommonUI.CommonTextScrollStyle
	// Inherited from UObject
	// Size: 0x18 (0x40 - 0x28)
	class UCommonTextScrollStyle : public UObject	
	{
	public:
		float Speed; // 0x28(0x4)
		float StartDelay; // 0x2C(0x4)
		float EndDelay; // 0x30(0x4)
		float FadeInDelay; // 0x34(0x4)
		float FadeOutDelay; // 0x38(0x4)
		EWidgetClipping Clipping; // 0x3C(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x3D(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUI.CommonTextScrollStyle");
			return ret;
		}
	};


	// Class CommonUI.CommonTileView
	// Inherited from UTileView -> UListView -> UListViewBase -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0xB60 - 0xB58)
	class UCommonTileView : public UTileView	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUI.CommonTileView");
			return ret;
		}
	};


	// Class CommonUI.CommonTreeView
	// Inherited from UTreeView -> UListView -> UListViewBase -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0xB90 - 0xB88)
	class UCommonTreeView : public UTreeView	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0xB88(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUI.CommonTreeView");
			return ret;
		}
	};


	// Class CommonUI.CommonUIEditorSettings
	// Inherited from UObject
	// Size: 0x68 (0x90 - 0x28)
	class UCommonUIEditorSettings : public UObject	
	{
	public:
		TWeakObjectPtr TemplateTextStyle; // 0x28(0x20)
		TWeakObjectPtr TemplateButtonStyle; // 0x48(0x20)
		TWeakObjectPtr TemplateBorderStyle; // 0x68(0x20)
		unsigned char UnknownData01_7[0x8]; // 0x88(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUI.CommonUIEditorSettings");
			return ret;
		}
	};


	// Class CommonUI.CommonUILibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UCommonUILibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUI.CommonUILibrary");
			return ret;
		}

		UWidget FindParentWidgetOfType(UWidget StartingWidget, UClass Type); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4145B7AD8
	};


	// Class CommonUI.CommonUIRichTextData
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UCommonUIRichTextData : public UObject	
	{
	public:
		UDataTable InlineIconSet; // 0x28(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUI.CommonUIRichTextData");
			return ret;
		}
	};


	// Class CommonUI.CommonUISettings
	// Inherited from UObject
	// Size: 0x178 (0x1A0 - 0x28)
	class UCommonUISettings : public UObject	
	{
	public:
		bool bAutoLoadData; // 0x28(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x29(0x7) UNKNOWN PROPERTY
		TWeakObjectPtr DefaultImageResourceObject; // 0x30(0x20)
		TWeakObjectPtr DefaultThrobberMaterial; // 0x50(0x20)
		TWeakObjectPtr DefaultRichTextDataClass; // 0x70(0x20)
		TArray PlatformTraits; // 0x90(0x10)
		unsigned char UnknownData05_6[0x28]; // 0xA0(0x28) UNKNOWN PROPERTY
		UObject DefaultImageResourceObjectInstance; // 0xC8(0x8)
		UMaterialInterface DefaultThrobberMaterialInstance; // 0xD0(0x8)
		unsigned char UnknownData06_6[0x8]; // 0xD8(0x8) UNKNOWN PROPERTY
		FSlateBrush DefaultThrobberBrush; // 0xE0(0xB0)
		UCommonUIRichTextData RichTextDataInstance; // 0x190(0x8)
		unsigned char UnknownData07_7[0x8]; // 0x198(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUI.CommonUISettings");
			return ret;
		}
	};


	// Class CommonUI.CommonUISubsystemBase
	// Inherited from UGameInstanceSubsystem -> USubsystem -> UObject
	// Size: 0x10 (0x40 - 0x30)
	class UCommonUISubsystemBase : public UGameInstanceSubsystem	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0x30(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUI.CommonUISubsystemBase");
			return ret;
		}

		FSlateBrush GetInputActionButtonIcon(FDataTableRowHandle& InputActionRowHandle, ECommonInputType InputType, FName& GamepadName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF411E050B0
		FSlateBrush GetEnhancedInputActionButtonIcon(UInputAction InputAction, ULocalPlayer LocalPlayer); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF411E04FD0
	};


	// Class CommonUI.CommonInputMetadata
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UCommonInputMetadata : public UObject	
	{
	public:
		int32_t NavBarPriority; // 0x28(0x4)
		bool bIsGenericInputAction; // 0x2C(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x2D(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUI.CommonInputMetadata");
			return ret;
		}
	};


	// Class CommonUI.CommonMappingContextMetadataInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UCommonMappingContextMetadataInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUI.CommonMappingContextMetadataInterface");
			return ret;
		}
	};


	// Class CommonUI.CommonMappingContextMetadata
	// Inherited from UDataAsset -> UObject
	// Size: 0x60 (0x90 - 0x30)
	class UCommonMappingContextMetadata : public UDataAsset	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x30(0x8) UNKNOWN PROPERTY
		UCommonInputMetadata EnhancedInputMetadata; // 0x38(0x8)
		TMap PerActionEnhancedInputMetadata; // 0x40(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUI.CommonMappingContextMetadata");
			return ret;
		}
	};


	// Class CommonUI.CommonUIVisibilitySubsystem
	// Inherited from ULocalPlayerSubsystem -> USubsystem -> UObject
	// Size: 0x58 (0x88 - 0x30)
	class UCommonUIVisibilitySubsystem : public ULocalPlayerSubsystem	
	{
	public:
		unsigned char UnknownData01_1[0x58]; // 0x30(0x58) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUI.CommonUIVisibilitySubsystem");
			return ret;
		}
	};


	// Class CommonUI.CommonVideoPlayer
	// Inherited from UWidget -> UVisual -> UObject
	// Size: 0x140 (0x2A0 - 0x160)
	class UCommonVideoPlayer : public UWidget	
	{
	public:
		UMediaSource Video; // 0x160(0x8)
		bool bMatchSize; // 0x168(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x169(0x7) UNKNOWN PROPERTY
		UMediaPlayer MediaPlayer; // 0x170(0x8)
		UMediaTexture MediaTexture; // 0x178(0x8)
		UMaterial VideoMaterial; // 0x180(0x8)
		UMediaSoundComponent SoundComponent; // 0x188(0x8)
		FSlateBrush VideoBrush; // 0x190(0xB0)
		unsigned char UnknownData03_7[0x60]; // 0x240(0x60) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUI.CommonVideoPlayer");
			return ret;
		}
	};


	// Class CommonUI.CommonVisibilitySwitcher
	// Inherited from UOverlay -> UPanelWidget -> UWidget -> UVisual -> UObject
	// Size: 0x28 (0x1B0 - 0x188)
	class UCommonVisibilitySwitcher : public UOverlay	
	{
	public:
		ESlateVisibility ShownVisibility; // 0x188(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x189(0x3) UNKNOWN PROPERTY
		int32_t ActiveWidgetIndex; // 0x18C(0x4)
		bool bAutoActivateSlot; // 0x190(0x1)
		bool bActivateFirstSlotOnAdding; // 0x191(0x1)
		unsigned char UnknownData03_7[0x1E]; // 0x192(0x1E) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUI.CommonVisibilitySwitcher");
			return ret;
		}

		void SetActiveWidgetIndex(int32_t Index); // Flags: Final|Native|Public|BlueprintCallable 0x7FF411E25C10
		void SetActiveWidget(UWidget Widget); // Flags: Final|Native|Public|BlueprintCallable 0x7FF411E25B30
		bool IsCurrentlySwitching(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF411E25A50
		void IncrementActiveWidgetIndex(bool bAllowWrapping); // Flags: Final|Native|Public|BlueprintCallable 0x7FF411E25970
		int32_t GetActiveWidgetIndex(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF411E25890
		UWidget GetActiveWidget(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF411E257B0
		void DecrementActiveWidgetIndex(bool bAllowWrapping); // Flags: Final|Native|Public|BlueprintCallable 0x7FF411E056D0
		void DeactivateVisibleSlot(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF411E055F0
		void ActivateVisibleSlot(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF411E05510
	};


	// Class CommonUI.CommonVisibilitySwitcherSlot
	// Inherited from UOverlaySlot -> UPanelSlot -> UVisual -> UObject
	// Size: 0x10 (0x68 - 0x58)
	class UCommonVisibilitySwitcherSlot : public UOverlaySlot	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0x58(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUI.CommonVisibilitySwitcherSlot");
			return ret;
		}
	};


	// Class CommonUI.UCommonVisibilityWidgetBase
	// Inherited from UCommonBorder -> UBorder -> UContentWidget -> UPanelWidget -> UWidget -> UVisual -> UObject
	// Size: 0x60 (0x360 - 0x300)
	class UUCommonVisibilityWidgetBase : public UCommonBorder	
	{
	public:
		TMap VisibilityControls; // 0x300(0x50)
		bool bShowForGamepad; // 0x350(0x1)
		bool bShowForMouseAndKeyboard; // 0x351(0x1)
		bool bShowForTouch; // 0x352(0x1)
		ESlateVisibility VisibleType; // 0x353(0x1)
		ESlateVisibility HiddenType; // 0x354(0x1)
		unsigned char UnknownData01_7[0xB]; // 0x355(0xB) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUI.UCommonVisibilityWidgetBase");
			return ret;
		}

		TArray GetRegisteredPlatforms(); // Flags: Final|Native|Static|Protected 0x7FF4145B7BB8
	};


	// Class CommonUI.CommonVisualAttachment
	// Inherited from USizeBox -> UContentWidget -> UPanelWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x1D0 - 0x1B0)
	class UCommonVisualAttachment : public USizeBox	
	{
	public:
		FVector2D ContentAnchor; // 0x1B0(0x10)
		unsigned char UnknownData01_7[0x10]; // 0x1C0(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUI.CommonVisualAttachment");
			return ret;
		}
	};


	// Class CommonUI.CommonWidgetCarousel
	// Inherited from UPanelWidget -> UWidget -> UVisual -> UObject
	// Size: 0x48 (0x1C0 - 0x178)
	class UCommonWidgetCarousel : public UPanelWidget	
	{
	public:
		int32_t ActiveWidgetIndex; // 0x178(0x4)
		float MoveSpeed; // 0x17C(0x4)
		FMulticastInlineDelegate OnCurrentPageIndexChanged; // 0x180(0x10)
		unsigned char UnknownData01_7[0x30]; // 0x190(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUI.CommonWidgetCarousel");
			return ret;
		}

		void SetMoveSpeed(float InMoveSpeed); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4145B8478
		void SetActiveWidgetIndex(int32_t Index); // Flags: Native|Public|BlueprintCallable 0x7FF4145B8398
		void SetActiveWidget(UWidget Widget); // Flags: Native|Public|BlueprintCallable 0x7FF4145B82B8
		void PreviousPage(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4145B81D8
		void NextPage(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4145B80F8
		UWidget GetWidgetAtIndex(int32_t Index); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145B8018
		float GetMoveSpeed(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145B7F38
		int32_t GetActiveWidgetIndex(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145B7E58
		void EndAutoScrolling(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4145B7D78
		void BeginAutoScrolling(float ScrollInterval); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4145B7C98
	};


	// Class CommonUI.CommonWidgetCarouselNavBar
	// Inherited from UWidget -> UVisual -> UObject
	// Size: 0x48 (0x1A8 - 0x160)
	class UCommonWidgetCarouselNavBar : public UWidget	
	{
	public:
		UClass ButtonWidgetType; // 0x160(0x8)
		FMargin ButtonPadding; // 0x168(0x10)
		unsigned char UnknownData01_6[0x10]; // 0x178(0x10) UNKNOWN PROPERTY
		UCommonWidgetCarousel LinkedCarousel; // 0x188(0x8)
		UCommonButtonGroupBase ButtonGroup; // 0x190(0x8)
		TArray Buttons; // 0x198(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUI.CommonWidgetCarouselNavBar");
			return ret;
		}

		void SetLinkedCarousel(UCommonWidgetCarousel CommonCarousel); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4145B8718
		void HandlePageChanged(UCommonWidgetCarousel CommonCarousel, int32_t PageIndex); // Flags: Final|Native|Protected 0x7FF4145B8638
		void HandleButtonClicked(UCommonButtonBase AssociatedButton, int32_t ButtonIndex); // Flags: Final|Native|Protected 0x7FF4145B8558
	};


	// Class CommonUI.CommonWidgetGroupBase
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UCommonWidgetGroupBase : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUI.CommonWidgetGroupBase");
			return ret;
		}

		void RemoveWidget(UWidget InWidget); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4145B8A98
		void RemoveAll(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4145B89B8
		void AddWidgets(TArray& Widgets); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF4145B88D8
		void AddWidget(UWidget InWidget); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4145B87F8
	};


	// Class CommonUI.CommonButtonGroupBase
	// Inherited from UCommonWidgetGroupBase -> UObject
	// Size: 0x138 (0x160 - 0x28)
	class UCommonButtonGroupBase : public UCommonWidgetGroupBase	
	{
	public:
		FMulticastInlineDelegate OnSelectedButtonBaseChanged; // 0x28(0x10)
		unsigned char UnknownData08_6[0x18]; // 0x38(0x18) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnHoveredButtonBaseChanged; // 0x50(0x10)
		unsigned char UnknownData09_6[0x18]; // 0x60(0x18) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnButtonBaseClicked; // 0x78(0x10)
		unsigned char UnknownData10_6[0x18]; // 0x88(0x18) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnButtonBaseDoubleClicked; // 0xA0(0x10)
		unsigned char UnknownData11_6[0x18]; // 0xB0(0x18) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnSelectionCleared; // 0xC8(0x10)
		unsigned char UnknownData12_6[0x18]; // 0xD8(0x18) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnButtonBaseLockClicked; // 0xF0(0x10)
		unsigned char UnknownData13_6[0x18]; // 0x100(0x18) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnButtonBaseLockDoubleClicked; // 0x118(0x10)
		unsigned char UnknownData14_6[0x18]; // 0x128(0x18) UNKNOWN PROPERTY
		bool bSelectionRequired; // 0x140(0x1)
		unsigned char UnknownData15_7[0x1F]; // 0x141(0x1F) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUI.CommonButtonGroupBase");
			return ret;
		}

		void SetSelectionRequired(bool bRequireSelection); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4145B9B38
		void SelectPreviousButton(bool bAllowWrap); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4145B9A58
		void SelectNextButton(bool bAllowWrap); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4145B9978
		void SelectButtonAtIndex(int32_t ButtonIndex, bool bAllowSound); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4145B9898
		void OnSelectionStateChangedBase(UCommonButtonBase BaseButton, bool bIsSelected); // Flags: Native|Protected 0x7FF4145B97B8
		void OnHandleButtonBaseLockDoubleClicked(UCommonButtonBase BaseButton); // Flags: Native|Protected 0x7FF4145B96D8
		void OnHandleButtonBaseLockClicked(UCommonButtonBase BaseButton); // Flags: Native|Protected 0x7FF4145B95F8
		void OnHandleButtonBaseDoubleClicked(UCommonButtonBase BaseButton); // Flags: Native|Protected 0x7FF4145B9518
		void OnHandleButtonBaseClicked(UCommonButtonBase BaseButton); // Flags: Native|Protected 0x7FF4145B9438
		void OnButtonBaseUnhovered(UCommonButtonBase BaseButton); // Flags: Native|Protected 0x7FF4145B9358
		void OnButtonBaseHovered(UCommonButtonBase BaseButton); // Flags: Native|Protected 0x7FF4145B9278
		bool HasAnyButtons(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145B9198
		int32_t GetSelectedButtonIndex(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145B90B8
		UCommonButtonBase GetSelectedButtonBase(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145B8FD8
		int32_t GetHoveredButtonIndex(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145B8EF8
		int32_t GetButtonCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145B8E18
		UCommonButtonBase GetButtonBaseAtIndex(int32_t Index); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145B8D38
		int32_t FindButtonIndex(UCommonButtonBase ButtonToFind); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145B8C58
		void DeselectAll(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4145B8B78
	};


	// Class CommonUI.CommonBoundActionBar
	// Inherited from UDynamicEntryBoxBase -> UWidget -> UVisual -> UObject
	// Size: 0x30 (0x270 - 0x240)
	class UCommonBoundActionBar : public UDynamicEntryBoxBase	
	{
	public:
		unsigned char UnknownData03_3[0x8]; // 0x240(0x8) UNKNOWN PROPERTY
		UClass ActionButtonClass; // 0x248(0x8)
		bool bDisplayOwningPlayerActionsOnly; // 0x250(0x1)
		bool bIgnoreDuplicateActions; // 0x251(0x1)
		unsigned char UnknownData04_6[0x6]; // 0x252(0x6) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnActionBarUpdated; // 0x258(0x10)
		unsigned char UnknownData05_7[0x8]; // 0x268(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUI.CommonBoundActionBar");
			return ret;
		}

		void SetDisplayOwningPlayerActionsOnly(bool bShouldOnlyDisplayOwningPlayerActions); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4145B9C18
	};


	// Class CommonUI.CommonBoundActionButton
	// Inherited from UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x13B0 - 0x1390)
	class UCommonBoundActionButton : public UCommonButtonBase	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x1390(0x8) UNKNOWN PROPERTY
		UCommonTextBlock Text_ActionName; // 0x1398(0x8)
		unsigned char UnknownData03_7[0x8]; // 0x13A0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUI.CommonBoundActionButton");
			return ret;
		}

		void OnUpdateInputAction(); // Flags: Event|Protected|BlueprintEvent 0x7FF4145B9CF8
	};


	// Class CommonUI.CommonGenericInputActionDataTable
	// Inherited from UDataTable -> UObject
	// Size: 0x0 (0xB0 - 0xB0)
	class UCommonGenericInputActionDataTable : public UDataTable	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUI.CommonGenericInputActionDataTable");
			return ret;
		}
	};


	// Class CommonUI.CommonInputActionDataProcessor
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UCommonInputActionDataProcessor : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUI.CommonInputActionDataProcessor");
			return ret;
		}
	};


	// Class CommonUI.CommonUIActionRouterBase
	// Inherited from ULocalPlayerSubsystem -> USubsystem -> UObject
	// Size: 0x140 (0x170 - 0x30)
	class UCommonUIActionRouterBase : public ULocalPlayerSubsystem	
	{
	public:
		unsigned char UnknownData01_1[0x140]; // 0x30(0x140) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUI.CommonUIActionRouterBase");
			return ret;
		}
	};


	// Class CommonUI.CommonUIInputSettings
	// Inherited from UObject
	// Size: 0x58 (0x80 - 0x28)
	class UCommonUIInputSettings : public UObject	
	{
	public:
		bool bLinkCursorToGamepadFocus; // 0x28(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x29(0x3) UNKNOWN PROPERTY
		int32_t UIActionProcessingPriority; // 0x2C(0x4)
		TArray InputActions; // 0x30(0x10)
		TArray ActionOverrides; // 0x40(0x10)
		FCommonAnalogCursorSettings AnalogCursorSettings; // 0x50(0x2C)
		unsigned char UnknownData03_7[0x4]; // 0x7C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUI.CommonUIInputSettings");
			return ret;
		}
	};


	// Class CommonUI.CommonActivatableWidgetContainerBase
	// Inherited from UWidget -> UVisual -> UObject
	// Size: 0x128 (0x288 - 0x160)
	class UCommonActivatableWidgetContainerBase : public UWidget	
	{
	public:
		unsigned char UnknownData04_3[0x18]; // 0x160(0x18) UNKNOWN PROPERTY
		ECommonSwitcherTransition TransitionType; // 0x178(0x1)
		ETransitionCurve TransitionCurveType; // 0x179(0x1)
		unsigned char UnknownData05_6[0x2]; // 0x17A(0x2) UNKNOWN PROPERTY
		float TransitionDuration; // 0x17C(0x4)
		ECommonSwitcherTransitionFallbackStrategy TransitionFallbackStrategy; // 0x180(0x1)
		unsigned char UnknownData06_6[0x7]; // 0x181(0x7) UNKNOWN PROPERTY
		TArray WidgetList; // 0x188(0x10)
		UCommonActivatableWidget DisplayedWidget; // 0x198(0x8)
		FUserWidgetPool GeneratedWidgetsPool; // 0x1A0(0x88)
		unsigned char UnknownData07_7[0x60]; // 0x228(0x60) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUI.CommonActivatableWidgetContainerBase");
			return ret;
		}

		void SetTransitionDuration(float duration); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4145BA238
		void RemoveWidget(UCommonActivatableWidget WidgetToRemove); // Flags: Final|Native|Private|BlueprintCallable 0x7FF4145BA158
		float GetTransitionDuration(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145BA078
		UCommonActivatableWidget GetActiveWidget(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145B9F98
		void ClearWidgets(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4145B9EB8
		UCommonActivatableWidget BP_AddWidget(UClass ActivatableWidgetClass); // Flags: Final|Native|Private|BlueprintCallable 0x7FF4145B9DD8
	};


	// Class CommonUI.CommonActivatableWidgetStack
	// Inherited from UCommonActivatableWidgetContainerBase -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x298 - 0x288)
	class UCommonActivatableWidgetStack : public UCommonActivatableWidgetContainerBase	
	{
	public:
		UClass RootContentWidgetClass; // 0x288(0x8)
		UCommonActivatableWidget RootContentWidget; // 0x290(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUI.CommonActivatableWidgetStack");
			return ret;
		}
	};


	// Class CommonUI.CommonActivatableWidgetQueue
	// Inherited from UCommonActivatableWidgetContainerBase -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x288 - 0x288)
	class UCommonActivatableWidgetQueue : public UCommonActivatableWidgetContainerBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUI.CommonActivatableWidgetQueue");
			return ret;
		}
	};

}
