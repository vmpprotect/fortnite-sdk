#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: EpicCMS
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct EpicCMS.DownloadCacheEntry
	// Size: 0x30 (0x30 - 0x0)
	struct FDownloadCacheEntry	
	{
	public:
		FString FilePath; // 0x0(0x10)
		FString SourceUrl; // 0x10(0x10)
		FDateTime LastAccessTime; // 0x20(0x8)
		int32_t LifetimeInDays; // 0x28(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
	};


	// Struct EpicCMS.DownloadCache
	// Size: 0x58 (0x58 - 0x0)
	struct FDownloadCache	
	{
	public:
		unsigned char UnknownData00_7[0x4]; // 0x0(0x4) UNKNOWN PROPERTY
		int32_t Version; // 0x4(0x4)
		TMap<FString, FDownloadCacheEntry> Cache; // 0x8(0x50)
	};

}
