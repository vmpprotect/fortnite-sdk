#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: AudioMixer
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class AudioMixer.AudioBusSubsystem
	// Inherited from UAudioEngineSubsystem -> UDynamicSubsystem -> USubsystem -> UObject
	// Size: 0xD8 (0x108 - 0x30)
	class UAudioBusSubsystem : public UAudioEngineSubsystem	
	{
	public:
		unsigned char UnknownData00_1[0xD8]; // 0x30(0xD8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioMixer.AudioBusSubsystem");
			return ret;
		}
	};


	// Class AudioMixer.AudioDeviceNotificationSubsystem
	// Inherited from UEngineSubsystem -> UDynamicSubsystem -> USubsystem -> UObject
	// Size: 0xF8 (0x128 - 0x30)
	class UAudioDeviceNotificationSubsystem : public UEngineSubsystem	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x30(0x8) UNKNOWN PROPERTY
		FMulticastInlineDelegate DefaultCaptureDeviceChanged; // 0x38(0x10)
		unsigned char UnknownData01_6[0x18]; // 0x48(0x18) UNKNOWN PROPERTY
		FMulticastInlineDelegate DefaultRenderDeviceChanged; // 0x60(0x10)
		unsigned char UnknownData02_6[0x18]; // 0x70(0x18) UNKNOWN PROPERTY
		FMulticastInlineDelegate DeviceAdded; // 0x88(0x10)
		unsigned char UnknownData03_6[0x18]; // 0x98(0x18) UNKNOWN PROPERTY
		FMulticastInlineDelegate DeviceRemoved; // 0xB0(0x10)
		unsigned char UnknownData04_6[0x18]; // 0xC0(0x18) UNKNOWN PROPERTY
		FMulticastInlineDelegate DeviceStateChanged; // 0xD8(0x10)
		unsigned char UnknownData05_6[0x18]; // 0xE8(0x18) UNKNOWN PROPERTY
		FMulticastInlineDelegate DeviceSwitched; // 0x100(0x10)
		unsigned char UnknownData06_7[0x18]; // 0x110(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioMixer.AudioDeviceNotificationSubsystem");
			return ret;
		}
	};


	// Class AudioMixer.AudioMixerBlueprintLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UAudioMixerBlueprintLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioMixer.AudioMixerBlueprintLibrary");
			return ret;
		}

		void UnregisterAudioBusFromSubmix(UObject* WorldContextObject, USoundSubmix* SoundSubmix, UAudioBus* AudioBus); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74C2EEA0C(relative to base address)
		float TrimAudioCache(float InMegabytesToFree); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74C2EE988(relative to base address)
		void SwapAudioOutputDevice(UObject* WorldContextObject, FString NewDeviceId, FDelegateProperty& OnCompletedDeviceSwap); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C2EE85C(relative to base address)
		USoundWave StopRecordingOutput(UObject* WorldContextObject, EAudioRecordingExportType ExportType, FString Name, FString Path, USoundSubmix* SubmixToRecord, USoundWave* ExistingSoundWaveToOverwrite); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74C2EE66C(relative to base address)
		void StopAudioBus(UObject* WorldContextObject, UAudioBus* AudioBus); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74C2EE558(relative to base address)
		void StopAnalyzingOutput(UObject* WorldContextObject, USoundSubmix* SubmixToStopAnalyzing); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74C2EE46C(relative to base address)
		void StartRecordingOutput(UObject* WorldContextObject, float ExpectedDuration, USoundSubmix* SubmixToRecord); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74C2EE374(relative to base address)
		void StartAudioBus(UObject* WorldContextObject, UAudioBus* AudioBus); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74C2EE254(relative to base address)
		void StartAnalyzingOutput(UObject* WorldContextObject, USoundSubmix* SubmixToAnalyze, EFFTSize FFTSize, EFFTPeakInterpolationMethod InterpolationMethod, EFFTWindowType WindowType, float HopSize, EAudioSpectrumType SpectrumType); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74C2EE04C(relative to base address)
		void SetSubmixEffectChainOverride(UObject* WorldContextObject, USoundSubmix* SoundSubmix, TArray<USoundEffectSubmixPreset*> SubmixEffectPresetChain, float FadeTimeSec); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74C2EDEC8(relative to base address)
		void SetBypassSourceEffectChainEntry(UObject* WorldContextObject, USoundEffectSourcePresetChain* PresetChain, int32_t EntryIndex, bool bBypassed); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74C2EDCE0(relative to base address)
		void ResumeRecordingOutput(UObject* WorldContextObject, USoundSubmix* SubmixToPause); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74C2EDC2C(relative to base address)
		void ReplaceSubmixEffect(UObject* WorldContextObject, USoundSubmix* InSoundSubmix, int32_t SubmixChainIndex, USoundEffectSubmixPreset* SubmixEffectPreset); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74C2EDA60(relative to base address)
		void ReplaceSoundEffectSubmix(UObject* WorldContextObject, USoundSubmix* InSoundSubmix, int32_t SubmixChainIndex, USoundEffectSubmixPreset* SubmixEffectPreset); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74C2EDA60(relative to base address)
		void RemoveSubmixEffectPresetAtIndex(UObject* WorldContextObject, USoundSubmix* SoundSubmix, int32_t SubmixChainIndex); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74C2ED968(relative to base address)
		void RemoveSubmixEffectPreset(UObject* WorldContextObject, USoundSubmix* SoundSubmix, USoundEffectSubmixPreset* SubmixEffectPreset); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74C2ED870(relative to base address)
		void RemoveSubmixEffectAtIndex(UObject* WorldContextObject, USoundSubmix* SoundSubmix, int32_t SubmixChainIndex); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74C2ED968(relative to base address)
		void RemoveSubmixEffect(UObject* WorldContextObject, USoundSubmix* SoundSubmix, USoundEffectSubmixPreset* SubmixEffectPreset); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74C2ED870(relative to base address)
		void RemoveSourceEffectFromPresetChain(UObject* WorldContextObject, USoundEffectSourcePresetChain* PresetChain, int32_t EntryIndex); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74C2ED6A4(relative to base address)
		void RemoveMasterSubmixEffect(UObject* WorldContextObject, USoundEffectSubmixPreset* SubmixEffectPreset); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74C2ED590(relative to base address)
		void RegisterAudioBusToSubmix(UObject* WorldContextObject, USoundSubmix* SoundSubmix, UAudioBus* AudioBus); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74C2ED498(relative to base address)
		void PrimeSoundForPlayback(USoundWave* SoundWave, FDelegateProperty OnLoadCompletion); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74C2ED31C(relative to base address)
		void PrimeSoundCueForPlayback(USoundCue* SoundCue); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74C2ED2B0(relative to base address)
		void PauseRecordingOutput(UObject* WorldContextObject, USoundSubmix* SubmixToPause); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74C2ED1FC(relative to base address)
		TArray MakePresetSpectralAnalysisBandSettings(EAudioSpectrumBandPresetType InBandPresetType, int32_t InNumBands, int32_t InAttackTimeMsec, int32_t InReleaseTimeMsec); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C2ED09C(relative to base address)
		TArray MakeMusicalSpectralAnalysisBandSettings(int32_t InNumSemitones, EMusicalNoteName InStartingMusicalNote, int32_t InStartingOctave, int32_t InAttackTimeMsec, int32_t InReleaseTimeMsec); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C2ECEF8(relative to base address)
		TArray MakeFullSpectrumSpectralAnalysisBandSettings(int32_t InNumBands, float InMinimumFrequency, float InMaximumFrequency, int32_t InAttackTimeMsec, int32_t InReleaseTimeMsec); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C2ECD54(relative to base address)
		bool IsAudioBusActive(UObject* WorldContextObject, UAudioBus* AudioBus); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74C2ECC40(relative to base address)
		void GetPhaseForFrequencies(UObject* WorldContextObject, TArray<float>& Frequencies, TArray<float>& Phases, USoundSubmix* SubmixToAnalyze); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C2EC9C8(relative to base address)
		int32_t GetNumberOfEntriesInSourceEffectChain(UObject* WorldContextObject, USoundEffectSourcePresetChain* PresetChain); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74C2EC8AC(relative to base address)
		void GetMagnitudeForFrequencies(UObject* WorldContextObject, TArray<float>& Frequencies, TArray<float>& Magnitudes, USoundSubmix* SubmixToAnalyze); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C2EC634(relative to base address)
		void GetCurrentAudioOutputDeviceName(UObject* WorldContextObject, FDelegateProperty& OnObtainCurrentDeviceEvent); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C2EC55C(relative to base address)
		void GetAvailableAudioOutputDevices(UObject* WorldContextObject, FDelegateProperty& OnObtainDevicesEvent); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C2EC484(relative to base address)
		FString Conv_AudioOutputDeviceInfoToString(FAudioOutputDeviceInfo& Info); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C2EC3CC(relative to base address)
		void ClearSubmixEffects(UObject* WorldContextObject, USoundSubmix* SoundSubmix); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74C2EC30C(relative to base address)
		void ClearSubmixEffectChainOverride(UObject* WorldContextObject, USoundSubmix* SoundSubmix, float FadeTimeSec); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74C2EC214(relative to base address)
		void ClearMasterSubmixEffects(UObject* WorldContextObject); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74C2EC178(relative to base address)
		int32_t AddSubmixEffect(UObject* WorldContextObject, USoundSubmix* SoundSubmix, USoundEffectSubmixPreset* SubmixEffectPreset); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74C2EBFE4(relative to base address)
		void AddSourceEffectToPresetChain(UObject* WorldContextObject, USoundEffectSourcePresetChain* PresetChain, FSourceEffectChainEntry Entry); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74C2EBD90(relative to base address)
		void AddMasterSubmixEffect(UObject* WorldContextObject, USoundEffectSubmixPreset* SubmixEffectPreset); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74C2EBBC8(relative to base address)
	};


	// Class AudioMixer.SynthSound
	// Inherited from USoundWaveProcedural -> USoundWave -> USoundBase -> UObject
	// Size: 0x20 (0x460 - 0x440)
	class USynthSound : public USoundWaveProcedural	
	{
	public:
		TWeakObjectPtr<USynthComponent*> OwningSynthComponent; // 0x440(0x8)
		unsigned char UnknownData00_7[0x18]; // 0x448(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioMixer.SynthSound");
			return ret;
		}
	};


	// Class AudioMixer.SynthComponent
	// Inherited from USceneComponent -> UActorComponent -> UObject
	// Size: 0x660 (0x880 - 0x220)
	class USynthComponent : public USceneComponent	
	{
	public:
		bool bAutoDestroy : 1; // 0x220:0(0x1)
		bool bStopWhenOwnerDestroyed : 1; // 0x220:1(0x1)
		bool bAllowSpatialization : 1; // 0x220:2(0x1)
		bool bOverrideAttenuation : 1; // 0x220:3(0x1)
		unsigned char UnknownData00_3[0x3]; // 0x221(0x3) UNKNOWN PROPERTY
		bool bEnableBusSends : 1; // 0x224:0(0x1)
		bool bEnableBaseSubmix : 1; // 0x224:1(0x1)
		bool bEnableSubmixSends : 1; // 0x224:2(0x1)
		unsigned char UnknownData01_5[0x3]; // 0x225(0x3) UNKNOWN PROPERTY
		USoundAttenuation* AttenuationSettings; // 0x228(0x8)
		FSoundAttenuationSettings AttenuationOverrides; // 0x230(0x3D0)
		USoundConcurrency* ConcurrencySettings; // 0x600(0x8)
		TSet<USoundConcurrency*> ConcurrencySet; // 0x608(0x50)
		FSoundModulationDefaultRoutingSettings ModulationRouting; // 0x658(0x168)
		USoundClass* SoundClass; // 0x7C0(0x8)
		USoundEffectSourcePresetChain* SourceEffectChain; // 0x7C8(0x8)
		USoundSubmixBase* SoundSubmix; // 0x7D0(0x8)
		TArray<FSoundSubmixSendInfo> SoundSubmixSends; // 0x7D8(0x10)
		TArray<FSoundSourceBusSendInfo> BusSends; // 0x7E8(0x10)
		TArray<FSoundSourceBusSendInfo> PreEffectBusSends; // 0x7F8(0x10)
		bool bIsUISound : 1; // 0x808:0(0x1)
		bool bIsPreviewSound : 1; // 0x808:1(0x1)
		unsigned char UnknownData02_5[0x3]; // 0x809(0x3) UNKNOWN PROPERTY
		int32_t EnvelopeFollowerAttackTime; // 0x80C(0x4)
		int32_t EnvelopeFollowerReleaseTime; // 0x810(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x814(0x4) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnAudioEnvelopeValue; // 0x818(0x10)
		unsigned char UnknownData04_6[0x20]; // 0x828(0x20) UNKNOWN PROPERTY
		USynthSound* Synth; // 0x848(0x8)
		UAudioComponent* AudioComponent; // 0x850(0x8)
		unsigned char UnknownData05_7[0x28]; // 0x858(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioMixer.SynthComponent");
			return ret;
		}

		void Stop(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2FEB5C(relative to base address)
		void Start(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7483F8674(relative to base address)
		void SetVolumeMultiplier(float VolumeMultiplier); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2FE7E8(relative to base address)
		void SetSubmixSend(USoundSubmixBase* Submix, float SendLevel); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2FE23C(relative to base address)
		void SetSourceBusSendPreEffect(USoundSourceBus* SoundSourceBus, float SourceBusSendLevel); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2FE174(relative to base address)
		void SetSourceBusSendPostEffect(USoundSourceBus* SoundSourceBus, float SourceBusSendLevel); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2FE0AC(relative to base address)
		void SetOutputToBusOnly(bool bInOutputToBusOnly); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2FD904(relative to base address)
		void SetModulationRouting(TSet<USoundModulatorBase*>& Modulators, EModulationDestination Destination, EModulationRouting RoutingMethod); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C2FD67C(relative to base address)
		void SetLowPassFilterFrequency(float InLowPassFilterFrequency); // Flags: RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2FD384(relative to base address)
		void SetLowPassFilterEnabled(bool InLowPassFilterEnabled); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2FD300(relative to base address)
		void SetAudioBusSendPreEffect(UAudioBus* AudioBus, float AudioBusSendLevel); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2FCEEC(relative to base address)
		void SetAudioBusSendPostEffect(UAudioBus* AudioBus, float AudioBusSendLevel); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2FCE24(relative to base address)
		bool IsPlaying(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2FC584(relative to base address)
		TSet GetModulators(EModulationDestination Destination); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF74C2FBFA8(relative to base address)
		void FadeOut(float FadeOutDuration, float FadeVolumeLevel, EAudioFaderCurve FadeCurve); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|Const, Memory Exec: 0x7FF74C2FB3C4(relative to base address)
		void FadeIn(float FadeInDuration, float FadeVolumeLevel, float StartTime, EAudioFaderCurve FadeCurve); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|Const, Memory Exec: 0x7FF74C2FB27C(relative to base address)
		void AdjustVolume(float AdjustVolumeDuration, float AdjustVolumeLevel, EAudioFaderCurve FadeCurve); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|Const, Memory Exec: 0x7FF74C2FAA00(relative to base address)
	};


	// Class AudioMixer.SubmixEffectDynamicsProcessorPreset
	// Inherited from USoundEffectSubmixPreset -> USoundEffectPreset -> UObject
	// Size: 0xE8 (0x150 - 0x68)
	class USubmixEffectDynamicsProcessorPreset : public USoundEffectSubmixPreset	
	{
	public:
		unsigned char UnknownData00_3[0x88]; // 0x68(0x88) UNKNOWN PROPERTY
		FSubmixEffectDynamicsProcessorSettings Settings; // 0xF0(0x60)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioMixer.SubmixEffectDynamicsProcessorPreset");
			return ret;
		}

		void SetSettings(FSubmixEffectDynamicsProcessorSettings& Settings); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C2FDC74(relative to base address)
		void SetExternalSubmix(USoundSubmix* Submix); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2FD228(relative to base address)
		void SetAudioBus(UAudioBus* AudioBus); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2FCD44(relative to base address)
		void ResetKey(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2FC92C(relative to base address)
	};


	// Class AudioMixer.SubmixEffectSubmixEQPreset
	// Inherited from USoundEffectSubmixPreset -> USoundEffectPreset -> UObject
	// Size: 0x48 (0xB0 - 0x68)
	class USubmixEffectSubmixEQPreset : public USoundEffectSubmixPreset	
	{
	public:
		unsigned char UnknownData00_3[0x38]; // 0x68(0x38) UNKNOWN PROPERTY
		FSubmixEffectSubmixEQSettings Settings; // 0xA0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioMixer.SubmixEffectSubmixEQPreset");
			return ret;
		}

		void SetSettings(FSubmixEffectSubmixEQSettings& InSettings); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C2FDE4C(relative to base address)
	};


	// Class AudioMixer.SubmixEffectReverbPreset
	// Inherited from USoundEffectSubmixPreset -> USoundEffectPreset -> UObject
	// Size: 0xA8 (0x110 - 0x68)
	class USubmixEffectReverbPreset : public USoundEffectSubmixPreset	
	{
	public:
		unsigned char UnknownData00_3[0x68]; // 0x68(0x68) UNKNOWN PROPERTY
		FSubmixEffectReverbSettings Settings; // 0xD0(0x40)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioMixer.SubmixEffectReverbPreset");
			return ret;
		}

		void SetSettingsWithReverbEffect(UReverbEffect* InReverbEffect, float WetLevel, float DryLevel); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2FDF18(relative to base address)
		void SetSettings(FSubmixEffectReverbSettings& InSettings); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C2FDD6C(relative to base address)
	};


	// Class AudioMixer.AudioGenerator
	// Inherited from UObject
	// Size: 0x80 (0xA8 - 0x28)
	class UAudioGenerator : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0x80]; // 0x28(0x80) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioMixer.AudioGenerator");
			return ret;
		}
	};


	// Class AudioMixer.QuartzClockHandle
	// Inherited from UObject
	// Size: 0x1E0 (0x208 - 0x28)
	class UQuartzClockHandle : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0x1E0]; // 0x28(0x1E0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioMixer.QuartzClockHandle");
			return ret;
		}

		void UnsubscribeFromTimeDivision(UObject* WorldContextObject, EQuartzCommandQuantization InQuantizationBoundary, UQuartzClockHandle* ClockHandle); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C2FF028(relative to base address)
		void UnsubscribeFromAllTimeDivisions(UObject* WorldContextObject, UQuartzClockHandle* ClockHandle); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C2FEF4C(relative to base address)
		void SubscribeToQuantizationEvent(UObject* WorldContextObject, EQuartzCommandQuantization InQuantizationBoundary, FDelegateProperty& OnQuantizationEvent, UQuartzClockHandle* ClockHandle); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C2FEDCC(relative to base address)
		void SubscribeToAllQuantizationEvents(UObject* WorldContextObject, FDelegateProperty& OnQuantizationEvent, UQuartzClockHandle* ClockHandle); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C2FEC90(relative to base address)
		void StopClock(UObject* WorldContextObject, bool CancelPendingEvents, UQuartzClockHandle* ClockHandle); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C2FEB70(relative to base address)
		void StartOtherClock(UObject* WorldContextObject, FName OtherClockName, FQuartzQuantizationBoundary InQuantizationBoundary, FDelegateProperty& InDelegate); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C2FE938(relative to base address)
		void StartClock(UObject* WorldContextObject, UQuartzClockHandle* ClockHandle); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C2FE868(relative to base address)
		void SetTicksPerSecond(UObject* WorldContextObject, FQuartzQuantizationBoundary& QuantizationBoundary, FDelegateProperty& Delegate, UQuartzClockHandle* ClockHandle, float TicksPerSecond); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C2FE574(relative to base address)
		void SetThirtySecondNotesPerMinute(UObject* WorldContextObject, FQuartzQuantizationBoundary& QuantizationBoundary, FDelegateProperty& Delegate, UQuartzClockHandle* ClockHandle, float ThirtySecondsNotesPerMinute); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C2FE300(relative to base address)
		void SetSecondsPerTick(UObject* WorldContextObject, FQuartzQuantizationBoundary& QuantizationBoundary, FDelegateProperty& Delegate, UQuartzClockHandle* ClockHandle, float SecondsPerTick); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C2FDA00(relative to base address)
		void SetMillisecondsPerTick(UObject* WorldContextObject, FQuartzQuantizationBoundary& QuantizationBoundary, FDelegateProperty& Delegate, UQuartzClockHandle* ClockHandle, float MillisecondsPerTick); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C2FD408(relative to base address)
		void SetBeatsPerMinute(UObject* WorldContextObject, FQuartzQuantizationBoundary& QuantizationBoundary, FDelegateProperty& Delegate, UQuartzClockHandle* ClockHandle, float BeatsPerMinute); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C2FCFB4(relative to base address)
		void ResumeClock(UObject* WorldContextObject, UQuartzClockHandle* ClockHandle); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C2FCC68(relative to base address)
		void ResetTransportQuantized(UObject* WorldContextObject, FQuartzQuantizationBoundary InQuantizationBoundary, FDelegateProperty& InDelegate, UQuartzClockHandle* ClockHandle); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C2FCA24(relative to base address)
		void ResetTransport(UObject* WorldContextObject, FDelegateProperty& InDelegate); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C2FC940(relative to base address)
		void PauseClock(UObject* WorldContextObject, UQuartzClockHandle* ClockHandle); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C2FC850(relative to base address)
		void NotifyOnQuantizationBoundary(UObject* WorldContextObject, FQuartzQuantizationBoundary InQuantizationBoundary, FDelegateProperty& InDelegate, float InMsOffset); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C2FC5A8(relative to base address)
		bool IsClockRunning(UObject* WorldContextObject); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2FC410(relative to base address)
		float GetTicksPerSecond(UObject* WorldContextObject); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2FC384(relative to base address)
		float GetThirtySecondNotesPerMinute(UObject* WorldContextObject); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2FC2F8(relative to base address)
		float GetSecondsPerTick(UObject* WorldContextObject); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2FC26C(relative to base address)
		float GetMillisecondsPerTick(UObject* WorldContextObject); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2FBF1C(relative to base address)
		float GetEstimatedRunTime(UObject* WorldContextObject); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2FBCA8(relative to base address)
		float GetDurationOfQuantizationTypeInSeconds(UObject* WorldContextObject, EQuartzCommandQuantization& QuantizationType, float Multiplier); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C2FB868(relative to base address)
		FQuartzTransportTimeStamp GetCurrentTimestamp(UObject* WorldContextObject); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2FB7D0(relative to base address)
		float GetBeatsPerMinute(UObject* WorldContextObject); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2FB640(relative to base address)
		float GetBeatProgressPercent(EQuartzCommandQuantization QuantizationBoundary, float PhaseOffset, float MsOffset); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2FB544(relative to base address)
	};


	// Class AudioMixer.QuartzSubsystem
	// Inherited from UTickableWorldSubsystem -> UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x28 (0x68 - 0x40)
	class UQuartzSubsystem : public UTickableWorldSubsystem	
	{
	public:
		unsigned char UnknownData00_1[0x28]; // 0x40(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioMixer.QuartzSubsystem");
			return ret;
		}

		void SetQuartzSubsystemTickableWhenPaused(bool bInTickableWhenPaused); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2FD984(relative to base address)
		bool IsQuartzEnabled(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF749859FE0(relative to base address)
		bool IsClockRunning(UObject* WorldContextObject, FName ClockName); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2FC49C(relative to base address)
		float GetRoundTripMinLatency(UObject* WorldContextObject); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2FC1C4(relative to base address)
		float GetRoundTripMaxLatency(UObject* WorldContextObject); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2FC134(relative to base address)
		float GetRoundTripAverageLatency(UObject* WorldContextObject); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2FC0A4(relative to base address)
		UQuartzClockHandle GetHandleForClock(UObject* WorldContextObject, FName ClockName); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2FBE58(relative to base address)
		float GetGameThreadToAudioRenderThreadMinLatency(UObject* WorldContextObject); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2FBDC8(relative to base address)
		float GetGameThreadToAudioRenderThreadMaxLatency(UObject* WorldContextObject); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2FBDC8(relative to base address)
		float GetGameThreadToAudioRenderThreadAverageLatency(UObject* WorldContextObject); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2FBD38(relative to base address)
		float GetEstimatedClockRunTime(UObject* WorldContextObject, FName& InClockName); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C2FBBDC(relative to base address)
		float GetDurationOfQuantizationTypeInSeconds(UObject* WorldContextObject, FName ClockName, EQuartzCommandQuantization& QuantizationType, float Multiplier); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C2FBA04(relative to base address)
		FQuartzTransportTimeStamp GetCurrentClockTimestamp(UObject* WorldContextObject, FName& InClockName); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C2FB6CC(relative to base address)
		float GetAudioRenderThreadToGameThreadMinLatency(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2FB518(relative to base address)
		float GetAudioRenderThreadToGameThreadMaxLatency(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2FB4F0(relative to base address)
		float GetAudioRenderThreadToGameThreadAverageLatency(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2FB4C4(relative to base address)
		bool DoesClockExist(UObject* WorldContextObject, FName ClockName); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2FB194(relative to base address)
		void DeleteClockByName(UObject* WorldContextObject, FName ClockName); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2FB0D0(relative to base address)
		void DeleteClockByHandle(UObject* WorldContextObject, UQuartzClockHandle* InClockHandle); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C2FAFF0(relative to base address)
		UQuartzClockHandle CreateNewClock(UObject* WorldContextObject, FName ClockName, FQuartzClockSettings InSettings, bool bOverrideSettingsIfClockExists, bool bUseAudioEngineClockManager); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C2FAAFC(relative to base address)
	};

}
