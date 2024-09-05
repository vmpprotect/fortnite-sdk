#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: Rock_Vehicle_Configs
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /RockVehicle/Rock_Vehicle_Configs.Rock_Vehicle_Configs_C
	// Inherited from URockVehicleConfigs -> UFortPhysicsVehicleConfigs -> UFortVehicleConfigs -> UObject
	// Size: 0x0 (0xF88 - 0xF88)
	class URock_Vehicle_Configs_C : public URockVehicleConfigs	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RockVehicle/Rock_Vehicle_Configs.Rock_Vehicle_Configs_C");
			return ret;
		}
	};

}
