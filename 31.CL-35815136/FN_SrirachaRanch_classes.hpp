#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: SrirachaRanch
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class SrirachaRanch.FakeRadioPlayerComponent
	// Inherited from UFortPawnComponent -> UPawnComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x80 (0x128 - 0xA8)
	class UFakeRadioPlayerComponent : public UFortPawnComponent	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0xA8(0x8) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnFakeRadioStart; // 0xB0(0x10)
		FMulticastInlineDelegate OnFakeRadioStop; // 0xC0(0x10)
		bool bReplicatedRadioIsActive; // 0xD0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0xD1(0x7) UNKNOWN PROPERTY
		TMap<FName, FSrirachaInputMappingData> InputMappingData; // 0xD8(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SrirachaRanch.FakeRadioPlayerComponent");
			return ret;
		}

		void ToggleRadioActive(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75077F864(relative to base address)
		void ServerToggleRadioActive(); // Flags: Net|NetReliableNative|Event|Protected|NetServer, Memory Exec: 0x7FF74C8DF6C0(relative to base address)
		void OnRep_RadioIsActive(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF75077EF14(relative to base address)
		void NativeOnPawnEnterSeat(TScriptInterface<Class>& Vehicle, AFortPawn* PlayerPawn, int32_t SeatIndex); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF75077E7A4(relative to base address)
	};


	// Class SrirachaRanch.StreamingRadioAudioShapeComponent
	// Inherited from UFortAudioShapeComponent -> UAudioShapeComponent -> UAudioGameplayComponent -> UActorComponent -> UObject
	// Size: 0x58 (0x1A0 - 0x148)
	class UStreamingRadioAudioShapeComponent : public UFortAudioShapeComponent	
	{
	public:
		float Radius; // 0x148(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x14C(0x4) UNKNOWN PROPERTY
		UStreamingRadioPlayerComponent* RadioPlayer; // 0x150(0x8)
		unsigned char UnknownData01_7[0x48]; // 0x158(0x48) UNKNOWN PROPERTY

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
		UMediaSoundComponent* MediaSoundPlayerTemplate; // 0x30(0x8)

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
		unsigned char UnknownData00_3[0x10]; // 0xA8(0x10) UNKNOWN PROPERTY
		TMap<FName, FSrirachaInputMappingData> InputMappingData; // 0xB8(0x50)
		TMap<FName, FSrirachaInputMappingData> RadialMenuInputMappingData; // 0x108(0x50)
		FMulticastInlineDelegate OnSourceLoading; // 0x158(0x10)
		FMulticastInlineDelegate OnSourcePlayed; // 0x168(0x10)
		FMulticastInlineDelegate OnSourceStopped; // 0x178(0x10)
		FMulticastInlineDelegate OnSourceFailed; // 0x188(0x10)
		FMulticastInlineDelegate OnMetadataChanged; // 0x198(0x10)
		FMulticastInlineDelegate OnRadioExplicitStop; // 0x1A8(0x10)
		float PercentAutostartRadio; // 0x1B8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x1BC(0x4) UNKNOWN PROPERTY
		TArray<FName> DisabledVehicleList; // 0x1C0(0x10)
		TMap<FName, float> ExteriorVolumeMultiplierMap; // 0x1D0(0x50)
		TMap<FName, float> InteriorVolumeMultiplierMap; // 0x220(0x50)
		bool bMinimalStateOnPlatform; // 0x270(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x271(0x7) UNKNOWN PROPERTY
		TArray<FString> DisabledStationList; // 0x278(0x10)
		bool bAutostartOnEntry; // 0x288(0x1)
		bool bDisabledForCurrentPlayerState; // 0x289(0x1)
		unsigned char UnknownData03_6[0x6]; // 0x28A(0x6) UNKNOWN PROPERTY
		FStreamingRadioSourceData ReplicatedRadioSourceData; // 0x290(0x60)
		FMulticastInlineDelegate OnReplicatedStateChangedDelegate; // 0x2F0(0x10)
		UMediaSoundComponent* SoundComponent; // 0x300(0x8)
		UStreamingRadioAudioShapeComponent* AudioShape; // 0x308(0x8)
		USrirachaRanchComponentTemplateWrapper* SoundCompTemplateSource; // 0x310(0x8)
		FAthenaRadioStation LastSource; // 0x318(0x50)
		FFortMediaInBandMetadata LastMetadata; // 0x368(0x90)
		TArray<URadioContentSourceItemDefinition*> Sources; // 0x3F8(0x10)
		FAthenaRadioStation FallbackSource; // 0x408(0x50)
		TMap<FGameplayTag, FSrirachaPerClassSpecialSeats> SpecialSeatList; // 0x458(0x50)
		UFortBaseStreamingVideo* BasePlayerInstance; // 0x4A8(0x8)
		USoundSubmixBase* DefaultSoundSubmix; // 0x4B0(0x8)
		USoundSubmixBase* LicensedSoundSubmix; // 0x4B8(0x8)
		ERadioSource CurrentMode; // 0x4C0(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x4C1(0x3) UNKNOWN PROPERTY
		int32_t MaximumRetries; // 0x4C4(0x4)
		int32_t FadeoutWhenUnpoweredInMS; // 0x4C8(0x4)
		int32_t FadeoutWhenOwnerBeingDestroyedInMS; // 0x4CC(0x4)
		int32_t MaxFadeoutTimeMS; // 0x4D0(0x4)
		int32_t DefaultPlayingIndex; // 0x4D4(0x4)
		USoundMix* SoundMixInside; // 0x4D8(0x8)
		USoundMix* SoundMixOutside; // 0x4E0(0x8)
		unsigned char UnknownData05_6[0x4]; // 0x4E8(0x4) UNKNOWN PROPERTY
		float ActivationRadius; // 0x4EC(0x4)
		FName ComponentToAttachTo; // 0x4F0(0x4)
		FName ComponentSocketAttachTo; // 0x4F4(0x4)
		UFortStreamMediaSource* MediaSource; // 0x4F8(0x8)
		TArray<FAthenaRadioStation> RadioStationList; // 0x500(0x10)
		UObject* DelegateContextObject; // 0x510(0x8)
		float MediaStartTimeFromInit; // 0x518(0x4)
		unsigned char UnknownData06_7[0x24]; // 0x51C(0x24) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SrirachaRanch.StreamingRadioPlayerComponent");
			return ret;
		}

		void ToggleRadioActive(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75077F878(relative to base address)
		void StopRadioWithFadeout(int32_t Milliseconds); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75077F7E4(relative to base address)
		void StopRadio(); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75077F7D0(relative to base address)
		void StopIfNoDriver(TScriptInterface<Class>& Vehicle); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF75077F740(relative to base address)
		void StartRadio(int32_t IdxToPlay, bool bFallbackOverride); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75077F67C(relative to base address)
		void SoundMixUpdateWeaponState(AFortWeapon* NewWeapon, AFortWeapon* PrevWeapon); // Flags: Final|Native|Private, Memory Exec: 0x7FF75077F50C(relative to base address)
		void SoundMixUpdateTargetingState(bool bNewIsTargeting); // Flags: Final|Native|Private, Memory Exec: 0x7FF75077F484(relative to base address)
		void SetInteriorVolume(TScriptInterface<Class>& Vehicle); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF75077F3F4(relative to base address)
		void SetExteriorVolume(TScriptInterface<Class>& Vehicle); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF75077F364(relative to base address)
		void SetActivationRadius(float InRadius); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75077F2D8(relative to base address)
		void ServerStopRadio(); // Flags: Net|NetReliableNative|Event|Public|NetServer, Memory Exec: 0x7FF7470D9EB4(relative to base address)
		void ServerSetDisabledForCurrentPlayerState(bool bInDisableForCurrentPlayerState); // Flags: Net|NetReliableNative|Event|Public|NetServer, Memory Exec: 0x7FF75077F254(relative to base address)
		void ServerSaveFadeOutTime(float InFadeOutSeconds); // Flags: Net|NetReliableNative|Event|Public|NetServer, Memory Exec: 0x7FF7505DEB90(relative to base address)
		void ServerSavedSource(FAthenaRadioStation InSource); // Flags: Net|NetReliableNative|Event|Public|NetServer, Memory Exec: 0x7FF75077F130(relative to base address)
		void ServerSaveAutoStart(bool bInAutoStart); // Flags: Net|NetReliableNative|Event|Public|NetServer, Memory Exec: 0x7FF75077F0AC(relative to base address)
		void ServerPlayIndex(int32_t InIndex, EStreamingRadioSourceState InState); // Flags: Net|NetReliableNative|Event|Public|NetServer, Memory Exec: 0x7FF75077EFE4(relative to base address)
		void PlayPrevIndex(); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75077EFD0(relative to base address)
		void PlayNextIndex(); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75077EFBC(relative to base address)
		void PlayIndex(int32_t Index); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75077EF3C(relative to base address)
		void PlayDefaultIndex(); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75077EF28(relative to base address)
		void OnRep_RadioSourceData(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74798E550(relative to base address)
		void OnPiPPlayerBlockedChanged(bool bPiPPlayerBlocking); // Flags: Final|Native|Protected, Memory Exec: 0x7FF75077EE94(relative to base address)
		void OnPawnExitVehicle(TScriptInterface<Class>& Vehicle, AFortPawn* PlayerPawn, int32_t SeatIndex); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPawnExitSeat(TScriptInterface<Class>& Vehicle, AFortPawn* PlayerPawn, int32_t SeatIndex); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPawnEnterVehicle(TScriptInterface<Class>& Vehicle, AFortPawn* PlayerPawn, int32_t SeatIndex); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPawnEnterSeat(TScriptInterface<Class>& Vehicle, AFortPawn* PlayerPawn, int32_t SeatIndex); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnOwningVehicleDied(AFortAthenaVehicle* DeadVehicle, FGameplayTagContainer& InTags, AController* EventInstigator, AActor* DamageCauser); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF75077EC8C(relative to base address)
		void OnOwnerUnpowered(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF75077EC74(relative to base address)
		void OnOwnerReFueledFromEmpty(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74917278C(relative to base address)
		void OnOwnerOutOfFuel(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF75077EC60(relative to base address)
		void OnOwnerExploded(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF75077EC48(relative to base address)
		void OnOwnerDisabledChanged(bool bDisabled); // Flags: Final|Native|Protected, Memory Exec: 0x7FF75077EBC8(relative to base address)
		void NativeOnVehicleOwnerChanged(TScriptInterface<Class>& Vehicle, AActor* NewOwner, AActor* PrevOwner); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF75077E9AC(relative to base address)
		void NativeOnPawnExitVehicle(TScriptInterface<Class>& Vehicle, AFortPawn* PlayerPawn, int32_t SeatIndex); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF7480236D4(relative to base address)
		void NativeOnPawnExitSeat(TScriptInterface<Class>& Vehicle, AFortPawn* PlayerPawn, int32_t SeatIndex); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF748023488(relative to base address)
		void NativeOnPawnEnterVehicle(TScriptInterface<Class>& Vehicle, AFortPawn* PlayerPawn, int32_t SeatIndex); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF7480240B4(relative to base address)
		void NativeOnPawnEnterSeat(TScriptInterface<Class>& Vehicle, AFortPawn* PlayerPawn, int32_t SeatIndex); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF748023E68(relative to base address)
		void MetadataChanged(FFortMediaInBandMetadata& MetaData); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF75077E6BC(relative to base address)
		void MediaTerminalError(EBaseMediaTerminalErrorReason Reason); // Flags: Final|Native|Protected, Memory Exec: 0x7FF75077E63C(relative to base address)
		void MediaResumed(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF75077E628(relative to base address)
		void MediaOnSuccess(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF75077E614(relative to base address)
		void MediaEnded(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF75077E600(relative to base address)
		void MediaClosed(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF75077E5EC(relative to base address)
		void MediaClose(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF75077E5D8(relative to base address)
		bool IsRadioOn(); // Flags: Final|Native|Protected|Const, Memory Exec: 0x7FF75077E5B4(relative to base address)
		bool IsPlayingLiveFeed(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75077E580(relative to base address)
		bool IsExternalSeat(int32_t SeatIdx); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75077E4F4(relative to base address)
		void HandleLicensedAudioTreatmentChanged(UCPTypes UCPType); // Flags: Final|Native|Protected, Memory Exec: 0x7FF75077E474(relative to base address)
		FAthenaRadioStation GetOptionAt(int32_t idx); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75077E3C4(relative to base address)
		FFortMediaInBandMetadata GetMediaMetadata(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75077E380(relative to base address)
		UFortBaseStreamingVideo GetBaseStreamingVideo(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75077E368(relative to base address)
	};


	// Class SrirachaRanch.RadioContentSourceItemDefinition
	// Inherited from UFortAccountItemDefinition -> UFortPersistableItemDefinition -> UFortItemDefinition -> UItemDefinitionBase -> UMcpItemDefinitionBase -> UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x18 (0x148 - 0x130)
	class URadioContentSourceItemDefinition : public UFortAccountItemDefinition	
	{
	public:
		FString ResourceID; // 0x130(0x10)
		UFortStreamMediaSource* MediaSource; // 0x140(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SrirachaRanch.RadioContentSourceItemDefinition");
			return ret;
		}
	};

}
