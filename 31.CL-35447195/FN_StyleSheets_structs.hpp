#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: StyleSheets
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct StyleSheets.WidgetProperty
	// Size: 0xC (0xC - 0x0)
	struct FWidgetProperty	
	{
	public:
		TWeakObjectPtr Widget; // 0x0(0x8)
		FName PropertyPath; // 0x8(0x4)
	};


	// Struct StyleSheets.StyleAnimationData
	// Size: 0xC (0xC - 0x0)
	struct FStyleAnimationData	
	{
	public:
		float Delay; // 0x0(0x4)
		float duration; // 0x4(0x4)
		ETweenBuiltInEasing Easing; // 0x8(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
	};


	// Struct StyleSheets.StyleClass
	// Size: 0x108 (0x108 - 0x0)
	struct FStyleClass	
	{
	public:
		FInstancedPropertyBag StylePropertyBag; // 0x0(0x10)
		TMap PropertyAnimations; // 0x10(0x50)
		TMap MaterialParameters; // 0x60(0x50)
		unsigned char UnknownData01_7[0x58]; // 0xB0(0x58) UNKNOWN PROPERTY
	};


	// Struct StyleSheets.StylePropertyStore
	// Size: 0x50 (0x50 - 0x0)
	struct FStylePropertyStore	
	{
	public:
		unsigned char UnknownData01_2[0x50]; // 0x0(0x50) UNKNOWN PROPERTY
	};


	// Struct StyleSheets.StyleRulePreviewInfo
	// Size: 0x28 (0x28 - 0x0)
	struct FStyleRulePreviewInfo	
	{
	public:
		FString StyleDescription; // 0x0(0x10)
		UClass PreviewWidgetClass; // 0x10(0x8)
		FInstancedPropertyBag PreviewPropertyBag; // 0x18(0x10)
	};


	// Struct StyleSheets.StyleRuleEntry
	// Size: 0x18 (0x18 - 0x0)
	struct FStyleRuleEntry	
	{
	public:
		TArray SelectorItems; // 0x0(0x10)
		UStyleRule StyleRule; // 0x10(0x8)
	};


	// Struct StyleSheets.StyleSelectorItem
	// Size: 0x10 (0x10 - 0x0)
	struct FStyleSelectorItem	
	{
	public:
		TArray Targets; // 0x0(0x10)
	};


	// Struct StyleSheets.StyleSheetSettings
	// Size: 0x20 (0x20 - 0x0)
	struct FStyleSheetSettings	
	{
	public:
		FString Description; // 0x0(0x10)
		TArray StylableWidgetClasses; // 0x10(0x10)
	};


	// Struct StyleSheets.StyleTag
	// Inherited from FStyleSelectorItem
	// Size: 0x0 (0x10 - 0x10)
	struct FStyleTag : public FStyleSelectorItem	
	{
	public:
	};


	// Struct StyleSheets.StyleThemeConfigEntry
	// Size: 0x30 (0x30 - 0x0)
	struct FStyleThemeConfigEntry	
	{
	public:
		FName ThemeName; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr Theme; // 0x8(0x20)
		UStyleSheetCollection ThemeInstance; // 0x28(0x8)
	};


	// Struct StyleSheets.StyleThemeConfigKey
	// Size: 0x8 (0x8 - 0x0)
	struct FStyleThemeConfigKey	
	{
	public:
		unsigned char UnknownData01_2[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct StyleSheets.WidgetTypeEntry
	// Size: 0x18 (0x18 - 0x0)
	struct FWidgetTypeEntry	
	{
	public:
		FGameplayTag WidgetType; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TArray WidgetClasses; // 0x8(0x10)
	};

}
