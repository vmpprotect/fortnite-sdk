#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: HarmonixDsp
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct HarmonixDsp.HarmonixFFTAnalyzerResults
	// Size: 0x10 (0x10 - 0x0)
	struct FHarmonixFFTAnalyzerResults	
	{
	public:
		TArray<float> Spectrum; // 0x0(0x10)
	};


	// Struct HarmonixDsp.AdsrSettings
	// Size: 0x120 (0x120 - 0x0)
	struct FAdsrSettings	
	{
	public:
		EAdsrTarget Target; // 0x0(0x1)
		bool IsEnabled; // 0x1(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x2(0x2) UNKNOWN PROPERTY
		float AttackTime; // 0x4(0x4)
		float DecayTime; // 0x8(0x4)
		float SustainLevel; // 0xC(0x4)
		float ReleaseTime; // 0x10(0x4)
		float Depth; // 0x14(0x4)
		float AttackCurve; // 0x18(0x4)
		float DecayCurve; // 0x1C(0x4)
		float ReleaseCurve; // 0x20(0x4)
		unsigned char UnknownData01_7[0xFC]; // 0x24(0xFC) UNKNOWN PROPERTY
	};


	// Struct HarmonixDsp.AdsrSettingsArray
	// Size: 0x240 (0x240 - 0x0)
	struct FAdsrSettingsArray	
	{
	public:
		FAdsrSettings Array; // 0x0(0x240)
	};


	// Struct HarmonixDsp.BiquadFilterSettings
	// Size: 0x18 (0x18 - 0x0)
	struct FBiquadFilterSettings	
	{
	public:
		bool IsEnabled; // 0x0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		EBiquadFilterType Type; // 0x4(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x8(0x4) UNKNOWN PROPERTY
		float Freq; // 0xC(0x4)
		float Q; // 0x10(0x4)
		float DesignedDBGain; // 0x14(0x4)
	};


	// Struct HarmonixDsp.BitCrusherSettings
	// Size: 0x14 (0x14 - 0x0)
	struct FBitCrusherSettings	
	{
	public:
		bool IsEnabled; // 0x0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float InputGain; // 0x4(0x4)
		float OutputGain; // 0x8(0x4)
		float WetGain; // 0xC(0x4)
		uint16_t Crush; // 0x10(0x2)
		uint16_t SampleHoldFactor; // 0x12(0x2)
	};


	// Struct HarmonixDsp.DelaySettings
	// Size: 0x3C (0x3C - 0x0)
	struct FDelaySettings	
	{
	public:
		bool IsEnabled; // 0x0(0x1)
		ETimeSyncOption TimeSyncOption; // 0x1(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x2(0x2) UNKNOWN PROPERTY
		float TimeSeconds; // 0x4(0x4)
		float Tempo; // 0x8(0x4)
		float DryGain; // 0xC(0x4)
		float WetGain; // 0x10(0x4)
		float FeedbackGain; // 0x14(0x4)
		bool EQEnabled; // 0x18(0x1)
		EDelayFilterType EQType; // 0x19(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x1A(0x2) UNKNOWN PROPERTY
		float EQFreq; // 0x1C(0x4)
		float EQQ; // 0x20(0x4)
		bool LfoEnabled; // 0x24(0x1)
		ETimeSyncOption LfoTimeSyncOption; // 0x25(0x1)
		unsigned char UnknownData02_6[0x2]; // 0x26(0x2) UNKNOWN PROPERTY
		float LfoRate; // 0x28(0x4)
		float LfoDepth; // 0x2C(0x4)
		EDelayStereoType StereoType; // 0x30(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x31(0x3) UNKNOWN PROPERTY
		float PanLeft; // 0x34(0x4)
		float PanRight; // 0x38(0x4)
	};


	// Struct HarmonixDsp.DistortionFilterSettings
	// Size: 0x20 (0x20 - 0x0)
	struct FDistortionFilterSettings	
	{
	public:
		bool FilterPreClip; // 0x0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		FBiquadFilterSettings Filter; // 0x4(0x18)
		int32_t NumPasses; // 0x1C(0x4)
	};


	// Struct HarmonixDsp.DistortionSettingsV1
	// Size: 0x78 (0x78 - 0x0)
	struct FDistortionSettingsV1	
	{
	public:
		bool IsEnabled; // 0x0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float InputGainDb; // 0x4(0x4)
		float OutputGainDb; // 0x8(0x4)
		float DCAdjust; // 0xC(0x4)
		EDistortionTypeV1 Type; // 0x10(0x4)
		bool Oversample; // 0x14(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x15(0x3) UNKNOWN PROPERTY
		FDistortionFilterSettings Filters; // 0x18(0x60)
	};


	// Struct HarmonixDsp.DistortionSettingsV2
	// Size: 0x80 (0x80 - 0x0)
	struct FDistortionSettingsV2	
	{
	public:
		bool IsEnabled; // 0x0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float InputGainDb; // 0x4(0x4)
		float OutputGainDb; // 0x8(0x4)
		float DryGain; // 0xC(0x4)
		float WetGain; // 0x10(0x4)
		float DCAdjust; // 0x14(0x4)
		EDistortionTypeV2 Type; // 0x18(0x4)
		bool Oversample; // 0x1C(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x1D(0x3) UNKNOWN PROPERTY
		FDistortionFilterSettings Filters; // 0x20(0x60)
	};


	// Struct HarmonixDsp.HarmonixFFTAnalyzerSettings
	// Size: 0x24 (0x24 - 0x0)
	struct FHarmonixFFTAnalyzerSettings	
	{
	public:
		int32_t FFTSize; // 0x0(0x4)
		float MinFrequencyHz; // 0x4(0x4)
		float MaxFrequencyHz; // 0x8(0x4)
		bool MelScaleBinning; // 0xC(0x1)
		unsigned char UnknownData00_6[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
		int32_t NumResultBins; // 0x10(0x4)
		FHarmonixAudioAnalyzerOutputSettings OutputSettings; // 0x14(0x10)
	};


	// Struct HarmonixDsp.HarmonixAudioAnalyzerOutputSettings
	// Size: 0x10 (0x10 - 0x0)
	struct FHarmonixAudioAnalyzerOutputSettings	
	{
	public:
		float RiseMs; // 0x0(0x4)
		float FallMs; // 0x4(0x4)
		float MaxDecibels; // 0x8(0x4)
		float RangeDecibels; // 0xC(0x4)
	};


	// Struct HarmonixDsp.FusionPatchData
	// Size: 0x5A8 (0x5A8 - 0x0)
	struct FFusionPatchData	
	{
	public:
		TArray<FKeyzoneSettings> Keyzones; // 0x0(0x10)
		FFusionPatchSettings Settings; // 0x10(0x588)
		TArray<FFusionPatchSettings> Presets; // 0x598(0x10)
	};


	// Struct HarmonixDsp.FusionPatchSettings
	// Size: 0x588 (0x588 - 0x0)
	struct FFusionPatchSettings	
	{
	public:
		float VolumeDb; // 0x0(0x4)
		FPannerDetails PannerDetails; // 0x4(0xC)
		float DownPitchBendCents; // 0x10(0x4)
		float UpPitchBendCents; // 0x14(0x4)
		float FineTuneCents; // 0x18(0x4)
		float StartPointOffsetMs; // 0x1C(0x4)
		int32_t MaxVoices; // 0x20(0x4)
		EKeyzoneSelectMode KeyzoneSelectMode; // 0x24(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x25(0x3) UNKNOWN PROPERTY
		FPortamentoSettings Portamento; // 0x28(0x8)
		FBiquadFilterSettings Filter; // 0x30(0x18)
		FAdsrSettings Adsr; // 0x48(0x240)
		FLfoSettings LFO; // 0x288(0x30)
		FModulatorSettings Randomizer; // 0x2B8(0x18)
		FModulatorSettings VelocityModulator; // 0x2D0(0x18)
		FAdsrSettingsArray Adsrs; // 0x2E8(0x240)
		FLfoSettingsArray Lfos; // 0x528(0x30)
		FModulatorSettingsArray Randomizers; // 0x558(0x18)
		FModulatorSettingsArray VelocityModulators; // 0x570(0x18)
	};


	// Struct HarmonixDsp.ModulatorSettingsArray
	// Size: 0x18 (0x18 - 0x0)
	struct FModulatorSettingsArray	
	{
	public:
		FModulatorSettings Array; // 0x0(0x18)
	};


	// Struct HarmonixDsp.ModulatorSettings
	// Size: 0xC (0xC - 0x0)
	struct FModulatorSettings	
	{
	public:
		EModulatorTarget Target; // 0x0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float Range; // 0x4(0x4)
		float Depth; // 0x8(0x4)
	};


	// Struct HarmonixDsp.LfoSettingsArray
	// Size: 0x30 (0x30 - 0x0)
	struct FLfoSettingsArray	
	{
	public:
		FLfoSettings Array; // 0x0(0x30)
	};


	// Struct HarmonixDsp.LfoSettings
	// Size: 0x18 (0x18 - 0x0)
	struct FLfoSettings	
	{
	public:
		ELfoTarget Target; // 0x0(0x1)
		bool IsEnabled; // 0x1(0x1)
		EWaveShape Shape; // 0x2(0x1)
		bool ShouldRetrigger; // 0x3(0x1)
		bool BeatSync; // 0x4(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
		float Freq; // 0x8(0x4)
		float Depth; // 0xC(0x4)
		float InitialPhase; // 0x10(0x4)
		float TempoBPM; // 0x14(0x4)
	};


	// Struct HarmonixDsp.PortamentoSettings
	// Size: 0x8 (0x8 - 0x0)
	struct FPortamentoSettings	
	{
	public:
		bool IsEnabled; // 0x0(0x1)
		EPortamentoMode Mode; // 0x1(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x2(0x2) UNKNOWN PROPERTY
		float Seconds; // 0x4(0x4)
	};


	// Struct HarmonixDsp.PannerDetails
	// Size: 0xC (0xC - 0x0)
	struct FPannerDetails	
	{
	public:
		unsigned char UnknownData00_2[0xC]; // 0x0(0xC) UNKNOWN PROPERTY
	};


	// Struct HarmonixDsp.KeyzoneSettings
	// Size: 0xD0 (0xD0 - 0x0)
	struct FKeyzoneSettings	
	{
	public:
		USoundWave* SoundWave; // 0x0(0x8)
		unsigned char UnknownData00_6[0x10]; // 0x8(0x10) UNKNOWN PROPERTY
		int8_t RootNote; // 0x18(0x1)
		int8_t MinNote; // 0x19(0x1)
		int8_t MaxNote; // 0x1A(0x1)
		int8_t MinVelocity; // 0x1B(0x1)
		int8_t MaxVelocity; // 0x1C(0x1)
		char SampleIndex; // 0x1D(0x1)
		char Priority; // 0x1E(0x1)
		unsigned char UnknownData01_6[0x1]; // 0x1F(0x1) UNKNOWN PROPERTY
		FPannerDetails Pan; // 0x20(0xC)
		float FineTuneCents; // 0x2C(0x4)
		float Gain; // 0x30(0x4)
		bool bUnpitched; // 0x34(0x1)
		bool bVelocityToGain; // 0x35(0x1)
		unsigned char UnknownData02_6[0x2]; // 0x36(0x2) UNKNOWN PROPERTY
		FTimeStretchConfig TimeStretchConfig; // 0x38(0x60)
		bool bIsNoteOffZone; // 0x98(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x99(0x3) UNKNOWN PROPERTY
		float RandomWeight; // 0x9C(0x4)
		int32_t SampleStartOffset; // 0xA0(0x4)
		int32_t SampleEndOffset; // 0xA4(0x4)
		TArray<FTrackChannelInfo> TrackMap; // 0xA8(0x10)
		bool UseSingletonVoicePool; // 0xB8(0x1)
		unsigned char UnknownData04_7[0x17]; // 0xB9(0x17) UNKNOWN PROPERTY
	};


	// Struct HarmonixDsp.TrackChannelInfo
	// Size: 0x70 (0x70 - 0x0)
	struct FTrackChannelInfo	
	{
	public:
		int32_t RealTrackIndex; // 0x0(0x4)
		FName Name; // 0x4(0x4)
		FName Routing; // 0x8(0x4)
		unsigned char UnknownData00_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		TArray<FStreamingChannelParams> Channels; // 0x10(0x10)
		TMap<FName, FStreamingChannelParamsArray> PresetChannels; // 0x20(0x50)
	};


	// Struct HarmonixDsp.StreamingChannelParamsArray
	// Size: 0x10 (0x10 - 0x0)
	struct FStreamingChannelParamsArray	
	{
	public:
		TArray<FStreamingChannelParams> ChannelParams; // 0x0(0x10)
	};


	// Struct HarmonixDsp.StreamingChannelParams
	// Size: 0x14 (0x14 - 0x0)
	struct FStreamingChannelParams	
	{
	public:
		int32_t StreamIndex; // 0x0(0x4)
		float Gain; // 0x4(0x4)
		FPannerDetails Pan; // 0x8(0xC)
	};


	// Struct HarmonixDsp.TimeStretchConfig
	// Size: 0x60 (0x60 - 0x0)
	struct FTimeStretchConfig	
	{
	public:
		bool bMaintainTime; // 0x0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		FPitchShifterName PitchShifter; // 0x4(0x4)
		TMap<FName, FTypedParameter> PitchShifterOptions; // 0x8(0x50)
		bool bSyncTempo; // 0x58(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x59(0x3) UNKNOWN PROPERTY
		float OriginalTempo; // 0x5C(0x4)
	};


	// Struct HarmonixDsp.TypedParameter
	// Size: 0x18 (0x18 - 0x0)
	struct FTypedParameter	
	{
	public:
		unsigned char UnknownData00_2[0x18]; // 0x0(0x18) UNKNOWN PROPERTY
	};


	// Struct HarmonixDsp.PitchShifterName
	// Size: 0x4 (0x4 - 0x0)
	struct FPitchShifterName	
	{
	public:
		FName Name; // 0x0(0x4)
	};


	// Struct HarmonixDsp.FusionVoiceConfig
	// Size: 0x18 (0x18 - 0x0)
	struct FFusionVoiceConfig	
	{
	public:
		uint32_t NumTotalVoices; // 0x0(0x4)
		uint32_t SoftVoiceLimit; // 0x4(0x4)
		float FormantDbCorrectionPerHalfStepUp; // 0x8(0x4)
		float FormantDbCorrectionPerHalfStepDown; // 0xC(0x4)
		float FormantDbCorrectionMaxUp; // 0x10(0x4)
		float FormantDbCorrectionMaxDown; // 0x14(0x4)
	};


	// Struct HarmonixDsp.StreamingTrackParams
	// Size: 0x38 (0x38 - 0x0)
	struct FStreamingTrackParams	
	{
	public:
		unsigned char UnknownData00_2[0x38]; // 0x0(0x38) UNKNOWN PROPERTY
	};


	// Struct HarmonixDsp.PitchShifterNameRedirect
	// Size: 0x8 (0x8 - 0x0)
	struct FPitchShifterNameRedirect	
	{
	public:
		FName OldName; // 0x0(0x4)
		FName NewName; // 0x4(0x4)
	};


	// Struct HarmonixDsp.VocoderBandConfig
	// Size: 0xC (0xC - 0x0)
	struct FVocoderBandConfig	
	{
	public:
		int32_t BandCount; // 0x0(0x4)
		float FrequencyRatio; // 0x4(0x4)
		FName Name; // 0x8(0x4)
	};


	// Struct HarmonixDsp.VocoderBand
	// Size: 0x8 (0x8 - 0x0)
	struct FVocoderBand	
	{
	public:
		float Gain; // 0x0(0x4)
		bool Solo; // 0x4(0x1)
		unsigned char UnknownData00_7[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
	};


	// Struct HarmonixDsp.VocoderSettings
	// Size: 0x50 (0x50 - 0x0)
	struct FVocoderSettings	
	{
	public:
		bool IsEnabled; // 0x0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		int32_t ModulatorIndex; // 0x4(0x4)
		int32_t ChannelCount; // 0x8(0x4)
		float SampleRate; // 0xC(0x4)
		EVocoderBandConfig BandConfig; // 0x10(0x1)
		bool Soloing; // 0x11(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x12(0x2) UNKNOWN PROPERTY
		int32_t FrameCount; // 0x14(0x4)
		float CarrierGain; // 0x18(0x4)
		float ModulatorGain; // 0x1C(0x4)
		float CarrierThin; // 0x20(0x4)
		float ModulatorThin; // 0x24(0x4)
		float Attack; // 0x28(0x4)
		float Release; // 0x2C(0x4)
		float HighEmphasis; // 0x30(0x4)
		float Wet; // 0x34(0x4)
		float OutputGain; // 0x38(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY
		TArray<FVocoderBand> Bands; // 0x40(0x10)
	};

}
