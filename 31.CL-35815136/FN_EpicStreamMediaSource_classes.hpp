#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: EpicStreamMediaSource
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class EpicStreamMediaSource.EpicStreamMediaSource
	// Inherited from UStreamMediaSource -> UBaseMediaSource -> UMediaSource -> UObject
	// Size: 0x740 (0x7D8 - 0x98)
	class UEpicStreamMediaSource : public UStreamMediaSource	
	{
	public:
		FString VideoStreamSource; // 0x98(0x10)
		float VideoStreamSourceAB; // 0xA8(0x4)
		unsigned char UnknownData00_6[0x4]; // 0xAC(0x4) UNKNOWN PROPERTY
		TMap<FString, FString> VideoId; // 0xB0(0x50)
		bool bIsLive; // 0x100(0x1)
		bool bBlurlLive; // 0x101(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x102(0x2) UNKNOWN PROPERTY
		int32_t MaxResolution; // 0x104(0x4)
		int32_t MaxBandwidth; // 0x108(0x4)
		float AspectRatio; // 0x10C(0x4)
		bool bSharelock; // 0x110(0x1)
		bool bAudioOnly; // 0x111(0x1)
		bool bPartySync; // 0x112(0x1)
		unsigned char UnknownData02_6[0x1]; // 0x113(0x1) UNKNOWN PROPERTY
		float MediaDuration; // 0x114(0x4)
		FString MimeType; // 0x118(0x10)
		FString StreamDenyHTTPCode; // 0x128(0x10)
		UEpicMediaCDNHostnames* CDNHostNames; // 0x138(0x8)
		bool bEnableBLURLRetries; // 0x140(0x1)
		bool bEnableScrubOptimization; // 0x141(0x1)
		unsigned char UnknownData03_6[0x2]; // 0x142(0x2) UNKNOWN PROPERTY
		int32_t SeekBitrate; // 0x144(0x4)
		int32_t CacheSizeKiB; // 0x148(0x4)
		int32_t TimeToCacheMilliseconds; // 0x14C(0x4)
		unsigned char UnknownData04_6[0x398]; // 0x150(0x398) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnVideoUrlSuccess; // 0x4E8(0x10)
		FMulticastInlineDelegate OnVideoUrlFailed; // 0x4F8(0x10)
		FMulticastInlineDelegate OnMetaDataFailure; // 0x508(0x10)
		FMulticastInlineDelegate OnMediaLicensedAudioTreatmentChanged; // 0x518(0x10)
		unsigned char UnknownData05_6[0x10]; // 0x528(0x10) UNKNOWN PROPERTY
		UEpicMediaDownloadLocalizedOverlays* EpicMediaDownloadLocalizedOverlays; // 0x538(0x8)
		FString ProtectUserFromAVSettings; // 0x540(0x10)
		FString StreamID; // 0x550(0x10)
		FString StreamID_Development; // 0x560(0x10)
		UMediaSource* LocalFilePlaybackAsset; // 0x570(0x8)
		double HighestFramerate; // 0x578(0x8)
		unsigned char UnknownData06_6[0x30]; // 0x580(0x30) UNKNOWN PROPERTY
		UEpicMediaMetadataResolver* MetadataResolver; // 0x5B0(0x8)
		unsigned char UnknownData07_7[0x220]; // 0x5B8(0x220) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EpicStreamMediaSource.EpicStreamMediaSource");
			return ret;
		}

		void UpdateStreamUrlArguments(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DE12DDC(relative to base address)
		FMediaPlayerOptions UpdatePlayerOptions(FMediaPlayerOptions PlayerOptions); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DE12C30(relative to base address)
		bool ShouldStreamBePlaying(UObject* WorldContextObject, UPrimitiveComponent* PrimitiveComponent, float CullRadius); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DE12A2C(relative to base address)
		UCPTypes ShouldProtectPlayerFromContent(); // Flags: Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C3493C4(relative to base address)
		void SetUrl(FString& InURL); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DE1298C(relative to base address)
		void SetSyncTimes(FDateTime InNowTime, FDateTime InStartTime, bool DynamicStart, float InOffset_s, float InDelay_s); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74DE12578(relative to base address)
		void SetPlaybackStartTime(float StartTime); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DE124F8(relative to base address)
		void SetMediaTimeWindowSeconds(FTimespan InStartTime, FTimespan InEndTime); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74DE12320(relative to base address)
		void SetLocalizedOverlaysV2(UEpicMediaDownloadLocalizedOverlays* InOverlays); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DE12294(relative to base address)
		void RequestVideoUrl(APlayerController* FortPC); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DE12218(relative to base address)
		void ReinstateSharing(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF7494B08D8(relative to base address)
		void MetadataResultHandler(FEpicMediaMetadataExt& MetaData, bool bSuccess); // Flags: Final|Native|Public|HasOutParms, Memory Exec: 0x7FF74DE12080(relative to base address)
		bool IsTimeWindowSet(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DE1205C(relative to base address)
		bool IsSyncTimeSet(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DE12038(relative to base address)
		bool IsScreenRecordingInProgress(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF748CDD424(relative to base address)
		bool HasLocalFilePlayback(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DE11FC4(relative to base address)
		void ForceSegmentCaching(bool bForce); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DE11F44(relative to base address)
		void DisableSharing(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF747B0DC80(relative to base address)
		void ClearTimeWindowTimes(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DE11F30(relative to base address)
		void ClearSyncTimes(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DE11F1C(relative to base address)
		void CancelVideoUrlRequest(bool bInCancelled); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DE11E9C(relative to base address)
	};

}
