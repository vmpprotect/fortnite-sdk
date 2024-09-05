#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: CommonUI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

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
	// Size: 0x20 (0x660 - 0x640)
	class UAnalogSlider : public USlider	
	{
	public:
		FMulticastInlineDelegate OnAnalogCapture; // 0x640(0x10)
		unsigned char UnknownData00_7[0x10]; // 0x650(0x10) UNKNOWN PROPERTY

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
	// Size: 0x2C8 (0x420 - 0x158)
	class UCommonActionWidget : public UWidget	
	{
	public:
		FMulticastInlineDelegate OnInputMethodChanged; // 0x158(0x10)
		FMulticastInlineDelegate OnInputIconUpdated; // 0x168(0x10)
		unsigned char UnknownData00_6[0x8]; // 0x178(0x8) UNKNOWN PROPERTY
		FSlateBrush ProgressMaterialBrush; // 0x180(0xB0)
		FName ProgressMaterialParam; // 0x230(0x4)
		unsigned char UnknownData01_6[0xC]; // 0x234(0xC) UNKNOWN PROPERTY
		FSlateBrush IconRimBrush; // 0x240(0xB0)
		TArray<FDataTableRowHandle> InputActions; // 0x2F0(0x10)
		UInputAction* EnhancedInputAction; // 0x300(0x8)
		unsigned char UnknownData02_6[0x8]; // 0x308(0x8) UNKNOWN PROPERTY
		UMaterialInstanceDynamic* ProgressDynamicMaterial; // 0x310(0x8)
		unsigned char UnknownData03_6[0x48]; // 0x318(0x48) UNKNOWN PROPERTY
		FSlateBrush Icon; // 0x360(0xB0)
		unsigned char UnknownData04_7[0x10]; // 0x410(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUI.CommonActionWidget");
			return ret;
		}

		void SetInputActions(TArray<FDataTableRowHandle> NewInputActions); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D09A5E0(relative to base address)
		void SetInputAction(FDataTableRowHandle InputActionRow); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74927E9B0(relative to base address)
		void SetIconRimBrush(FSlateBrush InIconRimBrush); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7492E1D74(relative to base address)
		void SetEnhancedInputAction(UInputAction* InInputAction); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D09A23C(relative to base address)
		void OnInputMethodChanged__DelegateSignature(bool bUsingGamepad); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInputIconUpdated__DelegateSignature(); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool IsHeldAction(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF748ABCA78(relative to base address)
		UMaterialInstanceDynamic GetIconDynamicMaterial(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF748D47A0C(relative to base address)
		FSlateBrush GetIcon(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF748CDA450(relative to base address)
		FText GetDisplayText(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF748B618D0(relative to base address)
	};


	// Class CommonUI.CommonUserWidget
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x28 (0x2D8 - 0x2B0)
	class UCommonUserWidget : public UUserWidget	
	{
	public:
		bool bDisplayInActionBar; // 0x2B0(0x1)
		bool bConsumePointerInput; // 0x2B1(0x1)
		unsigned char UnknownData00_7[0x26]; // 0x2B2(0x26) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUI.CommonUserWidget");
			return ret;
		}

		void UnregisterScrollRecipientExternal(UWidget* AnalogScrollRecipient); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D09BB10(relative to base address)
		void SetConsumePointerInput(bool bInConsumePointerInput); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D099E0C(relative to base address)
		void RegisterScrollRecipientExternal(UWidget* AnalogScrollRecipient); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D09946C(relative to base address)
	};


	// Class CommonUI.CommonActivatableWidget
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x118 (0x3F0 - 0x2D8)
	class UCommonActivatableWidget : public UCommonUserWidget	
	{
	public:
		bool bIsBackHandler; // 0x2D8(0x1)
		bool bIsBackActionDisplayedInActionBar; // 0x2D9(0x1)
		bool bAutoActivate; // 0x2DA(0x1)
		bool bSupportsActivationFocus; // 0x2DB(0x1)
		bool bIsModal; // 0x2DC(0x1)
		bool bAutoRestoreFocus; // 0x2DD(0x1)
		bool bOverrideActionDomain; // 0x2DE(0x1)
		unsigned char UnknownData00_6[0x1]; // 0x2DF(0x1) UNKNOWN PROPERTY
		UInputMappingContext* InputMapping; // 0x2E0(0x8)
		int32_t InputMappingPriority; // 0x2E8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x2EC(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr<UCommonInputActionDomain*> ActionDomainOverride; // 0x2F0(0x20)
		FMulticastInlineDelegate BP_OnWidgetActivated; // 0x310(0x10)
		FMulticastInlineDelegate BP_OnWidgetDeactivated; // 0x320(0x10)
		bool bIsActive; // 0x330(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x331(0x7) UNKNOWN PROPERTY
		TArray<TWeakObjectPtr> VisibilityBoundWidgets; // 0x338(0x10)
		unsigned char UnknownData03_6[0xA0]; // 0x348(0xA0) UNKNOWN PROPERTY
		bool bSetVisibilityOnActivated; // 0x3E8(0x1)
		ESlateVisibility ActivatedVisibility; // 0x3E9(0x1)
		bool bSetVisibilityOnDeactivated; // 0x3EA(0x1)
		ESlateVisibility DeactivatedVisibility; // 0x3EB(0x1)
		unsigned char UnknownData04_7[0x4]; // 0x3EC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUI.CommonActivatableWidget");
			return ret;
		}

		void SetBindVisibilities(ESlateVisibility OnActivatedVisibility, ESlateVisibility OnDeactivatedVisibility, bool bInAllActive); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D099A40(relative to base address)
		void RequestRefreshFocus(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF749AAEBDC(relative to base address)
		bool IsActivated(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7493F619C(relative to base address)
		UWidget GetDesiredFocusTarget(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D097B20(relative to base address)
		void DeactivateWidget(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF749B1B2C4(relative to base address)
		void ClearFocusRestorationTarget(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D0972C8(relative to base address)
		bool BP_OnHandleBackAction(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnDeactivated(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnActivated(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		FUIInputConfig BP_GetDesiredInputConfig(); // Flags: Event|Protected|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UWidget BP_GetDesiredFocusTarget(); // Flags: Event|Protected|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BindVisibilityToActivation(UCommonActivatableWidget* ActivatableWidget); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D097110(relative to base address)
		void ActivateWidget(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF749BC767C(relative to base address)
	};


	// Class CommonUI.CommonAnimatedSwitcher
	// Inherited from UWidgetSwitcher -> UPanelWidget -> UWidget -> UVisual -> UObject
	// Size: 0x88 (0x210 - 0x188)
	class UCommonAnimatedSwitcher : public UWidgetSwitcher	
	{
	public:
		unsigned char UnknownData00_3[0x30]; // 0x188(0x30) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnActiveWidgetIndexChangedBP; // 0x1B8(0x10)
		ECommonSwitcherTransition TransitionType; // 0x1C8(0x1)
		ETransitionCurve TransitionCurveType; // 0x1C9(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x1CA(0x2) UNKNOWN PROPERTY
		float TransitionDuration; // 0x1CC(0x4)
		ECommonSwitcherTransitionFallbackStrategy TransitionFallbackStrategy; // 0x1D0(0x1)
		unsigned char UnknownData02_7[0x3F]; // 0x1D1(0x3F) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUI.CommonAnimatedSwitcher");
			return ret;
		}

		void SetDisableTransitionAnimation(bool bDisableAnimation); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D09A1BC(relative to base address)
		bool IsTransitionPlaying(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D098F2C(relative to base address)
		bool IsCurrentlySwitching(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D098DD4(relative to base address)
		bool HasWidgets(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF749B404D0(relative to base address)
		void ActivatePreviousWidget(bool bCanWrap); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D096D80(relative to base address)
		void ActivateNextWidget(bool bCanWrap); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D096D00(relative to base address)
	};


	// Class CommonUI.CommonActivatableWidgetSwitcher
	// Inherited from UCommonAnimatedSwitcher -> UWidgetSwitcher -> UPanelWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x220 - 0x210)
	class UCommonActivatableWidgetSwitcher : public UCommonAnimatedSwitcher	
	{
	public:
		bool bClearFocusRestorationTargetOfDeactivatedWidgets; // 0x210(0x1)
		unsigned char UnknownData00_7[0xF]; // 0x211(0xF) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		FSlateBrush Background; // 0x30(0xB0)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUI.CommonBorderStyle");
			return ret;
		}

		void GetBackgroundBrush(FSlateBrush& Brush); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D097634(relative to base address)
	};


	// Class CommonUI.CommonBorder
	// Inherited from UBorder -> UContentWidget -> UPanelWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x2F0 - 0x2D0)
	class UCommonBorder : public UBorder	
	{
	public:
		UClass* Style; // 0x2D0(0x8)
		bool bReducePaddingBySafezone; // 0x2D8(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x2D9(0x3) UNKNOWN PROPERTY
		FMargin MinimumPadding; // 0x2DC(0x10)
		unsigned char UnknownData01_7[0x4]; // 0x2EC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUI.CommonBorder");
			return ret;
		}

		void SetStyle(UClass* InStyle); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D09B504(relative to base address)
	};


	// Class CommonUI.CommonButtonStyle
	// Inherited from UObject
	// Size: 0x688 (0x6B0 - 0x28)
	class UCommonButtonStyle : public UObject	
	{
	public:
		bool bSingleMaterial; // 0x28(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x29(0x7) UNKNOWN PROPERTY
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
		UClass* NormalTextStyle; // 0x5D8(0x8)
		UClass* NormalHoveredTextStyle; // 0x5E0(0x8)
		UClass* SelectedTextStyle; // 0x5E8(0x8)
		UClass* SelectedHoveredTextStyle; // 0x5F0(0x8)
		UClass* DisabledTextStyle; // 0x5F8(0x8)
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

		UCommonTextStyle GetSelectedTextStyle(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D098474(relative to base address)
		void GetSelectedPressedBrush(FSlateBrush& Brush); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D098390(relative to base address)
		UCommonTextStyle GetSelectedHoveredTextStyle(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D098354(relative to base address)
		void GetSelectedHoveredBrush(FSlateBrush& Brush); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D0982AC(relative to base address)
		void GetSelectedBaseBrush(FSlateBrush& Brush); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D0981E0(relative to base address)
		UCommonTextStyle GetNormalTextStyle(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D09815C(relative to base address)
		void GetNormalPressedBrush(FSlateBrush& Brush); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D0980B4(relative to base address)
		UCommonTextStyle GetNormalHoveredTextStyle(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D098090(relative to base address)
		void GetNormalHoveredBrush(FSlateBrush& Brush); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D097FE8(relative to base address)
		void GetNormalBaseBrush(FSlateBrush& Brush); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D097F40(relative to base address)
		void GetMaterialBrush(FSlateBrush& Brush); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D097634(relative to base address)
		UCommonTextStyle GetDisabledTextStyle(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D097BEC(relative to base address)
		void GetDisabledBrush(FSlateBrush& Brush); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D097B44(relative to base address)
		void GetCustomPadding(FMargin& OutCustomPadding); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D097A78(relative to base address)
		void GetButtonPadding(FMargin& OutButtonPadding); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D09777C(relative to base address)
	};


	// Class CommonUI.CommonButtonInternalBase
	// Inherited from UButton -> UContentWidget -> UPanelWidget -> UWidget -> UVisual -> UObject
	// Size: 0x78 (0x5E0 - 0x568)
	class UCommonButtonInternalBase : public UButton	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0x568(0x10) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnDoubleClicked; // 0x578(0x10)
		unsigned char UnknownData01_6[0x20]; // 0x588(0x20) UNKNOWN PROPERTY
		int32_t MinWidth; // 0x5A8(0x4)
		int32_t MinHeight; // 0x5AC(0x4)
		bool bButtonEnabled; // 0x5B0(0x1)
		bool bInteractionEnabled; // 0x5B1(0x1)
		unsigned char UnknownData02_7[0x2E]; // 0x5B2(0x2E) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUI.CommonButtonInternalBase");
			return ret;
		}
	};


	// Class CommonUI.CommonButtonBase
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10B8 (0x1390 - 0x2D8)
	class UCommonButtonBase : public UCommonUserWidget	
	{
	public:
		FWidgetEventField ClickEvent; // 0x2D8(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x2D9(0x3) UNKNOWN PROPERTY
		int32_t MinWidth; // 0x2DC(0x4)
		int32_t MinHeight; // 0x2E0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x2E4(0x4) UNKNOWN PROPERTY
		UClass* Style; // 0x2E8(0x8)
		bool bHideInputAction; // 0x2F0(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x2F1(0x7) UNKNOWN PROPERTY
		FSlateSound PressedSlateSoundOverride; // 0x2F8(0x18)
		FSlateSound HoveredSlateSoundOverride; // 0x310(0x18)
		FSlateSound SelectedPressedSlateSoundOverride; // 0x328(0x18)
		FSlateSound SelectedHoveredSlateSoundOverride; // 0x340(0x18)
		FSlateSound LockedPressedSlateSoundOverride; // 0x358(0x18)
		FSlateSound LockedHoveredSlateSoundOverride; // 0x370(0x18)
		bool bApplyAlphaOnDisable : 1; // 0x388:0(0x1)
		bool bLocked : 1; // 0x388:1(0x1)
		bool bSelectable : 1; // 0x388:2(0x1)
		bool bShouldSelectUponReceivingFocus : 1; // 0x388:3(0x1)
		bool bInteractableWhenSelected : 1; // 0x388:4(0x1)
		bool bToggleable : 1; // 0x388:5(0x1)
		bool bTriggerClickedAfterSelection : 1; // 0x388:6(0x1)
		bool bDisplayInputActionWhenNotInteractable : 1; // 0x388:7(0x1)
		bool bHideInputActionWithKeyboard : 1; // 0x389:0(0x1)
		bool bShouldUseFallbackDefaultInputAction : 1; // 0x389:1(0x1)
		bool bRequiresHold : 1; // 0x389:2(0x1)
		unsigned char UnknownData03_5[0x6]; // 0x38A(0x6) UNKNOWN PROPERTY
		UClass* HoldData; // 0x390(0x8)
		bool bSimulateHoverOnTouchInput; // 0x398(0x1)
		unsigned char UnknownData04_6[0x1]; // 0x399(0x1) UNKNOWN PROPERTY
		TEnumAsByte<EButtonClickMethod> ClickMethod; // 0x39A(0x1)
		TEnumAsByte<EButtonTouchMethod> TouchMethod; // 0x39B(0x1)
		TEnumAsByte<EButtonPressMethod> PressMethod; // 0x39C(0x1)
		unsigned char UnknownData05_6[0x3]; // 0x39D(0x3) UNKNOWN PROPERTY
		int32_t InputPriority; // 0x3A0(0x4)
		unsigned char UnknownData06_6[0x4]; // 0x3A4(0x4) UNKNOWN PROPERTY
		FDataTableRowHandle TriggeringInputAction; // 0x3A8(0x10)
		UInputAction* TriggeringEnhancedInputAction; // 0x3B8(0x8)
		unsigned char UnknownData07_6[0x10]; // 0x3C0(0x10) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnSelectedChangedBase; // 0x3D0(0x10)
		FMulticastInlineDelegate OnButtonBaseClicked; // 0x3E0(0x10)
		FMulticastInlineDelegate OnButtonBaseDoubleClicked; // 0x3F0(0x10)
		FMulticastInlineDelegate OnButtonBaseHovered; // 0x400(0x10)
		FMulticastInlineDelegate OnButtonBaseUnhovered; // 0x410(0x10)
		FMulticastInlineDelegate OnButtonBaseLockClicked; // 0x420(0x10)
		FMulticastInlineDelegate OnButtonBaseLockDoubleClicked; // 0x430(0x10)
		unsigned char UnknownData08_6[0x38]; // 0x440(0x38) UNKNOWN PROPERTY
		bool bIsPersistentBinding; // 0x478(0x1)
		ECommonInputMode InputModeOverride; // 0x479(0x1)
		unsigned char UnknownData09_6[0x26]; // 0x47A(0x26) UNKNOWN PROPERTY
		UMaterialInstanceDynamic* SingleMaterialStyleMID; // 0x4A0(0x8)
		unsigned char UnknownData10_6[0x8]; // 0x4A8(0x8) UNKNOWN PROPERTY
		FButtonStyle NormalStyle; // 0x4B0(0x370)
		FButtonStyle SelectedStyle; // 0x820(0x370)
		FButtonStyle DisabledStyle; // 0xB90(0x370)
		FButtonStyle LockedStyle; // 0xF00(0x370)
		bool bStopDoubleClickPropagation : 1; // 0x1270:0(0x1)
		unsigned char UnknownData11_5[0x117]; // 0x1271(0x117) UNKNOWN PROPERTY
		UCommonActionWidget* InputActionWidget; // 0x1388(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUI.CommonButtonBase");
			return ret;
		}

		void UpdateHoldData(ECommonInputType CurrentInputType); // Flags: Native|Protected, Memory Exec: 0x7FF74D09BB8C(relative to base address)
		void StopDoubleClickPropagation(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF74D09BAF8(relative to base address)
		void SetTriggeringInputAction(FDataTableRowHandle& InputActionRow); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74826AC00(relative to base address)
		void SetTriggeringEnhancedInputAction(UInputAction* InInputAction); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D09B9D0(relative to base address)
		void SetTriggeredInputAction(FDataTableRowHandle& InputActionRow); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D09B940(relative to base address)
		void SetTouchMethod(TEnumAsByte<EButtonTouchMethod> InTouchMethod); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D09B830(relative to base address)
		void SetStyle(UClass* InStyle); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF748A9FCD4(relative to base address)
		void SetShouldUseFallbackDefaultInputAction(bool bInShouldUseFallbackDefaultInputAction); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D09B46C(relative to base address)
		void SetShouldSelectUponReceivingFocus(bool bInShouldSelectUponReceivingFocus); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7493CFAB4(relative to base address)
		void SetSelectedPressedSoundOverride(USoundBase* Sound); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D09B33C(relative to base address)
		void SetSelectedInternal(bool bInSelected, bool bAllowSound, bool bBroadcast); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF74D09B230(relative to base address)
		void SetSelectedHoveredSoundOverride(USoundBase* Sound); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D09B180(relative to base address)
		void SetRequiresHold(bool bInRequiresHold); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D09B100(relative to base address)
		void SetPressMethod(TEnumAsByte<EButtonPressMethod> InPressMethod); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D09AFE4(relative to base address)
		void SetPressedSoundOverride(USoundBase* Sound); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D09B080(relative to base address)
		void SetMinDimensions(int32_t InMinWidth, int32_t InMinHeight); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF748C6C348(relative to base address)
		void SetLockedPressedSoundOverride(USoundBase* Sound); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D09AC84(relative to base address)
		void SetLockedHoveredSoundOverride(USoundBase* Sound); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D09ABD4(relative to base address)
		void SetIsToggleable(bool bInIsToggleable); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D09A8A4(relative to base address)
		void SetIsSelected(bool InSelected, bool bGiveClickFeedback); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74826B820(relative to base address)
		void SetIsSelectable(bool bInIsSelectable); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7493ED2B0(relative to base address)
		void SetIsLocked(bool bInIsLocked); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D09A7B8(relative to base address)
		void SetIsInteractionEnabled(bool bInIsInteractionEnabled); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7472A7A5C(relative to base address)
		void SetIsInteractableWhenSelected(bool bInInteractableWhenSelected); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D09A6B8(relative to base address)
		void SetIsFocusable(bool bInIsFocusable); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7492803CC(relative to base address)
		void SetInputActionProgressMaterial(FSlateBrush& InProgressMaterialBrush, FName& InProgressMaterialParam); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D09A4CC(relative to base address)
		void SetHoveredSoundOverride(USoundBase* Sound); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D09A44C(relative to base address)
		void SetHideInputAction(bool bInHideInputAction); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D09A344(relative to base address)
		void SetClickMethod(TEnumAsByte<EButtonClickMethod> InClickMethod); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D099D70(relative to base address)
		void OnTriggeringInputActionChanged(FDataTableRowHandle& NewTriggeredAction); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTriggeringEnhancedInputActionChanged(UInputAction* InInputAction); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTriggeredInputActionChanged(FDataTableRowHandle& NewTriggeredAction); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInputMethodChanged(ECommonInputType CurrentInputType); // Flags: Native|Protected, Memory Exec: 0x7FF74D0993C0(relative to base address)
		void OnCurrentTextStyleChanged(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnActionProgress(float HeldPercent); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnActionComplete(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool NativeOnHoldProgressRollback(float DeltaTime); // Flags: Native|Protected, Memory Exec: 0x7FF74D09906C(relative to base address)
		bool NativeOnHoldProgress(float DeltaTime); // Flags: Native|Protected, Memory Exec: 0x7FF74D098FD4(relative to base address)
		void NativeOnActionProgress(float HeldPercent); // Flags: Native|Protected, Memory Exec: 0x7FF74D098F50(relative to base address)
		void NativeOnActionComplete(); // Flags: Native|Protected, Memory Exec: 0x7FF74C4ED38C(relative to base address)
		bool IsPressed(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D098ED4(relative to base address)
		bool IsInteractionEnabled(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D098E04(relative to base address)
		void HoldReset(); // Flags: Native|Protected, Memory Exec: 0x7FF74D098BFC(relative to base address)
		void HandleTriggeringActionCommited(bool& bPassThrough); // Flags: Native|Protected|HasOutParms, Memory Exec: 0x7FF74D098B50(relative to base address)
		void HandleFocusReceived(); // Flags: Native|Protected, Memory Exec: 0x7FF748178B90(relative to base address)
		void HandleFocusLost(); // Flags: Native|Protected, Memory Exec: 0x7FF74D0988B4(relative to base address)
		void HandleButtonReleased(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74D0988A0(relative to base address)
		void HandleButtonPressed(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74D09888C(relative to base address)
		void HandleButtonClicked(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74D0987B4(relative to base address)
		UCommonButtonStyle GetStyle(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D0986B0(relative to base address)
		UMaterialInstanceDynamic GetSingleMaterialStyleMID(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF749B40530(relative to base address)
		bool GetShouldSelectUponReceivingFocus(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D0985EC(relative to base address)
		bool GetSelected(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7490C7F80(relative to base address)
		bool GetRequiresHold(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D0981C4(relative to base address)
		float GetRequiredHoldTime(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D0981AC(relative to base address)
		bool GetLocked(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D097E40(relative to base address)
		bool GetIsFocusable(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D097DE8(relative to base address)
		bool GetInputAction(FDataTableRowHandle& InputActionRow); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF749B289DC(relative to base address)
		UInputAction GetEnhancedInputAction(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D097C10(relative to base address)
		UClass GetCurrentTextStyleClass(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF748223E5C(relative to base address)
		UCommonTextStyle GetCurrentTextStyle(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D097A54(relative to base address)
		void GetCurrentCustomPadding(FMargin& OutCustomPadding); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D0979B4(relative to base address)
		void GetCurrentButtonPadding(FMargin& OutButtonPadding); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D097914(relative to base address)
		bool GetConvertInputActionToHold(); // Flags: Native|Protected, Memory Exec: 0x7FF74D0978EC(relative to base address)
		void DisableButtonWithReason(FText& DisabledReason); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D097398(relative to base address)
		void ClearSelection(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D0972DC(relative to base address)
		void BP_OnUnhovered(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnSelected(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnReleased(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnPressed(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnLockedChanged(bool bIsLocked); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnLockDoubleClicked(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnLockClicked(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnInputMethodChanged(ECommonInputType CurrentInputType); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnInputActionTriggered(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnHovered(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnFocusReceived(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnFocusLost(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnEnabled(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnDoubleClicked(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnDisabled(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnDeselected(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnClicked(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
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
	// Size: 0x10 (0x2E0 - 0x2D0)
	class UCommonCustomNavigation : public UBorder	
	{
	public:
		FDelegateProperty OnNavigationEvent; // 0x2D0(0xC)
		unsigned char UnknownData00_7[0x4]; // 0x2DC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUI.CommonCustomNavigation");
			return ret;
		}

		bool OnCustomNavigationEvent__DelegateSignature(EUINavigation NavigationType); // Flags: Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class CommonUI.CommonTextBlock
	// Inherited from UTextBlock -> UTextLayoutWidget -> UWidget -> UVisual -> UObject
	// Size: 0x30 (0x330 - 0x300)
	class UCommonTextBlock : public UTextBlock	
	{
	public:
		float MobileFontSizeMultiplier; // 0x300(0x4)
		bool bIsScrollingEnabled; // 0x304(0x1)
		bool bDisplayAllCaps; // 0x305(0x1)
		bool bAutoCollapseWithEmptyText; // 0x306(0x1)
		unsigned char UnknownData00_6[0x1]; // 0x307(0x1) UNKNOWN PROPERTY
		UClass* Style; // 0x308(0x8)
		UClass* ScrollStyle; // 0x310(0x8)
		unsigned char UnknownData01_7[0x10]; // 0x318(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUI.CommonTextBlock");
			return ret;
		}

		void SetWrapTextWidth(int32_t InWrapTextAt); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7494A8F10(relative to base address)
		void SetTextCase(bool bUseAllCaps); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF748BA1214(relative to base address)
		void SetStyle(UClass* InStyle); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF748223EB0(relative to base address)
		void SetScrollingEnabled(bool bInIsScrollingEnabled); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7494ADD94(relative to base address)
		void SetMobileFontSizeMultiplier(float InMobileFontSizeMultiplier); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF748E1F064(relative to base address)
		void SetMargin(FMargin& InMargin); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D09AD34(relative to base address)
		void SetLineHeightPercentage(float InLineHeightPercentage); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7494C6FBC(relative to base address)
		void SetApplyLineHeightToBottomLine(bool InApplyLineHeightToBottomLine); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D0999C0(relative to base address)
		void ResetScrollState(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D0996CC(relative to base address)
		float GetMobileFontSizeMultiplier(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D097F08(relative to base address)
		FMargin GetMargin(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D097E5C(relative to base address)
	};


	// Class CommonUI.CommonDateTimeTextBlock
	// Inherited from UCommonTextBlock -> UTextBlock -> UTextLayoutWidget -> UWidget -> UVisual -> UObject
	// Size: 0x68 (0x390 - 0x328)
	class UCommonDateTimeTextBlock : public UCommonTextBlock	
	{
	public:
		FText CustomTimespanFormat; // 0x328(0x10)
		bool bCustomTimespanLeadingZeros; // 0x338(0x1)
		unsigned char UnknownData00_7[0x57]; // 0x339(0x57) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUI.CommonDateTimeTextBlock");
			return ret;
		}

		void SetTimespanValue(FTimespan InTimespan); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D09B720(relative to base address)
		void SetDateTimeValue(FDateTime InDateTime, bool bShowAsCountdown, float InRefreshDelay); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74D099F28(relative to base address)
		void SetCountDownCompletionText(FText InCompletionText); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D099E8C(relative to base address)
		FDateTime GetDateTime(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D097B08(relative to base address)
	};


	// Class CommonUI.CommonGameViewportClient
	// Inherited from UGameViewportClient -> UScriptViewportClient -> UObject
	// Size: 0x40 (0x3E8 - 0x3A8)
	class UCommonGameViewportClient : public UGameViewportClient	
	{
	public:
		unsigned char UnknownData00_1[0x40]; // 0x3A8(0x40) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUI.CommonGameViewportClient");
			return ret;
		}
	};


	// Class CommonUI.CommonHardwareVisibilityBorder
	// Inherited from UCommonBorder -> UBorder -> UContentWidget -> UPanelWidget -> UWidget -> UVisual -> UObject
	// Size: 0x50 (0x340 - 0x2F0)
	class UCommonHardwareVisibilityBorder : public UCommonBorder	
	{
	public:
		FGameplayTagQuery VisibilityQuery; // 0x2F0(0x48)
		ESlateVisibility VisibleType; // 0x338(0x1)
		ESlateVisibility HiddenType; // 0x339(0x1)
		unsigned char UnknownData00_7[0x6]; // 0x33A(0x6) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_1[0x8]; // 0xB38(0x8) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_6[0x4]; // 0x334(0x4) UNKNOWN PROPERTY
		FMulticastInlineDelegate BP_OnLoadingStateChanged; // 0x338(0x10)
		unsigned char UnknownData01_7[0x28]; // 0x348(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUI.CommonLazyImage");
			return ret;
		}

		void SetMaterialTextureParamName(FName TextureParamName); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74949BE90(relative to base address)
		void SetBrushFromLazyTexture(TWeakObjectPtr<UTexture2D*>& LazyTexture, bool bMatchSize); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D099BEC(relative to base address)
		void SetBrushFromLazyMaterial(TWeakObjectPtr<UMaterialInterface*>& LazyMaterial); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D099B44(relative to base address)
		void SetBrushFromLazyDisplayAsset(TWeakObjectPtr<UObject*>& LazyObject, bool bMatchTextureSize); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF748A4F770(relative to base address)
		bool IsLoading(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D098E44(relative to base address)
	};


	// Class CommonUI.CommonLazyWidget
	// Inherited from UWidget -> UVisual -> UObject
	// Size: 0x138 (0x290 - 0x158)
	class UCommonLazyWidget : public UWidget	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x158(0x8) UNKNOWN PROPERTY
		FSlateBrush LoadingBackgroundBrush; // 0x160(0xB0)
		UUserWidget* Content; // 0x210(0x8)
		unsigned char UnknownData01_6[0x28]; // 0x218(0x28) UNKNOWN PROPERTY
		FMulticastInlineDelegate BP_OnLoadingStateChanged; // 0x240(0x10)
		unsigned char UnknownData02_7[0x40]; // 0x250(0x40) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUI.CommonLazyWidget");
			return ret;
		}

		void SetLazyContent(TWeakObjectPtr<UClass*> SoftWidget); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D09A924(relative to base address)
		bool IsLoading(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D098E74(relative to base address)
		UUserWidget GetContent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D0978D4(relative to base address)
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

		void SetEntrySpacing(float InEntrySpacing); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D09A2BC(relative to base address)
	};


	// Class CommonUI.LoadGuardSlot
	// Inherited from UPanelSlot -> UVisual -> UObject
	// Size: 0x28 (0x60 - 0x38)
	class ULoadGuardSlot : public UPanelSlot	
	{
	public:
		FMargin Padding; // 0x38(0x10)
		TEnumAsByte<EHorizontalAlignment> HorizontalAlignment; // 0x48(0x1)
		TEnumAsByte<EVerticalAlignment> VerticalAlignment; // 0x49(0x1)
		unsigned char UnknownData00_7[0x16]; // 0x4A(0x16) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUI.LoadGuardSlot");
			return ret;
		}

		void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D09BA50(relative to base address)
		void SetPadding(FMargin InPadding); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D09AEC8(relative to base address)
		void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D09A3CC(relative to base address)
	};


	// Class CommonUI.CommonLoadGuard
	// Inherited from UContentWidget -> UPanelWidget -> UWidget -> UVisual -> UObject
	// Size: 0x130 (0x2A0 - 0x170)
	class UCommonLoadGuard : public UContentWidget	
	{
	public:
		FSlateBrush LoadingBackgroundBrush; // 0x170(0xB0)
		TEnumAsByte<EHorizontalAlignment> ThrobberAlignment; // 0x220(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x221(0x3) UNKNOWN PROPERTY
		FMargin ThrobberPadding; // 0x224(0x10)
		unsigned char UnknownData01_6[0x4]; // 0x234(0x4) UNKNOWN PROPERTY
		FText LoadingText; // 0x238(0x10)
		UClass* TextStyle; // 0x248(0x8)
		FMulticastInlineDelegate BP_OnLoadingStateChanged; // 0x250(0x10)
		FSoftObjectPath SpinnerMaterialPath; // 0x260(0x18)
		unsigned char UnknownData02_7[0x28]; // 0x278(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUI.CommonLoadGuard");
			return ret;
		}

		void SetLoadingText(FText& InLoadingText); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D09AB24(relative to base address)
		void SetIsLoading(bool bInIsLoading); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D09A738(relative to base address)
		void OnAssetLoaded__DelegateSignature(UObject* Object); // Flags: Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool IsLoading(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D098EA4(relative to base address)
		void BP_GuardAndLoadAsset(TWeakObjectPtr<UObject*>& InLazyAsset, FDelegateProperty& OnAssetLoaded); // Flags: Final|Native|Private|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D096F70(relative to base address)
	};


	// Class CommonUI.CommonNumericTextBlock
	// Inherited from UCommonTextBlock -> UTextBlock -> UTextLayoutWidget -> UWidget -> UVisual -> UObject
	// Size: 0xA8 (0x3D0 - 0x328)
	class UCommonNumericTextBlock : public UCommonTextBlock	
	{
	public:
		FMulticastInlineDelegate OnInterpolationStartedEvent; // 0x328(0x10)
		FMulticastInlineDelegate OnInterpolationUpdatedEvent; // 0x338(0x10)
		FMulticastInlineDelegate OnOutroEvent; // 0x348(0x10)
		FMulticastInlineDelegate OnInterpolationEndedEvent; // 0x358(0x10)
		float CurrentNumericValue; // 0x368(0x4)
		ECommonNumericType NumericType; // 0x36C(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x36D(0x3) UNKNOWN PROPERTY
		FCommonNumberFormattingOptions FormattingSpecification; // 0x370(0x14)
		float EaseOutInterpolationExponent; // 0x384(0x4)
		float InterpolationUpdateInterval; // 0x388(0x4)
		float PostInterpolationShrinkDuration; // 0x38C(0x4)
		bool PerformSizeInterpolation; // 0x390(0x1)
		bool IsPercentage; // 0x391(0x1)
		unsigned char UnknownData01_7[0x36]; // 0x392(0x36) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUI.CommonNumericTextBlock");
			return ret;
		}

		void SetNumericType(ECommonNumericType InNumericType); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D09AE44(relative to base address)
		void SetCurrentValue(float NewValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74821DEE8(relative to base address)
		void OnOutro__DelegateSignature(UCommonNumericTextBlock* NumericTextBlock); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInterpolationUpdated__DelegateSignature(UCommonNumericTextBlock* NumericTextBlock, float LastValue, float NewValue); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInterpolationStarted__DelegateSignature(UCommonNumericTextBlock* NumericTextBlock); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInterpolationEnded__DelegateSignature(UCommonNumericTextBlock* NumericTextBlock, bool HadCompleted); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool IsInterpolatingNumericValue(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D098E28(relative to base address)
		void InterpolateToValue(float TargetValue, float MaximumInterpolationDuration, float MinimumChangeRate, float OutroOffset); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D098C94(relative to base address)
		float GetTargetValue(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D0986D4(relative to base address)
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

		void OnReleaseToPool(); // Flags: Native|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF74D099444(relative to base address)
		void OnAcquireFromPool(); // Flags: Native|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF74D099118(relative to base address)
	};


	// Class CommonUI.CommonRichTextBlock
	// Inherited from URichTextBlock -> UTextLayoutWidget -> UWidget -> UVisual -> UObject
	// Size: 0x30 (0x7D0 - 0x7A0)
	class UCommonRichTextBlock : public URichTextBlock	
	{
	public:
		ERichTextInlineIconDisplayMode InlineIconDisplayMode; // 0x7A0(0x1)
		bool bTintInlineIcon; // 0x7A1(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x7A2(0x2) UNKNOWN PROPERTY
		float MobileTextBlockScale; // 0x7A4(0x4)
		UClass* DefaultTextStyleOverrideClass; // 0x7A8(0x8)
		UClass* ScrollStyle; // 0x7B0(0x8)
		bool bIsScrollingEnabled; // 0x7B8(0x1)
		bool bDisplayAllCaps; // 0x7B9(0x1)
		bool bAutoCollapseWithEmptyText; // 0x7BA(0x1)
		unsigned char UnknownData01_7[0x15]; // 0x7BB(0x15) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUI.CommonRichTextBlock");
			return ret;
		}

		void SetScrollingEnabled(bool bInIsScrollingEnabled); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF749ACB2E8(relative to base address)
	};


	// Class CommonUI.CommonRotator
	// Inherited from UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x70 (0x1400 - 0x1390)
	class UCommonRotator : public UCommonButtonBase	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0x1390(0x10) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnRotatedWithDirection; // 0x13A0(0x10)
		FMulticastInlineDelegate OnRotated; // 0x13B0(0x10)
		unsigned char UnknownData01_6[0x18]; // 0x13C0(0x18) UNKNOWN PROPERTY
		UCommonTextBlock* MyText; // 0x13D8(0x8)
		unsigned char UnknownData02_7[0x18]; // 0x13E0(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUI.CommonRotator");
			return ret;
		}

		void ShiftTextRight(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D09BAE4(relative to base address)
		void ShiftTextLeft(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D09BAD0(relative to base address)
		void SetSelectedItem(int32_t InValue); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF748DE2664(relative to base address)
		void PopulateTextLabels(TArray<FText> Labels); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74812B220(relative to base address)
		FText GetSelectedText(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D098438(relative to base address)
		int32_t GetSelectedIndex(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D098378(relative to base address)
		void BP_OnOptionsPopulated(int32_t Count); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnOptionSelected(int32_t Index); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class CommonUI.CommonTabListWidgetBase
	// Inherited from UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x178 (0x450 - 0x2D8)
	class UCommonTabListWidgetBase : public UCommonUserWidget	
	{
	public:
		FMulticastInlineDelegate OnTabSelected; // 0x2D8(0x10)
		FMulticastInlineDelegate OnTabButtonCreation; // 0x2E8(0x10)
		FMulticastInlineDelegate OnTabButtonRemoval; // 0x2F8(0x10)
		FMulticastInlineDelegate OnTabListRebuilt; // 0x308(0x10)
		FDataTableRowHandle NextTabInputActionData; // 0x318(0x10)
		FDataTableRowHandle PreviousTabInputActionData; // 0x328(0x10)
		UInputAction* NextTabEnhancedInputAction; // 0x338(0x8)
		UInputAction* PreviousTabEnhancedInputAction; // 0x340(0x8)
		bool bAutoListenForInput; // 0x348(0x1)
		bool bDeferRebuildingTabList; // 0x349(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x34A(0x2) UNKNOWN PROPERTY
		TWeakObjectPtr<UCommonAnimatedSwitcher*> LinkedSwitcher; // 0x34C(0x8)
		unsigned char UnknownData01_6[0x4]; // 0x354(0x4) UNKNOWN PROPERTY
		UCommonButtonGroupBase* TabButtonGroup; // 0x358(0x8)
		unsigned char UnknownData02_6[0x8]; // 0x360(0x8) UNKNOWN PROPERTY
		TMap<FName, FCommonRegisteredTabInfo> RegisteredTabsByID; // 0x368(0x50)
		FUserWidgetPool TabButtonWidgetPool; // 0x3B8(0x88)
		unsigned char UnknownData03_7[0x10]; // 0x440(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUI.CommonTabListWidgetBase");
			return ret;
		}

		void SetTabVisibility(FName TabNameID, ESlateVisibility NewVisibility); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D09B65C(relative to base address)
		void SetTabInteractionEnabled(FName TabNameID, bool bEnable); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D09B598(relative to base address)
		void SetTabEnabled(FName TabNameID, bool bEnable); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74826C560(relative to base address)
		void SetListeningForInput(bool bShouldListen); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D09AAA0(relative to base address)
		void SetLinkedSwitcher(UCommonAnimatedSwitcher* CommonSwitcher); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF748010A68(relative to base address)
		bool SelectTabByID(FName TabNameID, bool bSuppressClickFeedback); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74826B160(relative to base address)
		bool RemoveTab(FName TabNameID); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D0994E8(relative to base address)
		void RemoveAllTabs(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF747FD377C(relative to base address)
		bool RegisterTab(FName TabNameID, UClass* ButtonWidgetType, UWidget* ContentWidget, int32_t TabIndex); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7472A6A54(relative to base address)
		void OnTabSelected__DelegateSignature(FName TabID); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTabListRebuilt__DelegateSignature(); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTabButtonRemoval__DelegateSignature(FName TabID, UCommonButtonBase* TabButton); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTabButtonCreation__DelegateSignature(FName TabID, UCommonButtonBase* TabButton); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleTabRemoval(FName TabNameID, UCommonButtonBase* TabButton); // Flags: Native|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF74D098A88(relative to base address)
		void HandleTabCreation(FName TabNameID, UCommonButtonBase* TabButton); // Flags: Native|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7487E2784(relative to base address)
		void HandleTabButtonSelected(UCommonButtonBase* SelectedTabButton, int32_t ButtonIndex); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74826BAC4(relative to base address)
		void HandlePreviousTabInputAction(bool& bPassThrough); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF74D098A0C(relative to base address)
		void HandlePreLinkedSwitcherChanged_BP(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandlePostLinkedSwitcherChanged_BP(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleNextTabInputAction(bool& bPassThrough); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF74D0988CC(relative to base address)
		FName GetTabIdAtIndex(int32_t Index); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7498A30E0(relative to base address)
		int32_t GetTabCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7492E2DC4(relative to base address)
		UCommonButtonBase GetTabButtonBaseByID(FName TabNameID); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74826C910(relative to base address)
		FName GetSelectedTabId(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74826C4B8(relative to base address)
		UCommonAnimatedSwitcher GetLinkedSwitcher(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D097E1C(relative to base address)
		FName GetActiveTab(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7494786C4(relative to base address)
		void DisableTabWithReason(FName TabNameID, FText& Reason); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D097434(relative to base address)
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
		unsigned char UnknownData00_6[0x7]; // 0x91(0x7) UNKNOWN PROPERTY
		FVector2D ShadowOffset; // 0x98(0x10)
		FLinearColor ShadowColor; // 0xA8(0x10)
		FMargin Margin; // 0xB8(0x10)
		unsigned char UnknownData01_6[0x8]; // 0xC8(0x8) UNKNOWN PROPERTY
		FSlateBrush StrikeBrush; // 0xD0(0xB0)
		float LineHeightPercentage; // 0x180(0x4)
		bool ApplyLineHeightToBottomLine; // 0x184(0x1)
		unsigned char UnknownData02_7[0xB]; // 0x185(0xB) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUI.CommonTextStyle");
			return ret;
		}

		void GetStrikeBrush(FSlateBrush& OutStrikeBrush); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D098608(relative to base address)
		void GetShadowOffset(FVector2D& OutShadowOffset); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D098560(relative to base address)
		void GetShadowColor(FLinearColor& OutColor); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D098498(relative to base address)
		void GetMargin(FMargin& OutMargin); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D097E78(relative to base address)
		float GetLineHeightPercentage(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D097E04(relative to base address)
		void GetFont(FSlateFontInfo& OutFont); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D097D2C(relative to base address)
		void GetColor(FLinearColor& OutColor); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D09780C(relative to base address)
		bool GetApplyLineHeightToBottomLine(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D09761C(relative to base address)
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
		unsigned char UnknownData00_7[0x3]; // 0x3D(0x3) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_1[0x8]; // 0xB88(0x8) UNKNOWN PROPERTY

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
		TWeakObjectPtr<UClass*> TemplateTextStyle; // 0x28(0x20)
		TWeakObjectPtr<UClass*> TemplateButtonStyle; // 0x48(0x20)
		TWeakObjectPtr<UClass*> TemplateBorderStyle; // 0x68(0x20)
		unsigned char UnknownData00_7[0x8]; // 0x88(0x8) UNKNOWN PROPERTY

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

		UWidget FindParentWidgetOfType(UWidget* StartingWidget, UClass* Type); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF749568EB0(relative to base address)
	};


	// Class CommonUI.CommonUIRichTextData
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UCommonUIRichTextData : public UObject	
	{
	public:
		UDataTable* InlineIconSet; // 0x28(0x8)

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
		unsigned char UnknownData00_6[0x7]; // 0x29(0x7) UNKNOWN PROPERTY
		TWeakObjectPtr<UObject*> DefaultImageResourceObject; // 0x30(0x20)
		TWeakObjectPtr<UMaterialInterface*> DefaultThrobberMaterial; // 0x50(0x20)
		TWeakObjectPtr<UClass*> DefaultRichTextDataClass; // 0x70(0x20)
		TArray<FGameplayTag> PlatformTraits; // 0x90(0x10)
		unsigned char UnknownData01_6[0x28]; // 0xA0(0x28) UNKNOWN PROPERTY
		UObject* DefaultImageResourceObjectInstance; // 0xC8(0x8)
		UMaterialInterface* DefaultThrobberMaterialInstance; // 0xD0(0x8)
		unsigned char UnknownData02_6[0x8]; // 0xD8(0x8) UNKNOWN PROPERTY
		FSlateBrush DefaultThrobberBrush; // 0xE0(0xB0)
		UCommonUIRichTextData* RichTextDataInstance; // 0x190(0x8)
		unsigned char UnknownData03_7[0x8]; // 0x198(0x8) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_1[0x10]; // 0x30(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUI.CommonUISubsystemBase");
			return ret;
		}

		FSlateBrush GetInputActionButtonIcon(FDataTableRowHandle& InputActionRowHandle, ECommonInputType InputType, FName& GamepadName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7498551A0(relative to base address)
		FSlateBrush GetEnhancedInputActionButtonIcon(UInputAction* InputAction, ULocalPlayer* LocalPlayer); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D097C28(relative to base address)
	};


	// Class CommonUI.CommonInputMetadata
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UCommonInputMetadata : public UObject	
	{
	public:
		int32_t NavBarPriority; // 0x28(0x4)
		bool bIsGenericInputAction; // 0x2C(0x1)
		unsigned char UnknownData00_7[0x3]; // 0x2D(0x3) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_3[0x8]; // 0x30(0x8) UNKNOWN PROPERTY
		UCommonInputMetadata* EnhancedInputMetadata; // 0x38(0x8)
		TMap<UInputAction*, UCommonInputMetadata*> PerActionEnhancedInputMetadata; // 0x40(0x50)

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
		unsigned char UnknownData00_1[0x58]; // 0x30(0x58) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUI.CommonUIVisibilitySubsystem");
			return ret;
		}
	};


	// Class CommonUI.CommonVideoPlayer
	// Inherited from UWidget -> UVisual -> UObject
	// Size: 0x148 (0x2A0 - 0x158)
	class UCommonVideoPlayer : public UWidget	
	{
	public:
		UMediaSource* Video; // 0x158(0x8)
		bool bMatchSize; // 0x160(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x161(0x7) UNKNOWN PROPERTY
		UMediaPlayer* MediaPlayer; // 0x168(0x8)
		UMediaTexture* MediaTexture; // 0x170(0x8)
		UMaterial* VideoMaterial; // 0x178(0x8)
		UMediaSoundComponent* SoundComponent; // 0x180(0x8)
		unsigned char UnknownData01_6[0x8]; // 0x188(0x8) UNKNOWN PROPERTY
		FSlateBrush VideoBrush; // 0x190(0xB0)
		unsigned char UnknownData02_7[0x60]; // 0x240(0x60) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUI.CommonVideoPlayer");
			return ret;
		}
	};


	// Class CommonUI.CommonVisibilitySwitcher
	// Inherited from UOverlay -> UPanelWidget -> UWidget -> UVisual -> UObject
	// Size: 0x28 (0x1A8 - 0x180)
	class UCommonVisibilitySwitcher : public UOverlay	
	{
	public:
		ESlateVisibility ShownVisibility; // 0x180(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x181(0x3) UNKNOWN PROPERTY
		int32_t ActiveWidgetIndex; // 0x184(0x4)
		bool bAutoActivateSlot; // 0x188(0x1)
		bool bActivateFirstSlotOnAdding; // 0x189(0x1)
		unsigned char UnknownData01_7[0x1E]; // 0x18A(0x1E) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUI.CommonVisibilitySwitcher");
			return ret;
		}

		void SetActiveWidgetIndex(int32_t Index); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7472A3AA8(relative to base address)
		void SetActiveWidget(UWidget* Widget); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF748FEF5CC(relative to base address)
		bool IsCurrentlySwitching(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D098DEC(relative to base address)
		void IncrementActiveWidgetIndex(bool bAllowWrapping); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D098C14(relative to base address)
		int32_t GetActiveWidgetIndex(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74925C8FC(relative to base address)
		UWidget GetActiveWidget(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D0975D8(relative to base address)
		void DecrementActiveWidgetIndex(bool bAllowWrapping); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D097318(relative to base address)
		void DeactivateVisibleSlot(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D097304(relative to base address)
		void ActivateVisibleSlot(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D096E00(relative to base address)
	};


	// Class CommonUI.CommonVisibilitySwitcherSlot
	// Inherited from UOverlaySlot -> UPanelSlot -> UVisual -> UObject
	// Size: 0x10 (0x68 - 0x58)
	class UCommonVisibilitySwitcherSlot : public UOverlaySlot	
	{
	public:
		unsigned char UnknownData00_1[0x10]; // 0x58(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUI.CommonVisibilitySwitcherSlot");
			return ret;
		}
	};


	// Class CommonUI.UCommonVisibilityWidgetBase
	// Inherited from UCommonBorder -> UBorder -> UContentWidget -> UPanelWidget -> UWidget -> UVisual -> UObject
	// Size: 0x60 (0x350 - 0x2F0)
	class UUCommonVisibilityWidgetBase : public UCommonBorder	
	{
	public:
		TMap<FName, bool> VisibilityControls; // 0x2F0(0x50)
		bool bShowForGamepad; // 0x340(0x1)
		bool bShowForMouseAndKeyboard; // 0x341(0x1)
		bool bShowForTouch; // 0x342(0x1)
		ESlateVisibility VisibleType; // 0x343(0x1)
		ESlateVisibility HiddenType; // 0x344(0x1)
		unsigned char UnknownData00_7[0xB]; // 0x345(0xB) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUI.UCommonVisibilityWidgetBase");
			return ret;
		}

		TArray GetRegisteredPlatforms(); // Flags: Final|Native|Static|Protected, Memory Exec: 0x7FF74D098180(relative to base address)
	};


	// Class CommonUI.CommonVisualAttachment
	// Inherited from USizeBox -> UContentWidget -> UPanelWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x1C8 - 0x1A8)
	class UCommonVisualAttachment : public USizeBox	
	{
	public:
		FVector2D ContentAnchor; // 0x1A8(0x10)
		unsigned char UnknownData00_7[0x10]; // 0x1B8(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUI.CommonVisualAttachment");
			return ret;
		}
	};


	// Class CommonUI.CommonWidgetCarousel
	// Inherited from UPanelWidget -> UWidget -> UVisual -> UObject
	// Size: 0x48 (0x1B8 - 0x170)
	class UCommonWidgetCarousel : public UPanelWidget	
	{
	public:
		int32_t ActiveWidgetIndex; // 0x170(0x4)
		float MoveSpeed; // 0x174(0x4)
		FMulticastInlineDelegate OnCurrentPageIndexChanged; // 0x178(0x10)
		unsigned char UnknownData00_7[0x30]; // 0x188(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUI.CommonWidgetCarousel");
			return ret;
		}

		void SetMoveSpeed(float InMoveSpeed); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D09ADC4(relative to base address)
		void SetActiveWidgetIndex(int32_t Index); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D09993C(relative to base address)
		void SetActiveWidget(UWidget* Widget); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D0998B8(relative to base address)
		void PreviousPage(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D099458(relative to base address)
		void NextPage(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D099104(relative to base address)
		UWidget GetWidgetAtIndex(int32_t Index); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D09870C(relative to base address)
		float GetMoveSpeed(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D097F20(relative to base address)
		int32_t GetActiveWidgetIndex(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D0975FC(relative to base address)
		void EndAutoScrolling(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D097510(relative to base address)
		void BeginAutoScrolling(float ScrollInterval); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D097090(relative to base address)
	};


	// Class CommonUI.CommonWidgetCarouselNavBar
	// Inherited from UWidget -> UVisual -> UObject
	// Size: 0x48 (0x1A0 - 0x158)
	class UCommonWidgetCarouselNavBar : public UWidget	
	{
	public:
		UClass* ButtonWidgetType; // 0x158(0x8)
		FMargin ButtonPadding; // 0x160(0x10)
		unsigned char UnknownData00_6[0x10]; // 0x170(0x10) UNKNOWN PROPERTY
		UCommonWidgetCarousel* LinkedCarousel; // 0x180(0x8)
		UCommonButtonGroupBase* ButtonGroup; // 0x188(0x8)
		TArray<UCommonButtonBase*> Buttons; // 0x190(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUI.CommonWidgetCarouselNavBar");
			return ret;
		}

		void SetLinkedCarousel(UCommonWidgetCarousel* CommonCarousel); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D09AA20(relative to base address)
		void HandlePageChanged(UCommonWidgetCarousel* CommonCarousel, int32_t PageIndex); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74D098948(relative to base address)
		void HandleButtonClicked(UCommonButtonBase* AssociatedButton, int32_t ButtonIndex); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74D0987C8(relative to base address)
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

		void RemoveWidget(UWidget* InWidget); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D0995F0(relative to base address)
		void RemoveAll(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7494B08D8(relative to base address)
		void AddWidgets(TArray<UWidget*>& Widgets); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74D096E14(relative to base address)
		void AddWidget(UWidget* InWidget); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7499D1EF4(relative to base address)
	};


	// Class CommonUI.CommonButtonGroupBase
	// Inherited from UCommonWidgetGroupBase -> UObject
	// Size: 0x138 (0x160 - 0x28)
	class UCommonButtonGroupBase : public UCommonWidgetGroupBase	
	{
	public:
		FMulticastInlineDelegate OnSelectedButtonBaseChanged; // 0x28(0x10)
		unsigned char UnknownData00_6[0x18]; // 0x38(0x18) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnHoveredButtonBaseChanged; // 0x50(0x10)
		unsigned char UnknownData01_6[0x18]; // 0x60(0x18) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnButtonBaseClicked; // 0x78(0x10)
		unsigned char UnknownData02_6[0x18]; // 0x88(0x18) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnButtonBaseDoubleClicked; // 0xA0(0x10)
		unsigned char UnknownData03_6[0x18]; // 0xB0(0x18) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnSelectionCleared; // 0xC8(0x10)
		unsigned char UnknownData04_6[0x18]; // 0xD8(0x18) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnButtonBaseLockClicked; // 0xF0(0x10)
		unsigned char UnknownData05_6[0x18]; // 0x100(0x18) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnButtonBaseLockDoubleClicked; // 0x118(0x10)
		unsigned char UnknownData06_6[0x18]; // 0x128(0x18) UNKNOWN PROPERTY
		bool bSelectionRequired; // 0x140(0x1)
		unsigned char UnknownData07_7[0x1F]; // 0x141(0x1F) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUI.CommonButtonGroupBase");
			return ret;
		}

		void SetSelectionRequired(bool bRequireSelection); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D09B3EC(relative to base address)
		void SelectPreviousButton(bool bAllowWrap); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D099838(relative to base address)
		void SelectNextButton(bool bAllowWrap); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D0997B8(relative to base address)
		void SelectButtonAtIndex(int32_t ButtonIndex, bool bAllowSound); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D0996F4(relative to base address)
		void OnSelectionStateChangedBase(UCommonButtonBase* BaseButton, bool bIsSelected); // Flags: Native|Protected, Memory Exec: 0x7FF74918A818(relative to base address)
		void OnHandleButtonBaseLockDoubleClicked(UCommonButtonBase* BaseButton); // Flags: Native|Protected, Memory Exec: 0x7FF74D09933C(relative to base address)
		void OnHandleButtonBaseLockClicked(UCommonButtonBase* BaseButton); // Flags: Native|Protected, Memory Exec: 0x7FF74D0992B8(relative to base address)
		void OnHandleButtonBaseDoubleClicked(UCommonButtonBase* BaseButton); // Flags: Native|Protected, Memory Exec: 0x7FF74D099234(relative to base address)
		void OnHandleButtonBaseClicked(UCommonButtonBase* BaseButton); // Flags: Native|Protected, Memory Exec: 0x7FF74C349130(relative to base address)
		void OnButtonBaseUnhovered(UCommonButtonBase* BaseButton); // Flags: Native|Protected, Memory Exec: 0x7FF74D0991B0(relative to base address)
		void OnButtonBaseHovered(UCommonButtonBase* BaseButton); // Flags: Native|Protected, Memory Exec: 0x7FF74D09912C(relative to base address)
		bool HasAnyButtons(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D098BE0(relative to base address)
		int32_t GetSelectedButtonIndex(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2B8550(relative to base address)
		UCommonButtonBase GetSelectedButtonBase(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D098288(relative to base address)
		int32_t GetHoveredButtonIndex(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D097DD0(relative to base address)
		int32_t GetButtonCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D097764(relative to base address)
		UCommonButtonBase GetButtonBaseAtIndex(int32_t Index); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D0976D8(relative to base address)
		int32_t FindButtonIndex(UCommonButtonBase* ButtonToFind); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D097524(relative to base address)
		void DeselectAll(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF749FC2330(relative to base address)
	};


	// Class CommonUI.CommonBoundActionBar
	// Inherited from UDynamicEntryBoxBase -> UWidget -> UVisual -> UObject
	// Size: 0x30 (0x268 - 0x238)
	class UCommonBoundActionBar : public UDynamicEntryBoxBase	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x238(0x8) UNKNOWN PROPERTY
		UClass* ActionButtonClass; // 0x240(0x8)
		bool bDisplayOwningPlayerActionsOnly; // 0x248(0x1)
		bool bIgnoreDuplicateActions; // 0x249(0x1)
		unsigned char UnknownData01_6[0x6]; // 0x24A(0x6) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnActionBarUpdated; // 0x250(0x10)
		unsigned char UnknownData02_7[0x8]; // 0x260(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUI.CommonBoundActionBar");
			return ret;
		}

		void SetDisplayOwningPlayerActionsOnly(bool bShouldOnlyDisplayOwningPlayerActions); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF748ECA5D8(relative to base address)
	};


	// Class CommonUI.CommonBoundActionButton
	// Inherited from UCommonButtonBase -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x13B0 - 0x1390)
	class UCommonBoundActionButton : public UCommonButtonBase	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x1390(0x8) UNKNOWN PROPERTY
		UCommonTextBlock* Text_ActionName; // 0x1398(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x13A0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUI.CommonBoundActionButton");
			return ret;
		}

		void OnUpdateInputAction(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
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
		unsigned char UnknownData00_1[0x140]; // 0x30(0x140) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_6[0x3]; // 0x29(0x3) UNKNOWN PROPERTY
		int32_t UIActionProcessingPriority; // 0x2C(0x4)
		TArray<FUIInputAction> InputActions; // 0x30(0x10)
		TArray<FUIInputAction> ActionOverrides; // 0x40(0x10)
		FCommonAnalogCursorSettings AnalogCursorSettings; // 0x50(0x2C)
		unsigned char UnknownData01_7[0x4]; // 0x7C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUI.CommonUIInputSettings");
			return ret;
		}
	};


	// Class CommonUI.CommonActivatableWidgetContainerBase
	// Inherited from UWidget -> UVisual -> UObject
	// Size: 0x128 (0x280 - 0x158)
	class UCommonActivatableWidgetContainerBase : public UWidget	
	{
	public:
		unsigned char UnknownData00_3[0x18]; // 0x158(0x18) UNKNOWN PROPERTY
		ECommonSwitcherTransition TransitionType; // 0x170(0x1)
		ETransitionCurve TransitionCurveType; // 0x171(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x172(0x2) UNKNOWN PROPERTY
		float TransitionDuration; // 0x174(0x4)
		ECommonSwitcherTransitionFallbackStrategy TransitionFallbackStrategy; // 0x178(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x179(0x7) UNKNOWN PROPERTY
		TArray<UCommonActivatableWidget*> WidgetList; // 0x180(0x10)
		UCommonActivatableWidget* DisplayedWidget; // 0x190(0x8)
		FUserWidgetPool GeneratedWidgetsPool; // 0x198(0x88)
		unsigned char UnknownData03_7[0x60]; // 0x220(0x60) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUI.CommonActivatableWidgetContainerBase");
			return ret;
		}

		void SetTransitionDuration(float duration); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D09B8B0(relative to base address)
		void RemoveWidget(UCommonActivatableWidget* WidgetToRemove); // Flags: Final|Native|Private|BlueprintCallable, Memory Exec: 0x7FF74D099574(relative to base address)
		float GetTransitionDuration(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D0986F4(relative to base address)
		UCommonActivatableWidget GetActiveWidget(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D0975B4(relative to base address)
		void ClearWidgets(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D0972F0(relative to base address)
		UCommonActivatableWidget BP_AddWidget(UClass* ActivatableWidgetClass); // Flags: Final|Native|Private|BlueprintCallable, Memory Exec: 0x7FF74D096EB0(relative to base address)
	};


	// Class CommonUI.CommonActivatableWidgetStack
	// Inherited from UCommonActivatableWidgetContainerBase -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x290 - 0x280)
	class UCommonActivatableWidgetStack : public UCommonActivatableWidgetContainerBase	
	{
	public:
		UClass* RootContentWidgetClass; // 0x280(0x8)
		UCommonActivatableWidget* RootContentWidget; // 0x288(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUI.CommonActivatableWidgetStack");
			return ret;
		}
	};


	// Class CommonUI.CommonActivatableWidgetQueue
	// Inherited from UCommonActivatableWidgetContainerBase -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x280 - 0x280)
	class UCommonActivatableWidgetQueue : public UCommonActivatableWidgetContainerBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CommonUI.CommonActivatableWidgetQueue");
			return ret;
		}
	};

}
