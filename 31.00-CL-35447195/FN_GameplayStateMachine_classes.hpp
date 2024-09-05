#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: GameplayStateMachine
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class GameplayStateMachine.GameplayState
	// Inherited from UObject
	// Size: 0x50 (0x78 - 0x28)
	class UGameplayState : public UObject	
	{
	public:
		FGameplayTag StateId; // 0x28(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
		FGameplayTagContainer StateRuntimeTags; // 0x30(0x20)
		bool bEvaluateTransition; // 0x50(0x1)
		bool bReplicates; // 0x51(0x1)
		bool bStateBegun; // 0x52(0x1)
		bool bStateEnded; // 0x53(0x1)
		float InitializationServerTime; // 0x54(0x4)
		float BeginStateDelay; // 0x58(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x5C(0x4) UNKNOWN PROPERTY
		UGameplayStateMachine CachedGameplayStateMachine; // 0x60(0x8)
		UGameplayStateMachineManager CachedStateMachineManager; // 0x68(0x8)
		UGameplayState Hack_StateToDelayProcess; // 0x70(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayStateMachine.GameplayState");
			return ret;
		}

		void UpdateStateEventServer(float DeltaTime); // Flags: Event|Protected|BlueprintEvent 0x7FF414C83C98
		void UpdateStateEventClient(float DeltaTime); // Flags: Event|Protected|BlueprintEvent 0x7FF414C83BB8
		void UpdateStateEvent(float DeltaTime); // Flags: Event|Protected|BlueprintEvent 0x7FF414C83AD8
		void RemoveStateRuntimeTag(FGameplayTag& RemovedTag); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414C839F8
		void MarkStateToEvaluateTransitions(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C83918
		void InitializeStateEventServer(FGameplayTag& PrevStateId); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414C83838
		void InitializeStateEventClient(FGameplayTag& PrevStateId); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414C83758
		void InitializeStateEvent(FGameplayTag& PrevStateId); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414C83678
		bool HasStateRuntimeTag(FGameplayTag& QueryTag); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414C83598
		bool HasAuthority(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C834B8
		FGameplayTagContainer GetStateRuntimeTags(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C833D8
		FGameplayTag GetStateId(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C832F8
		AActor GetOwningActor(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C83218
		UGameplayStateMachine GetGameplayStateMachine(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C83138
		void EndStateEventServer(FGameplayTag& NextStateId); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414C83058
		void EndStateEventClient(FGameplayTag& NextStateId); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414C82F78
		void EndStateEvent(FGameplayTag& NextStateId); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414C82E98
		void BeginStateEventServer(FGameplayTag& PrevStateId); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414C82DB8
		void BeginStateEventClient(FGameplayTag& PrevStateId); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414C82CD8
		void BeginStateEvent(FGameplayTag& PrevStateId); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414C82BF8
		void AddStateRuntimeTag(FGameplayTag& AddedTag); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414C82B18
	};


	// Class GameplayStateMachine.GameplayStateMachine
	// Inherited from UGameplayState -> UObject
	// Size: 0x50 (0xC8 - 0x78)
	class UGameplayStateMachine : public UGameplayState	
	{
	public:
		unsigned char UnknownData03_3[0x18]; // 0x78(0x18) UNKNOWN PROPERTY
		FGameplayTag StateMachineId; // 0x90(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x94(0x4) UNKNOWN PROPERTY
		FActiveGameplayStateData ActiveGameplayStateData; // 0x98(0x18)
		TArray GameplayStateSettings; // 0xB0(0x10)
		FGameplayTag InitialGameplayStateId; // 0xC0(0x4)
		unsigned char UnknownData05_7[0x4]; // 0xC4(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayStateMachine.GameplayStateMachine");
			return ret;
		}

		void SetState(FGameplayTag& InStateId, float InBeginStateDelay); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414C841D8
		void OnRep_ActiveGameplayStateData(); // Flags: Final|Native|Private 0x7FF414C840F8
		FGameplayTag GetStateMachineId(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C84018
		UGameplayState GetActiveStateObject(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C83F38
		FGameplayTag GetActiveStateId(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C83E58
		void EvaluateStateTransition(); // Flags: Native|Event|Protected|BlueprintEvent 0x7FF414C83D78
	};


	// Class GameplayStateMachine.GameplayStateMachineManager
	// Inherited from UActorComponent -> UObject
	// Size: 0x120 (0x1C0 - 0xA0)
	class UGameplayStateMachineManager : public UActorComponent	
	{
	public:
		FGameplayStateMachineArray StateMachineList; // 0xA0(0x120)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayStateMachine.GameplayStateMachineManager");
			return ret;
		}
	};

}
