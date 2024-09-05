#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: Entity
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class Entity.BaseEntity
	// Inherited from UObject
	// Size: 0x20 (0x48 - 0x28)
	class UBaseEntity : public UObject	
	{
	public:
		TArray<UObject*> Components; // 0x28(0x10)
		TArray<UObject*> OwnedEntities; // 0x38(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Entity.BaseEntity");
			return ret;
		}
	};


	// Class Entity.EntityPrefab
	// Inherited from UBlueprint -> UBlueprintCore -> UObject
	// Size: 0x0 (0xA8 - 0xA8)
	class UEntityPrefab : public UBlueprint	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Entity.EntityPrefab");
			return ret;
		}
	};


	// Class Entity.EntityReplicationSupport
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UEntityReplicationSupport : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Entity.EntityReplicationSupport");
			return ret;
		}
	};


	// Class Entity.EntityReplicator
	// Inherited from AActor -> UObject
	// Size: 0x1B8 (0x448 - 0x290)
	class AEntityReplicator : public AActor	
	{
	public:
		bool bIsNetInitialized; // 0x290(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x291(0x7) UNKNOWN PROPERTY
		TWeakObjectPtr<UObject*> EntityPtr; // 0x298(0x20)
		unsigned char UnknownData01_6[0x8]; // 0x2B8(0x8) UNKNOWN PROPERTY
		TWeakObjectPtr<UObject*> EntityOwnerPtr; // 0x2C0(0x20)
		FSoftObjectPath EntityServerPath; // 0x2E0(0x18)
		FSoftObjectPath EntityOwnerServerPath; // 0x2F8(0x18)
		FFastEntityComponentArray NonDynamicEntityComponents; // 0x310(0x118)
		UObject* EntityPendingInitialization; // 0x428(0x8)
		TArray<UObject*> EntityComponentsPendingInitialization; // 0x430(0x10)
		unsigned char UnknownData02_7[0x8]; // 0x440(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Entity.EntityReplicator");
			return ret;
		}
	};


	// Class Entity.EntityReplicator_AlwaysRelevant
	// Inherited from AEntityReplicator -> AActor -> UObject
	// Size: 0x0 (0x448 - 0x448)
	class AEntityReplicator_AlwaysRelevant : public AEntityReplicator	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Entity.EntityReplicator_AlwaysRelevant");
			return ret;
		}
	};


	// Class Entity.WorldExecutionSubsystem
	// Inherited from UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x220 (0x250 - 0x30)
	class UWorldExecutionSubsystem : public UWorldSubsystem	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x30(0x8) UNKNOWN PROPERTY
		UExecutionSubsystem* ExecutionSystem; // 0x38(0x8)
		unsigned char UnknownData01_7[0x210]; // 0x40(0x210) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Entity.WorldExecutionSubsystem");
			return ret;
		}
	};


	// Class Entity.SimulationEntity
	// Inherited from AActor -> UObject
	// Size: 0x20 (0x2B0 - 0x290)
	class ASimulationEntity : public AActor	
	{
	public:
		UObject* SimulationEntity; // 0x290(0x8)
		UClass* SavedEntityClass; // 0x298(0x8)
		UClass* SavedEntityComponentClass; // 0x2A0(0x8)
		unsigned char UnknownData00_7[0x8]; // 0x2A8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Entity.SimulationEntity");
			return ret;
		}
	};


	// Class Entity.EntityPlayspaceRegistryBase
	// Inherited from UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UEntityPlayspaceRegistryBase : public UWorldSubsystem	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Entity.EntityPlayspaceRegistryBase");
			return ret;
		}
	};


	// Class Entity.EntityRegistryBase
	// Inherited from UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UEntityRegistryBase : public UWorldSubsystem	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Entity.EntityRegistryBase");
			return ret;
		}
	};


	// Class Entity.EntityVerseEngineSubsystem
	// Inherited from UEngineSubsystem -> UDynamicSubsystem -> USubsystem -> UObject
	// Size: 0x8 (0x38 - 0x30)
	class UEntityVerseEngineSubsystem : public UEngineSubsystem	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x30(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Entity.EntityVerseEngineSubsystem");
			return ret;
		}
	};

}
