#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: DeployableTurretGameplayRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct DeployableTurretGameplayRuntime.DeployableTurretBPAnimData
	// Size: 0x28 (0x28 - 0x0)
	struct FDeployableTurretBPAnimData	
	{
	public:
		FRotator AimRotation; // 0x0(0x18)
		float SurfaceRollDegrees; // 0x18(0x4)
		float SurfacePitchDegrees; // 0x1C(0x4)
		EDeployableTurretState State; // 0x20(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x21(0x7) UNKNOWN PROPERTY
	};

}
