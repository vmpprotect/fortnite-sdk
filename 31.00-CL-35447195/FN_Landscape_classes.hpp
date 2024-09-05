#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: Landscape
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class Landscape.ControlPointMeshComponent
	// Inherited from UStaticMeshComponent -> UMeshComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x10 (0x5A0 - 0x590)
	class UControlPointMeshComponent : public UStaticMeshComponent	
	{
	public:
		float VirtualTextureMainPassMaxDrawDistance; // 0x590(0x4)
		unsigned char UnknownData01_7[0xC]; // 0x594(0xC) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Landscape.ControlPointMeshComponent");
			return ret;
		}
	};


	// Class Landscape.LandscapeBrushRenderCallAdapter_GlobalMergeLegacySupport
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class ULandscapeBrushRenderCallAdapter_GlobalMergeLegacySupport : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Landscape.LandscapeBrushRenderCallAdapter_GlobalMergeLegacySupport");
			return ret;
		}
	};


	// Class Landscape.LandscapeSplineInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class ULandscapeSplineInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Landscape.LandscapeSplineInterface");
			return ret;
		}
	};


	// Class Landscape.LandscapeProxy
	// Inherited from APartitionActor -> AActor -> UObject
	// Size: 0x500 (0x790 - 0x290)
	class ALandscapeProxy : public APartitionActor	
	{
	public:
		unsigned char UnknownData25_3[0x8]; // 0x290(0x8) UNKNOWN PROPERTY
		ULandscapeSplinesComponent SplineComponent; // 0x298(0x8)
		FGuid LandscapeGuid; // 0x2A0(0x10)
		unsigned char UnknownData26_6[0x10]; // 0x2B0(0x10) UNKNOWN PROPERTY
		bool bEnableNanite; // 0x2C0(0x1)
		unsigned char UnknownData27_6[0x7]; // 0x2C1(0x7) UNKNOWN PROPERTY
		TArray PerLODOverrideMaterials; // 0x2C8(0x10)
		bool bDisableRuntimeGrassMapGeneration; // 0x2D8(0x1)
		unsigned char UnknownData28_6[0x3]; // 0x2D9(0x3) UNKNOWN PROPERTY
		FIntPoint LandscapeSectionOffset; // 0x2DC(0x8)
		int32_t MaxLODLevel; // 0x2E4(0x4)
		float ComponentScreenSizeToUseSubSections; // 0x2E8(0x4)
		float LOD0ScreenSize; // 0x2EC(0x4)
		uint32_t LODGroupKey; // 0x2F0(0x4)
		float LOD0DistributionSetting; // 0x2F4(0x4)
		float LODDistributionSetting; // 0x2F8(0x4)
		unsigned char UnknownData29_6[0x4]; // 0x2FC(0x4) UNKNOWN PROPERTY
		FPerQualityLevelFloat ScalableLOD0ScreenSize; // 0x300(0x68)
		FPerQualityLevelFloat ScalableLOD0DistributionSetting; // 0x368(0x68)
		FPerQualityLevelFloat ScalableLODDistributionSetting; // 0x3D0(0x68)
		bool bUseScalableLODSettings; // 0x438(0x1)
		unsigned char UnknownData30_6[0x3]; // 0x439(0x3) UNKNOWN PROPERTY
		float LODBlendRange; // 0x43C(0x4)
		int32_t StaticLightingLOD; // 0x440(0x4)
		unsigned char UnknownData31_6[0x4]; // 0x444(0x4) UNKNOWN PROPERTY
		UPhysicalMaterial DefaultPhysMaterial; // 0x448(0x8)
		float StreamingDistanceMultiplier; // 0x450(0x4)
		unsigned char UnknownData32_6[0x4]; // 0x454(0x4) UNKNOWN PROPERTY
		UMaterialInterface LandscapeMaterial; // 0x458(0x8)
		UMaterialInterface LandscapeHoleMaterial; // 0x460(0x8)
		TArray RuntimeVirtualTextures; // 0x468(0x10)
		bool bSetCreateRuntimeVirtualTextureVolumes; // 0x478(0x1)
		bool bVirtualTextureRenderWithQuad; // 0x479(0x1)
		bool bVirtualTextureRenderWithQuadHQ; // 0x47A(0x1)
		unsigned char UnknownData33_6[0x1]; // 0x47B(0x1) UNKNOWN PROPERTY
		int32_t VirtualTextureNumLods; // 0x47C(0x4)
		int32_t VirtualTextureLodBias; // 0x480(0x4)
		ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType; // 0x484(0x1)
		unsigned char UnknownData34_6[0x3]; // 0x485(0x3) UNKNOWN PROPERTY
		float NegativeZBoundsExtension; // 0x488(0x4)
		float PositiveZBoundsExtension; // 0x48C(0x4)
		TArray LandscapeComponents; // 0x490(0x10)
		TArray CollisionComponents; // 0x4A0(0x10)
		TArray FoliageComponents; // 0x4B0(0x10)
		ULandscapeNaniteComponent NaniteComponent; // 0x4C0(0x8)
		TArray NaniteComponents; // 0x4C8(0x10)
		unsigned char UnknownData35_6[0x64]; // 0x4D8(0x64) UNKNOWN PROPERTY
		float GrassTypesMaxDiscardDistance; // 0x53C(0x4)
		unsigned char UnknownData36_6[0x10]; // 0x540(0x10) UNKNOWN PROPERTY
		float StaticLightingResolution; // 0x550(0x4)
		bool CastShadow : 1; // 0x554:0(0x1)
		bool bCastDynamicShadow : 1; // 0x554:1(0x1)
		bool bCastStaticShadow : 1; // 0x554:2(0x1)
		EShadowCacheInvalidationBehavior ShadowCacheInvalidationBehavior; // 0x555(0x1)
		bool bCastContactShadow : 1; // 0x556:0(0x1)
		unsigned char UnknownData37_3[0x1]; // 0x557(0x1) UNKNOWN PROPERTY
		bool bCastFarShadow : 1; // 0x558:0(0x1)
		unsigned char UnknownData38_3[0x3]; // 0x559(0x3) UNKNOWN PROPERTY
		bool bCastHiddenShadow : 1; // 0x55C:0(0x1)
		unsigned char UnknownData39_3[0x3]; // 0x55D(0x3) UNKNOWN PROPERTY
		bool bCastShadowAsTwoSided : 1; // 0x560:0(0x1)
		unsigned char UnknownData40_3[0x3]; // 0x561(0x3) UNKNOWN PROPERTY
		bool bAffectDistanceFieldLighting : 1; // 0x564:0(0x1)
		bool bAffectDynamicIndirectLighting : 1; // 0x564:1(0x1)
		bool bAffectIndirectLightingWhileHidden : 1; // 0x564:2(0x1)
		FLightingChannels LightingChannels; // 0x565(0x1)
		unsigned char UnknownData41_6[0x2]; // 0x566(0x2) UNKNOWN PROPERTY
		bool bUseMaterialPositionOffsetInStaticLighting : 1; // 0x568:0(0x1)
		unsigned char UnknownData42_5[0x3]; // 0x569(0x3) UNKNOWN PROPERTY
		float NonNaniteVirtualShadowMapConstantDepthBias; // 0x56C(0x4)
		float NonNaniteVirtualShadowMapInvalidationHeightErrorThreshold; // 0x570(0x4)
		float NonNaniteVirtualShadowMapInvalidationScreenSizeLimit; // 0x574(0x4)
		bool bHoldout : 1; // 0x578:0(0x1)
		unsigned char UnknownData43_3[0x3]; // 0x579(0x3) UNKNOWN PROPERTY
		bool bRenderCustomDepth : 1; // 0x57C:0(0x1)
		unsigned char UnknownData44_5[0x3]; // 0x57D(0x3) UNKNOWN PROPERTY
		ERendererStencilMask CustomDepthStencilWriteMask; // 0x580(0x1)
		unsigned char UnknownData45_6[0x3]; // 0x581(0x3) UNKNOWN PROPERTY
		int32_t CustomDepthStencilValue; // 0x584(0x4)
		float LDMaxDrawDistance; // 0x588(0x4)
		FLightmassPrimitiveSettings LightmassSettings; // 0x58C(0x18)
		int32_t CollisionMipLevel; // 0x5A4(0x4)
		int32_t SimpleCollisionMipLevel; // 0x5A8(0x4)
		unsigned char UnknownData46_6[0x4]; // 0x5AC(0x4) UNKNOWN PROPERTY
		FBodyInstance BodyInstance; // 0x5B0(0x170)
		bool bGenerateOverlapEvents : 1; // 0x720:0(0x1)
		bool bBakeMaterialPositionOffsetIntoCollision : 1; // 0x720:1(0x1)
		unsigned char UnknownData47_5[0x3]; // 0x721(0x3) UNKNOWN PROPERTY
		int32_t ComponentSizeQuads; // 0x724(0x4)
		int32_t SubsectionSizeQuads; // 0x728(0x4)
		int32_t NumSubsections; // 0x72C(0x4)
		bool bUsedForNavigation : 1; // 0x730:0(0x1)
		bool bFillCollisionUnderLandscapeForNavmesh : 1; // 0x730:1(0x1)
		unsigned char UnknownData48_5[0x3]; // 0x731(0x3) UNKNOWN PROPERTY
		ENavDataGatheringMode NavigationGeometryGatheringMode; // 0x734(0x1)
		bool bUseDynamicMaterialInstance; // 0x735(0x1)
		bool bUseLandscapeForCullingInvisibleHLODVertices; // 0x736(0x1)
		bool bHasLayersContent; // 0x737(0x1)
		bool bUseCompressedHeightmapStorage; // 0x738(0x1)
		bool bStripPhysicsWhenCookedClient; // 0x739(0x1)
		bool bStripPhysicsWhenCookedServer; // 0x73A(0x1)
		bool bStripGrassWhenCookedClient; // 0x73B(0x1)
		bool bStripGrassWhenCookedServer; // 0x73C(0x1)
		unsigned char UnknownData49_6[0x3]; // 0x73D(0x3) UNKNOWN PROPERTY
		TMap TargetLayers; // 0x740(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Landscape.LandscapeProxy");
			return ret;
		}

		void SetVirtualTextureRenderPassType(ERuntimeVirtualTextureMainPassType InType); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41449C658
		void SetLandscapeMaterialVectorParameterValue(FName ParameterName, FLinearColor Value); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 0x7FF41449C578
		void SetLandscapeMaterialTextureParameterValue(FName ParameterName, UTexture Value); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF41449C498
		void SetLandscapeMaterialScalarParameterValue(FName ParameterName, float Value); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF41449C3B8
		bool LandscapeExportHeightmapToRenderTarget(UTextureRenderTarget2D InRenderTarget, bool InExportHeightIntoRGChannel, bool InExportLandscapeProxies); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41449C2D8
		ALandscape GetLandscapeActor(); // Flags: Native|Public|BlueprintCallable 0x7FF41449C1F8
		void EditorSetLandscapeMaterial(UMaterialInterface NewLandscapeMaterial); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41449C118
		void EditorApplySpline(USplineComponent InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int32_t NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, ULandscapeLayerInfoObject PaintLayer, FName EditLayerName); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF41449C038
		void ChangeLODDistanceFactor(float InLODDistanceFactor); // Flags: Native|Public|BlueprintCallable 0x7FF41449BF58
		void ChangeComponentScreenSizeToUseSubSections(float InComponentScreenSizeToUseSubSections); // Flags: Native|Public|BlueprintCallable 0x7FF41449BE78
	};


	// Class Landscape.Landscape
	// Inherited from ALandscapeProxy -> APartitionActor -> AActor -> UObject
	// Size: 0x0 (0x790 - 0x790)
	class ALandscape : public ALandscapeProxy	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Landscape.Landscape");
			return ret;
		}

		bool RenderWeightmaps(FTransform InWorldTransform, FBox2D InExtents, TArray& InWeightmapLayerNames, UTextureRenderTarget OutRenderTarget); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF41449C9D8
		bool RenderWeightmap(FTransform InWorldTransform, FBox2D InExtents, FName InWeightmapLayerName, UTextureRenderTarget2D OutRenderTarget); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 0x7FF41449C8F8
		bool RenderHeightmap(FTransform InWorldTransform, FBox2D InExtents, UTextureRenderTarget2D OutRenderTarget); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 0x7FF41449C818
		TArray GetTargetLayerNames(bool bInIncludeVisibilityLayer); // Flags: Final|Native|Public|BlueprintCallable|Const 0x7FF41449C738
	};


	// Class Landscape.LandscapeLODStreamingProxy_DEPRECATED
	// Inherited from UStreamableRenderAsset -> UObject
	// Size: 0x0 (0xC8 - 0xC8)
	class ULandscapeLODStreamingProxy_DEPRECATED : public UStreamableRenderAsset	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Landscape.LandscapeLODStreamingProxy_DEPRECATED");
			return ret;
		}
	};


	// Class Landscape.LandscapeComponent
	// Inherited from UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x208 (0x6D0 - 0x4C8)
	class ULandscapeComponent : public UPrimitiveComponent	
	{
	public:
		int32_t SectionBaseX; // 0x4C8(0x4)
		int32_t SectionBaseY; // 0x4CC(0x4)
		int32_t ComponentSizeQuads; // 0x4D0(0x4)
		int32_t SubsectionSizeQuads; // 0x4D4(0x4)
		int32_t NumSubsections; // 0x4D8(0x4)
		unsigned char UnknownData07_6[0x4]; // 0x4DC(0x4) UNKNOWN PROPERTY
		UMaterialInterface OverrideMaterial; // 0x4E0(0x8)
		UMaterialInterface OverrideHoleMaterial; // 0x4E8(0x8)
		TArray MaterialInstances; // 0x4F0(0x10)
		TArray MaterialInstancesDynamic; // 0x500(0x10)
		TArray LODIndexToMaterialIndex; // 0x510(0x10)
		UTexture2D XYOffsetmapTexture; // 0x520(0x8)
		unsigned char UnknownData08_6[0x8]; // 0x528(0x8) UNKNOWN PROPERTY
		FVector4 WeightmapScaleBias; // 0x530(0x20)
		float WeightmapSubsectionOffset; // 0x550(0x4)
		unsigned char UnknownData09_6[0xC]; // 0x554(0xC) UNKNOWN PROPERTY
		FVector4 HeightmapScaleBias; // 0x560(0x20)
		FBox CachedLocalBox; // 0x580(0x38)
		TArray MipToMipMaxDeltas; // 0x5B8(0x10)
		ULandscapeHeightfieldCollisionComponent CollisionComponentRef; // 0x5C8(0x8)
		bool bUserTriggeredChangeRequested; // 0x5D0(0x1)
		bool bNaniteActive; // 0x5D1(0x1)
		unsigned char UnknownData10_6[0x6]; // 0x5D2(0x6) UNKNOWN PROPERTY
		UTexture2D HeightmapTexture; // 0x5D8(0x8)
		TArray WeightmapLayerAllocations; // 0x5E0(0x10)
		TArray WeightmapTextures; // 0x5F0(0x10)
		TArray PerLODOverrideMaterials; // 0x600(0x10)
		TArray GrassTypes; // 0x610(0x10)
		unsigned char UnknownData11_6[0x10]; // 0x620(0x10) UNKNOWN PROPERTY
		FGuid MapBuildDataId; // 0x630(0x10)
		int32_t CollisionMipLevel; // 0x640(0x4)
		int32_t SimpleCollisionMipLevel; // 0x644(0x4)
		float NegativeZBoundsExtension; // 0x648(0x4)
		float PositiveZBoundsExtension; // 0x64C(0x4)
		float StaticLightingResolution; // 0x650(0x4)
		int32_t ForcedLOD; // 0x654(0x4)
		int32_t LODBias; // 0x658(0x4)
		FGuid StateId; // 0x65C(0x10)
		unsigned char UnknownData12_6[0x4]; // 0x66C(0x4) UNKNOWN PROPERTY
		TArray MobileMaterialInterfaces; // 0x670(0x10)
		TArray MobileWeightmapTextures; // 0x680(0x10)
		UTexture2DArray MobileWeightmapTextureArray; // 0x690(0x8)
		TArray MobileWeightmapLayerAllocations; // 0x698(0x10)
		unsigned char UnknownData13_7[0x28]; // 0x6A8(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Landscape.LandscapeComponent");
			return ret;
		}

		void SetLODBias(int32_t InLODBias); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF41449CF18
		void SetForcedLOD(int32_t InForcedLOD); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF41449CE38
		UMaterialInstanceDynamic GetMaterialInstanceDynamic(int32_t InIndex); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41449CD58
		float EditorGetPaintLayerWeightByNameAtLocation(FVector& InLocation, FName InPaintLayerName); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF41449CC78
		float EditorGetPaintLayerWeightAtLocation(FVector& InLocation, ULandscapeLayerInfoObject PaintLayer); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF41449CB98
	};


	// Class Landscape.LandscapeEditLayerBase
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class ULandscapeEditLayerBase : public UObject	
	{
	public:
		TWeakObjectPtr OwningLandscape; // 0x28(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Landscape.LandscapeEditLayerBase");
			return ret;
		}
	};


	// Class Landscape.LandscapeEditLayerPersistent
	// Inherited from ULandscapeEditLayerBase -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class ULandscapeEditLayerPersistent : public ULandscapeEditLayerBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Landscape.LandscapeEditLayerPersistent");
			return ret;
		}
	};


	// Class Landscape.LandscapeEditLayer
	// Inherited from ULandscapeEditLayerPersistent -> ULandscapeEditLayerBase -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class ULandscapeEditLayer : public ULandscapeEditLayerPersistent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Landscape.LandscapeEditLayer");
			return ret;
		}
	};


	// Class Landscape.LandscapeEditLayerProcedural
	// Inherited from ULandscapeEditLayerBase -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class ULandscapeEditLayerProcedural : public ULandscapeEditLayerBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Landscape.LandscapeEditLayerProcedural");
			return ret;
		}
	};


	// Class Landscape.LandscapeEditLayerSplines
	// Inherited from ULandscapeEditLayerPersistent -> ULandscapeEditLayerBase -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class ULandscapeEditLayerSplines : public ULandscapeEditLayerPersistent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Landscape.LandscapeEditLayerSplines");
			return ret;
		}
	};


	// Class Landscape.LandscapeGizmoActor
	// Inherited from AActor -> UObject
	// Size: 0x0 (0x290 - 0x290)
	class ALandscapeGizmoActor : public AActor	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Landscape.LandscapeGizmoActor");
			return ret;
		}
	};


	// Class Landscape.LandscapeGizmoActiveActor
	// Inherited from ALandscapeGizmoActor -> AActor -> UObject
	// Size: 0x50 (0x2E0 - 0x290)
	class ALandscapeGizmoActiveActor : public ALandscapeGizmoActor	
	{
	public:
		unsigned char UnknownData01_1[0x50]; // 0x290(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Landscape.LandscapeGizmoActiveActor");
			return ret;
		}
	};


	// Class Landscape.LandscapeGizmoRenderComponent
	// Inherited from UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x8 (0x4D0 - 0x4C8)
	class ULandscapeGizmoRenderComponent : public UPrimitiveComponent	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x4C8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Landscape.LandscapeGizmoRenderComponent");
			return ret;
		}
	};


	// Class Landscape.LandscapeGrassType
	// Inherited from UObject
	// Size: 0x38 (0x60 - 0x28)
	class ULandscapeGrassType : public UObject	
	{
	public:
		TArray GrassVarieties; // 0x28(0x10)
		bool bEnableDensityScaling : 1; // 0x38:0(0x1)
		unsigned char UnknownData02_5[0x3]; // 0x39(0x3) UNKNOWN PROPERTY
		uint32_t StateHash; // 0x3C(0x4)
		UStaticMesh GrassMesh; // 0x40(0x8)
		float GrassDensity; // 0x48(0x4)
		float PlacementJitter; // 0x4C(0x4)
		int32_t StartCullDistance; // 0x50(0x4)
		int32_t EndCullDistance; // 0x54(0x4)
		bool RandomRotation; // 0x58(0x1)
		bool AlignToSurface; // 0x59(0x1)
		unsigned char UnknownData03_7[0x6]; // 0x5A(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Landscape.LandscapeGrassType");
			return ret;
		}
	};


	// Class Landscape.LandscapeHeightfieldCollisionComponent
	// Inherited from UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0xF8 (0x5C0 - 0x4C8)
	class ULandscapeHeightfieldCollisionComponent : public UPrimitiveComponent	
	{
	public:
		TArray ComponentLayerInfos; // 0x4C8(0x10)
		int32_t SectionBaseX; // 0x4D8(0x4)
		int32_t SectionBaseY; // 0x4DC(0x4)
		int32_t CollisionSizeQuads; // 0x4E0(0x4)
		float CollisionScale; // 0x4E4(0x4)
		int32_t SimpleCollisionSizeQuads; // 0x4E8(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x4EC(0x4) UNKNOWN PROPERTY
		TArray CollisionQuadFlags; // 0x4F0(0x10)
		FGuid HeightfieldGuid; // 0x500(0x10)
		FBox CachedLocalBox; // 0x510(0x38)
		ULandscapeComponent RenderComponentRef; // 0x548(0x8)
		unsigned char UnknownData04_6[0x10]; // 0x550(0x10) UNKNOWN PROPERTY
		TArray CookedPhysicalMaterials; // 0x560(0x10)
		unsigned char UnknownData05_7[0x50]; // 0x570(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Landscape.LandscapeHeightfieldCollisionComponent");
			return ret;
		}

		ULandscapeComponent GetRenderComponent(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF41449CFF8
	};


	// Class Landscape.LandscapeLayerInfoObject
	// Inherited from UObject
	// Size: 0x28 (0x50 - 0x28)
	class ULandscapeLayerInfoObject : public UObject	
	{
	public:
		FName LayerName; // 0x28(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
		UPhysicalMaterial PhysMaterial; // 0x30(0x8)
		float Hardness; // 0x38(0x4)
		FLinearColor LayerUsageDebugColor; // 0x3C(0x10)
		unsigned char UnknownData03_7[0x4]; // 0x4C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Landscape.LandscapeLayerInfoObject");
			return ret;
		}
	};


	// Class Landscape.LandscapeMaterialInstanceConstant
	// Inherited from UMaterialInstanceConstant -> UMaterialInstance -> UMaterialInterface -> UObject
	// Size: 0x18 (0x2C8 - 0x2B0)
	class ULandscapeMaterialInstanceConstant : public UMaterialInstanceConstant	
	{
	public:
		TArray TextureStreamingInfo; // 0x2B0(0x10)
		bool bIsLayerThumbnail : 1; // 0x2C0:0(0x1)
		bool bDisableTessellation : 1; // 0x2C0:1(0x1)
		bool bMobile : 1; // 0x2C0:2(0x1)
		bool bEditorToolUsage : 1; // 0x2C0:3(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x2C1(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Landscape.LandscapeMaterialInstanceConstant");
			return ret;
		}
	};


	// Class Landscape.LandscapeMeshCollisionComponent
	// Inherited from ULandscapeHeightfieldCollisionComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x20 (0x5E0 - 0x5C0)
	class ULandscapeMeshCollisionComponent : public ULandscapeHeightfieldCollisionComponent	
	{
	public:
		FGuid MeshGuid; // 0x5C0(0x10)
		unsigned char UnknownData01_7[0x10]; // 0x5D0(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Landscape.LandscapeMeshCollisionComponent");
			return ret;
		}
	};


	// Class Landscape.LandscapeMeshProxyActor
	// Inherited from AActor -> UObject
	// Size: 0x8 (0x298 - 0x290)
	class ALandscapeMeshProxyActor : public AActor	
	{
	public:
		ULandscapeMeshProxyComponent LandscapeMeshProxyComponent; // 0x290(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Landscape.LandscapeMeshProxyActor");
			return ret;
		}
	};


	// Class Landscape.LandscapeMeshProxyComponent
	// Inherited from UStaticMeshComponent -> UMeshComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x70 (0x600 - 0x590)
	class ULandscapeMeshProxyComponent : public UStaticMeshComponent	
	{
	public:
		FGuid LandscapeGuid; // 0x590(0x10)
		TArray ProxyComponentBases; // 0x5A0(0x10)
		TArray ProxyComponentCentersObjectSpace; // 0x5B0(0x10)
		FVector ComponentXVectorObjectSpace; // 0x5C0(0x18)
		FVector ComponentYVectorObjectSpace; // 0x5D8(0x18)
		int32_t ComponentResolution; // 0x5F0(0x4)
		int8_t ProxyLOD; // 0x5F4(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x5F5(0x3) UNKNOWN PROPERTY
		uint32_t LODGroupKey; // 0x5F8(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x5FC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Landscape.LandscapeMeshProxyComponent");
			return ret;
		}
	};


	// Class Landscape.LandscapeSettings
	// Inherited from UDeveloperSettings -> UObject
	// Size: 0x70 (0xA0 - 0x30)
	class ULandscapeSettings : public UDeveloperSettings	
	{
	public:
		int32_t MaxNumberOfLayers; // 0x30(0x4)
		bool bShowDialogForAutomaticLayerCreation; // 0x34(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x35(0x3) UNKNOWN PROPERTY
		int32_t MaxComponents; // 0x38(0x4)
		uint32_t MaxImageImportCacheSizeMegaBytes; // 0x3C(0x4)
		float PaintStrengthGamma; // 0x40(0x4)
		bool bDisablePaintingStartupSlowdown; // 0x44(0x1)
		ELandscapeDirtyingMode LandscapeDirtyingMode; // 0x45(0x1)
		unsigned char UnknownData05_6[0x2]; // 0x46(0x2) UNKNOWN PROPERTY
		int32_t SideResolutionLimit; // 0x48(0x4)
		unsigned char UnknownData06_6[0x4]; // 0x4C(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr DefaultLandscapeMaterial; // 0x50(0x20)
		TWeakObjectPtr DefaultLayerInfoObject; // 0x70(0x20)
		float BrushSizeUIMax; // 0x90(0x4)
		float BrushSizeClampMax; // 0x94(0x4)
		int32_t HLODMaxTextureSize; // 0x98(0x4)
		bool bRestrictiveMode; // 0x9C(0x1)
		unsigned char UnknownData07_7[0x3]; // 0x9D(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Landscape.LandscapeSettings");
			return ret;
		}
	};


	// Class Landscape.LandscapeSplinesComponent
	// Inherited from UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x38 (0x500 - 0x4C8)
	class ULandscapeSplinesComponent : public UPrimitiveComponent	
	{
	public:
		TArray ControlPoints; // 0x4C8(0x10)
		TArray Segments; // 0x4D8(0x10)
		TArray CookedForeignMeshComponents; // 0x4E8(0x10)
		unsigned char UnknownData01_7[0x8]; // 0x4F8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Landscape.LandscapeSplinesComponent");
			return ret;
		}

		TArray GetSplineMeshComponents(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF41449DA78
	};


	// Class Landscape.LandscapeSplineControlPoint
	// Inherited from UObject
	// Size: 0xB0 (0xD8 - 0x28)
	class ULandscapeSplineControlPoint : public UObject	
	{
	public:
		FVector Location; // 0x28(0x18)
		FRotator Rotation; // 0x40(0x18)
		float Width; // 0x58(0x4)
		float LayerWidthRatio; // 0x5C(0x4)
		float SideFalloff; // 0x60(0x4)
		float LeftSideFalloffFactor; // 0x64(0x4)
		float RightSideFalloffFactor; // 0x68(0x4)
		float LeftSideLayerFalloffFactor; // 0x6C(0x4)
		float RightSideLayerFalloffFactor; // 0x70(0x4)
		float EndFalloff; // 0x74(0x4)
		TArray ConnectedSegments; // 0x78(0x10)
		TArray Points; // 0x88(0x10)
		FBox Bounds; // 0x98(0x38)
		UControlPointMeshComponent LocalMeshComponent; // 0xD0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Landscape.LandscapeSplineControlPoint");
			return ret;
		}
	};


	// Class Landscape.LandscapeSplineSegment
	// Inherited from UObject
	// Size: 0x90 (0xB8 - 0x28)
	class ULandscapeSplineSegment : public UObject	
	{
	public:
		FLandscapeSplineSegmentConnection Connections; // 0x28(0x20)
		FInterpCurveVector SplineInfo; // 0x48(0x18)
		TArray Points; // 0x60(0x10)
		FBox Bounds; // 0x70(0x38)
		TArray LocalMeshComponents; // 0xA8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Landscape.LandscapeSplineSegment");
			return ret;
		}
	};


	// Class Landscape.LandscapeStreamingProxy
	// Inherited from ALandscapeProxy -> APartitionActor -> AActor -> UObject
	// Size: 0x70 (0x800 - 0x790)
	class ALandscapeStreamingProxy : public ALandscapeProxy	
	{
	public:
		TWeakObjectPtr LandscapeActorRef; // 0x790(0x20)
		TSet OverriddenSharedProperties; // 0x7B0(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Landscape.LandscapeStreamingProxy");
			return ret;
		}
	};


	// Class Landscape.LandscapeWeightmapUsage
	// Inherited from UObject
	// Size: 0x30 (0x58 - 0x28)
	class ULandscapeWeightmapUsage : public UObject	
	{
	public:
		ULandscapeComponent ChannelUsage; // 0x28(0x20)
		FGuid LayerGuid; // 0x48(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Landscape.LandscapeWeightmapUsage");
			return ret;
		}
	};


	// Class Landscape.MaterialExpressionLandscapeGrassOutput
	// Inherited from UMaterialExpressionCustomOutput -> UMaterialExpression -> UObject
	// Size: 0x10 (0xC0 - 0xB0)
	class UMaterialExpressionLandscapeGrassOutput : public UMaterialExpressionCustomOutput	
	{
	public:
		TArray GrassTypes; // 0xB0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Landscape.MaterialExpressionLandscapeGrassOutput");
			return ret;
		}
	};


	// Class Landscape.MaterialExpressionLandscapeLayerBlend
	// Inherited from UMaterialExpression -> UObject
	// Size: 0x10 (0xC0 - 0xB0)
	class UMaterialExpressionLandscapeLayerBlend : public UMaterialExpression	
	{
	public:
		TArray Layers; // 0xB0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Landscape.MaterialExpressionLandscapeLayerBlend");
			return ret;
		}
	};


	// Class Landscape.MaterialExpressionLandscapeLayerCoords
	// Inherited from UMaterialExpression -> UObject
	// Size: 0x18 (0xC8 - 0xB0)
	class UMaterialExpressionLandscapeLayerCoords : public UMaterialExpression	
	{
	public:
		TEnumAsByte MappingType; // 0xB0(0x1)
		TEnumAsByte CustomUVType; // 0xB1(0x1)
		unsigned char UnknownData02_6[0x2]; // 0xB2(0x2) UNKNOWN PROPERTY
		float MappingScale; // 0xB4(0x4)
		float MappingRotation; // 0xB8(0x4)
		float MappingPanU; // 0xBC(0x4)
		float MappingPanV; // 0xC0(0x4)
		unsigned char UnknownData03_7[0x4]; // 0xC4(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Landscape.MaterialExpressionLandscapeLayerCoords");
			return ret;
		}
	};


	// Class Landscape.ControlPointMeshActor
	// Inherited from AActor -> UObject
	// Size: 0x8 (0x298 - 0x290)
	class AControlPointMeshActor : public AActor	
	{
	public:
		UControlPointMeshComponent ControlPointMeshComponent; // 0x290(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Landscape.ControlPointMeshActor");
			return ret;
		}
	};


	// Class Landscape.LandscapeBlueprintBrushBase
	// Inherited from AActor -> UObject
	// Size: 0x0 (0x290 - 0x290)
	class ALandscapeBlueprintBrushBase : public AActor	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Landscape.LandscapeBlueprintBrushBase");
			return ret;
		}

		void RequestLandscapeUpdate(bool bInUserTriggered); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF41449DED8
		UTextureRenderTarget2D RenderLayer(FLandscapeBrushParameters& InParameters); // Flags: RequiredAPI|Native|Event|Public|HasOutParms|BlueprintEvent 0x7FF41449DDF8
		UTextureRenderTarget2D Render(bool InIsHeightmap, UTextureRenderTarget2D InCombinedResult, FName& InWeightmapLayerName); // Flags: RequiredAPI|Native|Event|Public|HasOutParms|BlueprintEvent 0x7FF41449DD18
		void Initialize(FTransform& InLandscapeTransform, FIntPoint& InLandscapeSize, FIntPoint& InLandscapeRenderTargetSize); // Flags: RequiredAPI|Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent 0x7FF41449DC38
		void GetBlueprintRenderDependencies(TArray& OutStreamableAssets); // Flags: RequiredAPI|Event|Public|HasOutParms|BlueprintEvent 0x7FF41449DB58
	};


	// Class Landscape.LandscapeHLODBuilder
	// Inherited from UHLODBuilder -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class ULandscapeHLODBuilder : public UHLODBuilder	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Landscape.LandscapeHLODBuilder");
			return ret;
		}
	};


	// Class Landscape.LandscapeInfo
	// Inherited from UObject
	// Size: 0x1D8 (0x200 - 0x28)
	class ULandscapeInfo : public UObject	
	{
	public:
		TWeakObjectPtr LandscapeActor; // 0x28(0x8)
		FGuid LandscapeGuid; // 0x30(0x10)
		int32_t ComponentSizeQuads; // 0x40(0x4)
		int32_t SubsectionSizeQuads; // 0x44(0x4)
		int32_t ComponentNumSubsections; // 0x48(0x4)
		unsigned char UnknownData02_6[0xA4]; // 0x4C(0xA4) UNKNOWN PROPERTY
		TArray StreamingProxies; // 0xF0(0x10)
		unsigned char UnknownData03_7[0x100]; // 0x100(0x100) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Landscape.LandscapeInfo");
			return ret;
		}
	};


	// Class Landscape.LandscapeInfoMap
	// Inherited from UObject
	// Size: 0x58 (0x80 - 0x28)
	class ULandscapeInfoMap : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x58]; // 0x28(0x58) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Landscape.LandscapeInfoMap");
			return ret;
		}
	};


	// Class Landscape.LandscapeNaniteComponent
	// Inherited from UStaticMeshComponent -> UMeshComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x30 (0x5C0 - 0x590)
	class ULandscapeNaniteComponent : public UStaticMeshComponent	
	{
	public:
		FGuid ProxyContentId; // 0x590(0x10)
		bool bEnabled; // 0x5A0(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x5A1(0x7) UNKNOWN PROPERTY
		TArray SourceLandscapeComponents; // 0x5A8(0x10)
		unsigned char UnknownData03_7[0x8]; // 0x5B8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Landscape.LandscapeNaniteComponent");
			return ret;
		}
	};


	// Class Landscape.LandscapeSplineActor
	// Inherited from AActor -> UObject
	// Size: 0x18 (0x2A8 - 0x290)
	class ALandscapeSplineActor : public AActor	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x290(0x8) UNKNOWN PROPERTY
		FGuid LandscapeGuid; // 0x298(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Landscape.LandscapeSplineActor");
			return ret;
		}
	};


	// Class Landscape.LandscapeSplineMeshesActor
	// Inherited from APartitionActor -> AActor -> UObject
	// Size: 0x10 (0x2A0 - 0x290)
	class ALandscapeSplineMeshesActor : public APartitionActor	
	{
	public:
		TArray StaticMeshComponents; // 0x290(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Landscape.LandscapeSplineMeshesActor");
			return ret;
		}
	};


	// Class Landscape.LandscapeSubsystem
	// Inherited from UTickableWorldSubsystem -> UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x48 (0x88 - 0x40)
	class ULandscapeSubsystem : public UTickableWorldSubsystem	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x40(0x8) UNKNOWN PROPERTY
		TArray LandscapeActors; // 0x48(0x10)
		TArray Proxies; // 0x58(0x10)
		unsigned char UnknownData03_7[0x20]; // 0x68(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Landscape.LandscapeSubsystem");
			return ret;
		}
	};


	// Class Landscape.LandscapeTextureStorageProviderFactory
	// Inherited from UTextureAllMipDataProviderFactory -> UTextureMipDataProviderFactory -> UAssetUserData -> UObject
	// Size: 0x38 (0x60 - 0x28)
	class ULandscapeTextureStorageProviderFactory : public UTextureAllMipDataProviderFactory	
	{
	public:
		unsigned char UnknownData01_1[0x38]; // 0x28(0x38) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Landscape.LandscapeTextureStorageProviderFactory");
			return ret;
		}
	};


	// Class Landscape.MaterialExpressionLandscapeLayerSample
	// Inherited from UMaterialExpression -> UObject
	// Size: 0x8 (0xB8 - 0xB0)
	class UMaterialExpressionLandscapeLayerSample : public UMaterialExpression	
	{
	public:
		FName ParameterName; // 0xB0(0x4)
		float PreviewWeight; // 0xB4(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Landscape.MaterialExpressionLandscapeLayerSample");
			return ret;
		}
	};


	// Class Landscape.MaterialExpressionLandscapeLayerSwitch
	// Inherited from UMaterialExpression -> UObject
	// Size: 0x58 (0x108 - 0xB0)
	class UMaterialExpressionLandscapeLayerSwitch : public UMaterialExpression	
	{
	public:
		FExpressionInput LayerUsed; // 0xB0(0x28)
		FExpressionInput LayerNotUsed; // 0xD8(0x28)
		FName ParameterName; // 0x100(0x4)
		bool PreviewUsed : 1; // 0x104:0(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x105(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Landscape.MaterialExpressionLandscapeLayerSwitch");
			return ret;
		}
	};


	// Class Landscape.MaterialExpressionLandscapeLayerWeight
	// Inherited from UMaterialExpression -> UObject
	// Size: 0x70 (0x120 - 0xB0)
	class UMaterialExpressionLandscapeLayerWeight : public UMaterialExpression	
	{
	public:
		FExpressionInput base; // 0xB0(0x28)
		FExpressionInput Layer; // 0xD8(0x28)
		FName ParameterName; // 0x100(0x4)
		float PreviewWeight; // 0x104(0x4)
		FVector ConstBase; // 0x108(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Landscape.MaterialExpressionLandscapeLayerWeight");
			return ret;
		}
	};


	// Class Landscape.MaterialExpressionLandscapePhysicalMaterialOutput
	// Inherited from UMaterialExpressionCustomOutput -> UMaterialExpression -> UObject
	// Size: 0x10 (0xC0 - 0xB0)
	class UMaterialExpressionLandscapePhysicalMaterialOutput : public UMaterialExpressionCustomOutput	
	{
	public:
		TArray Inputs; // 0xB0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Landscape.MaterialExpressionLandscapePhysicalMaterialOutput");
			return ret;
		}
	};


	// Class Landscape.MaterialExpressionLandscapeVisibilityMask
	// Inherited from UMaterialExpression -> UObject
	// Size: 0x0 (0xB0 - 0xB0)
	class UMaterialExpressionLandscapeVisibilityMask : public UMaterialExpression	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Landscape.MaterialExpressionLandscapeVisibilityMask");
			return ret;
		}
	};

}
