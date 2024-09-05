#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: EpicMediaBasePlayer
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class EpicMediaBasePlayer.EpicBaseStreamingVideo
	// Inherited from UObject
	// Size: 0x110 (0x138 - 0x28)
	class UEpicBaseStreamingVideo : public UObject	
	{
	public:
		unsigned char UnknownData03_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		FMulticastInlineDelegate VideoOnTerminalError; // 0x30(0x10)
		FMulticastInlineDelegate VideoOnSuccess; // 0x40(0x10)
		FMulticastInlineDelegate VideoOnClosed; // 0x50(0x10)
		FMulticastInlineDelegate VideoOnEndReached; // 0x60(0x10)
		FMulticastInlineDelegate VideoOnOpened; // 0x70(0x10)
		FMulticastInlineDelegate VideoOnOpenTimeout; // 0x80(0x10)
		FMulticastInlineDelegate VideoOnResumed; // 0x90(0x10)
		UEpicStreamMediaSource MediaSource; // 0xA0(0x8)
		UMediaPlayer MediaPlayer; // 0xA8(0x8)
		FIntPoint VideoSize; // 0xB0(0x8)
		unsigned char UnknownData04_6[0x18]; // 0xB8(0x18) UNKNOWN PROPERTY
		USoundSubmixBase DefaultSubmix; // 0xD0(0x8)
		USoundSubmixBase LicensedSubmix; // 0xD8(0x8)
		UMediaSoundComponent MediaSoundComponent; // 0xE0(0x8)
		unsigned char UnknownData05_7[0x50]; // 0xE8(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EpicMediaBasePlayer.EpicBaseStreamingVideo");
			return ret;
		}

		void Stop(bool bRelease, bool bStopPlayer); // Flags: Native|Public|BlueprintCallable 0x7FF414655F38
		void Start(FString InVUID, UMediaTexture InVideoTexture); // Flags: Native|Public|BlueprintCallable 0x7FF414655E58
		void SetVideoSize(int32_t Width, int32_t Height); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414655D78
		void SetSyncTimes(FDateTime InNowTime, FDateTime InStartTime, bool DynamicStart, float InOffset_s, float InDelay_s); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF414655C98
		void SetSoundSubmixes(UMediaSoundComponent InSoundComponent, USoundSubmixBase InDefault, USoundSubmixBase InLicensed); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414655BB8
		void SetOpenTimeout(double InTimeoutTime); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414655AD8
		void SetEnableExternalCloseCallback(bool bInEnable); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4146559F8
		void SetCreateAudioComponent(bool bInCreateAudioComponent); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414655918
		bool RetryOnError(EBaseMediaTerminalErrorReason Reason); // Flags: Final|Native|Protected 0x7FF414655838
		void Release(); // Flags: Native|Public|BlueprintCallable 0x7FF414655758
		bool Open(FMediaPlayerOptions InMediaOptions); // Flags: Native|Public|BlueprintCallable 0x7FF414655678
		void OnSuccessfulURL(FString URL); // Flags: Native|Protected 0x7FF414655598
		void OnFailedURL(FString URL); // Flags: Native|Protected 0x7FF4146554B8
		void MethodDebounce(bool bDebounce); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4146553D8
		bool IsSyncStartTimeSet(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4146552F8
		bool Init(UMediaTexture InVideoTexture, UMediaPlayer InMediaPlayer, UEpicStreamMediaSource InMediaSource, bool InCDNFailover); // Flags: Native|Public|BlueprintCallable 0x7FF414655218
		void HandleMediaResumed(); // Flags: Native|Protected 0x7FF414655138
		void HandleMediaOpenedFailed(FString FailedUrl); // Flags: Final|Native|Protected 0x7FF414655058
		void HandleMediaOpened(FString OpenedUrl); // Flags: Final|Native|Protected 0x7FF414654F78
		void HandleMediaEndReached(); // Flags: Final|Native|Protected 0x7FF414654E98
		void HandleMediaClosed(); // Flags: Final|Native|Protected 0x7FF414654DB8
		void HandleLicensedAudioTreatmentChanged(UCPTypes UCPType); // Flags: Final|Native|Private 0x7FF414654CD8
		UMediaSoundComponent GetSoundComponent(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414654BF8
		UEpicStreamMediaSource GetMediaSource(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414654B18
		FMediaPlayerOptions GetMediaPlayerOptions(); // Flags: Native|Public 0x7FF414654A38
		UMediaPlayer GetMediaPlayer(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414654958
		bool GetLicensedAudio(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414654878
		void ClearSyncTimes(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414654798
	};

}
