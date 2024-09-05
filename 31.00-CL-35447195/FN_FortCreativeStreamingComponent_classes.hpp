#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: FortCreativeStreamingComponent
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class FortCreativeStreamingComponent.FortCreativeStreamingComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x220 (0x2C0 - 0xA0)
	class UFortCreativeStreamingComponent : public UActorComponent	
	{
	public:
		USoundSubmix DefaultSubmix; // 0xA0(0x8)
		USoundSubmix LicensedSubmix; // 0xA8(0x8)
		USoundSubmix AudioAnalysisSubmix; // 0xB0(0x8)
		UMaterialParameterCollection JukeboxMPC; // 0xB8(0x8)
		FVideoPlayerDeviceAudioAnalysisSettings AudioAnalysisSettings; // 0xC0(0x40)
		USoundConcurrency SoundConcurrency; // 0x100(0x8)
		USoundConcurrency MirrorSoundConcurrency; // 0x108(0x8)
		USoundClass AudioSoundClass; // 0x110(0x8)
		UMaterial VideoMaterial; // 0x118(0x8)
		int32_t MaterialSlot; // 0x120(0x4)
		unsigned char UnknownData06_6[0x4]; // 0x124(0x4) UNKNOWN PROPERTY
		UFortDownloadLocalizedOverlays LocalizedOverlays; // 0x128(0x8)
		UFortMediaSubtitlesPlayer SubtitlesPlayer; // 0x130(0x8)
		unsigned char UnknownData07_6[0x30]; // 0x138(0x30) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnPlayCompleted; // 0x168(0x10)
		FMulticastInlineDelegate CMSMetadataEvent; // 0x178(0x10)
		unsigned char UnknownData08_6[0x8]; // 0x188(0x8) UNKNOWN PROPERTY
		UFortBaseStreamingVideo BaseStreamingVideoPlayer; // 0x190(0x8)
		FVideoPlayerDeviceComponents DeviceComponents; // 0x198(0x30)
		FVideoPlayerDeviceMediaMetadata CurrentlyPlayingData; // 0x1C8(0x48)
		TWeakObjectPtr MirroredDevice; // 0x210(0x20)
		UAudioComponent MirrorAudioComponent; // 0x230(0x8)
		USoundAttenuation MirrorSoundAttenuation; // 0x238(0x8)
		unsigned char UnknownData09_6[0x1]; // 0x240(0x1) UNKNOWN PROPERTY
		EFortStreamingVideoSelectionMode StreamingMode; // 0x241(0x1)
		unsigned char UnknownData10_6[0x26]; // 0x242(0x26) UNKNOWN PROPERTY
		FDelegateProperty OnSubmixSpectralAnalysisDelegate; // 0x268(0xC)
		unsigned char UnknownData11_6[0x14]; // 0x274(0x14) UNKNOWN PROPERTY
		FVideoPlayerDeviceCMSEventData CMSEventData; // 0x288(0x38)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FortCreativeStreamingComponent.FortCreativeStreamingComponent");
			return ret;
		}

		void UsePriorityMode(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D8DBE0
		void UseMirrorModeByName(FString DeviceName); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D8DB00
		void UseMirrorMode(AActor NewMirrorDevice); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D8DA20
		void UseDeviceOverrideMode(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D8D940
		void UpdateStaticMesh(UStaticMeshComponent ScreenMesh); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D8D860
		void TearDownComponent(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D8D780
		void StreamedVideoOpeningTimeout(); // Flags: Final|Native|Private 0x7FF414D8D6A0
		void StreamedVideoOnMediaPlayerEndReached(); // Flags: Final|Native|Private 0x7FF414D8D5C0
		void StreamedVideoOnMediaPlayerClosed(); // Flags: Final|Native|Private 0x7FF414D8D4E0
		void Stop(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D8D400
		void SetRestartStreamWhenPlaying(bool bNewRestartStreamWhenPlaying); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D8D320
		void SetFullScreenComponents(bool bEnable); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D8D240
		void Seek(FTimespan SeekTime); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF414D8D160
		void Restart(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D8D080
		void PrintVideoPlayerDebugData(); // Flags: Net|Native|Event|NetMulticast|Public|NetClient|BlueprintCallable 0x7FF414D8CFA0
		void Play(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D8CEC0
		void OnStreamingDeviceChanged(); // Flags: Final|Native|Private 0x7FF414D8CDE0
		void OnRep_StreamingSelectionMode(); // Flags: Final|Native|Private 0x7FF414D8CD00
		void OnMediaSoundComponentActivated(UActorComponent Component, bool bReset); // Flags: Final|Native|Private 0x7FF414D8CC20
		void OnAudioAnalysisSpectrumUpdated(TArray& MagnitudeArray); // Flags: Final|Native|Private|HasOutParms 0x7FF414D8CB40
		bool IsRestartStreamWhenPlaying(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D8CA60
		bool IsDevicePlaying(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D8C980
		bool IsComponentInitialized(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D8C8A0
		void Init(bool InUsesAudio, bool InUsesVideo, UStaticMeshComponent ScreenMesh); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D8C7C0
		void HandleVideoStreamingTerminalError(EBaseMediaTerminalErrorReason ErrorReason); // Flags: Final|Native|Private 0x7FF414D8C6E0
		void HandleVideoStreamingSuccess(); // Flags: Final|Native|Private 0x7FF414D8C600
		void HandleCMSEvents(FVideoPlayerDeviceCMSEventData EventData, bool bEnable); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D8C520
		EFortStreamingVideoSelectionMode GetStreamingVideoSelectionMode(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D8C440
		AActor GetStreamingDevice(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D8C360
		AFortCreativeStreamingController GetStreamingController(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D8C280
		FVideoPlayerDeviceComponents GetStreamingComponents(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D8C1A0
		UFortBaseStreamingVideo GetFortBaseStreamingVideo(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D8C0C0
		EFortStreamingVideoDeviceState GetDeviceState(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D8BFE0
		FVideoPlayerDeviceComponents GetDeviceComponents(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D8BF00
		void ForceRestart(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D8BE20
		void DisableScreenAndAudio(bool bDisabled); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D8BD40
		void CMSEventStarted(UMediaCMSEvent Event); // Flags: Final|Native|Public 0x7FF414D8BC60
		void CMSEventEnded(UMediaCMSEvent Event); // Flags: Final|Native|Public 0x7FF414D8BB80
	};

}
