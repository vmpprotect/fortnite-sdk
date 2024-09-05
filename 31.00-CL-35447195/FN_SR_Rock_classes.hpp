#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: SR_Rock
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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
