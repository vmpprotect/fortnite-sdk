#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: PhysicsControl
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Enum /Script/PhysicsControl.EResetToCachedTargetBehavior
	enum EResetToCachedTargetBehavior
	{
		EResetToCachedTargetBehavior__ResetImmediately = 0,
		EResetToCachedTargetBehavior__ResetDuringUpdateControls = 1,
	};


	// Enum /Script/PhysicsControl.EPhysicsMovementType
	enum EPhysicsMovementType
	{
		EPhysicsMovementType__Static = 0,
		EPhysicsMovementType__Kinematic = 1,
		EPhysicsMovementType__Simulated = 2,
		EPhysicsMovementType__Default = 3,
	};


	// Enum /Script/PhysicsControl.EPhysicsControlType
	enum EPhysicsControlType
	{
		EPhysicsControlType__WorldSpace = 0,
		EPhysicsControlType__ParentSpace = 1,
	};


	// Enum /Script/PhysicsControl.MapConstraintsBehaviorType
	enum MapConstraintsBehaviorType
	{
		MapConstraintsBehaviorType__AuthoredSkeleton = 0,
		MapConstraintsBehaviorType__DefaultTransform = 1,
		MapConstraintsBehaviorType__None = 2,
	};

}
