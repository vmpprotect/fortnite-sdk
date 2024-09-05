#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: SparksCameraDirectorRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class SparksCameraDirectorRuntime.SparksCameraShotPool
	// Inherited from UDataAsset -> UObject
	// Size: 0x98 (0xC8 - 0x30)
	class USparksCameraShotPool : public UDataAsset	
	{
	public:
		TArray Shots; // 0x30(0x10)
		bool bIgnoreShotTags; // 0x40(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x41(0x7) UNKNOWN PROPERTY
		FGameplayTagContainer PoolTags; // 0x48(0x20)
		FSparksCameraFilter PoolFilter; // 0x68(0x60)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCameraDirectorRuntime.SparksCameraShotPool");
			return ret;
		}
	};


	// Class SparksCameraDirectorRuntime.SparksCameraDebugWidget
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x2B8 - 0x2B8)
	class USparksCameraDebugWidget : public UUserWidget	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCameraDirectorRuntime.SparksCameraDebugWidget");
			return ret;
		}

		void SetEventRouter(UGameplayEventRouterComponent EventRouter); // Flags: Event|Public|BlueprintCallable|BlueprintEvent 0x7FF414C16678
		void LogToScreen(FString Data, ESparksCameraLogType Type); // Flags: Event|Public|BlueprintCallable|BlueprintEvent 0x7FF414C16598
		void ClearCurrent(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent 0x7FF414C164B8
		void ClearAll(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent 0x7FF414C163D8
	};


	// Class SparksCameraDirectorRuntime.SparksCameraDirectorComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x1F0 (0x290 - 0xA0)
	class USparksCameraDirectorComponent : public UActorComponent	
	{
	public:
		USparksCameraDirectorConfig MainConfig; // 0xA0(0x8)
		USparksCameraDirectorConfig QAConfig; // 0xA8(0x8)
		USparksCameraDirectorConfig PerfConfig; // 0xB0(0x8)
		TArray CustomConfig; // 0xB8(0x10)
		USparksCameraDirectorConfig Config; // 0xC8(0x8)
		unsigned char UnknownData08_6[0x8]; // 0xD0(0x8) UNKNOWN PROPERTY
		float MinShotTimeSeconds; // 0xD8(0x4)
		unsigned char UnknownData09_6[0x4]; // 0xDC(0x4) UNKNOWN PROPERTY
		TArray Sequences; // 0xE0(0x10)
		USparksPerformanceMap PerformanceMap; // 0xF0(0x8)
		USparksCameraDebugWidget DebugWidget; // 0xF8(0x8)
		FGameplayTagContainer IntermissionTags; // 0x100(0x20)
		ALevelSequenceActor SequenceActor; // 0x120(0x8)
		USparksLevelSequencePlayer SequencePlayer; // 0x128(0x8)
		bool bCamerasAreActive; // 0x130(0x1)
		bool bCamerasAreLocked; // 0x131(0x1)
		unsigned char UnknownData10_6[0x2]; // 0x132(0x2) UNKNOWN PROPERTY
		TWeakObjectPtr DataProvider; // 0x134(0x8)
		int32_t DebugTargetIndex; // 0x13C(0x4)
		int32_t CurrentSequenceIndex; // 0x140(0x4)
		int32_t CurrentSequenceEntryIndex; // 0x144(0x4)
		bool bHasActiveDynamicEvent; // 0x148(0x1)
		unsigned char UnknownData11_6[0x7]; // 0x149(0x7) UNKNOWN PROPERTY
		FSparksCommonDynamicCameraDirectorEvent DynamicEvent; // 0x150(0x38)
		unsigned char UnknownData12_6[0x18]; // 0x188(0x18) UNKNOWN PROPERTY
		FSparksCameraDirectorSequenceEntry CurrentPlayingEntry; // 0x1A0(0x80)
		FSparksCameraDirectorSequence IntermissionSequence; // 0x220(0x28)
		int32_t CurrentIntermissionSequenceEntryIndex; // 0x248(0x4)
		unsigned char UnknownData13_6[0x4]; // 0x24C(0x4) UNKNOWN PROPERTY
		FGameplayTagContainer LastKnownIntermissionTags; // 0x250(0x20)
		bool bForceCameraViewTargetEnabled; // 0x270(0x1)
		unsigned char UnknownData14_6[0x3]; // 0x271(0x3) UNKNOWN PROPERTY
		int32_t EvalStartIndex; // 0x274(0x4)
		int32_t EvalEndIndex; // 0x278(0x4)
		int32_t CurrentShotPasses; // 0x27C(0x4)
		int32_t CurrentCloseupReplaceAttempts; // 0x280(0x4)
		int32_t CurrentRevertToIntermissionAttempts; // 0x284(0x4)
		unsigned char UnknownData15_7[0x8]; // 0x288(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCameraDirectorRuntime.SparksCameraDirectorComponent");
			return ret;
		}

		void StartIntermissionCameras(float ForceLengthMS, bool bForceReloadNewSequence, bool bForceShotChange); // Flags: Final|Native|Public 0x7FF414C177F8
		void Reset(bool bForceShotChange); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C17718
		void ReplaceWithNonCloseupShot(FSparksCameraDirectorSequenceEntry& OldEntry); // Flags: Final|Native|Protected|HasOutParms 0x7FF414C17638
		float PlayShot(FSparksCameraDirectorSequenceEntry& Entry); // Flags: Final|Native|Protected|HasOutParms 0x7FF414C17558
		void PlaySequenceEntry(FSparksCameraDirectorSequenceEntry& Entry, float MsOffset, bool bIntermission, AActor ForceTarget); // Flags: Final|Native|Protected|HasOutParms 0x7FF414C17478
		void PlayNextShotV2(float StartTimeOffset); // Flags: Final|Native|Protected 0x7FF414C17398
		void PlayNextShot(float StartTimeOffset); // Flags: Final|Native|Protected 0x7FF414C172B8
		void OnShotFinished(); // Flags: Final|Native|Protected 0x7FF414C171D8
		void LogToScreen(FString Data, ESparksCameraLogType Type, float TimeSeconds); // Flags: Final|Native|Protected 0x7FF414C170F8
		void InsertSequence(FSparksCameraDirectorSequence& Sequence); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable 0x7FF414C17018
		void InsertPerformanceMap(USparksPerformanceMap Map); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C16F38
		void InitDynamicCameras(); // Flags: Final|Native|Protected 0x7FF414C16E58
		void HandleIntermissionTagsEvent(FSparksCommonIntermissionCameraDirectorEvent& Payload); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414C16D78
		void HandleForceIntermissionEvent(FSparksCommonForceIntermissionCameraDirectorEvent& Payload); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414C16C98
		void HandleDirectorDynamicEvent(FSparksCommonDynamicCameraDirectorEvent& Payload); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414C16BB8
		bool GetCameraActive(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C16AD8
		float FindStartTimeForNextShotInSequenceMS(float TimeToTest); // Flags: Final|Native|Protected 0x7FF414C169F8
		bool FindCurrentShot(int32_t& SequenceIndex, int32_t& EntryIndex, float StartTimeIn); // Flags: Final|Native|Protected|HasOutParms 0x7FF414C16918
		void DebugLockSpecificCameraShot(FSparksCameraShot Shot, bool bLockToFirstFrame, AActor Target); // Flags: Net|NetReliableNative|Event|NetMulticast|Protected|BlueprintCallable 0x7FF414C16838
		void ActivateCameraControl(bool bActive); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C16758
	};


	// Class SparksCameraDirectorRuntime.SparksCameraDirectorConfig
	// Inherited from UDataAsset -> UObject
	// Size: 0x148 (0x178 - 0x30)
	class USparksCameraDirectorConfig : public UDataAsset	
	{
	public:
		float MaxIntermissionShotTimeSeconds; // 0x30(0x4)
		float MaxGeneratedShotTimeSeconds; // 0x34(0x4)
		float MinTimeBetweenSameShotSeconds; // 0x38(0x4)
		float MaxRetriesToFindShot; // 0x3C(0x4)
		FSparksCameraSectionWrapper DefaultSequenceGenerator; // 0x40(0xA8)
		USparksCameraDirectorSequenceGenerator RuntimeDefaultSequenceGenerator; // 0xE8(0x8)
		TArray SequenceGenerators; // 0xF0(0x10)
		TArray RuntimeSequenceGenerators; // 0x100(0x10)
		TWeakObjectPtr DataProvider; // 0x110(0x8)
		UClass DebugWidgetClass; // 0x118(0x8)
		TMap ShotTimestamps; // 0x120(0x50)
		bool bInitialized; // 0x170(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x171(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCameraDirectorRuntime.SparksCameraDirectorConfig");
			return ret;
		}

		bool ShouldUseShot(ULevelSequence Shot, float AtTimestamp); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C17EF8
		void ResetCache(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C17E18
		void MarkShotTime(ULevelSequence Shot, float AtTimestamp); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C17D38
		void Init(); // Flags: Final|Native|Public 0x7FF414C17C58
		bool GenerateSequence(FSparksPerformanceMapSection& Section, FSparksCameraDirectorSequence& OutSequence); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent 0x7FF414C17B78
		bool GenerateEntry(FSparksPerformanceMapSection& Section, FSparksCameraDirectorSequenceEntry& OutEntry); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent 0x7FF414C17A98
		USparksCameraDirectorSequenceGenerator FindBestGenerator(FSparksPerformanceMapSection& Section); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable 0x7FF414C179B8
		bool CanGenerateShots(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C178D8
	};


	// Class SparksCameraDirectorRuntime.SparksCameraPluginDataProvider
	// Inherited from UActorComponent -> UObject
	// Size: 0x80 (0x120 - 0xA0)
	class USparksCameraPluginDataProvider : public UActorComponent	
	{
	public:
		TArray StageMarks; // 0xA0(0x10)
		TMap PlayerAirtime; // 0xB0(0x50)
		TArray StaticShots; // 0x100(0x10)
		bool bAutomaticallyRegisterStageMarks; // 0x110(0x1)
		unsigned char UnknownData01_7[0xF]; // 0x111(0xF) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCameraDirectorRuntime.SparksCameraPluginDataProvider");
			return ret;
		}

		bool ShouldTreatAsLocalPlayerState(APlayerState PlayerState); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C18EB8
		void SetLocalPlayerOverride(APlayerState PlayerState); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C18DD8
		void RemoveStageMarksWithTags(FGameplayTagContainer& TagsToRemove); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414C18CF8
		void RemoveStageMark(ASparksCameraStageMark Mark); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C18C18
		void RemoveAllStageMarks(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C18B38
		void RegisterStageMark(ASparksCameraStageMark Mark); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C18A58
		bool GetValidTimestamp(float DesiredTimestampMS, float& OutTimestampMSHigh, float& OutTimestampMSLow); // Flags: Native|Public|HasOutParms|BlueprintCallable 0x7FF414C18978
		bool GetTargetRelevantTags(AActor Target, FSparksCameraFilter& TagsOut); // Flags: Native|Public|HasOutParms|BlueprintCallable 0x7FF414C18898
		AActor GetTargetForCloseup(float ShotTimeMS, FGameplayTagContainer& TagsOut, bool bPreferLocal); // Flags: Native|Public|HasOutParms|BlueprintCallable 0x7FF414C187B8
		int32_t GetStaticShotCount(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C186D8
		bool GetStaticShot(int32_t Index, FSparksCameraShot& OutShot); // Flags: Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414C185F8
		AActor GetMatchingStageMarkTarget(FGameplayTagContainer& Tags, float ShotTimeMS); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414C18518
		AActor GetMatchingPlayerTarget(FGameplayTagContainer& Tags, float ShotTimeMS, bool bPreferLocal); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414C18438
		AActor GetMatchingCameraTarget(FGameplayTagContainer& Tags, float ShotTimeMS, bool bPreferLocal); // Flags: Native|Public|HasOutParms|BlueprintCallable 0x7FF414C18358
		APlayerState GetLocalPlayerOverride(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C18278
		float GetCurrentMSTimeInCameraEvent(); // Flags: Native|Public|BlueprintCallable 0x7FF414C18198
		TArray GetAllTargets(); // Flags: Native|Public|BlueprintCallable|BlueprintPure 0x7FF414C180B8
		void AddRelevantTagsForPlayer(FPlayspaceUser& User, FGameplayTagContainer& PlayerTagsOut); // Flags: Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414C17FD8
	};


	// Class SparksCameraDirectorRuntime.SparksCameraShotSelectRuleBase
	// Inherited from UObject
	// Size: 0x28 (0x50 - 0x28)
	class USparksCameraShotSelectRuleBase : public UObject	
	{
	public:
		bool bIsInitialized; // 0x28(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x29(0x7) UNKNOWN PROPERTY
		USparksCameraShotPool Pool; // 0x30(0x8)
		TArray ShotIndexes; // 0x38(0x10)
		int32_t Index; // 0x48(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x4C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCameraDirectorRuntime.SparksCameraShotSelectRuleBase");
			return ret;
		}

		bool Reset(); // Flags: Native|Event|Public|BlueprintEvent 0x7FF414C19238
		bool Init(USparksCameraShotPool InPool); // Flags: Native|Event|Public|BlueprintEvent 0x7FF414C19158
		int32_t GetShotCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C19078
		bool ChooseShot(FSparksPerformanceMapSection& Section, FSparksCameraDirectorSequenceEntry& OutShot); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent 0x7FF414C18F98
	};


	// Class SparksCameraDirectorRuntime.SparksCameraPoolSelectRuleBase
	// Inherited from UObject
	// Size: 0xE8 (0x110 - 0x28)
	class USparksCameraPoolSelectRuleBase : public UObject	
	{
	public:
		bool bIsInitialized; // 0x28(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x29(0x7) UNKNOWN PROPERTY
		FSparksCameraSectionWrapper Wrapper; // 0x30(0xA8)
		TArray PoolIndexes; // 0xD8(0x10)
		TArray PoolRules; // 0xE8(0x10)
		USparksCameraShotSelectRuleBase IntroPoolRule; // 0xF8(0x8)
		USparksCameraShotSelectRuleBase ExitPoolRule; // 0x100(0x8)
		int32_t Index; // 0x108(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x10C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCameraDirectorRuntime.SparksCameraPoolSelectRuleBase");
			return ret;
		}

		bool Reset(); // Flags: Native|Event|Public|BlueprintEvent 0x7FF414C19858
		bool Init(FSparksCameraSectionWrapper& Section); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent 0x7FF414C19778
		int32_t GetShotCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C19698
		int32_t GetPoolCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C195B8
		bool ChooseShot(FSparksPerformanceMapSection& Section, FSparksCameraDirectorSequenceEntry& OutShot); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent 0x7FF414C194D8
		bool ChooseIntroShot(FSparksPerformanceMapSection& Section, FSparksCameraDirectorSequenceEntry& OutShot); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent 0x7FF414C193F8
		bool ChooseExitShot(FSparksPerformanceMapSection& Section, FSparksCameraDirectorSequenceEntry& OutShot); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent 0x7FF414C19318
	};


	// Class SparksCameraDirectorRuntime.SparksShotSelectRuleRandomized
	// Inherited from USparksCameraShotSelectRuleBase -> UObject
	// Size: 0x0 (0x50 - 0x50)
	class USparksShotSelectRuleRandomized : public USparksCameraShotSelectRuleBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCameraDirectorRuntime.SparksShotSelectRuleRandomized");
			return ret;
		}
	};


	// Class SparksCameraDirectorRuntime.SparksShotSelectRuleSequential
	// Inherited from USparksCameraShotSelectRuleBase -> UObject
	// Size: 0x0 (0x50 - 0x50)
	class USparksShotSelectRuleSequential : public USparksCameraShotSelectRuleBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCameraDirectorRuntime.SparksShotSelectRuleSequential");
			return ret;
		}
	};


	// Class SparksCameraDirectorRuntime.SparksShotSelectRuleScored
	// Inherited from USparksCameraShotSelectRuleBase -> UObject
	// Size: 0x0 (0x50 - 0x50)
	class USparksShotSelectRuleScored : public USparksCameraShotSelectRuleBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCameraDirectorRuntime.SparksShotSelectRuleScored");
			return ret;
		}
	};


	// Class SparksCameraDirectorRuntime.SparksPoolSelectRuleRandomized
	// Inherited from USparksCameraPoolSelectRuleBase -> UObject
	// Size: 0x0 (0x110 - 0x110)
	class USparksPoolSelectRuleRandomized : public USparksCameraPoolSelectRuleBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCameraDirectorRuntime.SparksPoolSelectRuleRandomized");
			return ret;
		}
	};


	// Class SparksCameraDirectorRuntime.SparksPoolSelectRuleSequential
	// Inherited from USparksCameraPoolSelectRuleBase -> UObject
	// Size: 0x0 (0x110 - 0x110)
	class USparksPoolSelectRuleSequential : public USparksCameraPoolSelectRuleBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCameraDirectorRuntime.SparksPoolSelectRuleSequential");
			return ret;
		}
	};


	// Class SparksCameraDirectorRuntime.SparksPoolSelectRuleScored
	// Inherited from USparksCameraPoolSelectRuleBase -> UObject
	// Size: 0x0 (0x110 - 0x110)
	class USparksPoolSelectRuleScored : public USparksCameraPoolSelectRuleBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCameraDirectorRuntime.SparksPoolSelectRuleScored");
			return ret;
		}
	};


	// Class SparksCameraDirectorRuntime.SparksCameraDirectorSequenceGenerator
	// Inherited from UObject
	// Size: 0xC0 (0xE8 - 0x28)
	class USparksCameraDirectorSequenceGenerator : public UObject	
	{
	public:
		bool bIsInitialized; // 0x28(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x29(0x7) UNKNOWN PROPERTY
		FSparksCameraSectionWrapper SectionData; // 0x30(0xA8)
		USparksCameraPoolSelectRuleBase SelectionRule; // 0xD8(0x8)
		USparksCameraDirectorConfig CameraConfig; // 0xE0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCameraDirectorRuntime.SparksCameraDirectorSequenceGenerator");
			return ret;
		}

		bool Reset(); // Flags: Native|Event|Public|BlueprintEvent 0x7FF414C19F58
		bool Init(FSparksCameraSectionWrapper& InPool, USparksCameraDirectorConfig Config); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent 0x7FF414C19E78
		bool HasEntries(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C19D98
		FSparksCameraFilter GetFilter(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C19CB8
		ESparksSectionGeneratorResult GenerateSequence(FSparksPerformanceMapSection& Section, USparksCameraPluginDataProvider DataProvider, FSparksCameraDirectorSequence& OutSequence); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent 0x7FF414C19BD8
		ESparksSectionGeneratorResult GenerateIntroEntry(FSparksPerformanceMapSection& Section, USparksCameraPluginDataProvider DataProvider, FSparksCameraDirectorSequenceEntry& OutEntry); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent 0x7FF414C19AF8
		ESparksSectionGeneratorResult GenerateExitEntry(FSparksPerformanceMapSection& Section, USparksCameraPluginDataProvider DataProvider, FSparksCameraDirectorSequenceEntry& OutEntry); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent 0x7FF414C19A18
		ESparksSectionGeneratorResult GenerateEntry(FSparksPerformanceMapSection& Section, USparksCameraPluginDataProvider DataProvider, FSparksCameraDirectorSequenceEntry& OutEntry); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent 0x7FF414C19938
	};


	// Class SparksCameraDirectorRuntime.SparksCameraStageMark
	// Inherited from AActor -> UObject
	// Size: 0x20 (0x2B0 - 0x290)
	class ASparksCameraStageMark : public AActor	
	{
	public:
		FGameplayTagContainer CameraTags; // 0x290(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCameraDirectorRuntime.SparksCameraStageMark");
			return ret;
		}
	};


	// Class SparksCameraDirectorRuntime.SparksCamera_BPFL
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class USparksCamera_BPFL : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCameraDirectorRuntime.SparksCamera_BPFL");
			return ret;
		}

		ESparksFilterResult ScoreTagsAgainstFilter(FSparksCameraFilter& Filter, FGameplayTagContainer& TagsToMatch, float& OutScore); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C1A2D8
		float ScoreTagContainers(FGameplayTagContainer& Tags1, FGameplayTagContainer& Tags2); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C1A1F8
		FGameplayTag GetTagForMidiEventName(FString EventString); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C1A118
		FGameplayTag GetSubTagForMidiEventName(FString EventString); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C1A038
	};


	// Class SparksCameraDirectorRuntime.SparksDefaultLevelSequenceInstanceData
	// Inherited from UDefaultLevelSequenceInstanceData -> UObject
	// Size: 0x80 (0x120 - 0xA0)
	class USparksDefaultLevelSequenceInstanceData : public UDefaultLevelSequenceInstanceData	
	{
	public:
		USkeletalMeshComponent MeshToAttachTo; // 0xA0(0x8)
		unsigned char UnknownData01_7[0x78]; // 0xA8(0x78) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCameraDirectorRuntime.SparksDefaultLevelSequenceInstanceData");
			return ret;
		}
	};


	// Class SparksCameraDirectorRuntime.SparksLevelSequenceActor
	// Inherited from ALevelSequenceActor -> AActor -> UObject
	// Size: 0x0 (0x330 - 0x330)
	class ASparksLevelSequenceActor : public ALevelSequenceActor	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCameraDirectorRuntime.SparksLevelSequenceActor");
			return ret;
		}
	};


	// Class SparksCameraDirectorRuntime.SparksLevelSequencePlayer
	// Inherited from ULevelSequencePlayer -> UMovieSceneSequencePlayer -> UObject
	// Size: 0x20 (0x590 - 0x570)
	class USparksLevelSequencePlayer : public ULevelSequencePlayer	
	{
	public:
		ACineCameraActor SpawnedCamera; // 0x570(0x8)
		USkeletalMeshComponent TargetMesh; // 0x578(0x8)
		AActor SpawnedLookAtTraget; // 0x580(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x588(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCameraDirectorRuntime.SparksLevelSequencePlayer");
			return ret;
		}

		USparksLevelSequencePlayer SparksCreateLevelSequencePlayer(UObject WorldContextObject, ULevelSequence LevelSequence, FMovieSceneSequencePlaybackSettings Settings, ASparksLevelSequenceActor& OutActor, USkeletalMeshComponent TargetActor, FSparksCameraShot& Shot); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414C1A3B8
	};


	// Class SparksCameraDirectorRuntime.SparksPerformanceMap
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class USparksPerformanceMap : public UObject	
	{
	public:
		TArray Timeline; // 0x28(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCameraDirectorRuntime.SparksPerformanceMap");
			return ret;
		}

		int32_t InsertTimeline(USparksPerformanceMap Map, int32_t& OutFirstIndex, int32_t& OutLastIndex, bool bOverwrite); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414C1A818
		int32_t GetSectionIndexAtTime(float TimeMS); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C1A738
		int32_t GetNextSectionIndexAtTime(float TimeMS); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C1A658
		void FixupSectionTimeLengths(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C1A578
		void AddSection(float StartMS, FGameplayTag& PrimaryTag, FGameplayTagContainer& SecondaryTags); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414C1A498
	};

}
