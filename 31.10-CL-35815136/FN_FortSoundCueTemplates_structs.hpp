#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: FortSoundCueTemplates
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct FortSoundCueTemplates.FortContinuousModulatorConfig
	// Size: 0x28 (0x28 - 0x0)
	struct FFortContinuousModulatorConfig	
	{
	public:
		FVector2D VolumeRange; // 0x0(0x10)
		FVector2D PitchRange; // 0x10(0x10)
		TEnumAsByte<ModulationParamMode> VolumeMode; // 0x20(0x1)
		TEnumAsByte<ModulationParamMode> PitchMode; // 0x21(0x1)
		unsigned char UnknownData00_7[0x6]; // 0x22(0x6) UNKNOWN PROPERTY
	};


	// Struct FortSoundCueTemplates.FortSubmixPair
	// Size: 0x10 (0x10 - 0x0)
	struct FFortSubmixPair	
	{
	public:
		USoundSubmixBase* Submix; // 0x0(0x8)
		float SendAmount; // 0x8(0x4)
		unsigned char UnknownData00_7[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
	};


	// Struct FortSoundCueTemplates.FortBusPair
	// Size: 0x18 (0x18 - 0x0)
	struct FFortBusPair	
	{
	public:
		USoundSourceBus* SourceBus; // 0x0(0x8)
		UAudioBus* AudioBus; // 0x8(0x8)
		float SendAmount; // 0x10(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct FortSoundCueTemplates.GliderThrustData
	// Size: 0x58 (0x58 - 0x0)
	struct FGliderThrustData	
	{
	public:
		FName ParameterName; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FVector2D PitchOutput; // 0x8(0x10)
		FVector2D VolumeOutput; // 0x18(0x10)
		USoundWave* Sound; // 0x28(0x8)
		FFortContinuousModulatorConfig Settings; // 0x30(0x28)
	};


	// Struct FortSoundCueTemplates.PhysicsStateData
	// Size: 0x90 (0x90 - 0x0)
	struct FPhysicsStateData	
	{
	public:
		FName ParameterName; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FVector2D VolumeOutput; // 0x8(0x10)
		FVector2D PitchOutput; // 0x18(0x10)
		FFortContinuousModulatorConfig Settings; // 0x28(0x28)
		FDistanceDatum CrossfadeInputSlow; // 0x50(0x14)
		unsigned char UnknownData01_6[0x4]; // 0x64(0x4) UNKNOWN PROPERTY
		USoundWave* SlowLoop; // 0x68(0x8)
		FDistanceDatum CrossfadeInputFast; // 0x70(0x14)
		unsigned char UnknownData02_6[0x4]; // 0x84(0x4) UNKNOWN PROPERTY
		USoundWave* FastLoop; // 0x88(0x8)
	};


	// Struct FortSoundCueTemplates.PhysicsImpactData
	// Size: 0x58 (0x58 - 0x0)
	struct FPhysicsImpactData	
	{
	public:
		FVector2D VolumeOutput; // 0x0(0x10)
		FVector2D PitchOutput; // 0x10(0x10)
		FFortContinuousModulatorConfig Settings; // 0x20(0x28)
		TArray<USoundWave*> Variations; // 0x48(0x10)
	};

}
