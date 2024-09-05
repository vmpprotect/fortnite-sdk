#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: CRD_AudioPlayerRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class CRD_AudioPlayerRuntime.CreativeAudioComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x198 (0x238 - 0xA0)
	class UCreativeAudioComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData06_3[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY
		float StereoSpreadScaleFactor; // 0xA8(0x4)
		unsigned char UnknownData07_6[0x24]; // 0xAC(0x24) UNKNOWN PROPERTY
		float FadeInDuration; // 0xD0(0x4)
		float FadeOutDuration; // 0xD4(0x4)
		bool bSyncPlayerAudio; // 0xD8(0x1)
		bool bRestartAudioOnPlay; // 0xD9(0x1)
		ECreativeAudioPlayerTargetListener CanBeHeardBy; // 0xDA(0x1)
		ECreativeAudioPlayerTargetLocation PlayLocation; // 0xDB(0x1)
		EAutoplayOptions AutoplayOptions; // 0xDC(0x1)
		unsigned char UnknownData08_6[0x3]; // 0xDD(0x3) UNKNOWN PROPERTY
		UFortMinigameProgressComponent FortMinigameProgressComponent; // 0xE0(0x8)
		UCreativeProxyManagerComponent CreativeProxyManager; // 0xE8(0x8)
		UCreativeRegisteredPlayersManagerComponent CreativeRegisteredPlayersManagerComponent; // 0xF0(0x8)
		UAudioComponent AudioComponent; // 0xF8(0x8)
		TMap PlayerAudioComponents; // 0x100(0x50)
		ACreativeAudioPlayerReplicationProxy ClientCachedProxy; // 0x150(0x8)
		USoundBase LastSoundPlayed; // 0x158(0x8)
		FCreativeAudioPlayerData ServerInstigatorData; // 0x160(0x40)
		bool bEnabled; // 0x1A0(0x1)
		unsigned char UnknownData09_6[0x27]; // 0x1A1(0x27) UNKNOWN PROPERTY
		bool bAudioLoaded; // 0x1C8(0x1)
		unsigned char UnknownData10_6[0x7]; // 0x1C9(0x7) UNKNOWN PROPERTY
		FCreativeAudioPlayerData CachedInstigatorData; // 0x1D0(0x40)
		TArray RegisteredPlayerIds; // 0x210(0x10)
		TArray NonRegisteredPlayerIds; // 0x220(0x10)
		EAutoplayOptions CurrentAutoplayState; // 0x230(0x1)
		unsigned char UnknownData11_7[0x7]; // 0x231(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CRD_AudioPlayerRuntime.CreativeAudioComponent");
			return ret;
		}

		void StopAudio(AController Player); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D63AF8
		void SetProperties(TWeakObjectPtr& Audio, float Volume, float PlaybackSpeed, float NewFadeInDuration, float NewFadeOutDuration, bool bEnableVolumeAttenuation, bool bEnableSpatialization, float StereoSpread, EAttenuationDistanceModel DistanceModel, float AttenuationMinDistance, float AttenuationFalloffDistance, bool bNewSyncPlayerAudio, bool bNewRestartAudioOnPlay, int32_t NewCanBeHeardBy, int32_t NewPlayLocation, int32_t NewAutoplayOptions); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414D63A18
		void RetryUpdateAutoplayStatusOnMinigameAdd(AFortMinigame Minigame); // Flags: Final|Native|Private 0x7FF414D63938
		void RetryClientPlayAudio(FCreativeAudioPlayerData& InstigatorData); // Flags: Final|Native|Private|HasOutParms 0x7FF414D63858
		void ResetDevice(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D63778
		void PlayAudio(AController Player); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D63698
		void OnRep_ServerInstigatorData(); // Flags: Final|Native|Private 0x7FF414D635B8
		void OnRep_RegisteredPlayerIds(); // Flags: Final|Native|Private 0x7FF414D634D8
		void OnProxyDataChanged(ACreativePlayerReplicationProxy ProxyData); // Flags: Final|Native|Private 0x7FF414D633F8
		void OnPlayerUnregistered(AFortPlayerState PlayerState); // Flags: Final|Native|Private 0x7FF414D63318
		void OnPlayerRemoved(FUniqueNetIdRepl NetId, bool bIsLocalPlayer); // Flags: Final|Native|Private 0x7FF414D63238
		void OnPlayerRegistered(AFortPlayerState PlayerState); // Flags: Final|Native|Private 0x7FF414D63158
		void OnPlayerAdded(FUniqueNetIdRepl NetId, bool bIsLocalPlayer); // Flags: Final|Native|Private 0x7FF414D63078
		void OnMinigameStateChanged(AFortMinigame Minigame, EFortMinigameState NewMinigameState); // Flags: Final|Native|Private 0x7FF414D62F98
		void OnMinigameStarted(); // Flags: Final|Native|Private 0x7FF414D62EB8
		void OnMinigameEnded(); // Flags: Final|Native|Private 0x7FF414D62DD8
		void OnEnabledStateChanged(bool bIsEnabled); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D62CF8
		void OnAudioLoadComplete(FSoftObjectPath Audio); // Flags: Final|Native|Private|HasDefaults 0x7FF414D62C18
		void OnAllPlayersUnregistered(); // Flags: Final|Native|Private 0x7FF414D62B38
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
