#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: EpicMediaSegmentCache
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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
