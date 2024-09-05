#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: GeometryScriptingCore
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Enum /Script/GeometryScriptingCore.EGeometryScriptOutcomePins
	enum EGeometryScriptOutcomePins
	{
		EGeometryScriptOutcomePins__Failure = 0,
		EGeometryScriptOutcomePins__Success = 1,
	};


	// Enum /Script/GeometryScriptingCore.EGeometryScriptSearchOutcomePins
	enum EGeometryScriptSearchOutcomePins
	{
		EGeometryScriptSearchOutcomePins__Found = 0,
		EGeometryScriptSearchOutcomePins__NotFound = 1,
	};


	// Enum /Script/GeometryScriptingCore.EGeometryScriptContainmentOutcomePins
	enum EGeometryScriptContainmentOutcomePins
	{
		EGeometryScriptContainmentOutcomePins__Inside = 0,
		EGeometryScriptContainmentOutcomePins__Outside = 1,
	};


	// Enum /Script/GeometryScriptingCore.EGeometryScriptLODType
	enum EGeometryScriptLODType
	{
		EGeometryScriptLODType__MaxAvailable = 0,
		EGeometryScriptLODType__HiResSourceModel = 1,
		EGeometryScriptLODType__SourceModel = 2,
		EGeometryScriptLODType__RenderData = 3,
	};


	// Enum /Script/GeometryScriptingCore.EGeometryScriptAxis
	enum EGeometryScriptAxis
	{
		EGeometryScriptAxis__X = 0,
		EGeometryScriptAxis__Y = 1,
		EGeometryScriptAxis__Z = 2,
	};


	// Enum /Script/GeometryScriptingCore.EGeometryScriptCoordinateSpace
	enum EGeometryScriptCoordinateSpace
	{
		EGeometryScriptCoordinateSpace__Local = 0,
		EGeometryScriptCoordinateSpace__World = 1,
	};


	// Enum /Script/GeometryScriptingCore.EGeometryScriptIndexType
	enum EGeometryScriptIndexType
	{
		EGeometryScriptIndexType__Any = 0,
		EGeometryScriptIndexType__Triangle = 1,
		EGeometryScriptIndexType__Edge = 2,
		EGeometryScriptIndexType__Vertex = 3,
		EGeometryScriptIndexType__MaterialID = 4,
		EGeometryScriptIndexType__PolygroupID = 5,
	};


	// Enum /Script/GeometryScriptingCore.EGeometryScriptDebugMessageType
	enum EGeometryScriptDebugMessageType
	{
		EGeometryScriptDebugMessageType__ErrorMessage = 0,
		EGeometryScriptDebugMessageType__WarningMessage = 1,
	};


	// Enum /Script/GeometryScriptingCore.EGeometryScriptErrorType
	enum EGeometryScriptErrorType
	{
		EGeometryScriptErrorType__NoError = 0,
		EGeometryScriptErrorType__UnknownError = 1,
		EGeometryScriptErrorType__InvalidInputs = 2,
		EGeometryScriptErrorType__OperationFailed = 3,
	};


	// Enum /Script/GeometryScriptingCore.EGeometryScriptCollisionGenerationMethod
	enum EGeometryScriptCollisionGenerationMethod
	{
		EGeometryScriptCollisionGenerationMethod__AlignedBoxes = 0,
		EGeometryScriptCollisionGenerationMethod__OrientedBoxes = 1,
		EGeometryScriptCollisionGenerationMethod__MinimalSpheres = 2,
		EGeometryScriptCollisionGenerationMethod__Capsules = 3,
		EGeometryScriptCollisionGenerationMethod__ConvexHulls = 4,
		EGeometryScriptCollisionGenerationMethod__SweptHulls = 5,
		EGeometryScriptCollisionGenerationMethod__MinVolumeShapes = 6,
		EGeometryScriptCollisionGenerationMethod__LevelSets = 7,
	};


	// Enum /Script/GeometryScriptingCore.EGeometryScriptSweptHullAxis
	enum EGeometryScriptSweptHullAxis
	{
		EGeometryScriptSweptHullAxis__X = 0,
		EGeometryScriptSweptHullAxis__Y = 1,
		EGeometryScriptSweptHullAxis__Z = 2,
		EGeometryScriptSweptHullAxis__SmallestBoxDimension = 3,
		EGeometryScriptSweptHullAxis__SmallestVolume = 4,
	};


	// Enum /Script/GeometryScriptingCore.ENegativeSpaceSampleMethod
	enum ENegativeSpaceSampleMethod
	{
		ENegativeSpaceSampleMethod__Uniform = 0,
		ENegativeSpaceSampleMethod__VoxelSearch = 1,
		ENegativeSpaceSampleMethod__NavigableVoxelSearch = 2,
	};


	// Enum /Script/GeometryScriptingCore.EGeometryScriptConvexHullSimplifyMethod
	enum EGeometryScriptConvexHullSimplifyMethod
	{
		EGeometryScriptConvexHullSimplifyMethod__MeshQSlim = 0,
		EGeometryScriptConvexHullSimplifyMethod__AngleTolerance = 1,
	};


	// Enum /Script/GeometryScriptingCore.EGeometryScriptMeshSelectionType
	enum EGeometryScriptMeshSelectionType
	{
		EGeometryScriptMeshSelectionType__Vertices = 0,
		EGeometryScriptMeshSelectionType__Triangles = 1,
		EGeometryScriptMeshSelectionType__Polygroups = 2,
	};


	// Enum /Script/GeometryScriptingCore.EGeometryScriptMeshSelectionConversionType
	enum EGeometryScriptMeshSelectionConversionType
	{
		EGeometryScriptMeshSelectionConversionType__NoConversion = 0,
		EGeometryScriptMeshSelectionConversionType__ToVertices = 1,
		EGeometryScriptMeshSelectionConversionType__ToTriangles = 2,
		EGeometryScriptMeshSelectionConversionType__ToPolygroups = 3,
	};


	// Enum /Script/GeometryScriptingCore.EGeometryScriptCombineSelectionMode
	enum EGeometryScriptCombineSelectionMode
	{
		EGeometryScriptCombineSelectionMode__Add = 0,
		EGeometryScriptCombineSelectionMode__Subtract = 1,
		EGeometryScriptCombineSelectionMode__Intersection = 2,
	};


	// Enum /Script/GeometryScriptingCore.EGeometryScriptEmptySelectionBehavior
	enum EGeometryScriptEmptySelectionBehavior
	{
		EGeometryScriptEmptySelectionBehavior__FullMeshSelection = 0,
		EGeometryScriptEmptySelectionBehavior__EmptySelection = 1,
	};


	// Enum /Script/GeometryScriptingCore.EGeometryScriptBakeResolution
	enum EGeometryScriptBakeResolution
	{
		EGeometryScriptBakeResolution__Resolution16 = 0,
		EGeometryScriptBakeResolution__Resolution32 = 1,
		EGeometryScriptBakeResolution__Resolution64 = 2,
		EGeometryScriptBakeResolution__Resolution128 = 3,
		EGeometryScriptBakeResolution__Resolution256 = 4,
		EGeometryScriptBakeResolution__Resolution512 = 5,
		EGeometryScriptBakeResolution__Resolution1024 = 6,
		EGeometryScriptBakeResolution__Resolution2048 = 7,
		EGeometryScriptBakeResolution__Resolution4096 = 8,
		EGeometryScriptBakeResolution__Resolution8192 = 9,
	};


	// Enum /Script/GeometryScriptingCore.EGeometryScriptBakeBitDepth
	enum EGeometryScriptBakeBitDepth
	{
		EGeometryScriptBakeBitDepth__ChannelBits8 = 0,
		EGeometryScriptBakeBitDepth__ChannelBits16 = 1,
	};


	// Enum /Script/GeometryScriptingCore.EGeometryScriptBakeSamplesPerPixel
	enum EGeometryScriptBakeSamplesPerPixel
	{
		EGeometryScriptBakeSamplesPerPixel__Sample1 = 0,
		EGeometryScriptBakeSamplesPerPixel__Sample4 = 1,
		EGeometryScriptBakeSamplesPerPixel__Sample16 = 2,
		EGeometryScriptBakeSamplesPerPixel__Sample64 = 3,
		EGeometryScriptBakeSamplesPerPixel__Samples256 = 4,
	};


	// Enum /Script/GeometryScriptingCore.EGeometryScriptBakeFilteringType
	enum EGeometryScriptBakeFilteringType
	{
		EGeometryScriptBakeFilteringType__BSpline = 0,
		EGeometryScriptBakeFilteringType__Box = 1,
	};


	// Enum /Script/GeometryScriptingCore.EGeometryScriptBakeTypes
	enum EGeometryScriptBakeTypes
	{
		EGeometryScriptBakeTypes__None = 0,
		EGeometryScriptBakeTypes__TangentSpaceNormal = 1,
		EGeometryScriptBakeTypes__ObjectSpaceNormal = 2,
		EGeometryScriptBakeTypes__FaceNormal = 3,
		EGeometryScriptBakeTypes__BentNormal = 4,
		EGeometryScriptBakeTypes__Position = 5,
		EGeometryScriptBakeTypes__Curvature = 6,
		EGeometryScriptBakeTypes__AmbientOcclusion = 7,
		EGeometryScriptBakeTypes__Texture = 8,
		EGeometryScriptBakeTypes__MultiTexture = 9,
		EGeometryScriptBakeTypes__VertexColor = A,
		EGeometryScriptBakeTypes__MaterialID = B,
		EGeometryScriptBakeTypes__Constant = C,
	};


	// Enum /Script/GeometryScriptingCore.EGeometryScriptBakeOutputMode
	enum EGeometryScriptBakeOutputMode
	{
		EGeometryScriptBakeOutputMode__RGBA = 0,
		EGeometryScriptBakeOutputMode__PerChannel = 1,
	};


	// Enum /Script/GeometryScriptingCore.EGeometryScriptBakeNormalSpace
	enum EGeometryScriptBakeNormalSpace
	{
		EGeometryScriptBakeNormalSpace__Tangent = 0,
		EGeometryScriptBakeNormalSpace__Object = 1,
	};


	// Enum /Script/GeometryScriptingCore.EGeometryScriptBakeCurvatureTypeMode
	enum EGeometryScriptBakeCurvatureTypeMode
	{
		EGeometryScriptBakeCurvatureTypeMode__Mean = 0,
		EGeometryScriptBakeCurvatureTypeMode__Max = 1,
		EGeometryScriptBakeCurvatureTypeMode__Min = 2,
		EGeometryScriptBakeCurvatureTypeMode__Gaussian = 3,
	};


	// Enum /Script/GeometryScriptingCore.EGeometryScriptBakeCurvatureColorMode
	enum EGeometryScriptBakeCurvatureColorMode
	{
		EGeometryScriptBakeCurvatureColorMode__Grayscale = 0,
		EGeometryScriptBakeCurvatureColorMode__RedBlue = 1,
		EGeometryScriptBakeCurvatureColorMode__RedGreenBlue = 2,
	};


	// Enum /Script/GeometryScriptingCore.EGeometryScriptBakeCurvatureClampMode
	enum EGeometryScriptBakeCurvatureClampMode
	{
		EGeometryScriptBakeCurvatureClampMode__None = 0,
		EGeometryScriptBakeCurvatureClampMode__OnlyPositive = 1,
		EGeometryScriptBakeCurvatureClampMode__OnlyNegative = 2,
	};


	// Enum /Script/GeometryScriptingCore.EGeometryScriptCombineAttributesMode
	enum EGeometryScriptCombineAttributesMode
	{
		EGeometryScriptCombineAttributesMode__EnableAllMatching = 0,
		EGeometryScriptCombineAttributesMode__UseTarget = 1,
		EGeometryScriptCombineAttributesMode__UseSource = 2,
	};


	// Enum /Script/GeometryScriptingCore.EGeometryScriptSmoothBoneWeightsType
	enum EGeometryScriptSmoothBoneWeightsType
	{
		EGeometryScriptSmoothBoneWeightsType__DirectDistance = 0,
		EGeometryScriptSmoothBoneWeightsType__GeodesicVoxel = 1,
	};


	// Enum /Script/GeometryScriptingCore.ETransferBoneWeightsMethod
	enum ETransferBoneWeightsMethod
	{
		ETransferBoneWeightsMethod__ClosestPointOnSurface = 0,
		ETransferBoneWeightsMethod__InpaintWeights = 1,
	};


	// Enum /Script/GeometryScriptingCore.EOutputTargetMeshBones
	enum EOutputTargetMeshBones
	{
		EOutputTargetMeshBones__SourceBones = 0,
		EOutputTargetMeshBones__TargetBones = 1,
	};


	// Enum /Script/GeometryScriptingCore.EGeometryScriptBooleanOperation
	enum EGeometryScriptBooleanOperation
	{
		EGeometryScriptBooleanOperation__Union = 0,
		EGeometryScriptBooleanOperation__Intersection = 1,
		EGeometryScriptBooleanOperation__Subtract = 2,
	};


	// Enum /Script/GeometryScriptingCore.EGeometryScriptFlareType
	enum EGeometryScriptFlareType
	{
		EGeometryScriptFlareType__SinMode = 0,
		EGeometryScriptFlareType__SinSquaredMode = 1,
		EGeometryScriptFlareType__TriangleMode = 2,
	};


	// Enum /Script/GeometryScriptingCore.EGeometryScriptMathWarpType
	enum EGeometryScriptMathWarpType
	{
		EGeometryScriptMathWarpType__SinWave1D = 0,
		EGeometryScriptMathWarpType__SinWave2D = 1,
		EGeometryScriptMathWarpType__SinWave3D = 2,
	};


	// Enum /Script/GeometryScriptingCore.EGeometryScriptMeshEditPolygroupMode
	enum EGeometryScriptMeshEditPolygroupMode
	{
		EGeometryScriptMeshEditPolygroupMode__PreserveExisting = 0,
		EGeometryScriptMeshEditPolygroupMode__AutoGenerateNew = 1,
		EGeometryScriptMeshEditPolygroupMode__SetConstant = 2,
	};


	// Enum /Script/GeometryScriptingCore.EGeometryScriptPolyOperationArea
	enum EGeometryScriptPolyOperationArea
	{
		EGeometryScriptPolyOperationArea__EntireSelection = 0,
		EGeometryScriptPolyOperationArea__PerPolygroup = 1,
		EGeometryScriptPolyOperationArea__PerTriangle = 2,
	};


	// Enum /Script/GeometryScriptingCore.EGeometryScriptLinearExtrudeDirection
	enum EGeometryScriptLinearExtrudeDirection
	{
		EGeometryScriptLinearExtrudeDirection__FixedDirection = 0,
		EGeometryScriptLinearExtrudeDirection__AverageFaceNormal = 1,
	};


	// Enum /Script/GeometryScriptingCore.EGeometryScriptOffsetFacesType
	enum EGeometryScriptOffsetFacesType
	{
		EGeometryScriptOffsetFacesType__VertexNormal = 0,
		EGeometryScriptOffsetFacesType__FaceNormal = 1,
		EGeometryScriptOffsetFacesType__ParallelFaceOffset = 2,
	};


	// Enum /Script/GeometryScriptingCore.EGeometryScriptMeshBevelSelectionMode
	enum EGeometryScriptMeshBevelSelectionMode
	{
		EGeometryScriptMeshBevelSelectionMode__TriangleArea = 0,
		EGeometryScriptMeshBevelSelectionMode__AllPolygroupEdges = 1,
		EGeometryScriptMeshBevelSelectionMode__SharedPolygroupEdges = 2,
	};


	// Enum /Script/GeometryScriptingCore.EGeometryScriptTangentTypes
	enum EGeometryScriptTangentTypes
	{
		EGeometryScriptTangentTypes__FastMikkT = 0,
		EGeometryScriptTangentTypes__PerTriangle = 1,
	};


	// Enum /Script/GeometryScriptingCore.EGeometryScriptPrimitivePolygroupMode
	enum EGeometryScriptPrimitivePolygroupMode
	{
		EGeometryScriptPrimitivePolygroupMode__SingleGroup = 0,
		EGeometryScriptPrimitivePolygroupMode__PerFace = 1,
		EGeometryScriptPrimitivePolygroupMode__PerQuad = 2,
	};


	// Enum /Script/GeometryScriptingCore.EGeometryScriptPrimitiveOriginMode
	enum EGeometryScriptPrimitiveOriginMode
	{
		EGeometryScriptPrimitiveOriginMode__Center = 0,
		EGeometryScriptPrimitiveOriginMode__Base = 1,
	};


	// Enum /Script/GeometryScriptingCore.EGeometryScriptPrimitiveUVMode
	enum EGeometryScriptPrimitiveUVMode
	{
		EGeometryScriptPrimitiveUVMode__Uniform = 0,
		EGeometryScriptPrimitiveUVMode__ScaleToFill = 1,
	};


	// Enum /Script/GeometryScriptingCore.EGeometryScriptPolygonFillMode
	enum EGeometryScriptPolygonFillMode
	{
		EGeometryScriptPolygonFillMode__All = 0,
		EGeometryScriptPolygonFillMode__Solid = 1,
		EGeometryScriptPolygonFillMode__PositiveWinding = 2,
		EGeometryScriptPolygonFillMode__NonZeroWinding = 3,
		EGeometryScriptPolygonFillMode__NegativeWinding = 4,
		EGeometryScriptPolygonFillMode__OddWinding = 5,
	};


	// Enum /Script/GeometryScriptingCore.EGeometryScriptUniformRemeshTargetType
	enum EGeometryScriptUniformRemeshTargetType
	{
		EGeometryScriptUniformRemeshTargetType__TriangleCount = 0,
		EGeometryScriptUniformRemeshTargetType__TargetEdgeLength = 1,
	};


	// Enum /Script/GeometryScriptingCore.EGeometryScriptRemeshEdgeConstraintType
	enum EGeometryScriptRemeshEdgeConstraintType
	{
		EGeometryScriptRemeshEdgeConstraintType__Fixed = 0,
		EGeometryScriptRemeshEdgeConstraintType__Refine = 1,
		EGeometryScriptRemeshEdgeConstraintType__Free = 2,
		EGeometryScriptRemeshEdgeConstraintType__Ignore = 3,
	};


	// Enum /Script/GeometryScriptingCore.EGeometryScriptRemeshSmoothingType
	enum EGeometryScriptRemeshSmoothingType
	{
		EGeometryScriptRemeshSmoothingType__Uniform = 0,
		EGeometryScriptRemeshSmoothingType__UVPreserving = 1,
		EGeometryScriptRemeshSmoothingType__Mixed = 2,
	};


	// Enum /Script/GeometryScriptingCore.EGeometryScriptFillHolesMethod
	enum EGeometryScriptFillHolesMethod
	{
		EGeometryScriptFillHolesMethod__Automatic = 0,
		EGeometryScriptFillHolesMethod__MinimalFill = 1,
		EGeometryScriptFillHolesMethod__PolygonTriangulation = 2,
		EGeometryScriptFillHolesMethod__TriangleFan = 3,
		EGeometryScriptFillHolesMethod__PlanarProjection = 4,
	};


	// Enum /Script/GeometryScriptingCore.EGeometryScriptRemoveHiddenTrianglesMethod
	enum EGeometryScriptRemoveHiddenTrianglesMethod
	{
		EGeometryScriptRemoveHiddenTrianglesMethod__FastWindingNumber = 0,
		EGeometryScriptRemoveHiddenTrianglesMethod__RaycastOcclusionTest = 1,
	};


	// Enum /Script/GeometryScriptingCore.EGeometryScriptRepairMeshMode
	enum EGeometryScriptRepairMeshMode
	{
		EGeometryScriptRepairMeshMode__DeleteOnly = 0,
		EGeometryScriptRepairMeshMode__RepairOrDelete = 1,
		EGeometryScriptRepairMeshMode__RepairOrSkip = 2,
	};


	// Enum /Script/GeometryScriptingCore.EGeometryScriptSamplingWeightMode
	enum EGeometryScriptSamplingWeightMode
	{
		EGeometryScriptSamplingWeightMode__WeightToRadius = 0,
		EGeometryScriptSamplingWeightMode__FilledWeightToRadius = 1,
		EGeometryScriptSamplingWeightMode__WeightedRandom = 2,
	};


	// Enum /Script/GeometryScriptingCore.EGeometryScriptSamplingDistributionMode
	enum EGeometryScriptSamplingDistributionMode
	{
		EGeometryScriptSamplingDistributionMode__Uniform = 0,
		EGeometryScriptSamplingDistributionMode__Smaller = 1,
		EGeometryScriptSamplingDistributionMode__Larger = 2,
	};


	// Enum /Script/GeometryScriptingCore.EGeometryScriptTopologyConnectionType
	enum EGeometryScriptTopologyConnectionType
	{
		EGeometryScriptTopologyConnectionType__Geometric = 0,
		EGeometryScriptTopologyConnectionType__Polygroup = 1,
		EGeometryScriptTopologyConnectionType__MaterialID = 2,
	};


	// Enum /Script/GeometryScriptingCore.EGeometryScriptRemoveMeshSimplificationType
	enum EGeometryScriptRemoveMeshSimplificationType
	{
		EGeometryScriptRemoveMeshSimplificationType__StandardQEM = 0,
		EGeometryScriptRemoveMeshSimplificationType__VolumePreserving = 1,
		EGeometryScriptRemoveMeshSimplificationType__AttributeAware = 2,
	};


	// Enum /Script/GeometryScriptingCore.ESelectiveTessellatePatternType
	enum ESelectiveTessellatePatternType
	{
		ESelectiveTessellatePatternType__ConcentricRings = 0,
	};


	// Enum /Script/GeometryScriptingCore.EGeometryScriptUVFlattenMethod
	enum EGeometryScriptUVFlattenMethod
	{
		EGeometryScriptUVFlattenMethod__ExpMap = 0,
		EGeometryScriptUVFlattenMethod__Conformal = 1,
		EGeometryScriptUVFlattenMethod__SpectralConformal = 2,
	};


	// Enum /Script/GeometryScriptingCore.EGeometryScriptUVIslandSource
	enum EGeometryScriptUVIslandSource
	{
		EGeometryScriptUVIslandSource__PolyGroups = 0,
		EGeometryScriptUVIslandSource__UVIslands = 1,
	};


	// Enum /Script/GeometryScriptingCore.EGeometryScriptBlurColorMode
	enum EGeometryScriptBlurColorMode
	{
		EGeometryScriptBlurColorMode__Uniform = 0,
		EGeometryScriptBlurColorMode__EdgeLength = 1,
		EGeometryScriptBlurColorMode__CotanWeights = 2,
	};


	// Enum /Script/GeometryScriptingCore.EGeometryScriptGridSizingMethod
	enum EGeometryScriptGridSizingMethod
	{
		EGeometryScriptGridSizingMethod__GridCellSize = 0,
		EGeometryScriptGridSizingMethod__GridResolution = 1,
	};


	// Enum /Script/GeometryScriptingCore.EGeometryScriptMorphologicalOpType
	enum EGeometryScriptMorphologicalOpType
	{
		EGeometryScriptMorphologicalOpType__Dilate = 0,
		EGeometryScriptMorphologicalOpType__Contract = 1,
		EGeometryScriptMorphologicalOpType__Close = 2,
		EGeometryScriptMorphologicalOpType__Open = 3,
	};


	// Enum /Script/GeometryScriptingCore.EGeometryScriptInitKMeansMethod
	enum EGeometryScriptInitKMeansMethod
	{
		EGeometryScriptInitKMeansMethod__Random = 0,
		EGeometryScriptInitKMeansMethod__UniformSpacing = 1,
	};


	// Enum /Script/GeometryScriptingCore.EGeometryScriptPolyOffsetJoinType
	enum EGeometryScriptPolyOffsetJoinType
	{
		EGeometryScriptPolyOffsetJoinType__Square = 0,
		EGeometryScriptPolyOffsetJoinType__Round = 1,
		EGeometryScriptPolyOffsetJoinType__Miter = 2,
	};


	// Enum /Script/GeometryScriptingCore.EGeometryScriptPathOffsetEndType
	enum EGeometryScriptPathOffsetEndType
	{
		EGeometryScriptPathOffsetEndType__Butt = 0,
		EGeometryScriptPathOffsetEndType__Square = 1,
		EGeometryScriptPathOffsetEndType__Round = 2,
	};


	// Enum /Script/GeometryScriptingCore.EGeometryScriptSampleSpacing
	enum EGeometryScriptSampleSpacing
	{
		EGeometryScriptSampleSpacing__UniformDistance = 0,
		EGeometryScriptSampleSpacing__UniformTime = 1,
		EGeometryScriptSampleSpacing__ErrorTolerance = 2,
	};


	// Enum /Script/GeometryScriptingCore.EGeometryScriptEvaluateSplineRange
	enum EGeometryScriptEvaluateSplineRange
	{
		EGeometryScriptEvaluateSplineRange__FullSpline = 0,
		EGeometryScriptEvaluateSplineRange__DistanceRange = 1,
		EGeometryScriptEvaluateSplineRange__TimeRange_ConstantSpeed = 2,
		EGeometryScriptEvaluateSplineRange__TimeRange_VariableSpeed = 3,
	};


	// Enum /Script/GeometryScriptingCore.EGeometryScriptPixelSamplingMethod
	enum EGeometryScriptPixelSamplingMethod
	{
		EGeometryScriptPixelSamplingMethod__Bilinear = 0,
		EGeometryScriptPixelSamplingMethod__Nearest = 1,
	};


	// Enum /Script/GeometryScriptingCore.EDistanceFieldComputeMode
	enum EDistanceFieldComputeMode
	{
		EDistanceFieldComputeMode__NarrowBand = 0,
		EDistanceFieldComputeMode__FullGrid = 1,
	};


	// Enum /Script/GeometryScriptingCore.EDistanceFieldUnits
	enum EDistanceFieldUnits
	{
		EDistanceFieldUnits__NumberOfVoxels = 0,
		EDistanceFieldUnits__Distance = 1,
	};

}
