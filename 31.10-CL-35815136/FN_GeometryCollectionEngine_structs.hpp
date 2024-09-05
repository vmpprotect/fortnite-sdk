#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: GeometryCollectionEngine
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct GeometryCollectionEngine.ChaosBreakingEventData
	// Size: 0x38 (0x38 - 0x0)
	struct FChaosBreakingEventData	
	{
	public:
		FVector Location; // 0x0(0x18)
		FVector Velocity; // 0x18(0x18)
		float Mass; // 0x30(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
	};


	// Struct GeometryCollectionEngine.ChaosCollisionEventData
	// Size: 0x80 (0x80 - 0x0)
	struct FChaosCollisionEventData	
	{
	public:
		FVector Location; // 0x0(0x18)
		FVector Normal; // 0x18(0x18)
		FVector Velocity1; // 0x30(0x18)
		FVector Velocity2; // 0x48(0x18)
		float Mass1; // 0x60(0x4)
		float Mass2; // 0x64(0x4)
		FVector Impulse; // 0x68(0x18)
	};


	// Struct GeometryCollectionEngine.ChaosRemovalEventData
	// Size: 0x20 (0x20 - 0x0)
	struct FChaosRemovalEventData	
	{
	public:
		FVector Location; // 0x0(0x18)
		float Mass; // 0x18(0x4)
		int32_t ParticleIndex; // 0x1C(0x4)
	};


	// Struct GeometryCollectionEngine.ChaosTrailingEventData
	// Size: 0x50 (0x50 - 0x0)
	struct FChaosTrailingEventData	
	{
	public:
		FVector Location; // 0x0(0x18)
		FVector Velocity; // 0x18(0x18)
		FVector AngularVelocity; // 0x30(0x18)
		float Mass; // 0x48(0x4)
		int32_t ParticleIndex; // 0x4C(0x4)
	};


	// Struct GeometryCollectionEngine.GeometryCollectionDamagePropagationData
	// Size: 0xC (0xC - 0x0)
	struct FGeometryCollectionDamagePropagationData	
	{
	public:
		bool bEnabled; // 0x0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float BreakDamagePropagationFactor; // 0x4(0x4)
		float ShockDamagePropagationFactor; // 0x8(0x4)
	};


	// Struct GeometryCollectionEngine.GeometryCollectionRepDynamicData
	// Size: 0x18 (0x18 - 0x0)
	struct FGeometryCollectionRepDynamicData	
	{
	public:
		unsigned char UnknownData00_2[0x18]; // 0x0(0x18) UNKNOWN PROPERTY
	};


	// Struct GeometryCollectionEngine.GeometryCollectionRepStateData
	// Size: 0x40 (0x40 - 0x0)
	struct FGeometryCollectionRepStateData	
	{
	public:
		unsigned char UnknownData00_2[0x40]; // 0x0(0x40) UNKNOWN PROPERTY
	};


	// Struct GeometryCollectionEngine.GeometryCollectionRepData
	// Size: 0x38 (0x38 - 0x0)
	struct FGeometryCollectionRepData	
	{
	public:
		unsigned char UnknownData00_2[0x38]; // 0x0(0x38) UNKNOWN PROPERTY
	};


	// Struct GeometryCollectionEngine.GeomComponentCacheParameters
	// Size: 0x50 (0x50 - 0x0)
	struct FGeomComponentCacheParameters	
	{
	public:
		EGeometryCollectionCacheType CacheMode; // 0x0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		UGeometryCollectionCache* TargetCache; // 0x8(0x8)
		float ReverseCacheBeginTime; // 0x10(0x4)
		bool SaveCollisionData; // 0x14(0x1)
		bool DoGenerateCollisionData; // 0x15(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x16(0x2) UNKNOWN PROPERTY
		int32_t CollisionDataSizeMax; // 0x18(0x4)
		bool DoCollisionDataSpatialHash; // 0x1C(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x1D(0x3) UNKNOWN PROPERTY
		float CollisionDataSpatialHashRadius; // 0x20(0x4)
		int32_t MaxCollisionPerCell; // 0x24(0x4)
		bool SaveBreakingData; // 0x28(0x1)
		bool DoGenerateBreakingData; // 0x29(0x1)
		unsigned char UnknownData03_6[0x2]; // 0x2A(0x2) UNKNOWN PROPERTY
		int32_t BreakingDataSizeMax; // 0x2C(0x4)
		bool DoBreakingDataSpatialHash; // 0x30(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x31(0x3) UNKNOWN PROPERTY
		float BreakingDataSpatialHashRadius; // 0x34(0x4)
		int32_t MaxBreakingPerCell; // 0x38(0x4)
		bool SaveTrailingData; // 0x3C(0x1)
		bool DoGenerateTrailingData; // 0x3D(0x1)
		unsigned char UnknownData05_6[0x2]; // 0x3E(0x2) UNKNOWN PROPERTY
		int32_t TrailingDataSizeMax; // 0x40(0x4)
		float TrailingMinSpeedThreshold; // 0x44(0x4)
		float TrailingMinVolumeThreshold; // 0x48(0x4)
		unsigned char UnknownData06_7[0x4]; // 0x4C(0x4) UNKNOWN PROPERTY
	};


	// Struct GeometryCollectionEngine.ChaosBreakingEventRequestSettings
	// Size: 0x18 (0x18 - 0x0)
	struct FChaosBreakingEventRequestSettings	
	{
	public:
		int32_t MaxNumberOfResults; // 0x0(0x4)
		float MinRadius; // 0x4(0x4)
		float MinSpeed; // 0x8(0x4)
		float MinMass; // 0xC(0x4)
		float MaxDistance; // 0x10(0x4)
		EChaosBreakingSortMethod SortMethod; // 0x14(0x1)
		unsigned char UnknownData00_7[0x3]; // 0x15(0x3) UNKNOWN PROPERTY
	};


	// Struct GeometryCollectionEngine.ChaosCollisionEventRequestSettings
	// Size: 0x18 (0x18 - 0x0)
	struct FChaosCollisionEventRequestSettings	
	{
	public:
		int32_t MaxNumberResults; // 0x0(0x4)
		float MinMass; // 0x4(0x4)
		float MinSpeed; // 0x8(0x4)
		float MinImpulse; // 0xC(0x4)
		float MaxDistance; // 0x10(0x4)
		EChaosCollisionSortMethod SortMethod; // 0x14(0x1)
		unsigned char UnknownData00_7[0x3]; // 0x15(0x3) UNKNOWN PROPERTY
	};


	// Struct GeometryCollectionEngine.ChaosRemovalEventRequestSettings
	// Size: 0x10 (0x10 - 0x0)
	struct FChaosRemovalEventRequestSettings	
	{
	public:
		int32_t MaxNumberOfResults; // 0x0(0x4)
		float MinMass; // 0x4(0x4)
		float MaxDistance; // 0x8(0x4)
		EChaosRemovalSortMethod SortMethod; // 0xC(0x1)
		unsigned char UnknownData00_7[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
	};


	// Struct GeometryCollectionEngine.ChaosTrailingEventRequestSettings
	// Size: 0x18 (0x18 - 0x0)
	struct FChaosTrailingEventRequestSettings	
	{
	public:
		int32_t MaxNumberOfResults; // 0x0(0x4)
		float MinMass; // 0x4(0x4)
		float MinSpeed; // 0x8(0x4)
		float MinAngularSpeed; // 0xC(0x4)
		float MaxDistance; // 0x10(0x4)
		EChaosTrailingSortMethod SortMethod; // 0x14(0x1)
		unsigned char UnknownData00_7[0x3]; // 0x15(0x3) UNKNOWN PROPERTY
	};


	// Struct GeometryCollectionEngine.GeometryCollectionDebugDrawWarningMessage
	// Size: 0x1 (0x1 - 0x0)
	struct FGeometryCollectionDebugDrawWarningMessage	
	{
	public:
		unsigned char UnknownData00_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct GeometryCollectionEngine.GeometryCollectionDebugDrawActorSelectedRigidBody
	// Size: 0x18 (0x18 - 0x0)
	struct FGeometryCollectionDebugDrawActorSelectedRigidBody	
	{
	public:
		int32_t ID; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		AChaosSolverActor* Solver; // 0x8(0x8)
		AGeometryCollectionActor* GeometryCollection; // 0x10(0x8)
	};


	// Struct GeometryCollectionEngine.GeometryCollectionSource
	// Size: 0xB0 (0xB0 - 0x0)
	struct FGeometryCollectionSource	
	{
	public:
		FSoftObjectPath SourceGeometryObject; // 0x0(0x18)
		unsigned char UnknownData00_6[0x8]; // 0x18(0x8) UNKNOWN PROPERTY
		FTransform LocalTransform; // 0x20(0x60)
		TArray<UMaterialInterface*> SourceMaterial; // 0x80(0x10)
		TArray<float> InstanceCustomData; // 0x90(0x10)
		bool bAddInternalMaterials; // 0xA0(0x1)
		bool bSplitComponents; // 0xA1(0x1)
		bool bSetInternalFromMaterialIndex; // 0xA2(0x1)
		unsigned char UnknownData01_7[0xD]; // 0xA3(0xD) UNKNOWN PROPERTY
	};


	// Struct GeometryCollectionEngine.GeometryCollectionAutoInstanceMesh
	// Size: 0x30 (0x30 - 0x0)
	struct FGeometryCollectionAutoInstanceMesh	
	{
	public:
		UStaticMesh* Mesh; // 0x0(0x8)
		TArray<UMaterialInterface*> Materials; // 0x8(0x10)
		int32_t NumInstances; // 0x18(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
		TArray<float> CustomData; // 0x20(0x10)
	};


	// Struct GeometryCollectionEngine.GeometryCollectionEmbeddedExemplar
	// Size: 0x28 (0x28 - 0x0)
	struct FGeometryCollectionEmbeddedExemplar	
	{
	public:
		FSoftObjectPath StaticMeshExemplar; // 0x0(0x18)
		float StartCullDistance; // 0x18(0x4)
		float EndCullDistance; // 0x1C(0x4)
		int32_t InstanceCount; // 0x20(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
	};


	// Struct GeometryCollectionEngine.GeometryCollectionLevelSetData
	// Size: 0x10 (0x10 - 0x0)
	struct FGeometryCollectionLevelSetData	
	{
	public:
		int32_t MinLevelSetResolution; // 0x0(0x4)
		int32_t MaxLevelSetResolution; // 0x4(0x4)
		int32_t MinClusterLevelSetResolution; // 0x8(0x4)
		int32_t MaxClusterLevelSetResolution; // 0xC(0x4)
	};


	// Struct GeometryCollectionEngine.GeometryCollectionCollisionParticleData
	// Size: 0x8 (0x8 - 0x0)
	struct FGeometryCollectionCollisionParticleData	
	{
	public:
		float CollisionParticlesFraction; // 0x0(0x4)
		int32_t MaximumCollisionParticles; // 0x4(0x4)
	};


	// Struct GeometryCollectionEngine.GeometryCollectionCollisionTypeData
	// Size: 0x24 (0x24 - 0x0)
	struct FGeometryCollectionCollisionTypeData	
	{
	public:
		ECollisionTypeEnum CollisionType; // 0x0(0x1)
		EImplicitTypeEnum ImplicitType; // 0x1(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x2(0x2) UNKNOWN PROPERTY
		FGeometryCollectionLevelSetData LevelSet; // 0x4(0x10)
		FGeometryCollectionCollisionParticleData CollisionParticles; // 0x14(0x8)
		float CollisionObjectReductionPercentage; // 0x1C(0x4)
		float CollisionMarginFraction; // 0x20(0x4)
	};


	// Struct GeometryCollectionEngine.GeometryCollectionSizeSpecificData
	// Size: 0x20 (0x20 - 0x0)
	struct FGeometryCollectionSizeSpecificData	
	{
	public:
		float MaxSize; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TArray<FGeometryCollectionCollisionTypeData> CollisionShapes; // 0x8(0x10)
		int32_t DamageThreshold; // 0x18(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
	};


	// Struct GeometryCollectionEngine.GeometryCollectionProxyMeshData
	// Size: 0x10 (0x10 - 0x0)
	struct FGeometryCollectionProxyMeshData	
	{
	public:
		TArray<UStaticMesh*> ProxyMeshes; // 0x0(0x10)
	};


	// Struct GeometryCollectionEngine.GeometryCollectionRenderResourceSizeInfo
	// Size: 0x10 (0x10 - 0x0)
	struct FGeometryCollectionRenderResourceSizeInfo	
	{
	public:
		uint64_t MeshResourcesSize; // 0x0(0x8)
		uint64_t NaniteResourcesSize; // 0x8(0x8)
	};

}
