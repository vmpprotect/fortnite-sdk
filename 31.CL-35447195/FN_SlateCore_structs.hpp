#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: SlateCore
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct SlateCore.Geometry
	// Size: 0x38 (0x38 - 0x0)
	struct FGeometry	
	{
	public:
		unsigned char UnknownData01_2[0x38]; // 0x0(0x38) UNKNOWN PROPERTY
	};


	// Struct SlateCore.SlateBrush
	// Size: 0xB0 (0xB0 - 0x0)
	struct FSlateBrush	
	{
	public:
		unsigned char UnknownData03_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		FSlateColor TintColor; // 0x8(0x14)
		TEnumAsByte DrawAs; // 0x1C(0x1)
		TEnumAsByte Tiling; // 0x1D(0x1)
		TEnumAsByte Mirroring; // 0x1E(0x1)
		TEnumAsByte ImageType; // 0x1F(0x1)
		FDeprecateSlateVector2D ImageSize; // 0x20(0x8)
		FMargin Margin; // 0x28(0x10)
		UObject ResourceObject; // 0x38(0x8)
		FSlateBrushOutlineSettings OutlineSettings; // 0x40(0x40)
		FBox2f UVRegion; // 0x80(0x14)
		bool bIsDynamicallyLoaded : 1; // 0x94:0(0x1)
		bool bHasUObject : 1; // 0x94:1(0x1)
		unsigned char UnknownData04_5[0x13]; // 0x95(0x13) UNKNOWN PROPERTY
		FName ResourceName; // 0xA8(0x4)
		unsigned char UnknownData05_7[0x4]; // 0xAC(0x4) UNKNOWN PROPERTY
	};


	// Struct SlateCore.SlateBrushOutlineSettings
	// Size: 0x40 (0x40 - 0x0)
	struct FSlateBrushOutlineSettings	
	{
	public:
		FVector4 CornerRadii; // 0x0(0x20)
		FSlateColor Color; // 0x20(0x14)
		float Width; // 0x34(0x4)
		TEnumAsByte RoundingType; // 0x38(0x1)
		bool bUseBrushTransparency; // 0x39(0x1)
		unsigned char UnknownData01_7[0x6]; // 0x3A(0x6) UNKNOWN PROPERTY
	};


	// Struct SlateCore.SlateColor
	// Size: 0x14 (0x14 - 0x0)
	struct FSlateColor	
	{
	public:
		FLinearColor SpecifiedColor; // 0x0(0x10)
		ESlateColorStylingMode ColorUseRule; // 0x10(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x11(0x3) UNKNOWN PROPERTY
	};


	// Struct SlateCore.Margin
	// Size: 0x10 (0x10 - 0x0)
	struct FMargin	
	{
	public:
		float Left; // 0x0(0x4)
		float Top; // 0x4(0x4)
		float Right; // 0x8(0x4)
		float Bottom; // 0xC(0x4)
	};


	// Struct SlateCore.DeprecateSlateVector2D
	// Inherited from FVector2f
	// Size: 0x0 (0x8 - 0x8)
	struct FDeprecateSlateVector2D : public FVector2f	
	{
	public:
	};


	// Struct SlateCore.InputEvent
	// Size: 0x20 (0x20 - 0x0)
	struct FInputEvent	
	{
	public:
		unsigned char UnknownData01_2[0x20]; // 0x0(0x20) UNKNOWN PROPERTY
	};


	// Struct SlateCore.PointerEvent
	// Inherited from FInputEvent
	// Size: 0x58 (0x78 - 0x20)
	struct FPointerEvent : public FInputEvent	
	{
	public:
		unsigned char UnknownData01_1[0x58]; // 0x20(0x58) UNKNOWN PROPERTY
	};


	// Struct SlateCore.SlateWidgetStyle
	// Size: 0x8 (0x8 - 0x0)
	struct FSlateWidgetStyle	
	{
	public:
		unsigned char UnknownData01_2[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct SlateCore.ScrollBarStyle
	// Inherited from FSlateWidgetStyle
	// Size: 0x648 (0x650 - 0x8)
	struct FScrollBarStyle : public FSlateWidgetStyle	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FSlateBrush HorizontalBackgroundImage; // 0x10(0xB0)
		FSlateBrush VerticalBackgroundImage; // 0xC0(0xB0)
		FSlateBrush VerticalTopSlotImage; // 0x170(0xB0)
		FSlateBrush HorizontalTopSlotImage; // 0x220(0xB0)
		FSlateBrush VerticalBottomSlotImage; // 0x2D0(0xB0)
		FSlateBrush HorizontalBottomSlotImage; // 0x380(0xB0)
		FSlateBrush NormalThumbImage; // 0x430(0xB0)
		FSlateBrush HoveredThumbImage; // 0x4E0(0xB0)
		FSlateBrush DraggedThumbImage; // 0x590(0xB0)
		float Thickness; // 0x640(0x4)
		unsigned char UnknownData03_7[0xC]; // 0x644(0xC) UNKNOWN PROPERTY
	};


	// Struct SlateCore.TableRowStyle
	// Inherited from FSlateWidgetStyle
	// Size: 0xB48 (0xB50 - 0x8)
	struct FTableRowStyle : public FSlateWidgetStyle	
	{
	public:
		unsigned char UnknownData03_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FSlateBrush SelectorFocusedBrush; // 0x10(0xB0)
		FSlateBrush ActiveHoveredBrush; // 0xC0(0xB0)
		FSlateBrush ActiveBrush; // 0x170(0xB0)
		FSlateBrush InactiveHoveredBrush; // 0x220(0xB0)
		FSlateBrush InactiveBrush; // 0x2D0(0xB0)
		bool bUseParentRowBrush; // 0x380(0x1)
		unsigned char UnknownData04_6[0xF]; // 0x381(0xF) UNKNOWN PROPERTY
		FSlateBrush ParentRowBackgroundBrush; // 0x390(0xB0)
		FSlateBrush ParentRowBackgroundHoveredBrush; // 0x440(0xB0)
		FSlateBrush EvenRowBackgroundHoveredBrush; // 0x4F0(0xB0)
		FSlateBrush EvenRowBackgroundBrush; // 0x5A0(0xB0)
		FSlateBrush OddRowBackgroundHoveredBrush; // 0x650(0xB0)
		FSlateBrush OddRowBackgroundBrush; // 0x700(0xB0)
		FSlateColor TextColor; // 0x7B0(0x14)
		FSlateColor SelectedTextColor; // 0x7C4(0x14)
		unsigned char UnknownData05_6[0x8]; // 0x7D8(0x8) UNKNOWN PROPERTY
		FSlateBrush DropIndicator_Above; // 0x7E0(0xB0)
		FSlateBrush DropIndicator_Onto; // 0x890(0xB0)
		FSlateBrush DropIndicator_Below; // 0x940(0xB0)
		FSlateBrush ActiveHighlightedBrush; // 0x9F0(0xB0)
		FSlateBrush InactiveHighlightedBrush; // 0xAA0(0xB0)
	};


	// Struct SlateCore.ComboBoxStyle
	// Inherited from FSlateWidgetStyle
	// Size: 0x598 (0x5A0 - 0x8)
	struct FComboBoxStyle : public FSlateWidgetStyle	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FComboButtonStyle ComboButtonStyle; // 0x10(0x540)
		FSlateSound PressedSlateSound; // 0x550(0x18)
		FSlateSound SelectionChangeSlateSound; // 0x568(0x18)
		FMargin ContentPadding; // 0x580(0x10)
		FMargin MenuRowPadding; // 0x590(0x10)
	};


	// Struct SlateCore.SlateSound
	// Size: 0x18 (0x18 - 0x0)
	struct FSlateSound	
	{
	public:
		UObject ResourceObject; // 0x0(0x8)
		unsigned char UnknownData01_7[0x10]; // 0x8(0x10) UNKNOWN PROPERTY
	};


	// Struct SlateCore.ComboButtonStyle
	// Inherited from FSlateWidgetStyle
	// Size: 0x538 (0x540 - 0x8)
	struct FComboButtonStyle : public FSlateWidgetStyle	
	{
	public:
		unsigned char UnknownData03_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FButtonStyle ButtonStyle; // 0x10(0x370)
		FSlateBrush DownArrowImage; // 0x380(0xB0)
		FDeprecateSlateVector2D ShadowOffset; // 0x430(0x8)
		FLinearColor ShadowColorAndOpacity; // 0x438(0x10)
		unsigned char UnknownData04_6[0x8]; // 0x448(0x8) UNKNOWN PROPERTY
		FSlateBrush MenuBorderBrush; // 0x450(0xB0)
		FMargin MenuBorderPadding; // 0x500(0x10)
		FMargin ContentPadding; // 0x510(0x10)
		FMargin DownArrowPadding; // 0x520(0x10)
		TEnumAsByte DownArrowAlign; // 0x530(0x1)
		unsigned char UnknownData05_7[0xF]; // 0x531(0xF) UNKNOWN PROPERTY
	};


	// Struct SlateCore.ButtonStyle
	// Inherited from FSlateWidgetStyle
	// Size: 0x368 (0x370 - 0x8)
	struct FButtonStyle : public FSlateWidgetStyle	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FSlateBrush Normal; // 0x10(0xB0)
		FSlateBrush Hovered; // 0xC0(0xB0)
		FSlateBrush Pressed; // 0x170(0xB0)
		FSlateBrush Disabled; // 0x220(0xB0)
		FSlateColor NormalForeground; // 0x2D0(0x14)
		FSlateColor HoveredForeground; // 0x2E4(0x14)
		FSlateColor PressedForeground; // 0x2F8(0x14)
		FSlateColor DisabledForeground; // 0x30C(0x14)
		FMargin NormalPadding; // 0x320(0x10)
		FMargin PressedPadding; // 0x330(0x10)
		FSlateSound PressedSlateSound; // 0x340(0x18)
		FSlateSound HoveredSlateSound; // 0x358(0x18)
	};


	// Struct SlateCore.SlateFontInfo
	// Size: 0x58 (0x58 - 0x0)
	struct FSlateFontInfo	
	{
	public:
		UObject FontObject; // 0x0(0x8)
		UObject FontMaterial; // 0x8(0x8)
		FFontOutlineSettings OutlineSettings; // 0x10(0x20)
		unsigned char UnknownData03_6[0x10]; // 0x30(0x10) UNKNOWN PROPERTY
		FName TypefaceFontName; // 0x40(0x4)
		float Size; // 0x44(0x4)
		int32_t LetterSpacing; // 0x48(0x4)
		float SkewAmount; // 0x4C(0x4)
		unsigned char UnknownData04_6[0x1]; // 0x50(0x1) UNKNOWN PROPERTY
		bool bForceMonospaced; // 0x51(0x1)
		unsigned char UnknownData05_6[0x2]; // 0x52(0x2) UNKNOWN PROPERTY
		float MonospacedWidth; // 0x54(0x4)
	};


	// Struct SlateCore.FontOutlineSettings
	// Size: 0x20 (0x20 - 0x0)
	struct FFontOutlineSettings	
	{
	public:
		int32_t OutlineSize; // 0x0(0x4)
		bool bMiteredCorners; // 0x4(0x1)
		bool bSeparateFillAlpha; // 0x5(0x1)
		bool bApplyOutlineToDropShadows; // 0x6(0x1)
		unsigned char UnknownData01_6[0x1]; // 0x7(0x1) UNKNOWN PROPERTY
		UObject OutlineMaterial; // 0x8(0x8)
		FLinearColor OutlineColor; // 0x10(0x10)
	};


	// Struct SlateCore.EditableTextStyle
	// Inherited from FSlateWidgetStyle
	// Size: 0x288 (0x290 - 0x8)
	struct FEditableTextStyle : public FSlateWidgetStyle	
	{
	public:
		FSlateFontInfo Font; // 0x8(0x58)
		FSlateColor ColorAndOpacity; // 0x60(0x14)
		unsigned char UnknownData01_6[0xC]; // 0x74(0xC) UNKNOWN PROPERTY
		FSlateBrush BackgroundImageSelected; // 0x80(0xB0)
		FSlateBrush BackgroundImageComposing; // 0x130(0xB0)
		FSlateBrush CaretImage; // 0x1E0(0xB0)
	};


	// Struct SlateCore.EditableTextBoxStyle
	// Inherited from FSlateWidgetStyle
	// Size: 0xC78 (0xC80 - 0x8)
	struct FEditableTextBoxStyle : public FSlateWidgetStyle	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FSlateBrush BackgroundImageNormal; // 0x10(0xB0)
		FSlateBrush BackgroundImageHovered; // 0xC0(0xB0)
		FSlateBrush BackgroundImageFocused; // 0x170(0xB0)
		FSlateBrush BackgroundImageReadOnly; // 0x220(0xB0)
		FMargin Padding; // 0x2D0(0x10)
		FTextBlockStyle TextStyle; // 0x2E0(0x2E0)
		FSlateColor ForegroundColor; // 0x5C0(0x14)
		FSlateColor BackgroundColor; // 0x5D4(0x14)
		FSlateColor ReadOnlyForegroundColor; // 0x5E8(0x14)
		FSlateColor FocusedForegroundColor; // 0x5FC(0x14)
		FMargin HScrollBarPadding; // 0x610(0x10)
		FMargin VScrollBarPadding; // 0x620(0x10)
		FScrollBarStyle ScrollBarStyle; // 0x630(0x650)
	};


	// Struct SlateCore.TextBlockStyle
	// Inherited from FSlateWidgetStyle
	// Size: 0x2D8 (0x2E0 - 0x8)
	struct FTextBlockStyle : public FSlateWidgetStyle	
	{
	public:
		FSlateFontInfo Font; // 0x8(0x58)
		FSlateColor ColorAndOpacity; // 0x60(0x14)
		FDeprecateSlateVector2D ShadowOffset; // 0x74(0x8)
		FLinearColor ShadowColorAndOpacity; // 0x7C(0x10)
		FSlateColor SelectedBackgroundColor; // 0x8C(0x14)
		FSlateColor HighlightColor; // 0xA0(0x14)
		unsigned char UnknownData02_6[0xC]; // 0xB4(0xC) UNKNOWN PROPERTY
		FSlateBrush HighlightShape; // 0xC0(0xB0)
		FSlateBrush StrikeBrush; // 0x170(0xB0)
		FSlateBrush UnderlineBrush; // 0x220(0xB0)
		ETextTransformPolicy TransformPolicy; // 0x2D0(0x1)
		ETextOverflowPolicy OverflowPolicy; // 0x2D1(0x1)
		unsigned char UnknownData03_7[0xE]; // 0x2D2(0xE) UNKNOWN PROPERTY
	};


	// Struct SlateCore.SpinBoxStyle
	// Inherited from FSlateWidgetStyle
	// Size: 0x518 (0x520 - 0x8)
	struct FSpinBoxStyle : public FSlateWidgetStyle	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FSlateBrush BackgroundBrush; // 0x10(0xB0)
		FSlateBrush ActiveBackgroundBrush; // 0xC0(0xB0)
		FSlateBrush HoveredBackgroundBrush; // 0x170(0xB0)
		FSlateBrush ActiveFillBrush; // 0x220(0xB0)
		FSlateBrush HoveredFillBrush; // 0x2D0(0xB0)
		FSlateBrush InactiveFillBrush; // 0x380(0xB0)
		FSlateBrush ArrowsImage; // 0x430(0xB0)
		FSlateColor ForegroundColor; // 0x4E0(0x14)
		FMargin TextPadding; // 0x4F4(0x10)
		FMargin InsetPadding; // 0x504(0x10)
		unsigned char UnknownData03_7[0xC]; // 0x514(0xC) UNKNOWN PROPERTY
	};


	// Struct SlateCore.CharacterEvent
	// Inherited from FInputEvent
	// Size: 0x8 (0x28 - 0x20)
	struct FCharacterEvent : public FInputEvent	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x20(0x8) UNKNOWN PROPERTY
	};


	// Struct SlateCore.KeyEvent
	// Inherited from FInputEvent
	// Size: 0x20 (0x40 - 0x20)
	struct FKeyEvent : public FInputEvent	
	{
	public:
		unsigned char UnknownData01_1[0x20]; // 0x20(0x20) UNKNOWN PROPERTY
	};


	// Struct SlateCore.NavigationEvent
	// Inherited from FInputEvent
	// Size: 0x8 (0x28 - 0x20)
	struct FNavigationEvent : public FInputEvent	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x20(0x8) UNKNOWN PROPERTY
	};


	// Struct SlateCore.AnalogInputEvent
	// Inherited from FKeyEvent -> FInputEvent
	// Size: 0x8 (0x48 - 0x40)
	struct FAnalogInputEvent : public FKeyEvent	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x40(0x8) UNKNOWN PROPERTY
	};


	// Struct SlateCore.FocusEvent
	// Size: 0x8 (0x8 - 0x0)
	struct FFocusEvent	
	{
	public:
		unsigned char UnknownData01_2[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct SlateCore.MotionEvent
	// Inherited from FInputEvent
	// Size: 0x60 (0x80 - 0x20)
	struct FMotionEvent : public FInputEvent	
	{
	public:
		unsigned char UnknownData01_1[0x60]; // 0x20(0x60) UNKNOWN PROPERTY
	};


	// Struct SlateCore.TableViewStyle
	// Inherited from FSlateWidgetStyle
	// Size: 0xB8 (0xC0 - 0x8)
	struct FTableViewStyle : public FSlateWidgetStyle	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FSlateBrush BackgroundBrush; // 0x10(0xB0)
	};


	// Struct SlateCore.FontSdfSettings
	// Size: 0x4 (0x4 - 0x0)
	struct FFontSdfSettings	
	{
	public:
		int32_t BasePpem; // 0x0(0x4)
	};


	// Struct SlateCore.FontData
	// Size: 0x28 (0x28 - 0x0)
	struct FFontData	
	{
	public:
		FString FontFilename; // 0x0(0x10)
		unsigned char UnknownData03_6[0x4]; // 0x10(0x4) UNKNOWN PROPERTY
		EFontHinting Hinting; // 0x14(0x1)
		EFontLoadingPolicy LoadingPolicy; // 0x15(0x1)
		unsigned char UnknownData04_6[0x2]; // 0x16(0x2) UNKNOWN PROPERTY
		int32_t SubFaceIndex; // 0x18(0x4)
		unsigned char UnknownData05_6[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
		UObject FontFaceAsset; // 0x20(0x8)
	};


	// Struct SlateCore.TypefaceEntry
	// Size: 0x30 (0x30 - 0x0)
	struct FTypefaceEntry	
	{
	public:
		FName Name; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FFontData Font; // 0x8(0x28)
	};


	// Struct SlateCore.Typeface
	// Size: 0x10 (0x10 - 0x0)
	struct FTypeface	
	{
	public:
		TArray Fonts; // 0x0(0x10)
	};


	// Struct SlateCore.CompositeFallbackFont
	// Size: 0x18 (0x18 - 0x0)
	struct FCompositeFallbackFont	
	{
	public:
		FTypeface Typeface; // 0x0(0x10)
		float ScalingFactor; // 0x10(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct SlateCore.CompositeSubFont
	// Inherited from FCompositeFallbackFont
	// Size: 0x20 (0x38 - 0x18)
	struct FCompositeSubFont : public FCompositeFallbackFont	
	{
	public:
		TArray CharacterRanges; // 0x18(0x10)
		FString Cultures; // 0x28(0x10)
	};


	// Struct SlateCore.CompositeFont
	// Size: 0x40 (0x40 - 0x0)
	struct FCompositeFont	
	{
	public:
		FTypeface DefaultTypeface; // 0x0(0x10)
		FCompositeFallbackFont FallbackTypeface; // 0x10(0x18)
		TArray SubTypefaces; // 0x28(0x10)
		bool bEnableAscentDescentOverride; // 0x38(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x39(0x7) UNKNOWN PROPERTY
	};


	// Struct SlateCore.CaptureLostEvent
	// Size: 0x8 (0x8 - 0x0)
	struct FCaptureLostEvent	
	{
	public:
		unsigned char UnknownData01_2[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct SlateCore.SegmentedControlStyle
	// Inherited from FSlateWidgetStyle
	// Size: 0x1CB8 (0x1CC0 - 0x8)
	struct FSegmentedControlStyle : public FSlateWidgetStyle	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FCheckBoxStyle ControlStyle; // 0x10(0x950)
		FCheckBoxStyle FirstControlStyle; // 0x960(0x950)
		FCheckBoxStyle LastControlStyle; // 0x12B0(0x950)
		FSlateBrush BackgroundBrush; // 0x1C00(0xB0)
		FMargin UniformPadding; // 0x1CB0(0x10)
	};


	// Struct SlateCore.CheckBoxStyle
	// Inherited from FSlateWidgetStyle
	// Size: 0x948 (0x950 - 0x8)
	struct FCheckBoxStyle : public FSlateWidgetStyle	
	{
	public:
		TEnumAsByte CheckBoxType; // 0x8(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x9(0x7) UNKNOWN PROPERTY
		FSlateBrush UncheckedImage; // 0x10(0xB0)
		FSlateBrush UncheckedHoveredImage; // 0xC0(0xB0)
		FSlateBrush UncheckedPressedImage; // 0x170(0xB0)
		FSlateBrush CheckedImage; // 0x220(0xB0)
		FSlateBrush CheckedHoveredImage; // 0x2D0(0xB0)
		FSlateBrush CheckedPressedImage; // 0x380(0xB0)
		FSlateBrush UndeterminedImage; // 0x430(0xB0)
		FSlateBrush UndeterminedHoveredImage; // 0x4E0(0xB0)
		FSlateBrush UndeterminedPressedImage; // 0x590(0xB0)
		FMargin Padding; // 0x640(0x10)
		FSlateBrush BackgroundImage; // 0x650(0xB0)
		FSlateBrush BackgroundHoveredImage; // 0x700(0xB0)
		FSlateBrush BackgroundPressedImage; // 0x7B0(0xB0)
		FSlateColor ForegroundColor; // 0x860(0x14)
		FSlateColor HoveredForeground; // 0x874(0x14)
		FSlateColor PressedForeground; // 0x888(0x14)
		FSlateColor CheckedForeground; // 0x89C(0x14)
		FSlateColor CheckedHoveredForeground; // 0x8B0(0x14)
		FSlateColor CheckedPressedForeground; // 0x8C4(0x14)
		FSlateColor UndeterminedForeground; // 0x8D8(0x14)
		FSlateColor BorderBackgroundColor; // 0x8EC(0x14)
		FSlateSound CheckedSlateSound; // 0x900(0x18)
		FSlateSound UncheckedSlateSound; // 0x918(0x18)
		FSlateSound HoveredSlateSound; // 0x930(0x18)
		unsigned char UnknownData03_7[0x8]; // 0x948(0x8) UNKNOWN PROPERTY
	};


	// Struct SlateCore.HyperlinkStyle
	// Inherited from FSlateWidgetStyle
	// Size: 0x668 (0x670 - 0x8)
	struct FHyperlinkStyle : public FSlateWidgetStyle	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FButtonStyle UnderlineStyle; // 0x10(0x370)
		FTextBlockStyle TextStyle; // 0x380(0x2E0)
		FMargin Padding; // 0x660(0x10)
	};


	// Struct SlateCore.InlineEditableTextBlockStyle
	// Inherited from FSlateWidgetStyle
	// Size: 0xF68 (0xF70 - 0x8)
	struct FInlineEditableTextBlockStyle : public FSlateWidgetStyle	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FEditableTextBoxStyle EditableTextBoxStyle; // 0x10(0xC80)
		FTextBlockStyle TextStyle; // 0xC90(0x2E0)
	};


	// Struct SlateCore.ProgressBarStyle
	// Inherited from FSlateWidgetStyle
	// Size: 0x228 (0x230 - 0x8)
	struct FProgressBarStyle : public FSlateWidgetStyle	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FSlateBrush BackgroundImage; // 0x10(0xB0)
		FSlateBrush FillImage; // 0xC0(0xB0)
		FSlateBrush MarqueeImage; // 0x170(0xB0)
		bool EnableFillAnimation; // 0x220(0x1)
		unsigned char UnknownData03_7[0xF]; // 0x221(0xF) UNKNOWN PROPERTY
	};


	// Struct SlateCore.ExpandableAreaStyle
	// Inherited from FSlateWidgetStyle
	// Size: 0x178 (0x180 - 0x8)
	struct FExpandableAreaStyle : public FSlateWidgetStyle	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FSlateBrush CollapsedImage; // 0x10(0xB0)
		FSlateBrush ExpandedImage; // 0xC0(0xB0)
		float RolloutAnimationSeconds; // 0x170(0x4)
		unsigned char UnknownData03_7[0xC]; // 0x174(0xC) UNKNOWN PROPERTY
	};


	// Struct SlateCore.SearchBoxStyle
	// Inherited from FSlateWidgetStyle
	// Size: 0xFC8 (0xFD0 - 0x8)
	struct FSearchBoxStyle : public FSlateWidgetStyle	
	{
	public:
		unsigned char UnknownData03_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FEditableTextBoxStyle TextBoxStyle; // 0x10(0xC80)
		FSlateFontInfo ActiveFontInfo; // 0xC90(0x58)
		unsigned char UnknownData04_6[0x8]; // 0xCE8(0x8) UNKNOWN PROPERTY
		FSlateBrush UpArrowImage; // 0xCF0(0xB0)
		FSlateBrush DownArrowImage; // 0xDA0(0xB0)
		FSlateBrush GlassImage; // 0xE50(0xB0)
		FSlateBrush ClearImage; // 0xF00(0xB0)
		FMargin ImagePadding; // 0xFB0(0x10)
		bool bLeftAlignButtons; // 0xFC0(0x1)
		bool bLeftAlignSearchResultButtons; // 0xFC1(0x1)
		bool bLeftAlignGlassImageAndClearButton; // 0xFC2(0x1)
		unsigned char UnknownData05_7[0xD]; // 0xFC3(0xD) UNKNOWN PROPERTY
	};


	// Struct SlateCore.SliderStyle
	// Inherited from FSlateWidgetStyle
	// Size: 0x438 (0x440 - 0x8)
	struct FSliderStyle : public FSlateWidgetStyle	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FSlateBrush NormalBarImage; // 0x10(0xB0)
		FSlateBrush HoveredBarImage; // 0xC0(0xB0)
		FSlateBrush DisabledBarImage; // 0x170(0xB0)
		FSlateBrush NormalThumbImage; // 0x220(0xB0)
		FSlateBrush HoveredThumbImage; // 0x2D0(0xB0)
		FSlateBrush DisabledThumbImage; // 0x380(0xB0)
		float BarThickness; // 0x430(0x4)
		unsigned char UnknownData03_7[0xC]; // 0x434(0xC) UNKNOWN PROPERTY
	};


	// Struct SlateCore.VolumeControlStyle
	// Inherited from FSlateWidgetStyle
	// Size: 0x7B8 (0x7C0 - 0x8)
	struct FVolumeControlStyle : public FSlateWidgetStyle	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FSliderStyle SliderStyle; // 0x10(0x440)
		FSlateBrush HighVolumeImage; // 0x450(0xB0)
		FSlateBrush MidVolumeImage; // 0x500(0xB0)
		FSlateBrush LowVolumeImage; // 0x5B0(0xB0)
		FSlateBrush NoVolumeImage; // 0x660(0xB0)
		FSlateBrush MutedImage; // 0x710(0xB0)
	};


	// Struct SlateCore.InlineTextImageStyle
	// Inherited from FSlateWidgetStyle
	// Size: 0xC8 (0xD0 - 0x8)
	struct FInlineTextImageStyle : public FSlateWidgetStyle	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FSlateBrush Image; // 0x10(0xB0)
		int16_t Baseline; // 0xC0(0x2)
		unsigned char UnknownData03_7[0xE]; // 0xC2(0xE) UNKNOWN PROPERTY
	};


	// Struct SlateCore.SplitterStyle
	// Inherited from FSlateWidgetStyle
	// Size: 0x168 (0x170 - 0x8)
	struct FSplitterStyle : public FSlateWidgetStyle	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FSlateBrush HandleNormalBrush; // 0x10(0xB0)
		FSlateBrush HandleHighlightBrush; // 0xC0(0xB0)
	};


	// Struct SlateCore.TableColumnHeaderStyle
	// Inherited from FSlateWidgetStyle
	// Size: 0x638 (0x640 - 0x8)
	struct FTableColumnHeaderStyle : public FSlateWidgetStyle	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FSlateBrush SortPrimaryAscendingImage; // 0x10(0xB0)
		FSlateBrush SortPrimaryDescendingImage; // 0xC0(0xB0)
		FSlateBrush SortSecondaryAscendingImage; // 0x170(0xB0)
		FSlateBrush SortSecondaryDescendingImage; // 0x220(0xB0)
		FSlateBrush NormalBrush; // 0x2D0(0xB0)
		FSlateBrush HoveredBrush; // 0x380(0xB0)
		FSlateBrush MenuDropdownImage; // 0x430(0xB0)
		FSlateBrush MenuDropdownNormalBorderBrush; // 0x4E0(0xB0)
		FSlateBrush MenuDropdownHoveredBorderBrush; // 0x590(0xB0)
	};


	// Struct SlateCore.HeaderRowStyle
	// Inherited from FSlateWidgetStyle
	// Size: 0xF98 (0xFA0 - 0x8)
	struct FHeaderRowStyle : public FSlateWidgetStyle	
	{
	public:
		unsigned char UnknownData04_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FTableColumnHeaderStyle ColumnStyle; // 0x10(0x640)
		FTableColumnHeaderStyle LastColumnStyle; // 0x650(0x640)
		FSplitterStyle ColumnSplitterStyle; // 0xC90(0x170)
		float SplitterHandleSize; // 0xE00(0x4)
		unsigned char UnknownData05_6[0xC]; // 0xE04(0xC) UNKNOWN PROPERTY
		FSlateBrush BackgroundBrush; // 0xE10(0xB0)
		FSlateColor ForegroundColor; // 0xEC0(0x14)
		unsigned char UnknownData06_6[0xC]; // 0xED4(0xC) UNKNOWN PROPERTY
		FSlateBrush HorizontalSeparatorBrush; // 0xEE0(0xB0)
		float HorizontalSeparatorThickness; // 0xF90(0x4)
		unsigned char UnknownData07_7[0xC]; // 0xF94(0xC) UNKNOWN PROPERTY
	};


	// Struct SlateCore.DockTabStyle
	// Inherited from FSlateWidgetStyle
	// Size: 0xBB8 (0xBC0 - 0x8)
	struct FDockTabStyle : public FSlateWidgetStyle	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FButtonStyle CloseButtonStyle; // 0x10(0x370)
		FSlateBrush NormalBrush; // 0x380(0xB0)
		FSlateBrush ColorOverlayTabBrush; // 0x430(0xB0)
		FSlateBrush ColorOverlayIconBrush; // 0x4E0(0xB0)
		FSlateBrush ForegroundBrush; // 0x590(0xB0)
		FSlateBrush HoveredBrush; // 0x640(0xB0)
		FSlateBrush ContentAreaBrush; // 0x6F0(0xB0)
		FSlateBrush TabWellBrush; // 0x7A0(0xB0)
		FTextBlockStyle TabTextStyle; // 0x850(0x2E0)
		FMargin TabPadding; // 0xB30(0x10)
		FDeprecateSlateVector2D IconSize; // 0xB40(0x8)
		float OverlapWidth; // 0xB48(0x4)
		FSlateColor FlashColor; // 0xB4C(0x14)
		FSlateColor NormalForegroundColor; // 0xB60(0x14)
		FSlateColor HoveredForegroundColor; // 0xB74(0x14)
		FSlateColor ActiveForegroundColor; // 0xB88(0x14)
		FSlateColor ForegroundForegroundColor; // 0xB9C(0x14)
		float IconBorderPadding; // 0xBB0(0x4)
		unsigned char UnknownData03_7[0xC]; // 0xBB4(0xC) UNKNOWN PROPERTY
	};


	// Struct SlateCore.ScrollBoxStyle
	// Inherited from FSlateWidgetStyle
	// Size: 0x2E8 (0x2F0 - 0x8)
	struct FScrollBoxStyle : public FSlateWidgetStyle	
	{
	public:
		float BarThickness; // 0x8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FSlateBrush TopShadowBrush; // 0x10(0xB0)
		FSlateBrush BottomShadowBrush; // 0xC0(0xB0)
		FSlateBrush LeftShadowBrush; // 0x170(0xB0)
		FSlateBrush RightShadowBrush; // 0x220(0xB0)
		FMargin HorizontalScrolledContentPadding; // 0x2D0(0x10)
		FMargin VerticalScrolledContentPadding; // 0x2E0(0x10)
	};


	// Struct SlateCore.ScrollBorderStyle
	// Inherited from FSlateWidgetStyle
	// Size: 0x168 (0x170 - 0x8)
	struct FScrollBorderStyle : public FSlateWidgetStyle	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FSlateBrush TopShadowBrush; // 0x10(0xB0)
		FSlateBrush BottomShadowBrush; // 0xC0(0xB0)
	};


	// Struct SlateCore.WindowStyle
	// Inherited from FSlateWidgetStyle
	// Size: 0x15F8 (0x1600 - 0x8)
	struct FWindowStyle : public FSlateWidgetStyle	
	{
	public:
		unsigned char UnknownData05_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FButtonStyle MinimizeButtonStyle; // 0x10(0x370)
		FButtonStyle MaximizeButtonStyle; // 0x380(0x370)
		FButtonStyle RestoreButtonStyle; // 0x6F0(0x370)
		FButtonStyle CloseButtonStyle; // 0xA60(0x370)
		FTextBlockStyle TitleTextStyle; // 0xDD0(0x2E0)
		FSlateBrush ActiveTitleBrush; // 0x10B0(0xB0)
		FSlateBrush InactiveTitleBrush; // 0x1160(0xB0)
		FSlateBrush FlashTitleBrush; // 0x1210(0xB0)
		FSlateColor BackgroundColor; // 0x12C0(0x14)
		unsigned char UnknownData06_6[0xC]; // 0x12D4(0xC) UNKNOWN PROPERTY
		FSlateBrush OutlineBrush; // 0x12E0(0xB0)
		FSlateColor OutlineColor; // 0x1390(0x14)
		unsigned char UnknownData07_6[0xC]; // 0x13A4(0xC) UNKNOWN PROPERTY
		FSlateBrush BorderBrush; // 0x13B0(0xB0)
		FSlateColor BorderColor; // 0x1460(0x14)
		unsigned char UnknownData08_6[0xC]; // 0x1474(0xC) UNKNOWN PROPERTY
		FSlateBrush BackgroundBrush; // 0x1480(0xB0)
		FSlateBrush ChildBackgroundBrush; // 0x1530(0xB0)
		int32_t WindowCornerRadius; // 0x15E0(0x4)
		FMargin BorderPadding; // 0x15E4(0x10)
		unsigned char UnknownData09_7[0xC]; // 0x15F4(0xC) UNKNOWN PROPERTY
	};


	// Struct SlateCore.StyleColorList
	// Size: 0x7A0 (0x7A0 - 0x0)
	struct FStyleColorList	
	{
	public:
		FLinearColor StyleColors; // 0x0(0x3D0)
		unsigned char UnknownData01_7[0x3D0]; // 0x3D0(0x3D0) UNKNOWN PROPERTY
	};


	// Struct SlateCore.StyleTheme
	// Size: 0x40 (0x40 - 0x0)
	struct FStyleTheme	
	{
	public:
		unsigned char UnknownData01_2[0x40]; // 0x0(0x40) UNKNOWN PROPERTY
	};


	// Struct SlateCore.ToolBarStyle
	// Inherited from FSlateWidgetStyle
	// Size: 0x3648 (0x3650 - 0x8)
	struct FToolBarStyle : public FSlateWidgetStyle	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FSlateBrush BackgroundBrush; // 0x10(0xB0)
		FSlateBrush ExpandBrush; // 0xC0(0xB0)
		FSlateBrush SeparatorBrush; // 0x170(0xB0)
		FTextBlockStyle LabelStyle; // 0x220(0x2E0)
		FEditableTextBoxStyle EditableTextStyle; // 0x500(0xC80)
		FCheckBoxStyle ToggleButton; // 0x1180(0x950)
		FComboButtonStyle ComboButtonStyle; // 0x1AD0(0x540)
		FButtonStyle SettingsButtonStyle; // 0x2010(0x370)
		FComboButtonStyle SettingsComboButton; // 0x2380(0x540)
		FCheckBoxStyle SettingsToggleButton; // 0x28C0(0x950)
		FButtonStyle ButtonStyle; // 0x3210(0x370)
		FMargin LabelPadding; // 0x3580(0x10)
		float UniformBlockWidth; // 0x3590(0x4)
		float UniformBlockHeight; // 0x3594(0x4)
		int32_t NumColumns; // 0x3598(0x4)
		FMargin IconPadding; // 0x359C(0x10)
		FMargin SeparatorPadding; // 0x35AC(0x10)
		FMargin ComboButtonPadding; // 0x35BC(0x10)
		FMargin ButtonPadding; // 0x35CC(0x10)
		FMargin CheckBoxPadding; // 0x35DC(0x10)
		FMargin BlockPadding; // 0x35EC(0x10)
		FMargin IndentedBlockPadding; // 0x35FC(0x10)
		FMargin BackgroundPadding; // 0x360C(0x10)
		FDeprecateSlateVector2D IconSize; // 0x361C(0x8)
		bool bShowLabels; // 0x3624(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x3625(0x3) UNKNOWN PROPERTY
		float ButtonContentMaxWidth; // 0x3628(0x4)
		float ButtonContentFillWidth; // 0x362C(0x4)
		FMargin IconPaddingWithVisibleLabel; // 0x3630(0x10)
		FMargin IconPaddingWithCollapsedLabel; // 0x3640(0x10)
	};

}
