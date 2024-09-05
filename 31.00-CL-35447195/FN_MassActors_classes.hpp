#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: MassActors
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class MassActors.MassActorPoolableInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMassActorPoolableInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassActors.MassActorPoolableInterface");
			return ret;
		}

		void PrepareForPooling(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent 0x7FF414BA6E58
		void PrepareForGame(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent 0x7FF414BA6D78
		bool CanBePooled(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent 0x7FF414BA6C98
	};


	// Class MassActors.MassActorSpawnerSubsystem
	// Inherited from UMassSubsystemBase -> UWorldSubsystem -> USubsystem -> UObject
	// Size: 0xB8 (0xF0 - 0x38)
	class UMassActorSpawnerSubsystem : public UMassSubsystemBase	
	{
	public:
		TArray SpawnRequests; // 0x38(0x10)
		TArray ActorsToDestroy; // 0x48(0x10)
		TArray DeactivatedActorsToDestroy; // 0x58(0x10)
		unsigned char UnknownData01_7[0x88]; // 0x68(0x88) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassActors.MassActorSpawnerSubsystem");
			return ret;
		}
	};


	// Class MassActors.MassActorSubsystem
	// Inherited from UMassSubsystemBase -> UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x10 (0x48 - 0x38)
	class UMassActorSubsystem : public UMassSubsystemBase	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0x38(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassActors.MassActorSubsystem");
			return ret;
		}
	};


	// Class MassActors.MassAgentComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x100 (0x1A0 - 0xA0)
	class UMassAgentComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData02_3[0xA0]; // 0xA0(0xA0) UNKNOWN PROPERTY
		FMassEntityConfig EntityConfig; // 0x140(0x30)
		unsigned char UnknownData03_6[0x2C]; // 0x170(0x2C) UNKNOWN PROPERTY
		FMassNetworkID NetId; // 0x19C(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassActors.MassAgentComponent");
			return ret;
		}

		void OnRep_NetID(); // Flags: Native|Public 0x7FF414BA71D8
		void KillEntity(bool bDestroyActor); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BA70F8
		void Enable(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BA7018
		void Disable(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BA6F38
	};


	// Class MassActors.MassAgentSubsystem
	// Inherited from UMassSubsystemBase -> UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x148 (0x180 - 0x38)
	class UMassAgentSubsystem : public UMassSubsystemBase	
	{
	public:
		unsigned char UnknownData02_3[0x10]; // 0x38(0x10) UNKNOWN PROPERTY
		UMassSpawnerSubsystem SpawnerSystem; // 0x48(0x8)
		UMassSimulationSubsystem SimulationSystem; // 0x50(0x8)
		TMap PendingAgentEntities; // 0x58(0x50)
		TMap PendingPuppets; // 0xA8(0x50)
		UMassReplicationSubsystem ReplicationSubsystem; // 0xF8(0x8)
		TMap ReplicatedAgentComponents; // 0x100(0x50)
		unsigned char UnknownData03_7[0x30]; // 0x150(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassActors.MassAgentSubsystem");
			return ret;
		}
	};


	// Class MassActors.MassAgentSyncTrait
	// Inherited from UMassEntityTraitBase -> UObject
	// Size: 0x8 (0x30 - 0x28)
	class UMassAgentSyncTrait : public UMassEntityTraitBase	
	{
	public:
		EMassTranslationDirection SyncDirection; // 0x28(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x29(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassActors.MassAgentSyncTrait");
			return ret;
		}
	};


	// Class MassActors.MassAgentCapsuleCollisionSyncTrait
	// Inherited from UMassAgentSyncTrait -> UMassEntityTraitBase -> UObject
	// Size: 0x8 (0x38 - 0x30)
	class UMassAgentCapsuleCollisionSyncTrait : public UMassAgentSyncTrait	
	{
	public:
		bool bSyncTransform; // 0x30(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x31(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassActors.MassAgentCapsuleCollisionSyncTrait");
			return ret;
		}
	};


	// Class MassActors.MassAgentMovementSyncTrait
	// Inherited from UMassAgentSyncTrait -> UMassEntityTraitBase -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UMassAgentMovementSyncTrait : public UMassAgentSyncTrait	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassActors.MassAgentMovementSyncTrait");
			return ret;
		}
	};


	// Class MassActors.MassAgentOrientationSyncTrait
	// Inherited from UMassAgentSyncTrait -> UMassEntityTraitBase -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UMassAgentOrientationSyncTrait : public UMassAgentSyncTrait	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassActors.MassAgentOrientationSyncTrait");
			return ret;
		}
	};


	// Class MassActors.MassAgentFeetLocationSyncTrait
	// Inherited from UMassAgentSyncTrait -> UMassEntityTraitBase -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UMassAgentFeetLocationSyncTrait : public UMassAgentSyncTrait	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassActors.MassAgentFeetLocationSyncTrait");
			return ret;
		}
	};


	// Class MassActors.MassCapsuleTransformToMassTranslator
	// Inherited from UMassTranslator -> UMassProcessor -> UObject
	// Size: 0x320 (0x400 - 0xE0)
	class UMassCapsuleTransformToMassTranslator : public UMassTranslator	
	{
	public:
		unsigned char UnknownData01_1[0x320]; // 0xE0(0x320) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassActors.MassCapsuleTransformToMassTranslator");
			return ret;
		}
	};


	// Class MassActors.MassTransformToActorCapsuleTranslator
	// Inherited from UMassTranslator -> UMassProcessor -> UObject
	// Size: 0x320 (0x400 - 0xE0)
	class UMassTransformToActorCapsuleTranslator : public UMassTranslator	
	{
	public:
		unsigned char UnknownData01_1[0x320]; // 0xE0(0x320) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassActors.MassTransformToActorCapsuleTranslator");
			return ret;
		}
	};


	// Class MassActors.MassCharacterMovementToMassTranslator
	// Inherited from UMassTranslator -> UMassProcessor -> UObject
	// Size: 0x320 (0x400 - 0xE0)
	class UMassCharacterMovementToMassTranslator : public UMassTranslator	
	{
	public:
		unsigned char UnknownData01_1[0x320]; // 0xE0(0x320) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassActors.MassCharacterMovementToMassTranslator");
			return ret;
		}
	};


	// Class MassActors.MassCharacterMovementToActorTranslator
	// Inherited from UMassTranslator -> UMassProcessor -> UObject
	// Size: 0x320 (0x400 - 0xE0)
	class UMassCharacterMovementToActorTranslator : public UMassTranslator	
	{
	public:
		unsigned char UnknownData01_1[0x320]; // 0xE0(0x320) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassActors.MassCharacterMovementToActorTranslator");
			return ret;
		}
	};


	// Class MassActors.MassCharacterOrientationToMassTranslator
	// Inherited from UMassTranslator -> UMassProcessor -> UObject
	// Size: 0x320 (0x400 - 0xE0)
	class UMassCharacterOrientationToMassTranslator : public UMassTranslator	
	{
	public:
		unsigned char UnknownData01_1[0x320]; // 0xE0(0x320) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassActors.MassCharacterOrientationToMassTranslator");
			return ret;
		}
	};


	// Class MassActors.MassCharacterOrientationToActorTranslator
	// Inherited from UMassTranslator -> UMassProcessor -> UObject
	// Size: 0x320 (0x400 - 0xE0)
	class UMassCharacterOrientationToActorTranslator : public UMassTranslator	
	{
	public:
		unsigned char UnknownData01_1[0x320]; // 0xE0(0x320) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassActors.MassCharacterOrientationToActorTranslator");
			return ret;
		}
	};


	// Class MassActors.MassSceneComponentLocationToMassTranslator
	// Inherited from UMassTranslator -> UMassProcessor -> UObject
	// Size: 0x320 (0x400 - 0xE0)
	class UMassSceneComponentLocationToMassTranslator : public UMassTranslator	
	{
	public:
		unsigned char UnknownData01_1[0x320]; // 0xE0(0x320) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassActors.MassSceneComponentLocationToMassTranslator");
			return ret;
		}
	};


	// Class MassActors.MassSceneComponentLocationToActorTranslator
	// Inherited from UMassTranslator -> UMassProcessor -> UObject
	// Size: 0x320 (0x400 - 0xE0)
	class UMassSceneComponentLocationToActorTranslator : public UMassTranslator	
	{
	public:
		unsigned char UnknownData01_1[0x320]; // 0xE0(0x320) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassActors.MassSceneComponentLocationToActorTranslator");
			return ret;
		}
	};


	// Class MassActors.MassTranslator_BehaviorTree
	// Inherited from UMassTranslator -> UMassProcessor -> UObject
	// Size: 0x320 (0x400 - 0xE0)
	class UMassTranslator_BehaviorTree : public UMassTranslator	
	{
	public:
		unsigned char UnknownData01_1[0x320]; // 0xE0(0x320) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassActors.MassTranslator_BehaviorTree");
			return ret;
		}
	};

}
