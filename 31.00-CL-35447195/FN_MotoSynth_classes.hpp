#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: MotoSynth
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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
		unsigned char UnknownData03_6[0x3]; // 0x29(0x3) UNKNOWN PROPERTY
		float DownSampleFactor; // 0x2C(0x4)
		FRuntimeFloatCurve RpmCurve; // 0x30(0x88)
		TArray SourceData; // 0xB8(0x10)
		TArray SourceDataPCM; // 0xC8(0x10)
		int32_t SourceSampleRate; // 0xD8(0x4)
		unsigned char UnknownData04_6[0x4]; // 0xDC(0x4) UNKNOWN PROPERTY
		TArray GrainTable; // 0xE0(0x10)
		unsigned char UnknownData05_7[0x8]; // 0xF0(0x8) UNKNOWN PROPERTY

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
		UMotoSynthPreset MotoSynthPreset; // 0x880(0x8)
		float RPM; // 0x888(0x4)
		unsigned char UnknownData01_7[0x194]; // 0x88C(0x194) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MotoSynth.SynthComponentMoto");
			return ret;
		}

		void SetSettings(FMotoSynthRuntimeSettings& InSettings); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414BB1D58
		void SetRPM(float InRPM, float InTimeSec); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BB1C78
		bool IsEnabled(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BB1B98
		void GetRPMRange(float& OutMinRPM, float& OutMaxRPM); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414BB1AB8
	};

}
