#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: AudioMixer
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct AudioMixer.AudioOutputDeviceInfo
	// Size: 0x48 (0x48 - 0x0)
	struct FAudioOutputDeviceInfo	
	{
	public:
		FString Name; // 0x0(0x10)
		FString DeviceID; // 0x10(0x10)
		int32_t NumChannels; // 0x20(0x4)
		int32_t SampleRate; // 0x24(0x4)
		EAudioMixerStreamDataFormatType Format; // 0x28(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x29(0x7) UNKNOWN PROPERTY
		TArray<EAudioMixerChannelType> OutputChannelArray; // 0x30(0x10)
		bool bIsSystemDefault : 1; // 0x40:0(0x1)
		bool bIsCurrentDevice : 1; // 0x40:1(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x41(0x7) UNKNOWN PROPERTY
	};


	// Struct AudioMixer.SwapAudioOutputResult
	// Size: 0x28 (0x28 - 0x0)
	struct FSwapAudioOutputResult	
	{
	public:
		FString CurrentDeviceId; // 0x0(0x10)
		FString RequestedDeviceId; // 0x10(0x10)
		ESwapAudioOutputDeviceResultState Result; // 0x20(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x21(0x7) UNKNOWN PROPERTY
	};


	// Struct AudioMixer.SubmixEffectDynamicProcessorFilterSettings
	// Size: 0xC (0xC - 0x0)
	struct FSubmixEffectDynamicProcessorFilterSettings	
	{
	public:
		bool bEnabled : 1; // 0x0:0(0x1)
		unsigned char UnknownData00_5[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float Cutoff; // 0x4(0x4)
		float GainDb; // 0x8(0x4)
	};


	// Struct AudioMixer.SubmixEffectDynamicsProcessorSettings
	// Size: 0x60 (0x60 - 0x0)
	struct FSubmixEffectDynamicsProcessorSettings	
	{
	public:
		ESubmixEffectDynamicsProcessorType DynamicsProcessorType; // 0x0(0x1)
		ESubmixEffectDynamicsPeakMode PeakMode; // 0x1(0x1)
		ESubmixEffectDynamicsChannelLinkMode LinkMode; // 0x2(0x1)
		unsigned char UnknownData00_6[0x1]; // 0x3(0x1) UNKNOWN PROPERTY
		float InputGainDb; // 0x4(0x4)
		float ThresholdDb; // 0x8(0x4)
		float Ratio; // 0xC(0x4)
		float KneeBandwidthDb; // 0x10(0x4)
		float LookAheadMsec; // 0x14(0x4)
		float AttackTimeMsec; // 0x18(0x4)
		float ReleaseTimeMsec; // 0x1C(0x4)
		ESubmixEffectDynamicsKeySource KeySource; // 0x20(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x21(0x7) UNKNOWN PROPERTY
		UAudioBus* ExternalAudioBus; // 0x28(0x8)
		USoundSubmix* ExternalSubmix; // 0x30(0x8)
		bool bChannelLinked : 1; // 0x38:0(0x1)
		bool bAnalogMode : 1; // 0x38:1(0x1)
		bool bBypass : 1; // 0x38:2(0x1)
		bool bKeyAudition : 1; // 0x38:3(0x1)
		unsigned char UnknownData02_5[0x3]; // 0x39(0x3) UNKNOWN PROPERTY
		float KeyGainDb; // 0x3C(0x4)
		float OutputGainDb; // 0x40(0x4)
		FSubmixEffectDynamicProcessorFilterSettings KeyHighshelf; // 0x44(0xC)
		FSubmixEffectDynamicProcessorFilterSettings KeyLowshelf; // 0x50(0xC)
		unsigned char UnknownData03_7[0x4]; // 0x5C(0x4) UNKNOWN PROPERTY
	};


	// Struct AudioMixer.SubmixEffectEQBand
	// Size: 0x10 (0x10 - 0x0)
	struct FSubmixEffectEQBand	
	{
	public:
		float Frequency; // 0x0(0x4)
		float Bandwidth; // 0x4(0x4)
		float GainDb; // 0x8(0x4)
		bool bEnabled : 1; // 0xC:0(0x1)
		unsigned char UnknownData00_7[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
	};


	// Struct AudioMixer.SubmixEffectSubmixEQSettings
	// Size: 0x10 (0x10 - 0x0)
	struct FSubmixEffectSubmixEQSettings	
	{
	public:
		TArray<FSubmixEffectEQBand> EqBands; // 0x0(0x10)
	};


	// Struct AudioMixer.SubmixEffectReverbSettings
	// Size: 0x40 (0x40 - 0x0)
	struct FSubmixEffectReverbSettings	
	{
	public:
		bool bBypassEarlyReflections; // 0x0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float ReflectionsDelay; // 0x4(0x4)
		float GainHF; // 0x8(0x4)
		float ReflectionsGain; // 0xC(0x4)
		bool bBypassLateReflections; // 0x10(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x11(0x3) UNKNOWN PROPERTY
		float LateDelay; // 0x14(0x4)
		float DecayTime; // 0x18(0x4)
		float Density; // 0x1C(0x4)
		float Diffusion; // 0x20(0x4)
		float AirAbsorptionGainHF; // 0x24(0x4)
		float DecayHFRatio; // 0x28(0x4)
		float LateGain; // 0x2C(0x4)
		float Gain; // 0x30(0x4)
		float WetLevel; // 0x34(0x4)
		float DryLevel; // 0x38(0x4)
		bool bBypass; // 0x3C(0x1)
		unsigned char UnknownData02_7[0x3]; // 0x3D(0x3) UNKNOWN PROPERTY
	};

}
