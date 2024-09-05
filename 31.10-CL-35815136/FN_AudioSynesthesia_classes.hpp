#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: AudioSynesthesia
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class AudioSynesthesia.AudioSynesthesiaSettings
	// Inherited from UAudioAnalyzerSettings -> UAudioAnalyzerAssetBase -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UAudioSynesthesiaSettings : public UAudioAnalyzerSettings	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioSynesthesia.AudioSynesthesiaSettings");
			return ret;
		}
	};


	// Class AudioSynesthesia.AudioSynesthesiaNRTSettings
	// Inherited from UAudioAnalyzerNRTSettings -> UAudioAnalyzerAssetBase -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UAudioSynesthesiaNRTSettings : public UAudioAnalyzerNRTSettings	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioSynesthesia.AudioSynesthesiaNRTSettings");
			return ret;
		}
	};


	// Class AudioSynesthesia.AudioSynesthesiaNRT
	// Inherited from UAudioAnalyzerNRT -> UAudioAnalyzerAssetBase -> UObject
	// Size: 0x0 (0x78 - 0x78)
	class UAudioSynesthesiaNRT : public UAudioAnalyzerNRT	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioSynesthesia.AudioSynesthesiaNRT");
			return ret;
		}
	};


	// Class AudioSynesthesia.ConstantQSettings
	// Inherited from UAudioSynesthesiaSettings -> UAudioAnalyzerSettings -> UAudioAnalyzerAssetBase -> UObject
	// Size: 0x20 (0x48 - 0x28)
	class UConstantQSettings : public UAudioSynesthesiaSettings	
	{
	public:
		float StartingFrequencyHz; // 0x28(0x4)
		int32_t NumBands; // 0x2C(0x4)
		float NumBandsPerOctave; // 0x30(0x4)
		float AnalysisPeriodInSeconds; // 0x34(0x4)
		bool bDownmixToMono; // 0x38(0x1)
		EConstantQFFTSizeEnum FFTSize; // 0x39(0x1)
		EFFTWindowType WindowType; // 0x3A(0x1)
		EAudioSpectrumType SpectrumType; // 0x3B(0x1)
		float BandWidthStretch; // 0x3C(0x4)
		EConstantQNormalizationEnum CQTNormalization; // 0x40(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x41(0x3) UNKNOWN PROPERTY
		float NoiseFloorDb; // 0x44(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioSynesthesia.ConstantQSettings");
			return ret;
		}
	};


	// Class AudioSynesthesia.ConstantQAnalyzer
	// Inherited from UAudioAnalyzer -> UObject
	// Size: 0x58 (0xF8 - 0xA0)
	class UConstantQAnalyzer : public UAudioAnalyzer	
	{
	public:
		UConstantQSettings* Settings; // 0xA0(0x8)
		FMulticastInlineDelegate OnConstantQResults; // 0xA8(0x10)
		unsigned char UnknownData00_6[0x18]; // 0xB8(0x18) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnLatestConstantQResults; // 0xD0(0x10)
		unsigned char UnknownData01_7[0x18]; // 0xE0(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioSynesthesia.ConstantQAnalyzer");
			return ret;
		}

		int32_t GetNumCenterFrequencies(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DA69C5C(relative to base address)
		void GetCenterFrequencies(TArray<float>& OutCenterFrequencies); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DA68F04(relative to base address)
	};


	// Class AudioSynesthesia.ConstantQNRTSettings
	// Inherited from UAudioSynesthesiaNRTSettings -> UAudioAnalyzerNRTSettings -> UAudioAnalyzerAssetBase -> UObject
	// Size: 0x20 (0x48 - 0x28)
	class UConstantQNRTSettings : public UAudioSynesthesiaNRTSettings	
	{
	public:
		float StartingFrequency; // 0x28(0x4)
		int32_t NumBands; // 0x2C(0x4)
		float NumBandsPerOctave; // 0x30(0x4)
		float AnalysisPeriod; // 0x34(0x4)
		bool bDownmixToMono; // 0x38(0x1)
		EConstantQFFTSizeEnum FFTSize; // 0x39(0x1)
		EFFTWindowType WindowType; // 0x3A(0x1)
		EAudioSpectrumType SpectrumType; // 0x3B(0x1)
		float BandWidthStretch; // 0x3C(0x4)
		EConstantQNormalizationEnum CQTNormalization; // 0x40(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x41(0x3) UNKNOWN PROPERTY
		float NoiseFloorDb; // 0x44(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioSynesthesia.ConstantQNRTSettings");
			return ret;
		}
	};


	// Class AudioSynesthesia.ConstantQNRT
	// Inherited from UAudioSynesthesiaNRT -> UAudioAnalyzerNRT -> UAudioAnalyzerAssetBase -> UObject
	// Size: 0x8 (0x80 - 0x78)
	class UConstantQNRT : public UAudioSynesthesiaNRT	
	{
	public:
		UConstantQNRTSettings* Settings; // 0x78(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioSynesthesia.ConstantQNRT");
			return ret;
		}

		void GetNormalizedChannelConstantQAtTime(float InSeconds, int32_t InChannel, TArray<float>& OutConstantQ); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DA696D4(relative to base address)
		void GetChannelConstantQAtTime(float InSeconds, int32_t InChannel, TArray<float>& OutConstantQ); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DA6914C(relative to base address)
	};


	// Class AudioSynesthesia.LoudnessSettings
	// Inherited from UAudioSynesthesiaSettings -> UAudioAnalyzerSettings -> UAudioAnalyzerAssetBase -> UObject
	// Size: 0x18 (0x40 - 0x28)
	class ULoudnessSettings : public UAudioSynesthesiaSettings	
	{
	public:
		float AnalysisPeriod; // 0x28(0x4)
		float MinimumFrequency; // 0x2C(0x4)
		float MaximumFrequency; // 0x30(0x4)
		ELoudnessCurveTypeEnum CurveType; // 0x34(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x35(0x3) UNKNOWN PROPERTY
		float NoiseFloorDb; // 0x38(0x4)
		float ExpectedMaxLoudness; // 0x3C(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioSynesthesia.LoudnessSettings");
			return ret;
		}
	};


	// Class AudioSynesthesia.LoudnessAnalyzer
	// Inherited from UAudioAnalyzer -> UObject
	// Size: 0x48 (0xE8 - 0xA0)
	class ULoudnessAnalyzer : public UAudioAnalyzer	
	{
	public:
		ULoudnessSettings* Settings; // 0xA0(0x8)
		FMulticastInlineDelegate OnOverallLoudnessResults; // 0xA8(0x10)
		FMulticastInlineDelegate OnPerChannelLoudnessResults; // 0xB8(0x10)
		FMulticastInlineDelegate OnLatestOverallLoudnessResults; // 0xC8(0x10)
		FMulticastInlineDelegate OnLatestPerChannelLoudnessResults; // 0xD8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioSynesthesia.LoudnessAnalyzer");
			return ret;
		}
	};


	// Class AudioSynesthesia.LoudnessNRTSettings
	// Inherited from UAudioSynesthesiaNRTSettings -> UAudioAnalyzerNRTSettings -> UAudioAnalyzerAssetBase -> UObject
	// Size: 0x18 (0x40 - 0x28)
	class ULoudnessNRTSettings : public UAudioSynesthesiaNRTSettings	
	{
	public:
		float AnalysisPeriod; // 0x28(0x4)
		float MinimumFrequency; // 0x2C(0x4)
		float MaximumFrequency; // 0x30(0x4)
		ELoudnessNRTCurveTypeEnum CurveType; // 0x34(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x35(0x3) UNKNOWN PROPERTY
		float NoiseFloorDb; // 0x38(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioSynesthesia.LoudnessNRTSettings");
			return ret;
		}
	};


	// Class AudioSynesthesia.LoudnessNRT
	// Inherited from UAudioSynesthesiaNRT -> UAudioAnalyzerNRT -> UAudioAnalyzerAssetBase -> UObject
	// Size: 0x8 (0x80 - 0x78)
	class ULoudnessNRT : public UAudioSynesthesiaNRT	
	{
	public:
		ULoudnessNRTSettings* Settings; // 0x78(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioSynesthesia.LoudnessNRT");
			return ret;
		}

		void GetNormalizedLoudnessAtTime(float InSeconds, float& OutLoudness); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DA69B88(relative to base address)
		void GetNormalizedChannelLoudnessAtTime(float InSeconds, int32_t InChannel, float& OutLoudness); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DA69838(relative to base address)
		void GetLoudnessAtTime(float InSeconds, float& OutLoudness); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DA69600(relative to base address)
		void GetChannelLoudnessAtTime(float InSeconds, int32_t InChannel, float& OutLoudness); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DA692B0(relative to base address)
	};


	// Class AudioSynesthesia.MeterSettings
	// Inherited from UAudioSynesthesiaSettings -> UAudioAnalyzerSettings -> UAudioAnalyzerAssetBase -> UObject
	// Size: 0x18 (0x40 - 0x28)
	class UMeterSettings : public UAudioSynesthesiaSettings	
	{
	public:
		float AnalysisPeriod; // 0x28(0x4)
		EMeterPeakType PeakMode; // 0x2C(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x2D(0x3) UNKNOWN PROPERTY
		int32_t MeterAttackTime; // 0x30(0x4)
		int32_t MeterReleaseTime; // 0x34(0x4)
		int32_t PeakHoldTime; // 0x38(0x4)
		float ClippingThreshold; // 0x3C(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioSynesthesia.MeterSettings");
			return ret;
		}
	};


	// Class AudioSynesthesia.MeterAnalyzer
	// Inherited from UAudioAnalyzer -> UObject
	// Size: 0xA8 (0x148 - 0xA0)
	class UMeterAnalyzer : public UAudioAnalyzer	
	{
	public:
		UMeterSettings* Settings; // 0xA0(0x8)
		FMulticastInlineDelegate OnOverallMeterResults; // 0xA8(0x10)
		unsigned char UnknownData00_6[0x18]; // 0xB8(0x18) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnPerChannelMeterResults; // 0xD0(0x10)
		unsigned char UnknownData01_6[0x18]; // 0xE0(0x18) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnLatestOverallMeterResults; // 0xF8(0x10)
		unsigned char UnknownData02_6[0x18]; // 0x108(0x18) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnLatestPerChannelMeterResults; // 0x120(0x10)
		unsigned char UnknownData03_7[0x18]; // 0x130(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioSynesthesia.MeterAnalyzer");
			return ret;
		}
	};


	// Class AudioSynesthesia.OnsetNRTSettings
	// Inherited from UAudioSynesthesiaNRTSettings -> UAudioAnalyzerNRTSettings -> UAudioAnalyzerAssetBase -> UObject
	// Size: 0x18 (0x40 - 0x28)
	class UOnsetNRTSettings : public UAudioSynesthesiaNRTSettings	
	{
	public:
		bool bDownmixToMono; // 0x28(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x29(0x3) UNKNOWN PROPERTY
		float GranularityInSeconds; // 0x2C(0x4)
		float Sensitivity; // 0x30(0x4)
		float MinimumFrequency; // 0x34(0x4)
		float MaximumFrequency; // 0x38(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioSynesthesia.OnsetNRTSettings");
			return ret;
		}
	};


	// Class AudioSynesthesia.OnsetNRT
	// Inherited from UAudioSynesthesiaNRT -> UAudioAnalyzerNRT -> UAudioAnalyzerAssetBase -> UObject
	// Size: 0x8 (0x80 - 0x78)
	class UOnsetNRT : public UAudioSynesthesiaNRT	
	{
	public:
		UOnsetNRTSettings* Settings; // 0x78(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioSynesthesia.OnsetNRT");
			return ret;
		}

		void GetNormalizedChannelOnsetsBetweenTimes(float InStartSeconds, float InEndSeconds, int32_t InChannel, TArray<float>& OutOnsetTimestamps, TArray<float>& OutOnsetStrengths); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DA6993C(relative to base address)
		void GetChannelOnsetsBetweenTimes(float InStartSeconds, float InEndSeconds, int32_t InChannel, TArray<float>& OutOnsetTimestamps, TArray<float>& OutOnsetStrengths); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DA693B4(relative to base address)
	};


	// Class AudioSynesthesia.SynesthesiaSpectrumAnalysisSettings
	// Inherited from UAudioSynesthesiaSettings -> UAudioAnalyzerSettings -> UAudioAnalyzerAssetBase -> UObject
	// Size: 0x8 (0x30 - 0x28)
	class USynesthesiaSpectrumAnalysisSettings : public UAudioSynesthesiaSettings	
	{
	public:
		float AnalysisPeriod; // 0x28(0x4)
		EFFTSize FFTSize; // 0x2C(0x1)
		EAudioSpectrumType SpectrumType; // 0x2D(0x1)
		EFFTWindowType WindowType; // 0x2E(0x1)
		bool bDownmixToMono; // 0x2F(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioSynesthesia.SynesthesiaSpectrumAnalysisSettings");
			return ret;
		}
	};


	// Class AudioSynesthesia.SynesthesiaSpectrumAnalyzer
	// Inherited from UAudioAnalyzer -> UObject
	// Size: 0x58 (0xF8 - 0xA0)
	class USynesthesiaSpectrumAnalyzer : public UAudioAnalyzer	
	{
	public:
		USynesthesiaSpectrumAnalysisSettings* Settings; // 0xA0(0x8)
		FMulticastInlineDelegate OnSpectrumResults; // 0xA8(0x10)
		unsigned char UnknownData00_6[0x18]; // 0xB8(0x18) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnLatestSpectrumResults; // 0xD0(0x10)
		unsigned char UnknownData01_7[0x18]; // 0xE0(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioSynesthesia.SynesthesiaSpectrumAnalyzer");
			return ret;
		}

		int32_t GetNumCenterFrequencies(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DA69C78(relative to base address)
		void GetCenterFrequencies(float InSampleRate, TArray<float>& OutCenterFrequencies); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74DA69028(relative to base address)
	};

}
