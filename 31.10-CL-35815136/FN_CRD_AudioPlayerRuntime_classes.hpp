#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: CRD_AudioPlayerRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class CRD_AudioPlayerRuntime.CreativeAudioComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x198 (0x238 - 0xA0)
	class UCreativeAudioComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY
		float StereoSpreadScaleFactor; // 0xA8(0x4)
		unsigned char UnknownData01_6[0x24]; // 0xAC(0x24) UNKNOWN PROPERTY
		float FadeInDuration; // 0xD0(0x4)
		float FadeOutDuration; // 0xD4(0x4)
		bool bSyncPlayerAudio; // 0xD8(0x1)
		bool bRestartAudioOnPlay; // 0xD9(0x1)
		ECreativeAudioPlayerTargetListener CanBeHeardBy; // 0xDA(0x1)
		ECreativeAudioPlayerTargetLocation PlayLocation; // 0xDB(0x1)
		EAutoplayOptions AutoplayOptions; // 0xDC(0x1)
		unsigned char UnknownData02_6[0x3]; // 0xDD(0x3) UNKNOWN PROPERTY
		UFortMinigameProgressComponent* FortMinigameProgressComponent; // 0xE0(0x8)
		UCreativeProxyManagerComponent* CreativeProxyManager; // 0xE8(0x8)
		UCreativeRegisteredPlayersManagerComponent* CreativeRegisteredPlayersManagerComponent; // 0xF0(0x8)
		UAudioComponent* AudioComponent; // 0xF8(0x8)
		TMap<FUniqueNetIdRepl, UAudioComponent*> PlayerAudioComponents; // 0x100(0x50)
		ACreativeAudioPlayerReplicationProxy* ClientCachedProxy; // 0x150(0x8)
		USoundBase* LastSoundPlayed; // 0x158(0x8)
		FCreativeAudioPlayerData ServerInstigatorData; // 0x160(0x40)
		bool bEnabled; // 0x1A0(0x1)
		unsigned char UnknownData03_6[0x27]; // 0x1A1(0x27) UNKNOWN PROPERTY
		bool bAudioLoaded; // 0x1C8(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x1C9(0x7) UNKNOWN PROPERTY
		FCreativeAudioPlayerData CachedInstigatorData; // 0x1D0(0x40)
		TArray<FUniqueNetIdRepl> RegisteredPlayerIds; // 0x210(0x10)
		TArray<FUniqueNetIdRepl> NonRegisteredPlayerIds; // 0x220(0x10)
		EAutoplayOptions CurrentAutoplayState; // 0x230(0x1)
		unsigned char UnknownData05_7[0x7]; // 0x231(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CRD_AudioPlayerRuntime.CreativeAudioComponent");
			return ret;
		}

		void StopAudio(AController* Player); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C088608(relative to base address)
		void SetProperties(TWeakObjectPtr<USoundBase*>& Audio, float Volume, float PlaybackSpeed, float NewFadeInDuration, float NewFadeOutDuration, bool bEnableVolumeAttenuation, bool bEnableSpatialization, float StereoSpread, EAttenuationDistanceModel DistanceModel, float AttenuationMinDistance, float AttenuationFalloffDistance, bool bNewSyncPlayerAudio, bool bNewRestartAudioOnPlay, int32_t NewCanBeHeardBy, int32_t NewPlayLocation, int32_t NewAutoplayOptions); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7515EEDFC(relative to base address)
		void RetryUpdateAutoplayStatusOnMinigameAdd(AFortMinigame* Minigame); // Flags: Final|Native|Private, Memory Exec: 0x7FF74C088608(relative to base address)
		void RetryClientPlayAudio(FCreativeAudioPlayerData& InstigatorData); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF7515EED2C(relative to base address)
		void ResetDevice(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7515EE9C8(relative to base address)
		void PlayAudio(AController* Player); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C088608(relative to base address)
		void OnRep_ServerInstigatorData(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7515EECA8(relative to base address)
		void OnRep_RegisteredPlayerIds(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7515EEC94(relative to base address)
		void OnProxyDataChanged(ACreativePlayerReplicationProxy* ProxyData); // Flags: Final|Native|Private, Memory Exec: 0x7FF7515EEC14(relative to base address)
		void OnPlayerUnregistered(AFortPlayerState* PlayerState); // Flags: Final|Native|Private, Memory Exec: 0x7FF74C8DF63C(relative to base address)
		void OnPlayerRemoved(FUniqueNetIdRepl NetId, bool bIsLocalPlayer); // Flags: Final|Native|Private, Memory Exec: 0x7FF7515EE9DC(relative to base address)
		void OnPlayerRegistered(AFortPlayerState* PlayerState); // Flags: Final|Native|Private, Memory Exec: 0x7FF74C75FA60(relative to base address)
		void OnPlayerAdded(FUniqueNetIdRepl NetId, bool bIsLocalPlayer); // Flags: Final|Native|Private, Memory Exec: 0x7FF74E20F37C(relative to base address)
		void OnMinigameStateChanged(AFortMinigame* Minigame, EFortMinigameState NewMinigameState); // Flags: Final|Native|Private, Memory Exec: 0x7FF74E6FF63C(relative to base address)
		void OnMinigameStarted(); // Flags: Final|Native|Private, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void OnMinigameEnded(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7515EE9C8(relative to base address)
		void OnEnabledStateChanged(bool bIsEnabled); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C079284(relative to base address)
		void OnAudioLoadComplete(FSoftObjectPath Audio); // Flags: Final|Native|Private|HasDefaults, Memory Exec: 0x7FF7515EE890(relative to base address)
		void OnAllPlayersUnregistered(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7474A9F44(relative to base address)
	};


	// Class CRD_AudioPlayerRuntime.CreativeAudioPlayerReplicationProxy
	// Inherited from ACreativePlayerReplicationProxy -> AInfo -> AActor -> UObject
	// Size: 0x40 (0x2D8 - 0x298)
	class ACreativeAudioPlayerReplicationProxy : public ACreativePlayerReplicationProxy	
	{
	public:
		FCreativeAudioPlayerData InstigatorData; // 0x298(0x40)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CRD_AudioPlayerRuntime.CreativeAudioPlayerReplicationProxy");
			return ret;
		}
	};

}
