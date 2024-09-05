#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: LandscapePatch
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class LandscapePatch.LandscapePatchEditLayer
	// Inherited from ULandscapeEditLayerProcedural -> ULandscapeEditLayerBase -> UObject
	// Size: 0x8 (0x38 - 0x30)
	class ULandscapePatchEditLayer : public ULandscapeEditLayerProcedural	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x30(0x8) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_6[0x7]; // 0x231(0x7) UNKNOWN PROPERTY
		double Priority; // 0x238(0x8)
		TWeakObjectPtr<ALandscape*> Landscape; // 0x240(0x20)
		TWeakObjectPtr<ALandscapePatchManager*> PatchManager; // 0x260(0x20)
		bool bIsEnabled; // 0x280(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x281(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LandscapePatch.LandscapePatchComponent");
			return ret;
		}

		void SetPriority(double PriorityIn); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75219E83C(relative to base address)
		void SetPatchManager(ALandscapePatchManager* NewPatchManager); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74EEF911C(relative to base address)
		void SetLandscape(ALandscape* NewLandscape); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF75219E7B8(relative to base address)
		void SetIsEnabled(bool bEnabledIn); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75219E730(relative to base address)
		void RequestLandscapeUpdate(bool bInUserTriggeredUpdate); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C079284(relative to base address)
		bool IsEnabled(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75219D8E8(relative to base address)
		double GetPriority(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75219D6A0(relative to base address)
		ALandscapePatchManager GetPatchManager(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74EEF8348(relative to base address)
		TArray GetLayerOptions(); // Flags: Final|Native|Private, Memory Exec: 0x7FF75219D59C(relative to base address)
		FTransform GetLandscapeHeightmapCoordsToWorld(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75219D520(relative to base address)
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
		unsigned char UnknownData00_7[0xE]; // 0x292(0xE) UNKNOWN PROPERTY

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
		TArray<TWeakObjectPtr> PatchComponents; // 0x290(0x10)
		FTransform HeightmapCoordsToWorld; // 0x2A0(0x60)
		TMap<TWeakObjectPtr, int32_t> PatchToIndex; // 0x300(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LandscapePatch.LandscapePatchManager");
			return ret;
		}

		void SetTargetLandscape(ALandscape* InOwningLandscape); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF75219E9C4(relative to base address)
		bool RemovePatch(ULandscapePatchComponent* Patch); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75219DE2C(relative to base address)
		void MovePatchToIndex(ULandscapePatchComponent* Patch, int32_t Index); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75219D910(relative to base address)
		int32_t GetIndexOfPatch(ULandscapePatchComponent* Patch); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75219D3B0(relative to base address)
		bool ContainsPatch(ULandscapePatchComponent* Patch); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75219D1D4(relative to base address)
		void AddPatch(ULandscapePatchComponent* Patch); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75219CF38(relative to base address)
	};


	// Class LandscapePatch.LandscapeTextureBackedRenderTargetBase
	// Inherited from UObject
	// Size: 0x28 (0x50 - 0x28)
	class ULandscapeTextureBackedRenderTargetBase : public UObject	
	{
	public:
		UTextureRenderTarget2D* PostLoadRT; // 0x28(0x8)
		UTexture2D* InternalTexture; // 0x30(0x8)
		UTextureRenderTarget2D* RenderTarget; // 0x38(0x8)
		int32_t SizeX; // 0x40(0x4)
		int32_t SizeY; // 0x44(0x4)
		bool bUseInternalTextureOnly; // 0x48(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x49(0x7) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_7[0x7]; // 0x51(0x7) UNKNOWN PROPERTY

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
		TEnumAsByte<ETextureRenderTargetFormat> RenderTargetFormat; // 0x5C(0x1)
		unsigned char UnknownData00_7[0x3]; // 0x5D(0x3) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_6[0x3]; // 0x2D(0x3) UNKNOWN PROPERTY
		UTexture* TextureAsset; // 0x30(0x8)
		ULandscapeWeightTextureBackedRenderTarget* InternalData; // 0x38(0x8)
		ELandscapeTexturePatchSourceMode SourceMode; // 0x40(0x1)
		ELandscapeTexturePatchSourceMode DetailPanelSourceMode; // 0x41(0x1)
		bool bUseAlphaChannel; // 0x42(0x1)
		bool bOverrideBlendMode; // 0x43(0x1)
		ELandscapeTexturePatchBlendMode OverrideBlendMode; // 0x44(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x45(0x3) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_6[0x2]; // 0x2A2(0x2) UNKNOWN PROPERTY
		float Falloff; // 0x2A4(0x4)
		ELandscapeTexturePatchSourceMode HeightSourceMode; // 0x2A8(0x1)
		ELandscapeTexturePatchSourceMode DetailPanelHeightSourceMode; // 0x2A9(0x1)
		unsigned char UnknownData01_6[0x6]; // 0x2AA(0x6) UNKNOWN PROPERTY
		ULandscapeHeightTextureBackedRenderTarget* HeightInternalData; // 0x2B0(0x8)
		UTexture* HeightTextureAsset; // 0x2B8(0x8)
		bool bUseTextureAlphaForHeight; // 0x2C0(0x1)
		ELandscapeTextureHeightPatchEncoding HeightEncoding; // 0x2C1(0x1)
		unsigned char UnknownData02_6[0x6]; // 0x2C2(0x6) UNKNOWN PROPERTY
		FLandscapeTexturePatchEncodingSettings HeightEncodingSettings; // 0x2C8(0x10)
		ELandscapeTextureHeightPatchZeroHeightMeaning ZeroHeightMeaning; // 0x2D8(0x1)
		bool bApplyComponentZScale; // 0x2D9(0x1)
		unsigned char UnknownData03_6[0x6]; // 0x2DA(0x6) UNKNOWN PROPERTY
		TArray<ULandscapeWeightPatchTextureInfo*> WeightPatches; // 0x2E0(0x10)
		unsigned char UnknownData04_6[0x1]; // 0x2F0(0x1) UNKNOWN PROPERTY
		bool bBaseResolutionOffLandscape; // 0x2F1(0x1)
		unsigned char UnknownData05_6[0x2]; // 0x2F2(0x2) UNKNOWN PROPERTY
		float ResolutionMultiplier; // 0x2F4(0x4)
		int32_t InitTextureSizeX; // 0x2F8(0x4)
		int32_t InitTextureSizeY; // 0x2FC(0x4)
		TEnumAsByte<ETextureRenderTargetFormat> HeightRenderTargetFormat; // 0x300(0x1)
		unsigned char UnknownData06_7[0xF]; // 0x301(0xF) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LandscapePatch.LandscapeTexturePatch");
			return ret;
		}

		void SnapToLandscape(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void SetZeroHeightMeaning(ELandscapeTextureHeightPatchZeroHeightMeaning ZeroHeightMeaningIn); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75219F034(relative to base address)
		void SetWeightPatchTextureAsset(FName& InWeightmapLayerName, UTexture* TextureIn); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75219EF28(relative to base address)
		void SetWeightPatchSourceMode(FName& InWeightmapLayerName, ELandscapeTexturePatchSourceMode NewMode); // Flags: Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75219EE14(relative to base address)
		void SetWeightPatchBlendModeOverride(FName& InWeightmapLayerName, ELandscapeTexturePatchBlendMode BlendMode); // Flags: Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75219ED00(relative to base address)
		void SetUseAlphaChannelForWeightPatch(FName& InWeightmapLayerName, bool bUseAlphaChannel); // Flags: Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75219EBEC(relative to base address)
		void SetUseAlphaChannelForHeight(bool bUse); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75219EB64(relative to base address)
		void SetUnscaledCoverage(FVector2D Coverage); // Flags: Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF75219EA48(relative to base address)
		void SetResolution(FVector2D ResolutionIn); // Flags: Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF75219E8A8(relative to base address)
		void SetHeightTextureAsset(UTexture* TextureIn); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75219E6A4(relative to base address)
		void SetHeightSourceMode(ELandscapeTexturePatchSourceMode NewMode); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF75219E620(relative to base address)
		void SetHeightRenderTargetFormat(TEnumAsByte<ETextureRenderTargetFormat> Format); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75219E58C(relative to base address)
		void SetHeightEncodingSettings(FLandscapeTexturePatchEncodingSettings& Settings); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75219E4F8(relative to base address)
		void SetHeightEncodingMode(ELandscapeTextureHeightPatchEncoding EncodingMode); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75219E474(relative to base address)
		void SetFalloffMode(ELandscapeTexturePatchFalloffMode FalloffModeIn); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75219E3F0(relative to base address)
		void SetFalloff(float FalloffIn); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75219E364(relative to base address)
		void SetEditVisibilityLayer(FName& InWeightmapLayerName, bool bEditVisibilityLayer); // Flags: Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75219E250(relative to base address)
		void SetBlendMode(ELandscapeTexturePatchBlendMode BlendModeIn); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75219E1CC(relative to base address)
		void ResetHeightEncodingMode(ELandscapeTextureHeightPatchEncoding EncodingMode); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74E2263E0(relative to base address)
		void RequestReinitializeWeights(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void RequestReinitializeHeight(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void RemoveWeightPatch(FName& InWeightmapLayerName); // Flags: Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75219E13C(relative to base address)
		void RemoveAllWeightPatches(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF75219DE14(relative to base address)
		ELandscapeTexturePatchSourceMode GetWeightPatchSourceMode(FName& InWeightmapLayerName); // Flags: Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75219D848(relative to base address)
		UTextureRenderTarget2D GetWeightPatchRenderTarget(FName& InWeightmapLayerName, bool bMarkDirty); // Flags: Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75219D720(relative to base address)
		FVector2D GetUnscaledCoverage(); // Flags: Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75219D6EC(relative to base address)
		FVector2D GetResolution(); // Flags: Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75219D6B8(relative to base address)
		FTransform GetPatchToWorldTransform(); // Flags: Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75219D620(relative to base address)
		bool GetInitResolutionFromLandscape(float ResolutionMultiplier, FVector2D& ResolutionOut); // Flags: Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75219D440(relative to base address)
		ELandscapeTexturePatchSourceMode GetHeightSourceMode(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75219D388(relative to base address)
		UTextureRenderTarget2D GetHeightRenderTarget(bool bMarkDirty); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF75219D2F0(relative to base address)
		FVector2D GetFullUnscaledWorldSize(); // Flags: Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75219D2BC(relative to base address)
		TArray GetAllWeightPatchLayerNames(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75219D27C(relative to base address)
		void DisableAllWeightPatches(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF75219D264(relative to base address)
		void ClearWeightPatchBlendModeOverride(FName& InWeightmapLayerName); // Flags: Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75219D144(relative to base address)
		void AddWeightPatch(FName& InWeightmapLayerName, ELandscapeTexturePatchSourceMode SourceMode, bool bUseAlphaChannel); // Flags: Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75219CFB8(relative to base address)
	};

}
