#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: Lager
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /Lager/Lager/LagerManager.LagerManager_C
	// Inherited from UFortAthenaLivingWorldManager -> UGameStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x0 (0xCA0 - 0xCA0)
	class ULagerManager_C : public UFortAthenaLivingWorldManager	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Lager/Lager/LagerManager.LagerManager_C");
			return ret;
		}
	};

}
