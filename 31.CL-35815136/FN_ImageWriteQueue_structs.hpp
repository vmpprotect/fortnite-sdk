#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: ImageWriteQueue
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct ImageWriteQueue.ImageWriteOptions
	// Size: 0x60 (0x60 - 0x0)
	struct FImageWriteOptions	
	{
	public:
		EDesiredImageFormat Format; // 0x0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		FDelegateProperty OnComplete; // 0x4(0xC)
		int32_t CompressionQuality; // 0x10(0x4)
		bool bOverwriteFile; // 0x14(0x1)
		bool bAsync; // 0x15(0x1)
		unsigned char UnknownData01_7[0x4A]; // 0x16(0x4A) UNKNOWN PROPERTY
	};

}
