#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: SparksMusicPlayspaceRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class SparksMusicPlayspaceRuntime.PlayspaceComponent_LipSyncAssetManager
	// Inherited from UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x28 (0xC8 - 0xA0)
	class UPlayspaceComponent_LipSyncAssetManager : public UPlayspaceComponent	
	{
	public:
		FMulticastInlineDelegate OnLipSyncAnimChanged; // 0xA0(0x10)
		unsigned char UnknownData01_7[0x18]; // 0xB0(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksMusicPlayspaceRuntime.PlayspaceComponent_LipSyncAssetManager");
			return ret;
		}

		TWeakObjectPtr TryGetLipSyncAnimAssetForPlayer(APlayerState PlayerState); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4143EDF18
		void LipSyncAnimDecidedDelegate__DelegateSignature(TWeakObjectPtr LipSyncAnimSequence, TArray& PlayerStates); // Flags: MulticastDelegate|Public|Delegate|HasOutParms 0x7FF4143EDE38
	};


	// Class SparksMusicPlayspaceRuntime.PlayspaceComponent_SparksPerfMem
	// Inherited from UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x10 (0xB0 - 0xA0)
	class UPlayspaceComponent_SparksPerfMem : public UPlayspaceComponent	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0xA0(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksMusicPlayspaceRuntime.PlayspaceComponent_SparksPerfMem");
			return ret;
		}

		void StopTrackingServerPerf(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 0x7FF414C1A9D8
		void StartTrackingServerPerf(FSparksServerPerfMemSettings& Settings); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 0x7FF414C1A8F8
	};


	// Class SparksMusicPlayspaceRuntime.SparksMusicPlayspaceInteractorInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class USparksMusicPlayspaceInteractorInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspaceInteractorInterface");
			return ret;
		}

		void ExitedSparksMusicPlayspace(ASparksMusicPlayspace Playspace); // Flags: Native|Event|Public|BlueprintEvent 0x7FF414C1AD58
		void EnteredSparksMusicPlayspace(ASparksMusicPlayspace Playspace); // Flags: Native|Event|Public|BlueprintEvent 0x7FF414C1AC78
		bool DoesSparksMusicPlayspaceInteratorHaveTag(FGameplayTag& tag); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent|Const 0x7FF414C1AB98
		bool AllowedToEnterMusicPlayspace(ASparksMusicPlayspace Playspace); // Flags: Native|Event|Public|BlueprintEvent|Const 0x7FF414C1AAB8
	};


	// Class SparksMusicPlayspaceRuntime.SparksMusicPlayerInterface
	// Inherited from USparksMusicPlayspaceInteractorInterface -> UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class USparksMusicPlayerInterface : public USparksMusicPlayspaceInteractorInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksMusicPlayspaceRuntime.SparksMusicPlayerInterface");
			return ret;
		}

		void SparksMusicPlayerRemovedFromMusicPlayspace(ASparksMusicPlayspace Playspace); // Flags: Event|Public|BlueprintEvent|Const 0x7FF414C1B1B8
		void SparksMusicPlayerAddedToMusicPlayspace(ASparksMusicPlayspace Playspace); // Flags: Event|Public|BlueprintEvent|Const 0x7FF414C1B0D8
		bool ShouldAutoRegister(); // Flags: Native|Event|Public|BlueprintEvent|Const 0x7FF414C1AFF8
		bool IsSparksMusicPlayerPlayingWithKey(); // Flags: Native|Event|Public|BlueprintEvent|Const 0x7FF414C1AF18
		bool IsSparksMusicPlayerPlaying(); // Flags: Native|Event|Public|BlueprintEvent|Const 0x7FF414C1AE38
	};


	// Class SparksMusicPlayspaceRuntime.SparksMusicPlayspace
	// Inherited from AFortPlayspace -> APlayspace -> AInfo -> AActor -> UObject
	// Size: 0xB0 (0x750 - 0x6A0)
	class ASparksMusicPlayspace : public AFortPlayspace	
	{
	public:
		FMulticastInlineDelegate OnMidiEventDriverChanged; // 0x6A0(0x10)
		unsigned char UnknownData02_6[0x18]; // 0x6B0(0x18) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnMidiEventDataParsed; // 0x6C8(0x10)
		unsigned char UnknownData03_6[0x18]; // 0x6D8(0x18) UNKNOWN PROPERTY
		TArray Interactors; // 0x6F0(0x10)
		UAudioComponent MetasoundPlayer; // 0x700(0x8)
		UAudioComponent MetasoundMixer; // 0x708(0x8)
		UMusicClockComponent MusicClock; // 0x710(0x8)
		TArray MusicPlayers; // 0x718(0x10)
		USparksMusicPlayspaceAudioState AudioState; // 0x728(0x8)
		USparksCameraDirectorComponent CameraDirector; // 0x730(0x8)
		UPlayspaceComponent_PlayerManager PlayerManagerComp; // 0x738(0x8)
		UPlayspaceComponent_LipSyncAssetManager LipSyncManager; // 0x740(0x8)
		UPlayspaceComponent_SparksPerfMem PerfMemComp; // 0x748(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspace");
			return ret;
		}

		bool TryGetMusicKeyAndMode(EMusicKey& OutMusicKey, EMusicKeyMode& OutMusicKeyMode); // Flags: Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF4143EDBD8
		TArray TryGetMidiEventDrivers(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4143EDAF8
		TScriptInterface TryGetMidiEventDriverForPlayerState(APlayerState PlayerState); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4143EDA18
		bool RemoveMusicPlayer(UObject MusicPlayer, AActor ForActor); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4143ED938
		bool RemoveInteractor(UObject Interactor, AActor ForActor); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4143ED858
		void OnMeasureEvent(int32_t MeasureNumber); // Flags: Native|Protected 0x7FF4143ED778
		void OnBeatEvent(int32_t BeatNumber, int32_t BeatInBar); // Flags: Native|Protected 0x7FF4143ED698
		void MidiEventDriverChangedDelegate__DelegateSignature(TScriptInterface MidiEventDriver); // Flags: MulticastDelegate|Public|Delegate 0x7FF4143ED5B8
		void MidiEventDataParsedDelegate__DelegateSignature(TScriptInterface MidiEventDriver, UParsedMidiEventData ParsedMidiEventData); // Flags: MulticastDelegate|Public|Delegate 0x7FF4143ED4D8
		bool IsAnyMusicPlayingWithKey(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4143ED3F8
		bool IsAnyMusicPlaying(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4143ED318
		bool HasGameplayTag(FGameplayTag CheckForTag); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4143ED238
		ASparksMusicPlayspace GetSparksMusicPlayspaceOfClassByLocation(UClass PlayspaceType, UObject WorldContextObject, FVector& Location, bool bMatchChildTypes); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF4143ED158
		ASparksMusicPlayspace GetSparksMusicPlayspaceOfClass(UClass PlayspaceType, UObject WorldContextObject, AActor Actor, bool bMatchChildTypes); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF4143ED078
		TArray GetMusicPlayers(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4143ECF98
		TArray GetAllPlayerPawns(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4143ECEB8
		TArray GetAllPlayerControllers(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4143ECDD8
		bool DoesPlayerHaveInstrument(APlayerState PlayerState, ESparksInstrumentType InstrumentType); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4143ECCF8
		void BPEvent_OnUserRemoved(FPlayspaceUser& User, APlayerState PlayerState); // Flags: Event|Public|HasOutParms|BlueprintEvent 0x7FF4143ECC18
		void BPEvent_OnUserAdded(FPlayspaceUser& User, APlayerState PlayerState); // Flags: Event|Public|HasOutParms|BlueprintEvent 0x7FF4143ECB38
		void BPEvent_OnIntialized(); // Flags: Event|Public|BlueprintEvent 0x7FF4143ECA58
		void BP_RemovePlayspaceUser(AController Controller); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4143EC978
		UGameplayEventRouterComponent BP_GetOwnedEventRouter(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4143EC898
		TArray BP_GetAllPlayerStates(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4143EC7B8
		bool AddMusicPlayer(UObject Interactor, AActor ForActor); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4143EC6D8
		bool AddInteractor(UObject Interactor, AActor ForActor); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4143EC5F8
	};


	// Class SparksMusicPlayspaceRuntime.SparksMusicPlayspaceAudioState
	// Inherited from UActorComponent -> UObject
	// Size: 0x8 (0xA8 - 0xA0)
	class USparksMusicPlayspaceAudioState : public UActorComponent	
	{
	public:
		EMusicKey CurrentKey; // 0xA0(0x1)
		EMusicKeyMode CurrentMode; // 0xA1(0x1)
		unsigned char UnknownData01_6[0x2]; // 0xA2(0x2) UNKNOWN PROPERTY
		int32_t CurrentTempo; // 0xA4(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspaceAudioState");
			return ret;
		}

		void TriggerTempoChange(int32_t BPM); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C1BA78
		void TriggerModeChange(EMusicKeyMode InMode); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C1B998
		void TriggerKeyChange(EMusicKey InKey); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414C1B8B8
		void OnRep_OnTempoChanged(); // Flags: Final|Native|Protected 0x7FF414C1B7D8
		void OnRep_OnModeChanged(); // Flags: Final|Native|Protected 0x7FF414C1B6F8
		void OnRep_OnKeyChanged(); // Flags: Final|Native|Protected 0x7FF414C1B618
		int32_t GetCurrentTempo(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C1B538
		EMusicKeyMode GetCurrentKeyMode(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C1B458
		EMusicKey GetCurrentKey(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C1B378
		void GetCurrentAudioState(EMusicKey& OutKey, EMusicKeyMode& OutKeyMode, int32_t& OutTempo); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414C1B298
	};

}
