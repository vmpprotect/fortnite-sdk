#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: NNERuntimeORT
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct NNERuntimeORT.ThreadingOptions
	// Size: 0x10 (0x10 - 0x0)
	struct FThreadingOptions	
	{
	public:
		bool bUseGlobalThreadPool; // 0x0(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		int32_t IntraOpNumThreads; // 0x4(0x4)
		int32_t InterOpNumThreads; // 0x8(0x4)
		TEnumAsByte ExecutionMode; // 0xC(0x1)
		unsigned char UnknownData03_7[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
	};

}
