#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: AudioMixer
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class AudioMixer.AudioBusSubsystem
	// Inherited from UAudioEngineSubsystem -> UDynamicSubsystem -> USubsystem -> UObject
	// Size: 0xD8 (0x108 - 0x30)
	class UAudioBusSubsystem : public UAudioEngineSubsystem	
	{
	public:
		unsigned char UnknownData01_1[0xD8]; // 0x30(0xD8) UNKNOWN PROPERTY

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
		unsigned char UnknownData07_3[0x8]; // 0x30(0x8) UNKNOWN PROPERTY
		FMulticastInlineDelegate DefaultCaptureDeviceChanged; // 0x38(0x10)
		unsigned char UnknownData08_6[0x18]; // 0x48(0x18) UNKNOWN PROPERTY
		FMulticastInlineDelegate DefaultRenderDeviceChanged; // 0x60(0x10)
		unsigned char UnknownData09_6[0x18]; // 0x70(0x18) UNKNOWN PROPERTY
		FMulticastInlineDelegate DeviceAdded; // 0x88(0x10)
		unsigned char UnknownData10_6[0x18]; // 0x98(0x18) UNKNOWN PROPERTY
		FMulticastInlineDelegate DeviceRemoved; // 0xB0(0x10)
		unsigned char UnknownData11_6[0x18]; // 0xC0(0x18) UNKNOWN PROPERTY
		FMulticastInlineDelegate DeviceStateChanged; // 0xD8(0x10)
		unsigned char UnknownData12_6[0x18]; // 0xE8(0x18) UNKNOWN PROPERTY
		FMulticastInlineDelegate DeviceSwitched; // 0x100(0x10)
		unsigned char UnknownData13_7[0x18]; // 0x110(0x18) UNKNOWN PROPERTY

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

		void UnregisterAudioBusFromSubmix(UObject WorldContextObject, USoundSubmix SoundSubmix, UAudioBus AudioBus); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF4144CE7D8
		float TrimAudioCache(float InMegabytesToFree); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF4144CE6F8
		void SwapAudioOutputDevice(UObject WorldContextObject, FString NewDeviceId, FDelegateProperty& OnCompletedDeviceSwap); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4144CE618
		USoundWave StopRecordingOutput(UObject WorldContextObject, EAudioRecordingExportType ExportType, FString Name, FString Path, USoundSubmix SubmixToRecord, USoundWave ExistingSoundWaveToOverwrite); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF4144CE538
		void StopAudioBus(UObject WorldContextObject, UAudioBus AudioBus); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF4144CE458
		void StopAnalyzingOutput(UObject WorldContextObject, USoundSubmix SubmixToStopAnalyzing); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF4144CE378
		void StartRecordingOutput(UObject WorldContextObject, float ExpectedDuration, USoundSubmix SubmixToRecord); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF4144CE298
		void StartAudioBus(UObject WorldContextObject, UAudioBus AudioBus); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF4144CE1B8
		void StartAnalyzingOutput(UObject WorldContextObject, USoundSubmix SubmixToAnalyze, EFFTSize FFTSize, EFFTPeakInterpolationMethod InterpolationMethod, EFFTWindowType WindowType, float HopSize, EAudioSpectrumType SpectrumType); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF4144CE0D8
		void SetSubmixEffectChainOverride(UObject WorldContextObject, USoundSubmix SoundSubmix, TArray SubmixEffectPresetChain, float FadeTimeSec); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF4144CDFF8
		void SetBypassSourceEffectChainEntry(UObject WorldContextObject, USoundEffectSourcePresetChain PresetChain, int32_t EntryIndex, bool bBypassed); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF4144CDF18
		void ResumeRecordingOutput(UObject WorldContextObject, USoundSubmix SubmixToPause); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF4144CDE38
		void ReplaceSubmixEffect(UObject WorldContextObject, USoundSubmix InSoundSubmix, int32_t SubmixChainIndex, USoundEffectSubmixPreset SubmixEffectPreset); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF4144CDD58
		void ReplaceSoundEffectSubmix(UObject WorldContextObject, USoundSubmix InSoundSubmix, int32_t SubmixChainIndex, USoundEffectSubmixPreset SubmixEffectPreset); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF4144CDC78
		void RemoveSubmixEffectPresetAtIndex(UObject WorldContextObject, USoundSubmix SoundSubmix, int32_t SubmixChainIndex); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF4144CDB98
		void RemoveSubmixEffectPreset(UObject WorldContextObject, USoundSubmix SoundSubmix, USoundEffectSubmixPreset SubmixEffectPreset); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF4144CDAB8
		void RemoveSubmixEffectAtIndex(UObject WorldContextObject, USoundSubmix SoundSubmix, int32_t SubmixChainIndex); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF4144CD9D8
		void RemoveSubmixEffect(UObject WorldContextObject, USoundSubmix SoundSubmix, USoundEffectSubmixPreset SubmixEffectPreset); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF4144CD8F8
		void RemoveSourceEffectFromPresetChain(UObject WorldContextObject, USoundEffectSourcePresetChain PresetChain, int32_t EntryIndex); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF4144CD818
		void RemoveMasterSubmixEffect(UObject WorldContextObject, USoundEffectSubmixPreset SubmixEffectPreset); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF4144CD738
		void RegisterAudioBusToSubmix(UObject WorldContextObject, USoundSubmix SoundSubmix, UAudioBus AudioBus); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF4144CD658
		void PrimeSoundForPlayback(USoundWave SoundWave, FDelegateProperty OnLoadCompletion); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF4144CD578
		void PrimeSoundCueForPlayback(USoundCue SoundCue); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF4144CD498
		void PauseRecordingOutput(UObject WorldContextObject, USoundSubmix SubmixToPause); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF4144CD3B8
		TArray MakePresetSpectralAnalysisBandSettings(EAudioSpectrumBandPresetType InBandPresetType, int32_t InNumBands, int32_t InAttackTimeMsec, int32_t InReleaseTimeMsec); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF4144CD2D8
		TArray MakeMusicalSpectralAnalysisBandSettings(int32_t InNumSemitones, EMusicalNoteName InStartingMusicalNote, int32_t InStartingOctave, int32_t InAttackTimeMsec, int32_t InReleaseTimeMsec); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF4144CD1F8
		TArray MakeFullSpectrumSpectralAnalysisBandSettings(int32_t InNumBands, float InMinimumFrequency, float InMaximumFrequency, int32_t InAttackTimeMsec, int32_t InReleaseTimeMsec); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF4144CD118
		bool IsAudioBusActive(UObject WorldContextObject, UAudioBus AudioBus); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF4144CD038
		void GetPhaseForFrequencies(UObject WorldContextObject, TArray& Frequencies, TArray& Phases, USoundSubmix SubmixToAnalyze); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4144CCF58
		int32_t GetNumberOfEntriesInSourceEffectChain(UObject WorldContextObject, USoundEffectSourcePresetChain PresetChain); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF4144CCE78
		void GetMagnitudeForFrequencies(UObject WorldContextObject, TArray& Frequencies, TArray& Magnitudes, USoundSubmix SubmixToAnalyze); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4144CCD98
		void GetCurrentAudioOutputDeviceName(UObject WorldContextObject, FDelegateProperty& OnObtainCurrentDeviceEvent); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4144CCCB8
		void GetAvailableAudioOutputDevices(UObject WorldContextObject, FDelegateProperty& OnObtainDevicesEvent); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF4144CCBD8
		FString Conv_AudioOutputDeviceInfoToString(FAudioOutputDeviceInfo& Info); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF4144CCAF8
		void ClearSubmixEffects(UObject WorldContextObject, USoundSubmix SoundSubmix); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF4144CCA18
		void ClearSubmixEffectChainOverride(UObject WorldContextObject, USoundSubmix SoundSubmix, float FadeTimeSec); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF4144CC938
		void ClearMasterSubmixEffects(UObject WorldContextObject); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF4144CC858
		int32_t AddSubmixEffect(UObject WorldContextObject, USoundSubmix SoundSubmix, USoundEffectSubmixPreset SubmixEffectPreset); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF4144CC778
		void AddSourceEffectToPresetChain(UObject WorldContextObject, USoundEffectSourcePresetChain PresetChain, FSourceEffectChainEntry Entry); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF4144CC698
		void AddMasterSubmixEffect(UObject WorldContextObject, USoundEffectSubmixPreset SubmixEffectPreset); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable 0x7FF4144CC5B8
	};


	// Class AudioMixer.SynthSound
	// Inherited from USoundWaveProcedural -> USoundWave -> USoundBase -> UObject
	// Size: 0x20 (0x460 - 0x440)
	class USynthSound : public USoundWaveProcedural	
	{
	public:
		TWeakObjectPtr OwningSynthComponent; // 0x440(0x8)
		unsigned char UnknownData01_7[0x18]; // 0x448(0x18) UNKNOWN PROPERTY

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
		unsigned char UnknownData06_3[0x3]; // 0x221(0x3) UNKNOWN PROPERTY
		bool bEnableBusSends : 1; // 0x224:0(0x1)
		bool bEnableBaseSubmix : 1; // 0x224:1(0x1)
		bool bEnableSubmixSends : 1; // 0x224:2(0x1)
		unsigned char UnknownData07_5[0x3]; // 0x225(0x3) UNKNOWN PROPERTY
		USoundAttenuation AttenuationSettings; // 0x228(0x8)
		FSoundAttenuationSettings AttenuationOverrides; // 0x230(0x3D0)
		USoundConcurrency ConcurrencySettings; // 0x600(0x8)
		TSet ConcurrencySet; // 0x608(0x50)
		FSoundModulationDefaultRoutingSettings ModulationRouting; // 0x658(0x168)
		USoundClass SoundClass; // 0x7C0(0x8)
		USoundEffectSourcePresetChain SourceEffectChain; // 0x7C8(0x8)
		USoundSubmixBase SoundSubmix; // 0x7D0(0x8)
		TArray SoundSubmixSends; // 0x7D8(0x10)
		TArray BusSends; // 0x7E8(0x10)
		TArray PreEffectBusSends; // 0x7F8(0x10)
		bool bIsUISound : 1; // 0x808:0(0x1)
		bool bIsPreviewSound : 1; // 0x808:1(0x1)
		unsigned char UnknownData08_5[0x3]; // 0x809(0x3) UNKNOWN PROPERTY
		int32_t EnvelopeFollowerAttackTime; // 0x80C(0x4)
		int32_t EnvelopeFollowerReleaseTime; // 0x810(0x4)
		unsigned char UnknownData09_6[0x4]; // 0x814(0x4) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnAudioEnvelopeValue; // 0x818(0x10)
		unsigned char UnknownData10_6[0x20]; // 0x828(0x20) UNKNOWN PROPERTY
		USynthSound Synth; // 0x848(0x8)
		UAudioComponent AudioComponent; // 0x850(0x8)
		unsigned char UnknownData11_7[0x28]; // 0x858(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioMixer.SynthComponent");
			return ret;
		}

		void Stop(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144CFB18
		void Start(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144CFA38
		void SetVolumeMultiplier(float VolumeMultiplier); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144CF958
		void SetSubmixSend(USoundSubmixBase Submix, float SendLevel); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144CF878
		void SetSourceBusSendPreEffect(USoundSourceBus SoundSourceBus, float SourceBusSendLevel); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144CF798
		void SetSourceBusSendPostEffect(USoundSourceBus SoundSourceBus, float SourceBusSendLevel); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144CF6B8
		void SetOutputToBusOnly(bool bInOutputToBusOnly); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144CF5D8
		void SetModulationRouting(TSet& Modulators, EModulationDestination Destination, EModulationRouting RoutingMethod); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF4144CF4F8
		void SetLowPassFilterFrequency(float InLowPassFilterFrequency); // Flags: RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144CF418
		void SetLowPassFilterEnabled(bool InLowPassFilterEnabled); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144CF338
		void SetAudioBusSendPreEffect(UAudioBus AudioBus, float AudioBusSendLevel); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144CF258
		void SetAudioBusSendPostEffect(UAudioBus AudioBus, float AudioBusSendLevel); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144CF178
		bool IsPlaying(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144CF098
		TSet GetModulators(EModulationDestination Destination); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure 0x7FF4144CEFB8
		void FadeOut(float FadeOutDuration, float FadeVolumeLevel, EAudioFaderCurve FadeCurve); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|Const 0x7FF4144CEED8
		void FadeIn(float FadeInDuration, float FadeVolumeLevel, float StartTime, EAudioFaderCurve FadeCurve); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|Const 0x7FF4144CEDF8
		void AdjustVolume(float AdjustVolumeDuration, float AdjustVolumeLevel, EAudioFaderCurve FadeCurve); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|Const 0x7FF4144CED18
	};


	// Class AudioMixer.SubmixEffectDynamicsProcessorPreset
	// Inherited from USoundEffectSubmixPreset -> USoundEffectPreset -> UObject
	// Size: 0xE8 (0x150 - 0x68)
	class USubmixEffectDynamicsProcessorPreset : public USoundEffectSubmixPreset	
	{
	public:
		unsigned char UnknownData01_3[0x88]; // 0x68(0x88) UNKNOWN PROPERTY
		FSubmixEffectDynamicsProcessorSettings Settings; // 0xF0(0x60)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioMixer.SubmixEffectDynamicsProcessorPreset");
			return ret;
		}

		void SetSettings(FSubmixEffectDynamicsProcessorSettings& Settings); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF4144CFE98
		void SetExternalSubmix(USoundSubmix Submix); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144CFDB8
		void SetAudioBus(UAudioBus AudioBus); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144CFCD8
		void ResetKey(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144CFBF8
	};


	// Class AudioMixer.SubmixEffectSubmixEQPreset
	// Inherited from USoundEffectSubmixPreset -> USoundEffectPreset -> UObject
	// Size: 0x48 (0xB0 - 0x68)
	class USubmixEffectSubmixEQPreset : public USoundEffectSubmixPreset	
	{
	public:
		unsigned char UnknownData01_3[0x38]; // 0x68(0x38) UNKNOWN PROPERTY
		FSubmixEffectSubmixEQSettings Settings; // 0xA0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioMixer.SubmixEffectSubmixEQPreset");
			return ret;
		}

		void SetSettings(FSubmixEffectSubmixEQSettings& InSettings); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF4144CFF78
	};


	// Class AudioMixer.SubmixEffectReverbPreset
	// Inherited from USoundEffectSubmixPreset -> USoundEffectPreset -> UObject
	// Size: 0xA8 (0x110 - 0x68)
	class USubmixEffectReverbPreset : public USoundEffectSubmixPreset	
	{
	public:
		unsigned char UnknownData01_3[0x68]; // 0x68(0x68) UNKNOWN PROPERTY
		FSubmixEffectReverbSettings Settings; // 0xD0(0x40)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioMixer.SubmixEffectReverbPreset");
			return ret;
		}

		void SetSettingsWithReverbEffect(UReverbEffect InReverbEffect, float WetLevel, float DryLevel); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144D0138
		void SetSettings(FSubmixEffectReverbSettings& InSettings); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF4144D0058
	};


	// Class AudioMixer.AudioGenerator
	// Inherited from UObject
	// Size: 0x80 (0xA8 - 0x28)
	class UAudioGenerator : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x80]; // 0x28(0x80) UNKNOWN PROPERTY

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
		unsigned char UnknownData01_1[0x1E0]; // 0x28(0x1E0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioMixer.QuartzClockHandle");
			return ret;
		}

		void UnsubscribeFromTimeDivision(UObject WorldContextObject, EQuartzCommandQuantization InQuantizationBoundary, UQuartzClockHandle& ClockHandle); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF4144D18D8
		void UnsubscribeFromAllTimeDivisions(UObject WorldContextObject, UQuartzClockHandle& ClockHandle); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF4144D17F8
		void SubscribeToQuantizationEvent(UObject WorldContextObject, EQuartzCommandQuantization InQuantizationBoundary, FDelegateProperty& OnQuantizationEvent, UQuartzClockHandle& ClockHandle); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF4144D1718
		void SubscribeToAllQuantizationEvents(UObject WorldContextObject, FDelegateProperty& OnQuantizationEvent, UQuartzClockHandle& ClockHandle); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF4144D1638
		void StopClock(UObject WorldContextObject, bool CancelPendingEvents, UQuartzClockHandle& ClockHandle); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF4144D1558
		void StartOtherClock(UObject WorldContextObject, FName OtherClockName, FQuartzQuantizationBoundary InQuantizationBoundary, FDelegateProperty& InDelegate); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF4144D1478
		void StartClock(UObject WorldContextObject, UQuartzClockHandle& ClockHandle); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF4144D1398
		void SetTicksPerSecond(UObject WorldContextObject, FQuartzQuantizationBoundary& QuantizationBoundary, FDelegateProperty& Delegate, UQuartzClockHandle& ClockHandle, float TicksPerSecond); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF4144D12B8
		void SetThirtySecondNotesPerMinute(UObject WorldContextObject, FQuartzQuantizationBoundary& QuantizationBoundary, FDelegateProperty& Delegate, UQuartzClockHandle& ClockHandle, float ThirtySecondsNotesPerMinute); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF4144D11D8
		void SetSecondsPerTick(UObject WorldContextObject, FQuartzQuantizationBoundary& QuantizationBoundary, FDelegateProperty& Delegate, UQuartzClockHandle& ClockHandle, float SecondsPerTick); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF4144D10F8
		void SetMillisecondsPerTick(UObject WorldContextObject, FQuartzQuantizationBoundary& QuantizationBoundary, FDelegateProperty& Delegate, UQuartzClockHandle& ClockHandle, float MillisecondsPerTick); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF4144D1018
		void SetBeatsPerMinute(UObject WorldContextObject, FQuartzQuantizationBoundary& QuantizationBoundary, FDelegateProperty& Delegate, UQuartzClockHandle& ClockHandle, float BeatsPerMinute); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF4144D0F38
		void ResumeClock(UObject WorldContextObject, UQuartzClockHandle& ClockHandle); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF4144D0E58
		void ResetTransportQuantized(UObject WorldContextObject, FQuartzQuantizationBoundary InQuantizationBoundary, FDelegateProperty& InDelegate, UQuartzClockHandle& ClockHandle); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF4144D0D78
		void ResetTransport(UObject WorldContextObject, FDelegateProperty& InDelegate); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF4144D0C98
		void PauseClock(UObject WorldContextObject, UQuartzClockHandle& ClockHandle); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF4144D0BB8
		void NotifyOnQuantizationBoundary(UObject WorldContextObject, FQuartzQuantizationBoundary InQuantizationBoundary, FDelegateProperty& InDelegate, float InMsOffset); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF4144D0AD8
		bool IsClockRunning(UObject WorldContextObject); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144D09F8
		float GetTicksPerSecond(UObject WorldContextObject); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144D0918
		float GetThirtySecondNotesPerMinute(UObject WorldContextObject); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144D0838
		float GetSecondsPerTick(UObject WorldContextObject); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144D0758
		float GetMillisecondsPerTick(UObject WorldContextObject); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144D0678
		float GetEstimatedRunTime(UObject WorldContextObject); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144D0598
		float GetDurationOfQuantizationTypeInSeconds(UObject WorldContextObject, EQuartzCommandQuantization& QuantizationType, float Multiplier); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF4144D04B8
		FQuartzTransportTimeStamp GetCurrentTimestamp(UObject WorldContextObject); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144D03D8
		float GetBeatsPerMinute(UObject WorldContextObject); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144D02F8
		float GetBeatProgressPercent(EQuartzCommandQuantization QuantizationBoundary, float PhaseOffset, float MsOffset); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144D0218
	};


	// Class AudioMixer.QuartzSubsystem
	// Inherited from UTickableWorldSubsystem -> UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x28 (0x68 - 0x40)
	class UQuartzSubsystem : public UTickableWorldSubsystem	
	{
	public:
		unsigned char UnknownData01_1[0x28]; // 0x40(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioMixer.QuartzSubsystem");
			return ret;
		}

		void SetQuartzSubsystemTickableWhenPaused(bool bInTickableWhenPaused); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144D2A58
		bool IsQuartzEnabled(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144D2978
		bool IsClockRunning(UObject WorldContextObject, FName ClockName); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144D2898
		float GetRoundTripMinLatency(UObject WorldContextObject); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144D27B8
		float GetRoundTripMaxLatency(UObject WorldContextObject); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144D26D8
		float GetRoundTripAverageLatency(UObject WorldContextObject); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144D25F8
		UQuartzClockHandle GetHandleForClock(UObject WorldContextObject, FName ClockName); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144D2518
		float GetGameThreadToAudioRenderThreadMinLatency(UObject WorldContextObject); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144D2438
		float GetGameThreadToAudioRenderThreadMaxLatency(UObject WorldContextObject); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144D2358
		float GetGameThreadToAudioRenderThreadAverageLatency(UObject WorldContextObject); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144D2278
		float GetEstimatedClockRunTime(UObject WorldContextObject, FName& InClockName); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF4144D2198
		float GetDurationOfQuantizationTypeInSeconds(UObject WorldContextObject, FName ClockName, EQuartzCommandQuantization& QuantizationType, float Multiplier); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF4144D20B8
		FQuartzTransportTimeStamp GetCurrentClockTimestamp(UObject WorldContextObject, FName& InClockName); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF4144D1FD8
		float GetAudioRenderThreadToGameThreadMinLatency(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144D1EF8
		float GetAudioRenderThreadToGameThreadMaxLatency(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144D1E18
		float GetAudioRenderThreadToGameThreadAverageLatency(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144D1D38
		bool DoesClockExist(UObject WorldContextObject, FName ClockName); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144D1C58
		void DeleteClockByName(UObject WorldContextObject, FName ClockName); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144D1B78
		void DeleteClockByHandle(UObject WorldContextObject, UQuartzClockHandle& InClockHandle); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF4144D1A98
		UQuartzClockHandle CreateNewClock(UObject WorldContextObject, FName ClockName, FQuartzClockSettings InSettings, bool bOverrideSettingsIfClockExists, bool bUseAudioEngineClockManager); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144D19B8
	};

}
