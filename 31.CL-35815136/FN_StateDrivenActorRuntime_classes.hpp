#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: StateDrivenActorRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class StateDrivenActorRuntime.ControllerComponent_StateDrivenReplication
	// Inherited from UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x10 (0xB0 - 0xA0)
	class UControllerComponent_StateDrivenReplication : public UControllerComponent	
	{
	public:
		TArray<FLatestObjectRecordedStateTreeTransitionResult> LatestRecordedStateTreeTransitionResults; // 0xA0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/StateDrivenActorRuntime.ControllerComponent_StateDrivenReplication");
			return ret;
		}

		void OnRep_LatestRecordedStateTreeTransitionResult(); // Flags: Final|Native|Private, Memory Exec: 0x7FF750F2DF8C(relative to base address)
	};


	// Class StateDrivenActorRuntime.FortActorComponent_StateDriven
	// Inherited from UFortActorComponent_FortInteractExtension -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x220 (0x2D8 - 0xB8)
	class UFortActorComponent_StateDriven : public UFortActorComponent_FortInteractExtension	
	{
	public:
		unsigned char UnknownData00_3[0x58]; // 0xB8(0x58) UNKNOWN PROPERTY
		FFortItemEntry SlottedItemEntry; // 0x110(0x1A8)
		TArray<FGameplayTagQuery> VariableTagQueries; // 0x2B8(0x10)
		TArray<float> VariableFloats; // 0x2C8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/StateDrivenActorRuntime.FortActorComponent_StateDriven");
			return ret;
		}

		void PopSlottedItem(FVector& SlottedItemPopOffset); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74F752E8C(relative to base address)
		void HandleInteraction(ABuildingActor* SelfActor, AFortPawn* InteractingPawn); // Flags: Final|Native|Private, Memory Exec: 0x7FF74C8E74BC(relative to base address)
		void HandleEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Flags: Final|Native|Private, Memory Exec: 0x7FF74E229380(relative to base address)
		void HandleDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum); // Flags: Final|Native|Private|HasDefaults, Memory Exec: 0x7FF74E7294A8(relative to base address)
		void HandleDamaged(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum); // Flags: Final|Native|Private|HasDefaults, Memory Exec: 0x7FF74E7294A8(relative to base address)
		void HandleBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF74E228F04(relative to base address)
		FFortItemEntry GetSlottedItemEntry(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750F2DE70(relative to base address)
		FText GetSlottedItemDisplayName(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750F2DE34(relative to base address)
	};


	// Class StateDrivenActorRuntime.ObjectInstancedStateTreeComponent
	// Inherited from UBrainComponent -> UActorComponent -> UObject
	// Size: 0xC0 (0x1B8 - 0xF8)
	class UObjectInstancedStateTreeComponent : public UBrainComponent	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0xF8(0x10) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnStateTreeRunStatusChanged; // 0x108(0x10)
		FStateTreeReference StateTreeRef; // 0x118(0x28)
		FStateTreeReferenceOverrides LinkedStateTreeOverrides; // 0x140(0x10)
		bool bStartLogicAutomatically; // 0x150(0x1)
		unsigned char UnknownData01_7[0x67]; // 0x151(0x67) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/StateDrivenActorRuntime.ObjectInstancedStateTreeComponent");
			return ret;
		}

		void StateTreeRunStatusChanged__DelegateSignature(EStateTreeRunStatus StateTreeRunStatus); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetStartLogicAutomatically(bool bInStartLogicAutomatically); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750F2E128(relative to base address)
		void SendStateTreeEvent(AActor* Instigator, FStateTreeEvent& Event); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750F2DFA0(relative to base address)
		AActor GetContextualInstigatingActor(); // Flags: Final|Native|Public|BlueprintCallable|Const, Memory Exec: 0x7FF750F2DE0C(relative to base address)
	};


	// Class StateDrivenActorRuntime.FortPlayerInstancedStateTreeComponent
	// Inherited from UObjectInstancedStateTreeComponent -> UBrainComponent -> UActorComponent -> UObject
	// Size: 0x0 (0x1B8 - 0x1B8)
	class UFortPlayerInstancedStateTreeComponent : public UObjectInstancedStateTreeComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/StateDrivenActorRuntime.FortPlayerInstancedStateTreeComponent");
			return ret;
		}
	};


	// Class StateDrivenActorRuntime.StateDrivenEventQuestObjectiveActiveHelper
	// Inherited from UObject
	// Size: 0x28 (0x50 - 0x28)
	class UStateDrivenEventQuestObjectiveActiveHelper : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0x28]; // 0x28(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/StateDrivenActorRuntime.StateDrivenEventQuestObjectiveActiveHelper");
			return ret;
		}
	};


	// Class StateDrivenActorRuntime.StateDrivenEventQuestObjectiveCompletedHelper
	// Inherited from UObject
	// Size: 0x28 (0x50 - 0x28)
	class UStateDrivenEventQuestObjectiveCompletedHelper : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0x28]; // 0x28(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/StateDrivenActorRuntime.StateDrivenEventQuestObjectiveCompletedHelper");
			return ret;
		}

		void HandleQuestObjectiveCompleted(UFortQuestObjectiveInfo* ObjectiveInfo); // Flags: Final|Native|Public, Memory Exec: 0x7FF74C088608(relative to base address)
	};


	// Class StateDrivenActorRuntime.StateDrivenEventVerbHelper
	// Inherited from UObject
	// Size: 0x30 (0x58 - 0x28)
	class UStateDrivenEventVerbHelper : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0x30]; // 0x28(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/StateDrivenActorRuntime.StateDrivenEventVerbHelper");
			return ret;
		}
	};


	// Class StateDrivenActorRuntime.WorldInstancedStateTreeComponent
	// Inherited from UBrainComponent -> UActorComponent -> UObject
	// Size: 0x80 (0x178 - 0xF8)
	class UWorldInstancedStateTreeComponent : public UBrainComponent	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0xF8(0x10) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnStateTreeRunStatusChanged; // 0x108(0x10)
		FStateTreeReference StateTreeRef; // 0x118(0x28)
		FStateTreeReferenceOverrides LinkedStateTreeOverrides; // 0x140(0x10)
		bool bStartLogicAutomatically; // 0x150(0x1)
		unsigned char UnknownData01_6[0xF]; // 0x151(0xF) UNKNOWN PROPERTY
		FStateTreeInstanceData InstanceData; // 0x160(0x10)
		unsigned char UnknownData02_7[0x8]; // 0x170(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/StateDrivenActorRuntime.WorldInstancedStateTreeComponent");
			return ret;
		}

		void StateTreeRunStatusChanged__DelegateSignature(EStateTreeRunStatus StateTreeRunStatus); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetStartLogicAutomatically(bool bInStartLogicAutomatically); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750F2E128(relative to base address)
		void SendStateTreeEvent(FStateTreeEvent& Event); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750F2E088(relative to base address)
		void MulticastSendStateTreeEvent(AActor* Instigator, TArray<FRecordedStateTreeTransitionResult> RecordedTransitions); // Flags: Net|NetReliableNative|Event|NetMulticast|Protected, Memory Exec: 0x7FF750F2DEB4(relative to base address)
		EStateTreeRunStatus GetStateTreeRunStatus(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750F2DE8C(relative to base address)
	};


	// Class StateDrivenActorRuntime.ObjectInstancedStateTreeSchema
	// Inherited from UStateTreeSchema -> UObject
	// Size: 0x20 (0x48 - 0x28)
	class UObjectInstancedStateTreeSchema : public UStateTreeSchema	
	{
	public:
		UClass* ContextActorClass; // 0x28(0x8)
		UClass* InstigatorActorClass; // 0x30(0x8)
		TArray<FStateTreeExternalDataDesc> ContextDataDescs; // 0x38(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/StateDrivenActorRuntime.ObjectInstancedStateTreeSchema");
			return ret;
		}
	};

}
