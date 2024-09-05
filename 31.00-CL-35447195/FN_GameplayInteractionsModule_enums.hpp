#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: GameplayInteractionsModule
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/GameplayInteractionsModule.EGameplayTaskActuationResult
	enum EGameplayTaskActuationResult
	{
		EGameplayTaskActuationResult__None = 0,
		EGameplayTaskActuationResult__RequestFailed = 1,
		EGameplayTaskActuationResult__Failed = 2,
		EGameplayTaskActuationResult__Succeeded = 3,
	};


	// Enum /Script/GameplayInteractionsModule.EGameplayInteractionAbortReason
	enum EGameplayInteractionAbortReason
	{
		EGameplayInteractionAbortReason__Unset = 0,
		EGameplayInteractionAbortReason__ExternalAbort = 1,
		EGameplayInteractionAbortReason__InternalAbort = 2,
	};


	// Enum /Script/GameplayInteractionsModule.EGameplayInteractionModifyGameplayTagOperation
	enum EGameplayInteractionModifyGameplayTagOperation
	{
		EGameplayInteractionModifyGameplayTagOperation__Add = 0,
		EGameplayInteractionModifyGameplayTagOperation__Remove = 1,
	};


	// Enum /Script/GameplayInteractionsModule.EGameplayInteractionTaskModify
	enum EGameplayInteractionTaskModify
	{
		EGameplayInteractionTaskModify__OnEnterStateUndoOnExitState = 0,
		EGameplayInteractionTaskModify__OnEnterState = 1,
		EGameplayInteractionTaskModify__OnExitState = 2,
		EGameplayInteractionTaskModify__OnExitStateFailed = 3,
		EGameplayInteractionTaskModify__OnExitStateSucceeded = 4,
	};


	// Enum /Script/GameplayInteractionsModule.EGameplayInteractionTaskTrigger
	enum EGameplayInteractionTaskTrigger
	{
		EGameplayInteractionTaskTrigger__OnEnterState = 0,
		EGameplayInteractionTaskTrigger__OnExitState = 1,
		EGameplayInteractionTaskTrigger__OnExitStateFailed = 2,
		EGameplayInteractionTaskTrigger__OnExitStateSucceeded = 3,
	};


	// Enum /Script/GameplayInteractionsModule.EGameplayInteractionMatchSlotTagSource
	enum EGameplayInteractionMatchSlotTagSource
	{
		EGameplayInteractionMatchSlotTagSource__ActivityTags = 0,
		EGameplayInteractionMatchSlotTagSource__RuntimeTags = 1,
	};


	// Enum /Script/GameplayInteractionsModule.EGameplayInteractionSlotReferenceType
	enum EGameplayInteractionSlotReferenceType
	{
		EGameplayInteractionSlotReferenceType__ByActivityTag = 0,
		EGameplayInteractionSlotReferenceType__ByLinkTag = 1,
	};


	// Enum /Script/GameplayInteractionsModule.EGameplayInteractionSyncSlotTransitionState
	enum EGameplayInteractionSyncSlotTransitionState
	{
		EGameplayInteractionSyncSlotTransitionState__WaitingForFromTag = 0,
		EGameplayInteractionSyncSlotTransitionState__WaitingForToTag = 1,
		EGameplayInteractionSyncSlotTransitionState__Completed = 2,
	};


	// Enum /Script/GameplayInteractionsModule.EPlayContextualAnimExecutionMethod
	enum EPlayContextualAnimExecutionMethod
	{
		EPlayContextualAnimExecutionMethod__StartInteraction = 0,
		EPlayContextualAnimExecutionMethod__JoinInteraction = 1,
		EPlayContextualAnimExecutionMethod__TransitionAllActors = 2,
		EPlayContextualAnimExecutionMethod__TransitionSingleActor = 3,
	};

}
