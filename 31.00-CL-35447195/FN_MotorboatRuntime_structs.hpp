#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: MotorboatRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct MotorboatRuntime.MeatballInPersistent
	// Inherited from FFortVehicleInPersistent
	// Size: 0x28 (0x1C8 - 0x1A0)
	struct FMeatballInPersistent : public FFortVehicleInPersistent	
	{
	public:
		unsigned char UnknownData02_3[0x18]; // 0x1A0(0x18) UNKNOWN PROPERTY
		UFortMeatballVehicleConfigs FortMeatballVehicleConfigs; // 0x1B8(0x8)
		float PushForceCurrentMultiplier; // 0x1C0(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x1C4(0x4) UNKNOWN PROPERTY
	};

}
