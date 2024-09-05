#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: AnimationCore
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Enum /Script/AnimationCore.EConstraintType
	enum EConstraintType
	{
		EConstraintType__Transform = 0,
		EConstraintType__Aim = 1,
	};


	// Enum /Script/AnimationCore.ETransformConstraintType
	enum ETransformConstraintType
	{
		ETransformConstraintType__Translation = 0,
		ETransformConstraintType__Rotation = 1,
		ETransformConstraintType__Scale = 2,
		ETransformConstraintType__Parent = 3,
		ETransformConstraintType__LookAt = 4,
	};


	// Enum /Script/AnimationCore.EEulerRotationOrder
	enum EEulerRotationOrder
	{
		EEulerRotationOrder__XYZ = 0,
		EEulerRotationOrder__XZY = 1,
		EEulerRotationOrder__YXZ = 2,
		EEulerRotationOrder__YZX = 3,
		EEulerRotationOrder__ZXY = 4,
		EEulerRotationOrder__ZYX = 5,
	};

}
