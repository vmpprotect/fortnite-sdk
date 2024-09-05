#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: GameplayStateMachine
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class GameplayStateMachine.GameplayState
	// Inherited from UObject
	// Size: 0x50 (0x78 - 0x28)
	class UGameplayState : public UObject	
	{
	public:
		FGameplayTag StateId; // 0x28(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
		FGameplayTagContainer StateRuntimeTags; // 0x30(0x20)
		bool bEvaluateTransition; // 0x50(0x1)
		bool bReplicates; // 0x51(0x1)
		bool bStateBegun; // 0x52(0x1)
		bool bStateEnded; // 0x53(0x1)
		float InitializationServerTime; // 0x54(0x4)
		float BeginStateDelay; // 0x58(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x5C(0x4) UNKNOWN PROPERTY
		UGameplayStateMachine* CachedGameplayStateMachine; // 0x60(0x8)
		UGameplayStateMachineManager* CachedStateMachineManager; // 0x68(0x8)
		UGameplayState* Hack_StateToDelayProcess; // 0x70(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayStateMachine.GameplayState");
			return ret;
		}

		void UpdateStateEventServer(float DeltaTime); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateStateEventClient(float DeltaTime); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateStateEvent(float DeltaTime); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RemoveStateRuntimeTag(FGameplayTag& RemovedTag); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C6B47C(relative to base address)
		void MarkStateToEvaluateTransitions(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750C6B454(relative to base address)
		void InitializeStateEventServer(FGameplayTag& PrevStateId); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void InitializeStateEventClient(FGameplayTag& PrevStateId); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void InitializeStateEvent(FGameplayTag& PrevStateId); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool HasStateRuntimeTag(FGameplayTag& QueryTag); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C6B3BC(relative to base address)
		bool HasAuthority(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750C6B398(relative to base address)
		FGameplayTagContainer GetStateRuntimeTags(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FAA04A4(relative to base address)
		FGameplayTag GetStateId(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C910E0C(relative to base address)
		AActor GetOwningActor(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750C6B374(relative to base address)
		UGameplayStateMachine GetGameplayStateMachine(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F97D11C(relative to base address)
		void EndStateEventServer(FGameplayTag& NextStateId); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void EndStateEventClient(FGameplayTag& NextStateId); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void EndStateEvent(FGameplayTag& NextStateId); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BeginStateEventServer(FGameplayTag& PrevStateId); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BeginStateEventClient(FGameplayTag& PrevStateId); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BeginStateEvent(FGameplayTag& PrevStateId); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AddStateRuntimeTag(FGameplayTag& AddedTag); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C6B2C0(relative to base address)
	};


	// Class GameplayStateMachine.GameplayStateMachine
	// Inherited from UGameplayState -> UObject
	// Size: 0x50 (0xC8 - 0x78)
	class UGameplayStateMachine : public UGameplayState	
	{
	public:
		unsigned char UnknownData00_3[0x18]; // 0x78(0x18) UNKNOWN PROPERTY
		FGameplayTag StateMachineId; // 0x90(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x94(0x4) UNKNOWN PROPERTY
		FActiveGameplayStateData ActiveGameplayStateData; // 0x98(0x18)
		TArray<FGameplayStateSettings> GameplayStateSettings; // 0xB0(0x10)
		FGameplayTag InitialGameplayStateId; // 0xC0(0x4)
		unsigned char UnknownData02_7[0x4]; // 0xC4(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayStateMachine.GameplayStateMachine");
			return ret;
		}

		void SetState(FGameplayTag& InStateId, float InBeginStateDelay); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750C6B50C(relative to base address)
		void OnRep_ActiveGameplayStateData(); // Flags: Final|Native|Private, Memory Exec: 0x7FF750C6B468(relative to base address)
		FGameplayTag GetStateMachineId(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F92EA60(relative to base address)
		UGameplayState GetActiveStateObject(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF749B40548(relative to base address)
		FGameplayTag GetActiveStateId(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750C6B34C(relative to base address)
		void EvaluateStateTransition(); // Flags: Native|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF74C4A1ED4(relative to base address)
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
