#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: SparksAlbumArtRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct SparksAlbumArtRuntime.SparksBakedAlbumArt
	// Inherited from FTableRowBase
	// Size: 0x28 (0x30 - 0x8)
	struct FSparksBakedAlbumArt : public FTableRowBase	
	{
	public:
		FName SongShortName; // 0x8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr AlbumArt; // 0x10(0x20)
	};

}
