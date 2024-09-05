#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: DashRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct DashRuntime.FortMovementMode_DashCreationData
	// Inherited from FFortMovementMode_BaseExtCreationData
	// Size: 0x58 (0x68 - 0x10)
	struct FFortMovementMode_DashCreationData : public FFortMovementMode_BaseExtCreationData	
	{
	public:
		FVector TargetLocation; // 0x10(0x18)
		float duration; // 0x28(0x4)
		bool bRestrictSpeedToExpected; // 0x2C(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x2D(0x3) UNKNOWN PROPERTY
		UCurveVector PathOffsetCurve; // 0x30(0x8)
		ERootMotionFinishVelocityMode VelocityOnFinishMode; // 0x38(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x39(0x7) UNKNOWN PROPERTY
		FVector SetVelocityOnFinish; // 0x40(0x18)
		float ClampVelocityOnFinish; // 0x58(0x4)
		float HeightAboveGround; // 0x5C(0x4)
		bool bEnsureHeightAboveGround; // 0x60(0x1)
		unsigned char UnknownData05_7[0x7]; // 0x61(0x7) UNKNOWN PROPERTY
	};

}
