#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: MediaPlate
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct MediaPlate.MediaPlateResource
	// Size: 0x68 (0x68 - 0x0)
	struct FMediaPlateResource	
	{
	public:
		EMediaPlateResourceType Type; // 0x0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		FString ExternalMediaPath; // 0x8(0x10)
		UMediaSource ExternalMedia; // 0x18(0x8)
		TWeakObjectPtr MediaAsset; // 0x20(0x20)
		TWeakObjectPtr SourcePlaylist; // 0x40(0x20)
		UMediaPlaylist ActivePlaylist; // 0x60(0x8)
	};


	// Struct MediaPlate.MediaTextureResourceSettings
	// Size: 0x2 (0x2 - 0x0)
	struct FMediaTextureResourceSettings	
	{
	public:
		bool bEnableGenMips; // 0x0(0x1)
		char CurrentNumMips; // 0x1(0x1)
	};

}
