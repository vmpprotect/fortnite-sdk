#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: Synthesis
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class Synthesis.AudioImpulseResponse
	// Inherited from UObject
	// Size: 0x30 (0x58 - 0x28)
	class UAudioImpulseResponse : public UObject	
	{
	public:
		TArray<float> ImpulseResponse; // 0x28(0x10)
		int32_t NumChannels; // 0x38(0x4)
		int32_t SampleRate; // 0x3C(0x4)
		float NormalizationVolumeDb; // 0x40(0x4)
		bool bTrueStereo; // 0x44(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x45(0x3) UNKNOWN PROPERTY
		TArray<float> IRData; // 0x48(0x10)

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
		TArray<FModularSynthPresetBankEntry> Presets; // 0x28(0x10)

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

		void AddModularSynthPresetToBankAsset(UModularSynthPresetBank* InBank, FModularSynthPreset& Preset, FString PresetName); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DA4FB78(relative to base address)
	};


	// Class Synthesis.ModularSynthComponent
	// Inherited from USynthComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x6F0 (0xF70 - 0x880)
	class UModularSynthComponent : public USynthComponent	
	{
	public:
		int32_t VoiceCount; // 0x880(0x4)
		unsigned char UnknownData00_7[0x6EC]; // 0x884(0x6EC) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Synthesis.ModularSynthComponent");
			return ret;
		}

		void SetSynthPreset(FModularSynthPreset& SynthPreset); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DA585F8(relative to base address)
		void SetSustainGain(float SustainGain); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA584BC(relative to base address)
		void SetStereoDelayWetlevel(float DelayWetlevel); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA583BC(relative to base address)
		void SetStereoDelayTime(float DelayTimeMsec); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA5833C(relative to base address)
		void SetStereoDelayRatio(float DelayRatio); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA582BC(relative to base address)
		void SetStereoDelayMode(ESynthStereoDelayMode StereoDelayMode); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA5823C(relative to base address)
		void SetStereoDelayIsEnabled(bool StereoDelayEnabled); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA581BC(relative to base address)
		void SetStereoDelayFeedback(float DelayFeedback); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA5813C(relative to base address)
		void SetSpread(float Spread); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA57DB0(relative to base address)
		void SetReleaseTime(float ReleaseTimeMsec); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA566C8(relative to base address)
		void SetPortamento(float Portamento); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA56018(relative to base address)
		void SetPitchBend(float PitchBend); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA55E1C(relative to base address)
		void SetPan(float Pan); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA55CD8(relative to base address)
		void SetOscType(int32_t OscIndex, ESynth1OscType OscType); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA55C14(relative to base address)
		void SetOscSync(bool bIsSynced); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA55B58(relative to base address)
		void SetOscSemitones(int32_t OscIndex, float Semitones); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA55A94(relative to base address)
		void SetOscPulsewidth(int32_t OscIndex, float Pulsewidth); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA559D0(relative to base address)
		void SetOscOctave(int32_t OscIndex, float Octave); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA5590C(relative to base address)
		void SetOscGainMod(int32_t OscIndex, float OscGainMod); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA55848(relative to base address)
		void SetOscGain(int32_t OscIndex, float OscGain); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA55784(relative to base address)
		void SetOscFrequencyMod(int32_t OscIndex, float OscFreqMod); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA556C0(relative to base address)
		void SetOscCents(int32_t OscIndex, float Cents); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA555FC(relative to base address)
		void SetModEnvSustainGain(float SustainGain); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA55394(relative to base address)
		void SetModEnvReleaseTime(float Release); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA55314(relative to base address)
		void SetModEnvPatch(ESynthModEnvPatch InPatchType); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA5525C(relative to base address)
		void SetModEnvInvert(bool bInvert); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA551A0(relative to base address)
		void SetModEnvDepth(float Depth); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA55120(relative to base address)
		void SetModEnvDecayTime(float DecayTimeMsec); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA550A0(relative to base address)
		void SetModEnvBiasPatch(ESynthModEnvBiasPatch InPatchType); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA54FE8(relative to base address)
		void SetModEnvBiasInvert(bool bInvert); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA54F2C(relative to base address)
		void SetModEnvAttackTime(float AttackTimeMsec); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA54EAC(relative to base address)
		void SetLFOType(int32_t LFOIndex, ESynthLFOType LFOType); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA54A28(relative to base address)
		void SetLFOPatch(int32_t LFOIndex, ESynthLFOPatchType LFOPatchType); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA54934(relative to base address)
		void SetLFOMode(int32_t LFOIndex, ESynthLFOMode LFOMode); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA54840(relative to base address)
		void SetLFOGainMod(int32_t LFOIndex, float GainMod); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA5477C(relative to base address)
		void SetLFOGain(int32_t LFOIndex, float Gain); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA546B8(relative to base address)
		void SetLFOFrequencyMod(int32_t LFOIndex, float FrequencyModHz); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA545F4(relative to base address)
		void SetLFOFrequency(int32_t LFOIndex, float FrequencyHz); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA54530(relative to base address)
		void SetGainDb(float GainDb); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA5391C(relative to base address)
		void SetFilterType(ESynthFilterType FilterType); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA533BC(relative to base address)
		void SetFilterQMod(float FilterQ); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA532BC(relative to base address)
		void SetFilterQ(float FilterQ); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA531BC(relative to base address)
		void SetFilterFrequencyMod(float FilterFrequencyHz); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA5313C(relative to base address)
		void SetFilterFrequency(float FilterFrequencyHz); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA530BC(relative to base address)
		void SetFilterAlgorithm(ESynthFilterAlgorithm FilterAlgorithm); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA52A28(relative to base address)
		void SetEnableUnison(bool EnableUnison); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA526CC(relative to base address)
		void SetEnableRetrigger(bool RetriggerEnabled); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA5264C(relative to base address)
		void SetEnablePolyphony(bool bEnablePolyphony); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA525CC(relative to base address)
		bool SetEnablePatch(FPatchId PatchId, bool bIsEnabled); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA523E4(relative to base address)
		void SetEnableLegato(bool LegatoEnabled); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA52364(relative to base address)
		void SetDecayTime(float DecayTimeMsec); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA51C28(relative to base address)
		void SetChorusFrequency(float Frequency); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA51930(relative to base address)
		void SetChorusFeedback(float Feedback); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA518B0(relative to base address)
		void SetChorusEnabled(bool EnableChorus); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA51830(relative to base address)
		void SetChorusDepth(float Depth); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA517B0(relative to base address)
		void SetAttackTime(float AttackTimeMsec); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA5144C(relative to base address)
		void NoteOn(float Note, int32_t Velocity, float duration); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA50AE4(relative to base address)
		void NoteOff(float Note, bool bAllNotesOff, bool bKillAllNotes); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA50860(relative to base address)
		FPatchId CreatePatch(ESynth1PatchSource PatchSource, TArray<FSynth1PatchCable>& PatchCables, bool bEnableByDefault); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DA4FDF0(relative to base address)
	};


	// Class Synthesis.SourceEffectBitCrusherPreset
	// Inherited from USoundEffectSourcePreset -> USoundEffectPreset -> UObject
	// Size: 0x1A8 (0x210 - 0x68)
	class USourceEffectBitCrusherPreset : public USoundEffectSourcePreset	
	{
	public:
		unsigned char UnknownData00_3[0xE8]; // 0x68(0xE8) UNKNOWN PROPERTY
		FSourceEffectBitCrusherSettings Settings; // 0x150(0xC0)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Synthesis.SourceEffectBitCrusherPreset");
			return ret;
		}

		void SetSettings(FSourceEffectBitCrusherBaseSettings& Settings); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DA56BC4(relative to base address)
		void SetSampleRateModulators(TSet<USoundModulatorBase*>& InModulators); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DA568E8(relative to base address)
		void SetSampleRateModulator(USoundModulatorBase* Modulator); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA56848(relative to base address)
		void SetSampleRate(float SampleRate); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA567C8(relative to base address)
		void SetModulationSettings(FSourceEffectBitCrusherSettings& ModulationSettings); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DA55414(relative to base address)
		void SetBits(float Bits); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA51730(relative to base address)
		void SetBitModulators(TSet<USoundModulatorBase*>& InModulators); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DA5164C(relative to base address)
		void SetBitModulator(USoundModulatorBase* Modulator); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA515AC(relative to base address)
	};


	// Class Synthesis.SourceEffectChorusPreset
	// Inherited from USoundEffectSourcePreset -> USoundEffectPreset -> UObject
	// Size: 0x478 (0x4E0 - 0x68)
	class USourceEffectChorusPreset : public USoundEffectSourcePreset	
	{
	public:
		unsigned char UnknownData00_3[0x250]; // 0x68(0x250) UNKNOWN PROPERTY
		FSourceEffectChorusSettings Settings; // 0x2B8(0x228)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Synthesis.SourceEffectChorusPreset");
			return ret;
		}

		void SetWetModulators(TSet<USoundModulatorBase*>& Modulators); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DA58B54(relative to base address)
		void SetWetModulator(USoundModulatorBase* Modulator); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA58AB4(relative to base address)
		void SetWet(float WetAmount); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA58A34(relative to base address)
		void SetSpreadModulators(TSet<USoundModulatorBase*>& Modulators); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DA57F50(relative to base address)
		void SetSpreadModulator(USoundModulatorBase* Modulator); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA57EB0(relative to base address)
		void SetSpread(float Spread); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA57E30(relative to base address)
		void SetSettings(FSourceEffectChorusBaseSettings& Settings); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DA56C58(relative to base address)
		void SetModulationSettings(FSourceEffectChorusSettings& ModulationSettings); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DA55508(relative to base address)
		void SetFrequencyModulators(TSet<USoundModulatorBase*>& Modulators); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DA53738(relative to base address)
		void SetFrequencyModulator(USoundModulatorBase* Modulator); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA53698(relative to base address)
		void SetFrequency(float Frequency); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA53510(relative to base address)
		void SetFeedbackModulators(TSet<USoundModulatorBase*>& Modulators); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DA52944(relative to base address)
		void SetFeedbackModulator(USoundModulatorBase* Modulator); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA528A4(relative to base address)
		void SetFeedback(float Feedback); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA52824(relative to base address)
		void SetDryModulators(TSet<USoundModulatorBase*>& Modulators); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DA52280(relative to base address)
		void SetDryModulator(USoundModulatorBase* Modulator); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA521E0(relative to base address)
		void SetDry(float DryAmount); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA52160(relative to base address)
		void SetDepthModulators(TSet<USoundModulatorBase*>& Modulators); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DA5207C(relative to base address)
		void SetDepthModulator(USoundModulatorBase* Modulator); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA51FDC(relative to base address)
		void SetDepth(float Depth); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA51F5C(relative to base address)
	};


	// Class Synthesis.SourceEffectConvolutionReverbPreset
	// Inherited from USoundEffectSourcePreset -> USoundEffectPreset -> UObject
	// Size: 0x58 (0xC0 - 0x68)
	class USourceEffectConvolutionReverbPreset : public USoundEffectSourcePreset	
	{
	public:
		UAudioImpulseResponse* ImpulseResponse; // 0x68(0x8)
		FSourceEffectConvolutionReverbSettings Settings; // 0x70(0x10)
		ESubmixEffectConvolutionReverbBlockSize BlockSize; // 0x80(0x1)
		bool bEnableHardwareAcceleration; // 0x81(0x1)
		unsigned char UnknownData00_7[0x3E]; // 0x82(0x3E) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Synthesis.SourceEffectConvolutionReverbPreset");
			return ret;
		}

		void SetSettings(FSourceEffectConvolutionReverbSettings& InSettings); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DA56CF4(relative to base address)
		void SetImpulseResponse(UAudioImpulseResponse* InImpulseResponse); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA540B4(relative to base address)
	};


	// Class Synthesis.SourceEffectDynamicsProcessorPreset
	// Inherited from USoundEffectSourcePreset -> USoundEffectPreset -> UObject
	// Size: 0x78 (0xE0 - 0x68)
	class USourceEffectDynamicsProcessorPreset : public USoundEffectSourcePreset	
	{
	public:
		unsigned char UnknownData00_3[0x50]; // 0x68(0x50) UNKNOWN PROPERTY
		FSourceEffectDynamicsProcessorSettings Settings; // 0xB8(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Synthesis.SourceEffectDynamicsProcessorPreset");
			return ret;
		}

		void SetSettings(FSourceEffectDynamicsProcessorSettings& InSettings); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DA56DA4(relative to base address)
	};


	// Class Synthesis.EnvelopeFollowerListener
	// Inherited from UActorComponent -> UObject
	// Size: 0x20 (0xC0 - 0xA0)
	class UEnvelopeFollowerListener : public UActorComponent	
	{
	public:
		FMulticastInlineDelegate OnEnvelopeFollowerUpdate; // 0xA0(0x10)
		unsigned char UnknownData00_7[0x10]; // 0xB0(0x10) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_3[0x34]; // 0x68(0x34) UNKNOWN PROPERTY
		FSourceEffectEnvelopeFollowerSettings Settings; // 0x9C(0xC)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Synthesis.SourceEffectEnvelopeFollowerPreset");
			return ret;
		}

		void UnregisterEnvelopeFollowerListener(UEnvelopeFollowerListener* EnvelopeFollowerListener); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA58C38(relative to base address)
		void SetSettings(FSourceEffectEnvelopeFollowerSettings& InSettings); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DA56F44(relative to base address)
		void RegisterEnvelopeFollowerListener(UEnvelopeFollowerListener* EnvelopeFollowerListener); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA50D34(relative to base address)
	};


	// Class Synthesis.SourceEffectEQPreset
	// Inherited from USoundEffectSourcePreset -> USoundEffectPreset -> UObject
	// Size: 0x48 (0xB0 - 0x68)
	class USourceEffectEQPreset : public USoundEffectSourcePreset	
	{
	public:
		unsigned char UnknownData00_3[0x38]; // 0x68(0x38) UNKNOWN PROPERTY
		FSourceEffectEQSettings Settings; // 0xA0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Synthesis.SourceEffectEQPreset");
			return ret;
		}

		void SetSettings(FSourceEffectEQSettings& InSettings); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DA56E78(relative to base address)
	};


	// Class Synthesis.SourceEffectFilterPreset
	// Inherited from USoundEffectSourcePreset -> USoundEffectPreset -> UObject
	// Size: 0x68 (0xD0 - 0x68)
	class USourceEffectFilterPreset : public USoundEffectSourcePreset	
	{
	public:
		unsigned char UnknownData00_3[0x48]; // 0x68(0x48) UNKNOWN PROPERTY
		FSourceEffectFilterSettings Settings; // 0xB0(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Synthesis.SourceEffectFilterPreset");
			return ret;
		}

		void SetSettings(FSourceEffectFilterSettings& InSettings); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DA56FE0(relative to base address)
	};


	// Class Synthesis.SourceEffectFoldbackDistortionPreset
	// Inherited from USoundEffectSourcePreset -> USoundEffectPreset -> UObject
	// Size: 0x40 (0xA8 - 0x68)
	class USourceEffectFoldbackDistortionPreset : public USoundEffectSourcePreset	
	{
	public:
		unsigned char UnknownData00_3[0x34]; // 0x68(0x34) UNKNOWN PROPERTY
		FSourceEffectFoldbackDistortionSettings Settings; // 0x9C(0xC)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Synthesis.SourceEffectFoldbackDistortionPreset");
			return ret;
		}

		void SetSettings(FSourceEffectFoldbackDistortionSettings& InSettings); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DA57090(relative to base address)
	};


	// Class Synthesis.SourceEffectMidSideSpreaderPreset
	// Inherited from USoundEffectSourcePreset -> USoundEffectPreset -> UObject
	// Size: 0x38 (0xA0 - 0x68)
	class USourceEffectMidSideSpreaderPreset : public USoundEffectSourcePreset	
	{
	public:
		unsigned char UnknownData00_3[0x30]; // 0x68(0x30) UNKNOWN PROPERTY
		FSourceEffectMidSideSpreaderSettings Settings; // 0x98(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Synthesis.SourceEffectMidSideSpreaderPreset");
			return ret;
		}

		void SetSettings(FSourceEffectMidSideSpreaderSettings& InSettings); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DA57128(relative to base address)
	};


	// Class Synthesis.SourceEffectMotionFilterPreset
	// Inherited from USoundEffectSourcePreset -> USoundEffectPreset -> UObject
	// Size: 0x118 (0x180 - 0x68)
	class USourceEffectMotionFilterPreset : public USoundEffectSourcePreset	
	{
	public:
		unsigned char UnknownData00_3[0xA0]; // 0x68(0xA0) UNKNOWN PROPERTY
		FSourceEffectMotionFilterSettings Settings; // 0x108(0x78)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Synthesis.SourceEffectMotionFilterPreset");
			return ret;
		}

		void SetSettings(FSourceEffectMotionFilterSettings& InSettings); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DA571C0(relative to base address)
	};


	// Class Synthesis.SourceEffectPannerPreset
	// Inherited from USoundEffectSourcePreset -> USoundEffectPreset -> UObject
	// Size: 0x38 (0xA0 - 0x68)
	class USourceEffectPannerPreset : public USoundEffectSourcePreset	
	{
	public:
		unsigned char UnknownData00_3[0x30]; // 0x68(0x30) UNKNOWN PROPERTY
		FSourceEffectPannerSettings Settings; // 0x98(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Synthesis.SourceEffectPannerPreset");
			return ret;
		}

		void SetSettings(FSourceEffectPannerSettings& InSettings); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DA572A8(relative to base address)
	};


	// Class Synthesis.SourceEffectPhaserPreset
	// Inherited from USoundEffectSourcePreset -> USoundEffectPreset -> UObject
	// Size: 0x48 (0xB0 - 0x68)
	class USourceEffectPhaserPreset : public USoundEffectSourcePreset	
	{
	public:
		unsigned char UnknownData00_3[0x38]; // 0x68(0x38) UNKNOWN PROPERTY
		FSourceEffectPhaserSettings Settings; // 0xA0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Synthesis.SourceEffectPhaserPreset");
			return ret;
		}

		void SetSettings(FSourceEffectPhaserSettings& InSettings); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DA5733C(relative to base address)
	};


	// Class Synthesis.SourceEffectRingModulationPreset
	// Inherited from USoundEffectSourcePreset -> USoundEffectPreset -> UObject
	// Size: 0x68 (0xD0 - 0x68)
	class USourceEffectRingModulationPreset : public USoundEffectSourcePreset	
	{
	public:
		unsigned char UnknownData00_3[0x48]; // 0x68(0x48) UNKNOWN PROPERTY
		FSourceEffectRingModulationSettings Settings; // 0xB0(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Synthesis.SourceEffectRingModulationPreset");
			return ret;
		}

		void SetSettings(FSourceEffectRingModulationSettings& InSettings); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DA573DC(relative to base address)
	};


	// Class Synthesis.SourceEffectSimpleDelayPreset
	// Inherited from USoundEffectSourcePreset -> USoundEffectPreset -> UObject
	// Size: 0x58 (0xC0 - 0x68)
	class USourceEffectSimpleDelayPreset : public USoundEffectSourcePreset	
	{
	public:
		unsigned char UnknownData00_3[0x40]; // 0x68(0x40) UNKNOWN PROPERTY
		FSourceEffectSimpleDelaySettings Settings; // 0xA8(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Synthesis.SourceEffectSimpleDelayPreset");
			return ret;
		}

		void SetSettings(FSourceEffectSimpleDelaySettings& InSettings); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DA57478(relative to base address)
	};


	// Class Synthesis.SourceEffectStereoDelayPreset
	// Inherited from USoundEffectSourcePreset -> USoundEffectPreset -> UObject
	// Size: 0x70 (0xD8 - 0x68)
	class USourceEffectStereoDelayPreset : public USoundEffectSourcePreset	
	{
	public:
		unsigned char UnknownData00_3[0x4C]; // 0x68(0x4C) UNKNOWN PROPERTY
		FSourceEffectStereoDelaySettings Settings; // 0xB4(0x24)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Synthesis.SourceEffectStereoDelayPreset");
			return ret;
		}

		void SetSettings(FSourceEffectStereoDelaySettings& InSettings); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DA57540(relative to base address)
	};


	// Class Synthesis.SourceEffectWaveShaperPreset
	// Inherited from USoundEffectSourcePreset -> USoundEffectPreset -> UObject
	// Size: 0x38 (0xA0 - 0x68)
	class USourceEffectWaveShaperPreset : public USoundEffectSourcePreset	
	{
	public:
		unsigned char UnknownData00_3[0x30]; // 0x68(0x30) UNKNOWN PROPERTY
		FSourceEffectWaveShaperSettings Settings; // 0x98(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Synthesis.SourceEffectWaveShaperPreset");
			return ret;
		}

		void SetSettings(FSourceEffectWaveShaperSettings& InSettings); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DA572A8(relative to base address)
	};


	// Class Synthesis.SubmixEffectConvolutionReverbPreset
	// Inherited from USoundEffectSubmixPreset -> USoundEffectPreset -> UObject
	// Size: 0x98 (0x100 - 0x68)
	class USubmixEffectConvolutionReverbPreset : public USoundEffectSubmixPreset	
	{
	public:
		UAudioImpulseResponse* ImpulseResponse; // 0x68(0x8)
		FSubmixEffectConvolutionReverbSettings Settings; // 0x70(0x30)
		ESubmixEffectConvolutionReverbBlockSize BlockSize; // 0xA0(0x1)
		bool bEnableHardwareAcceleration; // 0xA1(0x1)
		unsigned char UnknownData00_7[0x5E]; // 0xA2(0x5E) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Synthesis.SubmixEffectConvolutionReverbPreset");
			return ret;
		}

		void SetSettings(FSubmixEffectConvolutionReverbSettings& InSettings); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DA575D0(relative to base address)
		void SetImpulseResponse(UAudioImpulseResponse* InImpulseResponse); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA54150(relative to base address)
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

		FSubmixEffectDelaySettings SetMaximumDelayLength(FSubmixEffectDelaySettings& DelaySettings, float MaximumDelayLength); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DA54D14(relative to base address)
		FSubmixEffectDelaySettings SetInterpolationTime(FSubmixEffectDelaySettings& DelaySettings, float InterpolationTime); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DA54328(relative to base address)
		FSubmixEffectDelaySettings SetDelayLength(FSubmixEffectDelaySettings& DelaySettings, float DelayLength); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DA51DC4(relative to base address)
	};


	// Class Synthesis.SubmixEffectDelayPreset
	// Inherited from USoundEffectSubmixPreset -> USoundEffectPreset -> UObject
	// Size: 0x50 (0xB8 - 0x68)
	class USubmixEffectDelayPreset : public USoundEffectSubmixPreset	
	{
	public:
		unsigned char UnknownData00_3[0x34]; // 0x68(0x34) UNKNOWN PROPERTY
		FSubmixEffectDelaySettings Settings; // 0x9C(0xC)
		FSubmixEffectDelaySettings DynamicSettings; // 0xA8(0xC)
		unsigned char UnknownData01_7[0x4]; // 0xB4(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Synthesis.SubmixEffectDelayPreset");
			return ret;
		}

		void SetSettings(FSubmixEffectDelaySettings& InSettings); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DA576A0(relative to base address)
		void SetInterpolationTime(float Time); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA542A8(relative to base address)
		void SetDelay(float Length); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA51D44(relative to base address)
		void SetDefaultSettings(FSubmixEffectDelaySettings& InSettings); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DA51CA8(relative to base address)
		float GetMaxDelayInMilliseconds(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C0DFE78(relative to base address)
	};


	// Class Synthesis.SubmixEffectFilterPreset
	// Inherited from USoundEffectSubmixPreset -> USoundEffectPreset -> UObject
	// Size: 0x40 (0xA8 - 0x68)
	class USubmixEffectFilterPreset : public USoundEffectSubmixPreset	
	{
	public:
		unsigned char UnknownData00_3[0x34]; // 0x68(0x34) UNKNOWN PROPERTY
		FSubmixEffectFilterSettings Settings; // 0x9C(0xC)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Synthesis.SubmixEffectFilterPreset");
			return ret;
		}

		void SetSettings(FSubmixEffectFilterSettings& InSettings); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DA57750(relative to base address)
		void SetFilterType(ESubmixFilterType InType); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA53474(relative to base address)
		void SetFilterQMod(float InQ); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA5333C(relative to base address)
		void SetFilterQ(float InQ); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA5323C(relative to base address)
		void SetFilterCutoffFrequencyMod(float InFrequency); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA52BC4(relative to base address)
		void SetFilterCutoffFrequency(float InFrequency); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA52B44(relative to base address)
		void SetFilterAlgorithm(ESubmixFilterAlgorithm InAlgorithm); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA52AA8(relative to base address)
	};


	// Class Synthesis.SubmixEffectFlexiverbPreset
	// Inherited from USoundEffectSubmixPreset -> USoundEffectPreset -> UObject
	// Size: 0x48 (0xB0 - 0x68)
	class USubmixEffectFlexiverbPreset : public USoundEffectSubmixPreset	
	{
	public:
		unsigned char UnknownData00_3[0x38]; // 0x68(0x38) UNKNOWN PROPERTY
		FSubmixEffectFlexiverbSettings Settings; // 0xA0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Synthesis.SubmixEffectFlexiverbPreset");
			return ret;
		}

		void SetSettings(FSubmixEffectFlexiverbSettings& InSettings); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DA577E8(relative to base address)
	};


	// Class Synthesis.SubmixEffectMultibandCompressorPreset
	// Inherited from USoundEffectSubmixPreset -> USoundEffectPreset -> UObject
	// Size: 0x98 (0x100 - 0x68)
	class USubmixEffectMultibandCompressorPreset : public USoundEffectSubmixPreset	
	{
	public:
		unsigned char UnknownData00_3[0x60]; // 0x68(0x60) UNKNOWN PROPERTY
		FSubmixEffectMultibandCompressorSettings Settings; // 0xC8(0x38)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Synthesis.SubmixEffectMultibandCompressorPreset");
			return ret;
		}

		void SetSettings(FSubmixEffectMultibandCompressorSettings& InSettings); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DA5788C(relative to base address)
		void SetExternalSubmix(USoundSubmix* Submix); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA5274C(relative to base address)
		void SetAudioBus(UAudioBus* AudioBus); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA514CC(relative to base address)
		void ResetKey(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA50E44(relative to base address)
	};


	// Class Synthesis.SubmixEffectStereoDelayPreset
	// Inherited from USoundEffectSubmixPreset -> USoundEffectPreset -> UObject
	// Size: 0x70 (0xD8 - 0x68)
	class USubmixEffectStereoDelayPreset : public USoundEffectSubmixPreset	
	{
	public:
		unsigned char UnknownData00_3[0x4C]; // 0x68(0x4C) UNKNOWN PROPERTY
		FSubmixEffectStereoDelaySettings Settings; // 0xB4(0x24)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Synthesis.SubmixEffectStereoDelayPreset");
			return ret;
		}

		void SetSettings(FSubmixEffectStereoDelaySettings& InSettings); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DA5795C(relative to base address)
	};


	// Class Synthesis.SubmixEffectStereoToQuadPreset
	// Inherited from USoundEffectSubmixPreset -> USoundEffectPreset -> UObject
	// Size: 0x38 (0xA0 - 0x68)
	class USubmixEffectStereoToQuadPreset : public USoundEffectSubmixPreset	
	{
	public:
		unsigned char UnknownData00_3[0x30]; // 0x68(0x30) UNKNOWN PROPERTY
		FSubmixEffectStereoToQuadSettings Settings; // 0x98(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Synthesis.SubmixEffectStereoToQuadPreset");
			return ret;
		}

		void SetSettings(FSubmixEffectStereoToQuadSettings& InSettings); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DA57A2C(relative to base address)
	};


	// Class Synthesis.SubmixEffectTapDelayPreset
	// Inherited from USoundEffectSubmixPreset -> USoundEffectPreset -> UObject
	// Size: 0x70 (0xD8 - 0x68)
	class USubmixEffectTapDelayPreset : public USoundEffectSubmixPreset	
	{
	public:
		unsigned char UnknownData00_3[0x40]; // 0x68(0x40) UNKNOWN PROPERTY
		FSubmixEffectTapDelaySettings Settings; // 0xA8(0x18)
		unsigned char UnknownData01_7[0x18]; // 0xC0(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Synthesis.SubmixEffectTapDelayPreset");
			return ret;
		}

		void SetTap(int32_t TapId, FTapDelayInfo& TapInfo); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DA5869C(relative to base address)
		void SetSettings(FSubmixEffectTapDelaySettings& InSettings); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DA57ABC(relative to base address)
		void SetInterpolationTime(float Time); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA544B0(relative to base address)
		void RemoveTap(int32_t TapId); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA50DC4(relative to base address)
		void GetTapIds(TArray<int32_t>& TapIds); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DA505C0(relative to base address)
		void GetTap(int32_t TapId, FTapDelayInfo& TapInfo); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DA504C8(relative to base address)
		float GetMaxDelayInMilliseconds(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA50438(relative to base address)
		void AddTap(int32_t& TapId); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DA4FD28(relative to base address)
	};


	// Class Synthesis.GranularSynth
	// Inherited from USynthComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x3F0 (0xC70 - 0x880)
	class UGranularSynth : public USynthComponent	
	{
	public:
		USoundWave* GranulatedSoundWave; // 0x880(0x8)
		unsigned char UnknownData00_7[0x3E8]; // 0x888(0x3E8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Synthesis.GranularSynth");
			return ret;
		}

		void SetSustainGain(float SustainGain); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA5843C(relative to base address)
		void SetSoundWave(USoundWave* InSoundWave); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA57C80(relative to base address)
		void SetScrubMode(bool bScrubMode); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA569CC(relative to base address)
		void SetReleaseTimeMsec(float ReleaseTimeMsec); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA56748(relative to base address)
		void SetPlayheadTime(float InPositionSec, float LerpTimeSec, EGranularSynthSeekType SeekType); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA55F1C(relative to base address)
		void SetPlaybackSpeed(float InPlayheadRate); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA55E9C(relative to base address)
		void SetGrainVolume(float BaseVolume, FVector2D VolumeRange); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74DA53EDC(relative to base address)
		void SetGrainsPerSecond(float InGrainsPerSecond); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA54034(relative to base address)
		void SetGrainProbability(float InGrainProbability); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA53E5C(relative to base address)
		void SetGrainPitch(float BasePitch, FVector2D PitchRange); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74DA53D04(relative to base address)
		void SetGrainPan(float BasePan, FVector2D PanRange); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74DA53BAC(relative to base address)
		void SetGrainEnvelopeType(EGranularSynthEnvelopeType EnvelopeType); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA53AF4(relative to base address)
		void SetGrainDuration(float BaseDurationMsec, FVector2D DurationRange); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74DA5399C(relative to base address)
		void SetDecayTime(float DecayTimeMsec); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA513CC(relative to base address)
		void SetAttackTime(float AttackTimeMsec); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA513CC(relative to base address)
		void NoteOn(float Note, int32_t Velocity, float duration); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA509EC(relative to base address)
		void NoteOff(float Note, bool bKill); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA50798(relative to base address)
		bool IsLoaded(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DA50768(relative to base address)
		float GetSampleDuration(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DA50498(relative to base address)
		float GetCurrentPlayheadTime(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DA4FFEC(relative to base address)
	};


	// Class Synthesis.MonoWaveTableSynthPreset
	// Inherited from UObject
	// Size: 0x148 (0x170 - 0x28)
	class UMonoWaveTableSynthPreset : public UObject	
	{
	public:
		FString PresetName; // 0x28(0x10)
		bool bLockKeyframesToGridBool : 1; // 0x38:0(0x1)
		unsigned char UnknownData00_5[0x3]; // 0x39(0x3) UNKNOWN PROPERTY
		int32_t LockKeyframesToGrid; // 0x3C(0x4)
		int32_t WaveTableResolution; // 0x40(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x44(0x4) UNKNOWN PROPERTY
		TArray<FRuntimeFloatCurve> WaveTable; // 0x48(0x10)
		bool bNormalizeWaveTables : 1; // 0x58:0(0x1)
		unsigned char UnknownData02_7[0x117]; // 0x59(0x117) UNKNOWN PROPERTY

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
		UMonoWaveTableSynthPreset* CurrentPreset; // 0x8A0(0x8)
		unsigned char UnknownData00_7[0x728]; // 0x8A8(0x728) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Synthesis.SynthComponentMonoWaveTable");
			return ret;
		}

		void SetWaveTablePosition(float InPosition); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA589B4(relative to base address)
		void SetSustainPedalState(bool InSustainPedalState); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA5853C(relative to base address)
		void SetPosLfoType(ESynthLFOType InLfoType); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA56198(relative to base address)
		void SetPosLfoFrequency(float InLfoFrequency); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA56118(relative to base address)
		void SetPosLfoDepth(float InLfoDepth); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA56098(relative to base address)
		void SetPositionEnvelopeSustainGain(float InSustainGain); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA56648(relative to base address)
		void SetPositionEnvelopeReleaseTime(float InReleaseTimeMsec); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA565C8(relative to base address)
		void SetPositionEnvelopeInvert(bool bInInvert); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA5650C(relative to base address)
		void SetPositionEnvelopeDepth(float InDepth); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA5648C(relative to base address)
		void SetPositionEnvelopeDecayTime(float InDecayTimeMsec); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA5640C(relative to base address)
		void SetPositionEnvelopeBiasInvert(bool bInBiasInvert); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA56350(relative to base address)
		void SetPositionEnvelopeBiasDepth(float InDepth); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA562D0(relative to base address)
		void SetPositionEnvelopeAttackTime(float InAttackTimeMsec); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA56250(relative to base address)
		void SetLowPassFilterResonance(float InNewQ); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA54C94(relative to base address)
		void SetFrequencyWithMidiNote(float InMidiNote); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA5389C(relative to base address)
		void SetFrequencyPitchBend(float FrequencyOffsetCents); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA5381C(relative to base address)
		void SetFrequency(float FrequencyHz); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA53590(relative to base address)
		void SetFilterEnvelopeSustainGain(float InSustainGain); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA52FBC(relative to base address)
		void SetFilterEnvelopeReleaseTime(float InReleaseTimeMsec); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA52F3C(relative to base address)
		void SetFilterEnvelopenDecayTime(float InDecayTimeMsec); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA5303C(relative to base address)
		void SetFilterEnvelopeInvert(bool bInInvert); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA52E80(relative to base address)
		void SetFilterEnvelopeDepth(float InDepth); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA52E00(relative to base address)
		void SetFilterEnvelopeBiasInvert(bool bInBiasInvert); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA52D44(relative to base address)
		void SetFilterEnvelopeBiasDepth(float InDepth); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA52CC4(relative to base address)
		void SetFilterEnvelopeAttackTime(float InAttackTimeMsec); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA52C44(relative to base address)
		bool SetCurveValue(int32_t TableIndex, int32_t KeyframeIndex, float NewValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA51B30(relative to base address)
		bool SetCurveTangent(int32_t TableIndex, float InNewTangent); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA51A70(relative to base address)
		bool SetCurveInterpolationType(CurveInterpolationType InterpolationType, int32_t TableIndex); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA519B0(relative to base address)
		void SetAmpEnvelopeSustainGain(float InSustainGain); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA5134C(relative to base address)
		void SetAmpEnvelopeReleaseTime(float InReleaseTimeMsec); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA512CC(relative to base address)
		void SetAmpEnvelopeInvert(bool bInInvert); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA51210(relative to base address)
		void SetAmpEnvelopeDepth(float InDepth); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA51190(relative to base address)
		void SetAmpEnvelopeDecayTime(float InDecayTimeMsec); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA51110(relative to base address)
		void SetAmpEnvelopeBiasInvert(bool bInBiasInvert); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA51054(relative to base address)
		void SetAmpEnvelopeBiasDepth(float InDepth); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA50FD4(relative to base address)
		void SetAmpEnvelopeAttackTime(float InAttackTimeMsec); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA50F54(relative to base address)
		void RefreshWaveTable(int32_t Index); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA50CB4(relative to base address)
		void RefreshAllWaveTables(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA50CA0(relative to base address)
		void NoteOn(float InMidiNote, float InVelocity); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA50BDC(relative to base address)
		void NoteOff(float InMidiNote); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA5096C(relative to base address)
		int32_t GetNumTableEntries(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA50478(relative to base address)
		int32_t GetMaxTableIndex(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DA50450(relative to base address)
		TArray GetKeyFrameValuesForTable(float TableIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DA50094(relative to base address)
		float GetCurveTangent(int32_t TableIndex); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA50004(relative to base address)
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
		unsigned char UnknownData00_7[0x4C]; // 0x924(0x4C) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Synthesis.SynthComponentToneGenerator");
			return ret;
		}

		void SetVolume(float InVolume); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA5892C(relative to base address)
		void SetFrequency(float InFrequency); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA53610(relative to base address)
	};


	// Class Synthesis.SynthSamplePlayer
	// Inherited from USynthComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x130 (0x9B0 - 0x880)
	class USynthSamplePlayer : public USynthComponent	
	{
	public:
		USoundWave* SoundWave; // 0x880(0x8)
		FMulticastInlineDelegate OnSampleLoaded; // 0x888(0x10)
		FMulticastInlineDelegate OnSamplePlaybackProgress; // 0x898(0x10)
		unsigned char UnknownData00_7[0x108]; // 0x8A8(0x108) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Synthesis.SynthSamplePlayer");
			return ret;
		}

		void SetSoundWave(USoundWave* InSoundWave); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA57D00(relative to base address)
		void SetScrubTimeWidth(float InScrubTimeWidthSec); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA56B44(relative to base address)
		void SetScrubMode(bool bScrubMode); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA56A88(relative to base address)
		void SetPitch(float InPitch, float TimeSec); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA55D58(relative to base address)
		void SeekToTime(float TimeSec, ESamplePlayerSeekType SeekType, bool bWrap); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA50E58(relative to base address)
		bool IsLoaded(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DA50780(relative to base address)
		float GetSampleDuration(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DA504B0(relative to base address)
		float GetCurrentPlaybackProgressTime(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DA4FFD4(relative to base address)
		float GetCurrentPlaybackProgressPercent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DA4FFB4(relative to base address)
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

		float GetLogFrequency(float InLinearValue, float InDomainMin, float InDomainMax, float InRangeMin, float InRangeMax); // Flags: Final|Native|Static|Private|BlueprintCallable, Memory Exec: 0x7FF74DA502B8(relative to base address)
		float GetLinearFrequency(float InLogFrequencyValue, float InDomainMin, float InDomainMax, float InRangeMin, float InRangeMax); // Flags: Final|Native|Static|Private|BlueprintCallable, Memory Exec: 0x7FF74DA50138(relative to base address)
	};


	// Class Synthesis.Synth2DSlider
	// Inherited from UWidget -> UVisual -> UObject
	// Size: 0x448 (0x5A0 - 0x158)
	class USynth2DSlider : public UWidget	
	{
	public:
		float ValueX; // 0x158(0x4)
		float ValueY; // 0x15C(0x4)
		FDelegateProperty ValueXDelegate; // 0x160(0xC)
		FDelegateProperty ValueYDelegate; // 0x16C(0xC)
		unsigned char UnknownData00_6[0x8]; // 0x178(0x8) UNKNOWN PROPERTY
		FSynth2DSliderStyle WidgetStyle; // 0x180(0x390)
		FLinearColor SliderHandleColor; // 0x510(0x10)
		bool IndentHandle; // 0x520(0x1)
		bool Locked; // 0x521(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x522(0x2) UNKNOWN PROPERTY
		float StepSize; // 0x524(0x4)
		bool IsFocusable; // 0x528(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x529(0x7) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnMouseCaptureBegin; // 0x530(0x10)
		FMulticastInlineDelegate OnMouseCaptureEnd; // 0x540(0x10)
		FMulticastInlineDelegate OnControllerCaptureBegin; // 0x550(0x10)
		FMulticastInlineDelegate OnControllerCaptureEnd; // 0x560(0x10)
		FMulticastInlineDelegate OnValueChangedX; // 0x570(0x10)
		FMulticastInlineDelegate OnValueChangedY; // 0x580(0x10)
		unsigned char UnknownData03_7[0x10]; // 0x590(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Synthesis.Synth2DSlider");
			return ret;
		}

		void SetValue(FVector2D InValue); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74DA58794(relative to base address)
		void SetStepSize(float InValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA58034(relative to base address)
		void SetSliderHandleColor(FLinearColor InValue); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74DA57B68(relative to base address)
		void SetLocked(bool InValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA54B1C(relative to base address)
		void SetIndentHandle(bool InValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA541EC(relative to base address)
		FVector2D GetValue(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DA506AC(relative to base address)
	};


	// Class Synthesis.SynthKnob
	// Inherited from UWidget -> UVisual -> UObject
	// Size: 0x398 (0x4F0 - 0x158)
	class USynthKnob : public UWidget	
	{
	public:
		float Value; // 0x158(0x4)
		float StepSize; // 0x15C(0x4)
		float MouseSpeed; // 0x160(0x4)
		float MouseFineTuneSpeed; // 0x164(0x4)
		bool ShowTooltipInfo : 1; // 0x168:0(0x1)
		unsigned char UnknownData00_5[0x7]; // 0x169(0x7) UNKNOWN PROPERTY
		FText ParameterName; // 0x170(0x10)
		FText ParameterUnits; // 0x180(0x10)
		FDelegateProperty ValueDelegate; // 0x190(0xC)
		unsigned char UnknownData01_6[0x4]; // 0x19C(0x4) UNKNOWN PROPERTY
		FSynthKnobStyle WidgetStyle; // 0x1A0(0x2E0)
		bool Locked; // 0x480(0x1)
		bool IsFocusable; // 0x481(0x1)
		unsigned char UnknownData02_6[0x6]; // 0x482(0x6) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnMouseCaptureBegin; // 0x488(0x10)
		FMulticastInlineDelegate OnMouseCaptureEnd; // 0x498(0x10)
		FMulticastInlineDelegate OnControllerCaptureBegin; // 0x4A8(0x10)
		FMulticastInlineDelegate OnControllerCaptureEnd; // 0x4B8(0x10)
		FMulticastInlineDelegate OnValueChanged; // 0x4C8(0x10)
		unsigned char UnknownData03_7[0x18]; // 0x4D8(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Synthesis.SynthKnob");
			return ret;
		}

		void SetValue(float InValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA588AC(relative to base address)
		void SetStepSize(float InValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA580B4(relative to base address)
		void SetLocked(bool InValue); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA54BD8(relative to base address)
		float GetValue(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DA50728(relative to base address)
	};

}
