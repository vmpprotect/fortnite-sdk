#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: EpicGamesEngine
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct EpicGamesEngine.VerseActionMapping
	// Inherited from FFastArraySerializerItem
	// Size: 0x24 (0x30 - 0xC)
	struct FVerseActionMapping : public FFastArraySerializerItem	
	{
	public:
		FName Name; // 0xC(0x4)
		FString UIText; // 0x10(0x10)
		TArray Keys; // 0x20(0x10)
	};


	// Struct EpicGamesEngine.VerseActionMappingArray
	// Inherited from FFastArraySerializer
	// Size: 0x18 (0x120 - 0x108)
	struct FVerseActionMappingArray : public FFastArraySerializer	
	{
	public:
		TArray ActionMappingArray; // 0x108(0x10)
		UVerseUEInputComponentBase OwningComponent; // 0x118(0x8)
	};


	// Struct EpicGamesEngine.VerseAxisMapping
	// Inherited from FFastArraySerializerItem
	// Size: 0x2C (0x38 - 0xC)
	struct FVerseAxisMapping : public FFastArraySerializerItem	
	{
	public:
		FName AxisName; // 0xC(0x4)
		float Scale; // 0x10(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
		FString UIText; // 0x18(0x10)
		TArray Keys; // 0x28(0x10)
	};


	// Struct EpicGamesEngine.VerseAxisMappingArray
	// Inherited from FFastArraySerializer
	// Size: 0x18 (0x120 - 0x108)
	struct FVerseAxisMappingArray : public FFastArraySerializer	
	{
	public:
		TArray AxisMappingArray; // 0x108(0x10)
		UVerseUEInputComponentBase OwningComponent; // 0x118(0x8)
	};


	// Struct EpicGamesEngine.VerseInputBinding
	// Inherited from FFastArraySerializerItem
	// Size: 0x10 (0x1C - 0xC)
	struct FVerseInputBinding : public FFastArraySerializerItem	
	{
	public:
		FName Name; // 0xC(0x4)
		TEnumAsByte InputEvent; // 0x10(0x1)
		unsigned char UnknownData01_7[0xB]; // 0x11(0xB) UNKNOWN PROPERTY
	};


	// Struct EpicGamesEngine.VerseInputBindingArray
	// Inherited from FFastArraySerializer
	// Size: 0x18 (0x120 - 0x108)
	struct FVerseInputBindingArray : public FFastArraySerializer	
	{
	public:
		TArray InputBindingArray; // 0x108(0x10)
		UVerseUEInputComponentBase OwningComponent; // 0x118(0x8)
	};

}
