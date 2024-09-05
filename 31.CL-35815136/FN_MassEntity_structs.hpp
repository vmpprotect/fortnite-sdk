#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: MassEntity
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct MassEntity.MassFragmentRequirements
	// Size: 0x268 (0x268 - 0x0)
	struct FMassFragmentRequirements	
	{
	public:
		unsigned char UnknownData00_2[0x268]; // 0x0(0x268) UNKNOWN PROPERTY
	};


	// Struct MassEntity.MassEntityQuery
	// Inherited from FMassFragmentRequirements
	// Size: 0xB8 (0x320 - 0x268)
	struct FMassEntityQuery : public FMassFragmentRequirements	
	{
	public:
		unsigned char UnknownData00_1[0xB8]; // 0x268(0xB8) UNKNOWN PROPERTY
	};


	// Struct MassEntity.MassFragment
	// Size: 0x1 (0x1 - 0x0)
	struct FMassFragment	
	{
	public:
	};


	// Struct MassEntity.MassTag
	// Size: 0x1 (0x1 - 0x0)
	struct FMassTag	
	{
	public:
		unsigned char UnknownData00_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct MassEntity.MassChunkFragment
	// Size: 0x1 (0x1 - 0x0)
	struct FMassChunkFragment	
	{
	public:
	};


	// Struct MassEntity.MassSharedFragment
	// Size: 0x1 (0x1 - 0x0)
	struct FMassSharedFragment	
	{
	public:
	};


	// Struct MassEntity.MassConstSharedFragment
	// Size: 0x1 (0x1 - 0x0)
	struct FMassConstSharedFragment	
	{
	public:
	};


	// Struct MassEntity.MassEntityHandle
	// Size: 0x8 (0x8 - 0x0)
	struct FMassEntityHandle	
	{
	public:
		int32_t Index; // 0x0(0x4)
		int32_t SerialNumber; // 0x4(0x4)
	};


	// Struct MassEntity.MassEntityView
	// Size: 0x20 (0x20 - 0x0)
	struct FMassEntityView	
	{
	public:
		unsigned char UnknownData00_2[0x20]; // 0x0(0x20) UNKNOWN PROPERTY
	};


	// Struct MassEntity.MassObserversMap
	// Size: 0x50 (0x50 - 0x0)
	struct FMassObserversMap	
	{
	public:
		TMap<UScriptStruct*, FMassRuntimePipeline> Container; // 0x0(0x50)
	};


	// Struct MassEntity.MassRuntimePipeline
	// Size: 0x18 (0x18 - 0x0)
	struct FMassRuntimePipeline	
	{
	public:
		TArray<UMassProcessor*> Processors; // 0x0(0x10)
		unsigned char UnknownData00_7[0x8]; // 0x10(0x8) UNKNOWN PROPERTY
	};


	// Struct MassEntity.MassObserverManager
	// Size: 0x1C8 (0x1C8 - 0x0)
	struct FMassObserverManager	
	{
	public:
		unsigned char UnknownData00_7[0x80]; // 0x0(0x80) UNKNOWN PROPERTY
		FMassObserversMap FragmentObservers; // 0x80(0xA0)
		FMassObserversMap TagObservers; // 0x120(0xA0)
		unsigned char UnknownData01_7[0x8]; // 0x1C0(0x8) UNKNOWN PROPERTY
	};


	// Struct MassEntity.MassProcessorClassCollection
	// Size: 0x10 (0x10 - 0x0)
	struct FMassProcessorClassCollection	
	{
	public:
		TArray<UClass*> ClassCollection; // 0x0(0x10)
	};


	// Struct MassEntity.MassEntityObserverClassesMap
	// Size: 0x50 (0x50 - 0x0)
	struct FMassEntityObserverClassesMap	
	{
	public:
		TMap<UScriptStruct*, FMassProcessorClassCollection> Container; // 0x0(0x50)
	};


	// Struct MassEntity.MassProcessingPhaseConfig
	// Size: 0x20 (0x20 - 0x0)
	struct FMassProcessingPhaseConfig	
	{
	public:
		FName PhaseName; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		UClass* PhaseGroupClass; // 0x8(0x8)
		TArray<UMassProcessor*> ProcessorCDOs; // 0x10(0x10)
	};


	// Struct MassEntity.ProcessorAuxDataBase
	// Size: 0x1 (0x1 - 0x0)
	struct FProcessorAuxDataBase	
	{
	public:
		unsigned char UnknownData00_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct MassEntity.MassProcessingContext
	// Size: 0x40 (0x40 - 0x0)
	struct FMassProcessingContext	
	{
	public:
		unsigned char UnknownData00_7[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
		float DeltaSeconds; // 0x10(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
		FInstancedStruct AuxData; // 0x18(0x10)
		bool bFlushCommandBuffer; // 0x28(0x1)
		unsigned char UnknownData02_7[0x17]; // 0x29(0x17) UNKNOWN PROPERTY
	};


	// Struct MassEntity.MassProcessorExecutionOrder
	// Size: 0x28 (0x28 - 0x0)
	struct FMassProcessorExecutionOrder	
	{
	public:
		FName ExecuteInGroup; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TArray<FName> ExecuteBefore; // 0x8(0x10)
		TArray<FName> ExecuteAfter; // 0x18(0x10)
	};


	// Struct MassEntity.MassSubsystemRequirements
	// Size: 0x48 (0x48 - 0x0)
	struct FMassSubsystemRequirements	
	{
	public:
		unsigned char UnknownData00_2[0x48]; // 0x0(0x48) UNKNOWN PROPERTY
	};

}
