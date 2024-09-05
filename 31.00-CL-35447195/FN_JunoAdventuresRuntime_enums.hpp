#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: JunoAdventuresRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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
