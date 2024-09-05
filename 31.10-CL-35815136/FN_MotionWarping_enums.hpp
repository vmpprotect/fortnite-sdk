#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: MotionWarping
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Enum /Script/MotionWarping.EAttributeBasedRootMotionMode
	enum EAttributeBasedRootMotionMode
	{
		EAttributeBasedRootMotionMode__ApplyDelta = 0,
		EAttributeBasedRootMotionMode__ApplyVelocity = 1,
	};


	// Enum /Script/MotionWarping.ERootMotionModifierState
	enum ERootMotionModifierState
	{
		ERootMotionModifierState__Waiting = 0,
		ERootMotionModifierState__Active = 1,
		ERootMotionModifierState__MarkedForRemoval = 2,
		ERootMotionModifierState__Disabled = 3,
	};


	// Enum /Script/MotionWarping.EMotionWarpRotationType
	enum EMotionWarpRotationType
	{
		EMotionWarpRotationType__Default = 0,
		EMotionWarpRotationType__Facing = 1,
	};


	// Enum /Script/MotionWarping.EMotionWarpRotationMethod
	enum EMotionWarpRotationMethod
	{
		EMotionWarpRotationMethod__Slerp = 0,
		EMotionWarpRotationMethod__SlerpWithClampedRate = 1,
		EMotionWarpRotationMethod__ConstantRate = 2,
	};


	// Enum /Script/MotionWarping.EWarpPointAnimProvider
	enum EWarpPointAnimProvider
	{
		EWarpPointAnimProvider__None = 0,
		EWarpPointAnimProvider__Static = 1,
		EWarpPointAnimProvider__Bone = 2,
	};

}
