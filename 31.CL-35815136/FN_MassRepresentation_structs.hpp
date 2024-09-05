#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: MassRepresentation
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct MassRepresentation.MassDistanceLODProcessorTag
	// Inherited from FMassTag
	// Size: 0x0 (0x1 - 0x1)
	struct FMassDistanceLODProcessorTag : public FMassTag	
	{
	public:
	};


	// Struct MassRepresentation.MassStaticRepresentationTag
	// Inherited from FMassTag
	// Size: 0x0 (0x1 - 0x1)
	struct FMassStaticRepresentationTag : public FMassTag	
	{
	public:
	};


	// Struct MassRepresentation.MassRepresentationLODFragment
	// Inherited from FMassFragment
	// Size: 0x8 (0x8 - 0x0)
	struct FMassRepresentationLODFragment : public FMassFragment	
	{
	public:
		TEnumAsByte<EMassLOD> LOD; // 0x0(0x1)
		TEnumAsByte<EMassLOD> PrevLOD; // 0x1(0x1)
		EMassVisibility Visibility; // 0x2(0x1)
		EMassVisibility PrevVisibility; // 0x3(0x1)
		float LODSignificance; // 0x4(0x4)
	};


	// Struct MassRepresentation.MassRepresentationFragment
	// Inherited from FMassFragment
	// Size: 0x80 (0x80 - 0x0)
	struct FMassRepresentationFragment : public FMassFragment	
	{
	public:
		EMassRepresentationType CurrentRepresentation; // 0x0(0x1)
		EMassRepresentationType PrevRepresentation; // 0x1(0x1)
		int16_t HighResTemplateActorIndex; // 0x2(0x2)
		int16_t LowResTemplateActorIndex; // 0x4(0x2)
		FStaticMeshInstanceVisualizationDescHandle StaticMeshDescHandle; // 0x6(0x2)
		FMassActorSpawnRequestHandle ActorSpawnRequestHandle; // 0x8(0x8)
		FTransform PrevTransform; // 0x10(0x60)
		float PrevLODSignificance; // 0x70(0x4)
		unsigned char UnknownData00_7[0xC]; // 0x74(0xC) UNKNOWN PROPERTY
	};


	// Struct MassRepresentation.StaticMeshInstanceVisualizationDescHandle
	// Size: 0x2 (0x2 - 0x0)
	struct FStaticMeshInstanceVisualizationDescHandle	
	{
	public:
		uint16_t Index; // 0x0(0x2)
	};


	// Struct MassRepresentation.MassRepresentationSubsystemSharedFragment
	// Inherited from FMassSharedFragment
	// Size: 0x8 (0x8 - 0x0)
	struct FMassRepresentationSubsystemSharedFragment : public FMassSharedFragment	
	{
	public:
		UMassRepresentationSubsystem* RepresentationSubsystem; // 0x0(0x8)
	};


	// Struct MassRepresentation.MassRepresentationParameters
	// Inherited from FMassConstSharedFragment
	// Size: 0x28 (0x28 - 0x0)
	struct FMassRepresentationParameters : public FMassConstSharedFragment	
	{
	public:
		UClass* RepresentationActorManagementClass; // 0x0(0x8)
		EMassRepresentationType LODRepresentation; // 0x8(0x4)
		bool bForceActorRepresentationForExternalActors : 1; // 0xC:0(0x1)
		bool bKeepLowResActors : 1; // 0xC:1(0x1)
		bool bKeepActorExtraFrame : 1; // 0xC:2(0x1)
		bool bSpreadFirstVisualizationUpdate : 1; // 0xC:3(0x1)
		unsigned char UnknownData00_5[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
		FName WorldPartitionGridNameContainingCollision; // 0x10(0x4)
		float NotVisibleUpdateRate; // 0x14(0x4)
		EMassRepresentationType CachedDefaultRepresentationType; // 0x18(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x19(0x7) UNKNOWN PROPERTY
		UMassRepresentationActorManagement* CachedRepresentationActorManagement; // 0x20(0x8)
	};


	// Struct MassRepresentation.MassVisualizationLODParameters
	// Inherited from FMassConstSharedFragment
	// Size: 0x48 (0x48 - 0x0)
	struct FMassVisualizationLODParameters : public FMassConstSharedFragment	
	{
	public:
		float BaseLODDistance; // 0x0(0x10)
		float VisibleLODDistance; // 0x10(0x10)
		float BufferHysteresisOnDistancePercentage; // 0x20(0x4)
		int32_t LODMaxCount; // 0x24(0x10)
		float DistanceToFrustum; // 0x34(0x4)
		float DistanceToFrustumHysteresis; // 0x38(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY
		UScriptStruct* FilterTag; // 0x40(0x8)
	};


	// Struct MassRepresentation.MassVisualizationLODSharedFragment
	// Inherited from FMassSharedFragment
	// Size: 0x2028 (0x2028 - 0x0)
	struct FMassVisualizationLODSharedFragment : public FMassSharedFragment	
	{
	public:
		unsigned char UnknownData00_3[0x2020]; // 0x0(0x2020) UNKNOWN PROPERTY
		UScriptStruct* FilterTag; // 0x2020(0x8)
	};


	// Struct MassRepresentation.MassDistanceLODParameters
	// Inherited from FMassConstSharedFragment
	// Size: 0x20 (0x20 - 0x0)
	struct FMassDistanceLODParameters : public FMassConstSharedFragment	
	{
	public:
		float LODDistance; // 0x0(0x10)
		float BufferHysteresisOnDistancePercentage; // 0x10(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
		UScriptStruct* FilterTag; // 0x18(0x8)
	};


	// Struct MassRepresentation.MassDistanceLODSharedFragment
	// Inherited from FMassSharedFragment
	// Size: 0x2020 (0x2020 - 0x0)
	struct FMassDistanceLODSharedFragment : public FMassSharedFragment	
	{
	public:
		unsigned char UnknownData00_3[0x2018]; // 0x0(0x2018) UNKNOWN PROPERTY
		UScriptStruct* FilterTag; // 0x2018(0x8)
	};


	// Struct MassRepresentation.MassRepresentationUpdateParams
	// Size: 0x1 (0x1 - 0x0)
	struct FMassRepresentationUpdateParams	
	{
	public:
		bool bTestCollisionAvailibilityForActorVisualization; // 0x0(0x1)
	};


	// Struct MassRepresentation.MassVisualizationProcessorTag
	// Inherited from FMassTag
	// Size: 0x0 (0x1 - 0x1)
	struct FMassVisualizationProcessorTag : public FMassTag	
	{
	public:
	};


	// Struct MassRepresentation.MassStaticMeshInstanceVisualizationMeshDesc
	// Size: 0x30 (0x30 - 0x0)
	struct FMassStaticMeshInstanceVisualizationMeshDesc	
	{
	public:
		UStaticMesh* Mesh; // 0x0(0x8)
		TArray<UMaterialInterface*> MaterialOverrides; // 0x8(0x10)
		float MinLODSignificance; // 0x18(0x4)
		float MaxLODSignificance; // 0x1C(0x4)
		bool bCastShadows; // 0x20(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x21(0x7) UNKNOWN PROPERTY
		UClass* ISMComponentClass; // 0x28(0x8)
	};


	// Struct MassRepresentation.StaticMeshInstanceVisualizationDesc
	// Inherited from FTableRowBase
	// Size: 0x78 (0x80 - 0x8)
	struct FStaticMeshInstanceVisualizationDesc : public FTableRowBase	
	{
	public:
		TArray<FMassStaticMeshInstanceVisualizationMeshDesc> Meshes; // 0x8(0x10)
		bool bUseTransformOffset; // 0x18(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x19(0x7) UNKNOWN PROPERTY
		FTransform TransformOffset; // 0x20(0x60)
	};


	// Struct MassRepresentation.MassLODSignificanceRange
	// Size: 0x20 (0x20 - 0x0)
	struct FMassLODSignificanceRange	
	{
	public:
		unsigned char UnknownData00_2[0x20]; // 0x0(0x20) UNKNOWN PROPERTY
	};


	// Struct MassRepresentation.MassInstancedStaticMeshInfo
	// Size: 0xA0 (0xA0 - 0x0)
	struct FMassInstancedStaticMeshInfo	
	{
	public:
		FStaticMeshInstanceVisualizationDesc Desc; // 0x0(0x80)
		TArray<UInstancedStaticMeshComponent*> InstancedStaticMeshComponents; // 0x80(0x10)
		TArray<FMassLODSignificanceRange> LODSignificanceRanges; // 0x90(0x10)
	};


	// Struct MassRepresentation.MassStationaryISMSwitcherProcessorTag
	// Inherited from FMassTag
	// Size: 0x0 (0x1 - 0x1)
	struct FMassStationaryISMSwitcherProcessorTag : public FMassTag	
	{
	public:
	};


	// Struct MassRepresentation.MassVisualizationLODProcessorTag
	// Inherited from FMassTag
	// Size: 0x0 (0x1 - 0x1)
	struct FMassVisualizationLODProcessorTag : public FMassTag	
	{
	public:
	};

}
