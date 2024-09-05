#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: STW_MapPickupDisplayRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

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
