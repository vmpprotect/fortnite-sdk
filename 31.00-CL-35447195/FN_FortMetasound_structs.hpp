#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: FortMetasound
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct FortMetasound.FortMetaSoundCacheEntry
	// Size: 0x28 (0x28 - 0x0)
	struct FFortMetaSoundCacheEntry	
	{
	public:
		TWeakObjectPtr Metasound; // 0x0(0x20)
		int32_t MaxInstancesToCache; // 0x20(0x4)
		bool bUseSharedCache; // 0x24(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x25(0x3) UNKNOWN PROPERTY
	};


	// Struct FortMetasound.FortMetaSoundCache
	// Size: 0x10 (0x10 - 0x0)
	struct FFortMetaSoundCache	
	{
	public:
		TArray CacheEntries; // 0x0(0x10)
	};


	// Struct FortMetasound.CachedMetaSoundContainer
	// Size: 0x10 (0x10 - 0x0)
	struct FCachedMetaSoundContainer	
	{
	public:
		TArray CachedMetaSounds; // 0x0(0x10)
	};

}
