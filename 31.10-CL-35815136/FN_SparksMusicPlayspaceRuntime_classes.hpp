#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: SparksMusicPlayspaceRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class SparksMusicPlayspaceRuntime.PlayspaceComponent_LipSyncAssetManager
	// Inherited from UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x28 (0xC8 - 0xA0)
	class UPlayspaceComponent_LipSyncAssetManager : public UPlayspaceComponent	
	{
	public:
		FMulticastInlineDelegate OnLipSyncAnimChanged; // 0xA0(0x10)
		unsigned char UnknownData00_7[0x18]; // 0xB0(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksMusicPlayspaceRuntime.PlayspaceComponent_LipSyncAssetManager");
			return ret;
		}

		TWeakObjectPtr TryGetLipSyncAnimAssetForPlayer(APlayerState* PlayerState); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510BC588(relative to base address)
		void LipSyncAnimDecidedDelegate__DelegateSignature(TWeakObjectPtr<UAnimSequence*> LipSyncAnimSequence, TArray<APlayerState*>& PlayerStates); // Flags: MulticastDelegate|Public|Delegate|HasOutParms, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class SparksMusicPlayspaceRuntime.PlayspaceComponent_SparksPerfMem
	// Inherited from UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x10 (0xB0 - 0xA0)
	class UPlayspaceComponent_SparksPerfMem : public UPlayspaceComponent	
	{
	public:
		unsigned char UnknownData00_1[0x10]; // 0xA0(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksMusicPlayspaceRuntime.PlayspaceComponent_SparksPerfMem");
			return ret;
		}

		void StopTrackingServerPerf(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7510BC3B4(relative to base address)
		void StartTrackingServerPerf(FSparksServerPerfMemSettings& Settings); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7510BC31C(relative to base address)
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

		void ExitedSparksMusicPlayspace(ASparksMusicPlayspace* Playspace); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF74868F4D0(relative to base address)
		void EnteredSparksMusicPlayspace(ASparksMusicPlayspace* Playspace); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF74868F450(relative to base address)
		bool DoesSparksMusicPlayspaceInteratorHaveTag(FGameplayTag& Tag); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent|Const, Memory Exec: 0x7FF7510BB48C(relative to base address)
		bool AllowedToEnterMusicPlayspace(ASparksMusicPlayspace* Playspace); // Flags: Native|Event|Public|BlueprintEvent|Const, Memory Exec: 0x7FF749426874(relative to base address)
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

		void SparksMusicPlayerRemovedFromMusicPlayspace(ASparksMusicPlayspace* Playspace); // Flags: Event|Public|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SparksMusicPlayerAddedToMusicPlayspace(ASparksMusicPlayspace* Playspace); // Flags: Event|Public|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool ShouldAutoRegister(); // Flags: Native|Event|Public|BlueprintEvent|Const, Memory Exec: 0x7FF7510BC2F8(relative to base address)
		bool IsSparksMusicPlayerPlayingWithKey(); // Flags: Native|Event|Public|BlueprintEvent|Const, Memory Exec: 0x7FF7510BC004(relative to base address)
		bool IsSparksMusicPlayerPlaying(); // Flags: Native|Event|Public|BlueprintEvent|Const, Memory Exec: 0x7FF7510BBFE0(relative to base address)
	};


	// Class SparksMusicPlayspaceRuntime.SparksMusicPlayspace
	// Inherited from AFortPlayspace -> APlayspace -> AInfo -> AActor -> UObject
	// Size: 0xB0 (0x750 - 0x6A0)
	class ASparksMusicPlayspace : public AFortPlayspace	
	{
	public:
		FMulticastInlineDelegate OnMidiEventDriverChanged; // 0x6A0(0x10)
		unsigned char UnknownData00_6[0x18]; // 0x6B0(0x18) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnMidiEventDataParsed; // 0x6C8(0x10)
		unsigned char UnknownData01_6[0x18]; // 0x6D8(0x18) UNKNOWN PROPERTY
		TArray<FSparksPlayspaceInteractor> Interactors; // 0x6F0(0x10)
		UAudioComponent* MetasoundPlayer; // 0x700(0x8)
		UAudioComponent* MetasoundMixer; // 0x708(0x8)
		UMusicClockComponent* MusicClock; // 0x710(0x8)
		TArray<FSparksPlayspaceMusicPlayer> MusicPlayers; // 0x718(0x10)
		USparksMusicPlayspaceAudioState* AudioState; // 0x728(0x8)
		USparksCameraDirectorComponent* CameraDirector; // 0x730(0x8)
		UPlayspaceComponent_PlayerManager* PlayerManagerComp; // 0x738(0x8)
		UPlayspaceComponent_LipSyncAssetManager* LipSyncManager; // 0x740(0x8)
		UPlayspaceComponent_SparksPerfMem* PerfMemComp; // 0x748(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspace");
			return ret;
		}

		bool TryGetMusicKeyAndMode(EMusicKey& OutMusicKey, EMusicKeyMode& OutMusicKeyMode); // Flags: Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510BC748(relative to base address)
		TArray TryGetMidiEventDrivers(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510BC6D8(relative to base address)
		TScriptInterface TryGetMidiEventDriverForPlayerState(APlayerState* PlayerState); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510BC638(relative to base address)
		bool RemoveMusicPlayer(UObject* MusicPlayer, AActor* ForActor); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7510BC234(relative to base address)
		bool RemoveInteractor(UObject* Interactor, AActor* ForActor); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7510BC170(relative to base address)
		void OnMeasureEvent(int32_t MeasureNumber); // Flags: Native|Protected, Memory Exec: 0x7FF7510BC0EC(relative to base address)
		void OnBeatEvent(int32_t BeatNumber, int32_t BeatInBar); // Flags: Native|Protected, Memory Exec: 0x7FF7510BC028(relative to base address)
		void MidiEventDriverChangedDelegate__DelegateSignature(TScriptInterface<Class> MidiEventDriver); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void MidiEventDataParsedDelegate__DelegateSignature(TScriptInterface<Class> MidiEventDriver, UParsedMidiEventData* ParsedMidiEventData); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool IsAnyMusicPlayingWithKey(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74EEF66DC(relative to base address)
		bool IsAnyMusicPlaying(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74EEF6630(relative to base address)
		bool HasGameplayTag(FGameplayTag CheckForTag); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510BBE7C(relative to base address)
		ASparksMusicPlayspace GetSparksMusicPlayspaceOfClassByLocation(UClass* PlayspaceType, UObject* WorldContextObject, FVector& Location, bool bMatchChildTypes); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7510BBBC8(relative to base address)
		ASparksMusicPlayspace GetSparksMusicPlayspaceOfClass(UClass* PlayspaceType, UObject* WorldContextObject, AActor* Actor, bool bMatchChildTypes); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7510BB754(relative to base address)
		TArray GetMusicPlayers(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510BB714(relative to base address)
		TArray GetAllPlayerPawns(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510BB564(relative to base address)
		TArray GetAllPlayerControllers(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510BB528(relative to base address)
		bool DoesPlayerHaveInstrument(APlayerState* PlayerState, ESparksInstrumentType InstrumentType); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510BB3C0(relative to base address)
		void BPEvent_OnUserRemoved(FPlayspaceUser& User, APlayerState* PlayerState); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BPEvent_OnUserAdded(FPlayspaceUser& User, APlayerState* PlayerState); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BPEvent_OnIntialized(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_RemovePlayspaceUser(AController* Controller); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7510BB2FC(relative to base address)
		UGameplayEventRouterComponent BP_GetOwnedEventRouter(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7494C787C(relative to base address)
		TArray BP_GetAllPlayerStates(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510BB2B0(relative to base address)
		bool AddMusicPlayer(UObject* Interactor, AActor* ForActor); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7510BB1EC(relative to base address)
		bool AddInteractor(UObject* Interactor, AActor* ForActor); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7510BB128(relative to base address)
	};


	// Class SparksMusicPlayspaceRuntime.SparksMusicPlayspaceAudioState
	// Inherited from UActorComponent -> UObject
	// Size: 0x8 (0xA8 - 0xA0)
	class USparksMusicPlayspaceAudioState : public UActorComponent	
	{
	public:
		EMusicKey CurrentKey; // 0xA0(0x1)
		EMusicKeyMode CurrentMode; // 0xA1(0x1)
		unsigned char UnknownData00_6[0x2]; // 0xA2(0x2) UNKNOWN PROPERTY
		int32_t CurrentTempo; // 0xA4(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksMusicPlayspaceRuntime.SparksMusicPlayspaceAudioState");
			return ret;
		}

		void TriggerTempoChange(int32_t BPM); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7510BC508(relative to base address)
		void TriggerModeChange(EMusicKeyMode InMode); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7510BC488(relative to base address)
		void TriggerKeyChange(EMusicKey InKey); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7510BC408(relative to base address)
		void OnRep_OnTempoChanged(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7489EDD24(relative to base address)
		void OnRep_OnModeChanged(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74905B428(relative to base address)
		void OnRep_OnKeyChanged(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74905B71C(relative to base address)
		int32_t GetCurrentTempo(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FA6F874(relative to base address)
		EMusicKeyMode GetCurrentKeyMode(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FC61824(relative to base address)
		EMusicKey GetCurrentKey(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74E228C6C(relative to base address)
		void GetCurrentAudioState(EMusicKey& OutKey, EMusicKeyMode& OutKeyMode, int32_t& OutTempo); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510BB5A0(relative to base address)
	};

}
