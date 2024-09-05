#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: PoseSearch
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Enum /Script/PoseSearch.EPoseSearchMode
	enum EPoseSearchMode
	{
		EPoseSearchMode__BruteForce = 0,
		EPoseSearchMode__PCAKDTree = 1,
		EPoseSearchMode__VPTree = 2,
	};


	// Enum /Script/PoseSearch.EPoseSearchMirrorOption
	enum EPoseSearchMirrorOption
	{
		EPoseSearchMirrorOption__UnmirroredOnly = 0,
		EPoseSearchMirrorOption__MirroredOnly = 1,
		EPoseSearchMirrorOption__UnmirroredAndMirrored = 2,
	};


	// Enum /Script/PoseSearch.EComponentStrippingVector
	enum EComponentStrippingVector
	{
		EComponentStrippingVector__None = 0,
		EComponentStrippingVector__StripXY = 1,
		EComponentStrippingVector__StripZ = 2,
	};


	// Enum /Script/PoseSearch.EInputQueryPose
	enum EInputQueryPose
	{
		EInputQueryPose__UseCharacterPose = 0,
		EInputQueryPose__UseContinuingPose = 1,
	};


	// Enum /Script/PoseSearch.EPermutationTimeType
	enum EPermutationTimeType
	{
		EPermutationTimeType__UseSampleTime = 0,
		EPermutationTimeType__UsePermutationTime = 1,
		EPermutationTimeType__UseSampleToPermutationTime = 2,
	};


	// Enum /Script/PoseSearch.EHeadingAxis
	enum EHeadingAxis
	{
		EHeadingAxis__X = 0,
		EHeadingAxis__Y = 1,
		EHeadingAxis__Z = 2,
		EHeadingAxis__Num = 3,
	};


	// Enum /Script/PoseSearch.EPoseSearchBoneFlags
	enum EPoseSearchBoneFlags
	{
		EPoseSearchBoneFlags__Velocity = 1,
		EPoseSearchBoneFlags__Position = 2,
		EPoseSearchBoneFlags__Rotation = 4,
		EPoseSearchBoneFlags__Phase = 8,
	};


	// Enum /Script/PoseSearch.EPoseSearchTrajectoryFlags
	enum EPoseSearchTrajectoryFlags
	{
		EPoseSearchTrajectoryFlags__Velocity = 1,
		EPoseSearchTrajectoryFlags__Position = 2,
		EPoseSearchTrajectoryFlags__VelocityDirection = 4,
		EPoseSearchTrajectoryFlags__FacingDirection = 8,
		EPoseSearchTrajectoryFlags__VelocityXY = 10,
		EPoseSearchTrajectoryFlags__PositionXY = 20,
		EPoseSearchTrajectoryFlags__VelocityDirectionXY = 40,
		EPoseSearchTrajectoryFlags__FacingDirectionXY = 80,
	};


	// Enum /Script/PoseSearch.EPoseSearchDataPreprocessor
	enum EPoseSearchDataPreprocessor
	{
		EPoseSearchDataPreprocessor__None = 0,
		EPoseSearchDataPreprocessor__Normalize = 1,
		EPoseSearchDataPreprocessor__NormalizeOnlyByDeviation = 2,
		EPoseSearchDataPreprocessor__NormalizeWithCommonSchema = 3,
	};


	// Enum /Script/PoseSearch.EPoseSearchInterruptMode
	enum EPoseSearchInterruptMode
	{
		EPoseSearchInterruptMode__DoNotInterrupt = 0,
		EPoseSearchInterruptMode__InterruptOnDatabaseChange = 1,
		EPoseSearchInterruptMode__InterruptOnDatabaseChangeAndInvalidateContinuingPose = 2,
		EPoseSearchInterruptMode__ForceInterrupt = 3,
		EPoseSearchInterruptMode__ForceInterruptAndInvalidateContinuingPose = 4,
	};

}
