#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: BeanstalkRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/BeanstalkRuntime.EBeanAudioCategories
	enum EBeanAudioCategories
	{
		EBeanAudioCategories__NONE = 0,
		EBeanAudioCategories__SFX = 1,
		EBeanAudioCategories__VO = 2,
	};


	// Enum /Script/BeanstalkRuntime.EBeanAudioEventTypes
	enum EBeanAudioEventTypes
	{
		EBeanAudioEventTypes__NONE = 0,
		EBeanAudioEventTypes__JumpStart = 1,
		EBeanAudioEventTypes__Emote = 2,
		EBeanAudioEventTypes__DiveStart = 3,
	};


	// Enum /Script/BeanstalkRuntime.EBeanCharKnockbackType
	enum EBeanCharKnockbackType
	{
		EBeanCharKnockbackType__Additive = 0,
		EBeanCharKnockbackType__Impulse = 1,
		EBeanCharKnockbackType__Absolute = 2,
	};


	// Enum /Script/BeanstalkRuntime.EBeanCharJumpDiveButtonBehaviour
	enum EBeanCharJumpDiveButtonBehaviour
	{
		EBeanCharJumpDiveButtonBehaviour__Jump = 0,
		EBeanCharJumpDiveButtonBehaviour__Dive = 1,
	};


	// Enum /Script/BeanstalkRuntime.EBeanImpactAnimType
	enum EBeanImpactAnimType
	{
		EBeanImpactAnimType__None = 0,
		EBeanImpactAnimType__Low = 1,
		EBeanImpactAnimType__Medium = 2,
		EBeanImpactAnimType__High = 3,
	};


	// Enum /Script/BeanstalkRuntime.EBeanCharMantleFailedReason
	enum EBeanCharMantleFailedReason
	{
		EBeanCharMantleFailedReason__None = 0,
		EBeanCharMantleFailedReason__CharacterIsGrounded = 1,
		EBeanCharMantleFailedReason__InvalidState = 2,
		EBeanCharMantleFailedReason__NoSpaceAboveWall = 3,
		EBeanCharMantleFailedReason__WallTopTooSlanted = 4,
		EBeanCharMantleFailedReason__CharacterTravelingTooFast = 5,
		EBeanCharMantleFailedReason__CouldNotFindWallTop = 6,
		EBeanCharMantleFailedReason__CouldNotFindWall = 7,
		EBeanCharMantleFailedReason__WallAngleTooHigh = 8,
		EBeanCharMantleFailedReason__CouldNotFindLedge = 9,
		EBeanCharMantleFailedReason__LedgeInclineTooHigh = A,
		EBeanCharMantleFailedReason__NoSpaceToHang = B,
		EBeanCharMantleFailedReason__UnacceptedComponentMobility = C,
		EBeanCharMantleFailedReason__PlayerNotAlignedEnoughToWall = D,
	};


	// Enum /Script/BeanstalkRuntime.EBeanCharTurn180State
	enum EBeanCharTurn180State
	{
		EBeanCharTurn180State__None = 0,
		EBeanCharTurn180State__Left = 1,
		EBeanCharTurn180State__Right = 2,
	};


	// Enum /Script/BeanstalkRuntime.EBeanCharTurnSpeedOverrideType
	enum EBeanCharTurnSpeedOverrideType
	{
		EBeanCharTurnSpeedOverrideType__None = 0,
		EBeanCharTurnSpeedOverrideType__Grabbing = 1,
		EBeanCharTurnSpeedOverrideType__Diving = 2,
		EBeanCharTurnSpeedOverrideType__GettingUp = 3,
		EBeanCharTurnSpeedOverrideType__BeingGrabbed = 4,
		EBeanCharTurnSpeedOverrideType__COUNT = 5,
	};


	// Enum /Script/BeanstalkRuntime.EBeanCharServerNetLocationToleranceType
	enum EBeanCharServerNetLocationToleranceType
	{
		EBeanCharServerNetLocationToleranceType__Minimum = 0,
		EBeanCharServerNetLocationToleranceType__Jostling = 1,
		EBeanCharServerNetLocationToleranceType__Grabbing = 2,
		EBeanCharServerNetLocationToleranceType__BeingGrabbed = 3,
		EBeanCharServerNetLocationToleranceType__COUNT = 4,
	};


	// Enum /Script/BeanstalkRuntime.EBeanDebugForceCorrectionMode
	enum EBeanDebugForceCorrectionMode
	{
		EBeanDebugForceCorrectionMode__Disabled = 0,
		EBeanDebugForceCorrectionMode__Enabled = 1,
		EBeanDebugForceCorrectionMode__Once = 2,
	};


	// Enum /Script/BeanstalkRuntime.EBeanCharRemoteRagdollSimMode
	enum EBeanCharRemoteRagdollSimMode
	{
		EBeanCharRemoteRagdollSimMode__Disabled = 0,
		EBeanCharRemoteRagdollSimMode__PendingEnable = 1,
		EBeanCharRemoteRagdollSimMode__Enabled = 2,
		EBeanCharRemoteRagdollSimMode__KeepEnabled = 3,
	};


	// Enum /Script/BeanstalkRuntime.EBeanCharStateID
	enum EBeanCharStateID
	{
		EBeanCharStateID__Null = 0,
		EBeanCharStateID__Grounded = 1,
		EBeanCharStateID__Jostle = 2,
		EBeanCharStateID__Emote = 3,
		EBeanCharStateID__Staggered = 4,
		EBeanCharStateID__Grab = 5,
		EBeanCharStateID__GrabStumble = 6,
		EBeanCharStateID__Falling = 7,
		EBeanCharStateID__Jump = 8,
		EBeanCharStateID__Dive = 9,
		EBeanCharStateID__Mantle = A,
		EBeanCharStateID__Getup = B,
		EBeanCharStateID__GetupRoll = C,
		EBeanCharStateID__Roll = D,
		EBeanCharStateID__SurfaceSwimming = E,
		EBeanCharStateID__WaterJump = F,
		EBeanCharStateID__Ragdoll = 10,
		EBeanCharStateID__Zipline = 11,
		EBeanCharStateID__Flying = 12,
		EBeanCharStateID__Count = 13,
	};


	// Enum /Script/BeanstalkRuntime.EBeanCharStateLayerID
	enum EBeanCharStateLayerID
	{
		EBeanCharStateLayerID__Lower = 0,
		EBeanCharStateLayerID__Upper = 1,
		EBeanCharStateLayerID__Count = 2,
	};


	// Enum /Script/BeanstalkRuntime.EBeanCharStateLayerMask
	enum EBeanCharStateLayerMask
	{
		EBeanCharStateLayerMask__None = 0,
		EBeanCharStateLayerMask__Lower = 1,
		EBeanCharStateLayerMask__Upper = 2,
		EBeanCharStateLayerMask__All = 3,
	};


	// Enum /Script/BeanstalkRuntime.EBeanCharActivateStateResult
	enum EBeanCharActivateStateResult
	{
		EBeanCharActivateStateResult__Undefined = 0,
		EBeanCharActivateStateResult__Success = 1,
		EBeanCharActivateStateResult__AlreadyActive = 2,
		EBeanCharActivateStateResult__FailedPriorityCheck = 3,
		EBeanCharActivateStateResult__Failed = 4,
	};


	// Enum /Script/BeanstalkRuntime.EBeanStateCorrectionReason
	enum EBeanStateCorrectionReason
	{
		EBeanStateCorrectionReason__NoCorrection = 0,
		EBeanStateCorrectionReason__ServerAheadClientReset = 1,
		EBeanStateCorrectionReason__ClientAheadServerDisagreed = 2,
		EBeanStateCorrectionReason__ClientAheadServerTookTooLong = 3,
	};


	// Enum /Script/BeanstalkRuntime.EBeanParticleVfxTypes
	enum EBeanParticleVfxTypes
	{
		EBeanParticleVfxTypes__NONE = 0,
		EBeanParticleVfxTypes__JumpStart = 1,
		EBeanParticleVfxTypes__ImpactSmall = 2,
		EBeanParticleVfxTypes__ImpactMedium = 3,
		EBeanParticleVfxTypes__ImpactLarge = 4,
		EBeanParticleVfxTypes__DiveStart = 5,
		EBeanParticleVfxTypes__GrabStart = 6,
		EBeanParticleVfxTypes__GrabBreak = 7,
	};

}
