#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: EngineSettings
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct EngineSettings.AutoCompleteCommand
	// Size: 0x28 (0x28 - 0x0)
	struct FAutoCompleteCommand	
	{
	public:
		FString Command; // 0x0(0x10)
		FString Desc; // 0x10(0x10)
		unsigned char UnknownData01_7[0x8]; // 0x20(0x8) UNKNOWN PROPERTY
	};


	// Struct EngineSettings.GameModeName
	// Size: 0x28 (0x28 - 0x0)
	struct FGameModeName	
	{
	public:
		FString Name; // 0x0(0x10)
		FSoftClassPath GameMode; // 0x10(0x18)
	};


	// Struct EngineSettings.TemplateMapInfoOverride
	// Size: 0x40 (0x40 - 0x0)
	struct FTemplateMapInfoOverride	
	{
	public:
		FSoftObjectPath Thumbnail; // 0x0(0x18)
		FSoftObjectPath Map; // 0x18(0x18)
		FText DisplayName; // 0x30(0x10)
	};

}
