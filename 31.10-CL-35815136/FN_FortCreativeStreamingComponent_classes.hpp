#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: FortCreativeStreamingComponent
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class FortCreativeStreamingComponent.FortCreativeStreamingComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x220 (0x2C0 - 0xA0)
	class UFortCreativeStreamingComponent : public UActorComponent	
	{
	public:
		USoundSubmix* DefaultSubmix; // 0xA0(0x8)
		USoundSubmix* LicensedSubmix; // 0xA8(0x8)
		USoundSubmix* AudioAnalysisSubmix; // 0xB0(0x8)
		UMaterialParameterCollection* JukeboxMPC; // 0xB8(0x8)
		FVideoPlayerDeviceAudioAnalysisSettings AudioAnalysisSettings; // 0xC0(0x40)
		USoundConcurrency* SoundConcurrency; // 0x100(0x8)
		USoundConcurrency* MirrorSoundConcurrency; // 0x108(0x8)
		USoundClass* AudioSoundClass; // 0x110(0x8)
		UMaterial* VideoMaterial; // 0x118(0x8)
		int32_t MaterialSlot; // 0x120(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x124(0x4) UNKNOWN PROPERTY
		UFortDownloadLocalizedOverlays* LocalizedOverlays; // 0x128(0x8)
		UFortMediaSubtitlesPlayer* SubtitlesPlayer; // 0x130(0x8)
		unsigned char UnknownData01_6[0x30]; // 0x138(0x30) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnPlayCompleted; // 0x168(0x10)
		FMulticastInlineDelegate CMSMetadataEvent; // 0x178(0x10)
		unsigned char UnknownData02_6[0x8]; // 0x188(0x8) UNKNOWN PROPERTY
		UFortBaseStreamingVideo* BaseStreamingVideoPlayer; // 0x190(0x8)
		FVideoPlayerDeviceComponents DeviceComponents; // 0x198(0x30)
		FVideoPlayerDeviceMediaMetadata CurrentlyPlayingData; // 0x1C8(0x48)
		TWeakObjectPtr<AActor*> MirroredDevice; // 0x210(0x20)
		UAudioComponent* MirrorAudioComponent; // 0x230(0x8)
		USoundAttenuation* MirrorSoundAttenuation; // 0x238(0x8)
		unsigned char UnknownData03_6[0x1]; // 0x240(0x1) UNKNOWN PROPERTY
		EFortStreamingVideoSelectionMode StreamingMode; // 0x241(0x1)
		unsigned char UnknownData04_6[0x26]; // 0x242(0x26) UNKNOWN PROPERTY
		FDelegateProperty OnSubmixSpectralAnalysisDelegate; // 0x268(0xC)
		unsigned char UnknownData05_6[0x14]; // 0x274(0x14) UNKNOWN PROPERTY
		FVideoPlayerDeviceCMSEventData CMSEventData; // 0x288(0x38)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortCreativeStreamingComponent.FortCreativeStreamingComponent");
			return ret;
		}

		void UsePriorityMode(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7516EA14C(relative to base address)
		void UseMirrorModeByName(FString DeviceName); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7516EA0A0(relative to base address)
		void UseMirrorMode(AActor* NewMirrorDevice); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7516EA020(relative to base address)
		void UseDeviceOverrideMode(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7516EA00C(relative to base address)
		void UpdateStaticMesh(UStaticMeshComponent* ScreenMesh); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7516E9F3C(relative to base address)
		void TearDownComponent(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7516E9F28(relative to base address)
		void StreamedVideoOpeningTimeout(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7516E9F14(relative to base address)
		void StreamedVideoOnMediaPlayerEndReached(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7516E9F00(relative to base address)
		void StreamedVideoOnMediaPlayerClosed(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7516E9EEC(relative to base address)
		void Stop(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7516E9ED8(relative to base address)
		void SetRestartStreamWhenPlaying(bool bNewRestartStreamWhenPlaying); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7516E9E58(relative to base address)
		void SetFullScreenComponents(bool bEnable); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7516E9DD8(relative to base address)
		void Seek(FTimespan SeekTime); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7516E9CC8(relative to base address)
		void Restart(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7516E9CB4(relative to base address)
		void PrintVideoPlayerDebugData(); // Flags: Net|Native|Event|NetMulticast|Public|NetClient|BlueprintCallable, Memory Exec: 0x7FF74C8DF6C0(relative to base address)
		void Play(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7516E9CA0(relative to base address)
		void OnStreamingDeviceChanged(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7516E9C8C(relative to base address)
		void OnRep_StreamingSelectionMode(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7516E957C(relative to base address)
		void OnMediaSoundComponentActivated(UActorComponent* Component, bool bReset); // Flags: Final|Native|Private, Memory Exec: 0x7FF7516E9BD4(relative to base address)
		void OnAudioAnalysisSpectrumUpdated(TArray<float>& MagnitudeArray); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF7516E9AF8(relative to base address)
		bool IsRestartStreamWhenPlaying(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7516E9AE0(relative to base address)
		bool IsDevicePlaying(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7516E9ABC(relative to base address)
		bool IsComponentInitialized(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D098DEC(relative to base address)
		void Init(bool InUsesAudio, bool InUsesVideo, UStaticMeshComponent* ScreenMesh); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7516E99B0(relative to base address)
		void HandleVideoStreamingTerminalError(EBaseMediaTerminalErrorReason ErrorReason); // Flags: Final|Native|Private, Memory Exec: 0x7FF7516E9930(relative to base address)
		void HandleVideoStreamingSuccess(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7516E991C(relative to base address)
		void HandleCMSEvents(FVideoPlayerDeviceCMSEventData EventData, bool bEnable); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7516E96C4(relative to base address)
		EFortStreamingVideoSelectionMode GetStreamingVideoSelectionMode(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7516E96AC(relative to base address)
		AActor GetStreamingDevice(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7516E9688(relative to base address)
		AFortCreativeStreamingController GetStreamingController(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7516E9664(relative to base address)
		FVideoPlayerDeviceComponents GetStreamingComponents(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7516E95DC(relative to base address)
		UFortBaseStreamingVideo GetFortBaseStreamingVideo(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74F0A5F70(relative to base address)
		EFortStreamingVideoDeviceState GetDeviceState(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7516E95C4(relative to base address)
		FVideoPlayerDeviceComponents GetDeviceComponents(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7516E9590(relative to base address)
		void ForceRestart(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7516E957C(relative to base address)
		void DisableScreenAndAudio(bool bDisabled); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7516E94FC(relative to base address)
		void CMSEventStarted(UMediaCMSEvent* Event); // Flags: Final|Native|Public, Memory Exec: 0x7FF7516E9398(relative to base address)
		void CMSEventEnded(UMediaCMSEvent* Event); // Flags: Final|Native|Public, Memory Exec: 0x7FF7516E9268(relative to base address)
	};

}
