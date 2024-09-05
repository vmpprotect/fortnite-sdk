#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: AnimationSharing
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct AnimationSharing.AnimationSetup
	// Size: 0x18 (0x18 - 0x0)
	struct FAnimationSetup	
	{
	public:
		UAnimSequence AnimSequence; // 0x0(0x8)
		UClass AnimBlueprint; // 0x8(0x8)
		FPerPlatformInt NumRandomizedInstances; // 0x10(0x4)
		FPerPlatformBool Enabled; // 0x14(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x15(0x3) UNKNOWN PROPERTY
	};


	// Struct AnimationSharing.AnimationStateEntry
	// Size: 0x30 (0x30 - 0x0)
	struct FAnimationStateEntry	
	{
	public:
		char State; // 0x0(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		TArray AnimationSetups; // 0x8(0x10)
		bool bOnDemand; // 0x18(0x1)
		bool bAdditive; // 0x19(0x1)
		unsigned char UnknownData05_6[0x2]; // 0x1A(0x2) UNKNOWN PROPERTY
		float BlendTime; // 0x1C(0x4)
		bool bReturnToPreviousState; // 0x20(0x1)
		bool bSetNextState; // 0x21(0x1)
		char NextState; // 0x22(0x1)
		unsigned char UnknownData06_6[0x1]; // 0x23(0x1) UNKNOWN PROPERTY
		FPerPlatformInt MaximumNumberOfConcurrentInstances; // 0x24(0x4)
		float WiggleTimePercentage; // 0x28(0x4)
		bool bRequiresCurves; // 0x2C(0x1)
		unsigned char UnknownData07_7[0x3]; // 0x2D(0x3) UNKNOWN PROPERTY
	};


	// Struct AnimationSharing.PerSkeletonAnimationSharingSetup
	// Size: 0x38 (0x38 - 0x0)
	struct FPerSkeletonAnimationSharingSetup	
	{
	public:
		USkeleton Skeleton; // 0x0(0x8)
		USkeletalMesh SkeletalMesh; // 0x8(0x8)
		UClass BlendAnimBlueprint; // 0x10(0x8)
		UClass AdditiveAnimBlueprint; // 0x18(0x8)
		UClass StateProcessorClass; // 0x20(0x8)
		TArray AnimationStates; // 0x28(0x10)
	};


	// Struct AnimationSharing.AnimationSharingScalability
	// Size: 0x10 (0x10 - 0x0)
	struct FAnimationSharingScalability	
	{
	public:
		FPerPlatformBool UseBlendTransitions; // 0x0(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		FPerPlatformFloat BlendSignificanceValue; // 0x4(0x4)
		FPerPlatformInt MaximumNumberConcurrentBlends; // 0x8(0x4)
		FPerPlatformFloat TickSignificanceValue; // 0xC(0x4)
	};


	// Struct AnimationSharing.TickAnimationSharingFunction
	// Inherited from FTickFunction
	// Size: 0x8 (0x30 - 0x28)
	struct FTickAnimationSharingFunction : public FTickFunction	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
	};

}
