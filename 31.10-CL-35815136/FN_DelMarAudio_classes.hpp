#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: DelMarAudio
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class DelMarAudio.DelMarAudioCheatManager
	// Inherited from UChildCheatManager -> UCheatManagerExtension -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UDelMarAudioCheatManager : public UChildCheatManager	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarAudio.DelMarAudioCheatManager");
			return ret;
		}

		void DelMarStopMusic(); // Flags: Final|Exec|Native|Protected, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void DelMarStartMusic(); // Flags: Final|Exec|Native|Protected, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void DelMarSkipMusic(); // Flags: Final|Exec|Native|Protected, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void DelMarSetMusicTrigger(FName TriggerName); // Flags: Final|Exec|Native|Protected, Memory Exec: 0x7FF74DBCEC98(relative to base address)
		void DelMarPrintMusicTrackName(); // Flags: Final|Exec|Native|Protected, Memory Exec: 0x7FF74921B8F8(relative to base address)
	};


	// Class DelMarAudio.DelMarAudioProximityComponentBase
	// Inherited from UActorComponent -> UObject
	// Size: 0x38 (0xD8 - 0xA0)
	class UDelMarAudioProximityComponentBase : public UActorComponent	
	{
	public:
		FMulticastInlineDelegate OnProximityStart; // 0xA0(0x10)
		FMulticastInlineDelegate OnProximityStop; // 0xB0(0x10)
		bool bProximityActive; // 0xC0(0x1)
		unsigned char UnknownData00_6[0xF]; // 0xC1(0xF) UNKNOWN PROPERTY
		UDelMarAudioProximitySubsystem* Subsystem; // 0xD0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarAudio.DelMarAudioProximityComponentBase");
			return ret;
		}

		UAudioComponent CreateSoundAttached(USoundBase* Sound, USceneComponent* AttachComponent, FName AttachPointName, float VolumeMultiplier, float PitchMultiplier, bool bStopWhenAttachedToDestroyed, bool bAutoDestroy); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF7518A0F64(relative to base address)
		void BP_Update(APlayerCameraManager* Camera, ADelMarVehicle* Vehicle); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_StopProximity(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_StartProximity(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class DelMarAudio.DelMarAudioProximityComponent
	// Inherited from UDelMarAudioProximityComponentBase -> UActorComponent -> UObject
	// Size: 0x20 (0xF8 - 0xD8)
	class UDelMarAudioProximityComponent : public UDelMarAudioProximityComponentBase	
	{
	public:
		USoundBase* ProximitySound; // 0xD8(0x8)
		UAudioComponent* ProximityComponent; // 0xE0(0x8)
		float ObjectScaleAttenuationModifier; // 0xE8(0x4)
		float FadeOutDuration; // 0xEC(0x4)
		unsigned char UnknownData00_7[0x8]; // 0xF0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarAudio.DelMarAudioProximityComponent");
			return ret;
		}

		float GetObjectScale(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74E4BA1AC(relative to base address)
	};


	// Class DelMarAudio.DelMarAudioPassbyComponent
	// Inherited from UDelMarAudioProximityComponent -> UDelMarAudioProximityComponentBase -> UActorComponent -> UObject
	// Size: 0x50 (0x148 - 0xF8)
	class UDelMarAudioPassbyComponent : public UDelMarAudioProximityComponent	
	{
	public:
		USoundBase* PassBySound; // 0xF8(0x8)
		UAudioComponent* PassbyComponent; // 0x100(0x8)
		FMulticastInlineDelegate OnPassbyStart; // 0x108(0x10)
		FMulticastInlineDelegate OnPassbyStop; // 0x118(0x10)
		float MinRelativeSpeed; // 0x128(0x4)
		float MinSpeedStopThresholdOffset; // 0x12C(0x4)
		float PassbyStartRadiusMax; // 0x130(0x4)
		float PassbyStartRadiusMin; // 0x134(0x4)
		float MinRelativeDirection; // 0x138(0x4)
		float PassbyCooldown; // 0x13C(0x4)
		unsigned char UnknownData00_7[0x8]; // 0x140(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarAudio.DelMarAudioPassbyComponent");
			return ret;
		}

		bool IsPlayingPassby(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74E2F5048(relative to base address)
		void HandlePassbyFinished(); // Flags: Final|Native|Public, Memory Exec: 0x7FF7518A1200(relative to base address)
		void BP_StopPassby(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_StartPassby(AActor* Instigator, float PassbySpeed); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class DelMarAudio.DelMarAudioProximitySubsystem
	// Inherited from UTickableWorldSubsystem -> UWorldSubsystem -> USubsystem -> UObject
	// Size: 0xA0 (0xE0 - 0x40)
	class UDelMarAudioProximitySubsystem : public UTickableWorldSubsystem	
	{
	public:
		unsigned char UnknownData00_1[0xA0]; // 0x40(0xA0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarAudio.DelMarAudioProximitySubsystem");
			return ret;
		}
	};


	// Class DelMarAudio.DelMarAudioStateMixerSubsystem
	// Inherited from UTickableWorldSubsystem -> UWorldSubsystem -> USubsystem -> UObject
	// Size: 0xB0 (0xF0 - 0x40)
	class UDelMarAudioStateMixerSubsystem : public UTickableWorldSubsystem	
	{
	public:
		TArray<FDelMarStateMixCollection> AvailableMixes; // 0x40(0x10)
		TMap<FGameplayTag, FDelMarStateMix> ActiveMixes; // 0x50(0x50)
		TMap<FGameplayTag, FDelMarStateMix> TemporaryMixes; // 0xA0(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarAudio.DelMarAudioStateMixerSubsystem");
			return ret;
		}

		bool SetMixState(FGameplayTag& MixState, bool bFallBackToNearestParent, bool bDeactivateChildren); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7518A1610(relative to base address)
		void RemoveMixes(FName GroupName); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7518A1510(relative to base address)
		TMap GetActiveMixes(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7518A1170(relative to base address)
		void ClearMixState(FGameplayTag& MixState, bool bDeactivateChildren); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7518A0E54(relative to base address)
		void AddMixes(FName GroupName, TArray<FDelMarStateMix>& Mixes); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7518A0D78(relative to base address)
	};


	// Class DelMarAudio.DelMarAudioStatePlayspaceComponent
	// Inherited from UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x140 (0x1E0 - 0xA0)
	class UDelMarAudioStatePlayspaceComponent : public UPlayspaceComponent	
	{
	public:
		unsigned char UnknownData00_3[0xC0]; // 0xA0(0xC0) UNKNOWN PROPERTY
		FName MixGroupName; // 0x160(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x164(0x4) UNKNOWN PROPERTY
		TArray<FDelMarStateMix> Mixes; // 0x168(0x10)
		float CloseVehicleDistanceThreshold; // 0x178(0x4)
		int32_t CloseVehiclesPackRacingThreshold; // 0x17C(0x4)
		USoundControlBus* UserMusicSettingBus; // 0x180(0x8)
		USoundControlBusMix* UserMusicMix; // 0x188(0x8)
		unsigned char UnknownData02_6[0x8]; // 0x190(0x8) UNKNOWN PROPERTY
		UDelMarAudioStateMixerSubsystem* MixSubsystem; // 0x198(0x8)
		UDelMarVehicleManager* VehicleManager; // 0x1A0(0x8)
		unsigned char UnknownData03_7[0x38]; // 0x1A8(0x38) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarAudio.DelMarAudioStatePlayspaceComponent");
			return ret;
		}

		void HandleVehicleTurboStopped(); // Flags: Final|Native|Public, Memory Exec: 0x7FF7518A14FC(relative to base address)
		void HandleVehicleTurboStarted(); // Flags: Final|Native|Public, Memory Exec: 0x7FF7518A14E8(relative to base address)
		void HandleVehicleHitHazard(); // Flags: Final|Native|Public, Memory Exec: 0x7FF7518A14D4(relative to base address)
		void HandleVehicleDemolished(FGameplayTag CausedByTag); // Flags: Final|Native|Public, Memory Exec: 0x7FF7518A13C4(relative to base address)
		void HandleVehicleBigAirStopped(); // Flags: Final|Native|Public, Memory Exec: 0x7FF7518A13B0(relative to base address)
		void HandleVehicleBigAirStarted(); // Flags: Final|Native|Public, Memory Exec: 0x7FF7518A139C(relative to base address)
	};


	// Class DelMarAudio.DelMarCrowdAudioManager
	// Inherited from UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x10 (0xB0 - 0xA0)
	class UDelMarCrowdAudioManager : public UPlayspaceComponent	
	{
	public:
		UDelMarAudioStatePlayspaceComponent* CachedStateComponent; // 0xA0(0x8)
		FGameplayTag RaceModeTag; // 0xA8(0x4)
		unsigned char UnknownData00_7[0x4]; // 0xAC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarAudio.DelMarCrowdAudioManager");
			return ret;
		}

		void BP_OnVehicleDemolished(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnRacerStateChanged(FGameplayTag NewStateTag); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnRaceModeChanged(FGameplayTag NewRaceModeTag); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnPlayerFinishedRace(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnGameplayStateChanged(FGameplayTag NewStateTag); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnApproachingFinishLine(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class DelMarAudio.DelMarRaceMusicManager
	// Inherited from UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0xD8 (0x178 - 0xA0)
	class UDelMarRaceMusicManager : public UPlayspaceComponent	
	{
	public:
		FGameplayTag RaceModeTag; // 0xA0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0xA4(0x4) UNKNOWN PROPERTY
		USoundBase* MusicPlayer; // 0xA8(0x8)
		USoundBase* MusicPlayer_LowSpec; // 0xB0(0x8)
		FGameplayTag MusicEventSystemTag; // 0xB8(0x4)
		float FadeInDuration; // 0xBC(0x4)
		float FadeOutDuration; // 0xC0(0x4)
		float StartLineFadeOutDurtation; // 0xC4(0x4)
		USoundBase* PreRaceMusic; // 0xC8(0x8)
		USoundBase* PostRaceMusic; // 0xD0(0x8)
		UAudioComponent* MainMusicComponent; // 0xD8(0x8)
		UAudioComponent* StartLineComponent; // 0xE0(0x8)
		TWeakObjectPtr<UDelMarRaceMusicPlaylist*> DefaultPlaylist; // 0xE8(0x20)
		UDelMarRaceMusicPlaylist* Playlist; // 0x108(0x8)
		TArray<FDelMarMusicTrack> Songs; // 0x110(0x10)
		FDelMarMusicTrack PlayingSong; // 0x120(0x20)
		UDelMarAudioStatePlayspaceComponent* CachedStateComponent; // 0x140(0x8)
		unsigned char UnknownData01_7[0x30]; // 0x148(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarAudio.DelMarRaceMusicManager");
			return ret;
		}

		void TryGetFortClientSettings(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7518A198C(relative to base address)
		void StopMusic(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7518A1978(relative to base address)
		void StartStartLineMusic(float CountdownLength); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7518A18F8(relative to base address)
		void StartRaceMusic(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7518A18E4(relative to base address)
		void SkipTrack(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7518A18B8(relative to base address)
		void SetPreRaceMusic(USoundBase* InPreRaceMusic); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F67E674(relative to base address)
		void SetPostRaceMusic(USoundBase* InPostRaceMusic); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7518A182C(relative to base address)
		void SetPlaylist(UDelMarRaceMusicPlaylist* InPlaylist); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7518A17AC(relative to base address)
		void SetAudioTrigger(FName InTrigger); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF7518A1590(relative to base address)
		void HandleSpectatorViewTargetChange(AFortPlayerController* PlayerController, AActor* OldViewTarget, AActor* NewViewTarget); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7518A12A4(relative to base address)
		void BP_OnRacerStateChanged(FGameplayTag NewStateTag); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnRaceModeChanged(FGameplayTag NewModeTag); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnPlayerFinishedRace(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnGameplayStateChanged(FGameplayTag NewStateTag); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnCountdownTimeSet(float TimeUntilRunStart); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class DelMarAudio.DelMarRaceMusicSettingsActor
	// Inherited from AActor -> UObject
	// Size: 0x20 (0x2B0 - 0x290)
	class ADelMarRaceMusicSettingsActor : public AActor	
	{
	public:
		UDelMarRaceMusicPlaylist* Playlist; // 0x290(0x8)
		USoundBase* PreRaceMusic; // 0x298(0x8)
		USoundBase* PostRaceMusic; // 0x2A0(0x8)
		bool bEnableMusic; // 0x2A8(0x1)
		bool bEnableAudioAnalysis; // 0x2A9(0x1)
		unsigned char UnknownData00_7[0x6]; // 0x2AA(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarAudio.DelMarRaceMusicSettingsActor");
			return ret;
		}
	};


	// Class DelMarAudio.DelMarAudioVirtualizationSubsystem
	// Inherited from UTickableWorldSubsystem -> UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x78 (0xB8 - 0x40)
	class UDelMarAudioVirtualizationSubsystem : public UTickableWorldSubsystem	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0x40(0x10) UNKNOWN PROPERTY
		TMap<FGameplayTag, FDelmarAudioVirtualizationSettings> PlayerNumMap; // 0x50(0x50)
		int32_t MaxNumPlayers; // 0xA0(0x4)
		int32_t MaxDistantPlayers; // 0xA4(0x4)
		int32_t DistantPlayerThreshold; // 0xA8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xAC(0x4) UNKNOWN PROPERTY
		UDelMarVehicleManager* VehicleManager; // 0xB0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarAudio.DelMarAudioVirtualizationSubsystem");
			return ret;
		}

		void HandleRaceModeChanged(FDelMarEvent_RaceModeSet& Event); // Flags: Final|Native|Public|HasOutParms, Memory Exec: 0x7FF7518A1218(relative to base address)
	};

}
