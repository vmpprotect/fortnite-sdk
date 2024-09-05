#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: SparksAlbumArtRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct SparksAlbumArtRuntime.SparksBakedAlbumArt
	// Inherited from FTableRowBase
	// Size: 0x28 (0x30 - 0x8)
	struct FSparksBakedAlbumArt : public FTableRowBase	
	{
	public:
		FName SongShortName; // 0x8(0x4)
		unsigned char UnknownData00_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr<UTexture2D*> AlbumArt; // 0x10(0x20)
	};

}
