#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: EpicStreamMediaSource
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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
		unsigned char UnknownData08_6[0x4]; // 0xAC(0x4) UNKNOWN PROPERTY
		TMap VideoId; // 0xB0(0x50)
		bool bIsLive; // 0x100(0x1)
		bool bBlurlLive; // 0x101(0x1)
		unsigned char UnknownData09_6[0x2]; // 0x102(0x2) UNKNOWN PROPERTY
		int32_t MaxResolution; // 0x104(0x4)
		int32_t MaxBandwidth; // 0x108(0x4)
		float AspectRatio; // 0x10C(0x4)
		bool bSharelock; // 0x110(0x1)
		bool bAudioOnly; // 0x111(0x1)
		bool bPartySync; // 0x112(0x1)
		unsigned char UnknownData10_6[0x1]; // 0x113(0x1) UNKNOWN PROPERTY
		float MediaDuration; // 0x114(0x4)
		FString MimeType; // 0x118(0x10)
		FString StreamDenyHTTPCode; // 0x128(0x10)
		UEpicMediaCDNHostnames CDNHostNames; // 0x138(0x8)
		bool bEnableBLURLRetries; // 0x140(0x1)
		bool bEnableScrubOptimization; // 0x141(0x1)
		unsigned char UnknownData11_6[0x2]; // 0x142(0x2) UNKNOWN PROPERTY
		int32_t SeekBitrate; // 0x144(0x4)
		int32_t CacheSizeKiB; // 0x148(0x4)
		int32_t TimeToCacheMilliseconds; // 0x14C(0x4)
		unsigned char UnknownData12_6[0x398]; // 0x150(0x398) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnVideoUrlSuccess; // 0x4E8(0x10)
		FMulticastInlineDelegate OnVideoUrlFailed; // 0x4F8(0x10)
		FMulticastInlineDelegate OnMetaDataFailure; // 0x508(0x10)
		FMulticastInlineDelegate OnMediaLicensedAudioTreatmentChanged; // 0x518(0x10)
		unsigned char UnknownData13_6[0x10]; // 0x528(0x10) UNKNOWN PROPERTY
		UEpicMediaDownloadLocalizedOverlays EpicMediaDownloadLocalizedOverlays; // 0x538(0x8)
		FString ProtectUserFromAVSettings; // 0x540(0x10)
		FString StreamID; // 0x550(0x10)
		FString StreamID_Development; // 0x560(0x10)
		UMediaSource LocalFilePlaybackAsset; // 0x570(0x8)
		double HighestFramerate; // 0x578(0x8)
		unsigned char UnknownData14_6[0x30]; // 0x580(0x30) UNKNOWN PROPERTY
		UEpicMediaMetadataResolver MetadataResolver; // 0x5B0(0x8)
		unsigned char UnknownData15_7[0x220]; // 0x5B8(0x220) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/EpicStreamMediaSource.EpicStreamMediaSource");
			return ret;
		}

		void UpdateStreamUrlArguments(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4146546B8
		FMediaPlayerOptions UpdatePlayerOptions(FMediaPlayerOptions PlayerOptions); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4146545D8
		bool ShouldStreamBePlaying(UObject WorldContextObject, UPrimitiveComponent PrimitiveComponent, float CullRadius); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4146544F8
		UCPTypes ShouldProtectPlayerFromContent(); // Flags: Native|Public|BlueprintCallable|BlueprintPure 0x7FF414654418
		void SetUrl(FString& InURL); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414654338
		void SetSyncTimes(FDateTime InNowTime, FDateTime InStartTime, bool DynamicStart, float InOffset_s, float InDelay_s); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF414654258
		void SetPlaybackStartTime(float StartTime); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414654178
		void SetMediaTimeWindowSeconds(FTimespan InStartTime, FTimespan InEndTime); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF414654098
		void SetLocalizedOverlaysV2(UEpicMediaDownloadLocalizedOverlays InOverlays); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414653FB8
		void RequestVideoUrl(APlayerController FortPC); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414653ED8
		void ReinstateSharing(); // Flags: Native|Public|BlueprintCallable 0x7FF414653DF8
		void MetadataResultHandler(FEpicMediaMetadataExt& MetaData, bool bSuccess); // Flags: Final|Native|Public|HasOutParms 0x7FF414653D18
		bool IsTimeWindowSet(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414653C38
		bool IsSyncTimeSet(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414653B58
		bool IsScreenRecordingInProgress(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414653A78
		bool HasLocalFilePlayback(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414653998
		void ForceSegmentCaching(bool bForce); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4146538B8
		void DisableSharing(); // Flags: Native|Public|BlueprintCallable 0x7FF4146537D8
		void ClearTimeWindowTimes(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4146536F8
		void ClearSyncTimes(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414653618
		void CancelVideoUrlRequest(bool bInCancelled); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414653538
	};

}
