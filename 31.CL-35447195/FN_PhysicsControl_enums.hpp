#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: PhysicsControl
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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
