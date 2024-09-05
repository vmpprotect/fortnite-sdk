#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: Synthesis
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class Synthesis.AudioImpulseResponse
	// Inherited from UObject
	// Size: 0x30 (0x58 - 0x28)
	class UAudioImpulseResponse : public UObject	
	{
	public:
		TArray ImpulseResponse; // 0x28(0x10)
		int32_t NumChannels; // 0x38(0x4)
		int32_t SampleRate; // 0x3C(0x4)
		float NormalizationVolumeDb; // 0x40(0x4)
		bool bTrueStereo; // 0x44(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x45(0x3) UNKNOWN PROPERTY
		TArray IRData; // 0x48(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Synthesis.AudioImpulseResponse");
			return ret;
		}
	};


	// Class Synthesis.ModularSynthPresetBank
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UModularSynthPresetBank : public UObject	
	{
	public:
		TArray Presets; // 0x28(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Synthesis.ModularSynthPresetBank");
			return ret;
		}
	};


	// Class Synthesis.ModularSynthLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UModularSynthLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Synthesis.ModularSynthLibrary");
			return ret;
		}

		void AddModularSynthPresetToBankAsset(UModularSynthPresetBank InBank, FModularSynthPreset& Preset, FString PresetName); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable 0x7FF41462F498
	};


	// Class Synthesis.ModularSynthComponent
	// Inherited from USynthComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x6F0 (0xF70 - 0x880)
	class UModularSynthComponent : public USynthComponent	
	{
	public:
		int32_t VoiceCount; // 0x880(0x4)
		unsigned char UnknownData01_7[0x6EC]; // 0x884(0x6EC) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Synthesis.ModularSynthComponent");
			return ret;
		}

		void SetSynthPreset(FModularSynthPreset& SynthPreset); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414632838
		void SetSustainGain(float SustainGain); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414632758
		void SetStereoDelayWetlevel(float DelayWetlevel); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414632678
		void SetStereoDelayTime(float DelayTimeMsec); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414632598
		void SetStereoDelayRatio(float DelayRatio); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4146324B8
		void SetStereoDelayMode(ESynthStereoDelayMode StereoDelayMode); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4146323D8
		void SetStereoDelayIsEnabled(bool StereoDelayEnabled); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4146322F8
		void SetStereoDelayFeedback(float DelayFeedback); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414632218
		void SetSpread(float Spread); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414632138
		void SetReleaseTime(float ReleaseTimeMsec); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414632058
		void SetPortamento(float Portamento); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414631F78
		void SetPitchBend(float PitchBend); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414631E98
		void SetPan(float Pan); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414631DB8
		void SetOscType(int32_t OscIndex, ESynth1OscType OscType); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414631CD8
		void SetOscSync(bool bIsSynced); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414631BF8
		void SetOscSemitones(int32_t OscIndex, float Semitones); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414631B18
		void SetOscPulsewidth(int32_t OscIndex, float Pulsewidth); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414631A38
		void SetOscOctave(int32_t OscIndex, float Octave); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414631958
		void SetOscGainMod(int32_t OscIndex, float OscGainMod); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414631878
		void SetOscGain(int32_t OscIndex, float OscGain); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414631798
		void SetOscFrequencyMod(int32_t OscIndex, float OscFreqMod); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4146316B8
		void SetOscCents(int32_t OscIndex, float Cents); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4146315D8
		void SetModEnvSustainGain(float SustainGain); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4146314F8
		void SetModEnvReleaseTime(float Release); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414631418
		void SetModEnvPatch(ESynthModEnvPatch InPatchType); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414631338
		void SetModEnvInvert(bool bInvert); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414631258
		void SetModEnvDepth(float Depth); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414631178
		void SetModEnvDecayTime(float DecayTimeMsec); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414631098
		void SetModEnvBiasPatch(ESynthModEnvBiasPatch InPatchType); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414630FB8
		void SetModEnvBiasInvert(bool bInvert); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414630ED8
		void SetModEnvAttackTime(float AttackTimeMsec); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414630DF8
		void SetLFOType(int32_t LFOIndex, ESynthLFOType LFOType); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414630D18
		void SetLFOPatch(int32_t LFOIndex, ESynthLFOPatchType LFOPatchType); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414630C38
		void SetLFOMode(int32_t LFOIndex, ESynthLFOMode LFOMode); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414630B58
		void SetLFOGainMod(int32_t LFOIndex, float GainMod); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414630A78
		void SetLFOGain(int32_t LFOIndex, float Gain); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414630998
		void SetLFOFrequencyMod(int32_t LFOIndex, float FrequencyModHz); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4146308B8
		void SetLFOFrequency(int32_t LFOIndex, float FrequencyHz); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4146307D8
		void SetGainDb(float GainDb); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4146306F8
		void SetFilterType(ESynthFilterType FilterType); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414630618
		void SetFilterQMod(float FilterQ); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414630538
		void SetFilterQ(float FilterQ); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414630458
		void SetFilterFrequencyMod(float FilterFrequencyHz); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414630378
		void SetFilterFrequency(float FilterFrequencyHz); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414630298
		void SetFilterAlgorithm(ESynthFilterAlgorithm FilterAlgorithm); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4146301B8
		void SetEnableUnison(bool EnableUnison); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4146300D8
		void SetEnableRetrigger(bool RetriggerEnabled); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41462FFF8
		void SetEnablePolyphony(bool bEnablePolyphony); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41462FF18
		bool SetEnablePatch(FPatchId PatchId, bool bIsEnabled); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41462FE38
		void SetEnableLegato(bool LegatoEnabled); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41462FD58
		void SetDecayTime(float DecayTimeMsec); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41462FC78
		void SetChorusFrequency(float Frequency); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41462FB98
		void SetChorusFeedback(float Feedback); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41462FAB8
		void SetChorusEnabled(bool EnableChorus); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41462F9D8
		void SetChorusDepth(float Depth); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41462F8F8
		void SetAttackTime(float AttackTimeMsec); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41462F818
		void NoteOn(float Note, int32_t Velocity, float duration); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41462F738
		void NoteOff(float Note, bool bAllNotesOff, bool bKillAllNotes); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41462F658
		FPatchId CreatePatch(ESynth1PatchSource PatchSource, TArray& PatchCables, bool bEnableByDefault); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF41462F578
	};


	// Class Synthesis.SourceEffectBitCrusherPreset
	// Inherited from USoundEffectSourcePreset -> USoundEffectPreset -> UObject
	// Size: 0x1A8 (0x210 - 0x68)
	class USourceEffectBitCrusherPreset : public USoundEffectSourcePreset	
	{
	public:
		unsigned char UnknownData01_3[0xE8]; // 0x68(0xE8) UNKNOWN PROPERTY
		FSourceEffectBitCrusherSettings Settings; // 0x150(0xC0)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Synthesis.SourceEffectBitCrusherPreset");
			return ret;
		}

		void SetSettings(FSourceEffectBitCrusherBaseSettings& Settings); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414632F38
		void SetSampleRateModulators(TSet& InModulators); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414632E58
		void SetSampleRateModulator(USoundModulatorBase Modulator); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414632D78
		void SetSampleRate(float SampleRate); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414632C98
		void SetModulationSettings(FSourceEffectBitCrusherSettings& ModulationSettings); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414632BB8
		void SetBits(float Bits); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414632AD8
		void SetBitModulators(TSet& InModulators); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF4146329F8
		void SetBitModulator(USoundModulatorBase Modulator); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414632918
	};


	// Class Synthesis.SourceEffectChorusPreset
	// Inherited from USoundEffectSourcePreset -> USoundEffectPreset -> UObject
	// Size: 0x478 (0x4E0 - 0x68)
	class USourceEffectChorusPreset : public USoundEffectSourcePreset	
	{
	public:
		unsigned char UnknownData01_3[0x250]; // 0x68(0x250) UNKNOWN PROPERTY
		FSourceEffectChorusSettings Settings; // 0x2B8(0x228)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Synthesis.SourceEffectChorusPreset");
			return ret;
		}

		void SetWetModulators(TSet& Modulators); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF4146340B8
		void SetWetModulator(USoundModulatorBase Modulator); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414633FD8
		void SetWet(float WetAmount); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414633EF8
		void SetSpreadModulators(TSet& Modulators); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414633E18
		void SetSpreadModulator(USoundModulatorBase Modulator); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414633D38
		void SetSpread(float Spread); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414633C58
		void SetSettings(FSourceEffectChorusBaseSettings& Settings); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414633B78
		void SetModulationSettings(FSourceEffectChorusSettings& ModulationSettings); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414633A98
		void SetFrequencyModulators(TSet& Modulators); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF4146339B8
		void SetFrequencyModulator(USoundModulatorBase Modulator); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4146338D8
		void SetFrequency(float Frequency); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4146337F8
		void SetFeedbackModulators(TSet& Modulators); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414633718
		void SetFeedbackModulator(USoundModulatorBase Modulator); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414633638
		void SetFeedback(float Feedback); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414633558
		void SetDryModulators(TSet& Modulators); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414633478
		void SetDryModulator(USoundModulatorBase Modulator); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414633398
		void SetDry(float DryAmount); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4146332B8
		void SetDepthModulators(TSet& Modulators); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF4146331D8
		void SetDepthModulator(USoundModulatorBase Modulator); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4146330F8
		void SetDepth(float Depth); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414633018
	};


	// Class Synthesis.SourceEffectConvolutionReverbPreset
	// Inherited from USoundEffectSourcePreset -> USoundEffectPreset -> UObject
	// Size: 0x58 (0xC0 - 0x68)
	class USourceEffectConvolutionReverbPreset : public USoundEffectSourcePreset	
	{
	public:
		UAudioImpulseResponse ImpulseResponse; // 0x68(0x8)
		FSourceEffectConvolutionReverbSettings Settings; // 0x70(0x10)
		ESubmixEffectConvolutionReverbBlockSize BlockSize; // 0x80(0x1)
		bool bEnableHardwareAcceleration; // 0x81(0x1)
		unsigned char UnknownData01_7[0x3E]; // 0x82(0x3E) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Synthesis.SourceEffectConvolutionReverbPreset");
			return ret;
		}

		void SetSettings(FSourceEffectConvolutionReverbSettings& InSettings); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414634278
		void SetImpulseResponse(UAudioImpulseResponse InImpulseResponse); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414634198
	};


	// Class Synthesis.SourceEffectDynamicsProcessorPreset
	// Inherited from USoundEffectSourcePreset -> USoundEffectPreset -> UObject
	// Size: 0x78 (0xE0 - 0x68)
	class USourceEffectDynamicsProcessorPreset : public USoundEffectSourcePreset	
	{
	public:
		unsigned char UnknownData01_3[0x50]; // 0x68(0x50) UNKNOWN PROPERTY
		FSourceEffectDynamicsProcessorSettings Settings; // 0xB8(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Synthesis.SourceEffectDynamicsProcessorPreset");
			return ret;
		}

		void SetSettings(FSourceEffectDynamicsProcessorSettings& InSettings); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414634358
	};


	// Class Synthesis.EnvelopeFollowerListener
	// Inherited from UActorComponent -> UObject
	// Size: 0x20 (0xC0 - 0xA0)
	class UEnvelopeFollowerListener : public UActorComponent	
	{
	public:
		FMulticastInlineDelegate OnEnvelopeFollowerUpdate; // 0xA0(0x10)
		unsigned char UnknownData01_7[0x10]; // 0xB0(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Synthesis.EnvelopeFollowerListener");
			return ret;
		}
	};


	// Class Synthesis.SourceEffectEnvelopeFollowerPreset
	// Inherited from USoundEffectSourcePreset -> USoundEffectPreset -> UObject
	// Size: 0x40 (0xA8 - 0x68)
	class USourceEffectEnvelopeFollowerPreset : public USoundEffectSourcePreset	
	{
	public:
		unsigned char UnknownData01_3[0x34]; // 0x68(0x34) UNKNOWN PROPERTY
		FSourceEffectEnvelopeFollowerSettings Settings; // 0x9C(0xC)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Synthesis.SourceEffectEnvelopeFollowerPreset");
			return ret;
		}

		void UnregisterEnvelopeFollowerListener(UEnvelopeFollowerListener EnvelopeFollowerListener); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4146345F8
		void SetSettings(FSourceEffectEnvelopeFollowerSettings& InSettings); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414634518
		void RegisterEnvelopeFollowerListener(UEnvelopeFollowerListener EnvelopeFollowerListener); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414634438
	};


	// Class Synthesis.SourceEffectEQPreset
	// Inherited from USoundEffectSourcePreset -> USoundEffectPreset -> UObject
	// Size: 0x48 (0xB0 - 0x68)
	class USourceEffectEQPreset : public USoundEffectSourcePreset	
	{
	public:
		unsigned char UnknownData01_3[0x38]; // 0x68(0x38) UNKNOWN PROPERTY
		FSourceEffectEQSettings Settings; // 0xA0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Synthesis.SourceEffectEQPreset");
			return ret;
		}

		void SetSettings(FSourceEffectEQSettings& InSettings); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF4146346D8
	};


	// Class Synthesis.SourceEffectFilterPreset
	// Inherited from USoundEffectSourcePreset -> USoundEffectPreset -> UObject
	// Size: 0x68 (0xD0 - 0x68)
	class USourceEffectFilterPreset : public USoundEffectSourcePreset	
	{
	public:
		unsigned char UnknownData01_3[0x48]; // 0x68(0x48) UNKNOWN PROPERTY
		FSourceEffectFilterSettings Settings; // 0xB0(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Synthesis.SourceEffectFilterPreset");
			return ret;
		}

		void SetSettings(FSourceEffectFilterSettings& InSettings); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF4146347B8
	};


	// Class Synthesis.SourceEffectFoldbackDistortionPreset
	// Inherited from USoundEffectSourcePreset -> USoundEffectPreset -> UObject
	// Size: 0x40 (0xA8 - 0x68)
	class USourceEffectFoldbackDistortionPreset : public USoundEffectSourcePreset	
	{
	public:
		unsigned char UnknownData01_3[0x34]; // 0x68(0x34) UNKNOWN PROPERTY
		FSourceEffectFoldbackDistortionSettings Settings; // 0x9C(0xC)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Synthesis.SourceEffectFoldbackDistortionPreset");
			return ret;
		}

		void SetSettings(FSourceEffectFoldbackDistortionSettings& InSettings); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414634898
	};


	// Class Synthesis.SourceEffectMidSideSpreaderPreset
	// Inherited from USoundEffectSourcePreset -> USoundEffectPreset -> UObject
	// Size: 0x38 (0xA0 - 0x68)
	class USourceEffectMidSideSpreaderPreset : public USoundEffectSourcePreset	
	{
	public:
		unsigned char UnknownData01_3[0x30]; // 0x68(0x30) UNKNOWN PROPERTY
		FSourceEffectMidSideSpreaderSettings Settings; // 0x98(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Synthesis.SourceEffectMidSideSpreaderPreset");
			return ret;
		}

		void SetSettings(FSourceEffectMidSideSpreaderSettings& InSettings); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414634978
	};


	// Class Synthesis.SourceEffectMotionFilterPreset
	// Inherited from USoundEffectSourcePreset -> USoundEffectPreset -> UObject
	// Size: 0x118 (0x180 - 0x68)
	class USourceEffectMotionFilterPreset : public USoundEffectSourcePreset	
	{
	public:
		unsigned char UnknownData01_3[0xA0]; // 0x68(0xA0) UNKNOWN PROPERTY
		FSourceEffectMotionFilterSettings Settings; // 0x108(0x78)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Synthesis.SourceEffectMotionFilterPreset");
			return ret;
		}

		void SetSettings(FSourceEffectMotionFilterSettings& InSettings); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414634A58
	};


	// Class Synthesis.SourceEffectPannerPreset
	// Inherited from USoundEffectSourcePreset -> USoundEffectPreset -> UObject
	// Size: 0x38 (0xA0 - 0x68)
	class USourceEffectPannerPreset : public USoundEffectSourcePreset	
	{
	public:
		unsigned char UnknownData01_3[0x30]; // 0x68(0x30) UNKNOWN PROPERTY
		FSourceEffectPannerSettings Settings; // 0x98(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Synthesis.SourceEffectPannerPreset");
			return ret;
		}

		void SetSettings(FSourceEffectPannerSettings& InSettings); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414634B38
	};


	// Class Synthesis.SourceEffectPhaserPreset
	// Inherited from USoundEffectSourcePreset -> USoundEffectPreset -> UObject
	// Size: 0x48 (0xB0 - 0x68)
	class USourceEffectPhaserPreset : public USoundEffectSourcePreset	
	{
	public:
		unsigned char UnknownData01_3[0x38]; // 0x68(0x38) UNKNOWN PROPERTY
		FSourceEffectPhaserSettings Settings; // 0xA0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Synthesis.SourceEffectPhaserPreset");
			return ret;
		}

		void SetSettings(FSourceEffectPhaserSettings& InSettings); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414634C18
	};


	// Class Synthesis.SourceEffectRingModulationPreset
	// Inherited from USoundEffectSourcePreset -> USoundEffectPreset -> UObject
	// Size: 0x68 (0xD0 - 0x68)
	class USourceEffectRingModulationPreset : public USoundEffectSourcePreset	
	{
	public:
		unsigned char UnknownData01_3[0x48]; // 0x68(0x48) UNKNOWN PROPERTY
		FSourceEffectRingModulationSettings Settings; // 0xB0(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Synthesis.SourceEffectRingModulationPreset");
			return ret;
		}

		void SetSettings(FSourceEffectRingModulationSettings& InSettings); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414634CF8
	};


	// Class Synthesis.SourceEffectSimpleDelayPreset
	// Inherited from USoundEffectSourcePreset -> USoundEffectPreset -> UObject
	// Size: 0x58 (0xC0 - 0x68)
	class USourceEffectSimpleDelayPreset : public USoundEffectSourcePreset	
	{
	public:
		unsigned char UnknownData01_3[0x40]; // 0x68(0x40) UNKNOWN PROPERTY
		FSourceEffectSimpleDelaySettings Settings; // 0xA8(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Synthesis.SourceEffectSimpleDelayPreset");
			return ret;
		}

		void SetSettings(FSourceEffectSimpleDelaySettings& InSettings); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414634DD8
	};


	// Class Synthesis.SourceEffectStereoDelayPreset
	// Inherited from USoundEffectSourcePreset -> USoundEffectPreset -> UObject
	// Size: 0x70 (0xD8 - 0x68)
	class USourceEffectStereoDelayPreset : public USoundEffectSourcePreset	
	{
	public:
		unsigned char UnknownData01_3[0x4C]; // 0x68(0x4C) UNKNOWN PROPERTY
		FSourceEffectStereoDelaySettings Settings; // 0xB4(0x24)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Synthesis.SourceEffectStereoDelayPreset");
			return ret;
		}

		void SetSettings(FSourceEffectStereoDelaySettings& InSettings); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414634EB8
	};


	// Class Synthesis.SourceEffectWaveShaperPreset
	// Inherited from USoundEffectSourcePreset -> USoundEffectPreset -> UObject
	// Size: 0x38 (0xA0 - 0x68)
	class USourceEffectWaveShaperPreset : public USoundEffectSourcePreset	
	{
	public:
		unsigned char UnknownData01_3[0x30]; // 0x68(0x30) UNKNOWN PROPERTY
		FSourceEffectWaveShaperSettings Settings; // 0x98(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Synthesis.SourceEffectWaveShaperPreset");
			return ret;
		}

		void SetSettings(FSourceEffectWaveShaperSettings& InSettings); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414634F98
	};


	// Class Synthesis.SubmixEffectConvolutionReverbPreset
	// Inherited from USoundEffectSubmixPreset -> USoundEffectPreset -> UObject
	// Size: 0x98 (0x100 - 0x68)
	class USubmixEffectConvolutionReverbPreset : public USoundEffectSubmixPreset	
	{
	public:
		UAudioImpulseResponse ImpulseResponse; // 0x68(0x8)
		FSubmixEffectConvolutionReverbSettings Settings; // 0x70(0x30)
		ESubmixEffectConvolutionReverbBlockSize BlockSize; // 0xA0(0x1)
		bool bEnableHardwareAcceleration; // 0xA1(0x1)
		unsigned char UnknownData01_7[0x5E]; // 0xA2(0x5E) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Synthesis.SubmixEffectConvolutionReverbPreset");
			return ret;
		}

		void SetSettings(FSubmixEffectConvolutionReverbSettings& InSettings); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414635158
		void SetImpulseResponse(UAudioImpulseResponse InImpulseResponse); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414635078
	};


	// Class Synthesis.SubmixEffectDelayStatics
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class USubmixEffectDelayStatics : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Synthesis.SubmixEffectDelayStatics");
			return ret;
		}

		FSubmixEffectDelaySettings SetMaximumDelayLength(FSubmixEffectDelaySettings& DelaySettings, float MaximumDelayLength); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4146353F8
		FSubmixEffectDelaySettings SetInterpolationTime(FSubmixEffectDelaySettings& DelaySettings, float InterpolationTime); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414635318
		FSubmixEffectDelaySettings SetDelayLength(FSubmixEffectDelaySettings& DelaySettings, float DelayLength); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414635238
	};


	// Class Synthesis.SubmixEffectDelayPreset
	// Inherited from USoundEffectSubmixPreset -> USoundEffectPreset -> UObject
	// Size: 0x50 (0xB8 - 0x68)
	class USubmixEffectDelayPreset : public USoundEffectSubmixPreset	
	{
	public:
		unsigned char UnknownData02_3[0x34]; // 0x68(0x34) UNKNOWN PROPERTY
		FSubmixEffectDelaySettings Settings; // 0x9C(0xC)
		FSubmixEffectDelaySettings DynamicSettings; // 0xA8(0xC)
		unsigned char UnknownData03_7[0x4]; // 0xB4(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Synthesis.SubmixEffectDelayPreset");
			return ret;
		}

		void SetSettings(FSubmixEffectDelaySettings& InSettings); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414635858
		void SetInterpolationTime(float Time); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414635778
		void SetDelay(float Length); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414635698
		void SetDefaultSettings(FSubmixEffectDelaySettings& InSettings); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF4146355B8
		float GetMaxDelayInMilliseconds(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4146354D8
	};


	// Class Synthesis.SubmixEffectFilterPreset
	// Inherited from USoundEffectSubmixPreset -> USoundEffectPreset -> UObject
	// Size: 0x40 (0xA8 - 0x68)
	class USubmixEffectFilterPreset : public USoundEffectSubmixPreset	
	{
	public:
		unsigned char UnknownData01_3[0x34]; // 0x68(0x34) UNKNOWN PROPERTY
		FSubmixEffectFilterSettings Settings; // 0x9C(0xC)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Synthesis.SubmixEffectFilterPreset");
			return ret;
		}

		void SetSettings(FSubmixEffectFilterSettings& InSettings); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414635E78
		void SetFilterType(ESubmixFilterType InType); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414635D98
		void SetFilterQMod(float InQ); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414635CB8
		void SetFilterQ(float InQ); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414635BD8
		void SetFilterCutoffFrequencyMod(float InFrequency); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414635AF8
		void SetFilterCutoffFrequency(float InFrequency); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414635A18
		void SetFilterAlgorithm(ESubmixFilterAlgorithm InAlgorithm); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414635938
	};


	// Class Synthesis.SubmixEffectFlexiverbPreset
	// Inherited from USoundEffectSubmixPreset -> USoundEffectPreset -> UObject
	// Size: 0x48 (0xB0 - 0x68)
	class USubmixEffectFlexiverbPreset : public USoundEffectSubmixPreset	
	{
	public:
		unsigned char UnknownData01_3[0x38]; // 0x68(0x38) UNKNOWN PROPERTY
		FSubmixEffectFlexiverbSettings Settings; // 0xA0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Synthesis.SubmixEffectFlexiverbPreset");
			return ret;
		}

		void SetSettings(FSubmixEffectFlexiverbSettings& InSettings); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414635F58
	};


	// Class Synthesis.SubmixEffectMultibandCompressorPreset
	// Inherited from USoundEffectSubmixPreset -> USoundEffectPreset -> UObject
	// Size: 0x98 (0x100 - 0x68)
	class USubmixEffectMultibandCompressorPreset : public USoundEffectSubmixPreset	
	{
	public:
		unsigned char UnknownData01_3[0x60]; // 0x68(0x60) UNKNOWN PROPERTY
		FSubmixEffectMultibandCompressorSettings Settings; // 0xC8(0x38)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Synthesis.SubmixEffectMultibandCompressorPreset");
			return ret;
		}

		void SetSettings(FSubmixEffectMultibandCompressorSettings& InSettings); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF4146362D8
		void SetExternalSubmix(USoundSubmix Submix); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4146361F8
		void SetAudioBus(UAudioBus AudioBus); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414636118
		void ResetKey(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414636038
	};


	// Class Synthesis.SubmixEffectStereoDelayPreset
	// Inherited from USoundEffectSubmixPreset -> USoundEffectPreset -> UObject
	// Size: 0x70 (0xD8 - 0x68)
	class USubmixEffectStereoDelayPreset : public USoundEffectSubmixPreset	
	{
	public:
		unsigned char UnknownData01_3[0x4C]; // 0x68(0x4C) UNKNOWN PROPERTY
		FSubmixEffectStereoDelaySettings Settings; // 0xB4(0x24)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Synthesis.SubmixEffectStereoDelayPreset");
			return ret;
		}

		void SetSettings(FSubmixEffectStereoDelaySettings& InSettings); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF4146363B8
	};


	// Class Synthesis.SubmixEffectStereoToQuadPreset
	// Inherited from USoundEffectSubmixPreset -> USoundEffectPreset -> UObject
	// Size: 0x38 (0xA0 - 0x68)
	class USubmixEffectStereoToQuadPreset : public USoundEffectSubmixPreset	
	{
	public:
		unsigned char UnknownData01_3[0x30]; // 0x68(0x30) UNKNOWN PROPERTY
		FSubmixEffectStereoToQuadSettings Settings; // 0x98(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Synthesis.SubmixEffectStereoToQuadPreset");
			return ret;
		}

		void SetSettings(FSubmixEffectStereoToQuadSettings& InSettings); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414636498
	};


	// Class Synthesis.SubmixEffectTapDelayPreset
	// Inherited from USoundEffectSubmixPreset -> USoundEffectPreset -> UObject
	// Size: 0x70 (0xD8 - 0x68)
	class USubmixEffectTapDelayPreset : public USoundEffectSubmixPreset	
	{
	public:
		unsigned char UnknownData02_3[0x40]; // 0x68(0x40) UNKNOWN PROPERTY
		FSubmixEffectTapDelaySettings Settings; // 0xA8(0x18)
		unsigned char UnknownData03_7[0x18]; // 0xC0(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Synthesis.SubmixEffectTapDelayPreset");
			return ret;
		}

		void SetTap(int32_t TapId, FTapDelayInfo& TapInfo); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414636B98
		void SetSettings(FSubmixEffectTapDelaySettings& InSettings); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414636AB8
		void SetInterpolationTime(float Time); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4146369D8
		void RemoveTap(int32_t TapId); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4146368F8
		void GetTapIds(TArray& TapIds); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414636818
		void GetTap(int32_t TapId, FTapDelayInfo& TapInfo); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414636738
		float GetMaxDelayInMilliseconds(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414636658
		void AddTap(int32_t& TapId); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414636578
	};


	// Class Synthesis.GranularSynth
	// Inherited from USynthComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x3F0 (0xC70 - 0x880)
	class UGranularSynth : public USynthComponent	
	{
	public:
		USoundWave GranulatedSoundWave; // 0x880(0x8)
		unsigned char UnknownData01_7[0x3E8]; // 0x888(0x3E8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Synthesis.GranularSynth");
			return ret;
		}

		void SetSustainGain(float SustainGain); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414637D18
		void SetSoundWave(USoundWave InSoundWave); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414637C38
		void SetScrubMode(bool bScrubMode); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414637B58
		void SetReleaseTimeMsec(float ReleaseTimeMsec); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414637A78
		void SetPlayheadTime(float InPositionSec, float LerpTimeSec, EGranularSynthSeekType SeekType); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414637998
		void SetPlaybackSpeed(float InPlayheadRate); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4146378B8
		void SetGrainVolume(float BaseVolume, FVector2D VolumeRange); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF4146377D8
		void SetGrainsPerSecond(float InGrainsPerSecond); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4146376F8
		void SetGrainProbability(float InGrainProbability); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414637618
		void SetGrainPitch(float BasePitch, FVector2D PitchRange); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF414637538
		void SetGrainPan(float BasePan, FVector2D PanRange); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF414637458
		void SetGrainEnvelopeType(EGranularSynthEnvelopeType EnvelopeType); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414637378
		void SetGrainDuration(float BaseDurationMsec, FVector2D DurationRange); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF414637298
		void SetDecayTime(float DecayTimeMsec); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4146371B8
		void SetAttackTime(float AttackTimeMsec); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4146370D8
		void NoteOn(float Note, int32_t Velocity, float duration); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414636FF8
		void NoteOff(float Note, bool bKill); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414636F18
		bool IsLoaded(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414636E38
		float GetSampleDuration(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414636D58
		float GetCurrentPlayheadTime(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414636C78
	};


	// Class Synthesis.MonoWaveTableSynthPreset
	// Inherited from UObject
	// Size: 0x148 (0x170 - 0x28)
	class UMonoWaveTableSynthPreset : public UObject	
	{
	public:
		FString PresetName; // 0x28(0x10)
		bool bLockKeyframesToGridBool : 1; // 0x38:0(0x1)
		unsigned char UnknownData03_5[0x3]; // 0x39(0x3) UNKNOWN PROPERTY
		int32_t LockKeyframesToGrid; // 0x3C(0x4)
		int32_t WaveTableResolution; // 0x40(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x44(0x4) UNKNOWN PROPERTY
		TArray WaveTable; // 0x48(0x10)
		bool bNormalizeWaveTables : 1; // 0x58:0(0x1)
		unsigned char UnknownData05_7[0x117]; // 0x59(0x117) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Synthesis.MonoWaveTableSynthPreset");
			return ret;
		}
	};


	// Class Synthesis.SynthComponentMonoWaveTable
	// Inherited from USynthComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x750 (0xFD0 - 0x880)
	class USynthComponentMonoWaveTable : public USynthComponent	
	{
	public:
		FMulticastInlineDelegate OnTableAltered; // 0x880(0x10)
		FMulticastInlineDelegate OnNumTablesChanged; // 0x890(0x10)
		UMonoWaveTableSynthPreset CurrentPreset; // 0x8A0(0x8)
		unsigned char UnknownData01_7[0x728]; // 0x8A8(0x728) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Synthesis.SynthComponentMonoWaveTable");
			return ret;
		}

		void SetWaveTablePosition(float InPosition); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41463A398
		void SetSustainPedalState(bool InSustainPedalState); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41463A2B8
		void SetPosLfoType(ESynthLFOType InLfoType); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41463A1D8
		void SetPosLfoFrequency(float InLfoFrequency); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41463A0F8
		void SetPosLfoDepth(float InLfoDepth); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41463A018
		void SetPositionEnvelopeSustainGain(float InSustainGain); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414639F38
		void SetPositionEnvelopeReleaseTime(float InReleaseTimeMsec); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414639E58
		void SetPositionEnvelopeInvert(bool bInInvert); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414639D78
		void SetPositionEnvelopeDepth(float InDepth); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414639C98
		void SetPositionEnvelopeDecayTime(float InDecayTimeMsec); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414639BB8
		void SetPositionEnvelopeBiasInvert(bool bInBiasInvert); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414639AD8
		void SetPositionEnvelopeBiasDepth(float InDepth); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4146399F8
		void SetPositionEnvelopeAttackTime(float InAttackTimeMsec); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414639918
		void SetLowPassFilterResonance(float InNewQ); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414639838
		void SetFrequencyWithMidiNote(float InMidiNote); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414639758
		void SetFrequencyPitchBend(float FrequencyOffsetCents); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414639678
		void SetFrequency(float FrequencyHz); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414639598
		void SetFilterEnvelopeSustainGain(float InSustainGain); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4146394B8
		void SetFilterEnvelopeReleaseTime(float InReleaseTimeMsec); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4146393D8
		void SetFilterEnvelopenDecayTime(float InDecayTimeMsec); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4146392F8
		void SetFilterEnvelopeInvert(bool bInInvert); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414639218
		void SetFilterEnvelopeDepth(float InDepth); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414639138
		void SetFilterEnvelopeBiasInvert(bool bInBiasInvert); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414639058
		void SetFilterEnvelopeBiasDepth(float InDepth); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414638F78
		void SetFilterEnvelopeAttackTime(float InAttackTimeMsec); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414638E98
		bool SetCurveValue(int32_t TableIndex, int32_t KeyframeIndex, float NewValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414638DB8
		bool SetCurveTangent(int32_t TableIndex, float InNewTangent); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414638CD8
		bool SetCurveInterpolationType(CurveInterpolationType InterpolationType, int32_t TableIndex); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414638BF8
		void SetAmpEnvelopeSustainGain(float InSustainGain); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414638B18
		void SetAmpEnvelopeReleaseTime(float InReleaseTimeMsec); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414638A38
		void SetAmpEnvelopeInvert(bool bInInvert); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414638958
		void SetAmpEnvelopeDepth(float InDepth); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414638878
		void SetAmpEnvelopeDecayTime(float InDecayTimeMsec); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414638798
		void SetAmpEnvelopeBiasInvert(bool bInBiasInvert); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4146386B8
		void SetAmpEnvelopeBiasDepth(float InDepth); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4146385D8
		void SetAmpEnvelopeAttackTime(float InAttackTimeMsec); // Flags: Final|Native|Public|BlueprintCallable 0x7FF4146384F8
		void RefreshWaveTable(int32_t Index); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414638418
		void RefreshAllWaveTables(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414638338
		void NoteOn(float InMidiNote, float InVelocity); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414638258
		void NoteOff(float InMidiNote); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414638178
		int32_t GetNumTableEntries(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414638098
		int32_t GetMaxTableIndex(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414637FB8
		TArray GetKeyFrameValuesForTable(float TableIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414637ED8
		float GetCurveTangent(int32_t TableIndex); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414637DF8
	};


	// Class Synthesis.SynthComponentToneGenerator
	// Inherited from USynthComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0xF0 (0x970 - 0x880)
	class USynthComponentToneGenerator : public USynthComponent	
	{
	public:
		float Frequency; // 0x880(0x4)
		float Volume; // 0x884(0x4)
		FRuntimeFloatCurve DistanceAttenuationCurve; // 0x888(0x88)
		FVector2D DistanceRange; // 0x910(0x10)
		float AttenuationDbAtMaxRange; // 0x920(0x4)
		unsigned char UnknownData01_7[0x4C]; // 0x924(0x4C) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Synthesis.SynthComponentToneGenerator");
			return ret;
		}

		void SetVolume(float InVolume); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41463A558
		void SetFrequency(float InFrequency); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41463A478
	};


	// Class Synthesis.SynthSamplePlayer
	// Inherited from USynthComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x130 (0x9B0 - 0x880)
	class USynthSamplePlayer : public USynthComponent	
	{
	public:
		USoundWave SoundWave; // 0x880(0x8)
		FMulticastInlineDelegate OnSampleLoaded; // 0x888(0x10)
		FMulticastInlineDelegate OnSamplePlaybackProgress; // 0x898(0x10)
		unsigned char UnknownData01_7[0x108]; // 0x8A8(0x108) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Synthesis.SynthSamplePlayer");
			return ret;
		}

		void SetSoundWave(USoundWave InSoundWave); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41463AD38
		void SetScrubTimeWidth(float InScrubTimeWidthSec); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41463AC58
		void SetScrubMode(bool bScrubMode); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41463AB78
		void SetPitch(float InPitch, float TimeSec); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41463AA98
		void SeekToTime(float TimeSec, ESamplePlayerSeekType SeekType, bool bWrap); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41463A9B8
		bool IsLoaded(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41463A8D8
		float GetSampleDuration(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41463A7F8
		float GetCurrentPlaybackProgressTime(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41463A718
		float GetCurrentPlaybackProgressPercent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41463A638
	};


	// Class Synthesis.SynthesisUtilitiesBlueprintFunctionLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class USynthesisUtilitiesBlueprintFunctionLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Synthesis.SynthesisUtilitiesBlueprintFunctionLibrary");
			return ret;
		}

		float GetLogFrequency(float InLinearValue, float InDomainMin, float InDomainMax, float InRangeMin, float InRangeMax); // Flags: Final|Native|Static|Private|BlueprintCallable 0x7FF41463AEF8
		float GetLinearFrequency(float InLogFrequencyValue, float InDomainMin, float InDomainMax, float InRangeMin, float InRangeMax); // Flags: Final|Native|Static|Private|BlueprintCallable 0x7FF41463AE18
	};


	// Class Synthesis.Synth2DSlider
	// Inherited from UWidget -> UVisual -> UObject
	// Size: 0x440 (0x5A0 - 0x160)
	class USynth2DSlider : public UWidget	
	{
	public:
		float ValueX; // 0x160(0x4)
		float ValueY; // 0x164(0x4)
		FDelegateProperty ValueXDelegate; // 0x168(0xC)
		FDelegateProperty ValueYDelegate; // 0x174(0xC)
		FSynth2DSliderStyle WidgetStyle; // 0x180(0x390)
		FLinearColor SliderHandleColor; // 0x510(0x10)
		bool IndentHandle; // 0x520(0x1)
		bool Locked; // 0x521(0x1)
		unsigned char UnknownData03_6[0x2]; // 0x522(0x2) UNKNOWN PROPERTY
		float StepSize; // 0x524(0x4)
		bool IsFocusable; // 0x528(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x529(0x7) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnMouseCaptureBegin; // 0x530(0x10)
		FMulticastInlineDelegate OnMouseCaptureEnd; // 0x540(0x10)
		FMulticastInlineDelegate OnControllerCaptureBegin; // 0x550(0x10)
		FMulticastInlineDelegate OnControllerCaptureEnd; // 0x560(0x10)
		FMulticastInlineDelegate OnValueChangedX; // 0x570(0x10)
		FMulticastInlineDelegate OnValueChangedY; // 0x580(0x10)
		unsigned char UnknownData05_7[0x10]; // 0x590(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Synthesis.Synth2DSlider");
			return ret;
		}

		void SetValue(FVector2D InValue); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF41463B438
		void SetStepSize(float InValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41463B358
		void SetSliderHandleColor(FLinearColor InValue); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF41463B278
		void SetLocked(bool InValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41463B198
		void SetIndentHandle(bool InValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41463B0B8
		FVector2D GetValue(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF41463AFD8
	};


	// Class Synthesis.SynthKnob
	// Inherited from UWidget -> UVisual -> UObject
	// Size: 0x3A0 (0x500 - 0x160)
	class USynthKnob : public UWidget	
	{
	public:
		float Value; // 0x160(0x4)
		float StepSize; // 0x164(0x4)
		float MouseSpeed; // 0x168(0x4)
		float MouseFineTuneSpeed; // 0x16C(0x4)
		bool ShowTooltipInfo : 1; // 0x170:0(0x1)
		unsigned char UnknownData04_5[0x7]; // 0x171(0x7) UNKNOWN PROPERTY
		FText ParameterName; // 0x178(0x10)
		FText ParameterUnits; // 0x188(0x10)
		FDelegateProperty ValueDelegate; // 0x198(0xC)
		unsigned char UnknownData05_6[0xC]; // 0x1A4(0xC) UNKNOWN PROPERTY
		FSynthKnobStyle WidgetStyle; // 0x1B0(0x2E0)
		bool Locked; // 0x490(0x1)
		bool IsFocusable; // 0x491(0x1)
		unsigned char UnknownData06_6[0x6]; // 0x492(0x6) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnMouseCaptureBegin; // 0x498(0x10)
		FMulticastInlineDelegate OnMouseCaptureEnd; // 0x4A8(0x10)
		FMulticastInlineDelegate OnControllerCaptureBegin; // 0x4B8(0x10)
		FMulticastInlineDelegate OnControllerCaptureEnd; // 0x4C8(0x10)
		FMulticastInlineDelegate OnValueChanged; // 0x4D8(0x10)
		unsigned char UnknownData07_7[0x18]; // 0x4E8(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Synthesis.SynthKnob");
			return ret;
		}

		void SetValue(float InValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41463B7B8
		void SetStepSize(float InValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41463B6D8
		void SetLocked(bool InValue); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41463B5F8
		float GetValue(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41463B518
	};

}
