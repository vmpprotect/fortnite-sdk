#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: InstancedActors
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct InstancedActors.InstancedActorsInstanceIndex
	// Size: 0x2 (0x2 - 0x0)
	struct FInstancedActorsInstanceIndex	
	{
	public:
		uint16_t Index; // 0x0(0x2)
	};


	// Struct InstancedActors.InstancedActorsInstanceHandle
	// Size: 0x10 (0x10 - 0x0)
	struct FInstancedActorsInstanceHandle	
	{
	public:
		UInstancedActorsData* InstancedActorData; // 0x0(0x8)
		FInstancedActorsInstanceIndex Index; // 0x8(0x2)
		unsigned char UnknownData00_7[0x6]; // 0xA(0x6) UNKNOWN PROPERTY
	};


	// Struct InstancedActors.InstancedActorsMassSpawnData
	// Size: 0x8 (0x8 - 0x0)
	struct FInstancedActorsMassSpawnData	
	{
	public:
		unsigned char UnknownData00_2[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct InstancedActors.InstancedActorsIterationContext
	// Size: 0x70 (0x70 - 0x0)
	struct FInstancedActorsIterationContext	
	{
	public:
		unsigned char UnknownData00_2[0x70]; // 0x0(0x70) UNKNOWN PROPERTY
	};


	// Struct InstancedActors.InstancedActorsDelta
	// Inherited from FFastArraySerializerItem
	// Size: 0x4 (0x10 - 0xC)
	struct FInstancedActorsDelta : public FFastArraySerializerItem	
	{
	public:
		FInstancedActorsInstanceIndex InstanceIndex; // 0xC(0x2)
		bool bDestroyed : 1; // 0xE:0(0x1)
		char CurrentLifecyclePhaseIndex; // 0xF(0x1)
	};


	// Struct InstancedActors.InstancedActorsDeltaList
	// Inherited from FFastArraySerializer
	// Size: 0x70 (0x178 - 0x108)
	struct FInstancedActorsDeltaList : public FFastArraySerializer	
	{
	public:
		unsigned char UnknownData00_3[0x58]; // 0x108(0x58) UNKNOWN PROPERTY
		TArray<FInstancedActorsDelta> InstanceDeltas; // 0x160(0x10)
		unsigned char UnknownData01_7[0x8]; // 0x170(0x8) UNKNOWN PROPERTY
	};


	// Struct InstancedActors.InstancedActorsConfig
	// Size: 0x20 (0x20 - 0x0)
	struct FInstancedActorsConfig	
	{
	public:
		UClass* ServerActorSpawnerSubsystemClass; // 0x0(0x8)
		UClass* ClientActorSpawnerSubsystemClass; // 0x8(0x8)
		UClass* InstancedActorsSubsystemClass; // 0x10(0x8)
		UClass* StationaryVisualizationTraitClass; // 0x18(0x8)
	};


	// Struct InstancedActors.ClassConfigOverrideEntry
	// Size: 0x28 (0x28 - 0x0)
	struct FClassConfigOverrideEntry	
	{
	public:
		unsigned char UnknownData00_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		FInstancedActorsConfig ConfigOverride; // 0x8(0x20)
	};


	// Struct InstancedActors.InstancedActorsSettings
	// Inherited from FTableRowBase
	// Size: 0x98 (0xA0 - 0x8)
	struct FInstancedActorsSettings : public FTableRowBase	
	{
	public:
		bool bOverride_bInstancesCastShadows : 1; // 0x8:0(0x1)
		bool bOverride_MaxActorDistance : 1; // 0x8:1(0x1)
		bool bOverride_bDisableAutoDistanceCulling : 1; // 0x8:2(0x1)
		bool bOverride_MaxInstanceDistance : 1; // 0x8:3(0x1)
		bool bOverride_MaxInstanceDistances : 1; // 0x8:4(0x1)
		bool bOverride_LODDistanceScales : 1; // 0x8:5(0x1)
		bool bOverride_AffectDistanceFieldLighting : 1; // 0x8:6(0x1)
		bool bOverride_DetailedRepresentationLODDistance : 1; // 0x8:7(0x1)
		bool bOverride_ForceLowRepresentationLODDistance : 1; // 0x9:0(0x1)
		bool bOverride_WorldPositionOffsetDisableDistance : 1; // 0x9:1(0x1)
		bool bOverride_bEjectOnActorMoved : 1; // 0x9:2(0x1)
		bool bOverride_ActorEjectionMovementThreshold : 1; // 0x9:3(0x1)
		bool bOverride_bCanEverAffectNavigation : 1; // 0x9:4(0x1)
		bool bOverride_OverrideWorldPartitionGrid : 1; // 0x9:5(0x1)
		bool bOverride_ScaleEntityCount : 1; // 0x9:6(0x1)
		bool bOverride_ActorClass : 1; // 0x9:7(0x1)
		bool bOverride_bCanBeDamaged : 1; // 0xA:0(0x1)
		bool bOverride_bIgnoreModifierVolumes : 1; // 0xA:1(0x1)
		bool bOverride_bControlPhysicsState : 1; // 0xA:2(0x1)
		bool bInstancesCastShadows; // 0xB(0x1)
		unsigned char UnknownData00_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		double MaxActorDistance; // 0x10(0x8)
		bool bDisableAutoDistanceCulling; // 0x18(0x1)
		bool bControlPhysicsState; // 0x19(0x1)
		unsigned char UnknownData01_6[0x6]; // 0x1A(0x6) UNKNOWN PROPERTY
		double MaxInstanceDistance; // 0x20(0x8)
		TArray<double> MaxInstanceDistances; // 0x28(0x10)
		TArray<float> LODDistanceScales; // 0x38(0x10)
		TArray<bool> AffectDistanceFieldLighting; // 0x48(0x10)
		double DetailedRepresentationLODDistance; // 0x58(0x8)
		double ForceLowRepresentationLODDistance; // 0x60(0x8)
		int32_t WorldPositionOffsetDisableDistance; // 0x68(0x4)
		bool bEjectOnActorMoved; // 0x6C(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x6D(0x3) UNKNOWN PROPERTY
		float ActorEjectionMovementThreshold; // 0x70(0x4)
		bool bCanEverAffectNavigation; // 0x74(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x75(0x3) UNKNOWN PROPERTY
		FName OverrideWorldPartitionGrid; // 0x78(0x4)
		float ScaleEntityCount; // 0x7C(0x4)
		UClass* ActorClass; // 0x80(0x8)
		bool bCanBeDamaged; // 0x88(0x1)
		bool bIgnoreModifierVolumes; // 0x89(0x1)
		unsigned char UnknownData04_6[0x6]; // 0x8A(0x6) UNKNOWN PROPERTY
		TArray<FName> AppliedSettingsOverrides; // 0x90(0x10)
	};


	// Struct InstancedActors.InstancedActorsClassSettingsBase
	// Inherited from FTableRowBase
	// Size: 0x10 (0x18 - 0x8)
	struct FInstancedActorsClassSettingsBase : public FTableRowBase	
	{
	public:
		TArray<FName> BaseSettings; // 0x8(0x10)
	};


	// Struct InstancedActors.InstancedActorsClassSettings
	// Inherited from FInstancedActorsClassSettingsBase -> FTableRowBase
	// Size: 0xA0 (0xB8 - 0x18)
	struct FInstancedActorsClassSettings : public FInstancedActorsClassSettingsBase	
	{
	public:
		FInstancedActorsSettings OverrideSettings; // 0x18(0xA0)
	};


	// Struct InstancedActors.InstancedActorsTagSet
	// Size: 0x28 (0x28 - 0x0)
	struct FInstancedActorsTagSet	
	{
	public:
		FGameplayTagContainer Tags; // 0x0(0x20)
		uint32_t Hash; // 0x20(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
	};


	// Struct InstancedActors.InstancedActorsVisualizationDesc
	// Size: 0x10 (0x10 - 0x0)
	struct FInstancedActorsVisualizationDesc	
	{
	public:
		TArray<FISMComponentDescriptor> ISMComponentDescriptors; // 0x0(0x10)
	};


	// Struct InstancedActors.InstancedActorsSoftVisualizationDesc
	// Size: 0x10 (0x10 - 0x0)
	struct FInstancedActorsSoftVisualizationDesc	
	{
	public:
		TArray<FSoftISMComponentDescriptor> ISMComponentDescriptors; // 0x0(0x10)
	};


	// Struct InstancedActors.InstancedActorsVisualizationInfo
	// Size: 0x50 (0x50 - 0x0)
	struct FInstancedActorsVisualizationInfo	
	{
	public:
		FInstancedActorsVisualizationDesc VisualizationDesc; // 0x0(0x10)
		TArray<UInstancedStaticMeshComponent*> ISMComponents; // 0x10(0x10)
		FStaticMeshInstanceVisualizationDescHandle MassStaticMeshDescHandle; // 0x20(0x2)
		unsigned char UnknownData00_7[0x2E]; // 0x22(0x2E) UNKNOWN PROPERTY
	};


	// Struct InstancedActors.InstancedActorsMeshSwitchFragment
	// Inherited from FMassFragment
	// Size: 0x2 (0x2 - 0x0)
	struct FInstancedActorsMeshSwitchFragment : public FMassFragment	
	{
	public:
		FStaticMeshInstanceVisualizationDescHandle NewStaticMeshDescHandle; // 0x0(0x2)
	};


	// Struct InstancedActors.InstancedActorsManagerHandle
	// Size: 0x4 (0x4 - 0x0)
	struct FInstancedActorsManagerHandle	
	{
	public:
		int32_t ManagerID; // 0x0(0x4)
	};


	// Struct InstancedActors.InstancedActorsModifierVolumeHandle
	// Size: 0x4 (0x4 - 0x0)
	struct FInstancedActorsModifierVolumeHandle	
	{
	public:
		int32_t ModifierVolumeID; // 0x0(0x4)
	};


	// Struct InstancedActors.InstancedActorsDataSharedFragment
	// Inherited from FMassSharedFragment
	// Size: 0x18 (0x18 - 0x0)
	struct FInstancedActorsDataSharedFragment : public FMassSharedFragment	
	{
	public:
		TWeakObjectPtr<UInstancedActorsData*> InstanceData; // 0x0(0x8)
		unsigned char UnknownData00_7[0x10]; // 0x8(0x10) UNKNOWN PROPERTY
	};


	// Struct InstancedActors.InstancedActorsFragment
	// Inherited from FMassFragment
	// Size: 0xC (0xC - 0x0)
	struct FInstancedActorsFragment : public FMassFragment	
	{
	public:
		TWeakObjectPtr<UInstancedActorsData*> InstanceData; // 0x0(0x8)
		FInstancedActorsInstanceIndex InstanceIndex; // 0x8(0x2)
		unsigned char UnknownData00_7[0x2]; // 0xA(0x2) UNKNOWN PROPERTY
	};

}
