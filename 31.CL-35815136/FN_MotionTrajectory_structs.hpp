#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: MotionTrajectory
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct MotionTrajectory.MotionTrajectorySettings
	// Size: 0x4 (0x4 - 0x0)
	struct FMotionTrajectorySettings	
	{
	public:
		float Seconds; // 0x0(0x4)
	};


	// Struct MotionTrajectory.TrajectorySamplingData
	// Size: 0x20 (0x20 - 0x0)
	struct FTrajectorySamplingData	
	{
	public:
		float HistoryLengthSeconds; // 0x0(0x4)
		int32_t HistorySamplesPerSecond; // 0x4(0x4)
		float PredictionLengthSeconds; // 0x8(0x4)
		int32_t PredictionSamplesPerSecond; // 0xC(0x4)
		unsigned char UnknownData00_7[0x10]; // 0x10(0x10) UNKNOWN PROPERTY
	};


	// Struct MotionTrajectory.CharacterTrajectoryData
	// Size: 0x1E0 (0x1E0 - 0x0)
	struct FCharacterTrajectoryData	
	{
	public:
		float RotateTowardsMovementSpeed; // 0x0(0x4)
		float MaxControllerYawRate; // 0x4(0x4)
		float BendVelocityTowardsAcceleration; // 0x8(0x4)
		bool bUseSpeedRemappingCurve; // 0xC(0x1)
		unsigned char UnknownData00_6[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
		FRuntimeFloatCurve SpeedRemappingCurve; // 0x10(0x88)
		bool bUseAccelerationRemappingCurve; // 0x98(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x99(0x7) UNKNOWN PROPERTY
		FRuntimeFloatCurve AccelerationRemappingCurve; // 0xA0(0x88)
		unsigned char UnknownData02_7[0xB8]; // 0x128(0xB8) UNKNOWN PROPERTY
	};

}
