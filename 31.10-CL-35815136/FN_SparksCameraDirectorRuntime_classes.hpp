#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: SparksCameraDirectorRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class SparksCameraDirectorRuntime.SparksCameraShotPool
	// Inherited from UDataAsset -> UObject
	// Size: 0x98 (0xC8 - 0x30)
	class USparksCameraShotPool : public UDataAsset	
	{
	public:
		TArray<FSparksCameraShot> Shots; // 0x30(0x10)
		bool bIgnoreShotTags; // 0x40(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x41(0x7) UNKNOWN PROPERTY
		FGameplayTagContainer PoolTags; // 0x48(0x20)
		FSparksCameraFilter PoolFilter; // 0x68(0x60)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCameraDirectorRuntime.SparksCameraShotPool");
			return ret;
		}
	};


	// Class SparksCameraDirectorRuntime.SparksCameraDebugWidget
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x2B0 - 0x2B0)
	class USparksCameraDebugWidget : public UUserWidget	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCameraDirectorRuntime.SparksCameraDebugWidget");
			return ret;
		}

		void SetEventRouter(UGameplayEventRouterComponent* EventRouter); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void LogToScreen(FString Data, ESparksCameraLogType Type); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ClearCurrent(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ClearAll(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class SparksCameraDirectorRuntime.SparksCameraDirectorComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x1F0 (0x290 - 0xA0)
	class USparksCameraDirectorComponent : public UActorComponent	
	{
	public:
		USparksCameraDirectorConfig* MainConfig; // 0xA0(0x8)
		USparksCameraDirectorConfig* QAConfig; // 0xA8(0x8)
		USparksCameraDirectorConfig* PerfConfig; // 0xB0(0x8)
		TArray<USparksCameraDirectorConfig*> CustomConfig; // 0xB8(0x10)
		USparksCameraDirectorConfig* Config; // 0xC8(0x8)
		unsigned char UnknownData00_6[0x8]; // 0xD0(0x8) UNKNOWN PROPERTY
		float MinShotTimeSeconds; // 0xD8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xDC(0x4) UNKNOWN PROPERTY
		TArray<FSparksCameraDirectorSequence> Sequences; // 0xE0(0x10)
		USparksPerformanceMap* PerformanceMap; // 0xF0(0x8)
		USparksCameraDebugWidget* DebugWidget; // 0xF8(0x8)
		FGameplayTagContainer IntermissionTags; // 0x100(0x20)
		ALevelSequenceActor* SequenceActor; // 0x120(0x8)
		USparksLevelSequencePlayer* SequencePlayer; // 0x128(0x8)
		bool bCamerasAreActive; // 0x130(0x1)
		bool bCamerasAreLocked; // 0x131(0x1)
		unsigned char UnknownData02_6[0x2]; // 0x132(0x2) UNKNOWN PROPERTY
		TWeakObjectPtr<USparksCameraPluginDataProvider*> DataProvider; // 0x134(0x8)
		int32_t DebugTargetIndex; // 0x13C(0x4)
		int32_t CurrentSequenceIndex; // 0x140(0x4)
		int32_t CurrentSequenceEntryIndex; // 0x144(0x4)
		bool bHasActiveDynamicEvent; // 0x148(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x149(0x7) UNKNOWN PROPERTY
		FSparksCommonDynamicCameraDirectorEvent DynamicEvent; // 0x150(0x38)
		unsigned char UnknownData04_6[0x18]; // 0x188(0x18) UNKNOWN PROPERTY
		FSparksCameraDirectorSequenceEntry CurrentPlayingEntry; // 0x1A0(0x80)
		FSparksCameraDirectorSequence IntermissionSequence; // 0x220(0x28)
		int32_t CurrentIntermissionSequenceEntryIndex; // 0x248(0x4)
		unsigned char UnknownData05_6[0x4]; // 0x24C(0x4) UNKNOWN PROPERTY
		FGameplayTagContainer LastKnownIntermissionTags; // 0x250(0x20)
		bool bForceCameraViewTargetEnabled; // 0x270(0x1)
		unsigned char UnknownData06_6[0x3]; // 0x271(0x3) UNKNOWN PROPERTY
		int32_t EvalStartIndex; // 0x274(0x4)
		int32_t EvalEndIndex; // 0x278(0x4)
		int32_t CurrentShotPasses; // 0x27C(0x4)
		int32_t CurrentCloseupReplaceAttempts; // 0x280(0x4)
		int32_t CurrentRevertToIntermissionAttempts; // 0x284(0x4)
		unsigned char UnknownData07_7[0x8]; // 0x288(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCameraDirectorRuntime.SparksCameraDirectorComponent");
			return ret;
		}

		void StartIntermissionCameras(float ForceLengthMS, bool bForceReloadNewSequence, bool bForceShotChange); // Flags: Final|Native|Public, Memory Exec: 0x7FF7510AE6D4(relative to base address)
		void Reset(bool bForceShotChange); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7510AE37C(relative to base address)
		void ReplaceWithNonCloseupShot(FSparksCameraDirectorSequenceEntry& OldEntry); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF7510AE274(relative to base address)
		float PlayShot(FSparksCameraDirectorSequenceEntry& Entry); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF7510ADF04(relative to base address)
		void PlaySequenceEntry(FSparksCameraDirectorSequenceEntry& Entry, float MsOffset, bool bIntermission, AActor* ForceTarget); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF7510ADB9C(relative to base address)
		void PlayNextShotV2(float StartTimeOffset); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7510ADB1C(relative to base address)
		void PlayNextShot(float StartTimeOffset); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7510ADB1C(relative to base address)
		void OnShotFinished(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7510ADB08(relative to base address)
		void LogToScreen(FString Data, ESparksCameraLogType Type, float TimeSeconds); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7510AD930(relative to base address)
		void InsertSequence(FSparksCameraDirectorSequence& Sequence); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7510AD880(relative to base address)
		void InsertPerformanceMap(USparksPerformanceMap* Map); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7510AD800(relative to base address)
		void InitDynamicCameras(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7510AD7EC(relative to base address)
		void HandleIntermissionTagsEvent(FSparksCommonIntermissionCameraDirectorEvent& Payload); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7510AD720(relative to base address)
		void HandleForceIntermissionEvent(FSparksCommonForceIntermissionCameraDirectorEvent& Payload); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7510AD668(relative to base address)
		void HandleDirectorDynamicEvent(FSparksCommonDynamicCameraDirectorEvent& Payload); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7510AD590(relative to base address)
		bool GetCameraActive(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F7116B8(relative to base address)
		float FindStartTimeForNextShotInSequenceMS(float TimeToTest); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7510AC7D8(relative to base address)
		bool FindCurrentShot(int32_t& SequenceIndex, int32_t& EntryIndex, float StartTimeIn); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF7510AC5FC(relative to base address)
		void DebugLockSpecificCameraShot(FSparksCameraShot Shot, bool bLockToFirstFrame, AActor* Target); // Flags: Net|NetReliableNative|Event|NetMulticast|Protected|BlueprintCallable, Memory Exec: 0x7FF7510AC258(relative to base address)
		void ActivateCameraControl(bool bActive); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7510AC048(relative to base address)
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
		USparksCameraDirectorSequenceGenerator* RuntimeDefaultSequenceGenerator; // 0xE8(0x8)
		TArray<FSparksCameraSectionWrapper> SequenceGenerators; // 0xF0(0x10)
		TArray<USparksCameraDirectorSequenceGenerator*> RuntimeSequenceGenerators; // 0x100(0x10)
		TWeakObjectPtr<USparksCameraPluginDataProvider*> DataProvider; // 0x110(0x8)
		UClass* DebugWidgetClass; // 0x118(0x8)
		TMap<ULevelSequence*, FSparksCameraShotUses> ShotTimestamps; // 0x120(0x50)
		bool bInitialized; // 0x170(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x171(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCameraDirectorRuntime.SparksCameraDirectorConfig");
			return ret;
		}

		bool ShouldUseShot(ULevelSequence* Shot, float AtTimestamp); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7510AE610(relative to base address)
		void ResetCache(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7510AE3FC(relative to base address)
		void MarkShotTime(ULevelSequence* Shot, float AtTimestamp); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7510ADA44(relative to base address)
		void Init(); // Flags: Final|Native|Public, Memory Exec: 0x7FF7510AD7D8(relative to base address)
		bool GenerateSequence(FSparksPerformanceMapSection& Section, FSparksCameraDirectorSequence& OutSequence); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7510AC9F8(relative to base address)
		bool GenerateEntry(FSparksPerformanceMapSection& Section, FSparksCameraDirectorSequenceEntry& OutEntry); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7510AC868(relative to base address)
		USparksCameraDirectorSequenceGenerator FindBestGenerator(FSparksPerformanceMapSection& Section); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7510AC548(relative to base address)
		bool CanGenerateShots(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510AC234(relative to base address)
	};


	// Class SparksCameraDirectorRuntime.SparksCameraPluginDataProvider
	// Inherited from UActorComponent -> UObject
	// Size: 0x80 (0x120 - 0xA0)
	class USparksCameraPluginDataProvider : public UActorComponent	
	{
	public:
		TArray<ASparksCameraStageMark*> StageMarks; // 0xA0(0x10)
		TMap<FUniqueNetIdRepl, float> PlayerAirtime; // 0xB0(0x50)
		TArray<FSparksCameraShot> StaticShots; // 0x100(0x10)
		bool bAutomaticallyRegisterStageMarks; // 0x110(0x1)
		unsigned char UnknownData00_7[0xF]; // 0x111(0xF) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCameraDirectorRuntime.SparksCameraPluginDataProvider");
			return ret;
		}

		bool ShouldTreatAsLocalPlayerState(APlayerState* PlayerState); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7510AE510(relative to base address)
		void SetLocalPlayerOverride(APlayerState* PlayerState); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7510AE410(relative to base address)
		void RemoveStageMarksWithTags(FGameplayTagContainer& TagsToRemove); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7510AE198(relative to base address)
		void RemoveStageMark(ASparksCameraStageMark* Mark); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7510AE110(relative to base address)
		void RemoveAllStageMarks(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7510AE0E0(relative to base address)
		void RegisterStageMark(ASparksCameraStageMark* Mark); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7510AE024(relative to base address)
		bool GetValidTimestamp(float DesiredTimestampMS, float& OutTimestampMSHigh, float& OutTimestampMSLow); // Flags: Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7510AD46C(relative to base address)
		bool GetTargetRelevantTags(AActor* Target, FSparksCameraFilter& TagsOut); // Flags: Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7510AD354(relative to base address)
		AActor GetTargetForCloseup(float ShotTimeMS, FGameplayTagContainer& TagsOut, bool bPreferLocal); // Flags: Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7510AD1C4(relative to base address)
		int32_t GetStaticShotCount(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510AD19C(relative to base address)
		bool GetStaticShot(int32_t Index, FSparksCameraShot& OutShot); // Flags: Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510AD070(relative to base address)
		AActor GetMatchingStageMarkTarget(FGameplayTagContainer& Tags, float ShotTimeMS); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7510ACF20(relative to base address)
		AActor GetMatchingPlayerTarget(FGameplayTagContainer& Tags, float ShotTimeMS, bool bPreferLocal); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7510ACD58(relative to base address)
		AActor GetMatchingCameraTarget(FGameplayTagContainer& Tags, float ShotTimeMS, bool bPreferLocal); // Flags: Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7510ACB88(relative to base address)
		APlayerState GetLocalPlayerOverride(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510ACB60(relative to base address)
		float GetCurrentMSTimeInCameraEvent(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C4E7E90(relative to base address)
		TArray GetAllTargets(); // Flags: Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7510ACB1C(relative to base address)
		void AddRelevantTagsForPlayer(FPlayspaceUser& User, FGameplayTagContainer& PlayerTagsOut); // Flags: Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510AC0C8(relative to base address)
	};


	// Class SparksCameraDirectorRuntime.SparksCameraShotSelectRuleBase
	// Inherited from UObject
	// Size: 0x28 (0x50 - 0x28)
	class USparksCameraShotSelectRuleBase : public UObject	
	{
	public:
		bool bIsInitialized; // 0x28(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x29(0x7) UNKNOWN PROPERTY
		USparksCameraShotPool* Pool; // 0x30(0x8)
		TArray<int32_t> ShotIndexes; // 0x38(0x10)
		int32_t Index; // 0x48(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x4C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCameraDirectorRuntime.SparksCameraShotSelectRuleBase");
			return ret;
		}

		bool Reset(); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7493F5558(relative to base address)
		bool Init(USparksCameraShotPool* InPool); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF74F92F0A4(relative to base address)
		int32_t GetShotCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510B8EA0(relative to base address)
		bool ChooseShot(FSparksPerformanceMapSection& Section, FSparksCameraDirectorSequenceEntry& OutShot); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7510B8318(relative to base address)
	};


	// Class SparksCameraDirectorRuntime.SparksCameraPoolSelectRuleBase
	// Inherited from UObject
	// Size: 0xE8 (0x110 - 0x28)
	class USparksCameraPoolSelectRuleBase : public UObject	
	{
	public:
		bool bIsInitialized; // 0x28(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x29(0x7) UNKNOWN PROPERTY
		FSparksCameraSectionWrapper Wrapper; // 0x30(0xA8)
		TArray<int32_t> PoolIndexes; // 0xD8(0x10)
		TArray<USparksCameraShotSelectRuleBase*> PoolRules; // 0xE8(0x10)
		USparksCameraShotSelectRuleBase* IntroPoolRule; // 0xF8(0x8)
		USparksCameraShotSelectRuleBase* ExitPoolRule; // 0x100(0x8)
		int32_t Index; // 0x108(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x10C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCameraDirectorRuntime.SparksCameraPoolSelectRuleBase");
			return ret;
		}

		bool Reset(); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7493F5558(relative to base address)
		bool Init(FSparksCameraSectionWrapper& Section); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7510B919C(relative to base address)
		int32_t GetShotCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510B8E7C(relative to base address)
		int32_t GetPoolCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74E4BA1AC(relative to base address)
		bool ChooseShot(FSparksPerformanceMapSection& Section, FSparksCameraDirectorSequenceEntry& OutShot); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7510B8318(relative to base address)
		bool ChooseIntroShot(FSparksPerformanceMapSection& Section, FSparksCameraDirectorSequenceEntry& OutShot); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7510B8184(relative to base address)
		bool ChooseExitShot(FSparksPerformanceMapSection& Section, FSparksCameraDirectorSequenceEntry& OutShot); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7510B7FF0(relative to base address)
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
		unsigned char UnknownData00_6[0x7]; // 0x29(0x7) UNKNOWN PROPERTY
		FSparksCameraSectionWrapper SectionData; // 0x30(0xA8)
		USparksCameraPoolSelectRuleBase* SelectionRule; // 0xD8(0x8)
		USparksCameraDirectorConfig* CameraConfig; // 0xE0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCameraDirectorRuntime.SparksCameraDirectorSequenceGenerator");
			return ret;
		}

		bool Reset(); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF74C3A036C(relative to base address)
		bool Init(FSparksCameraSectionWrapper& InPool, USparksCameraDirectorConfig* Config); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7510B9000(relative to base address)
		bool HasEntries(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510B8FE0(relative to base address)
		FSparksCameraFilter GetFilter(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7510B8D3C(relative to base address)
		ESparksSectionGeneratorResult GenerateSequence(FSparksPerformanceMapSection& Section, USparksCameraPluginDataProvider* DataProvider, FSparksCameraDirectorSequence& OutSequence); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7510B8B68(relative to base address)
		ESparksSectionGeneratorResult GenerateIntroEntry(FSparksPerformanceMapSection& Section, USparksCameraPluginDataProvider* DataProvider, FSparksCameraDirectorSequenceEntry& OutEntry); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7510B8930(relative to base address)
		ESparksSectionGeneratorResult GenerateExitEntry(FSparksPerformanceMapSection& Section, USparksCameraPluginDataProvider* DataProvider, FSparksCameraDirectorSequenceEntry& OutEntry); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7510B86F8(relative to base address)
		ESparksSectionGeneratorResult GenerateEntry(FSparksPerformanceMapSection& Section, USparksCameraPluginDataProvider* DataProvider, FSparksCameraDirectorSequenceEntry& OutEntry); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7510B84C0(relative to base address)
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

		ESparksFilterResult ScoreTagsAgainstFilter(FSparksCameraFilter& Filter, FGameplayTagContainer& TagsToMatch, float& OutScore); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7510B95B8(relative to base address)
		float ScoreTagContainers(FGameplayTagContainer& Tags1, FGameplayTagContainer& Tags2); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7510B9478(relative to base address)
		FGameplayTag GetTagForMidiEventName(FString EventString); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7510B8F4C(relative to base address)
		FGameplayTag GetSubTagForMidiEventName(FString EventString); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7510B8EB8(relative to base address)
	};


	// Class SparksCameraDirectorRuntime.SparksDefaultLevelSequenceInstanceData
	// Inherited from UDefaultLevelSequenceInstanceData -> UObject
	// Size: 0x80 (0x120 - 0xA0)
	class USparksDefaultLevelSequenceInstanceData : public UDefaultLevelSequenceInstanceData	
	{
	public:
		USkeletalMeshComponent* MeshToAttachTo; // 0xA0(0x8)
		unsigned char UnknownData00_7[0x78]; // 0xA8(0x78) UNKNOWN PROPERTY

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
		ACineCameraActor* SpawnedCamera; // 0x570(0x8)
		USkeletalMeshComponent* TargetMesh; // 0x578(0x8)
		AActor* SpawnedLookAtTraget; // 0x580(0x8)
		unsigned char UnknownData00_7[0x8]; // 0x588(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCameraDirectorRuntime.SparksLevelSequencePlayer");
			return ret;
		}

		USparksLevelSequencePlayer SparksCreateLevelSequencePlayer(UObject* WorldContextObject, ULevelSequence* LevelSequence, FMovieSceneSequencePlaybackSettings Settings, ASparksLevelSequenceActor* OutActor, USkeletalMeshComponent* TargetActor, FSparksCameraShot& Shot); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7510B97A4(relative to base address)
	};


	// Class SparksCameraDirectorRuntime.SparksPerformanceMap
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class USparksPerformanceMap : public UObject	
	{
	public:
		TArray<FSparksPerformanceMapSection> Timeline; // 0x28(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksCameraDirectorRuntime.SparksPerformanceMap");
			return ret;
		}

		int32_t InsertTimeline(USparksPerformanceMap* Map, int32_t& OutFirstIndex, int32_t& OutLastIndex, bool bOverwrite); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7510B9254(relative to base address)
		int32_t GetSectionIndexAtTime(float TimeMS); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510B8DEC(relative to base address)
		int32_t GetNextSectionIndexAtTime(float TimeMS); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510B8D58(relative to base address)
		void FixupSectionTimeLengths(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7510B84AC(relative to base address)
		void AddSection(float StartMS, FGameplayTag& PrimaryTag, FGameplayTagContainer& SecondaryTags); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7510B7EA4(relative to base address)
	};

}
