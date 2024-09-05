#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: HUDPrototypeUI
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class HUDPrototypeUI.HUDPrototypeUIDirector
	// Inherited from ADynamicUIDirectorBase -> AActor -> UObject
	// Size: 0x10 (0x2C0 - 0x2B0)
	class AHUDPrototypeUIDirector : public ADynamicUIDirectorBase	
	{
	public:
		TArray PrototypeScenes; // 0x2B0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/HUDPrototypeUI.HUDPrototypeUIDirector");
			return ret;
		}
	};

}
