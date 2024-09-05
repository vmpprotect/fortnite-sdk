#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: GeometryScriptingCore
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct GeometryScriptingCore.GeometryScriptMeshReadLOD
	// Size: 0x8 (0x8 - 0x0)
	struct FGeometryScriptMeshReadLOD	
	{
	public:
		EGeometryScriptLODType LODType; // 0x0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		int32_t LODIndex; // 0x4(0x4)
	};


	// Struct GeometryScriptingCore.GeometryScriptMeshWriteLOD
	// Size: 0x8 (0x8 - 0x0)
	struct FGeometryScriptMeshWriteLOD	
	{
	public:
		bool bWriteHiResSource; // 0x0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		int32_t LODIndex; // 0x4(0x4)
	};


	// Struct GeometryScriptingCore.GeometryScriptSimpleCollision
	// Size: 0x80 (0x80 - 0x0)
	struct FGeometryScriptSimpleCollision	
	{
	public:
		FKAggregateGeom AggGeom; // 0x0(0x80)
	};


	// Struct GeometryScriptingCore.GeometryScriptSphereCovering
	// Size: 0x10 (0x10 - 0x0)
	struct FGeometryScriptSphereCovering	
	{
	public:
		unsigned char UnknownData00_2[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
	};


	// Struct GeometryScriptingCore.GeometryScriptSimpleCollisionTriangulationOptions
	// Size: 0x10 (0x10 - 0x0)
	struct FGeometryScriptSimpleCollisionTriangulationOptions	
	{
	public:
		int32_t SphereStepsPerSide; // 0x0(0x4)
		int32_t CapsuleHemisphereSteps; // 0x4(0x4)
		int32_t CapsuleCircleSteps; // 0x8(0x4)
		bool bApproximateLevelSetsWithCubes; // 0xC(0x1)
		unsigned char UnknownData00_7[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
	};


	// Struct GeometryScriptingCore.GeometryScriptTriangle
	// Size: 0x48 (0x48 - 0x0)
	struct FGeometryScriptTriangle	
	{
	public:
		FVector Vector0; // 0x0(0x18)
		FVector Vector1; // 0x18(0x18)
		FVector vector2; // 0x30(0x18)
	};


	// Struct GeometryScriptingCore.GeometryScriptTrianglePoint
	// Size: 0x38 (0x38 - 0x0)
	struct FGeometryScriptTrianglePoint	
	{
	public:
		bool bValid; // 0x0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		int32_t TriangleID; // 0x4(0x4)
		FVector Position; // 0x8(0x18)
		FVector BaryCoords; // 0x20(0x18)
	};


	// Struct GeometryScriptingCore.GeometryScriptUVTriangle
	// Size: 0x30 (0x30 - 0x0)
	struct FGeometryScriptUVTriangle	
	{
	public:
		FVector2D UV0; // 0x0(0x10)
		FVector2D UV1; // 0x10(0x10)
		FVector2D UV2; // 0x20(0x10)
	};


	// Struct GeometryScriptingCore.GeometryScriptColorFlags
	// Size: 0x4 (0x4 - 0x0)
	struct FGeometryScriptColorFlags	
	{
	public:
		bool bRed; // 0x0(0x1)
		bool bGreen; // 0x1(0x1)
		bool bBlue; // 0x2(0x1)
		bool bAlpha; // 0x3(0x1)
	};


	// Struct GeometryScriptingCore.GeometryScriptGroupLayer
	// Size: 0x8 (0x8 - 0x0)
	struct FGeometryScriptGroupLayer	
	{
	public:
		bool bDefaultLayer; // 0x0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		int32_t ExtendedLayerIndex; // 0x4(0x4)
	};


	// Struct GeometryScriptingCore.GeometryScriptIndexList
	// Size: 0x18 (0x18 - 0x0)
	struct FGeometryScriptIndexList	
	{
	public:
		EGeometryScriptIndexType IndexType; // 0x0(0x1)
		unsigned char UnknownData00_7[0x17]; // 0x1(0x17) UNKNOWN PROPERTY
	};


	// Struct GeometryScriptingCore.GeometryScriptTriangleList
	// Size: 0x10 (0x10 - 0x0)
	struct FGeometryScriptTriangleList	
	{
	public:
		unsigned char UnknownData00_2[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
	};


	// Struct GeometryScriptingCore.GeometryScriptScalarList
	// Size: 0x10 (0x10 - 0x0)
	struct FGeometryScriptScalarList	
	{
	public:
		unsigned char UnknownData00_2[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
	};


	// Struct GeometryScriptingCore.GeometryScriptVectorList
	// Size: 0x10 (0x10 - 0x0)
	struct FGeometryScriptVectorList	
	{
	public:
		unsigned char UnknownData00_2[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
	};


	// Struct GeometryScriptingCore.GeometryScriptUVList
	// Size: 0x10 (0x10 - 0x0)
	struct FGeometryScriptUVList	
	{
	public:
		unsigned char UnknownData00_2[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
	};


	// Struct GeometryScriptingCore.GeometryScriptColorList
	// Size: 0x10 (0x10 - 0x0)
	struct FGeometryScriptColorList	
	{
	public:
		unsigned char UnknownData00_2[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
	};


	// Struct GeometryScriptingCore.GeometryScriptPolyPath
	// Size: 0x18 (0x18 - 0x0)
	struct FGeometryScriptPolyPath	
	{
	public:
		unsigned char UnknownData00_7[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
		bool bClosedLoop; // 0x10(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
	};


	// Struct GeometryScriptingCore.GeometryScriptSimplePolygon
	// Size: 0x10 (0x10 - 0x0)
	struct FGeometryScriptSimplePolygon	
	{
	public:
		unsigned char UnknownData00_2[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
	};


	// Struct GeometryScriptingCore.GeometryScriptGeneralPolygonList
	// Size: 0x10 (0x10 - 0x0)
	struct FGeometryScriptGeneralPolygonList	
	{
	public:
		unsigned char UnknownData00_2[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
	};


	// Struct GeometryScriptingCore.GeometryScriptDynamicMeshBVH
	// Size: 0x20 (0x20 - 0x0)
	struct FGeometryScriptDynamicMeshBVH	
	{
	public:
		unsigned char UnknownData00_2[0x20]; // 0x0(0x20) UNKNOWN PROPERTY
	};


	// Struct GeometryScriptingCore.GeometryScriptRenderCaptureCamera
	// Size: 0x48 (0x48 - 0x0)
	struct FGeometryScriptRenderCaptureCamera	
	{
	public:
		int32_t Resolution; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		double FieldOfViewDegrees; // 0x8(0x8)
		FVector ViewPosition; // 0x10(0x18)
		FVector ViewDirection; // 0x28(0x18)
		double NearPlaneDist; // 0x40(0x8)
	};


	// Struct GeometryScriptingCore.GeometryScriptRenderCaptureCamerasForBoxOptions
	// Size: 0x28 (0x28 - 0x0)
	struct FGeometryScriptRenderCaptureCamerasForBoxOptions	
	{
	public:
		int32_t Resolution; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		double FieldOfViewDegrees; // 0x8(0x8)
		bool bViewFromBoxFaces; // 0x10(0x1)
		bool bViewFromUpperCorners; // 0x11(0x1)
		bool bViewFromLowerCorners; // 0x12(0x1)
		bool bViewFromUpperEdges; // 0x13(0x1)
		bool bViewFromLowerEdges; // 0x14(0x1)
		bool bViewFromSideEdges; // 0x15(0x1)
		unsigned char UnknownData01_6[0x2]; // 0x16(0x2) UNKNOWN PROPERTY
		TArray<FVector> ExtraViewFromPositions; // 0x18(0x10)
	};


	// Struct GeometryScriptingCore.GeometryScriptDebugMessage
	// Size: 0x18 (0x18 - 0x0)
	struct FGeometryScriptDebugMessage	
	{
	public:
		EGeometryScriptDebugMessageType MessageType; // 0x0(0x1)
		EGeometryScriptErrorType ErrorType; // 0x1(0x1)
		unsigned char UnknownData00_6[0x6]; // 0x2(0x6) UNKNOWN PROPERTY
		FText Message; // 0x8(0x10)
	};


	// Struct GeometryScriptingCore.GeometryScriptCollisionFromMeshOptions
	// Size: 0x30 (0x30 - 0x0)
	struct FGeometryScriptCollisionFromMeshOptions	
	{
	public:
		bool bEmitTransaction; // 0x0(0x1)
		EGeometryScriptCollisionGenerationMethod Method; // 0x1(0x1)
		bool bAutoDetectSpheres; // 0x2(0x1)
		bool bAutoDetectBoxes; // 0x3(0x1)
		bool bAutoDetectCapsules; // 0x4(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
		float MinThickness; // 0x8(0x4)
		bool bSimplifyHulls; // 0xC(0x1)
		unsigned char UnknownData01_6[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
		int32_t ConvexHullTargetFaceCount; // 0x10(0x4)
		int32_t MaxConvexHullsPerMesh; // 0x14(0x4)
		float ConvexDecompositionSearchFactor; // 0x18(0x4)
		float ConvexDecompositionErrorTolerance; // 0x1C(0x4)
		float ConvexDecompositionMinPartThickness; // 0x20(0x4)
		float SweptHullSimplifyTolerance; // 0x24(0x4)
		EGeometryScriptSweptHullAxis SweptHullAxis; // 0x28(0x1)
		bool bRemoveFullyContainedShapes; // 0x29(0x1)
		unsigned char UnknownData02_6[0x2]; // 0x2A(0x2) UNKNOWN PROPERTY
		int32_t MaxShapeCount; // 0x2C(0x4)
	};


	// Struct GeometryScriptingCore.GeometryScriptSetSimpleCollisionOptions
	// Size: 0x1 (0x1 - 0x0)
	struct FGeometryScriptSetSimpleCollisionOptions	
	{
	public:
		bool bEmitTransaction; // 0x0(0x1)
	};


	// Struct GeometryScriptingCore.GeometryScriptSetStaticMeshCollisionOptions
	// Size: 0x1 (0x1 - 0x0)
	struct FGeometryScriptSetStaticMeshCollisionOptions	
	{
	public:
		bool bMarkAsCustomized; // 0x0(0x1)
	};


	// Struct GeometryScriptingCore.ComputeNegativeSpaceOptions
	// Size: 0x28 (0x28 - 0x0)
	struct FComputeNegativeSpaceOptions	
	{
	public:
		ENegativeSpaceSampleMethod SampleMethod; // 0x0(0x1)
		bool bRequireSearchSampleCoverage; // 0x1(0x1)
		bool bOnlyConnectedToHull; // 0x2(0x1)
		unsigned char UnknownData00_6[0x1]; // 0x3(0x1) UNKNOWN PROPERTY
		int32_t MaxVoxelsPerDim; // 0x4(0x4)
		int32_t TargetNumSamples; // 0x8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		double MinSampleSpacing; // 0x10(0x8)
		double NegativeSpaceTolerance; // 0x18(0x8)
		double MinRadius; // 0x20(0x8)
	};


	// Struct GeometryScriptingCore.NavigableConvexDecompositionOptions
	// Size: 0x38 (0x38 - 0x0)
	struct FNavigableConvexDecompositionOptions	
	{
	public:
		double MinRadius; // 0x0(0x8)
		double Tolerance; // 0x8(0x8)
		bool bIgnoreUnreachableInternalSpace; // 0x10(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
		TArray<FVector> CustomNavigablePositions; // 0x18(0x10)
		TArray<FPlane> UnreachablePlanes; // 0x28(0x10)
	};


	// Struct GeometryScriptingCore.GeometryScriptMergeSimpleCollisionOptions
	// Size: 0x70 (0x70 - 0x0)
	struct FGeometryScriptMergeSimpleCollisionOptions	
	{
	public:
		int32_t MaxShapeCount; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		double ErrorTolerance; // 0x8(0x8)
		double MinThicknessTolerance; // 0x10(0x8)
		bool bConsiderAllPossibleMerges; // 0x18(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x19(0x7) UNKNOWN PROPERTY
		FGeometryScriptSphereCovering PrecomputedNegativeSpace; // 0x20(0x10)
		bool bComputeNegativeSpace; // 0x30(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x31(0x7) UNKNOWN PROPERTY
		FComputeNegativeSpaceOptions ComputeNegativeSpaceOptions; // 0x38(0x28)
		FGeometryScriptSimpleCollisionTriangulationOptions ShapeToHullTriangulation; // 0x60(0x10)
	};


	// Struct GeometryScriptingCore.GeometryScriptConvexHullSimplificationOptions
	// Size: 0x10 (0x10 - 0x0)
	struct FGeometryScriptConvexHullSimplificationOptions	
	{
	public:
		EGeometryScriptConvexHullSimplifyMethod SimplificationMethod; // 0x0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float SimplificationDistanceThreshold; // 0x4(0x4)
		float SimplificationAngleThreshold; // 0x8(0x4)
		int32_t MinTargetFaceCount; // 0xC(0x4)
	};


	// Struct GeometryScriptingCore.GeometryScriptConvexHullApproximationOptions
	// Size: 0xC (0xC - 0x0)
	struct FGeometryScriptConvexHullApproximationOptions	
	{
	public:
		bool bFitSpheres; // 0x0(0x1)
		bool bFitBoxes; // 0x1(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x2(0x2) UNKNOWN PROPERTY
		float DistanceThreshold; // 0x4(0x4)
		float VolumeDiffThreshold_Fraction; // 0x8(0x4)
	};


	// Struct GeometryScriptingCore.GeometryScriptTransformCollisionOptions
	// Size: 0x2 (0x2 - 0x0)
	struct FGeometryScriptTransformCollisionOptions	
	{
	public:
		bool bWarnOnInvalidTransforms; // 0x0(0x1)
		bool bCenterTransformPivotPerShape; // 0x1(0x1)
	};


	// Struct GeometryScriptingCore.GeometryScriptConvexHullOptions
	// Size: 0xC (0xC - 0x0)
	struct FGeometryScriptConvexHullOptions	
	{
	public:
		bool bPrefilterVertices; // 0x0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		int32_t PrefilterGridResolution; // 0x4(0x4)
		int32_t SimplifyToFaceCount; // 0x8(0x4)
	};


	// Struct GeometryScriptingCore.GeometryScriptSweptHullOptions
	// Size: 0x18 (0x18 - 0x0)
	struct FGeometryScriptSweptHullOptions	
	{
	public:
		bool bPrefilterVertices; // 0x0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		int32_t PrefilterGridResolution; // 0x4(0x4)
		float MinThickness; // 0x8(0x4)
		bool bSimplify; // 0xC(0x1)
		unsigned char UnknownData01_6[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
		float MinEdgeLength; // 0x10(0x4)
		float SimplifyTolerance; // 0x14(0x4)
	};


	// Struct GeometryScriptingCore.GeometryScriptConvexDecompositionOptions
	// Size: 0x28 (0x28 - 0x0)
	struct FGeometryScriptConvexDecompositionOptions	
	{
	public:
		int32_t NumHulls; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		double SearchFactor; // 0x8(0x8)
		double ErrorTolerance; // 0x10(0x8)
		double MinPartThickness; // 0x18(0x8)
		int32_t SimplifyToFaceCount; // 0x20(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
	};


	// Struct GeometryScriptingCore.GeometryScriptMeshSelection
	// Size: 0x10 (0x10 - 0x0)
	struct FGeometryScriptMeshSelection	
	{
	public:
		unsigned char UnknownData00_2[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
	};


	// Struct GeometryScriptingCore.GeometryScriptCopyMeshFromAssetOptions
	// Size: 0x4 (0x4 - 0x0)
	struct FGeometryScriptCopyMeshFromAssetOptions	
	{
	public:
		bool bApplyBuildSettings; // 0x0(0x1)
		bool bRequestTangents; // 0x1(0x1)
		bool bIgnoreRemoveDegenerates; // 0x2(0x1)
		bool bUseBuildScale; // 0x3(0x1)
	};


	// Struct GeometryScriptingCore.GeometryScriptNaniteOptions
	// Size: 0xC (0xC - 0x0)
	struct FGeometryScriptNaniteOptions	
	{
	public:
		bool bEnabled; // 0x0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float FallbackPercentTriangles; // 0x4(0x4)
		float FallbackRelativeError; // 0x8(0x4)
	};


	// Struct GeometryScriptingCore.GeometryScriptCopyMeshToAssetOptions
	// Size: 0x80 (0x80 - 0x0)
	struct FGeometryScriptCopyMeshToAssetOptions	
	{
	public:
		bool bEnableRecomputeNormals; // 0x0(0x1)
		bool bEnableRecomputeTangents; // 0x1(0x1)
		bool bEnableRemoveDegenerates; // 0x2(0x1)
		bool bUseBuildScale; // 0x3(0x1)
		bool bReplaceMaterials; // 0x4(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
		TArray<UMaterialInterface*> NewMaterials; // 0x8(0x10)
		TArray<FName> NewMaterialSlotNames; // 0x18(0x10)
		bool bApplyNaniteSettings; // 0x28(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x29(0x3) UNKNOWN PROPERTY
		FGeometryScriptNaniteOptions NaniteSettings; // 0x2C(0xC)
		FMeshNaniteSettings NewNaniteSettings; // 0x38(0x40)
		bool bEmitTransaction; // 0x78(0x1)
		bool bDeferMeshPostEditChange; // 0x79(0x1)
		unsigned char UnknownData02_7[0x6]; // 0x7A(0x6) UNKNOWN PROPERTY
	};


	// Struct GeometryScriptingCore.GeometryScriptCopyMorphTargetToAssetOptions
	// Size: 0x3 (0x3 - 0x0)
	struct FGeometryScriptCopyMorphTargetToAssetOptions	
	{
	public:
		bool bOverwriteExistingTarget; // 0x0(0x1)
		bool bEmitTransaction; // 0x1(0x1)
		bool bDeferMeshPostEditChange; // 0x2(0x1)
	};


	// Struct GeometryScriptingCore.GeometryScriptBakeTypeOptions
	// Size: 0x18 (0x18 - 0x0)
	struct FGeometryScriptBakeTypeOptions	
	{
	public:
		EGeometryScriptBakeTypes BakeType; // 0x0(0x1)
		unsigned char UnknownData00_7[0x17]; // 0x1(0x17) UNKNOWN PROPERTY
	};


	// Struct GeometryScriptingCore.GeometryScriptBakeTextureOptions
	// Size: 0x20 (0x20 - 0x0)
	struct FGeometryScriptBakeTextureOptions	
	{
	public:
		EGeometryScriptBakeResolution Resolution; // 0x0(0x1)
		EGeometryScriptBakeBitDepth BitDepth; // 0x1(0x1)
		EGeometryScriptBakeSamplesPerPixel SamplesPerPixel; // 0x2(0x1)
		unsigned char UnknownData00_6[0x5]; // 0x3(0x5) UNKNOWN PROPERTY
		UTexture2D* SampleFilterMask; // 0x8(0x8)
		EGeometryScriptBakeFilteringType FilteringType; // 0x10(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x11(0x3) UNKNOWN PROPERTY
		float ProjectionDistance; // 0x14(0x4)
		bool bProjectionInWorldSpace; // 0x18(0x1)
		unsigned char UnknownData02_7[0x7]; // 0x19(0x7) UNKNOWN PROPERTY
	};


	// Struct GeometryScriptingCore.GeometryScriptBakeVertexOptions
	// Size: 0xC (0xC - 0x0)
	struct FGeometryScriptBakeVertexOptions	
	{
	public:
		bool bSplitAtNormalSeams; // 0x0(0x1)
		bool bSplitAtUVSeams; // 0x1(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x2(0x2) UNKNOWN PROPERTY
		float ProjectionDistance; // 0x4(0x4)
		bool bProjectionInWorldSpace; // 0x8(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
	};


	// Struct GeometryScriptingCore.GeometryScriptBakeOutputType
	// Size: 0x80 (0x80 - 0x0)
	struct FGeometryScriptBakeOutputType	
	{
	public:
		EGeometryScriptBakeOutputMode OutputMode; // 0x0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		FGeometryScriptBakeTypeOptions RGBA; // 0x8(0x18)
		FGeometryScriptBakeTypeOptions R; // 0x20(0x18)
		FGeometryScriptBakeTypeOptions G; // 0x38(0x18)
		FGeometryScriptBakeTypeOptions B; // 0x50(0x18)
		FGeometryScriptBakeTypeOptions A; // 0x68(0x18)
	};


	// Struct GeometryScriptingCore.GeometryScriptBakeTargetMeshOptions
	// Size: 0x4 (0x4 - 0x0)
	struct FGeometryScriptBakeTargetMeshOptions	
	{
	public:
		int32_t TargetUVLayer; // 0x0(0x4)
	};


	// Struct GeometryScriptingCore.GeometryScriptBakeSourceMeshOptions
	// Size: 0x10 (0x10 - 0x0)
	struct FGeometryScriptBakeSourceMeshOptions	
	{
	public:
		UTexture2D* SourceNormalMap; // 0x0(0x8)
		int32_t SourceNormalUVLayer; // 0x8(0x4)
		EGeometryScriptBakeNormalSpace SourceNormalSpace; // 0xC(0x1)
		unsigned char UnknownData00_7[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
	};


	// Struct GeometryScriptingCore.GeometryScriptBakeRenderCaptureOptions
	// Size: 0x40 (0x40 - 0x0)
	struct FGeometryScriptBakeRenderCaptureOptions	
	{
	public:
		TArray<FGeometryScriptRenderCaptureCamera> Cameras; // 0x0(0x10)
		EGeometryScriptBakeResolution RenderCaptureResolution; // 0x10(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
		double FieldOfViewDegrees; // 0x18(0x8)
		double NearPlaneDist; // 0x20(0x8)
		EGeometryScriptBakeResolution Resolution; // 0x28(0x1)
		EGeometryScriptBakeSamplesPerPixel SamplesPerPixel; // 0x29(0x1)
		bool bRenderCaptureAntiAliasing; // 0x2A(0x1)
		unsigned char UnknownData01_6[0x1]; // 0x2B(0x1) UNKNOWN PROPERTY
		float CleanupTolerance; // 0x2C(0x4)
		bool bBaseColorMap; // 0x30(0x1)
		bool bNormalMap; // 0x31(0x1)
		bool bPackedMRSMap; // 0x32(0x1)
		bool bMetallicMap; // 0x33(0x1)
		bool bRoughnessMap; // 0x34(0x1)
		bool bSpecularMap; // 0x35(0x1)
		bool bEmissiveMap; // 0x36(0x1)
		bool bOpacityMap; // 0x37(0x1)
		bool bSubsurfaceColorMap; // 0x38(0x1)
		unsigned char UnknownData02_7[0x7]; // 0x39(0x7) UNKNOWN PROPERTY
	};


	// Struct GeometryScriptingCore.GeometryScriptRenderCaptureTextures
	// Size: 0x90 (0x90 - 0x0)
	struct FGeometryScriptRenderCaptureTextures	
	{
	public:
		UTexture2D* BaseColorMap; // 0x0(0x8)
		bool bHasBaseColorMap; // 0x8(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x9(0x7) UNKNOWN PROPERTY
		UTexture2D* NormalMap; // 0x10(0x8)
		bool bHasNormalMap; // 0x18(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x19(0x7) UNKNOWN PROPERTY
		UTexture2D* PackedMRSMap; // 0x20(0x8)
		bool bHasPackedMRSMap; // 0x28(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x29(0x7) UNKNOWN PROPERTY
		UTexture2D* MetallicMap; // 0x30(0x8)
		bool bHasMetallicMap; // 0x38(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x39(0x7) UNKNOWN PROPERTY
		UTexture2D* RoughnessMap; // 0x40(0x8)
		bool bHasRoughnessMap; // 0x48(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x49(0x7) UNKNOWN PROPERTY
		UTexture2D* SpecularMap; // 0x50(0x8)
		bool bHasSpecularMap; // 0x58(0x1)
		unsigned char UnknownData05_6[0x7]; // 0x59(0x7) UNKNOWN PROPERTY
		UTexture2D* EmissiveMap; // 0x60(0x8)
		bool bHasEmissiveMap; // 0x68(0x1)
		unsigned char UnknownData06_6[0x7]; // 0x69(0x7) UNKNOWN PROPERTY
		UTexture2D* OpacityMap; // 0x70(0x8)
		bool bHasOpacityMap; // 0x78(0x1)
		unsigned char UnknownData07_6[0x7]; // 0x79(0x7) UNKNOWN PROPERTY
		UTexture2D* SubsurfaceColorMap; // 0x80(0x8)
		bool bHasSubsurfaceColorMap; // 0x88(0x1)
		unsigned char UnknownData08_7[0x7]; // 0x89(0x7) UNKNOWN PROPERTY
	};


	// Struct GeometryScriptingCore.GeometryScriptSimpleMeshBuffers
	// Size: 0xD0 (0xD0 - 0x0)
	struct FGeometryScriptSimpleMeshBuffers	
	{
	public:
		TArray<FVector> Vertices; // 0x0(0x10)
		TArray<FVector> Normals; // 0x10(0x10)
		TArray<FVector2D> UV0; // 0x20(0x10)
		TArray<FVector2D> UV1; // 0x30(0x10)
		TArray<FVector2D> UV2; // 0x40(0x10)
		TArray<FVector2D> UV3; // 0x50(0x10)
		TArray<FVector2D> UV4; // 0x60(0x10)
		TArray<FVector2D> UV5; // 0x70(0x10)
		TArray<FVector2D> UV6; // 0x80(0x10)
		TArray<FVector2D> UV7; // 0x90(0x10)
		TArray<FLinearColor> VertexColors; // 0xA0(0x10)
		TArray<FIntVector> Triangles; // 0xB0(0x10)
		TArray<int32_t> TriGroupIDs; // 0xC0(0x10)
	};


	// Struct GeometryScriptingCore.GeometryScriptAppendMeshOptions
	// Size: 0x1 (0x1 - 0x0)
	struct FGeometryScriptAppendMeshOptions	
	{
	public:
		EGeometryScriptCombineAttributesMode CombineMode; // 0x0(0x1)
	};


	// Struct GeometryScriptingCore.GeometryScriptBoneWeight
	// Size: 0x8 (0x8 - 0x0)
	struct FGeometryScriptBoneWeight	
	{
	public:
		int32_t BoneIndex; // 0x0(0x4)
		float Weight; // 0x4(0x4)
	};


	// Struct GeometryScriptingCore.GeometryScriptBoneWeightProfile
	// Size: 0x4 (0x4 - 0x0)
	struct FGeometryScriptBoneWeightProfile	
	{
	public:
		FName ProfileName; // 0x0(0x4)
	};


	// Struct GeometryScriptingCore.GeometryScriptSmoothBoneWeightsOptions
	// Size: 0x10 (0x10 - 0x0)
	struct FGeometryScriptSmoothBoneWeightsOptions	
	{
	public:
		EGeometryScriptSmoothBoneWeightsType DistanceWeighingType; // 0x0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float Stiffness; // 0x4(0x4)
		int32_t MaxInfluences; // 0x8(0x4)
		int32_t VoxelResolution; // 0xC(0x4)
	};


	// Struct GeometryScriptingCore.GeometryScriptTransferBoneWeightsOptions
	// Size: 0x30 (0x30 - 0x0)
	struct FGeometryScriptTransferBoneWeightsOptions	
	{
	public:
		ETransferBoneWeightsMethod TransferMethod; // 0x0(0x1)
		EOutputTargetMeshBones OutputTargetMeshBones; // 0x1(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x2(0x2) UNKNOWN PROPERTY
		FGeometryScriptBoneWeightProfile SourceProfile; // 0x4(0x4)
		FGeometryScriptBoneWeightProfile TargetProfile; // 0x8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		double RadiusPercentage; // 0x10(0x8)
		double NormalThreshold; // 0x18(0x8)
		bool LayeredMeshSupport; // 0x20(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x21(0x3) UNKNOWN PROPERTY
		int32_t NumSmoothingIterations; // 0x24(0x4)
		float SmoothingStrength; // 0x28(0x4)
		FName InpaintMask; // 0x2C(0x4)
	};


	// Struct GeometryScriptingCore.GeometryScriptBoneInfo
	// Size: 0xE0 (0xE0 - 0x0)
	struct FGeometryScriptBoneInfo	
	{
	public:
		int32_t Index; // 0x0(0x4)
		FName Name; // 0x4(0x4)
		int32_t ParentIndex; // 0x8(0x4)
		unsigned char UnknownData00_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FTransform LocalTransform; // 0x10(0x60)
		FTransform WorldTransform; // 0x70(0x60)
		FLinearColor Color; // 0xD0(0x10)
	};


	// Struct GeometryScriptingCore.GeometryScriptCopyBonesFromMeshOptions
	// Size: 0x1 (0x1 - 0x0)
	struct FGeometryScriptCopyBonesFromMeshOptions	
	{
	public:
		bool ReindexWeights; // 0x0(0x1)
	};


	// Struct GeometryScriptingCore.GeometryScriptMeshBooleanOptions
	// Size: 0xC (0xC - 0x0)
	struct FGeometryScriptMeshBooleanOptions	
	{
	public:
		bool bFillHoles; // 0x0(0x1)
		bool bSimplifyOutput; // 0x1(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x2(0x2) UNKNOWN PROPERTY
		float SimplifyPlanarTolerance; // 0x4(0x4)
		bool bAllowEmptyResult; // 0x8(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
	};


	// Struct GeometryScriptingCore.GeometryScriptMeshSelfUnionOptions
	// Size: 0xC (0xC - 0x0)
	struct FGeometryScriptMeshSelfUnionOptions	
	{
	public:
		bool bFillHoles; // 0x0(0x1)
		bool bTrimFlaps; // 0x1(0x1)
		bool bSimplifyOutput; // 0x2(0x1)
		unsigned char UnknownData00_6[0x1]; // 0x3(0x1) UNKNOWN PROPERTY
		float SimplifyPlanarTolerance; // 0x4(0x4)
		float WindingThreshold; // 0x8(0x4)
	};


	// Struct GeometryScriptingCore.GeometryScriptMeshPlaneCutOptions
	// Size: 0x8 (0x8 - 0x0)
	struct FGeometryScriptMeshPlaneCutOptions	
	{
	public:
		bool bFillHoles; // 0x0(0x1)
		bool bFillSpans; // 0x1(0x1)
		bool bFlipCutSide; // 0x2(0x1)
		unsigned char UnknownData00_6[0x1]; // 0x3(0x1) UNKNOWN PROPERTY
		float UVWorldDimension; // 0x4(0x4)
	};


	// Struct GeometryScriptingCore.GeometryScriptMeshPlaneSliceOptions
	// Size: 0xC (0xC - 0x0)
	struct FGeometryScriptMeshPlaneSliceOptions	
	{
	public:
		bool bFillHoles; // 0x0(0x1)
		bool bFillSpans; // 0x1(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x2(0x2) UNKNOWN PROPERTY
		float GapWidth; // 0x4(0x4)
		float UVWorldDimension; // 0x8(0x4)
	};


	// Struct GeometryScriptingCore.GeometryScriptMeshMirrorOptions
	// Size: 0x3 (0x3 - 0x0)
	struct FGeometryScriptMeshMirrorOptions	
	{
	public:
		bool bApplyPlaneCut; // 0x0(0x1)
		bool bFlipCutSide; // 0x1(0x1)
		bool bWeldAlongPlane; // 0x2(0x1)
	};


	// Struct GeometryScriptingCore.GeometryScriptIsSameMeshOptions
	// Size: 0xC (0xC - 0x0)
	struct FGeometryScriptIsSameMeshOptions	
	{
	public:
		bool bCheckConnectivity; // 0x0(0x1)
		bool bCheckEdgeIDs; // 0x1(0x1)
		bool bCheckNormals; // 0x2(0x1)
		bool bCheckColors; // 0x3(0x1)
		bool bCheckUVs; // 0x4(0x1)
		bool bCheckGroups; // 0x5(0x1)
		bool bCheckAttributes; // 0x6(0x1)
		unsigned char UnknownData00_6[0x1]; // 0x7(0x1) UNKNOWN PROPERTY
		float Epsilon; // 0x8(0x4)
	};


	// Struct GeometryScriptingCore.GeometryScriptMeasureMeshDistanceOptions
	// Size: 0x1 (0x1 - 0x0)
	struct FGeometryScriptMeasureMeshDistanceOptions	
	{
	public:
		bool bSymmetric; // 0x0(0x1)
	};


	// Struct GeometryScriptingCore.GeometryScriptBendWarpOptions
	// Size: 0xC (0xC - 0x0)
	struct FGeometryScriptBendWarpOptions	
	{
	public:
		bool bSymmetricExtents; // 0x0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float LowerExtent; // 0x4(0x4)
		bool bBidirectional; // 0x8(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
	};


	// Struct GeometryScriptingCore.GeometryScriptTwistWarpOptions
	// Size: 0xC (0xC - 0x0)
	struct FGeometryScriptTwistWarpOptions	
	{
	public:
		bool bSymmetricExtents; // 0x0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float LowerExtent; // 0x4(0x4)
		bool bBidirectional; // 0x8(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
	};


	// Struct GeometryScriptingCore.GeometryScriptFlareWarpOptions
	// Size: 0xC (0xC - 0x0)
	struct FGeometryScriptFlareWarpOptions	
	{
	public:
		bool bSymmetricExtents; // 0x0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float LowerExtent; // 0x4(0x4)
		EGeometryScriptFlareType FlareType; // 0x8(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
	};


	// Struct GeometryScriptingCore.GeometryScriptPerlinNoiseLayerOptions
	// Size: 0x28 (0x28 - 0x0)
	struct FGeometryScriptPerlinNoiseLayerOptions	
	{
	public:
		float Magnitude; // 0x0(0x4)
		float Frequency; // 0x4(0x4)
		FVector FrequencyShift; // 0x8(0x18)
		int32_t RandomSeed; // 0x20(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
	};


	// Struct GeometryScriptingCore.GeometryScriptMathWarpOptions
	// Size: 0xC (0xC - 0x0)
	struct FGeometryScriptMathWarpOptions	
	{
	public:
		float Magnitude; // 0x0(0x4)
		float Frequency; // 0x4(0x4)
		float FrequencyShift; // 0x8(0x4)
	};


	// Struct GeometryScriptingCore.GeometryScriptPerlinNoiseOptions
	// Size: 0x30 (0x30 - 0x0)
	struct FGeometryScriptPerlinNoiseOptions	
	{
	public:
		FGeometryScriptPerlinNoiseLayerOptions BaseLayer; // 0x0(0x28)
		bool bApplyAlongNormal; // 0x28(0x1)
		EGeometryScriptEmptySelectionBehavior EmptyBehavior; // 0x29(0x1)
		unsigned char UnknownData00_7[0x6]; // 0x2A(0x6) UNKNOWN PROPERTY
	};


	// Struct GeometryScriptingCore.GeometryScriptIterativeMeshSmoothingOptions
	// Size: 0xC (0xC - 0x0)
	struct FGeometryScriptIterativeMeshSmoothingOptions	
	{
	public:
		int32_t NumIterations; // 0x0(0x4)
		float Alpha; // 0x4(0x4)
		EGeometryScriptEmptySelectionBehavior EmptyBehavior; // 0x8(0x1)
		unsigned char UnknownData00_7[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
	};


	// Struct GeometryScriptingCore.GeometryScriptDisplaceFromTextureOptions
	// Size: 0x38 (0x38 - 0x0)
	struct FGeometryScriptDisplaceFromTextureOptions	
	{
	public:
		float Magnitude; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FVector2D UVScale; // 0x8(0x10)
		FVector2D UVOffset; // 0x18(0x10)
		float Center; // 0x28(0x4)
		int32_t ImageChannel; // 0x2C(0x4)
		EGeometryScriptEmptySelectionBehavior EmptyBehavior; // 0x30(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x31(0x7) UNKNOWN PROPERTY
	};


	// Struct GeometryScriptingCore.GeometryScriptMeshEditPolygroupOptions
	// Size: 0x8 (0x8 - 0x0)
	struct FGeometryScriptMeshEditPolygroupOptions	
	{
	public:
		EGeometryScriptMeshEditPolygroupMode GroupMode; // 0x0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		int32_t ConstantGroup; // 0x4(0x4)
	};


	// Struct GeometryScriptingCore.GeometryScriptMeshOffsetOptions
	// Size: 0x18 (0x18 - 0x0)
	struct FGeometryScriptMeshOffsetOptions	
	{
	public:
		float OffsetDistance; // 0x0(0x4)
		bool bFixedBoundary; // 0x4(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
		int32_t SolveSteps; // 0x8(0x4)
		float SmoothAlpha; // 0xC(0x4)
		bool bReprojectDuringSmoothing; // 0x10(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x11(0x3) UNKNOWN PROPERTY
		float BoundaryAlpha; // 0x14(0x4)
	};


	// Struct GeometryScriptingCore.GeometryScriptMeshExtrudeOptions
	// Size: 0x28 (0x28 - 0x0)
	struct FGeometryScriptMeshExtrudeOptions	
	{
	public:
		float ExtrudeDistance; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FVector ExtrudeDirection; // 0x8(0x18)
		float UVScale; // 0x20(0x4)
		bool bSolidsToShells; // 0x24(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x25(0x3) UNKNOWN PROPERTY
	};


	// Struct GeometryScriptingCore.GeometryScriptMeshLinearExtrudeOptions
	// Size: 0x38 (0x38 - 0x0)
	struct FGeometryScriptMeshLinearExtrudeOptions	
	{
	public:
		float Distance; // 0x0(0x4)
		EGeometryScriptLinearExtrudeDirection DirectionMode; // 0x4(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
		FVector Direction; // 0x8(0x18)
		EGeometryScriptPolyOperationArea AreaMode; // 0x20(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x21(0x3) UNKNOWN PROPERTY
		FGeometryScriptMeshEditPolygroupOptions GroupOptions; // 0x24(0x8)
		float UVScale; // 0x2C(0x4)
		bool bSolidsToShells; // 0x30(0x1)
		unsigned char UnknownData02_7[0x7]; // 0x31(0x7) UNKNOWN PROPERTY
	};


	// Struct GeometryScriptingCore.GeometryScriptMeshOffsetFacesOptions
	// Size: 0x18 (0x18 - 0x0)
	struct FGeometryScriptMeshOffsetFacesOptions	
	{
	public:
		float Distance; // 0x0(0x4)
		EGeometryScriptOffsetFacesType OffsetType; // 0x4(0x1)
		EGeometryScriptPolyOperationArea AreaMode; // 0x5(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x6(0x2) UNKNOWN PROPERTY
		FGeometryScriptMeshEditPolygroupOptions GroupOptions; // 0x8(0x8)
		float UVScale; // 0x10(0x4)
		bool bSolidsToShells; // 0x14(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x15(0x3) UNKNOWN PROPERTY
	};


	// Struct GeometryScriptingCore.GeometryScriptMeshInsetOutsetFacesOptions
	// Size: 0x20 (0x20 - 0x0)
	struct FGeometryScriptMeshInsetOutsetFacesOptions	
	{
	public:
		float Distance; // 0x0(0x4)
		bool bReproject; // 0x4(0x1)
		bool bBoundaryOnly; // 0x5(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x6(0x2) UNKNOWN PROPERTY
		float Softness; // 0x8(0x4)
		float AreaScale; // 0xC(0x4)
		EGeometryScriptPolyOperationArea AreaMode; // 0x10(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x11(0x3) UNKNOWN PROPERTY
		FGeometryScriptMeshEditPolygroupOptions GroupOptions; // 0x14(0x8)
		float UVScale; // 0x1C(0x4)
	};


	// Struct GeometryScriptingCore.GeometryScriptMeshBevelOptions
	// Size: 0xC0 (0xC0 - 0x0)
	struct FGeometryScriptMeshBevelOptions	
	{
	public:
		float BevelDistance; // 0x0(0x4)
		bool bInferMaterialID; // 0x4(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
		int32_t SetMaterialID; // 0x8(0x4)
		int32_t Subdivisions; // 0xC(0x4)
		float RoundWeight; // 0x10(0x4)
		bool bApplyFilterBox; // 0x14(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x15(0x3) UNKNOWN PROPERTY
		FBox FilterBox; // 0x18(0x38)
		FTransform FilterBoxTransform; // 0x50(0x60)
		bool bFullyContained; // 0xB0(0x1)
		unsigned char UnknownData02_7[0xF]; // 0xB1(0xF) UNKNOWN PROPERTY
	};


	// Struct GeometryScriptingCore.GeometryScriptMeshBevelSelectionOptions
	// Size: 0x14 (0x14 - 0x0)
	struct FGeometryScriptMeshBevelSelectionOptions	
	{
	public:
		float BevelDistance; // 0x0(0x4)
		bool bInferMaterialID; // 0x4(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
		int32_t SetMaterialID; // 0x8(0x4)
		int32_t Subdivisions; // 0xC(0x4)
		float RoundWeight; // 0x10(0x4)
	};


	// Struct GeometryScriptingCore.GeometryScriptCalculateNormalsOptions
	// Size: 0x2 (0x2 - 0x0)
	struct FGeometryScriptCalculateNormalsOptions	
	{
	public:
		bool bAngleWeighted; // 0x0(0x1)
		bool bAreaWeighted; // 0x1(0x1)
	};


	// Struct GeometryScriptingCore.GeometryScriptSplitNormalsOptions
	// Size: 0x14 (0x14 - 0x0)
	struct FGeometryScriptSplitNormalsOptions	
	{
	public:
		bool bSplitByOpeningAngle; // 0x0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float OpeningAngleDeg; // 0x4(0x4)
		bool bSplitByFaceGroup; // 0x8(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
		FGeometryScriptGroupLayer GroupLayer; // 0xC(0x8)
	};


	// Struct GeometryScriptingCore.GeometryScriptTangentsOptions
	// Size: 0x8 (0x8 - 0x0)
	struct FGeometryScriptTangentsOptions	
	{
	public:
		EGeometryScriptTangentTypes Type; // 0x0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		int32_t UVLayer; // 0x4(0x4)
	};


	// Struct GeometryScriptingCore.GeometryScriptPrimitiveOptions
	// Size: 0x3 (0x3 - 0x0)
	struct FGeometryScriptPrimitiveOptions	
	{
	public:
		EGeometryScriptPrimitivePolygroupMode PolygroupMode; // 0x0(0x1)
		bool bFlipOrientation; // 0x1(0x1)
		EGeometryScriptPrimitiveUVMode UVMode; // 0x2(0x1)
	};


	// Struct GeometryScriptingCore.GeometryScriptRevolveOptions
	// Size: 0x14 (0x14 - 0x0)
	struct FGeometryScriptRevolveOptions	
	{
	public:
		float RevolveDegrees; // 0x0(0x4)
		float DegreeOffset; // 0x4(0x4)
		bool bReverseDirection; // 0x8(0x1)
		bool bHardNormals; // 0x9(0x1)
		unsigned char UnknownData00_6[0x2]; // 0xA(0x2) UNKNOWN PROPERTY
		float HardNormalAngle; // 0xC(0x4)
		bool bProfileAtMidpoint; // 0x10(0x1)
		bool bFillPartialRevolveEndcaps; // 0x11(0x1)
		unsigned char UnknownData01_7[0x2]; // 0x12(0x2) UNKNOWN PROPERTY
	};


	// Struct GeometryScriptingCore.GeometryScriptVoronoiOptions
	// Size: 0x58 (0x58 - 0x0)
	struct FGeometryScriptVoronoiOptions	
	{
	public:
		float BoundsExpand; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FBox Bounds; // 0x8(0x38)
		TArray<int32_t> CreateCells; // 0x40(0x10)
		bool bIncludeBoundary; // 0x50(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x51(0x7) UNKNOWN PROPERTY
	};


	// Struct GeometryScriptingCore.GeometryScriptConstrainedDelaunayTriangulationOptions
	// Size: 0x3 (0x3 - 0x0)
	struct FGeometryScriptConstrainedDelaunayTriangulationOptions	
	{
	public:
		EGeometryScriptPolygonFillMode ConstrainedEdgesFillMode; // 0x0(0x1)
		bool bValidateEdgesInResult; // 0x1(0x1)
		bool bRemoveDuplicateVertices; // 0x2(0x1)
	};


	// Struct GeometryScriptingCore.GeometryScriptPolygonsTriangulationOptions
	// Size: 0x1 (0x1 - 0x0)
	struct FGeometryScriptPolygonsTriangulationOptions	
	{
	public:
		bool bStillAppendOnTriangulationError; // 0x0(0x1)
	};


	// Struct GeometryScriptingCore.GeometryScriptRemeshOptions
	// Size: 0x1C (0x1C - 0x0)
	struct FGeometryScriptRemeshOptions	
	{
	public:
		bool bDiscardAttributes; // 0x0(0x1)
		bool bReprojectToInputMesh; // 0x1(0x1)
		EGeometryScriptRemeshSmoothingType SmoothingType; // 0x2(0x1)
		unsigned char UnknownData00_6[0x1]; // 0x3(0x1) UNKNOWN PROPERTY
		float SmoothingRate; // 0x4(0x4)
		EGeometryScriptRemeshEdgeConstraintType MeshBoundaryConstraint; // 0x8(0x1)
		EGeometryScriptRemeshEdgeConstraintType GroupBoundaryConstraint; // 0x9(0x1)
		EGeometryScriptRemeshEdgeConstraintType MaterialBoundaryConstraint; // 0xA(0x1)
		bool bAllowFlips; // 0xB(0x1)
		bool bAllowSplits; // 0xC(0x1)
		bool bAllowCollapses; // 0xD(0x1)
		bool bPreventNormalFlips; // 0xE(0x1)
		bool bPreventTinyTriangles; // 0xF(0x1)
		bool bUseFullRemeshPasses; // 0x10(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x11(0x3) UNKNOWN PROPERTY
		int32_t RemeshIterations; // 0x14(0x4)
		bool bAutoCompact; // 0x18(0x1)
		unsigned char UnknownData02_7[0x3]; // 0x19(0x3) UNKNOWN PROPERTY
	};


	// Struct GeometryScriptingCore.GeometryScriptUniformRemeshOptions
	// Size: 0xC (0xC - 0x0)
	struct FGeometryScriptUniformRemeshOptions	
	{
	public:
		EGeometryScriptUniformRemeshTargetType TargetType; // 0x0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		int32_t TargetTriangleCount; // 0x4(0x4)
		float TargetEdgeLength; // 0x8(0x4)
	};


	// Struct GeometryScriptingCore.GeometryScriptWeldEdgesOptions
	// Size: 0x8 (0x8 - 0x0)
	struct FGeometryScriptWeldEdgesOptions	
	{
	public:
		float Tolerance; // 0x0(0x4)
		bool bOnlyUniquePairs; // 0x4(0x1)
		unsigned char UnknownData00_7[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
	};


	// Struct GeometryScriptingCore.GeometryScriptResolveTJunctionOptions
	// Size: 0x4 (0x4 - 0x0)
	struct FGeometryScriptResolveTJunctionOptions	
	{
	public:
		float Tolerance; // 0x0(0x4)
	};


	// Struct GeometryScriptingCore.GeometryScriptSnapBoundariesOptions
	// Size: 0xC (0xC - 0x0)
	struct FGeometryScriptSnapBoundariesOptions	
	{
	public:
		float Tolerance; // 0x0(0x4)
		bool bSnapToEdges; // 0x4(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
		int32_t MaxIterations; // 0x8(0x4)
	};


	// Struct GeometryScriptingCore.GeometryScriptFillHolesOptions
	// Size: 0x2 (0x2 - 0x0)
	struct FGeometryScriptFillHolesOptions	
	{
	public:
		EGeometryScriptFillHolesMethod FillMethod; // 0x0(0x1)
		bool bDeleteIsolatedTriangles; // 0x1(0x1)
	};


	// Struct GeometryScriptingCore.GeometryScriptRemoveSmallComponentOptions
	// Size: 0xC (0xC - 0x0)
	struct FGeometryScriptRemoveSmallComponentOptions	
	{
	public:
		float MinVolume; // 0x0(0x4)
		float MinArea; // 0x4(0x4)
		int32_t MinTriangleCount; // 0x8(0x4)
	};


	// Struct GeometryScriptingCore.GeometryScriptRemoveHiddenTrianglesOptions
	// Size: 0x1C (0x1C - 0x0)
	struct FGeometryScriptRemoveHiddenTrianglesOptions	
	{
	public:
		EGeometryScriptRemoveHiddenTrianglesMethod Method; // 0x0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		int32_t SamplesPerTriangle; // 0x4(0x4)
		int32_t ShrinkSelection; // 0x8(0x4)
		float WindingIsoValue; // 0xC(0x4)
		int32_t RaysPerSample; // 0x10(0x4)
		float NormalOffset; // 0x14(0x4)
		bool bCompactResult; // 0x18(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x19(0x3) UNKNOWN PROPERTY
	};


	// Struct GeometryScriptingCore.GeometryScriptDegenerateTriangleOptions
	// Size: 0x20 (0x20 - 0x0)
	struct FGeometryScriptDegenerateTriangleOptions	
	{
	public:
		EGeometryScriptRepairMeshMode Mode; // 0x0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		double MinTriangleArea; // 0x8(0x8)
		double MinEdgeLength; // 0x10(0x8)
		bool bCompactOnCompletion; // 0x18(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x19(0x7) UNKNOWN PROPERTY
	};


	// Struct GeometryScriptingCore.GeometryScriptMeshPointSamplingOptions
	// Size: 0x18 (0x18 - 0x0)
	struct FGeometryScriptMeshPointSamplingOptions	
	{
	public:
		float SamplingRadius; // 0x0(0x4)
		int32_t MaxNumSamples; // 0x4(0x4)
		int32_t RandomSeed; // 0x8(0x4)
		unsigned char UnknownData00_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		double SubSampleDensity; // 0x10(0x8)
	};


	// Struct GeometryScriptingCore.GeometryScriptNonUniformPointSamplingOptions
	// Size: 0x18 (0x18 - 0x0)
	struct FGeometryScriptNonUniformPointSamplingOptions	
	{
	public:
		float MaxSamplingRadius; // 0x0(0x4)
		EGeometryScriptSamplingDistributionMode SizeDistribution; // 0x4(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
		double SizeDistributionPower; // 0x8(0x8)
		EGeometryScriptSamplingWeightMode WeightMode; // 0x10(0x1)
		bool bInvertWeights; // 0x11(0x1)
		unsigned char UnknownData01_7[0x6]; // 0x12(0x6) UNKNOWN PROPERTY
	};


	// Struct GeometryScriptingCore.GeometryScriptPlanarSimplifyOptions
	// Size: 0x8 (0x8 - 0x0)
	struct FGeometryScriptPlanarSimplifyOptions	
	{
	public:
		float AngleThreshold; // 0x0(0x4)
		bool bAutoCompact; // 0x4(0x1)
		unsigned char UnknownData00_7[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
	};


	// Struct GeometryScriptingCore.GeometryScriptPolygroupSimplifyOptions
	// Size: 0x8 (0x8 - 0x0)
	struct FGeometryScriptPolygroupSimplifyOptions	
	{
	public:
		float AngleThreshold; // 0x0(0x4)
		bool bAutoCompact; // 0x4(0x1)
		unsigned char UnknownData00_7[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
	};


	// Struct GeometryScriptingCore.GeometryScriptSimplifyMeshOptions
	// Size: 0x7 (0x7 - 0x0)
	struct FGeometryScriptSimplifyMeshOptions	
	{
	public:
		EGeometryScriptRemoveMeshSimplificationType Method; // 0x0(0x1)
		bool bAllowSeamCollapse; // 0x1(0x1)
		bool bAllowSeamSmoothing; // 0x2(0x1)
		bool bAllowSeamSplits; // 0x3(0x1)
		bool bPreserveVertexPositions; // 0x4(0x1)
		bool bRetainQuadricMemory; // 0x5(0x1)
		bool bAutoCompact; // 0x6(0x1)
	};


	// Struct GeometryScriptingCore.GeometryScriptSpatialQueryOptions
	// Size: 0xC (0xC - 0x0)
	struct FGeometryScriptSpatialQueryOptions	
	{
	public:
		float MaxDistance; // 0x0(0x4)
		bool bAllowUnsafeModifiedQueries; // 0x4(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
		float WindingIsoThreshold; // 0x8(0x4)
	};


	// Struct GeometryScriptingCore.GeometryScriptRayHitResult
	// Size: 0x40 (0x40 - 0x0)
	struct FGeometryScriptRayHitResult	
	{
	public:
		bool bHit; // 0x0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float RayParameter; // 0x4(0x4)
		int32_t HitTriangleID; // 0x8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FVector HitPosition; // 0x10(0x18)
		FVector HitBaryCoords; // 0x28(0x18)
	};


	// Struct GeometryScriptingCore.GeometryScriptPNTessellateOptions
	// Size: 0x1 (0x1 - 0x0)
	struct FGeometryScriptPNTessellateOptions	
	{
	public:
		bool bRecomputeNormals; // 0x0(0x1)
	};


	// Struct GeometryScriptingCore.GeometryScriptSelectiveTessellateOptions
	// Size: 0x2 (0x2 - 0x0)
	struct FGeometryScriptSelectiveTessellateOptions	
	{
	public:
		bool bEnableMultithreading; // 0x0(0x1)
		EGeometryScriptEmptySelectionBehavior EmptyBehavior; // 0x1(0x1)
	};


	// Struct GeometryScriptingCore.GeometryScriptRepackUVsOptions
	// Size: 0x8 (0x8 - 0x0)
	struct FGeometryScriptRepackUVsOptions	
	{
	public:
		int32_t TargetImageWidth; // 0x0(0x4)
		bool bOptimizeIslandRotation; // 0x4(0x1)
		unsigned char UnknownData00_7[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
	};


	// Struct GeometryScriptingCore.GeometryScriptExpMapUVOptions
	// Size: 0x8 (0x8 - 0x0)
	struct FGeometryScriptExpMapUVOptions	
	{
	public:
		int32_t NormalSmoothingRounds; // 0x0(0x4)
		float NormalSmoothingAlpha; // 0x4(0x4)
	};


	// Struct GeometryScriptingCore.GeometryScriptSpectralConformalUVOptions
	// Size: 0x1 (0x1 - 0x0)
	struct FGeometryScriptSpectralConformalUVOptions	
	{
	public:
		bool bPreserveIrregularity; // 0x0(0x1)
	};


	// Struct GeometryScriptingCore.GeometryScriptRecomputeUVsOptions
	// Size: 0x1C (0x1C - 0x0)
	struct FGeometryScriptRecomputeUVsOptions	
	{
	public:
		EGeometryScriptUVFlattenMethod Method; // 0x0(0x1)
		EGeometryScriptUVIslandSource IslandSource; // 0x1(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x2(0x2) UNKNOWN PROPERTY
		FGeometryScriptExpMapUVOptions ExpMapOptions; // 0x4(0x8)
		FGeometryScriptSpectralConformalUVOptions SpectralConformalOptions; // 0xC(0x1)
		unsigned char UnknownData01_6[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
		FGeometryScriptGroupLayer GroupLayer; // 0x10(0x8)
		bool bAutoAlignIslandsWithAxes; // 0x18(0x1)
		unsigned char UnknownData02_7[0x3]; // 0x19(0x3) UNKNOWN PROPERTY
	};


	// Struct GeometryScriptingCore.GeometryScriptPatchBuilderOptions
	// Size: 0x34 (0x34 - 0x0)
	struct FGeometryScriptPatchBuilderOptions	
	{
	public:
		int32_t InitialPatchCount; // 0x0(0x4)
		int32_t MinPatchSize; // 0x4(0x4)
		float PatchCurvatureAlignmentWeight; // 0x8(0x4)
		float PatchMergingMetricThresh; // 0xC(0x4)
		float PatchMergingAngleThresh; // 0x10(0x4)
		FGeometryScriptExpMapUVOptions ExpMapOptions; // 0x14(0x8)
		bool bRespectInputGroups; // 0x1C(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1D(0x3) UNKNOWN PROPERTY
		FGeometryScriptGroupLayer GroupLayer; // 0x20(0x8)
		bool bAutoPack; // 0x28(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x29(0x3) UNKNOWN PROPERTY
		FGeometryScriptRepackUVsOptions PackingOptions; // 0x2C(0x8)
	};


	// Struct GeometryScriptingCore.GeometryScriptXAtlasOptions
	// Size: 0x4 (0x4 - 0x0)
	struct FGeometryScriptXAtlasOptions	
	{
	public:
		int32_t MaxIterations; // 0x0(0x4)
	};


	// Struct GeometryScriptingCore.GeometryScriptBlurMeshVertexColorsOptions
	// Size: 0x4 (0x4 - 0x0)
	struct FGeometryScriptBlurMeshVertexColorsOptions	
	{
	public:
		bool Red; // 0x0(0x1)
		bool Green; // 0x1(0x1)
		bool Blue; // 0x2(0x1)
		bool Alpha; // 0x3(0x1)
	};


	// Struct GeometryScriptingCore.GeometryScript3DGridParameters
	// Size: 0xC (0xC - 0x0)
	struct FGeometryScript3DGridParameters	
	{
	public:
		EGeometryScriptGridSizingMethod SizeMethod; // 0x0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float GridCellSize; // 0x4(0x4)
		int32_t GridResolution; // 0x8(0x4)
	};


	// Struct GeometryScriptingCore.GeometryScriptSolidifyOptions
	// Size: 0x28 (0x28 - 0x0)
	struct FGeometryScriptSolidifyOptions	
	{
	public:
		FGeometryScript3DGridParameters GridParameters; // 0x0(0xC)
		float WindingThreshold; // 0xC(0x4)
		bool bSolidAtBoundaries; // 0x10(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x11(0x3) UNKNOWN PROPERTY
		float ExtendBounds; // 0x14(0x4)
		int32_t SurfaceSearchSteps; // 0x18(0x4)
		bool bThickenShells; // 0x1C(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x1D(0x3) UNKNOWN PROPERTY
		double ShellThickness; // 0x20(0x8)
	};


	// Struct GeometryScriptingCore.GeometryScriptMorphologyOptions
	// Size: 0x24 (0x24 - 0x0)
	struct FGeometryScriptMorphologyOptions	
	{
	public:
		FGeometryScript3DGridParameters SDFGridParameters; // 0x0(0xC)
		bool bUseSeparateMeshGrid; // 0xC(0x1)
		unsigned char UnknownData00_6[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
		FGeometryScript3DGridParameters MeshGridParameters; // 0x10(0xC)
		EGeometryScriptMorphologicalOpType Operation; // 0x1C(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x1D(0x3) UNKNOWN PROPERTY
		float Distance; // 0x20(0x4)
	};


	// Struct GeometryScriptingCore.GeometryScriptPointClusteringOptions
	// Size: 0x20 (0x20 - 0x0)
	struct FGeometryScriptPointClusteringOptions	
	{
	public:
		TArray<FVector> InitialClusterCenters; // 0x0(0x10)
		int32_t TargetNumClusters; // 0x10(0x4)
		EGeometryScriptInitKMeansMethod InitializeMethod; // 0x14(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x15(0x3) UNKNOWN PROPERTY
		int32_t RandomSeed; // 0x18(0x4)
		int32_t MaxIterations; // 0x1C(0x4)
	};


	// Struct GeometryScriptingCore.GeometryScriptPointPriorityOptions
	// Size: 0x18 (0x18 - 0x0)
	struct FGeometryScriptPointPriorityOptions	
	{
	public:
		TArray<float> OptionalPriorityWeights; // 0x0(0x10)
		bool bUniformSpacing; // 0x10(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
	};


	// Struct GeometryScriptingCore.GeometryScriptPointFlatteningOptions
	// Size: 0x70 (0x70 - 0x0)
	struct FGeometryScriptPointFlatteningOptions	
	{
	public:
		FTransform Frame; // 0x0(0x60)
		EGeometryScriptAxis DropAxis; // 0x60(0x1)
		unsigned char UnknownData00_7[0xF]; // 0x61(0xF) UNKNOWN PROPERTY
	};


	// Struct GeometryScriptingCore.GeometryScriptPolygonOffsetOptions
	// Size: 0x28 (0x28 - 0x0)
	struct FGeometryScriptPolygonOffsetOptions	
	{
	public:
		EGeometryScriptPolyOffsetJoinType JoinType; // 0x0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		double MiterLimit; // 0x8(0x8)
		bool bOffsetBothSides; // 0x10(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
		double StepsPerRadianScale; // 0x18(0x8)
		double MaximumStepsPerRadian; // 0x20(0x8)
	};


	// Struct GeometryScriptingCore.GeometryScriptOpenPathOffsetOptions
	// Size: 0x28 (0x28 - 0x0)
	struct FGeometryScriptOpenPathOffsetOptions	
	{
	public:
		EGeometryScriptPolyOffsetJoinType JoinType; // 0x0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		double MiterLimit; // 0x8(0x8)
		EGeometryScriptPathOffsetEndType EndType; // 0x10(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
		double StepsPerRadianScale; // 0x18(0x8)
		double MaximumStepsPerRadian; // 0x20(0x8)
	};


	// Struct GeometryScriptingCore.GeometryScriptSplineSamplingOptions
	// Size: 0x14 (0x14 - 0x0)
	struct FGeometryScriptSplineSamplingOptions	
	{
	public:
		int32_t NumSamples; // 0x0(0x4)
		float ErrorTolerance; // 0x4(0x4)
		EGeometryScriptSampleSpacing SampleSpacing; // 0x8(0x1)
		TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace; // 0x9(0x1)
		EGeometryScriptEvaluateSplineRange RangeMethod; // 0xA(0x1)
		unsigned char UnknownData00_6[0x1]; // 0xB(0x1) UNKNOWN PROPERTY
		float RangeStart; // 0xC(0x4)
		float RangeEnd; // 0x10(0x4)
	};


	// Struct GeometryScriptingCore.GeometryScriptCopyMeshFromComponentOptions
	// Size: 0xC (0xC - 0x0)
	struct FGeometryScriptCopyMeshFromComponentOptions	
	{
	public:
		bool bWantNormals; // 0x0(0x1)
		bool bWantTangents; // 0x1(0x1)
		bool bWantInstanceColors; // 0x2(0x1)
		unsigned char UnknownData00_6[0x1]; // 0x3(0x1) UNKNOWN PROPERTY
		FGeometryScriptMeshReadLOD RequestedLOD; // 0x4(0x8)
	};


	// Struct GeometryScriptingCore.GeometryScriptDetermineMeshOcclusionOptions
	// Size: 0x10 (0x10 - 0x0)
	struct FGeometryScriptDetermineMeshOcclusionOptions	
	{
	public:
		double SamplingDensity; // 0x0(0x8)
		bool bDoubleSided; // 0x8(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
		int32_t NumSearchDirections; // 0xC(0x4)
	};


	// Struct GeometryScriptingCore.GeometryScriptSampleTextureOptions
	// Size: 0x28 (0x28 - 0x0)
	struct FGeometryScriptSampleTextureOptions	
	{
	public:
		EGeometryScriptPixelSamplingMethod SamplingMethod; // 0x0(0x1)
		bool bWrap; // 0x1(0x1)
		unsigned char UnknownData00_6[0x6]; // 0x2(0x6) UNKNOWN PROPERTY
		FVector2D UVScale; // 0x8(0x10)
		FVector2D UVOffset; // 0x18(0x10)
	};


	// Struct GeometryScriptingCore.ComputeDistanceFieldSettings
	// Size: 0x1C (0x1C - 0x0)
	struct FComputeDistanceFieldSettings	
	{
	public:
		EDistanceFieldComputeMode ComputeMode; // 0x0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float NarrowBandWidth; // 0x4(0x4)
		EDistanceFieldUnits NarrowBandUnits; // 0x8(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
		FIntVector VoxelsPerDimensions; // 0xC(0xC)
		bool bRequirePower2; // 0x18(0x1)
		unsigned char UnknownData02_7[0x3]; // 0x19(0x3) UNKNOWN PROPERTY
	};


	// Struct GeometryScriptingCore.DistanceFieldToTextureSettings
	// Size: 0x8 (0x8 - 0x0)
	struct FDistanceFieldToTextureSettings	
	{
	public:
		float Scale; // 0x0(0x4)
		float Offset; // 0x4(0x4)
	};

}
