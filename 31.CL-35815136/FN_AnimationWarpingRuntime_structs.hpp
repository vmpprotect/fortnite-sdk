#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: AnimationWarpingRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct AnimationWarpingRuntime.FootPlacementInterpolationSettings
	// Size: 0x2C (0x2C - 0x0)
	struct FFootPlacementInterpolationSettings	
	{
	public:
		float UnplantLinearStiffness; // 0x0(0x4)
		float UnplantLinearDamping; // 0x4(0x4)
		float UnplantAngularStiffness; // 0x8(0x4)
		float UnplantAngularDamping; // 0xC(0x4)
		float SeparationStiffness; // 0x10(0x4)
		float SeparationDamping; // 0x14(0x4)
		float FloorLinearStiffness; // 0x18(0x4)
		float FloorLinearDamping; // 0x1C(0x4)
		float FloorAngularStiffness; // 0x20(0x4)
		float FloorAngularDamping; // 0x24(0x4)
		bool bEnableFloorInterpolation; // 0x28(0x1)
		bool bEnableSeparationInterpolation; // 0x29(0x1)
		unsigned char UnknownData00_7[0x2]; // 0x2A(0x2) UNKNOWN PROPERTY
	};


	// Struct AnimationWarpingRuntime.FootPlacementTraceSettings
	// Size: 0x1C (0x1C - 0x0)
	struct FFootPlacementTraceSettings	
	{
	public:
		float StartOffset; // 0x0(0x4)
		float EndOffset; // 0x4(0x4)
		float SweepRadius; // 0x8(0x4)
		bool bDisableComplexTrace; // 0xC(0x1)
		TEnumAsByte<ETraceTypeQuery> ComplexTraceChannel; // 0xD(0x1)
		unsigned char UnknownData00_6[0x2]; // 0xE(0x2) UNKNOWN PROPERTY
		float MaxGroundPenetration; // 0x10(0x4)
		float SimpleCollisionInfluence; // 0x14(0x4)
		TEnumAsByte<ETraceTypeQuery> SimpleTraceChannel; // 0x18(0x1)
		bool bEnabled; // 0x19(0x1)
		unsigned char UnknownData01_7[0x2]; // 0x1A(0x2) UNKNOWN PROPERTY
	};


	// Struct AnimationWarpingRuntime.FootPlacementRootDefinition
	// Size: 0x18 (0x18 - 0x0)
	struct FFootPlacementRootDefinition	
	{
	public:
		FBoneReference PelvisBone; // 0x0(0xC)
		FBoneReference IKRootBone; // 0xC(0xC)
	};


	// Struct AnimationWarpingRuntime.FootPlacementPelvisSettings
	// Size: 0x20 (0x20 - 0x0)
	struct FFootPlacementPelvisSettings	
	{
	public:
		float MaxOffset; // 0x0(0x4)
		float LinearStiffness; // 0x4(0x4)
		float LinearDamping; // 0x8(0x4)
		float HorizontalRebalancingWeight; // 0xC(0x4)
		float MaxOffsetHorizontal; // 0x10(0x4)
		float HeelLiftRatio; // 0x14(0x4)
		EPelvisHeightMode PelvisHeightMode; // 0x18(0x1)
		EActorMovementCompensationMode ActorMovementCompensationMode; // 0x19(0x1)
		bool bEnableInterpolation; // 0x1A(0x1)
		bool bDisablePelvisOffsetInAir; // 0x1B(0x1)
		FName DisablePelvisCurveName; // 0x1C(0x4)
	};


	// Struct AnimationWarpingRuntime.FootPlacemenLegDefinition
	// Size: 0x34 (0x34 - 0x0)
	struct FFootPlacemenLegDefinition	
	{
	public:
		FBoneReference FKFootBone; // 0x0(0xC)
		FBoneReference IKFootBone; // 0xC(0xC)
		FBoneReference BallBone; // 0x18(0xC)
		int32_t NumBonesInLimb; // 0x24(0x4)
		FName SpeedCurveName; // 0x28(0x4)
		FName DisableLockCurveName; // 0x2C(0x4)
		FName DisableLegCurveName; // 0x30(0x4)
	};


	// Struct AnimationWarpingRuntime.FootPlacementPlantSettings
	// Size: 0x34 (0x34 - 0x0)
	struct FFootPlacementPlantSettings	
	{
	public:
		float SpeedThreshold; // 0x0(0x4)
		float DistanceToGround; // 0x4(0x4)
		EFootPlacementLockType LockType; // 0x8(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
		float UnplantRadius; // 0xC(0x4)
		float ReplantRadiusRatio; // 0x10(0x4)
		float UnplantAngle; // 0x14(0x4)
		float ReplantAngleRatio; // 0x18(0x4)
		float MaxExtensionRatio; // 0x1C(0x4)
		float MinExtensionRatio; // 0x20(0x4)
		float SeparatingDistance; // 0x24(0x4)
		float UnalignmentSpeedThreshold; // 0x28(0x4)
		float AnkleTwistReduction; // 0x2C(0x4)
		bool bAdjustHeelBeforePlanting; // 0x30(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x31(0x3) UNKNOWN PROPERTY
	};


	// Struct AnimationWarpingRuntime.AnimNode_FootPlacement
	// Inherited from FAnimNode_SkeletalControlBase -> FAnimNode_Base
	// Size: 0x358 (0x420 - 0xC8)
	struct FAnimNode_FootPlacement : public FAnimNode_SkeletalControlBase	
	{
	public:
		EWarpingEvaluationMode PlantSpeedMode; // 0xC8(0x1)
		unsigned char UnknownData00_6[0x3]; // 0xC9(0x3) UNKNOWN PROPERTY
		FBoneReference IKFootRootBone; // 0xCC(0xC)
		FBoneReference PelvisBone; // 0xD8(0xC)
		FFootPlacementPelvisSettings PelvisSettings; // 0xE4(0x20)
		unsigned char UnknownData01_6[0x4]; // 0x104(0x4) UNKNOWN PROPERTY
		TArray<FFootPlacemenLegDefinition> LegDefinitions; // 0x108(0x10)
		FFootPlacementPlantSettings PlantSettings; // 0x118(0x34)
		FFootPlacementInterpolationSettings InterpolationSettings; // 0x14C(0x2C)
		FFootPlacementTraceSettings TraceSettings; // 0x178(0x1C)
		unsigned char UnknownData02_7[0x28C]; // 0x194(0x28C) UNKNOWN PROPERTY
	};


	// Struct AnimationWarpingRuntime.AnimNode_OffsetRootBone
	// Inherited from FAnimNode_Base
	// Size: 0xF0 (0x100 - 0x10)
	struct FAnimNode_OffsetRootBone : public FAnimNode_Base	
	{
	public:
		FPoseLink Source; // 0x10(0x10)
		unsigned char UnknownData00_7[0xE0]; // 0x20(0xE0) UNKNOWN PROPERTY
	};


	// Struct AnimationWarpingRuntime.AnimNode_OrientationWarping
	// Inherited from FAnimNode_SkeletalControlBase -> FAnimNode_Base
	// Size: 0x158 (0x220 - 0xC8)
	struct FAnimNode_OrientationWarping : public FAnimNode_SkeletalControlBase	
	{
	public:
		EWarpingEvaluationMode Mode; // 0xC8(0x1)
		unsigned char UnknownData00_6[0x3]; // 0xC9(0x3) UNKNOWN PROPERTY
		float OrientationAngle; // 0xCC(0x4)
		float LocomotionAngle; // 0xD0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xD4(0x4) UNKNOWN PROPERTY
		FVector LocomotionDirection; // 0xD8(0x18)
		float MinRootMotionSpeedThreshold; // 0xF0(0x4)
		float LocomotionAngleDeltaThreshold; // 0xF4(0x4)
		TArray<FBoneReference> SpineBones; // 0xF8(0x10)
		FBoneReference IKFootRootBone; // 0x108(0xC)
		unsigned char UnknownData02_6[0x4]; // 0x114(0x4) UNKNOWN PROPERTY
		TArray<FBoneReference> IKFootBones; // 0x118(0x10)
		TEnumAsByte<EAxis> RotationAxis; // 0x128(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x129(0x3) UNKNOWN PROPERTY
		float DistributedBoneOrientationAlpha; // 0x12C(0x4)
		float RotationInterpSpeed; // 0x130(0x4)
		float MaxCorrectionDegrees; // 0x134(0x4)
		float MaxRootMotionDeltaToCompensateDegrees; // 0x138(0x4)
		bool bCounterCompenstateInterpolationByRootMotion; // 0x13C(0x1)
		bool bScaleByGlobalBlendWeight; // 0x13D(0x1)
		bool bUseManualRootMotionVelocity; // 0x13E(0x1)
		unsigned char UnknownData04_6[0x1]; // 0x13F(0x1) UNKNOWN PROPERTY
		FVector ManualRootMotionVelocity; // 0x140(0x18)
		EOrientationWarpingSpace WarpingSpace; // 0x158(0x1)
		unsigned char UnknownData05_6[0x7]; // 0x159(0x7) UNKNOWN PROPERTY
		FTransform WarpingSpaceTransform; // 0x160(0x60)
		unsigned char UnknownData06_7[0x60]; // 0x1C0(0x60) UNKNOWN PROPERTY
	};


	// Struct AnimationWarpingRuntime.AnimNode_OverrideRootMotion
	// Inherited from FAnimNode_Base
	// Size: 0x20 (0x30 - 0x10)
	struct FAnimNode_OverrideRootMotion : public FAnimNode_Base	
	{
	public:
		FPoseLink Source; // 0x10(0x10)
		unsigned char UnknownData00_7[0x10]; // 0x20(0x10) UNKNOWN PROPERTY
	};


	// Struct AnimationWarpingRuntime.SlopeWarpingFootDefinition
	// Size: 0x20 (0x20 - 0x0)
	struct FSlopeWarpingFootDefinition	
	{
	public:
		FBoneReference IKFootBone; // 0x0(0xC)
		FBoneReference FKFootBone; // 0xC(0xC)
		int32_t NumBonesInLimb; // 0x18(0x4)
		float FootSize; // 0x1C(0x4)
	};


	// Struct AnimationWarpingRuntime.SlopeWarpingFootData
	// Size: 0xB0 (0xB0 - 0x0)
	struct FSlopeWarpingFootData	
	{
	public:
		unsigned char UnknownData00_2[0xB0]; // 0x0(0xB0) UNKNOWN PROPERTY
	};


	// Struct AnimationWarpingRuntime.AnimNode_SlopeWarping
	// Inherited from FAnimNode_SkeletalControlBase -> FAnimNode_Base
	// Size: 0x210 (0x2D8 - 0xC8)
	struct FAnimNode_SlopeWarping : public FAnimNode_SkeletalControlBase	
	{
	public:
		unsigned char UnknownData00_3[0x18]; // 0xC8(0x18) UNKNOWN PROPERTY
		FBoneReference IKFootRootBone; // 0xE0(0xC)
		FBoneReference PelvisBone; // 0xEC(0xC)
		TArray<FSlopeWarpingFootDefinition> FeetDefinitions; // 0xF8(0x10)
		TArray<FSlopeWarpingFootData> FeetData; // 0x108(0x10)
		FVectorRK4SpringInterpolator PelvisOffsetInterpolator; // 0x118(0x8)
		unsigned char UnknownData01_6[0x58]; // 0x120(0x58) UNKNOWN PROPERTY
		FVector GravityDir; // 0x178(0x18)
		FVector CustomFloorOffset; // 0x190(0x18)
		float CachedDeltaTime; // 0x1A8(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x1AC(0x4) UNKNOWN PROPERTY
		FVector TargetFloorNormalWorldSpace; // 0x1B0(0x18)
		FVectorRK4SpringInterpolator FloorNormalInterpolator; // 0x1C8(0x8)
		unsigned char UnknownData03_6[0x58]; // 0x1D0(0x58) UNKNOWN PROPERTY
		FVector TargetFloorOffsetLocalSpace; // 0x228(0x18)
		FVectorRK4SpringInterpolator FloorOffsetInterpolator; // 0x240(0x8)
		unsigned char UnknownData04_6[0x58]; // 0x248(0x58) UNKNOWN PROPERTY
		float MaxStepHeight; // 0x2A0(0x4)
		bool bKeepMeshInsideOfCapsule : 1; // 0x2A4:0(0x1)
		bool bPullPelvisDown : 1; // 0x2A4:1(0x1)
		bool bUseCustomFloorOffset : 1; // 0x2A4:2(0x1)
		bool bWasOnGround : 1; // 0x2A4:3(0x1)
		bool bShowDebug : 1; // 0x2A4:4(0x1)
		bool bFloorSmoothingInitialized : 1; // 0x2A4:5(0x1)
		unsigned char UnknownData05_5[0x3]; // 0x2A5(0x3) UNKNOWN PROPERTY
		FVector ActorLocation; // 0x2A8(0x18)
		FVector GravityDirCompSpace; // 0x2C0(0x18)
	};


	// Struct AnimationWarpingRuntime.AnimNode_Steering
	// Inherited from FAnimNode_SkeletalControlBase -> FAnimNode_Base
	// Size: 0x118 (0x1E0 - 0xC8)
	struct FAnimNode_Steering : public FAnimNode_SkeletalControlBase	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0xC8(0x8) UNKNOWN PROPERTY
		FQuat TargetOrientation; // 0xD0(0x20)
		bool bEnableTargetSmoothing; // 0xF0(0x1)
		unsigned char UnknownData01_6[0x3]; // 0xF1(0x3) UNKNOWN PROPERTY
		float SmoothTargetStiffness; // 0xF4(0x4)
		float SmoothTargetDamping; // 0xF8(0x4)
		float ProceduralTargetTime; // 0xFC(0x4)
		float TargetTime; // 0x100(0x4)
		float AnimatedTargetTime; // 0x104(0x4)
		float RootMotionThreshold; // 0x108(0x4)
		float DisableSteeringBelowSpeed; // 0x10C(0x4)
		UAnimationAsset* CurrentAnimAsset; // 0x110(0x8)
		float CurrentAnimAssetTime; // 0x118(0x4)
		unsigned char UnknownData02_7[0xC4]; // 0x11C(0xC4) UNKNOWN PROPERTY
	};


	// Struct AnimationWarpingRuntime.StrideWarpingFootDefinition
	// Size: 0x24 (0x24 - 0x0)
	struct FStrideWarpingFootDefinition	
	{
	public:
		FBoneReference IKFootBone; // 0x0(0xC)
		FBoneReference FKFootBone; // 0xC(0xC)
		FBoneReference ThighBone; // 0x18(0xC)
	};


	// Struct AnimationWarpingRuntime.AnimNode_StrideWarping
	// Inherited from FAnimNode_SkeletalControlBase -> FAnimNode_Base
	// Size: 0x178 (0x240 - 0xC8)
	struct FAnimNode_StrideWarping : public FAnimNode_SkeletalControlBase	
	{
	public:
		EWarpingEvaluationMode Mode; // 0xC8(0x1)
		unsigned char UnknownData00_6[0x7]; // 0xC9(0x7) UNKNOWN PROPERTY
		FVector StrideDirection; // 0xD0(0x18)
		float StrideScale; // 0xE8(0x4)
		float LocomotionSpeed; // 0xEC(0x4)
		float MinRootMotionSpeedThreshold; // 0xF0(0x4)
		FBoneReference PelvisBone; // 0xF4(0xC)
		FBoneReference IKFootRootBone; // 0x100(0xC)
		unsigned char UnknownData01_6[0x4]; // 0x10C(0x4) UNKNOWN PROPERTY
		TArray<FStrideWarpingFootDefinition> FootDefinitions; // 0x110(0x10)
		FInputClampConstants StrideScaleModifier; // 0x120(0x14)
		unsigned char UnknownData02_6[0x4]; // 0x134(0x4) UNKNOWN PROPERTY
		FWarpingVectorValue FloorNormalDirection; // 0x138(0x20)
		FWarpingVectorValue GravityDirection; // 0x158(0x20)
		FIKFootPelvisPullDownSolver PelvisIKFootSolver; // 0x178(0x80)
		bool bOrientStrideDirectionUsingFloorNormal; // 0x1F8(0x1)
		bool bCompensateIKUsingFKThighRotation; // 0x1F9(0x1)
		bool bClampIKUsingFKLimits; // 0x1FA(0x1)
		bool bDisableIfMissingRootMotion; // 0x1FB(0x1)
		unsigned char UnknownData03_7[0x44]; // 0x1FC(0x44) UNKNOWN PROPERTY
	};

}
