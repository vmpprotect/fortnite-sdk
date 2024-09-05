#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: MassLOD
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct MassLOD.MassHighLODTag
	// Inherited from FMassTag
	// Size: 0x0 (0x1 - 0x1)
	struct FMassHighLODTag : public FMassTag	
	{
	public:
	};


	// Struct MassLOD.MassMediumLODTag
	// Inherited from FMassTag
	// Size: 0x0 (0x1 - 0x1)
	struct FMassMediumLODTag : public FMassTag	
	{
	public:
	};


	// Struct MassLOD.MassLowLODTag
	// Inherited from FMassTag
	// Size: 0x0 (0x1 - 0x1)
	struct FMassLowLODTag : public FMassTag	
	{
	public:
	};


	// Struct MassLOD.MassOffLODTag
	// Inherited from FMassTag
	// Size: 0x0 (0x1 - 0x1)
	struct FMassOffLODTag : public FMassTag	
	{
	public:
	};


	// Struct MassLOD.MassViewerInfoFragment
	// Inherited from FMassFragment
	// Size: 0x8 (0x8 - 0x0)
	struct FMassViewerInfoFragment : public FMassFragment	
	{
	public:
		float ClosestViewerDistanceSq; // 0x0(0x4)
		float ClosestDistanceToFrustum; // 0x4(0x4)
	};


	// Struct MassLOD.MassVariableTickChunkFragment
	// Inherited from FMassChunkFragment
	// Size: 0xC (0xC - 0x0)
	struct FMassVariableTickChunkFragment : public FMassChunkFragment	
	{
	public:
		bool bShouldTickThisFrame; // 0x0(0x1)
		TEnumAsByte<EMassLOD> LOD; // 0x1(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x2(0x2) UNKNOWN PROPERTY
		float TimeUntilNextTick; // 0x4(0x4)
		int32_t LastChunkSerialModificationNumber; // 0x8(0x4)
	};


	// Struct MassLOD.MassCollectLODViewerInfoTag
	// Inherited from FMassTag
	// Size: 0x0 (0x1 - 0x1)
	struct FMassCollectLODViewerInfoTag : public FMassTag	
	{
	public:
	};


	// Struct MassLOD.MassCollectDistanceLODViewerInfoTag
	// Inherited from FMassTag
	// Size: 0x0 (0x1 - 0x1)
	struct FMassCollectDistanceLODViewerInfoTag : public FMassTag	
	{
	public:
	};


	// Struct MassLOD.MassVisibilityCanBeSeenTag
	// Inherited from FMassTag
	// Size: 0x0 (0x1 - 0x1)
	struct FMassVisibilityCanBeSeenTag : public FMassTag	
	{
	public:
	};


	// Struct MassLOD.MassVisibilityCulledByFrustumTag
	// Inherited from FMassTag
	// Size: 0x0 (0x1 - 0x1)
	struct FMassVisibilityCulledByFrustumTag : public FMassTag	
	{
	public:
	};


	// Struct MassLOD.MassVisibilityCulledByDistanceTag
	// Inherited from FMassTag
	// Size: 0x0 (0x1 - 0x1)
	struct FMassVisibilityCulledByDistanceTag : public FMassTag	
	{
	public:
	};


	// Struct MassLOD.MassVisualizationChunkFragment
	// Inherited from FMassChunkFragment
	// Size: 0x8 (0x8 - 0x0)
	struct FMassVisualizationChunkFragment : public FMassChunkFragment	
	{
	public:
		EMassVisibility Visibility; // 0x0(0x1)
		bool bContainsNewlyVisibleEntity; // 0x1(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x2(0x2) UNKNOWN PROPERTY
		float DeltaTime; // 0x4(0x4)
	};


	// Struct MassLOD.MassViewerHandle
	// Inherited from FIndexedHandleBase -> FSimpleIndexedHandleBase
	// Size: 0x0 (0x8 - 0x8)
	struct FMassViewerHandle : public FIndexedHandleBase	
	{
	public:
	};


	// Struct MassLOD.ViewerInfo
	// Size: 0x60 (0x60 - 0x0)
	struct FViewerInfo	
	{
	public:
		AActor* ActorViewer; // 0x0(0x8)
		unsigned char UnknownData00_7[0x58]; // 0x8(0x58) UNKNOWN PROPERTY
	};


	// Struct MassLOD.MassSimulationLODFragment
	// Inherited from FMassFragment
	// Size: 0x8 (0x8 - 0x0)
	struct FMassSimulationLODFragment : public FMassFragment	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct MassLOD.MassSimulationVariableTickFragment
	// Inherited from FMassFragment
	// Size: 0x10 (0x10 - 0x0)
	struct FMassSimulationVariableTickFragment : public FMassFragment	
	{
	public:
		unsigned char UnknownData00_1[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
	};


	// Struct MassLOD.MassSimulationVariableTickChunkFragment
	// Inherited from FMassVariableTickChunkFragment -> FMassChunkFragment
	// Size: 0x0 (0xC - 0xC)
	struct FMassSimulationVariableTickChunkFragment : public FMassVariableTickChunkFragment	
	{
	public:
	};


	// Struct MassLOD.MassSimulationLODParameters
	// Inherited from FMassConstSharedFragment
	// Size: 0x28 (0x28 - 0x0)
	struct FMassSimulationLODParameters : public FMassConstSharedFragment	
	{
	public:
		float LODDistance; // 0x0(0x10)
		float BufferHysteresisOnDistancePercentage; // 0x10(0x4)
		int32_t LODMaxCount; // 0x14(0x10)
		bool bSetLODTags; // 0x24(0x1)
		unsigned char UnknownData00_7[0x3]; // 0x25(0x3) UNKNOWN PROPERTY
	};


	// Struct MassLOD.MassSimulationVariableTickParameters
	// Inherited from FMassConstSharedFragment
	// Size: 0x14 (0x14 - 0x0)
	struct FMassSimulationVariableTickParameters : public FMassConstSharedFragment	
	{
	public:
		float TickRates; // 0x0(0x10)
		bool bSpreadFirstSimulationUpdate; // 0x10(0x1)
		unsigned char UnknownData00_7[0x3]; // 0x11(0x3) UNKNOWN PROPERTY
	};


	// Struct MassLOD.MassSimulationLODSharedFragment
	// Inherited from FMassSharedFragment
	// Size: 0x2020 (0x2020 - 0x0)
	struct FMassSimulationLODSharedFragment : public FMassSharedFragment	
	{
	public:
		unsigned char UnknownData00_1[0x2020]; // 0x0(0x2020) UNKNOWN PROPERTY
	};


	// Struct MassLOD.MassSimulationVariableTickSharedFragment
	// Inherited from FMassSharedFragment
	// Size: 0x30 (0x30 - 0x0)
	struct FMassSimulationVariableTickSharedFragment : public FMassSharedFragment	
	{
	public:
		unsigned char UnknownData00_1[0x30]; // 0x0(0x30) UNKNOWN PROPERTY
	};

}
