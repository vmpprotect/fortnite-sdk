#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: FortVehicleSimulationStepsRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct FortVehicleSimulationStepsRuntime.FortVehicleSimulationStepOverrideTableRow
	// Inherited from FTableRowBase
	// Size: 0x8 (0x10 - 0x8)
	struct FFortVehicleSimulationStepOverrideTableRow : public FTableRowBase	
	{
	public:
		TEnumAsByte<EVehicleSimStep> SimulationStep; // 0x8(0x1)
		TEnumAsByte<EVehicleSimStepFlags> SimulationStepFlags; // 0x9(0x1)
		unsigned char UnknownData00_7[0x6]; // 0xA(0x6) UNKNOWN PROPERTY
	};


	// Struct FortVehicleSimulationStepsRuntime.FortVehicleSimulationConfigTableRow
	// Inherited from FTableRowBase
	// Size: 0x8 (0x10 - 0x8)
	struct FFortVehicleSimulationConfigTableRow : public FTableRowBase	
	{
	public:
		bool bIsSimulationManagerEnabled; // 0x8(0x1)
		TEnumAsByte<EVehicleSimStepFlags> DefaultSimulationStepFlags; // 0x9(0x1)
		unsigned char UnknownData00_7[0x6]; // 0xA(0x6) UNKNOWN PROPERTY
	};

}
