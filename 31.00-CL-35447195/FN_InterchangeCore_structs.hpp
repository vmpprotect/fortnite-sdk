#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: InterchangeCore
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct InterchangeCore.InterchangePipelineContextParams
	// Size: 0x20 (0x20 - 0x0)
	struct FInterchangePipelineContextParams	
	{
	public:
		unsigned char UnknownData01_2[0x20]; // 0x0(0x20) UNKNOWN PROPERTY
	};


	// Struct InterchangeCore.InterchangePipelinePropertyStatePerContext
	// Size: 0x1 (0x1 - 0x0)
	struct FInterchangePipelinePropertyStatePerContext	
	{
	public:
		bool bVisible; // 0x0(0x1)
	};


	// Struct InterchangeCore.InterchangePipelinePropertyStates
	// Size: 0x5 (0x5 - 0x0)
	struct FInterchangePipelinePropertyStates	
	{
	public:
		bool bLocked; // 0x0(0x1)
		bool bPreDialogReset; // 0x1(0x1)
		FInterchangePipelinePropertyStatePerContext BasicLayoutStates; // 0x2(0x1)
		FInterchangePipelinePropertyStatePerContext ImportStates; // 0x3(0x1)
		FInterchangePipelinePropertyStatePerContext ReimportStates; // 0x4(0x1)
	};


	// Struct InterchangeCore.InterchangeUserDefinedAttributeInfo
	// Size: 0x38 (0x38 - 0x0)
	struct FInterchangeUserDefinedAttributeInfo	
	{
	public:
		FString Name; // 0x0(0x10)
		unsigned char UnknownData01_7[0x28]; // 0x10(0x28) UNKNOWN PROPERTY
	};

}
