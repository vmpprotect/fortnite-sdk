#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: STW_MapPickupDisplayRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class STW_MapPickupDisplayRuntime.STW_PlayerControllerComponent_MapPickupDisplay
	// Inherited from UActorComponent -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class USTW_PlayerControllerComponent_MapPickupDisplay : public UActorComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/STW_MapPickupDisplayRuntime.STW_PlayerControllerComponent_MapPickupDisplay");
			return ret;
		}
	};

}
