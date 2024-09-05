#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: UMG
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class UMG.Visual
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UVisual : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.Visual");
			return ret;
		}
	};


	// Class UMG.Widget
	// Inherited from UVisual -> UObject
	// Size: 0x130 (0x158 - 0x28)
	class UWidget : public UVisual	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		UPanelSlot* Slot; // 0x30(0x8)
		FDelegateProperty bIsEnabledDelegate; // 0x38(0xC)
		FDelegateProperty ToolTipTextDelegate; // 0x44(0xC)
		FText ToolTipText; // 0x50(0x10)
		UWidget* ToolTipWidget; // 0x60(0x8)
		FDelegateProperty ToolTipWidgetDelegate; // 0x68(0xC)
		FDelegateProperty VisibilityDelegate; // 0x74(0xC)
		FWidgetTransform RenderTransform; // 0x80(0x38)
		FVector2D RenderTransformPivot; // 0xB8(0x10)
		EFlowDirectionPreference FlowDirectionPreference; // 0xC8(0x1)
		bool bIsVariable : 1; // 0xC9:0(0x1)
		bool bCreatedByConstructionScript : 1; // 0xC9:1(0x1)
		bool bIsEnabled : 1; // 0xC9:2(0x1)
		bool bOverride_Cursor : 1; // 0xC9:3(0x1)
		bool bIsVolatile : 1; // 0xC9:4(0x1)
		TEnumAsByte<EMouseCursor> Cursor; // 0xCA(0x1)
		EWidgetClipping Clipping; // 0xCB(0x1)
		ESlateVisibility Visibility; // 0xCC(0x1)
		EWidgetPixelSnapping PixelSnapping; // 0xCD(0x1)
		unsigned char UnknownData01_6[0x2]; // 0xCE(0x2) UNKNOWN PROPERTY
		float RenderOpacity; // 0xD0(0x4)
		unsigned char UnknownData02_6[0x4]; // 0xD4(0x4) UNKNOWN PROPERTY
		USlateAccessibleWidgetData* AccessibleWidgetData; // 0xD8(0x8)
		UWidgetNavigation* Navigation; // 0xE0(0x8)
		unsigned char UnknownData03_6[0x40]; // 0xE8(0x40) UNKNOWN PROPERTY
		TArray<UPropertyBinding*> NativeBindings; // 0x128(0x10)
		unsigned char UnknownData04_7[0x20]; // 0x138(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.Widget");
			return ret;
		}

		void SetVisibility(ESlateVisibility InVisibility); // Flags: RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74771B990(relative to base address)
		void SetUserFocus(APlayerController* PlayerController); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BEEB4(relative to base address)
		void SetToolTipText(FText& InToolTipText); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C2BED80(relative to base address)
		void SetToolTip(UWidget* Widget); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BED00(relative to base address)
		void SetRenderTranslation(FVector2D Translation); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7472A5830(relative to base address)
		void SetRenderTransformPivot(FVector2D Pivot); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74C2BD25C(relative to base address)
		void SetRenderTransformAngle(float Angle); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7494D4854(relative to base address)
		void SetRenderTransform(FWidgetTransform InTransform); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74915EAA4(relative to base address)
		void SetRenderShear(FVector2D Shear); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7494DBE30(relative to base address)
		void SetRenderScale(FVector2D Scale); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74916DB6C(relative to base address)
		void SetRenderOpacity(float InOpacity); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF748412CCC(relative to base address)
		void SetNavigationRuleExplicit(EUINavigation Direction, UWidget* InWidget); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BCD80(relative to base address)
		void SetNavigationRuleCustomBoundary(EUINavigation Direction, FDelegateProperty InCustomDelegate); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BCCA8(relative to base address)
		void SetNavigationRuleCustom(EUINavigation Direction, FDelegateProperty InCustomDelegate); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BCBD0(relative to base address)
		void SetNavigationRuleBase(EUINavigation Direction, EUINavigationRule Rule); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BCB0C(relative to base address)
		void SetNavigationRule(EUINavigation Direction, EUINavigationRule Rule, FName WidgetToFocus); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BC9E8(relative to base address)
		void SetKeyboardFocus(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BC0C8(relative to base address)
		void SetIsEnabled(bool bInIsEnabled); // Flags: RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF747A94694(relative to base address)
		void SetFocus(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74729EE64(relative to base address)
		void SetCursor(TEnumAsByte<EMouseCursor> InCursor); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BA0E4(relative to base address)
		void SetClipping(EWidgetClipping InClipping); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF749B41B78(relative to base address)
		void SetAllNavigationRules(EUINavigationRule Rule, FName WidgetToFocus); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2B9738(relative to base address)
		void ResetCursor(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2B95E0(relative to base address)
		void RemoveFromParent(); // Flags: RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF748333524(relative to base address)
		FEventReply OnReply__DelegateSignature(); // Flags: Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		FEventReply OnPointerEvent__DelegateSignature(FGeometry MyGeometry, FPointerEvent& MouseEvent); // Flags: Public|Delegate|HasOutParms, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void K2_RemoveFieldValueChangedDelegate(FFieldNotificationId FieldId, FDelegateProperty Delegate); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2B8E44(relative to base address)
		void K2_BroadcastFieldValueChanged(FFieldNotificationId FieldId); // Flags: Final|RequiredAPI|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF74C2B8D08(relative to base address)
		void K2_AddFieldValueChangedDelegate(FFieldNotificationId FieldId, FDelegateProperty Delegate); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2B8B20(relative to base address)
		bool IsVisible(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF749426C44(relative to base address)
		bool IsRendered(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2B8AA0(relative to base address)
		bool IsInViewport(); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2B8A48(relative to base address)
		bool IsHovered(); // Flags: RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7495F94FC(relative to base address)
		void InvalidateLayoutAndVolatility(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF749544EC8(relative to base address)
		bool HasUserFocusedDescendants(APlayerController* PlayerController); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2B8998(relative to base address)
		bool HasUserFocus(APlayerController* PlayerController); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2B8908(relative to base address)
		bool HasMouseCaptureByUser(int32_t UserIndex, int32_t PointerIndex); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2B8810(relative to base address)
		bool HasMouseCapture(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74896285C(relative to base address)
		bool HasKeyboardFocus(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2B87EC(relative to base address)
		bool HasFocusedDescendants(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2B87C8(relative to base address)
		bool HasAnyUserFocus(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF749398414(relative to base address)
		UWidget GetWidget__DelegateSignature(); // Flags: Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		ESlateVisibility GetVisibility(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7493B7230(relative to base address)
		FGeometry GetTickSpaceGeometry(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2B7D08(relative to base address)
		FText GetText__DelegateSignature(); // Flags: Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		ESlateVisibility GetSlateVisibility__DelegateSignature(); // Flags: Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		FSlateColor GetSlateColor__DelegateSignature(); // Flags: Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		FSlateBrush GetSlateBrush__DelegateSignature(); // Flags: Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		float GetRenderTransformAngle(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C0DFE90(relative to base address)
		float GetRenderOpacity(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2B83B0(relative to base address)
		UPanelWidget GetParent(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7499B6EC0(relative to base address)
		FGeometry GetPaintSpaceGeometry(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74959CDAC(relative to base address)
		APlayerController GetOwningPlayer(); // Flags: RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF748C4D310(relative to base address)
		ULocalPlayer GetOwningLocalPlayer(); // Flags: RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2B8354(relative to base address)
		TEnumAsByte GetMouseCursor__DelegateSignature(); // Flags: Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		FLinearColor GetLinearColor__DelegateSignature(); // Flags: Public|Delegate|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool GetIsEnabled(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF747E2A290(relative to base address)
		int32_t GetInt32__DelegateSignature(); // Flags: Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UGameInstance GetGameInstance(); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2B801C(relative to base address)
		float GetFloat__DelegateSignature(); // Flags: Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		FVector2D GetDesiredSize(); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF749228190(relative to base address)
		EWidgetClipping GetClipping(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2B7E08(relative to base address)
		ECheckBoxState GetCheckBoxState__DelegateSignature(); // Flags: Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		FGeometry GetCachedGeometry(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2B7D08(relative to base address)
		bool GetBool__DelegateSignature(); // Flags: Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		FText GetAccessibleText(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2B7C6C(relative to base address)
		FText GetAccessibleSummaryText(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2B7BF8(relative to base address)
		UWidget GenerateWidgetForString__DelegateSignature(FString Item); // Flags: Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UWidget GenerateWidgetForObject__DelegateSignature(UObject* Item); // Flags: Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ForceVolatile(bool bForce); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2B7B78(relative to base address)
		void ForceLayoutPrepass(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2B7B64(relative to base address)
	};


	// Class UMG.ListViewBase
	// Inherited from UWidget -> UVisual -> UObject
	// Size: 0x128 (0x280 - 0x158)
	class UListViewBase : public UWidget	
	{
	public:
		FMulticastInlineDelegate BP_OnEntryGenerated; // 0x158(0x10)
		unsigned char UnknownData00_6[0x10]; // 0x168(0x10) UNKNOWN PROPERTY
		UClass* EntryWidgetClass; // 0x178(0x8)
		float WheelScrollMultiplier; // 0x180(0x4)
		bool bEnableScrollAnimation; // 0x184(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x185(0x3) UNKNOWN PROPERTY
		float ScrollingAnimationInterpolationSpeed; // 0x188(0x4)
		bool bInEnableTouchAnimatedScrolling; // 0x18C(0x1)
		bool AllowOverscroll; // 0x18D(0x1)
		bool bEnableRightClickScrolling; // 0x18E(0x1)
		bool bEnableTouchScrolling; // 0x18F(0x1)
		bool bIsPointerScrollingEnabled; // 0x190(0x1)
		bool bIsGamepadScrollingEnabled; // 0x191(0x1)
		bool bEnableFixedLineOffset; // 0x192(0x1)
		unsigned char UnknownData02_6[0x1]; // 0x193(0x1) UNKNOWN PROPERTY
		float FixedLineScrollOffset; // 0x194(0x4)
		bool bAllowDragging; // 0x198(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x199(0x7) UNKNOWN PROPERTY
		FMulticastInlineDelegate BP_OnEntryReleased; // 0x1A0(0x10)
		FUserWidgetPool EntryWidgetPool; // 0x1B0(0x88)
		unsigned char UnknownData04_7[0x48]; // 0x238(0x48) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.ListViewBase");
			return ret;
		}

		void SetWheelScrollMultiplier(float NewWheelScrollMultiplier); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF749B1AFCC(relative to base address)
		void SetScrollOffset(float InScrollOffset); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BD66C(relative to base address)
		void SetScrollbarVisibility(ESlateVisibility InVisibility); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7485DC678(relative to base address)
		void SetIsPointerScrollingEnabled(bool bInIsPointerScrollingEnabled); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BBC5C(relative to base address)
		void SetIsGamepadScrollingEnabled(bool bInIsGamepadScrollingEnabled); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BBAD4(relative to base address)
		void ScrollToTop(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2B9724(relative to base address)
		void ScrollToBottom(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2B96E8(relative to base address)
		void RequestRefresh(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2B95A4(relative to base address)
		void RegenerateAllEntries(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2B92C4(relative to base address)
		float GetScrollOffset(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF749FBC600(relative to base address)
		TArray GetDisplayedEntryWidgets(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74876B93C(relative to base address)
		void EndInertialScrolling(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2B7A4C(relative to base address)
	};


	// Class UMG.ListView
	// Inherited from UListViewBase -> UWidget -> UVisual -> UObject
	// Size: 0x8B0 (0xB30 - 0x280)
	class UListView : public UListViewBase	
	{
	public:
		unsigned char UnknownData00_3[0xF0]; // 0x280(0xF0) UNKNOWN PROPERTY
		FTableViewStyle WidgetStyle; // 0x370(0xC0)
		FScrollBarStyle ScrollBarStyle; // 0x430(0x650)
		TEnumAsByte<EOrientation> orientation; // 0xA80(0x1)
		TEnumAsByte<ESelectionMode> SelectionMode; // 0xA81(0x1)
		EConsumeMouseWheel ConsumeMouseWheel; // 0xA82(0x1)
		bool bClearSelectionOnClick; // 0xA83(0x1)
		bool bIsFocusable; // 0xA84(0x1)
		bool bReturnFocusToSelection; // 0xA85(0x1)
		EScrollIntoViewAlignment ScrollIntoViewAlignment; // 0xA86(0x1)
		unsigned char UnknownData01_6[0x1]; // 0xA87(0x1) UNKNOWN PROPERTY
		TArray<UObject*> ListItems; // 0xA88(0x10)
		unsigned char UnknownData02_6[0x10]; // 0xA98(0x10) UNKNOWN PROPERTY
		float HorizontalEntrySpacing; // 0xAA8(0x4)
		float VerticalEntrySpacing; // 0xAAC(0x4)
		FMargin ScrollBarPadding; // 0xAB0(0x10)
		FMulticastInlineDelegate BP_OnEntryInitialized; // 0xAC0(0x10)
		FMulticastInlineDelegate BP_OnItemClicked; // 0xAD0(0x10)
		FMulticastInlineDelegate BP_OnItemDoubleClicked; // 0xAE0(0x10)
		FMulticastInlineDelegate BP_OnItemIsHoveredChanged; // 0xAF0(0x10)
		FMulticastInlineDelegate BP_OnItemSelectionChanged; // 0xB00(0x10)
		FMulticastInlineDelegate BP_OnItemScrolledIntoView; // 0xB10(0x10)
		FMulticastInlineDelegate BP_OnListViewScrolled; // 0xB20(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.ListView");
			return ret;
		}

		void SetSelectionMode(TEnumAsByte<ESelectionMode> SelectionMode); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BD9A0(relative to base address)
		void SetSelectedIndex(int32_t Index); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF749ACB7A8(relative to base address)
		void SetScrollIntoViewAlignment(EScrollIntoViewAlignment NewScrollIntoViewAlignment); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BD5E8(relative to base address)
		void SetScrollBarPadding(FMargin& InScrollBarPadding); // Flags: Final|RequiredAPI|Native|Public|HasOutParms, Memory Exec: 0x7FF74C2BD558(relative to base address)
		void ScrollIndexIntoView(int32_t Index); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2B9668(relative to base address)
		void RemoveItem(UObject* Item); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2B9364(relative to base address)
		void OnListItemOuterEndPlayed(AActor* ItemOuter, TEnumAsByte<EEndPlayReason> EndPlayReason); // Flags: Final|RequiredAPI|Native|Protected, Memory Exec: 0x7FF74C2B916C(relative to base address)
		void OnListItemEndPlayed(AActor* Item, TEnumAsByte<EEndPlayReason> EndPlayReason); // Flags: Final|RequiredAPI|Native|Protected, Memory Exec: 0x7FF74C2B90AC(relative to base address)
		void NavigateToIndex(int32_t Index); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2B902C(relative to base address)
		bool IsRefreshPending(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2B8A6C(relative to base address)
		float GetVerticalEntrySpacing(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2B8568(relative to base address)
		FMargin GetScrollBarPadding(); // Flags: Final|Native|Public|Const, Memory Exec: 0x7FF74C2B83F0(relative to base address)
		int32_t GetNumItems(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7496A3764(relative to base address)
		TArray GetListItems(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF749C99FE0(relative to base address)
		UObject GetItemAt(int32_t Index); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2B8164(relative to base address)
		int32_t GetIndexForItem(UObject* Item); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF749A8E1A4(relative to base address)
		float GetHorizontalEntrySpacing(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2B810C(relative to base address)
		void ClearListItems(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7499E8380(relative to base address)
		void BP_SetSelectedItem(UObject* Item); // Flags: Final|RequiredAPI|Native|Private|BlueprintCallable, Memory Exec: 0x7FF7480810E0(relative to base address)
		void BP_SetListItems(TArray<UObject*>& InListItems); // Flags: Final|RequiredAPI|Native|Private|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7497074C4(relative to base address)
		void BP_SetItemSelection(UObject* Item, bool bSelected); // Flags: Final|RequiredAPI|Native|Private|BlueprintCallable, Memory Exec: 0x7FF74C2B77FC(relative to base address)
		void BP_ScrollItemIntoView(UObject* Item); // Flags: Final|RequiredAPI|Native|Private|BlueprintCallable, Memory Exec: 0x7FF748081030(relative to base address)
		void BP_NavigateToItem(UObject* Item); // Flags: Final|RequiredAPI|Native|Private|BlueprintCallable, Memory Exec: 0x7FF74C2B7770(relative to base address)
		bool BP_IsItemVisible(UObject* Item); // Flags: Final|RequiredAPI|Native|Private|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2B76E4(relative to base address)
		bool BP_GetSelectedItems(TArray<UObject*>& Items); // Flags: Final|RequiredAPI|Native|Private|HasOutParms|BlueprintCallable|Const, Memory Exec: 0x7FF74C2B7630(relative to base address)
		UObject BP_GetSelectedItem(); // Flags: Final|RequiredAPI|Native|Private|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF749FBB8B0(relative to base address)
		int32_t BP_GetNumItemsSelected(); // Flags: Final|RequiredAPI|Native|Private|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2B7604(relative to base address)
		void BP_ClearSelection(); // Flags: Final|RequiredAPI|Native|Private|BlueprintCallable, Memory Exec: 0x7FF749FBC650(relative to base address)
		void BP_CancelScrollIntoView(); // Flags: Final|RequiredAPI|Native|Private|BlueprintCallable, Memory Exec: 0x7FF74C2B75D0(relative to base address)
		void AddItem(UObject* Item); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7488276B4(relative to base address)
	};


	// Class UMG.ListViewDesignerPreviewItem
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UListViewDesignerPreviewItem : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.ListViewDesignerPreviewItem");
			return ret;
		}
	};


	// Class UMG.SlateAccessibleWidgetData
	// Inherited from UObject
	// Size: 0x48 (0x70 - 0x28)
	class USlateAccessibleWidgetData : public UObject	
	{
	public:
		bool bCanChildrenBeAccessible; // 0x28(0x1)
		ESlateAccessibleBehavior AccessibleBehavior; // 0x29(0x1)
		ESlateAccessibleBehavior AccessibleSummaryBehavior; // 0x2A(0x1)
		unsigned char UnknownData00_6[0x5]; // 0x2B(0x5) UNKNOWN PROPERTY
		FText AccessibleText; // 0x30(0x10)
		FDelegateProperty AccessibleTextDelegate; // 0x40(0xC)
		unsigned char UnknownData01_6[0x4]; // 0x4C(0x4) UNKNOWN PROPERTY
		FText AccessibleSummaryText; // 0x50(0x10)
		FDelegateProperty AccessibleSummaryTextDelegate; // 0x60(0xC)
		unsigned char UnknownData02_7[0x4]; // 0x6C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.SlateAccessibleWidgetData");
			return ret;
		}

		FText GetText__DelegateSignature(); // Flags: Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class UMG.UserWidgetBlueprint
	// Inherited from UBlueprint -> UBlueprintCore -> UObject
	// Size: 0x0 (0xA8 - 0xA8)
	class UUserWidgetBlueprint : public UBlueprint	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.UserWidgetBlueprint");
			return ret;
		}
	};


	// Class UMG.UserWidget
	// Inherited from UWidget -> UVisual -> UObject
	// Size: 0x158 (0x2B0 - 0x158)
	class UUserWidget : public UWidget	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x158(0x8) UNKNOWN PROPERTY
		FLinearColor ColorAndOpacity; // 0x160(0x10)
		FDelegateProperty ColorAndOpacityDelegate; // 0x170(0xC)
		FSlateColor ForegroundColor; // 0x17C(0x14)
		FDelegateProperty ForegroundColorDelegate; // 0x190(0xC)
		unsigned char UnknownData01_6[0x4]; // 0x19C(0x4) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnVisibilityChanged; // 0x1A0(0x10)
		unsigned char UnknownData02_6[0x30]; // 0x1B0(0x30) UNKNOWN PROPERTY
		FMargin Padding; // 0x1E0(0x10)
		int32_t Priority; // 0x1F0(0x4)
		bool bIsFocusable : 1; // 0x1F4:0(0x1)
		bool bStopAction : 1; // 0x1F4:1(0x1)
		unsigned char UnknownData03_5[0x3]; // 0x1F5(0x3) UNKNOWN PROPERTY
		TArray<FQueuedWidgetAnimationTransition> QueuedWidgetAnimationTransitions; // 0x1F8(0x10)
		TArray<UUMGSequencePlayer*> ActiveSequencePlayers; // 0x208(0x10)
		UUMGSequenceTickManager* AnimationTickManager; // 0x218(0x8)
		TArray<UUMGSequencePlayer*> StoppedSequencePlayers; // 0x220(0x10)
		TArray<FNamedSlotBinding> NamedSlotBindings; // 0x230(0x10)
		TArray<UUserWidgetExtension*> Extensions; // 0x240(0x10)
		UWidgetTree* WidgetTree; // 0x250(0x8)
		bool bHasScriptImplementedTick : 1; // 0x258:0(0x1)
		bool bHasScriptImplementedPaint : 1; // 0x258:1(0x1)
		unsigned char UnknownData04_5[0x17]; // 0x259(0x17) UNKNOWN PROPERTY
		EWidgetTickFrequency TickFrequency; // 0x270(0x1)
		unsigned char UnknownData05_6[0x3]; // 0x271(0x3) UNKNOWN PROPERTY
		FWidgetChild DesiredFocusWidget; // 0x274(0xC)
		UInputComponent* InputComponent; // 0x280(0x8)
		TArray<FAnimationEventBinding> AnimationCallbacks; // 0x288(0x10)
		unsigned char UnknownData06_7[0x18]; // 0x298(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.UserWidget");
			return ret;
		}

		void UnregisterInputComponent(); // Flags: Final|RequiredAPI|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF74C2D874C(relative to base address)
		void UnbindFromAnimationStarted(UWidgetAnimation* Animation, FDelegateProperty Delegate); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF749AC91D4(relative to base address)
		void UnbindFromAnimationFinished(UWidgetAnimation* Animation, FDelegateProperty Delegate); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF748E774F0(relative to base address)
		void UnbindAllFromAnimationStarted(UWidgetAnimation* Animation); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2D8570(relative to base address)
		void UnbindAllFromAnimationFinished(UWidgetAnimation* Animation); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7496B7CD0(relative to base address)
		void Tick(FGeometry MyGeometry, float InDeltaTime); // Flags: RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void StopListeningForInputAction(FName ActionName, TEnumAsByte<EInputEvent> EventType); // Flags: Final|RequiredAPI|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF74C2D7F10(relative to base address)
		void StopListeningForAllInputActions(); // Flags: Final|RequiredAPI|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF74C2D7EFC(relative to base address)
		void StopAnimationsAndLatentActions(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7494DF428(relative to base address)
		void StopAnimation(UWidgetAnimation* InAnimation); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7474A98A8(relative to base address)
		void StopAllAnimations(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7482ACE70(relative to base address)
		void SetPositionInViewport(FVector2D Position, bool bRemoveDPIScale); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74C2D7380(relative to base address)
		void SetPlaybackSpeed(UWidgetAnimation* InAnimation, float PlaybackSpeed); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2D72AC(relative to base address)
		void SetPadding(FMargin InPadding); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7480FEDD0(relative to base address)
		void SetOwningPlayer(APlayerController* LocalPlayerController); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2D6D90(relative to base address)
		void SetNumLoopsToPlay(UWidgetAnimation* InAnimation, int32_t NumLoopsToPlay); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2D6CB4(relative to base address)
		void SetInputActionPriority(int32_t NewPriority); // Flags: Final|RequiredAPI|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF74959F234(relative to base address)
		void SetInputActionBlocking(bool bShouldBlock); // Flags: Final|RequiredAPI|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF74C2D6530(relative to base address)
		void SetForegroundColor(FSlateColor InForegroundColor); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2D5F30(relative to base address)
		void SetDesiredSizeInViewport(FVector2D Size); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74C2D5C50(relative to base address)
		void SetColorAndOpacity(FLinearColor InColorAndOpacity); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF749BC7914(relative to base address)
		void SetAnimationCurrentTime(UWidgetAnimation* InAnimation, float InTime); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable, Memory Exec: 0x7FF749977B54(relative to base address)
		void SetAnchorsInViewport(FAnchors Anchors); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2D575C(relative to base address)
		void SetAlignmentInViewport(FVector2D Alignment); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74C2D5644(relative to base address)
		void ReverseAnimation(UWidgetAnimation* InAnimation); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2D4DAC(relative to base address)
		void RemoveFromViewport(); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable, Memory Exec: 0x7FF748333524(relative to base address)
		void RemoveExtensions(UClass* InExtensionType); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2D4CA8(relative to base address)
		void RemoveExtension(UUserWidgetExtension* InExtension); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2D4BD0(relative to base address)
		void RegisterInputComponent(); // Flags: Final|RequiredAPI|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF74C2D44C0(relative to base address)
		void QueueStopAnimation(UWidgetAnimation* InAnimation); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2D43DC(relative to base address)
		void QueueStopAllAnimations(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2D43C8(relative to base address)
		void QueuePlayAnimationTimeRange(UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32_t NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode> PlayMode, float PlaybackSpeed, bool bRestoreState); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2D40C8(relative to base address)
		void QueuePlayAnimationReverse(UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2D3F24(relative to base address)
		void QueuePlayAnimationForward(UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2D3D80(relative to base address)
		void QueuePlayAnimation(UWidgetAnimation* InAnimation, float StartAtTime, int32_t NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode> PlayMode, float PlaybackSpeed, bool bRestoreState); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2D39E8(relative to base address)
		float QueuePauseAnimation(UWidgetAnimation* InAnimation); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2D386C(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PlaySound(USoundBase* SoundToPlay); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2D2ED8(relative to base address)
		UUMGSequencePlayer PlayAnimationTimeRange(UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32_t NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode> PlayMode, float PlaybackSpeed, bool bRestoreState); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2D2CCC(relative to base address)
		UUMGSequencePlayer PlayAnimationReverse(UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7474A8460(relative to base address)
		UUMGSequencePlayer PlayAnimationForward(UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7474A996C(relative to base address)
		UUMGSequencePlayer PlayAnimation(UWidgetAnimation* InAnimation, float StartAtTime, int32_t NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode> PlayMode, float PlaybackSpeed, bool bRestoreState); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7482A8578(relative to base address)
		float PauseAnimation(UWidgetAnimation* InAnimation); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7499B3DC0(relative to base address)
		FEventReply OnTouchStarted(FGeometry MyGeometry, FPointerEvent& InTouchEvent); // Flags: RequiredAPI|BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		FEventReply OnTouchMoved(FGeometry MyGeometry, FPointerEvent& InTouchEvent); // Flags: RequiredAPI|BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		FEventReply OnTouchGesture(FGeometry MyGeometry, FPointerEvent& GestureEvent); // Flags: RequiredAPI|BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		FEventReply OnTouchForceChanged(FGeometry MyGeometry, FPointerEvent& InTouchEvent); // Flags: RequiredAPI|BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		FEventReply OnTouchEnded(FGeometry MyGeometry, FPointerEvent& InTouchEvent); // Flags: RequiredAPI|BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRemovedFromFocusPath(FFocusEvent InFocusEvent); // Flags: RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		FEventReply OnPreviewMouseButtonDown(FGeometry MyGeometry, FPointerEvent& MouseEvent); // Flags: RequiredAPI|BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		FEventReply OnPreviewKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent); // Flags: RequiredAPI|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPaint(FPaintContext& Context); // Flags: RequiredAPI|BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		FEventReply OnMouseWheel(FGeometry MyGeometry, FPointerEvent& MouseEvent); // Flags: RequiredAPI|BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		FEventReply OnMouseMove(FGeometry MyGeometry, FPointerEvent& MouseEvent); // Flags: RequiredAPI|BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnMouseLeave(FPointerEvent& MouseEvent); // Flags: RequiredAPI|BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnMouseEnter(FGeometry MyGeometry, FPointerEvent& MouseEvent); // Flags: RequiredAPI|BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnMouseCaptureLost(); // Flags: RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		FEventReply OnMouseButtonUp(FGeometry MyGeometry, FPointerEvent& MouseEvent); // Flags: RequiredAPI|BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		FEventReply OnMouseButtonDown(FGeometry MyGeometry, FPointerEvent& MouseEvent); // Flags: RequiredAPI|BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		FEventReply OnMouseButtonDoubleClick(FGeometry InMyGeometry, FPointerEvent& InMouseEvent); // Flags: RequiredAPI|BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		FEventReply OnMotionDetected(FGeometry MyGeometry, FMotionEvent InMotionEvent); // Flags: RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent); // Flags: RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent); // Flags: RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		FEventReply OnKeyChar(FGeometry MyGeometry, FCharacterEvent InCharacterEvent); // Flags: RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInitialized(); // Flags: RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		FEventReply OnFocusReceived(FGeometry MyGeometry, FFocusEvent InFocusEvent); // Flags: RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnFocusLost(FFocusEvent InFocusEvent); // Flags: RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool OnDrop(FGeometry MyGeometry, FPointerEvent PointerEvent, UDragDropOperation* Operation); // Flags: RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool OnDragOver(FGeometry MyGeometry, FPointerEvent PointerEvent, UDragDropOperation* Operation); // Flags: RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnDragLeave(FPointerEvent PointerEvent, UDragDropOperation* Operation); // Flags: RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnDragEnter(FGeometry MyGeometry, FPointerEvent PointerEvent, UDragDropOperation* Operation); // Flags: RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnDragDetected(FGeometry MyGeometry, FPointerEvent& PointerEvent, UDragDropOperation* Operation); // Flags: RequiredAPI|BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnDragCancelled(FPointerEvent& PointerEvent, UDragDropOperation* Operation); // Flags: RequiredAPI|BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnAnimationStarted(UWidgetAnimation* Animation); // Flags: RequiredAPI|BlueprintCosmetic|Native|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF74C2D2C48(relative to base address)
		void OnAnimationFinished(UWidgetAnimation* Animation); // Flags: RequiredAPI|BlueprintCosmetic|Native|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF74C2D2BC4(relative to base address)
		FEventReply OnAnalogValueChanged(FGeometry MyGeometry, FAnalogInputEvent InAnalogInputEvent); // Flags: RequiredAPI|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnAddedToFocusPath(FFocusEvent InFocusEvent); // Flags: RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ListenForInputAction(FName ActionName, TEnumAsByte<EInputEvent> EventType, bool bConsume, FDelegateProperty Callback); // Flags: Final|RequiredAPI|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF74C2D23A0(relative to base address)
		bool IsPlayingAnimation(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF748C329DC(relative to base address)
		bool IsListeningForInputAction(FName ActionName); // Flags: Final|RequiredAPI|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2D2130(relative to base address)
		bool IsInteractable(); // Flags: RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool IsAnyAnimationPlaying(); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF748C329DC(relative to base address)
		bool IsAnimationPlayingForward(UWidgetAnimation* InAnimation); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2D1FFC(relative to base address)
		bool IsAnimationPlaying(UWidgetAnimation* InAnimation); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF749C9818C(relative to base address)
		APawn GetOwningPlayerPawn(); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2D1D10(relative to base address)
		APlayerCameraManager GetOwningPlayerCameraManager(); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7488BAE04(relative to base address)
		bool GetIsVisible(); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2B8A48(relative to base address)
		TArray GetExtensions(UClass* ExtensionType); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2D1380(relative to base address)
		UUserWidgetExtension GetExtension(UClass* ExtensionType); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74893DAEC(relative to base address)
		float GetAnimationCurrentTime(UWidgetAnimation* InAnimation); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74970F0B0(relative to base address)
		FAnchors GetAnchorsInViewport(); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2D1230(relative to base address)
		FVector2D GetAlignmentInViewport(); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2D0A38(relative to base address)
		void FlushAnimations(); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2D08F8(relative to base address)
		void Destruct(); // Flags: RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Construct(); // Flags: RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CancelLatentActions(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2CDCAC(relative to base address)
		void BindToAnimationStarted(UWidgetAnimation* Animation, FDelegateProperty Delegate); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF748076F1C(relative to base address)
		void BindToAnimationFinished(UWidgetAnimation* Animation, FDelegateProperty Delegate); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7480770BC(relative to base address)
		void BindToAnimationEvent(UWidgetAnimation* Animation, FDelegateProperty Delegate, EWidgetAnimationEvent AnimationEvent, FName UserTag); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF749766980(relative to base address)
		void AddToViewport(int32_t ZOrder); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2CDC10(relative to base address)
		bool AddToPlayerScreen(int32_t ZOrder); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2CDB84(relative to base address)
		UUserWidgetExtension AddExtension(UClass* InExtensionType); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2CDAE0(relative to base address)
	};


	// Class UMG.UserWidgetExtension
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UUserWidgetExtension : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.UserWidgetExtension");
			return ret;
		}
	};


	// Class UMG.WidgetBlueprintGeneratedClassExtension
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UWidgetBlueprintGeneratedClassExtension : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.WidgetBlueprintGeneratedClassExtension");
			return ret;
		}
	};


	// Class UMG.WidgetFieldNotificationExtension
	// Inherited from UUserWidgetExtension -> UObject
	// Size: 0x18 (0x40 - 0x28)
	class UWidgetFieldNotificationExtension : public UUserWidgetExtension	
	{
	public:
		unsigned char UnknownData00_1[0x18]; // 0x28(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.WidgetFieldNotificationExtension");
			return ret;
		}
	};


	// Class UMG.WidgetNavigation
	// Inherited from UObject
	// Size: 0xA8 (0xD0 - 0x28)
	class UWidgetNavigation : public UObject	
	{
	public:
		FWidgetNavigationData Up; // 0x28(0x1C)
		FWidgetNavigationData Down; // 0x44(0x1C)
		FWidgetNavigationData Left; // 0x60(0x1C)
		FWidgetNavigationData Right; // 0x7C(0x1C)
		FWidgetNavigationData Next; // 0x98(0x1C)
		FWidgetNavigationData Previous; // 0xB4(0x1C)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.WidgetNavigation");
			return ret;
		}
	};


	// Class UMG.MovieScene2DTransformPropertySystem
	// Inherited from UMovieScenePropertySystem -> UMovieSceneEntitySystem -> UObject
	// Size: 0x0 (0x58 - 0x58)
	class UMovieScene2DTransformPropertySystem : public UMovieScenePropertySystem	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.MovieScene2DTransformPropertySystem");
			return ret;
		}
	};


	// Class UMG.MovieScene2DTransformSection
	// Inherited from UMovieSceneSection -> UMovieSceneSignedObject -> UObject
	// Size: 0x780 (0x870 - 0xF0)
	class UMovieScene2DTransformSection : public UMovieSceneSection	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0xF0(0x8) UNKNOWN PROPERTY
		FMovieScene2DTransformMask TransformMask; // 0xF8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xFC(0x4) UNKNOWN PROPERTY
		FMovieSceneFloatChannel Translation; // 0x100(0x220)
		FMovieSceneFloatChannel Rotation; // 0x320(0x110)
		FMovieSceneFloatChannel Scale; // 0x430(0x220)
		FMovieSceneFloatChannel Shear; // 0x650(0x220)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.MovieScene2DTransformSection");
			return ret;
		}
	};


	// Class UMG.MovieScene2DTransformTrack
	// Inherited from UMovieScenePropertyTrack -> UMovieSceneNameableTrack -> UMovieSceneTrack -> UMovieSceneSignedObject -> UObject
	// Size: 0x0 (0xC0 - 0xC0)
	class UMovieScene2DTransformTrack : public UMovieScenePropertyTrack	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.MovieScene2DTransformTrack");
			return ret;
		}
	};


	// Class UMG.MovieSceneMarginPropertySystem
	// Inherited from UMovieScenePropertySystem -> UMovieSceneEntitySystem -> UObject
	// Size: 0x0 (0x58 - 0x58)
	class UMovieSceneMarginPropertySystem : public UMovieScenePropertySystem	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.MovieSceneMarginPropertySystem");
			return ret;
		}
	};


	// Class UMG.MovieSceneMarginSection
	// Inherited from UMovieSceneSection -> UMovieSceneSignedObject -> UObject
	// Size: 0x448 (0x538 - 0xF0)
	class UMovieSceneMarginSection : public UMovieSceneSection	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0xF0(0x8) UNKNOWN PROPERTY
		FMovieSceneFloatChannel TopCurve; // 0xF8(0x110)
		FMovieSceneFloatChannel LeftCurve; // 0x208(0x110)
		FMovieSceneFloatChannel RightCurve; // 0x318(0x110)
		FMovieSceneFloatChannel BottomCurve; // 0x428(0x110)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.MovieSceneMarginSection");
			return ret;
		}
	};


	// Class UMG.MovieSceneMarginTrack
	// Inherited from UMovieScenePropertyTrack -> UMovieSceneNameableTrack -> UMovieSceneTrack -> UMovieSceneSignedObject -> UObject
	// Size: 0x0 (0xC0 - 0xC0)
	class UMovieSceneMarginTrack : public UMovieScenePropertyTrack	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.MovieSceneMarginTrack");
			return ret;
		}
	};


	// Class UMG.MovieSceneWidgetMaterialSystem
	// Inherited from UMovieSceneEntitySystem -> UObject
	// Size: 0x168 (0x1A8 - 0x40)
	class UMovieSceneWidgetMaterialSystem : public UMovieSceneEntitySystem	
	{
	public:
		unsigned char UnknownData00_1[0x168]; // 0x40(0x168) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.MovieSceneWidgetMaterialSystem");
			return ret;
		}
	};


	// Class UMG.MovieSceneWidgetMaterialTrack
	// Inherited from UMovieSceneMaterialTrack -> UMovieSceneNameableTrack -> UMovieSceneTrack -> UMovieSceneSignedObject -> UObject
	// Size: 0x28 (0xD8 - 0xB0)
	class UMovieSceneWidgetMaterialTrack : public UMovieSceneMaterialTrack	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0xB0(0x10) UNKNOWN PROPERTY
		TArray<FName> BrushPropertyNamePath; // 0xC0(0x10)
		FName TrackName; // 0xD0(0x4)
		unsigned char UnknownData01_7[0x4]; // 0xD4(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.MovieSceneWidgetMaterialTrack");
			return ret;
		}
	};


	// Class UMG.UMGSequencePlayer
	// Inherited from UObject
	// Size: 0x298 (0x2C0 - 0x28)
	class UUMGSequencePlayer : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x1E8]; // 0x28(0x1E8) UNKNOWN PROPERTY
		UWidgetAnimation* Animation; // 0x210(0x8)
		unsigned char UnknownData01_6[0x8]; // 0x218(0x8) UNKNOWN PROPERTY
		FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance; // 0x220(0x20)
		unsigned char UnknownData02_7[0x80]; // 0x240(0x80) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.UMGSequencePlayer");
			return ret;
		}

		void SetUserTag(FName InUserTag); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C29760C(relative to base address)
		FName GetUserTag(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C294B58(relative to base address)
	};


	// Class UMG.UMGSequenceTickManager
	// Inherited from UObject
	// Size: 0x98 (0xC0 - 0x28)
	class UUMGSequenceTickManager : public UObject	
	{
	public:
		TMap<TWeakObjectPtr, FSequenceTickManagerWidgetData> WeakUserWidgetData; // 0x28(0x50)
		UMovieSceneEntitySystemLinker* Linker; // 0x78(0x8)
		unsigned char UnknownData00_7[0x40]; // 0x80(0x40) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.UMGSequenceTickManager");
			return ret;
		}
	};


	// Class UMG.WidgetAnimation
	// Inherited from UMovieSceneSequence -> UMovieSceneSignedObject -> UObject
	// Size: 0x30 (0x98 - 0x68)
	class UWidgetAnimation : public UMovieSceneSequence	
	{
	public:
		UMovieScene* MovieScene; // 0x68(0x8)
		TArray<FWidgetAnimationBinding> AnimationBindings; // 0x70(0x10)
		bool bLegacyFinishOnStop; // 0x80(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x81(0x7) UNKNOWN PROPERTY
		FString DisplayLabel; // 0x88(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.WidgetAnimation");
			return ret;
		}

		void UnbindFromAnimationStarted(UUserWidget* Widget, FDelegateProperty Delegate); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C29855C(relative to base address)
		void UnbindFromAnimationFinished(UUserWidget* Widget, FDelegateProperty Delegate); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF748E775CC(relative to base address)
		void UnbindAllFromAnimationStarted(UUserWidget* Widget); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2984E0(relative to base address)
		void UnbindAllFromAnimationFinished(UUserWidget* Widget); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C298464(relative to base address)
		float GetStartTime(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF749B222F0(relative to base address)
		float GetEndTime(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7474A983C(relative to base address)
		void BindToAnimationStarted(UUserWidget* Widget, FDelegateProperty Delegate); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C293728(relative to base address)
		void BindToAnimationFinished(UUserWidget* Widget, FDelegateProperty Delegate); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF748077198(relative to base address)
	};


	// Class UMG.WidgetAnimationDelegateBinding
	// Inherited from UDynamicBlueprintBinding -> UObject
	// Size: 0x10 (0x38 - 0x28)
	class UWidgetAnimationDelegateBinding : public UDynamicBlueprintBinding	
	{
	public:
		TArray<FBlueprintWidgetAnimationDelegateBinding> WidgetAnimationDelegateBindings; // 0x28(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.WidgetAnimationDelegateBinding");
			return ret;
		}
	};


	// Class UMG.WidgetAnimationPlayCallbackProxy
	// Inherited from UObject
	// Size: 0x18 (0x40 - 0x28)
	class UWidgetAnimationPlayCallbackProxy : public UObject	
	{
	public:
		FMulticastInlineDelegate Finished; // 0x28(0x10)
		unsigned char UnknownData00_7[0x8]; // 0x38(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.WidgetAnimationPlayCallbackProxy");
			return ret;
		}

		UWidgetAnimationPlayCallbackProxy CreatePlayAnimationTimeRangeProxyObject(UUMGSequencePlayer* Result, UUserWidget* Widget, UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32_t NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode> PlayMode, float PlaybackSpeed); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C293DC4(relative to base address)
		UWidgetAnimationPlayCallbackProxy CreatePlayAnimationProxyObject(UUMGSequencePlayer* Result, UUserWidget* Widget, UWidgetAnimation* InAnimation, float StartAtTime, int32_t NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode> PlayMode, float PlaybackSpeed); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C29389C(relative to base address)
	};


	// Class UMG.PropertyBinding
	// Inherited from UObject
	// Size: 0x48 (0x70 - 0x28)
	class UPropertyBinding : public UObject	
	{
	public:
		TWeakObjectPtr<UObject*> SourceObject; // 0x28(0x8)
		FDynamicPropertyPath SourcePath; // 0x30(0x38)
		FName DestinationProperty; // 0x68(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x6C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.PropertyBinding");
			return ret;
		}
	};


	// Class UMG.BoolBinding
	// Inherited from UPropertyBinding -> UObject
	// Size: 0x0 (0x70 - 0x70)
	class UBoolBinding : public UPropertyBinding	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.BoolBinding");
			return ret;
		}

		bool GetValue(); // Flags: Final|RequiredAPI|Native|Public|Const, Memory Exec: 0x7FF74C294B70(relative to base address)
	};


	// Class UMG.BrushBinding
	// Inherited from UPropertyBinding -> UObject
	// Size: 0x8 (0x78 - 0x70)
	class UBrushBinding : public UPropertyBinding	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x70(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.BrushBinding");
			return ret;
		}

		FSlateBrush GetValue(); // Flags: Final|RequiredAPI|Native|Public|Const, Memory Exec: 0x7FF74C294BCC(relative to base address)
	};


	// Class UMG.CheckedStateBinding
	// Inherited from UPropertyBinding -> UObject
	// Size: 0x8 (0x78 - 0x70)
	class UCheckedStateBinding : public UPropertyBinding	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x70(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.CheckedStateBinding");
			return ret;
		}

		ECheckBoxState GetValue(); // Flags: Final|RequiredAPI|Native|Public|Const, Memory Exec: 0x7FF74C294C10(relative to base address)
	};


	// Class UMG.ColorBinding
	// Inherited from UPropertyBinding -> UObject
	// Size: 0x8 (0x78 - 0x70)
	class UColorBinding : public UPropertyBinding	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x70(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.ColorBinding");
			return ret;
		}

		FSlateColor GetSlateValue(); // Flags: Final|RequiredAPI|Native|Public|Const, Memory Exec: 0x7FF74C294AA8(relative to base address)
		FLinearColor GetLinearValue(); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|Const, Memory Exec: 0x7FF74C294620(relative to base address)
	};


	// Class UMG.FloatBinding
	// Inherited from UPropertyBinding -> UObject
	// Size: 0x0 (0x70 - 0x70)
	class UFloatBinding : public UPropertyBinding	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.FloatBinding");
			return ret;
		}

		float GetValue(); // Flags: Final|RequiredAPI|Native|Public|Const, Memory Exec: 0x7FF74C294C34(relative to base address)
	};


	// Class UMG.Int32Binding
	// Inherited from UPropertyBinding -> UObject
	// Size: 0x0 (0x70 - 0x70)
	class UInt32Binding : public UPropertyBinding	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.Int32Binding");
			return ret;
		}

		int32_t GetValue(); // Flags: Final|RequiredAPI|Native|Public|Const, Memory Exec: 0x7FF74C294C5C(relative to base address)
	};


	// Class UMG.MouseCursorBinding
	// Inherited from UPropertyBinding -> UObject
	// Size: 0x0 (0x70 - 0x70)
	class UMouseCursorBinding : public UPropertyBinding	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.MouseCursorBinding");
			return ret;
		}

		TEnumAsByte GetValue(); // Flags: Final|RequiredAPI|Native|Public|Const, Memory Exec: 0x7FF74C294CB8(relative to base address)
	};


	// Class UMG.WidgetBinaryStateRegistration
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UWidgetBinaryStateRegistration : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.WidgetBinaryStateRegistration");
			return ret;
		}
	};


	// Class UMG.WidgetHoveredStateRegistration
	// Inherited from UWidgetBinaryStateRegistration -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UWidgetHoveredStateRegistration : public UWidgetBinaryStateRegistration	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.WidgetHoveredStateRegistration");
			return ret;
		}
	};


	// Class UMG.WidgetPressedStateRegistration
	// Inherited from UWidgetBinaryStateRegistration -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UWidgetPressedStateRegistration : public UWidgetBinaryStateRegistration	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.WidgetPressedStateRegistration");
			return ret;
		}
	};


	// Class UMG.WidgetDisabledStateRegistration
	// Inherited from UWidgetBinaryStateRegistration -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UWidgetDisabledStateRegistration : public UWidgetBinaryStateRegistration	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.WidgetDisabledStateRegistration");
			return ret;
		}
	};


	// Class UMG.WidgetSelectedStateRegistration
	// Inherited from UWidgetBinaryStateRegistration -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UWidgetSelectedStateRegistration : public UWidgetBinaryStateRegistration	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.WidgetSelectedStateRegistration");
			return ret;
		}
	};


	// Class UMG.WidgetEnumStateRegistration
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UWidgetEnumStateRegistration : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.WidgetEnumStateRegistration");
			return ret;
		}
	};


	// Class UMG.WidgetStateSettings
	// Inherited from UDeveloperSettings -> UObject
	// Size: 0x570 (0x5A0 - 0x30)
	class UWidgetStateSettings : public UDeveloperSettings	
	{
	public:
		unsigned char UnknownData00_1[0x570]; // 0x30(0x570) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.WidgetStateSettings");
			return ret;
		}
	};


	// Class UMG.TextBinding
	// Inherited from UPropertyBinding -> UObject
	// Size: 0x8 (0x78 - 0x70)
	class UTextBinding : public UPropertyBinding	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x70(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.TextBinding");
			return ret;
		}

		FText GetTextValue(); // Flags: Final|RequiredAPI|Native|Public|Const, Memory Exec: 0x7FF74C294B1C(relative to base address)
		FString GetStringValue(); // Flags: Final|RequiredAPI|Native|Public|Const, Memory Exec: 0x7FF74C294ADC(relative to base address)
	};


	// Class UMG.VisibilityBinding
	// Inherited from UPropertyBinding -> UObject
	// Size: 0x0 (0x70 - 0x70)
	class UVisibilityBinding : public UPropertyBinding	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.VisibilityBinding");
			return ret;
		}

		ESlateVisibility GetValue(); // Flags: Final|RequiredAPI|Native|Public|Const, Memory Exec: 0x7FF74C294D10(relative to base address)
	};


	// Class UMG.WidgetBinding
	// Inherited from UPropertyBinding -> UObject
	// Size: 0x0 (0x70 - 0x70)
	class UWidgetBinding : public UPropertyBinding	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.WidgetBinding");
			return ret;
		}

		UWidget GetValue(); // Flags: Final|RequiredAPI|Native|Public|Const, Memory Exec: 0x7FF74C294D6C(relative to base address)
	};


	// Class UMG.AsyncTaskDownloadImage
	// Inherited from UBlueprintAsyncActionBase -> UObject
	// Size: 0x20 (0x50 - 0x30)
	class UAsyncTaskDownloadImage : public UBlueprintAsyncActionBase	
	{
	public:
		FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
		FMulticastInlineDelegate OnFail; // 0x40(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.AsyncTaskDownloadImage");
			return ret;
		}

		UAsyncTaskDownloadImage DownloadImage(FString URL); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74C2943AC(relative to base address)
	};


	// Class UMG.GameViewportSubsystem
	// Inherited from UEngineSubsystem -> UDynamicSubsystem -> USubsystem -> UObject
	// Size: 0x80 (0xB0 - 0x30)
	class UGameViewportSubsystem : public UEngineSubsystem	
	{
	public:
		unsigned char UnknownData00_1[0x80]; // 0x30(0x80) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.GameViewportSubsystem");
			return ret;
		}

		FGameViewportWidgetSlot SetWidgetSlotPosition(FGameViewportWidgetSlot Slot, UWidget* Widget, FVector2D Position, bool bRemoveDPIScale); // Flags: Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74C298008(relative to base address)
		FGameViewportWidgetSlot SetWidgetSlotDesiredSize(FGameViewportWidgetSlot Slot, FVector2D Size); // Flags: Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74C297DAC(relative to base address)
		void SetWidgetSlot(UWidget* Widget, FGameViewportWidgetSlot Slot); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C29788C(relative to base address)
		void RemoveWidget(UWidget* Widget); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2956D8(relative to base address)
		bool IsWidgetAdded(UWidget* Widget); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2951FC(relative to base address)
		FGameViewportWidgetSlot GetWidgetSlot(UWidget* Widget); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C294DE0(relative to base address)
		bool AddWidgetForPlayer(UWidget* Widget, ULocalPlayer* Player, FGameViewportWidgetSlot Slot); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C293544(relative to base address)
		bool AddWidget(UWidget* Widget, FGameViewportWidgetSlot Slot); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2933B4(relative to base address)
	};


	// Class UMG.UserListEntry
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UUserListEntry : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.UserListEntry");
			return ret;
		}

		void BP_OnItemSelectionChanged(bool bIsSelected); // Flags: RequiredAPI|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnItemExpansionChanged(bool bIsExpanded); // Flags: RequiredAPI|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnEntryReleased(); // Flags: RequiredAPI|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class UMG.UserListEntryLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UUserListEntryLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.UserListEntryLibrary");
			return ret;
		}

		bool IsListItemSelected(TScriptInterface<Class> UserListEntry); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C29500C(relative to base address)
		bool IsListItemExpanded(TScriptInterface<Class> UserListEntry); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C294EE8(relative to base address)
		UListViewBase GetOwningListView(TScriptInterface<Class> UserListEntry); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C294888(relative to base address)
	};


	// Class UMG.UserObjectListEntry
	// Inherited from UUserListEntry -> UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UUserObjectListEntry : public UUserListEntry	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.UserObjectListEntry");
			return ret;
		}

		void OnListItemObjectSet(UObject* ListItemObject); // Flags: RequiredAPI|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class UMG.UserObjectListEntryLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UUserObjectListEntryLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.UserObjectListEntryLibrary");
			return ret;
		}

		UObject GetListItemObject(TScriptInterface<Class> UserObjectListEntry); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C294650(relative to base address)
	};


	// Class UMG.PanelWidget
	// Inherited from UWidget -> UVisual -> UObject
	// Size: 0x18 (0x170 - 0x158)
	class UPanelWidget : public UWidget	
	{
	public:
		TArray<UPanelSlot*> Slots; // 0x158(0x10)
		unsigned char UnknownData00_7[0x8]; // 0x168(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.PanelWidget");
			return ret;
		}

		bool RemoveChildAt(int32_t Index); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2B92D8(relative to base address)
		bool RemoveChild(UWidget* Content); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7494CBCEC(relative to base address)
		bool HasChild(UWidget* Content); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2B86E0(relative to base address)
		bool HasAnyChildren(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF749B404D0(relative to base address)
		int32_t GetChildrenCount(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF749591924(relative to base address)
		int32_t GetChildIndex(UWidget* Content); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2B7D54(relative to base address)
		UWidget GetChildAt(int32_t Index); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF749198300(relative to base address)
		TArray GetAllChildren(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF748C99488(relative to base address)
		void ClearChildren(); // Flags: RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74763E8D8(relative to base address)
		UPanelSlot AddChild(UWidget* Content); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74941F780(relative to base address)
	};


	// Class UMG.ContentWidget
	// Inherited from UPanelWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x170 - 0x170)
	class UContentWidget : public UPanelWidget	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.ContentWidget");
			return ret;
		}

		UPanelSlot SetContent(UWidget* Content); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7480FE4C8(relative to base address)
		UPanelSlot GetContentSlot(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF748FB394C(relative to base address)
		UWidget GetContent(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2945C8(relative to base address)
	};


	// Class UMG.BackgroundBlur
	// Inherited from UContentWidget -> UPanelWidget -> UWidget -> UVisual -> UObject
	// Size: 0x100 (0x270 - 0x170)
	class UBackgroundBlur : public UContentWidget	
	{
	public:
		FMargin Padding; // 0x170(0x10)
		TEnumAsByte<EHorizontalAlignment> HorizontalAlignment; // 0x180(0x1)
		TEnumAsByte<EVerticalAlignment> VerticalAlignment; // 0x181(0x1)
		bool bApplyAlphaToBlur; // 0x182(0x1)
		unsigned char UnknownData00_6[0x1]; // 0x183(0x1) UNKNOWN PROPERTY
		float BlurStrength; // 0x184(0x4)
		bool bOverrideAutoRadiusCalculation; // 0x188(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x189(0x3) UNKNOWN PROPERTY
		int32_t BlurRadius; // 0x18C(0x4)
		FVector4 CornerRadius; // 0x190(0x20)
		FSlateBrush LowQualityFallbackBrush; // 0x1B0(0xB0)
		unsigned char UnknownData02_7[0x10]; // 0x260(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.BackgroundBlur");
			return ret;
		}

		void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C297688(relative to base address)
		void SetPadding(FMargin InPadding); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C296A7C(relative to base address)
		void SetLowQualityFallbackBrush(FSlateBrush& InBrush); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C29660C(relative to base address)
		void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2962F8(relative to base address)
		void SetCornerRadius(FVector4 InCornerRadius); // Flags: RequiredAPI|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74C2961C0(relative to base address)
		void SetBlurStrength(float InStrength); // Flags: RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C295D74(relative to base address)
		void SetBlurRadius(int32_t InBlurRadius); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C295CF4(relative to base address)
		void SetApplyAlphaToBlur(bool bInApplyAlphaToBlur); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C295ADC(relative to base address)
	};


	// Class UMG.PanelSlot
	// Inherited from UVisual -> UObject
	// Size: 0x10 (0x38 - 0x28)
	class UPanelSlot : public UVisual	
	{
	public:
		UPanelWidget* Parent; // 0x28(0x8)
		UWidget* Content; // 0x30(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.PanelSlot");
			return ret;
		}

		UWidget GetContent(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF749B40500(relative to base address)
	};


	// Class UMG.BackgroundBlurSlot
	// Inherited from UPanelSlot -> UVisual -> UObject
	// Size: 0x28 (0x60 - 0x38)
	class UBackgroundBlurSlot : public UPanelSlot	
	{
	public:
		FMargin Padding; // 0x38(0x10)
		TEnumAsByte<EHorizontalAlignment> HorizontalAlignment; // 0x48(0x1)
		TEnumAsByte<EVerticalAlignment> VerticalAlignment; // 0x49(0x1)
		unsigned char UnknownData00_7[0x16]; // 0x4A(0x16) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.BackgroundBlurSlot");
			return ret;
		}

		void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C297708(relative to base address)
		void SetPadding(FMargin InPadding); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C296B98(relative to base address)
		void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C296378(relative to base address)
	};


	// Class UMG.Border
	// Inherited from UContentWidget -> UPanelWidget -> UWidget -> UVisual -> UObject
	// Size: 0x160 (0x2D0 - 0x170)
	class UBorder : public UContentWidget	
	{
	public:
		TEnumAsByte<EHorizontalAlignment> HorizontalAlignment; // 0x170(0x1)
		TEnumAsByte<EVerticalAlignment> VerticalAlignment; // 0x171(0x1)
		bool bShowEffectWhenDisabled : 1; // 0x172:0(0x1)
		unsigned char UnknownData00_5[0x1]; // 0x173(0x1) UNKNOWN PROPERTY
		FLinearColor ContentColorAndOpacity; // 0x174(0x10)
		FDelegateProperty ContentColorAndOpacityDelegate; // 0x184(0xC)
		FMargin Padding; // 0x190(0x10)
		FSlateBrush Background; // 0x1A0(0xB0)
		FDelegateProperty BackgroundDelegate; // 0x250(0xC)
		FLinearColor BrushColor; // 0x25C(0x10)
		FDelegateProperty BrushColorDelegate; // 0x26C(0xC)
		FVector2D DesiredSizeScale; // 0x278(0x10)
		bool bFlipForRightToLeftFlowDirection; // 0x288(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x289(0x3) UNKNOWN PROPERTY
		FDelegateProperty OnMouseButtonDownEvent; // 0x28C(0xC)
		FDelegateProperty OnMouseButtonUpEvent; // 0x298(0xC)
		FDelegateProperty OnMouseMoveEvent; // 0x2A4(0xC)
		FDelegateProperty OnMouseDoubleClickEvent; // 0x2B0(0xC)
		unsigned char UnknownData02_7[0x14]; // 0x2BC(0x14) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.Border");
			return ret;
		}

		void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C29778C(relative to base address)
		void SetShowEffectWhenDisabled(bool bInShowEffectWhenDisabled); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C297374(relative to base address)
		void SetPadding(FMargin InPadding); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF747A998C4(relative to base address)
		void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2963FC(relative to base address)
		void SetDesiredSizeScale(FVector2D InScale); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF749147FA8(relative to base address)
		void SetContentColorAndOpacity(FLinearColor InContentColorAndOpacity); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF749328C34(relative to base address)
		void SetBrushFromTexture(UTexture2D* Texture); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C295E78(relative to base address)
		void SetBrushFromMaterial(UMaterialInterface* Material); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF748E13FB0(relative to base address)
		void SetBrushFromAsset(USlateBrushAsset* Asset); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C295DF8(relative to base address)
		void SetBrushColor(FLinearColor InBrushColor); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF747A99B04(relative to base address)
		void SetBrush(FSlateBrush& InBrush); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7489BFBE4(relative to base address)
		UMaterialInstanceDynamic GetDynamicMaterial(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7489F6044(relative to base address)
	};


	// Class UMG.BorderSlot
	// Inherited from UPanelSlot -> UVisual -> UObject
	// Size: 0x28 (0x60 - 0x38)
	class UBorderSlot : public UPanelSlot	
	{
	public:
		FMargin Padding; // 0x38(0x10)
		TEnumAsByte<EHorizontalAlignment> HorizontalAlignment; // 0x48(0x1)
		TEnumAsByte<EVerticalAlignment> VerticalAlignment; // 0x49(0x1)
		unsigned char UnknownData00_7[0x16]; // 0x4A(0x16) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.BorderSlot");
			return ret;
		}

		void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF749B1F1A4(relative to base address)
		void SetPadding(FMargin InPadding); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7492D92B4(relative to base address)
		void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF747A99A18(relative to base address)
	};


	// Class UMG.Button
	// Inherited from UContentWidget -> UPanelWidget -> UWidget -> UVisual -> UObject
	// Size: 0x400 (0x570 - 0x170)
	class UButton : public UContentWidget	
	{
	public:
		FButtonStyle WidgetStyle; // 0x170(0x370)
		FLinearColor ColorAndOpacity; // 0x4E0(0x10)
		FLinearColor BackgroundColor; // 0x4F0(0x10)
		TEnumAsByte<EButtonClickMethod> ClickMethod; // 0x500(0x1)
		TEnumAsByte<EButtonTouchMethod> TouchMethod; // 0x501(0x1)
		TEnumAsByte<EButtonPressMethod> PressMethod; // 0x502(0x1)
		bool IsFocusable; // 0x503(0x1)
		unsigned char UnknownData00_6[0x4]; // 0x504(0x4) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnClicked; // 0x508(0x10)
		FMulticastInlineDelegate OnPressed; // 0x518(0x10)
		FMulticastInlineDelegate OnReleased; // 0x528(0x10)
		FMulticastInlineDelegate OnHovered; // 0x538(0x10)
		FMulticastInlineDelegate OnUnhovered; // 0x548(0x10)
		unsigned char UnknownData01_7[0x10]; // 0x558(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.Button");
			return ret;
		}

		void SetTouchMethod(TEnumAsByte<EButtonTouchMethod> InTouchMethod); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C29750C(relative to base address)
		void SetStyle(FButtonStyle& InStyle); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF749843DB0(relative to base address)
		void SetPressMethod(TEnumAsByte<EButtonPressMethod> InPressMethod); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C296F68(relative to base address)
		void SetColorAndOpacity(FLinearColor InColorAndOpacity); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74C2960A8(relative to base address)
		void SetClickMethod(TEnumAsByte<EButtonClickMethod> InClickMethod); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C295FA8(relative to base address)
		void SetBackgroundColor(FLinearColor InBackgroundColor); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74C295BDC(relative to base address)
		bool IsPressed(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2951A0(relative to base address)
	};


	// Class UMG.ButtonSlot
	// Inherited from UPanelSlot -> UVisual -> UObject
	// Size: 0x28 (0x60 - 0x38)
	class UButtonSlot : public UPanelSlot	
	{
	public:
		FMargin Padding; // 0x38(0x10)
		TEnumAsByte<EHorizontalAlignment> HorizontalAlignment; // 0x48(0x1)
		TEnumAsByte<EVerticalAlignment> VerticalAlignment; // 0x49(0x1)
		unsigned char UnknownData00_7[0x16]; // 0x4A(0x16) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.ButtonSlot");
			return ret;
		}

		void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C29780C(relative to base address)
		void SetPadding(FMargin InPadding); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C296CB4(relative to base address)
		void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C29647C(relative to base address)
	};


	// Class UMG.CanvasPanel
	// Inherited from UPanelWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x180 - 0x170)
	class UCanvasPanel : public UPanelWidget	
	{
	public:
		unsigned char UnknownData00_1[0x10]; // 0x170(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.CanvasPanel");
			return ret;
		}

		UCanvasPanelSlot AddChildToCanvas(UWidget* Content); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C293214(relative to base address)
	};


	// Class UMG.CanvasPanelSlot
	// Inherited from UPanelSlot -> UVisual -> UObject
	// Size: 0x50 (0x88 - 0x38)
	class UCanvasPanelSlot : public UPanelSlot	
	{
	public:
		FAnchorData LayoutData; // 0x38(0x40)
		bool bAutoSize; // 0x78(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x79(0x3) UNKNOWN PROPERTY
		int32_t ZOrder; // 0x7C(0x4)
		unsigned char UnknownData01_7[0x8]; // 0x80(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.CanvasPanelSlot");
			return ret;
		}

		void SetZOrder(int32_t InZOrder); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2983E4(relative to base address)
		void SetSize(FVector2D InSize); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74C2973F4(relative to base address)
		void SetPosition(FVector2D InPosition); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74C296E50(relative to base address)
		void SetOffsets(FMargin InOffset); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C296960(relative to base address)
		void SetMinimum(FVector2D InMinimumAnchors); // Flags: Final|RequiredAPI|Native|Public|HasDefaults, Memory Exec: 0x7FF74C2967C8(relative to base address)
		void SetMaximum(FVector2D InMaximumAnchors); // Flags: Final|RequiredAPI|Native|Public|HasDefaults, Memory Exec: 0x7FF74C2966B0(relative to base address)
		void SetLayout(FAnchorData& InLayoutData); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C29657C(relative to base address)
		void SetAutoSize(bool InbAutoSize); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C295B5C(relative to base address)
		void SetAnchors(FAnchors InAnchors); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2959AC(relative to base address)
		void SetAlignment(FVector2D InAlignment); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74C295894(relative to base address)
		int32_t GetZOrder(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C294EA4(relative to base address)
		FVector2D GetSize(); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C294A78(relative to base address)
		FVector2D GetPosition(); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2949AC(relative to base address)
		FMargin GetOffsets(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C294774(relative to base address)
		FAnchorData GetLayout(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2945EC(relative to base address)
		bool GetAutoSize(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C294580(relative to base address)
		FAnchors GetAnchors(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C29454C(relative to base address)
		FVector2D GetAlignment(); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C29451C(relative to base address)
	};


	// Class UMG.CheckBox
	// Inherited from UContentWidget -> UPanelWidget -> UWidget -> UVisual -> UObject
	// Size: 0x990 (0xB00 - 0x170)
	class UCheckBox : public UContentWidget	
	{
	public:
		ECheckBoxState CheckedState; // 0x170(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x171(0x3) UNKNOWN PROPERTY
		FDelegateProperty CheckedStateDelegate; // 0x174(0xC)
		FCheckBoxStyle WidgetStyle; // 0x180(0x950)
		TEnumAsByte<EHorizontalAlignment> HorizontalAlignment; // 0xAD0(0x1)
		TEnumAsByte<EButtonClickMethod> ClickMethod; // 0xAD1(0x1)
		TEnumAsByte<EButtonTouchMethod> TouchMethod; // 0xAD2(0x1)
		TEnumAsByte<EButtonPressMethod> PressMethod; // 0xAD3(0x1)
		bool IsFocusable; // 0xAD4(0x1)
		unsigned char UnknownData01_6[0x3]; // 0xAD5(0x3) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnCheckStateChanged; // 0xAD8(0x10)
		unsigned char UnknownData02_7[0x18]; // 0xAE8(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.CheckBox");
			return ret;
		}

		void SetTouchMethod(TEnumAsByte<EButtonTouchMethod> InTouchMethod); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C29758C(relative to base address)
		void SetPressMethod(TEnumAsByte<EButtonPressMethod> InPressMethod); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C296FE8(relative to base address)
		void SetIsChecked(bool InIsChecked); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2964FC(relative to base address)
		void SetClickMethod(TEnumAsByte<EButtonClickMethod> InClickMethod); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C296028(relative to base address)
		void SetCheckedState(ECheckBoxState InCheckedState); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C295F28(relative to base address)
		bool IsPressed(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2951D4(relative to base address)
		bool IsChecked(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C294EC4(relative to base address)
		ECheckBoxState GetCheckedState(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2945A4(relative to base address)
	};


	// Class UMG.WidgetCheckedStateRegistration
	// Inherited from UWidgetEnumStateRegistration -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UWidgetCheckedStateRegistration : public UWidgetEnumStateRegistration	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.WidgetCheckedStateRegistration");
			return ret;
		}
	};


	// Class UMG.CircularThrobber
	// Inherited from UWidget -> UVisual -> UObject
	// Size: 0xE8 (0x240 - 0x158)
	class UCircularThrobber : public UWidget	
	{
	public:
		int32_t NumberOfPieces; // 0x158(0x4)
		float Period; // 0x15C(0x4)
		float Radius; // 0x160(0x4)
		unsigned char UnknownData00_6[0xC]; // 0x164(0xC) UNKNOWN PROPERTY
		FSlateBrush Image; // 0x170(0xB0)
		bool bEnableRadius; // 0x220(0x1)
		unsigned char UnknownData01_7[0x1F]; // 0x221(0x1F) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.CircularThrobber");
			return ret;
		}

		void SetRadius(float InRadius); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C297104(relative to base address)
		void SetPeriod(float InPeriod); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C296DD0(relative to base address)
		void SetNumberOfPieces(int32_t InNumberOfPieces); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2968E0(relative to base address)
	};


	// Class UMG.ComboBox
	// Inherited from UWidget -> UVisual -> UObject
	// Size: 0x688 (0x7E0 - 0x158)
	class UComboBox : public UWidget	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x158(0x8) UNKNOWN PROPERTY
		FScrollBarStyle ScrollBarStyle; // 0x160(0x650)
		TArray<UObject*> Items; // 0x7B0(0x10)
		FDelegateProperty OnGenerateWidgetEvent; // 0x7C0(0xC)
		bool bIsFocusable; // 0x7CC(0x1)
		unsigned char UnknownData01_7[0x13]; // 0x7CD(0x13) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.ComboBox");
			return ret;
		}
	};


	// Class UMG.ComboBoxKey
	// Inherited from UWidget -> UVisual -> UObject
	// Size: 0x17E8 (0x1940 - 0x158)
	class UComboBoxKey : public UWidget	
	{
	public:
		TArray<FName> Options; // 0x158(0x10)
		FName SelectedOption; // 0x168(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x16C(0x4) UNKNOWN PROPERTY
		FComboBoxStyle WidgetStyle; // 0x170(0x5A0)
		FTableRowStyle ItemStyle; // 0x710(0xB50)
		FScrollBarStyle ScrollBarStyle; // 0x1260(0x650)
		FSlateColor ForegroundColor; // 0x18B0(0x14)
		FMargin ContentPadding; // 0x18C4(0x10)
		float MaxListHeight; // 0x18D4(0x4)
		bool bHasDownArrow; // 0x18D8(0x1)
		bool bEnableGamepadNavigationMode; // 0x18D9(0x1)
		bool bIsFocusable; // 0x18DA(0x1)
		unsigned char UnknownData01_6[0x1]; // 0x18DB(0x1) UNKNOWN PROPERTY
		FDelegateProperty OnGenerateContentWidget; // 0x18DC(0xC)
		FDelegateProperty OnGenerateItemWidget; // 0x18E8(0xC)
		unsigned char UnknownData02_6[0x4]; // 0x18F4(0x4) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnSelectionChanged; // 0x18F8(0x10)
		FMulticastInlineDelegate OnOpening; // 0x1908(0x10)
		unsigned char UnknownData03_7[0x28]; // 0x1918(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.ComboBoxKey");
			return ret;
		}

		void SetSelectedOption(FName Option); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C297204(relative to base address)
		bool RemoveOption(FName Option); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C295574(relative to base address)
		void OnSelectionChangedEvent__DelegateSignature(FName SelectedItem, TEnumAsByte<ESelectInfo> SelectionType); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnOpeningEvent__DelegateSignature(); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool IsOpen(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C295130(relative to base address)
		FName GetSelectedOption(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C294A00(relative to base address)
		UWidget GenerateWidgetEvent__DelegateSignature(FName Item); // Flags: Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ClearSelection(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C293874(relative to base address)
		void ClearOptions(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C293804(relative to base address)
		void AddOption(FName Option); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2932A4(relative to base address)
	};


	// Class UMG.ComboBoxString
	// Inherited from UWidget -> UVisual -> UObject
	// Size: 0x1878 (0x19D0 - 0x158)
	class UComboBoxString : public UWidget	
	{
	public:
		TArray<FString> DefaultOptions; // 0x158(0x10)
		FString SelectedOption; // 0x168(0x10)
		unsigned char UnknownData00_6[0x8]; // 0x178(0x8) UNKNOWN PROPERTY
		FComboBoxStyle WidgetStyle; // 0x180(0x5A0)
		FTableRowStyle ItemStyle; // 0x720(0xB50)
		FScrollBarStyle ScrollBarStyle; // 0x1270(0x650)
		FMargin ContentPadding; // 0x18C0(0x10)
		float MaxListHeight; // 0x18D0(0x4)
		bool HasDownArrow; // 0x18D4(0x1)
		bool EnableGamepadNavigationMode; // 0x18D5(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x18D6(0x2) UNKNOWN PROPERTY
		FSlateFontInfo Font; // 0x18D8(0x58)
		FSlateColor ForegroundColor; // 0x1930(0x14)
		bool bIsFocusable; // 0x1944(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x1945(0x3) UNKNOWN PROPERTY
		FDelegateProperty OnGenerateWidgetEvent; // 0x1948(0xC)
		unsigned char UnknownData03_6[0x4]; // 0x1954(0x4) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnSelectionChanged; // 0x1958(0x10)
		FMulticastInlineDelegate OnOpening; // 0x1968(0x10)
		unsigned char UnknownData04_7[0x58]; // 0x1978(0x58) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.ComboBoxString");
			return ret;
		}

		void SetSelectedOption(FString Option); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2972BC(relative to base address)
		void SetSelectedIndex(int32_t Index); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C297184(relative to base address)
		bool RemoveOption(FString Option); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C29563C(relative to base address)
		void RefreshOptions(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C29528C(relative to base address)
		void OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo> SelectionType); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnOpeningEvent__DelegateSignature(); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool IsOpen(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C295168(relative to base address)
		FString GetSelectedOption(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C294A18(relative to base address)
		int32_t GetSelectedIndex(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2949DC(relative to base address)
		int32_t GetOptionCount(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C294870(relative to base address)
		FString GetOptionAtIndex(int32_t Index); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2947A4(relative to base address)
		int32_t FindOptionIndex(FString Option); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C294480(relative to base address)
		void ClearSelection(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C293888(relative to base address)
		void ClearOptions(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C293860(relative to base address)
		void AddOption(FString Option); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C293324(relative to base address)
	};


	// Class UMG.DynamicEntryBoxBase
	// Inherited from UWidget -> UVisual -> UObject
	// Size: 0xE0 (0x238 - 0x158)
	class UDynamicEntryBoxBase : public UWidget	
	{
	public:
		FVector2D EntrySpacing; // 0x158(0x10)
		TArray<FVector2D> SpacingPattern; // 0x168(0x10)
		EDynamicBoxType EntryBoxType; // 0x178(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x179(0x3) UNKNOWN PROPERTY
		FSlateChildSize EntrySizeRule; // 0x17C(0x8)
		TEnumAsByte<EHorizontalAlignment> EntryHorizontalAlignment; // 0x184(0x1)
		TEnumAsByte<EVerticalAlignment> EntryVerticalAlignment; // 0x185(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x186(0x2) UNKNOWN PROPERTY
		int32_t MaxElementSize; // 0x188(0x4)
		FRadialBoxSettings RadialBoxSettings; // 0x18C(0x10)
		unsigned char UnknownData02_6[0x14]; // 0x19C(0x14) UNKNOWN PROPERTY
		FUserWidgetPool EntryWidgetPool; // 0x1B0(0x88)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.DynamicEntryBoxBase");
			return ret;
		}

		void SetRadialSettings(FRadialBoxSettings& InSettings); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C297068(relative to base address)
		void SetEntrySpacing(FVector2D& InEntrySpacing); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7482E952C(relative to base address)
		int32_t GetNumEntries(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74931BB34(relative to base address)
		TArray GetAllEntries(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74876B93C(relative to base address)
	};


	// Class UMG.DynamicEntryBox
	// Inherited from UDynamicEntryBoxBase -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x240 - 0x238)
	class UDynamicEntryBox : public UDynamicEntryBoxBase	
	{
	public:
		UClass* EntryWidgetClass; // 0x238(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.DynamicEntryBox");
			return ret;
		}

		void Reset(bool bDeleteWidgets); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74763ED90(relative to base address)
		void RemoveEntry(UUserWidget* EntryWidget); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2952A0(relative to base address)
		UUserWidget BP_CreateEntryOfClass(UClass* EntryClass); // Flags: Final|RequiredAPI|Native|Private|BlueprintCallable, Memory Exec: 0x7FF74954D1E8(relative to base address)
		UUserWidget BP_CreateEntry(); // Flags: Final|RequiredAPI|Native|Private|BlueprintCallable, Memory Exec: 0x7FF749178B9C(relative to base address)
	};


	// Class UMG.EditableText
	// Inherited from UWidget -> UVisual -> UObject
	// Size: 0x328 (0x480 - 0x158)
	class UEditableText : public UWidget	
	{
	public:
		FText Text; // 0x158(0x10)
		FDelegateProperty TextDelegate; // 0x168(0xC)
		unsigned char UnknownData00_6[0x4]; // 0x174(0x4) UNKNOWN PROPERTY
		FText HintText; // 0x178(0x10)
		FDelegateProperty HintTextDelegate; // 0x188(0xC)
		unsigned char UnknownData01_6[0xC]; // 0x194(0xC) UNKNOWN PROPERTY
		FEditableTextStyle WidgetStyle; // 0x1A0(0x290)
		bool IsReadOnly; // 0x430(0x1)
		bool IsPassword; // 0x431(0x1)
		unsigned char UnknownData02_6[0x2]; // 0x432(0x2) UNKNOWN PROPERTY
		float MinimumDesiredWidth; // 0x434(0x4)
		bool IsCaretMovedWhenGainFocus; // 0x438(0x1)
		bool SelectAllTextWhenFocused; // 0x439(0x1)
		bool RevertTextOnEscape; // 0x43A(0x1)
		bool ClearKeyboardFocusOnCommit; // 0x43B(0x1)
		bool SelectAllTextOnCommit; // 0x43C(0x1)
		bool AllowContextMenu; // 0x43D(0x1)
		TEnumAsByte<EVirtualKeyboardType> KeyboardType; // 0x43E(0x1)
		FVirtualKeyboardOptions VirtualKeyboardOptions; // 0x43F(0x1)
		EVirtualKeyboardTrigger VirtualKeyboardTrigger; // 0x440(0x1)
		EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0x441(0x1)
		TEnumAsByte<ETextJustify> Justification; // 0x442(0x1)
		ETextOverflowPolicy OverflowPolicy; // 0x443(0x1)
		FShapedTextOptions ShapedTextOptions; // 0x444(0x3)
		unsigned char UnknownData03_6[0x1]; // 0x447(0x1) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnTextChanged; // 0x448(0x10)
		FMulticastInlineDelegate OnTextCommitted; // 0x458(0x10)
		unsigned char UnknownData04_7[0x10]; // 0x468(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.EditableText");
			return ret;
		}

		void SetTextOverflowPolicy(ETextOverflowPolicy InOverflowPolicy); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BE6A8(relative to base address)
		void SetText(FText InText); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF748428C8C(relative to base address)
		void SetMinimumDesiredWidth(float InMinDesiredWidth); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BC8E8(relative to base address)
		void SetJustification(TEnumAsByte<ETextJustify> InJustification); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF748428970(relative to base address)
		void SetIsReadOnly(bool InbIsReadyOnly); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74842836C(relative to base address)
		void SetIsPassword(bool InbIsPassword); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF748428614(relative to base address)
		void SetHintText(FText InHintText); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF748428714(relative to base address)
		void SetFontOutlineMaterial(UMaterialInterface* InMaterial); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BAFAC(relative to base address)
		void SetFontMaterial(UMaterialInterface* InMaterial); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BAE64(relative to base address)
		void SetFont(FSlateFontInfo InFontInfo); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF748428E94(relative to base address)
		void OnEditableTextCommittedEvent__DelegateSignature(FText& Text, TEnumAsByte<ETextCommit> CommitMethod); // Flags: MulticastDelegate|Public|Delegate|HasOutParms, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnEditableTextChangedEvent__DelegateSignature(FText& Text); // Flags: MulticastDelegate|Public|Delegate|HasOutParms, Memory Exec: 0x7FF7471BBE78(relative to base address)
		FText GetText(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7484283F4(relative to base address)
		TEnumAsByte GetJustification(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2B81F0(relative to base address)
		FText GetHintText(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2B8058(relative to base address)
		FSlateFontInfo GetFont(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7496460E8(relative to base address)
	};


	// Class UMG.EditableTextBox
	// Inherited from UWidget -> UVisual -> UObject
	// Size: 0xD18 (0xE70 - 0x158)
	class UEditableTextBox : public UWidget	
	{
	public:
		FText Text; // 0x158(0x10)
		FDelegateProperty TextDelegate; // 0x168(0xC)
		unsigned char UnknownData00_6[0xC]; // 0x174(0xC) UNKNOWN PROPERTY
		FEditableTextBoxStyle WidgetStyle; // 0x180(0xC80)
		FText HintText; // 0xE00(0x10)
		FDelegateProperty HintTextDelegate; // 0xE10(0xC)
		bool IsReadOnly; // 0xE1C(0x1)
		bool IsPassword; // 0xE1D(0x1)
		unsigned char UnknownData01_6[0x2]; // 0xE1E(0x2) UNKNOWN PROPERTY
		float MinimumDesiredWidth; // 0xE20(0x4)
		bool IsCaretMovedWhenGainFocus; // 0xE24(0x1)
		bool SelectAllTextWhenFocused; // 0xE25(0x1)
		bool RevertTextOnEscape; // 0xE26(0x1)
		bool ClearKeyboardFocusOnCommit; // 0xE27(0x1)
		bool SelectAllTextOnCommit; // 0xE28(0x1)
		bool AllowContextMenu; // 0xE29(0x1)
		TEnumAsByte<EVirtualKeyboardType> KeyboardType; // 0xE2A(0x1)
		FVirtualKeyboardOptions VirtualKeyboardOptions; // 0xE2B(0x1)
		EVirtualKeyboardTrigger VirtualKeyboardTrigger; // 0xE2C(0x1)
		EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0xE2D(0x1)
		TEnumAsByte<ETextJustify> Justification; // 0xE2E(0x1)
		ETextOverflowPolicy OverflowPolicy; // 0xE2F(0x1)
		FShapedTextOptions ShapedTextOptions; // 0xE30(0x3)
		unsigned char UnknownData02_6[0x5]; // 0xE33(0x5) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnTextChanged; // 0xE38(0x10)
		FMulticastInlineDelegate OnTextCommitted; // 0xE48(0x10)
		unsigned char UnknownData03_7[0x10]; // 0xE58(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.EditableTextBox");
			return ret;
		}

		void SetTextOverflowPolicy(ETextOverflowPolicy InOverflowPolicy); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BE728(relative to base address)
		void SetText(FText InText); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BE418(relative to base address)
		void SetJustification(TEnumAsByte<ETextJustify> InJustification); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BBFAC(relative to base address)
		void SetIsReadOnly(bool bReadOnly); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BBCE4(relative to base address)
		void SetIsPassword(bool bIsPassword); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BBBDC(relative to base address)
		void SetHintText(FText InText); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BB4CC(relative to base address)
		void SetForegroundColor(FLinearColor Color); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74C2BB0F4(relative to base address)
		void SetError(FText InError); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BA93C(relative to base address)
		void OnEditableTextBoxCommittedEvent__DelegateSignature(FText& Text, TEnumAsByte<ETextCommit> CommitMethod); // Flags: MulticastDelegate|Public|Delegate|HasOutParms, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnEditableTextBoxChangedEvent__DelegateSignature(FText& Text); // Flags: MulticastDelegate|Public|Delegate|HasOutParms, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool HasError(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2B8778(relative to base address)
		FText GetText(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2B8454(relative to base address)
		void ClearError(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2B78F4(relative to base address)
	};


	// Class UMG.ExpandableArea
	// Inherited from UWidget -> UVisual -> UObject
	// Size: 0x2A8 (0x400 - 0x158)
	class UExpandableArea : public UWidget	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x158(0x8) UNKNOWN PROPERTY
		FExpandableAreaStyle Style; // 0x160(0x180)
		FSlateBrush BorderBrush; // 0x2E0(0xB0)
		FSlateColor BorderColor; // 0x390(0x14)
		bool bIsExpanded; // 0x3A4(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x3A5(0x3) UNKNOWN PROPERTY
		float MaxHeight; // 0x3A8(0x4)
		FMargin HeaderPadding; // 0x3AC(0x10)
		FMargin AreaPadding; // 0x3BC(0x10)
		unsigned char UnknownData02_6[0x4]; // 0x3CC(0x4) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnExpansionChanged; // 0x3D0(0x10)
		UWidget* HeaderContent; // 0x3E0(0x8)
		UWidget* BodyContent; // 0x3E8(0x8)
		unsigned char UnknownData03_7[0x10]; // 0x3F0(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.ExpandableArea");
			return ret;
		}

		void SetIsExpanded_Animated(bool IsExpanded); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BBA20(relative to base address)
		void SetIsExpanded(bool IsExpanded); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BB9A0(relative to base address)
		bool GetIsExpanded(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2B8124(relative to base address)
	};


	// Class UMG.GridPanel
	// Inherited from UPanelWidget -> UWidget -> UVisual -> UObject
	// Size: 0x30 (0x1A0 - 0x170)
	class UGridPanel : public UPanelWidget	
	{
	public:
		TArray<float> ColumnFill; // 0x170(0x10)
		TArray<float> RowFill; // 0x180(0x10)
		unsigned char UnknownData00_7[0x10]; // 0x190(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.GridPanel");
			return ret;
		}

		void SetRowFill(int32_t RowIndex, float Coefficient); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7493339A8(relative to base address)
		void SetColumnFill(int32_t ColumnIndex, float Coefficient); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7493E5608(relative to base address)
		UGridSlot AddChildToGrid(UWidget* Content, int32_t InRow, int32_t InColumn); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74A046520(relative to base address)
	};


	// Class UMG.GridSlot
	// Inherited from UPanelSlot -> UVisual -> UObject
	// Size: 0x40 (0x78 - 0x38)
	class UGridSlot : public UPanelSlot	
	{
	public:
		FMargin Padding; // 0x38(0x10)
		TEnumAsByte<EHorizontalAlignment> HorizontalAlignment; // 0x48(0x1)
		TEnumAsByte<EVerticalAlignment> VerticalAlignment; // 0x49(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x4A(0x2) UNKNOWN PROPERTY
		int32_t Row; // 0x4C(0x4)
		int32_t RowSpan; // 0x50(0x4)
		int32_t Column; // 0x54(0x4)
		int32_t ColumnSpan; // 0x58(0x4)
		int32_t Layer; // 0x5C(0x4)
		FVector2D Nudge; // 0x60(0x10)
		unsigned char UnknownData01_7[0x8]; // 0x70(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.GridSlot");
			return ret;
		}

		void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF748BF4EE4(relative to base address)
		void SetRowSpan(int32_t InRowSpan); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF748D9F81C(relative to base address)
		void SetRow(int32_t InRow); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74A0466A4(relative to base address)
		void SetPadding(FMargin InPadding); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF748ADCB80(relative to base address)
		void SetNudge(FVector2D InNudge); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF748F8E938(relative to base address)
		void SetLayer(int32_t InLayer); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF748D64CE8(relative to base address)
		void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF748BF2B60(relative to base address)
		void SetColumnSpan(int32_t InColumnSpan); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF748D9F584(relative to base address)
		void SetColumn(int32_t InColumn); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74A046624(relative to base address)
	};


	// Class UMG.HorizontalBox
	// Inherited from UPanelWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x180 - 0x170)
	class UHorizontalBox : public UPanelWidget	
	{
	public:
		unsigned char UnknownData00_1[0x10]; // 0x170(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.HorizontalBox");
			return ret;
		}

		UHorizontalBoxSlot AddChildToHorizontalBox(UWidget* Content); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7492DFF24(relative to base address)
	};


	// Class UMG.HorizontalBoxSlot
	// Inherited from UPanelSlot -> UVisual -> UObject
	// Size: 0x28 (0x60 - 0x38)
	class UHorizontalBoxSlot : public UPanelSlot	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x38(0x8) UNKNOWN PROPERTY
		FSlateChildSize Size; // 0x40(0x8)
		FMargin Padding; // 0x48(0x10)
		TEnumAsByte<EHorizontalAlignment> HorizontalAlignment; // 0x58(0x1)
		TEnumAsByte<EVerticalAlignment> VerticalAlignment; // 0x59(0x1)
		unsigned char UnknownData01_7[0x6]; // 0x5A(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.HorizontalBoxSlot");
			return ret;
		}

		void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74869B918(relative to base address)
		void SetSize(FSlateChildSize InSize); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7492ACF6C(relative to base address)
		void SetPadding(FMargin InPadding); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7489F64B8(relative to base address)
		void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74869B87C(relative to base address)
	};


	// Class UMG.Image
	// Inherited from UWidget -> UVisual -> UObject
	// Size: 0x128 (0x280 - 0x158)
	class UImage : public UWidget	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x158(0x8) UNKNOWN PROPERTY
		FSlateBrush Brush; // 0x160(0xB0)
		FDelegateProperty BrushDelegate; // 0x210(0xC)
		FLinearColor ColorAndOpacity; // 0x21C(0x10)
		FDelegateProperty ColorAndOpacityDelegate; // 0x22C(0xC)
		bool bFlipForRightToLeftFlowDirection; // 0x238(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x239(0x3) UNKNOWN PROPERTY
		FDelegateProperty OnMouseButtonDownEvent; // 0x23C(0xC)
		unsigned char UnknownData02_7[0x38]; // 0x248(0x38) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.Image");
			return ret;
		}

		void SetOpacity(float InOpacity); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7495A8F08(relative to base address)
		void SetDesiredSizeOverride(FVector2D DesiredSize); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74821E3DC(relative to base address)
		void SetColorAndOpacity(FLinearColor InColorAndOpacity); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74821E590(relative to base address)
		void SetBrushTintColor(FSlateColor TintColor); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF748D47AB4(relative to base address)
		void SetBrushResourceObject(UObject* ResourceObject); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2B9EE4(relative to base address)
		void SetBrushFromTextureDynamic(UTexture2DDynamic* Texture, bool bMatchSize); // Flags: RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2B9E18(relative to base address)
		void SetBrushFromTexture(UTexture2D* Texture, bool bMatchSize); // Flags: RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF747EEB488(relative to base address)
		void SetBrushFromSoftTexture(TWeakObjectPtr<UTexture2D*> SoftTexture, bool bMatchSize); // Flags: RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF748E5E60C(relative to base address)
		void SetBrushFromSoftMaterial(TWeakObjectPtr<UMaterialInterface*> SoftMaterial); // Flags: RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74821DDB4(relative to base address)
		void SetBrushFromMaterial(UMaterialInterface* Material); // Flags: RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74731BBD0(relative to base address)
		void SetBrushFromAtlasInterface(TScriptInterface<Class> AtlasRegion, bool bMatchSize); // Flags: RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7482202F0(relative to base address)
		void SetBrushFromAsset(USlateBrushAsset* Asset); // Flags: RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2B9D94(relative to base address)
		void SetBrush(FSlateBrush& InBrush); // Flags: RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7489BFF48(relative to base address)
		UMaterialInstanceDynamic GetDynamicMaterial(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74821F6D4(relative to base address)
	};


	// Class UMG.InputKeySelector
	// Inherited from UWidget -> UVisual -> UObject
	// Size: 0x6F8 (0x850 - 0x158)
	class UInputKeySelector : public UWidget	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x158(0x8) UNKNOWN PROPERTY
		FButtonStyle WidgetStyle; // 0x160(0x370)
		FTextBlockStyle TextStyle; // 0x4D0(0x2E0)
		FInputChord SelectedKey; // 0x7B0(0x20)
		unsigned char UnknownData01_7[0x80]; // 0x7D0(0x80) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.InputKeySelector");
			return ret;
		}

		void SetTextBlockVisibility(ESlateVisibility InVisibility); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BE5EC(relative to base address)
		void SetSelectedKey(FInputChord& InSelectedKey); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C2BD904(relative to base address)
		void SetNoKeySpecifiedText(FText InNoKeySpecifiedText); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BCE44(relative to base address)
		void SetKeySelectionText(FText InKeySelectionText); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BC02C(relative to base address)
		void SetEscapeKeys(TArray<FKey>& InKeys); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C2BAA8C(relative to base address)
		void SetAllowModifierKeys(bool bInAllowModifierKeys); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2B987C(relative to base address)
		void SetAllowGamepadKeys(bool bInAllowGamepadKeys); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2B97FC(relative to base address)
		void OnKeySelected__DelegateSignature(FInputChord SelectedKey); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnIsSelectingKeyChanged__DelegateSignature(); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool GetIsSelectingKey(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2B813C(relative to base address)
	};


	// Class UMG.InvalidationBox
	// Inherited from UContentWidget -> UPanelWidget -> UWidget -> UVisual -> UObject
	// Size: 0x18 (0x188 - 0x170)
	class UInvalidationBox : public UContentWidget	
	{
	public:
		bool bCanCache; // 0x170(0x1)
		unsigned char UnknownData00_7[0x17]; // 0x171(0x17) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.InvalidationBox");
			return ret;
		}

		void SetCanCache(bool CanCache); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2B9F64(relative to base address)
		void InvalidateCache(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74921B8F8(relative to base address)
		bool GetCanCache(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2B7D34(relative to base address)
	};


	// Class UMG.MenuAnchor
	// Inherited from UContentWidget -> UPanelWidget -> UWidget -> UVisual -> UObject
	// Size: 0x48 (0x1B8 - 0x170)
	class UMenuAnchor : public UContentWidget	
	{
	public:
		UClass* MenuClass; // 0x170(0x8)
		FDelegateProperty OnGetMenuContentEvent; // 0x178(0xC)
		FDelegateProperty OnGetUserMenuContentEvent; // 0x184(0xC)
		TEnumAsByte<EMenuPlacement> Placement; // 0x190(0x1)
		bool bFitInWindow; // 0x191(0x1)
		bool ShouldDeferPaintingAfterWindowContent; // 0x192(0x1)
		bool UseApplicationMenuStack; // 0x193(0x1)
		unsigned char UnknownData00_6[0x4]; // 0x194(0x4) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnMenuOpenChanged; // 0x198(0x10)
		unsigned char UnknownData01_7[0x10]; // 0x1A8(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.MenuAnchor");
			return ret;
		}

		void ToggleOpen(bool bFocusOnOpen); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BF778(relative to base address)
		bool ShouldOpenDueToClick(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2BF6B4(relative to base address)
		void SetPlacement(TEnumAsByte<EMenuPlacement> InPlacement); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF748B6E2D0(relative to base address)
		void Open(bool bFocusMenu); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2B9230(relative to base address)
		bool IsOpen(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF748B6E29C(relative to base address)
		bool HasOpenSubMenus(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2B88D0(relative to base address)
		UUserWidget GetUserWidget__DelegateSignature(); // Flags: Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		FVector2D GetMenuPosition(); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2B8278(relative to base address)
		void FitInWindow(bool bFit); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2B7AE4(relative to base address)
		void Close(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF748B6E41C(relative to base address)
	};


	// Class UMG.TextLayoutWidget
	// Inherited from UWidget -> UVisual -> UObject
	// Size: 0x20 (0x178 - 0x158)
	class UTextLayoutWidget : public UWidget	
	{
	public:
		FShapedTextOptions ShapedTextOptions; // 0x158(0x3)
		TEnumAsByte<ETextJustify> Justification; // 0x15B(0x1)
		ETextWrappingPolicy WrappingPolicy; // 0x15C(0x1)
		bool AutoWrapText : 1; // 0x15D:0(0x1)
		bool ApplyLineHeightToBottomLine; // 0x15E(0x1)
		unsigned char UnknownData00_6[0x1]; // 0x15F(0x1) UNKNOWN PROPERTY
		float WrapTextAt; // 0x160(0x4)
		FMargin Margin; // 0x164(0x10)
		float LineHeightPercentage; // 0x174(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.TextLayoutWidget");
			return ret;
		}

		void SetJustification(TEnumAsByte<ETextJustify> InJustification); // Flags: RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF748428884(relative to base address)
	};


	// Class UMG.MultiLineEditableText
	// Inherited from UTextLayoutWidget -> UWidget -> UVisual -> UObject
	// Size: 0x358 (0x4D0 - 0x178)
	class UMultiLineEditableText : public UTextLayoutWidget	
	{
	public:
		FText Text; // 0x178(0x10)
		FText HintText; // 0x188(0x10)
		FDelegateProperty HintTextDelegate; // 0x198(0xC)
		unsigned char UnknownData00_6[0xC]; // 0x1A4(0xC) UNKNOWN PROPERTY
		FTextBlockStyle WidgetStyle; // 0x1B0(0x2E0)
		bool bIsReadOnly; // 0x490(0x1)
		bool SelectAllTextWhenFocused; // 0x491(0x1)
		bool ClearTextSelectionOnFocusLoss; // 0x492(0x1)
		bool RevertTextOnEscape; // 0x493(0x1)
		bool ClearKeyboardFocusOnCommit; // 0x494(0x1)
		bool AllowContextMenu; // 0x495(0x1)
		FVirtualKeyboardOptions VirtualKeyboardOptions; // 0x496(0x1)
		EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0x497(0x1)
		FMulticastInlineDelegate OnTextChanged; // 0x498(0x10)
		FMulticastInlineDelegate OnTextCommitted; // 0x4A8(0x10)
		unsigned char UnknownData01_7[0x18]; // 0x4B8(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.MultiLineEditableText");
			return ret;
		}

		void SetWidgetStyle(FTextBlockStyle& InWidgetStyle); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C2BF4F4(relative to base address)
		void SetText(FText InText); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BE4B4(relative to base address)
		void SetIsReadOnly(bool bReadOnly); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BBD64(relative to base address)
		void SetHintText(FText InHintText); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BB568(relative to base address)
		void SetFontOutlineMaterial(UMaterialInterface* InMaterial); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BB050(relative to base address)
		void SetFontMaterial(UMaterialInterface* InMaterial); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BAF08(relative to base address)
		void SetFont(FSlateFontInfo InFontInfo); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BAD2C(relative to base address)
		void OnMultiLineEditableTextCommittedEvent__DelegateSignature(FText& Text, TEnumAsByte<ETextCommit> CommitMethod); // Flags: MulticastDelegate|Public|Delegate|HasOutParms, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnMultiLineEditableTextChangedEvent__DelegateSignature(FText& Text); // Flags: MulticastDelegate|Public|Delegate|HasOutParms, Memory Exec: 0x7FF7471BBE78(relative to base address)
		FText GetText(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2B8490(relative to base address)
		FText GetHintText(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2B8094(relative to base address)
		FSlateFontInfo GetFont(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2B8000(relative to base address)
	};


	// Class UMG.MultiLineEditableTextBox
	// Inherited from UTextLayoutWidget -> UWidget -> UVisual -> UObject
	// Size: 0xCF8 (0xE70 - 0x178)
	class UMultiLineEditableTextBox : public UTextLayoutWidget	
	{
	public:
		FText Text; // 0x178(0x10)
		FText HintText; // 0x188(0x10)
		FDelegateProperty HintTextDelegate; // 0x198(0xC)
		unsigned char UnknownData00_6[0xC]; // 0x1A4(0xC) UNKNOWN PROPERTY
		FEditableTextBoxStyle WidgetStyle; // 0x1B0(0xC80)
		bool bIsReadOnly; // 0xE30(0x1)
		bool AllowContextMenu; // 0xE31(0x1)
		FVirtualKeyboardOptions VirtualKeyboardOptions; // 0xE32(0x1)
		EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0xE33(0x1)
		unsigned char UnknownData01_6[0x4]; // 0xE34(0x4) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnTextChanged; // 0xE38(0x10)
		FMulticastInlineDelegate OnTextCommitted; // 0xE48(0x10)
		unsigned char UnknownData02_7[0x18]; // 0xE58(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.MultiLineEditableTextBox");
			return ret;
		}

		void SetTextStyle(FTextBlockStyle& InTextStyle); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C2BE8A8(relative to base address)
		void SetText(FText InText); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BE550(relative to base address)
		void SetIsReadOnly(bool bReadOnly); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BBDE4(relative to base address)
		void SetHintText(FText InHintText); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BB604(relative to base address)
		void SetForegroundColor(FLinearColor Color); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74C2BB20C(relative to base address)
		void SetError(FText InError); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BA9E4(relative to base address)
		void OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(FText& Text, TEnumAsByte<ETextCommit> CommitMethod); // Flags: MulticastDelegate|Public|Delegate|HasOutParms, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(FText& Text); // Flags: MulticastDelegate|Public|Delegate|HasOutParms, Memory Exec: 0x7FF7471BBE78(relative to base address)
		FText GetText(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2B84CC(relative to base address)
		FText GetHintText(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2B80D0(relative to base address)
	};


	// Class UMG.NamedSlot
	// Inherited from UContentWidget -> UPanelWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x180 - 0x170)
	class UNamedSlot : public UContentWidget	
	{
	public:
		unsigned char UnknownData00_1[0x10]; // 0x170(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.NamedSlot");
			return ret;
		}
	};


	// Class UMG.NamedSlotInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UNamedSlotInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.NamedSlotInterface");
			return ret;
		}
	};


	// Class UMG.NativeWidgetHost
	// Inherited from UWidget -> UVisual -> UObject
	// Size: 0x10 (0x168 - 0x158)
	class UNativeWidgetHost : public UWidget	
	{
	public:
		unsigned char UnknownData00_1[0x10]; // 0x158(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.NativeWidgetHost");
			return ret;
		}
	};


	// Class UMG.Overlay
	// Inherited from UPanelWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x180 - 0x170)
	class UOverlay : public UPanelWidget	
	{
	public:
		unsigned char UnknownData00_1[0x10]; // 0x170(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.Overlay");
			return ret;
		}

		bool ReplaceOverlayChildAt(int32_t Index, UWidget* Content); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2B93E4(relative to base address)
		UOverlaySlot AddChildToOverlay(UWidget* Content); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7495C7B48(relative to base address)
	};


	// Class UMG.OverlaySlot
	// Inherited from UPanelSlot -> UVisual -> UObject
	// Size: 0x20 (0x58 - 0x38)
	class UOverlaySlot : public UPanelSlot	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x38(0x8) UNKNOWN PROPERTY
		FMargin Padding; // 0x40(0x10)
		TEnumAsByte<EHorizontalAlignment> HorizontalAlignment; // 0x50(0x1)
		TEnumAsByte<EVerticalAlignment> VerticalAlignment; // 0x51(0x1)
		unsigned char UnknownData01_7[0x6]; // 0x52(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.OverlaySlot");
			return ret;
		}

		void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7488B53C4(relative to base address)
		void SetPadding(FMargin InPadding); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF749095244(relative to base address)
		void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7488B5444(relative to base address)
	};


	// Class UMG.SlatePostBufferProcessorUpdater
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class USlatePostBufferProcessorUpdater : public UObject	
	{
	public:
		bool bSkipBufferUpdate; // 0x28(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x29(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.SlatePostBufferProcessorUpdater");
			return ret;
		}
	};


	// Class UMG.PostBufferBlurUpdater
	// Inherited from USlatePostBufferProcessorUpdater -> UObject
	// Size: 0x8 (0x38 - 0x30)
	class UPostBufferBlurUpdater : public USlatePostBufferProcessorUpdater	
	{
	public:
		float GaussianBlurStrength; // 0x30(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x34(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.PostBufferBlurUpdater");
			return ret;
		}
	};


	// Class UMG.PostBufferUpdate
	// Inherited from UWidget -> UVisual -> UObject
	// Size: 0x38 (0x190 - 0x158)
	class UPostBufferUpdate : public UWidget	
	{
	public:
		bool bPerformDefaultPostBufferUpdate; // 0x158(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x159(0x7) UNKNOWN PROPERTY
		TArray<ESlatePostRT> BuffersToUpdate; // 0x160(0x10)
		TArray<FSlatePostBufferUpdateInfo> UpdateBufferInfos; // 0x170(0x10)
		unsigned char UnknownData01_7[0x10]; // 0x180(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.PostBufferUpdate");
			return ret;
		}
	};


	// Class UMG.ProgressBar
	// Inherited from UWidget -> UVisual -> UObject
	// Size: 0x288 (0x3E0 - 0x158)
	class UProgressBar : public UWidget	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x158(0x8) UNKNOWN PROPERTY
		FProgressBarStyle WidgetStyle; // 0x160(0x230)
		float Percent; // 0x390(0x4)
		TEnumAsByte<EProgressBarFillType> BarFillType; // 0x394(0x1)
		TEnumAsByte<EProgressBarFillStyle> BarFillStyle; // 0x395(0x1)
		bool bIsMarquee; // 0x396(0x1)
		unsigned char UnknownData01_6[0x1]; // 0x397(0x1) UNKNOWN PROPERTY
		FVector2D BorderPadding; // 0x398(0x10)
		FDelegateProperty PercentDelegate; // 0x3A8(0xC)
		FLinearColor FillColorAndOpacity; // 0x3B4(0x10)
		FDelegateProperty FillColorAndOpacityDelegate; // 0x3C4(0xC)
		unsigned char UnknownData02_7[0x10]; // 0x3D0(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.ProgressBar");
			return ret;
		}

		void SetPercent(float InPercent); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF749B41AF8(relative to base address)
		void SetIsMarquee(bool InbIsMarquee); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BBB5C(relative to base address)
		void SetFillColorAndOpacity(FLinearColor InColor); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74C2BAC14(relative to base address)
	};


	// Class UMG.RetainerBox
	// Inherited from UContentWidget -> UPanelWidget -> UWidget -> UVisual -> UObject
	// Size: 0x30 (0x1A0 - 0x170)
	class URetainerBox : public UContentWidget	
	{
	public:
		bool bRetainRender; // 0x170(0x1)
		bool RenderOnInvalidation; // 0x171(0x1)
		bool RenderOnPhase; // 0x172(0x1)
		unsigned char UnknownData00_6[0x1]; // 0x173(0x1) UNKNOWN PROPERTY
		int32_t Phase; // 0x174(0x4)
		int32_t PhaseCount; // 0x178(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x17C(0x4) UNKNOWN PROPERTY
		UMaterialInterface* EffectMaterial; // 0x180(0x8)
		FName TextureParameter; // 0x188(0x4)
		unsigned char UnknownData02_7[0x14]; // 0x18C(0x14) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.RetainerBox");
			return ret;
		}

		void SetTextureParameter(FName TextureParameter); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BEA68(relative to base address)
		void SetRetainRendering(bool bInRetainRendering); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF749A908C4(relative to base address)
		void SetRenderingPhase(int32_t RenderPhase, int32_t TotalPhases); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BD374(relative to base address)
		void SetEffectMaterial(UMaterialInterface* EffectMaterial); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BA83C(relative to base address)
		void RequestRender(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2B95B8(relative to base address)
		UMaterialInstanceDynamic GetEffectMaterial(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2B7FA4(relative to base address)
	};


	// Class UMG.RichTextBlock
	// Inherited from UTextLayoutWidget -> UWidget -> UVisual -> UObject
	// Size: 0x628 (0x7A0 - 0x178)
	class URichTextBlock : public UTextLayoutWidget	
	{
	public:
		FText Text; // 0x178(0x10)
		UDataTable* TextStyleSet; // 0x188(0x8)
		TArray<UClass*> DecoratorClasses; // 0x190(0x10)
		FTextBlockStyle DefaultTextStyleOverride; // 0x1A0(0x2E0)
		float MinDesiredWidth; // 0x480(0x4)
		bool bOverrideDefaultStyle; // 0x484(0x1)
		ETextTransformPolicy TextTransformPolicy; // 0x485(0x1)
		ETextOverflowPolicy TextOverflowPolicy; // 0x486(0x1)
		unsigned char UnknownData00_6[0x9]; // 0x487(0x9) UNKNOWN PROPERTY
		FTextBlockStyle DefaultTextStyle; // 0x490(0x2E0)
		TArray<URichTextBlockDecorator*> InstanceDecorators; // 0x770(0x10)
		unsigned char UnknownData01_7[0x20]; // 0x780(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.RichTextBlock");
			return ret;
		}

		void SetTextTransformPolicy(ETextTransformPolicy InTransformPolicy); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BE9E8(relative to base address)
		void SetTextStyleSet(UDataTable* NewTextStyleSet); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BE968(relative to base address)
		void SetTextOverflowPolicy(ETextOverflowPolicy InOverflowPolicy); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BE7A8(relative to base address)
		void SetText(FText& InText); // Flags: RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7472A3E00(relative to base address)
		void SetMinDesiredWidth(float InMinDesiredWidth); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BC668(relative to base address)
		void SetDefaultTextStyle(FTextBlockStyle& InDefaultTextStyle); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C2BA580(relative to base address)
		void SetDefaultStrikeBrush(FSlateBrush& InStrikeBrush); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C2BA4B8(relative to base address)
		void SetDefaultShadowOffset(FVector2D InShadowOffset); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74C2BA3A0(relative to base address)
		void SetDefaultShadowColorAndOpacity(FLinearColor InShadowColorAndOpacity); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74C2BA288(relative to base address)
		void SetDefaultMaterial(UMaterialInterface* InMaterial); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BA1E8(relative to base address)
		void SetDefaultFont(FSlateFontInfo InFontInfo); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF749AC3C54(relative to base address)
		void SetDefaultColorAndOpacity(FSlateColor InColorAndOpacity); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7493ED5C4(relative to base address)
		void SetDecorators(TArray<UClass*>& InDecoratorClasses); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF749074450(relative to base address)
		void SetAutoWrapText(bool InAutoTextWrap); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF749694294(relative to base address)
		void RefreshTextLayout(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2B92B0(relative to base address)
		UDataTable GetTextStyleSet(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2B8508(relative to base address)
		FText GetText(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74940F508(relative to base address)
		UMaterialInstanceDynamic GetDefaultDynamicMaterial(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2B7F1C(relative to base address)
		URichTextBlockDecorator GetDecoratorByClass(UClass* DecoratorClass); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2B7E78(relative to base address)
		void ClearAllDefaultStyleOverrides(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2B78C0(relative to base address)
	};


	// Class UMG.RichTextBlockDecorator
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class URichTextBlockDecorator : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.RichTextBlockDecorator");
			return ret;
		}
	};


	// Class UMG.RichTextBlockImageDecorator
	// Inherited from URichTextBlockDecorator -> UObject
	// Size: 0x8 (0x30 - 0x28)
	class URichTextBlockImageDecorator : public URichTextBlockDecorator	
	{
	public:
		UDataTable* ImageSet; // 0x28(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.RichTextBlockImageDecorator");
			return ret;
		}
	};


	// Class UMG.SafeZone
	// Inherited from UContentWidget -> UPanelWidget -> UWidget -> UVisual -> UObject
	// Size: 0x18 (0x188 - 0x170)
	class USafeZone : public UContentWidget	
	{
	public:
		bool PadLeft; // 0x170(0x1)
		bool PadRight; // 0x171(0x1)
		bool PadTop; // 0x172(0x1)
		bool PadBottom; // 0x173(0x1)
		unsigned char UnknownData00_7[0x14]; // 0x174(0x14) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.SafeZone");
			return ret;
		}

		void SetSidesToPad(bool InPadLeft, bool InPadRight, bool InPadTop, bool InPadBottom); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7494EB460(relative to base address)
	};


	// Class UMG.SafeZoneSlot
	// Inherited from UPanelSlot -> UVisual -> UObject
	// Size: 0x38 (0x70 - 0x38)
	class USafeZoneSlot : public UPanelSlot	
	{
	public:
		bool bIsTitleSafe; // 0x38(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x39(0x3) UNKNOWN PROPERTY
		FMargin SafeAreaScale; // 0x3C(0x10)
		TEnumAsByte<EHorizontalAlignment> HAlign; // 0x4C(0x1)
		TEnumAsByte<EVerticalAlignment> VAlign; // 0x4D(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x4E(0x2) UNKNOWN PROPERTY
		FMargin Padding; // 0x50(0x10)
		unsigned char UnknownData02_7[0x10]; // 0x60(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.SafeZoneSlot");
			return ret;
		}
	};


	// Class UMG.ScaleBox
	// Inherited from UContentWidget -> UPanelWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x190 - 0x170)
	class UScaleBox : public UContentWidget	
	{
	public:
		TEnumAsByte<EStretch> Stretch; // 0x170(0x1)
		TEnumAsByte<EStretchDirection> StretchDirection; // 0x171(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x172(0x2) UNKNOWN PROPERTY
		float UserSpecifiedScale; // 0x174(0x4)
		bool IgnoreInheritedScale; // 0x178(0x1)
		unsigned char UnknownData01_7[0x17]; // 0x179(0x17) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.ScaleBox");
			return ret;
		}

		void SetUserSpecifiedScale(float InUserSpecifiedScale); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7482CE004(relative to base address)
		void SetStretchDirection(TEnumAsByte<EStretchDirection> InStretchDirection); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BE260(relative to base address)
		void SetStretch(TEnumAsByte<EStretch> InStretch); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BE1E0(relative to base address)
		void SetIgnoreInheritedScale(bool bInIgnoreInheritedScale); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BB8A0(relative to base address)
	};


	// Class UMG.ScaleBoxSlot
	// Inherited from UPanelSlot -> UVisual -> UObject
	// Size: 0x18 (0x50 - 0x38)
	class UScaleBoxSlot : public UPanelSlot	
	{
	public:
		TEnumAsByte<EHorizontalAlignment> HorizontalAlignment; // 0x38(0x1)
		TEnumAsByte<EVerticalAlignment> VerticalAlignment; // 0x39(0x1)
		unsigned char UnknownData00_7[0x16]; // 0x3A(0x16) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.ScaleBoxSlot");
			return ret;
		}

		void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BEFB4(relative to base address)
		void SetPadding(FMargin InPadding); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BD060(relative to base address)
		void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BB6A0(relative to base address)
	};


	// Class UMG.ScrollBar
	// Inherited from UWidget -> UVisual -> UObject
	// Size: 0x698 (0x7F0 - 0x158)
	class UScrollBar : public UWidget	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x158(0x8) UNKNOWN PROPERTY
		FScrollBarStyle WidgetStyle; // 0x160(0x650)
		bool bAlwaysShowScrollbar; // 0x7B0(0x1)
		bool bAlwaysShowScrollbarTrack; // 0x7B1(0x1)
		TEnumAsByte<EOrientation> orientation; // 0x7B2(0x1)
		unsigned char UnknownData01_6[0x5]; // 0x7B3(0x5) UNKNOWN PROPERTY
		FVector2D Thickness; // 0x7B8(0x10)
		FMargin Padding; // 0x7C8(0x10)
		unsigned char UnknownData02_7[0x18]; // 0x7D8(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.ScrollBar");
			return ret;
		}

		void SetState(float InOffsetFraction, float InThumbSizeFraction); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BE118(relative to base address)
	};


	// Class UMG.ScrollBox
	// Inherited from UPanelWidget -> UWidget -> UVisual -> UObject
	// Size: 0x9D0 (0xB40 - 0x170)
	class UScrollBox : public UPanelWidget	
	{
	public:
		float ScrollAnimationInterpolationSpeed; // 0x170(0x4)
		bool bEnableTouchScrolling; // 0x174(0x1)
		unsigned char UnknownData00_6[0xB]; // 0x175(0xB) UNKNOWN PROPERTY
		FScrollBoxStyle WidgetStyle; // 0x180(0x2F0)
		FScrollBarStyle WidgetBarStyle; // 0x470(0x650)
		TEnumAsByte<EOrientation> orientation; // 0xAC0(0x1)
		ESlateVisibility ScrollBarVisibility; // 0xAC1(0x1)
		EConsumeMouseWheel ConsumeMouseWheel; // 0xAC2(0x1)
		unsigned char UnknownData01_6[0x5]; // 0xAC3(0x5) UNKNOWN PROPERTY
		FVector2D ScrollbarThickness; // 0xAC8(0x10)
		FMargin ScrollBarPadding; // 0xAD8(0x10)
		bool AlwaysShowScrollbar; // 0xAE8(0x1)
		bool AlwaysShowScrollbarTrack; // 0xAE9(0x1)
		bool AllowOverscroll; // 0xAEA(0x1)
		bool BackPadScrolling; // 0xAEB(0x1)
		bool FrontPadScrolling; // 0xAEC(0x1)
		bool bAnimateWheelScrolling; // 0xAED(0x1)
		EDescendantScrollDestination NavigationDestination; // 0xAEE(0x1)
		unsigned char UnknownData02_6[0x1]; // 0xAEF(0x1) UNKNOWN PROPERTY
		float NavigationScrollPadding; // 0xAF0(0x4)
		EScrollWhenFocusChanges ScrollWhenFocusChanges; // 0xAF4(0x1)
		bool bAllowRightClickDragScrolling; // 0xAF5(0x1)
		unsigned char UnknownData03_6[0x2]; // 0xAF6(0x2) UNKNOWN PROPERTY
		float WheelScrollMultiplier; // 0xAF8(0x4)
		unsigned char UnknownData04_6[0x4]; // 0xAFC(0x4) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnUserScrolled; // 0xB00(0x10)
		FMulticastInlineDelegate OnScrollBarVisibilityChanged; // 0xB10(0x10)
		unsigned char UnknownData05_7[0x18]; // 0xB20(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.ScrollBox");
			return ret;
		}

		void SetWheelScrollMultiplier(float NewWheelScrollMultiplier); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BF374(relative to base address)
		void SetScrollWhenFocusChanges(EScrollWhenFocusChanges NewScrollWhenFocusChanges); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BD76C(relative to base address)
		void SetScrollOffset(float NewScrollOffset); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BD6EC(relative to base address)
		void SetScrollbarVisibility(ESlateVisibility NewScrollBarVisibility); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7497DE810(relative to base address)
		void SetScrollbarThickness(FVector2D& NewScrollbarThickness); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74C2BD87C(relative to base address)
		void SetScrollBarPadding(FMargin& NewScrollbarPadding); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C2BD7EC(relative to base address)
		void SetScrollAnimationInterpolationSpeed(float NewScrollAnimationInterpolationSpeed); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BD4D8(relative to base address)
		void SetOrientation(TEnumAsByte<EOrientation> NewOrientation); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF749877EF4(relative to base address)
		void SetNavigationDestination(EDescendantScrollDestination NewNavigationDestination); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BC968(relative to base address)
		void SetIsTouchScrollingEnabled(bool bInEnableTouchScrolling); // Flags: Final|RequiredAPI|Native|Public, Memory Exec: 0x7FF74C2BBE64(relative to base address)
		void SetConsumeMouseWheel(EConsumeMouseWheel NewConsumeMouseWheel); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BA064(relative to base address)
		void SetAnimateWheelScrolling(bool bShouldAnimateWheelScrolling); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2B9BFC(relative to base address)
		void SetAlwaysShowScrollbar(bool NewAlwaysShowScrollbar); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2B997C(relative to base address)
		void SetAllowOverscroll(bool NewAllowOverscroll); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2B98FC(relative to base address)
		void ScrollWidgetIntoView(UWidget* WidgetToFind, bool AnimateScroll, EDescendantScrollDestination ScrollDestination, float Padding); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF749441624(relative to base address)
		void ScrollToStart(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2B9710(relative to base address)
		void ScrollToEnd(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2B96FC(relative to base address)
		float GetViewOffsetFraction(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2B85FC(relative to base address)
		float GetViewFraction(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2B8580(relative to base address)
		float GetScrollOffsetOfEnd(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2B842C(relative to base address)
		float GetScrollOffset(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2B840C(relative to base address)
		void EndInertialScrolling(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2B7A60(relative to base address)
	};


	// Class UMG.ScrollBoxSlot
	// Inherited from UPanelSlot -> UVisual -> UObject
	// Size: 0x28 (0x60 - 0x38)
	class UScrollBoxSlot : public UPanelSlot	
	{
	public:
		FSlateChildSize Size; // 0x38(0x8)
		FMargin Padding; // 0x40(0x10)
		TEnumAsByte<EHorizontalAlignment> HorizontalAlignment; // 0x50(0x1)
		TEnumAsByte<EVerticalAlignment> VerticalAlignment; // 0x51(0x1)
		unsigned char UnknownData00_7[0xE]; // 0x52(0xE) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.ScrollBoxSlot");
			return ret;
		}

		void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BF034(relative to base address)
		void SetPadding(FMargin InPadding); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7495F91B4(relative to base address)
		void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BB720(relative to base address)
	};


	// Class UMG.SizeBox
	// Inherited from UContentWidget -> UPanelWidget -> UWidget -> UVisual -> UObject
	// Size: 0x38 (0x1A8 - 0x170)
	class USizeBox : public UContentWidget	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0x170(0x10) UNKNOWN PROPERTY
		float WidthOverride; // 0x180(0x4)
		float HeightOverride; // 0x184(0x4)
		float MinDesiredWidth; // 0x188(0x4)
		float MinDesiredHeight; // 0x18C(0x4)
		float MaxDesiredWidth; // 0x190(0x4)
		float MaxDesiredHeight; // 0x194(0x4)
		float MinAspectRatio; // 0x198(0x4)
		float MaxAspectRatio; // 0x19C(0x4)
		bool bOverride_WidthOverride : 1; // 0x1A0:0(0x1)
		bool bOverride_HeightOverride : 1; // 0x1A0:1(0x1)
		bool bOverride_MinDesiredWidth : 1; // 0x1A0:2(0x1)
		bool bOverride_MinDesiredHeight : 1; // 0x1A0:3(0x1)
		bool bOverride_MaxDesiredWidth : 1; // 0x1A0:4(0x1)
		bool bOverride_MaxDesiredHeight : 1; // 0x1A0:5(0x1)
		bool bOverride_MinAspectRatio : 1; // 0x1A0:6(0x1)
		bool bOverride_MaxAspectRatio : 1; // 0x1A0:7(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x1A1(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.SizeBox");
			return ret;
		}

		void SetWidthOverride(float InWidthOverride); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF747A50BB4(relative to base address)
		void SetMinDesiredWidth(float InMinDesiredWidth); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF748BDBA10(relative to base address)
		void SetMinDesiredHeight(float InMinDesiredHeight); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF748E931CC(relative to base address)
		void SetMinAspectRatio(float InMinAspectRatio); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BC4E8(relative to base address)
		void SetMaxDesiredWidth(float InMaxDesiredWidth); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF748FEFF4C(relative to base address)
		void SetMaxDesiredHeight(float InMaxDesiredHeight); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74924DA9C(relative to base address)
		void SetMaxAspectRatio(float InMaxAspectRatio); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BC268(relative to base address)
		void SetHeightOverride(float InHeightOverride); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF747A50AE8(relative to base address)
		void ClearWidthOverride(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF748AB928C(relative to base address)
		void ClearMinDesiredWidth(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2B7990(relative to base address)
		void ClearMinDesiredHeight(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2B797C(relative to base address)
		void ClearMinAspectRatio(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2B7968(relative to base address)
		void ClearMaxDesiredWidth(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF749B28EF4(relative to base address)
		void ClearMaxDesiredHeight(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF749FCCCCC(relative to base address)
		void ClearMaxAspectRatio(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2B792C(relative to base address)
		void ClearHeightOverride(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF748ABA690(relative to base address)
	};


	// Class UMG.SizeBoxSlot
	// Inherited from UPanelSlot -> UVisual -> UObject
	// Size: 0x28 (0x60 - 0x38)
	class USizeBoxSlot : public UPanelSlot	
	{
	public:
		FMargin Padding; // 0x38(0x10)
		unsigned char UnknownData00_6[0x10]; // 0x48(0x10) UNKNOWN PROPERTY
		TEnumAsByte<EHorizontalAlignment> HorizontalAlignment; // 0x58(0x1)
		TEnumAsByte<EVerticalAlignment> VerticalAlignment; // 0x59(0x1)
		unsigned char UnknownData01_7[0x6]; // 0x5A(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.SizeBoxSlot");
			return ret;
		}

		void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7491F022C(relative to base address)
		void SetPadding(FMargin InPadding); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74928ACB8(relative to base address)
		void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BB7A0(relative to base address)
	};


	// Class UMG.Slider
	// Inherited from UWidget -> UVisual -> UObject
	// Size: 0x4E8 (0x640 - 0x158)
	class USlider : public UWidget	
	{
	public:
		float Value; // 0x158(0x4)
		FDelegateProperty ValueDelegate; // 0x15C(0xC)
		float MinValue; // 0x168(0x4)
		float MaxValue; // 0x16C(0x4)
		FSliderStyle WidgetStyle; // 0x170(0x440)
		TEnumAsByte<EOrientation> orientation; // 0x5B0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x5B1(0x3) UNKNOWN PROPERTY
		FLinearColor SliderBarColor; // 0x5B4(0x10)
		FLinearColor SliderHandleColor; // 0x5C4(0x10)
		bool IndentHandle; // 0x5D4(0x1)
		bool Locked; // 0x5D5(0x1)
		bool MouseUsesStep; // 0x5D6(0x1)
		bool RequiresControllerLock; // 0x5D7(0x1)
		float StepSize; // 0x5D8(0x4)
		bool IsFocusable; // 0x5DC(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x5DD(0x3) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnMouseCaptureBegin; // 0x5E0(0x10)
		FMulticastInlineDelegate OnMouseCaptureEnd; // 0x5F0(0x10)
		FMulticastInlineDelegate OnControllerCaptureBegin; // 0x600(0x10)
		FMulticastInlineDelegate OnControllerCaptureEnd; // 0x610(0x10)
		FMulticastInlineDelegate OnValueChanged; // 0x620(0x10)
		unsigned char UnknownData02_7[0x10]; // 0x630(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.Slider");
			return ret;
		}

		void SetValue(float InValue); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74869EA9C(relative to base address)
		void SetStepSize(float InValue); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7496B3BE4(relative to base address)
		void SetSliderHandleColor(FLinearColor InValue); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74C2BDEE4(relative to base address)
		void SetSliderBarColor(FLinearColor InValue); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74C2BDDCC(relative to base address)
		void SetMinValue(float InValue); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BC7E8(relative to base address)
		void SetMaxValue(float InValue); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BC3E8(relative to base address)
		void SetLocked(bool InValue); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BC168(relative to base address)
		void SetIndentHandle(bool InValue); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BB920(relative to base address)
		float GetValue(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74869EA5C(relative to base address)
		float GetNormalizedValue(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2B8310(relative to base address)
	};


	// Class UMG.Spacer
	// Inherited from UWidget -> UVisual -> UObject
	// Size: 0x20 (0x178 - 0x158)
	class USpacer : public UWidget	
	{
	public:
		FVector2D Size; // 0x158(0x10)
		unsigned char UnknownData00_7[0x10]; // 0x168(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.Spacer");
			return ret;
		}

		void SetSize(FVector2D InSize); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74869B698(relative to base address)
	};


	// Class UMG.SpinBox
	// Inherited from UWidget -> UVisual -> UObject
	// Size: 0x638 (0x790 - 0x158)
	class USpinBox : public UWidget	
	{
	public:
		float Value; // 0x158(0x4)
		FDelegateProperty ValueDelegate; // 0x15C(0xC)
		unsigned char UnknownData00_6[0x8]; // 0x168(0x8) UNKNOWN PROPERTY
		FSpinBoxStyle WidgetStyle; // 0x170(0x520)
		int32_t MinFractionalDigits; // 0x690(0x4)
		int32_t MaxFractionalDigits; // 0x694(0x4)
		bool bAlwaysUsesDeltaSnap; // 0x698(0x1)
		bool bEnableSlider; // 0x699(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x69A(0x2) UNKNOWN PROPERTY
		float Delta; // 0x69C(0x4)
		float SliderExponent; // 0x6A0(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x6A4(0x4) UNKNOWN PROPERTY
		FSlateFontInfo Font; // 0x6A8(0x58)
		TEnumAsByte<ETextJustify> Justification; // 0x700(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x701(0x3) UNKNOWN PROPERTY
		float MinDesiredWidth; // 0x704(0x4)
		TEnumAsByte<EVirtualKeyboardType> KeyboardType; // 0x708(0x1)
		bool ClearKeyboardFocusOnCommit; // 0x709(0x1)
		bool SelectAllTextOnCommit; // 0x70A(0x1)
		unsigned char UnknownData04_6[0x1]; // 0x70B(0x1) UNKNOWN PROPERTY
		FSlateColor ForegroundColor; // 0x70C(0x14)
		FMulticastInlineDelegate OnValueChanged; // 0x720(0x10)
		FMulticastInlineDelegate OnValueCommitted; // 0x730(0x10)
		FMulticastInlineDelegate OnBeginSliderMovement; // 0x740(0x10)
		FMulticastInlineDelegate OnEndSliderMovement; // 0x750(0x10)
		bool bOverride_MinValue : 1; // 0x760:0(0x1)
		bool bOverride_MaxValue : 1; // 0x760:1(0x1)
		bool bOverride_MinSliderValue : 1; // 0x760:2(0x1)
		bool bOverride_MaxSliderValue : 1; // 0x760:3(0x1)
		unsigned char UnknownData05_5[0x3]; // 0x761(0x3) UNKNOWN PROPERTY
		float MinValue; // 0x764(0x4)
		float MaxValue; // 0x768(0x4)
		float MinSliderValue; // 0x76C(0x4)
		float MaxSliderValue; // 0x770(0x4)
		unsigned char UnknownData06_7[0x1C]; // 0x774(0x1C) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.SpinBox");
			return ret;
		}

		void SetValue(float NewValue); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BEF34(relative to base address)
		void SetMinValue(float NewValue); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BC868(relative to base address)
		void SetMinSliderValue(float NewValue); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BC768(relative to base address)
		void SetMinFractionalDigits(int32_t NewValue); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BC6E8(relative to base address)
		void SetMaxValue(float NewValue); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BC468(relative to base address)
		void SetMaxSliderValue(float NewValue); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BC368(relative to base address)
		void SetMaxFractionalDigits(int32_t NewValue); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BC2E8(relative to base address)
		void SetForegroundColor(FSlateColor InForegroundColor); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BB324(relative to base address)
		void SetDelta(float NewValue); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BA624(relative to base address)
		void SetAlwaysUsesDeltaSnap(bool bNewValue); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2B99FC(relative to base address)
		void OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit> CommitMethod); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSpinBoxValueChangedEvent__DelegateSignature(float InValue); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSpinBoxBeginSliderMovement__DelegateSignature(); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		float GetValue(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2B8550(relative to base address)
		float GetMinValue(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2B82F0(relative to base address)
		float GetMinSliderValue(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2B82D0(relative to base address)
		int32_t GetMinFractionalDigits(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2B82B8(relative to base address)
		float GetMaxValue(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2B8258(relative to base address)
		float GetMaxSliderValue(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2B8238(relative to base address)
		int32_t GetMaxFractionalDigits(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2B8220(relative to base address)
		float GetDelta(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2B7F40(relative to base address)
		bool GetAlwaysUsesDeltaSnap(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2B7CE4(relative to base address)
		void ClearMinValue(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2B79B8(relative to base address)
		void ClearMinSliderValue(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2B79A4(relative to base address)
		void ClearMaxValue(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2B7954(relative to base address)
		void ClearMaxSliderValue(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2B7940(relative to base address)
	};


	// Class UMG.StackBox
	// Inherited from UPanelWidget -> UWidget -> UVisual -> UObject
	// Size: 0x18 (0x188 - 0x170)
	class UStackBox : public UPanelWidget	
	{
	public:
		TEnumAsByte<EOrientation> orientation; // 0x170(0x1)
		unsigned char UnknownData00_7[0x17]; // 0x171(0x17) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.StackBox");
			return ret;
		}

		bool ReplaceStackBoxChildAt(int32_t Index, UWidget* Content); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2B94C4(relative to base address)
		UStackBoxSlot AddChildToStackBox(UWidget* Content); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7485416B0(relative to base address)
	};


	// Class UMG.StackBoxSlot
	// Inherited from UPanelSlot -> UVisual -> UObject
	// Size: 0x28 (0x60 - 0x38)
	class UStackBoxSlot : public UPanelSlot	
	{
	public:
		FMargin Padding; // 0x38(0x10)
		FSlateChildSize Size; // 0x48(0x8)
		TEnumAsByte<EHorizontalAlignment> HorizontalAlignment; // 0x50(0x1)
		TEnumAsByte<EVerticalAlignment> VerticalAlignment; // 0x51(0x1)
		unsigned char UnknownData00_7[0xE]; // 0x52(0xE) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.StackBoxSlot");
			return ret;
		}
	};


	// Class UMG.TextBlock
	// Inherited from UTextLayoutWidget -> UWidget -> UVisual -> UObject
	// Size: 0x188 (0x300 - 0x178)
	class UTextBlock : public UTextLayoutWidget	
	{
	public:
		FText Text; // 0x178(0x10)
		FDelegateProperty TextDelegate; // 0x188(0xC)
		FSlateColor ColorAndOpacity; // 0x194(0x14)
		FDelegateProperty ColorAndOpacityDelegate; // 0x1A8(0xC)
		float MinDesiredWidth; // 0x1B4(0x4)
		FSlateFontInfo Font; // 0x1B8(0x58)
		FSlateBrush StrikeBrush; // 0x210(0xB0)
		FVector2D ShadowOffset; // 0x2C0(0x10)
		FLinearColor ShadowColorAndOpacity; // 0x2D0(0x10)
		FDelegateProperty ShadowColorAndOpacityDelegate; // 0x2E0(0xC)
		bool bWrapWithInvalidationPanel; // 0x2EC(0x1)
		ETextTransformPolicy TextTransformPolicy; // 0x2ED(0x1)
		ETextOverflowPolicy TextOverflowPolicy; // 0x2EE(0x1)
		bool bSimpleTextMode; // 0x2EF(0x1)
		unsigned char UnknownData00_7[0x10]; // 0x2F0(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.TextBlock");
			return ret;
		}

		void SetTextTransformPolicy(ETextTransformPolicy InTransformPolicy); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF748BA1194(relative to base address)
		void SetTextOverflowPolicy(ETextOverflowPolicy InOverflowPolicy); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BE828(relative to base address)
		void SetText(FText InText); // Flags: RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74A046724(relative to base address)
		void SetStrikeBrush(FSlateBrush InStrikeBrush); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BE2E0(relative to base address)
		void SetShadowOffset(FVector2D InShadowOffset); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74C2BDB38(relative to base address)
		void SetShadowColorAndOpacity(FLinearColor InShadowColorAndOpacity); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74C2BDA20(relative to base address)
		void SetOpacity(float InOpacity); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BCF60(relative to base address)
		void SetMinDesiredWidth(float InMinDesiredWidth); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF749C98264(relative to base address)
		void SetFontOutlineMaterial(UMaterialInterface* InMaterial); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74929FC34(relative to base address)
		void SetFontMaterial(UMaterialInterface* InMaterial); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74929FB80(relative to base address)
		void SetFont(FSlateFontInfo InFontInfo); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF748B1F248(relative to base address)
		void SetColorAndOpacity(FSlateColor InColorAndOpacity); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF748FB4648(relative to base address)
		void SetAutoWrapText(bool InAutoTextWrap); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7492D33A4(relative to base address)
		FText GetText(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF748B32960(relative to base address)
		UMaterialInstanceDynamic GetDynamicOutlineMaterial(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74842820C(relative to base address)
		UMaterialInstanceDynamic GetDynamicFontMaterial(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7484282B8(relative to base address)
	};


	// Class UMG.Throbber
	// Inherited from UWidget -> UVisual -> UObject
	// Size: 0xC8 (0x220 - 0x158)
	class UThrobber : public UWidget	
	{
	public:
		int32_t NumberOfPieces; // 0x158(0x4)
		bool bAnimateHorizontally; // 0x15C(0x1)
		bool bAnimateVertically; // 0x15D(0x1)
		bool bAnimateOpacity; // 0x15E(0x1)
		unsigned char UnknownData00_6[0x1]; // 0x15F(0x1) UNKNOWN PROPERTY
		FSlateBrush Image; // 0x160(0xB0)
		unsigned char UnknownData01_7[0x10]; // 0x210(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.Throbber");
			return ret;
		}

		void SetNumberOfPieces(int32_t InNumberOfPieces); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BCEE0(relative to base address)
		void SetAnimateVertically(bool bInAnimateVertically); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2B9B7C(relative to base address)
		void SetAnimateOpacity(bool bInAnimateOpacity); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2B9AFC(relative to base address)
		void SetAnimateHorizontally(bool bInAnimateHorizontally); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2B9A7C(relative to base address)
	};


	// Class UMG.TileView
	// Inherited from UListView -> UListViewBase -> UWidget -> UVisual -> UObject
	// Size: 0x30 (0xB60 - 0xB30)
	class UTileView : public UListView	
	{
	public:
		float EntryHeight; // 0xB30(0x4)
		float EntryWidth; // 0xB34(0x4)
		EListItemAlignment TileAlignment; // 0xB38(0x1)
		bool bWrapHorizontalNavigation; // 0xB39(0x1)
		ESlateVisibility ScrollbarDisabledVisibility; // 0xB3A(0x1)
		unsigned char UnknownData00_6[0x15]; // 0xB3B(0x15) UNKNOWN PROPERTY
		bool bEntrySizeIncludesEntrySpacing; // 0xB50(0x1)
		unsigned char UnknownData01_7[0x7]; // 0xB51(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.TileView");
			return ret;
		}

		void SetEntryWidth(float NewWidth); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7489CD838(relative to base address)
		void SetEntryHeight(float NewHeight); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7489CD7B8(relative to base address)
		bool IsAligned(); // Flags: Final|RequiredAPI|Native|Private|Const, Memory Exec: 0x7FF74C2B8A28(relative to base address)
		float GetEntryWidth(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2B7FE8(relative to base address)
		float GetEntryHeight(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2B7FD0(relative to base address)
	};


	// Class UMG.TreeView
	// Inherited from UListView -> UListViewBase -> UWidget -> UVisual -> UObject
	// Size: 0x60 (0xB90 - 0xB30)
	class UTreeView : public UListView	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0xB30(0x10) UNKNOWN PROPERTY
		FDelegateProperty BP_OnGetItemChildren; // 0xB40(0xC)
		unsigned char UnknownData01_6[0x4]; // 0xB4C(0x4) UNKNOWN PROPERTY
		FMulticastInlineDelegate BP_OnItemExpansionChanged; // 0xB50(0x10)
		unsigned char UnknownData02_7[0x28]; // 0xB60(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.TreeView");
			return ret;
		}

		void SetItemExpansion(UObject* Item, bool bExpandItem); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BBEE4(relative to base address)
		void ExpandAll(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2B7A74(relative to base address)
		void CollapseAll(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2B79CC(relative to base address)
	};


	// Class UMG.UniformGridPanel
	// Inherited from UPanelWidget -> UWidget -> UVisual -> UObject
	// Size: 0x28 (0x198 - 0x170)
	class UUniformGridPanel : public UPanelWidget	
	{
	public:
		FMargin SlotPadding; // 0x170(0x10)
		float MinDesiredSlotWidth; // 0x180(0x4)
		float MinDesiredSlotHeight; // 0x184(0x4)
		unsigned char UnknownData00_7[0x10]; // 0x188(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.UniformGridPanel");
			return ret;
		}

		void SetSlotPadding(FMargin InSlotPadding); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BDFFC(relative to base address)
		void SetMinDesiredSlotWidth(float InMinDesiredSlotWidth); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BC5E8(relative to base address)
		void SetMinDesiredSlotHeight(float InMinDesiredSlotHeight); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BC568(relative to base address)
		UUniformGridSlot AddChildToUniformGrid(UWidget* Content, int32_t InRow, int32_t InColumn); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2B7444(relative to base address)
	};


	// Class UMG.UniformGridSlot
	// Inherited from UPanelSlot -> UVisual -> UObject
	// Size: 0x18 (0x50 - 0x38)
	class UUniformGridSlot : public UPanelSlot	
	{
	public:
		TEnumAsByte<EHorizontalAlignment> HorizontalAlignment; // 0x38(0x1)
		TEnumAsByte<EVerticalAlignment> VerticalAlignment; // 0x39(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x3A(0x2) UNKNOWN PROPERTY
		int32_t Row; // 0x3C(0x4)
		int32_t Column; // 0x40(0x4)
		unsigned char UnknownData01_7[0xC]; // 0x44(0xC) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.UniformGridSlot");
			return ret;
		}

		void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BF0B4(relative to base address)
		void SetRow(int32_t InRow); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BD458(relative to base address)
		void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BB820(relative to base address)
		void SetColumn(int32_t InColumn); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2B9FE4(relative to base address)
	};


	// Class UMG.VerticalBox
	// Inherited from UPanelWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x180 - 0x170)
	class UVerticalBox : public UPanelWidget	
	{
	public:
		unsigned char UnknownData00_1[0x10]; // 0x170(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.VerticalBox");
			return ret;
		}

		UVerticalBoxSlot AddChildToVerticalBox(UWidget* Content); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2B7540(relative to base address)
	};


	// Class UMG.VerticalBoxSlot
	// Inherited from UPanelSlot -> UVisual -> UObject
	// Size: 0x28 (0x60 - 0x38)
	class UVerticalBoxSlot : public UPanelSlot	
	{
	public:
		FSlateChildSize Size; // 0x38(0x8)
		FMargin Padding; // 0x40(0x10)
		TEnumAsByte<EHorizontalAlignment> HorizontalAlignment; // 0x50(0x1)
		TEnumAsByte<EVerticalAlignment> VerticalAlignment; // 0x51(0x1)
		unsigned char UnknownData00_7[0xE]; // 0x52(0xE) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.VerticalBoxSlot");
			return ret;
		}

		void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BF034(relative to base address)
		void SetSize(FSlateChildSize InSize); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF749B45320(relative to base address)
		void SetPadding(FMargin InPadding); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF748FE0F70(relative to base address)
		void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7497111D4(relative to base address)
	};


	// Class UMG.Viewport
	// Inherited from UContentWidget -> UPanelWidget -> UWidget -> UVisual -> UObject
	// Size: 0x60 (0x1D0 - 0x170)
	class UViewport : public UContentWidget	
	{
	public:
		FLinearColor BackgroundColor; // 0x170(0x10)
		unsigned char UnknownData00_7[0x50]; // 0x180(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.Viewport");
			return ret;
		}

		AActor Spawn(UClass* ActorClass); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BF6D4(relative to base address)
		void SetViewRotation(FRotator Rotation); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74C2BF254(relative to base address)
		void SetViewLocation(FVector Location); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74C2BF134(relative to base address)
		void SetSkyIntensity(float LightIntensity); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BDD44(relative to base address)
		void SetShowFlag(FString InShowFlagName, bool InValue); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BDC50(relative to base address)
		void SetLightIntensity(float LightIntensity); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BC0DC(relative to base address)
		void SetEnableAdvancedFeatures(bool InEnableAdvancedFeatures); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BA8BC(relative to base address)
		FRotator GetViewRotation(); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2B8624(relative to base address)
		UWorld GetViewportWorld(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2B8678(relative to base address)
		FVector GetViewLocation(); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2B85A8(relative to base address)
	};


	// Class UMG.WidgetComponent
	// Inherited from UMeshComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x148 (0x640 - 0x4F8)
	class UWidgetComponent : public UMeshComponent	
	{
	public:
		EWidgetSpace Space; // 0x4F8(0x1)
		EWidgetTimingPolicy TimingPolicy; // 0x4F9(0x1)
		unsigned char UnknownData00_6[0x6]; // 0x4FA(0x6) UNKNOWN PROPERTY
		UClass* WidgetClass; // 0x500(0x8)
		FIntPoint DrawSize; // 0x508(0x8)
		bool bManuallyRedraw; // 0x510(0x1)
		bool bRedrawRequested; // 0x511(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x512(0x2) UNKNOWN PROPERTY
		float RedrawTime; // 0x514(0x4)
		unsigned char UnknownData02_6[0x8]; // 0x518(0x8) UNKNOWN PROPERTY
		FIntPoint CurrentDrawSize; // 0x520(0x8)
		bool bUseInvalidationInWorldSpace; // 0x528(0x1)
		bool bDrawAtDesiredSize; // 0x529(0x1)
		unsigned char UnknownData03_6[0x6]; // 0x52A(0x6) UNKNOWN PROPERTY
		FVector2D Pivot; // 0x530(0x10)
		bool bReceiveHardwareInput; // 0x540(0x1)
		bool bWindowFocusable; // 0x541(0x1)
		EWindowVisibility WindowVisibility; // 0x542(0x1)
		bool bApplyGammaCorrection; // 0x543(0x1)
		unsigned char UnknownData04_6[0x4]; // 0x544(0x4) UNKNOWN PROPERTY
		ULocalPlayer* OwnerPlayer; // 0x548(0x8)
		FLinearColor BackgroundColor; // 0x550(0x10)
		FLinearColor TintColorAndOpacity; // 0x560(0x10)
		float OpacityFromTexture; // 0x570(0x4)
		EWidgetBlendMode BlendMode; // 0x574(0x1)
		bool bIsTwoSided; // 0x575(0x1)
		bool TickWhenOffscreen; // 0x576(0x1)
		unsigned char UnknownData05_6[0x1]; // 0x577(0x1) UNKNOWN PROPERTY
		UBodySetup* BodySetup; // 0x578(0x8)
		UMaterialInterface* TranslucentMaterial; // 0x580(0x8)
		UMaterialInterface* TranslucentMaterial_OneSided; // 0x588(0x8)
		UMaterialInterface* OpaqueMaterial; // 0x590(0x8)
		UMaterialInterface* OpaqueMaterial_OneSided; // 0x598(0x8)
		UMaterialInterface* MaskedMaterial; // 0x5A0(0x8)
		UMaterialInterface* MaskedMaterial_OneSided; // 0x5A8(0x8)
		UTextureRenderTarget2D* RenderTarget; // 0x5B0(0x8)
		UMaterialInstanceDynamic* MaterialInstance; // 0x5B8(0x8)
		bool bAddedToScreen; // 0x5C0(0x1)
		bool bEditTimeUsable; // 0x5C1(0x1)
		unsigned char UnknownData06_6[0x2]; // 0x5C2(0x2) UNKNOWN PROPERTY
		FName SharedLayerName; // 0x5C4(0x4)
		int32_t LayerZOrder; // 0x5C8(0x4)
		EWidgetGeometryMode GeometryMode; // 0x5CC(0x1)
		unsigned char UnknownData07_6[0x3]; // 0x5CD(0x3) UNKNOWN PROPERTY
		double CylinderArcAngle; // 0x5D0(0x8)
		ETickMode TickMode; // 0x5D8(0x1)
		unsigned char UnknownData08_6[0x2F]; // 0x5D9(0x2F) UNKNOWN PROPERTY
		UUserWidget* Widget; // 0x608(0x8)
		unsigned char UnknownData09_7[0x28]; // 0x610(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.WidgetComponent");
			return ret;
		}

		void SetWindowVisibility(EWindowVisibility InVisibility); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BF634(relative to base address)
		void SetWindowFocusable(bool bInWindowFocusable); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BF5AC(relative to base address)
		void SetWidgetSpace(EWidgetSpace NewSpace); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BF478(relative to base address)
		void SetWidget(UUserWidget* Widget); // Flags: RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BF3F4(relative to base address)
		void SetTwoSided(bool bWantTwoSided); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BEE1C(relative to base address)
		void SetTintColorAndOpacity(FLinearColor NewTintColorAndOpacity); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74C2BEBE8(relative to base address)
		void SetTickWhenOffscreen(bool bWantTickWhenOffscreen); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BEB68(relative to base address)
		void SetTickMode(ETickMode InTickMode); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BEAE8(relative to base address)
		void SetRedrawTime(float InRedrawTime); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BD1DC(relative to base address)
		void SetPivot(FVector2D& InPivot); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74C2BD150(relative to base address)
		void SetOwnerPlayer(ULocalPlayer* LocalPlayer); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BCFE0(relative to base address)
		void SetManuallyRedraw(bool bUseManualRedraw); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BC1E8(relative to base address)
		void SetGeometryMode(EWidgetGeometryMode InGeometryMode); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BB450(relative to base address)
		void SetDrawSize(FVector2D Size); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74C2BA724(relative to base address)
		void SetDrawAtDesiredSize(bool bInDrawAtDesiredSize); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BA6A4(relative to base address)
		void SetCylinderArcAngle(double InCylinderArcAngle); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2BA164(relative to base address)
		void SetBackgroundColor(FLinearColor NewBackgroundColor); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74C2B9C7C(relative to base address)
		void RequestRenderUpdate(); // Flags: RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7476E9944(relative to base address)
		void RequestRedraw(); // Flags: RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74935EFF8(relative to base address)
		bool IsWidgetVisible(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2B8AFC(relative to base address)
		EWindowVisibility GetWindowVisiblility(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2B86C8(relative to base address)
		bool GetWindowFocusable(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2B86B0(relative to base address)
		EWidgetSpace GetWidgetSpace(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2B8698(relative to base address)
		UUserWidget GetWidget(); // Flags: RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF749041F80(relative to base address)
		UUserWidget GetUserWidgetObject(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7492F617C(relative to base address)
		bool GetTwoSided(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2B8538(relative to base address)
		bool GetTickWhenOffscreen(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2B8520(relative to base address)
		UTextureRenderTarget2D GetRenderTarget(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2B83D8(relative to base address)
		float GetRedrawTime(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2B8398(relative to base address)
		FVector2D GetPivot(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2B837C(relative to base address)
		ULocalPlayer GetOwnerPlayer(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2B8330(relative to base address)
		UMaterialInstanceDynamic GetMaterialInstance(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7492D44C4(relative to base address)
		bool GetManuallyRedraw(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2B8208(relative to base address)
		EWidgetGeometryMode GetGeometryMode(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2B8040(relative to base address)
		FVector2D GetDrawSize(); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2B7F70(relative to base address)
		bool GetDrawAtDesiredSize(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2B7F58(relative to base address)
		double GetCylinderArcAngle(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2B7E60(relative to base address)
		FVector2D GetCurrentDrawSize(); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2B7E2C(relative to base address)
	};


	// Class UMG.WidgetInteractionComponent
	// Inherited from USceneComponent -> UActorComponent -> UObject
	// Size: 0x2F0 (0x510 - 0x220)
	class UWidgetInteractionComponent : public USceneComponent	
	{
	public:
		FMulticastInlineDelegate OnHoveredWidgetChanged; // 0x220(0x10)
		unsigned char UnknownData00_6[0x10]; // 0x230(0x10) UNKNOWN PROPERTY
		int32_t VirtualUserIndex; // 0x240(0x4)
		int32_t PointerIndex; // 0x244(0x4)
		TEnumAsByte<ECollisionChannel> TraceChannel; // 0x248(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x249(0x3) UNKNOWN PROPERTY
		float InteractionDistance; // 0x24C(0x4)
		EWidgetInteractionSource InteractionSource; // 0x250(0x1)
		bool bEnableHitTesting; // 0x251(0x1)
		bool bShowDebug; // 0x252(0x1)
		unsigned char UnknownData02_6[0x1]; // 0x253(0x1) UNKNOWN PROPERTY
		float DebugSphereLineThickness; // 0x254(0x4)
		float DebugLineThickness; // 0x258(0x4)
		FLinearColor DebugColor; // 0x25C(0x10)
		unsigned char UnknownData03_6[0x7C]; // 0x26C(0x7C) UNKNOWN PROPERTY
		FHitResult CustomHitResult; // 0x2E8(0xF8)
		FVector2D LocalHitLocation; // 0x3E0(0x10)
		FVector2D LastLocalHitLocation; // 0x3F0(0x10)
		UWidgetComponent* HoveredWidgetComponent; // 0x400(0x8)
		FHitResult LastHitResult; // 0x408(0xF8)
		bool bIsHoveredWidgetInteractable; // 0x500(0x1)
		bool bIsHoveredWidgetFocusable; // 0x501(0x1)
		bool bIsHoveredWidgetHitTestVisible; // 0x502(0x1)
		unsigned char UnknownData04_7[0xD]; // 0x503(0xD) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.WidgetInteractionComponent");
			return ret;
		}

		void SetFocus(UWidget* FocusWidget); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2D5E68(relative to base address)
		void SetCustomHitResult(FHitResult& HitResult); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C2D5AF4(relative to base address)
		bool SendKeyChar(FString Characters, bool bRepeat); // Flags: RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2D5548(relative to base address)
		void ScrollWheel(float ScrollDelta); // Flags: RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2D54C4(relative to base address)
		void ReleasePointerKey(FKey Key); // Flags: RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2D4984(relative to base address)
		bool ReleaseKey(FKey Key); // Flags: RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2D46C8(relative to base address)
		void PressPointerKey(FKey Key); // Flags: RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2D33D8(relative to base address)
		bool PressKey(FKey Key, bool bRepeat); // Flags: RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2D3144(relative to base address)
		bool PressAndReleaseKey(FKey Key); // Flags: RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2D2F80(relative to base address)
		bool IsOverInteractableWidget(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2D2224(relative to base address)
		bool IsOverHitTestVisibleWidget(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2D220C(relative to base address)
		bool IsOverFocusableWidget(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2D21F4(relative to base address)
		FHitResult GetLastHitResult(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2D18F4(relative to base address)
		UWidgetComponent GetHoveredWidgetComponent(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2D1464(relative to base address)
		FVector2D Get2DHitLocation(); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2D091C(relative to base address)
	};


	// Class UMG.WidgetSwitcher
	// Inherited from UPanelWidget -> UWidget -> UVisual -> UObject
	// Size: 0x18 (0x188 - 0x170)
	class UWidgetSwitcher : public UPanelWidget	
	{
	public:
		int32_t ActiveWidgetIndex; // 0x170(0x4)
		unsigned char UnknownData00_7[0x14]; // 0x174(0x14) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.WidgetSwitcher");
			return ret;
		}

		void SetActiveWidgetIndex(int32_t Index); // Flags: RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74731BDFC(relative to base address)
		void SetActiveWidget(UWidget* Widget); // Flags: RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74731BBD0(relative to base address)
		UWidget GetWidgetAtIndex(int32_t Index); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2D1F0C(relative to base address)
		int32_t GetNumWidgets(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2D1CF0(relative to base address)
		int32_t GetActiveWidgetIndex(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2D0A14(relative to base address)
		UWidget GetActiveWidget(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74731B778(relative to base address)
	};


	// Class UMG.WidgetSwitcherSlot
	// Inherited from UPanelSlot -> UVisual -> UObject
	// Size: 0x20 (0x58 - 0x38)
	class UWidgetSwitcherSlot : public UPanelSlot	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x38(0x8) UNKNOWN PROPERTY
		FMargin Padding; // 0x40(0x10)
		TEnumAsByte<EHorizontalAlignment> HorizontalAlignment; // 0x50(0x1)
		TEnumAsByte<EVerticalAlignment> VerticalAlignment; // 0x51(0x1)
		unsigned char UnknownData01_7[0x6]; // 0x52(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.WidgetSwitcherSlot");
			return ret;
		}

		void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2D77DC(relative to base address)
		void SetPadding(FMargin InPadding); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2D6E3C(relative to base address)
		void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2D6214(relative to base address)
	};


	// Class UMG.WindowTitleBarArea
	// Inherited from UContentWidget -> UPanelWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x190 - 0x170)
	class UWindowTitleBarArea : public UContentWidget	
	{
	public:
		bool bWindowButtonsEnabled; // 0x170(0x1)
		bool bDoubleClickTogglesFullscreen; // 0x171(0x1)
		unsigned char UnknownData00_7[0x1E]; // 0x172(0x1E) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.WindowTitleBarArea");
			return ret;
		}

		void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2D785C(relative to base address)
		void SetPadding(FMargin InPadding); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2D6F58(relative to base address)
		void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2D6294(relative to base address)
	};


	// Class UMG.WindowTitleBarAreaSlot
	// Inherited from UPanelSlot -> UVisual -> UObject
	// Size: 0x28 (0x60 - 0x38)
	class UWindowTitleBarAreaSlot : public UPanelSlot	
	{
	public:
		FMargin Padding; // 0x38(0x10)
		TEnumAsByte<EHorizontalAlignment> HorizontalAlignment; // 0x48(0x1)
		TEnumAsByte<EVerticalAlignment> VerticalAlignment; // 0x49(0x1)
		unsigned char UnknownData00_7[0x16]; // 0x4A(0x16) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.WindowTitleBarAreaSlot");
			return ret;
		}

		void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2D78DC(relative to base address)
		void SetPadding(FMargin InPadding); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2D7074(relative to base address)
		void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2D6314(relative to base address)
	};


	// Class UMG.WrapBox
	// Inherited from UPanelWidget -> UWidget -> UVisual -> UObject
	// Size: 0x28 (0x198 - 0x170)
	class UWrapBox : public UPanelWidget	
	{
	public:
		FVector2D InnerSlotPadding; // 0x170(0x10)
		float WrapSize; // 0x180(0x4)
		bool bExplicitWrapSize; // 0x184(0x1)
		TEnumAsByte<EHorizontalAlignment> HorizontalAlignment; // 0x185(0x1)
		TEnumAsByte<EOrientation> orientation; // 0x186(0x1)
		unsigned char UnknownData00_7[0x11]; // 0x187(0x11) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.WrapBox");
			return ret;
		}

		void SetInnerSlotPadding(FVector2D InPadding); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74C2D6418(relative to base address)
		void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74970D208(relative to base address)
		UWrapBoxSlot AddChildToWrapBox(UWidget* Content); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2CDA50(relative to base address)
	};


	// Class UMG.WrapBoxSlot
	// Inherited from UPanelSlot -> UVisual -> UObject
	// Size: 0x20 (0x58 - 0x38)
	class UWrapBoxSlot : public UPanelSlot	
	{
	public:
		FMargin Padding; // 0x38(0x10)
		float FillSpanWhenLessThan; // 0x48(0x4)
		TEnumAsByte<EHorizontalAlignment> HorizontalAlignment; // 0x4C(0x1)
		TEnumAsByte<EVerticalAlignment> VerticalAlignment; // 0x4D(0x1)
		bool bFillEmptySpace; // 0x4E(0x1)
		bool bForceNewLine; // 0x4F(0x1)
		unsigned char UnknownData00_7[0x8]; // 0x50(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.WrapBoxSlot");
			return ret;
		}

		void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2D7960(relative to base address)
		void SetPadding(FMargin InPadding); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2D7190(relative to base address)
		void SetNewLine(bool InForceNewLine); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2D6C34(relative to base address)
		void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2D6398(relative to base address)
		void SetFillSpanWhenLessThan(float InFillSpanWhenLessThan); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2D5DE8(relative to base address)
		void SetFillEmptySpace(bool InbFillEmptySpace); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2D5D68(relative to base address)
	};


	// Class UMG.DragDropOperation
	// Inherited from UObject
	// Size: 0x68 (0x90 - 0x28)
	class UDragDropOperation : public UObject	
	{
	public:
		FString Tag; // 0x28(0x10)
		UObject* Payload; // 0x38(0x8)
		UWidget* DefaultDragVisual; // 0x40(0x8)
		EDragPivot Pivot; // 0x48(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x49(0x7) UNKNOWN PROPERTY
		FVector2D Offset; // 0x50(0x10)
		FMulticastInlineDelegate OnDrop; // 0x60(0x10)
		FMulticastInlineDelegate OnDragCancelled; // 0x70(0x10)
		FMulticastInlineDelegate OnDragged; // 0x80(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.DragDropOperation");
			return ret;
		}

		void Drop(FPointerEvent& PointerEvent); // Flags: RequiredAPI|Native|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF74C2D0758(relative to base address)
		void Dragged(FPointerEvent& PointerEvent); // Flags: RequiredAPI|Native|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF74C2CEB64(relative to base address)
		void DragCancelled(FPointerEvent& PointerEvent); // Flags: RequiredAPI|Native|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF74C2CEABC(relative to base address)
	};


	// Class UMG.SlateBlueprintLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class USlateBlueprintLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.SlateBlueprintLibrary");
			return ret;
		}

		FVector2D TransformVectorLocalToAbsolute(FGeometry& Geometry, FVector2D LocalVector); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C2D83D8(relative to base address)
		FVector2D TransformVectorAbsoluteToLocal(FGeometry& Geometry, FVector2D AbsoluteVector); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C2D823C(relative to base address)
		float TransformScalarLocalToAbsolute(FGeometry& Geometry, float LocalScalar); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C2D8108(relative to base address)
		float TransformScalarAbsoluteToLocal(FGeometry& Geometry, float AbsoluteScalar); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C2D7FD4(relative to base address)
		void ScreenToWidgetLocal(UObject* WorldContextObject, FGeometry& Geometry, FVector2D ScreenPosition, FVector2D& LocalCoordinate, bool bIncludeWindowPosition); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C2D5218(relative to base address)
		void ScreenToWidgetAbsolute(UObject* WorldContextObject, FVector2D ScreenPosition, FVector2D& AbsoluteCoordinate, bool bIncludeWindowPosition); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C2D4FC4(relative to base address)
		void ScreenToViewport(UObject* WorldContextObject, FVector2D ScreenPosition, FVector2D& ViewportPosition); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C2D4E30(relative to base address)
		void LocalToViewport(UObject* WorldContextObject, FGeometry& Geometry, FVector2D LocalCoordinate, FVector2D& PixelPosition, FVector2D& ViewportPosition); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C2D2698(relative to base address)
		FVector2D LocalToAbsolute(FGeometry& Geometry, FVector2D LocalCoordinate); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C2D2500(relative to base address)
		bool IsUnderLocation(FGeometry& Geometry, FVector2D& AbsoluteCoordinate); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C2D223C(relative to base address)
		FVector2D GetLocalTopLeft(FGeometry& Geometry); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C2D19A0(relative to base address)
		FVector2D GetLocalSize(FGeometry& Geometry); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF749336604(relative to base address)
		FVector2D GetAbsoluteSize(FGeometry& Geometry); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C2D0938(relative to base address)
		bool EqualEqual_SlateBrush(FSlateBrush& A, FSlateBrush& B); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7489BFE54(relative to base address)
		void AbsoluteToViewport(UObject* WorldContextObject, FVector2D AbsoluteDesktopCoordinate, FVector2D& PixelPosition, FVector2D& ViewportPosition); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C2CD864(relative to base address)
		FVector2D AbsoluteToLocal(FGeometry& Geometry, FVector2D AbsoluteCoordinate); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C2CD6CC(relative to base address)
	};


	// Class UMG.SlateVectorArtData
	// Inherited from UObject
	// Size: 0x48 (0x70 - 0x28)
	class USlateVectorArtData : public UObject	
	{
	public:
		TArray<FSlateMeshVertex> VertexData; // 0x28(0x10)
		TArray<uint32_t> IndexData; // 0x38(0x10)
		UMaterialInterface* Material; // 0x48(0x8)
		FVector2D ExtentMin; // 0x50(0x10)
		FVector2D ExtentMax; // 0x60(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.SlateVectorArtData");
			return ret;
		}
	};


	// Class UMG.WidgetBlueprintGeneratedClass
	// Inherited from UBlueprintGeneratedClass -> UClass -> UStruct -> UField -> UObject
	// Size: 0x70 (0x3D0 - 0x360)
	class UWidgetBlueprintGeneratedClass : public UBlueprintGeneratedClass	
	{
	public:
		UWidgetTree* WidgetTree; // 0x360(0x8)
		TArray<UWidgetBlueprintGeneratedClassExtension*> Extensions; // 0x368(0x10)
		bool bClassRequiresNativeTick : 1; // 0x378:0(0x1)
		bool bCanCallInitializedWithoutPlayerContext : 1; // 0x378:1(0x1)
		unsigned char UnknownData00_5[0x7]; // 0x379(0x7) UNKNOWN PROPERTY
		TArray<FDelegateRuntimeBinding> Bindings; // 0x380(0x10)
		TArray<UWidgetAnimation*> Animations; // 0x390(0x10)
		TArray<FName> NamedSlots; // 0x3A0(0x10)
		TArray<FName> AvailableNamedSlots; // 0x3B0(0x10)
		TArray<FName> InstanceNamedSlots; // 0x3C0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.WidgetBlueprintGeneratedClass");
			return ret;
		}
	};


	// Class UMG.WidgetBlueprintLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UWidgetBlueprintLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.WidgetBlueprintLibrary");
			return ret;
		}

		FEventReply UnlockMouse(FEventReply& Reply); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C2D8654(relative to base address)
		FEventReply Unhandled(); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C2D85F0(relative to base address)
		void SetWindowTitleBarState(UWidget* TitleBarContent, EWindowTitleBarMode Mode, bool bTitleBarDragEnabled, bool bWindowButtonsVisible, bool bTitleBarVisible); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74C2D7A50(relative to base address)
		void SetWindowTitleBarOnCloseClickedDelegate(FDelegateProperty Delegate); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7483CF798(relative to base address)
		void SetWindowTitleBarCloseButtonActive(bool bActive); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74C2D79E0(relative to base address)
		FEventReply SetUserFocus(FEventReply& Reply, UWidget* FocusWidget, bool bInAllUsers); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C2D7560(relative to base address)
		FEventReply SetMousePosition(FEventReply& Reply, FVector2D NewMousePosition); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C2D6A74(relative to base address)
		void SetInputMode_UIOnlyEx(APlayerController* PlayerController, UWidget* InWidgetToFocus, EMouseLockMode InMouseLockMode, bool bFlushInput); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74C2D68B0(relative to base address)
		void SetInputMode_GameOnly(APlayerController* PlayerController, bool bFlushInput); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74C2D67C4(relative to base address)
		void SetInputMode_GameAndUIEx(APlayerController* PlayerController, UWidget* InWidgetToFocus, EMouseLockMode InMouseLockMode, bool bHideCursorDuringCapture, bool bFlushInput); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74C2D65B0(relative to base address)
		bool SetHardwareCursor(UObject* WorldContextObject, TEnumAsByte<EMouseCursor> CursorShape, FName CursorName, FVector2D HotSpot); // Flags: Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74C2D605C(relative to base address)
		void SetFocusToGameViewport(); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74C2D5F14(relative to base address)
		void SetColorVisionDeficiencyType(EColorVisionDeficiency Type, float Severity, bool CorrectDeficiency, bool ShowCorrectionWithDeficiency); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74C2D59BC(relative to base address)
		void SetBrushResourceToTexture(FSlateBrush& Brush, UTexture2D* Texture); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C2D588C(relative to base address)
		void SetBrushResourceToMaterial(FSlateBrush& Brush, UMaterialInterface* Material); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7489BFAB8(relative to base address)
		void RestorePreviousWindowTitleBarState(); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74C2D4D3C(relative to base address)
		FEventReply ReleaseMouseCapture(FEventReply& Reply); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C2D488C(relative to base address)
		FEventReply ReleaseJoystickCapture(FEventReply& Reply, bool bInAllJoysticks); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C2D4508(relative to base address)
		void OnGameWindowCloseButtonClickedDelegate__DelegateSignature(); // Flags: Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		FSlateBrush NoResourceBrush(); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF749C9A524(relative to base address)
		FSlateBrush MakeBrushFromTexture(UTexture2D* Texture, int32_t Width, int32_t Height); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7494A2C20(relative to base address)
		FSlateBrush MakeBrushFromMaterial(UMaterialInterface* Material, int32_t Width, int32_t Height); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF748D66060(relative to base address)
		FSlateBrush MakeBrushFromAsset(USlateBrushAsset* BrushAsset); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C2D2ACC(relative to base address)
		FEventReply LockMouse(FEventReply& Reply, UWidget* CapturingWidget); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C2D28C0(relative to base address)
		bool IsDragDropping(); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C2D20B8(relative to base address)
		FEventReply Handled(); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C2D1F98(relative to base address)
		void GetSafeZonePadding(UObject* WorldContextObject, FVector4& SafePadding, FVector2D& SafePaddingScale, FVector4& SpillOverPadding); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7482E93EC(relative to base address)
		FKeyEvent GetKeyEventFromAnalogInputEvent(FAnalogInputEvent& Event); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C2D1800(relative to base address)
		FInputEvent GetInputEventFromPointerEvent(FPointerEvent& Event); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C2D1734(relative to base address)
		FInputEvent GetInputEventFromNavigationEvent(FNavigationEvent& Event); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C2D1654(relative to base address)
		FInputEvent GetInputEventFromKeyEvent(FKeyEvent& Event); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C2D155C(relative to base address)
		FInputEvent GetInputEventFromCharacterEvent(FCharacterEvent& Event); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C2D147C(relative to base address)
		UMaterialInstanceDynamic GetDynamicMaterial(FSlateBrush& Brush); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7489BFD24(relative to base address)
		UDragDropOperation GetDragDroppingContent(); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C2D135C(relative to base address)
		UTexture2D GetBrushResourceAsTexture2D(FSlateBrush& Brush); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C2D12B8(relative to base address)
		UMaterialInterface GetBrushResourceAsMaterial(FSlateBrush& Brush); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7489BFC7C(relative to base address)
		UObject GetBrushResource(FSlateBrush& Brush); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7489BFDBC(relative to base address)
		void GetAllWidgetsWithInterface(UObject* WorldContextObject, TArray<UUserWidget*>& FoundWidgets, UClass* Interface, bool TopLevelOnly); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C2D0E60(relative to base address)
		void GetAllWidgetsOfClass(UObject* WorldContextObject, TArray<UUserWidget*>& FoundWidgets, UClass* WidgetClass, bool TopLevelOnly); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C2D0ABC(relative to base address)
		FEventReply EndDragDrop(FEventReply& Reply); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C2D0800(relative to base address)
		void DrawTextFormatted(FPaintContext& Context, FText& Text, FVector2D Position, UFont* Font, float FontSize, FName FontTypeFace, FLinearColor Tint); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74C2D0110(relative to base address)
		void DrawText(FPaintContext& Context, FString InString, FVector2D Position, FLinearColor Tint); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74C2CFDFC(relative to base address)
		void DrawSpline(FPaintContext& Context, FVector2D Start, FVector2D StartDir, FVector2D End, FVector2D EndDir, FLinearColor Tint, float Thickness); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74C2CF8A4(relative to base address)
		void DrawLines(FPaintContext& Context, TArray<FVector2D>& Points, FLinearColor Tint, bool bAntiAlias, float Thickness); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74C2CF550(relative to base address)
		void DrawLine(FPaintContext& Context, FVector2D PositionA, FVector2D PositionB, FLinearColor Tint, bool bAntiAlias, float Thickness); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74C2CF0DC(relative to base address)
		void DrawBox(FPaintContext& Context, FVector2D Position, FVector2D Size, USlateBrushAsset* Brush, FLinearColor Tint); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74C2CEC0C(relative to base address)
		void DismissAllMenus(); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74C2CEAA0(relative to base address)
		FEventReply DetectDragIfPressed(FPointerEvent& PointerEvent, UWidget* WidgetDetectingDrag, FKey DragKey); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C2CE778(relative to base address)
		FEventReply DetectDrag(FEventReply& Reply, UWidget* WidgetDetectingDrag, FKey DragKey); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C2CE450(relative to base address)
		UDragDropOperation CreateDragDropOperation(UClass* OperationClass); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74C2CE36C(relative to base address)
		UUserWidget Create(UObject* WorldContextObject, UClass* WidgetType, APlayerController* OwningPlayer); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74A0470D8(relative to base address)
		FEventReply ClearUserFocus(FEventReply& Reply, bool bInAllUsers); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C2CE1B0(relative to base address)
		FEventReply CaptureMouse(FEventReply& Reply, UWidget* CapturingWidget); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C2CDFA4(relative to base address)
		FEventReply CaptureJoystick(FEventReply& Reply, UWidget* CapturingWidget, bool bInAllJoysticks); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C2CDCC0(relative to base address)
		void CancelDragDrop(); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74C2CDC90(relative to base address)
	};


	// Class UMG.WidgetLayoutLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UWidgetLayoutLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.WidgetLayoutLibrary");
			return ret;
		}

		UWrapBoxSlot SlotAsWrapBoxSlot(UWidget* Widget); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C2D7E5C(relative to base address)
		UWidgetSwitcherSlot SlotAsWidgetSwitcherSlot(UWidget* Widget); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C2D7DBC(relative to base address)
		UVerticalBoxSlot SlotAsVerticalBoxSlot(UWidget* Widget); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF748F9F7B4(relative to base address)
		UUniformGridSlot SlotAsUniformGridSlot(UWidget* Widget); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C2D7D1C(relative to base address)
		USizeBoxSlot SlotAsSizeBoxSlot(UWidget* Widget); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74896D9B0(relative to base address)
		UScrollBoxSlot SlotAsScrollBoxSlot(UWidget* Widget); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7495EA8C0(relative to base address)
		UScaleBoxSlot SlotAsScaleBoxSlot(UWidget* Widget); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C2D7C7C(relative to base address)
		USafeZoneSlot SlotAsSafeBoxSlot(UWidget* Widget); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C2D7BDC(relative to base address)
		UOverlaySlot SlotAsOverlaySlot(UWidget* Widget); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF748FF24FC(relative to base address)
		UHorizontalBoxSlot SlotAsHorizontalBoxSlot(UWidget* Widget); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7489F61D0(relative to base address)
		UGridSlot SlotAsGridSlot(UWidget* Widget); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF748C994D8(relative to base address)
		UCanvasPanelSlot SlotAsCanvasSlot(UWidget* Widget); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7499783B8(relative to base address)
		UBorderSlot SlotAsBorderSlot(UWidget* Widget); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7492FDA54(relative to base address)
		void RemoveAllWidgets(UObject* WorldContextObject); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74C2D4B38(relative to base address)
		bool ProjectWorldLocationToWidgetPosition(APlayerController* PlayerController, FVector WorldLocation, FVector2D& ScreenPosition, bool bPlayerViewportRelative); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C2D358C(relative to base address)
		FGeometry GetViewportWidgetGeometry(UObject* WorldContextObject); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74C2D1E60(relative to base address)
		FVector2D GetViewportSize(UObject* WorldContextObject); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7482E9C80(relative to base address)
		float GetViewportScale(UObject* WorldContextObject); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C2D1DE0(relative to base address)
		FGeometry GetPlayerScreenWidgetGeometry(APlayerController* PlayerController); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74C2D1D34(relative to base address)
		bool GetMousePositionScaledByDPI(APlayerController* Player, float& LocationX, float& LocationY); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C2D1B98(relative to base address)
		FVector2D GetMousePositionOnViewport(UObject* WorldContextObject); // Flags: Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74C2D1B10(relative to base address)
		FVector2D GetMousePositionOnPlatform(); // Flags: Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74C2D1AE0(relative to base address)
	};


	// Class UMG.WidgetTree
	// Inherited from UObject
	// Size: 0x60 (0x88 - 0x28)
	class UWidgetTree : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		UWidget* RootWidget; // 0x30(0x8)
		TMap<FName, UWidget*> NamedSlotBindings; // 0x38(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.WidgetTree");
			return ret;
		}
	};

}
