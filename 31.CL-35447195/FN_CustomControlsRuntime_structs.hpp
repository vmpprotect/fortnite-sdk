#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: CustomControlsRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct CustomControlsRuntime.InteractionPointOptions
	// Size: 0x10 (0x10 - 0x0)
	struct FInteractionPointOptions	
	{
	public:
		EInteractionOrigin InteractionOrigin; // 0x0(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float InteractDistance; // 0x4(0x4)
		float InteractHighlightDistance; // 0x8(0x4)
		float InteractExtentRadius; // 0xC(0x4)
	};


	// Struct CustomControlsRuntime.InputOptions_SideScroller
	// Size: 0x6 (0x6 - 0x0)
	struct FInputOptions_SideScroller	
	{
	public:
		bool bConstraintMovement; // 0x0(0x1)
		bool bShootingLocomotionLockDirection; // 0x1(0x1)
		bool bAimingLocomotionLockDirection; // 0x2(0x1)
		EAimControls AimControls; // 0x3(0x1)
		ESideScrollerJump SideScrollerJump; // 0x4(0x1)
		ESideScrollerCrouch SideScrollerCrouch; // 0x5(0x1)
	};


	// Struct CustomControlsRuntime.InputOptions_ThirdPerson
	// Size: 0x1 (0x1 - 0x0)
	struct FInputOptions_ThirdPerson	
	{
	public:
		bool bAutoFire; // 0x0(0x1)
	};


	// Struct CustomControlsRuntime.CustomControlsState
	// Size: 0x4 (0x4 - 0x0)
	struct FCustomControlsState	
	{
	public:
		bool bHasFocusTarget; // 0x0(0x1)
		ECustomControlsAttackType AttackType; // 0x1(0x1)
		ECustomControlsTargetingType TargetingType; // 0x2(0x1)
		ECustomControlsWeaponType WeaponType; // 0x3(0x1)
	};


	// Struct CustomControlsRuntime.CustomControlWeightingTargetingData
	// Size: 0x24 (0x24 - 0x0)
	struct FCustomControlWeightingTargetingData	
	{
	public:
		float PlayerWeight; // 0x0(0x4)
		float CreatureWeight; // 0x4(0x4)
		float VehicleWeight; // 0x8(0x4)
		float DestructiblesWeight; // 0xC(0x4)
		float AngleWeight; // 0x10(0x4)
		bool bAngleWeightScaling; // 0x14(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x15(0x3) UNKNOWN PROPERTY
		float DistanceWeight; // 0x18(0x4)
		bool bDistanceWeightScaling; // 0x1C(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x1D(0x3) UNKNOWN PROPERTY
		float RetainedTargetWeight; // 0x20(0x4)
	};


	// Struct CustomControlsRuntime.CustomControlCommonTargetingData
	// Size: 0x30 (0x30 - 0x0)
	struct FCustomControlCommonTargetingData	
	{
	public:
		FCustomControlWeightingTargetingData WeightingData; // 0x0(0x24)
		unsigned char UnknownData01_6[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
		AActor DeviceTest; // 0x28(0x8)
	};


	// Struct CustomControlsRuntime.CustomControlStateDependentTargetingData
	// Size: 0x14 (0x14 - 0x0)
	struct FCustomControlStateDependentTargetingData	
	{
	public:
		float Distance; // 0x0(0x4)
		float Angle; // 0x4(0x4)
		bool bUseAngleWhileMoving; // 0x8(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
		float AngleWhileMoving; // 0xC(0x4)
		bool bRequireLineOfSight; // 0x10(0x1)
		unsigned char UnknownData03_7[0x3]; // 0x11(0x3) UNKNOWN PROPERTY
	};


	// Struct CustomControlsRuntime.CustomControlTargetingData
	// Size: 0x48 (0x48 - 0x0)
	struct FCustomControlTargetingData	
	{
	public:
		FCustomControlCommonTargetingData CommonTargetingData; // 0x0(0x30)
		FCustomControlStateDependentTargetingData StateDependentTargetingData; // 0x30(0x14)
		unsigned char UnknownData01_7[0x4]; // 0x44(0x4) UNKNOWN PROPERTY
	};


	// Struct CustomControlsRuntime.FortMovementMode_CCSideScrollerCreationData
	// Inherited from FFortMovementMode_BaseExtCreationData
	// Size: 0x38 (0x48 - 0x10)
	struct FFortMovementMode_CCSideScrollerCreationData : public FFortMovementMode_BaseExtCreationData	
	{
	public:
		bool bConstraintMovement; // 0x10(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x11(0x3) UNKNOWN PROPERTY
		float ForwardRotationYaw; // 0x14(0x4)
		FVector DeviceForwardVector; // 0x18(0x18)
		float SpeedMultiplier; // 0x30(0x4)
		float SpeedMultiplierWhenShooting; // 0x34(0x4)
		float SpeedMultiplierWhenAiming; // 0x38(0x4)
		ECustomControlsLockOnMode LockOnMode; // 0x3C(0x1)
		bool bShouldAffectNPC; // 0x3D(0x1)
		unsigned char UnknownData04_6[0x2]; // 0x3E(0x2) UNKNOWN PROPERTY
		float NPCDistanceToFaceTarget; // 0x40(0x4)
		unsigned char UnknownData05_7[0x4]; // 0x44(0x4) UNKNOWN PROPERTY
	};


	// Struct CustomControlsRuntime.FortMovementMode_CCThirdPersonCreationData
	// Inherited from FFortMovementMode_BaseExtCreationData
	// Size: 0x28 (0x38 - 0x10)
	struct FFortMovementMode_CCThirdPersonCreationData : public FFortMovementMode_BaseExtCreationData	
	{
	public:
		float SpeedMultiplier; // 0x10(0x4)
		float SpeedMultiplierWhenShooting; // 0x14(0x4)
		float SpeedMultiplierWhenAiming; // 0x18(0x4)
		float RotationRateMultiplier; // 0x1C(0x4)
		float RotationRateWhenShootingMultiplier; // 0x20(0x4)
		float RotationRateWhenAimingMultiplier; // 0x24(0x4)
		ECustomControlsLockOnMode LockOnMode; // 0x28(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x29(0x3) UNKNOWN PROPERTY
		float FixedFacingYaw; // 0x2C(0x4)
		float TacticalSprintRotationRateYaw; // 0x30(0x4)
		float SkydivingRotationRatePitch; // 0x34(0x4)
	};

}
