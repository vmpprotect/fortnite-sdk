#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: StateDrivenActorRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct StateDrivenActorRuntime.LatestObjectRecordedStateTreeTransitionResult
	// Size: 0x20 (0x20 - 0x0)
	struct FLatestObjectRecordedStateTreeTransitionResult	
	{
	public:
		TWeakObjectPtr<AActor*> Instigator; // 0x0(0x8)
		TWeakObjectPtr<UObjectInstancedStateTreeComponent*> ObjectInstancedComponent; // 0x8(0x8)
		TArray<FRecordedStateTreeTransitionResult> RecordedTransitions; // 0x10(0x10)
	};


	// Struct StateDrivenActorRuntime.StateDrivenStateTransitions
	// Size: 0x18 (0x18 - 0x0)
	struct FStateDrivenStateTransitions	
	{
	public:
		FGameplayTag TransitionTag; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TArray<FInstancedStruct> TransitionEvents; // 0x8(0x10)
	};


	// Struct StateDrivenActorRuntime.StateDrivenState
	// Size: 0x40 (0x40 - 0x0)
	struct FStateDrivenState	
	{
	public:
		FString DevNotes; // 0x0(0x10)
		TArray<FInstancedStruct> SourceEnterStateReactions; // 0x10(0x10)
		TArray<FInstancedStruct> InstigatorEnterStateReactions; // 0x20(0x10)
		TArray<FStateDrivenStateTransitions> Transitions; // 0x30(0x10)
	};


	// Struct StateDrivenActorRuntime.StateDrivenEvent
	// Size: 0x18 (0x18 - 0x0)
	struct FStateDrivenEvent	
	{
	public:
		unsigned char UnknownData00_7[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
		UFortActorComponent_StateDriven* StateDrivenOwner; // 0x10(0x8)
	};


	// Struct StateDrivenActorRuntime.StateDrivenEvent_BeginOverlap
	// Inherited from FStateDrivenEvent
	// Size: 0x20 (0x38 - 0x18)
	struct FStateDrivenEvent_BeginOverlap : public FStateDrivenEvent	
	{
	public:
		FStateDrivenTagQuery OverlappingActorTagQuery; // 0x18(0x18)
		float OverlapRadius; // 0x30(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
	};


	// Struct StateDrivenActorRuntime.StateDrivenTagQuery
	// Size: 0x18 (0x18 - 0x0)
	struct FStateDrivenTagQuery	
	{
	public:
		unsigned char UnknownData00_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		FInstancedStruct InstancedTagQuery; // 0x8(0x10)
	};


	// Struct StateDrivenActorRuntime.StateDrivenEvent_InteractionBase
	// Inherited from FStateDrivenEvent
	// Size: 0x30 (0x48 - 0x18)
	struct FStateDrivenEvent_InteractionBase : public FStateDrivenEvent	
	{
	public:
		FStateDrivenTagQuery PlayerTagQuery; // 0x18(0x18)
		FText InteractionStringOverride; // 0x30(0x10)
		float InteractionTimeOverride; // 0x40(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x44(0x4) UNKNOWN PROPERTY
	};


	// Struct StateDrivenActorRuntime.StateDrivenEvent_Conversation
	// Inherited from FStateDrivenEvent_InteractionBase -> FStateDrivenEvent
	// Size: 0x10 (0x58 - 0x48)
	struct FStateDrivenEvent_Conversation : public FStateDrivenEvent_InteractionBase	
	{
	public:
		FGameplayTag ConversationEntryTag; // 0x48(0x4)
		TWeakObjectPtr<UFortNonPlayerConversationParticipantComponent*> ConversationComponentPtr; // 0x4C(0x8)
		unsigned char UnknownData00_7[0x4]; // 0x54(0x4) UNKNOWN PROPERTY
	};


	// Struct StateDrivenActorRuntime.StateDrivenEvent_DamageInstance
	// Inherited from FStateDrivenEvent
	// Size: 0x38 (0x50 - 0x18)
	struct FStateDrivenEvent_DamageInstance : public FStateDrivenEvent	
	{
	public:
		FStateDrivenTagQuery InstigatorTagQuery; // 0x18(0x18)
		FStateDrivenTagQuery DamageInstanceTagQuery; // 0x30(0x18)
		float MinimumInstanceDamage; // 0x48(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x4C(0x4) UNKNOWN PROPERTY
	};


	// Struct StateDrivenActorRuntime.StateDrivenEvent_DepositResource
	// Inherited from FStateDrivenEvent_InteractionBase -> FStateDrivenEvent
	// Size: 0x28 (0x70 - 0x48)
	struct FStateDrivenEvent_DepositResource : public FStateDrivenEvent_InteractionBase	
	{
	public:
		TWeakObjectPtr<UFortItemDefinition*> DepositItem; // 0x48(0x20)
		int32_t DepositAmount; // 0x68(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x6C(0x4) UNKNOWN PROPERTY
	};


	// Struct StateDrivenActorRuntime.StateDrivenEvent_Destroy
	// Inherited from FStateDrivenEvent
	// Size: 0x30 (0x48 - 0x18)
	struct FStateDrivenEvent_Destroy : public FStateDrivenEvent	
	{
	public:
		FStateDrivenTagQuery InstigatorTagQuery; // 0x18(0x18)
		FStateDrivenTagQuery DamageInstanceTagQuery; // 0x30(0x18)
	};


	// Struct StateDrivenActorRuntime.StateDrivenEvent_EndOverlap
	// Inherited from FStateDrivenEvent
	// Size: 0x20 (0x38 - 0x18)
	struct FStateDrivenEvent_EndOverlap : public FStateDrivenEvent	
	{
	public:
		FStateDrivenTagQuery OverlappingActorTagQuery; // 0x18(0x18)
		float OverlapRadius; // 0x30(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
	};


	// Struct StateDrivenActorRuntime.StateDrivenEvent_InsertItem
	// Inherited from FStateDrivenEvent_InteractionBase -> FStateDrivenEvent
	// Size: 0x18 (0x60 - 0x48)
	struct FStateDrivenEvent_InsertItem : public FStateDrivenEvent_InteractionBase	
	{
	public:
		FStateDrivenTagQuery EquippedItemTagQuery; // 0x48(0x18)
	};


	// Struct StateDrivenActorRuntime.StateDrivenEvent_Interaction
	// Inherited from FStateDrivenEvent_InteractionBase -> FStateDrivenEvent
	// Size: 0x0 (0x48 - 0x48)
	struct FStateDrivenEvent_Interaction : public FStateDrivenEvent_InteractionBase	
	{
	public:
	};


	// Struct StateDrivenActorRuntime.StateDrivenEvent_PickupItem
	// Inherited from FStateDrivenEvent_BeginOverlap -> FStateDrivenEvent
	// Size: 0x0 (0x38 - 0x38)
	struct FStateDrivenEvent_PickupItem : public FStateDrivenEvent_BeginOverlap	
	{
	public:
	};


	// Struct StateDrivenActorRuntime.StateDrivenEvent_QuestObjectiveActive
	// Inherited from FStateDrivenEvent
	// Size: 0x18 (0x30 - 0x18)
	struct FStateDrivenEvent_QuestObjectiveActive : public FStateDrivenEvent	
	{
	public:
		UFortItemDefinition* QuestItemDefinition; // 0x18(0x8)
		FName ObjectiveBackendName; // 0x20(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
		UStateDrivenEventQuestObjectiveActiveHelper* StateDrivenEventQuestObjectiveActiveHelper; // 0x28(0x8)
	};


	// Struct StateDrivenActorRuntime.StateDrivenEvent_QuestObjectiveCompleted
	// Inherited from FStateDrivenEvent
	// Size: 0x18 (0x30 - 0x18)
	struct FStateDrivenEvent_QuestObjectiveCompleted : public FStateDrivenEvent	
	{
	public:
		UFortItemDefinition* QuestItemDefinition; // 0x18(0x8)
		FName ObjectiveBackendName; // 0x20(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
		UStateDrivenEventQuestObjectiveCompletedHelper* StateDrivenEventQuestObjectiveCompletedHelper; // 0x28(0x8)
	};


	// Struct StateDrivenActorRuntime.StateDrivenEvent_Timer
	// Inherited from FStateDrivenEvent
	// Size: 0x20 (0x38 - 0x18)
	struct FStateDrivenEvent_Timer : public FStateDrivenEvent	
	{
	public:
		FStateDrivenFloat duration; // 0x18(0x18)
		FTimerHandle TimerTransitionEventHandle; // 0x30(0x8)
	};


	// Struct StateDrivenActorRuntime.StateDrivenFloat
	// Size: 0x18 (0x18 - 0x0)
	struct FStateDrivenFloat	
	{
	public:
		unsigned char UnknownData00_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		FInstancedStruct InstancedFloat; // 0x8(0x10)
	};


	// Struct StateDrivenActorRuntime.StateDrivenEvent_Verb
	// Inherited from FStateDrivenEvent
	// Size: 0x20 (0x38 - 0x18)
	struct FStateDrivenEvent_Verb : public FStateDrivenEvent	
	{
	public:
		TArray<FInstancedStruct> Verbs; // 0x18(0x10)
		int32_t ValueThreshold; // 0x28(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
		UStateDrivenEventVerbHelper* StateDrivenEventVerbHelper; // 0x30(0x8)
	};


	// Struct StateDrivenActorRuntime.StateDrivenEvent_WithdrawItem
	// Inherited from FStateDrivenEvent_InteractionBase -> FStateDrivenEvent
	// Size: 0x18 (0x60 - 0x48)
	struct FStateDrivenEvent_WithdrawItem : public FStateDrivenEvent_InteractionBase	
	{
	public:
		FVector SlottedItemPopOffset; // 0x48(0x18)
	};


	// Struct StateDrivenActorRuntime.StateDrivenFloat_Base
	// Size: 0x8 (0x8 - 0x0)
	struct FStateDrivenFloat_Base	
	{
	public:
		unsigned char UnknownData00_2[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct StateDrivenActorRuntime.StateDrivenFloat_Simple
	// Inherited from FStateDrivenFloat_Base
	// Size: 0x8 (0x10 - 0x8)
	struct FStateDrivenFloat_Simple : public FStateDrivenFloat_Base	
	{
	public:
		float Value; // 0x8(0x4)
		unsigned char UnknownData00_7[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
	};


	// Struct StateDrivenActorRuntime.StateDrivenFloat_Variable
	// Inherited from FStateDrivenFloat_Base
	// Size: 0x8 (0x10 - 0x8)
	struct FStateDrivenFloat_Variable : public FStateDrivenFloat_Base	
	{
	public:
		int32_t VariableIndex; // 0x8(0x4)
		unsigned char UnknownData00_7[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
	};


	// Struct StateDrivenActorRuntime.StateDrivenTagQuery_Base
	// Size: 0x8 (0x8 - 0x0)
	struct FStateDrivenTagQuery_Base	
	{
	public:
		unsigned char UnknownData00_2[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct StateDrivenActorRuntime.StateDrivenTagQuery_Simple
	// Inherited from FStateDrivenTagQuery_Base
	// Size: 0x48 (0x50 - 0x8)
	struct FStateDrivenTagQuery_Simple : public FStateDrivenTagQuery_Base	
	{
	public:
		FGameplayTagQuery Query; // 0x8(0x48)
	};


	// Struct StateDrivenActorRuntime.StateDrivenTagQuery_Variable
	// Inherited from FStateDrivenTagQuery_Base
	// Size: 0x8 (0x10 - 0x8)
	struct FStateDrivenTagQuery_Variable : public FStateDrivenTagQuery_Base	
	{
	public:
		int32_t VariableIndex; // 0x8(0x4)
		unsigned char UnknownData00_7[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
	};


	// Struct StateDrivenActorRuntime.StateDrivenEventTransitionStateTreeTaskInstanceData
	// Size: 0x58 (0x58 - 0x0)
	struct FStateDrivenEventTransitionStateTreeTaskInstanceData	
	{
	public:
		FStateDrivenState StateData; // 0x0(0x40)
		AActor* UserActor; // 0x40(0x8)
		AActor* InstigatorActor; // 0x48(0x8)
		unsigned char UnknownData00_7[0x8]; // 0x50(0x8) UNKNOWN PROPERTY
	};


	// Struct StateDrivenActorRuntime.StateDrivenEventTransitionStateTreeTask
	// Inherited from FStateTreeTaskCommonBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FStateDrivenEventTransitionStateTreeTask : public FStateTreeTaskCommonBase	
	{
	public:
	};

}
