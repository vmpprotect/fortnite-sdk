#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: EngineSettings
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct EngineSettings.AutoCompleteCommand
	// Size: 0x28 (0x28 - 0x0)
	struct FAutoCompleteCommand	
	{
	public:
		FString Command; // 0x0(0x10)
		FString Desc; // 0x10(0x10)
		unsigned char UnknownData00_7[0x8]; // 0x20(0x8) UNKNOWN PROPERTY
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
