#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: GameplayStateTreeModule
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class GameplayStateTreeModule.BTTask_RunDynamicStateTree
	// Inherited from UBTTaskNode -> UBTNode -> UObject
	// Size: 0x58 (0xC8 - 0x70)
	class UBTTask_RunDynamicStateTree : public UBTTaskNode	
	{
	public:
		FStateTreeReference StateTreeRef; // 0x70(0x28)
		FStateTreeInstanceData InstanceData; // 0x98(0x10)
		FGameplayTag InjectionTag; // 0xA8(0x4)
		unsigned char UnknownData00_7[0x1C]; // 0xAC(0x1C) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayStateTreeModule.BTTask_RunDynamicStateTree");
			return ret;
		}
	};


	// Class GameplayStateTreeModule.BTTask_RunStateTree
	// Inherited from UBTTaskNode -> UBTNode -> UObject
	// Size: 0x48 (0xB8 - 0x70)
	class UBTTask_RunStateTree : public UBTTaskNode	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x70(0x8) UNKNOWN PROPERTY
		FStateTreeReference StateTreeRef; // 0x78(0x28)
		FStateTreeInstanceData InstanceData; // 0xA0(0x10)
		float Interval; // 0xB0(0x4)
		float RandomDeviation; // 0xB4(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayStateTreeModule.BTTask_RunStateTree");
			return ret;
		}
	};


	// Class GameplayStateTreeModule.StateTreeComponent
	// Inherited from UBrainComponent -> UActorComponent -> UObject
	// Size: 0x78 (0x170 - 0xF8)
	class UStateTreeComponent : public UBrainComponent	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0xF8(0x10) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnStateTreeRunStatusChanged; // 0x108(0x10)
		FStateTreeReference StateTreeRef; // 0x118(0x28)
		FStateTreeReferenceOverrides LinkedStateTreeOverrides; // 0x140(0x10)
		bool bStartLogicAutomatically; // 0x150(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x151(0x7) UNKNOWN PROPERTY
		FStateTreeInstanceData InstanceData; // 0x158(0x10)
		unsigned char UnknownData02_7[0x8]; // 0x168(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayStateTreeModule.StateTreeComponent");
			return ret;
		}

		void SetStartLogicAutomatically(bool bInStartLogicAutomatically); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DC61808(relative to base address)
		void SendStateTreeEvent(FStateTreeEvent& Event); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DC6171C(relative to base address)
		EStateTreeRunStatus GetStateTreeRunStatus(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DC616F4(relative to base address)
	};


	// Class GameplayStateTreeModule.StateTreeAIComponent
	// Inherited from UStateTreeComponent -> UBrainComponent -> UActorComponent -> UObject
	// Size: 0x0 (0x170 - 0x170)
	class UStateTreeAIComponent : public UStateTreeComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayStateTreeModule.StateTreeAIComponent");
			return ret;
		}
	};


	// Class GameplayStateTreeModule.StateTreeComponentSchema
	// Inherited from UStateTreeSchema -> UObject
	// Size: 0x30 (0x58 - 0x28)
	class UStateTreeComponentSchema : public UStateTreeSchema	
	{
	public:
		UClass* ContextActorClass; // 0x28(0x8)
		FStateTreeExternalDataDesc ContextActorDataDesc; // 0x30(0x18)
		TArray<FStateTreeExternalDataDesc> ContextDataDescs; // 0x48(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayStateTreeModule.StateTreeComponentSchema");
			return ret;
		}
	};


	// Class GameplayStateTreeModule.StateTreeAIComponentSchema
	// Inherited from UStateTreeComponentSchema -> UStateTreeSchema -> UObject
	// Size: 0x8 (0x60 - 0x58)
	class UStateTreeAIComponentSchema : public UStateTreeComponentSchema	
	{
	public:
		UClass* AIControllerClass; // 0x58(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayStateTreeModule.StateTreeAIComponentSchema");
			return ret;
		}
	};

}
