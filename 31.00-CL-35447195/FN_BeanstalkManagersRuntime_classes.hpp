#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: BeanstalkManagersRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class BeanstalkManagersRuntime.BeanstalkAccountItemDefinitionOverrideManager
	// Inherited from UObject
	// Size: 0x80 (0xA8 - 0x28)
	class UBeanstalkAccountItemDefinitionOverrideManager : public UObject	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		TWeakObjectPtr BeanCosmetics; // 0x30(0x20)
		UBeanCosmeticsData BeanCosmeticsDataCache; // 0x50(0x8)
		TMap OverrideCache; // 0x58(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BeanstalkManagersRuntime.BeanstalkAccountItemDefinitionOverrideManager");
			return ret;
		}
	};

}
