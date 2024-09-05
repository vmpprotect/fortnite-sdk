#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: AudioMotorSimStandardComponents
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct AudioMotorSimStandardComponents.MotorSimGearCurve
	// Size: 0x90 (0x90 - 0x0)
	struct FMotorSimGearCurve	
	{
	public:
		FRuntimeFloatCurve RpmCurve; // 0x0(0x88)
		float SpeedTopThreshold; // 0x88(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x8C(0x4) UNKNOWN PROPERTY
	};

}
