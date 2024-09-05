#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: ChaosCaching
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct ChaosCaching.CacheEventBase
	// Size: 0x8 (0x8 - 0x0)
	struct FCacheEventBase	
	{
	public:
		unsigned char UnknownData00_2[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct ChaosCaching.EnableStateEvent
	// Inherited from FCacheEventBase
	// Size: 0x8 (0x10 - 0x8)
	struct FEnableStateEvent : public FCacheEventBase	
	{
	public:
		int32_t Index; // 0x8(0x4)
		bool bEnable; // 0xC(0x1)
		unsigned char UnknownData00_7[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
	};


	// Struct ChaosCaching.BreakingEvent
	// Inherited from FCacheEventBase
	// Size: 0x88 (0x90 - 0x8)
	struct FBreakingEvent : public FCacheEventBase	
	{
	public:
		int32_t Index; // 0x8(0x4)
		unsigned char UnknownData00_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FVector Location; // 0x10(0x18)
		FVector Velocity; // 0x28(0x18)
		FVector AngularVelocity; // 0x40(0x18)
		float Mass; // 0x58(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x5C(0x4) UNKNOWN PROPERTY
		FVector BoundingBoxMin; // 0x60(0x18)
		FVector BoundingBoxMax; // 0x78(0x18)
	};


	// Struct ChaosCaching.CollisionEvent
	// Inherited from FCacheEventBase
	// Size: 0xE8 (0xF0 - 0x8)
	struct FCollisionEvent : public FCacheEventBase	
	{
	public:
		FVector Location; // 0x8(0x18)
		FVector AccumulatedImpulse; // 0x20(0x18)
		FVector Normal; // 0x38(0x18)
		FVector Velocity1; // 0x50(0x18)
		FVector Velocity2; // 0x68(0x18)
		FVector DeltaVelocity1; // 0x80(0x18)
		FVector DeltaVelocity2; // 0x98(0x18)
		FVector AngularVelocity1; // 0xB0(0x18)
		FVector AngularVelocity2; // 0xC8(0x18)
		float Mass1; // 0xE0(0x4)
		float Mass2; // 0xE4(0x4)
		float PenetrationDepth; // 0xE8(0x4)
		unsigned char UnknownData00_7[0x4]; // 0xEC(0x4) UNKNOWN PROPERTY
	};


	// Struct ChaosCaching.TrailingEvent
	// Inherited from FCacheEventBase
	// Size: 0x80 (0x88 - 0x8)
	struct FTrailingEvent : public FCacheEventBase	
	{
	public:
		int32_t Index; // 0x8(0x4)
		unsigned char UnknownData00_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FVector Location; // 0x10(0x18)
		FVector Velocity; // 0x28(0x18)
		FVector AngularVelocity; // 0x40(0x18)
		FVector BoundingBoxMin; // 0x58(0x18)
		FVector BoundingBoxMax; // 0x70(0x18)
	};


	// Struct ChaosCaching.CacheEventTrack
	// Size: 0x38 (0x38 - 0x0)
	struct FCacheEventTrack	
	{
	public:
		FName Name; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		UScriptStruct* Struct; // 0x8(0x8)
		TArray<float> TimeStamps; // 0x10(0x10)
		unsigned char UnknownData01_7[0x18]; // 0x20(0x18) UNKNOWN PROPERTY
	};


	// Struct ChaosCaching.ObservedComponent
	// Size: 0x180 (0x180 - 0x0)
	struct FObservedComponent	
	{
	public:
		FName CacheName; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FComponentReference ComponentRef; // 0x8(0x28)
		FSoftComponentReference SoftComponentRef; // 0x30(0x40)
		bool bIsSimulating; // 0x70(0x1)
		bool bPlaybackEnabled; // 0x71(0x1)
		unsigned char UnknownData01_6[0x6]; // 0x72(0x6) UNKNOWN PROPERTY
		FDirectoryPath USDCacheDirectory; // 0x78(0x10)
		unsigned char UnknownData02_7[0xF8]; // 0x88(0xF8) UNKNOWN PROPERTY
	};


	// Struct ChaosCaching.ParticleTransformTrack
	// Size: 0x48 (0x48 - 0x0)
	struct FParticleTransformTrack	
	{
	public:
		FRawAnimSequenceTrack RawTransformTrack; // 0x0(0x30)
		float BeginOffset; // 0x30(0x4)
		bool bDeactivateOnEnd; // 0x34(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x35(0x3) UNKNOWN PROPERTY
		TArray<float> KeyTimestamps; // 0x38(0x10)
	};


	// Struct ChaosCaching.PerParticleCacheData
	// Size: 0x98 (0x98 - 0x0)
	struct FPerParticleCacheData	
	{
	public:
		FParticleTransformTrack TransformData; // 0x0(0x48)
		TMap<FName, FRichCurve> CurveData; // 0x48(0x50)
	};


	// Struct ChaosCaching.CacheSpawnableTemplate
	// Size: 0xD0 (0xD0 - 0x0)
	struct FCacheSpawnableTemplate	
	{
	public:
		UObject* DuplicatedTemplate; // 0x0(0x8)
		unsigned char UnknownData00_6[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FTransform InitialTransform; // 0x10(0x60)
		FTransform ComponentTransform; // 0x70(0x60)
	};


	// Struct ChaosCaching.RichCurves
	// Size: 0x10 (0x10 - 0x0)
	struct FRichCurves	
	{
	public:
		TArray<FRichCurve> RichCurves; // 0x0(0x10)
	};


	// Struct ChaosCaching.CompressedRichCurves
	// Size: 0x10 (0x10 - 0x0)
	struct FCompressedRichCurves	
	{
	public:
		TArray<FCompressedRichCurve> CompressedRichCurves; // 0x0(0x10)
	};


	// Struct ChaosCaching.MovieSceneChaosCacheParams
	// Inherited from FMovieSceneBaseCacheParams
	// Size: 0x8 (0x28 - 0x20)
	struct FMovieSceneChaosCacheParams : public FMovieSceneBaseCacheParams	
	{
	public:
		UChaosCacheCollection* CacheCollection; // 0x20(0x8)
	};


	// Struct ChaosCaching.MovieSceneChaosCacheSectionTemplateParameters
	// Inherited from FMovieSceneBaseCacheSectionTemplateParameters
	// Size: 0x28 (0x30 - 0x8)
	struct FMovieSceneChaosCacheSectionTemplateParameters : public FMovieSceneBaseCacheSectionTemplateParameters	
	{
	public:
		FMovieSceneChaosCacheParams ChaosCacheParams; // 0x8(0x28)
	};


	// Struct ChaosCaching.MovieSceneChaosCacheSectionTemplate
	// Inherited from FMovieSceneEvalTemplate -> FMovieSceneEvalTemplateBase
	// Size: 0x30 (0x50 - 0x20)
	struct FMovieSceneChaosCacheSectionTemplate : public FMovieSceneEvalTemplate	
	{
	public:
		FMovieSceneChaosCacheSectionTemplateParameters Params; // 0x20(0x30)
	};

}
