#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: HarmonixAudioReactivity
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class HarmonixAudioReactivity.HarmonixAudioAnalyzerResultsDispatcher
	// Inherited from UEngineSubsystem -> UDynamicSubsystem -> USubsystem -> UObject
	// Size: 0x78 (0xA8 - 0x30)
	class UHarmonixAudioAnalyzerResultsDispatcher : public UEngineSubsystem	
	{
	public:
		unsigned char UnknownData00_1[0x78]; // 0x30(0x78) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/HarmonixAudioReactivity.HarmonixAudioAnalyzerResultsDispatcher");
			return ret;
		}

		bool TryGetResults(FName& Name, FHarmonixAudioAnalyzerResults& Results); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7510755F8(relative to base address)
		bool HasProvider(FName& Name); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751075484(relative to base address)
	};


	// Class HarmonixAudioReactivity.HarmonixAudioAnalyzerResultsProvider
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UHarmonixAudioAnalyzerResultsProvider : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x28(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/HarmonixAudioReactivity.HarmonixAudioAnalyzerResultsProvider");
			return ret;
		}

		void SetArbitraryTextureData(TArray<float>& ArbitraryTextureData); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75107551C(relative to base address)
		UHarmonixAudioAnalyzerResultsProvider CreateHarmonixAudioAnalyzerResultsProvider(FName Name); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7510753EC(relative to base address)
	};


	// Class HarmonixAudioReactivity.HarmonixTextureBase
	// Inherited from UTexture -> UStreamableRenderAsset -> UObject
	// Size: 0x10 (0x140 - 0x130)
	class UHarmonixTextureBase : public UTexture	
	{
	public:
		int32_t Width; // 0x130(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x134(0x4) UNKNOWN PROPERTY
		EHarmonixTextureFilterMode TextureFilterMode; // 0x138(0x1)
		TEnumAsByte<TextureAddress> TextureTilingMode; // 0x139(0x1)
		unsigned char UnknownData01_7[0x6]; // 0x13A(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/HarmonixAudioReactivity.HarmonixTextureBase");
			return ret;
		}

		int32_t GetCurrentTextureWidth(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74EFB9D38(relative to base address)
		int32_t GetCurrentTextureHeight(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75107546C(relative to base address)
	};


	// Class HarmonixAudioReactivity.HarmonixHysteresisTextureBase
	// Inherited from UHarmonixTextureBase -> UTexture -> UStreamableRenderAsset -> UObject
	// Size: 0x30 (0x170 - 0x140)
	class UHarmonixHysteresisTextureBase : public UHarmonixTextureBase	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x140(0x8) UNKNOWN PROPERTY
		float TicksPerShift; // 0x148(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x14C(0x4) UNKNOWN PROPERTY
		int32_t NumHysteresisSamples; // 0x150(0x4)
		unsigned char UnknownData02_7[0x1C]; // 0x154(0x1C) UNKNOWN PROPERTY

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
		TWeakObjectPtr<UMusicClockComponent*> MusicClock; // 0x170(0x8)
		EHarmonixAudioAnalysisType Type; // 0x178(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x179(0x3) UNKNOWN PROPERTY
		FName InstanceName; // 0x17C(0x4)
		bool ResetMonoPeakOnUpdate; // 0x180(0x1)
		bool WarnIfNotEnabled; // 0x181(0x1)
		unsigned char UnknownData01_7[0x6]; // 0x182(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/HarmonixAudioReactivity.HarmonixAudioAnalysisTexture");
			return ret;
		}
	};

}
