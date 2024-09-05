#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: Procedural
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct Procedural.ProceduralPointCloudPoint
	// Size: 0xB0 (0xB0 - 0x0)
	struct FProceduralPointCloudPoint	
	{
	public:
		FTransform Transform; // 0x0(0x60)
		FVector SurfaceNormal; // 0x60(0x18)
		UObject SurfaceObject; // 0x78(0x8)
		UObject Object; // 0x80(0x8)
		int32_t ObjectVariation; // 0x88(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x8C(0x4) UNKNOWN PROPERTY
		TArray Tags; // 0x90(0x10)
		float CollisionRadius; // 0xA0(0x4)
		float SourcePointGeneratorIndex; // 0xA4(0x4)
		unsigned char UnknownData03_7[0x8]; // 0xA8(0x8) UNKNOWN PROPERTY
	};


	// Struct Procedural.ProceduralScatterPoint
	// Size: 0xA0 (0xA0 - 0x0)
	struct FProceduralScatterPoint	
	{
	public:
		FVector Location; // 0x0(0x18)
		FRotator Rotation; // 0x18(0x18)
		float Scale; // 0x30(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
		UProceduralScatterSettings ScatterSettings; // 0x38(0x8)
		int32_t VariationIdx; // 0x40(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x44(0x4) UNKNOWN PROPERTY
		FVector GenerationLocation; // 0x48(0x18)
		FProceduralHitPoint HitPoint; // 0x60(0x40)
	};


	// Struct Procedural.ProceduralHitPoint
	// Size: 0x40 (0x40 - 0x0)
	struct FProceduralHitPoint	
	{
	public:
		bool bIsTraceDone; // 0x0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		FVector Position; // 0x8(0x18)
		FVector Normal; // 0x20(0x18)
		TWeakObjectPtr Component; // 0x38(0x8)
	};


	// Struct Procedural.ProceduralScatterProjectionPoint
	// Size: 0xC0 (0xC0 - 0x0)
	struct FProceduralScatterProjectionPoint	
	{
	public:
		FVector GenerationLocation; // 0x0(0x18)
		FRotator Rotation; // 0x18(0x18)
		float Scale; // 0x30(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
		UProceduralScatterSettings ScatterSettings; // 0x38(0x8)
		int32_t VariationIdx; // 0x40(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x44(0x4) UNKNOWN PROPERTY
		FVector StartTrace; // 0x48(0x18)
		FVector EndTrace; // 0x60(0x18)
		FProceduralHitPoint HitPoint; // 0x78(0x40)
		unsigned char UnknownData05_7[0x8]; // 0xB8(0x8) UNKNOWN PROPERTY
	};


	// Struct Procedural.ProceduralTextureSource
	// Size: 0x38 (0x38 - 0x0)
	struct FProceduralTextureSource	
	{
	public:
		bool bUseRenderTarget; // 0x0(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		UTexture2D Texture; // 0x8(0x8)
		UTextureRenderTarget2D RenderTarget; // 0x10(0x8)
		UMaterialInterface RenderTargetMaterial; // 0x18(0x8)
		bool bStretchToFit; // 0x20(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x21(0x3) UNKNOWN PROPERTY
		float TexelSize; // 0x24(0x4)
		float XOffset; // 0x28(0x4)
		float YOffset; // 0x2C(0x4)
		float Rotation; // 0x30(0x4)
		unsigned char UnknownData05_7[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
	};


	// Struct Procedural.ProceduralContentVariationMap
	// Size: 0x18 (0x18 - 0x0)
	struct FProceduralContentVariationMap	
	{
	public:
		int32_t VariationIndex; // 0x0(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		UProceduralFloatDataMap Map; // 0x8(0x8)
		float Weight; // 0x10(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct Procedural.ProceduralRemapFloatCurve
	// Size: 0x88 (0x88 - 0x0)
	struct FProceduralRemapFloatCurve	
	{
	public:
		FRuntimeFloatCurve RemapCurve; // 0x0(0x88)
	};


	// Struct Procedural.ProceduralRemapVectorCurve
	// Size: 0x208 (0x208 - 0x0)
	struct FProceduralRemapVectorCurve	
	{
	public:
		FRuntimeCurveLinearColor RemapCurve; // 0x0(0x208)
	};


	// Struct Procedural.ProceduralDebugSettings
	// Size: 0xC (0xC - 0x0)
	struct FProceduralDebugSettings	
	{
	public:
		bool bShowDebugPointCloud; // 0x0(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		FColor DebugPointColor; // 0x4(0x4)
		float DebugCullingDistance; // 0x8(0x4)
	};


	// Struct Procedural.ProceduralGenerationStackElement
	// Size: 0x10 (0x10 - 0x0)
	struct FProceduralGenerationStackElement	
	{
	public:
		bool bEnabled; // 0x0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		UProceduralGenerator Generator; // 0x8(0x8)
	};


	// Struct Procedural.ProceduralScatter2DPoint
	// Size: 0x60 (0x60 - 0x0)
	struct FProceduralScatter2DPoint	
	{
	public:
		FVector Location; // 0x0(0x18)
		float Scale; // 0x18(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
		UProceduralScatterSettings ScatterSettings; // 0x20(0x8)
		FBox2D MaxAABB; // 0x28(0x28)
		float CollisionRadius; // 0x50(0x4)
		bool bBlocker; // 0x54(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x55(0x3) UNKNOWN PROPERTY
		int32_t RandomNumber; // 0x58(0x4)
		unsigned char UnknownData05_7[0x4]; // 0x5C(0x4) UNKNOWN PROPERTY
	};


	// Struct Procedural.ProceduralScatterSettingsElement
	// Size: 0x18 (0x18 - 0x0)
	struct FProceduralScatterSettingsElement	
	{
	public:
		bool bEnabled; // 0x0(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		UProceduralScatterSettings ScatterSettings; // 0x8(0x8)
		int32_t MaxPoints; // 0x10(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct Procedural.ProceduralScatterDebugSettings
	// Size: 0xC (0xC - 0x0)
	struct FProceduralScatterDebugSettings	
	{
	public:
		bool bShowDebugPlane; // 0x0(0x1)
		bool bShowDebugTrace; // 0x1(0x1)
		bool bShowDebugFootprint; // 0x2(0x1)
		bool bShowDebugHitNormal; // 0x3(0x1)
		bool bShowDebugPoints; // 0x4(0x1)
		bool bShowDebugPivots; // 0x5(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x6(0x2) UNKNOWN PROPERTY
		float DebugMaxCullingDistance; // 0x8(0x4)
	};


	// Struct Procedural.ProceduralScatterTileSettings
	// Size: 0x14 (0x14 - 0x0)
	struct FProceduralScatterTileSettings	
	{
	public:
		int32_t NumUniqueTiles; // 0x0(0x4)
		float TileSize; // 0x4(0x4)
		float TileOverlapPercentage; // 0x8(0x4)
		float MinimumQuadTreeSize; // 0xC(0x4)
		EProceduralScatterTileRandomGenerator RandomGenerator; // 0x10(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x11(0x3) UNKNOWN PROPERTY
	};


	// Struct Procedural.SourcePointGenerator
	// Size: 0x18 (0x18 - 0x0)
	struct FSourcePointGenerator	
	{
	public:
		unsigned char UnknownData01_2[0x18]; // 0x0(0x18) UNKNOWN PROPERTY
	};


	// Struct Procedural.ScatteredPointCloud
	// Size: 0x10 (0x10 - 0x0)
	struct FScatteredPointCloud	
	{
	public:
		TArray Points; // 0x0(0x10)
	};


	// Struct Procedural.ProceduralScatterTargetSurface
	// Size: 0x48 (0x48 - 0x0)
	struct FProceduralScatterTargetSurface	
	{
	public:
		bool bAllowLandscape; // 0x0(0x1)
		bool bAllowBSP; // 0x1(0x1)
		bool bAllowStaticMesh; // 0x2(0x1)
		bool bAllowTranslucent; // 0x3(0x1)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TArray AllowedActorTags; // 0x8(0x10)
		TArray DisallowedActorTags; // 0x18(0x10)
		TArray AllowedComponentTags; // 0x28(0x10)
		TArray DisallowedComponentTags; // 0x38(0x10)
	};


	// Struct Procedural.ProceduralContentVariationsModifiers
	// Size: 0x10 (0x10 - 0x0)
	struct FProceduralContentVariationsModifiers	
	{
	public:
		TArray Modifiers; // 0x0(0x10)
	};


	// Struct Procedural.ProceduralDensityModifiers
	// Size: 0x10 (0x10 - 0x0)
	struct FProceduralDensityModifiers	
	{
	public:
		TArray Modifiers; // 0x0(0x10)
	};


	// Struct Procedural.ProceduralScaleModifiers
	// Size: 0x20 (0x20 - 0x0)
	struct FProceduralScaleModifiers	
	{
	public:
		bool bRandomScaleEnabled; // 0x0(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		FFloatInterval RandomScale; // 0x4(0x8)
		unsigned char UnknownData03_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		TArray Modifiers; // 0x10(0x10)
	};


	// Struct Procedural.ProceduralRotationModifiers
	// Size: 0x10 (0x10 - 0x0)
	struct FProceduralRotationModifiers	
	{
	public:
		TArray Modifiers; // 0x0(0x10)
	};

}
