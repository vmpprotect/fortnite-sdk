#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: MassSpawner
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct MassSpawner.MassEntityConfig
	// Size: 0x30 (0x30 - 0x0)
	struct FMassEntityConfig	
	{
	public:
		UMassEntityConfigAsset* Parent; // 0x0(0x8)
		TArray<UMassEntityTraitBase*> Traits; // 0x8(0x10)
		UObject* ConfigOwner; // 0x18(0x8)
		FGuid ConfigGuid; // 0x20(0x10)
	};


	// Struct MassSpawner.MassEntitySpawnDataGeneratorResult
	// Size: 0x30 (0x30 - 0x0)
	struct FMassEntitySpawnDataGeneratorResult	
	{
	public:
		FInstancedStruct SpawnData; // 0x0(0x10)
		UClass* SpawnDataProcessor; // 0x10(0x8)
		TArray<UClass*> PostSpawnProcessors; // 0x18(0x10)
		int32_t EntityConfigIndex; // 0x28(0x4)
		int32_t NumEntities; // 0x2C(0x4)
	};


	// Struct MassSpawner.MassEntityTemplateID
	// Size: 0x20 (0x20 - 0x0)
	struct FMassEntityTemplateID	
	{
	public:
		FGuid ConfigGuid; // 0x0(0x10)
		uint32_t FlavorHash; // 0x10(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
		uint64_t TotalHash; // 0x18(0x8)
	};


	// Struct MassSpawner.MassEntityTemplateData
	// Size: 0x140 (0x140 - 0x0)
	struct FMassEntityTemplateData	
	{
	public:
		unsigned char UnknownData00_2[0x140]; // 0x0(0x140) UNKNOWN PROPERTY
	};


	// Struct MassSpawner.MassTransformsSpawnData
	// Size: 0x18 (0x18 - 0x0)
	struct FMassTransformsSpawnData	
	{
	public:
		unsigned char UnknownData00_2[0x18]; // 0x0(0x18) UNKNOWN PROPERTY
	};


	// Struct MassSpawner.MassSpawnedEntityType
	// Size: 0x30 (0x30 - 0x0)
	struct FMassSpawnedEntityType	
	{
	public:
		TWeakObjectPtr<UMassEntityConfigAsset*> EntityConfig; // 0x0(0x20)
		float Proportion; // 0x20(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
		UMassEntityConfigAsset* EntityConfigPtr; // 0x28(0x8)
	};


	// Struct MassSpawner.MassSpawnDataGenerator
	// Size: 0x18 (0x18 - 0x0)
	struct FMassSpawnDataGenerator	
	{
	public:
		UClass* GeneratorClass; // 0x0(0x8)
		UMassEntitySpawnDataGeneratorBase* GeneratorInstance; // 0x8(0x8)
		float Proportion; // 0x10(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct MassSpawner.ReplicationTemplateIDFragment
	// Inherited from FMassFragment
	// Size: 0x20 (0x20 - 0x0)
	struct FReplicationTemplateIDFragment : public FMassFragment	
	{
	public:
		FMassEntityTemplateID ID; // 0x0(0x20)
	};

}
