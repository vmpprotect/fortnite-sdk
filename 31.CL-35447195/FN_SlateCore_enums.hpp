#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: SlateCore
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/SlateCore.EFontRasterizationMode
	enum EFontRasterizationMode
	{
		EFontRasterizationMode__Bitmap = 0,
		EFontRasterizationMode__Msdf = 1,
		EFontRasterizationMode__Sdf = 2,
		EFontRasterizationMode__SdfApproximation = 3,
	};


	// Enum /Script/SlateCore.EUINavigationRule
	enum EUINavigationRule
	{
		EUINavigationRule__Escape = 0,
		EUINavigationRule__Explicit = 1,
		EUINavigationRule__Wrap = 2,
		EUINavigationRule__Stop = 3,
		EUINavigationRule__Custom = 4,
		EUINavigationRule__CustomBoundary = 5,
		EUINavigationRule__Invalid = 6,
	};


	// Enum /Script/SlateCore.EColorVisionDeficiency
	enum EColorVisionDeficiency
	{
		EColorVisionDeficiency__NormalVision = 0,
		EColorVisionDeficiency__Deuteranope = 1,
		EColorVisionDeficiency__Protanope = 2,
		EColorVisionDeficiency__Tritanope = 3,
	};


	// Enum /Script/SlateCore.EButtonClickMethod
	enum EButtonClickMethod
	{
		EButtonClickMethod__DownAndUp = 0,
		EButtonClickMethod__MouseDown = 1,
		EButtonClickMethod__MouseUp = 2,
		EButtonClickMethod__PreciseClick = 3,
	};


	// Enum /Script/SlateCore.EButtonTouchMethod
	enum EButtonTouchMethod
	{
		EButtonTouchMethod__DownAndUp = 0,
		EButtonTouchMethod__Down = 1,
		EButtonTouchMethod__PreciseTap = 2,
	};


	// Enum /Script/SlateCore.EButtonPressMethod
	enum EButtonPressMethod
	{
		EButtonPressMethod__DownAndUp = 0,
		EButtonPressMethod__ButtonPress = 1,
		EButtonPressMethod__ButtonRelease = 2,
	};


	// Enum /Script/SlateCore.EUINavigation
	enum EUINavigation
	{
		EUINavigation__Left = 0,
		EUINavigation__Right = 1,
		EUINavigation__Up = 2,
		EUINavigation__Down = 3,
		EUINavigation__Next = 4,
		EUINavigation__Previous = 5,
		EUINavigation__Num = 6,
		EUINavigation__Invalid = 7,
	};


	// Enum /Script/SlateCore.EUINavigationAction
	enum EUINavigationAction
	{
		EUINavigationAction__Accept = 0,
		EUINavigationAction__Back = 1,
		EUINavigationAction__Num = 2,
		EUINavigationAction__Invalid = 3,
	};


	// Enum /Script/SlateCore.ENavigationSource
	enum ENavigationSource
	{
		ENavigationSource__FocusedWidget = 0,
		ENavigationSource__WidgetUnderCursor = 1,
	};


	// Enum /Script/SlateCore.ENavigationGenesis
	enum ENavigationGenesis
	{
		ENavigationGenesis__Keyboard = 0,
		ENavigationGenesis__Controller = 1,
		ENavigationGenesis__User = 2,
	};


	// Enum /Script/SlateCore.EHorizontalAlignment
	enum EHorizontalAlignment
	{
		HAlign_Fill = 0,
		HAlign_Left = 1,
		HAlign_Center = 2,
		HAlign_Right = 3,
	};


	// Enum /Script/SlateCore.EVerticalAlignment
	enum EVerticalAlignment
	{
		VAlign_Fill = 0,
		VAlign_Top = 1,
		VAlign_Center = 2,
		VAlign_Bottom = 3,
	};


	// Enum /Script/SlateCore.EMenuPlacement
	enum EMenuPlacement
	{
		MenuPlacement_BelowAnchor = 0,
		MenuPlacement_CenteredBelowAnchor = 1,
		MenuPlacement_BelowRightAnchor = 2,
		MenuPlacement_ComboBox = 3,
		MenuPlacement_ComboBoxRight = 4,
		MenuPlacement_MenuRight = 5,
		MenuPlacement_AboveAnchor = 6,
		MenuPlacement_CenteredAboveAnchor = 7,
		MenuPlacement_AboveRightAnchor = 8,
		MenuPlacement_MenuLeft = 9,
		MenuPlacement_Center = A,
		MenuPlacement_RightLeftCenter = B,
		MenuPlacement_MatchBottomLeft = C,
	};


	// Enum /Script/SlateCore.EOrientation
	enum EOrientation
	{
		Orient_Horizontal = 0,
		Orient_Vertical = 1,
	};


	// Enum /Script/SlateCore.EScrollDirection
	enum EScrollDirection
	{
		Scroll_Down = 0,
		Scroll_Up = 1,
	};


	// Enum /Script/SlateCore.ETextCommit
	enum ETextCommit
	{
		ETextCommit__Default = 0,
		ETextCommit__OnEnter = 1,
		ETextCommit__OnUserMovedFocus = 2,
		ETextCommit__OnCleared = 3,
	};


	// Enum /Script/SlateCore.ESelectInfo
	enum ESelectInfo
	{
		ESelectInfo__OnKeyPress = 0,
		ESelectInfo__OnNavigation = 1,
		ESelectInfo__OnMouseClick = 2,
		ESelectInfo__Direct = 3,
	};


	// Enum /Script/SlateCore.ESlatePostRT
	enum ESlatePostRT
	{
		ESlatePostRT__None = 0,
		ESlatePostRT__ESlatePostRT = 1,
		ESlatePostRT__ESlatePostRT = 2,
		ESlatePostRT__ESlatePostRT = 4,
		ESlatePostRT__ESlatePostRT = 8,
		ESlatePostRT__ESlatePostRT = 10,
		ESlatePostRT__Num = 5,
	};


	// Enum /Script/SlateCore.EWidgetPixelSnapping
	enum EWidgetPixelSnapping
	{
		EWidgetPixelSnapping__Inherit = 0,
		EWidgetPixelSnapping__Disabled = 1,
		EWidgetPixelSnapping__SnapToPixel = 2,
	};


	// Enum /Script/SlateCore.ESlateDebuggingInputEvent
	enum ESlateDebuggingInputEvent
	{
		ESlateDebuggingInputEvent__MouseMove = 0,
		ESlateDebuggingInputEvent__MouseEnter = 1,
		ESlateDebuggingInputEvent__MouseLeave = 2,
		ESlateDebuggingInputEvent__PreviewMouseButtonDown = 3,
		ESlateDebuggingInputEvent__MouseButtonDown = 4,
		ESlateDebuggingInputEvent__MouseButtonUp = 5,
		ESlateDebuggingInputEvent__MouseButtonDoubleClick = 6,
		ESlateDebuggingInputEvent__MouseWheel = 7,
		ESlateDebuggingInputEvent__TouchStart = 8,
		ESlateDebuggingInputEvent__TouchEnd = 9,
		ESlateDebuggingInputEvent__TouchForceChanged = A,
		ESlateDebuggingInputEvent__TouchFirstMove = B,
		ESlateDebuggingInputEvent__TouchMoved = C,
		ESlateDebuggingInputEvent__DragDetected = D,
		ESlateDebuggingInputEvent__DragEnter = E,
		ESlateDebuggingInputEvent__DragLeave = F,
		ESlateDebuggingInputEvent__DragOver = 10,
		ESlateDebuggingInputEvent__DragDrop = 11,
		ESlateDebuggingInputEvent__DropMessage = 12,
		ESlateDebuggingInputEvent__PreviewKeyDown = 13,
		ESlateDebuggingInputEvent__KeyDown = 14,
		ESlateDebuggingInputEvent__KeyUp = 15,
		ESlateDebuggingInputEvent__KeyChar = 16,
		ESlateDebuggingInputEvent__AnalogInput = 17,
		ESlateDebuggingInputEvent__TouchGesture = 18,
		ESlateDebuggingInputEvent__MotionDetected = 19,
	};


	// Enum /Script/SlateCore.ESlateDebuggingStateChangeEvent
	enum ESlateDebuggingStateChangeEvent
	{
		ESlateDebuggingStateChangeEvent__MouseCaptureGained = 0,
		ESlateDebuggingStateChangeEvent__MouseCaptureLost = 1,
	};


	// Enum /Script/SlateCore.ESlateDebuggingNavigationMethod
	enum ESlateDebuggingNavigationMethod
	{
		ESlateDebuggingNavigationMethod__Unknown = 0,
		ESlateDebuggingNavigationMethod__Explicit = 1,
		ESlateDebuggingNavigationMethod__CustomDelegateBound = 2,
		ESlateDebuggingNavigationMethod__CustomDelegateUnbound = 3,
		ESlateDebuggingNavigationMethod__NextOrPrevious = 4,
		ESlateDebuggingNavigationMethod__HitTestGrid = 5,
	};


	// Enum /Script/SlateCore.ESlateDebuggingFocusEvent
	enum ESlateDebuggingFocusEvent
	{
		ESlateDebuggingFocusEvent__FocusChanging = 0,
		ESlateDebuggingFocusEvent__FocusLost = 1,
		ESlateDebuggingFocusEvent__FocusReceived = 2,
	};


	// Enum /Script/SlateCore.EFontHinting
	enum EFontHinting
	{
		EFontHinting__Default = 0,
		EFontHinting__Auto = 1,
		EFontHinting__AutoLight = 2,
		EFontHinting__Monochrome = 3,
		EFontHinting__None = 4,
	};


	// Enum /Script/SlateCore.EFontLoadingPolicy
	enum EFontLoadingPolicy
	{
		EFontLoadingPolicy__LazyLoad = 0,
		EFontLoadingPolicy__Stream = 1,
		EFontLoadingPolicy__Inline = 2,
	};


	// Enum /Script/SlateCore.EFontLayoutMethod
	enum EFontLayoutMethod
	{
		EFontLayoutMethod__Metrics = 0,
		EFontLayoutMethod__BoundingBox = 1,
	};


	// Enum /Script/SlateCore.ETextShapingMethod
	enum ETextShapingMethod
	{
		ETextShapingMethod__Auto = 0,
		ETextShapingMethod__KerningOnly = 1,
		ETextShapingMethod__FullShaping = 2,
	};


	// Enum /Script/SlateCore.EFocusCause
	enum EFocusCause
	{
		EFocusCause__Mouse = 0,
		EFocusCause__Navigation = 1,
		EFocusCause__SetDirectly = 2,
		EFocusCause__Cleared = 3,
		EFocusCause__OtherWidgetLostFocus = 4,
		EFocusCause__WindowActivate = 5,
	};


	// Enum /Script/SlateCore.EWidgetClipping
	enum EWidgetClipping
	{
		EWidgetClipping__Inherit = 0,
		EWidgetClipping__ClipToBounds = 1,
		EWidgetClipping__ClipToBoundsWithoutIntersecting = 2,
		EWidgetClipping__ClipToBoundsAlways = 3,
		EWidgetClipping__OnDemand = 4,
	};


	// Enum /Script/SlateCore.EFlowDirectionPreference
	enum EFlowDirectionPreference
	{
		EFlowDirectionPreference__Inherit = 0,
		EFlowDirectionPreference__Culture = 1,
		EFlowDirectionPreference__LeftToRight = 2,
		EFlowDirectionPreference__RightToLeft = 3,
	};


	// Enum /Script/SlateCore.ESlateBrushDrawType
	enum ESlateBrushDrawType
	{
		ESlateBrushDrawType__NoDrawType = 0,
		ESlateBrushDrawType__Box = 1,
		ESlateBrushDrawType__Border = 2,
		ESlateBrushDrawType__Image = 3,
		ESlateBrushDrawType__RoundedBox = 4,
	};


	// Enum /Script/SlateCore.ESlateBrushTileType
	enum ESlateBrushTileType
	{
		ESlateBrushTileType__NoTile = 0,
		ESlateBrushTileType__Horizontal = 1,
		ESlateBrushTileType__Vertical = 2,
		ESlateBrushTileType__Both = 3,
	};


	// Enum /Script/SlateCore.ESlateBrushMirrorType
	enum ESlateBrushMirrorType
	{
		ESlateBrushMirrorType__NoMirror = 0,
		ESlateBrushMirrorType__Horizontal = 1,
		ESlateBrushMirrorType__Vertical = 2,
		ESlateBrushMirrorType__Both = 3,
	};


	// Enum /Script/SlateCore.ESlateBrushImageType
	enum ESlateBrushImageType
	{
		ESlateBrushImageType__NoImage = 0,
		ESlateBrushImageType__FullColor = 1,
		ESlateBrushImageType__Linear = 2,
		ESlateBrushImageType__Vector = 3,
	};


	// Enum /Script/SlateCore.ESlateBrushRoundingType
	enum ESlateBrushRoundingType
	{
		ESlateBrushRoundingType__FixedRadius = 0,
		ESlateBrushRoundingType__HalfHeightRadius = 1,
	};


	// Enum /Script/SlateCore.ESlateColorStylingMode
	enum ESlateColorStylingMode
	{
		ESlateColorStylingMode__UseColor_Specified = 0,
		ESlateColorStylingMode__UseColor_ColorTable = 1,
		ESlateColorStylingMode__UseColor_Foreground = 2,
		ESlateColorStylingMode__UseColor_Foreground_Subdued = 3,
		ESlateColorStylingMode__UseColor_UseStyle = 4,
	};


	// Enum /Script/SlateCore.EConsumeMouseWheel
	enum EConsumeMouseWheel
	{
		EConsumeMouseWheel__WhenScrollingPossible = 0,
		EConsumeMouseWheel__Always = 1,
		EConsumeMouseWheel__Never = 2,
	};


	// Enum /Script/SlateCore.ESlateParentWindowSearchMethod
	enum ESlateParentWindowSearchMethod
	{
		ESlateParentWindowSearchMethod__ActiveWindow = 0,
		ESlateParentWindowSearchMethod__MainWindow = 1,
	};


	// Enum /Script/SlateCore.ESlateCheckBoxType
	enum ESlateCheckBoxType
	{
		ESlateCheckBoxType__CheckBox = 0,
		ESlateCheckBoxType__ToggleButton = 1,
	};


	// Enum /Script/SlateCore.ECheckBoxState
	enum ECheckBoxState
	{
		ECheckBoxState__Unchecked = 0,
		ECheckBoxState__Checked = 1,
		ECheckBoxState__Undetermined = 2,
	};


	// Enum /Script/SlateCore.ETextOverflowPolicy
	enum ETextOverflowPolicy
	{
		ETextOverflowPolicy__Clip = 0,
		ETextOverflowPolicy__Ellipsis = 1,
		ETextOverflowPolicy__MultilineEllipsis = 2,
	};


	// Enum /Script/SlateCore.ETextTransformPolicy
	enum ETextTransformPolicy
	{
		ETextTransformPolicy__None = 0,
		ETextTransformPolicy__ToLower = 1,
		ETextTransformPolicy__ToUpper = 2,
	};


	// Enum /Script/SlateCore.EStyleColor
	enum EStyleColor
	{
		EStyleColor__Black = 0,
		EStyleColor__Background = 1,
		EStyleColor__Title = 2,
		EStyleColor__WindowBorder = 3,
		EStyleColor__Foldout = 4,
		EStyleColor__Input = 5,
		EStyleColor__InputOutline = 6,
		EStyleColor__Recessed = 7,
		EStyleColor__Panel = 8,
		EStyleColor__Header = 9,
		EStyleColor__Dropdown = A,
		EStyleColor__DropdownOutline = B,
		EStyleColor__Hover = C,
		EStyleColor__Hover2 = D,
		EStyleColor__White = E,
		EStyleColor__White25 = F,
		EStyleColor__Highlight = 10,
		EStyleColor__Primary = 11,
		EStyleColor__PrimaryHover = 12,
		EStyleColor__PrimaryPress = 13,
		EStyleColor__Secondary = 14,
		EStyleColor__Foreground = 15,
		EStyleColor__ForegroundHover = 16,
		EStyleColor__ForegroundInverted = 17,
		EStyleColor__ForegroundHeader = 18,
		EStyleColor__Select = 19,
		EStyleColor__SelectInactive = 1A,
		EStyleColor__SelectParent = 1B,
		EStyleColor__SelectHover = 1C,
		EStyleColor__Notifications = 1D,
		EStyleColor__AccentBlue = 1E,
		EStyleColor__AccentPurple = 1F,
		EStyleColor__AccentPink = 20,
		EStyleColor__AccentRed = 21,
		EStyleColor__AccentOrange = 22,
		EStyleColor__AccentYellow = 23,
		EStyleColor__AccentGreen = 24,
		EStyleColor__AccentBrown = 25,
		EStyleColor__AccentBlack = 26,
		EStyleColor__AccentGray = 27,
		EStyleColor__AccentWhite = 28,
		EStyleColor__AccentFolder = 29,
		EStyleColor__Warning = 2A,
		EStyleColor__Error = 2B,
		EStyleColor__Success = 2C,
		EStyleColor__User1 = 2D,
		EStyleColor__User2 = 2E,
		EStyleColor__User3 = 2F,
		EStyleColor__User4 = 30,
		EStyleColor__User5 = 31,
		EStyleColor__User6 = 32,
		EStyleColor__User7 = 33,
		EStyleColor__User8 = 34,
		EStyleColor__User9 = 35,
		EStyleColor__User10 = 36,
		EStyleColor__User11 = 37,
		EStyleColor__User12 = 38,
		EStyleColor__User13 = 39,
		EStyleColor__User14 = 3A,
		EStyleColor__User15 = 3B,
		EStyleColor__User16 = 3C,
	};

}
