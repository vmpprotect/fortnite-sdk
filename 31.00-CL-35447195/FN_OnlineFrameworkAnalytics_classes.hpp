#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: OnlineFrameworkAnalytics
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class OnlineFrameworkAnalytics.OnlineAnalyticsGameInstanceSubsystem
	// Inherited from UGameInstanceSubsystem -> USubsystem -> UObject
	// Size: 0x88 (0xB8 - 0x30)
	class UOnlineAnalyticsGameInstanceSubsystem : public UGameInstanceSubsystem	
	{
	public:
		unsigned char UnknownData01_1[0x88]; // 0x30(0x88) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/OnlineFrameworkAnalytics.OnlineAnalyticsGameInstanceSubsystem");
			return ret;
		}
	};

}
