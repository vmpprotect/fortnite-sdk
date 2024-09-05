#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: UMG
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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
	// Size: 0x138 (0x160 - 0x28)
	class UWidget : public UVisual	
	{
	public:
		unsigned char UnknownData07_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		UPanelSlot Slot; // 0x30(0x8)
		FDelegateProperty bIsEnabledDelegate; // 0x38(0xC)
		unsigned char UnknownData08_6[0x4]; // 0x44(0x4) UNKNOWN PROPERTY
		FText ToolTipText; // 0x48(0x10)
		FDelegateProperty ToolTipTextDelegate; // 0x58(0xC)
		unsigned char UnknownData09_6[0x4]; // 0x64(0x4) UNKNOWN PROPERTY
		UWidget ToolTipWidget; // 0x68(0x8)
		FDelegateProperty ToolTipWidgetDelegate; // 0x70(0xC)
		FDelegateProperty VisibilityDelegate; // 0x7C(0xC)
		FWidgetTransform RenderTransform; // 0x88(0x38)
		FVector2D RenderTransformPivot; // 0xC0(0x10)
		EFlowDirectionPreference FlowDirectionPreference; // 0xD0(0x1)
		bool bIsVariable : 1; // 0xD1:0(0x1)
		bool bCreatedByConstructionScript : 1; // 0xD1:1(0x1)
		bool bIsEnabled : 1; // 0xD1:2(0x1)
		bool bOverride_Cursor : 1; // 0xD1:3(0x1)
		bool bIsVolatile : 1; // 0xD1:4(0x1)
		TEnumAsByte Cursor; // 0xD2(0x1)
		EWidgetClipping Clipping; // 0xD3(0x1)
		ESlateVisibility Visibility; // 0xD4(0x1)
		unsigned char UnknownData10_6[0x3]; // 0xD5(0x3) UNKNOWN PROPERTY
		float RenderOpacity; // 0xD8(0x4)
		EWidgetPixelSnapping PixelSnapping; // 0xDC(0x1)
		unsigned char UnknownData11_6[0x3]; // 0xDD(0x3) UNKNOWN PROPERTY
		USlateAccessibleWidgetData AccessibleWidgetData; // 0xE0(0x8)
		UWidgetNavigation Navigation; // 0xE8(0x8)
		unsigned char UnknownData12_6[0x40]; // 0xF0(0x40) UNKNOWN PROPERTY
		TArray NativeBindings; // 0x130(0x10)
		unsigned char UnknownData13_7[0x20]; // 0x140(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.Widget");
			return ret;
		}

		void SetVisibility(ESlateVisibility InVisibility); // Flags: RequiredAPI|Native|Public|BlueprintCallable 0x7FF411038A30
		void SetUserFocus(APlayerController PlayerController); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF411038950
		void SetToolTipText(FText& InToolTipText); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF411038870
		void SetToolTip(UWidget Widget); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF411038790
		void SetRenderTranslation(FVector2D Translation); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 0x7FF4110386B0
		void SetRenderTransformPivot(FVector2D Pivot); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 0x7FF4110385D0
		void SetRenderTransformAngle(float Angle); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4110384F0
		void SetRenderTransform(FWidgetTransform InTransform); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF411038350
		void SetRenderShear(FVector2D Shear); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 0x7FF411038270
		void SetRenderScale(FVector2D Scale); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 0x7FF411038190
		void SetRenderOpacity(float InOpacity); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4110380B0
		void SetNavigationRuleExplicit(EUINavigation Direction, UWidget InWidget); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF411037FD0
		void SetNavigationRuleCustomBoundary(EUINavigation Direction, FDelegateProperty InCustomDelegate); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF411037EF0
		void SetNavigationRuleCustom(EUINavigation Direction, FDelegateProperty InCustomDelegate); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF411037D30
		void SetNavigationRuleBase(EUINavigation Direction, EUINavigationRule Rule); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF411037C50
		void SetNavigationRule(EUINavigation Direction, EUINavigationRule Rule, FName WidgetToFocus); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF411037B70
		void SetKeyboardFocus(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF411037A90
		void SetIsEnabled(bool bInIsEnabled); // Flags: RequiredAPI|Native|Public|BlueprintCallable 0x7FF4110379B0
		void SetFocus(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4110378D0
		void SetCursor(TEnumAsByte InCursor); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4110377F0
		void SetClipping(EWidgetClipping InClipping); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF411037710
		void SetAllNavigationRules(EUINavigationRule Rule, FName WidgetToFocus); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF411037630
		void ResetCursor(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF411037550
		void RemoveFromParent(); // Flags: RequiredAPI|Native|Public|BlueprintCallable 0x7FF411037470
		FEventReply OnReply__DelegateSignature(); // Flags: Public|Delegate 0x7FF411037390
		FEventReply OnPointerEvent__DelegateSignature(FGeometry MyGeometry, FPointerEvent& MouseEvent); // Flags: Public|Delegate|HasOutParms 0x7FF411037070
		void K2_RemoveFieldValueChangedDelegate(FFieldNotificationId FieldId, FDelegateProperty Delegate); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF411036F90
		void K2_BroadcastFieldValueChanged(FFieldNotificationId FieldId); // Flags: Final|RequiredAPI|Native|Protected|BlueprintCallable 0x7FF411036EB0
		void K2_AddFieldValueChangedDelegate(FFieldNotificationId FieldId, FDelegateProperty Delegate); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF411036C30
		bool IsVisible(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF411036B50
		bool IsRendered(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF411036A70
		bool IsInViewport(); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF411036990
		bool IsHovered(); // Flags: RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4110368B0
		void InvalidateLayoutAndVolatility(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4110367D0
		bool HasUserFocusedDescendants(APlayerController PlayerController); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4110366F0
		bool HasUserFocus(APlayerController PlayerController); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF411036610
		bool HasMouseCaptureByUser(int32_t UserIndex, int32_t PointerIndex); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF411036530
		bool HasMouseCapture(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF411036450
		bool HasKeyboardFocus(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF411036370
		bool HasFocusedDescendants(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF411036290
		bool HasAnyUserFocus(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4110361B0
		UWidget GetWidget__DelegateSignature(); // Flags: Public|Delegate 0x7FF4110360D0
		ESlateVisibility GetVisibility(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF411035FF0
		FGeometry GetTickSpaceGeometry(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF411035F10
		FText GetText__DelegateSignature(); // Flags: Public|Delegate 0x7FF411035E30
		ESlateVisibility GetSlateVisibility__DelegateSignature(); // Flags: Public|Delegate 0x7FF411035CE8
		FSlateColor GetSlateColor__DelegateSignature(); // Flags: Public|Delegate 0x7FF411035C08
		FSlateBrush GetSlateBrush__DelegateSignature(); // Flags: Public|Delegate 0x7FF411035768
		float GetRenderTransformAngle(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF411035688
		float GetRenderOpacity(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4110355A8
		UPanelWidget GetParent(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4110354C8
		FGeometry GetPaintSpaceGeometry(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4110353E8
		APlayerController GetOwningPlayer(); // Flags: RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF411035308
		ULocalPlayer GetOwningLocalPlayer(); // Flags: RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF411035228
		TEnumAsByte GetMouseCursor__DelegateSignature(); // Flags: Public|Delegate 0x7FF411035148
		FLinearColor GetLinearColor__DelegateSignature(); // Flags: Public|Delegate|HasDefaults 0x7FF411035068
		bool GetIsEnabled(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF411034F88
		int32_t GetInt32__DelegateSignature(); // Flags: Public|Delegate 0x7FF411034EA8
		UGameInstance GetGameInstance(); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF411034DC8
		float GetFloat__DelegateSignature(); // Flags: Public|Delegate 0x7FF411034CE8
		FVector2D GetDesiredSize(); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF411034C08
		EWidgetClipping GetClipping(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF411034B28
		ECheckBoxState GetCheckBoxState__DelegateSignature(); // Flags: Public|Delegate 0x7FF411034A48
		FGeometry GetCachedGeometry(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4110348A8
		bool GetBool__DelegateSignature(); // Flags: Public|Delegate 0x7FF4110347C8
		FText GetAccessibleText(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4110346E8
		FText GetAccessibleSummaryText(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF411034608
		UWidget GenerateWidgetForString__DelegateSignature(FString Item); // Flags: Public|Delegate 0x7FF411034528
		UWidget GenerateWidgetForObject__DelegateSignature(UObject Item); // Flags: Public|Delegate 0x7FF411034448
		void ForceVolatile(bool bForce); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF411034368
		void ForceLayoutPrepass(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF411034288
	};


	// Class UMG.ListViewBase
	// Inherited from UWidget -> UVisual -> UObject
	// Size: 0x128 (0x288 - 0x160)
	class UListViewBase : public UWidget	
	{
	public:
		FMulticastInlineDelegate BP_OnEntryGenerated; // 0x160(0x10)
		unsigned char UnknownData05_6[0x10]; // 0x170(0x10) UNKNOWN PROPERTY
		UClass EntryWidgetClass; // 0x180(0x8)
		float WheelScrollMultiplier; // 0x188(0x4)
		bool bEnableScrollAnimation; // 0x18C(0x1)
		unsigned char UnknownData06_6[0x3]; // 0x18D(0x3) UNKNOWN PROPERTY
		float ScrollingAnimationInterpolationSpeed; // 0x190(0x4)
		bool bInEnableTouchAnimatedScrolling; // 0x194(0x1)
		bool AllowOverscroll; // 0x195(0x1)
		bool bEnableRightClickScrolling; // 0x196(0x1)
		bool bEnableTouchScrolling; // 0x197(0x1)
		bool bIsPointerScrollingEnabled; // 0x198(0x1)
		bool bIsGamepadScrollingEnabled; // 0x199(0x1)
		bool bEnableFixedLineOffset; // 0x19A(0x1)
		unsigned char UnknownData07_6[0x1]; // 0x19B(0x1) UNKNOWN PROPERTY
		float FixedLineScrollOffset; // 0x19C(0x4)
		bool bAllowDragging; // 0x1A0(0x1)
		unsigned char UnknownData08_6[0x7]; // 0x1A1(0x7) UNKNOWN PROPERTY
		FMulticastInlineDelegate BP_OnEntryReleased; // 0x1A8(0x10)
		FUserWidgetPool EntryWidgetPool; // 0x1B8(0x88)
		unsigned char UnknownData09_7[0x48]; // 0x240(0x48) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.ListViewBase");
			return ret;
		}

		void SetWheelScrollMultiplier(float NewWheelScrollMultiplier); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF413FDDD50
		void SetScrollOffset(float InScrollOffset); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF413FDDC70
		void SetScrollbarVisibility(ESlateVisibility InVisibility); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF413FDDB90
		void SetIsPointerScrollingEnabled(bool bInIsPointerScrollingEnabled); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF413FDDAB0
		void SetIsGamepadScrollingEnabled(bool bInIsGamepadScrollingEnabled); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF413FDD9D0
		void ScrollToTop(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF413FDD8F0
		void ScrollToBottom(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF413FDD810
		void RequestRefresh(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF413FDD730
		void RegenerateAllEntries(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF413FDD650
		float GetScrollOffset(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF413FDD570
		TArray GetDisplayedEntryWidgets(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF413FDD490
		void EndInertialScrolling(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF413FDD3B0
	};


	// Class UMG.ListView
	// Inherited from UListViewBase -> UWidget -> UVisual -> UObject
	// Size: 0x8A8 (0xB30 - 0x288)
	class UListView : public UListViewBase	
	{
	public:
		unsigned char UnknownData03_3[0xE8]; // 0x288(0xE8) UNKNOWN PROPERTY
		FTableViewStyle WidgetStyle; // 0x370(0xC0)
		FScrollBarStyle ScrollBarStyle; // 0x430(0x650)
		TEnumAsByte orientation; // 0xA80(0x1)
		TEnumAsByte SelectionMode; // 0xA81(0x1)
		EConsumeMouseWheel ConsumeMouseWheel; // 0xA82(0x1)
		bool bClearSelectionOnClick; // 0xA83(0x1)
		bool bIsFocusable; // 0xA84(0x1)
		bool bReturnFocusToSelection; // 0xA85(0x1)
		EScrollIntoViewAlignment ScrollIntoViewAlignment; // 0xA86(0x1)
		unsigned char UnknownData04_6[0x1]; // 0xA87(0x1) UNKNOWN PROPERTY
		TArray ListItems; // 0xA88(0x10)
		unsigned char UnknownData05_6[0x10]; // 0xA98(0x10) UNKNOWN PROPERTY
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

		void SetSelectionMode(TEnumAsByte SelectionMode); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF413FDF790
		void SetSelectedIndex(int32_t Index); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF413FDF6B0
		void SetScrollIntoViewAlignment(EScrollIntoViewAlignment NewScrollIntoViewAlignment); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF413FDF5D0
		void SetScrollBarPadding(FMargin& InScrollBarPadding); // Flags: Final|RequiredAPI|Native|Public|HasOutParms 0x7FF413FDF4F0
		void ScrollIndexIntoView(int32_t Index); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF413FDF410
		void RemoveItem(UObject Item); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF413FDF330
		void OnListItemOuterEndPlayed(AActor ItemOuter, TEnumAsByte EndPlayReason); // Flags: Final|RequiredAPI|Native|Protected 0x7FF413FDF250
		void OnListItemEndPlayed(AActor Item, TEnumAsByte EndPlayReason); // Flags: Final|RequiredAPI|Native|Protected 0x7FF413FDF170
		void NavigateToIndex(int32_t Index); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF413FDF090
		bool IsRefreshPending(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF413FDEFB0
		float GetVerticalEntrySpacing(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF413FDEED0
		FMargin GetScrollBarPadding(); // Flags: Final|Native|Public|Const 0x7FF413FDEDF0
		int32_t GetNumItems(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF413FDED10
		TArray GetListItems(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF413FDEC30
		UObject GetItemAt(int32_t Index); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF413FDEB50
		int32_t GetIndexForItem(UObject Item); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF413FDEA70
		float GetHorizontalEntrySpacing(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF413FDE990
		void ClearListItems(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF413FDE8B0
		void BP_SetSelectedItem(UObject Item); // Flags: Final|RequiredAPI|Native|Private|BlueprintCallable 0x7FF413FDE7D0
		void BP_SetListItems(TArray& InListItems); // Flags: Final|RequiredAPI|Native|Private|HasOutParms|BlueprintCallable 0x7FF413FDE6F0
		void BP_SetItemSelection(UObject Item, bool bSelected); // Flags: Final|RequiredAPI|Native|Private|BlueprintCallable 0x7FF413FDE610
		void BP_ScrollItemIntoView(UObject Item); // Flags: Final|RequiredAPI|Native|Private|BlueprintCallable 0x7FF413FDE530
		void BP_NavigateToItem(UObject Item); // Flags: Final|RequiredAPI|Native|Private|BlueprintCallable 0x7FF413FDE450
		bool BP_IsItemVisible(UObject Item); // Flags: Final|RequiredAPI|Native|Private|BlueprintCallable|BlueprintPure|Const 0x7FF413FDE370
		bool BP_GetSelectedItems(TArray& Items); // Flags: Final|RequiredAPI|Native|Private|HasOutParms|BlueprintCallable|Const 0x7FF413FDE290
		UObject BP_GetSelectedItem(); // Flags: Final|RequiredAPI|Native|Private|BlueprintCallable|BlueprintPure|Const 0x7FF413FDE1B0
		int32_t BP_GetNumItemsSelected(); // Flags: Final|RequiredAPI|Native|Private|BlueprintCallable|BlueprintPure|Const 0x7FF413FDE0D0
		void BP_ClearSelection(); // Flags: Final|RequiredAPI|Native|Private|BlueprintCallable 0x7FF413FDDFF0
		void BP_CancelScrollIntoView(); // Flags: Final|RequiredAPI|Native|Private|BlueprintCallable 0x7FF413FDDF10
		void AddItem(UObject Item); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF413FDDE30
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
		unsigned char UnknownData03_6[0x5]; // 0x2B(0x5) UNKNOWN PROPERTY
		FText AccessibleText; // 0x30(0x10)
		FDelegateProperty AccessibleTextDelegate; // 0x40(0xC)
		unsigned char UnknownData04_6[0x4]; // 0x4C(0x4) UNKNOWN PROPERTY
		FText AccessibleSummaryText; // 0x50(0x10)
		FDelegateProperty AccessibleSummaryTextDelegate; // 0x60(0xC)
		unsigned char UnknownData05_7[0x4]; // 0x6C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.SlateAccessibleWidgetData");
			return ret;
		}

		FText GetText__DelegateSignature(); // Flags: Public|Delegate 0x7FF4110614B8
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
	// Size: 0x158 (0x2B8 - 0x160)
	class UUserWidget : public UWidget	
	{
	public:
		unsigned char UnknownData07_3[0x8]; // 0x160(0x8) UNKNOWN PROPERTY
		FLinearColor ColorAndOpacity; // 0x168(0x10)
		FDelegateProperty ColorAndOpacityDelegate; // 0x178(0xC)
		FSlateColor ForegroundColor; // 0x184(0x14)
		FDelegateProperty ForegroundColorDelegate; // 0x198(0xC)
		unsigned char UnknownData08_6[0x4]; // 0x1A4(0x4) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnVisibilityChanged; // 0x1A8(0x10)
		unsigned char UnknownData09_6[0x30]; // 0x1B8(0x30) UNKNOWN PROPERTY
		FMargin Padding; // 0x1E8(0x10)
		int32_t Priority; // 0x1F8(0x4)
		bool bIsFocusable : 1; // 0x1FC:0(0x1)
		bool bStopAction : 1; // 0x1FC:1(0x1)
		unsigned char UnknownData10_5[0x3]; // 0x1FD(0x3) UNKNOWN PROPERTY
		TArray QueuedWidgetAnimationTransitions; // 0x200(0x10)
		TArray ActiveSequencePlayers; // 0x210(0x10)
		UUMGSequenceTickManager AnimationTickManager; // 0x220(0x8)
		TArray StoppedSequencePlayers; // 0x228(0x10)
		TArray NamedSlotBindings; // 0x238(0x10)
		TArray Extensions; // 0x248(0x10)
		UWidgetTree WidgetTree; // 0x258(0x8)
		bool bHasScriptImplementedTick : 1; // 0x260:0(0x1)
		bool bHasScriptImplementedPaint : 1; // 0x260:1(0x1)
		unsigned char UnknownData11_5[0x17]; // 0x261(0x17) UNKNOWN PROPERTY
		EWidgetTickFrequency TickFrequency; // 0x278(0x1)
		unsigned char UnknownData12_6[0x3]; // 0x279(0x3) UNKNOWN PROPERTY
		FWidgetChild DesiredFocusWidget; // 0x27C(0xC)
		UInputComponent InputComponent; // 0x288(0x8)
		TArray AnimationCallbacks; // 0x290(0x10)
		unsigned char UnknownData13_7[0x18]; // 0x2A0(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.UserWidget");
			return ret;
		}

		void UnregisterInputComponent(); // Flags: Final|RequiredAPI|Native|Protected|BlueprintCallable 0x7FF411589730
		void UnbindFromAnimationStarted(UWidgetAnimation Animation, FDelegateProperty Delegate); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF411589650
		void UnbindFromAnimationFinished(UWidgetAnimation Animation, FDelegateProperty Delegate); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF411589570
		void UnbindAllFromAnimationStarted(UWidgetAnimation Animation); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF411589490
		void UnbindAllFromAnimationFinished(UWidgetAnimation Animation); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4115893B0
		void Tick(FGeometry MyGeometry, float InDeltaTime); // Flags: RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent 0x7FF4115892D0
		void StopListeningForInputAction(FName ActionName, TEnumAsByte EventType); // Flags: Final|RequiredAPI|Native|Protected|BlueprintCallable 0x7FF4115891F0
		void StopListeningForAllInputActions(); // Flags: Final|RequiredAPI|Native|Protected|BlueprintCallable 0x7FF411589110
		void StopAnimationsAndLatentActions(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF411589030
		void StopAnimation(UWidgetAnimation InAnimation); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF411588F50
		void StopAllAnimations(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF411588E70
		void SetPositionInViewport(FVector2D Position, bool bRemoveDPIScale); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable 0x7FF411588D90
		void SetPlaybackSpeed(UWidgetAnimation InAnimation, float PlaybackSpeed); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 0x7FF411588CB0
		void SetPadding(FMargin InPadding); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 0x7FF411588BD0
		void SetOwningPlayer(APlayerController LocalPlayerController); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 0x7FF411588AF0
		void SetNumLoopsToPlay(UWidgetAnimation InAnimation, int32_t NumLoopsToPlay); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 0x7FF411588A10
		void SetInputActionPriority(int32_t NewPriority); // Flags: Final|RequiredAPI|Native|Protected|BlueprintCallable 0x7FF411588930
		void SetInputActionBlocking(bool bShouldBlock); // Flags: Final|RequiredAPI|Native|Protected|BlueprintCallable 0x7FF411588850
		void SetForegroundColor(FSlateColor InForegroundColor); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 0x7FF411588770
		void SetDesiredSizeInViewport(FVector2D Size); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable 0x7FF411588690
		void SetColorAndOpacity(FLinearColor InColorAndOpacity); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable 0x7FF4115885B0
		void SetAnimationCurrentTime(UWidgetAnimation InAnimation, float InTime); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 0x7FF4115884D0
		void SetAnchorsInViewport(FAnchors Anchors); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 0x7FF4115883F0
		void SetAlignmentInViewport(FVector2D Alignment); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable 0x7FF411588310
		void ReverseAnimation(UWidgetAnimation InAnimation); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 0x7FF411588230
		void RemoveFromViewport(); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 0x7FF411588150
		void RemoveExtensions(UClass InExtensionType); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF411588070
		void RemoveExtension(UUserWidgetExtension InExtension); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF411587F90
		void RegisterInputComponent(); // Flags: Final|RequiredAPI|Native|Protected|BlueprintCallable 0x7FF411587EB0
		void QueueStopAnimation(UWidgetAnimation InAnimation); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF411587DD0
		void QueueStopAllAnimations(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF411587CF0
		void QueuePlayAnimationTimeRange(UWidgetAnimation InAnimation, float StartAtTime, float EndAtTime, int32_t NumLoopsToPlay, TEnumAsByte PlayMode, float PlaybackSpeed, bool bRestoreState); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 0x7FF411587C10
		void QueuePlayAnimationReverse(UWidgetAnimation InAnimation, float PlaybackSpeed, bool bRestoreState); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 0x7FF411587B30
		void QueuePlayAnimationForward(UWidgetAnimation InAnimation, float PlaybackSpeed, bool bRestoreState); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 0x7FF411587A50
		void QueuePlayAnimation(UWidgetAnimation InAnimation, float StartAtTime, int32_t NumLoopsToPlay, TEnumAsByte PlayMode, float PlaybackSpeed, bool bRestoreState); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 0x7FF411587970
		float QueuePauseAnimation(UWidgetAnimation InAnimation); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 0x7FF411587890
		void PreConstruct(bool IsDesignTime); // Flags: RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent 0x7FF4115877B0
		void PlaySound(USoundBase SoundToPlay); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 0x7FF4115876D0
		UUMGSequencePlayer PlayAnimationTimeRange(UWidgetAnimation InAnimation, float StartAtTime, float EndAtTime, int32_t NumLoopsToPlay, TEnumAsByte PlayMode, float PlaybackSpeed, bool bRestoreState); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 0x7FF4115875F0
		UUMGSequencePlayer PlayAnimationReverse(UWidgetAnimation InAnimation, float PlaybackSpeed, bool bRestoreState); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 0x7FF411587510
		UUMGSequencePlayer PlayAnimationForward(UWidgetAnimation InAnimation, float PlaybackSpeed, bool bRestoreState); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 0x7FF411587430
		UUMGSequencePlayer PlayAnimation(UWidgetAnimation InAnimation, float StartAtTime, int32_t NumLoopsToPlay, TEnumAsByte PlayMode, float PlaybackSpeed, bool bRestoreState); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 0x7FF411587350
		float PauseAnimation(UWidgetAnimation InAnimation); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 0x7FF411587270
		FEventReply OnTouchStarted(FGeometry MyGeometry, FPointerEvent& InTouchEvent); // Flags: RequiredAPI|BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 0x7FF411587190
		FEventReply OnTouchMoved(FGeometry MyGeometry, FPointerEvent& InTouchEvent); // Flags: RequiredAPI|BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 0x7FF4115870B0
		FEventReply OnTouchGesture(FGeometry MyGeometry, FPointerEvent& GestureEvent); // Flags: RequiredAPI|BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 0x7FF411566FD0
		FEventReply OnTouchForceChanged(FGeometry MyGeometry, FPointerEvent& InTouchEvent); // Flags: RequiredAPI|BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 0x7FF411566EF0
		FEventReply OnTouchEnded(FGeometry MyGeometry, FPointerEvent& InTouchEvent); // Flags: RequiredAPI|BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 0x7FF411566E10
		void OnRemovedFromFocusPath(FFocusEvent InFocusEvent); // Flags: RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent 0x7FF411566D30
		FEventReply OnPreviewMouseButtonDown(FGeometry MyGeometry, FPointerEvent& MouseEvent); // Flags: RequiredAPI|BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 0x7FF411566C50
		FEventReply OnPreviewKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent); // Flags: RequiredAPI|Event|Public|BlueprintEvent 0x7FF411566B70
		void OnPaint(FPaintContext& Context); // Flags: RequiredAPI|BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent|Const 0x7FF411566A90
		FEventReply OnMouseWheel(FGeometry MyGeometry, FPointerEvent& MouseEvent); // Flags: RequiredAPI|BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 0x7FF4115669B0
		FEventReply OnMouseMove(FGeometry MyGeometry, FPointerEvent& MouseEvent); // Flags: RequiredAPI|BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 0x7FF4115668D0
		void OnMouseLeave(FPointerEvent& MouseEvent); // Flags: RequiredAPI|BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 0x7FF4115667F0
		void OnMouseEnter(FGeometry MyGeometry, FPointerEvent& MouseEvent); // Flags: RequiredAPI|BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 0x7FF411566710
		void OnMouseCaptureLost(); // Flags: RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent 0x7FF411566630
		FEventReply OnMouseButtonUp(FGeometry MyGeometry, FPointerEvent& MouseEvent); // Flags: RequiredAPI|BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 0x7FF411566550
		FEventReply OnMouseButtonDown(FGeometry MyGeometry, FPointerEvent& MouseEvent); // Flags: RequiredAPI|BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 0x7FF411566470
		FEventReply OnMouseButtonDoubleClick(FGeometry InMyGeometry, FPointerEvent& InMouseEvent); // Flags: RequiredAPI|BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 0x7FF411566390
		FEventReply OnMotionDetected(FGeometry MyGeometry, FMotionEvent InMotionEvent); // Flags: RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent 0x7FF4115661F0
		FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent); // Flags: RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent 0x7FF411566110
		FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent); // Flags: RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent 0x7FF411566030
		FEventReply OnKeyChar(FGeometry MyGeometry, FCharacterEvent InCharacterEvent); // Flags: RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent 0x7FF411525F50
		void OnInitialized(); // Flags: RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent 0x7FF411525E70
		FEventReply OnFocusReceived(FGeometry MyGeometry, FFocusEvent InFocusEvent); // Flags: RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent 0x7FF411525D90
		void OnFocusLost(FFocusEvent InFocusEvent); // Flags: RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent 0x7FF411525CB0
		bool OnDrop(FGeometry MyGeometry, FPointerEvent PointerEvent, UDragDropOperation Operation); // Flags: RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent 0x7FF411525BD0
		bool OnDragOver(FGeometry MyGeometry, FPointerEvent PointerEvent, UDragDropOperation Operation); // Flags: RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent 0x7FF411525AF0
		void OnDragLeave(FPointerEvent PointerEvent, UDragDropOperation Operation); // Flags: RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent 0x7FF411525A10
		void OnDragEnter(FGeometry MyGeometry, FPointerEvent PointerEvent, UDragDropOperation Operation); // Flags: RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent 0x7FF411525930
		void OnDragDetected(FGeometry MyGeometry, FPointerEvent& PointerEvent, UDragDropOperation& Operation); // Flags: RequiredAPI|BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 0x7FF411525850
		void OnDragCancelled(FPointerEvent& PointerEvent, UDragDropOperation Operation); // Flags: RequiredAPI|BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 0x7FF411525770
		void OnAnimationStarted(UWidgetAnimation Animation); // Flags: RequiredAPI|BlueprintCosmetic|Native|Event|Protected|BlueprintEvent 0x7FF411525690
		void OnAnimationFinished(UWidgetAnimation Animation); // Flags: RequiredAPI|BlueprintCosmetic|Native|Event|Protected|BlueprintEvent 0x7FF4115255B0
		FEventReply OnAnalogValueChanged(FGeometry MyGeometry, FAnalogInputEvent InAnalogInputEvent); // Flags: RequiredAPI|Event|Public|BlueprintEvent 0x7FF4115254D0
		void OnAddedToFocusPath(FFocusEvent InFocusEvent); // Flags: RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent 0x7FF411525330
		void ListenForInputAction(FName ActionName, TEnumAsByte EventType, bool bConsume, FDelegateProperty Callback); // Flags: Final|RequiredAPI|Native|Protected|BlueprintCallable 0x7FF411525250
		bool IsPlayingAnimation(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF411525170
		bool IsListeningForInputAction(FName ActionName); // Flags: Final|RequiredAPI|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF411525090
		bool IsInteractable(); // Flags: RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent|Const 0x7FF411524FB0
		bool IsAnyAnimationPlaying(); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF411524ED0
		bool IsAnimationPlayingForward(UWidgetAnimation InAnimation); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 0x7FF411524DF0
		bool IsAnimationPlaying(UWidgetAnimation InAnimation); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF411524D10
		APawn GetOwningPlayerPawn(); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF411524C30
		APlayerCameraManager GetOwningPlayerCameraManager(); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF411524B50
		bool GetIsVisible(); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF411524A70
		TArray GetExtensions(UClass ExtensionType); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF411524990
		UUserWidgetExtension GetExtension(UClass ExtensionType); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4115248B0
		float GetAnimationCurrentTime(UWidgetAnimation InAnimation); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4115247D0
		FAnchors GetAnchorsInViewport(); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF411524630
		FVector2D GetAlignmentInViewport(); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF411524550
		void FlushAnimations(); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 0x7FF411524470
		void Destruct(); // Flags: RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent 0x7FF411524390
		void Construct(); // Flags: RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent 0x7FF4115242B0
		void CancelLatentActions(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4115241D0
		void BindToAnimationStarted(UWidgetAnimation Animation, FDelegateProperty Delegate); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4115240F0
		void BindToAnimationFinished(UWidgetAnimation Animation, FDelegateProperty Delegate); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF411524010
		void BindToAnimationEvent(UWidgetAnimation Animation, FDelegateProperty Delegate, EWidgetAnimationEvent AnimationEvent, FName UserTag); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF411503F30
		void AddToViewport(int32_t ZOrder); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 0x7FF411503E50
		bool AddToPlayerScreen(int32_t ZOrder); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 0x7FF411503D70
		UUserWidgetExtension AddExtension(UClass InExtensionType); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF411503C90
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
		unsigned char UnknownData01_1[0x18]; // 0x28(0x18) UNKNOWN PROPERTY

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
		unsigned char UnknownData02_3[0x8]; // 0xF0(0x8) UNKNOWN PROPERTY
		FMovieScene2DTransformMask TransformMask; // 0xF8(0x4)
		unsigned char UnknownData03_6[0x4]; // 0xFC(0x4) UNKNOWN PROPERTY
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
		unsigned char UnknownData01_3[0x8]; // 0xF0(0x8) UNKNOWN PROPERTY
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
		unsigned char UnknownData01_1[0x168]; // 0x40(0x168) UNKNOWN PROPERTY

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
		unsigned char UnknownData02_3[0x10]; // 0xB0(0x10) UNKNOWN PROPERTY
		TArray BrushPropertyNamePath; // 0xC0(0x10)
		FName TrackName; // 0xD0(0x4)
		unsigned char UnknownData03_7[0x4]; // 0xD4(0x4) UNKNOWN PROPERTY

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
		unsigned char UnknownData03_3[0x1E8]; // 0x28(0x1E8) UNKNOWN PROPERTY
		UWidgetAnimation Animation; // 0x210(0x8)
		unsigned char UnknownData04_6[0x8]; // 0x218(0x8) UNKNOWN PROPERTY
		FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance; // 0x220(0x20)
		unsigned char UnknownData05_7[0x80]; // 0x240(0x80) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.UMGSequencePlayer");
			return ret;
		}

		void SetUserTag(FName InUserTag); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4144B7238
		FName GetUserTag(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144B7158
	};


	// Class UMG.UMGSequenceTickManager
	// Inherited from UObject
	// Size: 0x98 (0xC0 - 0x28)
	class UUMGSequenceTickManager : public UObject	
	{
	public:
		TMap WeakUserWidgetData; // 0x28(0x50)
		UMovieSceneEntitySystemLinker Linker; // 0x78(0x8)
		unsigned char UnknownData01_7[0x40]; // 0x80(0x40) UNKNOWN PROPERTY

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
		UMovieScene MovieScene; // 0x68(0x8)
		TArray AnimationBindings; // 0x70(0x10)
		bool bLegacyFinishOnStop; // 0x80(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x81(0x7) UNKNOWN PROPERTY
		FString DisplayLabel; // 0x88(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.WidgetAnimation");
			return ret;
		}

		void UnbindFromAnimationStarted(UUserWidget Widget, FDelegateProperty Delegate); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4144B7938
		void UnbindFromAnimationFinished(UUserWidget Widget, FDelegateProperty Delegate); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4144B7858
		void UnbindAllFromAnimationStarted(UUserWidget Widget); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4144B7778
		void UnbindAllFromAnimationFinished(UUserWidget Widget); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4144B7698
		float GetStartTime(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144B75B8
		float GetEndTime(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144B74D8
		void BindToAnimationStarted(UUserWidget Widget, FDelegateProperty Delegate); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4144B73F8
		void BindToAnimationFinished(UUserWidget Widget, FDelegateProperty Delegate); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4144B7318
	};


	// Class UMG.WidgetAnimationDelegateBinding
	// Inherited from UDynamicBlueprintBinding -> UObject
	// Size: 0x10 (0x38 - 0x28)
	class UWidgetAnimationDelegateBinding : public UDynamicBlueprintBinding	
	{
	public:
		TArray WidgetAnimationDelegateBindings; // 0x28(0x10)

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
		unsigned char UnknownData01_7[0x8]; // 0x38(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.WidgetAnimationPlayCallbackProxy");
			return ret;
		}

		UWidgetAnimationPlayCallbackProxy CreatePlayAnimationTimeRangeProxyObject(UUMGSequencePlayer& Result, UUserWidget Widget, UWidgetAnimation InAnimation, float StartAtTime, float EndAtTime, int32_t NumLoopsToPlay, TEnumAsByte PlayMode, float PlaybackSpeed); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4144B7AF8
		UWidgetAnimationPlayCallbackProxy CreatePlayAnimationProxyObject(UUMGSequencePlayer& Result, UUserWidget Widget, UWidgetAnimation InAnimation, float StartAtTime, int32_t NumLoopsToPlay, TEnumAsByte PlayMode, float PlaybackSpeed); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4144B7A18
	};


	// Class UMG.PropertyBinding
	// Inherited from UObject
	// Size: 0x48 (0x70 - 0x28)
	class UPropertyBinding : public UObject	
	{
	public:
		TWeakObjectPtr SourceObject; // 0x28(0x8)
		FDynamicPropertyPath SourcePath; // 0x30(0x38)
		FName DestinationProperty; // 0x68(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x6C(0x4) UNKNOWN PROPERTY

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

		bool GetValue(); // Flags: Final|RequiredAPI|Native|Public|Const 0x7FF4144B7BD8
	};


	// Class UMG.BrushBinding
	// Inherited from UPropertyBinding -> UObject
	// Size: 0x8 (0x78 - 0x70)
	class UBrushBinding : public UPropertyBinding	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x70(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.BrushBinding");
			return ret;
		}

		FSlateBrush GetValue(); // Flags: Final|RequiredAPI|Native|Public|Const 0x7FF4144B7CB8
	};


	// Class UMG.CheckedStateBinding
	// Inherited from UPropertyBinding -> UObject
	// Size: 0x8 (0x78 - 0x70)
	class UCheckedStateBinding : public UPropertyBinding	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x70(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.CheckedStateBinding");
			return ret;
		}

		ECheckBoxState GetValue(); // Flags: Final|RequiredAPI|Native|Public|Const 0x7FF4144B7D98
	};


	// Class UMG.ColorBinding
	// Inherited from UPropertyBinding -> UObject
	// Size: 0x8 (0x78 - 0x70)
	class UColorBinding : public UPropertyBinding	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x70(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.ColorBinding");
			return ret;
		}

		FSlateColor GetSlateValue(); // Flags: Final|RequiredAPI|Native|Public|Const 0x7FF4144B7F58
		FLinearColor GetLinearValue(); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|Const 0x7FF4144B7E78
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

		float GetValue(); // Flags: Final|RequiredAPI|Native|Public|Const 0x7FF4144B8038
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

		int32_t GetValue(); // Flags: Final|RequiredAPI|Native|Public|Const 0x7FF4144B8118
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

		TEnumAsByte GetValue(); // Flags: Final|RequiredAPI|Native|Public|Const 0x7FF4144B81F8
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
		unsigned char UnknownData01_1[0x570]; // 0x30(0x570) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_1[0x8]; // 0x70(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.TextBinding");
			return ret;
		}

		FText GetTextValue(); // Flags: Final|RequiredAPI|Native|Public|Const 0x7FF4144B83B8
		FString GetStringValue(); // Flags: Final|RequiredAPI|Native|Public|Const 0x7FF4144B82D8
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

		ESlateVisibility GetValue(); // Flags: Final|RequiredAPI|Native|Public|Const 0x7FF4144B8498
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

		UWidget GetValue(); // Flags: Final|RequiredAPI|Native|Public|Const 0x7FF4144B8578
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

		UAsyncTaskDownloadImage DownloadImage(FString URL); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF4144B8658
	};


	// Class UMG.GameViewportSubsystem
	// Inherited from UEngineSubsystem -> UDynamicSubsystem -> USubsystem -> UObject
	// Size: 0x80 (0xB0 - 0x30)
	class UGameViewportSubsystem : public UEngineSubsystem	
	{
	public:
		unsigned char UnknownData01_1[0x80]; // 0x30(0x80) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.GameViewportSubsystem");
			return ret;
		}

		FGameViewportWidgetSlot SetWidgetSlotPosition(FGameViewportWidgetSlot Slot, UWidget Widget, FVector2D Position, bool bRemoveDPIScale); // Flags: Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF4144B8D58
		FGameViewportWidgetSlot SetWidgetSlotDesiredSize(FGameViewportWidgetSlot Slot, FVector2D Size); // Flags: Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF4144B8C78
		void SetWidgetSlot(UWidget Widget, FGameViewportWidgetSlot Slot); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 0x7FF4144B8B98
		void RemoveWidget(UWidget Widget); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 0x7FF4144B8AB8
		bool IsWidgetAdded(UWidget Widget); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144B89D8
		FGameViewportWidgetSlot GetWidgetSlot(UWidget Widget); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144B88F8
		bool AddWidgetForPlayer(UWidget Widget, ULocalPlayer Player, FGameViewportWidgetSlot Slot); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 0x7FF4144B8818
		bool AddWidget(UWidget Widget, FGameViewportWidgetSlot Slot); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 0x7FF4144B8738
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

		void BP_OnItemSelectionChanged(bool bIsSelected); // Flags: RequiredAPI|Event|Protected|BlueprintEvent 0x7FF4144B8FF8
		void BP_OnItemExpansionChanged(bool bIsExpanded); // Flags: RequiredAPI|Event|Protected|BlueprintEvent 0x7FF4144B8F18
		void BP_OnEntryReleased(); // Flags: RequiredAPI|Event|Protected|BlueprintEvent 0x7FF4144B8E38
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

		bool IsListItemSelected(TScriptInterface UserListEntry); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF4144B9298
		bool IsListItemExpanded(TScriptInterface UserListEntry); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF4144B91B8
		UListViewBase GetOwningListView(TScriptInterface UserListEntry); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF4144B90D8
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

		void OnListItemObjectSet(UObject ListItemObject); // Flags: RequiredAPI|Event|Protected|BlueprintEvent 0x7FF4144B9378
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

		UObject GetListItemObject(TScriptInterface UserObjectListEntry); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF4144B9458
	};


	// Class UMG.PanelWidget
	// Inherited from UWidget -> UVisual -> UObject
	// Size: 0x18 (0x178 - 0x160)
	class UPanelWidget : public UWidget	
	{
	public:
		TArray Slots; // 0x160(0x10)
		unsigned char UnknownData01_7[0x8]; // 0x170(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.PanelWidget");
			return ret;
		}

		bool RemoveChildAt(int32_t Index); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF41103D698
		bool RemoveChild(UWidget Content); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF41103D5B8
		bool HasChild(UWidget Content); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41103D4D8
		bool HasAnyChildren(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41103D3F8
		int32_t GetChildrenCount(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41103D318
		int32_t GetChildIndex(UWidget Content); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41103D238
		UWidget GetChildAt(int32_t Index); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41103D158
		TArray GetAllChildren(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41103D078
		void ClearChildren(); // Flags: RequiredAPI|Native|Public|BlueprintCallable 0x7FF41103CF98
		UPanelSlot AddChild(UWidget Content); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF41103CEB8
	};


	// Class UMG.ContentWidget
	// Inherited from UPanelWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x178 - 0x178)
	class UContentWidget : public UPanelWidget	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.ContentWidget");
			return ret;
		}

		UPanelSlot SetContent(UWidget Content); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF41103D938
		UPanelSlot GetContentSlot(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41103D858
		UWidget GetContent(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41103D778
	};


	// Class UMG.BackgroundBlur
	// Inherited from UContentWidget -> UPanelWidget -> UWidget -> UVisual -> UObject
	// Size: 0x108 (0x280 - 0x178)
	class UBackgroundBlur : public UContentWidget	
	{
	public:
		FMargin Padding; // 0x178(0x10)
		TEnumAsByte HorizontalAlignment; // 0x188(0x1)
		TEnumAsByte VerticalAlignment; // 0x189(0x1)
		bool bApplyAlphaToBlur; // 0x18A(0x1)
		unsigned char UnknownData04_6[0x1]; // 0x18B(0x1) UNKNOWN PROPERTY
		float BlurStrength; // 0x18C(0x4)
		bool bOverrideAutoRadiusCalculation; // 0x190(0x1)
		unsigned char UnknownData05_6[0x3]; // 0x191(0x3) UNKNOWN PROPERTY
		int32_t BlurRadius; // 0x194(0x4)
		unsigned char UnknownData06_6[0x8]; // 0x198(0x8) UNKNOWN PROPERTY
		FVector4 CornerRadius; // 0x1A0(0x20)
		FSlateBrush LowQualityFallbackBrush; // 0x1C0(0xB0)
		unsigned char UnknownData07_7[0x10]; // 0x270(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.BackgroundBlur");
			return ret;
		}

		void SetVerticalAlignment(TEnumAsByte InVerticalAlignment); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144B9B58
		void SetPadding(FMargin InPadding); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144B9A78
		void SetLowQualityFallbackBrush(FSlateBrush& InBrush); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF4144B9998
		void SetHorizontalAlignment(TEnumAsByte InHorizontalAlignment); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144B98B8
		void SetCornerRadius(FVector4 InCornerRadius); // Flags: RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 0x7FF4144B97D8
		void SetBlurStrength(float InStrength); // Flags: RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144B96F8
		void SetBlurRadius(int32_t InBlurRadius); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144B9618
		void SetApplyAlphaToBlur(bool bInApplyAlphaToBlur); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144B9538
	};


	// Class UMG.PanelSlot
	// Inherited from UVisual -> UObject
	// Size: 0x10 (0x38 - 0x28)
	class UPanelSlot : public UVisual	
	{
	public:
		UPanelWidget Parent; // 0x28(0x8)
		UWidget Content; // 0x30(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.PanelSlot");
			return ret;
		}

		UWidget GetContent(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144B9C38
	};


	// Class UMG.BackgroundBlurSlot
	// Inherited from UPanelSlot -> UVisual -> UObject
	// Size: 0x28 (0x60 - 0x38)
	class UBackgroundBlurSlot : public UPanelSlot	
	{
	public:
		FMargin Padding; // 0x38(0x10)
		TEnumAsByte HorizontalAlignment; // 0x48(0x1)
		TEnumAsByte VerticalAlignment; // 0x49(0x1)
		unsigned char UnknownData01_7[0x16]; // 0x4A(0x16) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.BackgroundBlurSlot");
			return ret;
		}

		void SetVerticalAlignment(TEnumAsByte InVerticalAlignment); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144B9ED8
		void SetPadding(FMargin InPadding); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144B9DF8
		void SetHorizontalAlignment(TEnumAsByte InHorizontalAlignment); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144B9D18
	};


	// Class UMG.Border
	// Inherited from UContentWidget -> UPanelWidget -> UWidget -> UVisual -> UObject
	// Size: 0x168 (0x2E0 - 0x178)
	class UBorder : public UContentWidget	
	{
	public:
		TEnumAsByte HorizontalAlignment; // 0x178(0x1)
		TEnumAsByte VerticalAlignment; // 0x179(0x1)
		bool bShowEffectWhenDisabled : 1; // 0x17A:0(0x1)
		unsigned char UnknownData04_5[0x1]; // 0x17B(0x1) UNKNOWN PROPERTY
		FLinearColor ContentColorAndOpacity; // 0x17C(0x10)
		FDelegateProperty ContentColorAndOpacityDelegate; // 0x18C(0xC)
		FMargin Padding; // 0x198(0x10)
		unsigned char UnknownData05_6[0x8]; // 0x1A8(0x8) UNKNOWN PROPERTY
		FSlateBrush Background; // 0x1B0(0xB0)
		FDelegateProperty BackgroundDelegate; // 0x260(0xC)
		FLinearColor BrushColor; // 0x26C(0x10)
		FDelegateProperty BrushColorDelegate; // 0x27C(0xC)
		FVector2D DesiredSizeScale; // 0x288(0x10)
		bool bFlipForRightToLeftFlowDirection; // 0x298(0x1)
		unsigned char UnknownData06_6[0x3]; // 0x299(0x3) UNKNOWN PROPERTY
		FDelegateProperty OnMouseButtonDownEvent; // 0x29C(0xC)
		FDelegateProperty OnMouseButtonUpEvent; // 0x2A8(0xC)
		FDelegateProperty OnMouseMoveEvent; // 0x2B4(0xC)
		FDelegateProperty OnMouseDoubleClickEvent; // 0x2C0(0xC)
		unsigned char UnknownData07_7[0x14]; // 0x2CC(0x14) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.Border");
			return ret;
		}

		void SetVerticalAlignment(TEnumAsByte InVerticalAlignment); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4115015C8
		void SetShowEffectWhenDisabled(bool bInShowEffectWhenDisabled); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4115014E8
		void SetPadding(FMargin InPadding); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF411501408
		void SetHorizontalAlignment(TEnumAsByte InHorizontalAlignment); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF411501328
		void SetDesiredSizeScale(FVector2D InScale); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 0x7FF411501248
		void SetContentColorAndOpacity(FLinearColor InContentColorAndOpacity); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 0x7FF411501168
		void SetBrushFromTexture(UTexture2D Texture); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF411501088
		void SetBrushFromMaterial(UMaterialInterface Material); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF411500FA8
		void SetBrushFromAsset(USlateBrushAsset Asset); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF411500EC8
		void SetBrushColor(FLinearColor InBrushColor); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 0x7FF411500DE8
		void SetBrush(FSlateBrush& InBrush); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF411500D08
		UMaterialInstanceDynamic GetDynamicMaterial(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF411500C28
	};


	// Class UMG.BorderSlot
	// Inherited from UPanelSlot -> UVisual -> UObject
	// Size: 0x28 (0x60 - 0x38)
	class UBorderSlot : public UPanelSlot	
	{
	public:
		FMargin Padding; // 0x38(0x10)
		TEnumAsByte HorizontalAlignment; // 0x48(0x1)
		TEnumAsByte VerticalAlignment; // 0x49(0x1)
		unsigned char UnknownData01_7[0x16]; // 0x4A(0x16) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.BorderSlot");
			return ret;
		}

		void SetVerticalAlignment(TEnumAsByte InVerticalAlignment); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144BA178
		void SetPadding(FMargin InPadding); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144BA098
		void SetHorizontalAlignment(TEnumAsByte InHorizontalAlignment); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144B9FB8
	};


	// Class UMG.Button
	// Inherited from UContentWidget -> UPanelWidget -> UWidget -> UVisual -> UObject
	// Size: 0x408 (0x580 - 0x178)
	class UButton : public UContentWidget	
	{
	public:
		unsigned char UnknownData03_3[0x8]; // 0x178(0x8) UNKNOWN PROPERTY
		FButtonStyle WidgetStyle; // 0x180(0x370)
		FLinearColor ColorAndOpacity; // 0x4F0(0x10)
		FLinearColor BackgroundColor; // 0x500(0x10)
		TEnumAsByte ClickMethod; // 0x510(0x1)
		TEnumAsByte TouchMethod; // 0x511(0x1)
		TEnumAsByte PressMethod; // 0x512(0x1)
		bool IsFocusable; // 0x513(0x1)
		unsigned char UnknownData04_6[0x4]; // 0x514(0x4) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnClicked; // 0x518(0x10)
		FMulticastInlineDelegate OnPressed; // 0x528(0x10)
		FMulticastInlineDelegate OnReleased; // 0x538(0x10)
		FMulticastInlineDelegate OnHovered; // 0x548(0x10)
		FMulticastInlineDelegate OnUnhovered; // 0x558(0x10)
		unsigned char UnknownData05_7[0x10]; // 0x568(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.Button");
			return ret;
		}

		void SetTouchMethod(TEnumAsByte InTouchMethod); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144BA798
		void SetStyle(FButtonStyle& InStyle); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF4144BA6B8
		void SetPressMethod(TEnumAsByte InPressMethod); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144BA5D8
		void SetColorAndOpacity(FLinearColor InColorAndOpacity); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 0x7FF4144BA4F8
		void SetClickMethod(TEnumAsByte InClickMethod); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144BA418
		void SetBackgroundColor(FLinearColor InBackgroundColor); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 0x7FF4144BA338
		bool IsPressed(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144BA258
	};


	// Class UMG.ButtonSlot
	// Inherited from UPanelSlot -> UVisual -> UObject
	// Size: 0x28 (0x60 - 0x38)
	class UButtonSlot : public UPanelSlot	
	{
	public:
		FMargin Padding; // 0x38(0x10)
		TEnumAsByte HorizontalAlignment; // 0x48(0x1)
		TEnumAsByte VerticalAlignment; // 0x49(0x1)
		unsigned char UnknownData01_7[0x16]; // 0x4A(0x16) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.ButtonSlot");
			return ret;
		}

		void SetVerticalAlignment(TEnumAsByte InVerticalAlignment); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144BAA38
		void SetPadding(FMargin InPadding); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144BA958
		void SetHorizontalAlignment(TEnumAsByte InHorizontalAlignment); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144BA878
	};


	// Class UMG.CanvasPanel
	// Inherited from UPanelWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x188 - 0x178)
	class UCanvasPanel : public UPanelWidget	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0x178(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.CanvasPanel");
			return ret;
		}

		UCanvasPanelSlot AddChildToCanvas(UWidget Content); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144BAB18
	};


	// Class UMG.CanvasPanelSlot
	// Inherited from UPanelSlot -> UVisual -> UObject
	// Size: 0x50 (0x88 - 0x38)
	class UCanvasPanelSlot : public UPanelSlot	
	{
	public:
		FAnchorData LayoutData; // 0x38(0x40)
		bool bAutoSize; // 0x78(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x79(0x3) UNKNOWN PROPERTY
		int32_t ZOrder; // 0x7C(0x4)
		unsigned char UnknownData03_7[0x8]; // 0x80(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.CanvasPanelSlot");
			return ret;
		}

		void SetZOrder(int32_t InZOrder); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144BBAD8
		void SetSize(FVector2D InSize); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 0x7FF4144BB9F8
		void SetPosition(FVector2D InPosition); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 0x7FF4144BB918
		void SetOffsets(FMargin InOffset); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144BB838
		void SetMinimum(FVector2D InMinimumAnchors); // Flags: Final|RequiredAPI|Native|Public|HasDefaults 0x7FF4144BB758
		void SetMaximum(FVector2D InMaximumAnchors); // Flags: Final|RequiredAPI|Native|Public|HasDefaults 0x7FF4144BB678
		void SetLayout(FAnchorData& InLayoutData); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF4144BB598
		void SetAutoSize(bool InbAutoSize); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144BB4B8
		void SetAnchors(FAnchors InAnchors); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144BB3D8
		void SetAlignment(FVector2D InAlignment); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 0x7FF4144BB2F8
		int32_t GetZOrder(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144BB218
		FVector2D GetSize(); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF4144BB138
		FVector2D GetPosition(); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF4144BB058
		FMargin GetOffsets(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144BAF78
		FAnchorData GetLayout(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144BAE98
		bool GetAutoSize(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144BADB8
		FAnchors GetAnchors(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144BACD8
		FVector2D GetAlignment(); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF4144BABF8
	};


	// Class UMG.CheckBox
	// Inherited from UContentWidget -> UPanelWidget -> UWidget -> UVisual -> UObject
	// Size: 0x998 (0xB10 - 0x178)
	class UCheckBox : public UContentWidget	
	{
	public:
		ECheckBoxState CheckedState; // 0x178(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x179(0x3) UNKNOWN PROPERTY
		FDelegateProperty CheckedStateDelegate; // 0x17C(0xC)
		unsigned char UnknownData05_6[0x8]; // 0x188(0x8) UNKNOWN PROPERTY
		FCheckBoxStyle WidgetStyle; // 0x190(0x950)
		TEnumAsByte HorizontalAlignment; // 0xAE0(0x1)
		TEnumAsByte ClickMethod; // 0xAE1(0x1)
		TEnumAsByte TouchMethod; // 0xAE2(0x1)
		TEnumAsByte PressMethod; // 0xAE3(0x1)
		bool IsFocusable; // 0xAE4(0x1)
		unsigned char UnknownData06_6[0x3]; // 0xAE5(0x3) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnCheckStateChanged; // 0xAE8(0x10)
		unsigned char UnknownData07_7[0x18]; // 0xAF8(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.CheckBox");
			return ret;
		}

		void SetTouchMethod(TEnumAsByte InTouchMethod); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144BC1D8
		void SetPressMethod(TEnumAsByte InPressMethod); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144BC0F8
		void SetIsChecked(bool InIsChecked); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144BC018
		void SetClickMethod(TEnumAsByte InClickMethod); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144BBF38
		void SetCheckedState(ECheckBoxState InCheckedState); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144BBE58
		bool IsPressed(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144BBD78
		bool IsChecked(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144BBC98
		ECheckBoxState GetCheckedState(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144BBBB8
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
	// Size: 0xE0 (0x240 - 0x160)
	class UCircularThrobber : public UWidget	
	{
	public:
		int32_t NumberOfPieces; // 0x160(0x4)
		float Period; // 0x164(0x4)
		float Radius; // 0x168(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x16C(0x4) UNKNOWN PROPERTY
		FSlateBrush Image; // 0x170(0xB0)
		bool bEnableRadius; // 0x220(0x1)
		unsigned char UnknownData03_7[0x1F]; // 0x221(0x1F) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.CircularThrobber");
			return ret;
		}

		void SetRadius(float InRadius); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144BC478
		void SetPeriod(float InPeriod); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144BC398
		void SetNumberOfPieces(int32_t InNumberOfPieces); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144BC2B8
	};


	// Class UMG.ComboBox
	// Inherited from UWidget -> UVisual -> UObject
	// Size: 0x680 (0x7E0 - 0x160)
	class UComboBox : public UWidget	
	{
	public:
		FScrollBarStyle ScrollBarStyle; // 0x160(0x650)
		TArray Items; // 0x7B0(0x10)
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
	// Size: 0x17F0 (0x1950 - 0x160)
	class UComboBoxKey : public UWidget	
	{
	public:
		TArray Options; // 0x160(0x10)
		FName SelectedOption; // 0x170(0x4)
		unsigned char UnknownData04_6[0xC]; // 0x174(0xC) UNKNOWN PROPERTY
		FComboBoxStyle WidgetStyle; // 0x180(0x5A0)
		FTableRowStyle ItemStyle; // 0x720(0xB50)
		FScrollBarStyle ScrollBarStyle; // 0x1270(0x650)
		FSlateColor ForegroundColor; // 0x18C0(0x14)
		FMargin ContentPadding; // 0x18D4(0x10)
		float MaxListHeight; // 0x18E4(0x4)
		bool bHasDownArrow; // 0x18E8(0x1)
		bool bEnableGamepadNavigationMode; // 0x18E9(0x1)
		bool bIsFocusable; // 0x18EA(0x1)
		unsigned char UnknownData05_6[0x1]; // 0x18EB(0x1) UNKNOWN PROPERTY
		FDelegateProperty OnGenerateContentWidget; // 0x18EC(0xC)
		FDelegateProperty OnGenerateItemWidget; // 0x18F8(0xC)
		unsigned char UnknownData06_6[0x4]; // 0x1904(0x4) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnSelectionChanged; // 0x1908(0x10)
		FMulticastInlineDelegate OnOpening; // 0x1918(0x10)
		unsigned char UnknownData07_7[0x28]; // 0x1928(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.ComboBoxKey");
			return ret;
		}

		void SetSelectedOption(FName Option); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4110392F0
		bool RemoveOption(FName Option); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF411039210
		void OnSelectionChangedEvent__DelegateSignature(FName SelectedItem, TEnumAsByte SelectionType); // Flags: MulticastDelegate|Public|Delegate 0x7FF411039130
		void OnOpeningEvent__DelegateSignature(); // Flags: MulticastDelegate|Public|Delegate 0x7FF411039050
		bool IsOpen(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF411038F70
		FName GetSelectedOption(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF411038E90
		UWidget GenerateWidgetEvent__DelegateSignature(FName Item); // Flags: Public|Delegate 0x7FF411038DB0
		void ClearSelection(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF411038CD0
		void ClearOptions(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF411038BF0
		void AddOption(FName Option); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF411038B10
	};


	// Class UMG.ComboBoxString
	// Inherited from UWidget -> UVisual -> UObject
	// Size: 0x1870 (0x19D0 - 0x160)
	class UComboBoxString : public UWidget	
	{
	public:
		TArray DefaultOptions; // 0x160(0x10)
		FString SelectedOption; // 0x170(0x10)
		FComboBoxStyle WidgetStyle; // 0x180(0x5A0)
		FTableRowStyle ItemStyle; // 0x720(0xB50)
		FScrollBarStyle ScrollBarStyle; // 0x1270(0x650)
		FMargin ContentPadding; // 0x18C0(0x10)
		float MaxListHeight; // 0x18D0(0x4)
		bool HasDownArrow; // 0x18D4(0x1)
		bool EnableGamepadNavigationMode; // 0x18D5(0x1)
		unsigned char UnknownData04_6[0x2]; // 0x18D6(0x2) UNKNOWN PROPERTY
		FSlateFontInfo Font; // 0x18D8(0x58)
		FSlateColor ForegroundColor; // 0x1930(0x14)
		bool bIsFocusable; // 0x1944(0x1)
		unsigned char UnknownData05_6[0x3]; // 0x1945(0x3) UNKNOWN PROPERTY
		FDelegateProperty OnGenerateWidgetEvent; // 0x1948(0xC)
		unsigned char UnknownData06_6[0x4]; // 0x1954(0x4) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnSelectionChanged; // 0x1958(0x10)
		FMulticastInlineDelegate OnOpening; // 0x1968(0x10)
		unsigned char UnknownData07_7[0x58]; // 0x1978(0x58) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.ComboBoxString");
			return ret;
		}

		void SetSelectedOption(FString Option); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF41103A550
		void SetSelectedIndex(int32_t Index); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF41103A470
		bool RemoveOption(FString Option); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF41103A390
		void RefreshOptions(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF41103A2B0
		void OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte SelectionType); // Flags: MulticastDelegate|Public|Delegate 0x7FF41103A1D0
		void OnOpeningEvent__DelegateSignature(); // Flags: MulticastDelegate|Public|Delegate 0x7FF41103A0F0
		bool IsOpen(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41103A010
		FString GetSelectedOption(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF411039F30
		int32_t GetSelectedIndex(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF411039E50
		int32_t GetOptionCount(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF411039D70
		FString GetOptionAtIndex(int32_t Index); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF411039C90
		int32_t FindOptionIndex(FString Option); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF411039BB0
		void ClearSelection(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF411039AD0
		void ClearOptions(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4110399F0
		void AddOption(FString Option); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF411039910
	};


	// Class UMG.DynamicEntryBoxBase
	// Inherited from UWidget -> UVisual -> UObject
	// Size: 0xE0 (0x240 - 0x160)
	class UDynamicEntryBoxBase : public UWidget	
	{
	public:
		FVector2D EntrySpacing; // 0x160(0x10)
		TArray SpacingPattern; // 0x170(0x10)
		EDynamicBoxType EntryBoxType; // 0x180(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x181(0x3) UNKNOWN PROPERTY
		FSlateChildSize EntrySizeRule; // 0x184(0x8)
		TEnumAsByte EntryHorizontalAlignment; // 0x18C(0x1)
		TEnumAsByte EntryVerticalAlignment; // 0x18D(0x1)
		unsigned char UnknownData04_6[0x2]; // 0x18E(0x2) UNKNOWN PROPERTY
		int32_t MaxElementSize; // 0x190(0x4)
		FRadialBoxSettings RadialBoxSettings; // 0x194(0x10)
		unsigned char UnknownData05_6[0x14]; // 0x1A4(0x14) UNKNOWN PROPERTY
		FUserWidgetPool EntryWidgetPool; // 0x1B8(0x88)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.DynamicEntryBoxBase");
			return ret;
		}

		void SetRadialSettings(FRadialBoxSettings& InSettings); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF4144BC7F8
		void SetEntrySpacing(FVector2D& InEntrySpacing); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF4144BC718
		int32_t GetNumEntries(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144BC638
		TArray GetAllEntries(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144BC558
	};


	// Class UMG.DynamicEntryBox
	// Inherited from UDynamicEntryBoxBase -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x248 - 0x240)
	class UDynamicEntryBox : public UDynamicEntryBoxBase	
	{
	public:
		UClass EntryWidgetClass; // 0x240(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.DynamicEntryBox");
			return ret;
		}

		void Reset(bool bDeleteWidgets); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144BCB78
		void RemoveEntry(UUserWidget EntryWidget); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144BCA98
		UUserWidget BP_CreateEntryOfClass(UClass EntryClass); // Flags: Final|RequiredAPI|Native|Private|BlueprintCallable 0x7FF4144BC9B8
		UUserWidget BP_CreateEntry(); // Flags: Final|RequiredAPI|Native|Private|BlueprintCallable 0x7FF4144BC8D8
	};


	// Class UMG.EditableText
	// Inherited from UWidget -> UVisual -> UObject
	// Size: 0x320 (0x480 - 0x160)
	class UEditableText : public UWidget	
	{
	public:
		FText Text; // 0x160(0x10)
		FDelegateProperty TextDelegate; // 0x170(0xC)
		unsigned char UnknownData05_6[0x4]; // 0x17C(0x4) UNKNOWN PROPERTY
		FText HintText; // 0x180(0x10)
		FDelegateProperty HintTextDelegate; // 0x190(0xC)
		unsigned char UnknownData06_6[0x4]; // 0x19C(0x4) UNKNOWN PROPERTY
		FEditableTextStyle WidgetStyle; // 0x1A0(0x290)
		bool IsReadOnly; // 0x430(0x1)
		bool IsPassword; // 0x431(0x1)
		unsigned char UnknownData07_6[0x2]; // 0x432(0x2) UNKNOWN PROPERTY
		float MinimumDesiredWidth; // 0x434(0x4)
		bool IsCaretMovedWhenGainFocus; // 0x438(0x1)
		bool SelectAllTextWhenFocused; // 0x439(0x1)
		bool RevertTextOnEscape; // 0x43A(0x1)
		bool ClearKeyboardFocusOnCommit; // 0x43B(0x1)
		bool SelectAllTextOnCommit; // 0x43C(0x1)
		bool AllowContextMenu; // 0x43D(0x1)
		TEnumAsByte KeyboardType; // 0x43E(0x1)
		FVirtualKeyboardOptions VirtualKeyboardOptions; // 0x43F(0x1)
		EVirtualKeyboardTrigger VirtualKeyboardTrigger; // 0x440(0x1)
		EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0x441(0x1)
		TEnumAsByte Justification; // 0x442(0x1)
		ETextOverflowPolicy OverflowPolicy; // 0x443(0x1)
		FShapedTextOptions ShapedTextOptions; // 0x444(0x3)
		unsigned char UnknownData08_6[0x1]; // 0x447(0x1) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnTextChanged; // 0x448(0x10)
		FMulticastInlineDelegate OnTextCommitted; // 0x458(0x10)
		unsigned char UnknownData09_7[0x10]; // 0x468(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.EditableText");
			return ret;
		}

		void SetTextOverflowPolicy(ETextOverflowPolicy InOverflowPolicy); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF41103B4D0
		void SetText(FText InText); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF41103B3F0
		void SetMinimumDesiredWidth(float InMinDesiredWidth); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF41103B310
		void SetJustification(TEnumAsByte InJustification); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF41103B230
		void SetIsReadOnly(bool InbIsReadyOnly); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF41103B150
		void SetIsPassword(bool InbIsPassword); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF41103B070
		void SetHintText(FText InHintText); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF41103AF90
		void SetFontOutlineMaterial(UMaterialInterface InMaterial); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF41103AEB0
		void SetFontMaterial(UMaterialInterface InMaterial); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF41103ADD0
		void SetFont(FSlateFontInfo InFontInfo); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF41103ACF0
		void OnEditableTextCommittedEvent__DelegateSignature(FText& Text, TEnumAsByte CommitMethod); // Flags: MulticastDelegate|Public|Delegate|HasOutParms 0x7FF41103AC10
		void OnEditableTextChangedEvent__DelegateSignature(FText& Text); // Flags: MulticastDelegate|Public|Delegate|HasOutParms 0x7FF41103AB30
		FText GetText(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41103AA50
		TEnumAsByte GetJustification(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41103A970
		FText GetHintText(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41103A890
		FSlateFontInfo GetFont(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41103A7B0
	};


	// Class UMG.EditableTextBox
	// Inherited from UWidget -> UVisual -> UObject
	// Size: 0xD10 (0xE70 - 0x160)
	class UEditableTextBox : public UWidget	
	{
	public:
		FText Text; // 0x160(0x10)
		FDelegateProperty TextDelegate; // 0x170(0xC)
		unsigned char UnknownData04_6[0x4]; // 0x17C(0x4) UNKNOWN PROPERTY
		FEditableTextBoxStyle WidgetStyle; // 0x180(0xC80)
		FText HintText; // 0xE00(0x10)
		FDelegateProperty HintTextDelegate; // 0xE10(0xC)
		bool IsReadOnly; // 0xE1C(0x1)
		bool IsPassword; // 0xE1D(0x1)
		unsigned char UnknownData05_6[0x2]; // 0xE1E(0x2) UNKNOWN PROPERTY
		float MinimumDesiredWidth; // 0xE20(0x4)
		bool IsCaretMovedWhenGainFocus; // 0xE24(0x1)
		bool SelectAllTextWhenFocused; // 0xE25(0x1)
		bool RevertTextOnEscape; // 0xE26(0x1)
		bool ClearKeyboardFocusOnCommit; // 0xE27(0x1)
		bool SelectAllTextOnCommit; // 0xE28(0x1)
		bool AllowContextMenu; // 0xE29(0x1)
		TEnumAsByte KeyboardType; // 0xE2A(0x1)
		FVirtualKeyboardOptions VirtualKeyboardOptions; // 0xE2B(0x1)
		EVirtualKeyboardTrigger VirtualKeyboardTrigger; // 0xE2C(0x1)
		EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0xE2D(0x1)
		TEnumAsByte Justification; // 0xE2E(0x1)
		ETextOverflowPolicy OverflowPolicy; // 0xE2F(0x1)
		FShapedTextOptions ShapedTextOptions; // 0xE30(0x3)
		unsigned char UnknownData06_6[0x5]; // 0xE33(0x5) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnTextChanged; // 0xE38(0x10)
		FMulticastInlineDelegate OnTextCommitted; // 0xE48(0x10)
		unsigned char UnknownData07_7[0x10]; // 0xE58(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.EditableTextBox");
			return ret;
		}

		void SetTextOverflowPolicy(ETextOverflowPolicy InOverflowPolicy); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF41103C2D8
		void SetText(FText InText); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF41103C1F8
		void SetJustification(TEnumAsByte InJustification); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF41103C118
		void SetIsReadOnly(bool bReadOnly); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF41103C038
		void SetIsPassword(bool bIsPassword); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF41103BF58
		void SetHintText(FText InText); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF41103BE78
		void SetForegroundColor(FLinearColor Color); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 0x7FF41103BD98
		void SetError(FText InError); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF41103BCB8
		void OnEditableTextBoxCommittedEvent__DelegateSignature(FText& Text, TEnumAsByte CommitMethod); // Flags: MulticastDelegate|Public|Delegate|HasOutParms 0x7FF41103BBD8
		void OnEditableTextBoxChangedEvent__DelegateSignature(FText& Text); // Flags: MulticastDelegate|Public|Delegate|HasOutParms 0x7FF41103BAF8
		bool HasError(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41103BA18
		FText GetText(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41103B938
		void ClearError(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF41103B858
	};


	// Class UMG.ExpandableArea
	// Inherited from UWidget -> UVisual -> UObject
	// Size: 0x2B0 (0x410 - 0x160)
	class UExpandableArea : public UWidget	
	{
	public:
		unsigned char UnknownData04_3[0x10]; // 0x160(0x10) UNKNOWN PROPERTY
		FExpandableAreaStyle Style; // 0x170(0x180)
		FSlateBrush BorderBrush; // 0x2F0(0xB0)
		FSlateColor BorderColor; // 0x3A0(0x14)
		bool bIsExpanded; // 0x3B4(0x1)
		unsigned char UnknownData05_6[0x3]; // 0x3B5(0x3) UNKNOWN PROPERTY
		float MaxHeight; // 0x3B8(0x4)
		FMargin HeaderPadding; // 0x3BC(0x10)
		FMargin AreaPadding; // 0x3CC(0x10)
		unsigned char UnknownData06_6[0x4]; // 0x3DC(0x4) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnExpansionChanged; // 0x3E0(0x10)
		UWidget HeaderContent; // 0x3F0(0x8)
		UWidget BodyContent; // 0x3F8(0x8)
		unsigned char UnknownData07_7[0x10]; // 0x400(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.ExpandableArea");
			return ret;
		}

		void SetIsExpanded_Animated(bool IsExpanded); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144BCE18
		void SetIsExpanded(bool IsExpanded); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144BCD38
		bool GetIsExpanded(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144BCC58
	};


	// Class UMG.GridPanel
	// Inherited from UPanelWidget -> UWidget -> UVisual -> UObject
	// Size: 0x30 (0x1A8 - 0x178)
	class UGridPanel : public UPanelWidget	
	{
	public:
		TArray ColumnFill; // 0x178(0x10)
		TArray RowFill; // 0x188(0x10)
		unsigned char UnknownData01_7[0x10]; // 0x198(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.GridPanel");
			return ret;
		}

		void SetRowFill(int32_t RowIndex, float Coefficient); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144BD0B8
		void SetColumnFill(int32_t ColumnIndex, float Coefficient); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144BCFD8
		UGridSlot AddChildToGrid(UWidget Content, int32_t InRow, int32_t InColumn); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144BCEF8
	};


	// Class UMG.GridSlot
	// Inherited from UPanelSlot -> UVisual -> UObject
	// Size: 0x40 (0x78 - 0x38)
	class UGridSlot : public UPanelSlot	
	{
	public:
		FMargin Padding; // 0x38(0x10)
		TEnumAsByte HorizontalAlignment; // 0x48(0x1)
		TEnumAsByte VerticalAlignment; // 0x49(0x1)
		unsigned char UnknownData02_6[0x2]; // 0x4A(0x2) UNKNOWN PROPERTY
		int32_t Row; // 0x4C(0x4)
		int32_t RowSpan; // 0x50(0x4)
		int32_t Column; // 0x54(0x4)
		int32_t ColumnSpan; // 0x58(0x4)
		int32_t Layer; // 0x5C(0x4)
		FVector2D Nudge; // 0x60(0x10)
		unsigned char UnknownData03_7[0x8]; // 0x70(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.GridSlot");
			return ret;
		}

		void SetVerticalAlignment(TEnumAsByte InVerticalAlignment); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144BD898
		void SetRowSpan(int32_t InRowSpan); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144BD7B8
		void SetRow(int32_t InRow); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144BD6D8
		void SetPadding(FMargin InPadding); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144BD5F8
		void SetNudge(FVector2D InNudge); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 0x7FF4144BD518
		void SetLayer(int32_t InLayer); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144BD438
		void SetHorizontalAlignment(TEnumAsByte InHorizontalAlignment); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144BD358
		void SetColumnSpan(int32_t InColumnSpan); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144BD278
		void SetColumn(int32_t InColumn); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144BD198
	};


	// Class UMG.HorizontalBox
	// Inherited from UPanelWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x188 - 0x178)
	class UHorizontalBox : public UPanelWidget	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0x178(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.HorizontalBox");
			return ret;
		}

		UHorizontalBoxSlot AddChildToHorizontalBox(UWidget Content); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144BD978
	};


	// Class UMG.HorizontalBoxSlot
	// Inherited from UPanelSlot -> UVisual -> UObject
	// Size: 0x28 (0x60 - 0x38)
	class UHorizontalBoxSlot : public UPanelSlot	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x38(0x8) UNKNOWN PROPERTY
		FSlateChildSize Size; // 0x40(0x8)
		FMargin Padding; // 0x48(0x10)
		TEnumAsByte HorizontalAlignment; // 0x58(0x1)
		TEnumAsByte VerticalAlignment; // 0x59(0x1)
		unsigned char UnknownData03_7[0x6]; // 0x5A(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.HorizontalBoxSlot");
			return ret;
		}

		void SetVerticalAlignment(TEnumAsByte InVerticalAlignment); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144BDCF8
		void SetSize(FSlateChildSize InSize); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144BDC18
		void SetPadding(FMargin InPadding); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144BDB38
		void SetHorizontalAlignment(TEnumAsByte InHorizontalAlignment); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144BDA58
	};


	// Class UMG.Image
	// Inherited from UWidget -> UVisual -> UObject
	// Size: 0x120 (0x280 - 0x160)
	class UImage : public UWidget	
	{
	public:
		FSlateBrush Brush; // 0x160(0xB0)
		FDelegateProperty BrushDelegate; // 0x210(0xC)
		FLinearColor ColorAndOpacity; // 0x21C(0x10)
		FDelegateProperty ColorAndOpacityDelegate; // 0x22C(0xC)
		bool bFlipForRightToLeftFlowDirection; // 0x238(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x239(0x3) UNKNOWN PROPERTY
		FDelegateProperty OnMouseButtonDownEvent; // 0x23C(0xC)
		unsigned char UnknownData03_7[0x38]; // 0x248(0x38) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.Image");
			return ret;
		}

		void SetOpacity(float InOpacity); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144BE938
		void SetDesiredSizeOverride(FVector2D DesiredSize); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 0x7FF4144BE858
		void SetColorAndOpacity(FLinearColor InColorAndOpacity); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 0x7FF4144BE778
		void SetBrushTintColor(FSlateColor TintColor); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144BE698
		void SetBrushResourceObject(UObject ResourceObject); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144BE5B8
		void SetBrushFromTextureDynamic(UTexture2DDynamic Texture, bool bMatchSize); // Flags: RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144BE4D8
		void SetBrushFromTexture(UTexture2D Texture, bool bMatchSize); // Flags: RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144BE3F8
		void SetBrushFromSoftTexture(TWeakObjectPtr SoftTexture, bool bMatchSize); // Flags: RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144BE318
		void SetBrushFromSoftMaterial(TWeakObjectPtr SoftMaterial); // Flags: RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144BE238
		void SetBrushFromMaterial(UMaterialInterface Material); // Flags: RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144BE158
		void SetBrushFromAtlasInterface(TScriptInterface AtlasRegion, bool bMatchSize); // Flags: RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144BE078
		void SetBrushFromAsset(USlateBrushAsset Asset); // Flags: RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144BDF98
		void SetBrush(FSlateBrush& InBrush); // Flags: RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF4144BDEB8
		UMaterialInstanceDynamic GetDynamicMaterial(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144BDDD8
	};


	// Class UMG.InputKeySelector
	// Inherited from UWidget -> UVisual -> UObject
	// Size: 0x6F0 (0x850 - 0x160)
	class UInputKeySelector : public UWidget	
	{
	public:
		FButtonStyle WidgetStyle; // 0x160(0x370)
		FTextBlockStyle TextStyle; // 0x4D0(0x2E0)
		FInputChord SelectedKey; // 0x7B0(0x20)
		FMargin Margin; // 0x7D0(0x10)
		FText KeySelectionText; // 0x7E0(0x10)
		FText NoKeySpecifiedText; // 0x7F0(0x10)
		bool bAllowModifierKeys; // 0x800(0x1)
		bool bAllowGamepadKeys; // 0x801(0x1)
		unsigned char UnknownData02_6[0x6]; // 0x802(0x6) UNKNOWN PROPERTY
		TArray EscapeKeys; // 0x808(0x10)
		FMulticastInlineDelegate OnKeySelected; // 0x818(0x10)
		FMulticastInlineDelegate OnIsSelectingKeyChanged; // 0x828(0x10)
		unsigned char UnknownData03_7[0x18]; // 0x838(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.InputKeySelector");
			return ret;
		}

		void SetTextBlockVisibility(ESlateVisibility InVisibility); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF41103CDD8
		void SetSelectedKey(FInputChord& InSelectedKey); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF41103CCF8
		void SetNoKeySpecifiedText(FText InNoKeySpecifiedText); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF41103CC18
		void SetKeySelectionText(FText InKeySelectionText); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF41103CB38
		void SetEscapeKeys(TArray& InKeys); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF41103CA58
		void SetAllowModifierKeys(bool bInAllowModifierKeys); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF41103C978
		void SetAllowGamepadKeys(bool bInAllowGamepadKeys); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF41103C898
		void OnKeySelected__DelegateSignature(FInputChord SelectedKey); // Flags: MulticastDelegate|Public|Delegate 0x7FF41103C6F8
		void OnIsSelectingKeyChanged__DelegateSignature(); // Flags: MulticastDelegate|Public|Delegate 0x7FF41103C618
		bool GetIsSelectingKey(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41103C538
	};


	// Class UMG.InvalidationBox
	// Inherited from UContentWidget -> UPanelWidget -> UWidget -> UVisual -> UObject
	// Size: 0x18 (0x190 - 0x178)
	class UInvalidationBox : public UContentWidget	
	{
	public:
		bool bCanCache; // 0x178(0x1)
		unsigned char UnknownData01_7[0x17]; // 0x179(0x17) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.InvalidationBox");
			return ret;
		}

		void SetCanCache(bool CanCache); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144BEBD8
		void InvalidateCache(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144BEAF8
		bool GetCanCache(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144BEA18
	};


	// Class UMG.MenuAnchor
	// Inherited from UContentWidget -> UPanelWidget -> UWidget -> UVisual -> UObject
	// Size: 0x48 (0x1C0 - 0x178)
	class UMenuAnchor : public UContentWidget	
	{
	public:
		UClass MenuClass; // 0x178(0x8)
		FDelegateProperty OnGetMenuContentEvent; // 0x180(0xC)
		FDelegateProperty OnGetUserMenuContentEvent; // 0x18C(0xC)
		TEnumAsByte Placement; // 0x198(0x1)
		bool bFitInWindow; // 0x199(0x1)
		bool ShouldDeferPaintingAfterWindowContent; // 0x19A(0x1)
		bool UseApplicationMenuStack; // 0x19B(0x1)
		unsigned char UnknownData02_6[0x4]; // 0x19C(0x4) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnMenuOpenChanged; // 0x1A0(0x10)
		unsigned char UnknownData03_7[0x10]; // 0x1B0(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.MenuAnchor");
			return ret;
		}

		void ToggleOpen(bool bFocusOnOpen); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF41103E1F8
		bool ShouldOpenDueToClick(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41103E118
		void SetPlacement(TEnumAsByte InPlacement); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF41103E038
		void Open(bool bFocusMenu); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF41103DF58
		bool IsOpen(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41103DE78
		bool HasOpenSubMenus(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41103DD98
		UUserWidget GetUserWidget__DelegateSignature(); // Flags: Public|Delegate 0x7FF41103DCB8
		FVector2D GetMenuPosition(); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF41103DBD8
		void FitInWindow(bool bFit); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF41103DAF8
		void Close(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF41103DA18
	};


	// Class UMG.TextLayoutWidget
	// Inherited from UWidget -> UVisual -> UObject
	// Size: 0x28 (0x188 - 0x160)
	class UTextLayoutWidget : public UWidget	
	{
	public:
		FShapedTextOptions ShapedTextOptions; // 0x160(0x3)
		TEnumAsByte Justification; // 0x163(0x1)
		ETextWrappingPolicy WrappingPolicy; // 0x164(0x1)
		bool AutoWrapText : 1; // 0x165:0(0x1)
		unsigned char UnknownData02_5[0x2]; // 0x166(0x2) UNKNOWN PROPERTY
		float WrapTextAt; // 0x168(0x4)
		FMargin Margin; // 0x16C(0x10)
		float LineHeightPercentage; // 0x17C(0x4)
		bool ApplyLineHeightToBottomLine; // 0x180(0x1)
		unsigned char UnknownData03_7[0x7]; // 0x181(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.TextLayoutWidget");
			return ret;
		}

		void SetJustification(TEnumAsByte InJustification); // Flags: RequiredAPI|Native|Public|BlueprintCallable 0x7FF411060098
	};


	// Class UMG.MultiLineEditableText
	// Inherited from UTextLayoutWidget -> UWidget -> UVisual -> UObject
	// Size: 0x358 (0x4E0 - 0x188)
	class UMultiLineEditableText : public UTextLayoutWidget	
	{
	public:
		FText Text; // 0x188(0x10)
		FText HintText; // 0x198(0x10)
		FDelegateProperty HintTextDelegate; // 0x1A8(0xC)
		unsigned char UnknownData02_6[0xC]; // 0x1B4(0xC) UNKNOWN PROPERTY
		FTextBlockStyle WidgetStyle; // 0x1C0(0x2E0)
		bool bIsReadOnly; // 0x4A0(0x1)
		bool SelectAllTextWhenFocused; // 0x4A1(0x1)
		bool ClearTextSelectionOnFocusLoss; // 0x4A2(0x1)
		bool RevertTextOnEscape; // 0x4A3(0x1)
		bool ClearKeyboardFocusOnCommit; // 0x4A4(0x1)
		bool AllowContextMenu; // 0x4A5(0x1)
		FVirtualKeyboardOptions VirtualKeyboardOptions; // 0x4A6(0x1)
		EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0x4A7(0x1)
		FMulticastInlineDelegate OnTextChanged; // 0x4A8(0x10)
		FMulticastInlineDelegate OnTextCommitted; // 0x4B8(0x10)
		unsigned char UnknownData03_7[0x18]; // 0x4C8(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.MultiLineEditableText");
			return ret;
		}

		void SetWidgetStyle(FTextBlockStyle& InWidgetStyle); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF411060B18
		void SetText(FText InText); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF411060A38
		void SetIsReadOnly(bool bReadOnly); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF411060958
		void SetHintText(FText InHintText); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF411060878
		void SetFontOutlineMaterial(UMaterialInterface InMaterial); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF411060798
		void SetFontMaterial(UMaterialInterface InMaterial); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4110606B8
		void SetFont(FSlateFontInfo InFontInfo); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4110605D8
		void OnMultiLineEditableTextCommittedEvent__DelegateSignature(FText& Text, TEnumAsByte CommitMethod); // Flags: MulticastDelegate|Public|Delegate|HasOutParms 0x7FF4110604F8
		void OnMultiLineEditableTextChangedEvent__DelegateSignature(FText& Text); // Flags: MulticastDelegate|Public|Delegate|HasOutParms 0x7FF411060418
		FText GetText(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF411060338
		FText GetHintText(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF411060258
		FSlateFontInfo GetFont(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF411060178
	};


	// Class UMG.MultiLineEditableTextBox
	// Inherited from UTextLayoutWidget -> UWidget -> UVisual -> UObject
	// Size: 0xCF8 (0xE80 - 0x188)
	class UMultiLineEditableTextBox : public UTextLayoutWidget	
	{
	public:
		FText Text; // 0x188(0x10)
		FText HintText; // 0x198(0x10)
		FDelegateProperty HintTextDelegate; // 0x1A8(0xC)
		unsigned char UnknownData03_6[0xC]; // 0x1B4(0xC) UNKNOWN PROPERTY
		FEditableTextBoxStyle WidgetStyle; // 0x1C0(0xC80)
		bool bIsReadOnly; // 0xE40(0x1)
		bool AllowContextMenu; // 0xE41(0x1)
		FVirtualKeyboardOptions VirtualKeyboardOptions; // 0xE42(0x1)
		EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0xE43(0x1)
		unsigned char UnknownData04_6[0x4]; // 0xE44(0x4) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnTextChanged; // 0xE48(0x10)
		FMulticastInlineDelegate OnTextCommitted; // 0xE58(0x10)
		unsigned char UnknownData05_7[0x18]; // 0xE68(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.MultiLineEditableTextBox");
			return ret;
		}

		void SetTextStyle(FTextBlockStyle& InTextStyle); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF4110613D8
		void SetText(FText InText); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4110612F8
		void SetIsReadOnly(bool bReadOnly); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF411061218
		void SetHintText(FText InHintText); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF411061138
		void SetForegroundColor(FLinearColor Color); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 0x7FF411061058
		void SetError(FText InError); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF411060F78
		void OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(FText& Text, TEnumAsByte CommitMethod); // Flags: MulticastDelegate|Public|Delegate|HasOutParms 0x7FF411060E98
		void OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(FText& Text); // Flags: MulticastDelegate|Public|Delegate|HasOutParms 0x7FF411060DB8
		FText GetText(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF411060CD8
		FText GetHintText(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF411060BF8
	};


	// Class UMG.NamedSlot
	// Inherited from UContentWidget -> UPanelWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x188 - 0x178)
	class UNamedSlot : public UContentWidget	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0x178(0x10) UNKNOWN PROPERTY

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
	// Size: 0x10 (0x170 - 0x160)
	class UNativeWidgetHost : public UWidget	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0x160(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.NativeWidgetHost");
			return ret;
		}
	};


	// Class UMG.Overlay
	// Inherited from UPanelWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x188 - 0x178)
	class UOverlay : public UPanelWidget	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0x178(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.Overlay");
			return ret;
		}

		bool ReplaceOverlayChildAt(int32_t Index, UWidget Content); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF411E05430
		UOverlaySlot AddChildToOverlay(UWidget Content); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF411E05350
	};


	// Class UMG.OverlaySlot
	// Inherited from UPanelSlot -> UVisual -> UObject
	// Size: 0x20 (0x58 - 0x38)
	class UOverlaySlot : public UPanelSlot	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x38(0x8) UNKNOWN PROPERTY
		FMargin Padding; // 0x40(0x10)
		TEnumAsByte HorizontalAlignment; // 0x50(0x1)
		TEnumAsByte VerticalAlignment; // 0x51(0x1)
		unsigned char UnknownData03_7[0x6]; // 0x52(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.OverlaySlot");
			return ret;
		}

		void SetVerticalAlignment(TEnumAsByte InVerticalAlignment); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144BEE78
		void SetPadding(FMargin InPadding); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144BED98
		void SetHorizontalAlignment(TEnumAsByte InHorizontalAlignment); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144BECB8
	};


	// Class UMG.SlatePostBufferProcessorUpdater
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class USlatePostBufferProcessorUpdater : public UObject	
	{
	public:
		bool bSkipBufferUpdate; // 0x28(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x29(0x7) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_7[0x4]; // 0x34(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.PostBufferBlurUpdater");
			return ret;
		}
	};


	// Class UMG.PostBufferUpdate
	// Inherited from UWidget -> UVisual -> UObject
	// Size: 0x38 (0x198 - 0x160)
	class UPostBufferUpdate : public UWidget	
	{
	public:
		bool bPerformDefaultPostBufferUpdate; // 0x160(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x161(0x7) UNKNOWN PROPERTY
		TArray BuffersToUpdate; // 0x168(0x10)
		TArray UpdateBufferInfos; // 0x178(0x10)
		unsigned char UnknownData03_7[0x10]; // 0x188(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.PostBufferUpdate");
			return ret;
		}
	};


	// Class UMG.ProgressBar
	// Inherited from UWidget -> UVisual -> UObject
	// Size: 0x280 (0x3E0 - 0x160)
	class UProgressBar : public UWidget	
	{
	public:
		FProgressBarStyle WidgetStyle; // 0x160(0x230)
		float Percent; // 0x390(0x4)
		TEnumAsByte BarFillType; // 0x394(0x1)
		TEnumAsByte BarFillStyle; // 0x395(0x1)
		bool bIsMarquee; // 0x396(0x1)
		unsigned char UnknownData02_6[0x1]; // 0x397(0x1) UNKNOWN PROPERTY
		FVector2D BorderPadding; // 0x398(0x10)
		FDelegateProperty PercentDelegate; // 0x3A8(0xC)
		FLinearColor FillColorAndOpacity; // 0x3B4(0x10)
		FDelegateProperty FillColorAndOpacityDelegate; // 0x3C4(0xC)
		unsigned char UnknownData03_7[0x10]; // 0x3D0(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.ProgressBar");
			return ret;
		}

		void SetPercent(float InPercent); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144BF118
		void SetIsMarquee(bool InbIsMarquee); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144BF038
		void SetFillColorAndOpacity(FLinearColor InColor); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 0x7FF4144BEF58
	};


	// Class UMG.RetainerBox
	// Inherited from UContentWidget -> UPanelWidget -> UWidget -> UVisual -> UObject
	// Size: 0x30 (0x1A8 - 0x178)
	class URetainerBox : public UContentWidget	
	{
	public:
		bool bRetainRender; // 0x178(0x1)
		bool RenderOnInvalidation; // 0x179(0x1)
		bool RenderOnPhase; // 0x17A(0x1)
		unsigned char UnknownData03_6[0x1]; // 0x17B(0x1) UNKNOWN PROPERTY
		int32_t Phase; // 0x17C(0x4)
		int32_t PhaseCount; // 0x180(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x184(0x4) UNKNOWN PROPERTY
		UMaterialInterface EffectMaterial; // 0x188(0x8)
		FName TextureParameter; // 0x190(0x4)
		unsigned char UnknownData05_7[0x14]; // 0x194(0x14) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.RetainerBox");
			return ret;
		}

		void SetTextureParameter(FName TextureParameter); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144BF658
		void SetRetainRendering(bool bInRetainRendering); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144BF578
		void SetRenderingPhase(int32_t RenderPhase, int32_t TotalPhases); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144BF498
		void SetEffectMaterial(UMaterialInterface EffectMaterial); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144BF3B8
		void RequestRender(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144BF2D8
		UMaterialInstanceDynamic GetEffectMaterial(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144BF1F8
	};


	// Class UMG.RichTextBlock
	// Inherited from UTextLayoutWidget -> UWidget -> UVisual -> UObject
	// Size: 0x638 (0x7C0 - 0x188)
	class URichTextBlock : public UTextLayoutWidget	
	{
	public:
		FText Text; // 0x188(0x10)
		UDataTable TextStyleSet; // 0x198(0x8)
		TArray DecoratorClasses; // 0x1A0(0x10)
		bool bOverrideDefaultStyle; // 0x1B0(0x1)
		unsigned char UnknownData03_6[0xF]; // 0x1B1(0xF) UNKNOWN PROPERTY
		FTextBlockStyle DefaultTextStyleOverride; // 0x1C0(0x2E0)
		float MinDesiredWidth; // 0x4A0(0x4)
		ETextTransformPolicy TextTransformPolicy; // 0x4A4(0x1)
		ETextOverflowPolicy TextOverflowPolicy; // 0x4A5(0x1)
		unsigned char UnknownData04_6[0xA]; // 0x4A6(0xA) UNKNOWN PROPERTY
		FTextBlockStyle DefaultTextStyle; // 0x4B0(0x2E0)
		TArray InstanceDecorators; // 0x790(0x10)
		unsigned char UnknownData05_7[0x20]; // 0x7A0(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.RichTextBlock");
			return ret;
		}

		void SetTextTransformPolicy(ETextTransformPolicy InTransformPolicy); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144C07D8
		void SetTextStyleSet(UDataTable NewTextStyleSet); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144C06F8
		void SetTextOverflowPolicy(ETextOverflowPolicy InOverflowPolicy); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144C0618
		void SetText(FText& InText); // Flags: RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF4144C0538
		void SetMinDesiredWidth(float InMinDesiredWidth); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144C0458
		void SetDefaultTextStyle(FTextBlockStyle& InDefaultTextStyle); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF4144C0378
		void SetDefaultStrikeBrush(FSlateBrush& InStrikeBrush); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF4144C0298
		void SetDefaultShadowOffset(FVector2D InShadowOffset); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 0x7FF4144C01B8
		void SetDefaultShadowColorAndOpacity(FLinearColor InShadowColorAndOpacity); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 0x7FF4144C00D8
		void SetDefaultMaterial(UMaterialInterface InMaterial); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144BFFF8
		void SetDefaultFont(FSlateFontInfo InFontInfo); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144BFF18
		void SetDefaultColorAndOpacity(FSlateColor InColorAndOpacity); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144BFE38
		void SetDecorators(TArray& InDecoratorClasses); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF4144BFD58
		void SetAutoWrapText(bool InAutoTextWrap); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144BFC78
		void RefreshTextLayout(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144BFB98
		UDataTable GetTextStyleSet(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144BFAB8
		FText GetText(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144BF9D8
		UMaterialInstanceDynamic GetDefaultDynamicMaterial(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144BF8F8
		URichTextBlockDecorator GetDecoratorByClass(UClass DecoratorClass); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144BF818
		void ClearAllDefaultStyleOverrides(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144BF738
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
		UDataTable ImageSet; // 0x28(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.RichTextBlockImageDecorator");
			return ret;
		}
	};


	// Class UMG.SafeZone
	// Inherited from UContentWidget -> UPanelWidget -> UWidget -> UVisual -> UObject
	// Size: 0x18 (0x190 - 0x178)
	class USafeZone : public UContentWidget	
	{
	public:
		bool PadLeft; // 0x178(0x1)
		bool PadRight; // 0x179(0x1)
		bool PadTop; // 0x17A(0x1)
		bool PadBottom; // 0x17B(0x1)
		unsigned char UnknownData01_7[0x14]; // 0x17C(0x14) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.SafeZone");
			return ret;
		}

		void SetSidesToPad(bool InPadLeft, bool InPadRight, bool InPadTop, bool InPadBottom); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144C08B8
	};


	// Class UMG.SafeZoneSlot
	// Inherited from UPanelSlot -> UVisual -> UObject
	// Size: 0x38 (0x70 - 0x38)
	class USafeZoneSlot : public UPanelSlot	
	{
	public:
		bool bIsTitleSafe; // 0x38(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x39(0x3) UNKNOWN PROPERTY
		FMargin SafeAreaScale; // 0x3C(0x10)
		TEnumAsByte HAlign; // 0x4C(0x1)
		TEnumAsByte VAlign; // 0x4D(0x1)
		unsigned char UnknownData04_6[0x2]; // 0x4E(0x2) UNKNOWN PROPERTY
		FMargin Padding; // 0x50(0x10)
		unsigned char UnknownData05_7[0x10]; // 0x60(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.SafeZoneSlot");
			return ret;
		}
	};


	// Class UMG.ScaleBox
	// Inherited from UContentWidget -> UPanelWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x198 - 0x178)
	class UScaleBox : public UContentWidget	
	{
	public:
		TEnumAsByte Stretch; // 0x178(0x1)
		TEnumAsByte StretchDirection; // 0x179(0x1)
		unsigned char UnknownData02_6[0x2]; // 0x17A(0x2) UNKNOWN PROPERTY
		float UserSpecifiedScale; // 0x17C(0x4)
		bool IgnoreInheritedScale; // 0x180(0x1)
		unsigned char UnknownData03_7[0x17]; // 0x181(0x17) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.ScaleBox");
			return ret;
		}

		void SetUserSpecifiedScale(float InUserSpecifiedScale); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144C0C38
		void SetStretchDirection(TEnumAsByte InStretchDirection); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144C0B58
		void SetStretch(TEnumAsByte InStretch); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144C0A78
		void SetIgnoreInheritedScale(bool bInIgnoreInheritedScale); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144C0998
	};


	// Class UMG.ScaleBoxSlot
	// Inherited from UPanelSlot -> UVisual -> UObject
	// Size: 0x18 (0x50 - 0x38)
	class UScaleBoxSlot : public UPanelSlot	
	{
	public:
		TEnumAsByte HorizontalAlignment; // 0x38(0x1)
		TEnumAsByte VerticalAlignment; // 0x39(0x1)
		unsigned char UnknownData01_7[0x16]; // 0x3A(0x16) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.ScaleBoxSlot");
			return ret;
		}

		void SetVerticalAlignment(TEnumAsByte InVerticalAlignment); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144C0ED8
		void SetPadding(FMargin InPadding); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144C0DF8
		void SetHorizontalAlignment(TEnumAsByte InHorizontalAlignment); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144C0D18
	};


	// Class UMG.ScrollBar
	// Inherited from UWidget -> UVisual -> UObject
	// Size: 0x690 (0x7F0 - 0x160)
	class UScrollBar : public UWidget	
	{
	public:
		FScrollBarStyle WidgetStyle; // 0x160(0x650)
		bool bAlwaysShowScrollbar; // 0x7B0(0x1)
		bool bAlwaysShowScrollbarTrack; // 0x7B1(0x1)
		TEnumAsByte orientation; // 0x7B2(0x1)
		unsigned char UnknownData02_6[0x5]; // 0x7B3(0x5) UNKNOWN PROPERTY
		FVector2D Thickness; // 0x7B8(0x10)
		FMargin Padding; // 0x7C8(0x10)
		unsigned char UnknownData03_7[0x18]; // 0x7D8(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.ScrollBar");
			return ret;
		}

		void SetState(float InOffsetFraction, float InThumbSizeFraction); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144C0FB8
	};


	// Class UMG.ScrollBox
	// Inherited from UPanelWidget -> UWidget -> UVisual -> UObject
	// Size: 0x9C8 (0xB40 - 0x178)
	class UScrollBox : public UPanelWidget	
	{
	public:
		float ScrollAnimationInterpolationSpeed; // 0x178(0x4)
		bool bEnableTouchScrolling; // 0x17C(0x1)
		unsigned char UnknownData06_6[0x3]; // 0x17D(0x3) UNKNOWN PROPERTY
		FScrollBoxStyle WidgetStyle; // 0x180(0x2F0)
		FScrollBarStyle WidgetBarStyle; // 0x470(0x650)
		TEnumAsByte orientation; // 0xAC0(0x1)
		ESlateVisibility ScrollBarVisibility; // 0xAC1(0x1)
		EConsumeMouseWheel ConsumeMouseWheel; // 0xAC2(0x1)
		unsigned char UnknownData07_6[0x5]; // 0xAC3(0x5) UNKNOWN PROPERTY
		FVector2D ScrollbarThickness; // 0xAC8(0x10)
		FMargin ScrollBarPadding; // 0xAD8(0x10)
		bool AlwaysShowScrollbar; // 0xAE8(0x1)
		bool AlwaysShowScrollbarTrack; // 0xAE9(0x1)
		bool AllowOverscroll; // 0xAEA(0x1)
		bool BackPadScrolling; // 0xAEB(0x1)
		bool FrontPadScrolling; // 0xAEC(0x1)
		bool bAnimateWheelScrolling; // 0xAED(0x1)
		EDescendantScrollDestination NavigationDestination; // 0xAEE(0x1)
		unsigned char UnknownData08_6[0x1]; // 0xAEF(0x1) UNKNOWN PROPERTY
		float NavigationScrollPadding; // 0xAF0(0x4)
		EScrollWhenFocusChanges ScrollWhenFocusChanges; // 0xAF4(0x1)
		bool bAllowRightClickDragScrolling; // 0xAF5(0x1)
		unsigned char UnknownData09_6[0x2]; // 0xAF6(0x2) UNKNOWN PROPERTY
		float WheelScrollMultiplier; // 0xAF8(0x4)
		unsigned char UnknownData10_6[0x4]; // 0xAFC(0x4) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnUserScrolled; // 0xB00(0x10)
		FMulticastInlineDelegate OnScrollBarVisibilityChanged; // 0xB10(0x10)
		unsigned char UnknownData11_7[0x18]; // 0xB20(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.ScrollBox");
			return ret;
		}

		void SetWheelScrollMultiplier(float NewWheelScrollMultiplier); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144C22F8
		void SetScrollWhenFocusChanges(EScrollWhenFocusChanges NewScrollWhenFocusChanges); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144C2218
		void SetScrollOffset(float NewScrollOffset); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144C2138
		void SetScrollbarVisibility(ESlateVisibility NewScrollBarVisibility); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144C2058
		void SetScrollbarThickness(FVector2D& NewScrollbarThickness); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF4144C1F78
		void SetScrollBarPadding(FMargin& NewScrollbarPadding); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF4144C1E98
		void SetScrollAnimationInterpolationSpeed(float NewScrollAnimationInterpolationSpeed); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144C1DB8
		void SetOrientation(TEnumAsByte NewOrientation); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144C1CD8
		void SetNavigationDestination(EDescendantScrollDestination NewNavigationDestination); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144C1BF8
		void SetIsTouchScrollingEnabled(bool bInEnableTouchScrolling); // Flags: Final|RequiredAPI|Native|Public 0x7FF4144C1B18
		void SetConsumeMouseWheel(EConsumeMouseWheel NewConsumeMouseWheel); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144C1A38
		void SetAnimateWheelScrolling(bool bShouldAnimateWheelScrolling); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144C1958
		void SetAlwaysShowScrollbar(bool NewAlwaysShowScrollbar); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144C1878
		void SetAllowOverscroll(bool NewAllowOverscroll); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144C1798
		void ScrollWidgetIntoView(UWidget WidgetToFind, bool AnimateScroll, EDescendantScrollDestination ScrollDestination, float Padding); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144C16B8
		void ScrollToStart(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144C15D8
		void ScrollToEnd(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144C14F8
		float GetViewOffsetFraction(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144C1418
		float GetViewFraction(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144C1338
		float GetScrollOffsetOfEnd(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144C1258
		float GetScrollOffset(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144C1178
		void EndInertialScrolling(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144C1098
	};


	// Class UMG.ScrollBoxSlot
	// Inherited from UPanelSlot -> UVisual -> UObject
	// Size: 0x28 (0x60 - 0x38)
	class UScrollBoxSlot : public UPanelSlot	
	{
	public:
		FSlateChildSize Size; // 0x38(0x8)
		FMargin Padding; // 0x40(0x10)
		TEnumAsByte HorizontalAlignment; // 0x50(0x1)
		TEnumAsByte VerticalAlignment; // 0x51(0x1)
		unsigned char UnknownData01_7[0xE]; // 0x52(0xE) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.ScrollBoxSlot");
			return ret;
		}

		void SetVerticalAlignment(TEnumAsByte InVerticalAlignment); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144C2598
		void SetPadding(FMargin InPadding); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144C24B8
		void SetHorizontalAlignment(TEnumAsByte InHorizontalAlignment); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144C23D8
	};


	// Class UMG.SizeBox
	// Inherited from UContentWidget -> UPanelWidget -> UWidget -> UVisual -> UObject
	// Size: 0x38 (0x1B0 - 0x178)
	class USizeBox : public UContentWidget	
	{
	public:
		unsigned char UnknownData02_3[0x10]; // 0x178(0x10) UNKNOWN PROPERTY
		float WidthOverride; // 0x188(0x4)
		float HeightOverride; // 0x18C(0x4)
		float MinDesiredWidth; // 0x190(0x4)
		float MinDesiredHeight; // 0x194(0x4)
		float MaxDesiredWidth; // 0x198(0x4)
		float MaxDesiredHeight; // 0x19C(0x4)
		float MinAspectRatio; // 0x1A0(0x4)
		float MaxAspectRatio; // 0x1A4(0x4)
		bool bOverride_WidthOverride : 1; // 0x1A8:0(0x1)
		bool bOverride_HeightOverride : 1; // 0x1A8:1(0x1)
		bool bOverride_MinDesiredWidth : 1; // 0x1A8:2(0x1)
		bool bOverride_MinDesiredHeight : 1; // 0x1A8:3(0x1)
		bool bOverride_MaxDesiredWidth : 1; // 0x1A8:4(0x1)
		bool bOverride_MaxDesiredHeight : 1; // 0x1A8:5(0x1)
		bool bOverride_MinAspectRatio : 1; // 0x1A8:6(0x1)
		bool bOverride_MaxAspectRatio : 1; // 0x1A8:7(0x1)
		unsigned char UnknownData03_7[0x7]; // 0x1A9(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.SizeBox");
			return ret;
		}

		void SetWidthOverride(float InWidthOverride); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF413FC02C8
		void SetMinDesiredWidth(float InMinDesiredWidth); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF413FC01E8
		void SetMinDesiredHeight(float InMinDesiredHeight); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF413FC0108
		void SetMinAspectRatio(float InMinAspectRatio); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF413FC0028
		void SetMaxDesiredWidth(float InMaxDesiredWidth); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF413FBFF48
		void SetMaxDesiredHeight(float InMaxDesiredHeight); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF413FBFE68
		void SetMaxAspectRatio(float InMaxAspectRatio); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF413FBFD88
		void SetHeightOverride(float InHeightOverride); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF413FBFCA8
		void ClearWidthOverride(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF413FBFBC8
		void ClearMinDesiredWidth(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF413FBFAE8
		void ClearMinDesiredHeight(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF413FBFA08
		void ClearMinAspectRatio(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF413FBF928
		void ClearMaxDesiredWidth(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF413FBF848
		void ClearMaxDesiredHeight(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF413FBF768
		void ClearMaxAspectRatio(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF413FBF688
		void ClearHeightOverride(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF413FBF5A8
	};


	// Class UMG.SizeBoxSlot
	// Inherited from UPanelSlot -> UVisual -> UObject
	// Size: 0x28 (0x60 - 0x38)
	class USizeBoxSlot : public UPanelSlot	
	{
	public:
		FMargin Padding; // 0x38(0x10)
		unsigned char UnknownData02_6[0x10]; // 0x48(0x10) UNKNOWN PROPERTY
		TEnumAsByte HorizontalAlignment; // 0x58(0x1)
		TEnumAsByte VerticalAlignment; // 0x59(0x1)
		unsigned char UnknownData03_7[0x6]; // 0x5A(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.SizeBoxSlot");
			return ret;
		}

		void SetVerticalAlignment(TEnumAsByte InVerticalAlignment); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144C2838
		void SetPadding(FMargin InPadding); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144C2758
		void SetHorizontalAlignment(TEnumAsByte InHorizontalAlignment); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144C2678
	};


	// Class UMG.Slider
	// Inherited from UWidget -> UVisual -> UObject
	// Size: 0x4F0 (0x650 - 0x160)
	class USlider : public UWidget	
	{
	public:
		float Value; // 0x160(0x4)
		FDelegateProperty ValueDelegate; // 0x164(0xC)
		float MinValue; // 0x170(0x4)
		float MaxValue; // 0x174(0x4)
		unsigned char UnknownData04_6[0x8]; // 0x178(0x8) UNKNOWN PROPERTY
		FSliderStyle WidgetStyle; // 0x180(0x440)
		TEnumAsByte orientation; // 0x5C0(0x1)
		unsigned char UnknownData05_6[0x3]; // 0x5C1(0x3) UNKNOWN PROPERTY
		FLinearColor SliderBarColor; // 0x5C4(0x10)
		FLinearColor SliderHandleColor; // 0x5D4(0x10)
		bool IndentHandle; // 0x5E4(0x1)
		bool Locked; // 0x5E5(0x1)
		bool MouseUsesStep; // 0x5E6(0x1)
		bool RequiresControllerLock; // 0x5E7(0x1)
		float StepSize; // 0x5E8(0x4)
		bool IsFocusable; // 0x5EC(0x1)
		unsigned char UnknownData06_6[0x3]; // 0x5ED(0x3) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnMouseCaptureBegin; // 0x5F0(0x10)
		FMulticastInlineDelegate OnMouseCaptureEnd; // 0x600(0x10)
		FMulticastInlineDelegate OnControllerCaptureBegin; // 0x610(0x10)
		FMulticastInlineDelegate OnControllerCaptureEnd; // 0x620(0x10)
		FMulticastInlineDelegate OnValueChanged; // 0x630(0x10)
		unsigned char UnknownData07_7[0x10]; // 0x640(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.Slider");
			return ret;
		}

		void SetValue(float InValue); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144C30F8
		void SetStepSize(float InValue); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144C3018
		void SetSliderHandleColor(FLinearColor InValue); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 0x7FF4144C2F38
		void SetSliderBarColor(FLinearColor InValue); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 0x7FF4144C2E58
		void SetMinValue(float InValue); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144C2D78
		void SetMaxValue(float InValue); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144C2C98
		void SetLocked(bool InValue); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144C2BB8
		void SetIndentHandle(bool InValue); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144C2AD8
		float GetValue(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144C29F8
		float GetNormalizedValue(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144C2918
	};


	// Class UMG.Spacer
	// Inherited from UWidget -> UVisual -> UObject
	// Size: 0x20 (0x180 - 0x160)
	class USpacer : public UWidget	
	{
	public:
		FVector2D Size; // 0x160(0x10)
		unsigned char UnknownData01_7[0x10]; // 0x170(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.Spacer");
			return ret;
		}

		void SetSize(FVector2D InSize); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 0x7FF4144C31D8
	};


	// Class UMG.SpinBox
	// Inherited from UWidget -> UVisual -> UObject
	// Size: 0x630 (0x790 - 0x160)
	class USpinBox : public UWidget	
	{
	public:
		float Value; // 0x160(0x4)
		FDelegateProperty ValueDelegate; // 0x164(0xC)
		FSpinBoxStyle WidgetStyle; // 0x170(0x520)
		int32_t MinFractionalDigits; // 0x690(0x4)
		int32_t MaxFractionalDigits; // 0x694(0x4)
		bool bAlwaysUsesDeltaSnap; // 0x698(0x1)
		bool bEnableSlider; // 0x699(0x1)
		unsigned char UnknownData06_6[0x2]; // 0x69A(0x2) UNKNOWN PROPERTY
		float Delta; // 0x69C(0x4)
		float SliderExponent; // 0x6A0(0x4)
		unsigned char UnknownData07_6[0x4]; // 0x6A4(0x4) UNKNOWN PROPERTY
		FSlateFontInfo Font; // 0x6A8(0x58)
		TEnumAsByte Justification; // 0x700(0x1)
		unsigned char UnknownData08_6[0x3]; // 0x701(0x3) UNKNOWN PROPERTY
		float MinDesiredWidth; // 0x704(0x4)
		TEnumAsByte KeyboardType; // 0x708(0x1)
		bool ClearKeyboardFocusOnCommit; // 0x709(0x1)
		bool SelectAllTextOnCommit; // 0x70A(0x1)
		unsigned char UnknownData09_6[0x1]; // 0x70B(0x1) UNKNOWN PROPERTY
		FSlateColor ForegroundColor; // 0x70C(0x14)
		FMulticastInlineDelegate OnValueChanged; // 0x720(0x10)
		FMulticastInlineDelegate OnValueCommitted; // 0x730(0x10)
		FMulticastInlineDelegate OnBeginSliderMovement; // 0x740(0x10)
		FMulticastInlineDelegate OnEndSliderMovement; // 0x750(0x10)
		bool bOverride_MinValue : 1; // 0x760:0(0x1)
		bool bOverride_MaxValue : 1; // 0x760:1(0x1)
		bool bOverride_MinSliderValue : 1; // 0x760:2(0x1)
		bool bOverride_MaxSliderValue : 1; // 0x760:3(0x1)
		unsigned char UnknownData10_5[0x3]; // 0x761(0x3) UNKNOWN PROPERTY
		float MinValue; // 0x764(0x4)
		float MaxValue; // 0x768(0x4)
		float MinSliderValue; // 0x76C(0x4)
		float MaxSliderValue; // 0x770(0x4)
		unsigned char UnknownData11_7[0x1C]; // 0x774(0x1C) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.SpinBox");
			return ret;
		}

		void SetValue(float NewValue); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF411062BE0
		void SetMinValue(float NewValue); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF411062B00
		void SetMinSliderValue(float NewValue); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF411062A20
		void SetMinFractionalDigits(int32_t NewValue); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF411062940
		void SetMaxValue(float NewValue); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF411062860
		void SetMaxSliderValue(float NewValue); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF411062780
		void SetMaxFractionalDigits(int32_t NewValue); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4110626A0
		void SetForegroundColor(FSlateColor InForegroundColor); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4110625C0
		void SetDelta(float NewValue); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4110624E0
		void SetAlwaysUsesDeltaSnap(bool bNewValue); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF411062400
		void OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte CommitMethod); // Flags: MulticastDelegate|Public|Delegate 0x7FF411062320
		void OnSpinBoxValueChangedEvent__DelegateSignature(float InValue); // Flags: MulticastDelegate|Public|Delegate 0x7FF411062240
		void OnSpinBoxBeginSliderMovement__DelegateSignature(); // Flags: MulticastDelegate|Public|Delegate 0x7FF411062160
		float GetValue(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF411062080
		float GetMinValue(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF411061FA0
		float GetMinSliderValue(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF411061EC0
		int32_t GetMinFractionalDigits(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF411061DE0
		float GetMaxValue(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF411061D00
		float GetMaxSliderValue(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF411061C20
		int32_t GetMaxFractionalDigits(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF411061B40
		float GetDelta(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF411061A60
		bool GetAlwaysUsesDeltaSnap(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF411061980
		void ClearMinValue(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4110618A0
		void ClearMinSliderValue(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4110617C0
		void ClearMaxValue(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4110616E0
		void ClearMaxSliderValue(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF411061600
	};


	// Class UMG.StackBox
	// Inherited from UPanelWidget -> UWidget -> UVisual -> UObject
	// Size: 0x18 (0x190 - 0x178)
	class UStackBox : public UPanelWidget	
	{
	public:
		TEnumAsByte orientation; // 0x178(0x1)
		unsigned char UnknownData01_7[0x17]; // 0x179(0x17) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.StackBox");
			return ret;
		}

		bool ReplaceStackBoxChildAt(int32_t Index, UWidget Content); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144C3398
		UStackBoxSlot AddChildToStackBox(UWidget Content); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144C32B8
	};


	// Class UMG.StackBoxSlot
	// Inherited from UPanelSlot -> UVisual -> UObject
	// Size: 0x28 (0x60 - 0x38)
	class UStackBoxSlot : public UPanelSlot	
	{
	public:
		FMargin Padding; // 0x38(0x10)
		FSlateChildSize Size; // 0x48(0x8)
		TEnumAsByte HorizontalAlignment; // 0x50(0x1)
		TEnumAsByte VerticalAlignment; // 0x51(0x1)
		unsigned char UnknownData01_7[0xE]; // 0x52(0xE) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.StackBoxSlot");
			return ret;
		}
	};


	// Class UMG.TextBlock
	// Inherited from UTextLayoutWidget -> UWidget -> UVisual -> UObject
	// Size: 0x198 (0x320 - 0x188)
	class UTextBlock : public UTextLayoutWidget	
	{
	public:
		FText Text; // 0x188(0x10)
		FDelegateProperty TextDelegate; // 0x198(0xC)
		FSlateColor ColorAndOpacity; // 0x1A4(0x14)
		FDelegateProperty ColorAndOpacityDelegate; // 0x1B8(0xC)
		unsigned char UnknownData02_6[0x4]; // 0x1C4(0x4) UNKNOWN PROPERTY
		FSlateFontInfo Font; // 0x1C8(0x58)
		FSlateBrush StrikeBrush; // 0x220(0xB0)
		FVector2D ShadowOffset; // 0x2D0(0x10)
		FLinearColor ShadowColorAndOpacity; // 0x2E0(0x10)
		FDelegateProperty ShadowColorAndOpacityDelegate; // 0x2F0(0xC)
		float MinDesiredWidth; // 0x2FC(0x4)
		bool bWrapWithInvalidationPanel; // 0x300(0x1)
		ETextTransformPolicy TextTransformPolicy; // 0x301(0x1)
		ETextOverflowPolicy TextOverflowPolicy; // 0x302(0x1)
		bool bSimpleTextMode; // 0x303(0x1)
		unsigned char UnknownData03_7[0x14]; // 0x304(0x14) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.TextBlock");
			return ret;
		}

		void SetTextTransformPolicy(ETextTransformPolicy InTransformPolicy); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF411502908
		void SetTextOverflowPolicy(ETextOverflowPolicy InOverflowPolicy); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF411502828
		void SetText(FText InText); // Flags: RequiredAPI|Native|Public|BlueprintCallable 0x7FF411502748
		void SetStrikeBrush(FSlateBrush InStrikeBrush); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF411502668
		void SetShadowOffset(FVector2D InShadowOffset); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 0x7FF411502588
		void SetShadowColorAndOpacity(FLinearColor InShadowColorAndOpacity); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 0x7FF4115024A8
		void SetOpacity(float InOpacity); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4115023C8
		void SetMinDesiredWidth(float InMinDesiredWidth); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4115022E8
		void SetFontOutlineMaterial(UMaterialInterface InMaterial); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF411502208
		void SetFontMaterial(UMaterialInterface InMaterial); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF411502128
		void SetFont(FSlateFontInfo InFontInfo); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF411502048
		void SetColorAndOpacity(FSlateColor InColorAndOpacity); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF411501F68
		void SetAutoWrapText(bool InAutoTextWrap); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF411501E88
		FText GetText(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF411501DA8
		UMaterialInstanceDynamic GetDynamicOutlineMaterial(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF411501CC8
		UMaterialInstanceDynamic GetDynamicFontMaterial(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF411501BE8
	};


	// Class UMG.Throbber
	// Inherited from UWidget -> UVisual -> UObject
	// Size: 0xD0 (0x230 - 0x160)
	class UThrobber : public UWidget	
	{
	public:
		int32_t NumberOfPieces; // 0x160(0x4)
		bool bAnimateHorizontally; // 0x164(0x1)
		bool bAnimateVertically; // 0x165(0x1)
		bool bAnimateOpacity; // 0x166(0x1)
		unsigned char UnknownData02_6[0x9]; // 0x167(0x9) UNKNOWN PROPERTY
		FSlateBrush Image; // 0x170(0xB0)
		unsigned char UnknownData03_7[0x10]; // 0x220(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.Throbber");
			return ret;
		}

		void SetNumberOfPieces(int32_t InNumberOfPieces); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144C3718
		void SetAnimateVertically(bool bInAnimateVertically); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144C3638
		void SetAnimateOpacity(bool bInAnimateOpacity); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144C3558
		void SetAnimateHorizontally(bool bInAnimateHorizontally); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144C3478
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
		unsigned char UnknownData02_6[0x15]; // 0xB3B(0x15) UNKNOWN PROPERTY
		bool bEntrySizeIncludesEntrySpacing; // 0xB50(0x1)
		unsigned char UnknownData03_7[0x7]; // 0xB51(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.TileView");
			return ret;
		}

		void SetEntryWidth(float NewWidth); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF413FE53F0
		void SetEntryHeight(float NewHeight); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF413FE5310
		bool IsAligned(); // Flags: Final|RequiredAPI|Native|Private|Const 0x7FF413FE5230
		float GetEntryWidth(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF413FE5150
		float GetEntryHeight(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF413FE5070
	};


	// Class UMG.TreeView
	// Inherited from UListView -> UListViewBase -> UWidget -> UVisual -> UObject
	// Size: 0x60 (0xB90 - 0xB30)
	class UTreeView : public UListView	
	{
	public:
		unsigned char UnknownData03_3[0x10]; // 0xB30(0x10) UNKNOWN PROPERTY
		FDelegateProperty BP_OnGetItemChildren; // 0xB40(0xC)
		unsigned char UnknownData04_6[0x4]; // 0xB4C(0x4) UNKNOWN PROPERTY
		FMulticastInlineDelegate BP_OnItemExpansionChanged; // 0xB50(0x10)
		unsigned char UnknownData05_7[0x28]; // 0xB60(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.TreeView");
			return ret;
		}

		void SetItemExpansion(UObject Item, bool bExpandItem); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144C39B8
		void ExpandAll(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144C38D8
		void CollapseAll(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144C37F8
	};


	// Class UMG.UniformGridPanel
	// Inherited from UPanelWidget -> UWidget -> UVisual -> UObject
	// Size: 0x28 (0x1A0 - 0x178)
	class UUniformGridPanel : public UPanelWidget	
	{
	public:
		FMargin SlotPadding; // 0x178(0x10)
		float MinDesiredSlotWidth; // 0x188(0x4)
		float MinDesiredSlotHeight; // 0x18C(0x4)
		unsigned char UnknownData01_7[0x10]; // 0x190(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.UniformGridPanel");
			return ret;
		}

		void SetSlotPadding(FMargin InSlotPadding); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144C3D38
		void SetMinDesiredSlotWidth(float InMinDesiredSlotWidth); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144C3C58
		void SetMinDesiredSlotHeight(float InMinDesiredSlotHeight); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144C3B78
		UUniformGridSlot AddChildToUniformGrid(UWidget Content, int32_t InRow, int32_t InColumn); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144C3A98
	};


	// Class UMG.UniformGridSlot
	// Inherited from UPanelSlot -> UVisual -> UObject
	// Size: 0x18 (0x50 - 0x38)
	class UUniformGridSlot : public UPanelSlot	
	{
	public:
		TEnumAsByte HorizontalAlignment; // 0x38(0x1)
		TEnumAsByte VerticalAlignment; // 0x39(0x1)
		unsigned char UnknownData02_6[0x2]; // 0x3A(0x2) UNKNOWN PROPERTY
		int32_t Row; // 0x3C(0x4)
		int32_t Column; // 0x40(0x4)
		unsigned char UnknownData03_7[0xC]; // 0x44(0xC) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.UniformGridSlot");
			return ret;
		}

		void SetVerticalAlignment(TEnumAsByte InVerticalAlignment); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144C40B8
		void SetRow(int32_t InRow); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144C3FD8
		void SetHorizontalAlignment(TEnumAsByte InHorizontalAlignment); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144C3EF8
		void SetColumn(int32_t InColumn); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144C3E18
	};


	// Class UMG.VerticalBox
	// Inherited from UPanelWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x188 - 0x178)
	class UVerticalBox : public UPanelWidget	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0x178(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.VerticalBox");
			return ret;
		}

		UVerticalBoxSlot AddChildToVerticalBox(UWidget Content); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144C4198
	};


	// Class UMG.VerticalBoxSlot
	// Inherited from UPanelSlot -> UVisual -> UObject
	// Size: 0x28 (0x60 - 0x38)
	class UVerticalBoxSlot : public UPanelSlot	
	{
	public:
		FSlateChildSize Size; // 0x38(0x8)
		FMargin Padding; // 0x40(0x10)
		TEnumAsByte HorizontalAlignment; // 0x50(0x1)
		TEnumAsByte VerticalAlignment; // 0x51(0x1)
		unsigned char UnknownData01_7[0xE]; // 0x52(0xE) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.VerticalBoxSlot");
			return ret;
		}

		void SetVerticalAlignment(TEnumAsByte InVerticalAlignment); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144C4518
		void SetSize(FSlateChildSize InSize); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144C4438
		void SetPadding(FMargin InPadding); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144C4358
		void SetHorizontalAlignment(TEnumAsByte InHorizontalAlignment); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144C4278
	};


	// Class UMG.Viewport
	// Inherited from UContentWidget -> UPanelWidget -> UWidget -> UVisual -> UObject
	// Size: 0x60 (0x1D8 - 0x178)
	class UViewport : public UContentWidget	
	{
	public:
		FLinearColor BackgroundColor; // 0x178(0x10)
		unsigned char UnknownData01_7[0x50]; // 0x188(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.Viewport");
			return ret;
		}

		AActor Spawn(UClass ActorClass); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144C4DD8
		void SetViewRotation(FRotator Rotation); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 0x7FF4144C4CF8
		void SetViewLocation(FVector Location); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 0x7FF4144C4C18
		void SetSkyIntensity(float LightIntensity); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144C4B38
		void SetShowFlag(FString InShowFlagName, bool InValue); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144C4A58
		void SetLightIntensity(float LightIntensity); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144C4978
		void SetEnableAdvancedFeatures(bool InEnableAdvancedFeatures); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144C4898
		FRotator GetViewRotation(); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF4144C47B8
		UWorld GetViewportWorld(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144C46D8
		FVector GetViewLocation(); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF4144C45F8
	};


	// Class UMG.WidgetComponent
	// Inherited from UMeshComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x148 (0x640 - 0x4F8)
	class UWidgetComponent : public UMeshComponent	
	{
	public:
		EWidgetSpace Space; // 0x4F8(0x1)
		EWidgetTimingPolicy TimingPolicy; // 0x4F9(0x1)
		unsigned char UnknownData10_6[0x6]; // 0x4FA(0x6) UNKNOWN PROPERTY
		UClass WidgetClass; // 0x500(0x8)
		FIntPoint DrawSize; // 0x508(0x8)
		bool bManuallyRedraw; // 0x510(0x1)
		bool bRedrawRequested; // 0x511(0x1)
		unsigned char UnknownData11_6[0x2]; // 0x512(0x2) UNKNOWN PROPERTY
		float RedrawTime; // 0x514(0x4)
		unsigned char UnknownData12_6[0x8]; // 0x518(0x8) UNKNOWN PROPERTY
		FIntPoint CurrentDrawSize; // 0x520(0x8)
		bool bUseInvalidationInWorldSpace; // 0x528(0x1)
		bool bDrawAtDesiredSize; // 0x529(0x1)
		unsigned char UnknownData13_6[0x6]; // 0x52A(0x6) UNKNOWN PROPERTY
		FVector2D Pivot; // 0x530(0x10)
		bool bReceiveHardwareInput; // 0x540(0x1)
		bool bWindowFocusable; // 0x541(0x1)
		EWindowVisibility WindowVisibility; // 0x542(0x1)
		bool bApplyGammaCorrection; // 0x543(0x1)
		unsigned char UnknownData14_6[0x4]; // 0x544(0x4) UNKNOWN PROPERTY
		ULocalPlayer OwnerPlayer; // 0x548(0x8)
		FLinearColor BackgroundColor; // 0x550(0x10)
		FLinearColor TintColorAndOpacity; // 0x560(0x10)
		float OpacityFromTexture; // 0x570(0x4)
		EWidgetBlendMode BlendMode; // 0x574(0x1)
		bool bIsTwoSided; // 0x575(0x1)
		bool TickWhenOffscreen; // 0x576(0x1)
		unsigned char UnknownData15_6[0x1]; // 0x577(0x1) UNKNOWN PROPERTY
		UBodySetup BodySetup; // 0x578(0x8)
		UMaterialInterface TranslucentMaterial; // 0x580(0x8)
		UMaterialInterface TranslucentMaterial_OneSided; // 0x588(0x8)
		UMaterialInterface OpaqueMaterial; // 0x590(0x8)
		UMaterialInterface OpaqueMaterial_OneSided; // 0x598(0x8)
		UMaterialInterface MaskedMaterial; // 0x5A0(0x8)
		UMaterialInterface MaskedMaterial_OneSided; // 0x5A8(0x8)
		UTextureRenderTarget2D RenderTarget; // 0x5B0(0x8)
		UMaterialInstanceDynamic MaterialInstance; // 0x5B8(0x8)
		bool bAddedToScreen; // 0x5C0(0x1)
		bool bEditTimeUsable; // 0x5C1(0x1)
		unsigned char UnknownData16_6[0x2]; // 0x5C2(0x2) UNKNOWN PROPERTY
		FName SharedLayerName; // 0x5C4(0x4)
		int32_t LayerZOrder; // 0x5C8(0x4)
		EWidgetGeometryMode GeometryMode; // 0x5CC(0x1)
		unsigned char UnknownData17_6[0x3]; // 0x5CD(0x3) UNKNOWN PROPERTY
		double CylinderArcAngle; // 0x5D0(0x8)
		ETickMode TickMode; // 0x5D8(0x1)
		unsigned char UnknownData18_6[0x2F]; // 0x5D9(0x2F) UNKNOWN PROPERTY
		UUserWidget Widget; // 0x608(0x8)
		unsigned char UnknownData19_7[0x28]; // 0x610(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.WidgetComponent");
			return ret;
		}

		void SetWindowVisibility(EWindowVisibility InVisibility); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF413F1F578
		void SetWindowFocusable(bool bInWindowFocusable); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF413F1F498
		void SetWidgetSpace(EWidgetSpace NewSpace); // Flags: Final|Native|Public|BlueprintCallable 0x7FF413F1F3B8
		void SetWidget(UUserWidget Widget); // Flags: RequiredAPI|Native|Public|BlueprintCallable 0x7FF413F1F2D8
		void SetTwoSided(bool bWantTwoSided); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF413F1F1F8
		void SetTintColorAndOpacity(FLinearColor NewTintColorAndOpacity); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 0x7FF413F1F118
		void SetTickWhenOffscreen(bool bWantTickWhenOffscreen); // Flags: Final|Native|Public|BlueprintCallable 0x7FF413F1F038
		void SetTickMode(ETickMode InTickMode); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF413F1EF58
		void SetRedrawTime(float InRedrawTime); // Flags: Final|Native|Public|BlueprintCallable 0x7FF413F1EE78
		void SetPivot(FVector2D& InPivot); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF413F1ED98
		void SetOwnerPlayer(ULocalPlayer LocalPlayer); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF413F1ECB8
		void SetManuallyRedraw(bool bUseManualRedraw); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF413F1EBD8
		void SetGeometryMode(EWidgetGeometryMode InGeometryMode); // Flags: Final|Native|Public|BlueprintCallable 0x7FF413F1EAF8
		void SetDrawSize(FVector2D Size); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 0x7FF413F1EA18
		void SetDrawAtDesiredSize(bool bInDrawAtDesiredSize); // Flags: Final|Native|Public|BlueprintCallable 0x7FF413F1E938
		void SetCylinderArcAngle(double InCylinderArcAngle); // Flags: Final|Native|Public|BlueprintCallable 0x7FF413F1E858
		void SetBackgroundColor(FLinearColor NewBackgroundColor); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 0x7FF413F1E778
		void RequestRenderUpdate(); // Flags: RequiredAPI|Native|Public|BlueprintCallable 0x7FF413F1E698
		void RequestRedraw(); // Flags: RequiredAPI|Native|Public|BlueprintCallable 0x7FF413F1E5B8
		bool IsWidgetVisible(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF413F1E4D8
		EWindowVisibility GetWindowVisiblility(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF413F1E3F8
		bool GetWindowFocusable(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF413F1E318
		EWidgetSpace GetWidgetSpace(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF413F1E238
		UUserWidget GetWidget(); // Flags: RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF413F1E158
		UUserWidget GetUserWidgetObject(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF413F1E078
		bool GetTwoSided(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF413F1DF98
		bool GetTickWhenOffscreen(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF413F1DEB8
		UTextureRenderTarget2D GetRenderTarget(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF413F1DDD8
		float GetRedrawTime(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF413F1DCF8
		FVector2D GetPivot(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF413F1DC18
		ULocalPlayer GetOwnerPlayer(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF413F1DB38
		UMaterialInstanceDynamic GetMaterialInstance(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF413F1DA58
		bool GetManuallyRedraw(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF413F1D978
		EWidgetGeometryMode GetGeometryMode(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF413F1D898
		FVector2D GetDrawSize(); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF413F1D7B8
		bool GetDrawAtDesiredSize(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF413F1D6D8
		double GetCylinderArcAngle(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF413F1D5F8
		FVector2D GetCurrentDrawSize(); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF413F1D518
	};


	// Class UMG.WidgetInteractionComponent
	// Inherited from USceneComponent -> UActorComponent -> UObject
	// Size: 0x2F0 (0x510 - 0x220)
	class UWidgetInteractionComponent : public USceneComponent	
	{
	public:
		FMulticastInlineDelegate OnHoveredWidgetChanged; // 0x220(0x10)
		unsigned char UnknownData05_6[0x10]; // 0x230(0x10) UNKNOWN PROPERTY
		int32_t VirtualUserIndex; // 0x240(0x4)
		int32_t PointerIndex; // 0x244(0x4)
		TEnumAsByte TraceChannel; // 0x248(0x1)
		unsigned char UnknownData06_6[0x3]; // 0x249(0x3) UNKNOWN PROPERTY
		float InteractionDistance; // 0x24C(0x4)
		EWidgetInteractionSource InteractionSource; // 0x250(0x1)
		bool bEnableHitTesting; // 0x251(0x1)
		bool bShowDebug; // 0x252(0x1)
		unsigned char UnknownData07_6[0x1]; // 0x253(0x1) UNKNOWN PROPERTY
		float DebugSphereLineThickness; // 0x254(0x4)
		float DebugLineThickness; // 0x258(0x4)
		FLinearColor DebugColor; // 0x25C(0x10)
		unsigned char UnknownData08_6[0x7C]; // 0x26C(0x7C) UNKNOWN PROPERTY
		FHitResult CustomHitResult; // 0x2E8(0xF8)
		FVector2D LocalHitLocation; // 0x3E0(0x10)
		FVector2D LastLocalHitLocation; // 0x3F0(0x10)
		UWidgetComponent HoveredWidgetComponent; // 0x400(0x8)
		FHitResult LastHitResult; // 0x408(0xF8)
		bool bIsHoveredWidgetInteractable; // 0x500(0x1)
		bool bIsHoveredWidgetFocusable; // 0x501(0x1)
		bool bIsHoveredWidgetHitTestVisible; // 0x502(0x1)
		unsigned char UnknownData09_7[0xD]; // 0x503(0xD) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.WidgetInteractionComponent");
			return ret;
		}

		void SetFocus(UWidget FocusWidget); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144C5AF8
		void SetCustomHitResult(FHitResult& HitResult); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF4144C5A18
		bool SendKeyChar(FString Characters, bool bRepeat); // Flags: RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144C5938
		void ScrollWheel(float ScrollDelta); // Flags: RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144C5858
		void ReleasePointerKey(FKey Key); // Flags: RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144C5778
		bool ReleaseKey(FKey Key); // Flags: RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144C5698
		void PressPointerKey(FKey Key); // Flags: RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144C55B8
		bool PressKey(FKey Key, bool bRepeat); // Flags: RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144C54D8
		bool PressAndReleaseKey(FKey Key); // Flags: RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144C53F8
		bool IsOverInteractableWidget(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144C5318
		bool IsOverHitTestVisibleWidget(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144C5238
		bool IsOverFocusableWidget(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144C5158
		FHitResult GetLastHitResult(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144C5078
		UWidgetComponent GetHoveredWidgetComponent(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144C4F98
		FVector2D Get2DHitLocation(); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF4144C4EB8
	};


	// Class UMG.WidgetSwitcher
	// Inherited from UPanelWidget -> UWidget -> UVisual -> UObject
	// Size: 0x18 (0x190 - 0x178)
	class UWidgetSwitcher : public UPanelWidget	
	{
	public:
		int32_t ActiveWidgetIndex; // 0x178(0x4)
		unsigned char UnknownData01_7[0x14]; // 0x17C(0x14) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.WidgetSwitcher");
			return ret;
		}

		void SetActiveWidgetIndex(int32_t Index); // Flags: RequiredAPI|Native|Public|BlueprintCallable 0x7FF413FEA738
		void SetActiveWidget(UWidget Widget); // Flags: RequiredAPI|Native|Public|BlueprintCallable 0x7FF413FEA658
		UWidget GetWidgetAtIndex(int32_t Index); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF413FEA578
		int32_t GetNumWidgets(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF413FEA498
		int32_t GetActiveWidgetIndex(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF413FEA3B8
		UWidget GetActiveWidget(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF413FEA2D8
	};


	// Class UMG.WidgetSwitcherSlot
	// Inherited from UPanelSlot -> UVisual -> UObject
	// Size: 0x20 (0x58 - 0x38)
	class UWidgetSwitcherSlot : public UPanelSlot	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x38(0x8) UNKNOWN PROPERTY
		FMargin Padding; // 0x40(0x10)
		TEnumAsByte HorizontalAlignment; // 0x50(0x1)
		TEnumAsByte VerticalAlignment; // 0x51(0x1)
		unsigned char UnknownData03_7[0x6]; // 0x52(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.WidgetSwitcherSlot");
			return ret;
		}

		void SetVerticalAlignment(TEnumAsByte InVerticalAlignment); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144C5D98
		void SetPadding(FMargin InPadding); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144C5CB8
		void SetHorizontalAlignment(TEnumAsByte InHorizontalAlignment); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144C5BD8
	};


	// Class UMG.WindowTitleBarArea
	// Inherited from UContentWidget -> UPanelWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x198 - 0x178)
	class UWindowTitleBarArea : public UContentWidget	
	{
	public:
		bool bWindowButtonsEnabled; // 0x178(0x1)
		bool bDoubleClickTogglesFullscreen; // 0x179(0x1)
		unsigned char UnknownData01_7[0x1E]; // 0x17A(0x1E) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.WindowTitleBarArea");
			return ret;
		}

		void SetVerticalAlignment(TEnumAsByte InVerticalAlignment); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144C6038
		void SetPadding(FMargin InPadding); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144C5F58
		void SetHorizontalAlignment(TEnumAsByte InHorizontalAlignment); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144C5E78
	};


	// Class UMG.WindowTitleBarAreaSlot
	// Inherited from UPanelSlot -> UVisual -> UObject
	// Size: 0x28 (0x60 - 0x38)
	class UWindowTitleBarAreaSlot : public UPanelSlot	
	{
	public:
		FMargin Padding; // 0x38(0x10)
		TEnumAsByte HorizontalAlignment; // 0x48(0x1)
		TEnumAsByte VerticalAlignment; // 0x49(0x1)
		unsigned char UnknownData01_7[0x16]; // 0x4A(0x16) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.WindowTitleBarAreaSlot");
			return ret;
		}

		void SetVerticalAlignment(TEnumAsByte InVerticalAlignment); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144C62D8
		void SetPadding(FMargin InPadding); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144C61F8
		void SetHorizontalAlignment(TEnumAsByte InHorizontalAlignment); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144C6118
	};


	// Class UMG.WrapBox
	// Inherited from UPanelWidget -> UWidget -> UVisual -> UObject
	// Size: 0x28 (0x1A0 - 0x178)
	class UWrapBox : public UPanelWidget	
	{
	public:
		FVector2D InnerSlotPadding; // 0x178(0x10)
		float WrapSize; // 0x188(0x4)
		bool bExplicitWrapSize; // 0x18C(0x1)
		TEnumAsByte HorizontalAlignment; // 0x18D(0x1)
		TEnumAsByte orientation; // 0x18E(0x1)
		unsigned char UnknownData01_7[0x11]; // 0x18F(0x11) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.WrapBox");
			return ret;
		}

		void SetInnerSlotPadding(FVector2D InPadding); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 0x7FF4144C6578
		void SetHorizontalAlignment(TEnumAsByte InHorizontalAlignment); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144C6498
		UWrapBoxSlot AddChildToWrapBox(UWidget Content); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144C63B8
	};


	// Class UMG.WrapBoxSlot
	// Inherited from UPanelSlot -> UVisual -> UObject
	// Size: 0x20 (0x58 - 0x38)
	class UWrapBoxSlot : public UPanelSlot	
	{
	public:
		FMargin Padding; // 0x38(0x10)
		float FillSpanWhenLessThan; // 0x48(0x4)
		TEnumAsByte HorizontalAlignment; // 0x4C(0x1)
		TEnumAsByte VerticalAlignment; // 0x4D(0x1)
		bool bFillEmptySpace; // 0x4E(0x1)
		bool bForceNewLine; // 0x4F(0x1)
		unsigned char UnknownData01_7[0x8]; // 0x50(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.WrapBoxSlot");
			return ret;
		}

		void SetVerticalAlignment(TEnumAsByte InVerticalAlignment); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144C6AB8
		void SetPadding(FMargin InPadding); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144C69D8
		void SetNewLine(bool InForceNewLine); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144C68F8
		void SetHorizontalAlignment(TEnumAsByte InHorizontalAlignment); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144C6818
		void SetFillSpanWhenLessThan(float InFillSpanWhenLessThan); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144C6738
		void SetFillEmptySpace(bool InbFillEmptySpace); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144C6658
	};


	// Class UMG.DragDropOperation
	// Inherited from UObject
	// Size: 0x68 (0x90 - 0x28)
	class UDragDropOperation : public UObject	
	{
	public:
		FString tag; // 0x28(0x10)
		UObject Payload; // 0x38(0x8)
		UWidget DefaultDragVisual; // 0x40(0x8)
		EDragPivot Pivot; // 0x48(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x49(0x7) UNKNOWN PROPERTY
		FVector2D Offset; // 0x50(0x10)
		FMulticastInlineDelegate OnDrop; // 0x60(0x10)
		FMulticastInlineDelegate OnDragCancelled; // 0x70(0x10)
		FMulticastInlineDelegate OnDragged; // 0x80(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.DragDropOperation");
			return ret;
		}

		void Drop(FPointerEvent& PointerEvent); // Flags: RequiredAPI|Native|Event|Public|HasOutParms|BlueprintEvent 0x7FF4144C6D58
		void Dragged(FPointerEvent& PointerEvent); // Flags: RequiredAPI|Native|Event|Public|HasOutParms|BlueprintEvent 0x7FF4144C6C78
		void DragCancelled(FPointerEvent& PointerEvent); // Flags: RequiredAPI|Native|Event|Public|HasOutParms|BlueprintEvent 0x7FF4144C6B98
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

		FVector2D TransformVectorLocalToAbsolute(FGeometry& Geometry, FVector2D LocalVector); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF4144C7B58
		FVector2D TransformVectorAbsoluteToLocal(FGeometry& Geometry, FVector2D AbsoluteVector); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF4144C7A78
		float TransformScalarLocalToAbsolute(FGeometry& Geometry, float LocalScalar); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4144C7998
		float TransformScalarAbsoluteToLocal(FGeometry& Geometry, float AbsoluteScalar); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4144C78B8
		void ScreenToWidgetLocal(UObject WorldContextObject, FGeometry& Geometry, FVector2D ScreenPosition, FVector2D& LocalCoordinate, bool bIncludeWindowPosition); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF4144C77D8
		void ScreenToWidgetAbsolute(UObject WorldContextObject, FVector2D ScreenPosition, FVector2D& AbsoluteCoordinate, bool bIncludeWindowPosition); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF4144C76F8
		void ScreenToViewport(UObject WorldContextObject, FVector2D ScreenPosition, FVector2D& ViewportPosition); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF4144C7618
		void LocalToViewport(UObject WorldContextObject, FGeometry& Geometry, FVector2D LocalCoordinate, FVector2D& PixelPosition, FVector2D& ViewportPosition); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF4144C7538
		FVector2D LocalToAbsolute(FGeometry& Geometry, FVector2D LocalCoordinate); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF4144C7458
		bool IsUnderLocation(FGeometry& Geometry, FVector2D& AbsoluteCoordinate); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF4144C7378
		FVector2D GetLocalTopLeft(FGeometry& Geometry); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF4144C7298
		FVector2D GetLocalSize(FGeometry& Geometry); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF4144C71B8
		FVector2D GetAbsoluteSize(FGeometry& Geometry); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF4144C70D8
		bool EqualEqual_SlateBrush(FSlateBrush& A, FSlateBrush& B); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4144C6FF8
		void AbsoluteToViewport(UObject WorldContextObject, FVector2D AbsoluteDesktopCoordinate, FVector2D& PixelPosition, FVector2D& ViewportPosition); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF4144C6F18
		FVector2D AbsoluteToLocal(FGeometry& Geometry, FVector2D AbsoluteCoordinate); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF4144C6E38
	};


	// Class UMG.SlateVectorArtData
	// Inherited from UObject
	// Size: 0x48 (0x70 - 0x28)
	class USlateVectorArtData : public UObject	
	{
	public:
		TArray VertexData; // 0x28(0x10)
		TArray IndexData; // 0x38(0x10)
		UMaterialInterface Material; // 0x48(0x8)
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
		UWidgetTree WidgetTree; // 0x360(0x8)
		TArray Extensions; // 0x368(0x10)
		bool bClassRequiresNativeTick : 1; // 0x378:0(0x1)
		bool bCanCallInitializedWithoutPlayerContext : 1; // 0x378:1(0x1)
		unsigned char UnknownData01_5[0x7]; // 0x379(0x7) UNKNOWN PROPERTY
		TArray Bindings; // 0x380(0x10)
		TArray Animations; // 0x390(0x10)
		TArray NamedSlots; // 0x3A0(0x10)
		TArray AvailableNamedSlots; // 0x3B0(0x10)
		TArray InstanceNamedSlots; // 0x3C0(0x10)

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

		FEventReply UnlockMouse(FEventReply& Reply); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF411066150
		FEventReply Unhandled(); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF411066070
		void SetWindowTitleBarState(UWidget TitleBarContent, EWindowTitleBarMode Mode, bool bTitleBarDragEnabled, bool bWindowButtonsVisible, bool bTitleBarVisible); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF411065F28
		void SetWindowTitleBarOnCloseClickedDelegate(FDelegateProperty Delegate); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF411065E48
		void SetWindowTitleBarCloseButtonActive(bool bActive); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF411065D68
		FEventReply SetUserFocus(FEventReply& Reply, UWidget FocusWidget, bool bInAllUsers); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF411065C88
		FEventReply SetMousePosition(FEventReply& Reply, FVector2D NewMousePosition); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF411065BA8
		void SetInputMode_UIOnlyEx(APlayerController PlayerController, UWidget InWidgetToFocus, EMouseLockMode InMouseLockMode, bool bFlushInput); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 0x7FF411065AC8
		void SetInputMode_GameOnly(APlayerController PlayerController, bool bFlushInput); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 0x7FF4110659E8
		void SetInputMode_GameAndUIEx(APlayerController PlayerController, UWidget InWidgetToFocus, EMouseLockMode InMouseLockMode, bool bHideCursorDuringCapture, bool bFlushInput); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 0x7FF4110658A0
		bool SetHardwareCursor(UObject WorldContextObject, TEnumAsByte CursorShape, FName CursorName, FVector2D HotSpot); // Flags: Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF4110657C0
		void SetFocusToGameViewport(); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 0x7FF4110656E0
		void SetColorVisionDeficiencyType(EColorVisionDeficiency Type, float Severity, bool CorrectDeficiency, bool ShowCorrectionWithDeficiency); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 0x7FF411065600
		void SetBrushResourceToTexture(FSlateBrush& Brush, UTexture2D Texture); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF411065520
		void SetBrushResourceToMaterial(FSlateBrush& Brush, UMaterialInterface Material); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF411065440
		void RestorePreviousWindowTitleBarState(); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF411065360
		FEventReply ReleaseMouseCapture(FEventReply& Reply); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF411065280
		FEventReply ReleaseJoystickCapture(FEventReply& Reply, bool bInAllJoysticks); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4110651A0
		void OnGameWindowCloseButtonClickedDelegate__DelegateSignature(); // Flags: Public|Delegate 0x7FF4110650C0
		FSlateBrush NoResourceBrush(); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF411064FE0
		FSlateBrush MakeBrushFromTexture(UTexture2D Texture, int32_t Width, int32_t Height); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF411064F00
		FSlateBrush MakeBrushFromMaterial(UMaterialInterface Material, int32_t Width, int32_t Height); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF411064E20
		FSlateBrush MakeBrushFromAsset(USlateBrushAsset BrushAsset); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF411064D40
		FEventReply LockMouse(FEventReply& Reply, UWidget CapturingWidget); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF411064C60
		bool IsDragDropping(); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF411064B80
		FEventReply Handled(); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF411064AA0
		void GetSafeZonePadding(UObject WorldContextObject, FVector4& SafePadding, FVector2D& SafePaddingScale, FVector4& SpillOverPadding); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF4110649C0
		FKeyEvent GetKeyEventFromAnalogInputEvent(FAnalogInputEvent& Event); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF411064820
		FInputEvent GetInputEventFromPointerEvent(FPointerEvent& Event); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF411064740
		FInputEvent GetInputEventFromNavigationEvent(FNavigationEvent& Event); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4110645A0
		FInputEvent GetInputEventFromKeyEvent(FKeyEvent& Event); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF411064400
		FInputEvent GetInputEventFromCharacterEvent(FCharacterEvent& Event); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF411064260
		UMaterialInstanceDynamic GetDynamicMaterial(FSlateBrush& Brush); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF411064180
		UDragDropOperation GetDragDroppingContent(); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF4110640A0
		UTexture2D GetBrushResourceAsTexture2D(FSlateBrush& Brush); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF411063FC0
		UMaterialInterface GetBrushResourceAsMaterial(FSlateBrush& Brush); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF411063EE0
		UObject GetBrushResource(FSlateBrush& Brush); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF411063E00
		void GetAllWidgetsWithInterface(UObject WorldContextObject, TArray& FoundWidgets, UClass Interface, bool TopLevelOnly); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF411063D20
		void GetAllWidgetsOfClass(UObject WorldContextObject, TArray& FoundWidgets, UClass WidgetClass, bool TopLevelOnly); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF411063C40
		FEventReply EndDragDrop(FEventReply& Reply); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF411063B60
		void DrawTextFormatted(FPaintContext& Context, FText& Text, FVector2D Position, UFont Font, float FontSize, FName FontTypeFace, FLinearColor Tint); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF411063A80
		void DrawText(FPaintContext& Context, FString InString, FVector2D Position, FLinearColor Tint); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF4110639A0
		void DrawSpline(FPaintContext& Context, FVector2D Start, FVector2D StartDir, FVector2D End, FVector2D EndDir, FLinearColor Tint, float Thickness); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF4110638C0
		void DrawLines(FPaintContext& Context, TArray& Points, FLinearColor Tint, bool bAntiAlias, float Thickness); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF4110637E0
		void DrawLine(FPaintContext& Context, FVector2D PositionA, FVector2D PositionB, FLinearColor Tint, bool bAntiAlias, float Thickness); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF411063700
		void DrawBox(FPaintContext& Context, FVector2D Position, FVector2D Size, USlateBrushAsset Brush, FLinearColor Tint); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF411063560
		void DismissAllMenus(); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 0x7FF411063480
		FEventReply DetectDragIfPressed(FPointerEvent& PointerEvent, UWidget WidgetDetectingDrag, FKey DragKey); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4110633A0
		FEventReply DetectDrag(FEventReply& Reply, UWidget WidgetDetectingDrag, FKey DragKey); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4110632C0
		UDragDropOperation CreateDragDropOperation(UClass OperationClass); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF4110631E0
		UUserWidget Create(UObject WorldContextObject, UClass WidgetType, APlayerController OwningPlayer); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 0x7FF411063100
		FEventReply ClearUserFocus(FEventReply& Reply, bool bInAllUsers); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF411063020
		FEventReply CaptureMouse(FEventReply& Reply, UWidget CapturingWidget); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF411062F40
		FEventReply CaptureJoystick(FEventReply& Reply, UWidget CapturingWidget, bool bInAllJoysticks); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF411062E60
		void CancelDragDrop(); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF411062D80
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

		UWrapBoxSlot SlotAsWrapBoxSlot(UWidget Widget); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF4144C8E98
		UWidgetSwitcherSlot SlotAsWidgetSwitcherSlot(UWidget Widget); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF4144C8DB8
		UVerticalBoxSlot SlotAsVerticalBoxSlot(UWidget Widget); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF4144C8CD8
		UUniformGridSlot SlotAsUniformGridSlot(UWidget Widget); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF4144C8BF8
		USizeBoxSlot SlotAsSizeBoxSlot(UWidget Widget); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF4144C8B18
		UScrollBoxSlot SlotAsScrollBoxSlot(UWidget Widget); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF4144C8A38
		UScaleBoxSlot SlotAsScaleBoxSlot(UWidget Widget); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF4144C8958
		USafeZoneSlot SlotAsSafeBoxSlot(UWidget Widget); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF4144C8878
		UOverlaySlot SlotAsOverlaySlot(UWidget Widget); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF4144C8798
		UHorizontalBoxSlot SlotAsHorizontalBoxSlot(UWidget Widget); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF4144C86B8
		UGridSlot SlotAsGridSlot(UWidget Widget); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF4144C85D8
		UCanvasPanelSlot SlotAsCanvasSlot(UWidget Widget); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF4144C84F8
		UBorderSlot SlotAsBorderSlot(UWidget Widget); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF4144C8418
		void RemoveAllWidgets(UObject WorldContextObject); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 0x7FF4144C8338
		bool ProjectWorldLocationToWidgetPosition(APlayerController PlayerController, FVector WorldLocation, FVector2D& ScreenPosition, bool bPlayerViewportRelative); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF4144C8258
		FGeometry GetViewportWidgetGeometry(UObject WorldContextObject); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF4144C8178
		FVector2D GetViewportSize(UObject WorldContextObject); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF4144C8098
		float GetViewportScale(UObject WorldContextObject); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF4144C7FB8
		FGeometry GetPlayerScreenWidgetGeometry(APlayerController PlayerController); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF4144C7ED8
		bool GetMousePositionScaledByDPI(APlayerController Player, float& LocationX, float& LocationY); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4144C7DF8
		FVector2D GetMousePositionOnViewport(UObject WorldContextObject); // Flags: Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF4144C7D18
		FVector2D GetMousePositionOnPlatform(); // Flags: Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF4144C7C38
	};


	// Class UMG.WidgetTree
	// Inherited from UObject
	// Size: 0x60 (0x88 - 0x28)
	class UWidgetTree : public UObject	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		UWidget RootWidget; // 0x30(0x8)
		TMap NamedSlotBindings; // 0x38(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/UMG.WidgetTree");
			return ret;
		}
	};

}
