#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: AudioAnalyzer
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class AudioAnalyzer.AudioAnalyzerAssetBase
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UAudioAnalyzerAssetBase : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioAnalyzer.AudioAnalyzerAssetBase");
			return ret;
		}
	};


	// Class AudioAnalyzer.AudioAnalyzerSettings
	// Inherited from UAudioAnalyzerAssetBase -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UAudioAnalyzerSettings : public UAudioAnalyzerAssetBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioAnalyzer.AudioAnalyzerSettings");
			return ret;
		}
	};


	// Class AudioAnalyzer.AudioAnalyzer
	// Inherited from UObject
	// Size: 0x78 (0xA0 - 0x28)
	class UAudioAnalyzer : public UObject	
	{
	public:
		UAudioBus AudioBus; // 0x28(0x8)
		unsigned char UnknownData02_6[0x8]; // 0x30(0x8) UNKNOWN PROPERTY
		UAudioAnalyzerSubsystem AudioAnalyzerSubsystem; // 0x38(0x8)
		unsigned char UnknownData03_7[0x60]; // 0x40(0x60) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioAnalyzer.AudioAnalyzer");
			return ret;
		}

		void StopAnalyzing(UObject WorldContextObject); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 0x7FF41463B978
		void StartAnalyzing(UObject WorldContextObject, UAudioBus AudioBusToAnalyze); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 0x7FF41463B898
	};


	// Class AudioAnalyzer.AudioAnalyzerNRTSettings
	// Inherited from UAudioAnalyzerAssetBase -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UAudioAnalyzerNRTSettings : public UAudioAnalyzerAssetBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioAnalyzer.AudioAnalyzerNRTSettings");
			return ret;
		}
	};


	// Class AudioAnalyzer.AudioAnalyzerNRT
	// Inherited from UAudioAnalyzerAssetBase -> UObject
	// Size: 0x50 (0x78 - 0x28)
	class UAudioAnalyzerNRT : public UAudioAnalyzerAssetBase	
	{
	public:
		USoundWave Sound; // 0x28(0x8)
		float DurationInSeconds; // 0x30(0x4)
		unsigned char UnknownData01_7[0x44]; // 0x34(0x44) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioAnalyzer.AudioAnalyzerNRT");
			return ret;
		}
	};


	// Class AudioAnalyzer.AudioAnalyzerSubsystem
	// Inherited from UEngineSubsystem -> UDynamicSubsystem -> USubsystem -> UObject
	// Size: 0x20 (0x50 - 0x30)
	class UAudioAnalyzerSubsystem : public UEngineSubsystem	
	{
	public:
		TArray AudioAnalyzers; // 0x30(0x10)
		unsigned char UnknownData01_7[0x10]; // 0x40(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioAnalyzer.AudioAnalyzerSubsystem");
			return ret;
		}
	};

}
