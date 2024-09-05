#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: EpicCMSUIFramework
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct EpicCMSUIFramework.EpicCMSTileTypeMapping
	// Inherited from FTableRowBase
	// Size: 0x20 (0x28 - 0x8)
	struct FEpicCMSTileTypeMapping : public FTableRowBase	
	{
	public:
		TWeakObjectPtr TileClass; // 0x8(0x20)
	};


	// Struct EpicCMSUIFramework.SlotDescription
	// Size: 0x10 (0x10 - 0x0)
	struct FSlotDescription	
	{
	public:
		FName SlotName; // 0x0(0x4)
		int32_t ColumnCount; // 0x4(0x4)
		int32_t RowCount; // 0x8(0x4)
		bool bUseFeaturedTextStyle; // 0xC(0x1)
		bool bEnableAutoScroll; // 0xD(0x1)
		unsigned char UnknownData01_7[0x2]; // 0xE(0x2) UNKNOWN PROPERTY
	};


	// Struct EpicCMSUIFramework.EpicCMSPage
	// Size: 0x70 (0x70 - 0x0)
	struct FEpicCMSPage	
	{
	public:
		unsigned char UnknownData01_2[0x70]; // 0x0(0x70) UNKNOWN PROPERTY
	};


	// Struct EpicCMSUIFramework.EpicCMSLayoutTypeMapping
	// Inherited from FTableRowBase
	// Size: 0x20 (0x28 - 0x8)
	struct FEpicCMSLayoutTypeMapping : public FTableRowBase	
	{
	public:
		TWeakObjectPtr LayoutType; // 0x8(0x20)
	};


	// Struct EpicCMSUIFramework.TileDefinition
	// Size: 0x88 (0x88 - 0x0)
	struct FTileDefinition	
	{
	public:
		FString TypeString; // 0x0(0x10)
		FString Title; // 0x10(0x10)
		FString Subtitle; // 0x20(0x10)
		FString Eyebrow; // 0x30(0x10)
		FString Link; // 0x40(0x10)
		FString GroupId; // 0x50(0x10)
		FDateTime Countdown; // 0x60(0x8)
		EDateType CountdownType; // 0x68(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x69(0x7) UNKNOWN PROPERTY
		FString MediaUrl; // 0x70(0x10)
		bool IsVisible; // 0x80(0x1)
		unsigned char UnknownData03_7[0x7]; // 0x81(0x7) UNKNOWN PROPERTY
	};

}
