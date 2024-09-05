#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: IKRig
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Enum /Script/IKRig.EPinBoneType
	enum EPinBoneType
	{
		EPinBoneType__FullTransform = 0,
		EPinBoneType__TranslateOnly = 1,
		EPinBoneType__RotateOnly = 2,
		EPinBoneType__ScaleOnly = 3,
	};


	// Enum /Script/IKRig.ERootMotionSource
	enum ERootMotionSource
	{
		ERootMotionSource__CopyFromSourceRoot = 0,
		ERootMotionSource__GenerateFromTargetPelvis = 1,
	};


	// Enum /Script/IKRig.ERootMotionHeightSource
	enum ERootMotionHeightSource
	{
		ERootMotionHeightSource__CopyHeightFromSource = 0,
		ERootMotionHeightSource__SnapToGround = 1,
	};


	// Enum /Script/IKRig.ERetargetSourceOrTarget
	enum ERetargetSourceOrTarget
	{
		ERetargetSourceOrTarget__Source = 0,
		ERetargetSourceOrTarget__Target = 1,
	};


	// Enum /Script/IKRig.ERetargetTranslationMode
	enum ERetargetTranslationMode
	{
		ERetargetTranslationMode__None = 0,
		ERetargetTranslationMode__GloballyScaled = 1,
		ERetargetTranslationMode__Absolute = 2,
	};


	// Enum /Script/IKRig.ERetargetRotationMode
	enum ERetargetRotationMode
	{
		ERetargetRotationMode__Interpolated = 0,
		ERetargetRotationMode__OneToOne = 1,
		ERetargetRotationMode__OneToOneReversed = 2,
		ERetargetRotationMode__None = 3,
	};


	// Enum /Script/IKRig.EBasicAxis
	enum EBasicAxis
	{
		EBasicAxis__X = 0,
		EBasicAxis__Y = 1,
		EBasicAxis__Z = 2,
		EBasicAxis__NegX = 3,
		EBasicAxis__NegY = 4,
		EBasicAxis__NegZ = 5,
	};


	// Enum /Script/IKRig.EWarpingDirectionSource
	enum EWarpingDirectionSource
	{
		EWarpingDirectionSource__Goals = 0,
		EWarpingDirectionSource__Chain = 1,
		EWarpingDirectionSource__RootBone = 2,
	};


	// Enum /Script/IKRig.EIKRigGoalSpace
	enum EIKRigGoalSpace
	{
		EIKRigGoalSpace__Component = 0,
		EIKRigGoalSpace__Additive = 1,
		EIKRigGoalSpace__World = 2,
	};


	// Enum /Script/IKRig.EIKRigGoalTransformSource
	enum EIKRigGoalTransformSource
	{
		EIKRigGoalTransformSource__Manual = 0,
		EIKRigGoalTransformSource__Bone = 1,
		EIKRigGoalTransformSource__ActorComponent = 2,
	};

}
