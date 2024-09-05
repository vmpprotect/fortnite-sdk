#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: StateTreeModule
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class StateTreeModule.StateTreeSchemaProvider
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UStateTreeSchemaProvider : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/StateTreeModule.StateTreeSchemaProvider");
			return ret;
		}
	};


	// Class StateTreeModule.StateTreeSettings
	// Inherited from UDeveloperSettings -> UObject
	// Size: 0x8 (0x38 - 0x30)
	class UStateTreeSettings : public UDeveloperSettings	
	{
	public:
		bool bAutoStartDebuggerTracesOnNonEditorTargets; // 0x30(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x31(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/StateTreeModule.StateTreeSettings");
			return ret;
		}
	};


	// Class StateTreeModule.StateTreeNodeBlueprintBase
	// Inherited from UObject
	// Size: 0x28 (0x50 - 0x28)
	class UStateTreeNodeBlueprintBase : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0x28(0x10) UNKNOWN PROPERTY
		UObject* CachedOwner; // 0x38(0x8)
		UStateTree* CachedFrameStateTree; // 0x40(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x48(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/StateTreeModule.StateTreeNodeBlueprintBase");
			return ret;
		}

		void SendEvent(FStateTreeEvent& Event); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74CE0499C(relative to base address)
		void RequestTransition(FStateTreeStateLink& TargetState, EStateTreeTransitionPriority Priority); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74CE0483C(relative to base address)
		FText ReceiveGetDescription(TEnumAsByte<EStateTreeNodeFormatting> Formatting); // Flags: Event|Protected|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool IsPropertyRefValid(FStateTreeBlueprintPropertyRef& PropertyRef); // Flags: Final|Native|Public|HasOutParms|Const, Memory Exec: 0x7FF74CE04784(relative to base address)
		void GetPropertyReference(FStateTreeBlueprintPropertyRef& PropertyRef); // Flags: Final|Native|Public|HasOutParms|Const, Memory Exec: 0x7FF74CE045CC(relative to base address)
		FText GetPropertyDescriptionByPropertyName(FName PropertyName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74CE04538(relative to base address)
	};


	// Class StateTreeModule.StateTreeConditionBlueprintBase
	// Inherited from UStateTreeNodeBlueprintBase -> UObject
	// Size: 0x8 (0x58 - 0x50)
	class UStateTreeConditionBlueprintBase : public UStateTreeNodeBlueprintBase	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x50(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/StateTreeModule.StateTreeConditionBlueprintBase");
			return ret;
		}

		bool ReceiveTestCondition(); // Flags: Event|Public|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class StateTreeModule.StateTreeConsiderationBlueprintBase
	// Inherited from UStateTreeNodeBlueprintBase -> UObject
	// Size: 0x8 (0x58 - 0x50)
	class UStateTreeConsiderationBlueprintBase : public UStateTreeNodeBlueprintBase	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x50(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/StateTreeModule.StateTreeConsiderationBlueprintBase");
			return ret;
		}

		float ReceiveComputeRawScore(); // Flags: Event|Public|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class StateTreeModule.StateTreeEvaluatorBlueprintBase
	// Inherited from UStateTreeNodeBlueprintBase -> UObject
	// Size: 0x8 (0x58 - 0x50)
	class UStateTreeEvaluatorBlueprintBase : public UStateTreeNodeBlueprintBase	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x50(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/StateTreeModule.StateTreeEvaluatorBlueprintBase");
			return ret;
		}

		void ReceiveTreeStop(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveTreeStart(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveTick(float DeltaTime); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class StateTreeModule.StateTreeTaskBlueprintBase
	// Inherited from UStateTreeNodeBlueprintBase -> UObject
	// Size: 0x8 (0x58 - 0x50)
	class UStateTreeTaskBlueprintBase : public UStateTreeNodeBlueprintBase	
	{
	public:
		unsigned char UnknownData00_3[0x1]; // 0x50(0x1) UNKNOWN PROPERTY
		bool bShouldStateChangeOnReselect : 1; // 0x51:0(0x1)
		unsigned char UnknownBit01 : 1; // 0x51:1(0x1) UNKNOWN PROPERTY
		bool bShouldCallTickOnlyOnEvents : 1; // 0x51:2(0x1)
		bool bShouldCopyBoundPropertiesOnTick : 1; // 0x51:3(0x1)
		bool bShouldCopyBoundPropertiesOnExitState : 1; // 0x51:4(0x1)
		unsigned char UnknownData02_7[0x6]; // 0x52(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/StateTreeModule.StateTreeTaskBlueprintBase");
			return ret;
		}

		EStateTreeRunStatus ReceiveTick(float DeltaTime); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveStateCompleted(EStateTreeRunStatus CompletionStatus, FStateTreeActiveStates CompletedActiveStates); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveLatentTick(float DeltaTime); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveLatentEnterState(FStateTreeTransitionResult& TRANSITION); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveExitState(FStateTreeTransitionResult& TRANSITION); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		EStateTreeRunStatus ReceiveEnterState(FStateTreeTransitionResult& TRANSITION); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void FinishTask(bool bSucceeded); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF74CE044BC(relative to base address)
	};


	// Class StateTreeModule.StateTree
	// Inherited from UDataAsset -> UObject
	// Size: 0x168 (0x198 - 0x30)
	class UStateTree : public UDataAsset	
	{
	public:
		uint32_t LastCompiledEditorDataHash; // 0x30(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
		UStateTreeSchema* Schema; // 0x38(0x8)
		TArray<FCompactStateTreeState> States; // 0x40(0x10)
		TArray<FCompactStateTransition> Transitions; // 0x50(0x10)
		FInstancedStructContainer Nodes; // 0x60(0x10)
		FStateTreeInstanceData DefaultInstanceData; // 0x70(0x10)
		FStateTreeInstanceData SharedInstanceData; // 0x80(0x10)
		unsigned char UnknownData01_6[0x18]; // 0x90(0x18) UNKNOWN PROPERTY
		TArray<FStateTreeExternalDataDesc> ContextDataDescs; // 0xA8(0x10)
		FStateTreePropertyBindings PropertyBindings; // 0xB8(0x78)
		TArray<FStateTreeStateIdToHandle> IDToStateMappings; // 0x130(0x10)
		TArray<FStateTreeNodeIdToIndex> IDToNodeMappings; // 0x140(0x10)
		TArray<FStateTreeTransitionIdToIndex> IDToTransitionMappings; // 0x150(0x10)
		FInstancedPropertyBag Parameters; // 0x160(0x10)
		uint16_t NumContextData; // 0x170(0x2)
		uint16_t NumGlobalInstanceData; // 0x172(0x2)
		uint16_t EvaluatorsBegin; // 0x174(0x2)
		uint16_t EvaluatorsNum; // 0x176(0x2)
		uint16_t GlobalTasksBegin; // 0x178(0x2)
		uint16_t GlobalTasksNum; // 0x17A(0x2)
		bool bHasGlobalTransitionTasks; // 0x17C(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x17D(0x3) UNKNOWN PROPERTY
		TArray<FStateTreeExternalDataDesc> ExternalDataDescs; // 0x180(0x10)
		unsigned char UnknownData03_7[0x8]; // 0x190(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/StateTreeModule.StateTree");
			return ret;
		}
	};


	// Class StateTreeModule.StateTreeSchema
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UStateTreeSchema : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/StateTreeModule.StateTreeSchema");
			return ret;
		}
	};

}
