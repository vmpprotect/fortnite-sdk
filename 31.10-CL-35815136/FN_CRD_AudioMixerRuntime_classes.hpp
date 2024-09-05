#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: CRD_AudioMixerRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class CRD_AudioMixerRuntime.CreativeAudioMixerDevice
	// Inherited from AFortCreativeDeviceProp -> ABuildingProp -> ABuildingTimeOfDayLights -> ABuildingAutoNav -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x90 (0xC78 - 0xBE8)
	class ACreativeAudioMixerDevice : public AFortCreativeDeviceProp	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0xBE8(0x8) UNKNOWN PROPERTY
		USoundControlBusMix* Mix; // 0xBF0(0x8)
		USoundControlBus* Bus; // 0xBF8(0x8)
		float FaderValue; // 0xC00(0x4)
		ECreativeRegisteredPlayerGroups CanBeHeardBy; // 0xC04(0x1)
		bool bActivateInEditMode; // 0xC05(0x1)
		bool bActivateOnGameStart; // 0xC06(0x1)
		unsigned char UnknownData01_6[0x1]; // 0xC07(0x1) UNKNOWN PROPERTY
		UCreativeProxyManagerComponent* CreativeProxyManagerComponent; // 0xC08(0x8)
		UFortMinigameProgressComponent* FortMinigameProgressComponent; // 0xC10(0x8)
		UCreativeRegisteredPlayersManagerComponent* CreativeRegisteredPlayersManagerComponent; // 0xC18(0x8)
		UFortActorOptionsComponent* FortActorOptionsComponent; // 0xC20(0x8)
		bool bCachedIsActive; // 0xC28(0x1)
		unsigned char UnknownData02_6[0x7]; // 0xC29(0x7) UNKNOWN PROPERTY
		AController* CachedInstigator; // 0xC30(0x8)
		ACreativeAudioMixerReplicationProxy* ClientCachedProxy; // 0xC38(0x8)
		USoundControlBusMix* CachedBusMix; // 0xC40(0x8)
		FName CachedBusMixName; // 0xC48(0x4)
		unsigned char UnknownData03_6[0x4]; // 0xC4C(0x4) UNKNOWN PROPERTY
		TArray<FUniqueNetIdRepl> RegisteredPlayerIds; // 0xC50(0x10)
		TArray<FUniqueNetIdRepl> NonRegisteredPlayerIds; // 0xC60(0x10)
		bool bHasUpdatedStateInEditMode; // 0xC70(0x1)
		bool bHasUpdatedStateInGameplay; // 0xC71(0x1)
		unsigned char UnknownData04_7[0x6]; // 0xC72(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CRD_AudioMixerRuntime.CreativeAudioMixerDevice");
			return ret;
		}

		void OnProxyDataChanged(ACreativePlayerReplicationProxy* ProxyData); // Flags: Final|Native|Private, Memory Exec: 0x7FF7515EABF0(relative to base address)
		void OnPreAnyPropertyChanged(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7515EABDC(relative to base address)
		void OnPlayerUnregistered(AFortPlayerState* PlayerState); // Flags: Final|Native|Private, Memory Exec: 0x7FF7515EAB58(relative to base address)
		void OnPlayerRegistered(AFortPlayerState* PlayerState); // Flags: Final|Native|Private, Memory Exec: 0x7FF7515EAAD4(relative to base address)
		void OnPlayerAdded(FUniqueNetIdRepl NetId, bool bIsLocalPlayer); // Flags: Final|Native|Private, Memory Exec: 0x7FF7515EA898(relative to base address)
		void OnMinigameStarted(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7515EA87C(relative to base address)
		void OnMinigameEnded(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7515EA860(relative to base address)
		void OnAllPlayersUnregistered(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7515EA844(relative to base address)
		void DeactivateMix(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void ActivateMix(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74921B8F8(relative to base address)
	};


	// Class CRD_AudioMixerRuntime.CreativeAudioMixerReplicationProxy
	// Inherited from ACreativePlayerReplicationProxy -> AInfo -> AActor -> UObject
	// Size: 0x8 (0x2A0 - 0x298)
	class ACreativeAudioMixerReplicationProxy : public ACreativePlayerReplicationProxy	
	{
	public:
		bool bIsActive; // 0x298(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x299(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CRD_AudioMixerRuntime.CreativeAudioMixerReplicationProxy");
			return ret;
		}
	};

}
