#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: SlateRHIRenderer
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct SlateRHIRenderer.SlatePostSettings
	// Size: 0x30 (0x30 - 0x0)
	struct FSlatePostSettings	
	{
	public:
		bool bEnabled : 1; // 0x0:0(0x1)
		unsigned char UnknownData02_5[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		UClass PostProcessorClass; // 0x8(0x8)
		FString PathToSlatePostRT; // 0x10(0x10)
		UTextureRenderTarget2D CachedSlatePostRT; // 0x20(0x8)
		unsigned char UnknownData03_7[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
	};

}
