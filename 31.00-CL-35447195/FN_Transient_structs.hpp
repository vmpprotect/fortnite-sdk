#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: Transient
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct /Engine/Transient.ChaosDestructionEvent_SWC
	// Size: 0x44 (0x44 - 0x0)
	struct FChaosDestructionEvent_SWC	
	{
	public:
		FVector3f Position; // 0x0(0xC)
		FVector3f Normal; // 0xC(0xC)
		FVector3f Velocity; // 0x18(0xC)
		FVector3f AngularVelocity; // 0x24(0xC)
		float ExtentMin; // 0x30(0x4)
		float ExtentMax; // 0x34(0x4)
		int32_t ParticleID; // 0x38(0x4)
		float Time; // 0x3C(0x4)
		int32_t Type; // 0x40(0x4)
	};


	// Struct /Engine/Transient.PropertyBag_2aee3ab917f3928e
	// Size: 0x4 (0x4 - 0x0)
	struct FPropertyBag_2aee3ab917f3928e	
	{
	public:
		float LineHeightPercentage; // 0x0(0x4)
	};


	// Struct /Engine/Transient.PropertyBag_afb9ab45775fc7a2
	// Size: 0x10 (0x10 - 0x0)
	struct FPropertyBag_afb9ab45775fc7a2	
	{
	public:
		FMargin Margin; // 0x0(0x10)
	};


	// Struct /Engine/Transient.PropertyBag_493765e2711d2faf
	// Size: 0x8 (0x8 - 0x0)
	struct FPropertyBag_493765e2711d2faf	
	{
	public:
		float LineHeightPercentage; // 0x0(0x4)
		float Font_Size; // 0x4(0x4)
	};


	// Struct /Engine/Transient.PropertyBag_ac08b7f0792fa6bd
	// Size: 0x14 (0x14 - 0x0)
	struct FPropertyBag_ac08b7f0792fa6bd	
	{
	public:
		FMargin Margin; // 0x0(0x10)
		float LineHeightPercentage; // 0x10(0x4)
	};


	// Struct /Engine/Transient.PropertyBag_2c5726c2d845642e
	// Size: 0x10 (0x10 - 0x0)
	struct FPropertyBag_2c5726c2d845642e	
	{
	public:
		FMargin Margin; // 0x0(0x10)
	};


	// Struct /Engine/Transient.PropertyBag_62e8f2372878de64
	// Size: 0x18C (0x18C - 0x0)
	struct FPropertyBag_62e8f2372878de64	
	{
	public:
		float WidgetStyle_BarThickness; // 0x0(0x4)
		ESlateBrushDrawType WidgetStyle_TopShadowBrush_DrawAs; // 0x4(0x1)
		ESlateBrushDrawType WidgetStyle_BottomShadowBrush_DrawAs; // 0x5(0x1)
		ESlateBrushDrawType WidgetStyle_LeftShadowBrush_DrawAs; // 0x6(0x1)
		ESlateBrushDrawType WidgetStyle_RightShadowBrush_DrawAs; // 0x7(0x1)
		UObject WidgetBarStyle_VerticalBackgroundImage_ResourceObject; // 0x8(0x8)
		FDeprecateSlateVector2D WidgetBarStyle_VerticalBackgroundImage_ImageSize; // 0x10(0x8)
		ESlateBrushDrawType WidgetBarStyle_VerticalBackgroundImage_DrawAs; // 0x18(0x1)
		unsigned char UnknownData08_6[0x3]; // 0x19(0x3) UNKNOWN PROPERTY
		FMargin WidgetBarStyle_VerticalBackgroundImage_Margin; // 0x1C(0x10)
		ESlateBrushDrawType WidgetBarStyle_VerticalTopSlotImage_DrawAs; // 0x2C(0x1)
		ESlateBrushDrawType WidgetBarStyle_HorizontalTopSlotImage_DrawAs; // 0x2D(0x1)
		ESlateBrushDrawType WidgetBarStyle_VerticalBottomSlotImage_DrawAs; // 0x2E(0x1)
		ESlateBrushDrawType WidgetBarStyle_HorizontalBottomSlotImage_DrawAs; // 0x2F(0x1)
		UObject WidgetBarStyle_NormalThumbImage_ResourceObject; // 0x30(0x8)
		FDeprecateSlateVector2D WidgetBarStyle_NormalThumbImage_ImageSize; // 0x38(0x8)
		FSlateColor WidgetBarStyle_NormalThumbImage_TintColor; // 0x40(0x14)
		ESlateBrushDrawType WidgetBarStyle_NormalThumbImage_DrawAs; // 0x54(0x1)
		unsigned char UnknownData09_6[0xB]; // 0x55(0xB) UNKNOWN PROPERTY
		FVector4 WidgetBarStyle_NormalThumbImage_OutlineSettings_CornerRadii; // 0x60(0x20)
		float WidgetBarStyle_NormalThumbImage_OutlineSettings_Width; // 0x80(0x4)
		FLinearColor WidgetBarStyle_NormalThumbImage_OutlineSettings_Color_SpecifiedColor; // 0x84(0x10)
		ESlateBrushRoundingType WidgetBarStyle_NormalThumbImage_OutlineSettings_RoundingType; // 0x94(0x1)
		unsigned char UnknownData10_6[0x3]; // 0x95(0x3) UNKNOWN PROPERTY
		UObject WidgetBarStyle_HoveredThumbImage_ResourceObject; // 0x98(0x8)
		FDeprecateSlateVector2D WidgetBarStyle_HoveredThumbImage_ImageSize; // 0xA0(0x8)
		FSlateColor WidgetBarStyle_HoveredThumbImage_TintColor; // 0xA8(0x14)
		ESlateBrushDrawType WidgetBarStyle_HoveredThumbImage_DrawAs; // 0xBC(0x1)
		unsigned char UnknownData11_6[0x3]; // 0xBD(0x3) UNKNOWN PROPERTY
		FVector4 WidgetBarStyle_HoveredThumbImage_OutlineSettings_CornerRadii; // 0xC0(0x20)
		FLinearColor WidgetBarStyle_HoveredThumbImage_OutlineSettings_Color_SpecifiedColor; // 0xE0(0x10)
		float WidgetBarStyle_HoveredThumbImage_OutlineSettings_Width; // 0xF0(0x4)
		ESlateBrushRoundingType WidgetBarStyle_HoveredThumbImage_OutlineSettings_RoundingType; // 0xF4(0x1)
		unsigned char UnknownData12_6[0x3]; // 0xF5(0x3) UNKNOWN PROPERTY
		UObject WidgetBarStyle_DraggedThumbImage_ResourceObject; // 0xF8(0x8)
		FDeprecateSlateVector2D WidgetBarStyle_DraggedThumbImage_ImageSize; // 0x100(0x8)
		FLinearColor WidgetBarStyle_DraggedThumbImage_TintColor_SpecifiedColor; // 0x108(0x10)
		ESlateBrushDrawType WidgetBarStyle_DraggedThumbImage_DrawAs; // 0x118(0x1)
		unsigned char UnknownData13_6[0x7]; // 0x119(0x7) UNKNOWN PROPERTY
		FVector4 WidgetBarStyle_DraggedThumbImage_OutlineSettings_CornerRadii; // 0x120(0x20)
		FLinearColor WidgetBarStyle_DraggedThumbImage_OutlineSettings_Color_SpecifiedColor; // 0x140(0x10)
		float WidgetBarStyle_DraggedThumbImage_OutlineSettings_Width; // 0x150(0x4)
		ESlateBrushRoundingType WidgetBarStyle_DraggedThumbImage_OutlineSettings_RoundingType; // 0x154(0x1)
		unsigned char UnknownData14_6[0x3]; // 0x155(0x3) UNKNOWN PROPERTY
		FVector2D ScrollbarThickness; // 0x158(0x10)
		UObject WidgetBarStyle_HorizontalBackgroundImage_ResourceObject; // 0x168(0x8)
		FDeprecateSlateVector2D WidgetBarStyle_HorizontalBackgroundImage_ImageSize; // 0x170(0x8)
		ESlateBrushDrawType WidgetBarStyle_HorizontalBackgroundImage_DrawAs; // 0x178(0x1)
		unsigned char UnknownData15_6[0x3]; // 0x179(0x3) UNKNOWN PROPERTY
		FMargin WidgetBarStyle_HorizontalBackgroundImage_Margin; // 0x17C(0x10)
	};


	// Struct /Engine/Transient.PropertyBag_cf3a08786287ec62
	// Size: 0x15C (0x15C - 0x0)
	struct FPropertyBag_cf3a08786287ec62	
	{
	public:
		ESlateBrushDrawType ScrollBarStyle_HorizontalBackgroundImage_DrawAs; // 0x0(0x1)
		unsigned char UnknownData08_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		UObject ScrollBarStyle_VerticalBackgroundImage_ResourceObject; // 0x8(0x8)
		FDeprecateSlateVector2D ScrollBarStyle_VerticalBackgroundImage_ImageSize; // 0x10(0x8)
		ESlateBrushDrawType ScrollBarStyle_VerticalBackgroundImage_DrawAs; // 0x18(0x1)
		unsigned char UnknownData09_6[0x3]; // 0x19(0x3) UNKNOWN PROPERTY
		FMargin ScrollBarStyle_VerticalBackgroundImage_Margin; // 0x1C(0x10)
		ESlateBrushDrawType ScrollBarStyle_VerticalTopSlotImage_DrawAs; // 0x2C(0x1)
		ESlateBrushDrawType ScrollBarStyle_HorizontalTopSlotImage_DrawAs; // 0x2D(0x1)
		ESlateBrushDrawType ScrollBarStyle_VerticalBottomSlotImage_DrawAs; // 0x2E(0x1)
		ESlateBrushDrawType ScrollBarStyle_HorizontalBottomSlotImage_DrawAs; // 0x2F(0x1)
		UObject ScrollBarStyle_NormalThumbImage_ResourceObject; // 0x30(0x8)
		FDeprecateSlateVector2D ScrollBarStyle_NormalThumbImage_ImageSize; // 0x38(0x8)
		FLinearColor ScrollBarStyle_NormalThumbImage_TintColor_SpecifiedColor; // 0x40(0x10)
		ESlateBrushDrawType ScrollBarStyle_NormalThumbImage_DrawAs; // 0x50(0x1)
		unsigned char UnknownData10_6[0xF]; // 0x51(0xF) UNKNOWN PROPERTY
		FVector4 ScrollBarStyle_NormalThumbImage_OutlineSettings_CornerRadii; // 0x60(0x20)
		FLinearColor ScrollBarStyle_NormalThumbImage_OutlineSettings_Color_SpecifiedColor; // 0x80(0x10)
		float ScrollBarStyle_NormalThumbImage_OutlineSettings_Width; // 0x90(0x4)
		ESlateBrushRoundingType ScrollBarStyle_NormalThumbImage_OutlineSettings_RoundingType; // 0x94(0x1)
		unsigned char UnknownData11_6[0x3]; // 0x95(0x3) UNKNOWN PROPERTY
		UObject ScrollBarStyle_HoveredThumbImage_ResourceObject; // 0x98(0x8)
		FDeprecateSlateVector2D ScrollBarStyle_HoveredThumbImage_ImageSize; // 0xA0(0x8)
		FLinearColor ScrollBarStyle_HoveredThumbImage_TintColor_SpecifiedColor; // 0xA8(0x10)
		ESlateBrushDrawType ScrollBarStyle_HoveredThumbImage_DrawAs; // 0xB8(0x1)
		unsigned char UnknownData12_6[0x7]; // 0xB9(0x7) UNKNOWN PROPERTY
		FVector4 ScrollBarStyle_HoveredThumbImage_OutlineSettings_CornerRadii; // 0xC0(0x20)
		FLinearColor ScrollBarStyle_HoveredThumbImage_OutlineSettings_Color_SpecifiedColor; // 0xE0(0x10)
		float ScrollBarStyle_HoveredThumbImage_OutlineSettings_Width; // 0xF0(0x4)
		ESlateBrushRoundingType ScrollBarStyle_HoveredThumbImage_OutlineSettings_RoundingType; // 0xF4(0x1)
		unsigned char UnknownData13_6[0x3]; // 0xF5(0x3) UNKNOWN PROPERTY
		UObject ScrollBarStyle_DraggedThumbImage_ResourceObject; // 0xF8(0x8)
		FDeprecateSlateVector2D ScrollBarStyle_DraggedThumbImage_ImageSize; // 0x100(0x8)
		FLinearColor ScrollBarStyle_DraggedThumbImage_TintColor_SpecifiedColor; // 0x108(0x10)
		ESlateBrushDrawType ScrollBarStyle_DraggedThumbImage_DrawAs; // 0x118(0x1)
		unsigned char UnknownData14_6[0x7]; // 0x119(0x7) UNKNOWN PROPERTY
		FVector4 ScrollBarStyle_DraggedThumbImage_OutlineSettings_CornerRadii; // 0x120(0x20)
		FLinearColor ScrollBarStyle_DraggedThumbImage_OutlineSettings_Color_SpecifiedColor; // 0x140(0x10)
		float ScrollBarStyle_DraggedThumbImage_OutlineSettings_Width; // 0x150(0x4)
		ESlateBrushRoundingType ScrollBarStyle_DraggedThumbImage_OutlineSettings_RoundingType; // 0x154(0x1)
		unsigned char UnknownData15_6[0x3]; // 0x155(0x3) UNKNOWN PROPERTY
		float ScrollBarStyle_Thickness; // 0x158(0x4)
	};


	// Struct /Engine/Transient.PropertyBag_98fb2eed30f0a2ee
	// Size: 0x4 (0x4 - 0x0)
	struct FPropertyBag_98fb2eed30f0a2ee	
	{
	public:
		float Font_Size; // 0x0(0x4)
	};


	// Struct /Engine/Transient.PropertyBag_e4ed644647b1812d
	// Size: 0x4 (0x4 - 0x0)
	struct FPropertyBag_e4ed644647b1812d	
	{
	public:
		FName Font_TypefaceFontName; // 0x0(0x4)
	};


	// Struct /Engine/Transient.PropertyBag_3fe9c4ad85562e88
	// Size: 0x1D (0x1D - 0x0)
	struct FPropertyBag_3fe9c4ad85562e88	
	{
	public:
		UObject Font_FontObject; // 0x0(0x8)
		FName Font_TypefaceFontName; // 0x8(0x4)
		int32_t Font_LetterSpacing; // 0xC(0x4)
		ETextTransformPolicy TextTransformPolicy; // 0x10(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x11(0x3) UNKNOWN PROPERTY
		float LineHeightPercentage; // 0x14(0x4)
		float Font_SkewAmount; // 0x18(0x4)
		bool ApplyLineHeightToBottomLine; // 0x1C(0x1)
	};


	// Struct /Engine/Transient.PropertyBag_b7352edbb68d1f79
	// Size: 0x8 (0x8 - 0x0)
	struct FPropertyBag_b7352edbb68d1f79	
	{
	public:
		float Font_Size; // 0x0(0x4)
		int32_t Font_LetterSpacing; // 0x4(0x4)
	};


	// Struct /Engine/Transient.PropertyBag_21934314f36fa737
	// Size: 0xC (0xC - 0x0)
	struct FPropertyBag_21934314f36fa737	
	{
	public:
		FName Font_TypefaceFontName; // 0x0(0x4)
		float Font_Size; // 0x4(0x4)
		int32_t Font_LetterSpacing; // 0x8(0x4)
	};


	// Struct /Engine/Transient.PropertyBag_9e6cbccdc2275fda
	// Size: 0x8 (0x8 - 0x0)
	struct FPropertyBag_9e6cbccdc2275fda	
	{
	public:
		FName Font_TypefaceFontName; // 0x0(0x4)
		int32_t Font_LetterSpacing; // 0x4(0x4)
	};


	// Struct /Engine/Transient.PropertyBag_53f2cb7aca4ff44e
	// Size: 0x9 (0x9 - 0x0)
	struct FPropertyBag_53f2cb7aca4ff44e	
	{
	public:
		FName Font_TypefaceFontName; // 0x0(0x4)
		int32_t Font_LetterSpacing; // 0x4(0x4)
		ETextTransformPolicy TextTransformPolicy; // 0x8(0x1)
	};


	// Struct /Engine/Transient.PropertyBag_cb8be57f2a80b8bc
	// Size: 0x4 (0x4 - 0x0)
	struct FPropertyBag_cb8be57f2a80b8bc	
	{
	public:
		float Font_Size; // 0x0(0x4)
	};


	// Struct /Engine/Transient.PropertyBag_223193d7ac231831
	// Size: 0x4 (0x4 - 0x0)
	struct FPropertyBag_223193d7ac231831	
	{
	public:
		float Font_Size; // 0x0(0x4)
	};


	// Struct /Engine/Transient.PropertyBag_c2befddf17888a1
	// Size: 0x4 (0x4 - 0x0)
	struct FPropertyBag_c2befddf17888a1	
	{
	public:
		float Font_Size; // 0x0(0x4)
	};


	// Struct /Engine/Transient.PropertyBag_3a7b0d3ba4ddd7f4
	// Size: 0x4 (0x4 - 0x0)
	struct FPropertyBag_3a7b0d3ba4ddd7f4	
	{
	public:
		FName Font_TypefaceFontName; // 0x0(0x4)
	};


	// Struct /Engine/Transient.PropertyBag_a0f911080a195cda
	// Size: 0x8 (0x8 - 0x0)
	struct FPropertyBag_a0f911080a195cda	
	{
	public:
		UObject Font_FontMaterial; // 0x0(0x8)
	};


	// Struct /Engine/Transient.PropertyBag_c49b369ad8fd9219
	// Size: 0x64 (0x64 - 0x0)
	struct FPropertyBag_c49b369ad8fd9219	
	{
	public:
		FSlateColor Color_Idle; // 0x0(0x14)
		FSlateColor Color_Hovered; // 0x14(0x14)
		FSlateColor Color_Focused; // 0x28(0x14)
		FSlateColor Color_Pressed; // 0x3C(0x14)
		FSlateColor Color_Disabled; // 0x50(0x14)
	};


	// Struct /Engine/Transient.PropertyBag_b061e8e0342dccee
	// Size: 0x58 (0x58 - 0x0)
	struct FPropertyBag_b061e8e0342dccee	
	{
	public:
		FSlateFontInfo Font; // 0x0(0x58)
	};


	// Struct /Engine/Transient.PropertyBag_a25ccf9b06557ed6
	// Size: 0x8 (0x8 - 0x0)
	struct FPropertyBag_a25ccf9b06557ed6	
	{
	public:
		USoundBase PressedSound; // 0x0(0x8)
	};


	// Struct /Engine/Transient.PropertyBag_a99647324364ee08
	// Size: 0x28 (0x28 - 0x0)
	struct FPropertyBag_a99647324364ee08	
	{
	public:
		USoundBase HoveredSound; // 0x0(0x8)
		USoundBase HoldPressedSound; // 0x8(0x8)
		USoundBase HoldSound; // 0x10(0x8)
		USoundBase HoldReleasedSound; // 0x18(0x8)
		USoundBase HoldCompletedSound; // 0x20(0x8)
	};


	// Struct /Engine/Transient.PropertyBag_4e5d4db28cbca73f
	// Size: 0x30 (0x30 - 0x0)
	struct FPropertyBag_4e5d4db28cbca73f	
	{
	public:
		FSlateSound PressedSlateSoundOverride; // 0x0(0x18)
		FSlateSound HoveredSlateSoundOverride; // 0x18(0x18)
	};


	// Struct /Engine/Transient.PropertyBag_b82151e6bce735a8
	// Size: 0x20 (0x20 - 0x0)
	struct FPropertyBag_b82151e6bce735a8	
	{
	public:
		USoundBase HoldPressedSound; // 0x0(0x8)
		USoundBase HoldSound; // 0x8(0x8)
		USoundBase HoldReleasedSound; // 0x10(0x8)
		USoundBase HoldCompletedSound; // 0x18(0x8)
	};


	// Struct /Engine/Transient.PropertyBag_5000e449f5e4fa10
	// Size: 0x18 (0x18 - 0x0)
	struct FPropertyBag_5000e449f5e4fa10	
	{
	public:
		USoundBase ContextButtonHoverSound; // 0x0(0x8)
		USoundBase ContextButtonClickedSound; // 0x8(0x8)
		USoundBase BlockOutlineHoverSound; // 0x10(0x8)
	};


	// Struct /Engine/Transient.PropertyBag_25c169ee85849242
	// Size: 0x48 (0x48 - 0x0)
	struct FPropertyBag_25c169ee85849242	
	{
	public:
		USoundBase PressedSound; // 0x0(0x8)
		USoundBase HoveredSound; // 0x8(0x8)
		FSlateSound PressedSlateSoundOverride; // 0x10(0x18)
		FSlateSound HoveredSlateSoundOverride; // 0x28(0x18)
		USoundBase ActivityBrowserTileHoverSound; // 0x40(0x8)
	};


	// Struct /Engine/Transient.PropertyBag_1b19a47fa7375c06
	// Size: 0x10 (0x10 - 0x0)
	struct FPropertyBag_1b19a47fa7375c06	
	{
	public:
		USoundBase PressedSound; // 0x0(0x8)
		USoundBase HoveredSound; // 0x8(0x8)
	};


	// Struct /Engine/Transient.PropertyBag_260b8f6aff566012
	// Size: 0x30 (0x30 - 0x0)
	struct FPropertyBag_260b8f6aff566012	
	{
	public:
		USoundBase HoveredSound; // 0x0(0x8)
		USoundBase PressedSound; // 0x8(0x8)
		USoundBase HoldPressedSound; // 0x10(0x8)
		USoundBase HoldSound; // 0x18(0x8)
		USoundBase HoldReleasedSound; // 0x20(0x8)
		USoundBase HoldCompletedSound; // 0x28(0x8)
	};


	// Struct /Engine/Transient.PropertyBag_ae89f61cddcec6b2
	// Size: 0x8 (0x8 - 0x0)
	struct FPropertyBag_ae89f61cddcec6b2	
	{
	public:
		USoundBase ListEntryHoveredSound; // 0x0(0x8)
	};


	// Struct /Engine/Transient.PropertyBag_f3157749950fdaf4
	// Size: 0x30 (0x30 - 0x0)
	struct FPropertyBag_f3157749950fdaf4	
	{
	public:
		FSlateSound PressedSlateSoundOverride; // 0x0(0x18)
		FSlateSound HoveredSlateSoundOverride; // 0x18(0x18)
	};


	// Struct /Engine/Transient.PropertyBag_fff71679d5f5aef0
	// Size: 0x8 (0x8 - 0x0)
	struct FPropertyBag_fff71679d5f5aef0	
	{
	public:
		USoundBase HoverSound; // 0x0(0x8)
	};


	// Struct /Engine/Transient.PropertyBag_85bb6d59b9ed73af
	// Size: 0x20 (0x20 - 0x0)
	struct FPropertyBag_85bb6d59b9ed73af	
	{
	public:
		USoundBase Press_Sound; // 0x0(0x8)
		USoundBase HoldSound; // 0x8(0x8)
		USoundBase ReleaseSound; // 0x10(0x8)
		USoundBase CompleteSound; // 0x18(0x8)
	};


	// Struct /Engine/Transient.PropertyBag_bdd4ecde9c372bc0
	// Size: 0x8 (0x8 - 0x0)
	struct FPropertyBag_bdd4ecde9c372bc0	
	{
	public:
		USoundBase MatchMakingSucceededSound; // 0x0(0x8)
	};


	// Struct /Engine/Transient.PropertyBag_c25acbe60f3a8d69
	// Size: 0x10 (0x10 - 0x0)
	struct FPropertyBag_c25acbe60f3a8d69	
	{
	public:
		float SecondsPriorToTransSound; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		USoundBase TransitionSound; // 0x8(0x8)
	};


	// Struct /Engine/Transient.PropertyBag_aae02892bdf879a6
	// Size: 0x10 (0x10 - 0x0)
	struct FPropertyBag_aae02892bdf879a6	
	{
	public:
		USoundBase MTXOfferTileIntroWhoosh; // 0x0(0x8)
		USoundBase ShopRowWhooshIn; // 0x8(0x8)
	};


	// Struct /Engine/Transient.PropertyBag_83ba80d0c1cbaeed
	// Size: 0x8 (0x8 - 0x0)
	struct FPropertyBag_83ba80d0c1cbaeed	
	{
	public:
		USoundBase LockerCategoryWhooshSound; // 0x0(0x8)
	};


	// Struct /Engine/Transient.PropertyBag_8b6d662f75f5c761
	// Size: 0x20 (0x20 - 0x0)
	struct FPropertyBag_8b6d662f75f5c761	
	{
	public:
		USoundBase BannerAppearSound; // 0x0(0x8)
		USoundBase BannerAwaySound; // 0x8(0x8)
		USoundBase IntroSound; // 0x10(0x8)
		USoundBase OutroSound; // 0x18(0x8)
	};


	// Struct /Engine/Transient.PropertyBag_189813c58619cc33
	// Size: 0x18 (0x18 - 0x0)
	struct FPropertyBag_189813c58619cc33	
	{
	public:
		USoundBase ShopIntroWhooshSound; // 0x0(0x8)
		USoundBase ContentWhoosh_RetractSound; // 0x8(0x8)
		USoundBase ShopRowWhooshIn; // 0x10(0x8)
	};


	// Struct /Engine/Transient.PropertyBag_9129fdac17e7c87b
	// Size: 0x10 (0x10 - 0x0)
	struct FPropertyBag_9129fdac17e7c87b	
	{
	public:
		USoundBase ErrorWindowAppearSound; // 0x0(0x8)
		USoundBase ErrorWindowAwaySound; // 0x8(0x8)
	};


	// Struct /Engine/Transient.PropertyBag_21ad9e8280085c90
	// Size: 0x21C (0x21C - 0x0)
	struct FPropertyBag_21ad9e8280085c90	
	{
	public:
		FSlateFontInfo LargePrimaryFont; // 0x0(0x58)
		FSlateFontInfo LargeSecondaryFont; // 0x58(0x58)
		FSlateFontInfo MediumPrimaryFont; // 0xB0(0x58)
		FSlateFontInfo MeduimSecondaryFont; // 0x108(0x58)
		FSlateFontInfo SmallPrimaryFont; // 0x160(0x58)
		FSlateFontInfo SmallSecondaryFont; // 0x1B8(0x58)
		int32_t LargeHeight; // 0x210(0x4)
		int32_t MediumHeight; // 0x214(0x4)
		int32_t SmallHeight; // 0x218(0x4)
	};


	// Struct /Engine/Transient.PropertyBag_7142367c9738d0f7
	// Size: 0x4 (0x4 - 0x0)
	struct FPropertyBag_7142367c9738d0f7	
	{
	public:
		float LargePrimaryFont_Size; // 0x0(0x4)
	};


	// Struct /Engine/Transient.PropertyBag_9c211fd63137c13e
	// Size: 0x18 (0x18 - 0x0)
	struct FPropertyBag_9c211fd63137c13e	
	{
	public:
		UObject Font_FontObject; // 0x0(0x8)
		FName Font_TypefaceFontName; // 0x8(0x4)
		float Font_Size; // 0xC(0x4)
		int32_t Font_LetterSpacing; // 0x10(0x4)
		float Font_SkewAmount; // 0x14(0x4)
	};


	// Struct /Engine/Transient.PropertyBag_a8b5b00df62297d
	// Size: 0x8 (0x8 - 0x0)
	struct FPropertyBag_a8b5b00df62297d	
	{
	public:
		FName Font_TypefaceFontName; // 0x0(0x4)
		FName TabFont_TypefaceFontName; // 0x4(0x4)
	};


	// Struct /Engine/Transient.PropertyBag_d0b3c48f03fa2189
	// Size: 0x18 (0x18 - 0x0)
	struct FPropertyBag_d0b3c48f03fa2189	
	{
	public:
		UObject Font_FontObject; // 0x0(0x8)
		FName Font_TypefaceFontName; // 0x8(0x4)
		float Font_Size; // 0xC(0x4)
		int32_t Font_LetterSpacing; // 0x10(0x4)
		float Font_SkewAmount; // 0x14(0x4)
	};


	// Struct /Engine/Transient.PropertyBag_24d839f9296f7a12
	// Size: 0x58 (0x58 - 0x0)
	struct FPropertyBag_24d839f9296f7a12	
	{
	public:
		FSlateFontInfo GamepadPromptFont; // 0x0(0x58)
	};


	// Struct /Engine/Transient.PropertyBag_41a105f78ec9db80
	// Size: 0x30 (0x30 - 0x0)
	struct FPropertyBag_41a105f78ec9db80	
	{
	public:
		UObject Font_FontObject; // 0x0(0x8)
		FName Font_TypefaceFontName; // 0x8(0x4)
		float Font_Size; // 0xC(0x4)
		int32_t Font_LetterSpacing; // 0x10(0x4)
		float Font_SkewAmount; // 0x14(0x4)
		UObject TabFont_FontObject; // 0x18(0x8)
		FName TabFont_TypefaceFontName; // 0x20(0x4)
		float TabFont_Size; // 0x24(0x4)
		int32_t TabFont_LetterSpacing; // 0x28(0x4)
		float TabFont_SkewAmount; // 0x2C(0x4)
	};


	// Struct /Engine/Transient.PropertyBag_19ecfe9431a1f5b5
	// Size: 0x40 (0x40 - 0x0)
	struct FPropertyBag_19ecfe9431a1f5b5	
	{
	public:
		UObject LargePrimaryFont_FontMaterial; // 0x0(0x8)
		UObject LargeSecondaryFont_FontMaterial; // 0x8(0x8)
		UObject MediumPrimaryFont_FontMaterial; // 0x10(0x8)
		UObject MeduimSecondaryFont_FontMaterial; // 0x18(0x8)
		UObject SmallPrimaryFont_FontMaterial; // 0x20(0x8)
		UObject SmallSecondaryFont_FontMaterial; // 0x28(0x8)
		UMaterialInstance BackgroundMaterial; // 0x30(0x8)
		UMaterialInstance BorderMaterial; // 0x38(0x8)
	};


	// Struct /Engine/Transient.PropertyBag_51ae3bc12c559c8d
	// Size: 0x40 (0x40 - 0x0)
	struct FPropertyBag_51ae3bc12c559c8d	
	{
	public:
		UMaterialInstance RegularFontMaterial; // 0x0(0x8)
		UMaterialInstance RegularSecondaryFontMaterial; // 0x8(0x8)
		UMaterialInstance RegularBackgroundMaterial; // 0x10(0x8)
		UMaterialInstance RegularOutlineMaterial; // 0x18(0x8)
		UMaterialInstance QuietFontMaterial; // 0x20(0x8)
		UMaterialInstance QuietSecondaryFontMaterial; // 0x28(0x8)
		UMaterialInstance QuietBackgroundMaterial; // 0x30(0x8)
		UMaterialInstance QuietOutlineMaterial; // 0x38(0x8)
	};


	// Struct /Engine/Transient.PropertyBag_ae99f65d2c83bed6
	// Size: 0x78 (0x78 - 0x0)
	struct FPropertyBag_ae99f65d2c83bed6	
	{
	public:
		UObject SmallPrimaryFont_FontMaterial; // 0x0(0x8)
		UObject SmallSecondaryFont_FontMaterial; // 0x8(0x8)
		UMaterialInstance BackgroundMaterial; // 0x10(0x8)
		UMaterialInstance BorderMaterial; // 0x18(0x8)
		FSlateFontInfo GamepadPromptFont; // 0x20(0x58)
	};


	// Struct /Engine/Transient.PropertyBag_6a3a985c02cb486a
	// Size: 0x1980 (0x1980 - 0x0)
	struct FPropertyBag_6a3a985c02cb486a	
	{
	public:
		FQuat RigVMModel___MathQuaternionFromEuler_Result; // 0x0(0x20)
		FVector RigVMModel___MathVectorAdd_2_4_2_Result; // 0x20(0x18)
		FVector RigVMModel___MathQuaternionToEuler_4_2_4_Result; // 0x38(0x18)
		FTransform RigVMModel___RigUnit_GetInitialBoneTransform_2_4_Transform; // 0x50(0x60)
		TArray RigVMModel___RigUnit_GetInitialBoneTransform_2_4_CachedBone; // 0xB0(0x10)
		FQuat RigVMModel___MathQuaternionToEuler_4_2_4_Value; // 0xC0(0x20)
		TArray RigVMModel___ModifyBoneTransforms_BoneToModify__IO; // 0xE0(0x10)
		float RigVMModel___MathFloatRemap_Result; // 0xF0(0x4)
		unsigned char UnknownData24_6[0x4]; // 0xF4(0x4) UNKNOWN PROPERTY
		FVector RigVMModel___MathQuaternionToEuler_Result; // 0xF8(0x18)
		FTransform RigVMModel___RigUnit_GetRelativeBoneTransform_Transform; // 0x110(0x60)
		TArray RigVMModel___RigUnit_GetRelativeBoneTransform_CachedBone; // 0x170(0x10)
		TArray RigVMModel___RigUnit_GetRelativeBoneTransform_CachedSpace; // 0x180(0x10)
		FQuat RigVMModel___MathQuaternionToEuler_Value; // 0x190(0x20)
		float RigVMModel___MathFloatRemap_Value; // 0x1B0(0x4)
		unsigned char UnknownData25_6[0x4]; // 0x1B4(0x4) UNKNOWN PROPERTY
		TArray RigVMModel___ModifyBoneTransforms_WorkData; // 0x1B8(0x10)
		unsigned char UnknownData26_6[0x8]; // 0x1C8(0x8) UNKNOWN PROPERTY
		FQuat RigVMModel___MathQuaternionFromEuler_1_Result; // 0x1D0(0x20)
		FVector RigVMModel___MathVectorAdd_2_4_2_1_Result; // 0x1F0(0x18)
		FVector RigVMModel___MathQuaternionToEuler_4_2_4_1_Result; // 0x208(0x18)
		FTransform RigVMModel___RigUnit_GetInitialBoneTransform_2_4_1_Transform; // 0x220(0x60)
		TArray RigVMModel___RigUnit_GetInitialBoneTransform_2_4_1_CachedBone; // 0x280(0x10)
		FQuat RigVMModel___MathQuaternionToEuler_4_2_4_1_Value; // 0x290(0x20)
		TArray RigVMModel___ModifyBoneTransforms_1_BoneToModify__IO; // 0x2B0(0x10)
		TArray RigVMModel___ModifyBoneTransforms_1_WorkData; // 0x2C0(0x10)
		FQuat RigVMModel___MathQuaternionFromEuler_2_Result; // 0x2D0(0x20)
		FVector RigVMModel___MathVectorAdd_2_4_2_2_Result; // 0x2F0(0x18)
		TArray RigVMModel___ModifyBoneTransforms_2_BoneToModify__IO; // 0x308(0x10)
		float RigVMModel___MathFloatRemap_1_Result; // 0x318(0x4)
		float RigVMModel___MathFloatRemap_1_Value; // 0x31C(0x4)
		TArray RigVMModel___ModifyBoneTransforms_2_WorkData; // 0x320(0x10)
		FQuat RigVMModel___MathQuaternionFromEuler_1_1_Result; // 0x330(0x20)
		FVector RigVMModel___MathVectorAdd_2_4_2_1_1_Result; // 0x350(0x18)
		TArray RigVMModel___ModifyBoneTransforms_1_1_BoneToModify__IO; // 0x368(0x10)
		TArray RigVMModel___ModifyBoneTransforms_1_1_WorkData; // 0x378(0x10)
		unsigned char UnknownData27_6[0x8]; // 0x388(0x8) UNKNOWN PROPERTY
		FQuat RigVMModel___MathQuaternionFromEuler_5_Result; // 0x390(0x20)
		FVector RigVMModel___MathVectorAdd_2_4_2_3_Result; // 0x3B0(0x18)
		FVector RigVMModel___MathQuaternionToEuler_4_2_4_2_Result; // 0x3C8(0x18)
		FTransform RigVMModel___RigUnit_GetInitialBoneTransform_2_4_2_Transform; // 0x3E0(0x60)
		TArray RigVMModel___RigUnit_GetInitialBoneTransform_2_4_2_CachedBone; // 0x440(0x10)
		FQuat RigVMModel___MathQuaternionToEuler_4_2_4_2_Value; // 0x450(0x20)
		TArray RigVMModel___ModifyBoneTransforms_4_BoneToModify__IO; // 0x470(0x10)
		float RigVMModel___MathFloatRemap_3_Result; // 0x480(0x4)
		unsigned char UnknownData28_6[0x4]; // 0x484(0x4) UNKNOWN PROPERTY
		FVector RigVMModel___MathQuaternionToEuler_2_Result; // 0x488(0x18)
		FTransform RigVMModel___RigUnit_GetRelativeBoneTransform_2_Transform; // 0x4A0(0x60)
		TArray RigVMModel___RigUnit_GetRelativeBoneTransform_2_CachedBone; // 0x500(0x10)
		TArray RigVMModel___RigUnit_GetRelativeBoneTransform_2_CachedSpace; // 0x510(0x10)
		FQuat RigVMModel___MathQuaternionToEuler_2_Value; // 0x520(0x20)
		float RigVMModel___MathFloatRemap_3_Value; // 0x540(0x4)
		unsigned char UnknownData29_6[0x4]; // 0x544(0x4) UNKNOWN PROPERTY
		TArray RigVMModel___ModifyBoneTransforms_4_WorkData; // 0x548(0x10)
		unsigned char UnknownData30_6[0x8]; // 0x558(0x8) UNKNOWN PROPERTY
		FQuat RigVMModel___MathQuaternionFromEuler_1_3_Result; // 0x560(0x20)
		FVector RigVMModel___MathVectorAdd_2_4_2_1_2_Result; // 0x580(0x18)
		FVector RigVMModel___MathQuaternionToEuler_4_2_4_1_1_Result; // 0x598(0x18)
		FTransform RigVMModel___RigUnit_GetInitialBoneTransform_2_4_1_1_Transform; // 0x5B0(0x60)
		TArray RigVMModel___RigUnit_GetInitialBoneTransform_2_4_1_1_CachedBone; // 0x610(0x10)
		FQuat RigVMModel___MathQuaternionToEuler_4_2_4_1_1_Value; // 0x620(0x20)
		TArray RigVMModel___ModifyBoneTransforms_1_3_BoneToModify__IO; // 0x640(0x10)
		TArray RigVMModel___ModifyBoneTransforms_1_3_WorkData; // 0x650(0x10)
		FQuat RigVMModel___MathQuaternionFromEuler_2_3_Result; // 0x660(0x20)
		FVector RigVMModel___MathVectorAdd_2_4_2_2_1_Result; // 0x680(0x18)
		TArray RigVMModel___ModifyBoneTransforms_2_2_BoneToModify__IO; // 0x698(0x10)
		float RigVMModel___MathFloatRemap_1_2_Result; // 0x6A8(0x4)
		float RigVMModel___MathFloatRemap_1_2_Value; // 0x6AC(0x4)
		TArray RigVMModel___ModifyBoneTransforms_2_2_WorkData; // 0x6B0(0x10)
		FQuat RigVMModel___MathQuaternionFromEuler_1_1_2_Result; // 0x6C0(0x20)
		FVector RigVMModel___MathVectorAdd_2_4_2_1_1_1_Result; // 0x6E0(0x18)
		TArray RigVMModel___ModifyBoneTransforms_1_1_2_BoneToModify__IO; // 0x6F8(0x10)
		TArray RigVMModel___ModifyBoneTransforms_1_1_2_WorkData; // 0x708(0x10)
		unsigned char UnknownData31_6[0x8]; // 0x718(0x8) UNKNOWN PROPERTY
		FQuat RigVMModel___MathQuaternionFromEuler_3_Result; // 0x720(0x20)
		FVector RigVMModel___MathVectorAdd_2_4_3_Result; // 0x740(0x18)
		FVector RigVMModel___MathQuaternionToEuler_4_2_Result; // 0x758(0x18)
		FTransform RigVMModel___RigUnit_GetInitialBoneTransform_2_Transform; // 0x770(0x60)
		TArray RigVMModel___RigUnit_GetInitialBoneTransform_2_CachedBone; // 0x7D0(0x10)
		FQuat RigVMModel___MathQuaternionToEuler_4_2_Value; // 0x7E0(0x20)
		TArray RigVMModel___ModifyBoneTransforms_3_BoneToModify__IO; // 0x800(0x10)
		float RigVMModel___MathFloatRemap_2_Result; // 0x810(0x4)
		unsigned char UnknownData32_6[0x4]; // 0x814(0x4) UNKNOWN PROPERTY
		FVector RigVMModel___MathQuaternionToEuler_1_Result; // 0x818(0x18)
		FTransform RigVMModel___RigUnit_GetRelativeBoneTransform_1_Transform; // 0x830(0x60)
		TArray RigVMModel___RigUnit_GetRelativeBoneTransform_1_CachedBone; // 0x890(0x10)
		TArray RigVMModel___RigUnit_GetRelativeBoneTransform_1_CachedSpace; // 0x8A0(0x10)
		FQuat RigVMModel___MathQuaternionToEuler_1_Value; // 0x8B0(0x20)
		float RigVMModel___MathFloatRemap_2_Value; // 0x8D0(0x4)
		unsigned char UnknownData33_6[0x4]; // 0x8D4(0x4) UNKNOWN PROPERTY
		TArray RigVMModel___ModifyBoneTransforms_3_WorkData; // 0x8D8(0x10)
		unsigned char UnknownData34_6[0x8]; // 0x8E8(0x8) UNKNOWN PROPERTY
		FQuat RigVMModel___MathQuaternionFromEuler_1_2_Result; // 0x8F0(0x20)
		FVector RigVMModel___MathVectorAdd_2_4_Result; // 0x910(0x18)
		FVector RigVMModel___MathQuaternionToEuler_4_2_1_Result; // 0x928(0x18)
		FTransform RigVMModel___RigUnit_GetInitialBoneTransform_2_1_Transform; // 0x940(0x60)
		TArray RigVMModel___RigUnit_GetInitialBoneTransform_2_1_CachedBone; // 0x9A0(0x10)
		FQuat RigVMModel___MathQuaternionToEuler_4_2_1_Value; // 0x9B0(0x20)
		TArray RigVMModel___ModifyBoneTransforms_1_2_BoneToModify__IO; // 0x9D0(0x10)
		TArray RigVMModel___ModifyBoneTransforms_1_2_WorkData; // 0x9E0(0x10)
		FQuat RigVMModel___MathQuaternionFromEuler_2_2_Result; // 0x9F0(0x20)
		FVector RigVMModel___MathVectorAdd_2_4_1_Result; // 0xA10(0x18)
		TArray RigVMModel___ModifyBoneTransforms_2_1_BoneToModify__IO; // 0xA28(0x10)
		float RigVMModel___MathFloatRemap_1_1_Result; // 0xA38(0x4)
		float RigVMModel___MathFloatRemap_1_1_Value; // 0xA3C(0x4)
		TArray RigVMModel___ModifyBoneTransforms_2_1_WorkData; // 0xA40(0x10)
		FQuat RigVMModel___MathQuaternionFromEuler_1_1_1_Result; // 0xA50(0x20)
		FVector RigVMModel___MathVectorAdd_2_4_1_1_Result; // 0xA70(0x18)
		TArray RigVMModel___ModifyBoneTransforms_1_1_1_BoneToModify__IO; // 0xA88(0x10)
		TArray RigVMModel___ModifyBoneTransforms_1_1_1_WorkData; // 0xA98(0x10)
		unsigned char UnknownData35_6[0x8]; // 0xAA8(0x8) UNKNOWN PROPERTY
		FQuat RigVMModel___MathQuaternionFromEuler_3_1_Result; // 0xAB0(0x20)
		FVector RigVMModel___MathVectorAdd_2_3_Result; // 0xAD0(0x18)
		FVector RigVMModel___MathQuaternionToEuler_4_2_3_Result; // 0xAE8(0x18)
		FTransform RigVMModel___RigUnit_GetInitialBoneTransform_2_3_Transform; // 0xB00(0x60)
		TArray RigVMModel___RigUnit_GetInitialBoneTransform_2_3_CachedBone; // 0xB60(0x10)
		FQuat RigVMModel___MathQuaternionToEuler_4_2_3_Value; // 0xB70(0x20)
		TArray RigVMModel___ModifyBoneTransforms_3_1_BoneToModify__IO; // 0xB90(0x10)
		float RigVMModel___MathFloatRemap_2_1_Result; // 0xBA0(0x4)
		unsigned char UnknownData36_6[0x4]; // 0xBA4(0x4) UNKNOWN PROPERTY
		FVector RigVMModel___MathQuaternionToEuler_1_2_Result; // 0xBA8(0x18)
		FTransform RigVMModel___RigUnit_GetRelativeBoneTransform_1_1_Transform; // 0xBC0(0x60)
		TArray RigVMModel___RigUnit_GetRelativeBoneTransform_1_1_CachedBone; // 0xC20(0x10)
		TArray RigVMModel___RigUnit_GetRelativeBoneTransform_1_1_CachedSpace; // 0xC30(0x10)
		FQuat RigVMModel___MathQuaternionToEuler_1_2_Value; // 0xC40(0x20)
		float RigVMModel___MathFloatRemap_2_1_Value; // 0xC60(0x4)
		unsigned char UnknownData37_6[0x4]; // 0xC64(0x4) UNKNOWN PROPERTY
		TArray RigVMModel___ModifyBoneTransforms_3_1_WorkData; // 0xC68(0x10)
		unsigned char UnknownData38_6[0x8]; // 0xC78(0x8) UNKNOWN PROPERTY
		FQuat RigVMModel___MathQuaternionFromEuler_1_2_1_Result; // 0xC80(0x20)
		FVector RigVMModel___MathVectorAdd_2_2_Result; // 0xCA0(0x18)
		FVector RigVMModel___MathQuaternionToEuler_4_2_2_Result; // 0xCB8(0x18)
		FTransform RigVMModel___RigUnit_GetInitialBoneTransform_2_2_Transform; // 0xCD0(0x60)
		TArray RigVMModel___RigUnit_GetInitialBoneTransform_2_2_CachedBone; // 0xD30(0x10)
		FQuat RigVMModel___MathQuaternionToEuler_4_2_2_Value; // 0xD40(0x20)
		TArray RigVMModel___ModifyBoneTransforms_1_2_1_BoneToModify__IO; // 0xD60(0x10)
		TArray RigVMModel___ModifyBoneTransforms_1_2_1_WorkData; // 0xD70(0x10)
		FQuat RigVMModel___MathQuaternionFromEuler_2_2_1_Result; // 0xD80(0x20)
		FVector RigVMModel___MathVectorAdd_2_1_Result; // 0xDA0(0x18)
		TArray RigVMModel___ModifyBoneTransforms_2_1_1_BoneToModify__IO; // 0xDB8(0x10)
		float RigVMModel___MathFloatRemap_1_1_1_Result; // 0xDC8(0x4)
		float RigVMModel___MathFloatRemap_1_1_1_Value; // 0xDCC(0x4)
		TArray RigVMModel___ModifyBoneTransforms_2_1_1_WorkData; // 0xDD0(0x10)
		FQuat RigVMModel___MathQuaternionFromEuler_1_1_1_1_Result; // 0xDE0(0x20)
		FVector RigVMModel___MathVectorAdd_2_Result; // 0xE00(0x18)
		TArray RigVMModel___ModifyBoneTransforms_1_1_1_1_BoneToModify__IO; // 0xE18(0x10)
		TArray RigVMModel___ModifyBoneTransforms_1_1_1_1_WorkData; // 0xE28(0x10)
		unsigned char UnknownData39_6[0x8]; // 0xE38(0x8) UNKNOWN PROPERTY
		FQuat RigVMModel___MathQuaternionFromEuler_4_1_Result; // 0xE40(0x20)
		FVector RigVMModel___MathVectorAdd_3_Result; // 0xE60(0x18)
		FVector RigVMModel___MathQuaternionToEuler_4_3_Result; // 0xE78(0x18)
		FTransform RigVMModel___RigUnit_GetInitialBoneTransform_3_Transform; // 0xE90(0x60)
		TArray RigVMModel___RigUnit_GetInitialBoneTransform_3_CachedBone; // 0xEF0(0x10)
		FQuat RigVMModel___MathQuaternionToEuler_4_3_Value; // 0xF00(0x20)
		TArray RigVMModel___ModifyBoneTransforms_5_1_BoneToModify__IO; // 0xF20(0x10)
		float RigVMModel___MathFloatRemap_4_1_Result; // 0xF30(0x4)
		float RigVMModel___MathFloatAbs_Result; // 0xF34(0x4)
		FVector RigVMModel___MathQuaternionToEuler_3_1_Result; // 0xF38(0x18)
		FTransform RigVMModel___RigUnit_GetRelativeBoneTransform_3_1_Transform; // 0xF50(0x60)
		TArray RigVMModel___RigUnit_GetRelativeBoneTransform_3_1_CachedBone; // 0xFB0(0x10)
		TArray RigVMModel___RigUnit_GetRelativeBoneTransform_3_1_CachedSpace; // 0xFC0(0x10)
		FQuat RigVMModel___MathQuaternionToEuler_3_1_Value; // 0xFD0(0x20)
		float RigVMModel___MathFloatAbs_Value; // 0xFF0(0x4)
		unsigned char UnknownData40_6[0x4]; // 0xFF4(0x4) UNKNOWN PROPERTY
		TArray RigVMModel___ModifyBoneTransforms_5_1_WorkData; // 0xFF8(0x10)
		unsigned char UnknownData41_6[0x8]; // 0x1008(0x8) UNKNOWN PROPERTY
		FQuat RigVMModel___MathQuaternionFromEuler_1_4_1_1_Result; // 0x1010(0x20)
		FVector RigVMModel___MathVectorAdd_1_1_Result; // 0x1030(0x18)
		FVector RigVMModel___MathQuaternionToEuler_4_1_1_Result; // 0x1048(0x18)
		FTransform RigVMModel___RigUnit_GetInitialBoneTransform_1_1_Transform; // 0x1060(0x60)
		TArray RigVMModel___RigUnit_GetInitialBoneTransform_1_1_CachedBone; // 0x10C0(0x10)
		FQuat RigVMModel___MathQuaternionToEuler_4_1_1_Value; // 0x10D0(0x20)
		TArray RigVMModel___ModifyBoneTransforms_1_4_1_BoneToModify__IO; // 0x10F0(0x10)
		TArray RigVMModel___ModifyBoneTransforms_1_4_1_WorkData; // 0x1100(0x10)
		FQuat RigVMModel___MathQuaternionFromEuler_4_Result; // 0x1110(0x20)
		FVector RigVMModel___MathVectorAdd_Result; // 0x1130(0x18)
		FVector RigVMModel___MathQuaternionToEuler_4_Result; // 0x1148(0x18)
		FTransform RigVMModel___RigUnit_GetInitialBoneTransform_Transform; // 0x1160(0x60)
		TArray RigVMModel___RigUnit_GetInitialBoneTransform_CachedBone; // 0x11C0(0x10)
		FQuat RigVMModel___MathQuaternionToEuler_4_Value; // 0x11D0(0x20)
		TArray RigVMModel___ModifyBoneTransforms_5_BoneToModify__IO; // 0x11F0(0x10)
		float RigVMModel___MathFloatRemap_4_Result; // 0x1200(0x4)
		float RigVMModel___MathFloatAbs_1_Result; // 0x1204(0x4)
		FVector RigVMModel___MathQuaternionToEuler_3_Result; // 0x1208(0x18)
		FTransform RigVMModel___RigUnit_GetRelativeBoneTransform_3_Transform; // 0x1220(0x60)
		TArray RigVMModel___RigUnit_GetRelativeBoneTransform_3_CachedBone; // 0x1280(0x10)
		TArray RigVMModel___RigUnit_GetRelativeBoneTransform_3_CachedSpace; // 0x1290(0x10)
		FQuat RigVMModel___MathQuaternionToEuler_3_Value; // 0x12A0(0x20)
		float RigVMModel___MathFloatAbs_1_Value; // 0x12C0(0x4)
		unsigned char UnknownData42_6[0x4]; // 0x12C4(0x4) UNKNOWN PROPERTY
		TArray RigVMModel___ModifyBoneTransforms_5_WorkData; // 0x12C8(0x10)
		unsigned char UnknownData43_6[0x8]; // 0x12D8(0x8) UNKNOWN PROPERTY
		FQuat RigVMModel___MathQuaternionFromEuler_1_4_1_Result; // 0x12E0(0x20)
		FVector RigVMModel___MathVectorAdd_1_Result; // 0x1300(0x18)
		FVector RigVMModel___MathQuaternionToEuler_4_1_Result; // 0x1318(0x18)
		FTransform RigVMModel___RigUnit_GetInitialBoneTransform_1_Transform; // 0x1330(0x60)
		TArray RigVMModel___RigUnit_GetInitialBoneTransform_1_CachedBone; // 0x1390(0x10)
		FQuat RigVMModel___MathQuaternionToEuler_4_1_Value; // 0x13A0(0x20)
		TArray RigVMModel___ModifyBoneTransforms_1_4_BoneToModify__IO; // 0x13C0(0x10)
		TArray RigVMModel___ModifyBoneTransforms_1_4_WorkData; // 0x13D0(0x10)
		FQuat RigVMModel___MathQuaternionFromEuler_4_1_1_Result; // 0x13E0(0x20)
		FVector RigVMModel___MathVectorAdd_3_1_Result; // 0x1400(0x18)
		FVector RigVMModel___MathQuaternionToEuler_4_3_1_Result; // 0x1418(0x18)
		FTransform RigVMModel___RigUnit_GetInitialBoneTransform_3_1_Transform; // 0x1430(0x60)
		TArray RigVMModel___RigUnit_GetInitialBoneTransform_3_1_CachedBone; // 0x1490(0x10)
		FQuat RigVMModel___MathQuaternionToEuler_4_3_1_Value; // 0x14A0(0x20)
		TArray RigVMModel___ModifyBoneTransforms_5_1_1_BoneToModify__IO; // 0x14C0(0x10)
		float RigVMModel___MathFloatRemap_4_1_1_Result; // 0x14D0(0x4)
		float RigVMModel___MathFloatAbs_2_Result; // 0x14D4(0x4)
		FVector RigVMModel___MathQuaternionToEuler_3_1_1_Result; // 0x14D8(0x18)
		FTransform RigVMModel___RigUnit_GetRelativeBoneTransform_3_1_1_Transform; // 0x14F0(0x60)
		TArray RigVMModel___RigUnit_GetRelativeBoneTransform_3_1_1_CachedBone; // 0x1550(0x10)
		TArray RigVMModel___RigUnit_GetRelativeBoneTransform_3_1_1_CachedSpace; // 0x1560(0x10)
		FQuat RigVMModel___MathQuaternionToEuler_3_1_1_Value; // 0x1570(0x20)
		float RigVMModel___MathFloatAbs_2_Value; // 0x1590(0x4)
		unsigned char UnknownData44_6[0x4]; // 0x1594(0x4) UNKNOWN PROPERTY
		TArray RigVMModel___ModifyBoneTransforms_5_1_1_WorkData; // 0x1598(0x10)
		unsigned char UnknownData45_6[0x8]; // 0x15A8(0x8) UNKNOWN PROPERTY
		FQuat RigVMModel___MathQuaternionFromEuler_1_4_1_1_1_Result; // 0x15B0(0x20)
		FVector RigVMModel___MathVectorAdd_1_1_1_Result; // 0x15D0(0x18)
		FVector RigVMModel___MathQuaternionToEuler_4_1_1_1_Result; // 0x15E8(0x18)
		FTransform RigVMModel___RigUnit_GetInitialBoneTransform_1_1_1_Transform; // 0x1600(0x60)
		TArray RigVMModel___RigUnit_GetInitialBoneTransform_1_1_1_CachedBone; // 0x1660(0x10)
		FQuat RigVMModel___MathQuaternionToEuler_4_1_1_1_Value; // 0x1670(0x20)
		TArray RigVMModel___ModifyBoneTransforms_1_4_1_1_BoneToModify__IO; // 0x1690(0x10)
		TArray RigVMModel___ModifyBoneTransforms_1_4_1_1_WorkData; // 0x16A0(0x10)
		FQuat RigVMModel___MathQuaternionFromEuler_4_1_1_1_Result; // 0x16B0(0x20)
		FVector RigVMModel___MathVectorAdd_3_1_1_Result; // 0x16D0(0x18)
		FVector RigVMModel___MathQuaternionToEuler_4_3_1_1_Result; // 0x16E8(0x18)
		FTransform RigVMModel___RigUnit_GetInitialBoneTransform_3_1_1_Transform; // 0x1700(0x60)
		TArray RigVMModel___RigUnit_GetInitialBoneTransform_3_1_1_CachedBone; // 0x1760(0x10)
		FQuat RigVMModel___MathQuaternionToEuler_4_3_1_1_Value; // 0x1770(0x20)
		TArray RigVMModel___ModifyBoneTransforms_5_1_1_1_BoneToModify__IO; // 0x1790(0x10)
		float RigVMModel___MathFloatRemap_4_1_1_1_Result; // 0x17A0(0x4)
		float RigVMModel___MathFloatAbs_2_1_Result; // 0x17A4(0x4)
		FVector RigVMModel___MathQuaternionToEuler_3_1_1_1_Result; // 0x17A8(0x18)
		FTransform RigVMModel___RigUnit_GetRelativeBoneTransform_3_1_1_1_Transform; // 0x17C0(0x60)
		TArray RigVMModel___RigUnit_GetRelativeBoneTransform_3_1_1_1_CachedBone; // 0x1820(0x10)
		TArray RigVMModel___RigUnit_GetRelativeBoneTransform_3_1_1_1_CachedSpace; // 0x1830(0x10)
		FQuat RigVMModel___MathQuaternionToEuler_3_1_1_1_Value; // 0x1840(0x20)
		float RigVMModel___MathFloatAbs_2_1_Value; // 0x1860(0x4)
		unsigned char UnknownData46_6[0x4]; // 0x1864(0x4) UNKNOWN PROPERTY
		TArray RigVMModel___ModifyBoneTransforms_5_1_1_1_WorkData; // 0x1868(0x10)
		unsigned char UnknownData47_6[0x8]; // 0x1878(0x8) UNKNOWN PROPERTY
		FQuat RigVMModel___MathQuaternionFromEuler_1_4_1_1_1_1_Result; // 0x1880(0x20)
		FVector RigVMModel___MathVectorAdd_1_1_1_1_Result; // 0x18A0(0x18)
		FVector RigVMModel___MathQuaternionToEuler_4_1_1_1_1_Result; // 0x18B8(0x18)
		FTransform RigVMModel___RigUnit_GetInitialBoneTransform_1_1_1_1_Transform; // 0x18D0(0x60)
		TArray RigVMModel___RigUnit_GetInitialBoneTransform_1_1_1_1_CachedBone; // 0x1930(0x10)
		FQuat RigVMModel___MathQuaternionToEuler_4_1_1_1_1_Value; // 0x1940(0x20)
		TArray RigVMModel___ModifyBoneTransforms_1_4_1_1_1_BoneToModify__IO; // 0x1960(0x10)
		TArray RigVMModel___ModifyBoneTransforms_1_4_1_1_1_WorkData; // 0x1970(0x10)
	};


	// Struct /Engine/Transient.PropertyBag_ccbff335c91ef8ab
	// Size: 0x3E0 (0x3E0 - 0x0)
	struct FPropertyBag_ccbff335c91ef8ab	
	{
	public:
		TArray RigVMModel___ModifyBoneTransforms_BoneToModify__Const; // 0x0(0x10)
		FName RigVMModel___RigUnit_GetInitialBoneTransform_2_4_Bone__Const; // 0x10(0x4)
		ERigVMTransformSpace RigVMModel___RigUnit_GetInitialBoneTransform_2_4_Space__Const; // 0x14(0x1)
		EEulerRotationOrder RigVMModel___MathQuaternionToEuler_4_2_4_RotationOrder__Const; // 0x15(0x1)
		unsigned char UnknownData17_6[0x2]; // 0x16(0x2) UNKNOWN PROPERTY
		FVector RigVMModel___MathVectorAdd_2_4_2_B__Const; // 0x18(0x18)
		FName RigVMModel___RigUnit_GetRelativeBoneTransform_Bone__Const; // 0x30(0x4)
		FName RigVMModel___RigUnit_GetRelativeBoneTransform_Space__Const; // 0x34(0x4)
		float RigVMModel___MathFloatRemap_SourceMinimum__Const; // 0x38(0x4)
		float RigVMModel___MathFloatRemap_SourceMaximum__Const; // 0x3C(0x4)
		float RigVMModel___MathFloatRemap_TargetMinimum__Const; // 0x40(0x4)
		float RigVMModel___MathFloatRemap_TargetMaximum__Const; // 0x44(0x4)
		bool RigVMModel___MathFloatRemap_bClamp__Const; // 0x48(0x1)
		EControlRigModifyBoneMode RigVMModel___ModifyBoneTransforms_Mode__Const; // 0x49(0x1)
		unsigned char UnknownData18_6[0x6]; // 0x4A(0x6) UNKNOWN PROPERTY
		TArray RigVMModel___ModifyBoneTransforms_1_BoneToModify__Const; // 0x50(0x10)
		FName RigVMModel___RigUnit_GetInitialBoneTransform_2_4_1_Bone__Const; // 0x60(0x4)
		unsigned char UnknownData19_6[0x4]; // 0x64(0x4) UNKNOWN PROPERTY
		FVector RigVMModel___MathVectorAdd_2_4_2_1_B__Const; // 0x68(0x18)
		TArray RigVMModel___ModifyBoneTransforms_2_BoneToModify__Const; // 0x80(0x10)
		float RigVMModel___MathFloatRemap_1_SourceMinimum__Const; // 0x90(0x4)
		float RigVMModel___MathFloatRemap_1_SourceMaximum__Const; // 0x94(0x4)
		TArray RigVMModel___ModifyBoneTransforms_1_1_BoneToModify__Const; // 0x98(0x10)
		FVector RigVMModel___MathVectorAdd_2_4_2_1_1_B__Const; // 0xA8(0x18)
		TArray RigVMModel___ModifyBoneTransforms_4_BoneToModify__Const; // 0xC0(0x10)
		FName RigVMModel___RigUnit_GetInitialBoneTransform_2_4_2_Bone__Const; // 0xD0(0x4)
		FName RigVMModel___RigUnit_GetRelativeBoneTransform_2_Bone__Const; // 0xD4(0x4)
		FName RigVMModel___RigUnit_GetRelativeBoneTransform_2_Space__Const; // 0xD8(0x4)
		unsigned char UnknownData20_6[0x4]; // 0xDC(0x4) UNKNOWN PROPERTY
		TArray RigVMModel___ModifyBoneTransforms_1_3_BoneToModify__Const; // 0xE0(0x10)
		FName RigVMModel___RigUnit_GetInitialBoneTransform_2_4_1_1_Bone__Const; // 0xF0(0x4)
		unsigned char UnknownData21_6[0x4]; // 0xF4(0x4) UNKNOWN PROPERTY
		TArray RigVMModel___ModifyBoneTransforms_2_2_BoneToModify__Const; // 0xF8(0x10)
		TArray RigVMModel___ModifyBoneTransforms_1_1_2_BoneToModify__Const; // 0x108(0x10)
		TArray RigVMModel___ModifyBoneTransforms_3_BoneToModify__Const; // 0x118(0x10)
		FName RigVMModel___RigUnit_GetInitialBoneTransform_2_Bone__Const; // 0x128(0x4)
		unsigned char UnknownData22_6[0x4]; // 0x12C(0x4) UNKNOWN PROPERTY
		FVector RigVMModel___MathVectorAdd_2_4_3_B__Const; // 0x130(0x18)
		FName RigVMModel___RigUnit_GetRelativeBoneTransform_1_Bone__Const; // 0x148(0x4)
		FName RigVMModel___RigUnit_GetRelativeBoneTransform_1_Space__Const; // 0x14C(0x4)
		float RigVMModel___MathFloatRemap_2_SourceMinimum__Const; // 0x150(0x4)
		float RigVMModel___MathFloatRemap_2_SourceMaximum__Const; // 0x154(0x4)
		TArray RigVMModel___ModifyBoneTransforms_1_2_BoneToModify__Const; // 0x158(0x10)
		FName RigVMModel___RigUnit_GetInitialBoneTransform_2_1_Bone__Const; // 0x168(0x4)
		unsigned char UnknownData23_6[0x4]; // 0x16C(0x4) UNKNOWN PROPERTY
		TArray RigVMModel___ModifyBoneTransforms_2_1_BoneToModify__Const; // 0x170(0x10)
		FVector RigVMModel___MathVectorAdd_2_4_1_B__Const; // 0x180(0x18)
		float RigVMModel___MathFloatRemap_1_1_SourceMinimum__Const; // 0x198(0x4)
		float RigVMModel___MathFloatRemap_1_1_SourceMaximum__Const; // 0x19C(0x4)
		TArray RigVMModel___ModifyBoneTransforms_1_1_1_BoneToModify__Const; // 0x1A0(0x10)
		TArray RigVMModel___ModifyBoneTransforms_3_1_BoneToModify__Const; // 0x1B0(0x10)
		FName RigVMModel___RigUnit_GetInitialBoneTransform_2_3_Bone__Const; // 0x1C0(0x4)
		FName RigVMModel___RigUnit_GetRelativeBoneTransform_1_1_Bone__Const; // 0x1C4(0x4)
		FName RigVMModel___RigUnit_GetRelativeBoneTransform_1_1_Space__Const; // 0x1C8(0x4)
		unsigned char UnknownData24_6[0x4]; // 0x1CC(0x4) UNKNOWN PROPERTY
		TArray RigVMModel___ModifyBoneTransforms_1_2_1_BoneToModify__Const; // 0x1D0(0x10)
		FName RigVMModel___RigUnit_GetInitialBoneTransform_2_2_Bone__Const; // 0x1E0(0x4)
		unsigned char UnknownData25_6[0x4]; // 0x1E4(0x4) UNKNOWN PROPERTY
		TArray RigVMModel___ModifyBoneTransforms_2_1_1_BoneToModify__Const; // 0x1E8(0x10)
		TArray RigVMModel___ModifyBoneTransforms_1_1_1_1_BoneToModify__Const; // 0x1F8(0x10)
		TArray RigVMModel___ModifyBoneTransforms_5_1_BoneToModify__Const; // 0x208(0x10)
		FName RigVMModel___RigUnit_GetInitialBoneTransform_3_Bone__Const; // 0x218(0x4)
		FName RigVMModel___RigUnit_GetRelativeBoneTransform_3_1_Space__Const; // 0x21C(0x4)
		float RigVMModel___MathFloatRemap_4_1_SourceMinimum__Const; // 0x220(0x4)
		float RigVMModel___MathFloatRemap_4_1_SourceMaximum__Const; // 0x224(0x4)
		TArray RigVMModel___ModifyBoneTransforms_1_4_1_BoneToModify__Const; // 0x228(0x10)
		FName RigVMModel___RigUnit_GetInitialBoneTransform_1_1_Bone__Const; // 0x238(0x4)
		unsigned char UnknownData26_6[0x4]; // 0x23C(0x4) UNKNOWN PROPERTY
		TArray RigVMModel___ModifyBoneTransforms_5_BoneToModify__Const; // 0x240(0x10)
		FName RigVMModel___RigUnit_GetInitialBoneTransform_Bone__Const; // 0x250(0x4)
		unsigned char UnknownData27_6[0x4]; // 0x254(0x4) UNKNOWN PROPERTY
		FVector RigVMModel___MathVectorAdd_B__Const; // 0x258(0x18)
		float RigVMModel___MathFloatRemap_4_SourceMinimum__Const; // 0x270(0x4)
		float RigVMModel___MathFloatRemap_4_SourceMaximum__Const; // 0x274(0x4)
		TArray RigVMModel___ModifyBoneTransforms_1_4_BoneToModify__Const; // 0x278(0x10)
		FName RigVMModel___RigUnit_GetInitialBoneTransform_1_Bone__Const; // 0x288(0x4)
		unsigned char UnknownData28_6[0x4]; // 0x28C(0x4) UNKNOWN PROPERTY
		FVector RigVMModel___MathVectorAdd_1_B__Const; // 0x290(0x18)
		TArray RigVMModel___ModifyBoneTransforms_5_1_1_BoneToModify__Const; // 0x2A8(0x10)
		FName RigVMModel___RigUnit_GetInitialBoneTransform_3_1_Bone__Const; // 0x2B8(0x4)
		unsigned char UnknownData29_6[0x4]; // 0x2BC(0x4) UNKNOWN PROPERTY
		FVector RigVMModel___MathVectorAdd_3_1_B__Const; // 0x2C0(0x18)
		FName RigVMModel___RigUnit_GetRelativeBoneTransform_3_1_1_Space__Const; // 0x2D8(0x4)
		float RigVMModel___MathFloatRemap_4_1_1_SourceMinimum__Const; // 0x2DC(0x4)
		float RigVMModel___MathFloatRemap_4_1_1_SourceMaximum__Const; // 0x2E0(0x4)
		unsigned char UnknownData30_6[0x4]; // 0x2E4(0x4) UNKNOWN PROPERTY
		TArray RigVMModel___ModifyBoneTransforms_1_4_1_1_BoneToModify__Const; // 0x2E8(0x10)
		FName RigVMModel___RigUnit_GetInitialBoneTransform_1_1_1_Bone__Const; // 0x2F8(0x4)
		unsigned char UnknownData31_6[0x4]; // 0x2FC(0x4) UNKNOWN PROPERTY
		FVector RigVMModel___MathVectorAdd_1_1_1_B__Const; // 0x300(0x18)
		TArray RigVMModel___ModifyBoneTransforms_5_1_1_1_BoneToModify__Const; // 0x318(0x10)
		FName RigVMModel___RigUnit_GetInitialBoneTransform_3_1_1_Bone__Const; // 0x328(0x4)
		float RigVMModel___MathFloatRemap_4_1_1_1_SourceMinimum__Const; // 0x32C(0x4)
		float RigVMModel___MathFloatRemap_4_1_1_1_SourceMaximum__Const; // 0x330(0x4)
		unsigned char UnknownData32_6[0x4]; // 0x334(0x4) UNKNOWN PROPERTY
		TArray RigVMModel___ModifyBoneTransforms_1_4_1_1_1_BoneToModify__Const; // 0x338(0x10)
		FName RigVMModel___RigUnit_GetInitialBoneTransform_1_1_1_1_Bone__Const; // 0x348(0x4)
		unsigned char UnknownData33_6[0x4]; // 0x34C(0x4) UNKNOWN PROPERTY
		FVector RigVMModel___MathVectorAdd_1_1_1_1_B__Const; // 0x350(0x18)
		float RigVMModel___DebugHierarchy_1_Scale__Const; // 0x368(0x4)
		FLinearColor RigVMModel___DebugHierarchy_1_Color__Const; // 0x36C(0x10)
		float RigVMModel___DebugHierarchy_1_Thickness__Const; // 0x37C(0x4)
		FTransform RigVMModel___DebugHierarchy_1_WorldOffset__Const; // 0x380(0x60)
	};


	// Struct /Engine/Transient.PropertyBag_bd09dcce8921479a
	// Size: 0x1388 (0x1388 - 0x0)
	struct FPropertyBag_bd09dcce8921479a	
	{
	public:
		FName Solve_Face_Accessories___Solve_Face_Accessories_DISPATCH_RigDispatch_GetMetadata_3_Name__Const; // 0x0(0x4)
		ERigMetaDataNameSpace Solve_Face_Accessories___Solve_Face_Accessories_DISPATCH_RigDispatch_GetMetadata_3_NameSpace__Const; // 0x4(0x1)
		bool Solve_Face_Accessories___Solve_Face_Accessories_DISPATCH_RigDispatch_GetMetadata_3_Default__Const; // 0x5(0x1)
		unsigned char UnknownData62_6[0x2]; // 0x6(0x2) UNKNOWN PROPERTY
		FName Solve_Face_Accessories___Solve_Face_Accessories_DISPATCH_RigDispatch_GetMetadata_Name__Const; // 0x8(0x4)
		FName Solve_Face_Accessories___Solve_Face_Accessories_DISPATCH_RigDispatch_GetMetadata_Default__Const; // 0xC(0x4)
		FName Solve_Face_Accessories___Solve_Face_Accessories_DISPATCH_RigDispatch_GetMetadata_3_2_Name__Const; // 0x10(0x4)
		ERigVMTransformSpace Invert_Curve___Invert_Curve_RigUnit_SetTransform_1_1_Space__Const; // 0x14(0x1)
		bool Invert_Curve___Invert_Curve_RigUnit_SetTransform_1_1_bInitial__Const; // 0x15(0x1)
		unsigned char UnknownData63_6[0x2]; // 0x16(0x2) UNKNOWN PROPERTY
		FName Curve_to_Transform___Curve_to_Transform_Concat_1_2_B__Const; // 0x18(0x4)
		unsigned char UnknownData64_6[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
		double Curve_to_Transform___Curve_to_Transform_MathFloatDiv_A__Const; // 0x20(0x8)
		double Curve_to_Transform___Curve_to_Transform_MathFloatDiv_B__Const; // 0x28(0x8)
		EEulerRotationOrder Curve_to_Transform___Curve_to_Transform_RigVMFunction_MathQuaternionFromEuler_RotationOrder__Const; // 0x30(0x1)
		unsigned char UnknownData65_6[0x3]; // 0x31(0x3) UNKNOWN PROPERTY
		FName Curve_to_Transform___Curve_to_Transform_Concat_B__Const; // 0x34(0x4)
		FName Curve_to_Transform___Curve_to_Transform_Concat_1_B__Const; // 0x38(0x4)
		FName Curve_to_Transform___Curve_to_Transform_Concat_2_B__Const; // 0x3C(0x4)
		FName Curve_to_Transform___Curve_to_Transform_Concat_1_1_B__Const; // 0x40(0x4)
		FRigElementKey Invert_Curve___Invert_Curve_RigUnit_GetTransform_Item__Const; // 0x44(0x8)
		float Invert_Curve___Invert_Curve_RigUnit_SetTransform_1_1_Weight__Const; // 0x4C(0x4)
		bool Invert_Curve___Invert_Curve_RigUnit_SetTransform_1_1_bPropagateToChildren__Const; // 0x50(0x1)
		unsigned char UnknownData66_6[0x7]; // 0x51(0x7) UNKNOWN PROPERTY
		TArray Solve_Face_Accessories___Solve_Face_Accessories_RigUnit_ItemArray_Items__Const; // 0x58(0x10)
		FName Solve_Face_Accessories___Solve_Face_Accessories_GetCurveValue_Curve__Const; // 0x68(0x4)
		unsigned char UnknownData67_6[0x4]; // 0x6C(0x4) UNKNOWN PROPERTY
		double Solve_Face_Accessories___Solve_Face_Accessories_GreaterEqual_B__Const; // 0x70(0x8)
		FName Solve_Face_Accessories___Solve_Face_Accessories_HasMetadata_Name__Const; // 0x78(0x4)
		ERigMetadataType Solve_Face_Accessories___Solve_Face_Accessories_HasMetadata_Type__Const; // 0x7C(0x1)
		unsigned char UnknownData68_6[0x3]; // 0x7D(0x3) UNKNOWN PROPERTY
		FRigElementKey Solve_Face_Accessories___Solve_Face_Accessories_DISPATCH_RigDispatch_GetMetadata_2_Default__Const; // 0x80(0x8)
		FName Solve_Face_Accessories___Solve_Face_Accessories_DISPATCH_RigDispatch_GetMetadata_1_1_Name__Const; // 0x88(0x4)
		unsigned char UnknownData69_6[0x4]; // 0x8C(0x4) UNKNOWN PROPERTY
		TArray Solve_Face_Accessories___Solve_Face_Accessories_DISPATCH_RigDispatch_GetMetadata_1_1_Default__Const; // 0x90(0x10)
		FName Transform_Mouth_Registration_Point_1___Transform_Mouth_Registration_Point_GetCurveValue_Curve__Const; // 0xA0(0x4)
		ERigVMTransformSpace Transform_Mouth_Registration_Point_1___Transform_Mouth_Registration_Point_RigUnit_SetTransform_Space__Const; // 0xA4(0x1)
		bool Transform_Mouth_Registration_Point_1___Transform_Mouth_Registration_Point_RigUnit_SetTransform_bInitial__Const; // 0xA5(0x1)
		unsigned char UnknownData70_6[0x2]; // 0xA6(0x2) UNKNOWN PROPERTY
		FName Transform_Mouth_Registration_Point_1___Transform_Mouth_Registration_Point_GetCurveValue_1_Curve__Const; // 0xA8(0x4)
		unsigned char UnknownData71_6[0x4]; // 0xAC(0x4) UNKNOWN PROPERTY
		double Transform_Mouth_Registration_Point_1___Transform_Mouth_Registration_Point_GreaterEqual_B__Const; // 0xB0(0x8)
		FVector Transform_Mouth_Registration_Point_1___Transform_Mouth_Registration_Point_DISPATCH_RigVMDispatch_If_True__Const; // 0xB8(0x18)
		FVector Transform_Mouth_Registration_Point_1___Transform_Mouth_Registration_Point_DISPATCH_RigVMDispatch_If_False__Const; // 0xD0(0x18)
		FRigElementKey Transform_Mouth_Registration_Point_1___Transform_Mouth_Registration_Point_RigUnit_GetTransform_5_Item__Const; // 0xE8(0x8)
		float Transform_Mouth_Registration_Point_1___Transform_Mouth_Registration_Point_RigUnit_SetTransform_Weight__Const; // 0xF0(0x4)
		bool Transform_Mouth_Registration_Point_1___Transform_Mouth_Registration_Point_RigUnit_SetTransform_bPropagateToChildren__Const; // 0xF4(0x1)
		unsigned char UnknownData72_6[0x3]; // 0xF5(0x3) UNKNOWN PROPERTY
		FName Transform_Mouth_Registration_Point___Transform_Mouth_Registration_Point_GetCurveValue_Curve__Const; // 0xF8(0x4)
		ERigVMTransformSpace Transform_Mouth_Registration_Point___Transform_Mouth_Registration_Point_RigUnit_SetTransform_Space__Const; // 0xFC(0x1)
		bool Transform_Mouth_Registration_Point___Transform_Mouth_Registration_Point_RigUnit_SetTransform_bInitial__Const; // 0xFD(0x1)
		unsigned char UnknownData73_6[0x2]; // 0xFE(0x2) UNKNOWN PROPERTY
		FName Transform_Mouth_Registration_Point___Transform_Mouth_Registration_Point_GetCurveValue_1_Curve__Const; // 0x100(0x4)
		unsigned char UnknownData74_6[0x4]; // 0x104(0x4) UNKNOWN PROPERTY
		double Transform_Mouth_Registration_Point___Transform_Mouth_Registration_Point_GreaterEqual_B__Const; // 0x108(0x8)
		FVector Transform_Mouth_Registration_Point___Transform_Mouth_Registration_Point_DISPATCH_RigVMDispatch_If_True__Const; // 0x110(0x18)
		FVector Transform_Mouth_Registration_Point___Transform_Mouth_Registration_Point_DISPATCH_RigVMDispatch_If_False__Const; // 0x128(0x18)
		FRigElementKey Transform_Mouth_Registration_Point___Transform_Mouth_Registration_Point_RigUnit_GetTransform_5_Item__Const; // 0x140(0x8)
		float Transform_Mouth_Registration_Point___Transform_Mouth_Registration_Point_RigUnit_SetTransform_Weight__Const; // 0x148(0x4)
		bool Transform_Mouth_Registration_Point___Transform_Mouth_Registration_Point_RigUnit_SetTransform_bPropagateToChildren__Const; // 0x14C(0x1)
		unsigned char UnknownData75_6[0x3]; // 0x14D(0x3) UNKNOWN PROPERTY
		TArray Solve_Face_Accessories___Solve_Face_Accessories_RigUnit_ItemArray_1_Items__Const; // 0x150(0x10)
		FRigElementKey Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_DISPATCH_RigDispatch_GetMetadata_2_Item__Const; // 0x160(0x8)
		FName Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_DISPATCH_RigDispatch_GetMetadata_2_Name__Const; // 0x168(0x4)
		ERigMetaDataNameSpace Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_DISPATCH_RigDispatch_GetMetadata_2_NameSpace__Const; // 0x16C(0x1)
		bool Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_DISPATCH_RigDispatch_GetMetadata_2_Default__Const; // 0x16D(0x1)
		ERigVMTransformSpace Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_RigUnit_SetTransform_Space__Const; // 0x16E(0x1)
		unsigned char UnknownData76_6[0x1]; // 0x16F(0x1) UNKNOWN PROPERTY
		FRigElementKey Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_RigUnit_GetTransform_1_Item__Const; // 0x170(0x8)
		FRigElementKey Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_RigUnit_GetTransform_3_Item__Const; // 0x178(0x8)
		FRigElementKey Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_RigUnit_GetTransform_2_1_Item__Const; // 0x180(0x8)
		bool Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_RigUnit_GetTransform_bInitial__Const; // 0x188(0x1)
		unsigned char UnknownData77_6[0x7]; // 0x189(0x7) UNKNOWN PROPERTY
		FRuntimeFloatCurve Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_RigVMFunction_AnimEvalRichCurve_Curve__Const; // 0x190(0x88)
		float Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_RigVMFunction_AnimEvalRichCurve_SourceMinimum__Const; // 0x218(0x4)
		float Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_RigVMFunction_AnimEvalRichCurve_SourceMaximum__Const; // 0x21C(0x4)
		FRuntimeFloatCurve Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_RigVMFunction_AnimEvalRichCurve_1_Curve__Const; // 0x220(0x88)
		float Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_RigUnit_SetTransform_Weight__Const; // 0x2A8(0x4)
		unsigned char UnknownData78_6[0x4]; // 0x2AC(0x4) UNKNOWN PROPERTY
		FTransform LocalVariableDefault__Push_Away_Parent_Offset_Transform__Const; // 0x2B0(0x60)
		float LocalVariableDefault__Push_Away_Distance__Const; // 0x310(0x4)
		ERigVMTransformSpace Push_Away___Push_Away_GetTransform_1_Space__Const; // 0x314(0x1)
		bool Push_Away___Push_Away_GetTransform_1_bInitial__Const; // 0x315(0x1)
		bool Push_Away___Push_Away_ProjectTransformToNewParent_1_bChildInitial__Const; // 0x316(0x1)
		unsigned char UnknownData79_6[0x1]; // 0x317(0x1) UNKNOWN PROPERTY
		FRigElementKey Push_Away___Push_Away_ProjectTransformToNewParent_1_OldParent__Const; // 0x318(0x8)
		FTransform Push_Away___Push_Away_Multiply_A__Const; // 0x320(0x60)
		FLinearColor Push_Away___Push_Away_Interpolate_3_A__Const; // 0x380(0x10)
		FLinearColor Push_Away___Push_Away_Interpolate_3_B__Const; // 0x390(0x10)
		float Push_Away___Push_Away_DISPATCH_RigVMDispatch_If_True__Const; // 0x3A0(0x4)
		unsigned char UnknownData80_6[0x4]; // 0x3A4(0x4) UNKNOWN PROPERTY
		double Push_Away___Push_Away_Remap_2_TargetMinimum__Const; // 0x3A8(0x8)
		double Push_Away___Push_Away_Remap_2_TargetMaximum__Const; // 0x3B0(0x8)
		float Push_Away___Push_Away_RigVMFunction_DebugArcNoSpace_MaximumDegrees__Const; // 0x3B8(0x4)
		float Push_Away___Push_Away_RigVMFunction_DebugArcNoSpace_Thickness__Const; // 0x3BC(0x4)
		int32_t Push_Away___Push_Away_RigVMFunction_DebugArcNoSpace_Detail__Const; // 0x3C0(0x4)
		unsigned char UnknownData81_6[0xC]; // 0x3C4(0xC) UNKNOWN PROPERTY
		FTransform Push_Away___Push_Away_RigVMFunction_DebugArcNoSpace_WorldOffset__Const; // 0x3D0(0x60)
		float Push_Away___Push_Away_DISPATCH_RigVMDispatch_If_1_True__Const; // 0x430(0x4)
		int32_t Push_Away___Push_Away_RigVMFunction_DebugArcNoSpace_1_Detail__Const; // 0x434(0x4)
		ERigUnitDebugTransformMode Push_Away___Push_Away_RigVMFunction_DebugTransformMutableNoSpace_Mode__Const; // 0x438(0x1)
		unsigned char UnknownData82_6[0x3]; // 0x439(0x3) UNKNOWN PROPERTY
		float Push_Away___Push_Away_RigVMFunction_DebugTransformMutableNoSpace_Scale__Const; // 0x43C(0x4)
		FTransform Push_Away___Push_Away_RigVMFunction_DebugTransformMutableNoSpace_WorldOffset__Const; // 0x440(0x60)
		FLinearColor Push_Away___Push_Away_RigVMFunction_DebugTransformMutableNoSpace_1_Color__Const; // 0x4A0(0x10)
		float Push_Away___Push_Away_RigVMFunction_DebugTransformMutableNoSpace_1_Scale__Const; // 0x4B0(0x4)
		unsigned char UnknownData83_6[0x4]; // 0x4B4(0x4) UNKNOWN PROPERTY
		FString Push_Away___Push_Away_DISPATCH_RigVMDispatch_Print_Prefix__Const; // 0x4B8(0x10)
		float Push_Away___Push_Away_DISPATCH_RigVMDispatch_Print_ScreenDuration__Const; // 0x4C8(0x4)
		FLinearColor Push_Away___Push_Away_DISPATCH_RigVMDispatch_Print_ScreenColor__Const; // 0x4CC(0x10)
		FRigElementKey Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_ItemExists_Item__Const; // 0x4DC(0x8)
		FRigElementKey Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_ItemExists_1_Item__Const; // 0x4E4(0x8)
		FName Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_DISPATCH_RigDispatch_GetMetadata_1_Name__Const; // 0x4EC(0x4)
		TArray Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_DISPATCH_RigDispatch_GetMetadata_1_Default__Const; // 0x4F0(0x10)
		FName Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_GetCurveValue_Curve__Const; // 0x500(0x4)
		FName Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_DISPATCH_RigDispatch_GetMetadata_4_2_Name__Const; // 0x504(0x4)
		TArray Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_DISPATCH_RigDispatch_GetMetadata_4_2_Default__Const; // 0x508(0x10)
		FName Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_DISPATCH_RigDispatch_GetMetadata_1_1_1_1_1_2_Name__Const; // 0x518(0x4)
		FName Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_DISPATCH_RigDispatch_GetMetadata_1_1_1_1_2_Name__Const; // 0x51C(0x4)
		TArray Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_DISPATCH_RigDispatch_GetMetadata_1_1_1_1_2_Default__Const; // 0x520(0x10)
		FName Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_DISPATCH_RigDispatch_GetMetadata_4_1_Name__Const; // 0x530(0x4)
		FName Transform_Mouth_Registration_Point_1_1___Transform_Mouth_Registration_Point_GetCurveValue_Curve__Const; // 0x534(0x4)
		ERigVMTransformSpace Transform_Mouth_Registration_Point_1_1___Transform_Mouth_Registration_Point_RigUnit_SetTransform_Space__Const; // 0x538(0x1)
		bool Transform_Mouth_Registration_Point_1_1___Transform_Mouth_Registration_Point_RigUnit_SetTransform_bInitial__Const; // 0x539(0x1)
		unsigned char UnknownData84_6[0x2]; // 0x53A(0x2) UNKNOWN PROPERTY
		FName Transform_Mouth_Registration_Point_1_1___Transform_Mouth_Registration_Point_GetCurveValue_1_Curve__Const; // 0x53C(0x4)
		double Transform_Mouth_Registration_Point_1_1___Transform_Mouth_Registration_Point_GreaterEqual_B__Const; // 0x540(0x8)
		FVector Transform_Mouth_Registration_Point_1_1___Transform_Mouth_Registration_Point_DISPATCH_RigVMDispatch_If_True__Const; // 0x548(0x18)
		FVector Transform_Mouth_Registration_Point_1_1___Transform_Mouth_Registration_Point_DISPATCH_RigVMDispatch_If_False__Const; // 0x560(0x18)
		FRigElementKey Transform_Mouth_Registration_Point_1_1___Transform_Mouth_Registration_Point_RigUnit_GetTransform_5_Item__Const; // 0x578(0x8)
		float Transform_Mouth_Registration_Point_1_1___Transform_Mouth_Registration_Point_RigUnit_SetTransform_Weight__Const; // 0x580(0x4)
		bool Transform_Mouth_Registration_Point_1_1___Transform_Mouth_Registration_Point_RigUnit_SetTransform_bPropagateToChildren__Const; // 0x584(0x1)
		unsigned char UnknownData85_6[0x3]; // 0x585(0x3) UNKNOWN PROPERTY
		TArray Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_RigUnit_ItemArray_Items__Const; // 0x588(0x10)
		ERigVMTransformSpace Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_RigUnit_SetTransform_1_Space__Const; // 0x598(0x1)
		unsigned char UnknownData86_6[0x3]; // 0x599(0x3) UNKNOWN PROPERTY
		float Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_DISPATCH_RigVMDispatch_SelectInt32_Values_0__Const; // 0x59C(0x4)
		float Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_DISPATCH_RigVMDispatch_SelectInt32_Values_1__Const; // 0x5A0(0x4)
		unsigned char UnknownData87_6[0x4]; // 0x5A4(0x4) UNKNOWN PROPERTY
		double Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_Remap_SourceMinimum__Const; // 0x5A8(0x8)
		double Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_Remap_SourceMaximum__Const; // 0x5B0(0x8)
		double Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_Remap_TargetMinimum__Const; // 0x5B8(0x8)
		double Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_Remap_TargetMaximum__Const; // 0x5C0(0x8)
		FName Update_Character_Accent_Curves___Update_Character_Accent_Curves_Concat_A__Const; // 0x5C8(0x4)
		int32_t Update_Character_Accent_Curves___Update_Character_Accent_Curves_Add_B__Const; // 0x5CC(0x4)
		FName Update_Character_Accent_Curves___Update_Character_Accent_Curves_Concat_1_1_B__Const; // 0x5D0(0x4)
		unsigned char UnknownData88_6[0xC]; // 0x5D4(0xC) UNKNOWN PROPERTY
		FTransform Update_Character_Accent_Curves___Update_Character_Accent_Curves_Multiply_1_Multiply_1_A__Const; // 0x5E0(0x60)
		FVector Update_Character_Accent_Curves___Update_Character_Accent_Curves_DISPATCH_RigVMDispatch_If_1_False__Const; // 0x640(0x18)
		double Accent_Initial_Vector_to_Local_Transform___Accent_Initial_Vector_to_Local_Transform_MathFloatDiv_1_A__Const; // 0x658(0x8)
		double Accent_Initial_Vector_to_Local_Transform___Accent_Initial_Vector_to_Local_Transform_MathFloatDiv_1_B__Const; // 0x660(0x8)
		EEulerRotationOrder Accent_Initial_Vector_to_Local_Transform___Accent_Initial_Vector_to_Local_Transform_RigVMFunction_MathQuaternionFromEuler_RotationOrder__Const; // 0x668(0x1)
		unsigned char UnknownData89_6[0x3]; // 0x669(0x3) UNKNOWN PROPERTY
		FRigElementKey Update_Character_Accent_Curves___Update_Character_Accent_Curves_RigUnit_GetTransform_Item__Const; // 0x66C(0x8)
		ERigVMTransformSpace Update_Character_Accent_Curves___Update_Character_Accent_Curves_RigUnit_GetTransform_Space__Const; // 0x674(0x1)
		bool Update_Character_Accent_Curves___Update_Character_Accent_Curves_RigUnit_GetTransform_bInitial__Const; // 0x675(0x1)
		unsigned char UnknownData90_6[0x2]; // 0x676(0x2) UNKNOWN PROPERTY
		FRigElementKey Update_Character_Accent_Curves___Update_Character_Accent_Curves_Item_Item__Const; // 0x678(0x8)
		bool Update_Character_Accent_Curves___Update_Character_Accent_Curves_GetTransform_1_1_bInitial__Const; // 0x680(0x1)
		unsigned char UnknownData91_6[0x7]; // 0x681(0x7) UNKNOWN PROPERTY
		FVector Update_Character_Accent_Curves___Update_Character_Accent_Curves_MathQuaternionSwingTwist_TwistAxis__Const; // 0x688(0x18)
		double Update_Character_Accent_Curves___Update_Character_Accent_Curves_MathFloatDiv_A__Const; // 0x6A0(0x8)
		double Update_Character_Accent_Curves___Update_Character_Accent_Curves_MathFloatDiv_B__Const; // 0x6A8(0x8)
		FName Update_Character_Accent_Curves___Update_Character_Accent_Curves_Concat_1_1_1_B__Const; // 0x6B0(0x4)
		FName Update_Character_Accent_Curves___Update_Character_Accent_Curves_Concat_1_1_1_1_B__Const; // 0x6B4(0x4)
		FName Update_Character_Accent_Curves___Update_Character_Accent_Curves_Concat_1_1_1_1_1_B__Const; // 0x6B8(0x4)
		FName Update_Character_Accent_Curves___Update_Character_Accent_Curves_Concat_1_1_1_1_1_1_B__Const; // 0x6BC(0x4)
		int32_t Solve_Character_Accent_Anim_Override___Solve_Character_Accent_Anim_Override_Greater_B__Const; // 0x6C0(0x4)
		FName Solve_Character_Accent_Anim_Override___Solve_Character_Accent_Anim_Override_Concat_Concat_A__Const; // 0x6C4(0x4)
		int32_t Solve_Character_Accent_Anim_Override___Solve_Character_Accent_Anim_Override_Add_B__Const; // 0x6C8(0x4)
		FName Solve_Character_Accent_Anim_Override___Solve_Character_Accent_Anim_Override_Concat_Concat_1_B__Const; // 0x6CC(0x4)
		double Solve_Character_Accent_Anim_Override___Solve_Character_Accent_Anim_Override_GreaterEqual_B__Const; // 0x6D0(0x8)
		FName Solve_Character_Accent_Anim_Override___Solve_Character_Accent_Anim_Override_Concat_1_Concat_1_B__Const; // 0x6D8(0x4)
		float Solve_Character_Accent_Anim_Override___Solve_Character_Accent_Anim_Override_SetCurveValue_Value__Const; // 0x6DC(0x4)
		FName Solve_Character_Accent_Anim_Override___Solve_Character_Accent_Anim_Override_Concat_1_1_Concat_1_B__Const; // 0x6E0(0x4)
		FRigElementKey Head_Constraints___Head_Constraints_Roll_Locked_RigUnit_SetRotation_1_Item__Const; // 0x6E4(0x8)
		ERigVMTransformSpace Head_Constraints___Head_Constraints_Roll_Locked_RigUnit_SetRotation_1_Space__Const; // 0x6EC(0x1)
		bool Head_Constraints___Head_Constraints_Roll_Locked_RigUnit_SetRotation_1_bInitial__Const; // 0x6ED(0x1)
		unsigned char UnknownData92_6[0x2]; // 0x6EE(0x2) UNKNOWN PROPERTY
		FVector Head_Constraints___Head_Constraints_Roll_Locked_RigVMFunction_MathQuaternionSwingTwist_1_TwistAxis__Const; // 0x6F0(0x18)
		float Head_Constraints___Head_Constraints_Roll_Locked_RigUnit_SetRotation_1_Weight__Const; // 0x708(0x4)
		bool Head_Constraints___Head_Constraints_Roll_Locked_RigUnit_SetRotation_1_bPropagateToChildren__Const; // 0x70C(0x1)
		unsigned char UnknownData93_6[0x3]; // 0x70D(0x3) UNKNOWN PROPERTY
		FVector Head_Constraints___Head_Constraints_Pitch_Locked_RigVMFunction_MathQuaternionSwingTwist_1_TwistAxis__Const; // 0x710(0x18)
		FVector Head_Constraints___Head_Constraints_Yaw_Locked_RigVMFunction_MathQuaternionSwingTwist_1_TwistAxis__Const; // 0x728(0x18)
		FRigElementKey Head_Constraints___Head_Constraints_Yaw_Roll_10_Pitch_Back_Ease_15_RigUnit_SetRotation_Item__Const; // 0x740(0x8)
		double Head_Constraints___Head_Constraints_Yaw_Roll_10_Pitch_Back_Ease_15_GreaterEqual_B__Const; // 0x748(0x8)
		FQuat Head_Constraints___Head_Constraints_Yaw_Roll_10_Pitch_Back_Ease_15_DISPATCH_RigVMDispatch_SelectInt32_Values_0__Const; // 0x750(0x20)
		FQuat Head_Constraints___Head_Constraints_Yaw_Roll_10_Pitch_Back_Ease_15_Interpolate_2_A__Const; // 0x770(0x20)
		double Head_Constraints___Head_Constraints_Yaw_Roll_10_Pitch_Back_Ease_15_Remap_SourceMaximum__Const; // 0x790(0x8)
		double Head_Constraints___Head_Constraints_Yaw_Roll_10_Pitch_Back_Ease_15_Remap_TargetMinimum__Const; // 0x798(0x8)
		double Head_Constraints___Head_Constraints_Yaw_Roll_10_Pitch_Back_Ease_15_Remap_TargetMaximum__Const; // 0x7A0(0x8)
		float Head_Constraints___Head_Constraints_Yaw_Roll_10_Pitch_Back_Ease_15_Interpolate_T__Const; // 0x7A8(0x4)
		FName RigVMModel_Construction___DISPATCH_RigDispatch_SetMetadata_4_Name__Const; // 0x7AC(0x4)
		ERigMetaDataNameSpace RigVMModel_Construction___DISPATCH_RigDispatch_SetMetadata_4_NameSpace__Const; // 0x7B0(0x1)
		bool RigVMModel_Construction___DISPATCH_RigDispatch_SetMetadata_4_Value__Const; // 0x7B1(0x1)
		unsigned char UnknownData94_6[0x6]; // 0x7B2(0x6) UNKNOWN PROPERTY
		TArray RigVMModel_Construction___RigUnit_ItemArray_Items__Const; // 0x7B8(0x10)
		FRigElementKey RigVMModel_Construction___DISPATCH_RigDispatch_SetMetadata_1_Item__Const; // 0x7C8(0x8)
		FName RigVMModel_Construction___DISPATCH_RigDispatch_SetMetadata_1_Name__Const; // 0x7D0(0x4)
		FName RigVMModel_Construction___DISPATCH_RigDispatch_SetMetadata_1_Value__Const; // 0x7D4(0x4)
		FRigElementKey RigVMModel_Construction___DISPATCH_RigDispatch_SetMetadata_1_1_Item__Const; // 0x7D8(0x8)
		FName RigVMModel_Construction___DISPATCH_RigDispatch_SetMetadata_1_1_Value__Const; // 0x7E0(0x4)
		FRigElementKey RigVMModel_Construction___DISPATCH_RigDispatch_SetMetadata_1_2_Item__Const; // 0x7E4(0x8)
		FName RigVMModel_Construction___DISPATCH_RigDispatch_SetMetadata_1_2_Value__Const; // 0x7EC(0x4)
		FRigElementKey RigVMModel_Construction___DISPATCH_RigDispatch_SetMetadata_1_3_Item__Const; // 0x7F0(0x8)
		FName RigVMModel_Construction___DISPATCH_RigDispatch_SetMetadata_1_3_Value__Const; // 0x7F8(0x4)
		FRigElementKey RigVMModel_Construction___DISPATCH_RigDispatch_SetMetadata_1_4_Item__Const; // 0x7FC(0x8)
		FName RigVMModel_Construction___DISPATCH_RigDispatch_SetMetadata_1_4_Value__Const; // 0x804(0x4)
		FRigElementKey RigVMModel_Construction___DISPATCH_RigDispatch_SetMetadata_1_1_1_Item__Const; // 0x808(0x8)
		FName RigVMModel_Construction___DISPATCH_RigDispatch_SetMetadata_1_1_1_Value__Const; // 0x810(0x4)
		FRigElementKey RigVMModel_Construction___DISPATCH_RigDispatch_SetMetadata_1_2_1_Item__Const; // 0x814(0x8)
		FName RigVMModel_Construction___DISPATCH_RigDispatch_SetMetadata_1_2_1_Value__Const; // 0x81C(0x4)
		FRigElementKey RigVMModel_Construction___DISPATCH_RigDispatch_SetMetadata_1_3_1_Item__Const; // 0x820(0x8)
		FName RigVMModel_Construction___DISPATCH_RigDispatch_SetMetadata_1_3_1_Value__Const; // 0x828(0x4)
		FRigElementKey RigVMModel_Construction___DISPATCH_RigDispatch_SetMetadata_1_4_1_Item__Const; // 0x82C(0x8)
		FName RigVMModel_Construction___DISPATCH_RigDispatch_SetMetadata_1_4_1_Value__Const; // 0x834(0x4)
		FName RigVMModel_Construction___DISPATCH_RigDispatch_SetMetadata_1_4_1_1_Name__Const; // 0x838(0x4)
		bool RigVMModel_Construction___DISPATCH_RigDispatch_SetMetadata_1_4_1_1_Value__Const; // 0x83C(0x1)
		unsigned char UnknownData95_6[0x3]; // 0x83D(0x3) UNKNOWN PROPERTY
		FString RigVMModel_Construction___DISPATCH_RigDispatch_GetUserData_NameSpace__Const; // 0x840(0x10)
		FString RigVMModel_Construction___DISPATCH_RigDispatch_GetUserData_Path__Const; // 0x850(0x10)
		FString RigVMModel_Construction___DISPATCH_RigDispatch_GetUserData_7_Path__Const; // 0x860(0x10)
		FString RigVMModel_Construction___DISPATCH_RigDispatch_GetUserData_1_Path__Const; // 0x870(0x10)
		FString RigVMModel_Construction___DISPATCH_RigDispatch_GetUserData_1_1_1_1_1_1_1_1_Path__Const; // 0x880(0x10)
		FVector RigVMModel_Construction___DISPATCH_RigDispatch_GetUserData_1_1_1_1_1_1_1_1_Default__Const; // 0x890(0x18)
		FString RigVMModel_Construction___DISPATCH_RigDispatch_GetUserData_1_1_Path__Const; // 0x8A8(0x10)
		FString RigVMModel_Construction___DISPATCH_RigDispatch_GetUserData_1_1_1_1_Path__Const; // 0x8B8(0x10)
		double RigVMModel_Construction___DISPATCH_RigDispatch_GetUserData_1_1_1_1_Default__Const; // 0x8C8(0x8)
		FString RigVMModel_Construction___DISPATCH_RigDispatch_GetUserData_1_1_1_1_1_1_Path__Const; // 0x8D0(0x10)
		FString RigVMModel_Construction___DISPATCH_RigDispatch_GetUserData_1_1_1_Path__Const; // 0x8E0(0x10)
		FString RigVMModel_Construction___DISPATCH_RigDispatch_GetUserData_1_1_1_1_1_Path__Const; // 0x8F0(0x10)
		FString RigVMModel_Construction___DISPATCH_RigDispatch_GetUserData_1_1_1_1_1_1_1_Path__Const; // 0x900(0x10)
		FString RigVMModel_Construction___DISPATCH_RigDispatch_GetUserData_4_NameSpace__Const; // 0x910(0x10)
		FString RigVMModel_Construction___DISPATCH_RigDispatch_GetUserData_4_Path__Const; // 0x920(0x10)
		TArray RigVMModel_Construction___DISPATCH_RigDispatch_GetUserData_4_Default__Const; // 0x930(0x10)
		FRigElementKey LocalVariableDefault__Construct_Control_at_UV_Cord_Spawned_Control__Const; // 0x940(0x8)
		FRigElementKey Construct_Control_at_UV_Cord___Construct_Control_at_UV_Cord_SpawnControl_Parent__Const; // 0x948(0x8)
		FTransform Construct_Control_at_UV_Cord___Construct_Control_at_UV_Cord_Multiply_2_A__Const; // 0x950(0x60)
		ERigVMTransformSpace Construct_Control_at_UV_Cord___Construct_Control_at_UV_Cord_SpawnControl_OffsetSpace__Const; // 0x9B0(0x1)
		unsigned char UnknownData96_6[0xF]; // 0x9B1(0xF) UNKNOWN PROPERTY
		FTransform Construct_Control_at_UV_Cord___Construct_Control_at_UV_Cord_SpawnControl_InitialValue__Const; // 0x9C0(0x60)
		FRigUnit_HierarchyAddControlTransform_Settings Construct_Control_at_UV_Cord___Construct_Control_at_UV_Cord_SpawnControl_Settings__Const; // 0xA20(0x180)
		FString RigVMModel_Construction___DISPATCH_RigDispatch_GetUserData_6_2_Path__Const; // 0xBA0(0x10)
		TArray RigVMModel_Construction___DISPATCH_RigDispatch_GetUserData_6_2_Default__Const; // 0xBB0(0x10)
		FString RigVMModel_Construction___DISPATCH_RigDispatch_GetUserData_5_Path__Const; // 0xBC0(0x10)
		TArray RigVMModel_Construction___DISPATCH_RigDispatch_GetUserData_5_Default__Const; // 0xBD0(0x10)
		FRigElementKey RigVMModel_Construction___RigUnit_SetTransform_5_Item__Const; // 0xBE0(0x8)
		ERigVMTransformSpace RigVMModel_Construction___RigUnit_SetTransform_5_Space__Const; // 0xBE8(0x1)
		unsigned char UnknownData97_6[0x3]; // 0xBE9(0x3) UNKNOWN PROPERTY
		FRigElementKey RigVMModel_Construction___RigUnit_GetTransform_1_Item__Const; // 0xBEC(0x8)
		float RigVMModel_Construction___RigUnit_SetTransform_5_Weight__Const; // 0xBF4(0x4)
		FName RigVMModel_Construction___DISPATCH_RigVMDispatch_ArrayFind_1_Element__Const; // 0xBF8(0x4)
		FRigElementKey RigVMModel_Construction___DISPATCH_RigDispatch_SetMetadata_6_1_5_1_Item__Const; // 0xBFC(0x8)
		FRigElementKey RigVMModel_Construction___DISPATCH_RigDispatch_SetMetadata_6_1_5_1_2_Item__Const; // 0xC04(0x8)
		int32_t RigVMModel_Construction___Greater_B__Const; // 0xC0C(0x4)
		FString RigVMModel_Construction___DISPATCH_RigDispatch_GetUserData_3_NameSpace__Const; // 0xC10(0x10)
		FString RigVMModel_Construction___DISPATCH_RigDispatch_GetUserData_3_1_Path__Const; // 0xC20(0x10)
		TArray RigVMModel_Construction___DISPATCH_RigDispatch_GetUserData_3_1_Default__Const; // 0xC30(0x10)
		FString RigVMModel_Construction___DISPATCH_RigDispatch_GetUserData_3_Path__Const; // 0xC40(0x10)
		TArray RigVMModel_Construction___DISPATCH_RigDispatch_GetUserData_3_Default__Const; // 0xC50(0x10)
		FRigElementKey RigVMModel_Construction___Init_Mouth_Registration_Registration_Control__Const; // 0xC60(0x8)
		FString RigVMModel_Construction___Init_Mouth_Registration_User_Data_Path__Const; // 0xC68(0x10)
		FRigElementKey RigVMModel_Construction___Init_Mouth_Registration_Registration_Control_Mirror__Const; // 0xC78(0x8)
		FName Init_Mouth_Registration___Init_Mouth_Registration_DISPATCH_RigDispatch_GetMetadata_Name__Const; // 0xC80(0x4)
		ERigMetaDataNameSpace Init_Mouth_Registration___Init_Mouth_Registration_DISPATCH_RigDispatch_GetMetadata_NameSpace__Const; // 0xC84(0x1)
		bool Init_Mouth_Registration___Init_Mouth_Registration_DISPATCH_RigDispatch_GetMetadata_Default__Const; // 0xC85(0x1)
		unsigned char UnknownData98_6[0x2]; // 0xC86(0x2) UNKNOWN PROPERTY
		FName Init_Mouth_Registration___Init_Mouth_Registration_DISPATCH_RigDispatch_SetMetadata_Name__Const; // 0xC88(0x4)
		unsigned char UnknownData99_6[0x4]; // 0xC8C(0x4) UNKNOWN PROPERTY
		FString Init_Mouth_Registration___Init_Mouth_Registration_DISPATCH_RigDispatch_GetUserData_2_NameSpace__Const; // 0xC90(0x10)
		TArray Init_Mouth_Registration___Init_Mouth_Registration_DISPATCH_RigDispatch_GetUserData_2_Default__Const; // 0xCA0(0x10)
		FName Init_Mouth_Registration___Init_Mouth_Registration_DISPATCH_RigDispatch_SetMetadata_3_1_Name__Const; // 0xCB0(0x4)
		int32_t Init_Mouth_Registration___Init_Mouth_Registration_Greater_1_B__Const; // 0xCB4(0x4)
		ERigVMTransformSpace Init_Mouth_Registration___Init_Mouth_Registration_RigUnit_SetTransform_Space__Const; // 0xCB8(0x1)
		bool Init_Mouth_Registration___Init_Mouth_Registration_RigUnit_SetTransform_bInitial__Const; // 0xCB9(0x1)
		unsigned char UnknownData100_6[0x2]; // 0xCBA(0x2) UNKNOWN PROPERTY
		FRigElementKey Init_Mouth_Registration___Init_Mouth_Registration_RigUnit_GetTransform_Item__Const; // 0xCBC(0x8)
		float Init_Mouth_Registration___Init_Mouth_Registration_RigUnit_SetTransform_Weight__Const; // 0xCC4(0x4)
		FString RigVMModel_Construction___Init_Mouth_Registration_1_User_Data_Path__Const; // 0xCC8(0x10)
		FName Init_Mouth_Registration_1___Init_Mouth_Registration_DISPATCH_RigDispatch_GetMetadata_Name__Const; // 0xCD8(0x4)
		ERigMetaDataNameSpace Init_Mouth_Registration_1___Init_Mouth_Registration_DISPATCH_RigDispatch_GetMetadata_NameSpace__Const; // 0xCDC(0x1)
		bool Init_Mouth_Registration_1___Init_Mouth_Registration_DISPATCH_RigDispatch_GetMetadata_Default__Const; // 0xCDD(0x1)
		unsigned char UnknownData101_6[0x2]; // 0xCDE(0x2) UNKNOWN PROPERTY
		FName Init_Mouth_Registration_1___Init_Mouth_Registration_DISPATCH_RigDispatch_SetMetadata_Name__Const; // 0xCE0(0x4)
		unsigned char UnknownData102_6[0x4]; // 0xCE4(0x4) UNKNOWN PROPERTY
		FString Init_Mouth_Registration_1___Init_Mouth_Registration_DISPATCH_RigDispatch_GetUserData_2_NameSpace__Const; // 0xCE8(0x10)
		TArray Init_Mouth_Registration_1___Init_Mouth_Registration_DISPATCH_RigDispatch_GetUserData_2_Default__Const; // 0xCF8(0x10)
		FName Init_Mouth_Registration_1___Init_Mouth_Registration_DISPATCH_RigDispatch_SetMetadata_3_1_Name__Const; // 0xD08(0x4)
		int32_t Init_Mouth_Registration_1___Init_Mouth_Registration_Greater_1_B__Const; // 0xD0C(0x4)
		ERigVMTransformSpace Init_Mouth_Registration_1___Init_Mouth_Registration_RigUnit_SetTransform_Space__Const; // 0xD10(0x1)
		bool Init_Mouth_Registration_1___Init_Mouth_Registration_RigUnit_SetTransform_bInitial__Const; // 0xD11(0x1)
		unsigned char UnknownData103_6[0x2]; // 0xD12(0x2) UNKNOWN PROPERTY
		FRigElementKey Init_Mouth_Registration_1___Init_Mouth_Registration_RigUnit_GetTransform_Item__Const; // 0xD14(0x8)
		float Init_Mouth_Registration_1___Init_Mouth_Registration_RigUnit_SetTransform_Weight__Const; // 0xD1C(0x4)
		FString RigVMModel_Construction___Init_Mouth_Registration_1_1_User_Data_Path__Const; // 0xD20(0x10)
		FName Init_Mouth_Registration_1_1___Init_Mouth_Registration_DISPATCH_RigDispatch_GetMetadata_Name__Const; // 0xD30(0x4)
		ERigMetaDataNameSpace Init_Mouth_Registration_1_1___Init_Mouth_Registration_DISPATCH_RigDispatch_GetMetadata_NameSpace__Const; // 0xD34(0x1)
		bool Init_Mouth_Registration_1_1___Init_Mouth_Registration_DISPATCH_RigDispatch_GetMetadata_Default__Const; // 0xD35(0x1)
		unsigned char UnknownData104_6[0x2]; // 0xD36(0x2) UNKNOWN PROPERTY
		FName Init_Mouth_Registration_1_1___Init_Mouth_Registration_DISPATCH_RigDispatch_SetMetadata_Name__Const; // 0xD38(0x4)
		unsigned char UnknownData105_6[0x4]; // 0xD3C(0x4) UNKNOWN PROPERTY
		FString Init_Mouth_Registration_1_1___Init_Mouth_Registration_DISPATCH_RigDispatch_GetUserData_2_NameSpace__Const; // 0xD40(0x10)
		TArray Init_Mouth_Registration_1_1___Init_Mouth_Registration_DISPATCH_RigDispatch_GetUserData_2_Default__Const; // 0xD50(0x10)
		FName Init_Mouth_Registration_1_1___Init_Mouth_Registration_DISPATCH_RigDispatch_SetMetadata_3_1_Name__Const; // 0xD60(0x4)
		int32_t Init_Mouth_Registration_1_1___Init_Mouth_Registration_Greater_1_B__Const; // 0xD64(0x4)
		ERigVMTransformSpace Init_Mouth_Registration_1_1___Init_Mouth_Registration_RigUnit_SetTransform_Space__Const; // 0xD68(0x1)
		bool Init_Mouth_Registration_1_1___Init_Mouth_Registration_RigUnit_SetTransform_bInitial__Const; // 0xD69(0x1)
		unsigned char UnknownData106_6[0x2]; // 0xD6A(0x2) UNKNOWN PROPERTY
		FRigElementKey Init_Mouth_Registration_1_1___Init_Mouth_Registration_RigUnit_GetTransform_Item__Const; // 0xD6C(0x8)
		float Init_Mouth_Registration_1_1___Init_Mouth_Registration_RigUnit_SetTransform_Weight__Const; // 0xD74(0x4)
		FString RigVMModel_Construction___Init_Mouth_Registration_1_1_1_User_Data_Path__Const; // 0xD78(0x10)
		FRigElementKey RigVMModel_Construction___Init_Mouth_Registration_1_1_1_Registration_Control_Mirror__Const; // 0xD88(0x8)
		FName Init_Mouth_Registration_1_1_1___Init_Mouth_Registration_DISPATCH_RigDispatch_GetMetadata_Name__Const; // 0xD90(0x4)
		ERigMetaDataNameSpace Init_Mouth_Registration_1_1_1___Init_Mouth_Registration_DISPATCH_RigDispatch_GetMetadata_NameSpace__Const; // 0xD94(0x1)
		bool Init_Mouth_Registration_1_1_1___Init_Mouth_Registration_DISPATCH_RigDispatch_GetMetadata_Default__Const; // 0xD95(0x1)
		unsigned char UnknownData107_6[0x2]; // 0xD96(0x2) UNKNOWN PROPERTY
		FName Init_Mouth_Registration_1_1_1___Init_Mouth_Registration_DISPATCH_RigDispatch_SetMetadata_Name__Const; // 0xD98(0x4)
		unsigned char UnknownData108_6[0x4]; // 0xD9C(0x4) UNKNOWN PROPERTY
		FString Init_Mouth_Registration_1_1_1___Init_Mouth_Registration_DISPATCH_RigDispatch_GetUserData_2_NameSpace__Const; // 0xDA0(0x10)
		TArray Init_Mouth_Registration_1_1_1___Init_Mouth_Registration_DISPATCH_RigDispatch_GetUserData_2_Default__Const; // 0xDB0(0x10)
		FName Init_Mouth_Registration_1_1_1___Init_Mouth_Registration_DISPATCH_RigDispatch_SetMetadata_3_1_Name__Const; // 0xDC0(0x4)
		int32_t Init_Mouth_Registration_1_1_1___Init_Mouth_Registration_Greater_1_B__Const; // 0xDC4(0x4)
		ERigVMTransformSpace Init_Mouth_Registration_1_1_1___Init_Mouth_Registration_RigUnit_SetTransform_Space__Const; // 0xDC8(0x1)
		bool Init_Mouth_Registration_1_1_1___Init_Mouth_Registration_RigUnit_SetTransform_bInitial__Const; // 0xDC9(0x1)
		unsigned char UnknownData109_6[0x2]; // 0xDCA(0x2) UNKNOWN PROPERTY
		FRigElementKey Init_Mouth_Registration_1_1_1___Init_Mouth_Registration_RigUnit_GetTransform_Item__Const; // 0xDCC(0x8)
		float Init_Mouth_Registration_1_1_1___Init_Mouth_Registration_RigUnit_SetTransform_Weight__Const; // 0xDD4(0x4)
		FString RigVMModel_Construction___Init_Mouth_Registration_1_1_2_User_Data_Path__Const; // 0xDD8(0x10)
		FName Init_Mouth_Registration_1_1_2___Init_Mouth_Registration_DISPATCH_RigDispatch_GetMetadata_Name__Const; // 0xDE8(0x4)
		ERigMetaDataNameSpace Init_Mouth_Registration_1_1_2___Init_Mouth_Registration_DISPATCH_RigDispatch_GetMetadata_NameSpace__Const; // 0xDEC(0x1)
		bool Init_Mouth_Registration_1_1_2___Init_Mouth_Registration_DISPATCH_RigDispatch_GetMetadata_Default__Const; // 0xDED(0x1)
		unsigned char UnknownData110_6[0x2]; // 0xDEE(0x2) UNKNOWN PROPERTY
		FName Init_Mouth_Registration_1_1_2___Init_Mouth_Registration_DISPATCH_RigDispatch_SetMetadata_Name__Const; // 0xDF0(0x4)
		unsigned char UnknownData111_6[0x4]; // 0xDF4(0x4) UNKNOWN PROPERTY
		FString Init_Mouth_Registration_1_1_2___Init_Mouth_Registration_DISPATCH_RigDispatch_GetUserData_2_NameSpace__Const; // 0xDF8(0x10)
		TArray Init_Mouth_Registration_1_1_2___Init_Mouth_Registration_DISPATCH_RigDispatch_GetUserData_2_Default__Const; // 0xE08(0x10)
		FName Init_Mouth_Registration_1_1_2___Init_Mouth_Registration_DISPATCH_RigDispatch_SetMetadata_3_1_Name__Const; // 0xE18(0x4)
		int32_t Init_Mouth_Registration_1_1_2___Init_Mouth_Registration_Greater_1_B__Const; // 0xE1C(0x4)
		ERigVMTransformSpace Init_Mouth_Registration_1_1_2___Init_Mouth_Registration_RigUnit_SetTransform_Space__Const; // 0xE20(0x1)
		bool Init_Mouth_Registration_1_1_2___Init_Mouth_Registration_RigUnit_SetTransform_bInitial__Const; // 0xE21(0x1)
		unsigned char UnknownData112_6[0x2]; // 0xE22(0x2) UNKNOWN PROPERTY
		FRigElementKey Init_Mouth_Registration_1_1_2___Init_Mouth_Registration_RigUnit_GetTransform_Item__Const; // 0xE24(0x8)
		float Init_Mouth_Registration_1_1_2___Init_Mouth_Registration_RigUnit_SetTransform_Weight__Const; // 0xE2C(0x4)
		FName RigVMModel_Construction___DISPATCH_RigDispatch_GetMetadata_5_Name__Const; // 0xE30(0x4)
		FRigElementKey RigVMModel_Construction___DISPATCH_RigDispatch_GetMetadata_5_Default__Const; // 0xE34(0x8)
		unsigned char UnknownData113_6[0x4]; // 0xE3C(0x4) UNKNOWN PROPERTY
		FString RigVMModel_Construction___Concat_2_A__Const; // 0xE40(0x10)
		int32_t RigVMModel_Construction___Chop_Count__Const; // 0xE50(0x4)
		FName Init_Mouth_Registration_1_1_2_1___Init_Mouth_Registration_DISPATCH_RigDispatch_GetMetadata_Name__Const; // 0xE54(0x4)
		ERigMetaDataNameSpace Init_Mouth_Registration_1_1_2_1___Init_Mouth_Registration_DISPATCH_RigDispatch_GetMetadata_NameSpace__Const; // 0xE58(0x1)
		bool Init_Mouth_Registration_1_1_2_1___Init_Mouth_Registration_DISPATCH_RigDispatch_GetMetadata_Default__Const; // 0xE59(0x1)
		unsigned char UnknownData114_6[0x2]; // 0xE5A(0x2) UNKNOWN PROPERTY
		FName Init_Mouth_Registration_1_1_2_1___Init_Mouth_Registration_DISPATCH_RigDispatch_SetMetadata_Name__Const; // 0xE5C(0x4)
		FString Init_Mouth_Registration_1_1_2_1___Init_Mouth_Registration_DISPATCH_RigDispatch_GetUserData_2_NameSpace__Const; // 0xE60(0x10)
		TArray Init_Mouth_Registration_1_1_2_1___Init_Mouth_Registration_DISPATCH_RigDispatch_GetUserData_2_Default__Const; // 0xE70(0x10)
		FName Init_Mouth_Registration_1_1_2_1___Init_Mouth_Registration_DISPATCH_RigDispatch_SetMetadata_3_1_Name__Const; // 0xE80(0x4)
		int32_t Init_Mouth_Registration_1_1_2_1___Init_Mouth_Registration_Greater_1_B__Const; // 0xE84(0x4)
		ERigVMTransformSpace Init_Mouth_Registration_1_1_2_1___Init_Mouth_Registration_RigUnit_SetTransform_Space__Const; // 0xE88(0x1)
		bool Init_Mouth_Registration_1_1_2_1___Init_Mouth_Registration_RigUnit_SetTransform_bInitial__Const; // 0xE89(0x1)
		unsigned char UnknownData115_6[0x2]; // 0xE8A(0x2) UNKNOWN PROPERTY
		FRigElementKey Init_Mouth_Registration_1_1_2_1___Init_Mouth_Registration_RigUnit_GetTransform_Item__Const; // 0xE8C(0x8)
		float Init_Mouth_Registration_1_1_2_1___Init_Mouth_Registration_RigUnit_SetTransform_Weight__Const; // 0xE94(0x4)
		TArray RigVMModel_Construction___RigUnit_ItemArray_1_Items__Const; // 0xE98(0x10)
		FName RigVMModel_Construction___DISPATCH_RigVMDispatch_ArrayFind_Element__Const; // 0xEA8(0x4)
		FName RigVMModel_Construction___DISPATCH_RigVMDispatch_ArrayFind_2_Element__Const; // 0xEAC(0x4)
		FRigElementKey RigVMModel_Construction___SpawnControl_Parent__Const; // 0xEB0(0x8)
		unsigned char UnknownData116_6[0x8]; // 0xEB8(0x8) UNKNOWN PROPERTY
		FTransform RigVMModel_Construction___SpawnControl_OffsetTransform__Const; // 0xEC0(0x60)
		ERigVMTransformSpace RigVMModel_Construction___SpawnControl_OffsetSpace__Const; // 0xF20(0x1)
		unsigned char UnknownData117_6[0xF]; // 0xF21(0xF) UNKNOWN PROPERTY
		FRigUnit_HierarchyAddControlTransform_Settings RigVMModel_Construction___SpawnControl_Settings__Const; // 0xF30(0x180)
		FName RigVMModel_Construction___DISPATCH_RigDispatch_SetMetadata_2_1_1_1_1_Name__Const; // 0x10B0(0x4)
		unsigned char UnknownData118_6[0x4]; // 0x10B4(0x4) UNKNOWN PROPERTY
		FString RigVMModel_Construction___DISPATCH_RigDispatch_GetUserData_1_1_1_1_2_1_NameSpace__Const; // 0x10B8(0x10)
		FString RigVMModel_Construction___DISPATCH_RigDispatch_GetUserData_1_1_1_1_2_1_Path__Const; // 0x10C8(0x10)
		TArray RigVMModel_Construction___DISPATCH_RigDispatch_GetUserData_1_1_1_1_2_1_Default__Const; // 0x10D8(0x10)
		TArray LocalVariableDefault__Find_CharactAcc_Names_Names__Const; // 0x10E8(0x10)
		TArray LocalVariable__FunctionLibrary___Find_CharactAcc_Names_VariableNode_2_Value__Const; // 0x10F8(0x10)
		FName Find_CharactAcc_Names___Find_CharactAcc_Names_Concat_Concat_A__Const; // 0x1108(0x4)
		int32_t Find_CharactAcc_Names___Find_CharactAcc_Names_Add_B__Const; // 0x110C(0x4)
		FName Find_CharactAcc_Names___Find_CharactAcc_Names_Concat_Concat_1_B__Const; // 0x1110(0x4)
		unsigned char UnknownData119_6[0x4]; // 0x1114(0x4) UNKNOWN PROPERTY
		FString Find_CharactAcc_Names___Find_CharactAcc_Names_DISPATCH_RigDispatch_GetUserData_6_1_2_NameSpace__Const; // 0x1118(0x10)
		FString Find_CharactAcc_Names___Find_CharactAcc_Names_DISPATCH_RigDispatch_GetUserData_6_1_2_Path__Const; // 0x1128(0x10)
		FName RigVMModel_Construction___DISPATCH_RigDispatch_SetMetadata_2_Name__Const; // 0x1138(0x4)
		FName RigVMModel_Construction___DISPATCH_RigDispatch_SetMetadata_2_1_1_1_1_2_1_1_Name__Const; // 0x113C(0x4)
		FString RigVMModel_Construction___DISPATCH_RigDispatch_GetUserData_6_1_1_2_Path__Const; // 0x1140(0x10)
		FName RigVMModel_Construction___DISPATCH_RigDispatch_SetMetadata_2_1_1_1_1_2_1_1_1_Name__Const; // 0x1150(0x4)
		unsigned char UnknownData120_6[0x4]; // 0x1154(0x4) UNKNOWN PROPERTY
		FString RigVMModel_Construction___DISPATCH_RigDispatch_GetUserData_6_1_1_2_1_Path__Const; // 0x1158(0x10)
		unsigned char UnknownData121_6[0x8]; // 0x1168(0x8) UNKNOWN PROPERTY
		FRigUnit_HierarchyAddControlTransform_Settings RigVMModel_Construction___SpawnControl_1_Settings__Const; // 0x1170(0x180)
		FString RigVMModel_Construction___DISPATCH_RigDispatch_GetUserData_6_1_1_1_Path__Const; // 0x12F0(0x10)
		FString RigVMModel_Construction___DISPATCH_RigDispatch_GetUserData_6_1_1_Path__Const; // 0x1300(0x10)
		FName Find_CharactAcc_Names_1___Find_CharactAcc_Names_Concat_Concat_A__Const; // 0x1310(0x4)
		int32_t Find_CharactAcc_Names_1___Find_CharactAcc_Names_Add_B__Const; // 0x1314(0x4)
		FName Find_CharactAcc_Names_1___Find_CharactAcc_Names_Concat_Concat_1_B__Const; // 0x1318(0x4)
		unsigned char UnknownData122_6[0x4]; // 0x131C(0x4) UNKNOWN PROPERTY
		FString Find_CharactAcc_Names_1___Find_CharactAcc_Names_DISPATCH_RigDispatch_GetUserData_6_1_2_NameSpace__Const; // 0x1320(0x10)
		FString Find_CharactAcc_Names_1___Find_CharactAcc_Names_DISPATCH_RigDispatch_GetUserData_6_1_2_Path__Const; // 0x1330(0x10)
		FName RigVMModel_Construction___DISPATCH_RigDispatch_SetMetadata_Name__Const; // 0x1340(0x4)
		unsigned char UnknownData123_6[0x4]; // 0x1344(0x4) UNKNOWN PROPERTY
		FString RigVMModel_Construction___DISPATCH_RigDispatch_GetUserData_6_1_1_1_1_Path__Const; // 0x1348(0x10)
		FString RigVMModel_Construction___DISPATCH_RigDispatch_GetUserData_6_1_1_2_1_1_Path__Const; // 0x1358(0x10)
		FString RigVMModel_Construction___DISPATCH_RigDispatch_GetUserData_4_1_Path__Const; // 0x1368(0x10)
		TArray RigVMModel_Construction___DISPATCH_RigDispatch_GetUserData_4_1_Default__Const; // 0x1378(0x10)
	};


	// Struct /Engine/Transient.PropertyBag_8601c999c12a580a
	// Size: 0x54FC (0x54FC - 0x0)
	struct FPropertyBag_8601c999c12a580a	
	{
	public:
		bool Solve_Face_Accessories___Solve_Face_Accessories_RigVMFunction_MathBoolAnd_1_Result; // 0x0(0x1)
		bool Solve_Face_Accessories___Solve_Face_Accessories_DISPATCH_RigDispatch_GetMetadata_3_Value; // 0x1(0x1)
		unsigned char UnknownData193_6[0x2]; // 0x2(0x2) UNKNOWN PROPERTY
		FRigElementKey Solve_Face_Accessories___Solve_Face_Accessories_DISPATCH_RigVMDispatch_ArrayIterator_Element; // 0x4(0x8)
		unsigned char UnknownData194_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		TArray Solve_Face_Accessories___Solve_Face_Accessories_DISPATCH_RigDispatch_GetMetadata_3_Cache; // 0x10(0x10)
		bool Solve_Face_Accessories___Solve_Face_Accessories_DISPATCH_RigDispatch_GetMetadata_3_Found; // 0x20(0x1)
		unsigned char UnknownData195_6[0x3]; // 0x21(0x3) UNKNOWN PROPERTY
		FName Solve_Face_Accessories___Solve_Face_Accessories_DISPATCH_RigDispatch_GetMetadata_Value; // 0x24(0x4)
		TArray Solve_Face_Accessories___Solve_Face_Accessories_DISPATCH_RigDispatch_GetMetadata_Cache; // 0x28(0x10)
		bool Solve_Face_Accessories___Solve_Face_Accessories_DISPATCH_RigDispatch_GetMetadata_Found; // 0x38(0x1)
		bool Solve_Face_Accessories___Solve_Face_Accessories_DISPATCH_RigDispatch_GetMetadata_3_2_Value; // 0x39(0x1)
		unsigned char UnknownData196_6[0x6]; // 0x3A(0x6) UNKNOWN PROPERTY
		TArray Solve_Face_Accessories___Solve_Face_Accessories_DISPATCH_RigDispatch_GetMetadata_3_2_Cache; // 0x40(0x10)
		bool Solve_Face_Accessories___Solve_Face_Accessories_DISPATCH_RigDispatch_GetMetadata_3_2_Found; // 0x50(0x1)
		unsigned char UnknownData197_6[0xF]; // 0x51(0xF) UNKNOWN PROPERTY
		FTransform Invert_Curve___Invert_Curve_Multiply_Result; // 0x60(0x60)
		FTransform Invert_Curve___Invert_Curve_Curve_to_Transform_Transform; // 0xC0(0x60)
		FQuat Curve_to_Transform___Curve_to_Transform_RigVMFunction_MathQuaternionFromEuler_Result; // 0x120(0x20)
		double Curve_to_Transform___Curve_to_Transform_Divide_2_Result; // 0x140(0x8)
		float Curve_to_Transform___Curve_to_Transform_GetCurveValue_1_1_1_1_2_Value; // 0x148(0x4)
		FName Curve_to_Transform___Curve_to_Transform_Concat_1_2_Result; // 0x14C(0x4)
		bool Curve_to_Transform___Curve_to_Transform_GetCurveValue_1_1_1_1_2_Valid; // 0x150(0x1)
		unsigned char UnknownData198_6[0x7]; // 0x151(0x7) UNKNOWN PROPERTY
		TArray Curve_to_Transform___Curve_to_Transform_GetCurveValue_1_1_1_1_2_CachedCurveIndex; // 0x158(0x10)
		double Curve_to_Transform___Curve_to_Transform_Divide_2_A; // 0x168(0x8)
		double Curve_to_Transform___Curve_to_Transform_MathFloatDiv_Result; // 0x170(0x8)
		FVector Curve_to_Transform___Curve_to_Transform_RigVMFunction_MathQuaternionFromEuler_Euler__IO; // 0x178(0x18)
		double Curve_to_Transform___Curve_to_Transform_Divide_Result; // 0x190(0x8)
		float Curve_to_Transform___Curve_to_Transform_GetCurveValue_1_2_1_Value; // 0x198(0x4)
		FName Curve_to_Transform___Curve_to_Transform_Concat_Result; // 0x19C(0x4)
		bool Curve_to_Transform___Curve_to_Transform_GetCurveValue_1_2_1_Valid; // 0x1A0(0x1)
		unsigned char UnknownData199_6[0x7]; // 0x1A1(0x7) UNKNOWN PROPERTY
		TArray Curve_to_Transform___Curve_to_Transform_GetCurveValue_1_2_1_CachedCurveIndex; // 0x1A8(0x10)
		double Curve_to_Transform___Curve_to_Transform_Divide_A; // 0x1B8(0x8)
		double Curve_to_Transform___Curve_to_Transform_Divide_1_Result; // 0x1C0(0x8)
		float Curve_to_Transform___Curve_to_Transform_GetCurveValue_1_1_1_1_Value; // 0x1C8(0x4)
		FName Curve_to_Transform___Curve_to_Transform_Concat_1_Result; // 0x1CC(0x4)
		bool Curve_to_Transform___Curve_to_Transform_GetCurveValue_1_1_1_1_Valid; // 0x1D0(0x1)
		unsigned char UnknownData200_6[0x7]; // 0x1D1(0x7) UNKNOWN PROPERTY
		TArray Curve_to_Transform___Curve_to_Transform_GetCurveValue_1_1_1_1_CachedCurveIndex; // 0x1D8(0x10)
		double Curve_to_Transform___Curve_to_Transform_Divide_1_A; // 0x1E8(0x8)
		float Curve_to_Transform___Curve_to_Transform_DISPATCH_RigVMDispatch_If_Result; // 0x1F0(0x4)
		bool Curve_to_Transform___Curve_to_Transform_DISPATCH_RigVMDispatch_If_Condition; // 0x1F4(0x1)
		unsigned char UnknownData201_6[0x3]; // 0x1F5(0x3) UNKNOWN PROPERTY
		double Curve_to_Transform___Curve_to_Transform_Negate_Result; // 0x1F8(0x8)
		float Curve_to_Transform___Curve_to_Transform_DISPATCH_RigVMDispatch_If_True; // 0x200(0x4)
		float Curve_to_Transform___Curve_to_Transform_DISPATCH_RigVMDispatch_If_False; // 0x204(0x4)
		double Curve_to_Transform___Curve_to_Transform_Divide_1_B; // 0x208(0x8)
		float Curve_to_Transform___Curve_to_Transform_GetCurveValue_1_2_1_1_Value; // 0x210(0x4)
		FName Curve_to_Transform___Curve_to_Transform_Concat_2_Result; // 0x214(0x4)
		bool Curve_to_Transform___Curve_to_Transform_GetCurveValue_1_2_1_1_Valid; // 0x218(0x1)
		unsigned char UnknownData202_6[0x7]; // 0x219(0x7) UNKNOWN PROPERTY
		TArray Curve_to_Transform___Curve_to_Transform_GetCurveValue_1_2_1_1_CachedCurveIndex; // 0x220(0x10)
		float Curve_to_Transform___Curve_to_Transform_GetCurveValue_1_1_1_1_1_Value; // 0x230(0x4)
		FName Curve_to_Transform___Curve_to_Transform_Concat_1_1_Result; // 0x234(0x4)
		bool Curve_to_Transform___Curve_to_Transform_GetCurveValue_1_1_1_1_1_Valid; // 0x238(0x1)
		unsigned char UnknownData203_6[0x7]; // 0x239(0x7) UNKNOWN PROPERTY
		TArray Curve_to_Transform___Curve_to_Transform_GetCurveValue_1_1_1_1_1_CachedCurveIndex; // 0x240(0x10)
		FTransform Invert_Curve___Invert_Curve_RigUnit_GetTransform_Transform; // 0x250(0x60)
		TArray Invert_Curve___Invert_Curve_RigUnit_GetTransform_CachedIndex; // 0x2B0(0x10)
		TArray Invert_Curve___Invert_Curve_RigUnit_SetTransform_1_1_CachedIndex; // 0x2C0(0x10)
		FName Solve_Face_Accessories___Solve_Face_Accessories_RigVMFunction_ControlFlowBranch_1_BlockToRun; // 0x2D0(0x4)
		unsigned char UnknownData204_6[0x4]; // 0x2D4(0x4) UNKNOWN PROPERTY
		TArray Solve_Face_Accessories___Solve_Face_Accessories_RigUnit_ItemArray_Items__IO; // 0x2D8(0x10)
		int32_t Solve_Face_Accessories___Solve_Face_Accessories_DISPATCH_RigVMDispatch_ArrayIterator_Index; // 0x2E8(0x4)
		int32_t Solve_Face_Accessories___Solve_Face_Accessories_DISPATCH_RigVMDispatch_ArrayIterator_Count; // 0x2EC(0x4)
		float Solve_Face_Accessories___Solve_Face_Accessories_DISPATCH_RigVMDispatch_ArrayIterator_Ratio; // 0x2F0(0x4)
		FName Solve_Face_Accessories___Solve_Face_Accessories_DISPATCH_RigVMDispatch_ArrayIterator_BlockToRun; // 0x2F4(0x4)
		bool Solve_Face_Accessories___Solve_Face_Accessories_DISPATCH_RigDispatch_GetMetadata_3_1_Value; // 0x2F8(0x1)
		unsigned char UnknownData205_6[0x3]; // 0x2F9(0x3) UNKNOWN PROPERTY
		FRigElementKey Solve_Face_Accessories___Solve_Face_Accessories_DISPATCH_RigVMDispatch_ArrayIterator_1_Element; // 0x2FC(0x8)
		unsigned char UnknownData206_6[0x4]; // 0x304(0x4) UNKNOWN PROPERTY
		TArray Solve_Face_Accessories___Solve_Face_Accessories_DISPATCH_RigDispatch_GetMetadata_3_1_Cache; // 0x308(0x10)
		bool Solve_Face_Accessories___Solve_Face_Accessories_DISPATCH_RigDispatch_GetMetadata_3_1_Found; // 0x318(0x1)
		bool Solve_Face_Accessories___Solve_Face_Accessories_RigVMFunction_MathBoolAnd_Result; // 0x319(0x1)
		bool Solve_Face_Accessories___Solve_Face_Accessories_GreaterEqual_Result; // 0x31A(0x1)
		unsigned char UnknownData207_6[0x1]; // 0x31B(0x1) UNKNOWN PROPERTY
		float Solve_Face_Accessories___Solve_Face_Accessories_GetCurveValue_Value; // 0x31C(0x4)
		bool Solve_Face_Accessories___Solve_Face_Accessories_GetCurveValue_Valid; // 0x320(0x1)
		unsigned char UnknownData208_6[0x7]; // 0x321(0x7) UNKNOWN PROPERTY
		TArray Solve_Face_Accessories___Solve_Face_Accessories_GetCurveValue_CachedCurveIndex; // 0x328(0x10)
		double Solve_Face_Accessories___Solve_Face_Accessories_GreaterEqual_A; // 0x338(0x8)
		bool Solve_Face_Accessories___Solve_Face_Accessories_HasMetadata_Found; // 0x340(0x1)
		unsigned char UnknownData209_6[0x7]; // 0x341(0x7) UNKNOWN PROPERTY
		TArray Solve_Face_Accessories___Solve_Face_Accessories_HasMetadata_CachedIndex; // 0x348(0x10)
		TArray Solve_Face_Accessories___Solve_Face_Accessories_DISPATCH_RigDispatch_GetMetadata_1_1_Value; // 0x358(0x10)
		FRigElementKey Solve_Face_Accessories___Solve_Face_Accessories_DISPATCH_RigDispatch_GetMetadata_2_Value; // 0x368(0x8)
		TArray Solve_Face_Accessories___Solve_Face_Accessories_DISPATCH_RigDispatch_GetMetadata_2_Cache; // 0x370(0x10)
		bool Solve_Face_Accessories___Solve_Face_Accessories_DISPATCH_RigDispatch_GetMetadata_2_Found; // 0x380(0x1)
		unsigned char UnknownData210_6[0x7]; // 0x381(0x7) UNKNOWN PROPERTY
		TArray Solve_Face_Accessories___Solve_Face_Accessories_DISPATCH_RigDispatch_GetMetadata_1_1_Cache; // 0x388(0x10)
		bool Solve_Face_Accessories___Solve_Face_Accessories_DISPATCH_RigDispatch_GetMetadata_1_1_Found; // 0x398(0x1)
		bool Transform_Mouth_Registration_Point_1___Transform_Mouth_Registration_Point_Less_Result; // 0x399(0x1)
		unsigned char UnknownData211_6[0x6]; // 0x39A(0x6) UNKNOWN PROPERTY
		FRigVMInstructionSetExecuteState Solve_Face_Accessories_Registration_Point_1te; // 0x3A0(0x50)
		int32_t Transform_Mouth_Registration_Point_1___Transform_Mouth_Registration_Point_Round_Int; // 0x3F0(0x4)
		float Transform_Mouth_Registration_Point_1___Transform_Mouth_Registration_Point_GetCurveValue_Value; // 0x3F4(0x4)
		bool Transform_Mouth_Registration_Point_1___Transform_Mouth_Registration_Point_GetCurveValue_Valid; // 0x3F8(0x1)
		unsigned char UnknownData212_6[0x7]; // 0x3F9(0x7) UNKNOWN PROPERTY
		TArray Transform_Mouth_Registration_Point_1___Transform_Mouth_Registration_Point_GetCurveValue_CachedCurveIndex; // 0x400(0x10)
		double Transform_Mouth_Registration_Point_1___Transform_Mouth_Registration_Point_Round_Value; // 0x410(0x8)
		double Transform_Mouth_Registration_Point_1___Transform_Mouth_Registration_Point_Round_Result; // 0x418(0x8)
		int32_t Transform_Mouth_Registration_Point_1___Transform_Mouth_Registration_Point_DISPATCH_RigVMDispatch_ArrayGetNum_Num; // 0x420(0x4)
		unsigned char UnknownData213_6[0xC]; // 0x424(0xC) UNKNOWN PROPERTY
		FTransform Transform_Mouth_Registration_Point_1___Transform_Mouth_Registration_Point_DISPATCH_RigVMDispatch_If_1_Result; // 0x430(0x60)
		bool Transform_Mouth_Registration_Point_1___Transform_Mouth_Registration_Point_DISPATCH_RigVMDispatch_If_1_Condition; // 0x490(0x1)
		unsigned char UnknownData214_6[0xF]; // 0x491(0xF) UNKNOWN PROPERTY
		FTransform Transform_Mouth_Registration_Point_1___Transform_Mouth_Registration_Point_Multiply_1_1_Result; // 0x4A0(0x60)
		FTransform Transform_Mouth_Registration_Point_1___Transform_Mouth_Registration_Point_Multiply_Result; // 0x500(0x60)
		FTransform Transform_Mouth_Registration_Point_1___Transform_Mouth_Registration_Point_DISPATCH_RigVMDispatch_ArrayGetAtIndex_Element; // 0x560(0x60)
		FVector Transform_Mouth_Registration_Point_1___Transform_Mouth_Registration_Point_DISPATCH_RigVMDispatch_If_Result; // 0x5C0(0x18)
		bool Transform_Mouth_Registration_Point_1___Transform_Mouth_Registration_Point_GreaterEqual_Result; // 0x5D8(0x1)
		unsigned char UnknownData215_6[0x3]; // 0x5D9(0x3) UNKNOWN PROPERTY
		float Transform_Mouth_Registration_Point_1___Transform_Mouth_Registration_Point_GetCurveValue_1_Value; // 0x5DC(0x4)
		bool Transform_Mouth_Registration_Point_1___Transform_Mouth_Registration_Point_GetCurveValue_1_Valid; // 0x5E0(0x1)
		unsigned char UnknownData216_6[0x7]; // 0x5E1(0x7) UNKNOWN PROPERTY
		TArray Transform_Mouth_Registration_Point_1___Transform_Mouth_Registration_Point_GetCurveValue_1_CachedCurveIndex; // 0x5E8(0x10)
		double Transform_Mouth_Registration_Point_1___Transform_Mouth_Registration_Point_GreaterEqual_A; // 0x5F8(0x8)
		FTransform Transform_Mouth_Registration_Point_1___Transform_Mouth_Registration_Point_Multiply_B__IO; // 0x600(0x60)
		FTransform Transform_Mouth_Registration_Point_1___Transform_Mouth_Registration_Point_RigUnit_GetTransform_5_Transform; // 0x660(0x60)
		TArray Transform_Mouth_Registration_Point_1___Transform_Mouth_Registration_Point_RigUnit_GetTransform_5_CachedIndex; // 0x6C0(0x10)
		FTransform Transform_Mouth_Registration_Point_1___Transform_Mouth_Registration_Point_Multiply_1_Result; // 0x6D0(0x60)
		FTransform Transform_Mouth_Registration_Point_1___Transform_Mouth_Registration_Point_Multiply_1_B__IO; // 0x730(0x60)
		TArray Transform_Mouth_Registration_Point_1___Transform_Mouth_Registration_Point_RigUnit_SetTransform_CachedIndex; // 0x790(0x10)
		FName Transform_Mouth_Registration_Point_1___Transform_Mouth_Registration_Point_RigVMFunction_ControlFlowBranch_BlockToRun; // 0x7A0(0x4)
		unsigned char UnknownData217_6[0x4]; // 0x7A4(0x4) UNKNOWN PROPERTY
		TArray Solve_Face_Accessories___Solve_Face_Accessories_DISPATCH_RigDispatch_GetMetadata_1_Value; // 0x7A8(0x10)
		TArray Solve_Face_Accessories___Solve_Face_Accessories_DISPATCH_RigDispatch_GetMetadata_1_Cache; // 0x7B8(0x10)
		bool Solve_Face_Accessories___Solve_Face_Accessories_DISPATCH_RigDispatch_GetMetadata_1_Found; // 0x7C8(0x1)
		bool Transform_Mouth_Registration_Point___Transform_Mouth_Registration_Point_Less_Result; // 0x7C9(0x1)
		unsigned char UnknownData218_6[0x6]; // 0x7CA(0x6) UNKNOWN PROPERTY
		FRigVMInstructionSetExecuteState Solve_Face_Accessories_Registration_Pointte; // 0x7D0(0x50)
		int32_t Transform_Mouth_Registration_Point___Transform_Mouth_Registration_Point_Round_Int; // 0x820(0x4)
		float Transform_Mouth_Registration_Point___Transform_Mouth_Registration_Point_GetCurveValue_Value; // 0x824(0x4)
		bool Transform_Mouth_Registration_Point___Transform_Mouth_Registration_Point_GetCurveValue_Valid; // 0x828(0x1)
		unsigned char UnknownData219_6[0x7]; // 0x829(0x7) UNKNOWN PROPERTY
		TArray Transform_Mouth_Registration_Point___Transform_Mouth_Registration_Point_GetCurveValue_CachedCurveIndex; // 0x830(0x10)
		double Transform_Mouth_Registration_Point___Transform_Mouth_Registration_Point_Round_Value; // 0x840(0x8)
		double Transform_Mouth_Registration_Point___Transform_Mouth_Registration_Point_Round_Result; // 0x848(0x8)
		int32_t Transform_Mouth_Registration_Point___Transform_Mouth_Registration_Point_DISPATCH_RigVMDispatch_ArrayGetNum_Num; // 0x850(0x4)
		unsigned char UnknownData220_6[0xC]; // 0x854(0xC) UNKNOWN PROPERTY
		FTransform Transform_Mouth_Registration_Point___Transform_Mouth_Registration_Point_DISPATCH_RigVMDispatch_If_1_Result; // 0x860(0x60)
		bool Transform_Mouth_Registration_Point___Transform_Mouth_Registration_Point_DISPATCH_RigVMDispatch_If_1_Condition; // 0x8C0(0x1)
		unsigned char UnknownData221_6[0xF]; // 0x8C1(0xF) UNKNOWN PROPERTY
		FTransform Transform_Mouth_Registration_Point___Transform_Mouth_Registration_Point_Multiply_1_1_Result; // 0x8D0(0x60)
		FTransform Transform_Mouth_Registration_Point___Transform_Mouth_Registration_Point_Multiply_Result; // 0x930(0x60)
		FTransform Transform_Mouth_Registration_Point___Transform_Mouth_Registration_Point_DISPATCH_RigVMDispatch_ArrayGetAtIndex_Element; // 0x990(0x60)
		FVector Transform_Mouth_Registration_Point___Transform_Mouth_Registration_Point_DISPATCH_RigVMDispatch_If_Result; // 0x9F0(0x18)
		bool Transform_Mouth_Registration_Point___Transform_Mouth_Registration_Point_GreaterEqual_Result; // 0xA08(0x1)
		unsigned char UnknownData222_6[0x3]; // 0xA09(0x3) UNKNOWN PROPERTY
		float Transform_Mouth_Registration_Point___Transform_Mouth_Registration_Point_GetCurveValue_1_Value; // 0xA0C(0x4)
		bool Transform_Mouth_Registration_Point___Transform_Mouth_Registration_Point_GetCurveValue_1_Valid; // 0xA10(0x1)
		unsigned char UnknownData223_6[0x7]; // 0xA11(0x7) UNKNOWN PROPERTY
		TArray Transform_Mouth_Registration_Point___Transform_Mouth_Registration_Point_GetCurveValue_1_CachedCurveIndex; // 0xA18(0x10)
		double Transform_Mouth_Registration_Point___Transform_Mouth_Registration_Point_GreaterEqual_A; // 0xA28(0x8)
		FTransform Transform_Mouth_Registration_Point___Transform_Mouth_Registration_Point_Multiply_B__IO; // 0xA30(0x60)
		FTransform Transform_Mouth_Registration_Point___Transform_Mouth_Registration_Point_RigUnit_GetTransform_5_Transform; // 0xA90(0x60)
		TArray Transform_Mouth_Registration_Point___Transform_Mouth_Registration_Point_RigUnit_GetTransform_5_CachedIndex; // 0xAF0(0x10)
		FTransform Transform_Mouth_Registration_Point___Transform_Mouth_Registration_Point_Multiply_1_Result; // 0xB00(0x60)
		FTransform Transform_Mouth_Registration_Point___Transform_Mouth_Registration_Point_Multiply_1_B__IO; // 0xB60(0x60)
		TArray Transform_Mouth_Registration_Point___Transform_Mouth_Registration_Point_RigUnit_SetTransform_CachedIndex; // 0xBC0(0x10)
		FName Transform_Mouth_Registration_Point___Transform_Mouth_Registration_Point_RigVMFunction_ControlFlowBranch_BlockToRun; // 0xBD0(0x4)
		FName Solve_Face_Accessories___Solve_Face_Accessories_RigVMFunction_ControlFlowBranch_BlockToRun; // 0xBD4(0x4)
		FName Solve_Face_Accessories___Solve_Face_Accessories_RigVMFunction_ControlFlowBranch_1_1_BlockToRun; // 0xBD8(0x4)
		unsigned char UnknownData224_6[0x4]; // 0xBDC(0x4) UNKNOWN PROPERTY
		TArray Solve_Face_Accessories___Solve_Face_Accessories_RigUnit_ItemArray_1_Items__IO; // 0xBE0(0x10)
		int32_t Solve_Face_Accessories___Solve_Face_Accessories_DISPATCH_RigVMDispatch_ArrayIterator_1_Index; // 0xBF0(0x4)
		int32_t Solve_Face_Accessories___Solve_Face_Accessories_DISPATCH_RigVMDispatch_ArrayIterator_1_Count; // 0xBF4(0x4)
		float Solve_Face_Accessories___Solve_Face_Accessories_DISPATCH_RigVMDispatch_ArrayIterator_1_Ratio; // 0xBF8(0x4)
		FName Solve_Face_Accessories___Solve_Face_Accessories_DISPATCH_RigVMDispatch_ArrayIterator_1_BlockToRun; // 0xBFC(0x4)
		bool Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_DISPATCH_RigDispatch_GetMetadata_2_Value; // 0xC00(0x1)
		unsigned char UnknownData225_6[0x7]; // 0xC01(0x7) UNKNOWN PROPERTY
		TArray Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_DISPATCH_RigDispatch_GetMetadata_2_Cache; // 0xC08(0x10)
		bool Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_DISPATCH_RigDispatch_GetMetadata_2_Found; // 0xC18(0x1)
		unsigned char UnknownData226_6[0x7]; // 0xC19(0x7) UNKNOWN PROPERTY
		FTransform Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_RigUnit_GetTransform_1_Transform; // 0xC20(0x60)
		TArray Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_RigUnit_GetTransform_1_CachedIndex; // 0xC80(0x10)
		float Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_RigVMFunction_AnimEvalRichCurve_Result; // 0xC90(0x4)
		unsigned char UnknownData227_6[0x4]; // 0xC94(0x4) UNKNOWN PROPERTY
		double Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_Divide_Result; // 0xC98(0x8)
		float Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_RigVMFunction_MathVectorDistance_1_Result; // 0xCA0(0x4)
		unsigned char UnknownData228_6[0xC]; // 0xCA4(0xC) UNKNOWN PROPERTY
		FTransform Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_RigUnit_GetTransform_3_Transform; // 0xCB0(0x60)
		TArray Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_RigUnit_GetTransform_3_CachedIndex; // 0xD10(0x10)
		FVector Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_RigVMFunction_MathVectorDistance_1_A; // 0xD20(0x18)
		unsigned char UnknownData229_6[0x8]; // 0xD38(0x8) UNKNOWN PROPERTY
		FTransform Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_RigUnit_GetTransform_2_1_Transform; // 0xD40(0x60)
		TArray Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_RigUnit_GetTransform_2_1_CachedIndex; // 0xDA0(0x10)
		FVector Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_RigVMFunction_MathVectorDistance_1_B; // 0xDB0(0x18)
		double Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_Divide_A; // 0xDC8(0x8)
		float Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_RigVMFunction_MathVectorDistance_Result; // 0xDD0(0x4)
		unsigned char UnknownData230_6[0xC]; // 0xDD4(0xC) UNKNOWN PROPERTY
		FTransform Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_RigUnit_GetTransform_Transform; // 0xDE0(0x60)
		TArray Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_RigUnit_GetTransform_CachedIndex; // 0xE40(0x10)
		FVector Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_RigVMFunction_MathVectorDistance_A; // 0xE50(0x18)
		unsigned char UnknownData231_6[0x8]; // 0xE68(0x8) UNKNOWN PROPERTY
		FTransform Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_RigUnit_GetTransform_2_Transform; // 0xE70(0x60)
		TArray Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_RigUnit_GetTransform_2_CachedIndex; // 0xED0(0x10)
		FVector Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_RigVMFunction_MathVectorDistance_B; // 0xEE0(0x18)
		double Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_Divide_B; // 0xEF8(0x8)
		float Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_RigVMFunction_AnimEvalRichCurve_Value; // 0xF00(0x4)
		float Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_RigVMFunction_AnimEvalRichCurve_1_Result; // 0xF04(0x4)
		float Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_RigVMFunction_AnimEvalRichCurve_1_Value; // 0xF08(0x4)
		unsigned char UnknownData232_6[0x4]; // 0xF0C(0x4) UNKNOWN PROPERTY
		FTransform Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_RigUnit_SetTransform_Value__IO; // 0xF10(0x60)
		TArray Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_RigUnit_SetTransform_CachedIndex; // 0xF70(0x10)
		FName Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_RigVMFunction_ControlFlowBranch_1_BlockToRun; // 0xF80(0x4)
		unsigned char UnknownData233_6[0xC]; // 0xF84(0xC) UNKNOWN PROPERTY
		FFigure_PushAwayControl_Struct Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_DISPATCH_RigVMDispatch_ArrayIterator_Element; // 0xF90(0x150)
		FRigElementKey Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_Push_Away_Child; // 0x10E0(0x8)
		FRigElementKey Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_Push_Away_Affector; // 0x10E8(0x8)
		FTransform Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_Push_Away_Affector_Offset; // 0x10F0(0x60)
		double Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_Push_Away_Inner_Radius; // 0x1150(0x8)
		double Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_Push_Away_Radius; // 0x1158(0x8)
		double Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_Push_Away_Outter_Radius; // 0x1160(0x8)
		double Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_Push_Away_Translate_Multipler; // 0x1168(0x8)
		double Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_Push_Away_Rotate_Multiplier; // 0x1170(0x8)
		double Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_Push_Away_ScaleU_Multiplier; // 0x1178(0x8)
		double Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_Push_Away_ScaleV_Multiplier; // 0x1180(0x8)
		double Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_Push_Away_Outer_Translate_Multiplier; // 0x1188(0x8)
		double Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_Push_Away_Outer_Rotate_Multiplier; // 0x1190(0x8)
		double Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_Push_Away_Outer_ScaleU_Multiplier; // 0x1198(0x8)
		double Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_Push_Away_Outer_ScaleV_Multiplier; // 0x11A0(0x8)
		unsigned char UnknownData234_6[0x8]; // 0x11A8(0x8) UNKNOWN PROPERTY
		FTransform Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_Push_Away_Scale_Offset_from_Child; // 0x11B0(0x60)
		FTransform Push_Away___Push_Away_Multiply_1_Result; // 0x1210(0x60)
		FTransform Push_Away___Push_Away_GetTransform_1_Transform; // 0x1270(0x60)
		TArray Push_Away___Push_Away_GetTransform_1_CachedIndex; // 0x12D0(0x10)
		FTransform LocalVariable__Push_Away_Parent_Offset_Transform; // 0x12E0(0x60)
		float Push_Away___Push_Away_RigVMFunction_MathVectorDistance_Result; // 0x1340(0x4)
		unsigned char UnknownData235_6[0xC]; // 0x1344(0xC) UNKNOWN PROPERTY
		FTransform Push_Away___Push_Away_ProjectTransformToNewParent_1_Transform; // 0x1350(0x60)
		TArray Push_Away___Push_Away_ProjectTransformToNewParent_1_CachedChild; // 0x13B0(0x10)
		TArray Push_Away___Push_Away_ProjectTransformToNewParent_1_CachedOldParent; // 0x13C0(0x10)
		TArray Push_Away___Push_Away_ProjectTransformToNewParent_1_CachedNewParent; // 0x13D0(0x10)
		FVector Push_Away___Push_Away_RigVMFunction_MathVectorDistance_A; // 0x13E0(0x18)
		FVector Push_Away___Push_Away_RigVMFunction_MathVectorDistance_B; // 0x13F8(0x18)
		float LocalVariable__Push_Away_Distance; // 0x1410(0x4)
		unsigned char UnknownData236_6[0xC]; // 0x1414(0xC) UNKNOWN PROPERTY
		FTransform Push_Away___Push_Away_Multiply_Result; // 0x1420(0x60)
		FTransform Push_Away___Push_Away_ProjectTransformToNewParent_2_Transform; // 0x1480(0x60)
		TArray Push_Away___Push_Away_ProjectTransformToNewParent_2_CachedChild; // 0x14E0(0x10)
		TArray Push_Away___Push_Away_ProjectTransformToNewParent_2_CachedOldParent; // 0x14F0(0x10)
		TArray Push_Away___Push_Away_ProjectTransformToNewParent_2_CachedNewParent; // 0x1500(0x10)
		FLinearColor Push_Away___Push_Away_Interpolate_3_Result; // 0x1510(0x10)
		float Push_Away___Push_Away_DISPATCH_RigVMDispatch_If_Result; // 0x1520(0x4)
		bool Push_Away___Push_Away_Less_1_Result; // 0x1524(0x1)
		unsigned char UnknownData237_6[0x3]; // 0x1525(0x3) UNKNOWN PROPERTY
		double Push_Away___Push_Away_Less_1_A; // 0x1528(0x8)
		bool Push_Away___Push_Away_DISPATCH_RigVMDispatch_If_Condition; // 0x1530(0x1)
		unsigned char UnknownData238_6[0x7]; // 0x1531(0x7) UNKNOWN PROPERTY
		double Push_Away___Push_Away_Remap_2_Result; // 0x1538(0x8)
		double Push_Away___Push_Away_Remap_2_Value; // 0x1540(0x8)
		float Push_Away___Push_Away_DISPATCH_RigVMDispatch_If_False; // 0x1548(0x4)
		float Push_Away___Push_Away_RigVMFunction_DebugArcNoSpace_Radius; // 0x154C(0x4)
		FTransform Push_Away___Push_Away_Multiply_5_Result; // 0x1550(0x60)
		FTransform Push_Away___Push_Away_ProjectTransformToNewParent_2_1_Transform; // 0x15B0(0x60)
		TArray Push_Away___Push_Away_ProjectTransformToNewParent_2_1_CachedChild; // 0x1610(0x10)
		TArray Push_Away___Push_Away_ProjectTransformToNewParent_2_1_CachedOldParent; // 0x1620(0x10)
		TArray Push_Away___Push_Away_ProjectTransformToNewParent_2_1_CachedNewParent; // 0x1630(0x10)
		FLinearColor Push_Away___Push_Away_Interpolate_3_1_Result; // 0x1640(0x10)
		float Push_Away___Push_Away_DISPATCH_RigVMDispatch_If_1_Result; // 0x1650(0x4)
		bool Push_Away___Push_Away_LessEqual_Result; // 0x1654(0x1)
		unsigned char UnknownData239_6[0x3]; // 0x1655(0x3) UNKNOWN PROPERTY
		double Push_Away___Push_Away_LessEqual_A; // 0x1658(0x8)
		float Push_Away___Push_Away_RigVMFunction_DebugArcNoSpace_1_Radius; // 0x1660(0x4)
		unsigned char UnknownData240_6[0xC]; // 0x1664(0xC) UNKNOWN PROPERTY
		FTransform Push_Away___Push_Away_Multiply_5_1_Result; // 0x1670(0x60)
		FTransform Push_Away___Push_Away_ProjectTransformToNewParent_2_1_1_Transform; // 0x16D0(0x60)
		TArray Push_Away___Push_Away_ProjectTransformToNewParent_2_1_1_CachedChild; // 0x1730(0x10)
		TArray Push_Away___Push_Away_ProjectTransformToNewParent_2_1_1_CachedOldParent; // 0x1740(0x10)
		TArray Push_Away___Push_Away_ProjectTransformToNewParent_2_1_1_CachedNewParent; // 0x1750(0x10)
		FLinearColor Push_Away___Push_Away_Interpolate_3_2_Result; // 0x1760(0x10)
		float Push_Away___Push_Away_DISPATCH_RigVMDispatch_If_2_Result; // 0x1770(0x4)
		bool Push_Away___Push_Away_Less_1_1_Result; // 0x1774(0x1)
		unsigned char UnknownData241_6[0x3]; // 0x1775(0x3) UNKNOWN PROPERTY
		double Push_Away___Push_Away_Less_1_1_A; // 0x1778(0x8)
		bool Push_Away___Push_Away_DISPATCH_RigVMDispatch_If_2_Condition; // 0x1780(0x1)
		unsigned char UnknownData242_6[0x7]; // 0x1781(0x7) UNKNOWN PROPERTY
		double Push_Away___Push_Away_Remap_2_1_Result; // 0x1788(0x8)
		double Push_Away___Push_Away_Remap_2_1_Value; // 0x1790(0x8)
		float Push_Away___Push_Away_DISPATCH_RigVMDispatch_If_2_False; // 0x1798(0x4)
		float Push_Away___Push_Away_RigVMFunction_DebugArcNoSpace_1_1_Radius; // 0x179C(0x4)
		bool Push_Away___Push_Away_IsNearlyZero_Result; // 0x17A0(0x1)
		unsigned char UnknownData243_6[0x7]; // 0x17A1(0x7) UNKNOWN PROPERTY
		FVector Push_Away___Push_Away_IsNearlyZero_Value; // 0x17A8(0x18)
		FTransform Push_Away___Push_Away_Multiply_8_Result; // 0x17C0(0x60)
		FTransform Push_Away___Push_Away_ProjectTransformToNewParent_4_Transform; // 0x1820(0x60)
		TArray Push_Away___Push_Away_ProjectTransformToNewParent_4_CachedChild; // 0x1880(0x10)
		TArray Push_Away___Push_Away_ProjectTransformToNewParent_4_CachedOldParent; // 0x1890(0x10)
		TArray Push_Away___Push_Away_ProjectTransformToNewParent_4_CachedNewParent; // 0x18A0(0x10)
		FName Push_Away___Push_Away_RigVMFunction_ControlFlowBranch_2_BlockToRun; // 0x18B0(0x4)
		FName Push_Away___Push_Away_RigVMFunction_ControlFlowBranch_1_BlockToRun; // 0x18B4(0x4)
		bool Push_Away___Push_Away_Less_Result; // 0x18B8(0x1)
		unsigned char UnknownData244_6[0x7]; // 0x18B9(0x7) UNKNOWN PROPERTY
		double Push_Away___Push_Away_Less_A; // 0x18C0(0x8)
		double Push_Away___Push_Away_Subtract_1_Result; // 0x18C8(0x8)
		double Push_Away___Push_Away_Remap_Result; // 0x18D0(0x8)
		double Push_Away___Push_Away_Remap_Value; // 0x18D8(0x8)
		FTransform Push_Away___Push_Away_Multiply_10_Multiply_10_1_Result; // 0x18E0(0x60)
		FTransform Push_Away___Push_Away_Multiply_10_Multiply_10_Result; // 0x1940(0x60)
		FTransform Push_Away___Push_Away_Make_Relative_2_Local; // 0x19A0(0x60)
		FQuat Push_Away___Push_Away_Interpolate_Result; // 0x1A00(0x20)
		FTransform Push_Away___Push_Away_ProjectTransformToNewParent_Transform; // 0x1A20(0x60)
		TArray Push_Away___Push_Away_ProjectTransformToNewParent_CachedChild; // 0x1A80(0x10)
		TArray Push_Away___Push_Away_ProjectTransformToNewParent_CachedOldParent; // 0x1A90(0x10)
		TArray Push_Away___Push_Away_ProjectTransformToNewParent_CachedNewParent; // 0x1AA0(0x10)
		FQuat Push_Away___Push_Away_Interpolate_A; // 0x1AB0(0x20)
		FTransform Push_Away___Push_Away_Multiply_3_Result; // 0x1AD0(0x60)
		FTransform Push_Away___Push_Away_Make_Relative_Local; // 0x1B30(0x60)
		FTransform Push_Away___Push_Away_GetTransform_1_1_1_Transform; // 0x1B90(0x60)
		TArray Push_Away___Push_Away_GetTransform_1_1_1_CachedIndex; // 0x1BF0(0x10)
		FTransform Push_Away___Push_Away_Multiply_2_Result; // 0x1C00(0x60)
		FTransform Push_Away___Push_Away_GetTransform_1_1_Transform; // 0x1C60(0x60)
		TArray Push_Away___Push_Away_GetTransform_1_1_CachedIndex; // 0x1CC0(0x10)
		FQuat Push_Away___Push_Away_Interpolate_B; // 0x1CD0(0x20)
		double Push_Away___Push_Away_Multiply_4_Result; // 0x1CF0(0x8)
		float Push_Away___Push_Away_Interpolate_T; // 0x1CF8(0x4)
		unsigned char UnknownData245_6[0x4]; // 0x1CFC(0x4) UNKNOWN PROPERTY
		FVector Push_Away___Push_Away_Interpolate_1_Result; // 0x1D00(0x18)
		FVector Push_Away___Push_Away_Interpolate_1_A; // 0x1D18(0x18)
		FVector Push_Away___Push_Away_Interpolate_1_B; // 0x1D30(0x18)
		double Push_Away___Push_Away_Multiply_4_1_Result; // 0x1D48(0x8)
		float Push_Away___Push_Away_Interpolate_1_T; // 0x1D50(0x4)
		unsigned char UnknownData246_6[0xC]; // 0x1D54(0xC) UNKNOWN PROPERTY
		FTransform Push_Away___Push_Away_Make_Relative_2_Global__IO; // 0x1D60(0x60)
		FTransform Push_Away___Push_Away_Multiply_11_1_1_1_1_Result; // 0x1DC0(0x60)
		FTransform Push_Away___Push_Away_ProjectTransformToNewParent_4_1_Transform; // 0x1E20(0x60)
		TArray Push_Away___Push_Away_ProjectTransformToNewParent_4_1_CachedChild; // 0x1E80(0x10)
		TArray Push_Away___Push_Away_ProjectTransformToNewParent_4_1_CachedOldParent; // 0x1E90(0x10)
		TArray Push_Away___Push_Away_ProjectTransformToNewParent_4_1_CachedNewParent; // 0x1EA0(0x10)
		double Push_Away___Push_Away_Interpolate_4_2_Result; // 0x1EB0(0x8)
		double Push_Away___Push_Away_Interpolate_4_1_1_Result; // 0x1EB8(0x8)
		FTransform Push_Away___Push_Away_Multiply_10_Multiply_10_B; // 0x1EC0(0x60)
		FTransform Push_Away___Push_Away_Multiply_11_1_1_2_Result; // 0x1F20(0x60)
		TArray Push_Away___Push_Away_RigUnit_SetTransform_1_1_CachedIndex; // 0x1F80(0x10)
		FTransform Push_Away___Push_Away_Multiply_10_1_Multiply_10_1_Result; // 0x1F90(0x60)
		FTransform Push_Away___Push_Away_Multiply_10_1_Multiply_10_Result; // 0x1FF0(0x60)
		FTransform Push_Away___Push_Away_Make_Relative_2_1_Local; // 0x2050(0x60)
		FQuat Push_Away___Push_Away_Interpolate_2_Result; // 0x20B0(0x20)
		FTransform Push_Away___Push_Away_ProjectTransformToNewParent_3_Transform; // 0x20D0(0x60)
		TArray Push_Away___Push_Away_ProjectTransformToNewParent_3_CachedChild; // 0x2130(0x10)
		TArray Push_Away___Push_Away_ProjectTransformToNewParent_3_CachedOldParent; // 0x2140(0x10)
		TArray Push_Away___Push_Away_ProjectTransformToNewParent_3_CachedNewParent; // 0x2150(0x10)
		FQuat Push_Away___Push_Away_Interpolate_2_A; // 0x2160(0x20)
		FTransform Push_Away___Push_Away_Multiply_3_1_Result; // 0x2180(0x60)
		FTransform Push_Away___Push_Away_Make_Relative_1_Local; // 0x21E0(0x60)
		FTransform Push_Away___Push_Away_GetTransform_1_1_1_1_Transform; // 0x2240(0x60)
		TArray Push_Away___Push_Away_GetTransform_1_1_1_1_CachedIndex; // 0x22A0(0x10)
		FTransform Push_Away___Push_Away_Multiply_2_1_Result; // 0x22B0(0x60)
		FTransform Push_Away___Push_Away_GetTransform_1_1_2_Transform; // 0x2310(0x60)
		TArray Push_Away___Push_Away_GetTransform_1_1_2_CachedIndex; // 0x2370(0x10)
		FQuat Push_Away___Push_Away_Interpolate_2_B; // 0x2380(0x20)
		double Push_Away___Push_Away_Multiply_7_Result; // 0x23A0(0x8)
		double Push_Away___Push_Away_Remap_1_Result; // 0x23A8(0x8)
		double Push_Away___Push_Away_Remap_1_Value; // 0x23B0(0x8)
		float Push_Away___Push_Away_Interpolate_2_T; // 0x23B8(0x4)
		unsigned char UnknownData247_6[0x4]; // 0x23BC(0x4) UNKNOWN PROPERTY
		FVector Push_Away___Push_Away_Interpolate_1_1_Result; // 0x23C0(0x18)
		FVector Push_Away___Push_Away_Interpolate_1_1_A; // 0x23D8(0x18)
		FVector Push_Away___Push_Away_Interpolate_1_1_B; // 0x23F0(0x18)
		double Push_Away___Push_Away_Multiply_6_Result; // 0x2408(0x8)
		float Push_Away___Push_Away_Interpolate_1_1_T; // 0x2410(0x4)
		unsigned char UnknownData248_6[0xC]; // 0x2414(0xC) UNKNOWN PROPERTY
		FTransform Push_Away___Push_Away_Make_Relative_2_1_Global__IO; // 0x2420(0x60)
		FTransform Push_Away___Push_Away_Multiply_11_1_1_1_Result; // 0x2480(0x60)
		FTransform Push_Away___Push_Away_ProjectTransformToNewParent_4_2_Transform; // 0x24E0(0x60)
		TArray Push_Away___Push_Away_ProjectTransformToNewParent_4_2_CachedChild; // 0x2540(0x10)
		TArray Push_Away___Push_Away_ProjectTransformToNewParent_4_2_CachedOldParent; // 0x2550(0x10)
		TArray Push_Away___Push_Away_ProjectTransformToNewParent_4_2_CachedNewParent; // 0x2560(0x10)
		double Push_Away___Push_Away_Interpolate_4_Result; // 0x2570(0x8)
		double Push_Away___Push_Away_Interpolate_4_1_Result; // 0x2578(0x8)
		FTransform Push_Away___Push_Away_Multiply_10_1_Multiply_10_B; // 0x2580(0x60)
		FTransform Push_Away___Push_Away_Multiply_11_1_1_Result; // 0x25E0(0x60)
		TArray Push_Away___Push_Away_RigUnit_SetTransform_1_CachedIndex; // 0x2640(0x10)
		FName Push_Away___Push_Away_RigVMFunction_ControlFlowBranch_BlockToRun; // 0x2650(0x4)
		int32_t Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_DISPATCH_RigVMDispatch_ArrayIterator_Index; // 0x2654(0x4)
		int32_t Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_DISPATCH_RigVMDispatch_ArrayIterator_Count; // 0x2658(0x4)
		float Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_DISPATCH_RigVMDispatch_ArrayIterator_Ratio; // 0x265C(0x4)
		FName Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_DISPATCH_RigVMDispatch_ArrayIterator_BlockToRun; // 0x2660(0x4)
		bool Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_RigVMFunction_MathBoolAnd_Result; // 0x2664(0x1)
		bool Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_ItemExists_Exists; // 0x2665(0x1)
		unsigned char UnknownData249_6[0x2]; // 0x2666(0x2) UNKNOWN PROPERTY
		TArray Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_ItemExists_CachedIndex; // 0x2668(0x10)
		bool Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_ItemExists_1_Exists; // 0x2678(0x1)
		unsigned char UnknownData250_6[0x7]; // 0x2679(0x7) UNKNOWN PROPERTY
		TArray Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_ItemExists_1_CachedIndex; // 0x2680(0x10)
		FName Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_DISPATCH_RigVMDispatch_ArrayIterator_2_1_Element; // 0x2690(0x4)
		float Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_RigVMFunction_MathIntToFloat_Result; // 0x2694(0x4)
		int32_t Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_DISPATCH_RigVMDispatch_ArrayGetAtIndex_1_Element; // 0x2698(0x4)
		unsigned char UnknownData251_6[0x4]; // 0x269C(0x4) UNKNOWN PROPERTY
		TArray Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_DISPATCH_RigDispatch_GetMetadata_1_Value; // 0x26A0(0x10)
		TArray Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_DISPATCH_RigDispatch_GetMetadata_1_Cache; // 0x26B0(0x10)
		bool Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_DISPATCH_RigDispatch_GetMetadata_1_Found; // 0x26C0(0x1)
		unsigned char UnknownData252_6[0x7]; // 0x26C1(0x7) UNKNOWN PROPERTY
		FRigVMInstructionSetExecuteState Solve_Face_Accessoriesontrolste; // 0x26C8(0x50)
		int32_t Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_Round_Int; // 0x2718(0x4)
		float Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_GetCurveValue_Value; // 0x271C(0x4)
		bool Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_GetCurveValue_Valid; // 0x2720(0x1)
		unsigned char UnknownData253_6[0x7]; // 0x2721(0x7) UNKNOWN PROPERTY
		TArray Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_GetCurveValue_CachedCurveIndex; // 0x2728(0x10)
		double Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_Round_Value; // 0x2738(0x8)
		double Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_Round_Result; // 0x2740(0x8)
		TArray Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_SetCurveValue_CachedCurveIndex; // 0x2748(0x10)
		TArray Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_DISPATCH_RigDispatch_GetMetadata_4_2_Value; // 0x2758(0x10)
		TArray Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_DISPATCH_RigDispatch_GetMetadata_4_2_Cache; // 0x2768(0x10)
		bool Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_DISPATCH_RigDispatch_GetMetadata_4_2_Found; // 0x2778(0x1)
		unsigned char UnknownData254_6[0x3]; // 0x2779(0x3) UNKNOWN PROPERTY
		int32_t Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_DISPATCH_RigVMDispatch_ArrayIterator_2_1_Index; // 0x277C(0x4)
		int32_t Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_DISPATCH_RigVMDispatch_ArrayIterator_2_1_Count; // 0x2780(0x4)
		float Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_DISPATCH_RigVMDispatch_ArrayIterator_2_1_Ratio; // 0x2784(0x4)
		FName Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_DISPATCH_RigVMDispatch_ArrayIterator_2_1_BlockToRun; // 0x2788(0x4)
		FName Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_DISPATCH_RigVMDispatch_ArrayIterator_2_Element; // 0x278C(0x4)
		float Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_RigVMFunction_MathIntToFloat_1_Result; // 0x2790(0x4)
		unsigned char UnknownData255_6[0x4]; // 0x2794(0x4) UNKNOWN PROPERTY
		FRigVMInstructionSetExecuteState Solve_Face_Accessoriesontrolste_4192217547; // 0x2798(0x50)
		int32_t Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_DISPATCH_RigVMDispatch_ArrayGetAtIndex_1_1_Element; // 0x27E8(0x4)
		unsigned char UnknownData256_6[0x4]; // 0x27EC(0x4) UNKNOWN PROPERTY
		TArray Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_DISPATCH_RigDispatch_GetMetadata_1_1_Value; // 0x27F0(0x10)
		TArray Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_DISPATCH_RigDispatch_GetMetadata_1_1_Cache; // 0x2800(0x10)
		bool Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_DISPATCH_RigDispatch_GetMetadata_1_1_Found; // 0x2810(0x1)
		unsigned char UnknownData257_6[0x7]; // 0x2811(0x7) UNKNOWN PROPERTY
		TArray Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_SetCurveValue_1_CachedCurveIndex; // 0x2818(0x10)
		TArray Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_DISPATCH_RigDispatch_GetMetadata_4_Value; // 0x2828(0x10)
		TArray Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_DISPATCH_RigDispatch_GetMetadata_4_Cache; // 0x2838(0x10)
		bool Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_DISPATCH_RigDispatch_GetMetadata_4_Found; // 0x2848(0x1)
		unsigned char UnknownData258_6[0x3]; // 0x2849(0x3) UNKNOWN PROPERTY
		int32_t Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_DISPATCH_RigVMDispatch_ArrayIterator_2_Index; // 0x284C(0x4)
		int32_t Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_DISPATCH_RigVMDispatch_ArrayIterator_2_Count; // 0x2850(0x4)
		float Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_DISPATCH_RigVMDispatch_ArrayIterator_2_Ratio; // 0x2854(0x4)
		FName Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_DISPATCH_RigVMDispatch_ArrayIterator_2_BlockToRun; // 0x2858(0x4)
		bool Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_DISPATCH_RigDispatch_GetMetadata_1_1_1_1_1_2_Value; // 0x285C(0x1)
		unsigned char UnknownData259_6[0x3]; // 0x285D(0x3) UNKNOWN PROPERTY
		FRigElementKey Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_DISPATCH_RigVMDispatch_ArrayIterator_1_Element; // 0x2860(0x8)
		TArray Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_DISPATCH_RigDispatch_GetMetadata_1_1_1_1_1_2_Cache; // 0x2868(0x10)
		bool Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_DISPATCH_RigDispatch_GetMetadata_1_1_1_1_1_2_Found; // 0x2878(0x1)
		unsigned char UnknownData260_6[0x7]; // 0x2879(0x7) UNKNOWN PROPERTY
		TArray Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_DISPATCH_RigDispatch_GetMetadata_1_1_1_1_2_Value; // 0x2880(0x10)
		TArray Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_DISPATCH_RigDispatch_GetMetadata_1_1_1_1_2_Cache; // 0x2890(0x10)
		bool Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_DISPATCH_RigDispatch_GetMetadata_1_1_1_1_2_Found; // 0x28A0(0x1)
		bool Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_DISPATCH_RigDispatch_GetMetadata_4_1_Value; // 0x28A1(0x1)
		unsigned char UnknownData261_6[0x6]; // 0x28A2(0x6) UNKNOWN PROPERTY
		TArray Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_DISPATCH_RigDispatch_GetMetadata_4_1_Cache; // 0x28A8(0x10)
		bool Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_DISPATCH_RigDispatch_GetMetadata_4_1_Found; // 0x28B8(0x1)
		bool Transform_Mouth_Registration_Point_1_1___Transform_Mouth_Registration_Point_Less_Result; // 0x28B9(0x1)
		unsigned char UnknownData262_6[0x6]; // 0x28BA(0x6) UNKNOWN PROPERTY
		FRigVMInstructionSetExecuteState Solve_Face_Accessoriesontrols_Registration_Point_1_1te; // 0x28C0(0x50)
		int32_t Transform_Mouth_Registration_Point_1_1___Transform_Mouth_Registration_Point_Round_Int; // 0x2910(0x4)
		float Transform_Mouth_Registration_Point_1_1___Transform_Mouth_Registration_Point_GetCurveValue_Value; // 0x2914(0x4)
		bool Transform_Mouth_Registration_Point_1_1___Transform_Mouth_Registration_Point_GetCurveValue_Valid; // 0x2918(0x1)
		unsigned char UnknownData263_6[0x7]; // 0x2919(0x7) UNKNOWN PROPERTY
		TArray Transform_Mouth_Registration_Point_1_1___Transform_Mouth_Registration_Point_GetCurveValue_CachedCurveIndex; // 0x2920(0x10)
		double Transform_Mouth_Registration_Point_1_1___Transform_Mouth_Registration_Point_Round_Value; // 0x2930(0x8)
		double Transform_Mouth_Registration_Point_1_1___Transform_Mouth_Registration_Point_Round_Result; // 0x2938(0x8)
		int32_t Transform_Mouth_Registration_Point_1_1___Transform_Mouth_Registration_Point_DISPATCH_RigVMDispatch_ArrayGetNum_Num; // 0x2940(0x4)
		unsigned char UnknownData264_6[0xC]; // 0x2944(0xC) UNKNOWN PROPERTY
		FTransform Transform_Mouth_Registration_Point_1_1___Transform_Mouth_Registration_Point_DISPATCH_RigVMDispatch_If_1_Result; // 0x2950(0x60)
		bool Transform_Mouth_Registration_Point_1_1___Transform_Mouth_Registration_Point_DISPATCH_RigVMDispatch_If_1_Condition; // 0x29B0(0x1)
		unsigned char UnknownData265_6[0xF]; // 0x29B1(0xF) UNKNOWN PROPERTY
		FTransform Transform_Mouth_Registration_Point_1_1___Transform_Mouth_Registration_Point_Multiply_1_1_Result; // 0x29C0(0x60)
		FTransform Transform_Mouth_Registration_Point_1_1___Transform_Mouth_Registration_Point_Multiply_Result; // 0x2A20(0x60)
		FTransform Transform_Mouth_Registration_Point_1_1___Transform_Mouth_Registration_Point_DISPATCH_RigVMDispatch_ArrayGetAtIndex_Element; // 0x2A80(0x60)
		FVector Transform_Mouth_Registration_Point_1_1___Transform_Mouth_Registration_Point_DISPATCH_RigVMDispatch_If_Result; // 0x2AE0(0x18)
		bool Transform_Mouth_Registration_Point_1_1___Transform_Mouth_Registration_Point_GreaterEqual_Result; // 0x2AF8(0x1)
		unsigned char UnknownData266_6[0x3]; // 0x2AF9(0x3) UNKNOWN PROPERTY
		float Transform_Mouth_Registration_Point_1_1___Transform_Mouth_Registration_Point_GetCurveValue_1_Value; // 0x2AFC(0x4)
		bool Transform_Mouth_Registration_Point_1_1___Transform_Mouth_Registration_Point_GetCurveValue_1_Valid; // 0x2B00(0x1)
		unsigned char UnknownData267_6[0x7]; // 0x2B01(0x7) UNKNOWN PROPERTY
		TArray Transform_Mouth_Registration_Point_1_1___Transform_Mouth_Registration_Point_GetCurveValue_1_CachedCurveIndex; // 0x2B08(0x10)
		double Transform_Mouth_Registration_Point_1_1___Transform_Mouth_Registration_Point_GreaterEqual_A; // 0x2B18(0x8)
		FTransform Transform_Mouth_Registration_Point_1_1___Transform_Mouth_Registration_Point_Multiply_B__IO; // 0x2B20(0x60)
		FTransform Transform_Mouth_Registration_Point_1_1___Transform_Mouth_Registration_Point_RigUnit_GetTransform_5_Transform; // 0x2B80(0x60)
		TArray Transform_Mouth_Registration_Point_1_1___Transform_Mouth_Registration_Point_RigUnit_GetTransform_5_CachedIndex; // 0x2BE0(0x10)
		FTransform Transform_Mouth_Registration_Point_1_1___Transform_Mouth_Registration_Point_Multiply_1_Result; // 0x2BF0(0x60)
		FTransform Transform_Mouth_Registration_Point_1_1___Transform_Mouth_Registration_Point_Multiply_1_B__IO; // 0x2C50(0x60)
		TArray Transform_Mouth_Registration_Point_1_1___Transform_Mouth_Registration_Point_RigUnit_SetTransform_CachedIndex; // 0x2CB0(0x10)
		FName Transform_Mouth_Registration_Point_1_1___Transform_Mouth_Registration_Point_RigVMFunction_ControlFlowBranch_BlockToRun; // 0x2CC0(0x4)
		FName Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_RigVMFunction_ControlFlowBranch_2_2_BlockToRun; // 0x2CC4(0x4)
		TArray Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_RigUnit_ItemArray_Items__IO; // 0x2CC8(0x10)
		int32_t Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_DISPATCH_RigVMDispatch_ArrayIterator_1_Index; // 0x2CD8(0x4)
		int32_t Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_DISPATCH_RigVMDispatch_ArrayIterator_1_Count; // 0x2CDC(0x4)
		float Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_DISPATCH_RigVMDispatch_ArrayIterator_1_Ratio; // 0x2CE0(0x4)
		FName Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_DISPATCH_RigVMDispatch_ArrayIterator_1_BlockToRun; // 0x2CE4(0x4)
		unsigned char UnknownData268_6[0x8]; // 0x2CE8(0x8) UNKNOWN PROPERTY
		FTransform Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_RigUnit_GetTransform_5_Transform; // 0x2CF0(0x60)
		TArray Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_RigUnit_GetTransform_5_CachedIndex; // 0x2D50(0x10)
		FVector Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_Interpolate_Result; // 0x2D60(0x18)
		double Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_Multiply_2_Result; // 0x2D78(0x8)
		double Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_Multiply_2_A; // 0x2D80(0x8)
		double Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_Remap_Result; // 0x2D88(0x8)
		FTransform Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_Multiply_Result; // 0x2D90(0x60)
		float Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_DISPATCH_RigVMDispatch_SelectInt32_Result; // 0x2DF0(0x4)
		unsigned char UnknownData269_6[0xC]; // 0x2DF4(0xC) UNKNOWN PROPERTY
		FTransform Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_Multiply_A__IO; // 0x2E00(0x60)
		FTransform Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_RigUnit_GetTransform_4_Transform; // 0x2E60(0x60)
		TArray Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_RigUnit_GetTransform_4_CachedIndex; // 0x2EC0(0x10)
		double Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_Remap_Value; // 0x2ED0(0x8)
		FVector Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_Interpolate_A__IO; // 0x2ED8(0x18)
		FVector Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_Interpolate_B; // 0x2EF0(0x18)
		float Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_Interpolate_T; // 0x2F08(0x4)
		unsigned char UnknownData270_6[0x4]; // 0x2F0C(0x4) UNKNOWN PROPERTY
		FTransform Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_RigUnit_SetTransform_1_Value__IO; // 0x2F10(0x60)
		TArray Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_RigUnit_SetTransform_1_CachedIndex; // 0x2F70(0x10)
		FName Solve_FaceAcc_Controls___Solve_FaceAcc_Controls_RigVMFunction_ControlFlowBranch_BlockToRun; // 0x2F80(0x4)
		bool Update_Character_Accent_Curves___Update_Character_Accent_Curves_ItemExists_Exists; // 0x2F84(0x1)
		unsigned char UnknownData271_6[0x3]; // 0x2F85(0x3) UNKNOWN PROPERTY
		FName Update_Character_Accent_Curves___Update_Character_Accent_Curves_DISPATCH_RigVMDispatch_ArrayIterator_1_Element; // 0x2F88(0x4)
		FRigElementKey Update_Character_Accent_Curves___Update_Character_Accent_Curves_ItemExists_Item__IO; // 0x2F8C(0x8)
		unsigned char UnknownData272_6[0x4]; // 0x2F94(0x4) UNKNOWN PROPERTY
		TArray Update_Character_Accent_Curves___Update_Character_Accent_Curves_ItemExists_CachedIndex; // 0x2F98(0x10)
		FName Update_Character_Accent_Curves___Update_Character_Accent_Curves_Concat_1_1_Result; // 0x2FA8(0x4)
		FName Update_Character_Accent_Curves___Update_Character_Accent_Curves_Concat_Result; // 0x2FAC(0x4)
		FName Update_Character_Accent_Curves___Update_Character_Accent_Curves_DISPATCH_RigDispatch_FromString_Result; // 0x2FB0(0x4)
		unsigned char UnknownData273_6[0x4]; // 0x2FB4(0x4) UNKNOWN PROPERTY
		FString Update_Character_Accent_Curves___Update_Character_Accent_Curves_DISPATCH_RigDispatch_ToString_1_Result; // 0x2FB8(0x10)
		FString Update_Character_Accent_Curves___Update_Character_Accent_Curves_DISPATCH_RigDispatch_ToString_Result; // 0x2FC8(0x10)
		int32_t Update_Character_Accent_Curves___Update_Character_Accent_Curves_Add_Result; // 0x2FD8(0x4)
		int32_t Update_Character_Accent_Curves___Update_Character_Accent_Curves_DISPATCH_RigVMDispatch_ArrayIterator_1_Index; // 0x2FDC(0x4)
		double Update_Character_Accent_Curves___Update_Character_Accent_Curves_MathFloatMul_3_Result; // 0x2FE0(0x8)
		double Update_Character_Accent_Curves___Update_Character_Accent_Curves_MathFloatDeg_Result; // 0x2FE8(0x8)
		double Update_Character_Accent_Curves___Update_Character_Accent_Curves_MathFloatMul_Result; // 0x2FF0(0x8)
		FVector Update_Character_Accent_Curves___Update_Character_Accent_Curves_MathQuaternionToAxisAndAngle_Axis; // 0x2FF8(0x18)
		FQuat Update_Character_Accent_Curves___Update_Character_Accent_Curves_MathQuaternionSwingTwist_Twist; // 0x3010(0x20)
		FTransform Update_Character_Accent_Curves___Update_Character_Accent_Curves_Make_Relative_Local; // 0x3030(0x60)
		FTransform Update_Character_Accent_Curves___Update_Character_Accent_Curves_Multiply_2_Result; // 0x3090(0x60)
		FTransform Update_Character_Accent_Curves___Update_Character_Accent_Curves_Make_Relative_1_Local; // 0x30F0(0x60)
		FTransform Update_Character_Accent_Curves___Update_Character_Accent_Curves_Multiply_1_Multiply_1_1_Result; // 0x3150(0x60)
		FTransform Update_Character_Accent_Curves___Update_Character_Accent_Curves_Multiply_1_Multiply_1_Result; // 0x31B0(0x60)
		FTransform Update_Character_Accent_Curves___Update_Character_Accent_Curves_Accent_Initial_Vector_to_Local_Transform_Transform; // 0x3210(0x60)
		FVector Update_Character_Accent_Curves___Update_Character_Accent_Curves_DISPATCH_RigVMDispatch_If_1_Result; // 0x3270(0x18)
		bool Update_Character_Accent_Curves___Update_Character_Accent_Curves_Less_Result; // 0x3288(0x1)
		unsigned char UnknownData274_6[0x3]; // 0x3289(0x3) UNKNOWN PROPERTY
		int32_t Update_Character_Accent_Curves___Update_Character_Accent_Curves_DISPATCH_RigVMDispatch_ArrayGetNum_Num; // 0x328C(0x4)
		bool Update_Character_Accent_Curves___Update_Character_Accent_Curves_DISPATCH_RigVMDispatch_If_1_Condition; // 0x3290(0x1)
		unsigned char UnknownData275_6[0x7]; // 0x3291(0x7) UNKNOWN PROPERTY
		FVector Update_Character_Accent_Curves___Update_Character_Accent_Curves_DISPATCH_RigVMDispatch_ArrayGetAtIndex_Element; // 0x3298(0x18)
		FQuat Accent_Initial_Vector_to_Local_Transform___Accent_Initial_Vector_to_Local_Transform_RigVMFunction_MathQuaternionFromEuler_Result; // 0x32B0(0x20)
		double Accent_Initial_Vector_to_Local_Transform___Accent_Initial_Vector_to_Local_Transform_Divide_2_Result; // 0x32D0(0x8)
		double Accent_Initial_Vector_to_Local_Transform___Accent_Initial_Vector_to_Local_Transform_Divide_2_A; // 0x32D8(0x8)
		double Accent_Initial_Vector_to_Local_Transform___Accent_Initial_Vector_to_Local_Transform_MathFloatDiv_1_Result; // 0x32E0(0x8)
		FVector Accent_Initial_Vector_to_Local_Transform___Accent_Initial_Vector_to_Local_Transform_RigVMFunction_MathQuaternionFromEuler_Euler__IO; // 0x32E8(0x18)
		double Accent_Initial_Vector_to_Local_Transform___Accent_Initial_Vector_to_Local_Transform_Divide_Result; // 0x3300(0x8)
		double Accent_Initial_Vector_to_Local_Transform___Accent_Initial_Vector_to_Local_Transform_Divide_A; // 0x3308(0x8)
		double Accent_Initial_Vector_to_Local_Transform___Accent_Initial_Vector_to_Local_Transform_Divide_1_Result; // 0x3310(0x8)
		double Accent_Initial_Vector_to_Local_Transform___Accent_Initial_Vector_to_Local_Transform_Divide_1_A; // 0x3318(0x8)
		FTransform Update_Character_Accent_Curves___Update_Character_Accent_Curves_RigUnit_GetTransform_Transform; // 0x3320(0x60)
		TArray Update_Character_Accent_Curves___Update_Character_Accent_Curves_RigUnit_GetTransform_CachedIndex; // 0x3380(0x10)
		FTransform Update_Character_Accent_Curves___Update_Character_Accent_Curves_GetTransform_1_Transform; // 0x3390(0x60)
		FRigElementKey Update_Character_Accent_Curves___Update_Character_Accent_Curves_Item_Item__IO; // 0x33F0(0x8)
		TArray Update_Character_Accent_Curves___Update_Character_Accent_Curves_GetTransform_1_CachedIndex; // 0x33F8(0x10)
		unsigned char UnknownData276_6[0x8]; // 0x3408(0x8) UNKNOWN PROPERTY
		FTransform Update_Character_Accent_Curves___Update_Character_Accent_Curves_GetTransform_1_1_Transform; // 0x3410(0x60)
		TArray Update_Character_Accent_Curves___Update_Character_Accent_Curves_GetTransform_1_1_CachedIndex; // 0x3470(0x10)
		FTransform Update_Character_Accent_Curves___Update_Character_Accent_Curves_RigUnit_GetTransform_4_Transform; // 0x3480(0x60)
		TArray Update_Character_Accent_Curves___Update_Character_Accent_Curves_RigUnit_GetTransform_4_CachedIndex; // 0x34E0(0x10)
		FQuat Update_Character_Accent_Curves___Update_Character_Accent_Curves_MathQuaternionSwingTwist_Input; // 0x34F0(0x20)
		FQuat Update_Character_Accent_Curves___Update_Character_Accent_Curves_MathQuaternionSwingTwist_Swing; // 0x3510(0x20)
		float Update_Character_Accent_Curves___Update_Character_Accent_Curves_MathQuaternionToAxisAndAngle_Angle; // 0x3530(0x4)
		unsigned char UnknownData277_6[0x4]; // 0x3534(0x4) UNKNOWN PROPERTY
		double Update_Character_Accent_Curves___Update_Character_Accent_Curves_MathFloatMul_A; // 0x3538(0x8)
		double Update_Character_Accent_Curves___Update_Character_Accent_Curves_MathFloatMul_B; // 0x3540(0x8)
		double Update_Character_Accent_Curves___Update_Character_Accent_Curves_MathFloatDiv_Result; // 0x3548(0x8)
		float Update_Character_Accent_Curves___Update_Character_Accent_Curves_SetCurveValue_1_Value; // 0x3550(0x4)
		unsigned char UnknownData278_6[0x4]; // 0x3554(0x4) UNKNOWN PROPERTY
		TArray Update_Character_Accent_Curves___Update_Character_Accent_Curves_SetCurveValue_1_CachedCurveIndex; // 0x3558(0x10)
		FName Update_Character_Accent_Curves___Update_Character_Accent_Curves_Concat_1_1_1_Result; // 0x3568(0x4)
		unsigned char UnknownData279_6[0x4]; // 0x356C(0x4) UNKNOWN PROPERTY
		double Update_Character_Accent_Curves___Update_Character_Accent_Curves_MathFloatMul_2_Result; // 0x3570(0x8)
		double Update_Character_Accent_Curves___Update_Character_Accent_Curves_MathFloatMul_2_A; // 0x3578(0x8)
		float Update_Character_Accent_Curves___Update_Character_Accent_Curves_SetCurveValue_1_1_Value; // 0x3580(0x4)
		unsigned char UnknownData280_6[0x4]; // 0x3584(0x4) UNKNOWN PROPERTY
		TArray Update_Character_Accent_Curves___Update_Character_Accent_Curves_SetCurveValue_1_1_CachedCurveIndex; // 0x3588(0x10)
		FName Update_Character_Accent_Curves___Update_Character_Accent_Curves_Concat_1_1_1_1_Result; // 0x3598(0x4)
		unsigned char UnknownData281_6[0x4]; // 0x359C(0x4) UNKNOWN PROPERTY
		double Update_Character_Accent_Curves___Update_Character_Accent_Curves_MathFloatMul_1_1_Result; // 0x35A0(0x8)
		double Update_Character_Accent_Curves___Update_Character_Accent_Curves_MathFloatMul_1_1_A; // 0x35A8(0x8)
		float Update_Character_Accent_Curves___Update_Character_Accent_Curves_SetCurveValue_1_1_1_Value; // 0x35B0(0x4)
		unsigned char UnknownData282_6[0x4]; // 0x35B4(0x4) UNKNOWN PROPERTY
		TArray Update_Character_Accent_Curves___Update_Character_Accent_Curves_SetCurveValue_1_1_1_CachedCurveIndex; // 0x35B8(0x10)
		FName Update_Character_Accent_Curves___Update_Character_Accent_Curves_Concat_1_1_1_1_1_Result; // 0x35C8(0x4)
		float Update_Character_Accent_Curves___Update_Character_Accent_Curves_SetCurveValue_1_1_2_Value; // 0x35CC(0x4)
		TArray Update_Character_Accent_Curves___Update_Character_Accent_Curves_SetCurveValue_1_1_2_CachedCurveIndex; // 0x35D0(0x10)
		FName Update_Character_Accent_Curves___Update_Character_Accent_Curves_Concat_1_1_1_1_1_1_Result; // 0x35E0(0x4)
		float Update_Character_Accent_Curves___Update_Character_Accent_Curves_SetCurveValue_1_1_3_Value; // 0x35E4(0x4)
		TArray Update_Character_Accent_Curves___Update_Character_Accent_Curves_SetCurveValue_1_1_3_CachedCurveIndex; // 0x35E8(0x10)
		FName Update_Character_Accent_Curves___Update_Character_Accent_Curves_RigVMFunction_ControlFlowBranch_BlockToRun; // 0x35F8(0x4)
		int32_t Update_Character_Accent_Curves___Update_Character_Accent_Curves_DISPATCH_RigVMDispatch_ArrayIterator_1_Count; // 0x35FC(0x4)
		float Update_Character_Accent_Curves___Update_Character_Accent_Curves_DISPATCH_RigVMDispatch_ArrayIterator_1_Ratio; // 0x3600(0x4)
		FName Update_Character_Accent_Curves___Update_Character_Accent_Curves_DISPATCH_RigVMDispatch_ArrayIterator_1_BlockToRun; // 0x3604(0x4)
		FName Solve_Face_Accessories___Solve_Face_Accessories_RigVMFunction_ControlFlowBranch_2_BlockToRun; // 0x3608(0x4)
		bool Solve_Character_Accent_Anim_Override___Solve_Character_Accent_Anim_Override_RigVMFunction_MathBoolAnd_Result; // 0x360C(0x1)
		bool Solve_Character_Accent_Anim_Override___Solve_Character_Accent_Anim_Override_Greater_Result; // 0x360D(0x1)
		unsigned char UnknownData283_6[0x2]; // 0x360E(0x2) UNKNOWN PROPERTY
		int32_t Solve_Character_Accent_Anim_Override___Solve_Character_Accent_Anim_Override_DISPATCH_RigVMDispatch_ArrayGetNum_Num; // 0x3610(0x4)
		bool Solve_Character_Accent_Anim_Override___Solve_Character_Accent_Anim_Override_DISPATCH_RigVMDispatch_ArrayIterator_Element; // 0x3614(0x1)
		bool Solve_Character_Accent_Anim_Override___Solve_Character_Accent_Anim_Override_GreaterEqual_Result; // 0x3615(0x1)
		unsigned char UnknownData284_6[0x2]; // 0x3616(0x2) UNKNOWN PROPERTY
		float Solve_Character_Accent_Anim_Override___Solve_Character_Accent_Anim_Override_GetCurveValue_1_Value; // 0x3618(0x4)
		FName Solve_Character_Accent_Anim_Override___Solve_Character_Accent_Anim_Override_Concat_Concat_1_Result; // 0x361C(0x4)
		FName Solve_Character_Accent_Anim_Override___Solve_Character_Accent_Anim_Override_Concat_Concat_Result; // 0x3620(0x4)
		unsigned char UnknownData285_6[0x4]; // 0x3624(0x4) UNKNOWN PROPERTY
		FRigVMInstructionSetExecuteState Solve_Character_Accent_Anim_Overridete_4063510808; // 0x3628(0x50)
		FName Solve_Character_Accent_Anim_Override___Solve_Character_Accent_Anim_Override_Int_to_Name_Result; // 0x3678(0x4)
		int32_t Solve_Character_Accent_Anim_Override___Solve_Character_Accent_Anim_Override_Add_Result; // 0x367C(0x4)
		int32_t Solve_Character_Accent_Anim_Override___Solve_Character_Accent_Anim_Override_DISPATCH_RigVMDispatch_ArrayIterator_Index; // 0x3680(0x4)
		bool Solve_Character_Accent_Anim_Override___Solve_Character_Accent_Anim_Override_GetCurveValue_1_Valid; // 0x3684(0x1)
		unsigned char UnknownData286_6[0x3]; // 0x3685(0x3) UNKNOWN PROPERTY
		TArray Solve_Character_Accent_Anim_Override___Solve_Character_Accent_Anim_Override_GetCurveValue_1_CachedCurveIndex; // 0x3688(0x10)
		double Solve_Character_Accent_Anim_Override___Solve_Character_Accent_Anim_Override_GreaterEqual_A; // 0x3698(0x8)
		FName Solve_Character_Accent_Anim_Override___Solve_Character_Accent_Anim_Override_Concat_1_Concat_1_Result; // 0x36A0(0x4)
		FName Solve_Character_Accent_Anim_Override___Solve_Character_Accent_Anim_Override_Concat_1_Concat_Result; // 0x36A4(0x4)
		TArray Solve_Character_Accent_Anim_Override___Solve_Character_Accent_Anim_Override_SetCurveValue_CachedCurveIndex; // 0x36A8(0x10)
		FName Solve_Character_Accent_Anim_Override___Solve_Character_Accent_Anim_Override_Concat_1_1_Concat_1_Result; // 0x36B8(0x4)
		FName Solve_Character_Accent_Anim_Override___Solve_Character_Accent_Anim_Override_Concat_1_1_Concat_Result; // 0x36BC(0x4)
		TArray Solve_Character_Accent_Anim_Override___Solve_Character_Accent_Anim_Override_SetCurveValue_1_CachedCurveIndex; // 0x36C0(0x10)
		FName Solve_Character_Accent_Anim_Override___Solve_Character_Accent_Anim_Override_RigVMFunction_ControlFlowBranch_BlockToRun; // 0x36D0(0x4)
		FName Solve_Character_Accent_Anim_Override___Solve_Character_Accent_Anim_Override_RigVMFunction_ControlFlowBranch_1_BlockToRun; // 0x36D4(0x4)
		int32_t Solve_Character_Accent_Anim_Override___Solve_Character_Accent_Anim_Override_DISPATCH_RigVMDispatch_ArrayIterator_Count; // 0x36D8(0x4)
		float Solve_Character_Accent_Anim_Override___Solve_Character_Accent_Anim_Override_DISPATCH_RigVMDispatch_ArrayIterator_Ratio; // 0x36DC(0x4)
		FName Solve_Character_Accent_Anim_Override___Solve_Character_Accent_Anim_Override_DISPATCH_RigVMDispatch_ArrayIterator_BlockToRun; // 0x36E0(0x4)
		FName Solve_Character_Accent_Anim_Override___Solve_Character_Accent_Anim_Override_RigVMFunction_ControlFlowBranch_2_BlockToRun; // 0x36E4(0x4)
		FName Head_Constraints___Head_Constraints_DISPATCH_RigVMDispatch_SwitchInt32_BlockToRun; // 0x36E8(0x4)
		unsigned char UnknownData287_6[0x4]; // 0x36EC(0x4) UNKNOWN PROPERTY
		FQuat Head_Constraints___Head_Constraints_Roll_Locked_RigVMFunction_MathQuaternionSwingTwist_1_Swing; // 0x36F0(0x20)
		FTransform Head_Constraints___Head_Constraints_Roll_Locked_RigUnit_GetTransform_1_1_Transform; // 0x3710(0x60)
		TArray Head_Constraints___Head_Constraints_Roll_Locked_RigUnit_GetTransform_1_1_CachedIndex; // 0x3770(0x10)
		FQuat Head_Constraints___Head_Constraints_Roll_Locked_RigVMFunction_MathQuaternionSwingTwist_1_Input; // 0x3780(0x20)
		FQuat Head_Constraints___Head_Constraints_Roll_Locked_RigVMFunction_MathQuaternionSwingTwist_1_Twist; // 0x37A0(0x20)
		TArray Head_Constraints___Head_Constraints_Roll_Locked_RigUnit_SetRotation_1_CachedIndex; // 0x37C0(0x10)
		FQuat Head_Constraints___Head_Constraints_Pitch_Locked_RigVMFunction_MathQuaternionSwingTwist_1_Swing; // 0x37D0(0x20)
		FTransform Head_Constraints___Head_Constraints_Pitch_Locked_RigUnit_GetTransform_1_1_Transform; // 0x37F0(0x60)
		TArray Head_Constraints___Head_Constraints_Pitch_Locked_RigUnit_GetTransform_1_1_CachedIndex; // 0x3850(0x10)
		FQuat Head_Constraints___Head_Constraints_Pitch_Locked_RigVMFunction_MathQuaternionSwingTwist_1_Input; // 0x3860(0x20)
		FQuat Head_Constraints___Head_Constraints_Pitch_Locked_RigVMFunction_MathQuaternionSwingTwist_1_Twist; // 0x3880(0x20)
		TArray Head_Constraints___Head_Constraints_Pitch_Locked_RigUnit_SetRotation_1_CachedIndex; // 0x38A0(0x10)
		FQuat Head_Constraints___Head_Constraints_Yaw_Locked_RigVMFunction_MathQuaternionSwingTwist_1_Swing; // 0x38B0(0x20)
		FTransform Head_Constraints___Head_Constraints_Yaw_Locked_RigUnit_GetTransform_1_1_Transform; // 0x38D0(0x60)
		TArray Head_Constraints___Head_Constraints_Yaw_Locked_RigUnit_GetTransform_1_1_CachedIndex; // 0x3930(0x10)
		FQuat Head_Constraints___Head_Constraints_Yaw_Locked_RigVMFunction_MathQuaternionSwingTwist_1_Input; // 0x3940(0x20)
		FQuat Head_Constraints___Head_Constraints_Yaw_Locked_RigVMFunction_MathQuaternionSwingTwist_1_Twist; // 0x3960(0x20)
		TArray Head_Constraints___Head_Constraints_Yaw_Locked_RigUnit_SetRotation_1_CachedIndex; // 0x3980(0x10)
		FQuat Head_Constraints___Head_Constraints_Yaw_Only_RigVMFunction_MathQuaternionSwingTwist_Twist; // 0x3990(0x20)
		FTransform Head_Constraints___Head_Constraints_Yaw_Only_RigUnit_GetTransform_1_Transform; // 0x39B0(0x60)
		TArray Head_Constraints___Head_Constraints_Yaw_Only_RigUnit_GetTransform_1_CachedIndex; // 0x3A10(0x10)
		FQuat Head_Constraints___Head_Constraints_Yaw_Only_RigVMFunction_MathQuaternionSwingTwist_Input; // 0x3A20(0x20)
		FQuat Head_Constraints___Head_Constraints_Yaw_Only_RigVMFunction_MathQuaternionSwingTwist_Swing; // 0x3A40(0x20)
		TArray Head_Constraints___Head_Constraints_Yaw_Only_RigUnit_SetRotation_CachedIndex; // 0x3A60(0x10)
		FName Head_Constraints___Head_Constraints_RigVMFunction_ControlFlowBranch_BlockToRun; // 0x3A70(0x4)
		FName Head_Constraints___Head_Constraints_DISPATCH_RigVMDispatch_SwitchInt32_1_BlockToRun; // 0x3A74(0x4)
		unsigned char UnknownData288_6[0x8]; // 0x3A78(0x8) UNKNOWN PROPERTY
		FQuat Head_Constraints___Head_Constraints_Yaw_Roll_10_Pitch_Back_Ease_15_Multiply_Result; // 0x3A80(0x20)
		FQuat Head_Constraints___Head_Constraints_Yaw_Roll_10_Pitch_Back_Ease_15_DISPATCH_RigVMDispatch_SelectInt32_Result; // 0x3AA0(0x20)
		int32_t Head_Constraints___Head_Constraints_Yaw_Roll_10_Pitch_Back_Ease_15_RigVMFunction_MathBoolToInteger_Result; // 0x3AC0(0x4)
		bool Head_Constraints___Head_Constraints_Yaw_Roll_10_Pitch_Back_Ease_15_GreaterEqual_Result; // 0x3AC4(0x1)
		unsigned char UnknownData289_6[0x3]; // 0x3AC5(0x3) UNKNOWN PROPERTY
		FRigVMInstructionSetExecuteState Head_Constraintste; // 0x3AC8(0x50)
		FVector Head_Constraints___Head_Constraints_Yaw_Roll_10_Pitch_Back_Ease_15_RigVMFunction_MathQuaternionToAxisAndAngle_Axis; // 0x3B18(0x18)
		FRigVMInstructionSetExecuteState Head_Constraintste_2580632230; // 0x3B30(0x50)
		FQuat Head_Constraints___Head_Constraints_Yaw_Roll_10_Pitch_Back_Ease_15_RigVMFunction_MathQuaternionSwingTwist_Twist; // 0x3B80(0x20)
		FTransform Head_Constraints___Head_Constraints_Yaw_Roll_10_Pitch_Back_Ease_15_RigUnit_GetTransform_1_Transform; // 0x3BA0(0x60)
		TArray Head_Constraints___Head_Constraints_Yaw_Roll_10_Pitch_Back_Ease_15_RigUnit_GetTransform_1_CachedIndex; // 0x3C00(0x10)
		FQuat Head_Constraints___Head_Constraints_Yaw_Roll_10_Pitch_Back_Ease_15_RigVMFunction_MathQuaternionSwingTwist_Input; // 0x3C10(0x20)
		FQuat Head_Constraints___Head_Constraints_Yaw_Roll_10_Pitch_Back_Ease_15_RigVMFunction_MathQuaternionSwingTwist_Swing; // 0x3C30(0x20)
		float Head_Constraints___Head_Constraints_Yaw_Roll_10_Pitch_Back_Ease_15_RigVMFunction_MathQuaternionToAxisAndAngle_Angle; // 0x3C50(0x4)
		unsigned char UnknownData290_6[0x4]; // 0x3C54(0x4) UNKNOWN PROPERTY
		double Head_Constraints___Head_Constraints_Yaw_Roll_10_Pitch_Back_Ease_15_GreaterEqual_A; // 0x3C58(0x8)
		int32_t Head_Constraints___Head_Constraints_Yaw_Roll_10_Pitch_Back_Ease_15_DISPATCH_RigVMDispatch_SelectInt32_Index; // 0x3C60(0x4)
		unsigned char UnknownData291_6[0xC]; // 0x3C64(0xC) UNKNOWN PROPERTY
		FQuat Head_Constraints___Head_Constraints_Yaw_Roll_10_Pitch_Back_Ease_15_Interpolate_2_Result; // 0x3C70(0x20)
		double Head_Constraints___Head_Constraints_Yaw_Roll_10_Pitch_Back_Ease_15_Remap_Result; // 0x3C90(0x8)
		double Head_Constraints___Head_Constraints_Yaw_Roll_10_Pitch_Back_Ease_15_Degrees_Result; // 0x3C98(0x8)
		double Head_Constraints___Head_Constraints_Yaw_Roll_10_Pitch_Back_Ease_15_Degrees_Value; // 0x3CA0(0x8)
		float Head_Constraints___Head_Constraints_Yaw_Roll_10_Pitch_Back_Ease_15_Interpolate_2_T; // 0x3CA8(0x4)
		unsigned char UnknownData292_6[0x4]; // 0x3CAC(0x4) UNKNOWN PROPERTY
		FQuat Head_Constraints___Head_Constraints_Yaw_Roll_10_Pitch_Back_Ease_15_Interpolate_Result; // 0x3CB0(0x20)
		TArray Head_Constraints___Head_Constraints_Yaw_Roll_10_Pitch_Back_Ease_15_RigUnit_SetRotation_CachedIndex; // 0x3CD0(0x10)
		FRigElementKey RigVMModel_Construction___DISPATCH_RigVMDispatch_ArrayIterator_1_Element; // 0x3CE0(0x8)
		TArray RigVMModel_Construction___DISPATCH_RigDispatch_SetMetadata_4_Cache; // 0x3CE8(0x10)
		bool RigVMModel_Construction___DISPATCH_RigDispatch_SetMetadata_4_Success; // 0x3CF8(0x1)
		unsigned char UnknownData293_6[0x7]; // 0x3CF9(0x7) UNKNOWN PROPERTY
		TArray RigVMModel_Construction___RigUnit_ItemArray_Items__IO; // 0x3D00(0x10)
		int32_t RigVMModel_Construction___DISPATCH_RigVMDispatch_ArrayIterator_1_Index; // 0x3D10(0x4)
		int32_t RigVMModel_Construction___DISPATCH_RigVMDispatch_ArrayIterator_1_Count; // 0x3D14(0x4)
		float RigVMModel_Construction___DISPATCH_RigVMDispatch_ArrayIterator_1_Ratio; // 0x3D18(0x4)
		FName RigVMModel_Construction___DISPATCH_RigVMDispatch_ArrayIterator_1_BlockToRun; // 0x3D1C(0x4)
		TArray RigVMModel_Construction___DISPATCH_RigDispatch_SetMetadata_1_Cache; // 0x3D20(0x10)
		bool RigVMModel_Construction___DISPATCH_RigDispatch_SetMetadata_1_Success; // 0x3D30(0x1)
		unsigned char UnknownData294_6[0x7]; // 0x3D31(0x7) UNKNOWN PROPERTY
		TArray RigVMModel_Construction___DISPATCH_RigDispatch_SetMetadata_1_1_Cache; // 0x3D38(0x10)
		bool RigVMModel_Construction___DISPATCH_RigDispatch_SetMetadata_1_1_Success; // 0x3D48(0x1)
		unsigned char UnknownData295_6[0x7]; // 0x3D49(0x7) UNKNOWN PROPERTY
		TArray RigVMModel_Construction___DISPATCH_RigDispatch_SetMetadata_1_2_Cache; // 0x3D50(0x10)
		bool RigVMModel_Construction___DISPATCH_RigDispatch_SetMetadata_1_2_Success; // 0x3D60(0x1)
		unsigned char UnknownData296_6[0x7]; // 0x3D61(0x7) UNKNOWN PROPERTY
		TArray RigVMModel_Construction___DISPATCH_RigDispatch_SetMetadata_1_3_Cache; // 0x3D68(0x10)
		bool RigVMModel_Construction___DISPATCH_RigDispatch_SetMetadata_1_3_Success; // 0x3D78(0x1)
		unsigned char UnknownData297_6[0x7]; // 0x3D79(0x7) UNKNOWN PROPERTY
		TArray RigVMModel_Construction___DISPATCH_RigDispatch_SetMetadata_1_4_Cache; // 0x3D80(0x10)
		bool RigVMModel_Construction___DISPATCH_RigDispatch_SetMetadata_1_4_Success; // 0x3D90(0x1)
		unsigned char UnknownData298_6[0x7]; // 0x3D91(0x7) UNKNOWN PROPERTY
		TArray RigVMModel_Construction___DISPATCH_RigDispatch_SetMetadata_1_1_1_Cache; // 0x3D98(0x10)
		bool RigVMModel_Construction___DISPATCH_RigDispatch_SetMetadata_1_1_1_Success; // 0x3DA8(0x1)
		unsigned char UnknownData299_6[0x7]; // 0x3DA9(0x7) UNKNOWN PROPERTY
		TArray RigVMModel_Construction___DISPATCH_RigDispatch_SetMetadata_1_2_1_Cache; // 0x3DB0(0x10)
		bool RigVMModel_Construction___DISPATCH_RigDispatch_SetMetadata_1_2_1_Success; // 0x3DC0(0x1)
		unsigned char UnknownData300_6[0x7]; // 0x3DC1(0x7) UNKNOWN PROPERTY
		TArray RigVMModel_Construction___DISPATCH_RigDispatch_SetMetadata_1_3_1_Cache; // 0x3DC8(0x10)
		bool RigVMModel_Construction___DISPATCH_RigDispatch_SetMetadata_1_3_1_Success; // 0x3DD8(0x1)
		unsigned char UnknownData301_6[0x7]; // 0x3DD9(0x7) UNKNOWN PROPERTY
		TArray RigVMModel_Construction___DISPATCH_RigDispatch_SetMetadata_1_4_1_Cache; // 0x3DE0(0x10)
		bool RigVMModel_Construction___DISPATCH_RigDispatch_SetMetadata_1_4_1_Success; // 0x3DF0(0x1)
		unsigned char UnknownData302_6[0x7]; // 0x3DF1(0x7) UNKNOWN PROPERTY
		TArray RigVMModel_Construction___DISPATCH_RigDispatch_SetMetadata_1_4_1_1_Cache; // 0x3DF8(0x10)
		bool RigVMModel_Construction___DISPATCH_RigDispatch_SetMetadata_1_4_1_1_Success; // 0x3E08(0x1)
		unsigned char UnknownData303_6[0x7]; // 0x3E09(0x7) UNKNOWN PROPERTY
		TArray RigVMModel_Construction___DISPATCH_RigDispatch_SetMetadata_1_4_1_1_1_Cache; // 0x3E10(0x10)
		bool RigVMModel_Construction___DISPATCH_RigDispatch_SetMetadata_1_4_1_1_1_Success; // 0x3E20(0x1)
		bool RigVMModel_Construction___DISPATCH_RigDispatch_GetUserData_Result; // 0x3E21(0x1)
		bool RigVMModel_Construction___DISPATCH_RigDispatch_GetUserData_Found; // 0x3E22(0x1)
		bool RigVMModel_Construction___DISPATCH_RigDispatch_GetUserData_7_Result; // 0x3E23(0x1)
		bool RigVMModel_Construction___DISPATCH_RigDispatch_GetUserData_7_Found; // 0x3E24(0x1)
		bool RigVMModel_Construction___DISPATCH_RigDispatch_GetUserData_1_Result; // 0x3E25(0x1)
		bool RigVMModel_Construction___DISPATCH_RigDispatch_GetUserData_1_Found; // 0x3E26(0x1)
		unsigned char UnknownData304_6[0x1]; // 0x3E27(0x1) UNKNOWN PROPERTY
		FVector RigVMModel_Construction___DISPATCH_RigDispatch_GetUserData_1_1_1_1_1_1_1_1_Result; // 0x3E28(0x18)
		bool RigVMModel_Construction___DISPATCH_RigDispatch_GetUserData_1_1_1_1_1_1_1_1_Found; // 0x3E40(0x1)
		bool RigVMModel_Construction___DISPATCH_RigDispatch_GetUserData_1_1_Result; // 0x3E41(0x1)
		bool RigVMModel_Construction___DISPATCH_RigDispatch_GetUserData_1_1_Found; // 0x3E42(0x1)
		unsigned char UnknownData305_6[0x5]; // 0x3E43(0x5) UNKNOWN PROPERTY
		double RigVMModel_Construction___DISPATCH_RigDispatch_GetUserData_1_1_1_1_Result; // 0x3E48(0x8)
		bool RigVMModel_Construction___DISPATCH_RigDispatch_GetUserData_1_1_1_1_Found; // 0x3E50(0x1)
		unsigned char UnknownData306_6[0x7]; // 0x3E51(0x7) UNKNOWN PROPERTY
		FVector RigVMModel_Construction___DISPATCH_RigDispatch_GetUserData_1_1_1_1_1_1_Result; // 0x3E58(0x18)
		bool RigVMModel_Construction___DISPATCH_RigDispatch_GetUserData_1_1_1_1_1_1_Found; // 0x3E70(0x1)
		bool RigVMModel_Construction___DISPATCH_RigDispatch_GetUserData_1_1_1_Result; // 0x3E71(0x1)
		bool RigVMModel_Construction___DISPATCH_RigDispatch_GetUserData_1_1_1_Found; // 0x3E72(0x1)
		unsigned char UnknownData307_6[0x5]; // 0x3E73(0x5) UNKNOWN PROPERTY
		double RigVMModel_Construction___DISPATCH_RigDispatch_GetUserData_1_1_1_1_1_Result; // 0x3E78(0x8)
		bool RigVMModel_Construction___DISPATCH_RigDispatch_GetUserData_1_1_1_1_1_Found; // 0x3E80(0x1)
		unsigned char UnknownData308_6[0x7]; // 0x3E81(0x7) UNKNOWN PROPERTY
		FVector RigVMModel_Construction___DISPATCH_RigDispatch_GetUserData_1_1_1_1_1_1_1_Result; // 0x3E88(0x18)
		bool RigVMModel_Construction___DISPATCH_RigDispatch_GetUserData_1_1_1_1_1_1_1_Found; // 0x3EA0(0x1)
		unsigned char UnknownData309_6[0x7]; // 0x3EA1(0x7) UNKNOWN PROPERTY
		TArray RigVMModel_Construction___DISPATCH_RigDispatch_GetUserData_4_Result; // 0x3EA8(0x10)
		bool RigVMModel_Construction___DISPATCH_RigDispatch_GetUserData_4_Found; // 0x3EB8(0x1)
		unsigned char UnknownData310_6[0x7]; // 0x3EB9(0x7) UNKNOWN PROPERTY
		FFigure_PushAwayControl_Struct RigVMModel_Construction___DISPATCH_RigVMDispatch_ArrayIterator_2_Element; // 0x3EC0(0x150)
		FVector RigVMModel_Construction___Construct_Control_at_UV_Cord_Initial_UV_Cords; // 0x4010(0x18)
		FRigElementKey RigVMModel_Construction___Construct_Control_at_UV_Cord_New_Control; // 0x4028(0x8)
		FName RigVMModel_Construction___Construct_Control_at_UV_Cord_Name; // 0x4030(0x4)
		unsigned char UnknownData311_6[0xC]; // 0x4034(0xC) UNKNOWN PROPERTY
		FTransform Construct_Control_at_UV_Cord___Construct_Control_at_UV_Cord_Multiply_2_Result; // 0x4040(0x60)
		FTransform Construct_Control_at_UV_Cord___Construct_Control_at_UV_Cord_Accent_Initial_Vector_to_Local_Transform_Transform; // 0x40A0(0x60)
		int32_t RigVMModel_Construction___DISPATCH_RigVMDispatch_ArrayIterator_2_Index; // 0x4100(0x4)
		unsigned char UnknownData312_6[0xC]; // 0x4104(0xC) UNKNOWN PROPERTY
		FFigure_PushAwayControl_Struct RigVMModel_Construction___DISPATCH_RigVMDispatch_ArraySetAtIndex_Element__IO; // 0x4110(0x150)
		FRigElementKey RigVMModel_Construction___DISPATCH_RigDispatch_SetMetadata_5_Item; // 0x4260(0x8)
		TArray RigVMModel_Construction___DISPATCH_RigDispatch_SetMetadata_5_Cache; // 0x4268(0x10)
		bool RigVMModel_Construction___DISPATCH_RigDispatch_SetMetadata_5_Success; // 0x4278(0x1)
		unsigned char UnknownData313_6[0x3]; // 0x4279(0x3) UNKNOWN PROPERTY
		int32_t RigVMModel_Construction___DISPATCH_RigVMDispatch_ArrayIterator_2_Count; // 0x427C(0x4)
		float RigVMModel_Construction___DISPATCH_RigVMDispatch_ArrayIterator_2_Ratio; // 0x4280(0x4)
		FName RigVMModel_Construction___DISPATCH_RigVMDispatch_ArrayIterator_2_BlockToRun; // 0x4284(0x4)
		TArray RigVMModel_Construction___DISPATCH_RigDispatch_GetUserData_6_2_Result; // 0x4288(0x10)
		bool RigVMModel_Construction___DISPATCH_RigDispatch_GetUserData_6_2_Found; // 0x4298(0x1)
		unsigned char UnknownData314_6[0x7]; // 0x4299(0x7) UNKNOWN PROPERTY
		TArray RigVMModel_Construction___DISPATCH_RigDispatch_GetUserData_5_Result; // 0x42A0(0x10)
		bool RigVMModel_Construction___DISPATCH_RigDispatch_GetUserData_5_Found; // 0x42B0(0x1)
		unsigned char UnknownData315_6[0xF]; // 0x42B1(0xF) UNKNOWN PROPERTY
		FTransform RigVMModel_Construction___RigUnit_GetTransform_1_Transform; // 0x42C0(0x60)
		TArray RigVMModel_Construction___RigUnit_GetTransform_1_CachedIndex; // 0x4320(0x10)
		TArray RigVMModel_Construction___RigUnit_SetTransform_5_CachedIndex; // 0x4330(0x10)
		bool RigVMModel_Construction___DISPATCH_RigVMDispatch_ArrayFind_1_Success; // 0x4340(0x1)
		unsigned char UnknownData316_6[0x3]; // 0x4341(0x3) UNKNOWN PROPERTY
		int32_t RigVMModel_Construction___DISPATCH_RigVMDispatch_ArrayFind_1_Index; // 0x4344(0x4)
		TArray RigVMModel_Construction___DISPATCH_RigDispatch_SetMetadata_6_1_5_Cache; // 0x4348(0x10)
		bool RigVMModel_Construction___DISPATCH_RigDispatch_SetMetadata_6_1_5_Success; // 0x4358(0x1)
		unsigned char UnknownData317_6[0x7]; // 0x4359(0x7) UNKNOWN PROPERTY
		TArray RigVMModel_Construction___DISPATCH_RigDispatch_SetMetadata_6_1_5_1_Cache; // 0x4360(0x10)
		bool RigVMModel_Construction___DISPATCH_RigDispatch_SetMetadata_6_1_5_1_Success; // 0x4370(0x1)
		unsigned char UnknownData318_6[0x7]; // 0x4371(0x7) UNKNOWN PROPERTY
		TArray RigVMModel_Construction___DISPATCH_RigDispatch_SetMetadata_6_1_5_1_1_Cache; // 0x4378(0x10)
		bool RigVMModel_Construction___DISPATCH_RigDispatch_SetMetadata_6_1_5_1_1_Success; // 0x4388(0x1)
		unsigned char UnknownData319_6[0x7]; // 0x4389(0x7) UNKNOWN PROPERTY
		TArray RigVMModel_Construction___DISPATCH_RigDispatch_SetMetadata_6_1_5_1_2_Cache; // 0x4390(0x10)
		bool RigVMModel_Construction___DISPATCH_RigDispatch_SetMetadata_6_1_5_1_2_Success; // 0x43A0(0x1)
		unsigned char UnknownData320_6[0x7]; // 0x43A1(0x7) UNKNOWN PROPERTY
		TArray RigVMModel_Construction___DISPATCH_RigDispatch_SetMetadata_6_1_5_1_3_Cache; // 0x43A8(0x10)
		bool RigVMModel_Construction___DISPATCH_RigDispatch_SetMetadata_6_1_5_1_3_Success; // 0x43B8(0x1)
		unsigned char UnknownData321_6[0x7]; // 0x43B9(0x7) UNKNOWN PROPERTY
		TArray RigVMModel_Construction___DISPATCH_RigDispatch_SetMetadata_6_1_5_1_3_1_Cache; // 0x43C0(0x10)
		bool RigVMModel_Construction___DISPATCH_RigDispatch_SetMetadata_6_1_5_1_3_1_Success; // 0x43D0(0x1)
		unsigned char UnknownData322_6[0x3]; // 0x43D1(0x3) UNKNOWN PROPERTY
		FName RigVMModel_Construction___RigVMFunction_ControlFlowBranch_5_BlockToRun; // 0x43D4(0x4)
		bool RigVMModel_Construction___Greater_Result; // 0x43D8(0x1)
		unsigned char UnknownData323_6[0x3]; // 0x43D9(0x3) UNKNOWN PROPERTY
		int32_t RigVMModel_Construction___DISPATCH_RigVMDispatch_ArrayGetNum_Num; // 0x43DC(0x4)
		FName RigVMModel_Construction___DISPATCH_RigVMDispatch_ArrayIterator_3_Element; // 0x43E0(0x4)
		FRigElementKey RigVMModel_Construction___DISPATCH_RigDispatch_SetMetadata_6_Item__IO; // 0x43E4(0x8)
		unsigned char UnknownData324_6[0x4]; // 0x43EC(0x4) UNKNOWN PROPERTY
		TArray RigVMModel_Construction___DISPATCH_RigDispatch_SetMetadata_6_Cache; // 0x43F0(0x10)
		bool RigVMModel_Construction___DISPATCH_RigDispatch_SetMetadata_6_Success; // 0x4400(0x1)
		unsigned char UnknownData325_6[0x3]; // 0x4401(0x3) UNKNOWN PROPERTY
		int32_t RigVMModel_Construction___DISPATCH_RigVMDispatch_ArrayIterator_3_Index; // 0x4404(0x4)
		int32_t RigVMModel_Construction___DISPATCH_RigVMDispatch_ArrayIterator_3_Count; // 0x4408(0x4)
		float RigVMModel_Construction___DISPATCH_RigVMDispatch_ArrayIterator_3_Ratio; // 0x440C(0x4)
		FName RigVMModel_Construction___DISPATCH_RigVMDispatch_ArrayIterator_3_BlockToRun; // 0x4410(0x4)
		bool RigVMModel_Construction___ItemExists_Exists; // 0x4414(0x1)
		unsigned char UnknownData326_6[0x3]; // 0x4415(0x3) UNKNOWN PROPERTY
		FRigElementKey RigVMModel_Construction___DISPATCH_RigVMDispatch_ArrayIterator_Element; // 0x4418(0x8)
		TArray RigVMModel_Construction___ItemExists_CachedIndex; // 0x4420(0x10)
		FTransform RigVMModel_Construction___DISPATCH_RigVMDispatch_ArrayGetAtIndex_2_Element; // 0x4430(0x60)
		TArray RigVMModel_Construction___DISPATCH_RigDispatch_GetUserData_3_1_Result; // 0x4490(0x10)
		bool RigVMModel_Construction___DISPATCH_RigDispatch_GetUserData_3_1_Found; // 0x44A0(0x1)
		unsigned char UnknownData327_6[0x3]; // 0x44A1(0x3) UNKNOWN PROPERTY
		int32_t RigVMModel_Construction___DISPATCH_RigVMDispatch_ArrayIterator_Index; // 0x44A4(0x4)
		TArray RigVMModel_Construction___RigUnit_SetTransform_6_1_CachedIndex; // 0x44A8(0x10)
		FName RigVMModel_Construction___RigVMFunction_ControlFlowBranch_6_BlockToRun; // 0x44B8(0x4)
		unsigned char UnknownData328_6[0x4]; // 0x44BC(0x4) UNKNOWN PROPERTY
		TArray RigVMModel_Construction___DISPATCH_RigDispatch_GetUserData_3_Result; // 0x44C0(0x10)
		bool RigVMModel_Construction___DISPATCH_RigDispatch_GetUserData_3_Found; // 0x44D0(0x1)
		unsigned char UnknownData329_6[0x3]; // 0x44D1(0x3) UNKNOWN PROPERTY
		int32_t RigVMModel_Construction___DISPATCH_RigVMDispatch_ArrayIterator_Count; // 0x44D4(0x4)
		float RigVMModel_Construction___DISPATCH_RigVMDispatch_ArrayIterator_Ratio; // 0x44D8(0x4)
		FName RigVMModel_Construction___DISPATCH_RigVMDispatch_ArrayIterator_BlockToRun; // 0x44DC(0x4)
		bool Init_Mouth_Registration___Init_Mouth_Registration_RigVMFunction_MathBoolOr_Result; // 0x44E0(0x1)
		bool Init_Mouth_Registration___Init_Mouth_Registration_DISPATCH_RigDispatch_GetMetadata_Value; // 0x44E1(0x1)
		unsigned char UnknownData330_6[0x6]; // 0x44E2(0x6) UNKNOWN PROPERTY
		TArray Init_Mouth_Registration___Init_Mouth_Registration_DISPATCH_RigDispatch_GetMetadata_Cache; // 0x44E8(0x10)
		bool Init_Mouth_Registration___Init_Mouth_Registration_DISPATCH_RigDispatch_GetMetadata_Found; // 0x44F8(0x1)
		unsigned char UnknownData331_6[0x7]; // 0x44F9(0x7) UNKNOWN PROPERTY
		TArray Init_Mouth_Registration___Init_Mouth_Registration_DISPATCH_RigDispatch_SetMetadata_Cache; // 0x4500(0x10)
		FRigVMInstructionSetExecuteState Init_Mouth_Registrationte; // 0x4510(0x50)
		TArray Init_Mouth_Registration___Init_Mouth_Registration_DISPATCH_RigDispatch_GetUserData_2_Result; // 0x4560(0x10)
		bool Init_Mouth_Registration___Init_Mouth_Registration_DISPATCH_RigDispatch_GetUserData_2_Found; // 0x4570(0x1)
		bool Init_Mouth_Registration___Init_Mouth_Registration_DISPATCH_RigDispatch_SetMetadata_Success; // 0x4571(0x1)
		bool Init_Mouth_Registration___Init_Mouth_Registration_ItemExists_Exists; // 0x4572(0x1)
		unsigned char UnknownData332_6[0x5]; // 0x4573(0x5) UNKNOWN PROPERTY
		TArray Init_Mouth_Registration___Init_Mouth_Registration_ItemExists_CachedIndex; // 0x4578(0x10)
		TArray Init_Mouth_Registration___Init_Mouth_Registration_DISPATCH_RigDispatch_SetMetadata_3_1_Cache; // 0x4588(0x10)
		bool Init_Mouth_Registration___Init_Mouth_Registration_DISPATCH_RigDispatch_SetMetadata_3_1_Success; // 0x4598(0x1)
		bool Init_Mouth_Registration___Init_Mouth_Registration_Greater_1_Result; // 0x4599(0x1)
		unsigned char UnknownData333_6[0x2]; // 0x459A(0x2) UNKNOWN PROPERTY
		int32_t Init_Mouth_Registration___Init_Mouth_Registration_DISPATCH_RigVMDispatch_ArrayGetNum_1_Num; // 0x459C(0x4)
		FTransform Init_Mouth_Registration___Init_Mouth_Registration_Multiply_Result; // 0x45A0(0x60)
		FTransform Init_Mouth_Registration___Init_Mouth_Registration_DISPATCH_RigVMDispatch_ArrayGetAtIndex_Element; // 0x4600(0x60)
		FTransform Init_Mouth_Registration___Init_Mouth_Registration_RigUnit_GetTransform_Transform; // 0x4660(0x60)
		TArray Init_Mouth_Registration___Init_Mouth_Registration_RigUnit_GetTransform_CachedIndex; // 0x46C0(0x10)
		TArray Init_Mouth_Registration___Init_Mouth_Registration_RigUnit_SetTransform_CachedIndex; // 0x46D0(0x10)
		TArray Init_Mouth_Registration___Init_Mouth_Registration_DISPATCH_RigDispatch_SetMetadata_6_1_Cache; // 0x46E0(0x10)
		bool Init_Mouth_Registration___Init_Mouth_Registration_DISPATCH_RigDispatch_SetMetadata_6_1_Success; // 0x46F0(0x1)
		unsigned char UnknownData334_6[0x3]; // 0x46F1(0x3) UNKNOWN PROPERTY
		FName Init_Mouth_Registration___Init_Mouth_Registration_RigVMFunction_ControlFlowBranch_BlockToRun; // 0x46F4(0x4)
		FName Init_Mouth_Registration___Init_Mouth_Registration_RigVMFunction_ControlFlowBranch_1_BlockToRun; // 0x46F8(0x4)
		FName Init_Mouth_Registration___Init_Mouth_Registration_RigVMFunction_ControlFlowBranch_4_BlockToRun; // 0x46FC(0x4)
		bool Init_Mouth_Registration_1___Init_Mouth_Registration_RigVMFunction_MathBoolOr_Result; // 0x4700(0x1)
		bool Init_Mouth_Registration_1___Init_Mouth_Registration_DISPATCH_RigDispatch_GetMetadata_Value; // 0x4701(0x1)
		unsigned char UnknownData335_6[0x6]; // 0x4702(0x6) UNKNOWN PROPERTY
		TArray Init_Mouth_Registration_1___Init_Mouth_Registration_DISPATCH_RigDispatch_GetMetadata_Cache; // 0x4708(0x10)
		bool Init_Mouth_Registration_1___Init_Mouth_Registration_DISPATCH_RigDispatch_GetMetadata_Found; // 0x4718(0x1)
		unsigned char UnknownData336_6[0x7]; // 0x4719(0x7) UNKNOWN PROPERTY
		TArray Init_Mouth_Registration_1___Init_Mouth_Registration_DISPATCH_RigDispatch_SetMetadata_Cache; // 0x4720(0x10)
		FRigVMInstructionSetExecuteState Init_Mouth_Registration_1te; // 0x4730(0x50)
		TArray Init_Mouth_Registration_1___Init_Mouth_Registration_DISPATCH_RigDispatch_GetUserData_2_Result; // 0x4780(0x10)
		bool Init_Mouth_Registration_1___Init_Mouth_Registration_DISPATCH_RigDispatch_GetUserData_2_Found; // 0x4790(0x1)
		bool Init_Mouth_Registration_1___Init_Mouth_Registration_DISPATCH_RigDispatch_SetMetadata_Success; // 0x4791(0x1)
		bool Init_Mouth_Registration_1___Init_Mouth_Registration_ItemExists_Exists; // 0x4792(0x1)
		unsigned char UnknownData337_6[0x5]; // 0x4793(0x5) UNKNOWN PROPERTY
		TArray Init_Mouth_Registration_1___Init_Mouth_Registration_ItemExists_CachedIndex; // 0x4798(0x10)
		TArray Init_Mouth_Registration_1___Init_Mouth_Registration_DISPATCH_RigDispatch_SetMetadata_3_1_Cache; // 0x47A8(0x10)
		bool Init_Mouth_Registration_1___Init_Mouth_Registration_DISPATCH_RigDispatch_SetMetadata_3_1_Success; // 0x47B8(0x1)
		bool Init_Mouth_Registration_1___Init_Mouth_Registration_Greater_1_Result; // 0x47B9(0x1)
		unsigned char UnknownData338_6[0x2]; // 0x47BA(0x2) UNKNOWN PROPERTY
		int32_t Init_Mouth_Registration_1___Init_Mouth_Registration_DISPATCH_RigVMDispatch_ArrayGetNum_1_Num; // 0x47BC(0x4)
		FTransform Init_Mouth_Registration_1___Init_Mouth_Registration_Multiply_Result; // 0x47C0(0x60)
		FTransform Init_Mouth_Registration_1___Init_Mouth_Registration_DISPATCH_RigVMDispatch_ArrayGetAtIndex_Element; // 0x4820(0x60)
		FTransform Init_Mouth_Registration_1___Init_Mouth_Registration_RigUnit_GetTransform_Transform; // 0x4880(0x60)
		TArray Init_Mouth_Registration_1___Init_Mouth_Registration_RigUnit_GetTransform_CachedIndex; // 0x48E0(0x10)
		TArray Init_Mouth_Registration_1___Init_Mouth_Registration_RigUnit_SetTransform_CachedIndex; // 0x48F0(0x10)
		TArray Init_Mouth_Registration_1___Init_Mouth_Registration_DISPATCH_RigDispatch_SetMetadata_6_1_Cache; // 0x4900(0x10)
		bool Init_Mouth_Registration_1___Init_Mouth_Registration_DISPATCH_RigDispatch_SetMetadata_6_1_Success; // 0x4910(0x1)
		unsigned char UnknownData339_6[0x3]; // 0x4911(0x3) UNKNOWN PROPERTY
		FName Init_Mouth_Registration_1___Init_Mouth_Registration_RigVMFunction_ControlFlowBranch_BlockToRun; // 0x4914(0x4)
		FName Init_Mouth_Registration_1___Init_Mouth_Registration_RigVMFunction_ControlFlowBranch_1_BlockToRun; // 0x4918(0x4)
		FName Init_Mouth_Registration_1___Init_Mouth_Registration_RigVMFunction_ControlFlowBranch_4_BlockToRun; // 0x491C(0x4)
		bool Init_Mouth_Registration_1_1___Init_Mouth_Registration_RigVMFunction_MathBoolOr_Result; // 0x4920(0x1)
		bool Init_Mouth_Registration_1_1___Init_Mouth_Registration_DISPATCH_RigDispatch_GetMetadata_Value; // 0x4921(0x1)
		unsigned char UnknownData340_6[0x6]; // 0x4922(0x6) UNKNOWN PROPERTY
		TArray Init_Mouth_Registration_1_1___Init_Mouth_Registration_DISPATCH_RigDispatch_GetMetadata_Cache; // 0x4928(0x10)
		bool Init_Mouth_Registration_1_1___Init_Mouth_Registration_DISPATCH_RigDispatch_GetMetadata_Found; // 0x4938(0x1)
		unsigned char UnknownData341_6[0x7]; // 0x4939(0x7) UNKNOWN PROPERTY
		TArray Init_Mouth_Registration_1_1___Init_Mouth_Registration_DISPATCH_RigDispatch_SetMetadata_Cache; // 0x4940(0x10)
		FRigVMInstructionSetExecuteState Init_Mouth_Registration_1_1te; // 0x4950(0x50)
		TArray Init_Mouth_Registration_1_1___Init_Mouth_Registration_DISPATCH_RigDispatch_GetUserData_2_Result; // 0x49A0(0x10)
		bool Init_Mouth_Registration_1_1___Init_Mouth_Registration_DISPATCH_RigDispatch_GetUserData_2_Found; // 0x49B0(0x1)
		bool Init_Mouth_Registration_1_1___Init_Mouth_Registration_DISPATCH_RigDispatch_SetMetadata_Success; // 0x49B1(0x1)
		bool Init_Mouth_Registration_1_1___Init_Mouth_Registration_ItemExists_Exists; // 0x49B2(0x1)
		unsigned char UnknownData342_6[0x5]; // 0x49B3(0x5) UNKNOWN PROPERTY
		TArray Init_Mouth_Registration_1_1___Init_Mouth_Registration_ItemExists_CachedIndex; // 0x49B8(0x10)
		TArray Init_Mouth_Registration_1_1___Init_Mouth_Registration_DISPATCH_RigDispatch_SetMetadata_3_1_Cache; // 0x49C8(0x10)
		bool Init_Mouth_Registration_1_1___Init_Mouth_Registration_DISPATCH_RigDispatch_SetMetadata_3_1_Success; // 0x49D8(0x1)
		bool Init_Mouth_Registration_1_1___Init_Mouth_Registration_Greater_1_Result; // 0x49D9(0x1)
		unsigned char UnknownData343_6[0x2]; // 0x49DA(0x2) UNKNOWN PROPERTY
		int32_t Init_Mouth_Registration_1_1___Init_Mouth_Registration_DISPATCH_RigVMDispatch_ArrayGetNum_1_Num; // 0x49DC(0x4)
		FTransform Init_Mouth_Registration_1_1___Init_Mouth_Registration_Multiply_Result; // 0x49E0(0x60)
		FTransform Init_Mouth_Registration_1_1___Init_Mouth_Registration_DISPATCH_RigVMDispatch_ArrayGetAtIndex_Element; // 0x4A40(0x60)
		FTransform Init_Mouth_Registration_1_1___Init_Mouth_Registration_RigUnit_GetTransform_Transform; // 0x4AA0(0x60)
		TArray Init_Mouth_Registration_1_1___Init_Mouth_Registration_RigUnit_GetTransform_CachedIndex; // 0x4B00(0x10)
		TArray Init_Mouth_Registration_1_1___Init_Mouth_Registration_RigUnit_SetTransform_CachedIndex; // 0x4B10(0x10)
		TArray Init_Mouth_Registration_1_1___Init_Mouth_Registration_DISPATCH_RigDispatch_SetMetadata_6_1_Cache; // 0x4B20(0x10)
		bool Init_Mouth_Registration_1_1___Init_Mouth_Registration_DISPATCH_RigDispatch_SetMetadata_6_1_Success; // 0x4B30(0x1)
		unsigned char UnknownData344_6[0x3]; // 0x4B31(0x3) UNKNOWN PROPERTY
		FName Init_Mouth_Registration_1_1___Init_Mouth_Registration_RigVMFunction_ControlFlowBranch_BlockToRun; // 0x4B34(0x4)
		FName Init_Mouth_Registration_1_1___Init_Mouth_Registration_RigVMFunction_ControlFlowBranch_1_BlockToRun; // 0x4B38(0x4)
		FName Init_Mouth_Registration_1_1___Init_Mouth_Registration_RigVMFunction_ControlFlowBranch_4_BlockToRun; // 0x4B3C(0x4)
		bool Init_Mouth_Registration_1_1_1___Init_Mouth_Registration_RigVMFunction_MathBoolOr_Result; // 0x4B40(0x1)
		bool Init_Mouth_Registration_1_1_1___Init_Mouth_Registration_DISPATCH_RigDispatch_GetMetadata_Value; // 0x4B41(0x1)
		unsigned char UnknownData345_6[0x6]; // 0x4B42(0x6) UNKNOWN PROPERTY
		TArray Init_Mouth_Registration_1_1_1___Init_Mouth_Registration_DISPATCH_RigDispatch_GetMetadata_Cache; // 0x4B48(0x10)
		bool Init_Mouth_Registration_1_1_1___Init_Mouth_Registration_DISPATCH_RigDispatch_GetMetadata_Found; // 0x4B58(0x1)
		unsigned char UnknownData346_6[0x7]; // 0x4B59(0x7) UNKNOWN PROPERTY
		TArray Init_Mouth_Registration_1_1_1___Init_Mouth_Registration_DISPATCH_RigDispatch_SetMetadata_Cache; // 0x4B60(0x10)
		FRigVMInstructionSetExecuteState Init_Mouth_Registration_1_1_1te; // 0x4B70(0x50)
		TArray Init_Mouth_Registration_1_1_1___Init_Mouth_Registration_DISPATCH_RigDispatch_GetUserData_2_Result; // 0x4BC0(0x10)
		bool Init_Mouth_Registration_1_1_1___Init_Mouth_Registration_DISPATCH_RigDispatch_GetUserData_2_Found; // 0x4BD0(0x1)
		bool Init_Mouth_Registration_1_1_1___Init_Mouth_Registration_DISPATCH_RigDispatch_SetMetadata_Success; // 0x4BD1(0x1)
		bool Init_Mouth_Registration_1_1_1___Init_Mouth_Registration_ItemExists_Exists; // 0x4BD2(0x1)
		unsigned char UnknownData347_6[0x5]; // 0x4BD3(0x5) UNKNOWN PROPERTY
		TArray Init_Mouth_Registration_1_1_1___Init_Mouth_Registration_ItemExists_CachedIndex; // 0x4BD8(0x10)
		TArray Init_Mouth_Registration_1_1_1___Init_Mouth_Registration_DISPATCH_RigDispatch_SetMetadata_3_1_Cache; // 0x4BE8(0x10)
		bool Init_Mouth_Registration_1_1_1___Init_Mouth_Registration_DISPATCH_RigDispatch_SetMetadata_3_1_Success; // 0x4BF8(0x1)
		bool Init_Mouth_Registration_1_1_1___Init_Mouth_Registration_Greater_1_Result; // 0x4BF9(0x1)
		unsigned char UnknownData348_6[0x2]; // 0x4BFA(0x2) UNKNOWN PROPERTY
		int32_t Init_Mouth_Registration_1_1_1___Init_Mouth_Registration_DISPATCH_RigVMDispatch_ArrayGetNum_1_Num; // 0x4BFC(0x4)
		FTransform Init_Mouth_Registration_1_1_1___Init_Mouth_Registration_Multiply_Result; // 0x4C00(0x60)
		FTransform Init_Mouth_Registration_1_1_1___Init_Mouth_Registration_DISPATCH_RigVMDispatch_ArrayGetAtIndex_Element; // 0x4C60(0x60)
		FTransform Init_Mouth_Registration_1_1_1___Init_Mouth_Registration_RigUnit_GetTransform_Transform; // 0x4CC0(0x60)
		TArray Init_Mouth_Registration_1_1_1___Init_Mouth_Registration_RigUnit_GetTransform_CachedIndex; // 0x4D20(0x10)
		TArray Init_Mouth_Registration_1_1_1___Init_Mouth_Registration_RigUnit_SetTransform_CachedIndex; // 0x4D30(0x10)
		TArray Init_Mouth_Registration_1_1_1___Init_Mouth_Registration_DISPATCH_RigDispatch_SetMetadata_6_1_Cache; // 0x4D40(0x10)
		bool Init_Mouth_Registration_1_1_1___Init_Mouth_Registration_DISPATCH_RigDispatch_SetMetadata_6_1_Success; // 0x4D50(0x1)
		unsigned char UnknownData349_6[0x3]; // 0x4D51(0x3) UNKNOWN PROPERTY
		FName Init_Mouth_Registration_1_1_1___Init_Mouth_Registration_RigVMFunction_ControlFlowBranch_BlockToRun; // 0x4D54(0x4)
		FName Init_Mouth_Registration_1_1_1___Init_Mouth_Registration_RigVMFunction_ControlFlowBranch_1_BlockToRun; // 0x4D58(0x4)
		FName Init_Mouth_Registration_1_1_1___Init_Mouth_Registration_RigVMFunction_ControlFlowBranch_4_BlockToRun; // 0x4D5C(0x4)
		bool Init_Mouth_Registration_1_1_2___Init_Mouth_Registration_RigVMFunction_MathBoolOr_Result; // 0x4D60(0x1)
		bool Init_Mouth_Registration_1_1_2___Init_Mouth_Registration_DISPATCH_RigDispatch_GetMetadata_Value; // 0x4D61(0x1)
		unsigned char UnknownData350_6[0x6]; // 0x4D62(0x6) UNKNOWN PROPERTY
		TArray Init_Mouth_Registration_1_1_2___Init_Mouth_Registration_DISPATCH_RigDispatch_GetMetadata_Cache; // 0x4D68(0x10)
		bool Init_Mouth_Registration_1_1_2___Init_Mouth_Registration_DISPATCH_RigDispatch_GetMetadata_Found; // 0x4D78(0x1)
		unsigned char UnknownData351_6[0x7]; // 0x4D79(0x7) UNKNOWN PROPERTY
		TArray Init_Mouth_Registration_1_1_2___Init_Mouth_Registration_DISPATCH_RigDispatch_SetMetadata_Cache; // 0x4D80(0x10)
		FRigVMInstructionSetExecuteState Init_Mouth_Registration_1_1_2te; // 0x4D90(0x50)
		TArray Init_Mouth_Registration_1_1_2___Init_Mouth_Registration_DISPATCH_RigDispatch_GetUserData_2_Result; // 0x4DE0(0x10)
		bool Init_Mouth_Registration_1_1_2___Init_Mouth_Registration_DISPATCH_RigDispatch_GetUserData_2_Found; // 0x4DF0(0x1)
		bool Init_Mouth_Registration_1_1_2___Init_Mouth_Registration_DISPATCH_RigDispatch_SetMetadata_Success; // 0x4DF1(0x1)
		bool Init_Mouth_Registration_1_1_2___Init_Mouth_Registration_ItemExists_Exists; // 0x4DF2(0x1)
		unsigned char UnknownData352_6[0x5]; // 0x4DF3(0x5) UNKNOWN PROPERTY
		TArray Init_Mouth_Registration_1_1_2___Init_Mouth_Registration_ItemExists_CachedIndex; // 0x4DF8(0x10)
		TArray Init_Mouth_Registration_1_1_2___Init_Mouth_Registration_DISPATCH_RigDispatch_SetMetadata_3_1_Cache; // 0x4E08(0x10)
		bool Init_Mouth_Registration_1_1_2___Init_Mouth_Registration_DISPATCH_RigDispatch_SetMetadata_3_1_Success; // 0x4E18(0x1)
		bool Init_Mouth_Registration_1_1_2___Init_Mouth_Registration_Greater_1_Result; // 0x4E19(0x1)
		unsigned char UnknownData353_6[0x2]; // 0x4E1A(0x2) UNKNOWN PROPERTY
		int32_t Init_Mouth_Registration_1_1_2___Init_Mouth_Registration_DISPATCH_RigVMDispatch_ArrayGetNum_1_Num; // 0x4E1C(0x4)
		FTransform Init_Mouth_Registration_1_1_2___Init_Mouth_Registration_Multiply_Result; // 0x4E20(0x60)
		FTransform Init_Mouth_Registration_1_1_2___Init_Mouth_Registration_DISPATCH_RigVMDispatch_ArrayGetAtIndex_Element; // 0x4E80(0x60)
		FTransform Init_Mouth_Registration_1_1_2___Init_Mouth_Registration_RigUnit_GetTransform_Transform; // 0x4EE0(0x60)
		TArray Init_Mouth_Registration_1_1_2___Init_Mouth_Registration_RigUnit_GetTransform_CachedIndex; // 0x4F40(0x10)
		TArray Init_Mouth_Registration_1_1_2___Init_Mouth_Registration_RigUnit_SetTransform_CachedIndex; // 0x4F50(0x10)
		TArray Init_Mouth_Registration_1_1_2___Init_Mouth_Registration_DISPATCH_RigDispatch_SetMetadata_6_1_Cache; // 0x4F60(0x10)
		bool Init_Mouth_Registration_1_1_2___Init_Mouth_Registration_DISPATCH_RigDispatch_SetMetadata_6_1_Success; // 0x4F70(0x1)
		unsigned char UnknownData354_6[0x3]; // 0x4F71(0x3) UNKNOWN PROPERTY
		FName Init_Mouth_Registration_1_1_2___Init_Mouth_Registration_RigVMFunction_ControlFlowBranch_BlockToRun; // 0x4F74(0x4)
		FName Init_Mouth_Registration_1_1_2___Init_Mouth_Registration_RigVMFunction_ControlFlowBranch_1_BlockToRun; // 0x4F78(0x4)
		FName Init_Mouth_Registration_1_1_2___Init_Mouth_Registration_RigVMFunction_ControlFlowBranch_4_BlockToRun; // 0x4F7C(0x4)
		bool RigVMModel_Construction___ItemExists_1_Exists; // 0x4F80(0x1)
		unsigned char UnknownData355_6[0x7]; // 0x4F81(0x7) UNKNOWN PROPERTY
		FRigVMInstructionSetExecuteState BlockExecuteState_3135871291; // 0x4F88(0x50)
		FRigElementKey RigVMModel_Construction___DISPATCH_RigDispatch_GetMetadata_5_Value; // 0x4FD8(0x8)
		FRigElementKey RigVMModel_Construction___DISPATCH_RigVMDispatch_ArrayIterator_4_Element; // 0x4FE0(0x8)
		TArray RigVMModel_Construction___DISPATCH_RigDispatch_GetMetadata_5_Cache; // 0x4FE8(0x10)
		bool RigVMModel_Construction___DISPATCH_RigDispatch_GetMetadata_5_Found; // 0x4FF8(0x1)
		unsigned char UnknownData356_6[0x7]; // 0x4FF9(0x7) UNKNOWN PROPERTY
		TArray RigVMModel_Construction___ItemExists_1_CachedIndex; // 0x5000(0x10)
		bool RigVMModel_Construction___DISPATCH_RigDispatch_GetMetadata_6_Value; // 0x5010(0x1)
		unsigned char UnknownData357_6[0x7]; // 0x5011(0x7) UNKNOWN PROPERTY
		TArray RigVMModel_Construction___DISPATCH_RigDispatch_GetMetadata_6_Cache; // 0x5018(0x10)
		bool RigVMModel_Construction___DISPATCH_RigDispatch_GetMetadata_6_Found; // 0x5028(0x1)
		unsigned char UnknownData358_6[0x7]; // 0x5029(0x7) UNKNOWN PROPERTY
		FString RigVMModel_Construction___Concat_2_Result; // 0x5030(0x10)
		FString RigVMModel_Construction___DISPATCH_RigDispatch_ToString_2_Result; // 0x5040(0x10)
		FName RigVMModel_Construction___Chop_Chopped; // 0x5050(0x4)
		FName RigVMModel_Construction___Chop_Name; // 0x5054(0x4)
		FName RigVMModel_Construction___Chop_Remainder; // 0x5058(0x4)
		bool Init_Mouth_Registration_1_1_2_1___Init_Mouth_Registration_RigVMFunction_MathBoolOr_Result; // 0x505C(0x1)
		bool Init_Mouth_Registration_1_1_2_1___Init_Mouth_Registration_DISPATCH_RigDispatch_GetMetadata_Value; // 0x505D(0x1)
		unsigned char UnknownData359_6[0x2]; // 0x505E(0x2) UNKNOWN PROPERTY
		TArray Init_Mouth_Registration_1_1_2_1___Init_Mouth_Registration_DISPATCH_RigDispatch_GetMetadata_Cache; // 0x5060(0x10)
		bool Init_Mouth_Registration_1_1_2_1___Init_Mouth_Registration_DISPATCH_RigDispatch_GetMetadata_Found; // 0x5070(0x1)
		unsigned char UnknownData360_6[0x7]; // 0x5071(0x7) UNKNOWN PROPERTY
		TArray Init_Mouth_Registration_1_1_2_1___Init_Mouth_Registration_DISPATCH_RigDispatch_SetMetadata_Cache; // 0x5078(0x10)
		FRigVMInstructionSetExecuteState Init_Mouth_Registration_1_1_2_1te; // 0x5088(0x50)
		TArray Init_Mouth_Registration_1_1_2_1___Init_Mouth_Registration_DISPATCH_RigDispatch_GetUserData_2_Result; // 0x50D8(0x10)
		bool Init_Mouth_Registration_1_1_2_1___Init_Mouth_Registration_DISPATCH_RigDispatch_GetUserData_2_Found; // 0x50E8(0x1)
		bool Init_Mouth_Registration_1_1_2_1___Init_Mouth_Registration_DISPATCH_RigDispatch_SetMetadata_Success; // 0x50E9(0x1)
		bool Init_Mouth_Registration_1_1_2_1___Init_Mouth_Registration_ItemExists_Exists; // 0x50EA(0x1)
		unsigned char UnknownData361_6[0x5]; // 0x50EB(0x5) UNKNOWN PROPERTY
		TArray Init_Mouth_Registration_1_1_2_1___Init_Mouth_Registration_ItemExists_CachedIndex; // 0x50F0(0x10)
		TArray Init_Mouth_Registration_1_1_2_1___Init_Mouth_Registration_DISPATCH_RigDispatch_SetMetadata_3_1_Cache; // 0x5100(0x10)
		bool Init_Mouth_Registration_1_1_2_1___Init_Mouth_Registration_DISPATCH_RigDispatch_SetMetadata_3_1_Success; // 0x5110(0x1)
		bool Init_Mouth_Registration_1_1_2_1___Init_Mouth_Registration_Greater_1_Result; // 0x5111(0x1)
		unsigned char UnknownData362_6[0x2]; // 0x5112(0x2) UNKNOWN PROPERTY
		int32_t Init_Mouth_Registration_1_1_2_1___Init_Mouth_Registration_DISPATCH_RigVMDispatch_ArrayGetNum_1_Num; // 0x5114(0x4)
		unsigned char UnknownData363_6[0x8]; // 0x5118(0x8) UNKNOWN PROPERTY
		FTransform Init_Mouth_Registration_1_1_2_1___Init_Mouth_Registration_Multiply_Result; // 0x5120(0x60)
		FTransform Init_Mouth_Registration_1_1_2_1___Init_Mouth_Registration_DISPATCH_RigVMDispatch_ArrayGetAtIndex_Element; // 0x5180(0x60)
		FTransform Init_Mouth_Registration_1_1_2_1___Init_Mouth_Registration_RigUnit_GetTransform_Transform; // 0x51E0(0x60)
		TArray Init_Mouth_Registration_1_1_2_1___Init_Mouth_Registration_RigUnit_GetTransform_CachedIndex; // 0x5240(0x10)
		TArray Init_Mouth_Registration_1_1_2_1___Init_Mouth_Registration_RigUnit_SetTransform_CachedIndex; // 0x5250(0x10)
		TArray Init_Mouth_Registration_1_1_2_1___Init_Mouth_Registration_DISPATCH_RigDispatch_SetMetadata_6_1_Cache; // 0x5260(0x10)
		bool Init_Mouth_Registration_1_1_2_1___Init_Mouth_Registration_DISPATCH_RigDispatch_SetMetadata_6_1_Success; // 0x5270(0x1)
		unsigned char UnknownData364_6[0x3]; // 0x5271(0x3) UNKNOWN PROPERTY
		FName Init_Mouth_Registration_1_1_2_1___Init_Mouth_Registration_RigVMFunction_ControlFlowBranch_BlockToRun; // 0x5274(0x4)
		FName Init_Mouth_Registration_1_1_2_1___Init_Mouth_Registration_RigVMFunction_ControlFlowBranch_1_BlockToRun; // 0x5278(0x4)
		FName Init_Mouth_Registration_1_1_2_1___Init_Mouth_Registration_RigVMFunction_ControlFlowBranch_4_BlockToRun; // 0x527C(0x4)
		FName RigVMModel_Construction___RigVMFunction_ControlFlowBranch_7_1_BlockToRun; // 0x5280(0x4)
		FName RigVMModel_Construction___RigVMFunction_ControlFlowBranch_7_BlockToRun; // 0x5284(0x4)
		TArray RigVMModel_Construction___RigUnit_ItemArray_1_Items__IO; // 0x5288(0x10)
		int32_t RigVMModel_Construction___DISPATCH_RigVMDispatch_ArrayIterator_4_Index; // 0x5298(0x4)
		int32_t RigVMModel_Construction___DISPATCH_RigVMDispatch_ArrayIterator_4_Count; // 0x529C(0x4)
		float RigVMModel_Construction___DISPATCH_RigVMDispatch_ArrayIterator_4_Ratio; // 0x52A0(0x4)
		FName RigVMModel_Construction___DISPATCH_RigVMDispatch_ArrayIterator_4_BlockToRun; // 0x52A4(0x4)
		bool RigVMModel_Construction___RigVMFunction_MathBoolAnd_Result; // 0x52A8(0x1)
		bool RigVMModel_Construction___DISPATCH_RigVMDispatch_ArrayFind_Success; // 0x52A9(0x1)
		unsigned char UnknownData365_6[0x6]; // 0x52AA(0x6) UNKNOWN PROPERTY
		TArray RigVMModel_Construction___DISPATCH_RigDispatch_GetUserData_6_1_Result; // 0x52B0(0x10)
		bool RigVMModel_Construction___DISPATCH_RigDispatch_GetUserData_6_1_Found; // 0x52C0(0x1)
		unsigned char UnknownData366_6[0x3]; // 0x52C1(0x3) UNKNOWN PROPERTY
		int32_t RigVMModel_Construction___DISPATCH_RigVMDispatch_ArrayFind_Index; // 0x52C4(0x4)
		bool RigVMModel_Construction___DISPATCH_RigVMDispatch_ArrayFind_2_Success; // 0x52C8(0x1)
		unsigned char UnknownData367_6[0x3]; // 0x52C9(0x3) UNKNOWN PROPERTY
		int32_t RigVMModel_Construction___DISPATCH_RigVMDispatch_ArrayFind_2_Index; // 0x52CC(0x4)
		FRigElementKey RigVMModel_Construction___SpawnControl_Item; // 0x52D0(0x8)
		TArray RigVMModel_Construction___DISPATCH_RigDispatch_SetMetadata_2_1_1_1_1_Cache; // 0x52D8(0x10)
		TArray RigVMModel_Construction___DISPATCH_RigDispatch_GetUserData_1_1_1_1_2_1_Result; // 0x52E8(0x10)
		bool RigVMModel_Construction___DISPATCH_RigDispatch_GetUserData_1_1_1_1_2_1_Found; // 0x52F8(0x1)
		bool RigVMModel_Construction___DISPATCH_RigDispatch_SetMetadata_2_1_1_1_1_Success; // 0x52F9(0x1)
		unsigned char UnknownData368_6[0x6]; // 0x52FA(0x6) UNKNOWN PROPERTY
		TArray RigVMModel_Construction___Find_CharactAcc_Names_Indicies; // 0x5300(0x10)
		bool Find_CharactAcc_Names___Find_CharactAcc_Names_DISPATCH_RigVMDispatch_CoreEquals_Result; // 0x5310(0x1)
		unsigned char UnknownData369_6[0x3]; // 0x5311(0x3) UNKNOWN PROPERTY
		FName Find_CharactAcc_Names___Find_CharactAcc_Names_DISPATCH_RigVMDispatch_ArrayIterator_5_Element; // 0x5314(0x4)
		FName Find_CharactAcc_Names___Find_CharactAcc_Names_Concat_Concat_1_Result; // 0x5318(0x4)
		FName Find_CharactAcc_Names___Find_CharactAcc_Names_Concat_Concat_Result; // 0x531C(0x4)
		FName Find_CharactAcc_Names___Find_CharactAcc_Names_DISPATCH_RigDispatch_FromString_Result; // 0x5320(0x4)
		unsigned char UnknownData370_6[0x4]; // 0x5324(0x4) UNKNOWN PROPERTY
		FString Find_CharactAcc_Names___Find_CharactAcc_Names_DISPATCH_RigDispatch_ToString_Result; // 0x5328(0x10)
		int32_t Find_CharactAcc_Names___Find_CharactAcc_Names_Add_Result; // 0x5338(0x4)
		int32_t Find_CharactAcc_Names___Find_CharactAcc_Names_DISPATCH_RigVMDispatch_ArrayIterator_5_Index; // 0x533C(0x4)
		int32_t Find_CharactAcc_Names___Find_CharactAcc_Names_DISPATCH_RigVMDispatch_ArrayAdd_Index; // 0x5340(0x4)
		FName Find_CharactAcc_Names___Find_CharactAcc_Names_RigVMFunction_ControlFlowBranch_BlockToRun; // 0x5344(0x4)
		TArray Find_CharactAcc_Names___Find_CharactAcc_Names_DISPATCH_RigDispatch_GetUserData_6_1_2_Result; // 0x5348(0x10)
		bool Find_CharactAcc_Names___Find_CharactAcc_Names_DISPATCH_RigDispatch_GetUserData_6_1_2_Found; // 0x5358(0x1)
		unsigned char UnknownData371_6[0x3]; // 0x5359(0x3) UNKNOWN PROPERTY
		int32_t Find_CharactAcc_Names___Find_CharactAcc_Names_DISPATCH_RigVMDispatch_ArrayIterator_5_Count; // 0x535C(0x4)
		float Find_CharactAcc_Names___Find_CharactAcc_Names_DISPATCH_RigVMDispatch_ArrayIterator_5_Ratio; // 0x5360(0x4)
		FName Find_CharactAcc_Names___Find_CharactAcc_Names_DISPATCH_RigVMDispatch_ArrayIterator_5_BlockToRun; // 0x5364(0x4)
		TArray RigVMModel_Construction___DISPATCH_RigDispatch_SetMetadata_2_Cache; // 0x5368(0x10)
		bool RigVMModel_Construction___DISPATCH_RigDispatch_SetMetadata_2_Success; // 0x5378(0x1)
		unsigned char UnknownData372_6[0x7]; // 0x5379(0x7) UNKNOWN PROPERTY
		TArray RigVMModel_Construction___DISPATCH_RigDispatch_SetMetadata_2_1_1_1_1_2_1_1_Cache; // 0x5380(0x10)
		TArray RigVMModel_Construction___DISPATCH_RigDispatch_GetUserData_6_1_1_2_Result; // 0x5390(0x10)
		bool RigVMModel_Construction___DISPATCH_RigDispatch_GetUserData_6_1_1_2_Found; // 0x53A0(0x1)
		bool RigVMModel_Construction___DISPATCH_RigDispatch_SetMetadata_2_1_1_1_1_2_1_1_Success; // 0x53A1(0x1)
		unsigned char UnknownData373_6[0x6]; // 0x53A2(0x6) UNKNOWN PROPERTY
		TArray RigVMModel_Construction___DISPATCH_RigDispatch_SetMetadata_2_1_1_1_1_2_1_1_1_Cache; // 0x53A8(0x10)
		bool RigVMModel_Construction___DISPATCH_RigDispatch_GetUserData_6_1_1_2_1_Result; // 0x53B8(0x1)
		bool RigVMModel_Construction___DISPATCH_RigDispatch_GetUserData_6_1_1_2_1_Found; // 0x53B9(0x1)
		bool RigVMModel_Construction___DISPATCH_RigDispatch_SetMetadata_2_1_1_1_1_2_1_1_1_Success; // 0x53BA(0x1)
		unsigned char UnknownData374_6[0x1]; // 0x53BB(0x1) UNKNOWN PROPERTY
		FRigElementKey RigVMModel_Construction___SpawnControl_1_Item; // 0x53BC(0x8)
		unsigned char UnknownData375_6[0x4]; // 0x53C4(0x4) UNKNOWN PROPERTY
		TArray RigVMModel_Construction___DISPATCH_RigDispatch_SetMetadata_2_1_1_1_1_2_Cache; // 0x53C8(0x10)
		TArray RigVMModel_Construction___DISPATCH_RigDispatch_GetUserData_6_1_1_1_Result; // 0x53D8(0x10)
		bool RigVMModel_Construction___DISPATCH_RigDispatch_GetUserData_6_1_1_1_Found; // 0x53E8(0x1)
		bool RigVMModel_Construction___DISPATCH_RigDispatch_SetMetadata_2_1_1_1_1_2_Success; // 0x53E9(0x1)
		unsigned char UnknownData376_6[0x6]; // 0x53EA(0x6) UNKNOWN PROPERTY
		TArray RigVMModel_Construction___DISPATCH_RigDispatch_SetMetadata_2_1_1_1_1_2_1_Cache; // 0x53F0(0x10)
		TArray RigVMModel_Construction___DISPATCH_RigDispatch_GetUserData_6_1_1_Result; // 0x5400(0x10)
		bool RigVMModel_Construction___DISPATCH_RigDispatch_GetUserData_6_1_1_Found; // 0x5410(0x1)
		bool RigVMModel_Construction___DISPATCH_RigDispatch_SetMetadata_2_1_1_1_1_2_1_Success; // 0x5411(0x1)
		unsigned char UnknownData377_6[0x6]; // 0x5412(0x6) UNKNOWN PROPERTY
		TArray RigVMModel_Construction___Find_CharactAcc_Names_1_Indicies; // 0x5418(0x10)
		bool Find_CharactAcc_Names_1___Find_CharactAcc_Names_DISPATCH_RigVMDispatch_CoreEquals_Result; // 0x5428(0x1)
		unsigned char UnknownData378_6[0x3]; // 0x5429(0x3) UNKNOWN PROPERTY
		FName Find_CharactAcc_Names_1___Find_CharactAcc_Names_DISPATCH_RigVMDispatch_ArrayIterator_5_Element; // 0x542C(0x4)
		FName Find_CharactAcc_Names_1___Find_CharactAcc_Names_Concat_Concat_1_Result; // 0x5430(0x4)
		FName Find_CharactAcc_Names_1___Find_CharactAcc_Names_Concat_Concat_Result; // 0x5434(0x4)
		FName Find_CharactAcc_Names_1___Find_CharactAcc_Names_DISPATCH_RigDispatch_FromString_Result; // 0x5438(0x4)
		unsigned char UnknownData379_6[0x4]; // 0x543C(0x4) UNKNOWN PROPERTY
		FString Find_CharactAcc_Names_1___Find_CharactAcc_Names_DISPATCH_RigDispatch_ToString_Result; // 0x5440(0x10)
		int32_t Find_CharactAcc_Names_1___Find_CharactAcc_Names_Add_Result; // 0x5450(0x4)
		int32_t Find_CharactAcc_Names_1___Find_CharactAcc_Names_DISPATCH_RigVMDispatch_ArrayIterator_5_Index; // 0x5454(0x4)
		int32_t Find_CharactAcc_Names_1___Find_CharactAcc_Names_DISPATCH_RigVMDispatch_ArrayAdd_Index; // 0x5458(0x4)
		FName Find_CharactAcc_Names_1___Find_CharactAcc_Names_RigVMFunction_ControlFlowBranch_BlockToRun; // 0x545C(0x4)
		TArray Find_CharactAcc_Names_1___Find_CharactAcc_Names_DISPATCH_RigDispatch_GetUserData_6_1_2_Result; // 0x5460(0x10)
		bool Find_CharactAcc_Names_1___Find_CharactAcc_Names_DISPATCH_RigDispatch_GetUserData_6_1_2_Found; // 0x5470(0x1)
		unsigned char UnknownData380_6[0x3]; // 0x5471(0x3) UNKNOWN PROPERTY
		int32_t Find_CharactAcc_Names_1___Find_CharactAcc_Names_DISPATCH_RigVMDispatch_ArrayIterator_5_Count; // 0x5474(0x4)
		float Find_CharactAcc_Names_1___Find_CharactAcc_Names_DISPATCH_RigVMDispatch_ArrayIterator_5_Ratio; // 0x5478(0x4)
		FName Find_CharactAcc_Names_1___Find_CharactAcc_Names_DISPATCH_RigVMDispatch_ArrayIterator_5_BlockToRun; // 0x547C(0x4)
		TArray RigVMModel_Construction___DISPATCH_RigDispatch_SetMetadata_2_1_Cache; // 0x5480(0x10)
		bool RigVMModel_Construction___DISPATCH_RigDispatch_SetMetadata_2_1_Success; // 0x5490(0x1)
		unsigned char UnknownData381_6[0x7]; // 0x5491(0x7) UNKNOWN PROPERTY
		TArray RigVMModel_Construction___DISPATCH_RigDispatch_SetMetadata_Cache; // 0x5498(0x10)
		bool RigVMModel_Construction___DISPATCH_RigDispatch_GetUserData_6_1_1_1_1_Result; // 0x54A8(0x1)
		bool RigVMModel_Construction___DISPATCH_RigDispatch_GetUserData_6_1_1_1_1_Found; // 0x54A9(0x1)
		bool RigVMModel_Construction___DISPATCH_RigDispatch_SetMetadata_Success; // 0x54AA(0x1)
		unsigned char UnknownData382_6[0x5]; // 0x54AB(0x5) UNKNOWN PROPERTY
		TArray RigVMModel_Construction___DISPATCH_RigDispatch_SetMetadata_2_1_1_1_1_2_1_1_1_1_Cache; // 0x54B0(0x10)
		bool RigVMModel_Construction___DISPATCH_RigDispatch_GetUserData_6_1_1_2_1_1_Result; // 0x54C0(0x1)
		bool RigVMModel_Construction___DISPATCH_RigDispatch_GetUserData_6_1_1_2_1_1_Found; // 0x54C1(0x1)
		bool RigVMModel_Construction___DISPATCH_RigDispatch_SetMetadata_2_1_1_1_1_2_1_1_1_1_Success; // 0x54C2(0x1)
		unsigned char UnknownData383_6[0x5]; // 0x54C3(0x5) UNKNOWN PROPERTY
		TArray RigVMModel_Construction___DISPATCH_RigDispatch_SetMetadata_6_1_4_1_Cache; // 0x54C8(0x10)
		bool RigVMModel_Construction___DISPATCH_RigDispatch_SetMetadata_6_1_4_1_Success; // 0x54D8(0x1)
		unsigned char UnknownData384_6[0x3]; // 0x54D9(0x3) UNKNOWN PROPERTY
		FName RigVMModel_Construction___RigVMFunction_ControlFlowBranch_2_BlockToRun; // 0x54DC(0x4)
		FName RigVMModel_Construction___RigVMFunction_ControlFlowBranch_1_BlockToRun; // 0x54E0(0x4)
		bool RigVMModel_Construction___DISPATCH_RigDispatch_GetUserData_4_1_Found; // 0x54E4(0x1)
		unsigned char UnknownData385_6[0x3]; // 0x54E5(0x3) UNKNOWN PROPERTY
		TArray RigVMModel_Construction___DISPATCH_RigDispatch_GetUserData_4_1_Result; // 0x54E8(0x10)
		FName RigVMModel_Construction___RigVMFunction_ControlFlowBranch_BlockToRun; // 0x54F8(0x4)
	};

}
