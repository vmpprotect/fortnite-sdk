#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: BasicType
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct /Custom/FName
	// Size: 0x8 (0x8 - 0x0)
	struct FName	
	{
	public:
		int ComparisonIndex; // 0x0(0x4)
		int Number; // 0x4(0x4)
	};


	// Struct /Custom/TArray
	// Size: 0x10 (0x10 - 0x0)
	struct TArray	
	{
	public:
		T* Data; // 0x0(0x8)
		int32_t Count; // 0x8(0x4)
		int32_t Max; // 0xC(0x4)
	};


	// Struct /Custom/FString
	// Inherited from TArray
	// Size: 0x0 (0x10 - 0x10)
	struct FString : public TArray	
	{
	public:
	};


	// Struct /Custom/FTextData
	// Size: 0x38 (0x38 - 0x0)
	struct FTextData	
	{
	public:
		unsigned char UnknownData00_7[0x28]; // 0x0(0x28) UNKNOWN PROPERTY
		wchar_t* Name; // 0x28(0x8)
		int32_t Length; // 0x30(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
	};


	// Struct /Custom/FText
	// Size: 0x18 (0x18 - 0x0)
	struct FText	
	{
	public:
		FTextData* Data; // 0x0(0x8)
		unsigned char UnknownData00_7[0x10]; // 0x8(0x10) UNKNOWN PROPERTY
	};

}
