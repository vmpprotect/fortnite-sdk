#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: CRD_AudioMixerRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class CRD_AudioMixerRuntime.CreativeAudioMixerDevice
	// Inherited from AFortCreativeDeviceProp -> ABuildingProp -> ABuildingTimeOfDayLights -> ABuildingAutoNav -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x90 (0xC78 - 0xBE8)
	class ACreativeAudioMixerDevice : public AFortCreativeDeviceProp	
	{
	public:
		unsigned char UnknownData05_3[0x8]; // 0xBE8(0x8) UNKNOWN PROPERTY
		USoundControlBusMix Mix; // 0xBF0(0x8)
		USoundControlBus Bus; // 0xBF8(0x8)
		float FaderValue; // 0xC00(0x4)
		ECreativeRegisteredPlayerGroups CanBeHeardBy; // 0xC04(0x1)
		bool bActivateInEditMode; // 0xC05(0x1)
		bool bActivateOnGameStart; // 0xC06(0x1)
		unsigned char UnknownData06_6[0x1]; // 0xC07(0x1) UNKNOWN PROPERTY
		UCreativeProxyManagerComponent CreativeProxyManagerComponent; // 0xC08(0x8)
		UFortMinigameProgressComponent FortMinigameProgressComponent; // 0xC10(0x8)
		UCreativeRegisteredPlayersManagerComponent CreativeRegisteredPlayersManagerComponent; // 0xC18(0x8)
		UFortActorOptionsComponent FortActorOptionsComponent; // 0xC20(0x8)
		bool bCachedIsActive; // 0xC28(0x1)
		unsigned char UnknownData07_6[0x7]; // 0xC29(0x7) UNKNOWN PROPERTY
		AController CachedInstigator; // 0xC30(0x8)
		ACreativeAudioMixerReplicationProxy ClientCachedProxy; // 0xC38(0x8)
		USoundControlBusMix CachedBusMix; // 0xC40(0x8)
		FName CachedBusMixName; // 0xC48(0x4)
		unsigned char UnknownData08_6[0x4]; // 0xC4C(0x4) UNKNOWN PROPERTY
		TArray RegisteredPlayerIds; // 0xC50(0x10)
		TArray NonRegisteredPlayerIds; // 0xC60(0x10)
		bool bHasUpdatedStateInEditMode; // 0xC70(0x1)
		bool bHasUpdatedStateInGameplay; // 0xC71(0x1)
		unsigned char UnknownData09_7[0x6]; // 0xC72(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CRD_AudioMixerRuntime.CreativeAudioMixerDevice");
			return ret;
		}

		void OnProxyDataChanged(ACreativePlayerReplicationProxy ProxyData); // Flags: Final|Native|Private 0x7FF414D62A58
		void OnPreAnyPropertyChanged(); // Flags: Final|Native|Private 0x7FF414D62978
		void OnPlayerUnregistered(AFortPlayerState PlayerState); // Flags: Final|Native|Private 0x7FF414D62898
		void OnPlayerRegistered(AFortPlayerState PlayerState); // Flags: Final|Native|Private 0x7FF414D627B8
		void OnPlayerAdded(FUniqueNetIdRepl NetId, bool bIsLocalPlayer); // Flags: Final|Native|Private 0x7FF414D626D8
		void OnMinigameStarted(); // Flags: Final|Native|Private 0x7FF414D625F8
		void OnMinigameEnded(); // Flags: Final|Native|Private 0x7FF414D62518
		void OnAllPlayersUnregistered(); // Flags: Final|Native|Private 0x7FF414D62438
		void DeactivateMix(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D62358
		void ActivateMix(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D62278
	};


	// Class CRD_AudioMixerRuntime.CreativeAudioMixerReplicationProxy
	// Inherited from ACreativePlayerReplicationProxy -> AInfo -> AActor -> UObject
	// Size: 0x8 (0x2A0 - 0x298)
	class ACreativeAudioMixerReplicationProxy : public ACreativePlayerReplicationProxy	
	{
	public:
		bool bIsActive; // 0x298(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x299(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CRD_AudioMixerRuntime.CreativeAudioMixerReplicationProxy");
			return ret;
		}
	};

}
