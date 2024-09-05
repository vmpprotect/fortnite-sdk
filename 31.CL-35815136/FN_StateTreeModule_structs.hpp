#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: StateTreeModule
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct StateTreeModule.StateTreeEvent
	// Size: 0x20 (0x20 - 0x0)
	struct FStateTreeEvent	
	{
	public:
		FGameplayTag Tag; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FInstancedStruct Payload; // 0x8(0x10)
		FName Origin; // 0x18(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
	};


	// Struct StateTreeModule.StateTreeReferenceOverrides
	// Size: 0x10 (0x10 - 0x0)
	struct FStateTreeReferenceOverrides	
	{
	public:
		TArray<FStateTreeReferenceOverrideItem> OverrideItems; // 0x0(0x10)
	};


	// Struct StateTreeModule.StateTreeReferenceOverrideItem
	// Size: 0x30 (0x30 - 0x0)
	struct FStateTreeReferenceOverrideItem	
	{
	public:
		FGameplayTag StateTag; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FStateTreeReference StateTreeReference; // 0x8(0x28)
	};


	// Struct StateTreeModule.StateTreeReference
	// Size: 0x28 (0x28 - 0x0)
	struct FStateTreeReference	
	{
	public:
		UStateTree* StateTree; // 0x0(0x8)
		FInstancedPropertyBag Parameters; // 0x8(0x10)
		TArray<FGuid> PropertyOverrides; // 0x18(0x10)
	};


	// Struct StateTreeModule.RecordedStateTreeTransitionResult
	// Size: 0x38 (0x38 - 0x0)
	struct FRecordedStateTreeTransitionResult	
	{
	public:
		TArray<FRecordedStateTreeExecutionFrame> NextActiveFrames; // 0x0(0x10)
		TArray<FStateTreeEvent> NextActiveFrameEvents; // 0x10(0x10)
		FStateTreeStateHandle SourceState; // 0x20(0x2)
		FStateTreeStateHandle TargetState; // 0x22(0x2)
		EStateTreeTransitionPriority Priority; // 0x24(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x25(0x3) UNKNOWN PROPERTY
		UStateTree* SourceStateTree; // 0x28(0x8)
		FStateTreeStateHandle SourceRootState; // 0x30(0x2)
		unsigned char UnknownData01_7[0x6]; // 0x32(0x6) UNKNOWN PROPERTY
	};


	// Struct StateTreeModule.StateTreeStateHandle
	// Size: 0x2 (0x2 - 0x0)
	struct FStateTreeStateHandle	
	{
	public:
		uint16_t Index; // 0x0(0x2)
	};


	// Struct StateTreeModule.RecordedStateTreeExecutionFrame
	// Size: 0x28 (0x28 - 0x0)
	struct FRecordedStateTreeExecutionFrame	
	{
	public:
		UStateTree* StateTree; // 0x0(0x8)
		FStateTreeStateHandle RootState; // 0x8(0x2)
		FStateTreeActiveStates ActiveStates; // 0xA(0x12)
		bool bIsGlobalFrame : 1; // 0x1C:0(0x1)
		unsigned char UnknownData00_7[0xB]; // 0x1D(0xB) UNKNOWN PROPERTY
	};


	// Struct StateTreeModule.StateTreeActiveStates
	// Size: 0x12 (0x12 - 0x0)
	struct FStateTreeActiveStates	
	{
	public:
		FStateTreeStateHandle States; // 0x0(0x10)
		char NumStates; // 0x10(0x1)
		unsigned char UnknownData00_7[0x1]; // 0x11(0x1) UNKNOWN PROPERTY
	};


	// Struct StateTreeModule.StateTreeInstanceData
	// Size: 0x10 (0x10 - 0x0)
	struct FStateTreeInstanceData	
	{
	public:
		unsigned char UnknownData00_2[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
	};


	// Struct StateTreeModule.StateTreeAnyEnum
	// Size: 0x10 (0x10 - 0x0)
	struct FStateTreeAnyEnum	
	{
	public:
		uint32_t Value; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		UEnum* Enum; // 0x8(0x8)
	};


	// Struct StateTreeModule.StateTreeBooleanOperationPropertyFunctionInstanceData
	// Size: 0x3 (0x3 - 0x0)
	struct FStateTreeBooleanOperationPropertyFunctionInstanceData	
	{
	public:
		bool bLeft; // 0x0(0x1)
		bool bRight; // 0x1(0x1)
		bool bResult; // 0x2(0x1)
	};


	// Struct StateTreeModule.StateTreeNodeBase
	// Size: 0x18 (0x18 - 0x0)
	struct FStateTreeNodeBase	
	{
	public:
		unsigned char UnknownData00_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		FName Name; // 0x8(0x4)
		FStateTreeIndex16 BindingsBatch; // 0xC(0x2)
		FStateTreeIndex16 InstanceTemplateIndex; // 0xE(0x2)
		FStateTreeDataHandle InstanceDataHandle; // 0x10(0x6)
		unsigned char UnknownData01_7[0x2]; // 0x16(0x2) UNKNOWN PROPERTY
	};


	// Struct StateTreeModule.StateTreeDataHandle
	// Size: 0x6 (0x6 - 0x0)
	struct FStateTreeDataHandle	
	{
	public:
		EStateTreeDataSourceType Source; // 0x0(0x1)
		unsigned char UnknownData00_6[0x1]; // 0x1(0x1) UNKNOWN PROPERTY
		uint16_t Index; // 0x2(0x2)
		FStateTreeStateHandle StateHandle; // 0x4(0x2)
	};


	// Struct StateTreeModule.StateTreeIndex16
	// Size: 0x2 (0x2 - 0x0)
	struct FStateTreeIndex16	
	{
	public:
		uint16_t Value; // 0x0(0x2)
	};


	// Struct StateTreeModule.StateTreePropertyFunctionBase
	// Inherited from FStateTreeNodeBase
	// Size: 0x0 (0x18 - 0x18)
	struct FStateTreePropertyFunctionBase : public FStateTreeNodeBase	
	{
	public:
	};


	// Struct StateTreeModule.StateTreePropertyFunctionCommonBase
	// Inherited from FStateTreePropertyFunctionBase -> FStateTreeNodeBase
	// Size: 0x0 (0x18 - 0x18)
	struct FStateTreePropertyFunctionCommonBase : public FStateTreePropertyFunctionBase	
	{
	public:
	};


	// Struct StateTreeModule.StateTreeBooleanAndPropertyFunction
	// Inherited from FStateTreePropertyFunctionCommonBase -> FStateTreePropertyFunctionBase -> FStateTreeNodeBase
	// Size: 0x0 (0x18 - 0x18)
	struct FStateTreeBooleanAndPropertyFunction : public FStateTreePropertyFunctionCommonBase	
	{
	public:
	};


	// Struct StateTreeModule.StateTreeBooleanOrPropertyFunction
	// Inherited from FStateTreePropertyFunctionCommonBase -> FStateTreePropertyFunctionBase -> FStateTreeNodeBase
	// Size: 0x0 (0x18 - 0x18)
	struct FStateTreeBooleanOrPropertyFunction : public FStateTreePropertyFunctionCommonBase	
	{
	public:
	};


	// Struct StateTreeModule.StateTreeExternalDataHandle
	// Size: 0x6 (0x6 - 0x0)
	struct FStateTreeExternalDataHandle	
	{
	public:
		FStateTreeDataHandle DataHandle; // 0x0(0x6)
	};


	// Struct StateTreeModule.StateTreeExternalDataDesc
	// Size: 0x18 (0x18 - 0x0)
	struct FStateTreeExternalDataDesc	
	{
	public:
		UStruct* Struct; // 0x0(0x8)
		FName Name; // 0x8(0x4)
		FStateTreeExternalDataHandle Handle; // 0xC(0x6)
		EStateTreeExternalDataRequirement Requirement; // 0x12(0x1)
		unsigned char UnknownData00_7[0x5]; // 0x13(0x5) UNKNOWN PROPERTY
	};


	// Struct StateTreeModule.StateTreeTransitionRequest
	// Size: 0x18 (0x18 - 0x0)
	struct FStateTreeTransitionRequest	
	{
	public:
		FStateTreeStateHandle SourceState; // 0x0(0x2)
		unsigned char UnknownData00_6[0x6]; // 0x2(0x6) UNKNOWN PROPERTY
		UStateTree* SourceStateTree; // 0x8(0x8)
		FStateTreeStateHandle SourceRootState; // 0x10(0x2)
		FStateTreeStateHandle TargetState; // 0x12(0x2)
		EStateTreeTransitionPriority Priority; // 0x14(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x15(0x3) UNKNOWN PROPERTY
	};


	// Struct StateTreeModule.StateTreeTransitionSource
	// Size: 0x8 (0x8 - 0x0)
	struct FStateTreeTransitionSource	
	{
	public:
		unsigned char UnknownData00_2[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct StateTreeModule.StateTreeTransitionDelayedState
	// Size: 0x28 (0x28 - 0x0)
	struct FStateTreeTransitionDelayedState	
	{
	public:
		UStateTree* StateTree; // 0x0(0x8)
		FStateTreeIndex16 TransitionIndex; // 0x8(0x2)
		unsigned char UnknownData00_6[0x2]; // 0xA(0x2) UNKNOWN PROPERTY
		float TimeLeft; // 0xC(0x4)
		FStateTreeSharedEvent CapturedEvent; // 0x10(0x10)
		uint32_t CapturedEventHash; // 0x20(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
	};


	// Struct StateTreeModule.StateTreeSharedEvent
	// Size: 0x10 (0x10 - 0x0)
	struct FStateTreeSharedEvent	
	{
	public:
		unsigned char UnknownData00_2[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
	};


	// Struct StateTreeModule.StateTreeExecutionFrame
	// Size: 0x30 (0x30 - 0x0)
	struct FStateTreeExecutionFrame	
	{
	public:
		UStateTree* StateTree; // 0x0(0x8)
		FStateTreeStateHandle RootState; // 0x8(0x2)
		FStateTreeActiveStates ActiveStates; // 0xA(0x12)
		FStateTreeIndex16 ExternalDataBaseIndex; // 0x1C(0x2)
		FStateTreeIndex16 GlobalInstanceIndexBase; // 0x1E(0x2)
		FStateTreeIndex16 ActiveInstanceIndexBase; // 0x20(0x2)
		FStateTreeDataHandle StateParameterDataHandle; // 0x22(0x6)
		FStateTreeDataHandle GlobalParameterDataHandle; // 0x28(0x6)
		unsigned char UnknownData00_6[0x1]; // 0x2E(0x1) UNKNOWN PROPERTY
		bool bIsGlobalFrame : 1; // 0x2F:0(0x1)
	};


	// Struct StateTreeModule.StateTreeExecutionState
	// Size: 0x38 (0x38 - 0x0)
	struct FStateTreeExecutionState	
	{
	public:
		TArray<FStateTreeExecutionFrame> ActiveFrames; // 0x0(0x10)
		TArray<FStateTreeTransitionDelayedState> DelayedTransitions; // 0x10(0x10)
		FStateTreeIndex16 EnterStateFailedFrameIndex; // 0x20(0x2)
		FStateTreeIndex16 EnterStateFailedTaskIndex; // 0x22(0x2)
		EStateTreeRunStatus LastTickStatus; // 0x24(0x1)
		EStateTreeRunStatus TreeRunStatus; // 0x25(0x1)
		EStateTreeRunStatus RequestedStop; // 0x26(0x1)
		EStateTreeUpdatePhase CurrentPhase; // 0x27(0x1)
		FStateTreeIndex16 CompletedFrameIndex; // 0x28(0x2)
		FStateTreeStateHandle CompletedStateHandle; // 0x2A(0x2)
		uint16_t StateChangeCount; // 0x2C(0x2)
		unsigned char UnknownData00_6[0x2]; // 0x2E(0x2) UNKNOWN PROPERTY
		FRandomStream RandomStream; // 0x30(0x8)
	};


	// Struct StateTreeModule.StateTreeTransitionResult
	// Size: 0x40 (0x40 - 0x0)
	struct FStateTreeTransitionResult	
	{
	public:
		TArray<FStateTreeExecutionFrame> NextActiveFrames; // 0x0(0x10)
		unsigned char UnknownData00_6[0x10]; // 0x10(0x10) UNKNOWN PROPERTY
		EStateTreeRunStatus CurrentRunStatus; // 0x20(0x1)
		unsigned char UnknownData01_6[0x1]; // 0x21(0x1) UNKNOWN PROPERTY
		FStateTreeStateHandle SourceState; // 0x22(0x2)
		FStateTreeStateHandle TargetState; // 0x24(0x2)
		FStateTreeStateHandle CurrentState; // 0x26(0x2)
		EStateTreeStateChangeType ChangeType; // 0x28(0x1)
		EStateTreeTransitionPriority Priority; // 0x29(0x1)
		unsigned char UnknownData02_6[0x6]; // 0x2A(0x6) UNKNOWN PROPERTY
		UStateTree* SourceStateTree; // 0x30(0x8)
		FStateTreeStateHandle SourceRootState; // 0x38(0x2)
		unsigned char UnknownData03_7[0x6]; // 0x3A(0x6) UNKNOWN PROPERTY
	};


	// Struct StateTreeModule.StateTreeIndex8
	// Size: 0x1 (0x1 - 0x0)
	struct FStateTreeIndex8	
	{
	public:
		char Value; // 0x0(0x1)
	};


	// Struct StateTreeModule.StateTreePropertyRef
	// Size: 0x2 (0x2 - 0x0)
	struct FStateTreePropertyRef	
	{
	public:
		FStateTreeIndex16 RefAccessIndex; // 0x0(0x2)
	};


	// Struct StateTreeModule.StateTreeBlueprintPropertyRef
	// Inherited from FStateTreePropertyRef
	// Size: 0xE (0x10 - 0x2)
	struct FStateTreeBlueprintPropertyRef : public FStateTreePropertyRef	
	{
	public:
		EStateTreePropertyRefType RefType; // 0x2(0x1)
		bool bIsRefToArray : 1; // 0x3:0(0x1)
		bool bIsOptional : 1; // 0x3:1(0x1)
		unsigned char UnknownData00_5[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		UObject* TypeObject; // 0x8(0x8)
	};


	// Struct StateTreeModule.StateTreeRunParallelStateTreeTaskInstanceData
	// Size: 0x40 (0x40 - 0x0)
	struct FStateTreeRunParallelStateTreeTaskInstanceData	
	{
	public:
		FStateTreeReference StateTree; // 0x0(0x28)
		FStateTreeInstanceData TreeInstanceData; // 0x28(0x10)
		UStateTree* RunningStateTree; // 0x38(0x8)
	};


	// Struct StateTreeModule.StateTreeTaskBase
	// Inherited from FStateTreeNodeBase
	// Size: 0x8 (0x20 - 0x18)
	struct FStateTreeTaskBase : public FStateTreeNodeBase	
	{
	public:
		bool bTaskEnabled : 1; // 0x18:6(0x1)
		EStateTreeTransitionPriority TransitionHandlingPriority; // 0x19(0x1)
		unsigned char UnknownData00_7[0x6]; // 0x1A(0x6) UNKNOWN PROPERTY
	};


	// Struct StateTreeModule.StateTreeTaskCommonBase
	// Inherited from FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FStateTreeTaskCommonBase : public FStateTreeTaskBase	
	{
	public:
	};


	// Struct StateTreeModule.StateTreeRunParallelStateTreeTask
	// Inherited from FStateTreeTaskCommonBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x8 (0x28 - 0x20)
	struct FStateTreeRunParallelStateTreeTask : public FStateTreeTaskCommonBase	
	{
	public:
		FGameplayTag StateTreeOverrideTag; // 0x20(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
	};


	// Struct StateTreeModule.StateTreeConditionBase
	// Inherited from FStateTreeNodeBase
	// Size: 0x8 (0x20 - 0x18)
	struct FStateTreeConditionBase : public FStateTreeNodeBase	
	{
	public:
		EStateTreeExpressionOperand Operand; // 0x18(0x1)
		int8_t DeltaIndent; // 0x19(0x1)
		EStateTreeConditionEvaluationMode EvaluationMode; // 0x1A(0x1)
		unsigned char UnknownData00_7[0x5]; // 0x1B(0x5) UNKNOWN PROPERTY
	};


	// Struct StateTreeModule.StateTreeBlueprintConditionWrapper
	// Inherited from FStateTreeConditionBase -> FStateTreeNodeBase
	// Size: 0x8 (0x28 - 0x20)
	struct FStateTreeBlueprintConditionWrapper : public FStateTreeConditionBase	
	{
	public:
		UClass* ConditionClass; // 0x20(0x8)
	};


	// Struct StateTreeModule.StateTreeConsiderationBase
	// Inherited from FStateTreeNodeBase
	// Size: 0x10 (0x28 - 0x18)
	struct FStateTreeConsiderationBase : public FStateTreeNodeBase	
	{
	public:
		EStateTreeExpressionOperand Operand; // 0x18(0x1)
		int8_t DeltaIndent; // 0x19(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x1A(0x2) UNKNOWN PROPERTY
		FStateTreeConsiderationResponseCurve ResponseCurve; // 0x1C(0xC)
	};


	// Struct StateTreeModule.StateTreeConsiderationResponseCurve
	// Size: 0xC (0xC - 0x0)
	struct FStateTreeConsiderationResponseCurve	
	{
	public:
		EAlphaBlendOption BlendOption; // 0x0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float RawScoreLowerBound; // 0x4(0x4)
		float RawScoreUpperBound; // 0x8(0x4)
	};


	// Struct StateTreeModule.StateTreeBlueprintConsiderationWrapper
	// Inherited from FStateTreeConsiderationBase -> FStateTreeNodeBase
	// Size: 0x8 (0x30 - 0x28)
	struct FStateTreeBlueprintConsiderationWrapper : public FStateTreeConsiderationBase	
	{
	public:
		UClass* ConsiderationClass; // 0x28(0x8)
	};


	// Struct StateTreeModule.StateTreeEvaluatorBase
	// Inherited from FStateTreeNodeBase
	// Size: 0x0 (0x18 - 0x18)
	struct FStateTreeEvaluatorBase : public FStateTreeNodeBase	
	{
	public:
	};


	// Struct StateTreeModule.StateTreeBlueprintEvaluatorWrapper
	// Inherited from FStateTreeEvaluatorBase -> FStateTreeNodeBase
	// Size: 0x8 (0x20 - 0x18)
	struct FStateTreeBlueprintEvaluatorWrapper : public FStateTreeEvaluatorBase	
	{
	public:
		UClass* EvaluatorClass; // 0x18(0x8)
	};


	// Struct StateTreeModule.StateTreeBlueprintTaskWrapper
	// Inherited from FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x8 (0x28 - 0x20)
	struct FStateTreeBlueprintTaskWrapper : public FStateTreeTaskBase	
	{
	public:
		UClass* TaskClass; // 0x20(0x8)
	};


	// Struct StateTreeModule.StateTreeCompareIntConditionInstanceData
	// Size: 0x8 (0x8 - 0x0)
	struct FStateTreeCompareIntConditionInstanceData	
	{
	public:
		int32_t Left; // 0x0(0x4)
		int32_t Right; // 0x4(0x4)
	};


	// Struct StateTreeModule.StateTreeConditionCommonBase
	// Inherited from FStateTreeConditionBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FStateTreeConditionCommonBase : public FStateTreeConditionBase	
	{
	public:
	};


	// Struct StateTreeModule.StateTreeCompareIntCondition
	// Inherited from FStateTreeConditionCommonBase -> FStateTreeConditionBase -> FStateTreeNodeBase
	// Size: 0x8 (0x28 - 0x20)
	struct FStateTreeCompareIntCondition : public FStateTreeConditionCommonBase	
	{
	public:
		bool bInvert; // 0x20(0x1)
		EGenericAICheck Operator; // 0x21(0x1)
		unsigned char UnknownData00_7[0x6]; // 0x22(0x6) UNKNOWN PROPERTY
	};


	// Struct StateTreeModule.StateTreeCompareFloatConditionInstanceData
	// Size: 0x10 (0x10 - 0x0)
	struct FStateTreeCompareFloatConditionInstanceData	
	{
	public:
		double Left; // 0x0(0x8)
		double Right; // 0x8(0x8)
	};


	// Struct StateTreeModule.StateTreeCompareFloatCondition
	// Inherited from FStateTreeConditionCommonBase -> FStateTreeConditionBase -> FStateTreeNodeBase
	// Size: 0x8 (0x28 - 0x20)
	struct FStateTreeCompareFloatCondition : public FStateTreeConditionCommonBase	
	{
	public:
		bool bInvert; // 0x20(0x1)
		EGenericAICheck Operator; // 0x21(0x1)
		unsigned char UnknownData00_7[0x6]; // 0x22(0x6) UNKNOWN PROPERTY
	};


	// Struct StateTreeModule.StateTreeCompareBoolConditionInstanceData
	// Size: 0x2 (0x2 - 0x0)
	struct FStateTreeCompareBoolConditionInstanceData	
	{
	public:
		bool bLeft; // 0x0(0x1)
		bool bRight; // 0x1(0x1)
	};


	// Struct StateTreeModule.StateTreeCompareBoolCondition
	// Inherited from FStateTreeConditionCommonBase -> FStateTreeConditionBase -> FStateTreeNodeBase
	// Size: 0x8 (0x28 - 0x20)
	struct FStateTreeCompareBoolCondition : public FStateTreeConditionCommonBase	
	{
	public:
		bool bInvert; // 0x20(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x21(0x7) UNKNOWN PROPERTY
	};


	// Struct StateTreeModule.StateTreeCompareEnumConditionInstanceData
	// Size: 0x20 (0x20 - 0x0)
	struct FStateTreeCompareEnumConditionInstanceData	
	{
	public:
		FStateTreeAnyEnum Left; // 0x0(0x10)
		FStateTreeAnyEnum Right; // 0x10(0x10)
	};


	// Struct StateTreeModule.StateTreeCompareEnumCondition
	// Inherited from FStateTreeConditionCommonBase -> FStateTreeConditionBase -> FStateTreeNodeBase
	// Size: 0x8 (0x28 - 0x20)
	struct FStateTreeCompareEnumCondition : public FStateTreeConditionCommonBase	
	{
	public:
		bool bInvert; // 0x20(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x21(0x7) UNKNOWN PROPERTY
	};


	// Struct StateTreeModule.StateTreeCompareDistanceConditionInstanceData
	// Size: 0x38 (0x38 - 0x0)
	struct FStateTreeCompareDistanceConditionInstanceData	
	{
	public:
		FVector Source; // 0x0(0x18)
		FVector Target; // 0x18(0x18)
		double Distance; // 0x30(0x8)
	};


	// Struct StateTreeModule.StateTreeCompareDistanceCondition
	// Inherited from FStateTreeConditionCommonBase -> FStateTreeConditionBase -> FStateTreeNodeBase
	// Size: 0x8 (0x28 - 0x20)
	struct FStateTreeCompareDistanceCondition : public FStateTreeConditionCommonBase	
	{
	public:
		bool bInvert; // 0x20(0x1)
		EGenericAICheck Operator; // 0x21(0x1)
		unsigned char UnknownData00_7[0x6]; // 0x22(0x6) UNKNOWN PROPERTY
	};


	// Struct StateTreeModule.StateTreeRandomConditionInstanceData
	// Size: 0x4 (0x4 - 0x0)
	struct FStateTreeRandomConditionInstanceData	
	{
	public:
		float Threshold; // 0x0(0x4)
	};


	// Struct StateTreeModule.StateTreeRandomCondition
	// Inherited from FStateTreeConditionCommonBase -> FStateTreeConditionBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FStateTreeRandomCondition : public FStateTreeConditionCommonBase	
	{
	public:
	};


	// Struct StateTreeModule.GameplayTagMatchConditionInstanceData
	// Size: 0x28 (0x28 - 0x0)
	struct FGameplayTagMatchConditionInstanceData	
	{
	public:
		FGameplayTagContainer TagContainer; // 0x0(0x20)
		FGameplayTag Tag; // 0x20(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
	};


	// Struct StateTreeModule.GameplayTagMatchCondition
	// Inherited from FStateTreeConditionCommonBase -> FStateTreeConditionBase -> FStateTreeNodeBase
	// Size: 0x8 (0x28 - 0x20)
	struct FGameplayTagMatchCondition : public FStateTreeConditionCommonBase	
	{
	public:
		bool bExactMatch; // 0x20(0x1)
		bool bInvert; // 0x21(0x1)
		unsigned char UnknownData00_7[0x6]; // 0x22(0x6) UNKNOWN PROPERTY
	};


	// Struct StateTreeModule.GameplayTagContainerMatchConditionInstanceData
	// Size: 0x40 (0x40 - 0x0)
	struct FGameplayTagContainerMatchConditionInstanceData	
	{
	public:
		FGameplayTagContainer TagContainer; // 0x0(0x20)
		FGameplayTagContainer OtherContainer; // 0x20(0x20)
	};


	// Struct StateTreeModule.GameplayTagContainerMatchCondition
	// Inherited from FStateTreeConditionCommonBase -> FStateTreeConditionBase -> FStateTreeNodeBase
	// Size: 0x8 (0x28 - 0x20)
	struct FGameplayTagContainerMatchCondition : public FStateTreeConditionCommonBase	
	{
	public:
		EGameplayContainerMatchType MatchType; // 0x20(0x1)
		bool bExactMatch; // 0x21(0x1)
		bool bInvert; // 0x22(0x1)
		unsigned char UnknownData00_7[0x5]; // 0x23(0x5) UNKNOWN PROPERTY
	};


	// Struct StateTreeModule.GameplayTagQueryConditionInstanceData
	// Size: 0x20 (0x20 - 0x0)
	struct FGameplayTagQueryConditionInstanceData	
	{
	public:
		FGameplayTagContainer TagContainer; // 0x0(0x20)
	};


	// Struct StateTreeModule.GameplayTagQueryCondition
	// Inherited from FStateTreeConditionCommonBase -> FStateTreeConditionBase -> FStateTreeNodeBase
	// Size: 0x50 (0x70 - 0x20)
	struct FGameplayTagQueryCondition : public FStateTreeConditionCommonBase	
	{
	public:
		FGameplayTagQuery TagQuery; // 0x20(0x48)
		bool bInvert; // 0x68(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x69(0x7) UNKNOWN PROPERTY
	};


	// Struct StateTreeModule.StateTreeObjectIsValidConditionInstanceData
	// Size: 0x8 (0x8 - 0x0)
	struct FStateTreeObjectIsValidConditionInstanceData	
	{
	public:
		UObject* Object; // 0x0(0x8)
	};


	// Struct StateTreeModule.StateTreeObjectIsValidCondition
	// Inherited from FStateTreeConditionCommonBase -> FStateTreeConditionBase -> FStateTreeNodeBase
	// Size: 0x8 (0x28 - 0x20)
	struct FStateTreeObjectIsValidCondition : public FStateTreeConditionCommonBase	
	{
	public:
		bool bInvert; // 0x20(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x21(0x7) UNKNOWN PROPERTY
	};


	// Struct StateTreeModule.StateTreeObjectEqualsConditionInstanceData
	// Size: 0x10 (0x10 - 0x0)
	struct FStateTreeObjectEqualsConditionInstanceData	
	{
	public:
		UObject* Left; // 0x0(0x8)
		UObject* Right; // 0x8(0x8)
	};


	// Struct StateTreeModule.StateTreeObjectEqualsCondition
	// Inherited from FStateTreeConditionCommonBase -> FStateTreeConditionBase -> FStateTreeNodeBase
	// Size: 0x8 (0x28 - 0x20)
	struct FStateTreeObjectEqualsCondition : public FStateTreeConditionCommonBase	
	{
	public:
		bool bInvert; // 0x20(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x21(0x7) UNKNOWN PROPERTY
	};


	// Struct StateTreeModule.StateTreeObjectIsChildOfClassConditionInstanceData
	// Size: 0x10 (0x10 - 0x0)
	struct FStateTreeObjectIsChildOfClassConditionInstanceData	
	{
	public:
		UObject* Object; // 0x0(0x8)
		UClass* Class; // 0x8(0x8)
	};


	// Struct StateTreeModule.StateTreeObjectIsChildOfClassCondition
	// Inherited from FStateTreeConditionCommonBase -> FStateTreeConditionBase -> FStateTreeNodeBase
	// Size: 0x8 (0x28 - 0x20)
	struct FStateTreeObjectIsChildOfClassCondition : public FStateTreeConditionCommonBase	
	{
	public:
		bool bInvert; // 0x20(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x21(0x7) UNKNOWN PROPERTY
	};


	// Struct StateTreeModule.StateTreeFloatConsiderationInstanceData
	// Size: 0x4 (0x4 - 0x0)
	struct FStateTreeFloatConsiderationInstanceData	
	{
	public:
		float RawScore; // 0x0(0x4)
	};


	// Struct StateTreeModule.StateTreeConsiderationCommonBase
	// Inherited from FStateTreeConsiderationBase -> FStateTreeNodeBase
	// Size: 0x0 (0x28 - 0x28)
	struct FStateTreeConsiderationCommonBase : public FStateTreeConsiderationBase	
	{
	public:
	};


	// Struct StateTreeModule.StateTreeFloatConsideration
	// Inherited from FStateTreeConsiderationCommonBase -> FStateTreeConsiderationBase -> FStateTreeNodeBase
	// Size: 0x0 (0x28 - 0x28)
	struct FStateTreeFloatConsideration : public FStateTreeConsiderationCommonBase	
	{
	public:
	};


	// Struct StateTreeModule.StateTreeEvaluatorCommonBase
	// Inherited from FStateTreeEvaluatorBase -> FStateTreeNodeBase
	// Size: 0x0 (0x18 - 0x18)
	struct FStateTreeEvaluatorCommonBase : public FStateTreeEvaluatorBase	
	{
	public:
	};


	// Struct StateTreeModule.StateTreeEventQueue
	// Size: 0x10 (0x10 - 0x0)
	struct FStateTreeEventQueue	
	{
	public:
		TArray<FStateTreeSharedEvent> SharedEvents; // 0x0(0x10)
	};


	// Struct StateTreeModule.StateTreeInstanceObjectWrapper
	// Size: 0x8 (0x8 - 0x0)
	struct FStateTreeInstanceObjectWrapper	
	{
	public:
		UObject* InstanceObject; // 0x0(0x8)
	};


	// Struct StateTreeModule.StateTreeTemporaryInstanceData
	// Size: 0x28 (0x28 - 0x0)
	struct FStateTreeTemporaryInstanceData	
	{
	public:
		UStateTree* StateTree; // 0x0(0x8)
		FStateTreeStateHandle RootState; // 0x8(0x2)
		FStateTreeDataHandle DataHandle; // 0xA(0x6)
		FStateTreeIndex16 OwnerNodeIndex; // 0x10(0x2)
		unsigned char UnknownData00_6[0x6]; // 0x12(0x6) UNKNOWN PROPERTY
		FInstancedStruct Instance; // 0x18(0x10)
	};


	// Struct StateTreeModule.StateTreeInstanceStorage
	// Size: 0x90 (0x90 - 0x0)
	struct FStateTreeInstanceStorage	
	{
	public:
		FInstancedStructContainer InstanceStructs; // 0x0(0x10)
		FStateTreeExecutionState ExecutionState; // 0x10(0x38)
		TArray<FStateTreeTemporaryInstanceData> TemporaryInstances; // 0x48(0x10)
		unsigned char UnknownData00_6[0x18]; // 0x58(0x18) UNKNOWN PROPERTY
		TArray<FStateTreeTransitionRequest> TransitionRequests; // 0x70(0x10)
		FInstancedPropertyBag GlobalParameters; // 0x80(0x10)
	};


	// Struct StateTreeModule.StateTreeBindableStructDesc
	// Size: 0x18 (0x18 - 0x0)
	struct FStateTreeBindableStructDesc	
	{
	public:
		UStruct* Struct; // 0x0(0x8)
		FName Name; // 0x8(0x4)
		FStateTreeDataHandle DataHandle; // 0xC(0x6)
		EStateTreeBindableStructSource DataSource; // 0x12(0x1)
		unsigned char UnknownData00_7[0x5]; // 0x13(0x5) UNKNOWN PROPERTY
	};


	// Struct StateTreeModule.StateTreePropertyPathSegment
	// Size: 0x10 (0x10 - 0x0)
	struct FStateTreePropertyPathSegment	
	{
	public:
		FName Name; // 0x0(0x4)
		int32_t ArrayIndex; // 0x4(0x4)
		UStruct* InstanceStruct; // 0x8(0x8)
	};


	// Struct StateTreeModule.StateTreePropertyPath
	// Size: 0x10 (0x10 - 0x0)
	struct FStateTreePropertyPath	
	{
	public:
		TArray<FStateTreePropertyPathSegment> Segments; // 0x0(0x10)
	};


	// Struct StateTreeModule.StateTreeEditorPropertyPath
	// Size: 0x20 (0x20 - 0x0)
	struct FStateTreeEditorPropertyPath	
	{
	public:
		FGuid StructID; // 0x0(0x10)
		TArray<FString> Path; // 0x10(0x10)
	};


	// Struct StateTreeModule.StateTreePropertyPathBinding
	// Size: 0x28 (0x28 - 0x0)
	struct FStateTreePropertyPathBinding	
	{
	public:
		FStateTreePropertyPath SourcePropertyPath; // 0x0(0x10)
		FStateTreePropertyPath TargetPropertyPath; // 0x10(0x10)
		FStateTreeDataHandle SourceDataHandle; // 0x20(0x6)
		unsigned char UnknownData00_7[0x2]; // 0x26(0x2) UNKNOWN PROPERTY
	};


	// Struct StateTreeModule.StateTreePropertyRefPath
	// Size: 0x18 (0x18 - 0x0)
	struct FStateTreePropertyRefPath	
	{
	public:
		FStateTreePropertyPath SourcePropertyPath; // 0x0(0x10)
		FStateTreeDataHandle SourceDataHandle; // 0x10(0x6)
		unsigned char UnknownData00_7[0x2]; // 0x16(0x2) UNKNOWN PROPERTY
	};


	// Struct StateTreeModule.StateTreePropertySegment
	// Size: 0xC (0xC - 0x0)
	struct FStateTreePropertySegment	
	{
	public:
		FName Name; // 0x0(0x4)
		FStateTreeIndex16 ArrayIndex; // 0x4(0x2)
		FStateTreeIndex16 NextIndex; // 0x6(0x2)
		EStateTreePropertyAccessType Type; // 0x8(0x1)
		unsigned char UnknownData00_7[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
	};


	// Struct StateTreeModule.StateTreePropertyBinding
	// Size: 0x1C (0x1C - 0x0)
	struct FStateTreePropertyBinding	
	{
	public:
		FStateTreePropertySegment SourcePath; // 0x0(0xC)
		FStateTreePropertySegment TargetPath; // 0xC(0xC)
		FStateTreeIndex16 SourceStructIndex; // 0x18(0x2)
		EStateTreePropertyCopyType CopyType; // 0x1A(0x1)
		unsigned char UnknownData00_7[0x1]; // 0x1B(0x1) UNKNOWN PROPERTY
	};


	// Struct StateTreeModule.StateTreePropertyIndirection
	// Size: 0x18 (0x18 - 0x0)
	struct FStateTreePropertyIndirection	
	{
	public:
		FStateTreeIndex16 ArrayIndex; // 0x0(0x2)
		uint16_t Offset; // 0x2(0x2)
		FStateTreeIndex16 NextIndex; // 0x4(0x2)
		EStateTreePropertyAccessType Type; // 0x6(0x1)
		unsigned char UnknownData00_6[0x1]; // 0x7(0x1) UNKNOWN PROPERTY
		UStruct* InstanceStruct; // 0x8(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x10(0x8) UNKNOWN PROPERTY
	};


	// Struct StateTreeModule.StateTreePropertyCopy
	// Size: 0x58 (0x58 - 0x0)
	struct FStateTreePropertyCopy	
	{
	public:
		FStateTreePropertyIndirection SourceIndirection; // 0x0(0x18)
		FStateTreePropertyIndirection TargetIndirection; // 0x18(0x18)
		unsigned char UnknownData00_6[0x10]; // 0x30(0x10) UNKNOWN PROPERTY
		UStruct* SourceStructType; // 0x40(0x8)
		int32_t CopySize; // 0x48(0x4)
		FStateTreeDataHandle SourceDataHandle; // 0x4C(0x6)
		EStateTreePropertyCopyType Type; // 0x52(0x1)
		unsigned char UnknownData01_6[0x1]; // 0x53(0x1) UNKNOWN PROPERTY
		FStateTreeIndex16 SourceStructIndex; // 0x54(0x2)
		unsigned char UnknownData02_7[0x2]; // 0x56(0x2) UNKNOWN PROPERTY
	};


	// Struct StateTreeModule.StateTreePropertyCopyBatch
	// Size: 0x20 (0x20 - 0x0)
	struct FStateTreePropertyCopyBatch	
	{
	public:
		FStateTreeBindableStructDesc TargetStruct; // 0x0(0x18)
		FStateTreeIndex16 BindingsBegin; // 0x18(0x2)
		FStateTreeIndex16 BindingsEnd; // 0x1A(0x2)
		FStateTreeIndex16 PropertyFunctionsBegin; // 0x1C(0x2)
		FStateTreeIndex16 PropertyFunctionsEnd; // 0x1E(0x2)
	};


	// Struct StateTreeModule.StateTreePropertyAccess
	// Size: 0x30 (0x30 - 0x0)
	struct FStateTreePropertyAccess	
	{
	public:
		FStateTreePropertyIndirection SourceIndirection; // 0x0(0x18)
		unsigned char UnknownData00_6[0x8]; // 0x18(0x8) UNKNOWN PROPERTY
		UStruct* SourceStructType; // 0x20(0x8)
		FStateTreeDataHandle SourceDataHandle; // 0x28(0x6)
		unsigned char UnknownData01_7[0x2]; // 0x2E(0x2) UNKNOWN PROPERTY
	};


	// Struct StateTreeModule.StateTreePropertyBindings
	// Size: 0x78 (0x78 - 0x0)
	struct FStateTreePropertyBindings	
	{
	public:
		TArray<FStateTreeBindableStructDesc> SourceStructs; // 0x0(0x10)
		TArray<FStateTreePropertyCopyBatch> CopyBatches; // 0x10(0x10)
		TArray<FStateTreePropertyPathBinding> PropertyPathBindings; // 0x20(0x10)
		TArray<FStateTreePropertyCopy> PropertyCopies; // 0x30(0x10)
		TArray<FStateTreePropertyRefPath> PropertyReferencePaths; // 0x40(0x10)
		TArray<FStateTreePropertyAccess> PropertyAccesses; // 0x50(0x10)
		TArray<FStateTreePropertyIndirection> PropertyIndirections; // 0x60(0x10)
		unsigned char UnknownData00_7[0x8]; // 0x70(0x8) UNKNOWN PROPERTY
	};


	// Struct StateTreeModule.StateTreeRandomTimeDuration
	// Size: 0x4 (0x4 - 0x0)
	struct FStateTreeRandomTimeDuration	
	{
	public:
		uint16_t duration; // 0x0(0x2)
		uint16_t RandomVariance; // 0x2(0x2)
	};


	// Struct StateTreeModule.CompactEventDesc
	// Size: 0x10 (0x10 - 0x0)
	struct FCompactEventDesc	
	{
	public:
		UScriptStruct* PayloadStruct; // 0x0(0x8)
		FGameplayTag Tag; // 0x8(0x4)
		unsigned char UnknownData00_7[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
	};


	// Struct StateTreeModule.CompactStateTransition
	// Size: 0x20 (0x20 - 0x0)
	struct FCompactStateTransition	
	{
	public:
		FCompactEventDesc RequiredEvent; // 0x0(0x10)
		uint16_t ConditionsBegin; // 0x10(0x2)
		FStateTreeStateHandle State; // 0x12(0x2)
		FStateTreeRandomTimeDuration Delay; // 0x14(0x4)
		EStateTreeTransitionTrigger Trigger; // 0x18(0x1)
		EStateTreeTransitionPriority Priority; // 0x19(0x1)
		EStateTreeSelectionFallback Fallback; // 0x1A(0x1)
		char ConditionsNum; // 0x1B(0x1)
		bool bTransitionEnabled : 1; // 0x1C:0(0x1)
		bool bConsumeEventOnSelect : 1; // 0x1C:1(0x1)
		unsigned char UnknownData00_7[0x3]; // 0x1D(0x3) UNKNOWN PROPERTY
	};


	// Struct StateTreeModule.CompactStateTreeState
	// Size: 0x48 (0x48 - 0x0)
	struct FCompactStateTreeState	
	{
	public:
		FCompactEventDesc RequiredEventToEnter; // 0x0(0x10)
		FName Name; // 0x10(0x4)
		FGameplayTag Tag; // 0x14(0x4)
		UStateTree* LinkedAsset; // 0x18(0x8)
		FStateTreeStateHandle LinkedState; // 0x20(0x2)
		FStateTreeStateHandle Parent; // 0x22(0x2)
		uint16_t ChildrenBegin; // 0x24(0x2)
		uint16_t ChildrenEnd; // 0x26(0x2)
		uint16_t EnterConditionsBegin; // 0x28(0x2)
		uint16_t UtilityConsiderationsBegin; // 0x2A(0x2)
		uint16_t TransitionsBegin; // 0x2C(0x2)
		uint16_t TasksBegin; // 0x2E(0x2)
		FStateTreeIndex16 ParameterTemplateIndex; // 0x30(0x2)
		FStateTreeDataHandle ParameterDataHandle; // 0x32(0x6)
		FStateTreeIndex16 ParameterBindingsBatch; // 0x38(0x2)
		FStateTreeIndex16 EventDataIndex; // 0x3A(0x2)
		char EnterConditionsNum; // 0x3C(0x1)
		char UtilityConsiderationsNum; // 0x3D(0x1)
		char TransitionsNum; // 0x3E(0x1)
		char TasksNum; // 0x3F(0x1)
		char InstanceDataNum; // 0x40(0x1)
		char Depth; // 0x41(0x1)
		EStateTreeStateType Type; // 0x42(0x1)
		EStateTreeStateSelectionBehavior SelectionBehavior; // 0x43(0x1)
		bool bHasTransitionTasks : 1; // 0x44:0(0x1)
		bool bCheckPrerequisitesWhenActivatingChildDirectly : 1; // 0x44:1(0x1)
		bool bEnabled : 1; // 0x44:2(0x1)
		bool bConsumeEventOnSelect : 1; // 0x44:3(0x1)
		unsigned char UnknownData00_7[0x3]; // 0x45(0x3) UNKNOWN PROPERTY
	};


	// Struct StateTreeModule.CompactStateTreeParameters
	// Size: 0x10 (0x10 - 0x0)
	struct FCompactStateTreeParameters	
	{
	public:
		FInstancedPropertyBag Parameters; // 0x0(0x10)
	};


	// Struct StateTreeModule.StateTreeStateIdToHandle
	// Size: 0x14 (0x14 - 0x0)
	struct FStateTreeStateIdToHandle	
	{
	public:
		FGuid ID; // 0x0(0x10)
		FStateTreeStateHandle Handle; // 0x10(0x2)
		unsigned char UnknownData00_7[0x2]; // 0x12(0x2) UNKNOWN PROPERTY
	};


	// Struct StateTreeModule.StateTreeNodeIdToIndex
	// Size: 0x14 (0x14 - 0x0)
	struct FStateTreeNodeIdToIndex	
	{
	public:
		FGuid ID; // 0x0(0x10)
		FStateTreeIndex16 Index; // 0x10(0x2)
		unsigned char UnknownData00_7[0x2]; // 0x12(0x2) UNKNOWN PROPERTY
	};


	// Struct StateTreeModule.StateTreeTransitionIdToIndex
	// Size: 0x14 (0x14 - 0x0)
	struct FStateTreeTransitionIdToIndex	
	{
	public:
		FGuid ID; // 0x0(0x10)
		FStateTreeIndex16 Index; // 0x10(0x2)
		unsigned char UnknownData00_7[0x2]; // 0x12(0x2) UNKNOWN PROPERTY
	};


	// Struct StateTreeModule.StateTreeStructRef
	// Size: 0x10 (0x10 - 0x0)
	struct FStateTreeStructRef	
	{
	public:
		unsigned char UnknownData00_2[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
	};


	// Struct StateTreeModule.StateTreeStateLink
	// Size: 0x2 (0x2 - 0x0)
	struct FStateTreeStateLink	
	{
	public:
		FStateTreeStateHandle StateHandle; // 0x0(0x2)
	};


	// Struct StateTreeModule.StateTreeDebugTextTaskInstanceData
	// Size: 0x8 (0x8 - 0x0)
	struct FStateTreeDebugTextTaskInstanceData	
	{
	public:
		AActor* ReferenceActor; // 0x0(0x8)
	};


	// Struct StateTreeModule.StateTreeDebugTextTask
	// Inherited from FStateTreeTaskCommonBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x38 (0x58 - 0x20)
	struct FStateTreeDebugTextTask : public FStateTreeTaskCommonBase	
	{
	public:
		FString Text; // 0x20(0x10)
		FColor TextColor; // 0x30(0x4)
		float FontScale; // 0x34(0x4)
		FVector Offset; // 0x38(0x18)
		bool bEnabled; // 0x50(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x51(0x7) UNKNOWN PROPERTY
	};


	// Struct StateTreeModule.StateTreeDelayTaskInstanceData
	// Size: 0x10 (0x10 - 0x0)
	struct FStateTreeDelayTaskInstanceData	
	{
	public:
		float duration; // 0x0(0x4)
		float RandomDeviation; // 0x4(0x4)
		bool bRunForever; // 0x8(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x9(0x7) UNKNOWN PROPERTY
	};


	// Struct StateTreeModule.StateTreeDelayTask
	// Inherited from FStateTreeTaskCommonBase -> FStateTreeTaskBase -> FStateTreeNodeBase
	// Size: 0x0 (0x20 - 0x20)
	struct FStateTreeDelayTask : public FStateTreeTaskCommonBase	
	{
	public:
	};

}
