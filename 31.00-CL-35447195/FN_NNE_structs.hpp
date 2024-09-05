#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: NNE
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct NNE.NNEAttributeValue
	// Size: 0x18 (0x18 - 0x0)
	struct FNNEAttributeValue	
	{
	public:
		ENNEAttributeDataType Type; // 0x0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		TArray Value; // 0x8(0x10)
	};


	// Struct NNE.NNEFormatAttributeDesc
	// Size: 0x28 (0x28 - 0x0)
	struct FNNEFormatAttributeDesc	
	{
	public:
		FString Name; // 0x0(0x10)
		FNNEAttributeValue Value; // 0x10(0x18)
	};


	// Struct NNE.NNEFormatOperatorDesc
	// Size: 0x58 (0x58 - 0x0)
	struct FNNEFormatOperatorDesc	
	{
	public:
		FString TypeName; // 0x0(0x10)
		FString DomainName; // 0x10(0x10)
		unsigned char UnknownData01_6[0x8]; // 0x20(0x8) UNKNOWN PROPERTY
		TArray InTensors; // 0x28(0x10)
		TArray OutTensors; // 0x38(0x10)
		TArray Attributes; // 0x48(0x10)
	};


	// Struct NNE.NNEFormatTensorDesc
	// Size: 0x38 (0x38 - 0x0)
	struct FNNEFormatTensorDesc	
	{
	public:
		FString Name; // 0x0(0x10)
		TArray Shape; // 0x10(0x10)
		ENNEFormatTensorType Type; // 0x20(0x1)
		ENNETensorDataType DataType; // 0x21(0x1)
		unsigned char UnknownData01_6[0x6]; // 0x22(0x6) UNKNOWN PROPERTY
		uint64_t DataSize; // 0x28(0x8)
		uint64_t DataOffset; // 0x30(0x8)
	};


	// Struct NNE.NNERuntimeFormat
	// Size: 0x38 (0x38 - 0x0)
	struct FNNERuntimeFormat	
	{
	public:
		TArray Tensors; // 0x0(0x10)
		TArray Operators; // 0x10(0x10)
		unsigned char UnknownData01_7[0x18]; // 0x20(0x18) UNKNOWN PROPERTY
	};

}
