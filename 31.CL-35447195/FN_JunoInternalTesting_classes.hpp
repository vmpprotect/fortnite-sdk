#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: JunoInternalTesting
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class JunoInternalTesting.JunoInternalTestingAsset
	// Inherited from UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x10 (0x40 - 0x30)
	class UJunoInternalTestingAsset : public UPrimaryDataAsset	
	{
	public:
		TArray TestMaps; // 0x30(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoInternalTesting.JunoInternalTestingAsset");
			return ret;
		}
	};

}
