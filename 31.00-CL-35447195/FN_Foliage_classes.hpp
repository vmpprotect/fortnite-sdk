#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: Foliage
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class Foliage.FoliageInstancedStaticMeshComponent
	// Inherited from UHierarchicalInstancedStaticMeshComponent -> UInstancedStaticMeshComponent -> UStaticMeshComponent -> UMeshComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x38 (0xAB0 - 0xA78)
	class UFoliageInstancedStaticMeshComponent : public UHierarchicalInstancedStaticMeshComponent	
	{
	public:
		FMulticastInlineDelegate OnInstanceTakePointDamage; // 0xA78(0x10)
		FMulticastInlineDelegate OnInstanceTakeRadialDamage; // 0xA88(0x10)
		bool bEnableDiscardOnLoad; // 0xA98(0x1)
		unsigned char UnknownData02_6[0x3]; // 0xA99(0x3) UNKNOWN PROPERTY
		FGuid GenerationGuid; // 0xA9C(0x10)
		unsigned char UnknownData03_7[0x4]; // 0xAAC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Foliage.FoliageInstancedStaticMeshComponent");
			return ret;
		}
	};


	// Class Foliage.FoliageType
	// Inherited from UObject
	// Size: 0x478 (0x4A0 - 0x28)
	class UFoliageType : public UObject	
	{
	public:
		FGuid UpdateGuid; // 0x28(0x10)
		float Density; // 0x38(0x4)
		float DensityAdjustmentFactor; // 0x3C(0x4)
		float Radius; // 0x40(0x4)
		bool bSingleInstanceModeOverrideRadius; // 0x44(0x1)
		unsigned char UnknownData24_6[0x3]; // 0x45(0x3) UNKNOWN PROPERTY
		float SingleInstanceModeRadius; // 0x48(0x4)
		EFoliageScaling Scaling; // 0x4C(0x1)
		unsigned char UnknownData25_6[0x3]; // 0x4D(0x3) UNKNOWN PROPERTY
		FFloatInterval ScaleX; // 0x50(0x8)
		FFloatInterval ScaleY; // 0x58(0x8)
		FFloatInterval ScaleZ; // 0x60(0x8)
		FFoliageVertexColorChannelMask VertexColorMaskByChannel; // 0x68(0x30)
		TEnumAsByte VertexColorMask; // 0x98(0x1)
		unsigned char UnknownData26_6[0x3]; // 0x99(0x3) UNKNOWN PROPERTY
		float VertexColorMaskThreshold; // 0x9C(0x4)
		bool VertexColorMaskInvert : 1; // 0xA0:0(0x1)
		unsigned char UnknownData27_5[0x3]; // 0xA1(0x3) UNKNOWN PROPERTY
		FFloatInterval ZOffset; // 0xA4(0x8)
		bool AlignToNormal : 1; // 0xAC:0(0x1)
		bool AverageNormal : 1; // 0xAC:1(0x1)
		bool AverageNormalSingleComponent : 1; // 0xAC:2(0x1)
		unsigned char UnknownData28_5[0x3]; // 0xAD(0x3) UNKNOWN PROPERTY
		float AlignMaxAngle; // 0xB0(0x4)
		bool RandomYaw : 1; // 0xB4:0(0x1)
		unsigned char UnknownData29_5[0x3]; // 0xB5(0x3) UNKNOWN PROPERTY
		float RandomPitchAngle; // 0xB8(0x4)
		FFloatInterval GroundSlopeAngle; // 0xBC(0x8)
		FFloatInterval Height; // 0xC4(0x8)
		unsigned char UnknownData30_6[0x4]; // 0xCC(0x4) UNKNOWN PROPERTY
		TArray LandscapeLayers; // 0xD0(0x10)
		float MinimumLayerWeight; // 0xE0(0x4)
		unsigned char UnknownData31_6[0x4]; // 0xE4(0x4) UNKNOWN PROPERTY
		TArray ExclusionLandscapeLayers; // 0xE8(0x10)
		float MinimumExclusionLayerWeight; // 0xF8(0x4)
		FName LandscapeLayer; // 0xFC(0x4)
		bool CollisionWithWorld : 1; // 0x100:0(0x1)
		unsigned char UnknownData32_5[0x7]; // 0x101(0x7) UNKNOWN PROPERTY
		FVector CollisionScale; // 0x108(0x18)
		int32_t AverageNormalSampleCount; // 0x120(0x4)
		unsigned char UnknownData33_6[0x4]; // 0x124(0x4) UNKNOWN PROPERTY
		FBoxSphereBounds MeshBounds; // 0x128(0x38)
		FVector LowBoundOriginRadius; // 0x160(0x18)
		TEnumAsByte Mobility; // 0x178(0x1)
		unsigned char UnknownData34_6[0x3]; // 0x179(0x3) UNKNOWN PROPERTY
		FInt32Interval CullDistance; // 0x17C(0x8)
		bool bEnableStaticLighting : 1; // 0x184:0(0x1)
		bool CastShadow : 1; // 0x184:1(0x1)
		bool bAffectDynamicIndirectLighting : 1; // 0x184:2(0x1)
		bool bAffectDistanceFieldLighting : 1; // 0x184:3(0x1)
		bool bCastDynamicShadow : 1; // 0x184:4(0x1)
		bool bCastStaticShadow : 1; // 0x184:5(0x1)
		unsigned char UnknownData35_3[0x3]; // 0x185(0x3) UNKNOWN PROPERTY
		bool bCastContactShadow : 1; // 0x188:0(0x1)
		unsigned char UnknownData36_3[0x3]; // 0x189(0x3) UNKNOWN PROPERTY
		bool bCastShadowAsTwoSided : 1; // 0x18C:0(0x1)
		bool bReceivesDecals : 1; // 0x18C:1(0x1)
		bool bOverrideLightMapRes : 1; // 0x18C:2(0x1)
		unsigned char UnknownData37_5[0x3]; // 0x18D(0x3) UNKNOWN PROPERTY
		EShadowCacheInvalidationBehavior ShadowCacheInvalidationBehavior; // 0x190(0x1)
		unsigned char UnknownData38_6[0x3]; // 0x191(0x3) UNKNOWN PROPERTY
		int32_t OverriddenLightMapRes; // 0x194(0x4)
		ELightmapType LightmapType; // 0x198(0x1)
		unsigned char UnknownData39_6[0x3]; // 0x199(0x3) UNKNOWN PROPERTY
		bool bUseAsOccluder : 1; // 0x19C:0(0x1)
		unsigned char UnknownData40_3[0x3]; // 0x19D(0x3) UNKNOWN PROPERTY
		bool bVisibleInRayTracing : 1; // 0x1A0:0(0x1)
		bool bEvaluateWorldPositionOffset : 1; // 0x1A0:1(0x1)
		unsigned char UnknownData41_5[0x3]; // 0x1A1(0x3) UNKNOWN PROPERTY
		int32_t WorldPositionOffsetDisableDistance; // 0x1A4(0x4)
		FBodyInstance BodyInstance; // 0x1A8(0x170)
		TEnumAsByte CustomNavigableGeometry; // 0x318(0x1)
		FLightingChannels LightingChannels; // 0x319(0x1)
		unsigned char UnknownData42_6[0x2]; // 0x31A(0x2) UNKNOWN PROPERTY
		bool bRenderCustomDepth : 1; // 0x31C:0(0x1)
		unsigned char UnknownData43_5[0x3]; // 0x31D(0x3) UNKNOWN PROPERTY
		ERendererStencilMask CustomDepthStencilWriteMask; // 0x320(0x1)
		unsigned char UnknownData44_6[0x3]; // 0x321(0x3) UNKNOWN PROPERTY
		int32_t CustomDepthStencilValue; // 0x324(0x4)
		int32_t TranslucencySortPriority; // 0x328(0x4)
		float CollisionRadius; // 0x32C(0x4)
		float ShadeRadius; // 0x330(0x4)
		int32_t NumSteps; // 0x334(0x4)
		float InitialSeedDensity; // 0x338(0x4)
		float AverageSpreadDistance; // 0x33C(0x4)
		float SpreadVariance; // 0x340(0x4)
		int32_t SeedsPerStep; // 0x344(0x4)
		int32_t DistributionSeed; // 0x348(0x4)
		float MaxInitialSeedOffset; // 0x34C(0x4)
		bool bCanGrowInShade; // 0x350(0x1)
		bool bSpawnsInShade; // 0x351(0x1)
		unsigned char UnknownData45_6[0x2]; // 0x352(0x2) UNKNOWN PROPERTY
		float MaxInitialAge; // 0x354(0x4)
		float MaxAge; // 0x358(0x4)
		float OverlapPriority; // 0x35C(0x4)
		FFloatInterval ProceduralScale; // 0x360(0x8)
		FRuntimeFloatCurve ScaleCurve; // 0x368(0x88)
		FFoliageDensityFalloff DensityFalloff; // 0x3F0(0x90)
		int32_t ChangeCount; // 0x480(0x4)
		bool ReapplyDensity : 1; // 0x484:0(0x1)
		bool ReapplyRadius : 1; // 0x484:1(0x1)
		bool ReapplyAlignToNormal : 1; // 0x484:2(0x1)
		bool ReapplyRandomYaw : 1; // 0x484:3(0x1)
		bool ReapplyScaling : 1; // 0x484:4(0x1)
		bool ReapplyScaleX : 1; // 0x484:5(0x1)
		bool ReapplyScaleY : 1; // 0x484:6(0x1)
		bool ReapplyScaleZ : 1; // 0x484:7(0x1)
		bool ReapplyRandomPitchAngle : 1; // 0x485:0(0x1)
		bool ReapplyGroundSlope : 1; // 0x485:1(0x1)
		bool ReapplyHeight : 1; // 0x485:2(0x1)
		bool ReapplyLandscapeLayers : 1; // 0x485:3(0x1)
		bool ReapplyZOffset : 1; // 0x485:4(0x1)
		bool ReapplyCollisionWithWorld : 1; // 0x485:5(0x1)
		bool ReapplyVertexColorMask : 1; // 0x485:6(0x1)
		bool bEnableDensityScaling : 1; // 0x485:7(0x1)
		bool bEnableDiscardOnLoad : 1; // 0x486:0(0x1)
		bool bEnableCullDistanceScaling : 1; // 0x486:1(0x1)
		unsigned char UnknownData46_5[0x1]; // 0x487(0x1) UNKNOWN PROPERTY
		TArray RuntimeVirtualTextures; // 0x488(0x10)
		int32_t VirtualTextureCullMips; // 0x498(0x4)
		ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType; // 0x49C(0x1)
		unsigned char UnknownData47_7[0x3]; // 0x49D(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Foliage.FoliageType");
			return ret;
		}
	};


	// Class Foliage.FoliageType_Actor
	// Inherited from UFoliageType -> UObject
	// Size: 0x18 (0x4B8 - 0x4A0)
	class UFoliageType_Actor : public UFoliageType	
	{
	public:
		UClass ActorClass; // 0x4A0(0x8)
		bool bShouldAttachToBaseComponent; // 0x4A8(0x1)
		bool bStaticMeshOnly; // 0x4A9(0x1)
		unsigned char UnknownData01_6[0x6]; // 0x4AA(0x6) UNKNOWN PROPERTY
		UClass StaticMeshOnlyComponentClass; // 0x4B0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Foliage.FoliageType_Actor");
			return ret;
		}
	};


	// Class Foliage.FoliageType_InstancedStaticMesh
	// Inherited from UFoliageType -> UObject
	// Size: 0x30 (0x4D0 - 0x4A0)
	class UFoliageType_InstancedStaticMesh : public UFoliageType	
	{
	public:
		UStaticMesh Mesh; // 0x4A0(0x8)
		TArray OverrideMaterials; // 0x4A8(0x10)
		TArray NaniteOverrideMaterials; // 0x4B8(0x10)
		UClass ComponentClass; // 0x4C8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Foliage.FoliageType_InstancedStaticMesh");
			return ret;
		}
	};


	// Class Foliage.InstancedFoliageActor
	// Inherited from AISMPartitionActor -> APartitionActor -> AActor -> UObject
	// Size: 0x50 (0x2F0 - 0x2A0)
	class AInstancedFoliageActor : public AISMPartitionActor	
	{
	public:
		unsigned char UnknownData01_1[0x50]; // 0x2A0(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Foliage.InstancedFoliageActor");
			return ret;
		}
	};


	// Class Foliage.InteractiveFoliageComponent
	// Inherited from UStaticMeshComponent -> UMeshComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x10 (0x5A0 - 0x590)
	class UInteractiveFoliageComponent : public UStaticMeshComponent	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0x590(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Foliage.InteractiveFoliageComponent");
			return ret;
		}
	};


	// Class Foliage.FoliageStatistics
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFoliageStatistics : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Foliage.FoliageStatistics");
			return ret;
		}

		int32_t FoliageOverlappingSphereCount(UObject WorldContextObject, UStaticMesh StaticMesh, FVector CenterPosition, float Radius); // Flags: Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF41449BAF8
		void FoliageOverlappingBoxTransforms(UObject WorldContextObject, UStaticMesh StaticMesh, FBox Box, TArray& OutTransforms); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF41449BA18
		int32_t FoliageOverlappingBoxCount(UObject WorldContextObject, UStaticMesh StaticMesh, FBox Box); // Flags: Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable 0x7FF41449B938
	};


	// Class Foliage.GrassInstancedStaticMeshComponent
	// Inherited from UHierarchicalInstancedStaticMeshComponent -> UInstancedStaticMeshComponent -> UStaticMeshComponent -> UMeshComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x8 (0xA80 - 0xA78)
	class UGrassInstancedStaticMeshComponent : public UHierarchicalInstancedStaticMeshComponent	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0xA78(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Foliage.GrassInstancedStaticMeshComponent");
			return ret;
		}
	};


	// Class Foliage.InteractiveFoliageActor
	// Inherited from AStaticMeshActor -> AActor -> UObject
	// Size: 0x90 (0x330 - 0x2A0)
	class AInteractiveFoliageActor : public AStaticMeshActor	
	{
	public:
		UCapsuleComponent CapsuleComponent; // 0x2A0(0x8)
		FVector TouchingActorEntryPosition; // 0x2A8(0x18)
		FVector FoliageVelocity; // 0x2C0(0x18)
		FVector FoliageForce; // 0x2D8(0x18)
		FVector FoliagePosition; // 0x2F0(0x18)
		float FoliageDamageImpulseScale; // 0x308(0x4)
		float FoliageTouchImpulseScale; // 0x30C(0x4)
		float FoliageStiffness; // 0x310(0x4)
		float FoliageStiffnessQuadratic; // 0x314(0x4)
		float FoliageDamping; // 0x318(0x4)
		float MaxDamageImpulse; // 0x31C(0x4)
		float MaxTouchImpulse; // 0x320(0x4)
		float MaxForce; // 0x324(0x4)
		float Mass; // 0x328(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x32C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Foliage.InteractiveFoliageActor");
			return ret;
		}

		void CapsuleTouched(UPrimitiveComponent OverlappedComp, AActor Other, UPrimitiveComponent OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& OverlapInfo); // Flags: Final|Native|Protected|HasOutParms 0x7FF41449BCB8
	};


	// Class Foliage.ProceduralFoliageBlockingVolume
	// Inherited from AVolume -> ABrush -> AActor -> UObject
	// Size: 0x98 (0x360 - 0x2C8)
	class AProceduralFoliageBlockingVolume : public AVolume	
	{
	public:
		AProceduralFoliageVolume ProceduralFoliageVolume; // 0x2C8(0x8)
		FFoliageDensityFalloff DensityFalloff; // 0x2D0(0x90)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Foliage.ProceduralFoliageBlockingVolume");
			return ret;
		}
	};


	// Class Foliage.ProceduralFoliageComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x28 (0xC8 - 0xA0)
	class UProceduralFoliageComponent : public UActorComponent	
	{
	public:
		UProceduralFoliageSpawner FoliageSpawner; // 0xA0(0x8)
		float TileOverlap; // 0xA8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xAC(0x4) UNKNOWN PROPERTY
		AVolume SpawningVolume; // 0xB0(0x8)
		FGuid ProceduralGuid; // 0xB8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Foliage.ProceduralFoliageComponent");
			return ret;
		}
	};


	// Class Foliage.ProceduralFoliageSpawner
	// Inherited from UObject
	// Size: 0x58 (0x80 - 0x28)
	class UProceduralFoliageSpawner : public UObject	
	{
	public:
		int32_t RandomSeed; // 0x28(0x4)
		float TileSize; // 0x2C(0x4)
		int32_t NumUniqueTiles; // 0x30(0x4)
		float MinimumQuadTreeSize; // 0x34(0x4)
		unsigned char UnknownData03_6[0x8]; // 0x38(0x8) UNKNOWN PROPERTY
		TArray FoliageTypes; // 0x40(0x10)
		bool bUseOverrideFoliageTerrainMaterials; // 0x50(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x51(0x7) UNKNOWN PROPERTY
		TArray OverrideFoliageTerrainMaterials; // 0x58(0x10)
		unsigned char UnknownData05_7[0x18]; // 0x68(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Foliage.ProceduralFoliageSpawner");
			return ret;
		}

		void Simulate(int32_t NumSteps); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF41449BD98
	};


	// Class Foliage.ProceduralFoliageTile
	// Inherited from UObject
	// Size: 0x148 (0x170 - 0x28)
	class UProceduralFoliageTile : public UObject	
	{
	public:
		UProceduralFoliageSpawner FoliageSpawner; // 0x28(0x8)
		unsigned char UnknownData02_6[0xA0]; // 0x30(0xA0) UNKNOWN PROPERTY
		TArray InstancesArray; // 0xD0(0x10)
		unsigned char UnknownData03_7[0x90]; // 0xE0(0x90) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Foliage.ProceduralFoliageTile");
			return ret;
		}
	};


	// Class Foliage.ProceduralFoliageVolume
	// Inherited from AVolume -> ABrush -> AActor -> UObject
	// Size: 0x10 (0x2D8 - 0x2C8)
	class AProceduralFoliageVolume : public AVolume	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x2C8(0x8) UNKNOWN PROPERTY
		UProceduralFoliageComponent ProceduralComponent; // 0x2D0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Foliage.ProceduralFoliageVolume");
			return ret;
		}
	};

}
