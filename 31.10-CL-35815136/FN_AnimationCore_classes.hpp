#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: AnimationCore
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class AnimationCore.AnimationDataSourceRegistry
	// Inherited from UObject
	// Size: 0x50 (0x78 - 0x28)
	class UAnimationDataSourceRegistry : public UObject	
	{
	public:
		TMap<FName, TWeakObjectPtr> DataSources; // 0x28(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AnimationCore.AnimationDataSourceRegistry");
			return ret;
		}
	};

}
