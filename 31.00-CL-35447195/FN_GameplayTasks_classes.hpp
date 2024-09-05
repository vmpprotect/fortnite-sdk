#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: GameplayTasks
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class GameplayTasks.GameplayTask
	// Inherited from UObject
	// Size: 0x38 (0x60 - 0x28)
	class UGameplayTask : public UObject	
	{
	public:
		unsigned char UnknownData03_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		FName InstanceName; // 0x30(0x4)
		unsigned char UnknownData04_6[0x2]; // 0x34(0x2) UNKNOWN PROPERTY
		ETaskResourceOverlapPolicy ResourceOverlapPolicy; // 0x36(0x1)
		unsigned char UnknownData05_6[0x21]; // 0x37(0x21) UNKNOWN PROPERTY
		UGameplayTask ChildTask; // 0x58(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayTasks.GameplayTask");
			return ret;
		}

		void ReadyForActivation(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF411257720
		void GenericGameplayTaskDelegate__DelegateSignature(); // Flags: MulticastDelegate|Public|Delegate 0x7FF411257640
		void EndTask(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF411257560
	};


	// Class GameplayTasks.GameplayTaskOwnerInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UGameplayTaskOwnerInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayTasks.GameplayTaskOwnerInterface");
			return ret;
		}
	};


	// Class GameplayTasks.GameplayTaskResource
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UGameplayTaskResource : public UObject	
	{
	public:
		int32_t ManualResourceID; // 0x28(0x4)
		int8_t AutoResourceID; // 0x2C(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x2D(0x3) UNKNOWN PROPERTY
		bool bManuallySetID : 1; // 0x30:0(0x1)
		unsigned char UnknownData03_7[0x7]; // 0x31(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayTasks.GameplayTaskResource");
			return ret;
		}
	};


	// Class GameplayTasks.GameplayTasksComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x78 (0x118 - 0xA0)
	class UGameplayTasksComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData02_3[0x18]; // 0xA0(0x18) UNKNOWN PROPERTY
		TArray TaskPriorityQueue; // 0xB8(0x10)
		unsigned char UnknownData03_6[0x10]; // 0xC8(0x10) UNKNOWN PROPERTY
		TArray TickingTasks; // 0xD8(0x10)
		TArray KnownTasks; // 0xE8(0x10)
		FMulticastInlineDelegate OnClaimedResourcesChange; // 0xF8(0x10)
		TArray SimulatedTasks; // 0x108(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayTasks.GameplayTasksComponent");
			return ret;
		}

		void OnRep_SimulatedTasks(TArray& PreviousSimulatedTasks); // Flags: Final|RequiredAPI|Native|Public|HasOutParms 0x7FF411974070
		EGameplayTaskRunResult K2_RunGameplayTask(TScriptInterface TaskOwner, UGameplayTask Task, char Priority, TArray AdditionalRequiredResources, TArray AdditionalClaimedResources); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF411973F90
	};


	// Class GameplayTasks.GameplayTask_ClaimResource
	// Inherited from UGameplayTask -> UObject
	// Size: 0x0 (0x60 - 0x60)
	class UGameplayTask_ClaimResource : public UGameplayTask	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayTasks.GameplayTask_ClaimResource");
			return ret;
		}

		UGameplayTask_ClaimResource ClaimResources(TScriptInterface InTaskOwner, TArray ResourceClasses, char Priority, FName TaskInstanceName); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF414594D78
		UGameplayTask_ClaimResource ClaimResource(TScriptInterface InTaskOwner, UClass ResourceClass, char Priority, FName TaskInstanceName); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF414594C98
	};


	// Class GameplayTasks.GameplayTask_SpawnActor
	// Inherited from UGameplayTask -> UObject
	// Size: 0x58 (0xB8 - 0x60)
	class UGameplayTask_SpawnActor : public UGameplayTask	
	{
	public:
		FMulticastInlineDelegate Success; // 0x60(0x10)
		FMulticastInlineDelegate DidNotSpawn; // 0x70(0x10)
		unsigned char UnknownData01_6[0x30]; // 0x80(0x30) UNKNOWN PROPERTY
		UClass ClassToSpawn; // 0xB0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayTasks.GameplayTask_SpawnActor");
			return ret;
		}

		UGameplayTask_SpawnActor SpawnActor(TScriptInterface TaskOwner, FVector SpawnLocation, FRotator SpawnRotation, UClass Class, bool bSpawnOnlyOnAuthority); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF414595018
		void FinishSpawningActor(UObject WorldContextObject, AActor SpawnedActor); // Flags: Native|Public|BlueprintCallable 0x7FF414594F38
		bool BeginSpawningActor(UObject WorldContextObject, AActor& SpawnedActor); // Flags: Native|Public|HasOutParms|BlueprintCallable 0x7FF414594E58
	};


	// Class GameplayTasks.GameplayTask_TimeLimitedExecution
	// Inherited from UGameplayTask -> UObject
	// Size: 0x38 (0x98 - 0x60)
	class UGameplayTask_TimeLimitedExecution : public UGameplayTask	
	{
	public:
		FMulticastInlineDelegate OnFinished; // 0x60(0x10)
		FMulticastInlineDelegate OnTimeExpired; // 0x70(0x10)
		unsigned char UnknownData01_7[0x18]; // 0x80(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayTasks.GameplayTask_TimeLimitedExecution");
			return ret;
		}

		void TaskFinishDelegate__DelegateSignature(); // Flags: MulticastDelegate|Public|Delegate 0x7FF411257868
	};


	// Class GameplayTasks.GameplayTask_WaitDelay
	// Inherited from UGameplayTask -> UObject
	// Size: 0x20 (0x80 - 0x60)
	class UGameplayTask_WaitDelay : public UGameplayTask	
	{
	public:
		FMulticastInlineDelegate OnFinish; // 0x60(0x10)
		unsigned char UnknownData01_7[0x10]; // 0x70(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GameplayTasks.GameplayTask_WaitDelay");
			return ret;
		}

		UGameplayTask_WaitDelay TaskWaitDelay(TScriptInterface TaskOwner, float Time, char Priority); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF411257A28
		void TaskDelayDelegate__DelegateSignature(); // Flags: MulticastDelegate|Public|Delegate 0x7FF411257948
	};

}
