#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: JunoProceduralLandscape
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct JunoProceduralLandscape.JunoLandscapeCachedComponentKey
	// Size: 0xC (0xC - 0x0)
	struct FJunoLandscapeCachedComponentKey	
	{
	public:
		FName PackagePath; // 0x0(0x4)
		FIntPoint ComponentKey; // 0x4(0x8)
	};


	// Struct JunoProceduralLandscape.JunoLandscapeLayerInfo
	// Size: 0x30 (0x30 - 0x0)
	struct FJunoLandscapeLayerInfo	
	{
	public:
		ULandscapeLayerInfoObject LandscapeInfo; // 0x0(0x8)
		FName LayerName; // 0x8(0x4)
		char WeightmapTextureIndex; // 0xC(0x1)
		unsigned char UnknownData02_6[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
		FLinearColor WeightmapTextureMask; // 0x10(0x10)
		UPhysicalMaterial PhysicsMaterial; // 0x20(0x8)
		float MinimumCollisionRelevanceWeight; // 0x28(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
	};


	// Struct JunoProceduralLandscape.JunoLandscapeGrassAndPhysics
	// Size: 0x38 (0x38 - 0x0)
	struct FJunoLandscapeGrassAndPhysics	
	{
	public:
		uint16_t ShaderPlatform; // 0x0(0x2)
		unsigned char UnknownData01_6[0x6]; // 0x2(0x6) UNKNOWN PROPERTY
		TArray AvailableGrasses; // 0x8(0x10)
		TArray AvailablePhysicsMaterials; // 0x18(0x10)
		FGuid SavedMaterialID; // 0x28(0x10)
	};


	// Struct JunoProceduralLandscape.JunoLandscapeCustomOutputInfo
	// Size: 0x20 (0x20 - 0x0)
	struct FJunoLandscapeCustomOutputInfo	
	{
	public:
		int32_t InputIndex; // 0x0(0x4)
		int32_t OutputIndex; // 0x4(0x4)
		FName Name; // 0x8(0x4)
		bool bIsConstant; // 0xC(0x1)
		unsigned char UnknownData02_6[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
		float ConstantValue; // 0x10(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
		UObject InputObject; // 0x18(0x8)
	};


	// Struct JunoProceduralLandscape.JunoLandscapeMaterialCacheKeyBase
	// Size: 0x18 (0x18 - 0x0)
	struct FJunoLandscapeMaterialCacheKeyBase	
	{
	public:
		TArray OrderedLayers; // 0x0(0x10)
		uint32_t KeyHash; // 0x10(0x4)
		bool bIsTextureSorted; // 0x14(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x15(0x3) UNKNOWN PROPERTY
	};


	// Struct JunoProceduralLandscape.JunoLandscapeMaterialInstanceCacheKey
	// Inherited from FJunoLandscapeMaterialCacheKeyBase
	// Size: 0x0 (0x18 - 0x18)
	struct FJunoLandscapeMaterialInstanceCacheKey : public FJunoLandscapeMaterialCacheKeyBase	
	{
	public:
	};


	// Struct JunoProceduralLandscape.JunoLandscapeCombinedMaterialCacheKey
	// Inherited from FJunoLandscapeMaterialCacheKeyBase
	// Size: 0x0 (0x18 - 0x18)
	struct FJunoLandscapeCombinedMaterialCacheKey : public FJunoLandscapeMaterialCacheKeyBase	
	{
	public:
	};


	// Struct JunoProceduralLandscape.JunoLandscapeCombinedMaterialInstance
	// Size: 0x30 (0x30 - 0x0)
	struct FJunoLandscapeCombinedMaterialInstance	
	{
	public:
		TArray LandscapeInfos; // 0x0(0x10)
		UMaterialInstanceConstant MaterialInstance; // 0x10(0x8)
		UMaterialInstanceConstant CPUReadbackMaterialInstance; // 0x18(0x8)
		UMaterialInstanceDynamic CPUReadbackSharedMID; // 0x20(0x8)
		int32_t VisibilityLayerIndex; // 0x28(0x4)
		bool bAllowRenderMaterials; // 0x2C(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x2D(0x3) UNKNOWN PROPERTY
	};


	// Struct JunoProceduralLandscape.JunoLandscapeCustomRenderIdentifier
	// Size: 0x8 (0x8 - 0x0)
	struct FJunoLandscapeCustomRenderIdentifier	
	{
	public:
		FName Identifier; // 0x0(0x4)
		int32_t MipIndex; // 0x4(0x4)
	};


	// Struct JunoProceduralLandscape.JunoLandscapeComponentPrecachSettings
	// Size: 0x20 (0x20 - 0x0)
	struct FJunoLandscapeComponentPrecachSettings	
	{
	public:
		bool bPrecacheHeights; // 0x0(0x1)
		bool bPrecachePhysicalMaterials; // 0x1(0x1)
		bool bPrecacheGrass; // 0x2(0x1)
		bool bPrecacheAllWeightmaps; // 0x3(0x1)
		unsigned char UnknownData02_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TArray PrecacheWeightmaps; // 0x8(0x10)
		bool bPrecacheCustomRenders; // 0x18(0x1)
		bool bShouldKeepHeights; // 0x19(0x1)
		bool bShouldKeepPhysicalMaterials; // 0x1A(0x1)
		unsigned char UnknownData03_7[0x5]; // 0x1B(0x5) UNKNOWN PROPERTY
	};


	// Struct JunoProceduralLandscape.JunoLandscapeComponentPrecachedDataLayers
	// Size: 0xF8 (0xF8 - 0x0)
	struct FJunoLandscapeComponentPrecachedDataLayers	
	{
	public:
		TArray SerializedGrassReferences; // 0x0(0x10)
		TArray SerializedPhysicalMaterials; // 0x10(0x10)
		TArray SerializedCustomRenders; // 0x20(0x10)
		unsigned char UnknownData01_7[0xC8]; // 0x30(0xC8) UNKNOWN PROPERTY
	};


	// Struct JunoProceduralLandscape.JunoLandscapeComponentPrecachedData
	// Size: 0xE0 (0xE0 - 0x0)
	struct FJunoLandscapeComponentPrecachedData	
	{
	public:
		uint32_t ComponentQuads; // 0x0(0x4)
		unsigned char UnknownData02_6[0x2C]; // 0x4(0x2C) UNKNOWN PROPERTY
		TArray SerializedWeightmaps; // 0x30(0x10)
		unsigned char UnknownData03_6[0x50]; // 0x40(0x50) UNKNOWN PROPERTY
		TMap PrecachedLayersMap; // 0x90(0x50)
	};


	// Struct JunoProceduralLandscape.JunoLandscapeLayersGroup
	// Size: 0x18 (0x18 - 0x0)
	struct FJunoLandscapeLayersGroup	
	{
	public:
		TArray Layers; // 0x0(0x10)
		int32_t CombinationIndex; // 0x10(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct JunoProceduralLandscape.JunoLandscapeMaterialCache
	// Size: 0xA0 (0xA0 - 0x0)
	struct FJunoLandscapeMaterialCache	
	{
	public:
		TMap ExternalCombinedMaterials; // 0x0(0x50)
		TMap MaterialCombinations; // 0x50(0x50)
	};


	// Struct JunoProceduralLandscape.JunoLandscapeGenerationData
	// Size: 0x68 (0x68 - 0x0)
	struct FJunoLandscapeGenerationData	
	{
	public:
		int32_t Version; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr Generator; // 0x8(0x20)
		TWeakObjectPtr LandscapeMaterial; // 0x28(0x20)
		TWeakObjectPtr LayersData; // 0x48(0x20)
	};


	// Struct JunoProceduralLandscape.DrawToRenderTargetContext_JunoLandscape
	// Size: 0x8 (0x8 - 0x0)
	struct FDrawToRenderTargetContext_JunoLandscape	
	{
	public:
		UJunoLandscapeRenderTarget RenderTarget; // 0x0(0x8)
	};

}
