#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: AudioExtensions
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct AudioExtensions.SoundGeneratorOutput
	// Size: 0x4 (0x4 - 0x0)
	struct FSoundGeneratorOutput	
	{
	public:
		FName Name; // 0x0(0x4)
	};


	// Struct AudioExtensions.SoundWaveCloudStreamingPlatformProjectSettings
	// Size: 0x1 (0x1 - 0x0)
	struct FSoundWaveCloudStreamingPlatformProjectSettings	
	{
	public:
		ESoundWaveCloudStreamingPlatformProjectEnableType EnablementSetting; // 0x0(0x1)
	};


	// Struct AudioExtensions.SoundWaveCloudStreamingPlatformSettings
	// Size: 0x1 (0x1 - 0x0)
	struct FSoundWaveCloudStreamingPlatformSettings	
	{
	public:
		ESoundWaveCloudStreamingPlatformEnableType EnablementSetting; // 0x0(0x1)
	};


	// Struct AudioExtensions.AudioParameter
	// Size: 0x90 (0x90 - 0x0)
	struct FAudioParameter	
	{
	public:
		FName ParamName; // 0x0(0x4)
		float FloatParam; // 0x4(0x4)
		bool BoolParam; // 0x8(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
		int32_t IntParam; // 0xC(0x4)
		UObject* ObjectParam; // 0x10(0x8)
		FString StringParam; // 0x18(0x10)
		TArray<float> ArrayFloatParam; // 0x28(0x10)
		TArray<bool> ArrayBoolParam; // 0x38(0x10)
		TArray<int32_t> ArrayIntParam; // 0x48(0x10)
		TArray<UObject*> ArrayObjectParam; // 0x58(0x10)
		TArray<FString> ArrayStringParam; // 0x68(0x10)
		EAudioParameterType ParamType; // 0x78(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x79(0x3) UNKNOWN PROPERTY
		FName TypeName; // 0x7C(0x4)
		unsigned char UnknownData02_7[0x10]; // 0x80(0x10) UNKNOWN PROPERTY
	};

}
