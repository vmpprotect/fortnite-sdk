#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: Synthesis
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct Synthesis.Synth1PatchCable
	// Size: 0x8 (0x8 - 0x0)
	struct FSynth1PatchCable	
	{
	public:
		float Depth; // 0x0(0x4)
		ESynth1PatchDestination Destination; // 0x4(0x1)
		unsigned char UnknownData00_7[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
	};


	// Struct Synthesis.PatchId
	// Size: 0x4 (0x4 - 0x0)
	struct FPatchId	
	{
	public:
		int32_t ID; // 0x0(0x4)
	};


	// Struct Synthesis.EpicSynth1Patch
	// Size: 0x18 (0x18 - 0x0)
	struct FEpicSynth1Patch	
	{
	public:
		ESynth1PatchSource PatchSource; // 0x0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		TArray<FSynth1PatchCable> PatchCables; // 0x8(0x10)
	};


	// Struct Synthesis.ModularSynthPreset
	// Inherited from FTableRowBase
	// Size: 0xD8 (0xE0 - 0x8)
	struct FModularSynthPreset : public FTableRowBase	
	{
	public:
		bool bEnablePolyphony : 1; // 0x8:0(0x1)
		unsigned char UnknownData00_5[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
		ESynth1OscType Osc1Type; // 0xC(0x1)
		unsigned char UnknownData01_6[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
		float Osc1Gain; // 0x10(0x4)
		float Osc1Octave; // 0x14(0x4)
		float Osc1Semitones; // 0x18(0x4)
		float Osc1Cents; // 0x1C(0x4)
		float Osc1PulseWidth; // 0x20(0x4)
		ESynth1OscType Osc2Type; // 0x24(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x25(0x3) UNKNOWN PROPERTY
		float Osc2Gain; // 0x28(0x4)
		float Osc2Octave; // 0x2C(0x4)
		float Osc2Semitones; // 0x30(0x4)
		float Osc2Cents; // 0x34(0x4)
		float Osc2PulseWidth; // 0x38(0x4)
		float Portamento; // 0x3C(0x4)
		bool bEnableUnison : 1; // 0x40:0(0x1)
		bool bEnableOscillatorSync : 1; // 0x40:1(0x1)
		unsigned char UnknownData03_5[0x3]; // 0x41(0x3) UNKNOWN PROPERTY
		float Spread; // 0x44(0x4)
		float Pan; // 0x48(0x4)
		float LFO1Frequency; // 0x4C(0x4)
		float LFO1Gain; // 0x50(0x4)
		ESynthLFOType LFO1Type; // 0x54(0x1)
		ESynthLFOMode LFO1Mode; // 0x55(0x1)
		ESynthLFOPatchType LFO1PatchType; // 0x56(0x1)
		unsigned char UnknownData04_6[0x1]; // 0x57(0x1) UNKNOWN PROPERTY
		float LFO2Frequency; // 0x58(0x4)
		float LFO2Gain; // 0x5C(0x4)
		ESynthLFOType LFO2Type; // 0x60(0x1)
		ESynthLFOMode LFO2Mode; // 0x61(0x1)
		ESynthLFOPatchType LFO2PatchType; // 0x62(0x1)
		unsigned char UnknownData05_6[0x1]; // 0x63(0x1) UNKNOWN PROPERTY
		float GainDb; // 0x64(0x4)
		float AttackTime; // 0x68(0x4)
		float DecayTime; // 0x6C(0x4)
		float SustainGain; // 0x70(0x4)
		float ReleaseTime; // 0x74(0x4)
		ESynthModEnvPatch ModEnvPatchType; // 0x78(0x1)
		ESynthModEnvBiasPatch ModEnvBiasPatchType; // 0x79(0x1)
		unsigned char UnknownData06_6[0x2]; // 0x7A(0x2) UNKNOWN PROPERTY
		bool bInvertModulationEnvelope : 1; // 0x7C:0(0x1)
		bool bInvertModulationEnvelopeBias : 1; // 0x7C:1(0x1)
		unsigned char UnknownData07_5[0x3]; // 0x7D(0x3) UNKNOWN PROPERTY
		float ModulationEnvelopeDepth; // 0x80(0x4)
		float ModulationEnvelopeAttackTime; // 0x84(0x4)
		float ModulationEnvelopeDecayTime; // 0x88(0x4)
		float ModulationEnvelopeSustainGain; // 0x8C(0x4)
		float ModulationEnvelopeReleaseTime; // 0x90(0x4)
		bool bLegato : 1; // 0x94:0(0x1)
		bool bRetrigger : 1; // 0x94:1(0x1)
		unsigned char UnknownData08_5[0x3]; // 0x95(0x3) UNKNOWN PROPERTY
		float FilterFrequency; // 0x98(0x4)
		float FilterQ; // 0x9C(0x4)
		ESynthFilterType FilterType; // 0xA0(0x1)
		ESynthFilterAlgorithm FilterAlgorithm; // 0xA1(0x1)
		unsigned char UnknownData09_6[0x2]; // 0xA2(0x2) UNKNOWN PROPERTY
		bool bStereoDelayEnabled : 1; // 0xA4:0(0x1)
		unsigned char UnknownData10_5[0x3]; // 0xA5(0x3) UNKNOWN PROPERTY
		ESynthStereoDelayMode StereoDelayMode; // 0xA8(0x1)
		unsigned char UnknownData11_6[0x3]; // 0xA9(0x3) UNKNOWN PROPERTY
		float StereoDelayTime; // 0xAC(0x4)
		float StereoDelayFeedback; // 0xB0(0x4)
		float StereoDelayWetlevel; // 0xB4(0x4)
		float StereoDelayRatio; // 0xB8(0x4)
		bool bChorusEnabled : 1; // 0xBC:0(0x1)
		unsigned char UnknownData12_5[0x3]; // 0xBD(0x3) UNKNOWN PROPERTY
		float ChorusDepth; // 0xC0(0x4)
		float ChorusFeedback; // 0xC4(0x4)
		float ChorusFrequency; // 0xC8(0x4)
		unsigned char UnknownData13_6[0x4]; // 0xCC(0x4) UNKNOWN PROPERTY
		TArray<FEpicSynth1Patch> Patches; // 0xD0(0x10)
	};


	// Struct Synthesis.ModularSynthPresetBankEntry
	// Size: 0xF0 (0xF0 - 0x0)
	struct FModularSynthPresetBankEntry	
	{
	public:
		FString PresetName; // 0x0(0x10)
		FModularSynthPreset Preset; // 0x10(0xE0)
	};


	// Struct Synthesis.SourceEffectBitCrusherBaseSettings
	// Size: 0x8 (0x8 - 0x0)
	struct FSourceEffectBitCrusherBaseSettings	
	{
	public:
		float SampleRate; // 0x0(0x4)
		float BitDepth; // 0x4(0x4)
	};


	// Struct Synthesis.SourceEffectBitCrusherSettings
	// Size: 0xC0 (0xC0 - 0x0)
	struct FSourceEffectBitCrusherSettings	
	{
	public:
		float CrushedSampleRate; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FSoundModulationDestinationSettings SampleRateModulation; // 0x8(0x58)
		float CrushedBits; // 0x60(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x64(0x4) UNKNOWN PROPERTY
		FSoundModulationDestinationSettings BitModulation; // 0x68(0x58)
	};


	// Struct Synthesis.SourceEffectChorusBaseSettings
	// Size: 0x18 (0x18 - 0x0)
	struct FSourceEffectChorusBaseSettings	
	{
	public:
		float Depth; // 0x0(0x4)
		float Frequency; // 0x4(0x4)
		float Feedback; // 0x8(0x4)
		float WetLevel; // 0xC(0x4)
		float DryLevel; // 0x10(0x4)
		float Spread; // 0x14(0x4)
	};


	// Struct Synthesis.SourceEffectChorusSettings
	// Size: 0x228 (0x228 - 0x0)
	struct FSourceEffectChorusSettings	
	{
	public:
		float Depth; // 0x0(0x4)
		float Frequency; // 0x4(0x4)
		float Feedback; // 0x8(0x4)
		float WetLevel; // 0xC(0x4)
		float DryLevel; // 0x10(0x4)
		float Spread; // 0x14(0x4)
		FSoundModulationDestinationSettings DepthModulation; // 0x18(0x58)
		FSoundModulationDestinationSettings FrequencyModulation; // 0x70(0x58)
		FSoundModulationDestinationSettings FeedbackModulation; // 0xC8(0x58)
		FSoundModulationDestinationSettings WetModulation; // 0x120(0x58)
		FSoundModulationDestinationSettings DryModulation; // 0x178(0x58)
		FSoundModulationDestinationSettings SpreadModulation; // 0x1D0(0x58)
	};


	// Struct Synthesis.SourceEffectConvolutionReverbSettings
	// Size: 0x10 (0x10 - 0x0)
	struct FSourceEffectConvolutionReverbSettings	
	{
	public:
		float NormalizationVolumeDb; // 0x0(0x4)
		float WetVolumeDb; // 0x4(0x4)
		float DryVolumeDb; // 0x8(0x4)
		bool bBypass; // 0xC(0x1)
		unsigned char UnknownData00_7[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
	};


	// Struct Synthesis.SourceEffectDynamicsProcessorSettings
	// Size: 0x28 (0x28 - 0x0)
	struct FSourceEffectDynamicsProcessorSettings	
	{
	public:
		ESourceEffectDynamicsProcessorType DynamicsProcessorType; // 0x0(0x1)
		ESourceEffectDynamicsPeakMode PeakMode; // 0x1(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x2(0x2) UNKNOWN PROPERTY
		float LookAheadMsec; // 0x4(0x4)
		float AttackTimeMsec; // 0x8(0x4)
		float ReleaseTimeMsec; // 0xC(0x4)
		float ThresholdDb; // 0x10(0x4)
		float Ratio; // 0x14(0x4)
		float KneeBandwidthDb; // 0x18(0x4)
		float InputGainDb; // 0x1C(0x4)
		float OutputGainDb; // 0x20(0x4)
		bool bStereoLinked : 1; // 0x24:0(0x1)
		bool bAnalogMode : 1; // 0x24:1(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x25(0x3) UNKNOWN PROPERTY
	};


	// Struct Synthesis.SourceEffectEnvelopeFollowerSettings
	// Size: 0xC (0xC - 0x0)
	struct FSourceEffectEnvelopeFollowerSettings	
	{
	public:
		float AttackTime; // 0x0(0x4)
		float ReleaseTime; // 0x4(0x4)
		EEnvelopeFollowerPeakMode PeakMode; // 0x8(0x1)
		bool bIsAnalogMode; // 0x9(0x1)
		unsigned char UnknownData00_7[0x2]; // 0xA(0x2) UNKNOWN PROPERTY
	};


	// Struct Synthesis.SourceEffectEQBand
	// Size: 0x10 (0x10 - 0x0)
	struct FSourceEffectEQBand	
	{
	public:
		float Frequency; // 0x0(0x4)
		float Bandwidth; // 0x4(0x4)
		float GainDb; // 0x8(0x4)
		bool bEnabled : 1; // 0xC:0(0x1)
		unsigned char UnknownData00_7[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
	};


	// Struct Synthesis.SourceEffectEQSettings
	// Size: 0x10 (0x10 - 0x0)
	struct FSourceEffectEQSettings	
	{
	public:
		TArray<FSourceEffectEQBand> EqBands; // 0x0(0x10)
	};


	// Struct Synthesis.SourceEffectFilterAudioBusModulationSettings
	// Size: 0x28 (0x28 - 0x0)
	struct FSourceEffectFilterAudioBusModulationSettings	
	{
	public:
		UAudioBus* AudioBus; // 0x0(0x8)
		int32_t EnvelopeFollowerAttackTimeMsec; // 0x8(0x4)
		int32_t EnvelopeFollowerReleaseTimeMsec; // 0xC(0x4)
		float EnvelopeGainMultiplier; // 0x10(0x4)
		ESourceEffectFilterParam FilterParam; // 0x14(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x15(0x3) UNKNOWN PROPERTY
		float MinFrequencyModulation; // 0x18(0x4)
		float MaxFrequencyModulation; // 0x1C(0x4)
		float MinResonanceModulation; // 0x20(0x4)
		float MaxResonanceModulation; // 0x24(0x4)
	};


	// Struct Synthesis.SourceEffectFilterSettings
	// Size: 0x20 (0x20 - 0x0)
	struct FSourceEffectFilterSettings	
	{
	public:
		ESourceEffectFilterCircuit FilterCircuit; // 0x0(0x1)
		ESourceEffectFilterType FilterType; // 0x1(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x2(0x2) UNKNOWN PROPERTY
		float CutoffFrequency; // 0x4(0x4)
		float FilterQ; // 0x8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		TArray<FSourceEffectFilterAudioBusModulationSettings> AudioBusModulation; // 0x10(0x10)
	};


	// Struct Synthesis.SourceEffectFoldbackDistortionSettings
	// Size: 0xC (0xC - 0x0)
	struct FSourceEffectFoldbackDistortionSettings	
	{
	public:
		float InputGainDb; // 0x0(0x4)
		float ThresholdDb; // 0x4(0x4)
		float OutputGainDb; // 0x8(0x4)
	};


	// Struct Synthesis.SourceEffectMidSideSpreaderSettings
	// Size: 0x8 (0x8 - 0x0)
	struct FSourceEffectMidSideSpreaderSettings	
	{
	public:
		float SpreadAmount; // 0x0(0x4)
		EStereoChannelMode InputMode; // 0x4(0x1)
		EStereoChannelMode OutputMode; // 0x5(0x1)
		bool bEqualPower; // 0x6(0x1)
		unsigned char UnknownData00_7[0x1]; // 0x7(0x1) UNKNOWN PROPERTY
	};


	// Struct Synthesis.SourceEffectIndividualFilterSettings
	// Size: 0xC (0xC - 0x0)
	struct FSourceEffectIndividualFilterSettings	
	{
	public:
		ESourceEffectMotionFilterCircuit FilterCircuit; // 0x0(0x1)
		ESourceEffectMotionFilterType FilterType; // 0x1(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x2(0x2) UNKNOWN PROPERTY
		float CutoffFrequency; // 0x4(0x4)
		float FilterQ; // 0x8(0x4)
	};


	// Struct Synthesis.SourceEffectMotionFilterModulationSettings
	// Size: 0x40 (0x40 - 0x0)
	struct FSourceEffectMotionFilterModulationSettings	
	{
	public:
		ESourceEffectMotionFilterModSource ModulationSource; // 0x0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		FVector2D ModulationInputRange; // 0x8(0x10)
		FVector2D ModulationOutputMinimumRange; // 0x18(0x10)
		FVector2D ModulationOutputMaximumRange; // 0x28(0x10)
		float UpdateEaseMS; // 0x38(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY
	};


	// Struct Synthesis.SourceEffectMotionFilterSettings
	// Size: 0x78 (0x78 - 0x0)
	struct FSourceEffectMotionFilterSettings	
	{
	public:
		ESourceEffectMotionFilterTopology MotionFilterTopology; // 0x0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float MotionFilterMix; // 0x4(0x4)
		FSourceEffectIndividualFilterSettings FilterASettings; // 0x8(0xC)
		FSourceEffectIndividualFilterSettings FilterBSettings; // 0x14(0xC)
		TMap<ESourceEffectMotionFilterModDestination, FSourceEffectMotionFilterModulationSettings> ModulationMappings; // 0x20(0x50)
		float DryVolumeDb; // 0x70(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x74(0x4) UNKNOWN PROPERTY
	};


	// Struct Synthesis.SourceEffectPannerSettings
	// Size: 0x8 (0x8 - 0x0)
	struct FSourceEffectPannerSettings	
	{
	public:
		float Spread; // 0x0(0x4)
		float Pan; // 0x4(0x4)
	};


	// Struct Synthesis.SourceEffectPhaserSettings
	// Size: 0x10 (0x10 - 0x0)
	struct FSourceEffectPhaserSettings	
	{
	public:
		float WetLevel; // 0x0(0x4)
		float Frequency; // 0x4(0x4)
		float Feedback; // 0x8(0x4)
		EPhaserLFOType LFOType; // 0xC(0x1)
		bool UseQuadraturePhase; // 0xD(0x1)
		unsigned char UnknownData00_7[0x2]; // 0xE(0x2) UNKNOWN PROPERTY
	};


	// Struct Synthesis.SourceEffectRingModulationSettings
	// Size: 0x20 (0x20 - 0x0)
	struct FSourceEffectRingModulationSettings	
	{
	public:
		ERingModulatorTypeSourceEffect ModulatorType; // 0x0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float Frequency; // 0x4(0x4)
		float Depth; // 0x8(0x4)
		float DryLevel; // 0xC(0x4)
		float WetLevel; // 0x10(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
		UAudioBus* AudioBusModulator; // 0x18(0x8)
	};


	// Struct Synthesis.SourceEffectSimpleDelaySettings
	// Size: 0x18 (0x18 - 0x0)
	struct FSourceEffectSimpleDelaySettings	
	{
	public:
		float SpeedOfSound; // 0x0(0x4)
		float DelayAmount; // 0x4(0x4)
		float DryAmount; // 0x8(0x4)
		float WetAmount; // 0xC(0x4)
		float Feedback; // 0x10(0x4)
		bool bDelayBasedOnDistance : 1; // 0x14:0(0x1)
		bool bUseDistanceOverride : 1; // 0x14:1(0x1)
		unsigned char UnknownData00_7[0x3]; // 0x15(0x3) UNKNOWN PROPERTY
	};


	// Struct Synthesis.SourceEffectStereoDelaySettings
	// Size: 0x24 (0x24 - 0x0)
	struct FSourceEffectStereoDelaySettings	
	{
	public:
		EStereoDelaySourceEffect DelayMode; // 0x0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float DelayTimeMsec; // 0x4(0x4)
		float Feedback; // 0x8(0x4)
		float DelayRatio; // 0xC(0x4)
		float WetLevel; // 0x10(0x4)
		float DryLevel; // 0x14(0x4)
		bool bFilterEnabled; // 0x18(0x1)
		EStereoDelayFiltertype FilterType; // 0x19(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x1A(0x2) UNKNOWN PROPERTY
		float FilterFrequency; // 0x1C(0x4)
		float FilterQ; // 0x20(0x4)
	};


	// Struct Synthesis.SourceEffectWaveShaperSettings
	// Size: 0x8 (0x8 - 0x0)
	struct FSourceEffectWaveShaperSettings	
	{
	public:
		float Amount; // 0x0(0x4)
		float OutputGainDb; // 0x4(0x4)
	};


	// Struct Synthesis.SubmixEffectConvolutionReverbSettings
	// Size: 0x30 (0x30 - 0x0)
	struct FSubmixEffectConvolutionReverbSettings	
	{
	public:
		float NormalizationVolumeDb; // 0x0(0x4)
		float WetVolumeDb; // 0x4(0x4)
		float DryVolumeDb; // 0x8(0x4)
		bool bBypass; // 0xC(0x1)
		bool bMixInputChannelFormatToImpulseResponseFormat; // 0xD(0x1)
		bool bMixReverbOutputToOutputChannelFormat; // 0xE(0x1)
		unsigned char UnknownData00_6[0x1]; // 0xF(0x1) UNKNOWN PROPERTY
		float SurroundRearChannelBleedDb; // 0x10(0x4)
		bool bInvertRearChannelBleedPhase; // 0x14(0x1)
		bool bSurroundRearChannelFlip; // 0x15(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x16(0x2) UNKNOWN PROPERTY
		float SurroundRearChannelBleedAmount; // 0x18(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
		UAudioImpulseResponse* ImpulseResponse; // 0x20(0x8)
		bool AllowHardwareAcceleration; // 0x28(0x1)
		unsigned char UnknownData03_7[0x7]; // 0x29(0x7) UNKNOWN PROPERTY
	};


	// Struct Synthesis.SubmixEffectDelaySettings
	// Size: 0xC (0xC - 0x0)
	struct FSubmixEffectDelaySettings	
	{
	public:
		float MaximumDelayLength; // 0x0(0x4)
		float InterpolationTime; // 0x4(0x4)
		float DelayLength; // 0x8(0x4)
	};


	// Struct Synthesis.SubmixEffectFilterSettings
	// Size: 0xC (0xC - 0x0)
	struct FSubmixEffectFilterSettings	
	{
	public:
		ESubmixFilterType FilterType; // 0x0(0x1)
		ESubmixFilterAlgorithm FilterAlgorithm; // 0x1(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x2(0x2) UNKNOWN PROPERTY
		float FilterFrequency; // 0x4(0x4)
		float FilterQ; // 0x8(0x4)
	};


	// Struct Synthesis.SubmixEffectFlexiverbSettings
	// Size: 0x10 (0x10 - 0x0)
	struct FSubmixEffectFlexiverbSettings	
	{
	public:
		float PreDelay; // 0x0(0x4)
		float DecayTime; // 0x4(0x4)
		float RoomDampening; // 0x8(0x4)
		int32_t Complexity; // 0xC(0x4)
	};


	// Struct Synthesis.DynamicsBandSettings
	// Size: 0x20 (0x20 - 0x0)
	struct FDynamicsBandSettings	
	{
	public:
		float CrossoverTopFrequency; // 0x0(0x4)
		float AttackTimeMsec; // 0x4(0x4)
		float ReleaseTimeMsec; // 0x8(0x4)
		float ThresholdDb; // 0xC(0x4)
		float Ratio; // 0x10(0x4)
		float KneeBandwidthDb; // 0x14(0x4)
		float InputGainDb; // 0x18(0x4)
		float OutputGainDb; // 0x1C(0x4)
	};


	// Struct Synthesis.SubmixEffectMultibandCompressorSettings
	// Size: 0x38 (0x38 - 0x0)
	struct FSubmixEffectMultibandCompressorSettings	
	{
	public:
		ESubmixEffectDynamicsProcessorType DynamicsProcessorType; // 0x0(0x1)
		ESubmixEffectDynamicsPeakMode PeakMode; // 0x1(0x1)
		ESubmixEffectDynamicsChannelLinkMode LinkMode; // 0x2(0x1)
		unsigned char UnknownData00_6[0x1]; // 0x3(0x1) UNKNOWN PROPERTY
		float LookAheadMsec; // 0x4(0x4)
		bool bAnalogMode; // 0x8(0x1)
		bool bFourPole; // 0x9(0x1)
		bool bBypass; // 0xA(0x1)
		ESubmixEffectDynamicsKeySource KeySource; // 0xB(0x1)
		unsigned char UnknownData01_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		UAudioBus* ExternalAudioBus; // 0x10(0x8)
		USoundSubmix* ExternalSubmix; // 0x18(0x8)
		float KeyGainDb; // 0x20(0x4)
		bool bKeyAudition; // 0x24(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x25(0x3) UNKNOWN PROPERTY
		TArray<FDynamicsBandSettings> Bands; // 0x28(0x10)
	};


	// Struct Synthesis.SubmixEffectStereoDelaySettings
	// Size: 0x24 (0x24 - 0x0)
	struct FSubmixEffectStereoDelaySettings	
	{
	public:
		EStereoDelaySourceEffect DelayMode; // 0x0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float DelayTimeMsec; // 0x4(0x4)
		float Feedback; // 0x8(0x4)
		float DelayRatio; // 0xC(0x4)
		float WetLevel; // 0x10(0x4)
		float DryLevel; // 0x14(0x4)
		bool bFilterEnabled; // 0x18(0x1)
		EStereoDelayFiltertype FilterType; // 0x19(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x1A(0x2) UNKNOWN PROPERTY
		float FilterFrequency; // 0x1C(0x4)
		float FilterQ; // 0x20(0x4)
	};


	// Struct Synthesis.SubmixEffectStereoToQuadSettings
	// Size: 0x8 (0x8 - 0x0)
	struct FSubmixEffectStereoToQuadSettings	
	{
	public:
		bool bFlipChannels; // 0x0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float RearChannelGain; // 0x4(0x4)
	};


	// Struct Synthesis.TapDelayInfo
	// Size: 0x18 (0x18 - 0x0)
	struct FTapDelayInfo	
	{
	public:
		ETapLineMode TapLineMode; // 0x0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float DelayLength; // 0x4(0x4)
		float Gain; // 0x8(0x4)
		int32_t OutputChannel; // 0xC(0x4)
		float PanInDegrees; // 0x10(0x4)
		int32_t TapId; // 0x14(0x4)
	};


	// Struct Synthesis.SubmixEffectTapDelaySettings
	// Size: 0x18 (0x18 - 0x0)
	struct FSubmixEffectTapDelaySettings	
	{
	public:
		float MaximumDelayLength; // 0x0(0x4)
		float InterpolationTime; // 0x4(0x4)
		TArray<FTapDelayInfo> Taps; // 0x8(0x10)
	};


	// Struct Synthesis.Synth2DSliderStyle
	// Inherited from FSlateWidgetStyle
	// Size: 0x388 (0x390 - 0x8)
	struct FSynth2DSliderStyle : public FSlateWidgetStyle	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FSlateBrush NormalThumbImage; // 0x10(0xB0)
		FSlateBrush DisabledThumbImage; // 0xC0(0xB0)
		FSlateBrush NormalBarImage; // 0x170(0xB0)
		FSlateBrush DisabledBarImage; // 0x220(0xB0)
		FSlateBrush BackgroundImage; // 0x2D0(0xB0)
		float BarThickness; // 0x380(0x4)
		unsigned char UnknownData01_7[0xC]; // 0x384(0xC) UNKNOWN PROPERTY
	};


	// Struct Synthesis.SynthKnobStyle
	// Inherited from FSlateWidgetStyle
	// Size: 0x2D8 (0x2E0 - 0x8)
	struct FSynthKnobStyle : public FSlateWidgetStyle	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FSlateBrush LargeKnob; // 0x10(0xB0)
		FSlateBrush LargeKnobOverlay; // 0xC0(0xB0)
		FSlateBrush MediumKnob; // 0x170(0xB0)
		FSlateBrush MediumKnobOverlay; // 0x220(0xB0)
		float MinValueAngle; // 0x2D0(0x4)
		float MaxValueAngle; // 0x2D4(0x4)
		ESynthKnobSize KnobSize; // 0x2D8(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x2D9(0x7) UNKNOWN PROPERTY
	};


	// Struct Synthesis.SynthSlateStyle
	// Inherited from FSlateWidgetStyle
	// Size: 0x8 (0x10 - 0x8)
	struct FSynthSlateStyle : public FSlateWidgetStyle	
	{
	public:
		ESynthSlateSizeType SizeType; // 0x8(0x1)
		ESynthSlateColorStyle ColorStyle; // 0x9(0x1)
		unsigned char UnknownData00_7[0x6]; // 0xA(0x6) UNKNOWN PROPERTY
	};

}
