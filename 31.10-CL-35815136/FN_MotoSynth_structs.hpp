#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: MotoSynth
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct MotoSynth.MotoSynthRuntimeSettings
	// Size: 0x138 (0x138 - 0x0)
	struct FMotoSynthRuntimeSettings	
	{
	public:
		bool bSynthToneEnabled; // 0x0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		FVector2D SynthToneVolumeRange; // 0x8(0x10)
		FVector2D SynthToneFilterFrequencyRange; // 0x18(0x10)
		bool bSynthToneEnvelopeEnabled; // 0x28(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x29(0x7) UNKNOWN PROPERTY
		FVector2D SynthToneAttackTimeMsecRange; // 0x30(0x10)
		FVector2D SynthToneAttackCurveRange; // 0x40(0x10)
		FVector2D SynthToneDecayTimeMsecRange; // 0x50(0x10)
		FVector2D SynthToneDecayCurveRange; // 0x60(0x10)
		int32_t SynthOctaveShift; // 0x70(0x4)
		bool bNoiseEnabled; // 0x74(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x75(0x3) UNKNOWN PROPERTY
		FVector2D NoiseVolumeRange; // 0x78(0x10)
		bool bNoiseEnvelopeEnabled; // 0x88(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x89(0x7) UNKNOWN PROPERTY
		FVector2D NoiseLPFRange; // 0x90(0x10)
		FVector2D NoiseAttackTimeMsecRange; // 0xA0(0x10)
		FVector2D NoiseAttackCurveRange; // 0xB0(0x10)
		FVector2D NoiseDecayTimeMsecRange; // 0xC0(0x10)
		FVector2D NoiseDecayCurveRange; // 0xD0(0x10)
		bool bGranularEngineEnabled; // 0xE0(0x1)
		unsigned char UnknownData04_6[0x3]; // 0xE1(0x3) UNKNOWN PROPERTY
		float GranularEngineVolume; // 0xE4(0x4)
		float GranularEnginePitchScale; // 0xE8(0x4)
		int32_t NumSamplesToCrossfadeBetweenGrains; // 0xEC(0x4)
		int32_t NumGrainTableEntriesPerGrain; // 0xF0(0x4)
		int32_t GrainTableRandomOffsetForConstantRPMs; // 0xF4(0x4)
		int32_t GrainCrossfadeSamplesForConstantRPMs; // 0xF8(0x4)
		unsigned char UnknownData05_6[0x4]; // 0xFC(0x4) UNKNOWN PROPERTY
		UMotoSynthSource* AccelerationSource; // 0x100(0x8)
		UMotoSynthSource* DecelerationSource; // 0x108(0x8)
		bool bStereoWidenerEnabled; // 0x110(0x1)
		unsigned char UnknownData06_6[0x3]; // 0x111(0x3) UNKNOWN PROPERTY
		float StereoDelayMsec; // 0x114(0x4)
		float StereoFeedback; // 0x118(0x4)
		float StereoWidenerWetlevel; // 0x11C(0x4)
		float StereoWidenerDryLevel; // 0x120(0x4)
		float StereoWidenerDelayRatio; // 0x124(0x4)
		bool bStereoWidenerFilterEnabled; // 0x128(0x1)
		unsigned char UnknownData07_6[0x3]; // 0x129(0x3) UNKNOWN PROPERTY
		float StereoWidenerFilterFrequency; // 0x12C(0x4)
		float StereoWidenerFilterQ; // 0x130(0x4)
		unsigned char UnknownData08_7[0x4]; // 0x134(0x4) UNKNOWN PROPERTY
	};


	// Struct MotoSynth.GrainTableEntry
	// Size: 0x8 (0x8 - 0x0)
	struct FGrainTableEntry	
	{
	public:
		int32_t SampleIndex; // 0x0(0x4)
		float RPM; // 0x4(0x4)
	};

}
