#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: LocomotionInitiativeRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct LocomotionInitiativeRuntime.FortLocomotionLayerMaskDataSet
	// Size: 0x20 (0x20 - 0x0)
	struct FFortLocomotionLayerMaskDataSet	
	{
	public:
		float MaskingHeadTorsoAlpha; // 0x0(0x4)
		float MaskingLeftArmAlpha; // 0x4(0x4)
		float MaskingRightArmAlpha; // 0x8(0x4)
		float MaskingWeaponAlpha; // 0xC(0x4)
		float MutingHeadTorsoAlpha; // 0x10(0x4)
		float MutingLeftArmAlpha; // 0x14(0x4)
		float MutingRightArmAlpha; // 0x18(0x4)
		float MutingWeaponAlpha; // 0x1C(0x4)
	};


	// Struct LocomotionInitiativeRuntime.MotionMatchingLODConfig
	// Size: 0x38 (0x38 - 0x0)
	struct FMotionMatchingLODConfig	
	{
	public:
		UProxyTable* MotionDatabaseProxyTable; // 0x0(0x8)
		UAnimSequence* StandIdleLoop; // 0x8(0x8)
		UAnimSequence* CrouchIdleLoop; // 0x10(0x8)
		TArray<UAnimSequence*> StandIdleBreak; // 0x18(0x10)
		TArray<UAnimSequence*> CrouchIdleBreak; // 0x28(0x10)
	};


	// Struct LocomotionInitiativeRuntime.MotionMatchingBlendInfo
	// Size: 0x8 (0x8 - 0x0)
	struct FMotionMatchingBlendInfo	
	{
	public:
		float BlendTime; // 0x0(0x4)
		FName BlendProfile; // 0x4(0x4)
	};


	// Struct LocomotionInitiativeRuntime.FortMotionMatchingAngleSpamTracker
	// Size: 0x48 (0x48 - 0x0)
	struct FFortMotionMatchingAngleSpamTracker	
	{
	public:
		float DirectionChangeAngleThresholdDegrees; // 0x0(0x4)
		uint32_t SpamAngleChangeCounterThreshold; // 0x4(0x4)
		float SpamDetectionWindowLengthSeconds; // 0x8(0x4)
		float SpamDetectionMaxConeAngleDegrees; // 0xC(0x4)
		uint32_t MaxSamplesPerSecond; // 0x10(0x4)
		unsigned char UnknownData00_7[0x34]; // 0x14(0x34) UNKNOWN PROPERTY
	};


	// Struct LocomotionInitiativeRuntime.LocomotionInitiativeScriptedPlayerInputEntry
	// Size: 0xC (0xC - 0x0)
	struct FLocomotionInitiativeScriptedPlayerInputEntry	
	{
	public:
		float ForwardInput; // 0x0(0x4)
		float RightInput; // 0x4(0x4)
		float DurationInSeconds; // 0x8(0x4)
	};


	// Struct LocomotionInitiativeRuntime.LocomotionInitiativeRecordedInputEntry
	// Size: 0x38 (0x38 - 0x0)
	struct FLocomotionInitiativeRecordedInputEntry	
	{
	public:
		FVector InputVector; // 0x0(0x18)
		FRotator ControlRotation; // 0x18(0x18)
		float Timestamp; // 0x30(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
	};

}
