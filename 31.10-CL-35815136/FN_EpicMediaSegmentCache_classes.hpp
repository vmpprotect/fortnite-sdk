#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: EpicMediaSegmentCache
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class EpicMediaSegmentCache.EpicMediaSegmentCacheInit
	// Inherited from UObject
	// Size: 0x18 (0x40 - 0x28)
	class UEpicMediaSegmentCacheInit : public UObject	
	{
	public:
		FEpicMediaSegmentCacheConfig CacheConfig; // 0x28(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EpicMediaSegmentCache.EpicMediaSegmentCacheInit");
			return ret;
		}
	};

}
