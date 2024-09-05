#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: Water
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct Water.SphericalPontoon
	// Size: 0x2D0 (0x2D0 - 0x0)
	struct FSphericalPontoon	
	{
	public:
		FName CenterSocket; // 0x0(0x4)
		unsigned char UnknownData06_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FVector RelativeLocation; // 0x8(0x18)
		float Radius; // 0x20(0x4)
		bool bFXEnabled; // 0x24(0x1)
		unsigned char UnknownData07_6[0x3]; // 0x25(0x3) UNKNOWN PROPERTY
		FVector LocalForce; // 0x28(0x18)
		FVector CenterLocation; // 0x40(0x18)
		unsigned char UnknownData08_6[0x8]; // 0x58(0x8) UNKNOWN PROPERTY
		FQuat SocketRotation; // 0x60(0x20)
		FVector Offset; // 0x80(0x18)
		unsigned char UnknownData09_6[0x4]; // 0x98(0x4) UNKNOWN PROPERTY
		float WaterHeight; // 0x9C(0x4)
		float WaterDepth; // 0xA0(0x4)
		float ImmersionDepth; // 0xA4(0x4)
		FVector WaterPlaneLocation; // 0xA8(0x18)
		FVector WaterPlaneNormal; // 0xC0(0x18)
		FVector WaterSurfacePosition; // 0xD8(0x18)
		FVector WaterVelocity; // 0xF0(0x18)
		int32_t WaterBodyIndex; // 0x108(0x4)
		bool bIsInWater; // 0x10C(0x1)
		unsigned char UnknownData10_6[0x1AB]; // 0x10D(0x1AB) UNKNOWN PROPERTY
		UWaterBodyComponent CurrentWaterBodyComponent; // 0x2B8(0x8)
		unsigned char UnknownData11_7[0x10]; // 0x2C0(0x10) UNKNOWN PROPERTY
	};


	// Struct Water.BuoyancyData
	// Size: 0x90 (0x90 - 0x0)
	struct FBuoyancyData	
	{
	public:
		TArray Pontoons; // 0x0(0x10)
		bool bCenterPontoonsOnCOM; // 0x10(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x11(0x3) UNKNOWN PROPERTY
		float BuoyancyCoefficient; // 0x14(0x4)
		float BuoyancyDamp; // 0x18(0x4)
		float BuoyancyDamp2; // 0x1C(0x4)
		float BuoyancyRampMinVelocity; // 0x20(0x4)
		float BuoyancyRampMaxVelocity; // 0x24(0x4)
		float BuoyancyRampMax; // 0x28(0x4)
		float MaxBuoyantForce; // 0x2C(0x4)
		bool bApplyDragForcesInWater; // 0x30(0x1)
		unsigned char UnknownData05_6[0x3]; // 0x31(0x3) UNKNOWN PROPERTY
		float DragCoefficient; // 0x34(0x4)
		float DragCoefficient2; // 0x38(0x4)
		float AngularDragCoefficient; // 0x3C(0x4)
		float MaxDragSpeed; // 0x40(0x4)
		bool bApplyRiverForces; // 0x44(0x1)
		unsigned char UnknownData06_6[0x3]; // 0x45(0x3) UNKNOWN PROPERTY
		int32_t RiverPontoonIndex; // 0x48(0x4)
		float WaterShorePushFactor; // 0x4C(0x4)
		float RiverTraversalPathWidth; // 0x50(0x4)
		float MaxShorePushForce; // 0x54(0x4)
		float WaterVelocityStrength; // 0x58(0x4)
		float MaxWaterForce; // 0x5C(0x4)
		bool bAlwaysAllowLateralPush; // 0x60(0x1)
		bool bAllowCurrentWhenMovingFastUpstream; // 0x61(0x1)
		bool bApplyDownstreamAngularRotation; // 0x62(0x1)
		unsigned char UnknownData07_6[0x5]; // 0x63(0x5) UNKNOWN PROPERTY
		FVector DownstreamAxisOfRotation; // 0x68(0x18)
		float DownstreamRotationStrength; // 0x80(0x4)
		float DownstreamRotationStiffness; // 0x84(0x4)
		float DownstreamRotationAngularDamping; // 0x88(0x4)
		float DownstreamMaxAcceleration; // 0x8C(0x4)
	};


	// Struct Water.WaterBodyStaticMeshSettings
	// Size: 0x10 (0x10 - 0x0)
	struct FWaterBodyStaticMeshSettings	
	{
	public:
		bool bEnableWaterBodyStaticMesh; // 0x0(0x1)
		bool bSectionWaterBodyStaticMesh; // 0x1(0x1)
		unsigned char UnknownData01_6[0x6]; // 0x2(0x6) UNKNOWN PROPERTY
		double SectionSize; // 0x8(0x8)
	};


	// Struct Water.WaterBodyWeightmapSettings
	// Size: 0x20 (0x20 - 0x0)
	struct FWaterBodyWeightmapSettings	
	{
	public:
		float FalloffWidth; // 0x0(0x4)
		float EdgeOffset; // 0x4(0x4)
		UTexture2D ModulationTexture; // 0x8(0x8)
		float TextureTiling; // 0x10(0x4)
		float TextureInfluence; // 0x14(0x4)
		float Midpoint; // 0x18(0x4)
		float FinalOpacity; // 0x1C(0x4)
	};


	// Struct Water.WaterCurveSettings
	// Size: 0x20 (0x20 - 0x0)
	struct FWaterCurveSettings	
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


	// Struct Water.GerstnerWave
	// Size: 0x48 (0x48 - 0x0)
	struct FGerstnerWave	
	{
	public:
		float WaveLength; // 0x0(0x4)
		float Amplitude; // 0x4(0x4)
		float Steepness; // 0x8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FVector Direction; // 0x10(0x18)
		FVector2D WaveVector; // 0x28(0x10)
		float WaveSpeed; // 0x38(0x4)
		float WKA; // 0x3C(0x4)
		float Q; // 0x40(0x4)
		float PhaseOffset; // 0x44(0x4)
	};


	// Struct Water.GerstnerWaveOctave
	// Size: 0x14 (0x14 - 0x0)
	struct FGerstnerWaveOctave	
	{
	public:
		int32_t NumWaves; // 0x0(0x4)
		float AmplitudeScale; // 0x4(0x4)
		float MainDirection; // 0x8(0x4)
		float SpreadAngle; // 0xC(0x4)
		bool bUniformSpread; // 0x10(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x11(0x3) UNKNOWN PROPERTY
	};


	// Struct Water.UnderwaterPostProcessSettings
	// Size: 0x710 (0x710 - 0x0)
	struct FUnderwaterPostProcessSettings	
	{
	public:
		bool bEnabled; // 0x0(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float Priority; // 0x4(0x4)
		float BlendRadius; // 0x8(0x4)
		float BlendWeight; // 0xC(0x4)
		FPostProcessSettings PostProcessSettings; // 0x10(0x6F0)
		UMaterialInterface UnderwaterPostProcessMaterial; // 0x700(0x8)
		unsigned char UnknownData03_7[0x8]; // 0x708(0x8) UNKNOWN PROPERTY
	};


	// Struct Water.WaterBodyHeightmapSettings
	// Size: 0x80 (0x80 - 0x0)
	struct FWaterBodyHeightmapSettings	
	{
	public:
		EWaterBrushBlendType BlendMode; // 0x0(0x1)
		bool bInvertShape; // 0x1(0x1)
		unsigned char UnknownData02_6[0x2]; // 0x2(0x2) UNKNOWN PROPERTY
		FWaterFalloffSettings FalloffSettings; // 0x4(0x14)
		FWaterBrushEffects Effects; // 0x18(0x60)
		int32_t Priority; // 0x78(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x7C(0x4) UNKNOWN PROPERTY
	};


	// Struct Water.WaterBrushEffects
	// Size: 0x60 (0x60 - 0x0)
	struct FWaterBrushEffects	
	{
	public:
		FWaterBrushEffectBlurring Blurring; // 0x0(0x8)
		FWaterBrushEffectCurlNoise CurlNoise; // 0x8(0x10)
		FWaterBrushEffectDisplacement Displacement; // 0x18(0x28)
		FWaterBrushEffectSmoothBlending SmoothBlending; // 0x40(0x8)
		FWaterBrushEffectTerracing Terracing; // 0x48(0x14)
		unsigned char UnknownData01_7[0x4]; // 0x5C(0x4) UNKNOWN PROPERTY
	};


	// Struct Water.WaterBrushEffectTerracing
	// Size: 0x14 (0x14 - 0x0)
	struct FWaterBrushEffectTerracing	
	{
	public:
		float TerraceAlpha; // 0x0(0x4)
		float TerraceSpacing; // 0x4(0x4)
		float TerraceSmoothness; // 0x8(0x4)
		float MaskLength; // 0xC(0x4)
		float MaskStartOffset; // 0x10(0x4)
	};


	// Struct Water.WaterBrushEffectSmoothBlending
	// Size: 0x8 (0x8 - 0x0)
	struct FWaterBrushEffectSmoothBlending	
	{
	public:
		float InnerSmoothDistance; // 0x0(0x4)
		float OuterSmoothDistance; // 0x4(0x4)
	};


	// Struct Water.WaterBrushEffectDisplacement
	// Size: 0x28 (0x28 - 0x0)
	struct FWaterBrushEffectDisplacement	
	{
	public:
		float DisplacementHeight; // 0x0(0x4)
		float DisplacementTiling; // 0x4(0x4)
		UTexture2D Texture; // 0x8(0x8)
		float Midpoint; // 0x10(0x4)
		FLinearColor Channel; // 0x14(0x10)
		float WeightmapInfluence; // 0x24(0x4)
	};


	// Struct Water.WaterBrushEffectCurlNoise
	// Size: 0x10 (0x10 - 0x0)
	struct FWaterBrushEffectCurlNoise	
	{
	public:
		float Curl1Amount; // 0x0(0x4)
		float Curl2Amount; // 0x4(0x4)
		float Curl1Tiling; // 0x8(0x4)
		float Curl2Tiling; // 0xC(0x4)
	};


	// Struct Water.WaterBrushEffectBlurring
	// Size: 0x8 (0x8 - 0x0)
	struct FWaterBrushEffectBlurring	
	{
	public:
		bool bBlurShape; // 0x0(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		int32_t Radius; // 0x4(0x4)
	};


	// Struct Water.WaterFalloffSettings
	// Size: 0x14 (0x14 - 0x0)
	struct FWaterFalloffSettings	
	{
	public:
		EWaterBrushFalloffMode FalloffMode; // 0x0(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float FalloffAngle; // 0x4(0x4)
		float FalloffWidth; // 0x8(0x4)
		float EdgeOffset; // 0xC(0x4)
		float ZOffset; // 0x10(0x4)
	};


	// Struct Water.WaterBrushEffectCurves
	// Size: 0x20 (0x20 - 0x0)
	struct FWaterBrushEffectCurves	
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


	// Struct Water.WaterSplineCurveDefaults
	// Size: 0x10 (0x10 - 0x0)
	struct FWaterSplineCurveDefaults	
	{
	public:
		float DefaultDepth; // 0x0(0x4)
		float DefaultWidth; // 0x4(0x4)
		float DefaultVelocity; // 0x8(0x4)
		float DefaultAudioIntensity; // 0xC(0x4)
	};

}
