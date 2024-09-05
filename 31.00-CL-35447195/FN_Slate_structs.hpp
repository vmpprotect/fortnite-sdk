#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: Slate
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct Slate.VirtualKeyboardOptions
	// Size: 0x1 (0x1 - 0x0)
	struct FVirtualKeyboardOptions	
	{
	public:
		bool bEnableAutocorrect; // 0x0(0x1)
	};


	// Struct Slate.InputChord
	// Size: 0x20 (0x20 - 0x0)
	struct FInputChord	
	{
	public:
		FKey Key; // 0x0(0x18)
		bool bShift : 1; // 0x18:0(0x1)
		bool bCtrl : 1; // 0x18:1(0x1)
		bool bAlt : 1; // 0x18:2(0x1)
		bool bCmd : 1; // 0x18:3(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x19(0x7) UNKNOWN PROPERTY
	};


	// Struct Slate.Anchors
	// Size: 0x20 (0x20 - 0x0)
	struct FAnchors	
	{
	public:
		FVector2D Minimum; // 0x0(0x10)
		FVector2D Maximum; // 0x10(0x10)
	};


	// Struct Slate.CharRange
	// Size: 0x4 (0x4 - 0x0)
	struct FCharRange	
	{
	public:
		uint16_t First; // 0x0(0x2)
		uint16_t Last; // 0x2(0x2)
	};


	// Struct Slate.CharRangeList
	// Size: 0x10 (0x10 - 0x0)
	struct FCharRangeList	
	{
	public:
		TArray Ranges; // 0x0(0x10)
	};


	// Struct Slate.InputPreprocessorRegistrationKey
	// Size: 0x8 (0x8 - 0x0)
	struct FInputPreprocessorRegistrationKey	
	{
	public:
		EInputPreProcessorType Type; // 0x0(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		int32_t Priority; // 0x4(0x4)
	};


	// Struct Slate.CustomizedToolMenuEntry
	// Size: 0x4 (0x4 - 0x0)
	struct FCustomizedToolMenuEntry	
	{
	public:
		ECustomizedToolMenuVisibility Visibility; // 0x0(0x4)
	};


	// Struct Slate.CustomizedToolMenuSection
	// Size: 0x4 (0x4 - 0x0)
	struct FCustomizedToolMenuSection	
	{
	public:
		ECustomizedToolMenuVisibility Visibility; // 0x0(0x4)
	};


	// Struct Slate.CustomizedToolMenuNameArray
	// Size: 0x10 (0x10 - 0x0)
	struct FCustomizedToolMenuNameArray	
	{
	public:
		TArray Names; // 0x0(0x10)
	};


	// Struct Slate.ToolMenuProfile
	// Size: 0x1A0 (0x1A0 - 0x0)
	struct FToolMenuProfile	
	{
	public:
		FName Name; // 0x0(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TMap Entries; // 0x8(0x50)
		TMap Sections; // 0x58(0x50)
		TArray SuppressExtenders; // 0xA8(0x10)
		unsigned char UnknownData03_7[0xE8]; // 0xB8(0xE8) UNKNOWN PROPERTY
	};


	// Struct Slate.CustomizedToolMenu
	// Inherited from FToolMenuProfile
	// Size: 0x60 (0x200 - 0x1A0)
	struct FCustomizedToolMenu : public FToolMenuProfile	
	{
	public:
		TMap EntryOrder; // 0x1A0(0x50)
		TArray SectionOrder; // 0x1F0(0x10)
	};

}
