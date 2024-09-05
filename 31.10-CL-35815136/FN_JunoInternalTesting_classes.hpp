#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: JunoInternalTesting
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class JunoInternalTesting.JunoInternalTestingAsset
	// Inherited from UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x10 (0x40 - 0x30)
	class UJunoInternalTestingAsset : public UPrimaryDataAsset	
	{
	public:
		TArray<TWeakObjectPtr> TestMaps; // 0x30(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoInternalTesting.JunoInternalTestingAsset");
			return ret;
		}
	};

}
