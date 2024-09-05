#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: Landmass
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct Landmass.BrushEffectBlurring
	// Size: 0x8 (0x8 - 0x0)
	struct FBrushEffectBlurring	
	{
	public:
		bool bBlurShape; // 0x0(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		int32_t Radius; // 0x4(0x4)
	};


	// Struct Landmass.BrushEffectCurlNoise
	// Size: 0x10 (0x10 - 0x0)
	struct FBrushEffectCurlNoise	
	{
	public:
		float Curl1Amount; // 0x0(0x4)
		float Curl2Amount; // 0x4(0x4)
		float Curl1Tiling; // 0x8(0x4)
		float Curl2Tiling; // 0xC(0x4)
	};


	// Struct Landmass.BrushEffectCurves
	// Size: 0x20 (0x20 - 0x0)
	struct FBrushEffectCurves	
	{
	public:
		bool bUseCurveChannel; // 0x0(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		UCurveFloat ElevationCurveAsset; // 0x8(0x8)
		float ChannelEdgeOffset; // 0x10(0x4)
		float ChannelDepth; // 0x14(0x4)
		float CurveRampWidth; // 0x18(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
	};


	// Struct Landmass.BrushEffectDisplacement
	// Size: 0x28 (0x28 - 0x0)
	struct FBrushEffectDisplacement	
	{
	public:
		float DisplacementHeight; // 0x0(0x4)
		float DisplacementTiling; // 0x4(0x4)
		UTexture2D Texture; // 0x8(0x8)
		float Midpoint; // 0x10(0x4)
		FLinearColor Channel; // 0x14(0x10)
		float WeightmapInfluence; // 0x24(0x4)
	};


	// Struct Landmass.BrushEffectSmoothBlending
	// Size: 0x8 (0x8 - 0x0)
	struct FBrushEffectSmoothBlending	
	{
	public:
		float InnerSmoothDistance; // 0x0(0x4)
		float OuterSmoothDistance; // 0x4(0x4)
	};


	// Struct Landmass.BrushEffectTerracing
	// Size: 0x14 (0x14 - 0x0)
	struct FBrushEffectTerracing	
	{
	public:
		float TerraceAlpha; // 0x0(0x4)
		float TerraceSpacing; // 0x4(0x4)
		float TerraceSmoothness; // 0x8(0x4)
		float MaskLength; // 0xC(0x4)
		float MaskStartOffset; // 0x10(0x4)
	};


	// Struct Landmass.LandmassBrushEffectsList
	// Size: 0x60 (0x60 - 0x0)
	struct FLandmassBrushEffectsList	
	{
	public:
		FBrushEffectBlurring Blurring; // 0x0(0x8)
		FBrushEffectCurlNoise CurlNoise; // 0x8(0x10)
		FBrushEffectDisplacement Displacement; // 0x18(0x28)
		FBrushEffectSmoothBlending SmoothBlending; // 0x40(0x8)
		FBrushEffectTerracing Terracing; // 0x48(0x14)
		unsigned char UnknownData01_7[0x4]; // 0x5C(0x4) UNKNOWN PROPERTY
	};


	// Struct Landmass.LandmassFalloffSettings
	// Size: 0x14 (0x14 - 0x0)
	struct FLandmassFalloffSettings	
	{
	public:
		EBrushFalloffMode FalloffMode; // 0x0(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float FalloffAngle; // 0x4(0x4)
		float FalloffWidth; // 0x8(0x4)
		float EdgeOffset; // 0xC(0x4)
		float ZOffset; // 0x10(0x4)
	};


	// Struct Landmass.LandmassTerrainCarvingSettings
	// Size: 0x80 (0x80 - 0x0)
	struct FLandmassTerrainCarvingSettings	
	{
	public:
		EBrushBlendType BlendMode; // 0x0(0x1)
		bool bInvertShape; // 0x1(0x1)
		unsigned char UnknownData02_6[0x2]; // 0x2(0x2) UNKNOWN PROPERTY
		FLandmassFalloffSettings FalloffSettings; // 0x4(0x14)
		FLandmassBrushEffectsList Effects; // 0x18(0x60)
		int32_t Priority; // 0x78(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x7C(0x4) UNKNOWN PROPERTY
	};

}
