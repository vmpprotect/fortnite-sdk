#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: MotorboatRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct MotorboatRuntime.MeatballInPersistent
	// Inherited from FFortVehicleInPersistent
	// Size: 0x28 (0x1C8 - 0x1A0)
	struct FMeatballInPersistent : public FFortVehicleInPersistent	
	{
	public:
		unsigned char UnknownData00_3[0x18]; // 0x1A0(0x18) UNKNOWN PROPERTY
		UFortMeatballVehicleConfigs* FortMeatballVehicleConfigs; // 0x1B8(0x8)
		float PushForceCurrentMultiplier; // 0x1C0(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x1C4(0x4) UNKNOWN PROPERTY
	};

}
