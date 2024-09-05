#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: NNERuntimeORT
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct NNERuntimeORT.ThreadingOptions
	// Size: 0x10 (0x10 - 0x0)
	struct FThreadingOptions	
	{
	public:
		bool bUseGlobalThreadPool; // 0x0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		int32_t IntraOpNumThreads; // 0x4(0x4)
		int32_t InterOpNumThreads; // 0x8(0x4)
		TEnumAsByte<EExecutionMode> ExecutionMode; // 0xC(0x1)
		unsigned char UnknownData01_7[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
	};

}
