#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: ContextualAnimation
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/ContextualAnimation.EContextualAnimCollisionBehavior
	enum EContextualAnimCollisionBehavior
	{
		EContextualAnimCollisionBehavior__None = 0,
		EContextualAnimCollisionBehavior__IgnoreActorWhenMoving = 1,
		EContextualAnimCollisionBehavior__IgnoreChannels = 2,
	};


	// Enum /Script/ContextualAnimation.EContextualAnimPointType
	enum EContextualAnimPointType
	{
		EContextualAnimPointType__FirstFrame = 0,
		EContextualAnimPointType__SyncFrame = 1,
		EContextualAnimPointType__LastFrame = 2,
	};


	// Enum /Script/ContextualAnimation.EContextualAnimCriterionToConsider
	enum EContextualAnimCriterionToConsider
	{
		EContextualAnimCriterionToConsider__All = 0,
		EContextualAnimCriterionToConsider__Spatial = 1,
		EContextualAnimCriterionToConsider__Other = 2,
	};


	// Enum /Script/ContextualAnimation.EContextualAnimActorPreviewType
	enum EContextualAnimActorPreviewType
	{
		EContextualAnimActorPreviewType__SkeletalMesh = 0,
		EContextualAnimActorPreviewType__StaticMesh = 1,
		EContextualAnimActorPreviewType__Actor = 2,
		EContextualAnimActorPreviewType__None = 3,
	};


	// Enum /Script/ContextualAnimation.EContextualAnimCriterionType
	enum EContextualAnimCriterionType
	{
		EContextualAnimCriterionType__Spatial = 0,
		EContextualAnimCriterionType__Other = 1,
	};


	// Enum /Script/ContextualAnimation.EContextualAnimCriterionConeMode
	enum EContextualAnimCriterionConeMode
	{
		EContextualAnimCriterionConeMode__ToPrimary = 0,
		EContextualAnimCriterionConeMode__FromPrimary = 1,
	};


	// Enum /Script/ContextualAnimation.EContextualAnimCriterionDistanceMode
	enum EContextualAnimCriterionDistanceMode
	{
		EContextualAnimCriterionDistanceMode__Distance_3D = 0,
		EContextualAnimCriterionDistanceMode__Distance_2D = 1,
	};


	// Enum /Script/ContextualAnimation.EContextualAnimJoinRule
	enum EContextualAnimJoinRule
	{
		EContextualAnimJoinRule__Default = 0,
		EContextualAnimJoinRule__Late = 1,
	};


	// Enum /Script/ContextualAnimation.EContextualAnimIKTargetProvider
	enum EContextualAnimIKTargetProvider
	{
		EContextualAnimIKTargetProvider__Autogenerated = 0,
		EContextualAnimIKTargetProvider__Bone = 1,
	};


	// Enum /Script/ContextualAnimation.EContextualAnimWarpPointDefinitionMode
	enum EContextualAnimWarpPointDefinitionMode
	{
		EContextualAnimWarpPointDefinitionMode__PrimaryActor = 0,
		EContextualAnimWarpPointDefinitionMode__Socket = 1,
		EContextualAnimWarpPointDefinitionMode__Custom = 2,
	};

}
