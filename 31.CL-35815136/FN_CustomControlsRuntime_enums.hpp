#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: CustomControlsRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Enum /Script/CustomControlsRuntime.EAimControls
	enum EAimControls
	{
		EAimControls__Facing = 0,
		EAimControls__CardinalMovement = 1,
		EAimControls__FullRangeMovement = 2,
		EAimControls__FullRangeManual = 3,
	};


	// Enum /Script/CustomControlsRuntime.ESideScrollerJump
	enum ESideScrollerJump
	{
		ESideScrollerJump__Disabled = 0,
		ESideScrollerJump__Dedicated = 1,
		ESideScrollerJump__Movement = 2,
	};


	// Enum /Script/CustomControlsRuntime.ESideScrollerCrouch
	enum ESideScrollerCrouch
	{
		ESideScrollerCrouch__Disabled = 0,
		ESideScrollerCrouch__Dedicated = 1,
		ESideScrollerCrouch__Movement = 2,
	};


	// Enum /Script/CustomControlsRuntime.EPlaceFireMissed
	enum EPlaceFireMissed
	{
		EPlaceFireMissed__None = 0,
		EPlaceFireMissed__Left = 1,
		EPlaceFireMissed__Right = 2,
		EPlaceFireMissed__Up = 3,
		EPlaceFireMissed__Down = 4,
		EPlaceFireMissed__UpLeft = 5,
		EPlaceFireMissed__UpRight = 6,
		EPlaceFireMissed__DownLeft = 7,
		EPlaceFireMissed__DownRight = 8,
	};


	// Enum /Script/CustomControlsRuntime.ECustomControlsFacingMode
	enum ECustomControlsFacingMode
	{
		ECustomControlsFacingMode__Movement = 0,
		ECustomControlsFacingMode__TwinStick = 1,
		ECustomControlsFacingMode__Fixed = 2,
	};


	// Enum /Script/CustomControlsRuntime.ECustomControlsTwinStickMouseAimMode
	enum ECustomControlsTwinStickMouseAimMode
	{
		ECustomControlsTwinStickMouseAimMode__TargetCursor = 0,
		ECustomControlsTwinStickMouseAimMode__DialAiming = 1,
	};


	// Enum /Script/CustomControlsRuntime.ECustomControlsAttackType
	enum ECustomControlsAttackType
	{
		ECustomControlsAttackType__None = 0,
		ECustomControlsAttackType__Ranged = 1,
		ECustomControlsAttackType__Melee = 2,
		ECustomControlsAttackType__Throw = 3,
	};


	// Enum /Script/CustomControlsRuntime.ECustomControlsTargetingType
	enum ECustomControlsTargetingType
	{
		ECustomControlsTargetingType__None = 0,
		ECustomControlsTargetingType__Aiming = 1,
		ECustomControlsTargetingType__Windup = 2,
		ECustomControlsTargetingType__MeleeLockOn = 3,
	};


	// Enum /Script/CustomControlsRuntime.ECustomControlsWeaponType
	enum ECustomControlsWeaponType
	{
		ECustomControlsWeaponType__None = 0,
		ECustomControlsWeaponType__Ranged = 1,
		ECustomControlsWeaponType__Melee = 2,
		ECustomControlsWeaponType__Other = 3,
	};


	// Enum /Script/CustomControlsRuntime.ETargetingPresetType
	enum ETargetingPresetType
	{
		ETargetingPresetType__Ranged = 0,
		ETargetingPresetType__Retention = 1,
		ETargetingPresetType__Aiming = 2,
		ETargetingPresetType__Melee = 3,
	};


	// Enum /Script/CustomControlsRuntime.ECustomControlsLockOnMode
	enum ECustomControlsLockOnMode
	{
		ECustomControlsLockOnMode__Never = 0,
		ECustomControlsLockOnMode__Always = 1,
		ECustomControlsLockOnMode__Shooting = 2,
		ECustomControlsLockOnMode__Aiming = 3,
		ECustomControlsLockOnMode__ShootingOrAiming = 4,
	};

}
