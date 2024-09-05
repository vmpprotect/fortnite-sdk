#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: Transient
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

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


	// Struct /Engine/Transient.PropertyBag_576837cf4cf0db0
	// Size: 0x4 (0x4 - 0x0)
	struct FPropertyBag_576837cf4cf0db0	
	{
	public:
		float LineHeightPercentage; // 0x0(0x4)
	};


	// Struct /Engine/Transient.PropertyBag_c67cf28c37da650a
	// Size: 0x10 (0x10 - 0x0)
	struct FPropertyBag_c67cf28c37da650a	
	{
	public:
		FMargin Margin; // 0x0(0x10)
	};


	// Struct /Engine/Transient.PropertyBag_1c9aeaa3ee114d3f
	// Size: 0x8 (0x8 - 0x0)
	struct FPropertyBag_1c9aeaa3ee114d3f	
	{
	public:
		float LineHeightPercentage; // 0x0(0x4)
		float Font_Size; // 0x4(0x4)
	};


	// Struct /Engine/Transient.PropertyBag_ad1eabc516d6301d
	// Size: 0x14 (0x14 - 0x0)
	struct FPropertyBag_ad1eabc516d6301d	
	{
	public:
		FMargin Margin; // 0x0(0x10)
		float LineHeightPercentage; // 0x10(0x4)
	};


	// Struct /Engine/Transient.PropertyBag_34214d6c539c0b18
	// Size: 0x10 (0x10 - 0x0)
	struct FPropertyBag_34214d6c539c0b18	
	{
	public:
		FMargin Margin; // 0x0(0x10)
	};


	// Struct /Engine/Transient.PropertyBag_cc2afb1c33c9547c
	// Size: 0x18C (0x18C - 0x0)
	struct FPropertyBag_cc2afb1c33c9547c	
	{
	public:
		float WidgetStyle_BarThickness; // 0x0(0x4)
		ESlateBrushDrawType WidgetStyle_TopShadowBrush_DrawAs; // 0x4(0x1)
		ESlateBrushDrawType WidgetStyle_BottomShadowBrush_DrawAs; // 0x5(0x1)
		ESlateBrushDrawType WidgetStyle_LeftShadowBrush_DrawAs; // 0x6(0x1)
		ESlateBrushDrawType WidgetStyle_RightShadowBrush_DrawAs; // 0x7(0x1)
		UObject* WidgetBarStyle_VerticalBackgroundImage_ResourceObject; // 0x8(0x8)
		FDeprecateSlateVector2D WidgetBarStyle_VerticalBackgroundImage_ImageSize; // 0x10(0x8)
		ESlateBrushDrawType WidgetBarStyle_VerticalBackgroundImage_DrawAs; // 0x18(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x19(0x3) UNKNOWN PROPERTY
		FMargin WidgetBarStyle_VerticalBackgroundImage_Margin; // 0x1C(0x10)
		ESlateBrushDrawType WidgetBarStyle_VerticalTopSlotImage_DrawAs; // 0x2C(0x1)
		ESlateBrushDrawType WidgetBarStyle_HorizontalTopSlotImage_DrawAs; // 0x2D(0x1)
		ESlateBrushDrawType WidgetBarStyle_VerticalBottomSlotImage_DrawAs; // 0x2E(0x1)
		ESlateBrushDrawType WidgetBarStyle_HorizontalBottomSlotImage_DrawAs; // 0x2F(0x1)
		UObject* WidgetBarStyle_NormalThumbImage_ResourceObject; // 0x30(0x8)
		FDeprecateSlateVector2D WidgetBarStyle_NormalThumbImage_ImageSize; // 0x38(0x8)
		FSlateColor WidgetBarStyle_NormalThumbImage_TintColor; // 0x40(0x14)
		ESlateBrushDrawType WidgetBarStyle_NormalThumbImage_DrawAs; // 0x54(0x1)
		unsigned char UnknownData01_6[0xB]; // 0x55(0xB) UNKNOWN PROPERTY
		FVector4 WidgetBarStyle_NormalThumbImage_OutlineSettings_CornerRadii; // 0x60(0x20)
		float WidgetBarStyle_NormalThumbImage_OutlineSettings_Width; // 0x80(0x4)
		FLinearColor WidgetBarStyle_NormalThumbImage_OutlineSettings_Color_SpecifiedColor; // 0x84(0x10)
		ESlateBrushRoundingType WidgetBarStyle_NormalThumbImage_OutlineSettings_RoundingType; // 0x94(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x95(0x3) UNKNOWN PROPERTY
		UObject* WidgetBarStyle_HoveredThumbImage_ResourceObject; // 0x98(0x8)
		FDeprecateSlateVector2D WidgetBarStyle_HoveredThumbImage_ImageSize; // 0xA0(0x8)
		FSlateColor WidgetBarStyle_HoveredThumbImage_TintColor; // 0xA8(0x14)
		ESlateBrushDrawType WidgetBarStyle_HoveredThumbImage_DrawAs; // 0xBC(0x1)
		unsigned char UnknownData03_6[0x3]; // 0xBD(0x3) UNKNOWN PROPERTY
		FVector4 WidgetBarStyle_HoveredThumbImage_OutlineSettings_CornerRadii; // 0xC0(0x20)
		FLinearColor WidgetBarStyle_HoveredThumbImage_OutlineSettings_Color_SpecifiedColor; // 0xE0(0x10)
		float WidgetBarStyle_HoveredThumbImage_OutlineSettings_Width; // 0xF0(0x4)
		ESlateBrushRoundingType WidgetBarStyle_HoveredThumbImage_OutlineSettings_RoundingType; // 0xF4(0x1)
		unsigned char UnknownData04_6[0x3]; // 0xF5(0x3) UNKNOWN PROPERTY
		UObject* WidgetBarStyle_DraggedThumbImage_ResourceObject; // 0xF8(0x8)
		FDeprecateSlateVector2D WidgetBarStyle_DraggedThumbImage_ImageSize; // 0x100(0x8)
		FLinearColor WidgetBarStyle_DraggedThumbImage_TintColor_SpecifiedColor; // 0x108(0x10)
		ESlateBrushDrawType WidgetBarStyle_DraggedThumbImage_DrawAs; // 0x118(0x1)
		unsigned char UnknownData05_6[0x7]; // 0x119(0x7) UNKNOWN PROPERTY
		FVector4 WidgetBarStyle_DraggedThumbImage_OutlineSettings_CornerRadii; // 0x120(0x20)
		FLinearColor WidgetBarStyle_DraggedThumbImage_OutlineSettings_Color_SpecifiedColor; // 0x140(0x10)
		float WidgetBarStyle_DraggedThumbImage_OutlineSettings_Width; // 0x150(0x4)
		ESlateBrushRoundingType WidgetBarStyle_DraggedThumbImage_OutlineSettings_RoundingType; // 0x154(0x1)
		unsigned char UnknownData06_6[0x3]; // 0x155(0x3) UNKNOWN PROPERTY
		FVector2D ScrollbarThickness; // 0x158(0x10)
		UObject* WidgetBarStyle_HorizontalBackgroundImage_ResourceObject; // 0x168(0x8)
		FDeprecateSlateVector2D WidgetBarStyle_HorizontalBackgroundImage_ImageSize; // 0x170(0x8)
		ESlateBrushDrawType WidgetBarStyle_HorizontalBackgroundImage_DrawAs; // 0x178(0x1)
		unsigned char UnknownData07_6[0x3]; // 0x179(0x3) UNKNOWN PROPERTY
		FMargin WidgetBarStyle_HorizontalBackgroundImage_Margin; // 0x17C(0x10)
	};


	// Struct /Engine/Transient.PropertyBag_528e65d07f974e65
	// Size: 0x15C (0x15C - 0x0)
	struct FPropertyBag_528e65d07f974e65	
	{
	public:
		ESlateBrushDrawType ScrollBarStyle_HorizontalBackgroundImage_DrawAs; // 0x0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		UObject* ScrollBarStyle_VerticalBackgroundImage_ResourceObject; // 0x8(0x8)
		FDeprecateSlateVector2D ScrollBarStyle_VerticalBackgroundImage_ImageSize; // 0x10(0x8)
		ESlateBrushDrawType ScrollBarStyle_VerticalBackgroundImage_DrawAs; // 0x18(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x19(0x3) UNKNOWN PROPERTY
		FMargin ScrollBarStyle_VerticalBackgroundImage_Margin; // 0x1C(0x10)
		ESlateBrushDrawType ScrollBarStyle_VerticalTopSlotImage_DrawAs; // 0x2C(0x1)
		ESlateBrushDrawType ScrollBarStyle_HorizontalTopSlotImage_DrawAs; // 0x2D(0x1)
		ESlateBrushDrawType ScrollBarStyle_VerticalBottomSlotImage_DrawAs; // 0x2E(0x1)
		ESlateBrushDrawType ScrollBarStyle_HorizontalBottomSlotImage_DrawAs; // 0x2F(0x1)
		UObject* ScrollBarStyle_NormalThumbImage_ResourceObject; // 0x30(0x8)
		FDeprecateSlateVector2D ScrollBarStyle_NormalThumbImage_ImageSize; // 0x38(0x8)
		FLinearColor ScrollBarStyle_NormalThumbImage_TintColor_SpecifiedColor; // 0x40(0x10)
		ESlateBrushDrawType ScrollBarStyle_NormalThumbImage_DrawAs; // 0x50(0x1)
		unsigned char UnknownData02_6[0xF]; // 0x51(0xF) UNKNOWN PROPERTY
		FVector4 ScrollBarStyle_NormalThumbImage_OutlineSettings_CornerRadii; // 0x60(0x20)
		FLinearColor ScrollBarStyle_NormalThumbImage_OutlineSettings_Color_SpecifiedColor; // 0x80(0x10)
		float ScrollBarStyle_NormalThumbImage_OutlineSettings_Width; // 0x90(0x4)
		ESlateBrushRoundingType ScrollBarStyle_NormalThumbImage_OutlineSettings_RoundingType; // 0x94(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x95(0x3) UNKNOWN PROPERTY
		UObject* ScrollBarStyle_HoveredThumbImage_ResourceObject; // 0x98(0x8)
		FDeprecateSlateVector2D ScrollBarStyle_HoveredThumbImage_ImageSize; // 0xA0(0x8)
		FLinearColor ScrollBarStyle_HoveredThumbImage_TintColor_SpecifiedColor; // 0xA8(0x10)
		ESlateBrushDrawType ScrollBarStyle_HoveredThumbImage_DrawAs; // 0xB8(0x1)
		unsigned char UnknownData04_6[0x7]; // 0xB9(0x7) UNKNOWN PROPERTY
		FVector4 ScrollBarStyle_HoveredThumbImage_OutlineSettings_CornerRadii; // 0xC0(0x20)
		FLinearColor ScrollBarStyle_HoveredThumbImage_OutlineSettings_Color_SpecifiedColor; // 0xE0(0x10)
		float ScrollBarStyle_HoveredThumbImage_OutlineSettings_Width; // 0xF0(0x4)
		ESlateBrushRoundingType ScrollBarStyle_HoveredThumbImage_OutlineSettings_RoundingType; // 0xF4(0x1)
		unsigned char UnknownData05_6[0x3]; // 0xF5(0x3) UNKNOWN PROPERTY
		UObject* ScrollBarStyle_DraggedThumbImage_ResourceObject; // 0xF8(0x8)
		FDeprecateSlateVector2D ScrollBarStyle_DraggedThumbImage_ImageSize; // 0x100(0x8)
		FLinearColor ScrollBarStyle_DraggedThumbImage_TintColor_SpecifiedColor; // 0x108(0x10)
		ESlateBrushDrawType ScrollBarStyle_DraggedThumbImage_DrawAs; // 0x118(0x1)
		unsigned char UnknownData06_6[0x7]; // 0x119(0x7) UNKNOWN PROPERTY
		FVector4 ScrollBarStyle_DraggedThumbImage_OutlineSettings_CornerRadii; // 0x120(0x20)
		FLinearColor ScrollBarStyle_DraggedThumbImage_OutlineSettings_Color_SpecifiedColor; // 0x140(0x10)
		float ScrollBarStyle_DraggedThumbImage_OutlineSettings_Width; // 0x150(0x4)
		ESlateBrushRoundingType ScrollBarStyle_DraggedThumbImage_OutlineSettings_RoundingType; // 0x154(0x1)
		unsigned char UnknownData07_6[0x3]; // 0x155(0x3) UNKNOWN PROPERTY
		float ScrollBarStyle_Thickness; // 0x158(0x4)
	};


	// Struct /Engine/Transient.PropertyBag_271410e5422bd45e
	// Size: 0x4 (0x4 - 0x0)
	struct FPropertyBag_271410e5422bd45e	
	{
	public:
		float Font_Size; // 0x0(0x4)
	};


	// Struct /Engine/Transient.PropertyBag_cd06b6fce36657a6
	// Size: 0x4 (0x4 - 0x0)
	struct FPropertyBag_cd06b6fce36657a6	
	{
	public:
		FName Font_TypefaceFontName; // 0x0(0x4)
	};


	// Struct /Engine/Transient.PropertyBag_24ec3b2fe113b804
	// Size: 0x1D (0x1D - 0x0)
	struct FPropertyBag_24ec3b2fe113b804	
	{
	public:
		UObject* Font_FontObject; // 0x0(0x8)
		FName Font_TypefaceFontName; // 0x8(0x4)
		int32_t Font_LetterSpacing; // 0xC(0x4)
		ETextTransformPolicy TextTransformPolicy; // 0x10(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x11(0x3) UNKNOWN PROPERTY
		float LineHeightPercentage; // 0x14(0x4)
		float Font_SkewAmount; // 0x18(0x4)
		bool ApplyLineHeightToBottomLine; // 0x1C(0x1)
	};


	// Struct /Engine/Transient.PropertyBag_35b47f622f6c24a9
	// Size: 0x8 (0x8 - 0x0)
	struct FPropertyBag_35b47f622f6c24a9	
	{
	public:
		float Font_Size; // 0x0(0x4)
		int32_t Font_LetterSpacing; // 0x4(0x4)
	};


	// Struct /Engine/Transient.PropertyBag_92bdce3a20542260
	// Size: 0xC (0xC - 0x0)
	struct FPropertyBag_92bdce3a20542260	
	{
	public:
		FName Font_TypefaceFontName; // 0x0(0x4)
		float Font_Size; // 0x4(0x4)
		int32_t Font_LetterSpacing; // 0x8(0x4)
	};


	// Struct /Engine/Transient.PropertyBag_d76371efaba6a1b9
	// Size: 0x8 (0x8 - 0x0)
	struct FPropertyBag_d76371efaba6a1b9	
	{
	public:
		FName Font_TypefaceFontName; // 0x0(0x4)
		int32_t Font_LetterSpacing; // 0x4(0x4)
	};


	// Struct /Engine/Transient.PropertyBag_c1a5cd3cc257529d
	// Size: 0x9 (0x9 - 0x0)
	struct FPropertyBag_c1a5cd3cc257529d	
	{
	public:
		FName Font_TypefaceFontName; // 0x0(0x4)
		int32_t Font_LetterSpacing; // 0x4(0x4)
		ETextTransformPolicy TextTransformPolicy; // 0x8(0x1)
	};


	// Struct /Engine/Transient.PropertyBag_7bbcb12ef989b703
	// Size: 0x4 (0x4 - 0x0)
	struct FPropertyBag_7bbcb12ef989b703	
	{
	public:
		float Font_Size; // 0x0(0x4)
	};


	// Struct /Engine/Transient.PropertyBag_5d7fc51d114d50a0
	// Size: 0x4 (0x4 - 0x0)
	struct FPropertyBag_5d7fc51d114d50a0	
	{
	public:
		float Font_Size; // 0x0(0x4)
	};


	// Struct /Engine/Transient.PropertyBag_85ecd1643cde8ffa
	// Size: 0x4 (0x4 - 0x0)
	struct FPropertyBag_85ecd1643cde8ffa	
	{
	public:
		float Font_Size; // 0x0(0x4)
	};


	// Struct /Engine/Transient.PropertyBag_aeccb9e010c0ba8
	// Size: 0x4 (0x4 - 0x0)
	struct FPropertyBag_aeccb9e010c0ba8	
	{
	public:
		FName Font_TypefaceFontName; // 0x0(0x4)
	};


	// Struct /Engine/Transient.PropertyBag_8f723dd15939d13b
	// Size: 0x8 (0x8 - 0x0)
	struct FPropertyBag_8f723dd15939d13b	
	{
	public:
		UObject* Font_FontMaterial; // 0x0(0x8)
	};


	// Struct /Engine/Transient.PropertyBag_f89a1ed48ec8f898
	// Size: 0x64 (0x64 - 0x0)
	struct FPropertyBag_f89a1ed48ec8f898	
	{
	public:
		FSlateColor Color_Idle; // 0x0(0x14)
		FSlateColor Color_Hovered; // 0x14(0x14)
		FSlateColor Color_Focused; // 0x28(0x14)
		FSlateColor Color_Pressed; // 0x3C(0x14)
		FSlateColor Color_Disabled; // 0x50(0x14)
	};


	// Struct /Engine/Transient.PropertyBag_d5b29b0dbe1e9902
	// Size: 0x58 (0x58 - 0x0)
	struct FPropertyBag_d5b29b0dbe1e9902	
	{
	public:
		FSlateFontInfo Font; // 0x0(0x58)
	};


	// Struct /Engine/Transient.PropertyBag_ae6add6e6febcb1
	// Size: 0x8 (0x8 - 0x0)
	struct FPropertyBag_ae6add6e6febcb1	
	{
	public:
		USoundBase* MatchMakingSucceededSound; // 0x0(0x8)
	};


	// Struct /Engine/Transient.PropertyBag_d4cd5dec7149f8e7
	// Size: 0x10 (0x10 - 0x0)
	struct FPropertyBag_d4cd5dec7149f8e7	
	{
	public:
		float SecondsPriorToTransSound; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		USoundBase* TransitionSound; // 0x8(0x8)
	};


	// Struct /Engine/Transient.PropertyBag_7f20e6917d2df11e
	// Size: 0x10 (0x10 - 0x0)
	struct FPropertyBag_7f20e6917d2df11e	
	{
	public:
		USoundBase* MTXOfferTileIntroWhoosh; // 0x0(0x8)
		USoundBase* ShopRowWhooshIn; // 0x8(0x8)
	};


	// Struct /Engine/Transient.PropertyBag_717afb03a0adc2af
	// Size: 0x8 (0x8 - 0x0)
	struct FPropertyBag_717afb03a0adc2af	
	{
	public:
		USoundBase* LockerCategoryWhooshSound; // 0x0(0x8)
	};


	// Struct /Engine/Transient.PropertyBag_a79a7dd0f46797e
	// Size: 0x20 (0x20 - 0x0)
	struct FPropertyBag_a79a7dd0f46797e	
	{
	public:
		USoundBase* BannerAppearSound; // 0x0(0x8)
		USoundBase* BannerAwaySound; // 0x8(0x8)
		USoundBase* IntroSound; // 0x10(0x8)
		USoundBase* OutroSound; // 0x18(0x8)
	};


	// Struct /Engine/Transient.PropertyBag_1f708a2b641b27de
	// Size: 0x18 (0x18 - 0x0)
	struct FPropertyBag_1f708a2b641b27de	
	{
	public:
		USoundBase* ShopIntroWhooshSound; // 0x0(0x8)
		USoundBase* ContentWhoosh_RetractSound; // 0x8(0x8)
		USoundBase* ShopRowWhooshIn; // 0x10(0x8)
	};


	// Struct /Engine/Transient.PropertyBag_a5e2e140bafe6564
	// Size: 0x10 (0x10 - 0x0)
	struct FPropertyBag_a5e2e140bafe6564	
	{
	public:
		USoundBase* ErrorWindowAppearSound; // 0x0(0x8)
		USoundBase* ErrorWindowAwaySound; // 0x8(0x8)
	};


	// Struct /Engine/Transient.PropertyBag_dabbf60ef1fc3156
	// Size: 0x8 (0x8 - 0x0)
	struct FPropertyBag_dabbf60ef1fc3156	
	{
	public:
		USoundBase* PressedSound; // 0x0(0x8)
	};


	// Struct /Engine/Transient.PropertyBag_923d5577a8b9257e
	// Size: 0x28 (0x28 - 0x0)
	struct FPropertyBag_923d5577a8b9257e	
	{
	public:
		USoundBase* HoveredSound; // 0x0(0x8)
		USoundBase* HoldPressedSound; // 0x8(0x8)
		USoundBase* HoldSound; // 0x10(0x8)
		USoundBase* HoldReleasedSound; // 0x18(0x8)
		USoundBase* HoldCompletedSound; // 0x20(0x8)
	};


	// Struct /Engine/Transient.PropertyBag_c17da888c945571
	// Size: 0x30 (0x30 - 0x0)
	struct FPropertyBag_c17da888c945571	
	{
	public:
		FSlateSound PressedSlateSoundOverride; // 0x0(0x18)
		FSlateSound HoveredSlateSoundOverride; // 0x18(0x18)
	};


	// Struct /Engine/Transient.PropertyBag_22f0e40c331cd050
	// Size: 0x20 (0x20 - 0x0)
	struct FPropertyBag_22f0e40c331cd050	
	{
	public:
		USoundBase* HoldPressedSound; // 0x0(0x8)
		USoundBase* HoldSound; // 0x8(0x8)
		USoundBase* HoldReleasedSound; // 0x10(0x8)
		USoundBase* HoldCompletedSound; // 0x18(0x8)
	};


	// Struct /Engine/Transient.PropertyBag_4cba3c4fc07242b4
	// Size: 0x18 (0x18 - 0x0)
	struct FPropertyBag_4cba3c4fc07242b4	
	{
	public:
		USoundBase* ContextButtonHoverSound; // 0x0(0x8)
		USoundBase* ContextButtonClickedSound; // 0x8(0x8)
		USoundBase* BlockOutlineHoverSound; // 0x10(0x8)
	};


	// Struct /Engine/Transient.PropertyBag_d700b9bb0c17687a
	// Size: 0x48 (0x48 - 0x0)
	struct FPropertyBag_d700b9bb0c17687a	
	{
	public:
		USoundBase* PressedSound; // 0x0(0x8)
		USoundBase* HoveredSound; // 0x8(0x8)
		FSlateSound PressedSlateSoundOverride; // 0x10(0x18)
		FSlateSound HoveredSlateSoundOverride; // 0x28(0x18)
		USoundBase* ActivityBrowserTileHoverSound; // 0x40(0x8)
	};


	// Struct /Engine/Transient.PropertyBag_a8039afecfb2d94d
	// Size: 0x10 (0x10 - 0x0)
	struct FPropertyBag_a8039afecfb2d94d	
	{
	public:
		USoundBase* PressedSound; // 0x0(0x8)
		USoundBase* HoveredSound; // 0x8(0x8)
	};


	// Struct /Engine/Transient.PropertyBag_9854de8812510f21
	// Size: 0x30 (0x30 - 0x0)
	struct FPropertyBag_9854de8812510f21	
	{
	public:
		USoundBase* HoveredSound; // 0x0(0x8)
		USoundBase* PressedSound; // 0x8(0x8)
		USoundBase* HoldPressedSound; // 0x10(0x8)
		USoundBase* HoldSound; // 0x18(0x8)
		USoundBase* HoldReleasedSound; // 0x20(0x8)
		USoundBase* HoldCompletedSound; // 0x28(0x8)
	};


	// Struct /Engine/Transient.PropertyBag_34f54a7b897f712e
	// Size: 0x8 (0x8 - 0x0)
	struct FPropertyBag_34f54a7b897f712e	
	{
	public:
		USoundBase* ListEntryHoveredSound; // 0x0(0x8)
	};


	// Struct /Engine/Transient.PropertyBag_be51aad2f9ffcf22
	// Size: 0x30 (0x30 - 0x0)
	struct FPropertyBag_be51aad2f9ffcf22	
	{
	public:
		FSlateSound PressedSlateSoundOverride; // 0x0(0x18)
		FSlateSound HoveredSlateSoundOverride; // 0x18(0x18)
	};


	// Struct /Engine/Transient.PropertyBag_cadffff7c7fec71a
	// Size: 0x8 (0x8 - 0x0)
	struct FPropertyBag_cadffff7c7fec71a	
	{
	public:
		USoundBase* HoverSound; // 0x0(0x8)
	};


	// Struct /Engine/Transient.PropertyBag_7a4b6017d698b5fe
	// Size: 0x20 (0x20 - 0x0)
	struct FPropertyBag_7a4b6017d698b5fe	
	{
	public:
		USoundBase* Press_Sound; // 0x0(0x8)
		USoundBase* HoldSound; // 0x8(0x8)
		USoundBase* ReleaseSound; // 0x10(0x8)
		USoundBase* CompleteSound; // 0x18(0x8)
	};


	// Struct /Engine/Transient.PropertyBag_58a23c2ad0c7a911
	// Size: 0x21C (0x21C - 0x0)
	struct FPropertyBag_58a23c2ad0c7a911	
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


	// Struct /Engine/Transient.PropertyBag_bfb973a982f0cc23
	// Size: 0x4 (0x4 - 0x0)
	struct FPropertyBag_bfb973a982f0cc23	
	{
	public:
		float LargePrimaryFont_Size; // 0x0(0x4)
	};


	// Struct /Engine/Transient.PropertyBag_ef85d1306715ed42
	// Size: 0x18 (0x18 - 0x0)
	struct FPropertyBag_ef85d1306715ed42	
	{
	public:
		UObject* Font_FontObject; // 0x0(0x8)
		FName Font_TypefaceFontName; // 0x8(0x4)
		float Font_Size; // 0xC(0x4)
		int32_t Font_LetterSpacing; // 0x10(0x4)
		float Font_SkewAmount; // 0x14(0x4)
	};


	// Struct /Engine/Transient.PropertyBag_756c53a4a8a1a874
	// Size: 0x8 (0x8 - 0x0)
	struct FPropertyBag_756c53a4a8a1a874	
	{
	public:
		FName Font_TypefaceFontName; // 0x0(0x4)
		FName TabFont_TypefaceFontName; // 0x4(0x4)
	};


	// Struct /Engine/Transient.PropertyBag_3c0cdd961a296ada
	// Size: 0x18 (0x18 - 0x0)
	struct FPropertyBag_3c0cdd961a296ada	
	{
	public:
		UObject* Font_FontObject; // 0x0(0x8)
		FName Font_TypefaceFontName; // 0x8(0x4)
		float Font_Size; // 0xC(0x4)
		int32_t Font_LetterSpacing; // 0x10(0x4)
		float Font_SkewAmount; // 0x14(0x4)
	};


	// Struct /Engine/Transient.PropertyBag_eeb8aa1046a59da
	// Size: 0x58 (0x58 - 0x0)
	struct FPropertyBag_eeb8aa1046a59da	
	{
	public:
		FSlateFontInfo GamepadPromptFont; // 0x0(0x58)
	};


	// Struct /Engine/Transient.PropertyBag_f6b5345c067aeebc
	// Size: 0x30 (0x30 - 0x0)
	struct FPropertyBag_f6b5345c067aeebc	
	{
	public:
		UObject* Font_FontObject; // 0x0(0x8)
		FName Font_TypefaceFontName; // 0x8(0x4)
		float Font_Size; // 0xC(0x4)
		int32_t Font_LetterSpacing; // 0x10(0x4)
		float Font_SkewAmount; // 0x14(0x4)
		UObject* TabFont_FontObject; // 0x18(0x8)
		FName TabFont_TypefaceFontName; // 0x20(0x4)
		float TabFont_Size; // 0x24(0x4)
		int32_t TabFont_LetterSpacing; // 0x28(0x4)
		float TabFont_SkewAmount; // 0x2C(0x4)
	};


	// Struct /Engine/Transient.PropertyBag_321cffa724310940
	// Size: 0x40 (0x40 - 0x0)
	struct FPropertyBag_321cffa724310940	
	{
	public:
		UObject* LargePrimaryFont_FontMaterial; // 0x0(0x8)
		UObject* LargeSecondaryFont_FontMaterial; // 0x8(0x8)
		UObject* MediumPrimaryFont_FontMaterial; // 0x10(0x8)
		UObject* MeduimSecondaryFont_FontMaterial; // 0x18(0x8)
		UObject* SmallPrimaryFont_FontMaterial; // 0x20(0x8)
		UObject* SmallSecondaryFont_FontMaterial; // 0x28(0x8)
		UMaterialInstance* BackgroundMaterial; // 0x30(0x8)
		UMaterialInstance* BorderMaterial; // 0x38(0x8)
	};


	// Struct /Engine/Transient.PropertyBag_9eb9a955680b9128
	// Size: 0x40 (0x40 - 0x0)
	struct FPropertyBag_9eb9a955680b9128	
	{
	public:
		UMaterialInstance* RegularFontMaterial; // 0x0(0x8)
		UMaterialInstance* RegularSecondaryFontMaterial; // 0x8(0x8)
		UMaterialInstance* RegularBackgroundMaterial; // 0x10(0x8)
		UMaterialInstance* RegularOutlineMaterial; // 0x18(0x8)
		UMaterialInstance* QuietFontMaterial; // 0x20(0x8)
		UMaterialInstance* QuietSecondaryFontMaterial; // 0x28(0x8)
		UMaterialInstance* QuietBackgroundMaterial; // 0x30(0x8)
		UMaterialInstance* QuietOutlineMaterial; // 0x38(0x8)
	};


	// Struct /Engine/Transient.PropertyBag_54e554ce39d47d50
	// Size: 0x78 (0x78 - 0x0)
	struct FPropertyBag_54e554ce39d47d50	
	{
	public:
		UObject* SmallPrimaryFont_FontMaterial; // 0x0(0x8)
		UObject* SmallSecondaryFont_FontMaterial; // 0x8(0x8)
		UMaterialInstance* BackgroundMaterial; // 0x10(0x8)
		UMaterialInstance* BorderMaterial; // 0x18(0x8)
		FSlateFontInfo GamepadPromptFont; // 0x20(0x58)
	};


	// Struct /Engine/Transient.PropertyBag_d35e301fbf6930df
	// Size: 0x2D04 (0x2D04 - 0x0)
	struct FPropertyBag_d35e301fbf6930df	
	{
	public:
		bool RigVMModel___Branch_9_1_1_Condition; // 0x0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		TArray<FCachedRigElement> Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_ParentConstraint_3_ChildCache; // 0x8(0x10)
		TArray<TArray> Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_ParentConstraint_3_ParentCaches; // 0x18(0x10)
		float Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_SphericalPoseReader_OutputParam; // 0x28(0x4)
		FSphericalPoseReaderDebugSettings Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_SphericalPoseReader_Debug__IO; // 0x2C(0x10)
		unsigned char UnknownData01_6[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY
		TArray<FSphericalRegion> Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_SphericalPoseReader_InnerRegion; // 0x40(0x10)
		TArray<FSphericalRegion> Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_SphericalPoseReader_OuterRegion; // 0x50(0x10)
		TArray<FVector> Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_SphericalPoseReader_DriverNormal; // 0x60(0x10)
		TArray<FVector> Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_SphericalPoseReader_Driver2D; // 0x70(0x10)
		TArray<FCachedRigElement> Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_SphericalPoseReader_DriverCache; // 0x80(0x10)
		TArray<FCachedRigElement> Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_SphericalPoseReader_OptionalParentCache; // 0x90(0x10)
		TArray<FTransform> Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_SphericalPoseReader_LocalDriverTransformInit; // 0xA0(0x10)
		TArray<FVector> Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_SphericalPoseReader_CachedRotationOffset; // 0xB0(0x10)
		TArray<bool> Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_SphericalPoseReader_bCachedInitTransforms; // 0xC0(0x10)
		TArray<FRigUnit_ModifyTransforms_PerItem> Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_ModifyTransforms_ItemToModify__IO; // 0xD0(0x10)
		TArray<FRigUnit_ModifyTransforms_WorkData> Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_ModifyTransforms_WorkData; // 0xE0(0x10)
		TArray<FCachedRigElement> Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_ParentConstraint_3_2_ChildCache; // 0xF0(0x10)
		TArray<TArray> Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_ParentConstraint_3_2_ParentCaches; // 0x100(0x10)
		float Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_SphericalPoseReader_2_OutputParam; // 0x110(0x4)
		FSphericalPoseReaderDebugSettings Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_SphericalPoseReader_2_Debug__IO; // 0x114(0x10)
		unsigned char UnknownData02_6[0x4]; // 0x124(0x4) UNKNOWN PROPERTY
		TArray<FSphericalRegion> Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_SphericalPoseReader_2_InnerRegion; // 0x128(0x10)
		TArray<FSphericalRegion> Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_SphericalPoseReader_2_OuterRegion; // 0x138(0x10)
		TArray<FVector> Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_SphericalPoseReader_2_DriverNormal; // 0x148(0x10)
		TArray<FVector> Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_SphericalPoseReader_2_Driver2D; // 0x158(0x10)
		TArray<FCachedRigElement> Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_SphericalPoseReader_2_DriverCache; // 0x168(0x10)
		TArray<FCachedRigElement> Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_SphericalPoseReader_2_OptionalParentCache; // 0x178(0x10)
		TArray<FTransform> Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_SphericalPoseReader_2_LocalDriverTransformInit; // 0x188(0x10)
		TArray<FVector> Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_SphericalPoseReader_2_CachedRotationOffset; // 0x198(0x10)
		TArray<bool> Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_SphericalPoseReader_2_bCachedInitTransforms; // 0x1A8(0x10)
		unsigned char UnknownData03_6[0x8]; // 0x1B8(0x8) UNKNOWN PROPERTY
		FTransform Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_Deform_GetMirrorTransform_FNC_transform; // 0x1C0(0x60)
		FTransform Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_Deform_GetMirrorTransform_FNC_mirrorTransform; // 0x220(0x60)
		FQuat Deform_GetMirrorTransform_FNC___Deform_GetMirrorTransform_FNC_MathQuaternionFromRotator_Result; // 0x280(0x20)
		FEulerTransform Deform_GetMirrorTransform_FNC___Deform_GetMirrorTransform_FNC_MathTransformToEulerTransform_Result; // 0x2A0(0x48)
		FRotator Deform_GetMirrorTransform_FNC___Deform_GetMirrorTransform_FNC_MathQuaternionFromRotator_Value; // 0x2E8(0x18)
		FVector Deform_GetMirrorTransform_FNC___Deform_GetMirrorTransform_FNC_MathVectorScale_Result; // 0x300(0x18)
		FVector Deform_GetMirrorTransform_FNC___Deform_GetMirrorTransform_FNC_MathVectorScale_Value; // 0x318(0x18)
		TArray<FRigUnit_ModifyTransforms_PerItem> Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_ModifyTransforms_2_ItemToModify__IO; // 0x330(0x10)
		TArray<FRigUnit_ModifyTransforms_WorkData> Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_ModifyTransforms_2_WorkData; // 0x340(0x10)
		FName Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_Branch_BlockToRun; // 0x350(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x354(0x4) UNKNOWN PROPERTY
		TArray<FCachedRigElement> Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_ParentConstraint_3_1_ChildCache; // 0x358(0x10)
		TArray<TArray> Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_ParentConstraint_3_1_ParentCaches; // 0x368(0x10)
		float Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_SphericalPoseReader_1_OutputParam; // 0x378(0x4)
		FSphericalPoseReaderDebugSettings Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_SphericalPoseReader_1_Debug__IO; // 0x37C(0x10)
		unsigned char UnknownData05_6[0x4]; // 0x38C(0x4) UNKNOWN PROPERTY
		TArray<FSphericalRegion> Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_SphericalPoseReader_1_InnerRegion; // 0x390(0x10)
		TArray<FSphericalRegion> Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_SphericalPoseReader_1_OuterRegion; // 0x3A0(0x10)
		TArray<FVector> Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_SphericalPoseReader_1_DriverNormal; // 0x3B0(0x10)
		TArray<FVector> Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_SphericalPoseReader_1_Driver2D; // 0x3C0(0x10)
		TArray<FCachedRigElement> Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_SphericalPoseReader_1_DriverCache; // 0x3D0(0x10)
		TArray<FCachedRigElement> Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_SphericalPoseReader_1_OptionalParentCache; // 0x3E0(0x10)
		TArray<FTransform> Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_SphericalPoseReader_1_LocalDriverTransformInit; // 0x3F0(0x10)
		TArray<FVector> Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_SphericalPoseReader_1_CachedRotationOffset; // 0x400(0x10)
		TArray<bool> Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_SphericalPoseReader_1_bCachedInitTransforms; // 0x410(0x10)
		TArray<FRigUnit_ModifyTransforms_PerItem> Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_ModifyTransforms_1_ItemToModify__IO; // 0x420(0x10)
		TArray<FRigUnit_ModifyTransforms_WorkData> Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_ModifyTransforms_1_WorkData; // 0x430(0x10)
		TArray<FRigUnit_ModifyTransforms_PerItem> Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_ModifyTransforms_1_1_ItemToModify__IO; // 0x440(0x10)
		TArray<FRigUnit_ModifyTransforms_WorkData> Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_ModifyTransforms_1_1_WorkData; // 0x450(0x10)
		TArray<FCachedRigElement> Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_ParentConstraint_3_1_2_ChildCache; // 0x460(0x10)
		TArray<TArray> Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_ParentConstraint_3_1_2_ParentCaches; // 0x470(0x10)
		float Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_SphericalPoseReader_1_2_OutputParam; // 0x480(0x4)
		FSphericalPoseReaderDebugSettings Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_SphericalPoseReader_1_2_Debug__IO; // 0x484(0x10)
		unsigned char UnknownData06_6[0x4]; // 0x494(0x4) UNKNOWN PROPERTY
		TArray<FSphericalRegion> Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_SphericalPoseReader_1_2_InnerRegion; // 0x498(0x10)
		TArray<FSphericalRegion> Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_SphericalPoseReader_1_2_OuterRegion; // 0x4A8(0x10)
		TArray<FVector> Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_SphericalPoseReader_1_2_DriverNormal; // 0x4B8(0x10)
		TArray<FVector> Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_SphericalPoseReader_1_2_Driver2D; // 0x4C8(0x10)
		TArray<FCachedRigElement> Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_SphericalPoseReader_1_2_DriverCache; // 0x4D8(0x10)
		TArray<FCachedRigElement> Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_SphericalPoseReader_1_2_OptionalParentCache; // 0x4E8(0x10)
		TArray<FTransform> Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_SphericalPoseReader_1_2_LocalDriverTransformInit; // 0x4F8(0x10)
		TArray<FVector> Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_SphericalPoseReader_1_2_CachedRotationOffset; // 0x508(0x10)
		TArray<bool> Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_SphericalPoseReader_1_2_bCachedInitTransforms; // 0x518(0x10)
		unsigned char UnknownData07_6[0x8]; // 0x528(0x8) UNKNOWN PROPERTY
		FTransform Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_Deform_GetMirrorTransform_FNC_2_transform; // 0x530(0x60)
		FTransform Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_Deform_GetMirrorTransform_FNC_2_mirrorTransform; // 0x590(0x60)
		FQuat Deform_GetMirrorTransform_FNC_2___Deform_GetMirrorTransform_FNC_MathQuaternionFromRotator_Result; // 0x5F0(0x20)
		FEulerTransform Deform_GetMirrorTransform_FNC_2___Deform_GetMirrorTransform_FNC_MathTransformToEulerTransform_Result; // 0x610(0x48)
		FRotator Deform_GetMirrorTransform_FNC_2___Deform_GetMirrorTransform_FNC_MathQuaternionFromRotator_Value; // 0x658(0x18)
		FVector Deform_GetMirrorTransform_FNC_2___Deform_GetMirrorTransform_FNC_MathVectorScale_Result; // 0x670(0x18)
		FVector Deform_GetMirrorTransform_FNC_2___Deform_GetMirrorTransform_FNC_MathVectorScale_Value; // 0x688(0x18)
		TArray<FRigUnit_ModifyTransforms_PerItem> Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_ModifyTransforms_1_3_ItemToModify__IO; // 0x6A0(0x10)
		TArray<FRigUnit_ModifyTransforms_WorkData> Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_ModifyTransforms_1_3_WorkData; // 0x6B0(0x10)
		FTransform Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_Deform_GetMirrorTransform_FNC_1_transform; // 0x6C0(0x60)
		FTransform Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_Deform_GetMirrorTransform_FNC_1_mirrorTransform; // 0x720(0x60)
		FQuat Deform_GetMirrorTransform_FNC_1___Deform_GetMirrorTransform_FNC_MathQuaternionFromRotator_Result; // 0x780(0x20)
		FEulerTransform Deform_GetMirrorTransform_FNC_1___Deform_GetMirrorTransform_FNC_MathTransformToEulerTransform_Result; // 0x7A0(0x48)
		FRotator Deform_GetMirrorTransform_FNC_1___Deform_GetMirrorTransform_FNC_MathQuaternionFromRotator_Value; // 0x7E8(0x18)
		FVector Deform_GetMirrorTransform_FNC_1___Deform_GetMirrorTransform_FNC_MathVectorScale_Result; // 0x800(0x18)
		FVector Deform_GetMirrorTransform_FNC_1___Deform_GetMirrorTransform_FNC_MathVectorScale_Value; // 0x818(0x18)
		TArray<FRigUnit_ModifyTransforms_PerItem> Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_ModifyTransforms_1_1_1_ItemToModify__IO; // 0x830(0x10)
		TArray<FRigUnit_ModifyTransforms_WorkData> Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_ModifyTransforms_1_1_1_WorkData; // 0x840(0x10)
		FName Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_Branch_1_BlockToRun; // 0x850(0x4)
		unsigned char UnknownData08_6[0x4]; // 0x854(0x4) UNKNOWN PROPERTY
		TArray<FCachedRigElement> Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_ParentConstraint_3_1_1_ChildCache; // 0x858(0x10)
		TArray<TArray> Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_ParentConstraint_3_1_1_ParentCaches; // 0x868(0x10)
		float Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_SphericalPoseReader_1_1_OutputParam; // 0x878(0x4)
		FSphericalPoseReaderDebugSettings Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_SphericalPoseReader_1_1_Debug__IO; // 0x87C(0x10)
		unsigned char UnknownData09_6[0x4]; // 0x88C(0x4) UNKNOWN PROPERTY
		TArray<FSphericalRegion> Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_SphericalPoseReader_1_1_InnerRegion; // 0x890(0x10)
		TArray<FSphericalRegion> Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_SphericalPoseReader_1_1_OuterRegion; // 0x8A0(0x10)
		TArray<FVector> Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_SphericalPoseReader_1_1_DriverNormal; // 0x8B0(0x10)
		TArray<FVector> Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_SphericalPoseReader_1_1_Driver2D; // 0x8C0(0x10)
		TArray<FCachedRigElement> Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_SphericalPoseReader_1_1_DriverCache; // 0x8D0(0x10)
		TArray<FCachedRigElement> Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_SphericalPoseReader_1_1_OptionalParentCache; // 0x8E0(0x10)
		TArray<FTransform> Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_SphericalPoseReader_1_1_LocalDriverTransformInit; // 0x8F0(0x10)
		TArray<FVector> Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_SphericalPoseReader_1_1_CachedRotationOffset; // 0x900(0x10)
		TArray<bool> Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_SphericalPoseReader_1_1_bCachedInitTransforms; // 0x910(0x10)
		TArray<FRigUnit_ModifyTransforms_PerItem> Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_ModifyTransforms_1_2_ItemToModify__IO; // 0x920(0x10)
		TArray<FRigUnit_ModifyTransforms_WorkData> Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_ModifyTransforms_1_2_WorkData; // 0x930(0x10)
		TArray<FCachedRigElement> Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_ParentConstraint_3_1_1_1_ChildCache; // 0x940(0x10)
		TArray<TArray> Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_ParentConstraint_3_1_1_1_ParentCaches; // 0x950(0x10)
		float Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_SphericalPoseReader_1_1_1_OutputParam; // 0x960(0x4)
		FSphericalPoseReaderDebugSettings Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_SphericalPoseReader_1_1_1_Debug__IO; // 0x964(0x10)
		unsigned char UnknownData10_6[0x4]; // 0x974(0x4) UNKNOWN PROPERTY
		TArray<FSphericalRegion> Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_SphericalPoseReader_1_1_1_InnerRegion; // 0x978(0x10)
		TArray<FSphericalRegion> Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_SphericalPoseReader_1_1_1_OuterRegion; // 0x988(0x10)
		TArray<FVector> Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_SphericalPoseReader_1_1_1_DriverNormal; // 0x998(0x10)
		TArray<FVector> Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_SphericalPoseReader_1_1_1_Driver2D; // 0x9A8(0x10)
		TArray<FCachedRigElement> Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_SphericalPoseReader_1_1_1_DriverCache; // 0x9B8(0x10)
		TArray<FCachedRigElement> Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_SphericalPoseReader_1_1_1_OptionalParentCache; // 0x9C8(0x10)
		TArray<FTransform> Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_SphericalPoseReader_1_1_1_LocalDriverTransformInit; // 0x9D8(0x10)
		TArray<FVector> Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_SphericalPoseReader_1_1_1_CachedRotationOffset; // 0x9E8(0x10)
		TArray<bool> Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_SphericalPoseReader_1_1_1_bCachedInitTransforms; // 0x9F8(0x10)
		unsigned char UnknownData11_6[0x8]; // 0xA08(0x8) UNKNOWN PROPERTY
		FTransform Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_Deform_GetMirrorTransform_FNC_3_transform; // 0xA10(0x60)
		FTransform Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_Deform_GetMirrorTransform_FNC_3_mirrorTransform; // 0xA70(0x60)
		FQuat Deform_GetMirrorTransform_FNC_3___Deform_GetMirrorTransform_FNC_MathQuaternionFromRotator_Result; // 0xAD0(0x20)
		FEulerTransform Deform_GetMirrorTransform_FNC_3___Deform_GetMirrorTransform_FNC_MathTransformToEulerTransform_Result; // 0xAF0(0x48)
		FRotator Deform_GetMirrorTransform_FNC_3___Deform_GetMirrorTransform_FNC_MathQuaternionFromRotator_Value; // 0xB38(0x18)
		FVector Deform_GetMirrorTransform_FNC_3___Deform_GetMirrorTransform_FNC_MathVectorScale_Result; // 0xB50(0x18)
		FVector Deform_GetMirrorTransform_FNC_3___Deform_GetMirrorTransform_FNC_MathVectorScale_Value; // 0xB68(0x18)
		TArray<FRigUnit_ModifyTransforms_PerItem> Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_ModifyTransforms_1_2_1_ItemToModify__IO; // 0xB80(0x10)
		TArray<FRigUnit_ModifyTransforms_WorkData> Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_ModifyTransforms_1_2_1_WorkData; // 0xB90(0x10)
		FName Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_Branch_1_1_BlockToRun; // 0xBA0(0x4)
		FName RigVMModel___Branch_9_1_1_BlockToRun; // 0xBA4(0x4)
		bool RigVMModel___Branch_9_1_1_1_1_Condition; // 0xBA8(0x1)
		unsigned char UnknownData12_6[0x7]; // 0xBA9(0x7) UNKNOWN PROPERTY
		TArray<FCachedRigElement> Deform_Wrist_FNC_1___Deform_Wrist_FNC_ParentConstraint_3_ChildCache; // 0xBB0(0x10)
		TArray<TArray> Deform_Wrist_FNC_1___Deform_Wrist_FNC_ParentConstraint_3_ParentCaches; // 0xBC0(0x10)
		float Deform_Wrist_FNC_1___Deform_Wrist_FNC_SphericalPoseReader_OutputParam; // 0xBD0(0x4)
		FSphericalPoseReaderDebugSettings Deform_Wrist_FNC_1___Deform_Wrist_FNC_SphericalPoseReader_Debug__IO; // 0xBD4(0x10)
		unsigned char UnknownData13_6[0x4]; // 0xBE4(0x4) UNKNOWN PROPERTY
		TArray<FSphericalRegion> Deform_Wrist_FNC_1___Deform_Wrist_FNC_SphericalPoseReader_InnerRegion; // 0xBE8(0x10)
		TArray<FSphericalRegion> Deform_Wrist_FNC_1___Deform_Wrist_FNC_SphericalPoseReader_OuterRegion; // 0xBF8(0x10)
		TArray<FVector> Deform_Wrist_FNC_1___Deform_Wrist_FNC_SphericalPoseReader_DriverNormal; // 0xC08(0x10)
		TArray<FVector> Deform_Wrist_FNC_1___Deform_Wrist_FNC_SphericalPoseReader_Driver2D; // 0xC18(0x10)
		TArray<FCachedRigElement> Deform_Wrist_FNC_1___Deform_Wrist_FNC_SphericalPoseReader_DriverCache; // 0xC28(0x10)
		TArray<FCachedRigElement> Deform_Wrist_FNC_1___Deform_Wrist_FNC_SphericalPoseReader_OptionalParentCache; // 0xC38(0x10)
		TArray<FTransform> Deform_Wrist_FNC_1___Deform_Wrist_FNC_SphericalPoseReader_LocalDriverTransformInit; // 0xC48(0x10)
		TArray<FVector> Deform_Wrist_FNC_1___Deform_Wrist_FNC_SphericalPoseReader_CachedRotationOffset; // 0xC58(0x10)
		TArray<bool> Deform_Wrist_FNC_1___Deform_Wrist_FNC_SphericalPoseReader_bCachedInitTransforms; // 0xC68(0x10)
		TArray<FRigUnit_ModifyTransforms_PerItem> Deform_Wrist_FNC_1___Deform_Wrist_FNC_ModifyTransforms_ItemToModify__IO; // 0xC78(0x10)
		TArray<FRigUnit_ModifyTransforms_WorkData> Deform_Wrist_FNC_1___Deform_Wrist_FNC_ModifyTransforms_WorkData; // 0xC88(0x10)
		TArray<FCachedRigElement> Deform_Wrist_FNC_1___Deform_Wrist_FNC_ParentConstraint_3_2_ChildCache; // 0xC98(0x10)
		TArray<TArray> Deform_Wrist_FNC_1___Deform_Wrist_FNC_ParentConstraint_3_2_ParentCaches; // 0xCA8(0x10)
		float Deform_Wrist_FNC_1___Deform_Wrist_FNC_SphericalPoseReader_2_OutputParam; // 0xCB8(0x4)
		FSphericalPoseReaderDebugSettings Deform_Wrist_FNC_1___Deform_Wrist_FNC_SphericalPoseReader_2_Debug__IO; // 0xCBC(0x10)
		unsigned char UnknownData14_6[0x4]; // 0xCCC(0x4) UNKNOWN PROPERTY
		TArray<FSphericalRegion> Deform_Wrist_FNC_1___Deform_Wrist_FNC_SphericalPoseReader_2_InnerRegion; // 0xCD0(0x10)
		TArray<FSphericalRegion> Deform_Wrist_FNC_1___Deform_Wrist_FNC_SphericalPoseReader_2_OuterRegion; // 0xCE0(0x10)
		TArray<FVector> Deform_Wrist_FNC_1___Deform_Wrist_FNC_SphericalPoseReader_2_DriverNormal; // 0xCF0(0x10)
		TArray<FVector> Deform_Wrist_FNC_1___Deform_Wrist_FNC_SphericalPoseReader_2_Driver2D; // 0xD00(0x10)
		TArray<FCachedRigElement> Deform_Wrist_FNC_1___Deform_Wrist_FNC_SphericalPoseReader_2_DriverCache; // 0xD10(0x10)
		TArray<FCachedRigElement> Deform_Wrist_FNC_1___Deform_Wrist_FNC_SphericalPoseReader_2_OptionalParentCache; // 0xD20(0x10)
		TArray<FTransform> Deform_Wrist_FNC_1___Deform_Wrist_FNC_SphericalPoseReader_2_LocalDriverTransformInit; // 0xD30(0x10)
		TArray<FVector> Deform_Wrist_FNC_1___Deform_Wrist_FNC_SphericalPoseReader_2_CachedRotationOffset; // 0xD40(0x10)
		TArray<bool> Deform_Wrist_FNC_1___Deform_Wrist_FNC_SphericalPoseReader_2_bCachedInitTransforms; // 0xD50(0x10)
		FTransform Deform_Wrist_FNC_1___Deform_Wrist_FNC_Deform_GetMirrorTransform_FNC_transform; // 0xD60(0x60)
		FTransform Deform_Wrist_FNC_1___Deform_Wrist_FNC_Deform_GetMirrorTransform_FNC_mirrorTransform; // 0xDC0(0x60)
		TArray<FRigUnit_ModifyTransforms_PerItem> Deform_Wrist_FNC_1___Deform_Wrist_FNC_ModifyTransforms_2_ItemToModify__IO; // 0xE20(0x10)
		TArray<FRigUnit_ModifyTransforms_WorkData> Deform_Wrist_FNC_1___Deform_Wrist_FNC_ModifyTransforms_2_WorkData; // 0xE30(0x10)
		FName Deform_Wrist_FNC_1___Deform_Wrist_FNC_Branch_BlockToRun; // 0xE40(0x4)
		unsigned char UnknownData15_6[0x4]; // 0xE44(0x4) UNKNOWN PROPERTY
		TArray<FCachedRigElement> Deform_Wrist_FNC_1___Deform_Wrist_FNC_ParentConstraint_3_1_ChildCache; // 0xE48(0x10)
		TArray<TArray> Deform_Wrist_FNC_1___Deform_Wrist_FNC_ParentConstraint_3_1_ParentCaches; // 0xE58(0x10)
		float Deform_Wrist_FNC_1___Deform_Wrist_FNC_SphericalPoseReader_1_OutputParam; // 0xE68(0x4)
		FSphericalPoseReaderDebugSettings Deform_Wrist_FNC_1___Deform_Wrist_FNC_SphericalPoseReader_1_Debug__IO; // 0xE6C(0x10)
		unsigned char UnknownData16_6[0x4]; // 0xE7C(0x4) UNKNOWN PROPERTY
		TArray<FSphericalRegion> Deform_Wrist_FNC_1___Deform_Wrist_FNC_SphericalPoseReader_1_InnerRegion; // 0xE80(0x10)
		TArray<FSphericalRegion> Deform_Wrist_FNC_1___Deform_Wrist_FNC_SphericalPoseReader_1_OuterRegion; // 0xE90(0x10)
		TArray<FVector> Deform_Wrist_FNC_1___Deform_Wrist_FNC_SphericalPoseReader_1_DriverNormal; // 0xEA0(0x10)
		TArray<FVector> Deform_Wrist_FNC_1___Deform_Wrist_FNC_SphericalPoseReader_1_Driver2D; // 0xEB0(0x10)
		TArray<FCachedRigElement> Deform_Wrist_FNC_1___Deform_Wrist_FNC_SphericalPoseReader_1_DriverCache; // 0xEC0(0x10)
		TArray<FCachedRigElement> Deform_Wrist_FNC_1___Deform_Wrist_FNC_SphericalPoseReader_1_OptionalParentCache; // 0xED0(0x10)
		TArray<FTransform> Deform_Wrist_FNC_1___Deform_Wrist_FNC_SphericalPoseReader_1_LocalDriverTransformInit; // 0xEE0(0x10)
		TArray<FVector> Deform_Wrist_FNC_1___Deform_Wrist_FNC_SphericalPoseReader_1_CachedRotationOffset; // 0xEF0(0x10)
		TArray<bool> Deform_Wrist_FNC_1___Deform_Wrist_FNC_SphericalPoseReader_1_bCachedInitTransforms; // 0xF00(0x10)
		TArray<FRigUnit_ModifyTransforms_PerItem> Deform_Wrist_FNC_1___Deform_Wrist_FNC_ModifyTransforms_1_ItemToModify__IO; // 0xF10(0x10)
		TArray<FRigUnit_ModifyTransforms_WorkData> Deform_Wrist_FNC_1___Deform_Wrist_FNC_ModifyTransforms_1_WorkData; // 0xF20(0x10)
		TArray<FCachedRigElement> Deform_Wrist_FNC_1___Deform_Wrist_FNC_ParentConstraint_3_1_1_ChildCache; // 0xF30(0x10)
		TArray<TArray> Deform_Wrist_FNC_1___Deform_Wrist_FNC_ParentConstraint_3_1_1_ParentCaches; // 0xF40(0x10)
		float Deform_Wrist_FNC_1___Deform_Wrist_FNC_SphericalPoseReader_1_1_OutputParam; // 0xF50(0x4)
		FSphericalPoseReaderDebugSettings Deform_Wrist_FNC_1___Deform_Wrist_FNC_SphericalPoseReader_1_1_Debug__IO; // 0xF54(0x10)
		unsigned char UnknownData17_6[0x4]; // 0xF64(0x4) UNKNOWN PROPERTY
		TArray<FSphericalRegion> Deform_Wrist_FNC_1___Deform_Wrist_FNC_SphericalPoseReader_1_1_InnerRegion; // 0xF68(0x10)
		TArray<FSphericalRegion> Deform_Wrist_FNC_1___Deform_Wrist_FNC_SphericalPoseReader_1_1_OuterRegion; // 0xF78(0x10)
		TArray<FVector> Deform_Wrist_FNC_1___Deform_Wrist_FNC_SphericalPoseReader_1_1_DriverNormal; // 0xF88(0x10)
		TArray<FVector> Deform_Wrist_FNC_1___Deform_Wrist_FNC_SphericalPoseReader_1_1_Driver2D; // 0xF98(0x10)
		TArray<FCachedRigElement> Deform_Wrist_FNC_1___Deform_Wrist_FNC_SphericalPoseReader_1_1_DriverCache; // 0xFA8(0x10)
		TArray<FCachedRigElement> Deform_Wrist_FNC_1___Deform_Wrist_FNC_SphericalPoseReader_1_1_OptionalParentCache; // 0xFB8(0x10)
		TArray<FTransform> Deform_Wrist_FNC_1___Deform_Wrist_FNC_SphericalPoseReader_1_1_LocalDriverTransformInit; // 0xFC8(0x10)
		TArray<FVector> Deform_Wrist_FNC_1___Deform_Wrist_FNC_SphericalPoseReader_1_1_CachedRotationOffset; // 0xFD8(0x10)
		TArray<bool> Deform_Wrist_FNC_1___Deform_Wrist_FNC_SphericalPoseReader_1_1_bCachedInitTransforms; // 0xFE8(0x10)
		unsigned char UnknownData18_6[0x8]; // 0xFF8(0x8) UNKNOWN PROPERTY
		FTransform Deform_Wrist_FNC_1___Deform_Wrist_FNC_Deform_GetMirrorTransform_FNC_1_transform; // 0x1000(0x60)
		FTransform Deform_Wrist_FNC_1___Deform_Wrist_FNC_Deform_GetMirrorTransform_FNC_1_mirrorTransform; // 0x1060(0x60)
		TArray<FRigUnit_ModifyTransforms_PerItem> Deform_Wrist_FNC_1___Deform_Wrist_FNC_ModifyTransforms_1_1_ItemToModify__IO; // 0x10C0(0x10)
		TArray<FRigUnit_ModifyTransforms_WorkData> Deform_Wrist_FNC_1___Deform_Wrist_FNC_ModifyTransforms_1_1_WorkData; // 0x10D0(0x10)
		FName Deform_Wrist_FNC_1___Deform_Wrist_FNC_Branch_1_BlockToRun; // 0x10E0(0x4)
		FName RigVMModel___Branch_9_1_1_1_1_BlockToRun; // 0x10E4(0x4)
		bool RigVMModel___Branch_9_1_1_1_1_1_1_Condition; // 0x10E8(0x1)
		unsigned char UnknownData19_6[0x7]; // 0x10E9(0x7) UNKNOWN PROPERTY
		FEulerTransform Deform_Knee_FNC_1___Deform_Knee_FNC_GetDeltaTransformFromRefPose_FNC_OutTransform; // 0x10F0(0x48)
		unsigned char UnknownData20_6[0x8]; // 0x1138(0x8) UNKNOWN PROPERTY
		FTransform GetDeltaTransformFromRefPose_FNC___GetDeltaTransformFromRefPose_FNC_MathTransformMakeRelative_Local; // 0x1140(0x60)
		FTransform GetDeltaTransformFromRefPose_FNC___GetDeltaTransformFromRefPose_FNC_GetTransform_Transform; // 0x11A0(0x60)
		TArray<FCachedRigElement> GetDeltaTransformFromRefPose_FNC___GetDeltaTransformFromRefPose_FNC_GetTransform_CachedIndex; // 0x1200(0x10)
		FTransform GetDeltaTransformFromRefPose_FNC___GetDeltaTransformFromRefPose_FNC_GetTransform_1_Transform; // 0x1210(0x60)
		TArray<FCachedRigElement> GetDeltaTransformFromRefPose_FNC___GetDeltaTransformFromRefPose_FNC_GetTransform_1_CachedIndex; // 0x1270(0x10)
		FEulerTransform Deform_Knee_FNC_1___Deform_Knee_FNC_GetDeltaTransformFromRefPose_FNC_1_OutTransform; // 0x1280(0x48)
		unsigned char UnknownData21_6[0x8]; // 0x12C8(0x8) UNKNOWN PROPERTY
		FTransform GetDeltaTransformFromRefPose_FNC_1___GetDeltaTransformFromRefPose_FNC_MathTransformMakeRelative_Local; // 0x12D0(0x60)
		FTransform GetDeltaTransformFromRefPose_FNC_1___GetDeltaTransformFromRefPose_FNC_GetTransform_Transform; // 0x1330(0x60)
		TArray<FCachedRigElement> GetDeltaTransformFromRefPose_FNC_1___GetDeltaTransformFromRefPose_FNC_GetTransform_CachedIndex; // 0x1390(0x10)
		FTransform GetDeltaTransformFromRefPose_FNC_1___GetDeltaTransformFromRefPose_FNC_GetTransform_1_Transform; // 0x13A0(0x60)
		TArray<FCachedRigElement> GetDeltaTransformFromRefPose_FNC_1___GetDeltaTransformFromRefPose_FNC_GetTransform_1_CachedIndex; // 0x1400(0x10)
		TArray<FCachedRigElement> Deform_Knee_FNC_1___Deform_Knee_FNC_ParentConstraint_ChildCache; // 0x1410(0x10)
		TArray<TArray> Deform_Knee_FNC_1___Deform_Knee_FNC_ParentConstraint_ParentCaches; // 0x1420(0x10)
		TArray<FRigUnit_ModifyTransforms_PerItem> Deform_Knee_FNC_1___Deform_Knee_FNC_ModifyTransforms_ItemToModify__IO; // 0x1430(0x10)
		FRigVMInstructionSetExecuteState Deform_Knee_FNC_1te_3994818745; // 0x1440(0x50)
		float Deform_Knee_FNC_1___Deform_Knee_FNC_MathFloatRemap_1_1_1_1_1_Result; // 0x1490(0x4)
		unsigned char UnknownData22_6[0x4]; // 0x1494(0x4) UNKNOWN PROPERTY
		FRigVMInstructionSetExecuteState Deform_Knee_FNC_1te; // 0x1498(0x50)
		float Deform_Knee_FNC_1___Deform_Knee_FNC_MathFloatRemap_1_1_1_1_1_Value; // 0x14E8(0x4)
		unsigned char UnknownData23_6[0x4]; // 0x14EC(0x4) UNKNOWN PROPERTY
		TArray<FRigUnit_ModifyTransforms_WorkData> Deform_Knee_FNC_1___Deform_Knee_FNC_ModifyTransforms_WorkData; // 0x14F0(0x10)
		TArray<FCachedRigElement> Deform_Knee_FNC_1___Deform_Knee_FNC_ParentConstraint_1_ChildCache; // 0x1500(0x10)
		TArray<TArray> Deform_Knee_FNC_1___Deform_Knee_FNC_ParentConstraint_1_ParentCaches; // 0x1510(0x10)
		FTransform Deform_Knee_FNC_1___Deform_Knee_FNC_Deform_GetMirrorTransform_FNC_transform; // 0x1520(0x60)
		FTransform Deform_Knee_FNC_1___Deform_Knee_FNC_Deform_GetMirrorTransform_FNC_mirrorTransform; // 0x1580(0x60)
		TArray<FRigUnit_ModifyTransforms_PerItem> Deform_Knee_FNC_1___Deform_Knee_FNC_ModifyTransforms_1_ItemToModify__IO; // 0x15E0(0x10)
		float Deform_Knee_FNC_1___Deform_Knee_FNC_MathFloatRemap_1_1_1_1_1_1_Result; // 0x15F0(0x4)
		float Deform_Knee_FNC_1___Deform_Knee_FNC_MathFloatRemap_1_1_1_1_1_1_Value; // 0x15F4(0x4)
		TArray<FRigUnit_ModifyTransforms_WorkData> Deform_Knee_FNC_1___Deform_Knee_FNC_ModifyTransforms_1_WorkData; // 0x15F8(0x10)
		FName Deform_Knee_FNC_1___Deform_Knee_FNC_Branch_1_BlockToRun; // 0x1608(0x4)
		unsigned char UnknownData24_6[0x4]; // 0x160C(0x4) UNKNOWN PROPERTY
		TArray<FCachedRigElement> Deform_Knee_FNC_1___Deform_Knee_FNC_ParentConstraint_2_ChildCache; // 0x1610(0x10)
		TArray<TArray> Deform_Knee_FNC_1___Deform_Knee_FNC_ParentConstraint_2_ParentCaches; // 0x1620(0x10)
		TArray<FRigUnit_ModifyTransforms_PerItem> Deform_Knee_FNC_1___Deform_Knee_FNC_ModifyTransforms_2_ItemToModify__IO; // 0x1630(0x10)
		TArray<FRigUnit_ModifyTransforms_WorkData> Deform_Knee_FNC_1___Deform_Knee_FNC_ModifyTransforms_2_WorkData; // 0x1640(0x10)
		TArray<FCachedRigElement> Deform_Knee_FNC_1___Deform_Knee_FNC_ParentConstraint_2_1_ChildCache; // 0x1650(0x10)
		TArray<TArray> Deform_Knee_FNC_1___Deform_Knee_FNC_ParentConstraint_2_1_ParentCaches; // 0x1660(0x10)
		FTransform Deform_Knee_FNC_1___Deform_Knee_FNC_Deform_GetMirrorTransform_FNC_1_transform; // 0x1670(0x60)
		FTransform Deform_Knee_FNC_1___Deform_Knee_FNC_Deform_GetMirrorTransform_FNC_1_mirrorTransform; // 0x16D0(0x60)
		TArray<FRigUnit_ModifyTransforms_PerItem> Deform_Knee_FNC_1___Deform_Knee_FNC_ModifyTransforms_2_1_ItemToModify__IO; // 0x1730(0x10)
		TArray<FRigUnit_ModifyTransforms_WorkData> Deform_Knee_FNC_1___Deform_Knee_FNC_ModifyTransforms_2_1_WorkData; // 0x1740(0x10)
		FName Deform_Knee_FNC_1___Deform_Knee_FNC_Branch_1_1_BlockToRun; // 0x1750(0x4)
		FName RigVMModel___Branch_9_1_1_1_1_1_1_BlockToRun; // 0x1754(0x4)
		bool RigVMModel___Branch_9_Condition; // 0x1758(0x1)
		unsigned char UnknownData25_6[0x7]; // 0x1759(0x7) UNKNOWN PROPERTY
		FTransform Deform_Pec_FNC_1___Deform_Pec_FNC_AimBoneMath_1_Result; // 0x1760(0x60)
		FTransform Deform_Pec_FNC_1___Deform_Pec_FNC_GetTransform_3_1_Transform; // 0x17C0(0x60)
		TArray<FCachedRigElement> Deform_Pec_FNC_1___Deform_Pec_FNC_GetTransform_3_1_CachedIndex; // 0x1820(0x10)
		TArray<FCachedRigElement> Deform_Pec_FNC_1___Deform_Pec_FNC_AimBoneMath_1_PrimaryCachedSpace; // 0x1830(0x10)
		TArray<FCachedRigElement> Deform_Pec_FNC_1___Deform_Pec_FNC_AimBoneMath_1_SecondaryCachedSpace; // 0x1840(0x10)
		TArray<bool> Deform_Pec_FNC_1___Deform_Pec_FNC_AimBoneMath_1_bIsInitialized; // 0x1850(0x10)
		TArray<FCachedRigElement> Deform_Pec_FNC_1___Deform_Pec_FNC_SetTransform_1_CachedIndex; // 0x1860(0x10)
		TArray<FCachedRigElement> Deform_Pec_FNC_1___Deform_Pec_FNC_PositionConstraintLocalSpaceOffset_ChildCache; // 0x1870(0x10)
		TArray<TArray> Deform_Pec_FNC_1___Deform_Pec_FNC_PositionConstraintLocalSpaceOffset_ParentCaches; // 0x1880(0x10)
		FEulerTransform Deform_Pec_FNC_1___Deform_Pec_FNC_GetDeltaTransformFromRefPose_FNC_OutTransform; // 0x1890(0x48)
		TArray<FCachedRigElement> GetDeltaTransformFromRefPose_FNC___GetDeltaTransformFromRefPose_FNC_GetTransform_CachedIndex_01; // 0x18D8(0x10)
		TArray<FCachedRigElement> GetDeltaTransformFromRefPose_FNC___GetDeltaTransformFromRefPose_FNC_GetTransform_1_CachedIndex_01; // 0x18E8(0x10)
		TArray<FRigUnit_ModifyTransforms_PerItem> Deform_Pec_FNC_1___Deform_Pec_FNC_ModifyTransforms_ItemToModify__IO; // 0x18F8(0x10)
		float Deform_Pec_FNC_1___Deform_Pec_FNC_MathFloatRemap_1_Result; // 0x1908(0x4)
		float Deform_Pec_FNC_1___Deform_Pec_FNC_MathFloatRemap_1_Value; // 0x190C(0x4)
		TArray<FRigUnit_ModifyTransforms_WorkData> Deform_Pec_FNC_1___Deform_Pec_FNC_ModifyTransforms_WorkData; // 0x1910(0x10)
		FTransform Deform_Pec_FNC_1___Deform_Pec_FNC_AimBoneMath_1_1_Result; // 0x1920(0x60)
		FTransform Deform_Pec_FNC_1___Deform_Pec_FNC_GetTransform_3_1_1_Transform; // 0x1980(0x60)
		TArray<FCachedRigElement> Deform_Pec_FNC_1___Deform_Pec_FNC_GetTransform_3_1_1_CachedIndex; // 0x19E0(0x10)
		TArray<FCachedRigElement> Deform_Pec_FNC_1___Deform_Pec_FNC_AimBoneMath_1_1_PrimaryCachedSpace; // 0x19F0(0x10)
		TArray<FCachedRigElement> Deform_Pec_FNC_1___Deform_Pec_FNC_AimBoneMath_1_1_SecondaryCachedSpace; // 0x1A00(0x10)
		TArray<bool> Deform_Pec_FNC_1___Deform_Pec_FNC_AimBoneMath_1_1_bIsInitialized; // 0x1A10(0x10)
		TArray<FCachedRigElement> Deform_Pec_FNC_1___Deform_Pec_FNC_SetTransform_1_1_CachedIndex; // 0x1A20(0x10)
		TArray<FCachedRigElement> Deform_Pec_FNC_1___Deform_Pec_FNC_PositionConstraintLocalSpaceOffset_1_ChildCache; // 0x1A30(0x10)
		TArray<TArray> Deform_Pec_FNC_1___Deform_Pec_FNC_PositionConstraintLocalSpaceOffset_1_ParentCaches; // 0x1A40(0x10)
		FEulerTransform Deform_Pec_FNC_1___Deform_Pec_FNC_GetDeltaTransformFromRefPose_FNC_1_OutTransform; // 0x1A50(0x48)
		TArray<FCachedRigElement> GetDeltaTransformFromRefPose_FNC_1___GetDeltaTransformFromRefPose_FNC_GetTransform_CachedIndex_01; // 0x1A98(0x10)
		TArray<FCachedRigElement> GetDeltaTransformFromRefPose_FNC_1___GetDeltaTransformFromRefPose_FNC_GetTransform_1_CachedIndex_01; // 0x1AA8(0x10)
		unsigned char UnknownData26_6[0x8]; // 0x1AB8(0x8) UNKNOWN PROPERTY
		FTransform Deform_Pec_FNC_1___Deform_Pec_FNC_Deform_GetMirrorTransform_FNC_transform; // 0x1AC0(0x60)
		FTransform Deform_Pec_FNC_1___Deform_Pec_FNC_Deform_GetMirrorTransform_FNC_mirrorTransform; // 0x1B20(0x60)
		TArray<FRigUnit_ModifyTransforms_PerItem> Deform_Pec_FNC_1___Deform_Pec_FNC_ModifyTransforms_1_ItemToModify__IO; // 0x1B80(0x10)
		float Deform_Pec_FNC_1___Deform_Pec_FNC_MathFloatRemap_1_1_Result; // 0x1B90(0x4)
		float Deform_Pec_FNC_1___Deform_Pec_FNC_MathFloatRemap_1_1_Value; // 0x1B94(0x4)
		TArray<FRigUnit_ModifyTransforms_WorkData> Deform_Pec_FNC_1___Deform_Pec_FNC_ModifyTransforms_1_WorkData; // 0x1B98(0x10)
		FName RigVMModel___Branch_9_BlockToRun; // 0x1BA8(0x4)
		bool RigVMModel___Branch_9_1_Condition; // 0x1BAC(0x1)
		unsigned char UnknownData27_6[0x3]; // 0x1BAD(0x3) UNKNOWN PROPERTY
		float Deform_Lat_FNC_1___Deform_Lat_FNC_SphericalPoseReader_OutputParam; // 0x1BB0(0x4)
		FSphericalPoseReaderDebugSettings Deform_Lat_FNC_1___Deform_Lat_FNC_SphericalPoseReader_Debug__IO; // 0x1BB4(0x10)
		unsigned char UnknownData28_6[0x4]; // 0x1BC4(0x4) UNKNOWN PROPERTY
		TArray<FSphericalRegion> Deform_Lat_FNC_1___Deform_Lat_FNC_SphericalPoseReader_InnerRegion; // 0x1BC8(0x10)
		TArray<FSphericalRegion> Deform_Lat_FNC_1___Deform_Lat_FNC_SphericalPoseReader_OuterRegion; // 0x1BD8(0x10)
		TArray<FVector> Deform_Lat_FNC_1___Deform_Lat_FNC_SphericalPoseReader_DriverNormal; // 0x1BE8(0x10)
		TArray<FVector> Deform_Lat_FNC_1___Deform_Lat_FNC_SphericalPoseReader_Driver2D; // 0x1BF8(0x10)
		TArray<FCachedRigElement> Deform_Lat_FNC_1___Deform_Lat_FNC_SphericalPoseReader_DriverCache; // 0x1C08(0x10)
		TArray<FCachedRigElement> Deform_Lat_FNC_1___Deform_Lat_FNC_SphericalPoseReader_OptionalParentCache; // 0x1C18(0x10)
		TArray<FTransform> Deform_Lat_FNC_1___Deform_Lat_FNC_SphericalPoseReader_LocalDriverTransformInit; // 0x1C28(0x10)
		TArray<FVector> Deform_Lat_FNC_1___Deform_Lat_FNC_SphericalPoseReader_CachedRotationOffset; // 0x1C38(0x10)
		TArray<bool> Deform_Lat_FNC_1___Deform_Lat_FNC_SphericalPoseReader_bCachedInitTransforms; // 0x1C48(0x10)
		TArray<FRigUnit_ModifyTransforms_PerItem> Deform_Lat_FNC_1___Deform_Lat_FNC_ModifyTransforms_ItemToModify__IO; // 0x1C58(0x10)
		TArray<FRigUnit_ModifyTransforms_WorkData> Deform_Lat_FNC_1___Deform_Lat_FNC_ModifyTransforms_WorkData; // 0x1C68(0x10)
		float Deform_Lat_FNC_1___Deform_Lat_FNC_SphericalPoseReader_1_OutputParam; // 0x1C78(0x4)
		FSphericalPoseReaderDebugSettings Deform_Lat_FNC_1___Deform_Lat_FNC_SphericalPoseReader_1_Debug__IO; // 0x1C7C(0x10)
		unsigned char UnknownData29_6[0x4]; // 0x1C8C(0x4) UNKNOWN PROPERTY
		TArray<FSphericalRegion> Deform_Lat_FNC_1___Deform_Lat_FNC_SphericalPoseReader_1_InnerRegion; // 0x1C90(0x10)
		TArray<FSphericalRegion> Deform_Lat_FNC_1___Deform_Lat_FNC_SphericalPoseReader_1_OuterRegion; // 0x1CA0(0x10)
		TArray<FVector> Deform_Lat_FNC_1___Deform_Lat_FNC_SphericalPoseReader_1_DriverNormal; // 0x1CB0(0x10)
		TArray<FVector> Deform_Lat_FNC_1___Deform_Lat_FNC_SphericalPoseReader_1_Driver2D; // 0x1CC0(0x10)
		TArray<FCachedRigElement> Deform_Lat_FNC_1___Deform_Lat_FNC_SphericalPoseReader_1_DriverCache; // 0x1CD0(0x10)
		TArray<FCachedRigElement> Deform_Lat_FNC_1___Deform_Lat_FNC_SphericalPoseReader_1_OptionalParentCache; // 0x1CE0(0x10)
		TArray<FTransform> Deform_Lat_FNC_1___Deform_Lat_FNC_SphericalPoseReader_1_LocalDriverTransformInit; // 0x1CF0(0x10)
		TArray<FVector> Deform_Lat_FNC_1___Deform_Lat_FNC_SphericalPoseReader_1_CachedRotationOffset; // 0x1D00(0x10)
		TArray<bool> Deform_Lat_FNC_1___Deform_Lat_FNC_SphericalPoseReader_1_bCachedInitTransforms; // 0x1D10(0x10)
		FTransform Deform_Lat_FNC_1___Deform_Lat_FNC_Deform_GetMirrorTransform_FNC_transform; // 0x1D20(0x60)
		FTransform Deform_Lat_FNC_1___Deform_Lat_FNC_Deform_GetMirrorTransform_FNC_mirrorTransform; // 0x1D80(0x60)
		TArray<FRigUnit_ModifyTransforms_PerItem> Deform_Lat_FNC_1___Deform_Lat_FNC_ModifyTransforms_1_ItemToModify__IO; // 0x1DE0(0x10)
		TArray<FRigUnit_ModifyTransforms_WorkData> Deform_Lat_FNC_1___Deform_Lat_FNC_ModifyTransforms_1_WorkData; // 0x1DF0(0x10)
		FName RigVMModel___Branch_9_1_BlockToRun; // 0x1E00(0x4)
		bool RigVMModel___MathBoolOr_2_Result; // 0x1E04(0x1)
		bool RigVMModel___MathBoolOr_2_A; // 0x1E05(0x1)
		bool RigVMModel___MathBoolOr_2_B; // 0x1E06(0x1)
		unsigned char UnknownData30_6[0x1]; // 0x1E07(0x1) UNKNOWN PROPERTY
		FEulerTransform Deform_Elbow_FNC_1___Deform_Elbow_FNC_GetDeltaTransformFromRefPose_FNC_OutTransform; // 0x1E08(0x48)
		TArray<FCachedRigElement> GetDeltaTransformFromRefPose_FNC___GetDeltaTransformFromRefPose_FNC_GetTransform_CachedIndex_02; // 0x1E50(0x10)
		TArray<FCachedRigElement> GetDeltaTransformFromRefPose_FNC___GetDeltaTransformFromRefPose_FNC_GetTransform_1_CachedIndex_02; // 0x1E60(0x10)
		FEulerTransform Deform_Elbow_FNC_1___Deform_Elbow_FNC_GetDeltaTransformFromRefPose_FNC_1_OutTransform; // 0x1E70(0x48)
		TArray<FCachedRigElement> GetDeltaTransformFromRefPose_FNC_1___GetDeltaTransformFromRefPose_FNC_GetTransform_CachedIndex_02; // 0x1EB8(0x10)
		TArray<FCachedRigElement> GetDeltaTransformFromRefPose_FNC_1___GetDeltaTransformFromRefPose_FNC_GetTransform_1_CachedIndex_02; // 0x1EC8(0x10)
		TArray<FCachedRigElement> Deform_Elbow_FNC_1___Deform_Elbow_FNC_ParentConstraint_ChildCache; // 0x1ED8(0x10)
		TArray<TArray> Deform_Elbow_FNC_1___Deform_Elbow_FNC_ParentConstraint_ParentCaches; // 0x1EE8(0x10)
		TArray<FRigUnit_ModifyTransforms_PerItem> Deform_Elbow_FNC_1___Deform_Elbow_FNC_ModifyTransforms_ItemToModify__IO; // 0x1EF8(0x10)
		FRigVMInstructionSetExecuteState Deform_Elbow_FNC_1te; // 0x1F08(0x50)
		float Deform_Elbow_FNC_1___Deform_Elbow_FNC_MathFloatRemap_1_1_1_2_Result; // 0x1F58(0x4)
		unsigned char UnknownData31_6[0x4]; // 0x1F5C(0x4) UNKNOWN PROPERTY
		FRigVMInstructionSetExecuteState Deform_Elbow_FNC_1te; // 0x1F60(0x50)
		float Deform_Elbow_FNC_1___Deform_Elbow_FNC_MathFloatRemap_1_1_1_2_Value; // 0x1FB0(0x4)
		unsigned char UnknownData32_6[0x4]; // 0x1FB4(0x4) UNKNOWN PROPERTY
		TArray<FRigUnit_ModifyTransforms_WorkData> Deform_Elbow_FNC_1___Deform_Elbow_FNC_ModifyTransforms_WorkData; // 0x1FB8(0x10)
		TArray<FCachedRigElement> Deform_Elbow_FNC_1___Deform_Elbow_FNC_ParentConstraint_1_ChildCache; // 0x1FC8(0x10)
		TArray<TArray> Deform_Elbow_FNC_1___Deform_Elbow_FNC_ParentConstraint_1_ParentCaches; // 0x1FD8(0x10)
		unsigned char UnknownData33_6[0x8]; // 0x1FE8(0x8) UNKNOWN PROPERTY
		FTransform Deform_Elbow_FNC_1___Deform_Elbow_FNC_Deform_GetMirrorTransform_FNC_1_transform; // 0x1FF0(0x60)
		FTransform Deform_Elbow_FNC_1___Deform_Elbow_FNC_Deform_GetMirrorTransform_FNC_1_mirrorTransform; // 0x2050(0x60)
		TArray<FRigUnit_ModifyTransforms_PerItem> Deform_Elbow_FNC_1___Deform_Elbow_FNC_ModifyTransforms_1_ItemToModify__IO; // 0x20B0(0x10)
		float Deform_Elbow_FNC_1___Deform_Elbow_FNC_MathFloatRemap_1_1_1_2_1_Result; // 0x20C0(0x4)
		float Deform_Elbow_FNC_1___Deform_Elbow_FNC_MathFloatRemap_1_1_1_2_1_Value; // 0x20C4(0x4)
		TArray<FRigUnit_ModifyTransforms_WorkData> Deform_Elbow_FNC_1___Deform_Elbow_FNC_ModifyTransforms_1_WorkData; // 0x20C8(0x10)
		FName Deform_Elbow_FNC_1___Deform_Elbow_FNC_Branch_1_BlockToRun; // 0x20D8(0x4)
		unsigned char UnknownData34_6[0x4]; // 0x20DC(0x4) UNKNOWN PROPERTY
		TArray<FCachedRigElement> Deform_Elbow_FNC_1___Deform_Elbow_FNC_ParentConstraint_2_ChildCache; // 0x20E0(0x10)
		TArray<TArray> Deform_Elbow_FNC_1___Deform_Elbow_FNC_ParentConstraint_2_ParentCaches; // 0x20F0(0x10)
		TArray<FRigUnit_ModifyTransforms_PerItem> Deform_Elbow_FNC_1___Deform_Elbow_FNC_ModifyTransforms_2_ItemToModify__IO; // 0x2100(0x10)
		TArray<FRigUnit_ModifyTransforms_WorkData> Deform_Elbow_FNC_1___Deform_Elbow_FNC_ModifyTransforms_2_WorkData; // 0x2110(0x10)
		TArray<FCachedRigElement> Deform_Elbow_FNC_1___Deform_Elbow_FNC_ParentConstraint_2_1_ChildCache; // 0x2120(0x10)
		TArray<TArray> Deform_Elbow_FNC_1___Deform_Elbow_FNC_ParentConstraint_2_1_ParentCaches; // 0x2130(0x10)
		FTransform Deform_Elbow_FNC_1___Deform_Elbow_FNC_Deform_GetMirrorTransform_FNC_2_transform; // 0x2140(0x60)
		FTransform Deform_Elbow_FNC_1___Deform_Elbow_FNC_Deform_GetMirrorTransform_FNC_2_mirrorTransform; // 0x21A0(0x60)
		TArray<FRigUnit_ModifyTransforms_PerItem> Deform_Elbow_FNC_1___Deform_Elbow_FNC_ModifyTransforms_2_1_ItemToModify__IO; // 0x2200(0x10)
		TArray<FRigUnit_ModifyTransforms_WorkData> Deform_Elbow_FNC_1___Deform_Elbow_FNC_ModifyTransforms_2_1_WorkData; // 0x2210(0x10)
		FName Deform_Elbow_FNC_1___Deform_Elbow_FNC_Branch_1_1_BlockToRun; // 0x2220(0x4)
		unsigned char UnknownData35_6[0x4]; // 0x2224(0x4) UNKNOWN PROPERTY
		TArray<FRigUnit_ModifyTransforms_PerItem> Deform_Elbow_FNC_1___Deform_Elbow_FNC_ModifyTransforms_2_1_1_ItemToModify__IO; // 0x2228(0x10)
		TArray<FRigUnit_ModifyTransforms_WorkData> Deform_Elbow_FNC_1___Deform_Elbow_FNC_ModifyTransforms_2_1_1_WorkData; // 0x2238(0x10)
		unsigned char UnknownData36_6[0x8]; // 0x2248(0x8) UNKNOWN PROPERTY
		FTransform Deform_Elbow_FNC_1___Deform_Elbow_FNC_Deform_GetMirrorTransform_FNC_transform; // 0x2250(0x60)
		FTransform Deform_Elbow_FNC_1___Deform_Elbow_FNC_Deform_GetMirrorTransform_FNC_mirrorTransform; // 0x22B0(0x60)
		TArray<FRigUnit_ModifyTransforms_PerItem> Deform_Elbow_FNC_1___Deform_Elbow_FNC_ModifyTransforms_2_1_1_1_ItemToModify__IO; // 0x2310(0x10)
		TArray<FRigUnit_ModifyTransforms_WorkData> Deform_Elbow_FNC_1___Deform_Elbow_FNC_ModifyTransforms_2_1_1_1_WorkData; // 0x2320(0x10)
		FName Deform_Elbow_FNC_1___Deform_Elbow_FNC_Branch_1_1_1_BlockToRun; // 0x2330(0x4)
		FName RigVMModel___Branch_9_1_1_1_BlockToRun; // 0x2334(0x4)
		bool RigVMModel___MathBoolOr_3_Result; // 0x2338(0x1)
		bool RigVMModel___MathBoolOr_3_A; // 0x2339(0x1)
		bool RigVMModel___MathBoolOr_3_B; // 0x233A(0x1)
		bool Deform_GroinGlue_FNC_1___Deform_GroinGlue_FNC_MathBoolOr_Result; // 0x233B(0x1)
		float Deform_GroinGlue_FNC_1___Deform_GroinGlue_FNC_SphericalPoseReader_OutputParam; // 0x233C(0x4)
		FSphericalPoseReaderDebugSettings Deform_GroinGlue_FNC_1___Deform_GroinGlue_FNC_SphericalPoseReader_Debug__IO; // 0x2340(0x10)
		TArray<FSphericalRegion> Deform_GroinGlue_FNC_1___Deform_GroinGlue_FNC_SphericalPoseReader_InnerRegion; // 0x2350(0x10)
		TArray<FSphericalRegion> Deform_GroinGlue_FNC_1___Deform_GroinGlue_FNC_SphericalPoseReader_OuterRegion; // 0x2360(0x10)
		TArray<FVector> Deform_GroinGlue_FNC_1___Deform_GroinGlue_FNC_SphericalPoseReader_DriverNormal; // 0x2370(0x10)
		TArray<FVector> Deform_GroinGlue_FNC_1___Deform_GroinGlue_FNC_SphericalPoseReader_Driver2D; // 0x2380(0x10)
		TArray<FCachedRigElement> Deform_GroinGlue_FNC_1___Deform_GroinGlue_FNC_SphericalPoseReader_DriverCache; // 0x2390(0x10)
		TArray<FCachedRigElement> Deform_GroinGlue_FNC_1___Deform_GroinGlue_FNC_SphericalPoseReader_OptionalParentCache; // 0x23A0(0x10)
		TArray<FTransform> Deform_GroinGlue_FNC_1___Deform_GroinGlue_FNC_SphericalPoseReader_LocalDriverTransformInit; // 0x23B0(0x10)
		TArray<FVector> Deform_GroinGlue_FNC_1___Deform_GroinGlue_FNC_SphericalPoseReader_CachedRotationOffset; // 0x23C0(0x10)
		TArray<bool> Deform_GroinGlue_FNC_1___Deform_GroinGlue_FNC_SphericalPoseReader_bCachedInitTransforms; // 0x23D0(0x10)
		float Deform_GroinGlue_FNC_1___Deform_GroinGlue_FNC_SphericalPoseReader_1_OutputParam; // 0x23E0(0x4)
		FSphericalPoseReaderDebugSettings Deform_GroinGlue_FNC_1___Deform_GroinGlue_FNC_SphericalPoseReader_1_Debug__IO; // 0x23E4(0x10)
		unsigned char UnknownData37_6[0x4]; // 0x23F4(0x4) UNKNOWN PROPERTY
		TArray<FSphericalRegion> Deform_GroinGlue_FNC_1___Deform_GroinGlue_FNC_SphericalPoseReader_1_InnerRegion; // 0x23F8(0x10)
		TArray<FSphericalRegion> Deform_GroinGlue_FNC_1___Deform_GroinGlue_FNC_SphericalPoseReader_1_OuterRegion; // 0x2408(0x10)
		TArray<FVector> Deform_GroinGlue_FNC_1___Deform_GroinGlue_FNC_SphericalPoseReader_1_DriverNormal; // 0x2418(0x10)
		TArray<FVector> Deform_GroinGlue_FNC_1___Deform_GroinGlue_FNC_SphericalPoseReader_1_Driver2D; // 0x2428(0x10)
		TArray<FCachedRigElement> Deform_GroinGlue_FNC_1___Deform_GroinGlue_FNC_SphericalPoseReader_1_DriverCache; // 0x2438(0x10)
		TArray<FCachedRigElement> Deform_GroinGlue_FNC_1___Deform_GroinGlue_FNC_SphericalPoseReader_1_OptionalParentCache; // 0x2448(0x10)
		TArray<FTransform> Deform_GroinGlue_FNC_1___Deform_GroinGlue_FNC_SphericalPoseReader_1_LocalDriverTransformInit; // 0x2458(0x10)
		TArray<FVector> Deform_GroinGlue_FNC_1___Deform_GroinGlue_FNC_SphericalPoseReader_1_CachedRotationOffset; // 0x2468(0x10)
		TArray<bool> Deform_GroinGlue_FNC_1___Deform_GroinGlue_FNC_SphericalPoseReader_1_bCachedInitTransforms; // 0x2478(0x10)
		TArray<FCachedRigElement> Deform_GroinGlue_FNC_1___Deform_GroinGlue_FNC_ParentConstraint_ChildCache; // 0x2488(0x10)
		TArray<TArray> Deform_GroinGlue_FNC_1___Deform_GroinGlue_FNC_ParentConstraint_ParentCaches; // 0x2498(0x10)
		TArray<FRigUnit_ModifyTransforms_PerItem> Deform_GroinGlue_FNC_1___Deform_GroinGlue_FNC_ModifyTransforms_ItemToModify__IO; // 0x24A8(0x10)
		FRigVMInstructionSetExecuteState Deform_GroinGlue_FNC_1te_2899688742; // 0x24B8(0x50)
		TArray<FRigUnit_ModifyTransforms_WorkData> Deform_GroinGlue_FNC_1___Deform_GroinGlue_FNC_ModifyTransforms_WorkData; // 0x2508(0x10)
		TArray<FCachedRigElement> Deform_GroinGlue_FNC_1___Deform_GroinGlue_FNC_ParentConstraint_2_ChildCache; // 0x2518(0x10)
		TArray<TArray> Deform_GroinGlue_FNC_1___Deform_GroinGlue_FNC_ParentConstraint_2_ParentCaches; // 0x2528(0x10)
		unsigned char UnknownData38_6[0x8]; // 0x2538(0x8) UNKNOWN PROPERTY
		FTransform Deform_GroinGlue_FNC_1___Deform_GroinGlue_FNC_Deform_GetMirrorTransform_FNC_transform; // 0x2540(0x60)
		FTransform Deform_GroinGlue_FNC_1___Deform_GroinGlue_FNC_Deform_GetMirrorTransform_FNC_mirrorTransform; // 0x25A0(0x60)
		TArray<FRigUnit_ModifyTransforms_PerItem> Deform_GroinGlue_FNC_1___Deform_GroinGlue_FNC_ModifyTransforms_2_ItemToModify__IO; // 0x2600(0x10)
		TArray<FRigUnit_ModifyTransforms_WorkData> Deform_GroinGlue_FNC_1___Deform_GroinGlue_FNC_ModifyTransforms_2_WorkData; // 0x2610(0x10)
		FName Deform_GroinGlue_FNC_1___Deform_GroinGlue_FNC_Branch_BlockToRun; // 0x2620(0x4)
		unsigned char UnknownData39_6[0x4]; // 0x2624(0x4) UNKNOWN PROPERTY
		TArray<FCachedRigElement> Deform_GroinGlue_FNC_1___Deform_GroinGlue_FNC_ParentConstraint_1_ChildCache; // 0x2628(0x10)
		TArray<TArray> Deform_GroinGlue_FNC_1___Deform_GroinGlue_FNC_ParentConstraint_1_ParentCaches; // 0x2638(0x10)
		TArray<FRigUnit_ModifyTransforms_PerItem> Deform_GroinGlue_FNC_1___Deform_GroinGlue_FNC_ModifyTransforms_1_ItemToModify__IO; // 0x2648(0x10)
		TArray<FRigUnit_ModifyTransforms_WorkData> Deform_GroinGlue_FNC_1___Deform_GroinGlue_FNC_ModifyTransforms_1_WorkData; // 0x2658(0x10)
		TArray<FCachedRigElement> Deform_GroinGlue_FNC_1___Deform_GroinGlue_FNC_ParentConstraint_1_1_ChildCache; // 0x2668(0x10)
		TArray<TArray> Deform_GroinGlue_FNC_1___Deform_GroinGlue_FNC_ParentConstraint_1_1_ParentCaches; // 0x2678(0x10)
		unsigned char UnknownData40_6[0x8]; // 0x2688(0x8) UNKNOWN PROPERTY
		FTransform Deform_GroinGlue_FNC_1___Deform_GroinGlue_FNC_Deform_GetMirrorTransform_FNC_1_transform; // 0x2690(0x60)
		FTransform Deform_GroinGlue_FNC_1___Deform_GroinGlue_FNC_Deform_GetMirrorTransform_FNC_1_mirrorTransform; // 0x26F0(0x60)
		TArray<FRigUnit_ModifyTransforms_PerItem> Deform_GroinGlue_FNC_1___Deform_GroinGlue_FNC_ModifyTransforms_1_1_ItemToModify__IO; // 0x2750(0x10)
		TArray<FRigUnit_ModifyTransforms_WorkData> Deform_GroinGlue_FNC_1___Deform_GroinGlue_FNC_ModifyTransforms_1_1_WorkData; // 0x2760(0x10)
		FName Deform_GroinGlue_FNC_1___Deform_GroinGlue_FNC_Branch_2_BlockToRun; // 0x2770(0x4)
		FName Deform_GroinGlue_FNC_1___Deform_GroinGlue_FNC_Branch_1_BlockToRun; // 0x2774(0x4)
		FName RigVMModel___Branch_9_1_1_1_1_1_BlockToRun; // 0x2778(0x4)
		float RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_OutputParam; // 0x277C(0x4)
		TArray<FSphericalRegion> RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_InnerRegion; // 0x2780(0x10)
		TArray<FSphericalRegion> RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_OuterRegion; // 0x2790(0x10)
		TArray<FVector> RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_DriverNormal; // 0x27A0(0x10)
		TArray<FVector> RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_Driver2D; // 0x27B0(0x10)
		TArray<FCachedRigElement> RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_DriverCache; // 0x27C0(0x10)
		TArray<FCachedRigElement> RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_OptionalParentCache; // 0x27D0(0x10)
		TArray<FTransform> RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_LocalDriverTransformInit; // 0x27E0(0x10)
		TArray<FVector> RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_CachedRotationOffset; // 0x27F0(0x10)
		TArray<bool> RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_bCachedInitTransforms; // 0x2800(0x10)
		TArray<FRigUnit_ModifyTransforms_WorkData> RigVMModel___ModifyTransforms_1_1_1_1_1_1_WorkData; // 0x2810(0x10)
		float RigVMModel___SphericalPoseReader_2_2_1_1_2_3_OutputParam; // 0x2820(0x4)
		unsigned char UnknownData41_6[0x4]; // 0x2824(0x4) UNKNOWN PROPERTY
		TArray<FSphericalRegion> RigVMModel___SphericalPoseReader_2_2_1_1_2_3_InnerRegion; // 0x2828(0x10)
		TArray<FSphericalRegion> RigVMModel___SphericalPoseReader_2_2_1_1_2_3_OuterRegion; // 0x2838(0x10)
		TArray<FVector> RigVMModel___SphericalPoseReader_2_2_1_1_2_3_DriverNormal; // 0x2848(0x10)
		TArray<FVector> RigVMModel___SphericalPoseReader_2_2_1_1_2_3_Driver2D; // 0x2858(0x10)
		TArray<FCachedRigElement> RigVMModel___SphericalPoseReader_2_2_1_1_2_3_DriverCache; // 0x2868(0x10)
		TArray<FCachedRigElement> RigVMModel___SphericalPoseReader_2_2_1_1_2_3_OptionalParentCache; // 0x2878(0x10)
		TArray<FTransform> RigVMModel___SphericalPoseReader_2_2_1_1_2_3_LocalDriverTransformInit; // 0x2888(0x10)
		TArray<FVector> RigVMModel___SphericalPoseReader_2_2_1_1_2_3_CachedRotationOffset; // 0x2898(0x10)
		TArray<bool> RigVMModel___SphericalPoseReader_2_2_1_1_2_3_bCachedInitTransforms; // 0x28A8(0x10)
		float RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_1_OutputParam; // 0x28B8(0x4)
		unsigned char UnknownData42_6[0x4]; // 0x28BC(0x4) UNKNOWN PROPERTY
		TArray<FSphericalRegion> RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_1_InnerRegion; // 0x28C0(0x10)
		TArray<FSphericalRegion> RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_1_OuterRegion; // 0x28D0(0x10)
		TArray<FVector> RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_1_DriverNormal; // 0x28E0(0x10)
		TArray<FVector> RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_1_Driver2D; // 0x28F0(0x10)
		TArray<FCachedRigElement> RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_1_DriverCache; // 0x2900(0x10)
		TArray<FCachedRigElement> RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_1_OptionalParentCache; // 0x2910(0x10)
		TArray<FTransform> RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_1_LocalDriverTransformInit; // 0x2920(0x10)
		TArray<FVector> RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_1_CachedRotationOffset; // 0x2930(0x10)
		TArray<bool> RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_1_bCachedInitTransforms; // 0x2940(0x10)
		double RigVMModel___Multiply_1_Result; // 0x2950(0x8)
		double RigVMModel___Multiply_1_A; // 0x2958(0x8)
		double RigVMModel___Multiply_1_B; // 0x2960(0x8)
		float RigVMModel___ModifyTransforms_1_1_1_1_1_1_1_1_1_Weight; // 0x2968(0x4)
		unsigned char UnknownData43_6[0x4]; // 0x296C(0x4) UNKNOWN PROPERTY
		TArray<FRigUnit_ModifyTransforms_WorkData> RigVMModel___ModifyTransforms_1_1_1_1_1_1_1_1_1_WorkData; // 0x2970(0x10)
		TArray<FRigUnit_ModifyTransforms_WorkData> RigVMModel___ModifyTransforms_1_1_1_1_1_1_1_WorkData; // 0x2980(0x10)
		float RigVMModel___SphericalPoseReader_2_2_1_1_2_2_OutputParam; // 0x2990(0x4)
		unsigned char UnknownData44_6[0x4]; // 0x2994(0x4) UNKNOWN PROPERTY
		TArray<FSphericalRegion> RigVMModel___SphericalPoseReader_2_2_1_1_2_2_InnerRegion; // 0x2998(0x10)
		TArray<FSphericalRegion> RigVMModel___SphericalPoseReader_2_2_1_1_2_2_OuterRegion; // 0x29A8(0x10)
		TArray<FVector> RigVMModel___SphericalPoseReader_2_2_1_1_2_2_DriverNormal; // 0x29B8(0x10)
		TArray<FVector> RigVMModel___SphericalPoseReader_2_2_1_1_2_2_Driver2D; // 0x29C8(0x10)
		TArray<FCachedRigElement> RigVMModel___SphericalPoseReader_2_2_1_1_2_2_DriverCache; // 0x29D8(0x10)
		TArray<FCachedRigElement> RigVMModel___SphericalPoseReader_2_2_1_1_2_2_OptionalParentCache; // 0x29E8(0x10)
		TArray<FTransform> RigVMModel___SphericalPoseReader_2_2_1_1_2_2_LocalDriverTransformInit; // 0x29F8(0x10)
		TArray<FVector> RigVMModel___SphericalPoseReader_2_2_1_1_2_2_CachedRotationOffset; // 0x2A08(0x10)
		TArray<bool> RigVMModel___SphericalPoseReader_2_2_1_1_2_2_bCachedInitTransforms; // 0x2A18(0x10)
		TArray<FRigUnit_ModifyTransforms_WorkData> RigVMModel___ModifyTransforms_1_1_1_1_1_WorkData; // 0x2A28(0x10)
		float RigVMModel___SphericalPoseReader_2_2_1_1_2_1_1_OutputParam; // 0x2A38(0x4)
		unsigned char UnknownData45_6[0x4]; // 0x2A3C(0x4) UNKNOWN PROPERTY
		TArray<FSphericalRegion> RigVMModel___SphericalPoseReader_2_2_1_1_2_1_1_InnerRegion; // 0x2A40(0x10)
		TArray<FSphericalRegion> RigVMModel___SphericalPoseReader_2_2_1_1_2_1_1_OuterRegion; // 0x2A50(0x10)
		TArray<FVector> RigVMModel___SphericalPoseReader_2_2_1_1_2_1_1_DriverNormal; // 0x2A60(0x10)
		TArray<FVector> RigVMModel___SphericalPoseReader_2_2_1_1_2_1_1_Driver2D; // 0x2A70(0x10)
		TArray<FCachedRigElement> RigVMModel___SphericalPoseReader_2_2_1_1_2_1_1_DriverCache; // 0x2A80(0x10)
		TArray<FCachedRigElement> RigVMModel___SphericalPoseReader_2_2_1_1_2_1_1_OptionalParentCache; // 0x2A90(0x10)
		TArray<FTransform> RigVMModel___SphericalPoseReader_2_2_1_1_2_1_1_LocalDriverTransformInit; // 0x2AA0(0x10)
		TArray<FVector> RigVMModel___SphericalPoseReader_2_2_1_1_2_1_1_CachedRotationOffset; // 0x2AB0(0x10)
		TArray<bool> RigVMModel___SphericalPoseReader_2_2_1_1_2_1_1_bCachedInitTransforms; // 0x2AC0(0x10)
		double RigVMModel___Interpolate_Result; // 0x2AD0(0x8)
		double RigVMModel___Multiply_Result; // 0x2AD8(0x8)
		double RigVMModel___Multiply_A; // 0x2AE0(0x8)
		double RigVMModel___Multiply_B; // 0x2AE8(0x8)
		float RigVMModel___ModifyTransforms_1_1_1_1_1_1_1_1_Weight; // 0x2AF0(0x4)
		unsigned char UnknownData46_6[0x4]; // 0x2AF4(0x4) UNKNOWN PROPERTY
		TArray<FRigUnit_ModifyTransforms_WorkData> RigVMModel___ModifyTransforms_1_1_1_1_1_1_1_1_WorkData; // 0x2AF8(0x10)
		float RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_1_1_OutputParam; // 0x2B08(0x4)
		unsigned char UnknownData47_6[0x4]; // 0x2B0C(0x4) UNKNOWN PROPERTY
		TArray<FSphericalRegion> RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_1_1_InnerRegion; // 0x2B10(0x10)
		TArray<FSphericalRegion> RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_1_1_OuterRegion; // 0x2B20(0x10)
		TArray<FVector> RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_1_1_DriverNormal; // 0x2B30(0x10)
		TArray<FVector> RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_1_1_Driver2D; // 0x2B40(0x10)
		TArray<FCachedRigElement> RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_1_1_DriverCache; // 0x2B50(0x10)
		TArray<FCachedRigElement> RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_1_1_OptionalParentCache; // 0x2B60(0x10)
		TArray<FTransform> RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_1_1_LocalDriverTransformInit; // 0x2B70(0x10)
		TArray<FVector> RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_1_1_CachedRotationOffset; // 0x2B80(0x10)
		TArray<bool> RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_1_1_bCachedInitTransforms; // 0x2B90(0x10)
		TArray<FRigUnit_ModifyTransforms_WorkData> RigVMModel___ModifyTransforms_1_1_1_1_1_2_WorkData; // 0x2BA0(0x10)
		float RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_1_1_1_OutputParam; // 0x2BB0(0x4)
		unsigned char UnknownData48_6[0x4]; // 0x2BB4(0x4) UNKNOWN PROPERTY
		TArray<FSphericalRegion> RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_1_1_1_InnerRegion; // 0x2BB8(0x10)
		TArray<FSphericalRegion> RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_1_1_1_OuterRegion; // 0x2BC8(0x10)
		TArray<FVector> RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_1_1_1_DriverNormal; // 0x2BD8(0x10)
		TArray<FVector> RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_1_1_1_Driver2D; // 0x2BE8(0x10)
		TArray<FCachedRigElement> RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_1_1_1_DriverCache; // 0x2BF8(0x10)
		TArray<FCachedRigElement> RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_1_1_1_OptionalParentCache; // 0x2C08(0x10)
		TArray<FTransform> RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_1_1_1_LocalDriverTransformInit; // 0x2C18(0x10)
		TArray<FVector> RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_1_1_1_CachedRotationOffset; // 0x2C28(0x10)
		TArray<bool> RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_1_1_1_bCachedInitTransforms; // 0x2C38(0x10)
		TArray<FRigUnit_ModifyTransforms_WorkData> RigVMModel___ModifyTransforms_1_1_1_1_1_2_1_1_WorkData; // 0x2C48(0x10)
		float RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_1_1_1_1_OutputParam; // 0x2C58(0x4)
		unsigned char UnknownData49_6[0x4]; // 0x2C5C(0x4) UNKNOWN PROPERTY
		TArray<FSphericalRegion> RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_1_1_1_1_InnerRegion; // 0x2C60(0x10)
		TArray<FSphericalRegion> RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_1_1_1_1_OuterRegion; // 0x2C70(0x10)
		TArray<FVector> RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_1_1_1_1_DriverNormal; // 0x2C80(0x10)
		TArray<FVector> RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_1_1_1_1_Driver2D; // 0x2C90(0x10)
		TArray<FCachedRigElement> RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_1_1_1_1_DriverCache; // 0x2CA0(0x10)
		TArray<FCachedRigElement> RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_1_1_1_1_OptionalParentCache; // 0x2CB0(0x10)
		TArray<FTransform> RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_1_1_1_1_LocalDriverTransformInit; // 0x2CC0(0x10)
		TArray<FVector> RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_1_1_1_1_CachedRotationOffset; // 0x2CD0(0x10)
		TArray<bool> RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_1_1_1_1_bCachedInitTransforms; // 0x2CE0(0x10)
		TArray<FRigUnit_ModifyTransforms_WorkData> RigVMModel___ModifyTransforms_1_1_1_1_1_2_1_WorkData; // 0x2CF0(0x10)
		FName RigVMModel___RigVMFunction_ControlFlowBranch_4_1_1_BlockToRun; // 0x2D00(0x4)
	};


	// Struct /Engine/Transient.PropertyBag_25a304cadc507fdc
	// Size: 0xCE0 (0xCE0 - 0x0)
	struct FPropertyBag_25a304cadc507fdc	
	{
	public:
		bool RigVMModel___Deform_UpperArm_FNC_1_upperarm_up__Const; // 0x0(0x1)
		bool RigVMModel___Deform_UpperArm_FNC_1_debug_up__Const; // 0x1(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x2(0x2) UNKNOWN PROPERTY
		float LocalVariableDefault__Deform_UpperArm_FNC_ParentConstraint_3_Parents_0_Weight__Const; // 0x4(0x4)
		FRigElementKey Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_ParentConstraint_3_Child__Const; // 0x8(0x8)
		bool Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_ParentConstraint_3_bMaintainOffset__Const; // 0x10(0x1)
		FTransformFilter Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_ParentConstraint_3_Filter__Const; // 0x11(0x9)
		unsigned char UnknownData01_6[0x6]; // 0x1A(0x6) UNKNOWN PROPERTY
		TArray<FConstraintParent> Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_ParentConstraint_3_Parents__Const; // 0x20(0x10)
		FRigUnit_ParentConstraint_AdvancedSettings Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_ParentConstraint_3_AdvancedSettings__Const; // 0x30(0x2)
		unsigned char UnknownData02_6[0x2]; // 0x32(0x2) UNKNOWN PROPERTY
		float Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_ParentConstraint_3_Weight__Const; // 0x34(0x4)
		FRigElementKey Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_SphericalPoseReader_DriverItem__Const; // 0x38(0x8)
		FVector Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_SphericalPoseReader_DriverAxis__Const; // 0x40(0x18)
		FVector Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_SphericalPoseReader_RotationOffset__Const; // 0x58(0x18)
		float Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_SphericalPoseReader_ActiveRegionSize__Const; // 0x70(0x4)
		FRegionScaleFactors Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_SphericalPoseReader_ActiveRegionScaleFactors__Const; // 0x74(0x10)
		float Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_SphericalPoseReader_FalloffSize__Const; // 0x84(0x4)
		FRegionScaleFactors Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_SphericalPoseReader_FalloffRegionScaleFactors__Const; // 0x88(0x10)
		bool Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_SphericalPoseReader_FlipWidthScaling__Const; // 0x98(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x99(0x3) UNKNOWN PROPERTY
		FRigElementKey Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_SphericalPoseReader_OptionalParentItem__Const; // 0x9C(0x8)
		unsigned char UnknownData04_6[0x4]; // 0xA4(0x4) UNKNOWN PROPERTY
		TArray<FRigUnit_ModifyTransforms_PerItem> Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_ModifyTransforms_ItemToModify__Const; // 0xA8(0x10)
		float Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_ModifyTransforms_WeightMinimum__Const; // 0xB8(0x4)
		EControlRigModifyBoneMode Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_ModifyTransforms_Mode__Const; // 0xBC(0x1)
		unsigned char UnknownData05_6[0x3]; // 0xBD(0x3) UNKNOWN PROPERTY
		FRigElementKey Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_ParentConstraint_3_2_Child__Const; // 0xC0(0x8)
		TArray<FConstraintParent> Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_ParentConstraint_3_2_Parents__Const; // 0xC8(0x10)
		FRigElementKey Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_SphericalPoseReader_2_DriverItem__Const; // 0xD8(0x8)
		FVector Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_SphericalPoseReader_2_DriverAxis__Const; // 0xE0(0x18)
		FVector Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_SphericalPoseReader_2_RotationOffset__Const; // 0xF8(0x18)
		float Deform_GetMirrorTransform_FNC___Deform_GetMirrorTransform_FNC_MathVectorScale_Factor__Const; // 0x110(0x4)
		unsigned char UnknownData06_6[0x4]; // 0x114(0x4) UNKNOWN PROPERTY
		TArray<FRigUnit_ModifyTransforms_PerItem> Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_ModifyTransforms_2_ItemToModify__Const; // 0x118(0x10)
		FRigElementKey Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_ParentConstraint_3_1_Child__Const; // 0x128(0x8)
		TArray<FConstraintParent> Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_ParentConstraint_3_1_Parents__Const; // 0x130(0x10)
		FVector Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_SphericalPoseReader_1_RotationOffset__Const; // 0x140(0x18)
		FRegionScaleFactors Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_SphericalPoseReader_1_ActiveRegionScaleFactors__Const; // 0x158(0x10)
		float Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_SphericalPoseReader_1_FalloffSize__Const; // 0x168(0x4)
		unsigned char UnknownData07_6[0x4]; // 0x16C(0x4) UNKNOWN PROPERTY
		TArray<FRigUnit_ModifyTransforms_PerItem> Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_ModifyTransforms_1_ItemToModify__Const; // 0x170(0x10)
		TArray<FRigUnit_ModifyTransforms_PerItem> Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_ModifyTransforms_1_1_ItemToModify__Const; // 0x180(0x10)
		FRigElementKey Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_ParentConstraint_3_1_2_Child__Const; // 0x190(0x8)
		TArray<FConstraintParent> Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_ParentConstraint_3_1_2_Parents__Const; // 0x198(0x10)
		FVector Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_SphericalPoseReader_1_2_RotationOffset__Const; // 0x1A8(0x18)
		float Deform_GetMirrorTransform_FNC_2___Deform_GetMirrorTransform_FNC_MathVectorScale_Factor__Const; // 0x1C0(0x4)
		unsigned char UnknownData08_6[0x4]; // 0x1C4(0x4) UNKNOWN PROPERTY
		TArray<FRigUnit_ModifyTransforms_PerItem> Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_ModifyTransforms_1_3_ItemToModify__Const; // 0x1C8(0x10)
		float Deform_GetMirrorTransform_FNC_1___Deform_GetMirrorTransform_FNC_MathVectorScale_Factor__Const; // 0x1D8(0x4)
		unsigned char UnknownData09_6[0x4]; // 0x1DC(0x4) UNKNOWN PROPERTY
		TArray<FRigUnit_ModifyTransforms_PerItem> Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_ModifyTransforms_1_1_1_ItemToModify__Const; // 0x1E0(0x10)
		FRigElementKey Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_ParentConstraint_3_1_1_Child__Const; // 0x1F0(0x8)
		FVector Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_SphericalPoseReader_1_1_RotationOffset__Const; // 0x1F8(0x18)
		FRegionScaleFactors Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_SphericalPoseReader_1_1_ActiveRegionScaleFactors__Const; // 0x210(0x10)
		FRigElementKey Deform_UpperArm_FNC_1___Deform_UpperArm_FNC_ParentConstraint_3_1_1_1_Child__Const; // 0x220(0x8)
		float Deform_GetMirrorTransform_FNC_3___Deform_GetMirrorTransform_FNC_MathVectorScale_Factor__Const; // 0x228(0x4)
		FRigElementKey Deform_Wrist_FNC_1___Deform_Wrist_FNC_ParentConstraint_3_Child__Const; // 0x22C(0x8)
		bool Deform_Wrist_FNC_1___Deform_Wrist_FNC_ParentConstraint_3_bMaintainOffset__Const; // 0x234(0x1)
		FTransformFilter Deform_Wrist_FNC_1___Deform_Wrist_FNC_ParentConstraint_3_Filter__Const; // 0x235(0x9)
		unsigned char UnknownData10_6[0x2]; // 0x23E(0x2) UNKNOWN PROPERTY
		TArray<FConstraintParent> Deform_Wrist_FNC_1___Deform_Wrist_FNC_ParentConstraint_3_Parents__Const; // 0x240(0x10)
		FRigUnit_ParentConstraint_AdvancedSettings Deform_Wrist_FNC_1___Deform_Wrist_FNC_ParentConstraint_3_AdvancedSettings__Const; // 0x250(0x2)
		unsigned char UnknownData11_6[0x2]; // 0x252(0x2) UNKNOWN PROPERTY
		float Deform_Wrist_FNC_1___Deform_Wrist_FNC_ParentConstraint_3_Weight__Const; // 0x254(0x4)
		FRigElementKey Deform_Wrist_FNC_1___Deform_Wrist_FNC_SphericalPoseReader_DriverItem__Const; // 0x258(0x8)
		FVector Deform_Wrist_FNC_1___Deform_Wrist_FNC_SphericalPoseReader_DriverAxis__Const; // 0x260(0x18)
		FVector Deform_Wrist_FNC_1___Deform_Wrist_FNC_SphericalPoseReader_RotationOffset__Const; // 0x278(0x18)
		float Deform_Wrist_FNC_1___Deform_Wrist_FNC_SphericalPoseReader_ActiveRegionSize__Const; // 0x290(0x4)
		FRegionScaleFactors Deform_Wrist_FNC_1___Deform_Wrist_FNC_SphericalPoseReader_ActiveRegionScaleFactors__Const; // 0x294(0x10)
		float Deform_Wrist_FNC_1___Deform_Wrist_FNC_SphericalPoseReader_FalloffSize__Const; // 0x2A4(0x4)
		FRegionScaleFactors Deform_Wrist_FNC_1___Deform_Wrist_FNC_SphericalPoseReader_FalloffRegionScaleFactors__Const; // 0x2A8(0x10)
		bool Deform_Wrist_FNC_1___Deform_Wrist_FNC_SphericalPoseReader_FlipWidthScaling__Const; // 0x2B8(0x1)
		unsigned char UnknownData12_6[0x3]; // 0x2B9(0x3) UNKNOWN PROPERTY
		FRigElementKey Deform_Wrist_FNC_1___Deform_Wrist_FNC_SphericalPoseReader_OptionalParentItem__Const; // 0x2BC(0x8)
		unsigned char UnknownData13_6[0x4]; // 0x2C4(0x4) UNKNOWN PROPERTY
		TArray<FRigUnit_ModifyTransforms_PerItem> Deform_Wrist_FNC_1___Deform_Wrist_FNC_ModifyTransforms_ItemToModify__Const; // 0x2C8(0x10)
		float Deform_Wrist_FNC_1___Deform_Wrist_FNC_ModifyTransforms_WeightMinimum__Const; // 0x2D8(0x4)
		EControlRigModifyBoneMode Deform_Wrist_FNC_1___Deform_Wrist_FNC_ModifyTransforms_Mode__Const; // 0x2DC(0x1)
		unsigned char UnknownData14_6[0x3]; // 0x2DD(0x3) UNKNOWN PROPERTY
		FRigElementKey Deform_Wrist_FNC_1___Deform_Wrist_FNC_ParentConstraint_3_2_Child__Const; // 0x2E0(0x8)
		TArray<FConstraintParent> Deform_Wrist_FNC_1___Deform_Wrist_FNC_ParentConstraint_3_2_Parents__Const; // 0x2E8(0x10)
		FRigElementKey Deform_Wrist_FNC_1___Deform_Wrist_FNC_SphericalPoseReader_2_DriverItem__Const; // 0x2F8(0x8)
		FVector Deform_Wrist_FNC_1___Deform_Wrist_FNC_SphericalPoseReader_2_DriverAxis__Const; // 0x300(0x18)
		FVector Deform_Wrist_FNC_1___Deform_Wrist_FNC_SphericalPoseReader_2_RotationOffset__Const; // 0x318(0x18)
		FRigElementKey Deform_Wrist_FNC_1___Deform_Wrist_FNC_SphericalPoseReader_2_OptionalParentItem__Const; // 0x330(0x8)
		TArray<FRigUnit_ModifyTransforms_PerItem> Deform_Wrist_FNC_1___Deform_Wrist_FNC_ModifyTransforms_2_ItemToModify__Const; // 0x338(0x10)
		FRigElementKey Deform_Wrist_FNC_1___Deform_Wrist_FNC_ParentConstraint_3_1_Child__Const; // 0x348(0x8)
		FVector Deform_Wrist_FNC_1___Deform_Wrist_FNC_SphericalPoseReader_1_RotationOffset__Const; // 0x350(0x18)
		FRegionScaleFactors Deform_Wrist_FNC_1___Deform_Wrist_FNC_SphericalPoseReader_1_ActiveRegionScaleFactors__Const; // 0x368(0x10)
		float Deform_Wrist_FNC_1___Deform_Wrist_FNC_SphericalPoseReader_1_FalloffSize__Const; // 0x378(0x4)
		unsigned char UnknownData15_6[0x4]; // 0x37C(0x4) UNKNOWN PROPERTY
		TArray<FRigUnit_ModifyTransforms_PerItem> Deform_Wrist_FNC_1___Deform_Wrist_FNC_ModifyTransforms_1_ItemToModify__Const; // 0x380(0x10)
		FRigElementKey Deform_Wrist_FNC_1___Deform_Wrist_FNC_ParentConstraint_3_1_1_Child__Const; // 0x390(0x8)
		FVector Deform_Wrist_FNC_1___Deform_Wrist_FNC_SphericalPoseReader_1_1_RotationOffset__Const; // 0x398(0x18)
		TArray<FRigUnit_ModifyTransforms_PerItem> Deform_Wrist_FNC_1___Deform_Wrist_FNC_ModifyTransforms_1_1_ItemToModify__Const; // 0x3B0(0x10)
		FRigElementKey Deform_Knee_FNC_1___Deform_Knee_FNC_GetDeltaTransformFromRefPose_FNC_Item__Const; // 0x3C0(0x8)
		ERigVMTransformSpace GetDeltaTransformFromRefPose_FNC___GetDeltaTransformFromRefPose_FNC_GetTransform_Space__Const; // 0x3C8(0x1)
		bool GetDeltaTransformFromRefPose_FNC___GetDeltaTransformFromRefPose_FNC_GetTransform_bInitial__Const; // 0x3C9(0x1)
		bool GetDeltaTransformFromRefPose_FNC___GetDeltaTransformFromRefPose_FNC_GetTransform_1_bInitial__Const; // 0x3CA(0x1)
		unsigned char UnknownData16_6[0x1]; // 0x3CB(0x1) UNKNOWN PROPERTY
		FRigElementKey Deform_Knee_FNC_1___Deform_Knee_FNC_GetDeltaTransformFromRefPose_FNC_1_Item__Const; // 0x3CC(0x8)
		ERigVMTransformSpace GetDeltaTransformFromRefPose_FNC_1___GetDeltaTransformFromRefPose_FNC_GetTransform_Space__Const; // 0x3D4(0x1)
		bool GetDeltaTransformFromRefPose_FNC_1___GetDeltaTransformFromRefPose_FNC_GetTransform_bInitial__Const; // 0x3D5(0x1)
		bool GetDeltaTransformFromRefPose_FNC_1___GetDeltaTransformFromRefPose_FNC_GetTransform_1_bInitial__Const; // 0x3D6(0x1)
		unsigned char UnknownData17_6[0x1]; // 0x3D7(0x1) UNKNOWN PROPERTY
		FRigElementKey Deform_Knee_FNC_1___Deform_Knee_FNC_ParentConstraint_Child__Const; // 0x3D8(0x8)
		bool Deform_Knee_FNC_1___Deform_Knee_FNC_ParentConstraint_bMaintainOffset__Const; // 0x3E0(0x1)
		FTransformFilter Deform_Knee_FNC_1___Deform_Knee_FNC_ParentConstraint_Filter__Const; // 0x3E1(0x9)
		unsigned char UnknownData18_6[0x6]; // 0x3EA(0x6) UNKNOWN PROPERTY
		TArray<FConstraintParent> Deform_Knee_FNC_1___Deform_Knee_FNC_ParentConstraint_Parents__Const; // 0x3F0(0x10)
		FRigUnit_ParentConstraint_AdvancedSettings Deform_Knee_FNC_1___Deform_Knee_FNC_ParentConstraint_AdvancedSettings__Const; // 0x400(0x2)
		unsigned char UnknownData19_6[0x2]; // 0x402(0x2) UNKNOWN PROPERTY
		float Deform_Knee_FNC_1___Deform_Knee_FNC_ParentConstraint_Weight__Const; // 0x404(0x4)
		TArray<FRigUnit_ModifyTransforms_PerItem> Deform_Knee_FNC_1___Deform_Knee_FNC_ModifyTransforms_ItemToModify__Const; // 0x408(0x10)
		float Deform_Knee_FNC_1___Deform_Knee_FNC_MathFloatRemap_1_1_1_1_1_SourceMinimum__Const; // 0x418(0x4)
		float Deform_Knee_FNC_1___Deform_Knee_FNC_MathFloatRemap_1_1_1_1_1_SourceMaximum__Const; // 0x41C(0x4)
		float Deform_Knee_FNC_1___Deform_Knee_FNC_MathFloatRemap_1_1_1_1_1_TargetMinimum__Const; // 0x420(0x4)
		EControlRigModifyBoneMode Deform_Knee_FNC_1___Deform_Knee_FNC_ModifyTransforms_Mode__Const; // 0x424(0x1)
		unsigned char UnknownData20_6[0x3]; // 0x425(0x3) UNKNOWN PROPERTY
		FRigElementKey Deform_Knee_FNC_1___Deform_Knee_FNC_ParentConstraint_1_Child__Const; // 0x428(0x8)
		TArray<FConstraintParent> Deform_Knee_FNC_1___Deform_Knee_FNC_ParentConstraint_1_Parents__Const; // 0x430(0x10)
		TArray<FRigUnit_ModifyTransforms_PerItem> Deform_Knee_FNC_1___Deform_Knee_FNC_ModifyTransforms_1_ItemToModify__Const; // 0x440(0x10)
		FRigElementKey Deform_Knee_FNC_1___Deform_Knee_FNC_ParentConstraint_2_Child__Const; // 0x450(0x8)
		TArray<FConstraintParent> Deform_Knee_FNC_1___Deform_Knee_FNC_ParentConstraint_2_Parents__Const; // 0x458(0x10)
		TArray<FRigUnit_ModifyTransforms_PerItem> Deform_Knee_FNC_1___Deform_Knee_FNC_ModifyTransforms_2_ItemToModify__Const; // 0x468(0x10)
		FRigElementKey Deform_Knee_FNC_1___Deform_Knee_FNC_ParentConstraint_2_1_Child__Const; // 0x478(0x8)
		TArray<FConstraintParent> Deform_Knee_FNC_1___Deform_Knee_FNC_ParentConstraint_2_1_Parents__Const; // 0x480(0x10)
		TArray<FRigUnit_ModifyTransforms_PerItem> Deform_Knee_FNC_1___Deform_Knee_FNC_ModifyTransforms_2_1_ItemToModify__Const; // 0x490(0x10)
		FRigElementKey Deform_Pec_FNC_1___Deform_Pec_FNC_SetTransform_1_Item__Const; // 0x4A0(0x8)
		ERigVMTransformSpace Deform_Pec_FNC_1___Deform_Pec_FNC_SetTransform_1_Space__Const; // 0x4A8(0x1)
		bool Deform_Pec_FNC_1___Deform_Pec_FNC_SetTransform_1_bInitial__Const; // 0x4A9(0x1)
		unsigned char UnknownData21_6[0x6]; // 0x4AA(0x6) UNKNOWN PROPERTY
		FRigUnit_AimItem_Target Deform_Pec_FNC_1___Deform_Pec_FNC_AimBoneMath_1_Primary__Const; // 0x4B0(0x48)
		FRigUnit_AimItem_Target Deform_Pec_FNC_1___Deform_Pec_FNC_AimBoneMath_1_Secondary__Const; // 0x4F8(0x48)
		float Deform_Pec_FNC_1___Deform_Pec_FNC_AimBoneMath_1_Weight__Const; // 0x540(0x4)
		unsigned char UnknownData22_6[0xC]; // 0x544(0xC) UNKNOWN PROPERTY
		FRigUnit_AimBone_DebugSettings Deform_Pec_FNC_1___Deform_Pec_FNC_AimBoneMath_1_DebugSettings__Const; // 0x550(0x70)
		bool Deform_Pec_FNC_1___Deform_Pec_FNC_SetTransform_1_bPropagateToChildren__Const; // 0x5C0(0x1)
		unsigned char UnknownData23_6[0x3]; // 0x5C1(0x3) UNKNOWN PROPERTY
		FRigElementKey Deform_Pec_FNC_1___Deform_Pec_FNC_PositionConstraintLocalSpaceOffset_Child__Const; // 0x5C4(0x8)
		FFilterOptionPerAxis Deform_Pec_FNC_1___Deform_Pec_FNC_PositionConstraintLocalSpaceOffset_Filter__Const; // 0x5CC(0x3)
		unsigned char UnknownData24_6[0x1]; // 0x5CF(0x1) UNKNOWN PROPERTY
		TArray<FConstraintParent> Deform_Pec_FNC_1___Deform_Pec_FNC_PositionConstraintLocalSpaceOffset_Parents__Const; // 0x5D0(0x10)
		FRigElementKey Deform_Pec_FNC_1___Deform_Pec_FNC_GetDeltaTransformFromRefPose_FNC_Item__Const; // 0x5E0(0x8)
		TArray<FRigUnit_ModifyTransforms_PerItem> Deform_Pec_FNC_1___Deform_Pec_FNC_ModifyTransforms_ItemToModify__Const; // 0x5E8(0x10)
		float Deform_Pec_FNC_1___Deform_Pec_FNC_MathFloatRemap_1_SourceMinimum__Const; // 0x5F8(0x4)
		float Deform_Pec_FNC_1___Deform_Pec_FNC_MathFloatRemap_1_SourceMaximum__Const; // 0x5FC(0x4)
		EControlRigModifyBoneMode Deform_Pec_FNC_1___Deform_Pec_FNC_ModifyTransforms_Mode__Const; // 0x600(0x1)
		unsigned char UnknownData25_6[0x3]; // 0x601(0x3) UNKNOWN PROPERTY
		FRigElementKey Deform_Pec_FNC_1___Deform_Pec_FNC_SetTransform_1_1_Item__Const; // 0x604(0x8)
		unsigned char UnknownData26_6[0x4]; // 0x60C(0x4) UNKNOWN PROPERTY
		FRigUnit_AimItem_Target Deform_Pec_FNC_1___Deform_Pec_FNC_AimBoneMath_1_1_Primary__Const; // 0x610(0x48)
		FRigUnit_AimItem_Target Deform_Pec_FNC_1___Deform_Pec_FNC_AimBoneMath_1_1_Secondary__Const; // 0x658(0x48)
		FRigElementKey Deform_Pec_FNC_1___Deform_Pec_FNC_PositionConstraintLocalSpaceOffset_1_Child__Const; // 0x6A0(0x8)
		TArray<FConstraintParent> Deform_Pec_FNC_1___Deform_Pec_FNC_PositionConstraintLocalSpaceOffset_1_Parents__Const; // 0x6A8(0x10)
		FRigElementKey Deform_Pec_FNC_1___Deform_Pec_FNC_GetDeltaTransformFromRefPose_FNC_1_Item__Const; // 0x6B8(0x8)
		TArray<FRigUnit_ModifyTransforms_PerItem> Deform_Pec_FNC_1___Deform_Pec_FNC_ModifyTransforms_1_ItemToModify__Const; // 0x6C0(0x10)
		FRigElementKey Deform_Lat_FNC_1___Deform_Lat_FNC_SphericalPoseReader_DriverItem__Const; // 0x6D0(0x8)
		FVector Deform_Lat_FNC_1___Deform_Lat_FNC_SphericalPoseReader_DriverAxis__Const; // 0x6D8(0x18)
		FVector Deform_Lat_FNC_1___Deform_Lat_FNC_SphericalPoseReader_RotationOffset__Const; // 0x6F0(0x18)
		float Deform_Lat_FNC_1___Deform_Lat_FNC_SphericalPoseReader_ActiveRegionSize__Const; // 0x708(0x4)
		FRegionScaleFactors Deform_Lat_FNC_1___Deform_Lat_FNC_SphericalPoseReader_ActiveRegionScaleFactors__Const; // 0x70C(0x10)
		float Deform_Lat_FNC_1___Deform_Lat_FNC_SphericalPoseReader_FalloffSize__Const; // 0x71C(0x4)
		FRegionScaleFactors Deform_Lat_FNC_1___Deform_Lat_FNC_SphericalPoseReader_FalloffRegionScaleFactors__Const; // 0x720(0x10)
		bool Deform_Lat_FNC_1___Deform_Lat_FNC_SphericalPoseReader_FlipWidthScaling__Const; // 0x730(0x1)
		unsigned char UnknownData27_6[0x3]; // 0x731(0x3) UNKNOWN PROPERTY
		FRigElementKey Deform_Lat_FNC_1___Deform_Lat_FNC_SphericalPoseReader_OptionalParentItem__Const; // 0x734(0x8)
		unsigned char UnknownData28_6[0x4]; // 0x73C(0x4) UNKNOWN PROPERTY
		TArray<FRigUnit_ModifyTransforms_PerItem> Deform_Lat_FNC_1___Deform_Lat_FNC_ModifyTransforms_ItemToModify__Const; // 0x740(0x10)
		float Deform_Lat_FNC_1___Deform_Lat_FNC_ModifyTransforms_WeightMinimum__Const; // 0x750(0x4)
		float Deform_Lat_FNC_1___Deform_Lat_FNC_ModifyTransforms_WeightMaximum__Const; // 0x754(0x4)
		EControlRigModifyBoneMode Deform_Lat_FNC_1___Deform_Lat_FNC_ModifyTransforms_Mode__Const; // 0x758(0x1)
		unsigned char UnknownData29_6[0x3]; // 0x759(0x3) UNKNOWN PROPERTY
		FRigElementKey Deform_Lat_FNC_1___Deform_Lat_FNC_SphericalPoseReader_1_DriverItem__Const; // 0x75C(0x8)
		unsigned char UnknownData30_6[0x4]; // 0x764(0x4) UNKNOWN PROPERTY
		FVector Deform_Lat_FNC_1___Deform_Lat_FNC_SphericalPoseReader_1_DriverAxis__Const; // 0x768(0x18)
		FVector Deform_Lat_FNC_1___Deform_Lat_FNC_SphericalPoseReader_1_RotationOffset__Const; // 0x780(0x18)
		bool Deform_Lat_FNC_1___Deform_Lat_FNC_SphericalPoseReader_1_FlipHeightScaling__Const; // 0x798(0x1)
		unsigned char UnknownData31_6[0x7]; // 0x799(0x7) UNKNOWN PROPERTY
		TArray<FRigUnit_ModifyTransforms_PerItem> Deform_Lat_FNC_1___Deform_Lat_FNC_ModifyTransforms_1_ItemToModify__Const; // 0x7A0(0x10)
		FRigElementKey Deform_Elbow_FNC_1___Deform_Elbow_FNC_GetDeltaTransformFromRefPose_FNC_Item__Const; // 0x7B0(0x8)
		FRigElementKey Deform_Elbow_FNC_1___Deform_Elbow_FNC_GetDeltaTransformFromRefPose_FNC_1_Item__Const; // 0x7B8(0x8)
		FRigElementKey Deform_Elbow_FNC_1___Deform_Elbow_FNC_ParentConstraint_Child__Const; // 0x7C0(0x8)
		bool Deform_Elbow_FNC_1___Deform_Elbow_FNC_ParentConstraint_bMaintainOffset__Const; // 0x7C8(0x1)
		FTransformFilter Deform_Elbow_FNC_1___Deform_Elbow_FNC_ParentConstraint_Filter__Const; // 0x7C9(0x9)
		unsigned char UnknownData32_6[0x6]; // 0x7D2(0x6) UNKNOWN PROPERTY
		TArray<FConstraintParent> Deform_Elbow_FNC_1___Deform_Elbow_FNC_ParentConstraint_Parents__Const; // 0x7D8(0x10)
		FRigUnit_ParentConstraint_AdvancedSettings Deform_Elbow_FNC_1___Deform_Elbow_FNC_ParentConstraint_AdvancedSettings__Const; // 0x7E8(0x2)
		unsigned char UnknownData33_6[0x2]; // 0x7EA(0x2) UNKNOWN PROPERTY
		float Deform_Elbow_FNC_1___Deform_Elbow_FNC_ParentConstraint_Weight__Const; // 0x7EC(0x4)
		TArray<FRigUnit_ModifyTransforms_PerItem> Deform_Elbow_FNC_1___Deform_Elbow_FNC_ModifyTransforms_ItemToModify__Const; // 0x7F0(0x10)
		float Deform_Elbow_FNC_1___Deform_Elbow_FNC_MathFloatRemap_1_1_1_2_SourceMinimum__Const; // 0x800(0x4)
		float Deform_Elbow_FNC_1___Deform_Elbow_FNC_MathFloatRemap_1_1_1_2_SourceMaximum__Const; // 0x804(0x4)
		float Deform_Elbow_FNC_1___Deform_Elbow_FNC_MathFloatRemap_1_1_1_2_TargetMinimum__Const; // 0x808(0x4)
		EControlRigModifyBoneMode Deform_Elbow_FNC_1___Deform_Elbow_FNC_ModifyTransforms_Mode__Const; // 0x80C(0x1)
		unsigned char UnknownData34_6[0x3]; // 0x80D(0x3) UNKNOWN PROPERTY
		FRigElementKey Deform_Elbow_FNC_1___Deform_Elbow_FNC_ParentConstraint_1_Child__Const; // 0x810(0x8)
		TArray<FConstraintParent> Deform_Elbow_FNC_1___Deform_Elbow_FNC_ParentConstraint_1_Parents__Const; // 0x818(0x10)
		TArray<FRigUnit_ModifyTransforms_PerItem> Deform_Elbow_FNC_1___Deform_Elbow_FNC_ModifyTransforms_1_ItemToModify__Const; // 0x828(0x10)
		FRigElementKey Deform_Elbow_FNC_1___Deform_Elbow_FNC_ParentConstraint_2_Child__Const; // 0x838(0x8)
		TArray<FConstraintParent> Deform_Elbow_FNC_1___Deform_Elbow_FNC_ParentConstraint_2_Parents__Const; // 0x840(0x10)
		TArray<FRigUnit_ModifyTransforms_PerItem> Deform_Elbow_FNC_1___Deform_Elbow_FNC_ModifyTransforms_2_ItemToModify__Const; // 0x850(0x10)
		FRigElementKey Deform_Elbow_FNC_1___Deform_Elbow_FNC_ParentConstraint_2_1_Child__Const; // 0x860(0x8)
		TArray<FConstraintParent> Deform_Elbow_FNC_1___Deform_Elbow_FNC_ParentConstraint_2_1_Parents__Const; // 0x868(0x10)
		TArray<FRigUnit_ModifyTransforms_PerItem> Deform_Elbow_FNC_1___Deform_Elbow_FNC_ModifyTransforms_2_1_ItemToModify__Const; // 0x878(0x10)
		TArray<FRigUnit_ModifyTransforms_PerItem> Deform_Elbow_FNC_1___Deform_Elbow_FNC_ModifyTransforms_2_1_1_ItemToModify__Const; // 0x888(0x10)
		TArray<FRigUnit_ModifyTransforms_PerItem> Deform_Elbow_FNC_1___Deform_Elbow_FNC_ModifyTransforms_2_1_1_1_ItemToModify__Const; // 0x898(0x10)
		FRigElementKey Deform_GroinGlue_FNC_1___Deform_GroinGlue_FNC_SphericalPoseReader_DriverItem__Const; // 0x8A8(0x8)
		FVector Deform_GroinGlue_FNC_1___Deform_GroinGlue_FNC_SphericalPoseReader_DriverAxis__Const; // 0x8B0(0x18)
		FVector Deform_GroinGlue_FNC_1___Deform_GroinGlue_FNC_SphericalPoseReader_RotationOffset__Const; // 0x8C8(0x18)
		float Deform_GroinGlue_FNC_1___Deform_GroinGlue_FNC_SphericalPoseReader_ActiveRegionSize__Const; // 0x8E0(0x4)
		FRegionScaleFactors Deform_GroinGlue_FNC_1___Deform_GroinGlue_FNC_SphericalPoseReader_ActiveRegionScaleFactors__Const; // 0x8E4(0x10)
		float Deform_GroinGlue_FNC_1___Deform_GroinGlue_FNC_SphericalPoseReader_FalloffSize__Const; // 0x8F4(0x4)
		FRegionScaleFactors Deform_GroinGlue_FNC_1___Deform_GroinGlue_FNC_SphericalPoseReader_FalloffRegionScaleFactors__Const; // 0x8F8(0x10)
		bool Deform_GroinGlue_FNC_1___Deform_GroinGlue_FNC_SphericalPoseReader_FlipWidthScaling__Const; // 0x908(0x1)
		unsigned char UnknownData35_6[0x3]; // 0x909(0x3) UNKNOWN PROPERTY
		FRigElementKey Deform_GroinGlue_FNC_1___Deform_GroinGlue_FNC_SphericalPoseReader_OptionalParentItem__Const; // 0x90C(0x8)
		FRigElementKey Deform_GroinGlue_FNC_1___Deform_GroinGlue_FNC_SphericalPoseReader_1_DriverItem__Const; // 0x914(0x8)
		unsigned char UnknownData36_6[0x4]; // 0x91C(0x4) UNKNOWN PROPERTY
		FVector Deform_GroinGlue_FNC_1___Deform_GroinGlue_FNC_SphericalPoseReader_1_DriverAxis__Const; // 0x920(0x18)
		FVector Deform_GroinGlue_FNC_1___Deform_GroinGlue_FNC_SphericalPoseReader_1_RotationOffset__Const; // 0x938(0x18)
		bool Deform_GroinGlue_FNC_1___Deform_GroinGlue_FNC_SphericalPoseReader_1_FlipWidthScaling__Const; // 0x950(0x1)
		unsigned char UnknownData37_6[0x3]; // 0x951(0x3) UNKNOWN PROPERTY
		FRigElementKey Deform_GroinGlue_FNC_1___Deform_GroinGlue_FNC_ParentConstraint_Child__Const; // 0x954(0x8)
		FTransformFilter Deform_GroinGlue_FNC_1___Deform_GroinGlue_FNC_ParentConstraint_Filter__Const; // 0x95C(0x9)
		unsigned char UnknownData38_6[0x3]; // 0x965(0x3) UNKNOWN PROPERTY
		TArray<FConstraintParent> Deform_GroinGlue_FNC_1___Deform_GroinGlue_FNC_ParentConstraint_Parents__Const; // 0x968(0x10)
		FRigUnit_ParentConstraint_AdvancedSettings Deform_GroinGlue_FNC_1___Deform_GroinGlue_FNC_ParentConstraint_AdvancedSettings__Const; // 0x978(0x2)
		unsigned char UnknownData39_6[0x2]; // 0x97A(0x2) UNKNOWN PROPERTY
		float Deform_GroinGlue_FNC_1___Deform_GroinGlue_FNC_ParentConstraint_Weight__Const; // 0x97C(0x4)
		TArray<FRigUnit_ModifyTransforms_PerItem> Deform_GroinGlue_FNC_1___Deform_GroinGlue_FNC_ModifyTransforms_ItemToModify__Const; // 0x980(0x10)
		float Deform_GroinGlue_FNC_1___Deform_GroinGlue_FNC_ModifyTransforms_WeightMinimum__Const; // 0x990(0x4)
		EControlRigModifyBoneMode Deform_GroinGlue_FNC_1___Deform_GroinGlue_FNC_ModifyTransforms_Mode__Const; // 0x994(0x1)
		unsigned char UnknownData40_6[0x3]; // 0x995(0x3) UNKNOWN PROPERTY
		FRigElementKey Deform_GroinGlue_FNC_1___Deform_GroinGlue_FNC_ParentConstraint_2_Child__Const; // 0x998(0x8)
		TArray<FConstraintParent> Deform_GroinGlue_FNC_1___Deform_GroinGlue_FNC_ParentConstraint_2_Parents__Const; // 0x9A0(0x10)
		TArray<FRigUnit_ModifyTransforms_PerItem> Deform_GroinGlue_FNC_1___Deform_GroinGlue_FNC_ModifyTransforms_2_ItemToModify__Const; // 0x9B0(0x10)
		FRigElementKey Deform_GroinGlue_FNC_1___Deform_GroinGlue_FNC_ParentConstraint_1_Child__Const; // 0x9C0(0x8)
		TArray<FConstraintParent> Deform_GroinGlue_FNC_1___Deform_GroinGlue_FNC_ParentConstraint_1_Parents__Const; // 0x9C8(0x10)
		TArray<FRigUnit_ModifyTransforms_PerItem> Deform_GroinGlue_FNC_1___Deform_GroinGlue_FNC_ModifyTransforms_1_ItemToModify__Const; // 0x9D8(0x10)
		FRigElementKey Deform_GroinGlue_FNC_1___Deform_GroinGlue_FNC_ParentConstraint_1_1_Child__Const; // 0x9E8(0x8)
		TArray<FConstraintParent> Deform_GroinGlue_FNC_1___Deform_GroinGlue_FNC_ParentConstraint_1_1_Parents__Const; // 0x9F0(0x10)
		TArray<FRigUnit_ModifyTransforms_PerItem> Deform_GroinGlue_FNC_1___Deform_GroinGlue_FNC_ModifyTransforms_1_1_ItemToModify__Const; // 0xA00(0x10)
		FRigElementKey RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_DriverItem__Const; // 0xA10(0x8)
		FVector RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_DriverAxis__Const; // 0xA18(0x18)
		FVector RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_RotationOffset__Const; // 0xA30(0x18)
		float RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_ActiveRegionSize__Const; // 0xA48(0x4)
		FRegionScaleFactors RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_ActiveRegionScaleFactors__Const; // 0xA4C(0x10)
		float RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_FalloffSize__Const; // 0xA5C(0x4)
		FRegionScaleFactors RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_FalloffRegionScaleFactors__Const; // 0xA60(0x10)
		FRigElementKey RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_OptionalParentItem__Const; // 0xA70(0x8)
		FSphericalPoseReaderDebugSettings RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_Debug__Const; // 0xA78(0x10)
		TArray<FRigUnit_ModifyTransforms_PerItem> RigVMModel___ModifyTransforms_1_1_1_1_1_1_ItemToModify__Const; // 0xA88(0x10)
		float RigVMModel___ModifyTransforms_1_1_1_1_1_1_WeightMinimum__Const; // 0xA98(0x4)
		float RigVMModel___ModifyTransforms_1_1_1_1_1_1_WeightMaximum__Const; // 0xA9C(0x4)
		EControlRigModifyBoneMode RigVMModel___ModifyTransforms_1_1_1_1_1_1_Mode__Const; // 0xAA0(0x1)
		unsigned char UnknownData41_6[0x3]; // 0xAA1(0x3) UNKNOWN PROPERTY
		FRigElementKey RigVMModel___SphericalPoseReader_2_2_1_1_2_3_DriverItem__Const; // 0xAA4(0x8)
		unsigned char UnknownData42_6[0x4]; // 0xAAC(0x4) UNKNOWN PROPERTY
		FVector RigVMModel___SphericalPoseReader_2_2_1_1_2_3_RotationOffset__Const; // 0xAB0(0x18)
		float RigVMModel___SphericalPoseReader_2_2_1_1_2_3_ActiveRegionSize__Const; // 0xAC8(0x4)
		float RigVMModel___SphericalPoseReader_2_2_1_1_2_3_FalloffSize__Const; // 0xACC(0x4)
		FRegionScaleFactors RigVMModel___SphericalPoseReader_2_2_1_1_2_3_FalloffRegionScaleFactors__Const; // 0xAD0(0x10)
		FSphericalPoseReaderDebugSettings RigVMModel___SphericalPoseReader_2_2_1_1_2_3_Debug__Const; // 0xAE0(0x10)
		FRigElementKey RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_1_DriverItem__Const; // 0xAF0(0x8)
		FVector RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_1_DriverAxis__Const; // 0xAF8(0x18)
		FVector RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_1_RotationOffset__Const; // 0xB10(0x18)
		FRegionScaleFactors RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_1_ActiveRegionScaleFactors__Const; // 0xB28(0x10)
		FRegionScaleFactors RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_1_FalloffRegionScaleFactors__Const; // 0xB38(0x10)
		TArray<FRigUnit_ModifyTransforms_PerItem> RigVMModel___ModifyTransforms_1_1_1_1_1_1_1_1_1_ItemToModify__Const; // 0xB48(0x10)
		TArray<FRigUnit_ModifyTransforms_PerItem> RigVMModel___ModifyTransforms_1_1_1_1_1_1_1_ItemToModify__Const; // 0xB58(0x10)
		FRigElementKey RigVMModel___SphericalPoseReader_2_2_1_1_2_2_DriverItem__Const; // 0xB68(0x8)
		FVector RigVMModel___SphericalPoseReader_2_2_1_1_2_2_RotationOffset__Const; // 0xB70(0x18)
		float RigVMModel___SphericalPoseReader_2_2_1_1_2_2_ActiveRegionSize__Const; // 0xB88(0x4)
		unsigned char UnknownData43_6[0x4]; // 0xB8C(0x4) UNKNOWN PROPERTY
		TArray<FRigUnit_ModifyTransforms_PerItem> RigVMModel___ModifyTransforms_1_1_1_1_1_ItemToModify__Const; // 0xB90(0x10)
		FVector RigVMModel___SphericalPoseReader_2_2_1_1_2_1_1_RotationOffset__Const; // 0xBA0(0x18)
		FRegionScaleFactors RigVMModel___SphericalPoseReader_2_2_1_1_2_1_1_ActiveRegionScaleFactors__Const; // 0xBB8(0x10)
		float RigVMModel___SphericalPoseReader_2_2_1_1_2_1_1_FalloffSize__Const; // 0xBC8(0x4)
		FRegionScaleFactors RigVMModel___SphericalPoseReader_2_2_1_1_2_1_1_FalloffRegionScaleFactors__Const; // 0xBCC(0x10)
		unsigned char UnknownData44_6[0x4]; // 0xBDC(0x4) UNKNOWN PROPERTY
		TArray<FRigUnit_ModifyTransforms_PerItem> RigVMModel___ModifyTransforms_1_1_1_1_1_1_1_1_ItemToModify__Const; // 0xBE0(0x10)
		double RigVMModel___Interpolate_B__Const; // 0xBF0(0x8)
		double RigVMModel___Interpolate_T__Const; // 0xBF8(0x8)
		FVector RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_1_1_RotationOffset__Const; // 0xC00(0x18)
		FRegionScaleFactors RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_1_1_FalloffRegionScaleFactors__Const; // 0xC18(0x10)
		TArray<FRigUnit_ModifyTransforms_PerItem> RigVMModel___ModifyTransforms_1_1_1_1_1_2_ItemToModify__Const; // 0xC28(0x10)
		FRigElementKey RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_1_1_1_DriverItem__Const; // 0xC38(0x8)
		FVector RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_1_1_1_RotationOffset__Const; // 0xC40(0x18)
		FRegionScaleFactors RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_1_1_1_ActiveRegionScaleFactors__Const; // 0xC58(0x10)
		float RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_1_1_1_FalloffSize__Const; // 0xC68(0x4)
		FRegionScaleFactors RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_1_1_1_FalloffRegionScaleFactors__Const; // 0xC6C(0x10)
		unsigned char UnknownData45_6[0x4]; // 0xC7C(0x4) UNKNOWN PROPERTY
		TArray<FRigUnit_ModifyTransforms_PerItem> RigVMModel___ModifyTransforms_1_1_1_1_1_2_1_1_ItemToModify__Const; // 0xC80(0x10)
		FRigElementKey RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_1_1_1_1_DriverItem__Const; // 0xC90(0x8)
		FVector RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_1_1_1_1_RotationOffset__Const; // 0xC98(0x18)
		FRegionScaleFactors RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_1_1_1_1_ActiveRegionScaleFactors__Const; // 0xCB0(0x10)
		FRegionScaleFactors RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_1_1_1_1_FalloffRegionScaleFactors__Const; // 0xCC0(0x10)
		TArray<FRigUnit_ModifyTransforms_PerItem> RigVMModel___ModifyTransforms_1_1_1_1_1_2_1_ItemToModify__Const; // 0xCD0(0x10)
	};


	// Struct /Engine/Transient.PropertyBag_a6a3e5fcac73f2ff
	// Size: 0x34C (0x34C - 0x0)
	struct FPropertyBag_a6a3e5fcac73f2ff	
	{
	public:
		float RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_OutputParam; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TArray<FSphericalRegion> RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_InnerRegion; // 0x8(0x10)
		TArray<FSphericalRegion> RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_OuterRegion; // 0x18(0x10)
		TArray<FVector> RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_DriverNormal; // 0x28(0x10)
		TArray<FVector> RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_Driver2D; // 0x38(0x10)
		TArray<FCachedRigElement> RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_DriverCache; // 0x48(0x10)
		TArray<FCachedRigElement> RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_OptionalParentCache; // 0x58(0x10)
		TArray<FTransform> RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_LocalDriverTransformInit; // 0x68(0x10)
		TArray<FVector> RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_CachedRotationOffset; // 0x78(0x10)
		TArray<bool> RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_bCachedInitTransforms; // 0x88(0x10)
		TArray<FRigUnit_ModifyTransforms_WorkData> RigVMModel___ModifyTransforms_1_1_1_1_1_WorkData; // 0x98(0x10)
		float RigVMModel___SphericalPoseReader_2_2_1_1_2_2_OutputParam; // 0xA8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xAC(0x4) UNKNOWN PROPERTY
		TArray<FSphericalRegion> RigVMModel___SphericalPoseReader_2_2_1_1_2_2_InnerRegion; // 0xB0(0x10)
		TArray<FSphericalRegion> RigVMModel___SphericalPoseReader_2_2_1_1_2_2_OuterRegion; // 0xC0(0x10)
		TArray<FVector> RigVMModel___SphericalPoseReader_2_2_1_1_2_2_DriverNormal; // 0xD0(0x10)
		TArray<FVector> RigVMModel___SphericalPoseReader_2_2_1_1_2_2_Driver2D; // 0xE0(0x10)
		TArray<FCachedRigElement> RigVMModel___SphericalPoseReader_2_2_1_1_2_2_DriverCache; // 0xF0(0x10)
		TArray<FCachedRigElement> RigVMModel___SphericalPoseReader_2_2_1_1_2_2_OptionalParentCache; // 0x100(0x10)
		TArray<FTransform> RigVMModel___SphericalPoseReader_2_2_1_1_2_2_LocalDriverTransformInit; // 0x110(0x10)
		TArray<FVector> RigVMModel___SphericalPoseReader_2_2_1_1_2_2_CachedRotationOffset; // 0x120(0x10)
		TArray<bool> RigVMModel___SphericalPoseReader_2_2_1_1_2_2_bCachedInitTransforms; // 0x130(0x10)
		TArray<FRigUnit_ModifyTransforms_WorkData> RigVMModel___ModifyTransforms_1_1_1_1_1_1_WorkData; // 0x140(0x10)
		float RigVMModel___SphericalPoseReader_2_2_1_1_2_1_1_OutputParam; // 0x150(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x154(0x4) UNKNOWN PROPERTY
		TArray<FSphericalRegion> RigVMModel___SphericalPoseReader_2_2_1_1_2_1_1_InnerRegion; // 0x158(0x10)
		TArray<FSphericalRegion> RigVMModel___SphericalPoseReader_2_2_1_1_2_1_1_OuterRegion; // 0x168(0x10)
		TArray<FVector> RigVMModel___SphericalPoseReader_2_2_1_1_2_1_1_DriverNormal; // 0x178(0x10)
		TArray<FVector> RigVMModel___SphericalPoseReader_2_2_1_1_2_1_1_Driver2D; // 0x188(0x10)
		TArray<FCachedRigElement> RigVMModel___SphericalPoseReader_2_2_1_1_2_1_1_DriverCache; // 0x198(0x10)
		TArray<FCachedRigElement> RigVMModel___SphericalPoseReader_2_2_1_1_2_1_1_OptionalParentCache; // 0x1A8(0x10)
		TArray<FTransform> RigVMModel___SphericalPoseReader_2_2_1_1_2_1_1_LocalDriverTransformInit; // 0x1B8(0x10)
		TArray<FVector> RigVMModel___SphericalPoseReader_2_2_1_1_2_1_1_CachedRotationOffset; // 0x1C8(0x10)
		TArray<bool> RigVMModel___SphericalPoseReader_2_2_1_1_2_1_1_bCachedInitTransforms; // 0x1D8(0x10)
		TArray<FRigUnit_ModifyTransforms_WorkData> RigVMModel___ModifyTransforms_1_1_1_1_1_1_1_WorkData; // 0x1E8(0x10)
		float RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_1_OutputParam; // 0x1F8(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x1FC(0x4) UNKNOWN PROPERTY
		TArray<FSphericalRegion> RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_1_InnerRegion; // 0x200(0x10)
		TArray<FSphericalRegion> RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_1_OuterRegion; // 0x210(0x10)
		TArray<FVector> RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_1_DriverNormal; // 0x220(0x10)
		TArray<FVector> RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_1_Driver2D; // 0x230(0x10)
		TArray<FCachedRigElement> RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_1_DriverCache; // 0x240(0x10)
		TArray<FCachedRigElement> RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_1_OptionalParentCache; // 0x250(0x10)
		TArray<FTransform> RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_1_LocalDriverTransformInit; // 0x260(0x10)
		TArray<FVector> RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_1_CachedRotationOffset; // 0x270(0x10)
		TArray<bool> RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_1_bCachedInitTransforms; // 0x280(0x10)
		TArray<FRigUnit_ModifyTransforms_WorkData> RigVMModel___ModifyTransforms_1_1_1_1_1_1_1_1_WorkData; // 0x290(0x10)
		float RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_1_2_OutputParam; // 0x2A0(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x2A4(0x4) UNKNOWN PROPERTY
		TArray<FSphericalRegion> RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_1_2_InnerRegion; // 0x2A8(0x10)
		TArray<FSphericalRegion> RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_1_2_OuterRegion; // 0x2B8(0x10)
		TArray<FVector> RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_1_2_DriverNormal; // 0x2C8(0x10)
		TArray<FVector> RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_1_2_Driver2D; // 0x2D8(0x10)
		TArray<FCachedRigElement> RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_1_2_DriverCache; // 0x2E8(0x10)
		TArray<FCachedRigElement> RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_1_2_OptionalParentCache; // 0x2F8(0x10)
		TArray<FTransform> RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_1_2_LocalDriverTransformInit; // 0x308(0x10)
		TArray<FVector> RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_1_2_CachedRotationOffset; // 0x318(0x10)
		TArray<bool> RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_1_2_bCachedInitTransforms; // 0x328(0x10)
		TArray<FRigUnit_ModifyTransforms_WorkData> RigVMModel___ModifyTransforms_1_1_1_1_1_1_1_1_1_WorkData; // 0x338(0x10)
		FName RigVMModel___RigVMFunction_ControlFlowBranch_4_1_1_BlockToRun; // 0x348(0x4)
	};


	// Struct /Engine/Transient.PropertyBag_c3f04432465980fc
	// Size: 0x1E0 (0x1E0 - 0x0)
	struct FPropertyBag_c3f04432465980fc	
	{
	public:
		FRigElementKey RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_DriverItem__Const; // 0x0(0x8)
		FVector RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_DriverAxis__Const; // 0x8(0x18)
		FVector RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_RotationOffset__Const; // 0x20(0x18)
		float RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_ActiveRegionSize__Const; // 0x38(0x4)
		FRegionScaleFactors RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_ActiveRegionScaleFactors__Const; // 0x3C(0x10)
		float RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_FalloffSize__Const; // 0x4C(0x4)
		FRegionScaleFactors RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_FalloffRegionScaleFactors__Const; // 0x50(0x10)
		bool RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_FlipWidthScaling__Const; // 0x60(0x1)
		bool RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_FlipHeightScaling__Const; // 0x61(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x62(0x2) UNKNOWN PROPERTY
		FRigElementKey RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_OptionalParentItem__Const; // 0x64(0x8)
		FSphericalPoseReaderDebugSettings RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_Debug__Const; // 0x6C(0x10)
		unsigned char UnknownData01_6[0x4]; // 0x7C(0x4) UNKNOWN PROPERTY
		TArray<FRigUnit_ModifyTransforms_PerItem> RigVMModel___ModifyTransforms_1_1_1_1_1_ItemToModify__Const; // 0x80(0x10)
		float RigVMModel___ModifyTransforms_1_1_1_1_1_WeightMinimum__Const; // 0x90(0x4)
		float RigVMModel___ModifyTransforms_1_1_1_1_1_WeightMaximum__Const; // 0x94(0x4)
		EControlRigModifyBoneMode RigVMModel___ModifyTransforms_1_1_1_1_1_Mode__Const; // 0x98(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x99(0x3) UNKNOWN PROPERTY
		FRigElementKey RigVMModel___SphericalPoseReader_2_2_1_1_2_2_DriverItem__Const; // 0x9C(0x8)
		unsigned char UnknownData03_6[0x4]; // 0xA4(0x4) UNKNOWN PROPERTY
		FVector RigVMModel___SphericalPoseReader_2_2_1_1_2_2_DriverAxis__Const; // 0xA8(0x18)
		FVector RigVMModel___SphericalPoseReader_2_2_1_1_2_2_RotationOffset__Const; // 0xC0(0x18)
		float RigVMModel___SphericalPoseReader_2_2_1_1_2_2_ActiveRegionSize__Const; // 0xD8(0x4)
		FRegionScaleFactors RigVMModel___SphericalPoseReader_2_2_1_1_2_2_ActiveRegionScaleFactors__Const; // 0xDC(0x10)
		float RigVMModel___SphericalPoseReader_2_2_1_1_2_2_FalloffSize__Const; // 0xEC(0x4)
		TArray<FRigUnit_ModifyTransforms_PerItem> RigVMModel___ModifyTransforms_1_1_1_1_1_1_ItemToModify__Const; // 0xF0(0x10)
		FRigElementKey RigVMModel___SphericalPoseReader_2_2_1_1_2_1_1_DriverItem__Const; // 0x100(0x8)
		FVector RigVMModel___SphericalPoseReader_2_2_1_1_2_1_1_RotationOffset__Const; // 0x108(0x18)
		FRegionScaleFactors RigVMModel___SphericalPoseReader_2_2_1_1_2_1_1_ActiveRegionScaleFactors__Const; // 0x120(0x10)
		float RigVMModel___SphericalPoseReader_2_2_1_1_2_1_1_FalloffSize__Const; // 0x130(0x4)
		FRegionScaleFactors RigVMModel___SphericalPoseReader_2_2_1_1_2_1_1_FalloffRegionScaleFactors__Const; // 0x134(0x10)
		unsigned char UnknownData04_6[0x4]; // 0x144(0x4) UNKNOWN PROPERTY
		TArray<FRigUnit_ModifyTransforms_PerItem> RigVMModel___ModifyTransforms_1_1_1_1_1_1_1_ItemToModify__Const; // 0x148(0x10)
		FRigElementKey RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_1_DriverItem__Const; // 0x158(0x8)
		FVector RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_1_RotationOffset__Const; // 0x160(0x18)
		FRegionScaleFactors RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_1_ActiveRegionScaleFactors__Const; // 0x178(0x10)
		float RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_1_FalloffSize__Const; // 0x188(0x4)
		FRegionScaleFactors RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_1_FalloffRegionScaleFactors__Const; // 0x18C(0x10)
		unsigned char UnknownData05_6[0x4]; // 0x19C(0x4) UNKNOWN PROPERTY
		TArray<FRigUnit_ModifyTransforms_PerItem> RigVMModel___ModifyTransforms_1_1_1_1_1_1_1_1_ItemToModify__Const; // 0x1A0(0x10)
		FRigElementKey RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_1_2_DriverItem__Const; // 0x1B0(0x8)
		FVector RigVMModel___SphericalPoseReader_2_2_1_1_2_2_1_1_2_RotationOffset__Const; // 0x1B8(0x18)
		TArray<FRigUnit_ModifyTransforms_PerItem> RigVMModel___ModifyTransforms_1_1_1_1_1_1_1_1_1_ItemToModify__Const; // 0x1D0(0x10)
	};


	// Struct /Engine/Transient.PropertyBag_a97acaf820515e5a
	// Size: 0x6B0 (0x6B0 - 0x0)
	struct FPropertyBag_a97acaf820515e5a	
	{
	public:
		float Brow_Mapping_FNC___Brow_Mapping_FNC_GetCurveValue_Value; // 0x0(0x4)
		bool Brow_Mapping_FNC___Brow_Mapping_FNC_GetCurveValue_Valid; // 0x4(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
		TArray<FCachedRigElement> Brow_Mapping_FNC___Brow_Mapping_FNC_GetCurveValue_CachedCurveIndex; // 0x8(0x10)
		double LocalVariable__Brow_Mapping_FNC_glabella_up_val; // 0x18(0x8)
		float Brow_Mapping_FNC___Brow_Mapping_FNC_GetCurveValue_1_Value; // 0x20(0x4)
		bool Brow_Mapping_FNC___Brow_Mapping_FNC_GetCurveValue_1_Valid; // 0x24(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x25(0x3) UNKNOWN PROPERTY
		TArray<FCachedRigElement> Brow_Mapping_FNC___Brow_Mapping_FNC_GetCurveValue_1_CachedCurveIndex; // 0x28(0x10)
		double LocalVariable__Brow_Mapping_FNC_glabella_dn_val; // 0x38(0x8)
		float Brow_Mapping_FNC___Brow_Mapping_FNC_GetCurveValue_1_1_Value; // 0x40(0x4)
		bool Brow_Mapping_FNC___Brow_Mapping_FNC_GetCurveValue_1_1_Valid; // 0x44(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x45(0x3) UNKNOWN PROPERTY
		TArray<FCachedRigElement> Brow_Mapping_FNC___Brow_Mapping_FNC_GetCurveValue_1_1_CachedCurveIndex; // 0x48(0x10)
		double LocalVariable__Brow_Mapping_FNC_l_brow_up_val; // 0x58(0x8)
		float Brow_Mapping_FNC___Brow_Mapping_FNC_GetCurveValue_1_1_1_Value; // 0x60(0x4)
		bool Brow_Mapping_FNC___Brow_Mapping_FNC_GetCurveValue_1_1_1_Valid; // 0x64(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x65(0x3) UNKNOWN PROPERTY
		TArray<FCachedRigElement> Brow_Mapping_FNC___Brow_Mapping_FNC_GetCurveValue_1_1_1_CachedCurveIndex; // 0x68(0x10)
		double LocalVariable__Brow_Mapping_FNC_l_brow_dn_val; // 0x78(0x8)
		float Brow_Mapping_FNC___Brow_Mapping_FNC_GetCurveValue_1_1_2_Value; // 0x80(0x4)
		bool Brow_Mapping_FNC___Brow_Mapping_FNC_GetCurveValue_1_1_2_Valid; // 0x84(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x85(0x3) UNKNOWN PROPERTY
		TArray<FCachedRigElement> Brow_Mapping_FNC___Brow_Mapping_FNC_GetCurveValue_1_1_2_CachedCurveIndex; // 0x88(0x10)
		double LocalVariable__Brow_Mapping_FNC_r_brow_up_val; // 0x98(0x8)
		float Brow_Mapping_FNC___Brow_Mapping_FNC_GetCurveValue_1_1_1_1_Value; // 0xA0(0x4)
		bool Brow_Mapping_FNC___Brow_Mapping_FNC_GetCurveValue_1_1_1_1_Valid; // 0xA4(0x1)
		unsigned char UnknownData05_6[0x3]; // 0xA5(0x3) UNKNOWN PROPERTY
		TArray<FCachedRigElement> Brow_Mapping_FNC___Brow_Mapping_FNC_GetCurveValue_1_1_1_1_CachedCurveIndex; // 0xA8(0x10)
		double LocalVariable__Brow_Mapping_FNC_r_brow_dn_val; // 0xB8(0x8)
		bool Brow_Mapping_FNC___Brow_Mapping_FNC_GreaterEqual_1_Result; // 0xC0(0x1)
		bool Brow_Mapping_FNC___Brow_Mapping_FNC_GreaterEqual_Result; // 0xC1(0x1)
		unsigned char UnknownData06_6[0x2]; // 0xC2(0x2) UNKNOWN PROPERTY
		FName Brow_Mapping_FNC___Brow_Mapping_FNC_RigVMFunction_ControlFlowBranch_BlockToRun; // 0xC4(0x4)
		FName Brow_Mapping_FNC___Brow_Mapping_FNC_RigVMFunction_ControlFlowBranch_1_BlockToRun; // 0xC8(0x4)
		bool Brow_Mapping_FNC___Brow_Mapping_FNC_GreaterEqual_1_1_Result; // 0xCC(0x1)
		bool Brow_Mapping_FNC___Brow_Mapping_FNC_GreaterEqual_1_1_1_Result; // 0xCD(0x1)
		bool Brow_Mapping_FNC___Brow_Mapping_FNC_GreaterEqual_1_1_2_Result; // 0xCE(0x1)
		bool Brow_Mapping_FNC___Brow_Mapping_FNC_GreaterEqual_1_1_1_1_Result; // 0xCF(0x1)
		FName Brow_Mapping_FNC___Brow_Mapping_FNC_RigVMFunction_ControlFlowBranch_1_1_1_1_BlockToRun; // 0xD0(0x4)
		FName Brow_Mapping_FNC___Brow_Mapping_FNC_RigVMFunction_ControlFlowBranch_1_1_2_BlockToRun; // 0xD4(0x4)
		FName Brow_Mapping_FNC___Brow_Mapping_FNC_RigVMFunction_ControlFlowBranch_1_1_1_BlockToRun; // 0xD8(0x4)
		FName Brow_Mapping_FNC___Brow_Mapping_FNC_RigVMFunction_ControlFlowBranch_1_1_BlockToRun; // 0xDC(0x4)
		bool Brow_Mapping_FNC___Brow_Mapping_FNC_GreaterEqual_1_1_3_1_2_Result; // 0xE0(0x1)
		bool Brow_Mapping_FNC___Brow_Mapping_FNC_GreaterEqual_1_1_3_2_Result; // 0xE1(0x1)
		bool Brow_Mapping_FNC___Brow_Mapping_FNC_GreaterEqual_1_1_3_2_2_Result; // 0xE2(0x1)
		unsigned char UnknownData07_6[0x1]; // 0xE3(0x1) UNKNOWN PROPERTY
		FName Brow_Mapping_FNC___Brow_Mapping_FNC_RigVMFunction_ControlFlowBranch_1_1_3_2_2_BlockToRun; // 0xE4(0x4)
		FName Brow_Mapping_FNC___Brow_Mapping_FNC_RigVMFunction_ControlFlowBranch_1_1_3_2_BlockToRun; // 0xE8(0x4)
		bool Brow_Mapping_FNC___Brow_Mapping_FNC_GreaterEqual_1_1_3_2_1_Result; // 0xEC(0x1)
		bool Brow_Mapping_FNC___Brow_Mapping_FNC_GreaterEqual_1_1_3_2_1_1_Result; // 0xED(0x1)
		unsigned char UnknownData08_6[0x2]; // 0xEE(0x2) UNKNOWN PROPERTY
		FName Brow_Mapping_FNC___Brow_Mapping_FNC_RigVMFunction_ControlFlowBranch_1_1_3_2_1_1_BlockToRun; // 0xF0(0x4)
		FName Brow_Mapping_FNC___Brow_Mapping_FNC_RigVMFunction_ControlFlowBranch_1_1_3_2_1_BlockToRun; // 0xF4(0x4)
		FName Brow_Mapping_FNC___Brow_Mapping_FNC_RigVMFunction_ControlFlowBranch_1_1_3_1_2_BlockToRun; // 0xF8(0x4)
		bool Brow_Mapping_FNC___Brow_Mapping_FNC_GreaterEqual_1_1_3_1_2_1_Result; // 0xFC(0x1)
		bool Brow_Mapping_FNC___Brow_Mapping_FNC_GreaterEqual_1_1_3_2_3_Result; // 0xFD(0x1)
		bool Brow_Mapping_FNC___Brow_Mapping_FNC_GreaterEqual_1_1_3_2_2_1_Result; // 0xFE(0x1)
		unsigned char UnknownData09_6[0x1]; // 0xFF(0x1) UNKNOWN PROPERTY
		FName Brow_Mapping_FNC___Brow_Mapping_FNC_RigVMFunction_ControlFlowBranch_1_1_3_2_2_1_BlockToRun; // 0x100(0x4)
		FName Brow_Mapping_FNC___Brow_Mapping_FNC_RigVMFunction_ControlFlowBranch_1_1_3_2_3_BlockToRun; // 0x104(0x4)
		bool Brow_Mapping_FNC___Brow_Mapping_FNC_GreaterEqual_1_1_3_2_1_2_Result; // 0x108(0x1)
		bool Brow_Mapping_FNC___Brow_Mapping_FNC_GreaterEqual_1_1_3_2_1_1_1_Result; // 0x109(0x1)
		unsigned char UnknownData10_6[0x2]; // 0x10A(0x2) UNKNOWN PROPERTY
		FName Brow_Mapping_FNC___Brow_Mapping_FNC_RigVMFunction_ControlFlowBranch_1_1_3_2_1_1_1_BlockToRun; // 0x10C(0x4)
		FName Brow_Mapping_FNC___Brow_Mapping_FNC_RigVMFunction_ControlFlowBranch_1_1_3_2_1_2_BlockToRun; // 0x110(0x4)
		FName Brow_Mapping_FNC___Brow_Mapping_FNC_RigVMFunction_ControlFlowBranch_1_1_3_1_2_1_BlockToRun; // 0x114(0x4)
		float Eye_Mapping_FNC___Eye_Mapping_FNC_GetCurveValue_2_Value; // 0x118(0x4)
		bool Eye_Mapping_FNC___Eye_Mapping_FNC_GetCurveValue_2_Valid; // 0x11C(0x1)
		unsigned char UnknownData11_6[0x3]; // 0x11D(0x3) UNKNOWN PROPERTY
		TArray<FCachedRigElement> Eye_Mapping_FNC___Eye_Mapping_FNC_GetCurveValue_2_CachedCurveIndex; // 0x120(0x10)
		double LocalVariable__Eye_Mapping_FNC_l_eye_wide_value; // 0x130(0x8)
		float Eye_Mapping_FNC___Eye_Mapping_FNC_GetCurveValue_2_1_Value; // 0x138(0x4)
		bool Eye_Mapping_FNC___Eye_Mapping_FNC_GetCurveValue_2_1_Valid; // 0x13C(0x1)
		unsigned char UnknownData12_6[0x3]; // 0x13D(0x3) UNKNOWN PROPERTY
		TArray<FCachedRigElement> Eye_Mapping_FNC___Eye_Mapping_FNC_GetCurveValue_2_1_CachedCurveIndex; // 0x140(0x10)
		double LocalVariable__Eye_Mapping_FNC_r_eye_wide_value; // 0x150(0x8)
		float Eye_Mapping_FNC___Eye_Mapping_FNC_GetCurveValue_Value; // 0x158(0x4)
		bool Eye_Mapping_FNC___Eye_Mapping_FNC_GetCurveValue_Valid; // 0x15C(0x1)
		unsigned char UnknownData13_6[0x3]; // 0x15D(0x3) UNKNOWN PROPERTY
		TArray<FCachedRigElement> Eye_Mapping_FNC___Eye_Mapping_FNC_GetCurveValue_CachedCurveIndex; // 0x160(0x10)
		double LocalVariable__Eye_Mapping_FNC_l_blink_value; // 0x170(0x8)
		float Eye_Mapping_FNC___Eye_Mapping_FNC_GetCurveValue_1_Value; // 0x178(0x4)
		bool Eye_Mapping_FNC___Eye_Mapping_FNC_GetCurveValue_1_Valid; // 0x17C(0x1)
		unsigned char UnknownData14_6[0x3]; // 0x17D(0x3) UNKNOWN PROPERTY
		TArray<FCachedRigElement> Eye_Mapping_FNC___Eye_Mapping_FNC_GetCurveValue_1_CachedCurveIndex; // 0x180(0x10)
		double LocalVariable__Eye_Mapping_FNC_r_blink_value; // 0x190(0x8)
		float Eye_Mapping_FNC___Eye_Mapping_FNC_GetCurveValue_1_1_Value; // 0x198(0x4)
		bool Eye_Mapping_FNC___Eye_Mapping_FNC_GetCurveValue_1_1_Valid; // 0x19C(0x1)
		unsigned char UnknownData15_6[0x3]; // 0x19D(0x3) UNKNOWN PROPERTY
		TArray<FCachedRigElement> Eye_Mapping_FNC___Eye_Mapping_FNC_GetCurveValue_1_1_CachedCurveIndex; // 0x1A0(0x10)
		double LocalVariable__Eye_Mapping_FNC_l_brow_dn_value; // 0x1B0(0x8)
		float Eye_Mapping_FNC___Eye_Mapping_FNC_GetCurveValue_1_1_1_Value; // 0x1B8(0x4)
		bool Eye_Mapping_FNC___Eye_Mapping_FNC_GetCurveValue_1_1_1_Valid; // 0x1BC(0x1)
		unsigned char UnknownData16_6[0x3]; // 0x1BD(0x3) UNKNOWN PROPERTY
		TArray<FCachedRigElement> Eye_Mapping_FNC___Eye_Mapping_FNC_GetCurveValue_1_1_1_CachedCurveIndex; // 0x1C0(0x10)
		double LocalVariable__Eye_Mapping_FNC_r_brow_dn_value; // 0x1D0(0x8)
		float Eye_Mapping_FNC___Eye_Mapping_FNC_GetCurveValue_1_1_1_1_Value; // 0x1D8(0x4)
		bool Eye_Mapping_FNC___Eye_Mapping_FNC_GetCurveValue_1_1_1_1_Valid; // 0x1DC(0x1)
		unsigned char UnknownData17_6[0x3]; // 0x1DD(0x3) UNKNOWN PROPERTY
		TArray<FCachedRigElement> Eye_Mapping_FNC___Eye_Mapping_FNC_GetCurveValue_1_1_1_1_CachedCurveIndex; // 0x1E0(0x10)
		double LocalVariable__Eye_Mapping_FNC_glabella_up_value; // 0x1F0(0x8)
		float Eye_Mapping_FNC___Eye_Mapping_FNC_GetCurveValue_1_1_1_1_1_Value; // 0x1F8(0x4)
		bool Eye_Mapping_FNC___Eye_Mapping_FNC_GetCurveValue_1_1_1_1_1_Valid; // 0x1FC(0x1)
		unsigned char UnknownData18_6[0x3]; // 0x1FD(0x3) UNKNOWN PROPERTY
		TArray<FCachedRigElement> Eye_Mapping_FNC___Eye_Mapping_FNC_GetCurveValue_1_1_1_1_1_CachedCurveIndex; // 0x200(0x10)
		double LocalVariable__Eye_Mapping_FNC_glabella_dn_value; // 0x210(0x8)
		float Eye_Mapping_FNC___Eye_Mapping_FNC_GetCurveValue_1_1_1_1_1_1_Value; // 0x218(0x4)
		bool Eye_Mapping_FNC___Eye_Mapping_FNC_GetCurveValue_1_1_1_1_1_1_Valid; // 0x21C(0x1)
		unsigned char UnknownData19_6[0x3]; // 0x21D(0x3) UNKNOWN PROPERTY
		TArray<FCachedRigElement> Eye_Mapping_FNC___Eye_Mapping_FNC_GetCurveValue_1_1_1_1_1_1_CachedCurveIndex; // 0x220(0x10)
		double LocalVariable__Eye_Mapping_FNC_l_squint_value; // 0x230(0x8)
		float Eye_Mapping_FNC___Eye_Mapping_FNC_GetCurveValue_1_1_1_1_1_1_1_Value; // 0x238(0x4)
		bool Eye_Mapping_FNC___Eye_Mapping_FNC_GetCurveValue_1_1_1_1_1_1_1_Valid; // 0x23C(0x1)
		unsigned char UnknownData20_6[0x3]; // 0x23D(0x3) UNKNOWN PROPERTY
		TArray<FCachedRigElement> Eye_Mapping_FNC___Eye_Mapping_FNC_GetCurveValue_1_1_1_1_1_1_1_CachedCurveIndex; // 0x240(0x10)
		double LocalVariable__Eye_Mapping_FNC_r_squint_value; // 0x250(0x8)
		float Eye_Mapping_FNC___Eye_Mapping_FNC_GetCurveValue_1_1_1_1_1_1_1_1_Value; // 0x258(0x4)
		bool Eye_Mapping_FNC___Eye_Mapping_FNC_GetCurveValue_1_1_1_1_1_1_1_1_Valid; // 0x25C(0x1)
		unsigned char UnknownData21_6[0x3]; // 0x25D(0x3) UNKNOWN PROPERTY
		TArray<FCachedRigElement> Eye_Mapping_FNC___Eye_Mapping_FNC_GetCurveValue_1_1_1_1_1_1_1_1_CachedCurveIndex; // 0x260(0x10)
		double LocalVariable__Eye_Mapping_FNC_l_squeeze_value; // 0x270(0x8)
		float Eye_Mapping_FNC___Eye_Mapping_FNC_GetCurveValue_1_1_1_1_1_1_1_1_1_Value; // 0x278(0x4)
		bool Eye_Mapping_FNC___Eye_Mapping_FNC_GetCurveValue_1_1_1_1_1_1_1_1_1_Valid; // 0x27C(0x1)
		unsigned char UnknownData22_6[0x3]; // 0x27D(0x3) UNKNOWN PROPERTY
		TArray<FCachedRigElement> Eye_Mapping_FNC___Eye_Mapping_FNC_GetCurveValue_1_1_1_1_1_1_1_1_1_CachedCurveIndex; // 0x280(0x10)
		double LocalVariable__Eye_Mapping_FNC_r_squeeze_value; // 0x290(0x8)
		bool Eye_Mapping_FNC___Eye_Mapping_FNC_GreaterEqual_Result; // 0x298(0x1)
		bool Eye_Mapping_FNC___Eye_Mapping_FNC_GreaterEqual_1_Result; // 0x299(0x1)
		bool Eye_Mapping_FNC___Eye_Mapping_FNC_GreaterEqual_1_1_Result; // 0x29A(0x1)
		unsigned char UnknownData23_6[0x1]; // 0x29B(0x1) UNKNOWN PROPERTY
		FName Eye_Mapping_FNC___Eye_Mapping_FNC_RigVMFunction_ControlFlowBranch_3_1_1_BlockToRun; // 0x29C(0x4)
		FName Eye_Mapping_FNC___Eye_Mapping_FNC_RigVMFunction_ControlFlowBranch_3_1_BlockToRun; // 0x2A0(0x4)
		bool Eye_Mapping_FNC___Eye_Mapping_FNC_GreaterEqual_2_Result; // 0x2A4(0x1)
		bool Eye_Mapping_FNC___Eye_Mapping_FNC_GreaterEqual_2_2_Result; // 0x2A5(0x1)
		bool Eye_Mapping_FNC___Eye_Mapping_FNC_GreaterEqual_2_2_1_Result; // 0x2A6(0x1)
		unsigned char UnknownData24_6[0x1]; // 0x2A7(0x1) UNKNOWN PROPERTY
		FName Eye_Mapping_FNC___Eye_Mapping_FNC_RigVMFunction_ControlFlowBranch_3_2_2_1_BlockToRun; // 0x2A8(0x4)
		FName Eye_Mapping_FNC___Eye_Mapping_FNC_RigVMFunction_ControlFlowBranch_3_2_2_BlockToRun; // 0x2AC(0x4)
		bool Eye_Mapping_FNC___Eye_Mapping_FNC_GreaterEqual_2_1_Result; // 0x2B0(0x1)
		unsigned char UnknownData25_6[0x3]; // 0x2B1(0x3) UNKNOWN PROPERTY
		FName Eye_Mapping_FNC___Eye_Mapping_FNC_RigVMFunction_ControlFlowBranch_3_2_1_BlockToRun; // 0x2B4(0x4)
		FName Eye_Mapping_FNC___Eye_Mapping_FNC_RigVMFunction_ControlFlowBranch_3_2_BlockToRun; // 0x2B8(0x4)
		FName Eye_Mapping_FNC___Eye_Mapping_FNC_RigVMFunction_ControlFlowBranch_3_BlockToRun; // 0x2BC(0x4)
		bool Eye_Mapping_FNC___Eye_Mapping_FNC_GreaterEqual_3_Result; // 0x2C0(0x1)
		bool Eye_Mapping_FNC___Eye_Mapping_FNC_GreaterEqual_1_2_Result; // 0x2C1(0x1)
		bool Eye_Mapping_FNC___Eye_Mapping_FNC_GreaterEqual_1_1_1_Result; // 0x2C2(0x1)
		unsigned char UnknownData26_6[0x1]; // 0x2C3(0x1) UNKNOWN PROPERTY
		FName Eye_Mapping_FNC___Eye_Mapping_FNC_RigVMFunction_ControlFlowBranch_3_1_1_1_BlockToRun; // 0x2C4(0x4)
		FName Eye_Mapping_FNC___Eye_Mapping_FNC_RigVMFunction_ControlFlowBranch_3_1_2_BlockToRun; // 0x2C8(0x4)
		bool Eye_Mapping_FNC___Eye_Mapping_FNC_GreaterEqual_2_3_Result; // 0x2CC(0x1)
		bool Eye_Mapping_FNC___Eye_Mapping_FNC_GreaterEqual_2_2_2_Result; // 0x2CD(0x1)
		bool Eye_Mapping_FNC___Eye_Mapping_FNC_GreaterEqual_2_2_1_1_Result; // 0x2CE(0x1)
		unsigned char UnknownData27_6[0x1]; // 0x2CF(0x1) UNKNOWN PROPERTY
		FName Eye_Mapping_FNC___Eye_Mapping_FNC_RigVMFunction_ControlFlowBranch_3_2_2_1_1_BlockToRun; // 0x2D0(0x4)
		FName Eye_Mapping_FNC___Eye_Mapping_FNC_RigVMFunction_ControlFlowBranch_3_2_2_2_BlockToRun; // 0x2D4(0x4)
		bool Eye_Mapping_FNC___Eye_Mapping_FNC_GreaterEqual_2_1_1_Result; // 0x2D8(0x1)
		unsigned char UnknownData28_6[0x3]; // 0x2D9(0x3) UNKNOWN PROPERTY
		FName Eye_Mapping_FNC___Eye_Mapping_FNC_RigVMFunction_ControlFlowBranch_3_2_1_1_BlockToRun; // 0x2DC(0x4)
		FName Eye_Mapping_FNC___Eye_Mapping_FNC_RigVMFunction_ControlFlowBranch_3_2_3_BlockToRun; // 0x2E0(0x4)
		FName Eye_Mapping_FNC___Eye_Mapping_FNC_RigVMFunction_ControlFlowBranch_3_3_BlockToRun; // 0x2E4(0x4)
		float Mouth_Mapping_FNC___Mouth_Mapping_FNC_GetCurveValue_Value; // 0x2E8(0x4)
		bool Mouth_Mapping_FNC___Mouth_Mapping_FNC_GetCurveValue_Valid; // 0x2EC(0x1)
		unsigned char UnknownData29_6[0x3]; // 0x2ED(0x3) UNKNOWN PROPERTY
		TArray<FCachedRigElement> Mouth_Mapping_FNC___Mouth_Mapping_FNC_GetCurveValue_CachedCurveIndex; // 0x2F0(0x10)
		double LocalVariable__Mouth_Mapping_FNC_jopen_value; // 0x300(0x8)
		float Mouth_Mapping_FNC___Mouth_Mapping_FNC_GetCurveValue_1_Value; // 0x308(0x4)
		bool Mouth_Mapping_FNC___Mouth_Mapping_FNC_GetCurveValue_1_Valid; // 0x30C(0x1)
		unsigned char UnknownData30_6[0x3]; // 0x30D(0x3) UNKNOWN PROPERTY
		TArray<FCachedRigElement> Mouth_Mapping_FNC___Mouth_Mapping_FNC_GetCurveValue_1_CachedCurveIndex; // 0x310(0x10)
		double LocalVariable__Mouth_Mapping_FNC_l_smile_value; // 0x320(0x8)
		float Mouth_Mapping_FNC___Mouth_Mapping_FNC_GetCurveValue_1_1_Value; // 0x328(0x4)
		bool Mouth_Mapping_FNC___Mouth_Mapping_FNC_GetCurveValue_1_1_Valid; // 0x32C(0x1)
		unsigned char UnknownData31_6[0x3]; // 0x32D(0x3) UNKNOWN PROPERTY
		TArray<FCachedRigElement> Mouth_Mapping_FNC___Mouth_Mapping_FNC_GetCurveValue_1_1_CachedCurveIndex; // 0x330(0x10)
		double LocalVariable__Mouth_Mapping_FNC_r_smile_value; // 0x340(0x8)
		float Mouth_Mapping_FNC___Mouth_Mapping_FNC_GetCurveValue_1_1_1_Value; // 0x348(0x4)
		bool Mouth_Mapping_FNC___Mouth_Mapping_FNC_GetCurveValue_1_1_1_Valid; // 0x34C(0x1)
		unsigned char UnknownData32_6[0x3]; // 0x34D(0x3) UNKNOWN PROPERTY
		TArray<FCachedRigElement> Mouth_Mapping_FNC___Mouth_Mapping_FNC_GetCurveValue_1_1_1_CachedCurveIndex; // 0x350(0x10)
		double LocalVariable__Mouth_Mapping_FNC_l_frown_value; // 0x360(0x8)
		float Mouth_Mapping_FNC___Mouth_Mapping_FNC_GetCurveValue_1_1_1_1_Value; // 0x368(0x4)
		bool Mouth_Mapping_FNC___Mouth_Mapping_FNC_GetCurveValue_1_1_1_1_Valid; // 0x36C(0x1)
		unsigned char UnknownData33_6[0x3]; // 0x36D(0x3) UNKNOWN PROPERTY
		TArray<FCachedRigElement> Mouth_Mapping_FNC___Mouth_Mapping_FNC_GetCurveValue_1_1_1_1_CachedCurveIndex; // 0x370(0x10)
		double LocalVariable__Mouth_Mapping_FNC_r_frown_value; // 0x380(0x8)
		float Mouth_Mapping_FNC___Mouth_Mapping_FNC_GetCurveValue_1_1_1_1_1_Value; // 0x388(0x4)
		bool Mouth_Mapping_FNC___Mouth_Mapping_FNC_GetCurveValue_1_1_1_1_1_Valid; // 0x38C(0x1)
		unsigned char UnknownData34_6[0x3]; // 0x38D(0x3) UNKNOWN PROPERTY
		TArray<FCachedRigElement> Mouth_Mapping_FNC___Mouth_Mapping_FNC_GetCurveValue_1_1_1_1_1_CachedCurveIndex; // 0x390(0x10)
		double LocalVariable__Mouth_Mapping_FNC_l_upperlip_raiser_value; // 0x3A0(0x8)
		float Mouth_Mapping_FNC___Mouth_Mapping_FNC_GetCurveValue_1_1_1_1_1_1_Value; // 0x3A8(0x4)
		bool Mouth_Mapping_FNC___Mouth_Mapping_FNC_GetCurveValue_1_1_1_1_1_1_Valid; // 0x3AC(0x1)
		unsigned char UnknownData35_6[0x3]; // 0x3AD(0x3) UNKNOWN PROPERTY
		TArray<FCachedRigElement> Mouth_Mapping_FNC___Mouth_Mapping_FNC_GetCurveValue_1_1_1_1_1_1_CachedCurveIndex; // 0x3B0(0x10)
		double LocalVariable__Mouth_Mapping_FNC_r_upperlip_raiser_value; // 0x3C0(0x8)
		float Mouth_Mapping_FNC___Mouth_Mapping_FNC_GetCurveValue_1_1_1_1_1_1_1_Value; // 0x3C8(0x4)
		bool Mouth_Mapping_FNC___Mouth_Mapping_FNC_GetCurveValue_1_1_1_1_1_1_1_Valid; // 0x3CC(0x1)
		unsigned char UnknownData36_6[0x3]; // 0x3CD(0x3) UNKNOWN PROPERTY
		TArray<FCachedRigElement> Mouth_Mapping_FNC___Mouth_Mapping_FNC_GetCurveValue_1_1_1_1_1_1_1_CachedCurveIndex; // 0x3D0(0x10)
		double LocalVariable__Mouth_Mapping_FNC_l_lowerlip_down_value; // 0x3E0(0x8)
		float Mouth_Mapping_FNC___Mouth_Mapping_FNC_GetCurveValue_1_1_1_1_1_1_1_1_Value; // 0x3E8(0x4)
		bool Mouth_Mapping_FNC___Mouth_Mapping_FNC_GetCurveValue_1_1_1_1_1_1_1_1_Valid; // 0x3EC(0x1)
		unsigned char UnknownData37_6[0x3]; // 0x3ED(0x3) UNKNOWN PROPERTY
		TArray<FCachedRigElement> Mouth_Mapping_FNC___Mouth_Mapping_FNC_GetCurveValue_1_1_1_1_1_1_1_1_CachedCurveIndex; // 0x3F0(0x10)
		double LocalVariable__Mouth_Mapping_FNC_r_lowerlip_down_value; // 0x400(0x8)
		bool Mouth_Mapping_FNC___Mouth_Mapping_FNC_RigVMFunction_MathBoolOr_Result; // 0x408(0x1)
		bool Mouth_Mapping_FNC___Mouth_Mapping_FNC_GreaterEqual_1_Result; // 0x409(0x1)
		bool Mouth_Mapping_FNC___Mouth_Mapping_FNC_GreaterEqual_1_1_Result; // 0x40A(0x1)
		bool LocalVariable__Mouth_Mapping_FNC_is_l_snear; // 0x40B(0x1)
		bool Mouth_Mapping_FNC___Mouth_Mapping_FNC_RigVMFunction_MathBoolOr_1_Result; // 0x40C(0x1)
		bool Mouth_Mapping_FNC___Mouth_Mapping_FNC_GreaterEqual_1_2_Result; // 0x40D(0x1)
		bool Mouth_Mapping_FNC___Mouth_Mapping_FNC_GreaterEqual_1_1_1_Result; // 0x40E(0x1)
		bool LocalVariable__Mouth_Mapping_FNC_is_r_snear; // 0x40F(0x1)
		FName Mouth_Mapping_FNC___Mouth_Mapping_FNC_RigVMFunction_ControlFlowBranch_1_1_BlockToRun; // 0x410(0x4)
		FName Mouth_Mapping_FNC___Mouth_Mapping_FNC_RigVMFunction_ControlFlowBranch_1_BlockToRun; // 0x414(0x4)
		bool Mouth_Mapping_FNC___Mouth_Mapping_FNC_GreaterEqual_Result; // 0x418(0x1)
		unsigned char UnknownData38_6[0x3]; // 0x419(0x3) UNKNOWN PROPERTY
		FName Mouth_Mapping_FNC___Mouth_Mapping_FNC_RigVMFunction_ControlFlowBranch_7_1_BlockToRun; // 0x41C(0x4)
		FName Mouth_Mapping_FNC___Mouth_Mapping_FNC_RigVMFunction_ControlFlowBranch_7_BlockToRun; // 0x420(0x4)
		bool Mouth_Mapping_FNC___Mouth_Mapping_FNC_RigVMFunction_MathBoolOr_3_Result; // 0x424(0x1)
		bool Mouth_Mapping_FNC___Mouth_Mapping_FNC_GreaterEqual_5_Result; // 0x425(0x1)
		bool Mouth_Mapping_FNC___Mouth_Mapping_FNC_GreaterEqual_5_1_Result; // 0x426(0x1)
		bool Mouth_Mapping_FNC___Mouth_Mapping_FNC_GreaterEqual_5_2_Result; // 0x427(0x1)
		bool Mouth_Mapping_FNC___Mouth_Mapping_FNC_GreaterEqual_5_2_1_Result; // 0x428(0x1)
		unsigned char UnknownData39_6[0x3]; // 0x429(0x3) UNKNOWN PROPERTY
		FName Mouth_Mapping_FNC___Mouth_Mapping_FNC_RigVMFunction_ControlFlowBranch_7_2_1_1_BlockToRun; // 0x42C(0x4)
		FName Mouth_Mapping_FNC___Mouth_Mapping_FNC_RigVMFunction_ControlFlowBranch_7_2_1_BlockToRun; // 0x430(0x4)
		FName Mouth_Mapping_FNC___Mouth_Mapping_FNC_RigVMFunction_ControlFlowBranch_7_2_BlockToRun; // 0x434(0x4)
		bool Mouth_Mapping_FNC___Mouth_Mapping_FNC_get_largest_val_index_FNC_2_1_2_1_1_1_is_activated; // 0x438(0x1)
		unsigned char UnknownData40_6[0x3]; // 0x439(0x3) UNKNOWN PROPERTY
		int32_t Mouth_Mapping_FNC___Mouth_Mapping_FNC_get_largest_val_index_FNC_2_1_2_1_1_1_out_index; // 0x43C(0x4)
		bool get_largest_val_index_FNC_2_1_2_1_1_1___get_largest_val_index_FNC_RigVMFunction_MathBoolAnd_Result; // 0x440(0x1)
		bool get_largest_val_index_FNC_2_1_2_1_1_1___get_largest_val_index_FNC_GreaterEqual_Result; // 0x441(0x1)
		unsigned char UnknownData41_6[0x6]; // 0x442(0x6) UNKNOWN PROPERTY
		FRigVMInstructionSetExecuteState Mouth_Mapping_FNC_index_FNC_2_1_2_1_1_1te; // 0x448(0x50)
		float get_largest_val_index_FNC_2_1_2_1_1_1___get_largest_val_index_FNC_GetCurveValue_Value; // 0x498(0x4)
		FRigElementKey get_largest_val_index_FNC_2_1_2_1_1_1___get_largest_val_index_FNC_DISPATCH_RigVMDispatch_ArrayIterator_Element; // 0x49C(0x8)
		FName get_largest_val_index_FNC_2_1_2_1_1_1___get_largest_val_index_FNC_GetCurveValue_Curve; // 0x4A4(0x4)
		bool get_largest_val_index_FNC_2_1_2_1_1_1___get_largest_val_index_FNC_GetCurveValue_Valid; // 0x4A8(0x1)
		unsigned char UnknownData42_6[0x7]; // 0x4A9(0x7) UNKNOWN PROPERTY
		TArray<FCachedRigElement> get_largest_val_index_FNC_2_1_2_1_1_1___get_largest_val_index_FNC_GetCurveValue_CachedCurveIndex; // 0x4B0(0x10)
		double get_largest_val_index_FNC_2_1_2_1_1_1___get_largest_val_index_FNC_GreaterEqual_A; // 0x4C0(0x8)
		bool get_largest_val_index_FNC_2_1_2_1_1_1___get_largest_val_index_FNC_GreaterEqual_1_Result; // 0x4C8(0x1)
		unsigned char UnknownData43_6[0x7]; // 0x4C9(0x7) UNKNOWN PROPERTY
		double get_largest_val_index_FNC_2_1_2_1_1_1___get_largest_val_index_FNC_GreaterEqual_1_A; // 0x4D0(0x8)
		double LocalVariable__get_largest_val_index_FNC_tmp_val; // 0x4D8(0x8)
		int32_t get_largest_val_index_FNC_2_1_2_1_1_1___get_largest_val_index_FNC_DISPATCH_RigVMDispatch_ArrayGetAtIndex_Element; // 0x4E0(0x4)
		int32_t get_largest_val_index_FNC_2_1_2_1_1_1___get_largest_val_index_FNC_DISPATCH_RigVMDispatch_ArrayIterator_Index; // 0x4E4(0x4)
		FName get_largest_val_index_FNC_2_1_2_1_1_1___get_largest_val_index_FNC_RigVMFunction_ControlFlowBranch_BlockToRun; // 0x4E8(0x4)
		int32_t get_largest_val_index_FNC_2_1_2_1_1_1___get_largest_val_index_FNC_DISPATCH_RigVMDispatch_ArrayIterator_Count; // 0x4EC(0x4)
		float get_largest_val_index_FNC_2_1_2_1_1_1___get_largest_val_index_FNC_DISPATCH_RigVMDispatch_ArrayIterator_Ratio; // 0x4F0(0x4)
		FName get_largest_val_index_FNC_2_1_2_1_1_1___get_largest_val_index_FNC_DISPATCH_RigVMDispatch_ArrayIterator_BlockToRun; // 0x4F4(0x4)
		FRigVMInstructionSetExecuteState Mouth_Mapping_FNCte_3555834070; // 0x4F8(0x50)
		FName Mouth_Mapping_FNC___Mouth_Mapping_FNC_RigVMFunction_ControlFlowBranch_4_1_2_1_2_2_1_1_BlockToRun; // 0x548(0x4)
		FName Mouth_Mapping_FNC___Mouth_Mapping_FNC_RigVMFunction_ControlFlowBranch_2_1_BlockToRun; // 0x54C(0x4)
		FName Mouth_Mapping_FNC___Mouth_Mapping_FNC_RigVMFunction_ControlFlowBranch_2_BlockToRun; // 0x550(0x4)
		bool Mouth_Mapping_FNC___Mouth_Mapping_FNC_is_expr_activated_FNC_11_1_1_Output; // 0x554(0x1)
		bool is_expr_activated_FNC_11_1_1___is_expr_activated_FNC_Less_Result; // 0x555(0x1)
		unsigned char UnknownData44_6[0x2]; // 0x556(0x2) UNKNOWN PROPERTY
		FRigVMInstructionSetExecuteState Mouth_Mapping_FNCed_FNC_11_1_1te_3276174113; // 0x558(0x50)
		float is_expr_activated_FNC_11_1_1___is_expr_activated_FNC_GetCurveValue_Value; // 0x5A8(0x4)
		FRigElementKey is_expr_activated_FNC_11_1_1___is_expr_activated_FNC_DISPATCH_RigVMDispatch_ArrayIterator_Element; // 0x5AC(0x8)
		FName is_expr_activated_FNC_11_1_1___is_expr_activated_FNC_GetCurveValue_Curve; // 0x5B4(0x4)
		bool is_expr_activated_FNC_11_1_1___is_expr_activated_FNC_GetCurveValue_Valid; // 0x5B8(0x1)
		unsigned char UnknownData45_6[0x7]; // 0x5B9(0x7) UNKNOWN PROPERTY
		TArray<FCachedRigElement> is_expr_activated_FNC_11_1_1___is_expr_activated_FNC_GetCurveValue_CachedCurveIndex; // 0x5C0(0x10)
		double is_expr_activated_FNC_11_1_1___is_expr_activated_FNC_Less_A; // 0x5D0(0x8)
		FName is_expr_activated_FNC_11_1_1___is_expr_activated_FNC_RigVMFunction_ControlFlowBranch_2_BlockToRun; // 0x5D8(0x4)
		bool is_expr_activated_FNC_11_1_1___is_expr_activated_FNC_GreaterEqual_Result; // 0x5DC(0x1)
		unsigned char UnknownData46_6[0x3]; // 0x5DD(0x3) UNKNOWN PROPERTY
		double is_expr_activated_FNC_11_1_1___is_expr_activated_FNC_GreaterEqual_A; // 0x5E0(0x8)
		FName is_expr_activated_FNC_11_1_1___is_expr_activated_FNC_RigVMFunction_ControlFlowBranch_BlockToRun; // 0x5E8(0x4)
		FName is_expr_activated_FNC_11_1_1___is_expr_activated_FNC_RigVMFunction_ControlFlowBranch_1_BlockToRun; // 0x5EC(0x4)
		int32_t is_expr_activated_FNC_11_1_1___is_expr_activated_FNC_DISPATCH_RigVMDispatch_ArrayIterator_Index; // 0x5F0(0x4)
		int32_t is_expr_activated_FNC_11_1_1___is_expr_activated_FNC_DISPATCH_RigVMDispatch_ArrayIterator_Count; // 0x5F4(0x4)
		float is_expr_activated_FNC_11_1_1___is_expr_activated_FNC_DISPATCH_RigVMDispatch_ArrayIterator_Ratio; // 0x5F8(0x4)
		FName is_expr_activated_FNC_11_1_1___is_expr_activated_FNC_DISPATCH_RigVMDispatch_ArrayIterator_BlockToRun; // 0x5FC(0x4)
		FName Mouth_Mapping_FNC___Mouth_Mapping_FNC_RigVMFunction_ControlFlowBranch_4_1_1_BlockToRun; // 0x600(0x4)
		bool Mouth_Mapping_FNC___Mouth_Mapping_FNC_RigVMFunction_MathBoolOr_2_Result; // 0x604(0x1)
		bool Mouth_Mapping_FNC___Mouth_Mapping_FNC_GreaterEqual_2_Result; // 0x605(0x1)
		bool Mouth_Mapping_FNC___Mouth_Mapping_FNC_GreaterEqual_2_1_Result; // 0x606(0x1)
		bool Mouth_Mapping_FNC___Mouth_Mapping_FNC_RigVMFunction_MathBoolOr_2_1_Result; // 0x607(0x1)
		bool Mouth_Mapping_FNC___Mouth_Mapping_FNC_GreaterEqual_2_2_Result; // 0x608(0x1)
		bool Mouth_Mapping_FNC___Mouth_Mapping_FNC_GreaterEqual_2_1_1_Result; // 0x609(0x1)
		unsigned char UnknownData47_6[0x2]; // 0x60A(0x2) UNKNOWN PROPERTY
		FName Mouth_Mapping_FNC___Mouth_Mapping_FNC_RigVMFunction_ControlFlowBranch_3_1_BlockToRun; // 0x60C(0x4)
		FName Mouth_Mapping_FNC___Mouth_Mapping_FNC_RigVMFunction_ControlFlowBranch_3_BlockToRun; // 0x610(0x4)
		bool Mouth_Mapping_FNC___Mouth_Mapping_FNC_RigVMFunction_MathBoolAnd_Result; // 0x614(0x1)
		bool Mouth_Mapping_FNC___Mouth_Mapping_FNC_GreaterEqual_3_Result; // 0x615(0x1)
		bool Mouth_Mapping_FNC___Mouth_Mapping_FNC_GreaterEqual_3_1_Result; // 0x616(0x1)
		bool Mouth_Mapping_FNC___Mouth_Mapping_FNC_RigVMFunction_MathBoolAnd_1_Result; // 0x617(0x1)
		bool Mouth_Mapping_FNC___Mouth_Mapping_FNC_GreaterEqual_3_2_Result; // 0x618(0x1)
		bool Mouth_Mapping_FNC___Mouth_Mapping_FNC_GreaterEqual_3_1_1_Result; // 0x619(0x1)
		bool Mouth_Mapping_FNC___Mouth_Mapping_FNC_RigVMFunction_MathBoolOr_4_Result; // 0x61A(0x1)
		unsigned char UnknownData48_6[0x1]; // 0x61B(0x1) UNKNOWN PROPERTY
		FName Mouth_Mapping_FNC___Mouth_Mapping_FNC_RigVMFunction_ControlFlowBranch_5_1_BlockToRun; // 0x61C(0x4)
		FName Mouth_Mapping_FNC___Mouth_Mapping_FNC_RigVMFunction_ControlFlowBranch_5_BlockToRun; // 0x620(0x4)
		FName Mouth_Mapping_FNC___Mouth_Mapping_FNC_RigVMFunction_ControlFlowBranch_4_BlockToRun; // 0x624(0x4)
		bool Mouth_Mapping_FNC___Mouth_Mapping_FNC_RigVMFunction_MathBoolAnd_2_Result; // 0x628(0x1)
		bool Mouth_Mapping_FNC___Mouth_Mapping_FNC_GreaterEqual_4_Result; // 0x629(0x1)
		bool Mouth_Mapping_FNC___Mouth_Mapping_FNC_RigVMFunction_MathBoolAnd_2_1_Result; // 0x62A(0x1)
		bool Mouth_Mapping_FNC___Mouth_Mapping_FNC_GreaterEqual_4_1_Result; // 0x62B(0x1)
		FName Mouth_Mapping_FNC___Mouth_Mapping_FNC_RigVMFunction_ControlFlowBranch_6_1_BlockToRun; // 0x62C(0x4)
		FName Mouth_Mapping_FNC___Mouth_Mapping_FNC_RigVMFunction_ControlFlowBranch_6_BlockToRun; // 0x630(0x4)
		FName Mouth_Mapping_FNC___Mouth_Mapping_FNC_RigVMFunction_ControlFlowBranch_BlockToRun; // 0x634(0x4)
		float RigVMModel___RigVMFunction_MathIntToFloat_5_Result; // 0x638(0x4)
		unsigned char UnknownData49_6[0x4]; // 0x63C(0x4) UNKNOWN PROPERTY
		TArray<FCachedRigElement> RigVMModel___SetCurveValue_2_CachedCurveIndex; // 0x640(0x10)
		float RigVMModel___RigVMFunction_MathIntToFloat_1_1_Result; // 0x650(0x4)
		unsigned char UnknownData50_6[0x4]; // 0x654(0x4) UNKNOWN PROPERTY
		TArray<FCachedRigElement> RigVMModel___SetCurveValue_1_2_CachedCurveIndex; // 0x658(0x10)
		float RigVMModel___RigVMFunction_MathIntToFloat_2_1_Result; // 0x668(0x4)
		unsigned char UnknownData51_6[0x4]; // 0x66C(0x4) UNKNOWN PROPERTY
		TArray<FCachedRigElement> RigVMModel___SetCurveValue_1_1_2_CachedCurveIndex; // 0x670(0x10)
		float RigVMModel___RigVMFunction_MathIntToFloat_3_1_Result; // 0x680(0x4)
		unsigned char UnknownData52_6[0x4]; // 0x684(0x4) UNKNOWN PROPERTY
		TArray<FCachedRigElement> RigVMModel___SetCurveValue_1_1_1_2_CachedCurveIndex; // 0x688(0x10)
		float RigVMModel___RigVMFunction_MathIntToFloat_4_1_Result; // 0x698(0x4)
		unsigned char UnknownData53_6[0x4]; // 0x69C(0x4) UNKNOWN PROPERTY
		TArray<FCachedRigElement> RigVMModel___SetCurveValue_1_1_1_1_1_CachedCurveIndex; // 0x6A0(0x10)
	};


	// Struct /Engine/Transient.PropertyBag_ad76d5c319f57724
	// Size: 0x238 (0x238 - 0x0)
	struct FPropertyBag_ad76d5c319f57724	
	{
	public:
		int32_t RigVMModel___VariableNode_2_Value__Const; // 0x0(0x4)
		bool LocalVariableDefault__Brow_Mapping_FNC_glabella_up__Const; // 0x4(0x1)
		bool LocalVariableDefault__Brow_Mapping_FNC_glabella_dn__Const; // 0x5(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x6(0x2) UNKNOWN PROPERTY
		double LocalVariableDefault__Brow_Mapping_FNC_glabella_up_val__Const; // 0x8(0x8)
		double LocalVariableDefault__Brow_Mapping_FNC_glabella_dn_val__Const; // 0x10(0x8)
		double LocalVariableDefault__Brow_Mapping_FNC_l_brow_up_val__Const; // 0x18(0x8)
		double LocalVariableDefault__Brow_Mapping_FNC_l_brow_dn_val__Const; // 0x20(0x8)
		double LocalVariableDefault__Brow_Mapping_FNC_r_brow_up_val__Const; // 0x28(0x8)
		double LocalVariableDefault__Brow_Mapping_FNC_r_brow_dn_val__Const; // 0x30(0x8)
		FName Brow_Mapping_FNC___Brow_Mapping_FNC_GetCurveValue_Curve__Const; // 0x38(0x4)
		FName Brow_Mapping_FNC___Brow_Mapping_FNC_GetCurveValue_1_Curve__Const; // 0x3C(0x4)
		FName Brow_Mapping_FNC___Brow_Mapping_FNC_GetCurveValue_1_1_Curve__Const; // 0x40(0x4)
		FName Brow_Mapping_FNC___Brow_Mapping_FNC_GetCurveValue_1_1_1_Curve__Const; // 0x44(0x4)
		FName Brow_Mapping_FNC___Brow_Mapping_FNC_GetCurveValue_1_1_2_Curve__Const; // 0x48(0x4)
		FName Brow_Mapping_FNC___Brow_Mapping_FNC_GetCurveValue_1_1_1_1_Curve__Const; // 0x4C(0x4)
		int32_t Brow_Mapping_FNC___Brow_Mapping_FNC_VariableNode_16_Value__Const; // 0x50(0x4)
		int32_t Brow_Mapping_FNC___Brow_Mapping_FNC_VariableNode_16_1_Value__Const; // 0x54(0x4)
		int32_t Brow_Mapping_FNC___Brow_Mapping_FNC_VariableNode_16_2_Value__Const; // 0x58(0x4)
		int32_t Brow_Mapping_FNC___Brow_Mapping_FNC_VariableNode_16_2_1_Value__Const; // 0x5C(0x4)
		int32_t Brow_Mapping_FNC___Brow_Mapping_FNC_VariableNode_16_2_2_2_Value__Const; // 0x60(0x4)
		int32_t Brow_Mapping_FNC___Brow_Mapping_FNC_VariableNode_16_2_2_2_1_Value__Const; // 0x64(0x4)
		int32_t Brow_Mapping_FNC___Brow_Mapping_FNC_VariableNode_16_2_2_2_2_Value__Const; // 0x68(0x4)
		int32_t Brow_Mapping_FNC___Brow_Mapping_FNC_VariableNode_16_2_2_2_1_1_Value__Const; // 0x6C(0x4)
		double LocalVariableDefault__Eye_Mapping_FNC_l_blink_value__Const; // 0x70(0x8)
		double LocalVariableDefault__Eye_Mapping_FNC_r_blink_value__Const; // 0x78(0x8)
		double LocalVariableDefault__Eye_Mapping_FNC_l_brow_dn_value__Const; // 0x80(0x8)
		double LocalVariableDefault__Eye_Mapping_FNC_r_brow_dn_value__Const; // 0x88(0x8)
		double LocalVariableDefault__Eye_Mapping_FNC_glabella_up_value__Const; // 0x90(0x8)
		double LocalVariableDefault__Eye_Mapping_FNC_glabella_dn_value__Const; // 0x98(0x8)
		double LocalVariableDefault__Eye_Mapping_FNC_l_squint_value__Const; // 0xA0(0x8)
		double LocalVariableDefault__Eye_Mapping_FNC_l_squeeze_value__Const; // 0xA8(0x8)
		double LocalVariableDefault__Eye_Mapping_FNC_r_squint_value__Const; // 0xB0(0x8)
		double LocalVariableDefault__Eye_Mapping_FNC_r_squeeze_value__Const; // 0xB8(0x8)
		double LocalVariableDefault__Eye_Mapping_FNC_l_eye_wide_value__Const; // 0xC0(0x8)
		double LocalVariableDefault__Eye_Mapping_FNC_r_eye_wide_value__Const; // 0xC8(0x8)
		FName Eye_Mapping_FNC___Eye_Mapping_FNC_GetCurveValue_2_Curve__Const; // 0xD0(0x4)
		FName Eye_Mapping_FNC___Eye_Mapping_FNC_GetCurveValue_2_1_Curve__Const; // 0xD4(0x4)
		FName Eye_Mapping_FNC___Eye_Mapping_FNC_GetCurveValue_Curve__Const; // 0xD8(0x4)
		FName Eye_Mapping_FNC___Eye_Mapping_FNC_GetCurveValue_1_Curve__Const; // 0xDC(0x4)
		FName Eye_Mapping_FNC___Eye_Mapping_FNC_GetCurveValue_1_1_Curve__Const; // 0xE0(0x4)
		FName Eye_Mapping_FNC___Eye_Mapping_FNC_GetCurveValue_1_1_1_Curve__Const; // 0xE4(0x4)
		FName Eye_Mapping_FNC___Eye_Mapping_FNC_GetCurveValue_1_1_1_1_Curve__Const; // 0xE8(0x4)
		FName Eye_Mapping_FNC___Eye_Mapping_FNC_GetCurveValue_1_1_1_1_1_Curve__Const; // 0xEC(0x4)
		FName Eye_Mapping_FNC___Eye_Mapping_FNC_GetCurveValue_1_1_1_1_1_1_Curve__Const; // 0xF0(0x4)
		FName Eye_Mapping_FNC___Eye_Mapping_FNC_GetCurveValue_1_1_1_1_1_1_1_Curve__Const; // 0xF4(0x4)
		FName Eye_Mapping_FNC___Eye_Mapping_FNC_GetCurveValue_1_1_1_1_1_1_1_1_Curve__Const; // 0xF8(0x4)
		FName Eye_Mapping_FNC___Eye_Mapping_FNC_GetCurveValue_1_1_1_1_1_1_1_1_1_Curve__Const; // 0xFC(0x4)
		double Eye_Mapping_FNC___Eye_Mapping_FNC_GreaterEqual_B__Const; // 0x100(0x8)
		int32_t Eye_Mapping_FNC___Eye_Mapping_FNC_VariableNode_10_Value__Const; // 0x108(0x4)
		int32_t Eye_Mapping_FNC___Eye_Mapping_FNC_VariableNode_10_1_Value__Const; // 0x10C(0x4)
		int32_t Eye_Mapping_FNC___Eye_Mapping_FNC_VariableNode_10_1_1_Value__Const; // 0x110(0x4)
		int32_t Eye_Mapping_FNC___Eye_Mapping_FNC_VariableNode_10_2_Value__Const; // 0x114(0x4)
		int32_t Eye_Mapping_FNC___Eye_Mapping_FNC_VariableNode_10_2_2_Value__Const; // 0x118(0x4)
		int32_t Eye_Mapping_FNC___Eye_Mapping_FNC_VariableNode_10_2_2_1_Value__Const; // 0x11C(0x4)
		int32_t Eye_Mapping_FNC___Eye_Mapping_FNC_VariableNode_10_2_1_Value__Const; // 0x120(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x124(0x4) UNKNOWN PROPERTY
		double LocalVariableDefault__Mouth_Mapping_FNC_jopen_value__Const; // 0x128(0x8)
		double LocalVariableDefault__Mouth_Mapping_FNC_l_smile_value__Const; // 0x130(0x8)
		double LocalVariableDefault__Mouth_Mapping_FNC_r_smile_value__Const; // 0x138(0x8)
		double LocalVariableDefault__Mouth_Mapping_FNC_l_frown_value__Const; // 0x140(0x8)
		double LocalVariableDefault__Mouth_Mapping_FNC_r_frown_value__Const; // 0x148(0x8)
		double LocalVariableDefault__Mouth_Mapping_FNC_l_upperlip_raiser_value__Const; // 0x150(0x8)
		double LocalVariableDefault__Mouth_Mapping_FNC_r_upperlip_raiser_value__Const; // 0x158(0x8)
		double LocalVariableDefault__Mouth_Mapping_FNC_l_lowerlip_down_value__Const; // 0x160(0x8)
		double LocalVariableDefault__Mouth_Mapping_FNC_r_lowerlip_down_value__Const; // 0x168(0x8)
		bool LocalVariableDefault__Mouth_Mapping_FNC_is_l_snear__Const; // 0x170(0x1)
		bool LocalVariableDefault__Mouth_Mapping_FNC_is_r_snear__Const; // 0x171(0x1)
		unsigned char UnknownData02_6[0x2]; // 0x172(0x2) UNKNOWN PROPERTY
		FName Mouth_Mapping_FNC___Mouth_Mapping_FNC_GetCurveValue_Curve__Const; // 0x174(0x4)
		FName Mouth_Mapping_FNC___Mouth_Mapping_FNC_GetCurveValue_1_Curve__Const; // 0x178(0x4)
		FName Mouth_Mapping_FNC___Mouth_Mapping_FNC_GetCurveValue_1_1_Curve__Const; // 0x17C(0x4)
		FName Mouth_Mapping_FNC___Mouth_Mapping_FNC_GetCurveValue_1_1_1_Curve__Const; // 0x180(0x4)
		FName Mouth_Mapping_FNC___Mouth_Mapping_FNC_GetCurveValue_1_1_1_1_Curve__Const; // 0x184(0x4)
		FName Mouth_Mapping_FNC___Mouth_Mapping_FNC_GetCurveValue_1_1_1_1_1_Curve__Const; // 0x188(0x4)
		FName Mouth_Mapping_FNC___Mouth_Mapping_FNC_GetCurveValue_1_1_1_1_1_1_Curve__Const; // 0x18C(0x4)
		FName Mouth_Mapping_FNC___Mouth_Mapping_FNC_GetCurveValue_1_1_1_1_1_1_1_Curve__Const; // 0x190(0x4)
		FName Mouth_Mapping_FNC___Mouth_Mapping_FNC_GetCurveValue_1_1_1_1_1_1_1_1_Curve__Const; // 0x194(0x4)
		double Mouth_Mapping_FNC___Mouth_Mapping_FNC_GreaterEqual_1_B__Const; // 0x198(0x8)
		bool LocalVariable__FunctionLibrary___Mouth_Mapping_FNC_VariableNode_13_Value__Const; // 0x1A0(0x1)
		bool LocalVariable__FunctionLibrary___Mouth_Mapping_FNC_VariableNode_13_1_Value__Const; // 0x1A1(0x1)
		unsigned char UnknownData03_6[0x2]; // 0x1A2(0x2) UNKNOWN PROPERTY
		int32_t Mouth_Mapping_FNC___Mouth_Mapping_FNC_VariableNode_23_1_2_2_1_Value__Const; // 0x1A4(0x4)
		int32_t Mouth_Mapping_FNC___Mouth_Mapping_FNC_VariableNode_23_1_2_3_2_Value__Const; // 0x1A8(0x4)
		int32_t Mouth_Mapping_FNC___Mouth_Mapping_FNC_VariableNode_23_1_2_3_2_1_Value__Const; // 0x1AC(0x4)
		int32_t Mouth_Mapping_FNC___Mouth_Mapping_FNC_VariableNode_23_1_2_3_2_2_Value__Const; // 0x1B0(0x4)
		int32_t Mouth_Mapping_FNC___Mouth_Mapping_FNC_VariableNode_23_1_2_3_2_2_1_Value__Const; // 0x1B4(0x4)
		int32_t Mouth_Mapping_FNC___Mouth_Mapping_FNC_VariableNode_23_1_2_3_2_2_1_1_Value__Const; // 0x1B8(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x1BC(0x4) UNKNOWN PROPERTY
		TArray<FRigElementKey> Mouth_Mapping_FNC___Mouth_Mapping_FNC_get_largest_val_index_FNC_2_1_2_1_1_1_Curves__Const; // 0x1C0(0x10)
		TArray<int32_t> Mouth_Mapping_FNC___Mouth_Mapping_FNC_get_largest_val_index_FNC_2_1_2_1_1_1_Indexes__Const; // 0x1D0(0x10)
		double LocalVariableDefault__get_largest_val_index_FNC_tmp_val__Const; // 0x1E0(0x8)
		int32_t LocalVariableDefault__get_largest_val_index_FNC_largest_val_index__Const; // 0x1E8(0x4)
		int32_t LocalVariable__FunctionLibrary___get_largest_val_index_FNC_VariableNode_5_Value__Const; // 0x1EC(0x4)
		int32_t Mouth_Mapping_FNC___Mouth_Mapping_FNC_VariableNode_23_2_2_1_1_1_1_2_2_2_Value__Const; // 0x1F0(0x4)
		int32_t Mouth_Mapping_FNC___Mouth_Mapping_FNC_VariableNode_23_2_2_1_1_1_1_2_2_2_1_Value__Const; // 0x1F4(0x4)
		TArray<FRigElementKey> Mouth_Mapping_FNC___Mouth_Mapping_FNC_is_expr_activated_FNC_11_1_1_Curves__Const; // 0x1F8(0x10)
		bool LocalVariableDefault__is_expr_activated_FNC_is_expr_activated__Const; // 0x208(0x1)
		bool LocalVariable__FunctionLibrary___is_expr_activated_FNC_VariableNode_3_Value__Const; // 0x209(0x1)
		bool LocalVariable__FunctionLibrary___is_expr_activated_FNC_VariableNode_Value__Const; // 0x20A(0x1)
		unsigned char UnknownData05_6[0x1]; // 0x20B(0x1) UNKNOWN PROPERTY
		int32_t Mouth_Mapping_FNC___Mouth_Mapping_FNC_VariableNode_23_1_3_Value__Const; // 0x20C(0x4)
		int32_t Mouth_Mapping_FNC___Mouth_Mapping_FNC_VariableNode_23_2_2_1_1_1_1_2_Value__Const; // 0x210(0x4)
		int32_t Mouth_Mapping_FNC___Mouth_Mapping_FNC_VariableNode_23_2_2_1_1_1_1_2_1_Value__Const; // 0x214(0x4)
		int32_t Mouth_Mapping_FNC___Mouth_Mapping_FNC_VariableNode_23_2_2_1_2_2_Value__Const; // 0x218(0x4)
		int32_t Mouth_Mapping_FNC___Mouth_Mapping_FNC_VariableNode_23_2_1_1_2_Value__Const; // 0x21C(0x4)
		int32_t Mouth_Mapping_FNC___Mouth_Mapping_FNC_VariableNode_23_2_1_1_2_1_Value__Const; // 0x220(0x4)
		FName RigVMModel___SetCurveValue_2_Curve__Const; // 0x224(0x4)
		FName RigVMModel___SetCurveValue_1_2_Curve__Const; // 0x228(0x4)
		FName RigVMModel___SetCurveValue_1_1_2_Curve__Const; // 0x22C(0x4)
		FName RigVMModel___SetCurveValue_1_1_1_2_Curve__Const; // 0x230(0x4)
		FName RigVMModel___SetCurveValue_1_1_1_1_1_Curve__Const; // 0x234(0x4)
	};


	// Struct /Engine/Transient.PropertyBag_edcebb9d95efdd95
	// Size: 0x1980 (0x1980 - 0x0)
	struct FPropertyBag_edcebb9d95efdd95	
	{
	public:
		FQuat RigVMModel___MathQuaternionFromEuler_Result; // 0x0(0x20)
		FVector RigVMModel___MathVectorAdd_2_4_2_Result; // 0x20(0x18)
		FVector RigVMModel___MathQuaternionToEuler_4_2_4_Result; // 0x38(0x18)
		FTransform RigVMModel___RigUnit_GetInitialBoneTransform_2_4_Transform; // 0x50(0x60)
		TArray<FCachedRigElement> RigVMModel___RigUnit_GetInitialBoneTransform_2_4_CachedBone; // 0xB0(0x10)
		FQuat RigVMModel___MathQuaternionToEuler_4_2_4_Value; // 0xC0(0x20)
		TArray<FRigUnit_ModifyBoneTransforms_PerBone> RigVMModel___ModifyBoneTransforms_BoneToModify__IO; // 0xE0(0x10)
		float RigVMModel___MathFloatRemap_Result; // 0xF0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0xF4(0x4) UNKNOWN PROPERTY
		FVector RigVMModel___MathQuaternionToEuler_Result; // 0xF8(0x18)
		FTransform RigVMModel___RigUnit_GetRelativeBoneTransform_Transform; // 0x110(0x60)
		TArray<FCachedRigElement> RigVMModel___RigUnit_GetRelativeBoneTransform_CachedBone; // 0x170(0x10)
		TArray<FCachedRigElement> RigVMModel___RigUnit_GetRelativeBoneTransform_CachedSpace; // 0x180(0x10)
		FQuat RigVMModel___MathQuaternionToEuler_Value; // 0x190(0x20)
		float RigVMModel___MathFloatRemap_Value; // 0x1B0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x1B4(0x4) UNKNOWN PROPERTY
		TArray<FRigUnit_ModifyBoneTransforms_WorkData> RigVMModel___ModifyBoneTransforms_WorkData; // 0x1B8(0x10)
		unsigned char UnknownData02_6[0x8]; // 0x1C8(0x8) UNKNOWN PROPERTY
		FQuat RigVMModel___MathQuaternionFromEuler_1_Result; // 0x1D0(0x20)
		FVector RigVMModel___MathVectorAdd_2_4_2_1_Result; // 0x1F0(0x18)
		FVector RigVMModel___MathQuaternionToEuler_4_2_4_1_Result; // 0x208(0x18)
		FTransform RigVMModel___RigUnit_GetInitialBoneTransform_2_4_1_Transform; // 0x220(0x60)
		TArray<FCachedRigElement> RigVMModel___RigUnit_GetInitialBoneTransform_2_4_1_CachedBone; // 0x280(0x10)
		FQuat RigVMModel___MathQuaternionToEuler_4_2_4_1_Value; // 0x290(0x20)
		TArray<FRigUnit_ModifyBoneTransforms_PerBone> RigVMModel___ModifyBoneTransforms_1_BoneToModify__IO; // 0x2B0(0x10)
		TArray<FRigUnit_ModifyBoneTransforms_WorkData> RigVMModel___ModifyBoneTransforms_1_WorkData; // 0x2C0(0x10)
		FQuat RigVMModel___MathQuaternionFromEuler_2_Result; // 0x2D0(0x20)
		FVector RigVMModel___MathVectorAdd_2_4_2_2_Result; // 0x2F0(0x18)
		TArray<FRigUnit_ModifyBoneTransforms_PerBone> RigVMModel___ModifyBoneTransforms_2_BoneToModify__IO; // 0x308(0x10)
		float RigVMModel___MathFloatRemap_1_Result; // 0x318(0x4)
		float RigVMModel___MathFloatRemap_1_Value; // 0x31C(0x4)
		TArray<FRigUnit_ModifyBoneTransforms_WorkData> RigVMModel___ModifyBoneTransforms_2_WorkData; // 0x320(0x10)
		FQuat RigVMModel___MathQuaternionFromEuler_1_1_Result; // 0x330(0x20)
		FVector RigVMModel___MathVectorAdd_2_4_2_1_1_Result; // 0x350(0x18)
		TArray<FRigUnit_ModifyBoneTransforms_PerBone> RigVMModel___ModifyBoneTransforms_1_1_BoneToModify__IO; // 0x368(0x10)
		TArray<FRigUnit_ModifyBoneTransforms_WorkData> RigVMModel___ModifyBoneTransforms_1_1_WorkData; // 0x378(0x10)
		unsigned char UnknownData03_6[0x8]; // 0x388(0x8) UNKNOWN PROPERTY
		FQuat RigVMModel___MathQuaternionFromEuler_5_Result; // 0x390(0x20)
		FVector RigVMModel___MathVectorAdd_2_4_2_3_Result; // 0x3B0(0x18)
		FVector RigVMModel___MathQuaternionToEuler_4_2_4_2_Result; // 0x3C8(0x18)
		FTransform RigVMModel___RigUnit_GetInitialBoneTransform_2_4_2_Transform; // 0x3E0(0x60)
		TArray<FCachedRigElement> RigVMModel___RigUnit_GetInitialBoneTransform_2_4_2_CachedBone; // 0x440(0x10)
		FQuat RigVMModel___MathQuaternionToEuler_4_2_4_2_Value; // 0x450(0x20)
		TArray<FRigUnit_ModifyBoneTransforms_PerBone> RigVMModel___ModifyBoneTransforms_4_BoneToModify__IO; // 0x470(0x10)
		float RigVMModel___MathFloatRemap_3_Result; // 0x480(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x484(0x4) UNKNOWN PROPERTY
		FVector RigVMModel___MathQuaternionToEuler_2_Result; // 0x488(0x18)
		FTransform RigVMModel___RigUnit_GetRelativeBoneTransform_2_Transform; // 0x4A0(0x60)
		TArray<FCachedRigElement> RigVMModel___RigUnit_GetRelativeBoneTransform_2_CachedBone; // 0x500(0x10)
		TArray<FCachedRigElement> RigVMModel___RigUnit_GetRelativeBoneTransform_2_CachedSpace; // 0x510(0x10)
		FQuat RigVMModel___MathQuaternionToEuler_2_Value; // 0x520(0x20)
		float RigVMModel___MathFloatRemap_3_Value; // 0x540(0x4)
		unsigned char UnknownData05_6[0x4]; // 0x544(0x4) UNKNOWN PROPERTY
		TArray<FRigUnit_ModifyBoneTransforms_WorkData> RigVMModel___ModifyBoneTransforms_4_WorkData; // 0x548(0x10)
		unsigned char UnknownData06_6[0x8]; // 0x558(0x8) UNKNOWN PROPERTY
		FQuat RigVMModel___MathQuaternionFromEuler_1_3_Result; // 0x560(0x20)
		FVector RigVMModel___MathVectorAdd_2_4_2_1_2_Result; // 0x580(0x18)
		FVector RigVMModel___MathQuaternionToEuler_4_2_4_1_1_Result; // 0x598(0x18)
		FTransform RigVMModel___RigUnit_GetInitialBoneTransform_2_4_1_1_Transform; // 0x5B0(0x60)
		TArray<FCachedRigElement> RigVMModel___RigUnit_GetInitialBoneTransform_2_4_1_1_CachedBone; // 0x610(0x10)
		FQuat RigVMModel___MathQuaternionToEuler_4_2_4_1_1_Value; // 0x620(0x20)
		TArray<FRigUnit_ModifyBoneTransforms_PerBone> RigVMModel___ModifyBoneTransforms_1_3_BoneToModify__IO; // 0x640(0x10)
		TArray<FRigUnit_ModifyBoneTransforms_WorkData> RigVMModel___ModifyBoneTransforms_1_3_WorkData; // 0x650(0x10)
		FQuat RigVMModel___MathQuaternionFromEuler_2_3_Result; // 0x660(0x20)
		FVector RigVMModel___MathVectorAdd_2_4_2_2_1_Result; // 0x680(0x18)
		TArray<FRigUnit_ModifyBoneTransforms_PerBone> RigVMModel___ModifyBoneTransforms_2_2_BoneToModify__IO; // 0x698(0x10)
		float RigVMModel___MathFloatRemap_1_2_Result; // 0x6A8(0x4)
		float RigVMModel___MathFloatRemap_1_2_Value; // 0x6AC(0x4)
		TArray<FRigUnit_ModifyBoneTransforms_WorkData> RigVMModel___ModifyBoneTransforms_2_2_WorkData; // 0x6B0(0x10)
		FQuat RigVMModel___MathQuaternionFromEuler_1_1_2_Result; // 0x6C0(0x20)
		FVector RigVMModel___MathVectorAdd_2_4_2_1_1_1_Result; // 0x6E0(0x18)
		TArray<FRigUnit_ModifyBoneTransforms_PerBone> RigVMModel___ModifyBoneTransforms_1_1_2_BoneToModify__IO; // 0x6F8(0x10)
		TArray<FRigUnit_ModifyBoneTransforms_WorkData> RigVMModel___ModifyBoneTransforms_1_1_2_WorkData; // 0x708(0x10)
		unsigned char UnknownData07_6[0x8]; // 0x718(0x8) UNKNOWN PROPERTY
		FQuat RigVMModel___MathQuaternionFromEuler_3_Result; // 0x720(0x20)
		FVector RigVMModel___MathVectorAdd_2_4_3_Result; // 0x740(0x18)
		FVector RigVMModel___MathQuaternionToEuler_4_2_Result; // 0x758(0x18)
		FTransform RigVMModel___RigUnit_GetInitialBoneTransform_2_Transform; // 0x770(0x60)
		TArray<FCachedRigElement> RigVMModel___RigUnit_GetInitialBoneTransform_2_CachedBone; // 0x7D0(0x10)
		FQuat RigVMModel___MathQuaternionToEuler_4_2_Value; // 0x7E0(0x20)
		TArray<FRigUnit_ModifyBoneTransforms_PerBone> RigVMModel___ModifyBoneTransforms_3_BoneToModify__IO; // 0x800(0x10)
		float RigVMModel___MathFloatRemap_2_Result; // 0x810(0x4)
		unsigned char UnknownData08_6[0x4]; // 0x814(0x4) UNKNOWN PROPERTY
		FVector RigVMModel___MathQuaternionToEuler_1_Result; // 0x818(0x18)
		FTransform RigVMModel___RigUnit_GetRelativeBoneTransform_1_Transform; // 0x830(0x60)
		TArray<FCachedRigElement> RigVMModel___RigUnit_GetRelativeBoneTransform_1_CachedBone; // 0x890(0x10)
		TArray<FCachedRigElement> RigVMModel___RigUnit_GetRelativeBoneTransform_1_CachedSpace; // 0x8A0(0x10)
		FQuat RigVMModel___MathQuaternionToEuler_1_Value; // 0x8B0(0x20)
		float RigVMModel___MathFloatRemap_2_Value; // 0x8D0(0x4)
		unsigned char UnknownData09_6[0x4]; // 0x8D4(0x4) UNKNOWN PROPERTY
		TArray<FRigUnit_ModifyBoneTransforms_WorkData> RigVMModel___ModifyBoneTransforms_3_WorkData; // 0x8D8(0x10)
		unsigned char UnknownData10_6[0x8]; // 0x8E8(0x8) UNKNOWN PROPERTY
		FQuat RigVMModel___MathQuaternionFromEuler_1_2_Result; // 0x8F0(0x20)
		FVector RigVMModel___MathVectorAdd_2_4_Result; // 0x910(0x18)
		FVector RigVMModel___MathQuaternionToEuler_4_2_1_Result; // 0x928(0x18)
		FTransform RigVMModel___RigUnit_GetInitialBoneTransform_2_1_Transform; // 0x940(0x60)
		TArray<FCachedRigElement> RigVMModel___RigUnit_GetInitialBoneTransform_2_1_CachedBone; // 0x9A0(0x10)
		FQuat RigVMModel___MathQuaternionToEuler_4_2_1_Value; // 0x9B0(0x20)
		TArray<FRigUnit_ModifyBoneTransforms_PerBone> RigVMModel___ModifyBoneTransforms_1_2_BoneToModify__IO; // 0x9D0(0x10)
		TArray<FRigUnit_ModifyBoneTransforms_WorkData> RigVMModel___ModifyBoneTransforms_1_2_WorkData; // 0x9E0(0x10)
		FQuat RigVMModel___MathQuaternionFromEuler_2_2_Result; // 0x9F0(0x20)
		FVector RigVMModel___MathVectorAdd_2_4_1_Result; // 0xA10(0x18)
		TArray<FRigUnit_ModifyBoneTransforms_PerBone> RigVMModel___ModifyBoneTransforms_2_1_BoneToModify__IO; // 0xA28(0x10)
		float RigVMModel___MathFloatRemap_1_1_Result; // 0xA38(0x4)
		float RigVMModel___MathFloatRemap_1_1_Value; // 0xA3C(0x4)
		TArray<FRigUnit_ModifyBoneTransforms_WorkData> RigVMModel___ModifyBoneTransforms_2_1_WorkData; // 0xA40(0x10)
		FQuat RigVMModel___MathQuaternionFromEuler_1_1_1_Result; // 0xA50(0x20)
		FVector RigVMModel___MathVectorAdd_2_4_1_1_Result; // 0xA70(0x18)
		TArray<FRigUnit_ModifyBoneTransforms_PerBone> RigVMModel___ModifyBoneTransforms_1_1_1_BoneToModify__IO; // 0xA88(0x10)
		TArray<FRigUnit_ModifyBoneTransforms_WorkData> RigVMModel___ModifyBoneTransforms_1_1_1_WorkData; // 0xA98(0x10)
		unsigned char UnknownData11_6[0x8]; // 0xAA8(0x8) UNKNOWN PROPERTY
		FQuat RigVMModel___MathQuaternionFromEuler_3_1_Result; // 0xAB0(0x20)
		FVector RigVMModel___MathVectorAdd_2_3_Result; // 0xAD0(0x18)
		FVector RigVMModel___MathQuaternionToEuler_4_2_3_Result; // 0xAE8(0x18)
		FTransform RigVMModel___RigUnit_GetInitialBoneTransform_2_3_Transform; // 0xB00(0x60)
		TArray<FCachedRigElement> RigVMModel___RigUnit_GetInitialBoneTransform_2_3_CachedBone; // 0xB60(0x10)
		FQuat RigVMModel___MathQuaternionToEuler_4_2_3_Value; // 0xB70(0x20)
		TArray<FRigUnit_ModifyBoneTransforms_PerBone> RigVMModel___ModifyBoneTransforms_3_1_BoneToModify__IO; // 0xB90(0x10)
		float RigVMModel___MathFloatRemap_2_1_Result; // 0xBA0(0x4)
		unsigned char UnknownData12_6[0x4]; // 0xBA4(0x4) UNKNOWN PROPERTY
		FVector RigVMModel___MathQuaternionToEuler_1_2_Result; // 0xBA8(0x18)
		FTransform RigVMModel___RigUnit_GetRelativeBoneTransform_1_1_Transform; // 0xBC0(0x60)
		TArray<FCachedRigElement> RigVMModel___RigUnit_GetRelativeBoneTransform_1_1_CachedBone; // 0xC20(0x10)
		TArray<FCachedRigElement> RigVMModel___RigUnit_GetRelativeBoneTransform_1_1_CachedSpace; // 0xC30(0x10)
		FQuat RigVMModel___MathQuaternionToEuler_1_2_Value; // 0xC40(0x20)
		float RigVMModel___MathFloatRemap_2_1_Value; // 0xC60(0x4)
		unsigned char UnknownData13_6[0x4]; // 0xC64(0x4) UNKNOWN PROPERTY
		TArray<FRigUnit_ModifyBoneTransforms_WorkData> RigVMModel___ModifyBoneTransforms_3_1_WorkData; // 0xC68(0x10)
		unsigned char UnknownData14_6[0x8]; // 0xC78(0x8) UNKNOWN PROPERTY
		FQuat RigVMModel___MathQuaternionFromEuler_1_2_1_Result; // 0xC80(0x20)
		FVector RigVMModel___MathVectorAdd_2_2_Result; // 0xCA0(0x18)
		FVector RigVMModel___MathQuaternionToEuler_4_2_2_Result; // 0xCB8(0x18)
		FTransform RigVMModel___RigUnit_GetInitialBoneTransform_2_2_Transform; // 0xCD0(0x60)
		TArray<FCachedRigElement> RigVMModel___RigUnit_GetInitialBoneTransform_2_2_CachedBone; // 0xD30(0x10)
		FQuat RigVMModel___MathQuaternionToEuler_4_2_2_Value; // 0xD40(0x20)
		TArray<FRigUnit_ModifyBoneTransforms_PerBone> RigVMModel___ModifyBoneTransforms_1_2_1_BoneToModify__IO; // 0xD60(0x10)
		TArray<FRigUnit_ModifyBoneTransforms_WorkData> RigVMModel___ModifyBoneTransforms_1_2_1_WorkData; // 0xD70(0x10)
		FQuat RigVMModel___MathQuaternionFromEuler_2_2_1_Result; // 0xD80(0x20)
		FVector RigVMModel___MathVectorAdd_2_1_Result; // 0xDA0(0x18)
		TArray<FRigUnit_ModifyBoneTransforms_PerBone> RigVMModel___ModifyBoneTransforms_2_1_1_BoneToModify__IO; // 0xDB8(0x10)
		float RigVMModel___MathFloatRemap_1_1_1_Result; // 0xDC8(0x4)
		float RigVMModel___MathFloatRemap_1_1_1_Value; // 0xDCC(0x4)
		TArray<FRigUnit_ModifyBoneTransforms_WorkData> RigVMModel___ModifyBoneTransforms_2_1_1_WorkData; // 0xDD0(0x10)
		FQuat RigVMModel___MathQuaternionFromEuler_1_1_1_1_Result; // 0xDE0(0x20)
		FVector RigVMModel___MathVectorAdd_2_Result; // 0xE00(0x18)
		TArray<FRigUnit_ModifyBoneTransforms_PerBone> RigVMModel___ModifyBoneTransforms_1_1_1_1_BoneToModify__IO; // 0xE18(0x10)
		TArray<FRigUnit_ModifyBoneTransforms_WorkData> RigVMModel___ModifyBoneTransforms_1_1_1_1_WorkData; // 0xE28(0x10)
		unsigned char UnknownData15_6[0x8]; // 0xE38(0x8) UNKNOWN PROPERTY
		FQuat RigVMModel___MathQuaternionFromEuler_4_1_Result; // 0xE40(0x20)
		FVector RigVMModel___MathVectorAdd_3_Result; // 0xE60(0x18)
		FVector RigVMModel___MathQuaternionToEuler_4_3_Result; // 0xE78(0x18)
		FTransform RigVMModel___RigUnit_GetInitialBoneTransform_3_Transform; // 0xE90(0x60)
		TArray<FCachedRigElement> RigVMModel___RigUnit_GetInitialBoneTransform_3_CachedBone; // 0xEF0(0x10)
		FQuat RigVMModel___MathQuaternionToEuler_4_3_Value; // 0xF00(0x20)
		TArray<FRigUnit_ModifyBoneTransforms_PerBone> RigVMModel___ModifyBoneTransforms_5_1_BoneToModify__IO; // 0xF20(0x10)
		float RigVMModel___MathFloatRemap_4_1_Result; // 0xF30(0x4)
		float RigVMModel___MathFloatAbs_Result; // 0xF34(0x4)
		FVector RigVMModel___MathQuaternionToEuler_3_1_Result; // 0xF38(0x18)
		FTransform RigVMModel___RigUnit_GetRelativeBoneTransform_3_1_Transform; // 0xF50(0x60)
		TArray<FCachedRigElement> RigVMModel___RigUnit_GetRelativeBoneTransform_3_1_CachedBone; // 0xFB0(0x10)
		TArray<FCachedRigElement> RigVMModel___RigUnit_GetRelativeBoneTransform_3_1_CachedSpace; // 0xFC0(0x10)
		FQuat RigVMModel___MathQuaternionToEuler_3_1_Value; // 0xFD0(0x20)
		float RigVMModel___MathFloatAbs_Value; // 0xFF0(0x4)
		unsigned char UnknownData16_6[0x4]; // 0xFF4(0x4) UNKNOWN PROPERTY
		TArray<FRigUnit_ModifyBoneTransforms_WorkData> RigVMModel___ModifyBoneTransforms_5_1_WorkData; // 0xFF8(0x10)
		unsigned char UnknownData17_6[0x8]; // 0x1008(0x8) UNKNOWN PROPERTY
		FQuat RigVMModel___MathQuaternionFromEuler_1_4_1_1_Result; // 0x1010(0x20)
		FVector RigVMModel___MathVectorAdd_1_1_Result; // 0x1030(0x18)
		FVector RigVMModel___MathQuaternionToEuler_4_1_1_Result; // 0x1048(0x18)
		FTransform RigVMModel___RigUnit_GetInitialBoneTransform_1_1_Transform; // 0x1060(0x60)
		TArray<FCachedRigElement> RigVMModel___RigUnit_GetInitialBoneTransform_1_1_CachedBone; // 0x10C0(0x10)
		FQuat RigVMModel___MathQuaternionToEuler_4_1_1_Value; // 0x10D0(0x20)
		TArray<FRigUnit_ModifyBoneTransforms_PerBone> RigVMModel___ModifyBoneTransforms_1_4_1_BoneToModify__IO; // 0x10F0(0x10)
		TArray<FRigUnit_ModifyBoneTransforms_WorkData> RigVMModel___ModifyBoneTransforms_1_4_1_WorkData; // 0x1100(0x10)
		FQuat RigVMModel___MathQuaternionFromEuler_4_Result; // 0x1110(0x20)
		FVector RigVMModel___MathVectorAdd_Result; // 0x1130(0x18)
		FVector RigVMModel___MathQuaternionToEuler_4_Result; // 0x1148(0x18)
		FTransform RigVMModel___RigUnit_GetInitialBoneTransform_Transform; // 0x1160(0x60)
		TArray<FCachedRigElement> RigVMModel___RigUnit_GetInitialBoneTransform_CachedBone; // 0x11C0(0x10)
		FQuat RigVMModel___MathQuaternionToEuler_4_Value; // 0x11D0(0x20)
		TArray<FRigUnit_ModifyBoneTransforms_PerBone> RigVMModel___ModifyBoneTransforms_5_BoneToModify__IO; // 0x11F0(0x10)
		float RigVMModel___MathFloatRemap_4_Result; // 0x1200(0x4)
		float RigVMModel___MathFloatAbs_1_Result; // 0x1204(0x4)
		FVector RigVMModel___MathQuaternionToEuler_3_Result; // 0x1208(0x18)
		FTransform RigVMModel___RigUnit_GetRelativeBoneTransform_3_Transform; // 0x1220(0x60)
		TArray<FCachedRigElement> RigVMModel___RigUnit_GetRelativeBoneTransform_3_CachedBone; // 0x1280(0x10)
		TArray<FCachedRigElement> RigVMModel___RigUnit_GetRelativeBoneTransform_3_CachedSpace; // 0x1290(0x10)
		FQuat RigVMModel___MathQuaternionToEuler_3_Value; // 0x12A0(0x20)
		float RigVMModel___MathFloatAbs_1_Value; // 0x12C0(0x4)
		unsigned char UnknownData18_6[0x4]; // 0x12C4(0x4) UNKNOWN PROPERTY
		TArray<FRigUnit_ModifyBoneTransforms_WorkData> RigVMModel___ModifyBoneTransforms_5_WorkData; // 0x12C8(0x10)
		unsigned char UnknownData19_6[0x8]; // 0x12D8(0x8) UNKNOWN PROPERTY
		FQuat RigVMModel___MathQuaternionFromEuler_1_4_1_Result; // 0x12E0(0x20)
		FVector RigVMModel___MathVectorAdd_1_Result; // 0x1300(0x18)
		FVector RigVMModel___MathQuaternionToEuler_4_1_Result; // 0x1318(0x18)
		FTransform RigVMModel___RigUnit_GetInitialBoneTransform_1_Transform; // 0x1330(0x60)
		TArray<FCachedRigElement> RigVMModel___RigUnit_GetInitialBoneTransform_1_CachedBone; // 0x1390(0x10)
		FQuat RigVMModel___MathQuaternionToEuler_4_1_Value; // 0x13A0(0x20)
		TArray<FRigUnit_ModifyBoneTransforms_PerBone> RigVMModel___ModifyBoneTransforms_1_4_BoneToModify__IO; // 0x13C0(0x10)
		TArray<FRigUnit_ModifyBoneTransforms_WorkData> RigVMModel___ModifyBoneTransforms_1_4_WorkData; // 0x13D0(0x10)
		FQuat RigVMModel___MathQuaternionFromEuler_4_1_1_Result; // 0x13E0(0x20)
		FVector RigVMModel___MathVectorAdd_3_1_Result; // 0x1400(0x18)
		FVector RigVMModel___MathQuaternionToEuler_4_3_1_Result; // 0x1418(0x18)
		FTransform RigVMModel___RigUnit_GetInitialBoneTransform_3_1_Transform; // 0x1430(0x60)
		TArray<FCachedRigElement> RigVMModel___RigUnit_GetInitialBoneTransform_3_1_CachedBone; // 0x1490(0x10)
		FQuat RigVMModel___MathQuaternionToEuler_4_3_1_Value; // 0x14A0(0x20)
		TArray<FRigUnit_ModifyBoneTransforms_PerBone> RigVMModel___ModifyBoneTransforms_5_1_1_BoneToModify__IO; // 0x14C0(0x10)
		float RigVMModel___MathFloatRemap_4_1_1_Result; // 0x14D0(0x4)
		float RigVMModel___MathFloatAbs_2_Result; // 0x14D4(0x4)
		FVector RigVMModel___MathQuaternionToEuler_3_1_1_Result; // 0x14D8(0x18)
		FTransform RigVMModel___RigUnit_GetRelativeBoneTransform_3_1_1_Transform; // 0x14F0(0x60)
		TArray<FCachedRigElement> RigVMModel___RigUnit_GetRelativeBoneTransform_3_1_1_CachedBone; // 0x1550(0x10)
		TArray<FCachedRigElement> RigVMModel___RigUnit_GetRelativeBoneTransform_3_1_1_CachedSpace; // 0x1560(0x10)
		FQuat RigVMModel___MathQuaternionToEuler_3_1_1_Value; // 0x1570(0x20)
		float RigVMModel___MathFloatAbs_2_Value; // 0x1590(0x4)
		unsigned char UnknownData20_6[0x4]; // 0x1594(0x4) UNKNOWN PROPERTY
		TArray<FRigUnit_ModifyBoneTransforms_WorkData> RigVMModel___ModifyBoneTransforms_5_1_1_WorkData; // 0x1598(0x10)
		unsigned char UnknownData21_6[0x8]; // 0x15A8(0x8) UNKNOWN PROPERTY
		FQuat RigVMModel___MathQuaternionFromEuler_1_4_1_1_1_Result; // 0x15B0(0x20)
		FVector RigVMModel___MathVectorAdd_1_1_1_Result; // 0x15D0(0x18)
		FVector RigVMModel___MathQuaternionToEuler_4_1_1_1_Result; // 0x15E8(0x18)
		FTransform RigVMModel___RigUnit_GetInitialBoneTransform_1_1_1_Transform; // 0x1600(0x60)
		TArray<FCachedRigElement> RigVMModel___RigUnit_GetInitialBoneTransform_1_1_1_CachedBone; // 0x1660(0x10)
		FQuat RigVMModel___MathQuaternionToEuler_4_1_1_1_Value; // 0x1670(0x20)
		TArray<FRigUnit_ModifyBoneTransforms_PerBone> RigVMModel___ModifyBoneTransforms_1_4_1_1_BoneToModify__IO; // 0x1690(0x10)
		TArray<FRigUnit_ModifyBoneTransforms_WorkData> RigVMModel___ModifyBoneTransforms_1_4_1_1_WorkData; // 0x16A0(0x10)
		FQuat RigVMModel___MathQuaternionFromEuler_4_1_1_1_Result; // 0x16B0(0x20)
		FVector RigVMModel___MathVectorAdd_3_1_1_Result; // 0x16D0(0x18)
		FVector RigVMModel___MathQuaternionToEuler_4_3_1_1_Result; // 0x16E8(0x18)
		FTransform RigVMModel___RigUnit_GetInitialBoneTransform_3_1_1_Transform; // 0x1700(0x60)
		TArray<FCachedRigElement> RigVMModel___RigUnit_GetInitialBoneTransform_3_1_1_CachedBone; // 0x1760(0x10)
		FQuat RigVMModel___MathQuaternionToEuler_4_3_1_1_Value; // 0x1770(0x20)
		TArray<FRigUnit_ModifyBoneTransforms_PerBone> RigVMModel___ModifyBoneTransforms_5_1_1_1_BoneToModify__IO; // 0x1790(0x10)
		float RigVMModel___MathFloatRemap_4_1_1_1_Result; // 0x17A0(0x4)
		float RigVMModel___MathFloatAbs_2_1_Result; // 0x17A4(0x4)
		FVector RigVMModel___MathQuaternionToEuler_3_1_1_1_Result; // 0x17A8(0x18)
		FTransform RigVMModel___RigUnit_GetRelativeBoneTransform_3_1_1_1_Transform; // 0x17C0(0x60)
		TArray<FCachedRigElement> RigVMModel___RigUnit_GetRelativeBoneTransform_3_1_1_1_CachedBone; // 0x1820(0x10)
		TArray<FCachedRigElement> RigVMModel___RigUnit_GetRelativeBoneTransform_3_1_1_1_CachedSpace; // 0x1830(0x10)
		FQuat RigVMModel___MathQuaternionToEuler_3_1_1_1_Value; // 0x1840(0x20)
		float RigVMModel___MathFloatAbs_2_1_Value; // 0x1860(0x4)
		unsigned char UnknownData22_6[0x4]; // 0x1864(0x4) UNKNOWN PROPERTY
		TArray<FRigUnit_ModifyBoneTransforms_WorkData> RigVMModel___ModifyBoneTransforms_5_1_1_1_WorkData; // 0x1868(0x10)
		unsigned char UnknownData23_6[0x8]; // 0x1878(0x8) UNKNOWN PROPERTY
		FQuat RigVMModel___MathQuaternionFromEuler_1_4_1_1_1_1_Result; // 0x1880(0x20)
		FVector RigVMModel___MathVectorAdd_1_1_1_1_Result; // 0x18A0(0x18)
		FVector RigVMModel___MathQuaternionToEuler_4_1_1_1_1_Result; // 0x18B8(0x18)
		FTransform RigVMModel___RigUnit_GetInitialBoneTransform_1_1_1_1_Transform; // 0x18D0(0x60)
		TArray<FCachedRigElement> RigVMModel___RigUnit_GetInitialBoneTransform_1_1_1_1_CachedBone; // 0x1930(0x10)
		FQuat RigVMModel___MathQuaternionToEuler_4_1_1_1_1_Value; // 0x1940(0x20)
		TArray<FRigUnit_ModifyBoneTransforms_PerBone> RigVMModel___ModifyBoneTransforms_1_4_1_1_1_BoneToModify__IO; // 0x1960(0x10)
		TArray<FRigUnit_ModifyBoneTransforms_WorkData> RigVMModel___ModifyBoneTransforms_1_4_1_1_1_WorkData; // 0x1970(0x10)
	};


	// Struct /Engine/Transient.PropertyBag_76a231784cb1d1fa
	// Size: 0x3E0 (0x3E0 - 0x0)
	struct FPropertyBag_76a231784cb1d1fa	
	{
	public:
		TArray<FRigUnit_ModifyBoneTransforms_PerBone> RigVMModel___ModifyBoneTransforms_BoneToModify__Const; // 0x0(0x10)
		FName RigVMModel___RigUnit_GetInitialBoneTransform_2_4_Bone__Const; // 0x10(0x4)
		ERigVMTransformSpace RigVMModel___RigUnit_GetInitialBoneTransform_2_4_Space__Const; // 0x14(0x1)
		EEulerRotationOrder RigVMModel___MathQuaternionToEuler_4_2_4_RotationOrder__Const; // 0x15(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x16(0x2) UNKNOWN PROPERTY
		FVector RigVMModel___MathVectorAdd_2_4_2_B__Const; // 0x18(0x18)
		FName RigVMModel___RigUnit_GetRelativeBoneTransform_Bone__Const; // 0x30(0x4)
		FName RigVMModel___RigUnit_GetRelativeBoneTransform_Space__Const; // 0x34(0x4)
		float RigVMModel___MathFloatRemap_SourceMinimum__Const; // 0x38(0x4)
		float RigVMModel___MathFloatRemap_SourceMaximum__Const; // 0x3C(0x4)
		float RigVMModel___MathFloatRemap_TargetMinimum__Const; // 0x40(0x4)
		float RigVMModel___MathFloatRemap_TargetMaximum__Const; // 0x44(0x4)
		bool RigVMModel___MathFloatRemap_bClamp__Const; // 0x48(0x1)
		EControlRigModifyBoneMode RigVMModel___ModifyBoneTransforms_Mode__Const; // 0x49(0x1)
		unsigned char UnknownData01_6[0x6]; // 0x4A(0x6) UNKNOWN PROPERTY
		TArray<FRigUnit_ModifyBoneTransforms_PerBone> RigVMModel___ModifyBoneTransforms_1_BoneToModify__Const; // 0x50(0x10)
		FName RigVMModel___RigUnit_GetInitialBoneTransform_2_4_1_Bone__Const; // 0x60(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x64(0x4) UNKNOWN PROPERTY
		FVector RigVMModel___MathVectorAdd_2_4_2_1_B__Const; // 0x68(0x18)
		TArray<FRigUnit_ModifyBoneTransforms_PerBone> RigVMModel___ModifyBoneTransforms_2_BoneToModify__Const; // 0x80(0x10)
		float RigVMModel___MathFloatRemap_1_SourceMinimum__Const; // 0x90(0x4)
		float RigVMModel___MathFloatRemap_1_SourceMaximum__Const; // 0x94(0x4)
		TArray<FRigUnit_ModifyBoneTransforms_PerBone> RigVMModel___ModifyBoneTransforms_1_1_BoneToModify__Const; // 0x98(0x10)
		FVector RigVMModel___MathVectorAdd_2_4_2_1_1_B__Const; // 0xA8(0x18)
		TArray<FRigUnit_ModifyBoneTransforms_PerBone> RigVMModel___ModifyBoneTransforms_4_BoneToModify__Const; // 0xC0(0x10)
		FName RigVMModel___RigUnit_GetInitialBoneTransform_2_4_2_Bone__Const; // 0xD0(0x4)
		FName RigVMModel___RigUnit_GetRelativeBoneTransform_2_Bone__Const; // 0xD4(0x4)
		FName RigVMModel___RigUnit_GetRelativeBoneTransform_2_Space__Const; // 0xD8(0x4)
		unsigned char UnknownData03_6[0x4]; // 0xDC(0x4) UNKNOWN PROPERTY
		TArray<FRigUnit_ModifyBoneTransforms_PerBone> RigVMModel___ModifyBoneTransforms_1_3_BoneToModify__Const; // 0xE0(0x10)
		FName RigVMModel___RigUnit_GetInitialBoneTransform_2_4_1_1_Bone__Const; // 0xF0(0x4)
		unsigned char UnknownData04_6[0x4]; // 0xF4(0x4) UNKNOWN PROPERTY
		TArray<FRigUnit_ModifyBoneTransforms_PerBone> RigVMModel___ModifyBoneTransforms_2_2_BoneToModify__Const; // 0xF8(0x10)
		TArray<FRigUnit_ModifyBoneTransforms_PerBone> RigVMModel___ModifyBoneTransforms_1_1_2_BoneToModify__Const; // 0x108(0x10)
		TArray<FRigUnit_ModifyBoneTransforms_PerBone> RigVMModel___ModifyBoneTransforms_3_BoneToModify__Const; // 0x118(0x10)
		FName RigVMModel___RigUnit_GetInitialBoneTransform_2_Bone__Const; // 0x128(0x4)
		unsigned char UnknownData05_6[0x4]; // 0x12C(0x4) UNKNOWN PROPERTY
		FVector RigVMModel___MathVectorAdd_2_4_3_B__Const; // 0x130(0x18)
		FName RigVMModel___RigUnit_GetRelativeBoneTransform_1_Bone__Const; // 0x148(0x4)
		FName RigVMModel___RigUnit_GetRelativeBoneTransform_1_Space__Const; // 0x14C(0x4)
		float RigVMModel___MathFloatRemap_2_SourceMinimum__Const; // 0x150(0x4)
		float RigVMModel___MathFloatRemap_2_SourceMaximum__Const; // 0x154(0x4)
		TArray<FRigUnit_ModifyBoneTransforms_PerBone> RigVMModel___ModifyBoneTransforms_1_2_BoneToModify__Const; // 0x158(0x10)
		FName RigVMModel___RigUnit_GetInitialBoneTransform_2_1_Bone__Const; // 0x168(0x4)
		unsigned char UnknownData06_6[0x4]; // 0x16C(0x4) UNKNOWN PROPERTY
		TArray<FRigUnit_ModifyBoneTransforms_PerBone> RigVMModel___ModifyBoneTransforms_2_1_BoneToModify__Const; // 0x170(0x10)
		FVector RigVMModel___MathVectorAdd_2_4_1_B__Const; // 0x180(0x18)
		float RigVMModel___MathFloatRemap_1_1_SourceMinimum__Const; // 0x198(0x4)
		float RigVMModel___MathFloatRemap_1_1_SourceMaximum__Const; // 0x19C(0x4)
		TArray<FRigUnit_ModifyBoneTransforms_PerBone> RigVMModel___ModifyBoneTransforms_1_1_1_BoneToModify__Const; // 0x1A0(0x10)
		TArray<FRigUnit_ModifyBoneTransforms_PerBone> RigVMModel___ModifyBoneTransforms_3_1_BoneToModify__Const; // 0x1B0(0x10)
		FName RigVMModel___RigUnit_GetInitialBoneTransform_2_3_Bone__Const; // 0x1C0(0x4)
		FName RigVMModel___RigUnit_GetRelativeBoneTransform_1_1_Bone__Const; // 0x1C4(0x4)
		FName RigVMModel___RigUnit_GetRelativeBoneTransform_1_1_Space__Const; // 0x1C8(0x4)
		unsigned char UnknownData07_6[0x4]; // 0x1CC(0x4) UNKNOWN PROPERTY
		TArray<FRigUnit_ModifyBoneTransforms_PerBone> RigVMModel___ModifyBoneTransforms_1_2_1_BoneToModify__Const; // 0x1D0(0x10)
		FName RigVMModel___RigUnit_GetInitialBoneTransform_2_2_Bone__Const; // 0x1E0(0x4)
		unsigned char UnknownData08_6[0x4]; // 0x1E4(0x4) UNKNOWN PROPERTY
		TArray<FRigUnit_ModifyBoneTransforms_PerBone> RigVMModel___ModifyBoneTransforms_2_1_1_BoneToModify__Const; // 0x1E8(0x10)
		TArray<FRigUnit_ModifyBoneTransforms_PerBone> RigVMModel___ModifyBoneTransforms_1_1_1_1_BoneToModify__Const; // 0x1F8(0x10)
		TArray<FRigUnit_ModifyBoneTransforms_PerBone> RigVMModel___ModifyBoneTransforms_5_1_BoneToModify__Const; // 0x208(0x10)
		FName RigVMModel___RigUnit_GetInitialBoneTransform_3_Bone__Const; // 0x218(0x4)
		FName RigVMModel___RigUnit_GetRelativeBoneTransform_3_1_Space__Const; // 0x21C(0x4)
		float RigVMModel___MathFloatRemap_4_1_SourceMinimum__Const; // 0x220(0x4)
		float RigVMModel___MathFloatRemap_4_1_SourceMaximum__Const; // 0x224(0x4)
		TArray<FRigUnit_ModifyBoneTransforms_PerBone> RigVMModel___ModifyBoneTransforms_1_4_1_BoneToModify__Const; // 0x228(0x10)
		FName RigVMModel___RigUnit_GetInitialBoneTransform_1_1_Bone__Const; // 0x238(0x4)
		unsigned char UnknownData09_6[0x4]; // 0x23C(0x4) UNKNOWN PROPERTY
		TArray<FRigUnit_ModifyBoneTransforms_PerBone> RigVMModel___ModifyBoneTransforms_5_BoneToModify__Const; // 0x240(0x10)
		FName RigVMModel___RigUnit_GetInitialBoneTransform_Bone__Const; // 0x250(0x4)
		unsigned char UnknownData10_6[0x4]; // 0x254(0x4) UNKNOWN PROPERTY
		FVector RigVMModel___MathVectorAdd_B__Const; // 0x258(0x18)
		float RigVMModel___MathFloatRemap_4_SourceMinimum__Const; // 0x270(0x4)
		float RigVMModel___MathFloatRemap_4_SourceMaximum__Const; // 0x274(0x4)
		TArray<FRigUnit_ModifyBoneTransforms_PerBone> RigVMModel___ModifyBoneTransforms_1_4_BoneToModify__Const; // 0x278(0x10)
		FName RigVMModel___RigUnit_GetInitialBoneTransform_1_Bone__Const; // 0x288(0x4)
		unsigned char UnknownData11_6[0x4]; // 0x28C(0x4) UNKNOWN PROPERTY
		FVector RigVMModel___MathVectorAdd_1_B__Const; // 0x290(0x18)
		TArray<FRigUnit_ModifyBoneTransforms_PerBone> RigVMModel___ModifyBoneTransforms_5_1_1_BoneToModify__Const; // 0x2A8(0x10)
		FName RigVMModel___RigUnit_GetInitialBoneTransform_3_1_Bone__Const; // 0x2B8(0x4)
		unsigned char UnknownData12_6[0x4]; // 0x2BC(0x4) UNKNOWN PROPERTY
		FVector RigVMModel___MathVectorAdd_3_1_B__Const; // 0x2C0(0x18)
		FName RigVMModel___RigUnit_GetRelativeBoneTransform_3_1_1_Space__Const; // 0x2D8(0x4)
		float RigVMModel___MathFloatRemap_4_1_1_SourceMinimum__Const; // 0x2DC(0x4)
		float RigVMModel___MathFloatRemap_4_1_1_SourceMaximum__Const; // 0x2E0(0x4)
		unsigned char UnknownData13_6[0x4]; // 0x2E4(0x4) UNKNOWN PROPERTY
		TArray<FRigUnit_ModifyBoneTransforms_PerBone> RigVMModel___ModifyBoneTransforms_1_4_1_1_BoneToModify__Const; // 0x2E8(0x10)
		FName RigVMModel___RigUnit_GetInitialBoneTransform_1_1_1_Bone__Const; // 0x2F8(0x4)
		unsigned char UnknownData14_6[0x4]; // 0x2FC(0x4) UNKNOWN PROPERTY
		FVector RigVMModel___MathVectorAdd_1_1_1_B__Const; // 0x300(0x18)
		TArray<FRigUnit_ModifyBoneTransforms_PerBone> RigVMModel___ModifyBoneTransforms_5_1_1_1_BoneToModify__Const; // 0x318(0x10)
		FName RigVMModel___RigUnit_GetInitialBoneTransform_3_1_1_Bone__Const; // 0x328(0x4)
		float RigVMModel___MathFloatRemap_4_1_1_1_SourceMinimum__Const; // 0x32C(0x4)
		float RigVMModel___MathFloatRemap_4_1_1_1_SourceMaximum__Const; // 0x330(0x4)
		unsigned char UnknownData15_6[0x4]; // 0x334(0x4) UNKNOWN PROPERTY
		TArray<FRigUnit_ModifyBoneTransforms_PerBone> RigVMModel___ModifyBoneTransforms_1_4_1_1_1_BoneToModify__Const; // 0x338(0x10)
		FName RigVMModel___RigUnit_GetInitialBoneTransform_1_1_1_1_Bone__Const; // 0x348(0x4)
		unsigned char UnknownData16_6[0x4]; // 0x34C(0x4) UNKNOWN PROPERTY
		FVector RigVMModel___MathVectorAdd_1_1_1_1_B__Const; // 0x350(0x18)
		float RigVMModel___DebugHierarchy_1_Scale__Const; // 0x368(0x4)
		FLinearColor RigVMModel___DebugHierarchy_1_Color__Const; // 0x36C(0x10)
		float RigVMModel___DebugHierarchy_1_Thickness__Const; // 0x37C(0x4)
		FTransform RigVMModel___DebugHierarchy_1_WorldOffset__Const; // 0x380(0x60)
	};

}
