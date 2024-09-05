#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: AudioSynesthesia
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct AudioSynesthesia.ConstantQResults
	// Size: 0x18 (0x18 - 0x0)
	struct FConstantQResults	
	{
	public:
		float TimeSeconds; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TArray<float> SpectrumValues; // 0x8(0x10)
	};


	// Struct AudioSynesthesia.LoudnessResults
	// Size: 0x10 (0x10 - 0x0)
	struct FLoudnessResults	
	{
	public:
		float Loudness; // 0x0(0x4)
		float NormalizedLoudness; // 0x4(0x4)
		float PerceptualEnergy; // 0x8(0x4)
		float TimeSeconds; // 0xC(0x4)
	};


	// Struct AudioSynesthesia.MeterResults
	// Size: 0x14 (0x14 - 0x0)
	struct FMeterResults	
	{
	public:
		float TimeSeconds; // 0x0(0x4)
		float MeterValue; // 0x4(0x4)
		float PeakValue; // 0x8(0x4)
		int32_t NumSamplesClipping; // 0xC(0x4)
		float ClippingValue; // 0x10(0x4)
	};


	// Struct AudioSynesthesia.SynesthesiaSpectrumResults
	// Size: 0x18 (0x18 - 0x0)
	struct FSynesthesiaSpectrumResults	
	{
	public:
		float TimeSeconds; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TArray<float> SpectrumValues; // 0x8(0x10)
	};

}
