#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: MotoSynth
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class MotoSynth.MotoSynthPreset
	// Inherited from UObject
	// Size: 0x138 (0x160 - 0x28)
	class UMotoSynthPreset : public UObject	
	{
	public:
		FMotoSynthRuntimeSettings Settings; // 0x28(0x138)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MotoSynth.MotoSynthPreset");
			return ret;
		}
	};


	// Class MotoSynth.MotoSynthSource
	// Inherited from UObject
	// Size: 0xD0 (0xF8 - 0x28)
	class UMotoSynthSource : public UObject	
	{
	public:
		bool bConvertTo8Bit; // 0x28(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x29(0x3) UNKNOWN PROPERTY
		float DownSampleFactor; // 0x2C(0x4)
		FRuntimeFloatCurve RpmCurve; // 0x30(0x88)
		TArray<float> SourceData; // 0xB8(0x10)
		TArray<int16_t> SourceDataPCM; // 0xC8(0x10)
		int32_t SourceSampleRate; // 0xD8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xDC(0x4) UNKNOWN PROPERTY
		TArray<FGrainTableEntry> GrainTable; // 0xE0(0x10)
		unsigned char UnknownData02_7[0x8]; // 0xF0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MotoSynth.MotoSynthSource");
			return ret;
		}
	};


	// Class MotoSynth.SynthComponentMoto
	// Inherited from USynthComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x1A0 (0xA20 - 0x880)
	class USynthComponentMoto : public USynthComponent	
	{
	public:
		UMotoSynthPreset* MotoSynthPreset; // 0x880(0x8)
		float RPM; // 0x888(0x4)
		unsigned char UnknownData00_7[0x194]; // 0x88C(0x194) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MotoSynth.SynthComponentMoto");
			return ret;
		}

		void SetSettings(FMotoSynthRuntimeSettings& InSettings); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7505AC9DC(relative to base address)
		void SetRPM(float InRPM, float InTimeSec); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7505AC918(relative to base address)
		bool IsEnabled(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7505AC8FC(relative to base address)
		void GetRPMRange(float& OutMinRPM, float& OutMaxRPM); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7505AC824(relative to base address)
	};

}
