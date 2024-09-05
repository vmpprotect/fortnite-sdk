#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: EpicMediaBasePlayer
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class EpicMediaBasePlayer.EpicMediaPrioritySystem
	// Inherited from UEngineSubsystem -> UDynamicSubsystem -> USubsystem -> UObject
	// Size: 0x28 (0x58 - 0x30)
	class UEpicMediaPrioritySystem : public UEngineSubsystem	
	{
	public:
		unsigned char UnknownData00_1[0x28]; // 0x30(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EpicMediaBasePlayer.EpicMediaPrioritySystem");
			return ret;
		}
	};


	// Class EpicMediaBasePlayer.EpicBaseStreamingVideo
	// Inherited from UObject
	// Size: 0x110 (0x138 - 0x28)
	class UEpicBaseStreamingVideo : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		FMulticastInlineDelegate VideoOnTerminalError; // 0x30(0x10)
		FMulticastInlineDelegate VideoOnSuccess; // 0x40(0x10)
		FMulticastInlineDelegate VideoOnClosed; // 0x50(0x10)
		FMulticastInlineDelegate VideoOnEndReached; // 0x60(0x10)
		FMulticastInlineDelegate VideoOnOpened; // 0x70(0x10)
		FMulticastInlineDelegate VideoOnOpenTimeout; // 0x80(0x10)
		FMulticastInlineDelegate VideoOnResumed; // 0x90(0x10)
		UEpicStreamMediaSource* MediaSource; // 0xA0(0x8)
		UMediaPlayer* MediaPlayer; // 0xA8(0x8)
		FIntPoint VideoSize; // 0xB0(0x8)
		FEpicMediaPriorityInfo PriorityInfo; // 0xB8(0x3)
		unsigned char UnknownData01_6[0x15]; // 0xBB(0x15) UNKNOWN PROPERTY
		USoundSubmixBase* DefaultSubmix; // 0xD0(0x8)
		USoundSubmixBase* LicensedSubmix; // 0xD8(0x8)
		UMediaSoundComponent* MediaSoundComponent; // 0xE0(0x8)
		unsigned char UnknownData02_7[0x50]; // 0xE8(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EpicMediaBasePlayer.EpicBaseStreamingVideo");
			return ret;
		}

		void Stop(bool bRelease, bool bStopPlayer); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DE1669C(relative to base address)
		void Start(FString InVUID, UMediaTexture* InVideoTexture); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DE165C4(relative to base address)
		void SetVideoSize(int32_t Width, int32_t Height); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DE164F8(relative to base address)
		void SetSyncTimes(FDateTime InNowTime, FDateTime InStartTime, bool DynamicStart, float InOffset_s, float InDelay_s); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74DE160E4(relative to base address)
		void SetSoundSubmixes(UMediaSoundComponent* InSoundComponent, USoundSubmixBase* InDefault, USoundSubmixBase* InLicensed); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DE15FCC(relative to base address)
		void SetPriorityInfo(FEpicMediaPriorityInfo InPriorityInfo); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DE15EAC(relative to base address)
		void SetOpenTimeout(double InTimeoutTime); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DE15E28(relative to base address)
		void SetEnableExternalCloseCallback(bool bInEnable); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DE15DA8(relative to base address)
		void SetCreateAudioComponent(bool bInCreateAudioComponent); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DE15D28(relative to base address)
		bool RetryOnError(EBaseMediaTerminalErrorReason Reason); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74DE15C9C(relative to base address)
		void Release(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF748333524(relative to base address)
		bool Open(FMediaPlayerOptions InMediaOptions); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DE15B08(relative to base address)
		void OnSuccessfulURL(FString URL); // Flags: Native|Protected, Memory Exec: 0x7FF74DE15A64(relative to base address)
		void OnFailedURL(FString URL); // Flags: Native|Protected, Memory Exec: 0x7FF74DE159C0(relative to base address)
		void MethodDebounce(bool bDebounce); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DE15940(relative to base address)
		bool IsSyncStartTimeSet(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DE15928(relative to base address)
		bool Init(UMediaTexture* InVideoTexture, UMediaPlayer* InMediaPlayer, UEpicStreamMediaSource* InMediaSource, bool InCDNFailover); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DE157E4(relative to base address)
		void HandleMediaResumed(); // Flags: Native|Protected, Memory Exec: 0x7FF747E989FC(relative to base address)
		void HandleMediaOpenedFailed(FString FailedUrl); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74DE15748(relative to base address)
		void HandleMediaOpened(FString OpenedUrl); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74DE156AC(relative to base address)
		void HandleMediaEndReached(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74DE15698(relative to base address)
		void HandleMediaClosed(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74DE15684(relative to base address)
		void HandleLicensedAudioTreatmentChanged(UCPTypes UCPType); // Flags: Final|Native|Private, Memory Exec: 0x7FF74DE15604(relative to base address)
		UMediaSoundComponent GetSoundComponent(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DE155EC(relative to base address)
		FEpicMediaPriorityInfo GetPriorityInfo(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DE155C8(relative to base address)
		UEpicStreamMediaSource GetMediaSource(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74920FD38(relative to base address)
		FMediaPlayerOptions GetMediaPlayerOptions(); // Flags: Native|Public, Memory Exec: 0x7FF74DE15560(relative to base address)
		UMediaPlayer GetMediaPlayer(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C333214(relative to base address)
		bool GetLicensedAudio(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DE15548(relative to base address)
		void ClearSyncTimes(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DE15534(relative to base address)
	};

}
