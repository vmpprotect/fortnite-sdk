#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: OnlineFrameworkAnalytics
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class OnlineFrameworkAnalytics.OnlineAnalyticsGameInstanceSubsystem
	// Inherited from UGameInstanceSubsystem -> USubsystem -> UObject
	// Size: 0x88 (0xB8 - 0x30)
	class UOnlineAnalyticsGameInstanceSubsystem : public UGameInstanceSubsystem	
	{
	public:
		unsigned char UnknownData00_1[0x88]; // 0x30(0x88) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/OnlineFrameworkAnalytics.OnlineAnalyticsGameInstanceSubsystem");
			return ret;
		}
	};

}
