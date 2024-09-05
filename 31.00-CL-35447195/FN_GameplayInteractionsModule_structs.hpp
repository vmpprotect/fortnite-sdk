#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: GameplayInteractionsModule
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct GameplayInteractionsModule.GameplayInteractionContext
	// Size: 0x68 (0x68 - 0x0)
	struct FGameplayInteractionContext	
	{
	public:
		FStateTreeInstanceData StateTreeInstanceData; // 0x0(0x10)
		FSmartObjectClaimHandle ClaimedHandle; // 0x10(0x20)
		FSmartObjectSlotEntranceHandle SlotEntranceHandle; // 0x30(0x18)
		FGameplayInteractionAbortContext AbortContext; // 0x48(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x49(0x7) UNKNOWN PROPERTY
		AActor ContextActor; // 0x50(0x8)
		AActor SmartObjectActor; // 0x58(0x8)
		UGameplayInteractionSmartObjectBehaviorDefinition Definition; // 0x60(0x8)
	};


	// Struct GameplayInteractionsModule.GameplayInteractionAbortContext
	// Size: 0x1 (0x1 - 0x0)
	struct FGameplayInteractionAbortContext	
	{
	public:
		EGameplayInteractionAbortReason Reason; // 0x0(0x1)
	};


	// Struct GameplayInteractionsModule.GameplayInteractionSlotUserData
	// Inherited from FSmartObjectSlotStateData
	// Size: 0x8 (0x8 - 0x0)
	struct FGameplayInteractionSlotUserData : public FSmartObjectSlotStateData	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct GameplayInteractionsModule.GameplayInteractionStateTreeTask
	// Inherited from FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FGameplayInteractionStateTreeTask : public FStateTreeTaskBase	
	{
	public:
	};


	// Struct GameplayInteractionsModule.GameplayInteractionStateTreeCondition
	// Inherited from FStateTreeConditionBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FGameplayInteractionStateTreeCondition : public FStateTreeConditionBase	
	{
	public:
	};


	// Struct GameplayInteractionsModule.GameplayInteractionMatchSlotTagsConditionInstanceData
	// Size: 0x30 (0x30 - 0x0)
	struct FGameplayInteractionMatchSlotTagsConditionInstanceData	
	{
	public:
		FSmartObjectSlotHandle Slot; // 0x0(0x10)
		FGameplayTagContainer TagsToMatch; // 0x10(0x20)
	};


	// Struct GameplayInteractionsModule.GameplayInteractionSlotTagsMatchCondition
	// Inherited from FGameplayInteractionStateTreeCondition -> FStateTreeConditionBase -> FStateTreeNodeBase
	// Size: 0x10 (0x30 - 0x20)
	struct FGameplayInteractionSlotTagsMatchCondition : public FGameplayInteractionStateTreeCondition	
	{
	public:
		EGameplayInteractionMatchSlotTagSource Source; // 0x20(0x1)
		EGameplayContainerMatchType MatchType; // 0x21(0x1)
		bool bExactMatch; // 0x22(0x1)
		bool bInvert; // 0x23(0x1)
		unsigned char UnknownData01_7[0xC]; // 0x24(0xC) UNKNOWN PROPERTY
	};


	// Struct GameplayInteractionsModule.GameplayInteractionQuerySlotTagsConditionInstanceData
	// Size: 0x10 (0x10 - 0x0)
	struct FGameplayInteractionQuerySlotTagsConditionInstanceData	
	{
	public:
		FSmartObjectSlotHandle Slot; // 0x0(0x10)
	};


	// Struct GameplayInteractionsModule.GameplayInteractionQuerySlotTagCondition
	// Inherited from FGameplayInteractionStateTreeCondition -> FStateTreeConditionBase -> FStateTreeNodeBase
	// Size: 0x58 (0x78 - 0x20)
	struct FGameplayInteractionQuerySlotTagCondition : public FGameplayInteractionStateTreeCondition	
	{
	public:
		EGameplayInteractionMatchSlotTagSource Source; // 0x20(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x21(0x7) UNKNOWN PROPERTY
		FGameplayTagQuery TagQuery; // 0x28(0x48)
		bool bInvert; // 0x70(0x1)
		unsigned char UnknownData03_7[0x7]; // 0x71(0x7) UNKNOWN PROPERTY
	};


	// Struct GameplayInteractionsModule.GameplayInteractionIsSlotHandleValidConditionInstanceData
	// Size: 0x10 (0x10 - 0x0)
	struct FGameplayInteractionIsSlotHandleValidConditionInstanceData	
	{
	public:
		FSmartObjectSlotHandle Slot; // 0x0(0x10)
	};


	// Struct GameplayInteractionsModule.GameplayInteractionIsSlotHandleValidCondition
	// Inherited from FGameplayInteractionStateTreeCondition -> FStateTreeConditionBase -> FStateTreeNodeBase
	// Size: 0x8 (0x28 - 0x20)
	struct FGameplayInteractionIsSlotHandleValidCondition : public FGameplayInteractionStateTreeCondition	
	{
	public:
		bool bInvert; // 0x20(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x21(0x7) UNKNOWN PROPERTY
	};


	// Struct GameplayInteractionsModule.GameplayInteractionFindSlotTaskInstanceData
	// Size: 0x20 (0x20 - 0x0)
	struct FGameplayInteractionFindSlotTaskInstanceData	
	{
	public:
		FSmartObjectSlotHandle ReferenceSlot; // 0x0(0x10)
		FSmartObjectSlotHandle ResultSlot; // 0x10(0x10)
	};


	// Struct GameplayInteractionsModule.GameplayInteractionFindSlotTask
	// Inherited from FGameplayInteractionStateTreeTask -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x10 (0x30 - 0x20)
	struct FGameplayInteractionFindSlotTask : public FGameplayInteractionStateTreeTask	
	{
	public:
		EGameplayInteractionSlotReferenceType ReferenceType; // 0x20(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x21(0x3) UNKNOWN PROPERTY
		FGameplayTag FindByTag; // 0x24(0x4)
		unsigned char UnknownData03_7[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
	};


	// Struct GameplayInteractionsModule.GameplayInteractionGetSlotActorTaskInstanceData
	// Size: 0x18 (0x18 - 0x0)
	struct FGameplayInteractionGetSlotActorTaskInstanceData	
	{
	public:
		FSmartObjectSlotHandle TargetSlot; // 0x0(0x10)
		AActor ResultActor; // 0x10(0x8)
	};


	// Struct GameplayInteractionsModule.GameplayInteractionGetSlotActorTask
	// Inherited from FGameplayInteractionStateTreeTask -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x8 (0x28 - 0x20)
	struct FGameplayInteractionGetSlotActorTask : public FGameplayInteractionStateTreeTask	
	{
	public:
		bool bFailIfNotFound; // 0x20(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x21(0x7) UNKNOWN PROPERTY
	};


	// Struct GameplayInteractionsModule.GameplayInteractionListenSlotEventsTaskInstanceData
	// Size: 0x18 (0x18 - 0x0)
	struct FGameplayInteractionListenSlotEventsTaskInstanceData	
	{
	public:
		FSmartObjectSlotHandle TargetSlot; // 0x0(0x10)
		unsigned char UnknownData01_7[0x8]; // 0x10(0x8) UNKNOWN PROPERTY
	};


	// Struct GameplayInteractionsModule.GameplayInteractionListenSlotEventsTask
	// Inherited from FGameplayInteractionStateTreeTask -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x8 (0x28 - 0x20)
	struct FGameplayInteractionListenSlotEventsTask : public FGameplayInteractionStateTreeTask	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x20(0x8) UNKNOWN PROPERTY
	};


	// Struct GameplayInteractionsModule.GameplayInteractionModifySlotTagTaskInstanceData
	// Size: 0x18 (0x18 - 0x0)
	struct FGameplayInteractionModifySlotTagTaskInstanceData	
	{
	public:
		FSmartObjectSlotHandle TargetSlot; // 0x0(0x10)
		bool bTagRemoved; // 0x10(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
	};


	// Struct GameplayInteractionsModule.GameplayInteractionModifySlotTagTask
	// Inherited from FGameplayInteractionStateTreeTask -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x10 (0x30 - 0x20)
	struct FGameplayInteractionModifySlotTagTask : public FGameplayInteractionStateTreeTask	
	{
	public:
		EGameplayInteractionTaskModify Modify; // 0x20(0x1)
		bool bHandleExternalStopAsFailure; // 0x21(0x1)
		EGameplayInteractionModifyGameplayTagOperation Operation; // 0x22(0x1)
		unsigned char UnknownData02_6[0x1]; // 0x23(0x1) UNKNOWN PROPERTY
		FGameplayTag tag; // 0x24(0x4)
		unsigned char UnknownData03_7[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
	};


	// Struct GameplayInteractionsModule.GameplayInteractionSendSlotEventTaskInstanceData
	// Size: 0x10 (0x10 - 0x0)
	struct FGameplayInteractionSendSlotEventTaskInstanceData	
	{
	public:
		FSmartObjectSlotHandle TargetSlot; // 0x0(0x10)
	};


	// Struct GameplayInteractionsModule.GameplayInteractionSendSlotEventTask
	// Inherited from FGameplayInteractionStateTreeTask -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x28 (0x48 - 0x20)
	struct FGameplayInteractionSendSlotEventTask : public FGameplayInteractionStateTreeTask	
	{
	public:
		FGameplayTag EventTag; // 0x20(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
		FInstancedStruct Payload; // 0x28(0x10)
		EGameplayInteractionTaskTrigger Trigger; // 0x38(0x1)
		bool bHandleExternalStopAsFailure; // 0x39(0x1)
		bool bShouldTriggerOnReselect; // 0x3A(0x1)
		unsigned char UnknownData03_7[0xD]; // 0x3B(0xD) UNKNOWN PROPERTY
	};


	// Struct GameplayInteractionsModule.GameplayInteractionSetSlotEnabledInstanceData
	// Size: 0x18 (0x18 - 0x0)
	struct FGameplayInteractionSetSlotEnabledInstanceData	
	{
	public:
		FSmartObjectSlotHandle TargetSlot; // 0x0(0x10)
		bool bInitialState; // 0x10(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
	};


	// Struct GameplayInteractionsModule.GameplayInteractionSetSlotEnabledTask
	// Inherited from FGameplayInteractionStateTreeTask -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x10 (0x30 - 0x20)
	struct FGameplayInteractionSetSlotEnabledTask : public FGameplayInteractionStateTreeTask	
	{
	public:
		EGameplayInteractionTaskModify Modify; // 0x20(0x1)
		bool bHandleExternalStopAsFailure; // 0x21(0x1)
		bool bEnableSlot; // 0x22(0x1)
		unsigned char UnknownData01_7[0xD]; // 0x23(0xD) UNKNOWN PROPERTY
	};


	// Struct GameplayInteractionsModule.GameplayInteractionSyncSlotTagStateInstanceData
	// Size: 0x20 (0x20 - 0x0)
	struct FGameplayInteractionSyncSlotTagStateInstanceData	
	{
	public:
		FSmartObjectSlotHandle TargetSlot; // 0x0(0x10)
		unsigned char UnknownData01_7[0x10]; // 0x10(0x10) UNKNOWN PROPERTY
	};


	// Struct GameplayInteractionsModule.GameplayInteractionSyncSlotTagStateTask
	// Inherited from FGameplayInteractionStateTreeTask -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x10 (0x30 - 0x20)
	struct FGameplayInteractionSyncSlotTagStateTask : public FGameplayInteractionStateTreeTask	
	{
	public:
		FGameplayTag TagToMonitor; // 0x20(0x4)
		FGameplayTag BreakEventTag; // 0x24(0x4)
		unsigned char UnknownData01_7[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
	};


	// Struct GameplayInteractionsModule.GameplayInteractionSyncSlotTagTransitionInstanceData
	// Size: 0x20 (0x20 - 0x0)
	struct FGameplayInteractionSyncSlotTagTransitionInstanceData	
	{
	public:
		FSmartObjectSlotHandle TargetSlot; // 0x0(0x10)
		unsigned char UnknownData01_7[0x10]; // 0x10(0x10) UNKNOWN PROPERTY
	};


	// Struct GameplayInteractionsModule.GameplayInteractionSyncSlotTagTransitionTask
	// Inherited from FGameplayInteractionStateTreeTask -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x18 (0x38 - 0x20)
	struct FGameplayInteractionSyncSlotTagTransitionTask : public FGameplayInteractionStateTreeTask	
	{
	public:
		FGameplayTag TransitionFromTag; // 0x20(0x4)
		FGameplayTag TransitionToTag; // 0x24(0x4)
		FGameplayTag TransitionEventTag; // 0x28(0x4)
		unsigned char UnknownData01_7[0xC]; // 0x2C(0xC) UNKNOWN PROPERTY
	};


	// Struct GameplayInteractionsModule.PlayMontageStateTreeTaskInstanceData
	// Size: 0x10 (0x10 - 0x0)
	struct FPlayMontageStateTreeTaskInstanceData	
	{
	public:
		AActor Actor; // 0x0(0x8)
		float ComputedDuration; // 0x8(0x4)
		float Time; // 0xC(0x4)
	};


	// Struct GameplayInteractionsModule.PlayMontageStateTreeTask
	// Inherited from FGameplayInteractionStateTreeTask -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x8 (0x28 - 0x20)
	struct FPlayMontageStateTreeTask : public FGameplayInteractionStateTreeTask	
	{
	public:
		UAnimMontage Montage; // 0x20(0x8)
	};


	// Struct GameplayInteractionsModule.StateTreeTask_FindSlotEntranceLocation_InstanceData
	// Size: 0xA0 (0xA0 - 0x0)
	struct FStateTreeTask_FindSlotEntranceLocation_InstanceData	
	{
	public:
		AActor UserActor; // 0x0(0x8)
		FSmartObjectSlotHandle ReferenceSlot; // 0x8(0x10)
		unsigned char UnknownData01_6[0x8]; // 0x18(0x8) UNKNOWN PROPERTY
		FTransform EntryTransform; // 0x20(0x60)
		FGameplayTagContainer EntranceTags; // 0x80(0x20)
	};


	// Struct GameplayInteractionsModule.StateTreeTask_FindSlotEntranceLocation
	// Inherited from FGameplayInteractionStateTreeTask -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x18 (0x38 - 0x20)
	struct FStateTreeTask_FindSlotEntranceLocation : public FGameplayInteractionStateTreeTask	
	{
	public:
		FSmartObjectSlotEntrySelectionMethod SelectMethod; // 0x20(0x1)
		bool bProjectNavigationLocation; // 0x21(0x1)
		bool bTraceGroundLocation; // 0x22(0x1)
		bool bCheckTransitionTrajectory; // 0x23(0x1)
		bool bCheckEntranceLocationOverlap; // 0x24(0x1)
		bool bCheckSlotLocationOverlap; // 0x25(0x1)
		bool bUseSlotLocationAsFallbackCandidate; // 0x26(0x1)
		ESmartObjectSlotNavigationLocationType LocationType; // 0x27(0x1)
		UClass ValidationFilter; // 0x28(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x30(0x8) UNKNOWN PROPERTY
	};


	// Struct GameplayInteractionsModule.StateTreeTask_GetSlotEntranceTags_InstanceData
	// Size: 0x38 (0x38 - 0x0)
	struct FStateTreeTask_GetSlotEntranceTags_InstanceData	
	{
	public:
		FSmartObjectSlotEntranceHandle SlotEntranceHandle; // 0x0(0x18)
		FGameplayTagContainer EntranceTags; // 0x18(0x20)
	};


	// Struct GameplayInteractionsModule.StateTreeTask_GetSlotEntranceTags
	// Inherited from FGameplayInteractionStateTreeTask -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x8 (0x28 - 0x20)
	struct FStateTreeTask_GetSlotEntranceTags : public FGameplayInteractionStateTreeTask	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x20(0x8) UNKNOWN PROPERTY
	};


	// Struct GameplayInteractionsModule.StateTreeTask_PlayContextualAnim
	// Inherited from FStateTreeTaskCommonBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FStateTreeTask_PlayContextualAnim : public FStateTreeTaskCommonBase	
	{
	public:
	};

}
