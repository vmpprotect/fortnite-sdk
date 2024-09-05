#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: GrindRailRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct GrindRailRuntime.FortAnimInput_GrindRail
	// Size: 0x18 (0x18 - 0x0)
	struct FFortAnimInput_GrindRail	
	{
	public:
		bool bAimFWD : 1; // 0x0:0(0x1)
		bool bAimBWD : 1; // 0x0:1(0x1)
		bool bAimLFT : 1; // 0x0:2(0x1)
		bool bAimRGT : 1; // 0x0:3(0x1)
		unsigned char UnknownData01_5[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float AimFWDDeltaAngleDegrees; // 0x4(0x4)
		float AimBWDDeltaAngleDegrees; // 0x8(0x4)
		float AimLFTDeltaAngleDegrees; // 0xC(0x4)
		float AimRGTDeltaAngleDegrees; // 0x10(0x4)
		float PawnToSplineDeltaYawAngleDegrees; // 0x14(0x4)
	};


	// Struct GrindRailRuntime.FortAnimNode_GrindRailSlopeWarping
	// Inherited from FFortAnimNode_SlopeWarping -> FAnimNode_SkeletalControlBase -> FAnimNode_Base
	// Size: 0x60 (0x348 - 0x2E8)
	struct FFortAnimNode_GrindRailSlopeWarping : public FFortAnimNode_SlopeWarping	
	{
	public:
		float BaseSplineRadius; // 0x2E8(0x4)
		bool bAbsentCurveMeansFootDown : 1; // 0x2EC:0(0x1)
		unsigned char UnknownData04_5[0x3]; // 0x2ED(0x3) UNKNOWN PROPERTY
		FName LFootOnGroundCurveName; // 0x2F0(0x4)
		bool bLeftCurveHighMeansFootDown : 1; // 0x2F4:0(0x1)
		unsigned char UnknownData05_5[0x3]; // 0x2F5(0x3) UNKNOWN PROPERTY
		FName RFootOnGroundCurveName; // 0x2F8(0x4)
		bool bRightCurveHighMeansFootDown : 1; // 0x2FC:0(0x1)
		unsigned char UnknownData06_5[0x3]; // 0x2FD(0x3) UNKNOWN PROPERTY
		FBoneReference LeftFootFKBone; // 0x300(0xC)
		unsigned char UnknownData07_7[0x3C]; // 0x30C(0x3C) UNKNOWN PROPERTY
	};


	// Struct GrindRailRuntime.GrindRailBoosterInfo
	// Size: 0xC (0xC - 0x0)
	struct FGrindRailBoosterInfo	
	{
	public:
		float MinDistanceAlongSpline; // 0x0(0x4)
		float MaxDistanceAlongSpline; // 0x4(0x4)
		EGrindRailBoosterMode PositiveMode; // 0x8(0x1)
		EGrindRailBoosterMode NegativeMode; // 0x9(0x1)
		unsigned char UnknownData01_7[0x2]; // 0xA(0x2) UNKNOWN PROPERTY
	};


	// Struct GrindRailRuntime.FortRailPointSnapData
	// Size: 0x10 (0x10 - 0x0)
	struct FFortRailPointSnapData	
	{
	public:
		AFortGrindRail RailToSnapTo; // 0x0(0x8)
		int32_t PointToSnapTo; // 0x8(0x4)
		unsigned char UnknownData01_7[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
	};


	// Struct GrindRailRuntime.GrindRailSpeedSettings
	// Size: 0x18 (0x18 - 0x0)
	struct FGrindRailSpeedSettings	
	{
	public:
		float SprintAcceleration; // 0x0(0x4)
		float MaxLeanAcceleration; // 0x4(0x4)
		float MinLeanAcceleration; // 0x8(0x4)
		float ShootingSpeedMultiplier; // 0xC(0x4)
		float GravityForceWhenGoingUp; // 0x10(0x4)
		float GravityForceWhenGoingDown; // 0x14(0x4)
	};


	// Struct GrindRailRuntime.FortMovementMode_GrindingCreationData
	// Inherited from FFortMovementMode_BaseExtCreationData
	// Size: 0x40 (0x50 - 0x10)
	struct FFortMovementMode_GrindingCreationData : public FFortMovementMode_BaseExtCreationData	
	{
	public:
		unsigned char UnknownData01_1[0x40]; // 0x10(0x40) UNKNOWN PROPERTY
	};


	// Struct GrindRailRuntime.FortMovementMode_GrindingRailJumpResult
	// Size: 0x20 (0x20 - 0x0)
	struct FFortMovementMode_GrindingRailJumpResult	
	{
	public:
		unsigned char UnknownData01_2[0x20]; // 0x0(0x20) UNKNOWN PROPERTY
	};


	// Struct GrindRailRuntime.GrindingRequestCalculationData
	// Size: 0x38 (0x38 - 0x0)
	struct FGrindingRequestCalculationData	
	{
	public:
		FVector ResultActorLocation; // 0x0(0x18)
		FVector ResultActorDirection; // 0x18(0x18)
		float ResultDistanceOnSpline; // 0x30(0x4)
		float ResultSpeed; // 0x34(0x4)
	};

}
