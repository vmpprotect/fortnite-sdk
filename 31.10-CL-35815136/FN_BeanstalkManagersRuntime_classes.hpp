#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: BeanstalkManagersRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class BeanstalkManagersRuntime.BeanstalkAccountItemDefinitionOverrideManager
	// Inherited from UObject
	// Size: 0x80 (0xA8 - 0x28)
	class UBeanstalkAccountItemDefinitionOverrideManager : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		TWeakObjectPtr<UBeanCosmeticsData*> BeanCosmetics; // 0x30(0x20)
		UBeanCosmeticsData* BeanCosmeticsDataCache; // 0x50(0x8)
		TMap<FPrimaryAssetId, FBeanstalkAccountItemDefinitionOverride> OverrideCache; // 0x58(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BeanstalkManagersRuntime.BeanstalkAccountItemDefinitionOverrideManager");
			return ret;
		}
	};

}
