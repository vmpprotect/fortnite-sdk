#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: DataflowEngine
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

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
		unsigned char UnknownData00_7[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
	};

}
