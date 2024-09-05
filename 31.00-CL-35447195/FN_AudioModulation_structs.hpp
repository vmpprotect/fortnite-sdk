#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: AudioModulation
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct AudioModulation.SoundModulationADEnvelopeParams
	// Size: 0x14 (0x14 - 0x0)
	struct FSoundModulationADEnvelopeParams	
	{
	public:
		float AttackTime; // 0x0(0x4)
		float DecayTime; // 0x4(0x4)
		float AttackCurve; // 0x8(0x4)
		float DecayCurve; // 0xC(0x4)
		bool bLooping; // 0x10(0x1)
		bool bBypass; // 0x11(0x1)
		unsigned char UnknownData01_7[0x2]; // 0x12(0x2) UNKNOWN PROPERTY
	};


	// Struct AudioModulation.EnvelopeFollowerGeneratorParams
	// Size: 0x20 (0x20 - 0x0)
	struct FEnvelopeFollowerGeneratorParams	
	{
	public:
		bool bBypass; // 0x0(0x1)
		bool bInvert; // 0x1(0x1)
		unsigned char UnknownData02_6[0x6]; // 0x2(0x6) UNKNOWN PROPERTY
		UAudioBus AudioBus; // 0x8(0x8)
		float Gain; // 0x10(0x4)
		float AttackTime; // 0x14(0x4)
		float ReleaseTime; // 0x18(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
	};


	// Struct AudioModulation.SoundModulationLFOParams
	// Size: 0x20 (0x20 - 0x0)
	struct FSoundModulationLFOParams	
	{
	public:
		ESoundModulationLFOShape Shape; // 0x0(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float ExponentialFactor; // 0x4(0x4)
		float Width; // 0x8(0x4)
		float Amplitude; // 0xC(0x4)
		float Frequency; // 0x10(0x4)
		float Offset; // 0x14(0x4)
		float Phase; // 0x18(0x4)
		bool bLooping; // 0x1C(0x1)
		bool bBypass; // 0x1D(0x1)
		unsigned char UnknownData03_7[0x2]; // 0x1E(0x2) UNKNOWN PROPERTY
	};


	// Struct AudioModulation.SoundControlBusMixStage
	// Size: 0x28 (0x28 - 0x0)
	struct FSoundControlBusMixStage	
	{
	public:
		USoundControlBus Bus; // 0x0(0x8)
		FSoundModulationMixValue Value; // 0x8(0x20)
	};


	// Struct AudioModulation.SoundModulationMixValue
	// Size: 0x20 (0x20 - 0x0)
	struct FSoundModulationMixValue	
	{
	public:
		float TargetValue; // 0x0(0x4)
		float AttackTime; // 0x4(0x4)
		float ReleaseTime; // 0x8(0x4)
		unsigned char UnknownData01_7[0x14]; // 0xC(0x14) UNKNOWN PROPERTY
	};


	// Struct AudioModulation.SoundModulationParameterSettings
	// Size: 0x4 (0x4 - 0x0)
	struct FSoundModulationParameterSettings	
	{
	public:
		float ValueNormalized; // 0x0(0x4)
	};


	// Struct AudioModulation.SoundModulationTransform
	// Inherited from FWaveTableTransform
	// Size: 0x0 (0xB8 - 0xB8)
	struct FSoundModulationTransform : public FWaveTableTransform	
	{
	public:
	};


	// Struct AudioModulation.SoundControlModulationInput
	// Size: 0xC8 (0xC8 - 0x0)
	struct FSoundControlModulationInput	
	{
	public:
		bool bSampleAndHold : 1; // 0x0:0(0x1)
		unsigned char UnknownData01_5[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		FSoundModulationTransform Transform; // 0x8(0xB8)
		USoundControlBus Bus; // 0xC0(0x8)
	};


	// Struct AudioModulation.SoundControlModulationPatch
	// Size: 0x20 (0x20 - 0x0)
	struct FSoundControlModulationPatch	
	{
	public:
		bool bBypass; // 0x0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		USoundModulationParameter OutputParameter; // 0x8(0x8)
		TArray Inputs; // 0x10(0x10)
	};

}
