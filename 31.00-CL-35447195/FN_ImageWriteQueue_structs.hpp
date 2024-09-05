#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: ImageWriteQueue
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct ImageWriteQueue.ImageWriteOptions
	// Size: 0x60 (0x60 - 0x0)
	struct FImageWriteOptions	
	{
	public:
		EDesiredImageFormat Format; // 0x0(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		FDelegateProperty OnComplete; // 0x4(0xC)
		int32_t CompressionQuality; // 0x10(0x4)
		bool bOverwriteFile; // 0x14(0x1)
		bool bAsync; // 0x15(0x1)
		unsigned char UnknownData03_7[0x4A]; // 0x16(0x4A) UNKNOWN PROPERTY
	};

}
