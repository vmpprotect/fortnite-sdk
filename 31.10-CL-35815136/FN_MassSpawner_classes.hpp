#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: MassSpawner
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class MassSpawner.MassEntityTraitBase
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMassEntityTraitBase : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassSpawner.MassEntityTraitBase");
			return ret;
		}
	};


	// Class MassSpawner.MassAssortedFragmentsTrait
	// Inherited from UMassEntityTraitBase -> UObject
	// Size: 0x20 (0x48 - 0x28)
	class UMassAssortedFragmentsTrait : public UMassEntityTraitBase	
	{
	public:
		TArray<FInstancedStruct> Fragments; // 0x28(0x10)
		TArray<FInstancedStruct> Tags; // 0x38(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassSpawner.MassAssortedFragmentsTrait");
			return ret;
		}
	};


	// Class MassSpawner.MassEntityConfigAsset
	// Inherited from UDataAsset -> UObject
	// Size: 0x30 (0x60 - 0x30)
	class UMassEntityConfigAsset : public UDataAsset	
	{
	public:
		FMassEntityConfig Config; // 0x30(0x30)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassSpawner.MassEntityConfigAsset");
			return ret;
		}
	};


	// Class MassSpawner.MassEntitySpawnDataGeneratorBase
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UMassEntitySpawnDataGeneratorBase : public UObject	
	{
	public:
		int32_t RandomSelectionSeed; // 0x28(0x4)
		bool bUseCustomSeed : 1; // 0x2C:0(0x1)
		unsigned char UnknownData00_7[0x3]; // 0x2D(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassSpawner.MassEntitySpawnDataGeneratorBase");
			return ret;
		}
	};


	// Class MassSpawner.MassEntityEQSSpawnPointsGenerator
	// Inherited from UMassEntitySpawnDataGeneratorBase -> UObject
	// Size: 0x48 (0x78 - 0x30)
	class UMassEntityEQSSpawnPointsGenerator : public UMassEntitySpawnDataGeneratorBase	
	{
	public:
		FEQSParametrizedQueryExecutionRequest EQSRequest; // 0x30(0x48)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassSpawner.MassEntityEQSSpawnPointsGenerator");
			return ret;
		}
	};


	// Class MassSpawner.MassEntityTemplateRegistry
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMassEntityTemplateRegistry : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassSpawner.MassEntityTemplateRegistry");
			return ret;
		}
	};


	// Class MassSpawner.MassEntityZoneGraphSpawnPointsGenerator
	// Inherited from UMassEntitySpawnDataGeneratorBase -> UObject
	// Size: 0x18 (0x48 - 0x30)
	class UMassEntityZoneGraphSpawnPointsGenerator : public UMassEntitySpawnDataGeneratorBase	
	{
	public:
		FZoneGraphTagFilter TagFilter; // 0x30(0xC)
		float MinGap; // 0x3C(0x4)
		float MaxGap; // 0x40(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x44(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassSpawner.MassEntityZoneGraphSpawnPointsGenerator");
			return ret;
		}
	};


	// Class MassSpawner.MassSpawner
	// Inherited from AActor -> UObject
	// Size: 0xA8 (0x338 - 0x290)
	class AMassSpawner : public AActor	
	{
	public:
		FMulticastInlineDelegate OnSpawningFinishedEvent; // 0x290(0x10)
		FMulticastInlineDelegate OnDespawningFinishedEvent; // 0x2A0(0x10)
		int32_t Count; // 0x2B0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x2B4(0x4) UNKNOWN PROPERTY
		TArray<FMassSpawnedEntityType> EntityTypes; // 0x2B8(0x10)
		TArray<FMassSpawnDataGenerator> SpawnDataGenerators; // 0x2C8(0x10)
		bool bAutoSpawnOnBeginPlay : 1; // 0x2D8:0(0x1)
		bool bOverrideSchematics : 1; // 0x2D8:1(0x1)
		unsigned char UnknownData01_5[0x7]; // 0x2D9(0x7) UNKNOWN PROPERTY
		TArray<UMassProcessor*> PostSpawnProcessors; // 0x2E0(0x10)
		float SpawningCountScale; // 0x2F0(0x4)
		unsigned char UnknownData02_7[0x44]; // 0x2F4(0x44) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassSpawner.MassSpawner");
			return ret;
		}

		void UnloadConfig(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7504F47C4(relative to base address)
		void ScaleSpawningCount(float Scale); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7504F4744(relative to base address)
		float GetSpawningCountScale(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750076B80(relative to base address)
		int32_t GetCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74EC991B8(relative to base address)
		void DoSpawning(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7504F4730(relative to base address)
		void DoDespawning(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7504F471C(relative to base address)
		void ClearTemplates(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7504F4708(relative to base address)
	};


	// Class MassSpawner.MassSpawnerSubsystem
	// Inherited from UMassSubsystemBase -> UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x88 (0xC0 - 0x38)
	class UMassSpawnerSubsystem : public UMassSubsystemBase	
	{
	public:
		TArray<UMassProcessor*> SpawnDataInitializers; // 0x38(0x10)
		unsigned char UnknownData00_7[0x78]; // 0x48(0x78) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassSpawner.MassSpawnerSubsystem");
			return ret;
		}
	};


	// Class MassSpawner.MassSpawnLocationProcessor
	// Inherited from UMassProcessor -> UObject
	// Size: 0x330 (0x3F0 - 0xC0)
	class UMassSpawnLocationProcessor : public UMassProcessor	
	{
	public:
		unsigned char UnknownData00_1[0x330]; // 0xC0(0x330) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassSpawner.MassSpawnLocationProcessor");
			return ret;
		}
	};


	// Class MassSpawner.MassTranslator
	// Inherited from UMassProcessor -> UObject
	// Size: 0x20 (0xE0 - 0xC0)
	class UMassTranslator : public UMassProcessor	
	{
	public:
		unsigned char UnknownData00_1[0x20]; // 0xC0(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassSpawner.MassTranslator");
			return ret;
		}
	};

}
