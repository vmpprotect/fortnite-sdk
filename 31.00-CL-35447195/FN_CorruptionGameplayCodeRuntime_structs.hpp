#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: CorruptionGameplayCodeRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct CorruptionGameplayCodeRuntime.WarEffortFundingOptionData
	// Size: 0x10 (0x10 - 0x0)
	struct FWarEffortFundingOptionData	
	{
	public:
		FGameplayTag OptionTag; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		int64_t CurrentFundingAmount; // 0x8(0x8)
	};


	// Struct CorruptionGameplayCodeRuntime.WarEffortFundingChoiceData
	// Size: 0x28 (0x28 - 0x0)
	struct FWarEffortFundingChoiceData	
	{
	public:
		FWarEffortFundingOptionData Option1; // 0x0(0x10)
		FWarEffortFundingOptionData Option2; // 0x10(0x10)
		int64_t TargetFundingAmount; // 0x20(0x8)
	};


	// Struct CorruptionGameplayCodeRuntime.WarEffortIndexedFundingData
	// Size: 0x20 (0x20 - 0x0)
	struct FWarEffortIndexedFundingData	
	{
	public:
		TArray CurrentFundingArray; // 0x0(0x10)
		int64_t FinalFundingAmount; // 0x10(0x8)
		int64_t TowerFundingAmount; // 0x18(0x8)
	};


	// Struct CorruptionGameplayCodeRuntime.WarEffortFundingMetadata
	// Inherited from FMeshMetaDataStruct
	// Size: 0x30 (0x30 - 0x0)
	struct FWarEffortFundingMetadata : public FMeshMetaDataStruct	
	{
	public:
		FWarEffortIndexedFundingData IndexedFundingData; // 0x0(0x20)
		TArray FundingChoices; // 0x20(0x10)
	};


	// Struct CorruptionGameplayCodeRuntime.CubeMovement_CorruptionGenerationSplinePointData
	// Size: 0x70 (0x70 - 0x0)
	struct FCubeMovement_CorruptionGenerationSplinePointData	
	{
	public:
		FTransform SplinePointTransform; // 0x0(0x60)
		float SplinePercentComplete; // 0x60(0x4)
		unsigned char UnknownData01_7[0xC]; // 0x64(0xC) UNKNOWN PROPERTY
	};


	// Struct CorruptionGameplayCodeRuntime.CubeMovement_CorruptionGenerationTravelerData
	// Size: 0x18 (0x18 - 0x0)
	struct FCubeMovement_CorruptionGenerationTravelerData	
	{
	public:
		TArray SplinePointData; // 0x0(0x10)
		AFortScriptedObjectMovement_MovableObjectBase PathTraveler; // 0x10(0x8)
	};


	// Struct CorruptionGameplayCodeRuntime.CubeMovement_CorruptionGenerationData
	// Size: 0x10 (0x10 - 0x0)
	struct FCubeMovement_CorruptionGenerationData	
	{
	public:
		TArray TravelerData; // 0x0(0x10)
	};


	// Struct CorruptionGameplayCodeRuntime.CorruptionCalendarEventData
	// Size: 0x18 (0x18 - 0x0)
	struct FCorruptionCalendarEventData	
	{
	public:
		FString EventName; // 0x0(0x10)
		float StartPercent; // 0x10(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct CorruptionGameplayCodeRuntime.CorruptionPauseEvent
	// Size: 0x18 (0x18 - 0x0)
	struct FCorruptionPauseEvent	
	{
	public:
		FString EventName; // 0x0(0x10)
		float PercentDurationToPause; // 0x10(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct CorruptionGameplayCodeRuntime.TravelerStepCorruptionOverrideData
	// Size: 0x50 (0x50 - 0x0)
	struct FTravelerStepCorruptionOverrideData	
	{
	public:
		TMap PointGroupStepPercentOverrides; // 0x0(0x50)
	};


	// Struct CorruptionGameplayCodeRuntime.WarEffortMutatorChoiceData
	// Size: 0x68 (0x68 - 0x0)
	struct FWarEffortMutatorChoiceData	
	{
	public:
		FGameplayTag FundingTag; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TArray SoftRefsToLoad; // 0x8(0x10)
		TMap LootTableMods; // 0x18(0x50)
	};


	// Struct CorruptionGameplayCodeRuntime.WarEffortMutatorMetadata
	// Inherited from FMeshMetaDataStruct
	// Size: 0x20 (0x20 - 0x0)
	struct FWarEffortMutatorMetadata : public FMeshMetaDataStruct	
	{
	public:
		TArray ActiveFundedItems; // 0x0(0x10)
		TArray ActiveTryBeforeYouBuyItems; // 0x10(0x10)
	};


	// Struct CorruptionGameplayCodeRuntime.WarEffortFundingData
	// Size: 0x8 (0x8 - 0x0)
	struct FWarEffortFundingData	
	{
	public:
		FGameplayTag FundingTag; // 0x0(0x4)
		float FundedPercent; // 0x4(0x4)
	};

}
