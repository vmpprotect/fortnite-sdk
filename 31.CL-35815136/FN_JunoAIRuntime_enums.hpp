#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: JunoAIRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Enum /Script/JunoAIRuntime.EJunoAIFriendshipVerbPawnCategory
	enum EJunoAIFriendshipVerbPawnCategory
	{
		EJunoAIFriendshipVerbPawnCategory__None = 0,
		EJunoAIFriendshipVerbPawnCategory__Self = 1,
		EJunoAIFriendshipVerbPawnCategory__Players = 2,
	};


	// Enum /Script/JunoAIRuntime.EJunoAIFriendshipVerbPawnSubjectRequirement
	enum EJunoAIFriendshipVerbPawnSubjectRequirement
	{
		EJunoAIFriendshipVerbPawnSubjectRequirement__None = 0,
		EJunoAIFriendshipVerbPawnSubjectRequirement__NoSelf = 1,
		EJunoAIFriendshipVerbPawnSubjectRequirement__RequireSelf = 2,
	};


	// Enum /Script/JunoAIRuntime.EJunoNPCJobEndReason
	enum EJunoNPCJobEndReason
	{
		EJunoNPCJobEndReason__ManualPlayerUnassignment = 0,
		EJunoNPCJobEndReason__AutoUnassigmentViaFollowerAssignment = 1,
		EJunoNPCJobEndReason__AutoUnassignmentViaCampHardRemoval = 2,
	};


	// Enum /Script/JunoAIRuntime.EJunoNPCFollowEndReason
	enum EJunoNPCFollowEndReason
	{
		EJunoNPCFollowEndReason__ManualPlayerUnassignment = 0,
		EJunoNPCFollowEndReason__AutoUnassigmentViaRecruitment = 1,
		EJunoNPCFollowEndReason__AutoUnassignmentDueToStaleFollower = 2,
	};


	// Enum /Script/JunoAIRuntime.ENPCRewardType
	enum ENPCRewardType
	{
		ENPCRewardType__LootTier = 0,
		ENPCRewardType__Recipe = 1,
	};


	// Enum /Script/JunoAIRuntime.EJunoWorldConditionNPCSlotsLimit
	enum EJunoWorldConditionNPCSlotsLimit
	{
		EJunoWorldConditionNPCSlotsLimit__Unset = 0,
		EJunoWorldConditionNPCSlotsLimit__ReachedMaxCap = 1,
		EJunoWorldConditionNPCSlotsLimit__CanIncrease = 2,
	};


	// Enum /Script/JunoAIRuntime.EJunoWorldCondition_AIWorldSettingsExpectedValue
	enum EJunoWorldCondition_AIWorldSettingsExpectedValue
	{
		EJunoWorldCondition_AIWorldSettingsExpectedValue__Any = 0,
		EJunoWorldCondition_AIWorldSettingsExpectedValue__On = 1,
		EJunoWorldCondition_AIWorldSettingsExpectedValue__Off = 2,
	};

}
