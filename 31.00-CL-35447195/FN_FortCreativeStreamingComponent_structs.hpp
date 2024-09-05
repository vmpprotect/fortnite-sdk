#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: FortCreativeStreamingComponent
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct FortCreativeStreamingComponent.VideoPlayerDeviceComponents
	// Size: 0x30 (0x30 - 0x0)
	struct FVideoPlayerDeviceComponents	
	{
	public:
		UStaticMeshComponent ScreenMesh; // 0x0(0x8)
		UMaterialInstanceDynamic ScreenMaterialDynamic; // 0x8(0x8)
		UMediaSoundComponent SoundComponent; // 0x10(0x8)
		UMediaTexture VideoTexture; // 0x18(0x8)
		USoundSourceBus SourceBus; // 0x20(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
	};


	// Struct FortCreativeStreamingComponent.VideoPlayerDeviceFullscreenData
	// Size: 0x8 (0x8 - 0x0)
	struct FVideoPlayerDeviceFullscreenData	
	{
	public:
		bool bEnable; // 0x0(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		int32_t InstanceID; // 0x4(0x4)
	};


	// Struct FortCreativeStreamingComponent.VideoPlayerDevicePIPSettings
	// Size: 0xC (0xC - 0x0)
	struct FVideoPlayerDevicePIPSettings	
	{
	public:
		float TriggerRange; // 0x0(0x4)
		bool bEnabled; // 0x4(0x1)
		bool bAlwaysAllow; // 0x5(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x6(0x2) UNKNOWN PROPERTY
		int32_t InstanceID; // 0x8(0x4)
	};


	// Struct FortCreativeStreamingComponent.VideoPlayerDevicePIPFullscreenSettings
	// Size: 0x10 (0x10 - 0x0)
	struct FVideoPlayerDevicePIPFullscreenSettings	
	{
	public:
		AController Instigator; // 0x0(0x8)
		bool bEnableFullscreen; // 0x8(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
		int32_t InstanceID; // 0xC(0x4)
	};


	// Struct FortCreativeStreamingComponent.VideoPlayerDeviceCMSEventData
	// Size: 0x38 (0x38 - 0x0)
	struct FVideoPlayerDeviceCMSEventData	
	{
	public:
		FString EventName; // 0x0(0x10)
		FString EventPage; // 0x10(0x10)
		FString VUID; // 0x20(0x10)
		bool bEnabled; // 0x30(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x31(0x7) UNKNOWN PROPERTY
	};


	// Struct FortCreativeStreamingComponent.VideoPlayerDeviceAudioAnalysisSettings
	// Size: 0x40 (0x40 - 0x0)
	struct FVideoPlayerDeviceAudioAnalysisSettings	
	{
	public:
		TArray AudioAnalysisBandSettings; // 0x0(0x10)
		TArray AudioAnalysisBandNames; // 0x10(0x10)
		FName PercussionParameterName; // 0x20(0x4)
		FName AverageAmplitudeParameterName; // 0x24(0x4)
		float UpdateRate; // 0x28(0x4)
		float DecibelNoiseFloor; // 0x2C(0x4)
		bool bDoNormalize; // 0x30(0x1)
		bool bDoAutoRange; // 0x31(0x1)
		unsigned char UnknownData02_6[0x2]; // 0x32(0x2) UNKNOWN PROPERTY
		float AutoRangeAttackTime; // 0x34(0x4)
		float AutoRangeReleaseTime; // 0x38(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY
	};

}
