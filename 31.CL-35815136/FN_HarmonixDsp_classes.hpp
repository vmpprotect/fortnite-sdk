#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: HarmonixDsp
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class HarmonixDsp.FusionPatch
	// Inherited from UObject
	// Size: 0x5C8 (0x5F0 - 0x28)
	class UFusionPatch : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		FFusionPatchData FusionPatchData; // 0x30(0x5A8)
		unsigned char UnknownData01_7[0x18]; // 0x5D8(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/HarmonixDsp.FusionPatch");
			return ret;
		}
	};


	// Class HarmonixDsp.FusionSamplerConfig
	// Inherited from UHarmonixDeveloperSettings -> UObject
	// Size: 0x68 (0x90 - 0x28)
	class UFusionSamplerConfig : public UHarmonixDeveloperSettings	
	{
	public:
		FFusionVoiceConfig DefaultVoicePoolConfig; // 0x28(0x18)
		TMap<FName, FFusionVoiceConfig> VoicePoolConfigs; // 0x40(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/HarmonixDsp.FusionSamplerConfig");
			return ret;
		}
	};


	// Class HarmonixDsp.StretcherAndPitchShifterConfig
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UStretcherAndPitchShifterConfig : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/HarmonixDsp.StretcherAndPitchShifterConfig");
			return ret;
		}
	};


	// Class HarmonixDsp.SmbPitchShifterConfig
	// Inherited from UStretcherAndPitchShifterConfig -> UObject
	// Size: 0x20 (0x48 - 0x28)
	class USmbPitchShifterConfig : public UStretcherAndPitchShifterConfig	
	{
	public:
		bool bAllowPoolGrowthInEditor; // 0x28(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x29(0x3) UNKNOWN PROPERTY
		uint32_t DefaultAllocatedStretchers; // 0x2C(0x4)
		uint32_t SwitchAllocatedStretchers; // 0x30(0x4)
		uint32_t PS4AllocatedStretchers; // 0x34(0x4)
		uint32_t PS5AllocatedStretchers; // 0x38(0x4)
		uint32_t XboxOneAllocatedStretchers; // 0x3C(0x4)
		uint32_t XSXAllocatedStretchers; // 0x40(0x4)
		uint32_t AndroidAllocatedStretchers; // 0x44(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/HarmonixDsp.SmbPitchShifterConfig");
			return ret;
		}
	};


	// Class HarmonixDsp.StretcherAndPitchShifterFactoryConfig
	// Inherited from UHarmonixDeveloperSettings -> UObject
	// Size: 0x28 (0x50 - 0x28)
	class UStretcherAndPitchShifterFactoryConfig : public UHarmonixDeveloperSettings	
	{
	public:
		TArray<FName> FactoryPriority; // 0x28(0x10)
		FPitchShifterName DefaultFactory; // 0x38(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY
		TArray<FPitchShifterNameRedirect> FactoryNameRedirects; // 0x40(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/HarmonixDsp.StretcherAndPitchShifterFactoryConfig");
			return ret;
		}
	};

}
