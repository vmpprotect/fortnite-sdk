#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: SR_Rock
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /RockVehicle/SR_Rock.SR_Rock_C
	// Inherited from UStreamingRadioPlayerComponent_Rock -> UStreamingRadioPlayerComponent -> UFortPawnComponent -> UPawnComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x0 (0x540 - 0x540)
	class USR_Rock_C : public UStreamingRadioPlayerComponent_Rock	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RockVehicle/SR_Rock.SR_Rock_C");
			return ret;
		}
	};

}
