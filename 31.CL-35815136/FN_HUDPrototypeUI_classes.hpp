#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: HUDPrototypeUI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class HUDPrototypeUI.HUDPrototypeUIDirector
	// Inherited from ADynamicUIDirectorBase -> AActor -> UObject
	// Size: 0x10 (0x2C0 - 0x2B0)
	class AHUDPrototypeUIDirector : public ADynamicUIDirectorBase	
	{
	public:
		TArray<UDynamicUIScene*> PrototypeScenes; // 0x2B0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/HUDPrototypeUI.HUDPrototypeUIDirector");
			return ret;
		}
	};

}
