#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: FortMetasound
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct FortMetasound.FortMetaSoundCacheEntry
	// Size: 0x28 (0x28 - 0x0)
	struct FFortMetaSoundCacheEntry	
	{
	public:
		TWeakObjectPtr<UMetaSoundSource*> Metasound; // 0x0(0x20)
		int32_t MaxInstancesToCache; // 0x20(0x4)
		bool bUseSharedCache; // 0x24(0x1)
		unsigned char UnknownData00_7[0x3]; // 0x25(0x3) UNKNOWN PROPERTY
	};


	// Struct FortMetasound.FortMetaSoundCache
	// Size: 0x10 (0x10 - 0x0)
	struct FFortMetaSoundCache	
	{
	public:
		TArray<FFortMetaSoundCacheEntry> CacheEntries; // 0x0(0x10)
	};


	// Struct FortMetasound.CachedMetaSoundContainer
	// Size: 0x10 (0x10 - 0x0)
	struct FCachedMetaSoundContainer	
	{
	public:
		TArray<UMetaSoundSource*> CachedMetaSounds; // 0x0(0x10)
	};

}
