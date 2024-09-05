#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: MotionWarping
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct MotionWarping.AttributeBasedRootMotionComponentPrePhysicsTickFunction
	// Inherited from FTickFunction
	// Size: 0x8 (0x30 - 0x28)
	struct FAttributeBasedRootMotionComponentPrePhysicsTickFunction : public FTickFunction	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
	};


	// Struct MotionWarping.MotionWarpingWindowData
	// Size: 0x10 (0x10 - 0x0)
	struct FMotionWarpingWindowData	
	{
	public:
		UAnimNotifyState_MotionWarping* AnimNotify; // 0x0(0x8)
		float StartTime; // 0x8(0x4)
		float EndTime; // 0xC(0x4)
	};


	// Struct MotionWarping.MotionWarpingUpdateContext
	// Size: 0x1C (0x1C - 0x0)
	struct FMotionWarpingUpdateContext	
	{
	public:
		TWeakObjectPtr<UAnimSequenceBase*> Animation; // 0x0(0x8)
		float PreviousPosition; // 0x8(0x4)
		float CurrentPosition; // 0xC(0x4)
		float Weight; // 0x10(0x4)
		float PlayRate; // 0x14(0x4)
		float DeltaSeconds; // 0x18(0x4)
	};


	// Struct MotionWarping.MotionWarpingTarget
	// Size: 0x78 (0x78 - 0x0)
	struct FMotionWarpingTarget	
	{
	public:
		FName Name; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FVector Location; // 0x8(0x18)
		FRotator Rotation; // 0x20(0x18)
		TWeakObjectPtr<USceneComponent*> Component; // 0x38(0x8)
		FName BoneName; // 0x40(0x4)
		bool bFollowComponent; // 0x44(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x45(0x3) UNKNOWN PROPERTY
		FVector LocationOffset; // 0x48(0x18)
		FRotator RotationOffset; // 0x60(0x18)
	};


	// Struct MotionWarping.MotionDeltaTrack
	// Size: 0x60 (0x60 - 0x0)
	struct FMotionDeltaTrack	
	{
	public:
		TArray<FTransform> BoneTransformTrack; // 0x0(0x10)
		TArray<FVector> DeltaTranslationTrack; // 0x10(0x10)
		TArray<FRotator> DeltaRotationTrack; // 0x20(0x10)
		FVector TotalTranslation; // 0x30(0x18)
		FRotator TotalRotation; // 0x48(0x18)
	};


	// Struct MotionWarping.MotionDeltaTrackContainer
	// Size: 0x10 (0x10 - 0x0)
	struct FMotionDeltaTrackContainer	
	{
	public:
		TArray<FMotionDeltaTrack> Tracks; // 0x0(0x10)
	};

}
