#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: PCG
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct PCG.PCGAssetExporterParameters
	// Size: 0x30 (0x30 - 0x0)
	struct FPCGAssetExporterParameters	
	{
	public:
		bool bOpenSaveDialog; // 0x0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		FString AssetName; // 0x8(0x10)
		FString AssetPath; // 0x18(0x10)
		unsigned char UnknownData01_7[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
	};


	// Struct PCG.PCGAttributeExtractorTestStructDepth2
	// Size: 0x4 (0x4 - 0x0)
	struct FPCGAttributeExtractorTestStructDepth2	
	{
	public:
		int32_t IntValue; // 0x0(0x4)
	};


	// Struct PCG.PCGAttributeExtractorTestStructDepth1
	// Size: 0x8 (0x8 - 0x0)
	struct FPCGAttributeExtractorTestStructDepth1	
	{
	public:
		FPCGAttributeExtractorTestStructDepth2 Depth2Struct; // 0x0(0x4)
		float FloatValue; // 0x4(0x4)
	};


	// Struct PCG.PCGAttributeExtractorTestStruct
	// Size: 0x10 (0x10 - 0x0)
	struct FPCGAttributeExtractorTestStruct	
	{
	public:
		FPCGAttributeExtractorTestStructDepth1 DepthStruct; // 0x0(0x8)
		UPCGAttributeExtractorTestObject* Object; // 0x8(0x8)
	};


	// Struct PCG.PCGAttributeFilterThresholdSettings
	// Size: 0x1A0 (0x1A0 - 0x0)
	struct FPCGAttributeFilterThresholdSettings	
	{
	public:
		bool bInclusive; // 0x0(0x1)
		bool bUseConstantThreshold; // 0x1(0x1)
		unsigned char UnknownData00_6[0x6]; // 0x2(0x6) UNKNOWN PROPERTY
		FPCGAttributePropertyInputSelector ThresholdAttribute; // 0x8(0x28)
		bool bUseSpatialQuery; // 0x30(0x1)
		unsigned char UnknownData01_6[0xF]; // 0x31(0xF) UNKNOWN PROPERTY
		FPCGMetadataTypesConstantStruct AttributeTypes; // 0x40(0x160)
	};


	// Struct PCG.PCGMetadataTypesConstantStruct
	// Size: 0x160 (0x160 - 0x0)
	struct FPCGMetadataTypesConstantStruct	
	{
	public:
		EPCGMetadataTypes Type; // 0x0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		EPCGMetadataTypesConstantStructStringMode StringMode; // 0x4(0x4)
		float FloatValue; // 0x8(0x4)
		int32_t Int32Value; // 0xC(0x4)
		double DoubleValue; // 0x10(0x8)
		int64_t IntValue; // 0x18(0x8)
		FVector2D Vector2Value; // 0x20(0x10)
		FVector VectorValue; // 0x30(0x18)
		unsigned char UnknownData01_6[0x8]; // 0x48(0x8) UNKNOWN PROPERTY
		FVector4 Vector4Value; // 0x50(0x20)
		FQuat QuatValue; // 0x70(0x20)
		FTransform TransformValue; // 0x90(0x60)
		FString StringValue; // 0xF0(0x10)
		bool BoolValue; // 0x100(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x101(0x7) UNKNOWN PROPERTY
		FRotator RotatorValue; // 0x108(0x18)
		FName NameValue; // 0x120(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x124(0x4) UNKNOWN PROPERTY
		FSoftClassPath SoftClassPathValue; // 0x128(0x18)
		FSoftObjectPath SoftObjectPathValue; // 0x140(0x18)
		bool bAllowsTypeChange; // 0x158(0x1)
		unsigned char UnknownData04_7[0x7]; // 0x159(0x7) UNKNOWN PROPERTY
	};


	// Struct PCG.PCGAttributePropertySelector
	// Size: 0x28 (0x28 - 0x0)
	struct FPCGAttributePropertySelector	
	{
	public:
		unsigned char UnknownData00_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		EPCGAttributePropertySelection Selection; // 0x8(0x4)
		FName AttributeName; // 0xC(0x4)
		EPCGPointProperties PointProperty; // 0x10(0x1)
		EPCGExtraProperties ExtraProperty; // 0x11(0x1)
		unsigned char UnknownData01_6[0x6]; // 0x12(0x6) UNKNOWN PROPERTY
		TArray<FString> ExtraNames; // 0x18(0x10)
	};


	// Struct PCG.PCGAttributePropertyInputSelector
	// Inherited from FPCGAttributePropertySelector
	// Size: 0x0 (0x28 - 0x28)
	struct FPCGAttributePropertyInputSelector : public FPCGAttributePropertySelector	
	{
	public:
	};


	// Struct PCG.PCGAttributePropertyOutputSelector
	// Inherited from FPCGAttributePropertySelector
	// Size: 0x0 (0x28 - 0x28)
	struct FPCGAttributePropertyOutputSelector : public FPCGAttributePropertySelector	
	{
	public:
	};


	// Struct PCG.PCGAttributePropertyOutputNoSourceSelector
	// Inherited from FPCGAttributePropertySelector
	// Size: 0x0 (0x28 - 0x28)
	struct FPCGAttributePropertyOutputNoSourceSelector : public FPCGAttributePropertySelector	
	{
	public:
	};


	// Struct PCG.PCGRuntimeGenerationRadii
	// Size: 0x60 (0x60 - 0x0)
	struct FPCGRuntimeGenerationRadii	
	{
	public:
		double GenerationRadius; // 0x0(0x8)
		double GenerationRadius400; // 0x8(0x8)
		double GenerationRadius800; // 0x10(0x8)
		double GenerationRadius1600; // 0x18(0x8)
		double GenerationRadius3200; // 0x20(0x8)
		double GenerationRadius6400; // 0x28(0x8)
		double GenerationRadius12800; // 0x30(0x8)
		double GenerationRadius25600; // 0x38(0x8)
		double GenerationRadius51200; // 0x40(0x8)
		double GenerationRadius102400; // 0x48(0x8)
		double GenerationRadius204800; // 0x50(0x8)
		double CleanupRadiusMultiplier; // 0x58(0x8)
	};


	// Struct PCG.PCGPartitionActorRecord
	// Size: 0x20 (0x20 - 0x0)
	struct FPCGPartitionActorRecord	
	{
	public:
		FGuid GridGuid; // 0x0(0x10)
		uint32_t GridSize; // 0x10(0x4)
		FIntVector GridCoords; // 0x14(0xC)
	};


	// Struct PCG.EnumSelector
	// Size: 0x10 (0x10 - 0x0)
	struct FEnumSelector	
	{
	public:
		UEnum* Class; // 0x0(0x8)
		int64_t Value; // 0x8(0x8)
	};


	// Struct PCG.PCGCrc
	// Size: 0x8 (0x8 - 0x0)
	struct FPCGCrc	
	{
	public:
		uint32_t Value; // 0x0(0x4)
		bool bValid; // 0x4(0x1)
		unsigned char UnknownData00_7[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
	};


	// Struct PCG.PCGDataTableRowToParamDataTestStruct
	// Size: 0xA0 (0xA0 - 0x0)
	struct FPCGDataTableRowToParamDataTestStruct	
	{
	public:
		FName Name; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FString String; // 0x8(0x10)
		int32_t I32; // 0x18(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
		int64_t I64; // 0x20(0x8)
		float F32; // 0x28(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
		double F64; // 0x30(0x8)
		FVector2D v2; // 0x38(0x10)
		FVector V3; // 0x48(0x18)
		FVector4 V4; // 0x60(0x20)
		FSoftObjectPath SoftPath; // 0x80(0x18)
		unsigned char UnknownData03_7[0x8]; // 0x98(0x8) UNKNOWN PROPERTY
	};


	// Struct PCG.PCGDeterminismSettings
	// Size: 0x10 (0x10 - 0x0)
	struct FPCGDeterminismSettings	
	{
	public:
		bool bNativeTests; // 0x0(0x1)
		bool bUseBlueprintDeterminismTest; // 0x1(0x1)
		unsigned char UnknownData00_6[0x6]; // 0x2(0x6) UNKNOWN PROPERTY
		UClass* DeterminismTestBlueprint; // 0x8(0x8)
	};


	// Struct PCG.PCGDummyGetPropertyLevel2Struct
	// Size: 0x10 (0x10 - 0x0)
	struct FPCGDummyGetPropertyLevel2Struct	
	{
	public:
		TArray<double> DoubleArrayProperty; // 0x0(0x10)
	};


	// Struct PCG.PCGDummyGetPropertyStruct
	// Size: 0x28 (0x28 - 0x0)
	struct FPCGDummyGetPropertyStruct	
	{
	public:
		TArray<int32_t> IntArrayProperty; // 0x0(0x10)
		float FloatProperty; // 0x10(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
		FPCGDummyGetPropertyLevel2Struct Level2Struct; // 0x18(0x10)
	};


	// Struct PCG.PCGTestMyColorStruct
	// Size: 0x20 (0x20 - 0x0)
	struct FPCGTestMyColorStruct	
	{
	public:
		double B; // 0x0(0x8)
		double G; // 0x8(0x8)
		double R; // 0x10(0x8)
		double A; // 0x18(0x8)
	};


	// Struct PCG.PCGGridDescriptor
	// Size: 0x14 (0x14 - 0x0)
	struct FPCGGridDescriptor	
	{
	public:
		uint32_t GridSize; // 0x0(0x4)
		bool bIs2DGrid; // 0x4(0x1)
		bool bIsRuntime; // 0x5(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x6(0x2) UNKNOWN PROPERTY
		uint32_t RuntimeHash; // 0x8(0x4)
		unsigned char UnknownData01_7[0x8]; // 0xC(0x8) UNKNOWN PROPERTY
	};


	// Struct PCG.PCGGridCellDescriptor
	// Size: 0x20 (0x20 - 0x0)
	struct FPCGGridCellDescriptor	
	{
	public:
		FPCGGridDescriptor Descriptor; // 0x0(0x14)
		FIntVector GridCoords; // 0x14(0xC)
	};


	// Struct PCG.PCGObjectPropertyOverrideDescription
	// Size: 0x38 (0x38 - 0x0)
	struct FPCGObjectPropertyOverrideDescription	
	{
	public:
		FPCGAttributePropertyInputSelector InputSource; // 0x0(0x28)
		FString PropertyTarget; // 0x28(0x10)
	};


	// Struct PCG.PCGActorPropertyOverride
	// Size: 0x38 (0x38 - 0x0)
	struct FPCGActorPropertyOverride	
	{
	public:
		FPCGAttributePropertyInputSelector InputSource; // 0x0(0x28)
		FString PropertyTarget; // 0x28(0x10)
	};


	// Struct PCG.PCGProjectionParams
	// Size: 0x20 (0x20 - 0x0)
	struct FPCGProjectionParams	
	{
	public:
		bool bProjectPositions; // 0x0(0x1)
		bool bProjectRotations; // 0x1(0x1)
		bool bProjectScales; // 0x2(0x1)
		EPCGProjectionColorBlendMode ColorBlendMode; // 0x3(0x1)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FString AttributeList; // 0x8(0x10)
		EPCGMetadataFilterMode AttributeMode; // 0x18(0x1)
		EPCGMetadataOp AttributeMergeOperation; // 0x19(0x1)
		EPCGProjectionTagMergeMode TagMergeOperation; // 0x1A(0x1)
		unsigned char UnknownData01_7[0x5]; // 0x1B(0x5) UNKNOWN PROPERTY
	};


	// Struct PCG.PCGSlicingModule
	// Size: 0x40 (0x40 - 0x0)
	struct FPCGSlicingModule	
	{
	public:
		FName Symbol; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		double Size; // 0x8(0x8)
		bool bScalable; // 0x10(0x1)
		unsigned char UnknownData01_6[0xF]; // 0x11(0xF) UNKNOWN PROPERTY
		FVector4 DebugColor; // 0x20(0x20)
	};


	// Struct PCG.PCGContext
	// Size: 0x190 (0x190 - 0x0)
	struct FPCGContext	
	{
	public:
		unsigned char UnknownData00_2[0x190]; // 0x0(0x190) UNKNOWN PROPERTY
	};


	// Struct PCG.PCGStaticMeshSpawnerContext
	// Inherited from FPCGContext
	// Size: 0x208 (0x398 - 0x190)
	struct FPCGStaticMeshSpawnerContext : public FPCGContext	
	{
	public:
		unsigned char UnknownData00_1[0x208]; // 0x190(0x208) UNKNOWN PROPERTY
	};


	// Struct PCG.PCGLandscapeDataProps
	// Size: 0x5 (0x5 - 0x0)
	struct FPCGLandscapeDataProps	
	{
	public:
		bool bGetHeightOnly; // 0x0(0x1)
		bool bGetLayerWeights; // 0x1(0x1)
		bool bGetActorReference; // 0x2(0x1)
		bool bGetPhysicalMaterial; // 0x3(0x1)
		bool bGetComponentCoordinates; // 0x4(0x1)
	};


	// Struct PCG.PCGSplineStruct
	// Size: 0x160 (0x160 - 0x0)
	struct FPCGSplineStruct	
	{
	public:
		FSplineCurves SplineCurves; // 0x0(0x68)
		unsigned char UnknownData00_6[0x8]; // 0x68(0x8) UNKNOWN PROPERTY
		FTransform Transform; // 0x70(0x60)
		FVector DefaultUpVector; // 0xD0(0x18)
		int32_t ReparamStepsPerSegment; // 0xE8(0x4)
		bool bClosedLoop; // 0xEC(0x1)
		unsigned char UnknownData01_6[0x3]; // 0xED(0x3) UNKNOWN PROPERTY
		FBoxSphereBounds LocalBounds; // 0xF0(0x38)
		FBoxSphereBounds Bounds; // 0x128(0x38)
	};


	// Struct PCG.PCGWorldCommonQueryParams
	// Size: 0x70 (0x70 - 0x0)
	struct FPCGWorldCommonQueryParams	
	{
	public:
		bool bIgnorePCGHits; // 0x0(0x1)
		bool bIgnoreSelfHits; // 0x1(0x1)
		TEnumAsByte<ECollisionChannel> CollisionChannel; // 0x2(0x1)
		bool bTraceComplex; // 0x3(0x1)
		EPCGWorldQueryFilterByTag ActorTagFilter; // 0x4(0x4)
		FString ActorTagsList; // 0x8(0x10)
		EPCGWorldQuerySelectLandscapeHits SelectLandscapeHits; // 0x18(0x1)
		bool bGetReferenceToActorHit; // 0x19(0x1)
		bool bGetReferenceToPhysicalMaterial; // 0x1A(0x1)
		unsigned char UnknownData00_6[0x5]; // 0x1B(0x5) UNKNOWN PROPERTY
		TSet<FName> ParsedActorTagsList; // 0x20(0x50)
	};


	// Struct PCG.PCGWorldRaycastQueryParams
	// Inherited from FPCGWorldCommonQueryParams
	// Size: 0x10 (0x80 - 0x70)
	struct FPCGWorldRaycastQueryParams : public FPCGWorldCommonQueryParams	
	{
	public:
		bool bIgnoreBackfaceHits : 1; // 0x70:0(0x1)
		bool bGetImpact : 1; // 0x70:1(0x1)
		bool bGetImpactPoint : 1; // 0x70:2(0x1)
		bool bGetImpactNormal : 1; // 0x70:3(0x1)
		bool bGetDistance : 1; // 0x70:4(0x1)
		bool bGetLocalImpactPoint : 1; // 0x70:5(0x1)
		bool bGetReferenceToRenderMaterial : 1; // 0x70:6(0x1)
		bool bGetReferenceToStaticMesh : 1; // 0x70:7(0x1)
		bool bGetFaceIndex : 1; // 0x71:0(0x1)
		bool bGetUVCoords : 1; // 0x71:1(0x1)
		bool bGetElementIndex : 1; // 0x71:2(0x1)
		bool bApplyMetadataFromLandscape : 1; // 0x71:3(0x1)
		unsigned char UnknownData00_5[0x2]; // 0x72(0x2) UNKNOWN PROPERTY
		int32_t RenderMaterialIndex; // 0x74(0x4)
		int32_t UVChannel; // 0x78(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x7C(0x4) UNKNOWN PROPERTY
	};


	// Struct PCG.PCGWorldVolumetricQueryParams
	// Inherited from FPCGWorldCommonQueryParams
	// Size: 0x8 (0x78 - 0x70)
	struct FPCGWorldVolumetricQueryParams : public FPCGWorldCommonQueryParams	
	{
	public:
		bool bSearchForOverlap; // 0x70(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x71(0x7) UNKNOWN PROPERTY
	};


	// Struct PCG.PCGWorldRayHitQueryParams
	// Inherited from FPCGWorldRaycastQueryParams -> FPCGWorldCommonQueryParams
	// Size: 0x40 (0xC0 - 0x80)
	struct FPCGWorldRayHitQueryParams : public FPCGWorldRaycastQueryParams	
	{
	public:
		bool bOverrideDefaultParams; // 0x80(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x81(0x7) UNKNOWN PROPERTY
		FVector RayOrigin; // 0x88(0x18)
		FVector RayDirection; // 0xA0(0x18)
		double RayLength; // 0xB8(0x8)
	};


	// Struct PCG.PCGSelectionKey
	// Size: 0x30 (0x30 - 0x0)
	struct FPCGSelectionKey	
	{
	public:
		EPCGActorFilter ActorFilter; // 0x0(0x1)
		EPCGActorSelection Selection; // 0x1(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x2(0x2) UNKNOWN PROPERTY
		FName Tag; // 0x4(0x4)
		UClass* SelectionClass; // 0x8(0x8)
		FSoftObjectPath ObjectPath; // 0x10(0x18)
		UClass* OptionalExtraDependency; // 0x28(0x8)
	};


	// Struct PCG.PCGActorSelectorSettings
	// Size: 0x48 (0x48 - 0x0)
	struct FPCGActorSelectorSettings	
	{
	public:
		EPCGActorFilter ActorFilter; // 0x0(0x1)
		bool bMustOverlapSelf; // 0x1(0x1)
		bool bIncludeChildren; // 0x2(0x1)
		bool bDisableFilter; // 0x3(0x1)
		EPCGActorSelection ActorSelection; // 0x4(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
		FName ActorSelectionTag; // 0x8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		UClass* ActorSelectionClass; // 0x10(0x8)
		FPCGAttributePropertyInputSelector ActorReferenceSelector; // 0x18(0x28)
		bool bSelectMultiple; // 0x40(0x1)
		bool bIgnoreSelfAndChildren; // 0x41(0x1)
		bool bShowActorFilter; // 0x42(0x1)
		bool bShowIncludeChildren; // 0x43(0x1)
		bool bShowActorSelection; // 0x44(0x1)
		bool bShowActorSelectionClass; // 0x45(0x1)
		bool bShowSelectMultiple; // 0x46(0x1)
		bool bShowIgnoreSelfAndChildren; // 0x47(0x1)
	};


	// Struct PCG.PCGSelfPruningParameters
	// Size: 0x68 (0x68 - 0x0)
	struct FPCGSelfPruningParameters	
	{
	public:
		EPCGSelfPruningType PruningType; // 0x0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		FPCGAttributePropertyInputSelector ComparisonSource; // 0x8(0x28)
		float RadiusSimilarityFactor; // 0x30(0x4)
		bool bRandomizedPruning; // 0x34(0x1)
		bool bUseCollisionAttribute; // 0x35(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x36(0x2) UNKNOWN PROPERTY
		FPCGAttributePropertyInputSelector CollisionAttribute; // 0x38(0x28)
		EPCGCollisionQueryFlag CollisionQueryFlag; // 0x60(0x1)
		unsigned char UnknownData02_7[0x7]; // 0x61(0x7) UNKNOWN PROPERTY
	};


	// Struct PCG.PCGSplineMeshParams
	// Size: 0xC8 (0xC8 - 0x0)
	struct FPCGSplineMeshParams	
	{
	public:
		EPCGSplineMeshForwardAxis ForwardAxis; // 0x0(0x4)
		bool bScaleMeshToBounds; // 0x4(0x1)
		bool bScaleMeshToLandscapeSplineFullWidth; // 0x5(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x6(0x2) UNKNOWN PROPERTY
		FVector SplineUpDir; // 0x8(0x18)
		float NaniteClusterBoundsScale; // 0x20(0x4)
		float SplineBoundaryMin; // 0x24(0x4)
		float SplineBoundaryMax; // 0x28(0x4)
		bool bSmoothInterpRollScale; // 0x2C(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x2D(0x3) UNKNOWN PROPERTY
		FVector StartPosition; // 0x30(0x18)
		FVector StartTangent; // 0x48(0x18)
		float StartRollDegrees; // 0x60(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x64(0x4) UNKNOWN PROPERTY
		FVector2D StartScale; // 0x68(0x10)
		FVector EndPosition; // 0x78(0x18)
		FVector EndTangent; // 0x90(0x18)
		float EndRollDegrees; // 0xA8(0x4)
		unsigned char UnknownData03_6[0x4]; // 0xAC(0x4) UNKNOWN PROPERTY
		FVector2D EndScale; // 0xB0(0x10)
		unsigned char UnknownData04_7[0x8]; // 0xC0(0x8) UNKNOWN PROPERTY
	};


	// Struct PCG.PCGSplineSamplerParams
	// Size: 0x110 (0x110 - 0x0)
	struct FPCGSplineSamplerParams	
	{
	public:
		EPCGSplineSamplingDimension Dimension; // 0x0(0x1)
		EPCGSplineSamplingMode Mode; // 0x1(0x1)
		EPCGSplineSamplingFill Fill; // 0x2(0x1)
		unsigned char UnknownData00_6[0x1]; // 0x3(0x1) UNKNOWN PROPERTY
		int32_t SubdivisionsPerSegment; // 0x4(0x4)
		float DistanceIncrement; // 0x8(0x4)
		int32_t NumSamples; // 0xC(0x4)
		int32_t NumPlanarSubdivisions; // 0x10(0x4)
		int32_t NumHeightSubdivisions; // 0x14(0x4)
		float StartOffset; // 0x18(0x4)
		float EndOffset; // 0x1C(0x4)
		float MaxRandomOffsetNormalized; // 0x20(0x4)
		bool bFitToCurve; // 0x24(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x25(0x3) UNKNOWN PROPERTY
		float InteriorSampleSpacing; // 0x28(0x4)
		float InteriorBorderSampleSpacing; // 0x2C(0x4)
		bool bTreatSplineAsPolyline; // 0x30(0x1)
		EPCGSplineSamplingInteriorOrientation InteriorOrientation; // 0x31(0x1)
		bool bProjectOntoSurface; // 0x32(0x1)
		unsigned char UnknownData02_6[0x5]; // 0x33(0x5) UNKNOWN PROPERTY
		FRuntimeFloatCurve InteriorDensityFalloffCurve; // 0x38(0x88)
		bool bComputeDirectionDelta; // 0xC0(0x1)
		unsigned char UnknownData03_6[0x3]; // 0xC1(0x3) UNKNOWN PROPERTY
		FName NextDirectionDeltaAttribute; // 0xC4(0x4)
		bool bComputeCurvature; // 0xC8(0x1)
		unsigned char UnknownData04_6[0x3]; // 0xC9(0x3) UNKNOWN PROPERTY
		FName CurvatureAttribute; // 0xCC(0x4)
		bool bComputeSegmentIndex; // 0xD0(0x1)
		unsigned char UnknownData05_6[0x3]; // 0xD1(0x3) UNKNOWN PROPERTY
		FName SegmentIndexAttribute; // 0xD4(0x4)
		bool bComputeSubsegmentIndex; // 0xD8(0x1)
		unsigned char UnknownData06_6[0x3]; // 0xD9(0x3) UNKNOWN PROPERTY
		FName SubsegmentIndexAttribute; // 0xDC(0x4)
		bool bComputeTangents; // 0xE0(0x1)
		unsigned char UnknownData07_6[0x3]; // 0xE1(0x3) UNKNOWN PROPERTY
		FName ArriveTangentAttribute; // 0xE4(0x4)
		FName LeaveTangentAttribute; // 0xE8(0x4)
		bool bComputeAlpha; // 0xEC(0x1)
		unsigned char UnknownData08_6[0x3]; // 0xED(0x3) UNKNOWN PROPERTY
		FName AlphaAttribute; // 0xF0(0x4)
		bool bComputeDistance; // 0xF4(0x1)
		unsigned char UnknownData09_6[0x3]; // 0xF5(0x3) UNKNOWN PROPERTY
		FName DistanceAttribute; // 0xF8(0x4)
		bool bComputeInputKey; // 0xFC(0x1)
		unsigned char UnknownData10_6[0x3]; // 0xFD(0x3) UNKNOWN PROPERTY
		FName InputKeyAttribute; // 0x100(0x4)
		bool bUnbounded; // 0x104(0x1)
		unsigned char UnknownData11_6[0x3]; // 0x105(0x3) UNKNOWN PROPERTY
		float PointSteepness; // 0x108(0x4)
		EPCGSplineSamplingSeedingMode SeedingMode; // 0x10C(0x1)
		bool bSeedFromLocalPosition; // 0x10D(0x1)
		bool bSeedFrom2DPosition; // 0x10E(0x1)
		unsigned char UnknownData12_7[0x1]; // 0x10F(0x1) UNKNOWN PROPERTY
	};


	// Struct PCG.PCGStackFrame
	// Size: 0x10 (0x10 - 0x0)
	struct FPCGStackFrame	
	{
	public:
		unsigned char UnknownData00_2[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
	};


	// Struct PCG.PCGStack
	// Size: 0x10 (0x10 - 0x0)
	struct FPCGStack	
	{
	public:
		unsigned char UnknownData00_2[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
	};


	// Struct PCG.PCGLandscapeLayerWeight
	// Size: 0x8 (0x8 - 0x0)
	struct FPCGLandscapeLayerWeight	
	{
	public:
		FName Name; // 0x0(0x4)
		float Weight; // 0x4(0x4)
	};


	// Struct PCG.PCGPackedCustomData
	// Size: 0x18 (0x18 - 0x0)
	struct FPCGPackedCustomData	
	{
	public:
		int32_t NumCustomDataFloats; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TArray<float> CustomData; // 0x8(0x10)
	};


	// Struct PCG.PCGMatchAndSetByAttributeEntry
	// Size: 0x2C0 (0x2C0 - 0x0)
	struct FPCGMatchAndSetByAttributeEntry	
	{
	public:
		FPCGMetadataTypesConstantStruct ValueToMatch; // 0x0(0x160)
		FPCGMetadataTypesConstantStruct Value; // 0x160(0x160)
	};


	// Struct PCG.PCGMatchAndSetWeightedEntry
	// Size: 0x170 (0x170 - 0x0)
	struct FPCGMatchAndSetWeightedEntry	
	{
	public:
		FPCGMetadataTypesConstantStruct Value; // 0x0(0x160)
		int32_t Weight; // 0x160(0x4)
		unsigned char UnknownData00_7[0xC]; // 0x164(0xC) UNKNOWN PROPERTY
	};


	// Struct PCG.PCGMatchAndSetWeightedByCategoryEntryList
	// Size: 0x180 (0x180 - 0x0)
	struct FPCGMatchAndSetWeightedByCategoryEntryList	
	{
	public:
		FPCGMetadataTypesConstantStruct CategoryValue; // 0x0(0x160)
		bool bIsDefault; // 0x160(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x161(0x7) UNKNOWN PROPERTY
		TArray<FPCGMatchAndSetWeightedEntry> WeightedEntries; // 0x168(0x10)
		unsigned char UnknownData01_7[0x8]; // 0x178(0x8) UNKNOWN PROPERTY
	};


	// Struct PCG.PCGMeshInstanceList
	// Size: 0x248 (0x248 - 0x0)
	struct FPCGMeshInstanceList	
	{
	public:
		FSoftISMComponentDescriptor Descriptor; // 0x0(0x220)
		TArray<FTransform> Instances; // 0x220(0x10)
		TArray<int64_t> InstancesMetadataEntry; // 0x230(0x10)
		unsigned char UnknownData00_7[0x8]; // 0x240(0x8) UNKNOWN PROPERTY
	};


	// Struct PCG.PCGMeshSelectorWeightedEntry
	// Size: 0x228 (0x228 - 0x0)
	struct FPCGMeshSelectorWeightedEntry	
	{
	public:
		FSoftISMComponentDescriptor Descriptor; // 0x0(0x220)
		int32_t Weight; // 0x220(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x224(0x4) UNKNOWN PROPERTY
	};


	// Struct PCG.PCGWeightedByCategoryEntryList
	// Size: 0x28 (0x28 - 0x0)
	struct FPCGWeightedByCategoryEntryList	
	{
	public:
		FString CategoryEntry; // 0x0(0x10)
		bool IsDefault; // 0x10(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
		TArray<FPCGMeshSelectorWeightedEntry> WeightedMeshEntries; // 0x18(0x10)
	};


	// Struct PCG.PCGComponentInstanceData
	// Inherited from FActorComponentInstanceData -> FInstanceCacheDataBase
	// Size: 0x8 (0x70 - 0x68)
	struct FPCGComponentInstanceData : public FActorComponentInstanceData	
	{
	public:
		UPCGComponent* SourceComponent; // 0x68(0x8)
	};


	// Struct PCG.PCGTaggedData
	// Size: 0x60 (0x60 - 0x0)
	struct FPCGTaggedData	
	{
	public:
		UPCGData* Data; // 0x0(0x8)
		TSet<FString> Tags; // 0x8(0x50)
		FName Pin; // 0x58(0x4)
		bool bPinlessData; // 0x5C(0x1)
		unsigned char UnknownData00_7[0x3]; // 0x5D(0x3) UNKNOWN PROPERTY
	};


	// Struct PCG.PCGDataCollection
	// Size: 0x30 (0x30 - 0x0)
	struct FPCGDataCollection	
	{
	public:
		TArray<FPCGTaggedData> TaggedData; // 0x0(0x10)
		bool bCancelExecutionOnEmpty; // 0x10(0x1)
		unsigned char UnknownData00_7[0x1F]; // 0x11(0x1F) UNKNOWN PROPERTY
	};


	// Struct PCG.PCGDebugVisualizationSettings
	// Size: 0x48 (0x48 - 0x0)
	struct FPCGDebugVisualizationSettings	
	{
	public:
		float PointScale; // 0x0(0x4)
		EPCGDebugVisScaleMethod ScaleMethod; // 0x4(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
		TWeakObjectPtr<UStaticMesh*> PointMesh; // 0x8(0x20)
		TWeakObjectPtr<UMaterialInterface*> MaterialOverride; // 0x28(0x20)
	};


	// Struct PCG.PCGOverrideInstancedPropertyBag
	// Size: 0x60 (0x60 - 0x0)
	struct FPCGOverrideInstancedPropertyBag	
	{
	public:
		FInstancedPropertyBag Parameters; // 0x0(0x10)
		TSet<FGuid> PropertiesIDsOverridden; // 0x10(0x50)
	};


	// Struct PCG.PCGPinProperties
	// Size: 0x10 (0x10 - 0x0)
	struct FPCGPinProperties	
	{
	public:
		FName Label; // 0x0(0x4)
		EPCGPinUsage Usage; // 0x4(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
		EPCGDataType AllowedTypes; // 0x8(0x4)
		bool bAllowMultipleData; // 0xC(0x1)
		EPCGPinStatus PinStatus; // 0xD(0x1)
		bool bInvisiblePin; // 0xE(0x1)
		bool bAllowMultipleConnections; // 0xF(0x1)
	};


	// Struct PCG.PCGPoint
	// Size: 0xD0 (0xD0 - 0x0)
	struct FPCGPoint	
	{
	public:
		FTransform Transform; // 0x0(0x60)
		float Density; // 0x60(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x64(0x4) UNKNOWN PROPERTY
		FVector BoundsMin; // 0x68(0x18)
		FVector BoundsMax; // 0x80(0x18)
		unsigned char UnknownData01_6[0x8]; // 0x98(0x8) UNKNOWN PROPERTY
		FVector4 Color; // 0xA0(0x20)
		float Steepness; // 0xC0(0x4)
		int32_t Seed; // 0xC4(0x4)
		int64_t MetadataEntry; // 0xC8(0x8)
	};


	// Struct PCG.PCGPropertyAliases
	// Size: 0x10 (0x10 - 0x0)
	struct FPCGPropertyAliases	
	{
	public:
		TArray<FName> Aliases; // 0x0(0x10)
	};


	// Struct PCG.PCGSettingsOverridableParam
	// Size: 0x88 (0x88 - 0x0)
	struct FPCGSettingsOverridableParam	
	{
	public:
		FName Label; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TArray<FName> PropertiesNames; // 0x8(0x10)
		UStruct* PropertyClass; // 0x18(0x8)
		TMap<int32_t, FPCGPropertyAliases> MapOfAliases; // 0x20(0x50)
		bool bHasNameClash; // 0x70(0x1)
		unsigned char UnknownData01_7[0x17]; // 0x71(0x17) UNKNOWN PROPERTY
	};


	// Struct PCG.PCGPreConfiguredSettingsInfo
	// Size: 0x18 (0x18 - 0x0)
	struct FPCGPreConfiguredSettingsInfo	
	{
	public:
		int32_t PreconfiguredIndex; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FText Label; // 0x8(0x10)
	};


	// Struct PCG.DeterminismTestResult
	// Size: 0x90 (0x90 - 0x0)
	struct FDeterminismTestResult	
	{
	public:
		int64_t Index; // 0x0(0x8)
		FName TestResultTitle; // 0x8(0x4)
		unsigned char UnknownData00_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FString TestResultName; // 0x10(0x10)
		int32_t Seed; // 0x20(0x4)
		EPCGDataType DataTypesTested; // 0x24(0x4)
		TMap<FName, EDeterminismLevel> TestResults; // 0x28(0x50)
		TArray<FString> AdditionalDetails; // 0x78(0x10)
		bool bFlagRaised; // 0x88(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x89(0x7) UNKNOWN PROPERTY
	};

}
