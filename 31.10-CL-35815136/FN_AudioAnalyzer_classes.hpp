#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: AudioAnalyzer
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

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
		UAudioBus* AudioBus; // 0x28(0x8)
		unsigned char UnknownData00_6[0x8]; // 0x30(0x8) UNKNOWN PROPERTY
		UAudioAnalyzerSubsystem* AudioAnalyzerSubsystem; // 0x38(0x8)
		unsigned char UnknownData01_7[0x60]; // 0x40(0x60) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioAnalyzer.AudioAnalyzer");
			return ret;
		}

		void StopAnalyzing(UObject* WorldContextObject); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA63900(relative to base address)
		void StartAnalyzing(UObject* WorldContextObject, UAudioBus* AudioBusToAnalyze); // Flags: Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74DA63738(relative to base address)
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
		USoundWave* Sound; // 0x28(0x8)
		float DurationInSeconds; // 0x30(0x4)
		unsigned char UnknownData00_7[0x44]; // 0x34(0x44) UNKNOWN PROPERTY

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
		TArray<UAudioAnalyzer*> AudioAnalyzers; // 0x30(0x10)
		unsigned char UnknownData00_7[0x10]; // 0x40(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AudioAnalyzer.AudioAnalyzerSubsystem");
			return ret;
		}
	};

}
