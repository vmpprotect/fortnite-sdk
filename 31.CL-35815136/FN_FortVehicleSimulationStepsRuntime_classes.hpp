#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: FortVehicleSimulationStepsRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class FortVehicleSimulationStepsRuntime.FortVehicleSimulationStepsManager
	// Inherited from UObject
	// Size: 0x58 (0x80 - 0x28)
	class UFortVehicleSimulationStepsManager : public UObject	
	{
	public:
		bool bEnabled; // 0x28(0x1)
		TEnumAsByte<EVehicleSimStepFlags> DefaultSimulationStepFlags; // 0x29(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x2A(0x2) UNKNOWN PROPERTY
		FDataRegistryType DataRegistryType_VehicleSimulationStepsPermissions; // 0x2C(0x4)
		FDataRegistryType DataRegistryType_VehicleSimulationStepsConfig; // 0x30(0x4)
		unsigned char UnknownData01_7[0x4C]; // 0x34(0x4C) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortVehicleSimulationStepsRuntime.FortVehicleSimulationStepsManager");
			return ret;
		}
	};

}
