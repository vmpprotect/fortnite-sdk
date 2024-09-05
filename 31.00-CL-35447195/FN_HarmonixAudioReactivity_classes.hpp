#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: HarmonixAudioReactivity
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class HarmonixAudioReactivity.HarmonixAudioAnalyzerResultsDispatcher
	// Inherited from UEngineSubsystem -> UDynamicSubsystem -> USubsystem -> UObject
	// Size: 0x78 (0xA8 - 0x30)
	class UHarmonixAudioAnalyzerResultsDispatcher : public UEngineSubsystem	
	{
	public:
		unsigned char UnknownData01_1[0x78]; // 0x30(0x78) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/HarmonixAudioReactivity.HarmonixAudioAnalyzerResultsDispatcher");
			return ret;
		}

		bool TryGetResults(FName& Name, FHarmonixAudioAnalyzerResults& Results); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414C14D18
		bool HasProvider(FName& Name); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 0x7FF414C14C38
	};


	// Class HarmonixAudioReactivity.HarmonixAudioAnalyzerResultsProvider
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UHarmonixAudioAnalyzerResultsProvider : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x28(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/HarmonixAudioReactivity.HarmonixAudioAnalyzerResultsProvider");
			return ret;
		}

		void SetArbitraryTextureData(TArray& ArbitraryTextureData); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414C14ED8
		UHarmonixAudioAnalyzerResultsProvider CreateHarmonixAudioAnalyzerResultsProvider(FName Name); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF414C14DF8
	};


	// Class HarmonixAudioReactivity.HarmonixTextureBase
	// Inherited from UTexture -> UStreamableRenderAsset -> UObject
	// Size: 0x10 (0x140 - 0x130)
	class UHarmonixTextureBase : public UTexture	
	{
	public:
		int32_t Width; // 0x130(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x134(0x4) UNKNOWN PROPERTY
		EHarmonixTextureFilterMode TextureFilterMode; // 0x138(0x1)
		TEnumAsByte TextureTilingMode; // 0x139(0x1)
		unsigned char UnknownData03_7[0x6]; // 0x13A(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/HarmonixAudioReactivity.HarmonixTextureBase");
			return ret;
		}

		int32_t GetCurrentTextureWidth(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C15098
		int32_t GetCurrentTextureHeight(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414C14FB8
	};


	// Class HarmonixAudioReactivity.HarmonixHysteresisTextureBase
	// Inherited from UHarmonixTextureBase -> UTexture -> UStreamableRenderAsset -> UObject
	// Size: 0x30 (0x170 - 0x140)
	class UHarmonixHysteresisTextureBase : public UHarmonixTextureBase	
	{
	public:
		unsigned char UnknownData03_3[0x8]; // 0x140(0x8) UNKNOWN PROPERTY
		float TicksPerShift; // 0x148(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x14C(0x4) UNKNOWN PROPERTY
		int32_t NumHysteresisSamples; // 0x150(0x4)
		unsigned char UnknownData05_7[0x1C]; // 0x154(0x1C) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/HarmonixAudioReactivity.HarmonixHysteresisTextureBase");
			return ret;
		}
	};


	// Class HarmonixAudioReactivity.HarmonixAudioAnalysisTexture
	// Inherited from UHarmonixHysteresisTextureBase -> UHarmonixTextureBase -> UTexture -> UStreamableRenderAsset -> UObject
	// Size: 0x18 (0x188 - 0x170)
	class UHarmonixAudioAnalysisTexture : public UHarmonixHysteresisTextureBase	
	{
	public:
		TWeakObjectPtr MusicClock; // 0x170(0x8)
		EHarmonixAudioAnalysisType Type; // 0x178(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x179(0x3) UNKNOWN PROPERTY
		FName InstanceName; // 0x17C(0x4)
		bool ResetMonoPeakOnUpdate; // 0x180(0x1)
		bool WarnIfNotEnabled; // 0x181(0x1)
		unsigned char UnknownData03_7[0x6]; // 0x182(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/HarmonixAudioReactivity.HarmonixAudioAnalysisTexture");
			return ret;
		}
	};

}
