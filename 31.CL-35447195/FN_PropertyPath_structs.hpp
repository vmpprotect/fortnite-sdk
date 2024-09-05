#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: PropertyPath
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct PropertyPath.PropertyPathSegment
	// Size: 0x18 (0x18 - 0x0)
	struct FPropertyPathSegment	
	{
	public:
		FName Name; // 0x0(0x4)
		int32_t ArrayIndex; // 0x4(0x4)
		UStruct Struct; // 0x8(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x10(0x8) UNKNOWN PROPERTY
	};


	// Struct PropertyPath.CachedPropertyPath
	// Size: 0x38 (0x38 - 0x0)
	struct FCachedPropertyPath	
	{
	public:
		TArray Segments; // 0x0(0x10)
		unsigned char UnknownData02_6[0x8]; // 0x10(0x8) UNKNOWN PROPERTY
		UFunction CachedFunction; // 0x18(0x8)
		unsigned char UnknownData03_7[0x18]; // 0x20(0x18) UNKNOWN PROPERTY
	};


	// Struct PropertyPath.PropertyPathTestBaseStruct
	// Size: 0x8 (0x8 - 0x0)
	struct FPropertyPathTestBaseStruct	
	{
	public:
		unsigned char UnknownData01_2[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct PropertyPath.PropertyPathTestInnerStruct
	// Inherited from FPropertyPathTestBaseStruct
	// Size: 0x20 (0x28 - 0x8)
	struct FPropertyPathTestInnerStruct : public FPropertyPathTestBaseStruct	
	{
	public:
		float float; // 0x8(0x4)
		bool bool; // 0xC(0x1)
		TEnumAsByte EnumOne; // 0xD(0x1)
		TEnumAsByte EnumTwo; // 0xE(0x1)
		TEnumAsByte EnumThree; // 0xF(0x1)
		TEnumAsByte EnumFour; // 0x10(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x11(0x3) UNKNOWN PROPERTY
		int32_t Integer; // 0x14(0x4)
		FString String; // 0x18(0x10)
	};


	// Struct PropertyPath.PropertyPathTestStruct
	// Inherited from FPropertyPathTestBaseStruct
	// Size: 0x58 (0x60 - 0x8)
	struct FPropertyPathTestStruct : public FPropertyPathTestBaseStruct	
	{
	public:
		bool bool; // 0x8(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
		int32_t Integer; // 0xC(0x4)
		TEnumAsByte EnumOne; // 0x10(0x1)
		TEnumAsByte EnumTwo; // 0x11(0x1)
		TEnumAsByte EnumThree; // 0x12(0x1)
		TEnumAsByte EnumFour; // 0x13(0x1)
		unsigned char UnknownData04_6[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
		FString String; // 0x18(0x10)
		float float; // 0x28(0x4)
		unsigned char UnknownData05_6[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
		FPropertyPathTestInnerStruct InnerStruct; // 0x30(0x28)
		UPropertyPathTestObject InnerObject; // 0x58(0x8)
	};


	// Struct PropertyPath.PropertyPathTestBed
	// Size: 0xD0 (0xD0 - 0x0)
	struct FPropertyPathTestBed	
	{
	public:
		UPropertyPathTestObject Object; // 0x0(0x8)
		UPropertyPathTestObject ModifiedObject; // 0x8(0x8)
		FPropertyPathTestStruct ModifiedStruct; // 0x10(0x60)
		FPropertyPathTestStruct DefaultStruct; // 0x70(0x60)
	};

}
