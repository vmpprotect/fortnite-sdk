#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: LiveEditObject
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct LiveEditObject.LiveEditObjectTestStruct
	// Size: 0x140 (0x140 - 0x0)
	struct FLiveEditObjectTestStruct	
	{
	public:
		bool bool; // 0x0(0x1)
		int8_t int8; // 0x1(0x1)
		int16_t int16; // 0x2(0x2)
		int32_t int32; // 0x4(0x4)
		int64_t int64; // 0x8(0x8)
		float float; // 0x10(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
		double Double; // 0x18(0x8)
		FString String; // 0x20(0x10)
		FText Text; // 0x30(0x10)
		FName Name; // 0x40(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x44(0x4) UNKNOWN PROPERTY
		UObject RawObjectPtr; // 0x48(0x8)
		UObject ObjectPtr; // 0x50(0x8)
		FSoftObjectPath SoftObjectPath; // 0x58(0x18)
		FVector2D Struct; // 0x70(0x10)
		int32_t FixedArray; // 0x80(0x10)
		TArray DynamicArray; // 0x90(0x10)
		TSet Set; // 0xA0(0x50)
		TMap Map; // 0xF0(0x50)
	};

}
