#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: StyleSheets
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct StyleSheets.WidgetProperty
	// Size: 0xC (0xC - 0x0)
	struct FWidgetProperty	
	{
	public:
		TWeakObjectPtr<UWidget*> Widget; // 0x0(0x8)
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
		unsigned char UnknownData00_7[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
	};


	// Struct StyleSheets.StyleClass
	// Size: 0x108 (0x108 - 0x0)
	struct FStyleClass	
	{
	public:
		FInstancedPropertyBag StylePropertyBag; // 0x0(0x10)
		TMap<FName, FStyleAnimationData> PropertyAnimations; // 0x10(0x50)
		TMap<FName, FInstancedPropertyBag> MaterialParameters; // 0x60(0x50)
		unsigned char UnknownData00_7[0x58]; // 0xB0(0x58) UNKNOWN PROPERTY
	};


	// Struct StyleSheets.StylePropertyStore
	// Size: 0x50 (0x50 - 0x0)
	struct FStylePropertyStore	
	{
	public:
		unsigned char UnknownData00_2[0x50]; // 0x0(0x50) UNKNOWN PROPERTY
	};


	// Struct StyleSheets.StyleRulePreviewInfo
	// Size: 0x28 (0x28 - 0x0)
	struct FStyleRulePreviewInfo	
	{
	public:
		FString StyleDescription; // 0x0(0x10)
		UClass* PreviewWidgetClass; // 0x10(0x8)
		FInstancedPropertyBag PreviewPropertyBag; // 0x18(0x10)
	};


	// Struct StyleSheets.StyleRuleEntry
	// Size: 0x18 (0x18 - 0x0)
	struct FStyleRuleEntry	
	{
	public:
		TArray<FStyleSelectorItem> SelectorItems; // 0x0(0x10)
		UStyleRule* StyleRule; // 0x10(0x8)
	};


	// Struct StyleSheets.StyleSelectorItem
	// Size: 0x10 (0x10 - 0x0)
	struct FStyleSelectorItem	
	{
	public:
		TArray<FGameplayTag> Targets; // 0x0(0x10)
	};


	// Struct StyleSheets.StyleSheetSettings
	// Size: 0x20 (0x20 - 0x0)
	struct FStyleSheetSettings	
	{
	public:
		FString Description; // 0x0(0x10)
		TArray<UClass*> StylableWidgetClasses; // 0x10(0x10)
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
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr<UStyleSheetCollection*> Theme; // 0x8(0x20)
		UStyleSheetCollection* ThemeInstance; // 0x28(0x8)
	};


	// Struct StyleSheets.StyleThemeConfigKey
	// Size: 0x8 (0x8 - 0x0)
	struct FStyleThemeConfigKey	
	{
	public:
		unsigned char UnknownData00_2[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct StyleSheets.WidgetTypeEntry
	// Size: 0x18 (0x18 - 0x0)
	struct FWidgetTypeEntry	
	{
	public:
		FGameplayTag WidgetType; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TArray<UClass*> WidgetClasses; // 0x8(0x10)
	};

}
