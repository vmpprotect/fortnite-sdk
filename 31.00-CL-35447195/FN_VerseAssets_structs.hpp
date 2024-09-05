#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: VerseAssets
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct VerseAssets.ParameterCollection_VariableTag
	// Size: 0x48 (0x48 - 0x0)
	struct FParameterCollection_VariableTag	
	{
	public:
		FName Name; // 0x0(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FString Description; // 0x8(0x10)
		EParameterCollection_VariableType Type; // 0x18(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x19(0x7) UNKNOWN PROPERTY
		FString TypeUE5Class; // 0x20(0x10)
		FString DefaultValue; // 0x30(0x10)
		bool bDefaultValueSet; // 0x40(0x1)
		bool bIsArray; // 0x41(0x1)
		unsigned char UnknownData05_7[0x6]; // 0x42(0x6) UNKNOWN PROPERTY
	};


	// Struct VerseAssets.ParameterCollection_VariableProperties
	// Size: 0x78 (0x78 - 0x0)
	struct FParameterCollection_VariableProperties	
	{
	public:
		bool BooleanProperty; // 0x0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		int64_t IntegerProperty; // 0x8(0x8)
		double FloatingProperty; // 0x10(0x8)
		FString StringProperty; // 0x18(0x10)
		FText MessageProperty; // 0x28(0x10)
		TWeakObjectPtr AssetProperty; // 0x38(0x20)
		FVector StructureProperty; // 0x58(0x18)
		UObject ObjectProperty; // 0x70(0x8)
	};

}
