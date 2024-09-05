#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: FortVehicleSimulationStepsRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct FortVehicleSimulationStepsRuntime.FortVehicleSimulationStepOverrideTableRow
	// Inherited from FTableRowBase
	// Size: 0x8 (0x10 - 0x8)
	struct FFortVehicleSimulationStepOverrideTableRow : public FTableRowBase	
	{
	public:
		TEnumAsByte SimulationStep; // 0x8(0x1)
		TEnumAsByte SimulationStepFlags; // 0x9(0x1)
		unsigned char UnknownData01_7[0x6]; // 0xA(0x6) UNKNOWN PROPERTY
	};


	// Struct FortVehicleSimulationStepsRuntime.FortVehicleSimulationConfigTableRow
	// Inherited from FTableRowBase
	// Size: 0x8 (0x10 - 0x8)
	struct FFortVehicleSimulationConfigTableRow : public FTableRowBase	
	{
	public:
		bool bIsSimulationManagerEnabled; // 0x8(0x1)
		TEnumAsByte DefaultSimulationStepFlags; // 0x9(0x1)
		unsigned char UnknownData01_7[0x6]; // 0xA(0x6) UNKNOWN PROPERTY
	};

}
