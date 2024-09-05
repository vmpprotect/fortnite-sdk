#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: SlateRHIRenderer
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct SlateRHIRenderer.SlatePostSettings
	// Size: 0x30 (0x30 - 0x0)
	struct FSlatePostSettings	
	{
	public:
		bool bEnabled : 1; // 0x0:0(0x1)
		unsigned char UnknownData00_5[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		UClass* PostProcessorClass; // 0x8(0x8)
		FString PathToSlatePostRT; // 0x10(0x10)
		UTextureRenderTarget2D* CachedSlatePostRT; // 0x20(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
	};

}
