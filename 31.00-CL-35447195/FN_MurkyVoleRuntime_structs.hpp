#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: MurkyVoleRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct MurkyVoleRuntime.MurkyVoleDrunkProjectileConfig
	// Size: 0x70 (0x70 - 0x0)
	struct FMurkyVoleDrunkProjectileConfig	
	{
	public:
		UCurveFloat DrunkSpeedScaleCurve; // 0x0(0x8)
		UCurveFloat DrunkGravityScaleCurve; // 0x8(0x8)
		float MaxRandomTurnAngle; // 0x10(0x4)
		float MinRandomTurnAngle; // 0x14(0x4)
		float DirectionChangeRate; // 0x18(0x4)
		bool bEnableAbovePlaneLimitation; // 0x1C(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x1D(0x3) UNKNOWN PROPERTY
		float AbovePlaneDistanceThreshold; // 0x20(0x4)
		float MaxAngleToLoseAbovePlaneLimit; // 0x24(0x4)
		float MinAngleToLoseAbovePlaneLimit; // 0x28(0x4)
		float TargetedInitialDelay; // 0x2C(0x4)
		float DrunkVelocityInitialDelay; // 0x30(0x4)
		float DrunkVelocityDuration; // 0x34(0x4)
		bool bEnableDrunkTarget; // 0x38(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x39(0x3) UNKNOWN PROPERTY
		float DrunkTargetInitialDelay; // 0x3C(0x4)
		float DrunkTargetPositionLookaheadDist; // 0x40(0x4)
		float StartBlendOutRange; // 0x44(0x4)
		float FinishBlendOutRange; // 0x48(0x4)
		float TimeThresholdForBlendOutOnTime; // 0x4C(0x4)
		float BlendAlphaThresholdForBlendOutOnTime; // 0x50(0x4)
		float DurationForBlendOutOnTime; // 0x54(0x4)
		float HomingDrunkBlendOutTurnSpeed; // 0x58(0x4)
		float TurnAngleBlendOutMultiplier; // 0x5C(0x4)
		float DeviateStartAngle; // 0x60(0x4)
		float DeviateEndAngle; // 0x64(0x4)
		float DeviateMinBlendOutAlphaAddition; // 0x68(0x4)
		float DeviateMaxBlendOutAlphaAddition; // 0x6C(0x4)
	};


	// Struct MurkyVoleRuntime.MurkyVoleMissileSpawnInfo
	// Size: 0x50 (0x50 - 0x0)
	struct FMurkyVoleMissileSpawnInfo	
	{
	public:
		FVector TraceStart; // 0x0(0x18)
		FVector TraceEnd; // 0x18(0x18)
		FRotator SpawnRotation; // 0x30(0x18)
		TWeakObjectPtr HomingTarget; // 0x48(0x8)
	};

}
