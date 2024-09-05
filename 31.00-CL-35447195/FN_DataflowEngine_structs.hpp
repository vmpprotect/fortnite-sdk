#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: DataflowEngine
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct DataflowEngine.StringValuePair
	// Size: 0x20 (0x20 - 0x0)
	struct FStringValuePair	
	{
	public:
		FString Key; // 0x0(0x10)
		FString Value; // 0x10(0x10)
	};


	// Struct DataflowEngine.DataflowPreviewCacheParams
	// Size: 0x10 (0x10 - 0x0)
	struct FDataflowPreviewCacheParams	
	{
	public:
		int32_t FrameRate; // 0x0(0x4)
		FVector2f TimeRange; // 0x4(0x8)
		bool bBackgroundTask; // 0xC(0x1)
		unsigned char UnknownData01_7[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
	};

}
