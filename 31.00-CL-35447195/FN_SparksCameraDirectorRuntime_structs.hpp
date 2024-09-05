#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: SparksCameraDirectorRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct SparksCameraDirectorRuntime.SparksCameraShot
	// Size: 0x48 (0x48 - 0x0)
	struct FSparksCameraShot	
	{
	public:
		ULevelSequence Sequence; // 0x0(0x8)
		FName MoveToSocketName; // 0x8(0x4)
		bool bAttachToActor; // 0xC(0x1)
		bool bUseSocketRotationOnAttach; // 0xD(0x1)
		unsigned char UnknownData02_6[0x2]; // 0xE(0x2) UNKNOWN PROPERTY
		float AttachInterpSpeed; // 0x10(0x4)
		FName LookAtSocketName; // 0x14(0x4)
		float LookAtInterpSpeed; // 0x18(0x4)
		float MinTimeSeconds; // 0x1C(0x4)
		float MaxTimeSeconds; // 0x20(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
		FGameplayTagContainer Tags; // 0x28(0x20)
	};


	// Struct SparksCameraDirectorRuntime.SparksCameraPoolWrapper
	// Size: 0x10 (0x10 - 0x0)
	struct FSparksCameraPoolWrapper	
	{
	public:
		UClass ShotSelectionRule; // 0x0(0x8)
		USparksCameraShotPool Pool; // 0x8(0x8)
	};


	// Struct SparksCameraDirectorRuntime.SparksCameraSectionWrapper
	// Size: 0xA8 (0xA8 - 0x0)
	struct FSparksCameraSectionWrapper	
	{
	public:
		FName Name; // 0x0(0x4)
		int32_t Priority; // 0x4(0x4)
		float MaxGeneratedShotTimeSeconds; // 0x8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		UClass PoolSelectionRule; // 0x10(0x8)
		FSparksCameraPoolWrapper IntroPool; // 0x18(0x10)
		TArray Pools; // 0x28(0x10)
		FSparksCameraPoolWrapper ExitPool; // 0x38(0x10)
		FSparksCameraFilter SectionFilter; // 0x48(0x60)
	};


	// Struct SparksCameraDirectorRuntime.SparksCameraFilter
	// Size: 0x60 (0x60 - 0x0)
	struct FSparksCameraFilter	
	{
	public:
		FGameplayTagContainer Required; // 0x0(0x20)
		FGameplayTagContainer Preferred; // 0x20(0x20)
		FGameplayTagContainer Excluded; // 0x40(0x20)
	};


	// Struct SparksCameraDirectorRuntime.SparksCameraShotUses
	// Size: 0x10 (0x10 - 0x0)
	struct FSparksCameraShotUses	
	{
	public:
		TArray TimeStamps; // 0x0(0x10)
	};


	// Struct SparksCameraDirectorRuntime.SparksCommonStartCameraDirectorEvent
	// Size: 0x1 (0x1 - 0x0)
	struct FSparksCommonStartCameraDirectorEvent	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct SparksCameraDirectorRuntime.SparksCommonStopCameraDirectorEvent
	// Size: 0x1 (0x1 - 0x0)
	struct FSparksCommonStopCameraDirectorEvent	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct SparksCameraDirectorRuntime.SparksCommonForceIntermissionCameraDirectorEvent
	// Size: 0x20 (0x20 - 0x0)
	struct FSparksCommonForceIntermissionCameraDirectorEvent	
	{
	public:
		FGameplayTagContainer Tags; // 0x0(0x20)
	};


	// Struct SparksCameraDirectorRuntime.SparksCommonResetCameraDirectorEvent
	// Size: 0x1 (0x1 - 0x0)
	struct FSparksCommonResetCameraDirectorEvent	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct SparksCameraDirectorRuntime.SparksCommonDynamicCameraDirectorEvent
	// Size: 0x38 (0x38 - 0x0)
	struct FSparksCommonDynamicCameraDirectorEvent	
	{
	public:
		bool bWaitForTransition; // 0x0(0x1)
		bool bForceTransition; // 0x1(0x1)
		unsigned char UnknownData03_6[0x2]; // 0x2(0x2) UNKNOWN PROPERTY
		float LengthSeconds; // 0x4(0x4)
		bool bPreferLocalPlayer; // 0x8(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
		TWeakObjectPtr PreferredTarget; // 0xC(0x8)
		bool bOverwriteActiveDynamicEvent; // 0x14(0x1)
		unsigned char UnknownData05_6[0x3]; // 0x15(0x3) UNKNOWN PROPERTY
		FGameplayTagContainer Tags; // 0x18(0x20)
	};


	// Struct SparksCameraDirectorRuntime.SparksCommonIntermissionCameraDirectorEvent
	// Size: 0x20 (0x20 - 0x0)
	struct FSparksCommonIntermissionCameraDirectorEvent	
	{
	public:
		FGameplayTagContainer Tags; // 0x0(0x20)
	};


	// Struct SparksCameraDirectorRuntime.SparksCommonCameraDebugLogEvent
	// Size: 0x18 (0x18 - 0x0)
	struct FSparksCommonCameraDebugLogEvent	
	{
	public:
		FString Data; // 0x0(0x10)
		ESparksCameraLogType Type; // 0x10(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
	};


	// Struct SparksCameraDirectorRuntime.SparksCameraDirectorSequenceEntry
	// Size: 0x80 (0x80 - 0x0)
	struct FSparksCameraDirectorSequenceEntry	
	{
	public:
		FName GeneratorName; // 0x0(0x4)
		FName SectionName; // 0x4(0x4)
		bool bChooseLocalShot; // 0x8(0x1)
		bool bPreferLocalPlayer; // 0x9(0x1)
		unsigned char UnknownData04_6[0x2]; // 0xA(0x2) UNKNOWN PROPERTY
		TWeakObjectPtr PreferredTarget; // 0xC(0x8)
		float StartTimeMS; // 0x14(0x4)
		float LengthMS; // 0x18(0x4)
		TWeakObjectPtr TargetActor; // 0x1C(0x8)
		unsigned char UnknownData05_6[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
		FSparksCameraShot Shot; // 0x28(0x48)
		bool bIsDynamicEntry; // 0x70(0x1)
		unsigned char UnknownData06_6[0x3]; // 0x71(0x3) UNKNOWN PROPERTY
		TWeakObjectPtr GeneratedTargetActor; // 0x74(0x8)
		unsigned char UnknownData07_7[0x4]; // 0x7C(0x4) UNKNOWN PROPERTY
	};


	// Struct SparksCameraDirectorRuntime.SparksCameraDirectorSequence
	// Size: 0x28 (0x28 - 0x0)
	struct FSparksCameraDirectorSequence	
	{
	public:
		FString SectionName; // 0x0(0x10)
		float StartTimeMS; // 0x10(0x4)
		float LengthMS; // 0x14(0x4)
		TArray Entries; // 0x18(0x10)
	};


	// Struct SparksCameraDirectorRuntime.SparksPerformanceMapSection
	// Size: 0x90 (0x90 - 0x0)
	struct FSparksPerformanceMapSection	
	{
	public:
		float StartMS; // 0x0(0x4)
		float LengthMS; // 0x4(0x4)
		FGameplayTag PrimaryTag; // 0x8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FGameplayTagContainer Tags; // 0x10(0x20)
		FSparksCameraFilter ShotsFilter; // 0x30(0x60)
	};

}
