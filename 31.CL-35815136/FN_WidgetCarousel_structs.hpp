#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: WidgetCarousel
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct WidgetCarousel.WidgetCarouselNavigationButtonStyle
	// Inherited from FSlateWidgetStyle
	// Size: 0x4D8 (0x4E0 - 0x8)
	struct FWidgetCarouselNavigationButtonStyle : public FSlateWidgetStyle	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FButtonStyle InnerButtonStyle; // 0x10(0x370)
		FSlateBrush NavigationButtonLeftImage; // 0x380(0xB0)
		FSlateBrush NavigationButtonRightImage; // 0x430(0xB0)
	};


	// Struct WidgetCarousel.WidgetCarouselNavigationBarStyle
	// Inherited from FSlateWidgetStyle
	// Size: 0xB08 (0xB10 - 0x8)
	struct FWidgetCarouselNavigationBarStyle : public FSlateWidgetStyle	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FSlateBrush HighlightBrush; // 0x10(0xB0)
		FButtonStyle LeftButtonStyle; // 0xC0(0x370)
		FButtonStyle CenterButtonStyle; // 0x430(0x370)
		FButtonStyle RightButtonStyle; // 0x7A0(0x370)
	};

}