#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: LandscapePatch
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class LandscapePatch.LandscapePatchEditLayer
	// Inherited from ULandscapeEditLayerProcedural -> ULandscapeEditLayerBase -> UObject
	// Size: 0x8 (0x38 - 0x30)
	class ULandscapePatchEditLayer : public ULandscapeEditLayerProcedural	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x30(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LandscapePatch.LandscapePatchEditLayer");
			return ret;
		}
	};


	// Class LandscapePatch.LandscapePatchComponent
	// Inherited from USceneComponent -> UActorComponent -> UObject
	// Size: 0x70 (0x290 - 0x220)
	class ULandscapePatchComponent : public USceneComponent	
	{
	public:
		FGuid EditLayerGuid; // 0x220(0x10)
		ELandscapePatchPriorityInitialization PriorityInitialization; // 0x230(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x231(0x7) UNKNOWN PROPERTY
		double Priority; // 0x238(0x8)
		TWeakObjectPtr Landscape; // 0x240(0x20)
		TWeakObjectPtr PatchManager; // 0x260(0x20)
		bool bIsEnabled; // 0x280(0x1)
		unsigned char UnknownData03_7[0x7]; // 0x281(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LandscapePatch.LandscapePatchComponent");
			return ret;
		}

		void SetPriority(double PriorityIn); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EC0EE0
		void SetPatchManager(ALandscapePatchManager NewPatchManager); // Flags: Native|Public|BlueprintCallable 0x7FF414EC0E00
		void SetLandscape(ALandscape NewLandscape); // Flags: Native|Public|BlueprintCallable 0x7FF414EC0D20
		void SetIsEnabled(bool bEnabledIn); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EC0C40
		void RequestLandscapeUpdate(bool bInUserTriggeredUpdate); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EC0B60
		bool IsEnabled(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EC0A80
		double GetPriority(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EC09A0
		ALandscapePatchManager GetPatchManager(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EC08C0
		TArray GetLayerOptions(); // Flags: Final|Native|Private 0x7FF414EC07E0
		FTransform GetLandscapeHeightmapCoordsToWorld(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414EC0700
	};


	// Class LandscapePatch.LandscapeCircleHeightPatch
	// Inherited from ULandscapePatchComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x18 (0x2A0 - 0x288)
	class ULandscapeCircleHeightPatch : public ULandscapePatchComponent	
	{
	public:
		float Radius; // 0x288(0x4)
		float Falloff; // 0x28C(0x4)
		bool bEditVisibility; // 0x290(0x1)
		bool bExclusiveRadius; // 0x291(0x1)
		unsigned char UnknownData01_7[0xE]; // 0x292(0xE) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LandscapePatch.LandscapeCircleHeightPatch");
			return ret;
		}
	};


	// Class LandscapePatch.LandscapePatchManager
	// Inherited from ALandscapeBlueprintBrushBase -> AActor -> UObject
	// Size: 0xC0 (0x350 - 0x290)
	class ALandscapePatchManager : public ALandscapeBlueprintBrushBase	
	{
	public:
		TArray PatchComponents; // 0x290(0x10)
		FTransform HeightmapCoordsToWorld; // 0x2A0(0x60)
		TMap PatchToIndex; // 0x300(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LandscapePatch.LandscapePatchManager");
			return ret;
		}

		void SetTargetLandscape(ALandscape InOwningLandscape); // Flags: Native|Public|BlueprintCallable 0x7FF414EC1420
		bool RemovePatch(ULandscapePatchComponent Patch); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EC1340
		void MovePatchToIndex(ULandscapePatchComponent Patch, int32_t Index); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EC1260
		int32_t GetIndexOfPatch(ULandscapePatchComponent Patch); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EC1180
		bool ContainsPatch(ULandscapePatchComponent Patch); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EC10A0
		void AddPatch(ULandscapePatchComponent Patch); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EC0FC0
	};


	// Class LandscapePatch.LandscapeTextureBackedRenderTargetBase
	// Inherited from UObject
	// Size: 0x28 (0x50 - 0x28)
	class ULandscapeTextureBackedRenderTargetBase : public UObject	
	{
	public:
		UTextureRenderTarget2D PostLoadRT; // 0x28(0x8)
		UTexture2D InternalTexture; // 0x30(0x8)
		UTextureRenderTarget2D RenderTarget; // 0x38(0x8)
		int32_t SizeX; // 0x40(0x4)
		int32_t SizeY; // 0x44(0x4)
		bool bUseInternalTextureOnly; // 0x48(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x49(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LandscapePatch.LandscapeTextureBackedRenderTargetBase");
			return ret;
		}
	};


	// Class LandscapePatch.LandscapeWeightTextureBackedRenderTarget
	// Inherited from ULandscapeTextureBackedRenderTargetBase -> UObject
	// Size: 0x8 (0x58 - 0x50)
	class ULandscapeWeightTextureBackedRenderTarget : public ULandscapeTextureBackedRenderTargetBase	
	{
	public:
		bool bUseAlphaChannel; // 0x50(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x51(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LandscapePatch.LandscapeWeightTextureBackedRenderTarget");
			return ret;
		}
	};


	// Class LandscapePatch.LandscapeHeightTextureBackedRenderTarget
	// Inherited from ULandscapeTextureBackedRenderTargetBase -> UObject
	// Size: 0x10 (0x60 - 0x50)
	class ULandscapeHeightTextureBackedRenderTarget : public ULandscapeTextureBackedRenderTargetBase	
	{
	public:
		FLandscapeHeightPatchConvertToNativeParams ConversionParams; // 0x50(0xC)
		TEnumAsByte RenderTargetFormat; // 0x5C(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x5D(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LandscapePatch.LandscapeHeightTextureBackedRenderTarget");
			return ret;
		}
	};


	// Class LandscapePatch.LandscapeWeightPatchTextureInfo
	// Inherited from UObject
	// Size: 0x20 (0x48 - 0x28)
	class ULandscapeWeightPatchTextureInfo : public UObject	
	{
	public:
		FName WeightmapLayerName; // 0x28(0x4)
		bool bEditVisibilityLayer; // 0x2C(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x2D(0x3) UNKNOWN PROPERTY
		UTexture TextureAsset; // 0x30(0x8)
		ULandscapeWeightTextureBackedRenderTarget InternalData; // 0x38(0x8)
		ELandscapeTexturePatchSourceMode SourceMode; // 0x40(0x1)
		ELandscapeTexturePatchSourceMode DetailPanelSourceMode; // 0x41(0x1)
		bool bUseAlphaChannel; // 0x42(0x1)
		bool bOverrideBlendMode; // 0x43(0x1)
		ELandscapeTexturePatchBlendMode OverrideBlendMode; // 0x44(0x1)
		unsigned char UnknownData03_7[0x3]; // 0x45(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LandscapePatch.LandscapeWeightPatchTextureInfo");
			return ret;
		}
	};


	// Class LandscapePatch.LandscapeTexturePatch
	// Inherited from ULandscapePatchComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x88 (0x310 - 0x288)
	class ULandscapeTexturePatch : public ULandscapePatchComponent	
	{
	public:
		int32_t ResolutionX; // 0x288(0x4)
		int32_t ResolutionY; // 0x28C(0x4)
		FVector2D UnscaledPatchCoverage; // 0x290(0x10)
		ELandscapeTexturePatchBlendMode BlendMode; // 0x2A0(0x1)
		ELandscapeTexturePatchFalloffMode FalloffMode; // 0x2A1(0x1)
		unsigned char UnknownData07_6[0x2]; // 0x2A2(0x2) UNKNOWN PROPERTY
		float Falloff; // 0x2A4(0x4)
		ELandscapeTexturePatchSourceMode HeightSourceMode; // 0x2A8(0x1)
		ELandscapeTexturePatchSourceMode DetailPanelHeightSourceMode; // 0x2A9(0x1)
		unsigned char UnknownData08_6[0x6]; // 0x2AA(0x6) UNKNOWN PROPERTY
		ULandscapeHeightTextureBackedRenderTarget HeightInternalData; // 0x2B0(0x8)
		UTexture HeightTextureAsset; // 0x2B8(0x8)
		bool bUseTextureAlphaForHeight; // 0x2C0(0x1)
		ELandscapeTextureHeightPatchEncoding HeightEncoding; // 0x2C1(0x1)
		unsigned char UnknownData09_6[0x6]; // 0x2C2(0x6) UNKNOWN PROPERTY
		FLandscapeTexturePatchEncodingSettings HeightEncodingSettings; // 0x2C8(0x10)
		ELandscapeTextureHeightPatchZeroHeightMeaning ZeroHeightMeaning; // 0x2D8(0x1)
		bool bApplyComponentZScale; // 0x2D9(0x1)
		unsigned char UnknownData10_6[0x6]; // 0x2DA(0x6) UNKNOWN PROPERTY
		TArray WeightPatches; // 0x2E0(0x10)
		unsigned char UnknownData11_6[0x1]; // 0x2F0(0x1) UNKNOWN PROPERTY
		bool bBaseResolutionOffLandscape; // 0x2F1(0x1)
		unsigned char UnknownData12_6[0x2]; // 0x2F2(0x2) UNKNOWN PROPERTY
		float ResolutionMultiplier; // 0x2F4(0x4)
		int32_t InitTextureSizeX; // 0x2F8(0x4)
		int32_t InitTextureSizeY; // 0x2FC(0x4)
		TEnumAsByte HeightRenderTargetFormat; // 0x300(0x1)
		unsigned char UnknownData13_7[0xF]; // 0x301(0xF) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LandscapePatch.LandscapeTexturePatch");
			return ret;
		}

		void SnapToLandscape(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414EC33A0
		void SetZeroHeightMeaning(ELandscapeTextureHeightPatchZeroHeightMeaning ZeroHeightMeaningIn); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EC32C0
		void SetWeightPatchTextureAsset(FName& InWeightmapLayerName); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EC31E0
		void SetWeightPatchSourceMode(); // Flags: Native|Public|HasOutParms|BlueprintCallable 0x7FF414EC3100
		void SetWeightPatchBlendModeOverride(FName& InWeightmapLayerName, ELandscapeTexturePatchBlendMode BlendMode); // Flags: Native|Public|HasOutParms|BlueprintCallable 0x7FF414EC3020
		void SetUseAlphaChannelForWeightPatch(FName& InWeightmapLayerName, bool bUseAlphaChannel); // Flags: Native|Public|HasOutParms|BlueprintCallable 0x7FF414EC2F40
		void SetUseAlphaChannelForHeight(bool bUse); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EC2E60
		void SetUnscaledCoverage(FVector2D Coverage); // Flags: Native|Public|HasDefaults|BlueprintCallable 0x7FF414EC2D80
		void SetResolution(FVector2D ResolutionIn); // Flags: Native|Public|HasDefaults|BlueprintCallable 0x7FF414EC2CA0
		void SetHeightTextureAsset(UTexture TextureIn); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EC2BC0
		void SetHeightSourceMode(ELandscapeTexturePatchSourceMode NewMode); // Flags: Native|Public|BlueprintCallable 0x7FF414EC2AE0
		void SetHeightRenderTargetFormat(TEnumAsByte Format); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EC2A00
		void SetHeightEncodingSettings(FLandscapeTexturePatchEncodingSettings& Settings); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EC2920
		void SetHeightEncodingMode(ELandscapeTextureHeightPatchEncoding EncodingMode); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EC2840
		void SetFalloffMode(ELandscapeTexturePatchFalloffMode FalloffModeIn); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EC2760
		void SetFalloff(float FalloffIn); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EC2680
		void SetEditVisibilityLayer(FName& InWeightmapLayerName, bool bEditVisibilityLayer); // Flags: Native|Public|HasOutParms|BlueprintCallable 0x7FF414EC25A0
		void SetBlendMode(ELandscapeTexturePatchBlendMode BlendModeIn); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EC24C0
		void ResetHeightEncodingMode(ELandscapeTextureHeightPatchEncoding EncodingMode); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EC23E0
		void RequestReinitializeWeights(); // Flags: Final|Native|Protected 0x7FF414EC2300
		void RequestReinitializeHeight(); // Flags: Final|Native|Protected 0x7FF414EC2220
		void RemoveWeightPatch(FName& InWeightmapLayerName); // Flags: Native|Public|HasOutParms|BlueprintCallable 0x7FF414EC2140
		void RemoveAllWeightPatches(); // Flags: Native|Public|BlueprintCallable 0x7FF414EC2060
		ELandscapeTexturePatchSourceMode GetWeightPatchSourceMode(FName& InWeightmapLayerName); // Flags: Native|Public|HasOutParms|BlueprintCallable 0x7FF414EC1F80
		UTextureRenderTarget2D GetWeightPatchRenderTarget(FName& InWeightmapLayerName, bool bMarkDirty); // Flags: Native|Public|HasOutParms|BlueprintCallable 0x7FF414EC1EA0
		FVector2D GetUnscaledCoverage(); // Flags: Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414EC1DC0
		FVector2D GetResolution(); // Flags: Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414EC1CE0
		FTransform GetPatchToWorldTransform(); // Flags: Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414EC1C00
		bool GetInitResolutionFromLandscape(float ResolutionMultiplier, FVector2D& ResolutionOut); // Flags: Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414EC1B20
		ELandscapeTexturePatchSourceMode GetHeightSourceMode(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414EC1A40
		UTextureRenderTarget2D GetHeightRenderTarget(bool bMarkDirty); // Flags: Native|Public|BlueprintCallable 0x7FF414EC1960
		FVector2D GetFullUnscaledWorldSize(); // Flags: Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF414EC1880
		TArray GetAllWeightPatchLayerNames(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EC17A0
		void DisableAllWeightPatches(); // Flags: Native|Public|BlueprintCallable 0x7FF414EC16C0
		void ClearWeightPatchBlendModeOverride(FName& InWeightmapLayerName); // Flags: Native|Public|HasOutParms|BlueprintCallable 0x7FF414EC15E0
		void AddWeightPatch(FName& InWeightmapLayerName, ELandscapeTexturePatchSourceMode SourceMode, bool bUseAlphaChannel); // Flags: Native|Public|HasOutParms|BlueprintCallable 0x7FF414EC1500
	};

}
