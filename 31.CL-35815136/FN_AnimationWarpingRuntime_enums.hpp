#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: AnimationWarpingRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Enum /Script/AnimationWarpingRuntime.EFootPlacementLockType
	enum EFootPlacementLockType
	{
		EFootPlacementLockType__Unlocked = 0,
		EFootPlacementLockType__PivotAroundBall = 1,
		EFootPlacementLockType__PivotAroundAnkle = 2,
		EFootPlacementLockType__LockRotation = 3,
	};


	// Enum /Script/AnimationWarpingRuntime.EPelvisHeightMode
	enum EPelvisHeightMode
	{
		EPelvisHeightMode__AllLegs = 0,
		EPelvisHeightMode__AllPlantedFeet = 1,
		EPelvisHeightMode__FrontPlantedFeetUphill_FrontFeetDownhill = 2,
	};


	// Enum /Script/AnimationWarpingRuntime.EActorMovementCompensationMode
	enum EActorMovementCompensationMode
	{
		EActorMovementCompensationMode__ComponentSpace = 0,
		EActorMovementCompensationMode__WorldSpace = 1,
		EActorMovementCompensationMode__SuddenMotionOnly = 2,
	};


	// Enum /Script/AnimationWarpingRuntime.EOffsetRootBoneMode
	enum EOffsetRootBoneMode
	{
		EOffsetRootBoneMode__Accumulate = 0,
		EOffsetRootBoneMode__Interpolate = 1,
		EOffsetRootBoneMode__Hold = 2,
		EOffsetRootBoneMode__Release = 3,
	};


	// Enum /Script/AnimationWarpingRuntime.EOffsetRootBone_CollisionTestingMode
	enum EOffsetRootBone_CollisionTestingMode
	{
		EOffsetRootBone_CollisionTestingMode__Disabled = 0,
		EOffsetRootBone_CollisionTestingMode__ShrinkMaxTranslation = 1,
		EOffsetRootBone_CollisionTestingMode__PlanarCollision = 2,
	};


	// Enum /Script/AnimationWarpingRuntime.EOrientationWarpingSpace
	enum EOrientationWarpingSpace
	{
		EOrientationWarpingSpace__ComponentTransform = 0,
		EOrientationWarpingSpace__RootBoneTransform = 1,
		EOrientationWarpingSpace__CustomTransform = 2,
	};

}
