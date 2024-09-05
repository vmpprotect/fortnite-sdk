#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: SrirachaRanch
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class SrirachaRanch.FakeRadioPlayerComponent
	// Inherited from UFortPawnComponent -> UPawnComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x80 (0x128 - 0xA8)
	class UFakeRadioPlayerComponent : public UFortPawnComponent	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0xA8(0x8) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnFakeRadioStart; // 0xB0(0x10)
		FMulticastInlineDelegate OnFakeRadioStop; // 0xC0(0x10)
		bool bReplicatedRadioIsActive; // 0xD0(0x1)
		unsigned char UnknownData03_6[0x7]; // 0xD1(0x7) UNKNOWN PROPERTY
		TMap InputMappingData; // 0xD8(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SrirachaRanch.FakeRadioPlayerComponent");
			return ret;
		}

		void ToggleRadioActive(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BEA6F8
		void ServerToggleRadioActive(); // Flags: Net|NetReliableNative|Event|Protected|NetServer 0x7FF414BEA618
		void OnRep_RadioIsActive(); // Flags: Final|Native|Protected 0x7FF414BEA538
		void NativeOnPawnEnterSeat(TScriptInterface& Vehicle, AFortPawn PlayerPawn, int32_t SeatIndex); // Flags: Final|Native|Protected|HasOutParms 0x7FF414BEA458
	};


	// Class SrirachaRanch.StreamingRadioAudioShapeComponent
	// Inherited from UFortAudioShapeComponent -> UAudioShapeComponent -> UAudioGameplayComponent -> UActorComponent -> UObject
	// Size: 0x58 (0x1A0 - 0x148)
	class UStreamingRadioAudioShapeComponent : public UFortAudioShapeComponent	
	{
	public:
		float Radius; // 0x148(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x14C(0x4) UNKNOWN PROPERTY
		UStreamingRadioPlayerComponent RadioPlayer; // 0x150(0x8)
		unsigned char UnknownData03_7[0x48]; // 0x158(0x48) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SrirachaRanch.StreamingRadioAudioShapeComponent");
			return ret;
		}
	};


	// Class SrirachaRanch.SrirachaRanchComponentTemplateWrapper
	// Inherited from UDataAsset -> UObject
	// Size: 0x8 (0x38 - 0x30)
	class USrirachaRanchComponentTemplateWrapper : public UDataAsset	
	{
	public:
		UMediaSoundComponent MediaSoundPlayerTemplate; // 0x30(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SrirachaRanch.SrirachaRanchComponentTemplateWrapper");
			return ret;
		}
	};


	// Class SrirachaRanch.StreamingRadioPlayerComponent
	// Inherited from UFortPawnComponent -> UPawnComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x498 (0x540 - 0xA8)
	class UStreamingRadioPlayerComponent : public UFortPawnComponent	
	{
	public:
		unsigned char UnknownData07_3[0x10]; // 0xA8(0x10) UNKNOWN PROPERTY
		TMap InputMappingData; // 0xB8(0x50)
		TMap RadialMenuInputMappingData; // 0x108(0x50)
		FMulticastInlineDelegate OnSourceLoading; // 0x158(0x10)
		FMulticastInlineDelegate OnSourcePlayed; // 0x168(0x10)
		FMulticastInlineDelegate OnSourceStopped; // 0x178(0x10)
		FMulticastInlineDelegate OnSourceFailed; // 0x188(0x10)
		FMulticastInlineDelegate OnMetadataChanged; // 0x198(0x10)
		FMulticastInlineDelegate OnRadioExplicitStop; // 0x1A8(0x10)
		float PercentAutostartRadio; // 0x1B8(0x4)
		unsigned char UnknownData08_6[0x4]; // 0x1BC(0x4) UNKNOWN PROPERTY
		TArray DisabledVehicleList; // 0x1C0(0x10)
		TMap ExteriorVolumeMultiplierMap; // 0x1D0(0x50)
		TMap InteriorVolumeMultiplierMap; // 0x220(0x50)
		bool bMinimalStateOnPlatform; // 0x270(0x1)
		unsigned char UnknownData09_6[0x7]; // 0x271(0x7) UNKNOWN PROPERTY
		TArray DisabledStationList; // 0x278(0x10)
		bool bAutostartOnEntry; // 0x288(0x1)
		bool bDisabledForCurrentPlayerState; // 0x289(0x1)
		unsigned char UnknownData10_6[0x6]; // 0x28A(0x6) UNKNOWN PROPERTY
		FStreamingRadioSourceData ReplicatedRadioSourceData; // 0x290(0x60)
		FMulticastInlineDelegate OnReplicatedStateChangedDelegate; // 0x2F0(0x10)
		UMediaSoundComponent SoundComponent; // 0x300(0x8)
		UStreamingRadioAudioShapeComponent AudioShape; // 0x308(0x8)
		USrirachaRanchComponentTemplateWrapper SoundCompTemplateSource; // 0x310(0x8)
		FAthenaRadioStation LastSource; // 0x318(0x50)
		FFortMediaInBandMetadata LastMetadata; // 0x368(0x90)
		TArray Sources; // 0x3F8(0x10)
		FAthenaRadioStation FallbackSource; // 0x408(0x50)
		TMap SpecialSeatList; // 0x458(0x50)
		UFortBaseStreamingVideo BasePlayerInstance; // 0x4A8(0x8)
		USoundSubmixBase DefaultSoundSubmix; // 0x4B0(0x8)
		USoundSubmixBase LicensedSoundSubmix; // 0x4B8(0x8)
		ERadioSource CurrentMode; // 0x4C0(0x1)
		unsigned char UnknownData11_6[0x3]; // 0x4C1(0x3) UNKNOWN PROPERTY
		int32_t MaximumRetries; // 0x4C4(0x4)
		int32_t FadeoutWhenUnpoweredInMS; // 0x4C8(0x4)
		int32_t FadeoutWhenOwnerBeingDestroyedInMS; // 0x4CC(0x4)
		int32_t MaxFadeoutTimeMS; // 0x4D0(0x4)
		int32_t DefaultPlayingIndex; // 0x4D4(0x4)
		USoundMix SoundMixInside; // 0x4D8(0x8)
		USoundMix SoundMixOutside; // 0x4E0(0x8)
		unsigned char UnknownData12_6[0x4]; // 0x4E8(0x4) UNKNOWN PROPERTY
		float ActivationRadius; // 0x4EC(0x4)
		FName ComponentToAttachTo; // 0x4F0(0x4)
		FName ComponentSocketAttachTo; // 0x4F4(0x4)
		UFortStreamMediaSource MediaSource; // 0x4F8(0x8)
		TArray RadioStationList; // 0x500(0x10)
		UObject DelegateContextObject; // 0x510(0x8)
		float MediaStartTimeFromInit; // 0x518(0x4)
		unsigned char UnknownData13_7[0x24]; // 0x51C(0x24) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SrirachaRanch.StreamingRadioPlayerComponent");
			return ret;
		}

		void ToggleRadioActive(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BED398
		void StopRadioWithFadeout(int32_t Milliseconds); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable 0x7FF414BED2B8
		void StopRadio(); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable 0x7FF414BED1D8
		void StopIfNoDriver(TScriptInterface& Vehicle); // Flags: Final|Native|Protected|HasOutParms 0x7FF414BED0F8
		void StartRadio(int32_t IdxToPlay, bool bFallbackOverride); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable 0x7FF414BED018
		void SoundMixUpdateWeaponState(AFortWeapon NewWeapon, AFortWeapon PrevWeapon); // Flags: Final|Native|Private 0x7FF414BECF38
		void SoundMixUpdateTargetingState(bool bNewIsTargeting); // Flags: Final|Native|Private 0x7FF414BECE58
		void SetInteriorVolume(TScriptInterface& Vehicle); // Flags: Final|Native|Protected|HasOutParms 0x7FF414BECD78
		void SetExteriorVolume(TScriptInterface& Vehicle); // Flags: Final|Native|Protected|HasOutParms 0x7FF414BECC98
		void SetActivationRadius(float InRadius); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BECBB8
		void ServerStopRadio(); // Flags: Net|NetReliableNative|Event|Public|NetServer 0x7FF414BECAD8
		void ServerSetDisabledForCurrentPlayerState(bool bInDisableForCurrentPlayerState); // Flags: Net|NetReliableNative|Event|Public|NetServer 0x7FF414BEC9F8
		void ServerSaveFadeOutTime(float InFadeOutSeconds); // Flags: Net|NetReliableNative|Event|Public|NetServer 0x7FF414BEC918
		void ServerSavedSource(FAthenaRadioStation InSource); // Flags: Net|NetReliableNative|Event|Public|NetServer 0x7FF414BEC838
		void ServerSaveAutoStart(bool bInAutoStart); // Flags: Net|NetReliableNative|Event|Public|NetServer 0x7FF414BEC758
		void ServerPlayIndex(int32_t InIndex, EStreamingRadioSourceState InState); // Flags: Net|NetReliableNative|Event|Public|NetServer 0x7FF414BEC678
		void PlayPrevIndex(); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable 0x7FF414BEC598
		void PlayNextIndex(); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable 0x7FF414BEC4B8
		void PlayIndex(int32_t Index); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable 0x7FF414BEC3D8
		void PlayDefaultIndex(); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable 0x7FF414BEC2F8
		void OnRep_RadioSourceData(); // Flags: Final|Native|Protected 0x7FF414BEC218
		void OnPiPPlayerBlockedChanged(bool bPiPPlayerBlocking); // Flags: Final|Native|Protected 0x7FF414BEC138
		void OnPawnExitVehicle(TScriptInterface& Vehicle, AFortPawn PlayerPawn, int32_t SeatIndex); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414BEC058
		void OnPawnExitSeat(TScriptInterface& Vehicle, AFortPawn PlayerPawn, int32_t SeatIndex); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414BEBF78
		void OnPawnEnterVehicle(TScriptInterface& Vehicle, AFortPawn PlayerPawn, int32_t SeatIndex); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414BEBE98
		void OnPawnEnterSeat(TScriptInterface& Vehicle, AFortPawn PlayerPawn, int32_t SeatIndex); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414BEBDB8
		void OnOwningVehicleDied(AFortAthenaVehicle DeadVehicle, FGameplayTagContainer& InTags, AController EventInstigator, AActor DamageCauser); // Flags: Final|Native|Protected|HasOutParms 0x7FF414BEBCD8
		void OnOwnerUnpowered(); // Flags: Final|Native|Protected 0x7FF414BEBBF8
		void OnOwnerReFueledFromEmpty(); // Flags: Final|Native|Protected 0x7FF414BEBB18
		void OnOwnerOutOfFuel(); // Flags: Final|Native|Protected 0x7FF414BEBA38
		void OnOwnerExploded(); // Flags: Final|Native|Protected 0x7FF414BEB958
		void OnOwnerDisabledChanged(bool bDisabled); // Flags: Final|Native|Protected 0x7FF414BEB878
		void NativeOnVehicleOwnerChanged(TScriptInterface& Vehicle, AActor NewOwner, AActor PrevOwner); // Flags: Final|Native|Protected|HasOutParms 0x7FF414BEB798
		void NativeOnPawnExitVehicle(TScriptInterface& Vehicle, AFortPawn PlayerPawn, int32_t SeatIndex); // Flags: Final|Native|Protected|HasOutParms 0x7FF414BEB6B8
		void NativeOnPawnExitSeat(TScriptInterface& Vehicle, AFortPawn PlayerPawn, int32_t SeatIndex); // Flags: Final|Native|Protected|HasOutParms 0x7FF414BEB5D8
		void NativeOnPawnEnterVehicle(TScriptInterface& Vehicle, AFortPawn PlayerPawn, int32_t SeatIndex); // Flags: Final|Native|Protected|HasOutParms 0x7FF414BEB4F8
		void NativeOnPawnEnterSeat(TScriptInterface& Vehicle, AFortPawn PlayerPawn, int32_t SeatIndex); // Flags: Final|Native|Protected|HasOutParms 0x7FF414BEB418
		void MetadataChanged(FFortMediaInBandMetadata& MetaData); // Flags: Final|Native|Protected|HasOutParms 0x7FF414BEB338
		void MediaTerminalError(EBaseMediaTerminalErrorReason Reason); // Flags: Final|Native|Protected 0x7FF414BEB258
		void MediaResumed(); // Flags: Final|Native|Protected 0x7FF414BEB178
		void MediaOnSuccess(); // Flags: Final|Native|Protected 0x7FF414BEB098
		void MediaEnded(); // Flags: Final|Native|Protected 0x7FF414BEAFB8
		void MediaClosed(); // Flags: Final|Native|Protected 0x7FF414BEAED8
		void MediaClose(); // Flags: Final|Native|Protected 0x7FF414BEADF8
		bool IsRadioOn(); // Flags: Final|Native|Protected|Const 0x7FF414BEAD18
		bool IsPlayingLiveFeed(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BEAC38
		bool IsExternalSeat(int32_t SeatIdx); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BEAB58
		void HandleLicensedAudioTreatmentChanged(UCPTypes UCPType); // Flags: Final|Native|Protected 0x7FF414BEAA78
		FAthenaRadioStation GetOptionAt(int32_t idx); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BEA998
		FFortMediaInBandMetadata GetMediaMetadata(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BEA8B8
		UFortBaseStreamingVideo GetBaseStreamingVideo(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BEA7D8
	};


	// Class SrirachaRanch.RadioContentSourceItemDefinition
	// Inherited from UFortAccountItemDefinition -> UFortPersistableItemDefinition -> UFortItemDefinition -> UItemDefinitionBase -> UMcpItemDefinitionBase -> UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x18 (0x148 - 0x130)
	class URadioContentSourceItemDefinition : public UFortAccountItemDefinition	
	{
	public:
		FString ResourceID; // 0x130(0x10)
		UFortStreamMediaSource MediaSource; // 0x140(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SrirachaRanch.RadioContentSourceItemDefinition");
			return ret;
		}
	};

}
