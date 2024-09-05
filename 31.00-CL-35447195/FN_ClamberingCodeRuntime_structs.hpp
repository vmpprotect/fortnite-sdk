#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: ClamberingCodeRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct ClamberingCodeRuntime.FortMovementMode_ClamberingCreationData
	// Inherited from FFortMovementMode_TraversalBaseCreationData -> FFortMovementMode_BaseExtCreationData
	// Size: 0x18 (0x140 - 0x128)
	struct FFortMovementMode_ClamberingCreationData : public FFortMovementMode_TraversalBaseCreationData	
	{
	public:
		TArray LedgeLaunchWarpPointInfos; // 0x128(0x10)
		int32_t LedgeLaunchWarpPointIndex; // 0x138(0x4)
		bool bCanStandOnLedge; // 0x13C(0x1)
		bool bHasFixedLedgeLaunchWarpPoint; // 0x13D(0x1)
		bool bClamberFromFalling; // 0x13E(0x1)
		unsigned char UnknownData01_7[0x1]; // 0x13F(0x1) UNKNOWN PROPERTY
	};


	// Struct ClamberingCodeRuntime.ClamberMontageInput
	// Size: 0x50 (0x50 - 0x0)
	struct FClamberMontageInput	
	{
	public:
		FSynchedActionInfo BaseSynchedActionInfo; // 0x0(0x30)
		FVector FutureLedgeWarpPoint; // 0x30(0x18)
		bool bIsLedgeLaunch; // 0x48(0x1)
		bool bHasFutureLedge; // 0x49(0x1)
		bool bClamberFromFalling; // 0x4A(0x1)
		bool bWindowClamber; // 0x4B(0x1)
		unsigned char UnknownData01_7[0x4]; // 0x4C(0x4) UNKNOWN PROPERTY
	};


	// Struct ClamberingCodeRuntime.LedgeLaunchConfigEntry
	// Size: 0x20 (0x20 - 0x0)
	struct FLedgeLaunchConfigEntry	
	{
	public:
		TArray LedgeTransforms; // 0x0(0x10)
		TArray WindowLedgeTransforms; // 0x10(0x10)
	};


	// Struct ClamberingCodeRuntime.LedgeLaunchTransformConfigEntry
	// Size: 0x50 (0x50 - 0x0)
	struct FLedgeLaunchTransformConfigEntry	
	{
	public:
		TMap Transforms; // 0x0(0x50)
	};


	// Struct ClamberingCodeRuntime.ClamberingInputConfig
	// Size: 0x350 (0x350 - 0x0)
	struct FClamberingInputConfig	
	{
	public:
		FScalableFloat ClamberActivationHorizontalRange; // 0x0(0x28)
		FScalableFloat ClamberActivationVerticalRange; // 0x28(0x28)
		FScalableFloat ClamberLookAtThreshold; // 0x50(0x28)
		FScalableFloat EnableInputDelay; // 0x78(0x28)
		FScalableFloat QueuedInputWindow; // 0xA0(0x28)
		FScalableFloat HeldInputDuration; // 0xC8(0x28)
		EClamberingActivationMode ActivationMode; // 0xF0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0xF1(0x7) UNKNOWN PROPERTY
		FScalableFloat AutoStartMovementThreshold; // 0xF8(0x28)
		FScalableFloat AutoStartLookAtThreshold; // 0x120(0x28)
		FScalableFloat AutoStartWallCheckCastRadius; // 0x148(0x28)
		FScalableFloat AutoStartWallCheckHorizontalRange; // 0x170(0x28)
		FScalableFloat AutoStartWallCheckLookAtThresholdMultiplier; // 0x198(0x28)
		FScalableFloat TargetInvalidateDistance; // 0x1C0(0x28)
		FScalableFloat TargetAimInvalidateAngle; // 0x1E8(0x28)
		FScalableFloat TargetActorMovementInvalidateDistance; // 0x210(0x28)
		FScalableFloat LedgeLaunchEnabled; // 0x238(0x28)
		FScalableFloat MaxDirectionalLedgeLaunchAngle; // 0x260(0x28)
		FScalableFloat PBWLedgeLaunchMaxHorizontalTranslation; // 0x288(0x28)
		FScalableFloat DefaultLedgeLaunchVerticalTranslation; // 0x2B0(0x28)
		FScalableFloat PBWLedgeLaunchVerticalTranslation; // 0x2D8(0x28)
		FScalableFloat PBWNextLedgeLaunchVerticalTranslation; // 0x300(0x28)
		FScalableFloat LedgeLaunchWarpingWindow; // 0x328(0x28)
	};


	// Struct ClamberingCodeRuntime.ClamberingTargetingConfig_Ledge
	// Size: 0x4B0 (0x4B0 - 0x0)
	struct FClamberingTargetingConfig_Ledge	
	{
	public:
		FScalableFloat ForwardCastDistance; // 0x0(0x28)
		FScalableFloat ForwardCastRadius; // 0x28(0x28)
		FScalableFloat FowardCast2D; // 0x50(0x28)
		FScalableFloat VerticalSurfaceThreshold; // 0x78(0x28)
		FScalableFloat HorizontalSurfaceThreshold; // 0xA0(0x28)
		FScalableFloat UpwardDistanceCapsuleHeightMultiplier; // 0xC8(0x28)
		FScalableFloat UpwardStartDistanceCapsuleHeightMultiplier; // 0xF0(0x28)
		FScalableFloat DownwardDistanceCapsuleHeightMultiplier; // 0x118(0x28)
		FScalableFloat MinimumLedgeHeight; // 0x140(0x28)
		FScalableFloat MinimumLedgeHeightWater; // 0x168(0x28)
		FScalableFloat FallingSpeedThreshold; // 0x190(0x28)
		FScalableFloat MinimumLedgeFallingHeight; // 0x1B8(0x28)
		FScalableFloat MinimumLedgeFallingWaterHeight; // 0x1E0(0x28)
		FScalableFloat ForwardSphereCastRadius; // 0x208(0x28)
		FScalableFloat DownwardSphereCastRadius; // 0x230(0x28)
		FScalableFloat AllowNonWalkableSurfaces; // 0x258(0x28)
		FScalableFloat TargetValidationEnabled; // 0x280(0x28)
		FScalableFloat TargetValidationCapsuleRadiusModifier; // 0x2A8(0x28)
		FScalableFloat TargetValidationCapsuleHalfHeightModifier; // 0x2D0(0x28)
		FScalableFloat TargetValidationCapsuleBottomVerticalOffset; // 0x2F8(0x28)
		FScalableFloat FutureLedgeLaunchMaxVerticalDetectionRange; // 0x320(0x28)
		FScalableFloat FutureLedgeLaunchMaxHorizontalDetectionRange; // 0x348(0x28)
		FScalableFloat LedgeExtentThresholdToUseMidpointTargeting; // 0x370(0x28)
		FScalableFloat FloorCheckCastWallOffset; // 0x398(0x28)
		FScalableFloat FloorCheckDownDistance; // 0x3C0(0x28)
		FScalableFloat FloorCheckMaxAllowedAngle; // 0x3E8(0x28)
		FScalableFloat WindowTargetingHorizontalSweepBreadth; // 0x410(0x28)
		FScalableFloat WindowTargetingHorizontalSweepHeight; // 0x438(0x28)
		FScalableFloat WindowTargetingHorizontalOpeningSweepBreadth; // 0x460(0x28)
		FScalableFloat WindowTargetingVerticalOffsetCheckInWindowFrame; // 0x488(0x28)
	};


	// Struct ClamberingCodeRuntime.ClamberingInputConfig_CachedValues
	// Size: 0x5C (0x5C - 0x0)
	struct FClamberingInputConfig_CachedValues	
	{
	public:
		unsigned char UnknownData01_2[0x5C]; // 0x0(0x5C) UNKNOWN PROPERTY
	};


	// Struct ClamberingCodeRuntime.ClamberingTargetingConfig_Ledge_CachedContextualValues
	// Size: 0x7C (0x7C - 0x0)
	struct FClamberingTargetingConfig_Ledge_CachedContextualValues	
	{
	public:
		unsigned char UnknownData01_2[0x7C]; // 0x0(0x7C) UNKNOWN PROPERTY
	};


	// Struct ClamberingCodeRuntime.ClamberingTargetingDebugDrawData
	// Size: 0x28 (0x28 - 0x0)
	struct FClamberingTargetingDebugDrawData	
	{
	public:
		unsigned char UnknownData01_2[0x28]; // 0x0(0x28) UNKNOWN PROPERTY
	};


	// Struct ClamberingCodeRuntime.ClamberingTargetingDebugDrawData_Box
	// Inherited from FClamberingTargetingDebugDrawData
	// Size: 0x48 (0x70 - 0x28)
	struct FClamberingTargetingDebugDrawData_Box : public FClamberingTargetingDebugDrawData	
	{
	public:
		unsigned char UnknownData01_1[0x48]; // 0x28(0x48) UNKNOWN PROPERTY
	};


	// Struct ClamberingCodeRuntime.ClamberingTargetingDebugDrawData_Capsule
	// Inherited from FClamberingTargetingDebugDrawData
	// Size: 0x28 (0x50 - 0x28)
	struct FClamberingTargetingDebugDrawData_Capsule : public FClamberingTargetingDebugDrawData	
	{
	public:
		unsigned char UnknownData01_1[0x28]; // 0x28(0x28) UNKNOWN PROPERTY
	};


	// Struct ClamberingCodeRuntime.ClamberingTargetingDebugDrawData_Line
	// Inherited from FClamberingTargetingDebugDrawData
	// Size: 0x18 (0x40 - 0x28)
	struct FClamberingTargetingDebugDrawData_Line : public FClamberingTargetingDebugDrawData	
	{
	public:
		unsigned char UnknownData01_1[0x18]; // 0x28(0x18) UNKNOWN PROPERTY
	};


	// Struct ClamberingCodeRuntime.ClamberingTargetingDebugDrawData_Sphere
	// Inherited from FClamberingTargetingDebugDrawData
	// Size: 0x8 (0x30 - 0x28)
	struct FClamberingTargetingDebugDrawData_Sphere : public FClamberingTargetingDebugDrawData	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
	};


	// Struct ClamberingCodeRuntime.ClamberingTargetingDebugDrawData_DirectionalArrow
	// Inherited from FClamberingTargetingDebugDrawData
	// Size: 0x20 (0x48 - 0x28)
	struct FClamberingTargetingDebugDrawData_DirectionalArrow : public FClamberingTargetingDebugDrawData	
	{
	public:
		unsigned char UnknownData01_1[0x20]; // 0x28(0x20) UNKNOWN PROPERTY
	};


	// Struct ClamberingCodeRuntime.ClamberingTargetingDebugDrawData_CapsuleCast
	// Inherited from FClamberingTargetingDebugDrawData_Capsule -> FClamberingTargetingDebugDrawData
	// Size: 0x20 (0x70 - 0x50)
	struct FClamberingTargetingDebugDrawData_CapsuleCast : public FClamberingTargetingDebugDrawData_Capsule	
	{
	public:
		unsigned char UnknownData01_1[0x20]; // 0x50(0x20) UNKNOWN PROPERTY
	};


	// Struct ClamberingCodeRuntime.ClamberingTargetingDebugDrawData_SphereCast
	// Inherited from FClamberingTargetingDebugDrawData_Sphere -> FClamberingTargetingDebugDrawData
	// Size: 0x18 (0x48 - 0x30)
	struct FClamberingTargetingDebugDrawData_SphereCast : public FClamberingTargetingDebugDrawData_Sphere	
	{
	public:
		unsigned char UnknownData01_1[0x18]; // 0x30(0x18) UNKNOWN PROPERTY
	};


	// Struct ClamberingCodeRuntime.ClamberingTargetingDebugData
	// Size: 0x1 (0x1 - 0x0)
	struct FClamberingTargetingDebugData	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct ClamberingCodeRuntime.ClamberingTargetingDebugData_Ledge
	// Inherited from FClamberingTargetingDebugData
	// Size: 0x0 (0x1 - 0x1)
	struct FClamberingTargetingDebugData_Ledge : public FClamberingTargetingDebugData	
	{
	public:
	};


	// Struct ClamberingCodeRuntime.ClamberingTargetingData
	// Size: 0xE0 (0xE0 - 0x0)
	struct FClamberingTargetingData	
	{
	public:
		EClamberingType Type; // 0x0(0x1)
		bool bValid : 1; // 0x1:0(0x1)
		bool bCanStandOnLedge : 1; // 0x1:1(0x1)
		bool bIsWindow : 1; // 0x1:2(0x1)
		unsigned char UnknownData02_5[0x6]; // 0x2(0x6) UNKNOWN PROPERTY
		AActor SourceActor; // 0x8(0x8)
		FVector SourceLocation; // 0x10(0x18)
		FVector SourceAim; // 0x28(0x18)
		FVector WallLocation; // 0x40(0x18)
		FVector WallNormal; // 0x58(0x18)
		FVector TargetLocation; // 0x70(0x18)
		FVector TargetNormal; // 0x88(0x18)
		AActor TargetActor; // 0xA0(0x8)
		UPrimitiveComponent TargetActorComponent; // 0xA8(0x8)
		FVector TargetActorComponentLocation; // 0xB0(0x18)
		FName TargetActorBoneName; // 0xC8(0x4)
		unsigned char UnknownData03_6[0x4]; // 0xCC(0x4) UNKNOWN PROPERTY
		TArray NextLedgeLaunchWarpPoints; // 0xD0(0x10)
	};


	// Struct ClamberingCodeRuntime.ReplicatedClamberingTargetingData
	// Size: 0x78 (0x78 - 0x0)
	struct FReplicatedClamberingTargetingData	
	{
	public:
		EClamberingType Type; // 0x0(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		FVector_NetQuantize10 SourceLocation; // 0x8(0x18)
		FVector_NetQuantize100 WallLocation; // 0x20(0x18)
		uint16_t WallNormalYawQuantized; // 0x38(0x2)
		uint16_t WallNormalPitchQuantized; // 0x3A(0x2)
		unsigned char UnknownData05_6[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY
		FVector_NetQuantize100 TargetLocation; // 0x40(0x18)
		uint16_t TargetNormalYawQuantized; // 0x58(0x2)
		uint16_t TargetNormalPitchQuantized; // 0x5A(0x2)
		unsigned char UnknownData06_6[0x4]; // 0x5C(0x4) UNKNOWN PROPERTY
		AActor TargetActor; // 0x60(0x8)
		UPrimitiveComponent TargetActorComponent; // 0x68(0x8)
		FName TargetActorBoneName; // 0x70(0x4)
		unsigned char UnknownData07_7[0x4]; // 0x74(0x4) UNKNOWN PROPERTY
	};


	// Struct ClamberingCodeRuntime.ReplicatedClamberingTargetingData_SimClient
	// Size: 0x38 (0x38 - 0x0)
	struct FReplicatedClamberingTargetingData_SimClient	
	{
	public:
		EClamberingType Type; // 0x0(0x1)
		unsigned char UnknownData03_6[0x1]; // 0x1(0x1) UNKNOWN PROPERTY
		uint16_t WallNormalYawQuantized; // 0x2(0x2)
		unsigned char UnknownData04_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FVector_NetQuantize100 TargetLocation; // 0x8(0x18)
		AActor TargetActor; // 0x20(0x8)
		UPrimitiveComponent TargetActorComponent; // 0x28(0x8)
		FName TargetActorBoneName; // 0x30(0x4)
		unsigned char UnknownData05_7[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
	};


	// Struct ClamberingCodeRuntime.ClamberingMovementConfig_Ledge
	// Size: 0x50 (0x50 - 0x0)
	struct FClamberingMovementConfig_Ledge	
	{
	public:
		FScalableFloat duration; // 0x0(0x28)
		FScalableFloat BlockCheckTickRate; // 0x28(0x28)
	};


	// Struct ClamberingCodeRuntime.ClamberingAnalytics_ClamberEvent
	// Size: 0x28 (0x28 - 0x0)
	struct FClamberingAnalytics_ClamberEvent	
	{
	public:
		int32_t MatchTime; // 0x0(0x4)
		EClamberingType ClamberType; // 0x4(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
		FVector ClamberLocation; // 0x8(0x18)
		EClamberingFailedReason FailureReason; // 0x20(0x1)
		unsigned char UnknownData03_7[0x7]; // 0x21(0x7) UNKNOWN PROPERTY
	};


	// Struct ClamberingCodeRuntime.ClamberingAnimationEntry
	// Inherited from FTableRowBase
	// Size: 0x10 (0x18 - 0x8)
	struct FClamberingAnimationEntry : public FTableRowBase	
	{
	public:
		UAnimMontage Montage; // 0x8(0x8)
		float MinClamberHeight; // 0x10(0x4)
		bool bLedgeLaunch; // 0x14(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x15(0x3) UNKNOWN PROPERTY
	};

}
