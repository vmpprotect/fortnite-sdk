#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: DelMarAudio
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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

		void DelMarStopMusic(); // Flags: Final|Exec|Native|Protected 0x7FF414DC5860
		void DelMarStartMusic(); // Flags: Final|Exec|Native|Protected 0x7FF414DC5780
		void DelMarSkipMusic(); // Flags: Final|Exec|Native|Protected 0x7FF414DC56A0
		void DelMarSetMusicTrigger(FName TriggerName); // Flags: Final|Exec|Native|Protected 0x7FF414DC55C0
		void DelMarPrintMusicTrackName(); // Flags: Final|Exec|Native|Protected 0x7FF414DC54E0
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
		unsigned char UnknownData01_6[0xF]; // 0xC1(0xF) UNKNOWN PROPERTY
		UDelMarAudioProximitySubsystem Subsystem; // 0xD0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarAudio.DelMarAudioProximityComponentBase");
			return ret;
		}

		UAudioComponent CreateSoundAttached(USoundBase Sound, USceneComponent AttachComponent, FName AttachPointName, float VolumeMultiplier, float PitchMultiplier, bool bStopWhenAttachedToDestroyed, bool bAutoDestroy); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414DC5BE0
		void BP_Update(APlayerCameraManager Camera, ADelMarVehicle Vehicle); // Flags: Event|Public|BlueprintEvent 0x7FF414DC5B00
		void BP_StopProximity(); // Flags: Event|Public|BlueprintEvent 0x7FF414DC5A20
		void BP_StartProximity(); // Flags: Event|Public|BlueprintEvent 0x7FF414DC5940
	};


	// Class DelMarAudio.DelMarAudioProximityComponent
	// Inherited from UDelMarAudioProximityComponentBase -> UActorComponent -> UObject
	// Size: 0x20 (0xF8 - 0xD8)
	class UDelMarAudioProximityComponent : public UDelMarAudioProximityComponentBase	
	{
	public:
		USoundBase ProximitySound; // 0xD8(0x8)
		UAudioComponent ProximityComponent; // 0xE0(0x8)
		float ObjectScaleAttenuationModifier; // 0xE8(0x4)
		float FadeOutDuration; // 0xEC(0x4)
		unsigned char UnknownData01_7[0x8]; // 0xF0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarAudio.DelMarAudioProximityComponent");
			return ret;
		}

		float GetObjectScale(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DC5CC0
	};


	// Class DelMarAudio.DelMarAudioPassbyComponent
	// Inherited from UDelMarAudioProximityComponent -> UDelMarAudioProximityComponentBase -> UActorComponent -> UObject
	// Size: 0x50 (0x148 - 0xF8)
	class UDelMarAudioPassbyComponent : public UDelMarAudioProximityComponent	
	{
	public:
		USoundBase PassBySound; // 0xF8(0x8)
		UAudioComponent PassbyComponent; // 0x100(0x8)
		FMulticastInlineDelegate OnPassbyStart; // 0x108(0x10)
		FMulticastInlineDelegate OnPassbyStop; // 0x118(0x10)
		float MinRelativeSpeed; // 0x128(0x4)
		float MinSpeedStopThresholdOffset; // 0x12C(0x4)
		float PassbyStartRadiusMax; // 0x130(0x4)
		float PassbyStartRadiusMin; // 0x134(0x4)
		float MinRelativeDirection; // 0x138(0x4)
		float PassbyCooldown; // 0x13C(0x4)
		unsigned char UnknownData01_7[0x8]; // 0x140(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarAudio.DelMarAudioPassbyComponent");
			return ret;
		}

		bool IsPlayingPassby(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DC6040
		void HandlePassbyFinished(); // Flags: Final|Native|Public 0x7FF414DC5F60
		void BP_StopPassby(); // Flags: Event|Public|BlueprintEvent 0x7FF414DC5E80
		void BP_StartPassby(AActor Instigator, float PassbySpeed); // Flags: Event|Public|BlueprintEvent 0x7FF414DC5DA0
	};


	// Class DelMarAudio.DelMarAudioProximitySubsystem
	// Inherited from UTickableWorldSubsystem -> UWorldSubsystem -> USubsystem -> UObject
	// Size: 0xA0 (0xE0 - 0x40)
	class UDelMarAudioProximitySubsystem : public UTickableWorldSubsystem	
	{
	public:
		unsigned char UnknownData01_1[0xA0]; // 0x40(0xA0) UNKNOWN PROPERTY

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
		TArray AvailableMixes; // 0x40(0x10)
		TMap ActiveMixes; // 0x50(0x50)
		TMap TemporaryMixes; // 0xA0(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarAudio.DelMarAudioStateMixerSubsystem");
			return ret;
		}

		bool SetMixState(FGameplayTag& MixState, bool bFallBackToNearestParent, bool bDeactivateChildren); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414DC64A0
		void RemoveMixes(FName GroupName); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DC63C0
		TMap GetActiveMixes(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414DC62E0
		void ClearMixState(FGameplayTag& MixState, bool bDeactivateChildren); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414DC6200
		void AddMixes(FName GroupName, TArray& Mixes); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414DC6120
	};


	// Class DelMarAudio.DelMarAudioStatePlayspaceComponent
	// Inherited from UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x140 (0x1E0 - 0xA0)
	class UDelMarAudioStatePlayspaceComponent : public UPlayspaceComponent	
	{
	public:
		unsigned char UnknownData04_3[0xC0]; // 0xA0(0xC0) UNKNOWN PROPERTY
		FName MixGroupName; // 0x160(0x4)
		unsigned char UnknownData05_6[0x4]; // 0x164(0x4) UNKNOWN PROPERTY
		TArray Mixes; // 0x168(0x10)
		float CloseVehicleDistanceThreshold; // 0x178(0x4)
		int32_t CloseVehiclesPackRacingThreshold; // 0x17C(0x4)
		USoundControlBus UserMusicSettingBus; // 0x180(0x8)
		USoundControlBusMix UserMusicMix; // 0x188(0x8)
		unsigned char UnknownData06_6[0x8]; // 0x190(0x8) UNKNOWN PROPERTY
		UDelMarAudioStateMixerSubsystem MixSubsystem; // 0x198(0x8)
		UDelMarVehicleManager VehicleManager; // 0x1A0(0x8)
		unsigned char UnknownData07_7[0x38]; // 0x1A8(0x38) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarAudio.DelMarAudioStatePlayspaceComponent");
			return ret;
		}

		void HandleVehicleTurboStopped(); // Flags: Final|Native|Public 0x7FF414DC69E0
		void HandleVehicleTurboStarted(); // Flags: Final|Native|Public 0x7FF414DC6900
		void HandleVehicleHitHazard(); // Flags: Final|Native|Public 0x7FF414DC6820
		void HandleVehicleDemolished(FGameplayTag CausedByTag); // Flags: Final|Native|Public 0x7FF414DC6740
		void HandleVehicleBigAirStopped(); // Flags: Final|Native|Public 0x7FF414DC6660
		void HandleVehicleBigAirStarted(); // Flags: Final|Native|Public 0x7FF414DC6580
	};


	// Class DelMarAudio.DelMarCrowdAudioManager
	// Inherited from UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x10 (0xB0 - 0xA0)
	class UDelMarCrowdAudioManager : public UPlayspaceComponent	
	{
	public:
		UDelMarAudioStatePlayspaceComponent CachedStateComponent; // 0xA0(0x8)
		FGameplayTag RaceModeTag; // 0xA8(0x4)
		unsigned char UnknownData01_7[0x4]; // 0xAC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarAudio.DelMarCrowdAudioManager");
			return ret;
		}

		void BP_OnVehicleDemolished(); // Flags: Event|Public|BlueprintEvent 0x7FF414DC6F20
		void BP_OnRacerStateChanged(FGameplayTag NewStateTag); // Flags: Event|Public|BlueprintEvent 0x7FF414DC6E40
		void BP_OnRaceModeChanged(FGameplayTag NewRaceModeTag); // Flags: Event|Public|BlueprintEvent 0x7FF414DC6D60
		void BP_OnPlayerFinishedRace(); // Flags: Event|Public|BlueprintEvent 0x7FF414DC6C80
		void BP_OnGameplayStateChanged(FGameplayTag NewStateTag); // Flags: Event|Public|BlueprintEvent 0x7FF414DC6BA0
		void BP_OnApproachingFinishLine(); // Flags: Event|Public|BlueprintEvent 0x7FF414DC6AC0
	};


	// Class DelMarAudio.DelMarRaceMusicManager
	// Inherited from UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0xD8 (0x178 - 0xA0)
	class UDelMarRaceMusicManager : public UPlayspaceComponent	
	{
	public:
		FGameplayTag RaceModeTag; // 0xA0(0x4)
		unsigned char UnknownData02_6[0x4]; // 0xA4(0x4) UNKNOWN PROPERTY
		USoundBase MusicPlayer; // 0xA8(0x8)
		USoundBase MusicPlayer_LowSpec; // 0xB0(0x8)
		FGameplayTag MusicEventSystemTag; // 0xB8(0x4)
		float FadeInDuration; // 0xBC(0x4)
		float FadeOutDuration; // 0xC0(0x4)
		float StartLineFadeOutDurtation; // 0xC4(0x4)
		USoundBase PreRaceMusic; // 0xC8(0x8)
		USoundBase PostRaceMusic; // 0xD0(0x8)
		UAudioComponent MainMusicComponent; // 0xD8(0x8)
		UAudioComponent StartLineComponent; // 0xE0(0x8)
		TWeakObjectPtr DefaultPlaylist; // 0xE8(0x20)
		UDelMarRaceMusicPlaylist Playlist; // 0x108(0x8)
		TArray Songs; // 0x110(0x10)
		FDelMarMusicTrack PlayingSong; // 0x120(0x20)
		UDelMarAudioStatePlayspaceComponent CachedStateComponent; // 0x140(0x8)
		unsigned char UnknownData03_7[0x30]; // 0x148(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarAudio.DelMarRaceMusicManager");
			return ret;
		}

		void TryGetFortClientSettings(); // Flags: Final|Native|Protected 0x7FF414DC7C40
		void StopMusic(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DC7B60
		void StartStartLineMusic(float CountdownLength); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DC7A80
		void StartRaceMusic(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DC79A0
		void SkipTrack(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DC78C0
		void SetPreRaceMusic(USoundBase InPreRaceMusic); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DC77E0
		void SetPostRaceMusic(USoundBase InPostRaceMusic); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DC7700
		void SetPlaylist(UDelMarRaceMusicPlaylist InPlaylist); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414DC7620
		void SetAudioTrigger(FName InTrigger); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414DC7540
		void HandleSpectatorViewTargetChange(AFortPlayerController PlayerController, AActor OldViewTarget, AActor NewViewTarget); // Flags: Final|Native|Protected 0x7FF414DC7460
		void BP_OnRacerStateChanged(FGameplayTag NewStateTag); // Flags: Event|Public|BlueprintEvent 0x7FF414DC7380
		void BP_OnRaceModeChanged(FGameplayTag NewModeTag); // Flags: Event|Public|BlueprintEvent 0x7FF414DC72A0
		void BP_OnPlayerFinishedRace(); // Flags: Event|Public|BlueprintEvent 0x7FF414DC71C0
		void BP_OnGameplayStateChanged(FGameplayTag NewStateTag); // Flags: Event|Public|BlueprintEvent 0x7FF414DC70E0
		void BP_OnCountdownTimeSet(float TimeUntilRunStart); // Flags: Event|Public|BlueprintEvent 0x7FF414DC7000
	};


	// Class DelMarAudio.DelMarRaceMusicSettingsActor
	// Inherited from AActor -> UObject
	// Size: 0x20 (0x2B0 - 0x290)
	class ADelMarRaceMusicSettingsActor : public AActor	
	{
	public:
		UDelMarRaceMusicPlaylist Playlist; // 0x290(0x8)
		USoundBase PreRaceMusic; // 0x298(0x8)
		USoundBase PostRaceMusic; // 0x2A0(0x8)
		bool bEnableMusic; // 0x2A8(0x1)
		bool bEnableAudioAnalysis; // 0x2A9(0x1)
		unsigned char UnknownData01_7[0x6]; // 0x2AA(0x6) UNKNOWN PROPERTY

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
		unsigned char UnknownData02_3[0x10]; // 0x40(0x10) UNKNOWN PROPERTY
		TMap PlayerNumMap; // 0x50(0x50)
		int32_t MaxNumPlayers; // 0xA0(0x4)
		int32_t MaxDistantPlayers; // 0xA4(0x4)
		int32_t DistantPlayerThreshold; // 0xA8(0x4)
		unsigned char UnknownData03_6[0x4]; // 0xAC(0x4) UNKNOWN PROPERTY
		UDelMarVehicleManager VehicleManager; // 0xB0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarAudio.DelMarAudioVirtualizationSubsystem");
			return ret;
		}

		void HandleRaceModeChanged(FDelMarEvent_RaceModeSet& Event); // Flags: Final|Native|Public|HasOutParms 0x7FF414DC7D20
	};

}
