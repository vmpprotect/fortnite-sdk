#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: DirtbikeRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class DirtbikeRuntime.FortDirtbikeVehicle
	// Inherited from AFortMotorcycleVehicle -> AFortAthenaSKMotorVehicle -> AFortAthenaSKVehicle -> AFortAthenaVehicle -> AFortPhysicsPawn -> APawn -> AActor -> UObject
	// Size: 0x10 (0x25F0 - 0x25E0)
	class AFortDirtbikeVehicle : public AFortMotorcycleVehicle	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0x25E0(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DirtbikeRuntime.FortDirtbikeVehicle");
			return ret;
		}
	};


	// Class DirtbikeRuntime.FortDirtbikeVehicleConfigs
	// Inherited from UFortMotorcycleVehicleConfigs -> UFortPhysicsVehicleConfigs -> UFortVehicleConfigs -> UObject
	// Size: 0x0 (0xC50 - 0xC50)
	class UFortDirtbikeVehicleConfigs : public UFortMotorcycleVehicleConfigs	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DirtbikeRuntime.FortDirtbikeVehicleConfigs");
			return ret;
		}
	};

}
