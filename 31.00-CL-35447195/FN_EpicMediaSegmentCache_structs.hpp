#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: EpicMediaSegmentCache
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct EpicMediaSegmentCache.EpicMediaSegmentCacheConfig
	// Size: 0x18 (0x18 - 0x0)
	struct FEpicMediaSegmentCacheConfig	
	{
	public:
		bool bEnabled; // 0x0(0x1)
		bool bResetCache; // 0x1(0x1)
		bool bPersistentCache; // 0x2(0x1)
		bool bAllowPersistentCacheAsTemporary; // 0x3(0x1)
		bool bClearCache; // 0x4(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
		int32_t CacheSizeMaxFiles; // 0x8(0x4)
		unsigned char UnknownData03_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		int64_t CacheSizeOnDiskMaxBytes; // 0x10(0x8)
	};

}
