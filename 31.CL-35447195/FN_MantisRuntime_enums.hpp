#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: MantisRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/MantisRuntime.EFortMantisTechniqueActivationInputType
	enum EFortMantisTechniqueActivationInputType
	{
		EFortMantisTechniqueActivationInputType__None = 0,
		EFortMantisTechniqueActivationInputType__Primary = 1,
		EFortMantisTechniqueActivationInputType__Secondary = 2,
		EFortMantisTechniqueActivationInputType__Max_Invalid = 3,
	};


	// Enum /Script/MantisRuntime.EFortMantisTechniqueActivationTimingType
	enum EFortMantisTechniqueActivationTimingType
	{
		EFortMantisTechniqueActivationTimingType__None = 0,
		EFortMantisTechniqueActivationTimingType__Pressed = 1,
		EFortMantisTechniqueActivationTimingType__Released = 2,
	};


	// Enum /Script/MantisRuntime.EFortMantisTechniqueAnimationType
	enum EFortMantisTechniqueAnimationType
	{
		EFortMantisTechniqueAnimationType__SingleMontage = 0,
		EFortMantisTechniqueAnimationType__DynamicMontage = 1,
		EFortMantisTechniqueAnimationType__AnimInstance = 2,
	};


	// Enum /Script/MantisRuntime.EFortMantisTechniqueRootMotionType
	enum EFortMantisTechniqueRootMotionType
	{
		EFortMantisTechniqueRootMotionType__None = 0,
		EFortMantisTechniqueRootMotionType__ExtractFromMontageAndWarp = 1,
		EFortMantisTechniqueRootMotionType__HoldPosition = 2,
	};


	// Enum /Script/MantisRuntime.EFortMantisNotifyEvent
	enum EFortMantisNotifyEvent
	{
		EFortMantisNotifyEvent__Invalid = 0,
		EFortMantisNotifyEvent__Branch = 1,
		EFortMantisNotifyEvent__EndTechnique = 2,
		EFortMantisNotifyEvent__AllowInterruption = 3,
	};


	// Enum /Script/MantisRuntime.EFortMantisNotifyWindow
	enum EFortMantisNotifyWindow
	{
		EFortMantisNotifyWindow__Invalid = 0,
		EFortMantisNotifyWindow__Input = 1,
		EFortMantisNotifyWindow__Execution = 2,
		EFortMantisNotifyWindow__Damage = 3,
		EFortMantisNotifyWindow__RootMotionWarp = 4,
	};


	// Enum /Script/MantisRuntime.EFortMantisNotifyTranslationWarpLimitRule
	enum EFortMantisNotifyTranslationWarpLimitRule
	{
		EFortMantisNotifyTranslationWarpLimitRule__None = 0,
		EFortMantisNotifyTranslationWarpLimitRule__Window = 1,
		EFortMantisNotifyTranslationWarpLimitRule__Animation = 2,
		EFortMantisNotifyTranslationWarpLimitRule__Custom = 3,
	};


	// Enum /Script/MantisRuntime.EFortMantisNotifyRotationWarpRateRule
	enum EFortMantisNotifyRotationWarpRateRule
	{
		EFortMantisNotifyRotationWarpRateRule__Snap = 0,
		EFortMantisNotifyRotationWarpRateRule__WindowDurationLerp = 1,
	};


	// Enum /Script/MantisRuntime.EFortMantisBranchRule
	enum EFortMantisBranchRule
	{
		EFortMantisBranchRule__Off = 0,
		EFortMantisBranchRule__Any = 1,
		EFortMantisBranchRule__Starter = 2,
	};


	// Enum /Script/MantisRuntime.EFortMantisBranchPath
	enum EFortMantisBranchPath
	{
		EFortMantisBranchPath__Default = 0,
		EFortMantisBranchPath__Path = 1,
		EFortMantisBranchPath__Path = 2,
		EFortMantisBranchPath__Path = 3,
		EFortMantisBranchPath__Path = 4,
		EFortMantisBranchPath__Path = 5,
		EFortMantisBranchPath__Blocked = 6,
	};


	// Enum /Script/MantisRuntime.EFortMantisWarpTranslationMethod
	enum EFortMantisWarpTranslationMethod
	{
		EFortMantisWarpTranslationMethod__None = 0,
		EFortMantisWarpTranslationMethod__OffsetFromTargetActor = 1,
		EFortMantisWarpTranslationMethod__StaticLocation = 2,
		EFortMantisWarpTranslationMethod__Reorient = 3,
		EFortMantisWarpTranslationMethod__ScaledBasedOnInput = 4,
		EFortMantisWarpTranslationMethod__ReorientAndScaledBasedOnInput = 5,
	};


	// Enum /Script/MantisRuntime.EFortMantisWarpRotationMethod
	enum EFortMantisWarpRotationMethod
	{
		EFortMantisWarpRotationMethod__None = 0,
		EFortMantisWarpRotationMethod__FaceTargetActor = 1,
		EFortMantisWarpRotationMethod__StaticRotation = 2,
	};

}
