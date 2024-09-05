#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: JunoAdventuresRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Enum /Script/JunoAdventuresRuntime.EJunoNPCJoinReason
	enum EJunoNPCJoinReason
	{
		EJunoNPCJoinReason__StandardRecruitment = 0,
		EJunoNPCJoinReason__RemoteRecruitment = 1,
		EJunoNPCJoinReason__BarnRecruitment = 2,
	};


	// Enum /Script/JunoAdventuresRuntime.EJunoTokenReceiverType
	enum EJunoTokenReceiverType
	{
		EJunoTokenReceiverType__QuestGiver = 0,
		EJunoTokenReceiverType__QuestGiverBoundPlayspace = 1,
	};


	// Enum /Script/JunoAdventuresRuntime.EJunoInsertItemType
	enum EJunoInsertItemType
	{
		EJunoInsertItemType__Equipped = 0,
		EJunoInsertItemType__OffHand = 1,
		EJunoInsertItemType__Any = 2,
	};


	// Enum /Script/JunoAdventuresRuntime.EJunoQuestState
	enum EJunoQuestState
	{
		EJunoQuestState__Invalid = 0,
		EJunoQuestState__Available = 1,
		EJunoQuestState__Rolled = 2,
		EJunoQuestState__InProgress = 3,
		EJunoQuestState__Completed = 4,
	};

}
