#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: VaultingCodeRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct VaultingCodeRuntime.FortMovementMode_HurdleCreationData
	// Inherited from FFortMovementMode_TraversalBaseCreationData -> FFortMovementMode_BaseExtCreationData
	// Size: 0x8 (0x130 - 0x128)
	struct FFortMovementMode_HurdleCreationData : public FFortMovementMode_TraversalBaseCreationData	
	{
	public:
		EHurdleType Type; // 0x128(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x129(0x7) UNKNOWN PROPERTY
	};


	// Struct VaultingCodeRuntime.HurdleInputConfig
	// Size: 0x670 (0x670 - 0x0)
	struct FHurdleInputConfig	
	{
	public:
		FScalableFloat CastRadius; // 0x0(0x28)
		FScalableFloat MaxAllowedFallDistance; // 0x28(0x28)
		FScalableFloat ForwardCastDistance_Phase1; // 0x50(0x28)
		FScalableFloat ForwardCastDistance_Phase1_HurdleFromJog; // 0x78(0x28)
		FScalableFloat ForwardCastDistance_Phase1_ManualHurdle; // 0xA0(0x28)
		FScalableFloat Phase1_WallAngleToleranceFlat; // 0xC8(0x28)
		FScalableFloat Phase1_SweepGroundBufferHeight; // 0xF0(0x28)
		FScalableFloat Phase1_SweepGroundMaxHeight; // 0x118(0x28)
		FScalableFloat Phase1_Floor_WallOffset; // 0x140(0x28)
		FScalableFloat Phase1_Floor_MinHeightForHurlde; // 0x168(0x28)
		unsigned char UnknownData03_6[0x78]; // 0x190(0x78) UNKNOWN PROPERTY
		FScalableFloat Phase2_UpAngleTolerance; // 0x208(0x28)
		FScalableFloat Phase2_Floor_MaxHeightForHurlde; // 0x230(0x28)
		unsigned char UnknownData04_6[0x28]; // 0x258(0x28) UNKNOWN PROPERTY
		FScalableFloat Phase3_CapsuleOffset; // 0x280(0x28)
		FScalableFloat Phase3_ClearanceCapsuleSize; // 0x2A8(0x28)
		FScalableFloat Phase3_ForwardCastDistance; // 0x2D0(0x28)
		FScalableFloat Phase3_MinTopClearanceForHurdleOn; // 0x2F8(0x28)
		FScalableFloat Phase4_MaxDownDistance; // 0x320(0x28)
		FScalableFloat Phase4_UpAngleTolerance; // 0x348(0x28)
		FScalableFloat Phase4_HurdleOnZTolerance; // 0x370(0x28)
		FScalableFloat Phase5_CapsuleOffset; // 0x398(0x28)
		FScalableFloat Phase5_ClearanceCapsuleSize; // 0x3C0(0x28)
		FScalableFloat FinalResult_GroundAimOffset; // 0x3E8(0x28)
		FScalableFloat MaxHurdleDamageDealt; // 0x410(0x28)
		FScalableFloat SlideBufferTime; // 0x438(0x28)
		FScalableFloat MinimumSpeedToHurdle; // 0x460(0x28)
		FScalableFloat MinimumForwardStickDeflection; // 0x488(0x28)
		FScalableFloat RangeToIgnoreMinimumSpeedThreshold; // 0x4B0(0x28)
		FScalableFloat MaximumCapsuleRadius; // 0x4D8(0x28)
		FScalableFloat MaximumCapsuleHalfHeight; // 0x500(0x28)
		FScalableFloat Phase0_HorizontalSweepBreadth; // 0x528(0x28)
		FScalableFloat Phase0_HorizontalSweepHeight; // 0x550(0x28)
		FScalableFloat Phase0_HorizontalOpeningSweepBreadth; // 0x578(0x28)
		FScalableFloat Phase0_VerticalOffsetCheckInWindowFrame; // 0x5A0(0x28)
		FScalableFloat Phase0_VerticalOffsetCheckInWindowFrameWithOffsetWindow; // 0x5C8(0x28)
		FScalableFloat Phase0_MaxHorizontalSweepOffset; // 0x5F0(0x28)
		FScalableFloat MaxVerticalAngleFromLookAt; // 0x618(0x28)
		FScalableFloat MaxVerticalAngleFromLookAtNarrowOpening; // 0x640(0x28)
		FFortReleaseVersion MovementModeExtensionVersion; // 0x668(0x4)
		unsigned char UnknownData05_7[0x4]; // 0x66C(0x4) UNKNOWN PROPERTY
	};


	// Struct VaultingCodeRuntime.HurdleInputConfigCache
	// Size: 0xA8 (0xA8 - 0x0)
	struct FHurdleInputConfigCache	
	{
	public:
		float CastRadius; // 0x0(0x4)
		float MaxAllowedFallDistance; // 0x4(0x4)
		float ForwardCastDistance_Phase1; // 0x8(0x4)
		float ForwardCastDistance_Phase1_HurdleFromJog; // 0xC(0x4)
		float ForwardCastDistance_Phase1_ManualHurdle; // 0x10(0x4)
		float Phase1_WallAngleToleranceFlat; // 0x14(0x4)
		float Phase1_SweepGroundBufferHeight; // 0x18(0x4)
		float Phase1_SweepGroundMaxHeight; // 0x1C(0x4)
		float Phase1_Floor_WallOffset; // 0x20(0x4)
		float Phase1_Floor_MinHeightForHurlde; // 0x24(0x4)
		float Phase1_Floor_MaxFloorSearchHeight; // 0x28(0x4)
		float Phase1_MaxVerticalAngleDeviationDownOnNormal; // 0x2C(0x4)
		float Phase1_StartLocationWallOffset; // 0x30(0x4)
		float Phase2_UpAngleTolerance; // 0x34(0x4)
		float Phase2_Floor_MaxHeightForHurlde; // 0x38(0x4)
		float Phase2_Floor_HeightCorrectionMinFloorAngle; // 0x3C(0x4)
		float Phase3_CapsuleOffset; // 0x40(0x4)
		float Phase3_ClearanceCapsuleSize; // 0x44(0x4)
		float Phase3_ForwardCastDistance; // 0x48(0x4)
		float Phase3_MinTopClearanceForHurdleOn; // 0x4C(0x4)
		float Phase4_MaxDownDistance; // 0x50(0x4)
		float Phase4_UpAngleTolerance; // 0x54(0x4)
		float Phase4_HurdleOnZTolerance; // 0x58(0x4)
		float Phase5_CapsuleOffset; // 0x5C(0x4)
		float Phase5_ClearanceCapsuleSize; // 0x60(0x4)
		float FinalResult_GroundAimOffset; // 0x64(0x4)
		float MaxHurdleDamageDealt; // 0x68(0x4)
		float SlideBufferTime; // 0x6C(0x4)
		float MinimumSpeedToHurdle; // 0x70(0x4)
		float MinimumForwardStickDeflection; // 0x74(0x4)
		float RangeToIgnoreMinimumSpeedThreshold; // 0x78(0x4)
		float MaximumCapsuleRadius; // 0x7C(0x4)
		float MaximumCapsuleHalfHeight; // 0x80(0x4)
		float Phase0_HorizontalSweepBreadth; // 0x84(0x4)
		float Phase0_HorizontalSweepHeight; // 0x88(0x4)
		float Phase0_HorizontalOpeningSweepBreadth; // 0x8C(0x4)
		float Phase0_VerticalOffsetCheckInWindowFrame; // 0x90(0x4)
		float Phase0_VerticalOffsetCheckInWindowFrameWithOffsetWindow; // 0x94(0x4)
		float Phase0_MaxHorizontalSweepOffset; // 0x98(0x4)
		float MaxVerticalAngleFromLookAt; // 0x9C(0x4)
		float MaxVerticalAngleFromLookAtNarrowOpening; // 0xA0(0x4)
		FFortReleaseVersion MovementModeExtensionVersion; // 0xA4(0x4)
	};


	// Struct VaultingCodeRuntime.HurdleTargetingData
	// Size: 0x130 (0x130 - 0x0)
	struct FHurdleTargetingData	
	{
	public:
		EHurdleType Type; // 0x0(0x1)
		EFortSynchedActionEndMovementMode EndMovementMode; // 0x1(0x1)
		bool bValid : 1; // 0x2:0(0x1)
		bool bIsNarrowOpening : 1; // 0x2:1(0x1)
		unsigned char UnknownData02_5[0x5]; // 0x3(0x5) UNKNOWN PROPERTY
		FVector FacingCornerLocation; // 0x8(0x18)
		FVector FacingCornerNormal; // 0x20(0x18)
		FVector BackCornerLocation; // 0x38(0x18)
		FVector FinalLandingPosition; // 0x50(0x18)
		AActor SourceActor; // 0x68(0x8)
		FVector SourceLocation; // 0x70(0x18)
		FVector SourceAim; // 0x88(0x18)
		FVector WallLocation; // 0xA0(0x18)
		FVector WallNormal; // 0xB8(0x18)
		FVector TargetLocation; // 0xD0(0x18)
		FVector TargetNormal; // 0xE8(0x18)
		TWeakObjectPtr TargetActor; // 0x100(0x8)
		TWeakObjectPtr TargetActorComponent; // 0x108(0x8)
		FVector TargetActorComponentLocation; // 0x110(0x18)
		FName TargetActorBoneName; // 0x128(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x12C(0x4) UNKNOWN PROPERTY
	};


	// Struct VaultingCodeRuntime.ReplicatedHurdleTargetingData
	// Size: 0x70 (0x70 - 0x0)
	struct FReplicatedHurdleTargetingData	
	{
	public:
		EHurdleType Type; // 0x0(0x1)
		EFortSynchedActionEndMovementMode EndMovementMode; // 0x1(0x1)
		unsigned char UnknownData02_6[0x6]; // 0x2(0x6) UNKNOWN PROPERTY
		FVector_NetQuantize10 FacingCornerLocation; // 0x8(0x18)
		FVector_NetQuantize10 FacingCornerNormal; // 0x20(0x18)
		FVector_NetQuantize10 BackCornerLocation; // 0x38(0x18)
		FVector_NetQuantize10 FinalLandingPosition; // 0x50(0x18)
		bool bValid; // 0x68(0x1)
		unsigned char UnknownData03_7[0x7]; // 0x69(0x7) UNKNOWN PROPERTY
	};

}
