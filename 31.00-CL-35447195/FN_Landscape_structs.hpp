#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: Landscape
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct Landscape.LandscapeLayerBrush
	// Size: 0x1 (0x1 - 0x0)
	struct FLandscapeLayerBrush	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct Landscape.LandscapeLayer
	// Size: 0x90 (0x90 - 0x0)
	struct FLandscapeLayer	
	{
	public:
		FGuid Guid; // 0x0(0x10)
		FName Name; // 0x10(0x4)
		bool bVisible; // 0x14(0x1)
		bool bLocked; // 0x15(0x1)
		unsigned char UnknownData02_6[0x2]; // 0x16(0x2) UNKNOWN PROPERTY
		float HeightmapAlpha; // 0x18(0x4)
		float WeightmapAlpha; // 0x1C(0x4)
		TEnumAsByte BlendMode; // 0x20(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x21(0x7) UNKNOWN PROPERTY
		TArray Brushes; // 0x28(0x10)
		TMap WeightmapLayerAllocationBlend; // 0x38(0x50)
		ULandscapeEditLayerBase EditLayer; // 0x88(0x8)
	};


	// Struct Landscape.LandscapeEditToolRenderData
	// Size: 0x38 (0x38 - 0x0)
	struct FLandscapeEditToolRenderData	
	{
	public:
		UMaterialInterface ToolMaterial; // 0x0(0x8)
		UMaterialInterface GizmoMaterial; // 0x8(0x8)
		int32_t SelectedType; // 0x10(0x4)
		int32_t DebugChannelR; // 0x14(0x4)
		int32_t DebugChannelG; // 0x18(0x4)
		int32_t DebugChannelB; // 0x1C(0x4)
		UTexture2D DataTexture; // 0x20(0x8)
		UTexture2D LayerContributionTexture; // 0x28(0x8)
		UTexture2D DirtyTexture; // 0x30(0x8)
	};


	// Struct Landscape.WeightmapLayerAllocationInfo
	// Size: 0x10 (0x10 - 0x0)
	struct FWeightmapLayerAllocationInfo	
	{
	public:
		ULandscapeLayerInfoObject LayerInfo; // 0x0(0x8)
		char WeightmapTextureIndex; // 0x8(0x1)
		char WeightmapTextureChannel; // 0x9(0x1)
		unsigned char UnknownData01_7[0x6]; // 0xA(0x6) UNKNOWN PROPERTY
	};


	// Struct Landscape.LandscapeComponentMaterialOverride
	// Size: 0x10 (0x10 - 0x0)
	struct FLandscapeComponentMaterialOverride	
	{
	public:
		FPerPlatformInt LODIndex; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		UMaterialInterface Material; // 0x8(0x8)
	};


	// Struct Landscape.LandscapePerLODMaterialOverride
	// Size: 0x10 (0x10 - 0x0)
	struct FLandscapePerLODMaterialOverride	
	{
	public:
		int32_t LODIndex; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		UMaterialInterface Material; // 0x8(0x8)
	};


	// Struct Landscape.WeightmapData
	// Size: 0x30 (0x30 - 0x0)
	struct FWeightmapData	
	{
	public:
		TArray Textures; // 0x0(0x10)
		TArray LayerAllocations; // 0x10(0x10)
		TArray TextureUsages; // 0x20(0x10)
	};


	// Struct Landscape.HeightmapData
	// Size: 0x8 (0x8 - 0x0)
	struct FHeightmapData	
	{
	public:
		UTexture2D Texture; // 0x0(0x8)
	};


	// Struct Landscape.LandscapeLayerComponentData
	// Size: 0x38 (0x38 - 0x0)
	struct FLandscapeLayerComponentData	
	{
	public:
		FHeightmapData HeightmapData; // 0x0(0x8)
		FWeightmapData WeightmapData; // 0x8(0x30)
	};


	// Struct Landscape.GizmoSelectData
	// Size: 0x50 (0x50 - 0x0)
	struct FGizmoSelectData	
	{
	public:
		unsigned char UnknownData01_2[0x50]; // 0x0(0x50) UNKNOWN PROPERTY
	};


	// Struct Landscape.GrassVariety
	// Size: 0x1B8 (0x1B8 - 0x0)
	struct FGrassVariety	
	{
	public:
		UStaticMesh GrassMesh; // 0x0(0x8)
		TArray OverrideMaterials; // 0x8(0x10)
		FPerPlatformFloat GrassDensity; // 0x18(0x4)
		unsigned char UnknownData08_6[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
		FPerQualityLevelFloat GrassDensityQuality; // 0x20(0x68)
		bool bUseGrid; // 0x88(0x1)
		unsigned char UnknownData09_6[0x3]; // 0x89(0x3) UNKNOWN PROPERTY
		float PlacementJitter; // 0x8C(0x4)
		FPerPlatformInt StartCullDistance; // 0x90(0x4)
		unsigned char UnknownData10_6[0x4]; // 0x94(0x4) UNKNOWN PROPERTY
		FPerQualityLevelInt StartCullDistanceQuality; // 0x98(0x68)
		FPerPlatformInt EndCullDistance; // 0x100(0x4)
		unsigned char UnknownData11_6[0x4]; // 0x104(0x4) UNKNOWN PROPERTY
		FPerQualityLevelInt EndCullDistanceQuality; // 0x108(0x68)
		int32_t MinLOD; // 0x170(0x4)
		FFloatInterval AllowedDensityRange; // 0x174(0x8)
		EGrassScaling Scaling; // 0x17C(0x1)
		unsigned char UnknownData12_6[0x3]; // 0x17D(0x3) UNKNOWN PROPERTY
		FFloatInterval ScaleX; // 0x180(0x8)
		FFloatInterval ScaleY; // 0x188(0x8)
		FFloatInterval ScaleZ; // 0x190(0x8)
		bool bWeightAttenuatesMaxScale; // 0x198(0x1)
		unsigned char UnknownData13_6[0x3]; // 0x199(0x3) UNKNOWN PROPERTY
		float MaxScaleWeightAttenuation; // 0x19C(0x4)
		bool RandomRotation; // 0x1A0(0x1)
		bool AlignToSurface; // 0x1A1(0x1)
		bool bUseLandscapeLightmap; // 0x1A2(0x1)
		FLightingChannels LightingChannels; // 0x1A3(0x1)
		bool bReceivesDecals; // 0x1A4(0x1)
		bool bAffectDistanceFieldLighting; // 0x1A5(0x1)
		bool bCastDynamicShadow; // 0x1A6(0x1)
		bool bCastContactShadow; // 0x1A7(0x1)
		bool bKeepInstanceBufferCPUCopy; // 0x1A8(0x1)
		unsigned char UnknownData14_6[0x3]; // 0x1A9(0x3) UNKNOWN PROPERTY
		uint32_t InstanceWorldPositionOffsetDisableDistance; // 0x1AC(0x4)
		EShadowCacheInvalidationBehavior ShadowCacheInvalidationBehavior; // 0x1B0(0x1)
		unsigned char UnknownData15_7[0x7]; // 0x1B1(0x7) UNKNOWN PROPERTY
	};


	// Struct Landscape.LandscapeMaterialTextureStreamingInfo
	// Size: 0x8 (0x8 - 0x0)
	struct FLandscapeMaterialTextureStreamingInfo	
	{
	public:
		FName TextureName; // 0x0(0x4)
		float TexelFactor; // 0x4(0x4)
	};


	// Struct Landscape.LandscapeSplineConnection
	// Size: 0x10 (0x10 - 0x0)
	struct FLandscapeSplineConnection	
	{
	public:
		ULandscapeSplineSegment Segment; // 0x0(0x8)
		bool End : 1; // 0x8:0(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x9(0x7) UNKNOWN PROPERTY
	};


	// Struct Landscape.ForeignControlPointData
	// Size: 0x1 (0x1 - 0x0)
	struct FForeignControlPointData	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct Landscape.ForeignSplineSegmentData
	// Size: 0x1 (0x1 - 0x0)
	struct FForeignSplineSegmentData	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct Landscape.ForeignWorldSplineData
	// Size: 0x1 (0x1 - 0x0)
	struct FForeignWorldSplineData	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct Landscape.LandscapeSplineInterpPoint
	// Size: 0xE0 (0xE0 - 0x0)
	struct FLandscapeSplineInterpPoint	
	{
	public:
		FVector Center; // 0x0(0x18)
		FVector Left; // 0x18(0x18)
		FVector Right; // 0x30(0x18)
		FVector FalloffLeft; // 0x48(0x18)
		FVector FalloffRight; // 0x60(0x18)
		FVector LayerLeft; // 0x78(0x18)
		FVector LayerRight; // 0x90(0x18)
		FVector LayerFalloffLeft; // 0xA8(0x18)
		FVector LayerFalloffRight; // 0xC0(0x18)
		float StartEndFalloff; // 0xD8(0x4)
		unsigned char UnknownData01_7[0x4]; // 0xDC(0x4) UNKNOWN PROPERTY
	};


	// Struct Landscape.LandscapeSplineSegmentConnection
	// Size: 0x10 (0x10 - 0x0)
	struct FLandscapeSplineSegmentConnection	
	{
	public:
		ULandscapeSplineControlPoint ControlPoint; // 0x0(0x8)
		float TangentLen; // 0x8(0x4)
		FName SocketName; // 0xC(0x4)
	};


	// Struct Landscape.LandscapeSplineMeshEntry
	// Size: 0x58 (0x58 - 0x0)
	struct FLandscapeSplineMeshEntry	
	{
	public:
		UStaticMesh Mesh; // 0x0(0x8)
		TArray MaterialOverrides; // 0x8(0x10)
		bool bCenterH : 1; // 0x18:0(0x1)
		unsigned char UnknownData03_5[0x7]; // 0x19(0x7) UNKNOWN PROPERTY
		FVector2D CenterAdjust; // 0x20(0x10)
		bool bScaleToWidth : 1; // 0x30:0(0x1)
		bool bNoZScaling : 1; // 0x30:1(0x1)
		unsigned char UnknownData04_5[0x7]; // 0x31(0x7) UNKNOWN PROPERTY
		FVector Scale; // 0x38(0x18)
		TEnumAsByte orientation; // 0x50(0x1)
		TEnumAsByte ForwardAxis; // 0x51(0x1)
		TEnumAsByte UpAxis; // 0x52(0x1)
		unsigned char UnknownData05_7[0x5]; // 0x53(0x5) UNKNOWN PROPERTY
	};


	// Struct Landscape.GrassInput
	// Size: 0x38 (0x38 - 0x0)
	struct FGrassInput	
	{
	public:
		FName Name; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		ULandscapeGrassType GrassType; // 0x8(0x8)
		FExpressionInput Input; // 0x10(0x28)
	};


	// Struct Landscape.LayerBlendInput
	// Size: 0x80 (0x80 - 0x0)
	struct FLayerBlendInput	
	{
	public:
		FName LayerName; // 0x0(0x4)
		TEnumAsByte BlendType; // 0x4(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
		FExpressionInput LayerInput; // 0x8(0x28)
		FExpressionInput HeightInput; // 0x30(0x28)
		float PreviewWeight; // 0x58(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x5C(0x4) UNKNOWN PROPERTY
		FVector ConstLayerInput; // 0x60(0x18)
		float ConstHeightInput; // 0x78(0x4)
		unsigned char UnknownData05_7[0x4]; // 0x7C(0x4) UNKNOWN PROPERTY
	};


	// Struct Landscape.LandscapeBrushParameters
	// Size: 0x18 (0x18 - 0x0)
	struct FLandscapeBrushParameters	
	{
	public:
		ELandscapeToolTargetType LayerType; // 0x0(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		UTextureRenderTarget2D CombinedResult; // 0x8(0x8)
		FName WeightmapLayerName; // 0x10(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct Landscape.LandscapeInfoLayerSettings
	// Size: 0x10 (0x10 - 0x0)
	struct FLandscapeInfoLayerSettings	
	{
	public:
		ULandscapeLayerInfoObject LayerInfoObj; // 0x0(0x8)
		FName LayerName; // 0x8(0x4)
		unsigned char UnknownData01_7[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
	};


	// Struct Landscape.LandscapeTargetLayerSettings
	// Size: 0x8 (0x8 - 0x0)
	struct FLandscapeTargetLayerSettings	
	{
	public:
		ULandscapeLayerInfoObject LayerInfoObj; // 0x0(0x8)
	};


	// Struct Landscape.LandscapeEditorLayerSettings
	// Size: 0x1 (0x1 - 0x0)
	struct FLandscapeEditorLayerSettings	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct Landscape.LandscapeImportLayerInfo
	// Size: 0x1 (0x1 - 0x0)
	struct FLandscapeImportLayerInfo	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct Landscape.LandscapeProxyMaterialOverride
	// Size: 0x10 (0x10 - 0x0)
	struct FLandscapeProxyMaterialOverride	
	{
	public:
		FPerPlatformInt LODIndex; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		UMaterialInterface Material; // 0x8(0x8)
	};


	// Struct Landscape.LandscapeTexture2DMipMap
	// Size: 0x38 (0x38 - 0x0)
	struct FLandscapeTexture2DMipMap	
	{
	public:
		int32_t SizeX; // 0x0(0x4)
		int32_t SizeY; // 0x4(0x4)
		bool bCompressed; // 0x8(0x1)
		unsigned char UnknownData01_7[0x2F]; // 0x9(0x2F) UNKNOWN PROPERTY
	};


	// Struct Landscape.PhysicalMaterialInput
	// Size: 0x30 (0x30 - 0x0)
	struct FPhysicalMaterialInput	
	{
	public:
		UPhysicalMaterial PhysicalMaterial; // 0x0(0x8)
		FExpressionInput Input; // 0x8(0x28)
	};

}
