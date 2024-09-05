#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: StateTreeModule
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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
		unsigned char UnknownData01_7[0x7]; // 0x31(0x7) UNKNOWN PROPERTY

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
		unsigned char UnknownData02_3[0x10]; // 0x28(0x10) UNKNOWN PROPERTY
		UObject CachedOwner; // 0x38(0x8)
		UStateTree CachedFrameStateTree; // 0x40(0x8)
		unsigned char UnknownData03_7[0x8]; // 0x48(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/StateTreeModule.StateTreeNodeBlueprintBase");
			return ret;
		}

		void SendEvent(FStateTreeEvent& Event); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF4145A2918
		void RequestTransition(FStateTreeStateLink& TargetState, EStateTreeTransitionPriority Priority); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF4145A2838
		FText ReceiveGetDescription(TEnumAsByte Formatting); // Flags: Event|Protected|BlueprintEvent|Const 0x7FF4145A2758
		bool IsPropertyRefValid(FStateTreeBlueprintPropertyRef& PropertyRef); // Flags: Final|Native|Public|HasOutParms|Const 0x7FF4145A2678
		void GetPropertyReference(FStateTreeBlueprintPropertyRef& PropertyRef); // Flags: Final|Native|Public|HasOutParms|Const 0x7FF4145A2598
		FText GetPropertyDescriptionByPropertyName(FName PropertyName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145A24B8
	};


	// Class StateTreeModule.StateTreeConditionBlueprintBase
	// Inherited from UStateTreeNodeBlueprintBase -> UObject
	// Size: 0x8 (0x58 - 0x50)
	class UStateTreeConditionBlueprintBase : public UStateTreeNodeBlueprintBase	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x50(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/StateTreeModule.StateTreeConditionBlueprintBase");
			return ret;
		}

		bool ReceiveTestCondition(); // Flags: Event|Public|BlueprintEvent|Const 0x7FF4145A29F8
	};


	// Class StateTreeModule.StateTreeConsiderationBlueprintBase
	// Inherited from UStateTreeNodeBlueprintBase -> UObject
	// Size: 0x8 (0x58 - 0x50)
	class UStateTreeConsiderationBlueprintBase : public UStateTreeNodeBlueprintBase	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x50(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/StateTreeModule.StateTreeConsiderationBlueprintBase");
			return ret;
		}

		float ReceiveComputeRawScore(); // Flags: Event|Public|BlueprintEvent|Const 0x7FF4145A2AD8
	};


	// Class StateTreeModule.StateTreeEvaluatorBlueprintBase
	// Inherited from UStateTreeNodeBlueprintBase -> UObject
	// Size: 0x8 (0x58 - 0x50)
	class UStateTreeEvaluatorBlueprintBase : public UStateTreeNodeBlueprintBase	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x50(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/StateTreeModule.StateTreeEvaluatorBlueprintBase");
			return ret;
		}

		void ReceiveTreeStop(); // Flags: Event|Public|BlueprintEvent 0x7FF4145A2D78
		void ReceiveTreeStart(); // Flags: Event|Public|BlueprintEvent 0x7FF4145A2C98
		void ReceiveTick(float DeltaTime); // Flags: Event|Public|BlueprintEvent 0x7FF4145A2BB8
	};


	// Class StateTreeModule.StateTreeTaskBlueprintBase
	// Inherited from UStateTreeNodeBlueprintBase -> UObject
	// Size: 0x8 (0x58 - 0x50)
	class UStateTreeTaskBlueprintBase : public UStateTreeNodeBlueprintBase	
	{
	public:
		unsigned char UnknownData03_3[0x1]; // 0x50(0x1) UNKNOWN PROPERTY
		bool bShouldStateChangeOnReselect : 1; // 0x51:0(0x1)
		unsigned char UnknownBit04 : 1; // 0x51:1(0x1) UNKNOWN PROPERTY
		bool bShouldCallTickOnlyOnEvents : 1; // 0x51:2(0x1)
		bool bShouldCopyBoundPropertiesOnTick : 1; // 0x51:3(0x1)
		bool bShouldCopyBoundPropertiesOnExitState : 1; // 0x51:4(0x1)
		unsigned char UnknownData05_7[0x6]; // 0x52(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/StateTreeModule.StateTreeTaskBlueprintBase");
			return ret;
		}

		EStateTreeRunStatus ReceiveTick(float DeltaTime); // Flags: Event|Public|BlueprintEvent 0x7FF4145A3398
		void ReceiveStateCompleted(EStateTreeRunStatus CompletionStatus, FStateTreeActiveStates CompletedActiveStates); // Flags: Event|Public|BlueprintEvent 0x7FF4145A32B8
		void ReceiveLatentTick(float DeltaTime); // Flags: Event|Public|BlueprintEvent 0x7FF4145A31D8
		void ReceiveLatentEnterState(FStateTreeTransitionResult& TRANSITION); // Flags: Event|Public|HasOutParms|BlueprintEvent 0x7FF4145A30F8
		void ReceiveExitState(FStateTreeTransitionResult& TRANSITION); // Flags: Event|Public|HasOutParms|BlueprintEvent 0x7FF4145A3018
		EStateTreeRunStatus ReceiveEnterState(FStateTreeTransitionResult& TRANSITION); // Flags: Event|Public|HasOutParms|BlueprintEvent 0x7FF4145A2F38
		void FinishTask(bool bSucceeded); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF4145A2E58
	};


	// Class StateTreeModule.StateTree
	// Inherited from UDataAsset -> UObject
	// Size: 0x168 (0x198 - 0x30)
	class UStateTree : public UDataAsset	
	{
	public:
		uint32_t LastCompiledEditorDataHash; // 0x30(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
		UStateTreeSchema Schema; // 0x38(0x8)
		TArray States; // 0x40(0x10)
		TArray Transitions; // 0x50(0x10)
		FInstancedStructContainer Nodes; // 0x60(0x10)
		FStateTreeInstanceData DefaultInstanceData; // 0x70(0x10)
		FStateTreeInstanceData SharedInstanceData; // 0x80(0x10)
		unsigned char UnknownData05_6[0x18]; // 0x90(0x18) UNKNOWN PROPERTY
		TArray ContextDataDescs; // 0xA8(0x10)
		FStateTreePropertyBindings PropertyBindings; // 0xB8(0x78)
		TArray IDToStateMappings; // 0x130(0x10)
		TArray IDToNodeMappings; // 0x140(0x10)
		TArray IDToTransitionMappings; // 0x150(0x10)
		FInstancedPropertyBag Parameters; // 0x160(0x10)
		uint16_t NumContextData; // 0x170(0x2)
		uint16_t NumGlobalInstanceData; // 0x172(0x2)
		uint16_t EvaluatorsBegin; // 0x174(0x2)
		uint16_t EvaluatorsNum; // 0x176(0x2)
		uint16_t GlobalTasksBegin; // 0x178(0x2)
		uint16_t GlobalTasksNum; // 0x17A(0x2)
		bool bHasGlobalTransitionTasks; // 0x17C(0x1)
		unsigned char UnknownData06_6[0x3]; // 0x17D(0x3) UNKNOWN PROPERTY
		TArray ExternalDataDescs; // 0x180(0x10)
		unsigned char UnknownData07_7[0x8]; // 0x190(0x8) UNKNOWN PROPERTY

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
