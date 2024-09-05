#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: Lager
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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
