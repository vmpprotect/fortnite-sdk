#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: StateDrivenActorRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class StateDrivenActorRuntime.ControllerComponent_StateDrivenReplication
	// Inherited from UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UControllerComponent_StateDrivenReplication : public UControllerComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/StateDrivenActorRuntime.ControllerComponent_StateDrivenReplication");
			return ret;
		}

		void ClientSendStateTreeEvent(UObjectInstancedStateTreeComponent ObjectInstancedComponent, AActor Instigator, TArray RecordedTransitions); // Flags: Net|NetReliableNative|Event|Public|NetClient 0x7FF414BFBEF8
	};


	// Class StateDrivenActorRuntime.FortActorComponent_StateDriven
	// Inherited from UFortActorComponent_FortInteractExtension -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x220 (0x2D8 - 0xB8)
	class UFortActorComponent_StateDriven : public UFortActorComponent_FortInteractExtension	
	{
	public:
		unsigned char UnknownData01_3[0x58]; // 0xB8(0x58) UNKNOWN PROPERTY
		FFortItemEntry SlottedItemEntry; // 0x110(0x1A8)
		TArray VariableTagQueries; // 0x2B8(0x10)
		TArray VariableFloats; // 0x2C8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/StateDrivenActorRuntime.FortActorComponent_StateDriven");
			return ret;
		}

		void PopSlottedItem(FVector& SlottedItemPopOffset); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414BFC5F8
		void HandleInteraction(ABuildingActor SelfActor, AFortPawn InteractingPawn); // Flags: Final|Native|Private 0x7FF414BFC518
		void HandleEndOverlap(UPrimitiveComponent OverlappedComponent, AActor OtherActor, UPrimitiveComponent OtherComp, int32_t OtherBodyIndex); // Flags: Final|Native|Private 0x7FF414BFC438
		void HandleDied(AActor DamagedActor, float Damage, AController InstigatedBy, AActor DamageCauser, FVector HitLocation, UPrimitiveComponent FHitComponent, FName BoneName, FVector Momentum); // Flags: Final|Native|Private|HasDefaults 0x7FF414BFC358
		void HandleDamaged(AActor DamagedActor, float Damage, AController InstigatedBy, AActor DamageCauser, FVector HitLocation, UPrimitiveComponent FHitComponent, FName BoneName, FVector Momentum); // Flags: Final|Native|Private|HasDefaults 0x7FF414BFC278
		void HandleBeginOverlap(UPrimitiveComponent OverlappedComp, AActor OtherActor, UPrimitiveComponent OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // Flags: Final|Native|Private|HasOutParms 0x7FF414BFC198
		FFortItemEntry GetSlottedItemEntry(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BFC0B8
		FText GetSlottedItemDisplayName(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BFBFD8
	};


	// Class StateDrivenActorRuntime.ObjectInstancedStateTreeComponent
	// Inherited from UBrainComponent -> UActorComponent -> UObject
	// Size: 0xC0 (0x1B8 - 0xF8)
	class UObjectInstancedStateTreeComponent : public UBrainComponent	
	{
	public:
		unsigned char UnknownData02_3[0x10]; // 0xF8(0x10) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnStateTreeRunStatusChanged; // 0x108(0x10)
		FStateTreeReference StateTreeRef; // 0x118(0x28)
		FStateTreeReferenceOverrides LinkedStateTreeOverrides; // 0x140(0x10)
		bool bStartLogicAutomatically; // 0x150(0x1)
		unsigned char UnknownData03_7[0x67]; // 0x151(0x67) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/StateDrivenActorRuntime.ObjectInstancedStateTreeComponent");
			return ret;
		}

		void StateTreeRunStatusChanged__DelegateSignature(EStateTreeRunStatus StateTreeRunStatus); // Flags: MulticastDelegate|Public|Delegate 0x7FF414030720
		void SetStartLogicAutomatically(bool bInStartLogicAutomatically); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414030640
		void SendStateTreeEvent(AActor Instigator, FStateTreeEvent& Event); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF4140304A0
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
	// Size: 0x18 (0x40 - 0x28)
	class UStateDrivenEventQuestObjectiveActiveHelper : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x18]; // 0x28(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/StateDrivenActorRuntime.StateDrivenEventQuestObjectiveActiveHelper");
			return ret;
		}
	};


	// Class StateDrivenActorRuntime.StateDrivenEventQuestObjectiveCompletedHelper
	// Inherited from UObject
	// Size: 0x20 (0x48 - 0x28)
	class UStateDrivenEventQuestObjectiveCompletedHelper : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x20]; // 0x28(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/StateDrivenActorRuntime.StateDrivenEventQuestObjectiveCompletedHelper");
			return ret;
		}

		void HandleQuestObjectiveCompleted(UFortQuestObjectiveInfo ObjectiveInfo); // Flags: Final|Native|Public 0x7FF414BFC6D8
	};


	// Class StateDrivenActorRuntime.StateDrivenEventVerbHelper
	// Inherited from UObject
	// Size: 0x28 (0x50 - 0x28)
	class UStateDrivenEventVerbHelper : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x28]; // 0x28(0x28) UNKNOWN PROPERTY

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
		unsigned char UnknownData03_3[0x10]; // 0xF8(0x10) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnStateTreeRunStatusChanged; // 0x108(0x10)
		FStateTreeReference StateTreeRef; // 0x118(0x28)
		FStateTreeReferenceOverrides LinkedStateTreeOverrides; // 0x140(0x10)
		bool bStartLogicAutomatically; // 0x150(0x1)
		unsigned char UnknownData04_6[0xF]; // 0x151(0xF) UNKNOWN PROPERTY
		FStateTreeInstanceData InstanceData; // 0x160(0x10)
		unsigned char UnknownData05_7[0x8]; // 0x170(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/StateDrivenActorRuntime.WorldInstancedStateTreeComponent");
			return ret;
		}

		void StateTreeRunStatusChanged__DelegateSignature(EStateTreeRunStatus StateTreeRunStatus); // Flags: MulticastDelegate|Public|Delegate 0x7FF414031180
		void SetStartLogicAutomatically(bool bInStartLogicAutomatically); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4140310A0
		void SendStateTreeEvent(FStateTreeEvent& Event); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414030FC0
		void MulticastSendStateTreeEvent(AActor Instigator, TArray RecordedTransitions); // Flags: Net|NetReliableNative|Event|NetMulticast|Protected 0x7FF414030BE0
		EStateTreeRunStatus GetStateTreeRunStatus(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414030B00
	};


	// Class StateDrivenActorRuntime.ObjectInstancedStateTreeSchema
	// Inherited from UStateTreeSchema -> UObject
	// Size: 0x20 (0x48 - 0x28)
	class UObjectInstancedStateTreeSchema : public UStateTreeSchema	
	{
	public:
		UClass ContextActorClass; // 0x28(0x8)
		UClass InstigatorActorClass; // 0x30(0x8)
		TArray ContextDataDescs; // 0x38(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/StateDrivenActorRuntime.ObjectInstancedStateTreeSchema");
			return ret;
		}
	};

}
