#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: PCG
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Enum /Script/PCG.EPCGAttributeAccessorFlags
	enum EPCGAttributeAccessorFlags
	{
		EPCGAttributeAccessorFlags__StrictType = 1,
		EPCGAttributeAccessorFlags__AllowBroadcast = 2,
		EPCGAttributeAccessorFlags__AllowConstructible = 4,
		EPCGAttributeAccessorFlags__AllowSetDefaultValue = 8,
		EPCGAttributeAccessorFlags__AllowBroadcastAndConstructible = 6,
	};


	// Enum /Script/PCG.EPCGAttributeFilterOperator
	enum EPCGAttributeFilterOperator
	{
		EPCGAttributeFilterOperator__Greater = 0,
		EPCGAttributeFilterOperator__GreaterOrEqual = 1,
		EPCGAttributeFilterOperator__Lesser = 2,
		EPCGAttributeFilterOperator__LesserOrEqual = 3,
		EPCGAttributeFilterOperator__Equal = 4,
		EPCGAttributeFilterOperator__NotEqual = 5,
		EPCGAttributeFilterOperator__InRange = 6,
		EPCGAttributeFilterOperator__Substring = 7,
		EPCGAttributeFilterOperator__Matches = 8,
	};


	// Enum /Script/PCG.EPCGAttributePropertySelection
	enum EPCGAttributePropertySelection
	{
		EPCGAttributePropertySelection__Attribute = 0,
		EPCGAttributePropertySelection__PointProperty = 1,
		EPCGAttributePropertySelection__ExtraProperty = 2,
	};


	// Enum /Script/PCG.EPCGExtraProperties
	enum EPCGExtraProperties
	{
		EPCGExtraProperties__Index = 0,
	};


	// Enum /Script/PCG.EPCGBlurElementMode
	enum EPCGBlurElementMode
	{
		EPCGBlurElementMode__Constant = 0,
		EPCGBlurElementMode__Linear = 1,
		EPCGBlurElementMode__Gaussian = 2,
	};


	// Enum /Script/PCG.EPCGChangeType
	enum EPCGChangeType
	{
		EPCGChangeType__None = 0,
		EPCGChangeType__Cosmetic = 1,
		EPCGChangeType__Settings = 2,
		EPCGChangeType__Input = 4,
		EPCGChangeType__Edge = 8,
		EPCGChangeType__Node = 10,
		EPCGChangeType__Structural = 20,
		EPCGChangeType__GenerationGrid = 40,
	};


	// Enum /Script/PCG.EPCGDataType
	enum EPCGDataType
	{
		EPCGDataType__None = 0,
		EPCGDataType__Point = 2,
		EPCGDataType__Spline = 4,
		EPCGDataType__LandscapeSpline = 8,
		EPCGDataType__PolyLine = C,
		EPCGDataType__Landscape = 10,
		EPCGDataType__Texture = 20,
		EPCGDataType__RenderTarget = 40,
		EPCGDataType__BaseTexture = 60,
		EPCGDataType__Surface = 70,
		EPCGDataType__Volume = 80,
		EPCGDataType__Primitive = 100,
		EPCGDataType__Concrete = 1FE,
		EPCGDataType__Composite = 200,
		EPCGDataType__Spatial = 3FE,
		EPCGDataType__Param = 8000000,
		EPCGDataType__PointOrParam = 8000002,
		EPCGDataType__Settings = 10000000,
		EPCGDataType__Other = 20000000,
		EPCGDataType__Any = 3FFFFFFF,
	};


	// Enum /Script/PCG.EPCGExclusiveDataType
	enum EPCGExclusiveDataType
	{
		EPCGExclusiveDataType__None = 0,
		EPCGExclusiveDataType__Point = 1,
		EPCGExclusiveDataType__Spline = 2,
		EPCGExclusiveDataType__LandscapeSpline = 3,
		EPCGExclusiveDataType__PolyLine = 4,
		EPCGExclusiveDataType__Landscape = 5,
		EPCGExclusiveDataType__Texture = 6,
		EPCGExclusiveDataType__RenderTarget = 7,
		EPCGExclusiveDataType__BaseTexture = 8,
		EPCGExclusiveDataType__Surface = 9,
		EPCGExclusiveDataType__Volume = A,
		EPCGExclusiveDataType__Primitive = B,
		EPCGExclusiveDataType__Concrete = C,
		EPCGExclusiveDataType__Composite = D,
		EPCGExclusiveDataType__Spatial = E,
		EPCGExclusiveDataType__Param = F,
		EPCGExclusiveDataType__Settings = 10,
		EPCGExclusiveDataType__Other = 11,
		EPCGExclusiveDataType__Any = 12,
		EPCGExclusiveDataType__PointOrParam = 13,
	};


	// Enum /Script/PCG.EPCGCoordinateSpace
	enum EPCGCoordinateSpace
	{
		EPCGCoordinateSpace__World = 0,
		EPCGCoordinateSpace__OriginalComponent = 1,
		EPCGCoordinateSpace__LocalComponent = 2,
	};


	// Enum /Script/PCG.EPCGStringMatchingOperator
	enum EPCGStringMatchingOperator
	{
		EPCGStringMatchingOperator__Equal = 0,
		EPCGStringMatchingOperator__Substring = 1,
		EPCGStringMatchingOperator__Matches = 2,
	};


	// Enum /Script/PCG.EPCGHiGenGrid
	enum EPCGHiGenGrid
	{
		EPCGHiGenGrid__Uninitialized = 0,
		EPCGHiGenGrid__Grid4 = 4,
		EPCGHiGenGrid__Grid8 = 8,
		EPCGHiGenGrid__Grid16 = 10,
		EPCGHiGenGrid__Grid32 = 20,
		EPCGHiGenGrid__Grid64 = 40,
		EPCGHiGenGrid__Grid128 = 80,
		EPCGHiGenGrid__Grid256 = 100,
		EPCGHiGenGrid__Grid512 = 200,
		EPCGHiGenGrid__Grid1024 = 400,
		EPCGHiGenGrid__Grid2048 = 800,
		EPCGHiGenGrid__GridMin = 4,
		EPCGHiGenGrid__GridMax = 800,
		EPCGHiGenGrid__Unbounded = 80000000,
	};


	// Enum /Script/PCG.EPCGAttachOptions
	enum EPCGAttachOptions
	{
		EPCGAttachOptions__NotAttached = 0,
		EPCGAttachOptions__Attached = 1,
		EPCGAttachOptions__InFolder = 2,
	};


	// Enum /Script/PCG.EPCGEditorDirtyMode
	enum EPCGEditorDirtyMode
	{
		EPCGEditorDirtyMode__Normal = 0,
		EPCGEditorDirtyMode__Preview = 1,
		EPCGEditorDirtyMode__LoadAsPreview = 2,
	};


	// Enum /Script/PCG.EPCGNodeTitleType
	enum EPCGNodeTitleType
	{
		EPCGNodeTitleType__FullTitle = 0,
		EPCGNodeTitleType__ListView = 1,
	};


	// Enum /Script/PCG.EPCGDensityMergeOperation
	enum EPCGDensityMergeOperation
	{
		EPCGDensityMergeOperation__Set = 0,
		EPCGDensityMergeOperation__Ignore = 1,
		EPCGDensityMergeOperation__Minimum = 2,
		EPCGDensityMergeOperation__Maximum = 3,
		EPCGDensityMergeOperation__Add = 4,
		EPCGDensityMergeOperation__Subtract = 5,
		EPCGDensityMergeOperation__Multiply = 6,
		EPCGDensityMergeOperation__Divide = 7,
	};


	// Enum /Script/PCG.EPCGControlFlowSelectionMode
	enum EPCGControlFlowSelectionMode
	{
		EPCGControlFlowSelectionMode__Integer = 0,
		EPCGControlFlowSelectionMode__Enum = 1,
		EPCGControlFlowSelectionMode__String = 2,
	};


	// Enum /Script/PCG.EPCGLocalGridPivot
	enum EPCGLocalGridPivot
	{
		EPCGLocalGridPivot__Global = 0,
		EPCGLocalGridPivot__OriginalComponent = 1,
		EPCGLocalGridPivot__LocalComponent = 2,
	};


	// Enum /Script/PCG.EPCGPointPosition
	enum EPCGPointPosition
	{
		EPCGPointPosition__CellCenter = 0,
		EPCGPointPosition__CellCorners = 1,
	};


	// Enum /Script/PCG.EPCGGridPivot
	enum EPCGGridPivot
	{
		EPCGGridPivot__Global = 0,
		EPCGGridPivot__OriginalComponent = 1,
		EPCGGridPivot__LocalComponent = 2,
	};


	// Enum /Script/PCG.EPCGAttributeFilterOperation
	enum EPCGAttributeFilterOperation
	{
		EPCGAttributeFilterOperation__KeepSelectedAttributes = 0,
		EPCGAttributeFilterOperation__DeleteSelectedAttributes = 1,
	};


	// Enum /Script/PCG.EPCGTagFilterOperation
	enum EPCGTagFilterOperation
	{
		EPCGTagFilterOperation__KeepOnlySelectedTags = 0,
		EPCGTagFilterOperation__DeleteSelectedTags = 1,
	};


	// Enum /Script/PCG.PCGDistanceShape
	enum PCGDistanceShape
	{
		PCGDistanceShape__SphereBounds = 0,
		PCGDistanceShape__BoxBounds = 1,
		PCGDistanceShape__Center = 2,
	};


	// Enum /Script/PCG.EPCGUnitTestDummyEnum
	enum EPCGUnitTestDummyEnum
	{
		EPCGUnitTestDummyEnum__One = 0,
		EPCGUnitTestDummyEnum__Two = 1,
		EPCGUnitTestDummyEnum__Three = 2,
	};


	// Enum /Script/PCG.EPCGMetadataTypes
	enum EPCGMetadataTypes
	{
		EPCGMetadataTypes__Float = 0,
		EPCGMetadataTypes__Double = 1,
		EPCGMetadataTypes__Integer32 = 2,
		EPCGMetadataTypes__Integer64 = 3,
		EPCGMetadataTypes__Vector2 = 4,
		EPCGMetadataTypes__Vector = 5,
		EPCGMetadataTypes__Vector4 = 6,
		EPCGMetadataTypes__Quaternion = 7,
		EPCGMetadataTypes__Transform = 8,
		EPCGMetadataTypes__String = 9,
		EPCGMetadataTypes__Boolean = A,
		EPCGMetadataTypes__Rotator = B,
		EPCGMetadataTypes__Name = C,
		EPCGMetadataTypes__SoftObjectPath = D,
		EPCGMetadataTypes__SoftClassPath = E,
		EPCGMetadataTypes__Count = F,
		EPCGMetadataTypes__Unknown = FF,
	};


	// Enum /Script/PCG.EPCGMetadataOp
	enum EPCGMetadataOp
	{
		EPCGMetadataOp__Min = 0,
		EPCGMetadataOp__Max = 1,
		EPCGMetadataOp__Sub = 2,
		EPCGMetadataOp__Add = 3,
		EPCGMetadataOp__Mul = 4,
		EPCGMetadataOp__Div = 5,
		EPCGMetadataOp__SourceValue = 6,
		EPCGMetadataOp__TargetValue = 7,
	};


	// Enum /Script/PCG.EPCGMetadataFilterMode
	enum EPCGMetadataFilterMode
	{
		EPCGMetadataFilterMode__ExcludeAttributes = 0,
		EPCGMetadataFilterMode__IncludeAttributes = 1,
	};


	// Enum /Script/PCG.EPCGMetadataMakeRotatorOp
	enum EPCGMetadataMakeRotatorOp
	{
		EPCGMetadataMakeRotatorOp__MakeRotFromX = 0,
		EPCGMetadataMakeRotatorOp__MakeRotFromY = 1,
		EPCGMetadataMakeRotatorOp__MakeRotFromZ = 2,
		EPCGMetadataMakeRotatorOp__MakeRotFromXY = 3,
		EPCGMetadataMakeRotatorOp__MakeRotFromYX = 4,
		EPCGMetadataMakeRotatorOp__MakeRotFromXZ = 5,
		EPCGMetadataMakeRotatorOp__MakeRotFromZX = 6,
		EPCGMetadataMakeRotatorOp__MakeRotFromYZ = 7,
		EPCGMetadataMakeRotatorOp__MakeRotFromZY = 8,
		EPCGMetadataMakeRotatorOp__MakeRotFromAxes = 9,
		EPCGMetadataMakeRotatorOp__MakeRotFromAngles = A,
	};


	// Enum /Script/PCG.EPCGMetadataTypesConstantStructStringMode
	enum EPCGMetadataTypesConstantStructStringMode
	{
		EPCGMetadataTypesConstantStructStringMode__String = 0,
		EPCGMetadataTypesConstantStructStringMode__SoftObjectPath = 1,
		EPCGMetadataTypesConstantStructStringMode__SoftClassPath = 2,
	};


	// Enum /Script/PCG.PCGNormalToDensityMode
	enum PCGNormalToDensityMode
	{
		PCGNormalToDensityMode__Set = 0,
		PCGNormalToDensityMode__Minimum = 1,
		PCGNormalToDensityMode__Maximum = 2,
		PCGNormalToDensityMode__Add = 3,
		PCGNormalToDensityMode__Subtract = 4,
		PCGNormalToDensityMode__Multiply = 5,
		PCGNormalToDensityMode__Divide = 6,
	};


	// Enum /Script/PCG.EPCGPointNeighborhoodDensityMode
	enum EPCGPointNeighborhoodDensityMode
	{
		EPCGPointNeighborhoodDensityMode__None = 0,
		EPCGPointNeighborhoodDensityMode__SetNormalizedDistanceToDensity = 1,
		EPCGPointNeighborhoodDensityMode__SetAverageDensity = 2,
	};


	// Enum /Script/PCG.EPCGPrintVerbosity
	enum EPCGPrintVerbosity
	{
		EPCGPrintVerbosity__Log = 5,
		EPCGPrintVerbosity__Warning = 3,
		EPCGPrintVerbosity__Error = 2,
	};


	// Enum /Script/PCG.EPCGProjectionColorBlendMode
	enum EPCGProjectionColorBlendMode
	{
		EPCGProjectionColorBlendMode__SourceValue = 0,
		EPCGProjectionColorBlendMode__TargetValue = 1,
		EPCGProjectionColorBlendMode__Add = 2,
		EPCGProjectionColorBlendMode__Subtract = 3,
		EPCGProjectionColorBlendMode__Multiply = 4,
	};


	// Enum /Script/PCG.EPCGProjectionTagMergeMode
	enum EPCGProjectionTagMergeMode
	{
		EPCGProjectionTagMergeMode__Source = 0,
		EPCGProjectionTagMergeMode__Target = 1,
		EPCGProjectionTagMergeMode__Both = 2,
	};


	// Enum /Script/PCG.EPCGReverseSplineOperation
	enum EPCGReverseSplineOperation
	{
		EPCGReverseSplineOperation__Reverse = 0,
		EPCGReverseSplineOperation__ForceClockwise = 1,
		EPCGReverseSplineOperation__ForceCounterClockwise = 2,
	};


	// Enum /Script/PCG.EPCGTextureMappingMethod
	enum EPCGTextureMappingMethod
	{
		EPCGTextureMappingMethod__Planar = 0,
		EPCGTextureMappingMethod__UVCoordinates = 1,
	};


	// Enum /Script/PCG.EPCGSortMethod
	enum EPCGSortMethod
	{
		EPCGSortMethod__Ascending = 0,
		EPCGSortMethod__Descending = 1,
	};


	// Enum /Script/PCG.EPCGSplitAxis
	enum EPCGSplitAxis
	{
		EPCGSplitAxis__X = 0,
		EPCGSplitAxis__Y = 1,
		EPCGSplitAxis__Z = 2,
	};


	// Enum /Script/PCG.EPCGWorldRaycastMode
	enum EPCGWorldRaycastMode
	{
		EPCGWorldRaycastMode__Infinite = 0,
		EPCGWorldRaycastMode__ScaledVector = 1,
		EPCGWorldRaycastMode__NormalizedWithLength = 2,
		EPCGWorldRaycastMode__Segments = 3,
	};


	// Enum /Script/PCG.EPCGCollisionQueryFlag
	enum EPCGCollisionQueryFlag
	{
		EPCGCollisionQueryFlag__Simple = 0,
		EPCGCollisionQueryFlag__Complex = 1,
		EPCGCollisionQueryFlag__SimpleFirst = 2,
		EPCGCollisionQueryFlag__ComplexFirst = 3,
	};


	// Enum /Script/PCG.EPCGDifferenceDensityFunction
	enum EPCGDifferenceDensityFunction
	{
		EPCGDifferenceDensityFunction__Minimum = 0,
		EPCGDifferenceDensityFunction__ClampedSubstraction = 1,
		EPCGDifferenceDensityFunction__Binary = 2,
	};


	// Enum /Script/PCG.EPCGDifferenceMode
	enum EPCGDifferenceMode
	{
		EPCGDifferenceMode__Inferred = 0,
		EPCGDifferenceMode__Continuous = 1,
		EPCGDifferenceMode__Discrete = 2,
	};


	// Enum /Script/PCG.EPCGIntersectionDensityFunction
	enum EPCGIntersectionDensityFunction
	{
		EPCGIntersectionDensityFunction__Multiply = 0,
		EPCGIntersectionDensityFunction__Minimum = 1,
	};


	// Enum /Script/PCG.EPCGTextureColorChannel
	enum EPCGTextureColorChannel
	{
		EPCGTextureColorChannel__Red = 0,
		EPCGTextureColorChannel__Green = 1,
		EPCGTextureColorChannel__Blue = 2,
		EPCGTextureColorChannel__Alpha = 3,
	};


	// Enum /Script/PCG.EPCGTextureDensityFunction
	enum EPCGTextureDensityFunction
	{
		EPCGTextureDensityFunction__Ignore = 0,
		EPCGTextureDensityFunction__Multiply = 1,
	};


	// Enum /Script/PCG.EPCGTextureFilter
	enum EPCGTextureFilter
	{
		EPCGTextureFilter__Point = 0,
		EPCGTextureFilter__Bilinear = 1,
	};


	// Enum /Script/PCG.EPCGTextureAddressMode
	enum EPCGTextureAddressMode
	{
		EPCGTextureAddressMode__Clamp = 0,
		EPCGTextureAddressMode__Wrap = 1,
	};


	// Enum /Script/PCG.EPCGUnionType
	enum EPCGUnionType
	{
		EPCGUnionType__LeftToRightPriority = 0,
		EPCGUnionType__RightToLeftPriority = 1,
		EPCGUnionType__KeepAll = 2,
	};


	// Enum /Script/PCG.EPCGUnionDensityFunction
	enum EPCGUnionDensityFunction
	{
		EPCGUnionDensityFunction__Maximum = 0,
		EPCGUnionDensityFunction__ClampedAddition = 1,
		EPCGUnionDensityFunction__Binary = 2,
	};


	// Enum /Script/PCG.EPCGWorldQueryFilterByTag
	enum EPCGWorldQueryFilterByTag
	{
		EPCGWorldQueryFilterByTag__NoTagFilter = 0,
		EPCGWorldQueryFilterByTag__IncludeTagged = 1,
		EPCGWorldQueryFilterByTag__ExcludeTagged = 2,
	};


	// Enum /Script/PCG.EPCGWorldQuerySelectLandscapeHits
	enum EPCGWorldQuerySelectLandscapeHits
	{
		EPCGWorldQuerySelectLandscapeHits__Exclude = 0,
		EPCGWorldQuerySelectLandscapeHits__Include = 1,
		EPCGWorldQuerySelectLandscapeHits__Require = 2,
	};


	// Enum /Script/PCG.EPCGMetadataBitwiseOperation
	enum EPCGMetadataBitwiseOperation
	{
		EPCGMetadataBitwiseOperation__And = 0,
		EPCGMetadataBitwiseOperation__Not = 1,
		EPCGMetadataBitwiseOperation__Or = 2,
		EPCGMetadataBitwiseOperation__Xor = 3,
	};


	// Enum /Script/PCG.EPCGMetadataBooleanOperation
	enum EPCGMetadataBooleanOperation
	{
		EPCGMetadataBooleanOperation__And = 0,
		EPCGMetadataBooleanOperation__Not = 1,
		EPCGMetadataBooleanOperation__Or = 2,
		EPCGMetadataBooleanOperation__Xor = 3,
	};


	// Enum /Script/PCG.EPCGMetadataCompareOperation
	enum EPCGMetadataCompareOperation
	{
		EPCGMetadataCompareOperation__Equal = 0,
		EPCGMetadataCompareOperation__NotEqual = 1,
		EPCGMetadataCompareOperation__Greater = 2,
		EPCGMetadataCompareOperation__GreaterOrEqual = 3,
		EPCGMetadataCompareOperation__Less = 4,
		EPCGMetadataCompareOperation__LessOrEqual = 5,
	};


	// Enum /Script/PCG.EPCGMetadataMakeVector3
	enum EPCGMetadataMakeVector3
	{
		EPCGMetadataMakeVector3__ThreeValues = 0,
		EPCGMetadataMakeVector3__Vector2AndValue = 1,
	};


	// Enum /Script/PCG.EPCGMetadataMakeVector4
	enum EPCGMetadataMakeVector4
	{
		EPCGMetadataMakeVector4__FourValues = 0,
		EPCGMetadataMakeVector4__Vector2AndTwoValues = 1,
		EPCGMetadataMakeVector4__TwoVector2 = 2,
		EPCGMetadataMakeVector4__Vector3AndValue = 3,
	};


	// Enum /Script/PCG.EPCGMetadataMathsOperation
	enum EPCGMetadataMathsOperation
	{
		EPCGMetadataMathsOperation__UnaryOp = 400,
		EPCGMetadataMathsOperation__Sign = 401,
		EPCGMetadataMathsOperation__Frac = 402,
		EPCGMetadataMathsOperation__Truncate = 403,
		EPCGMetadataMathsOperation__Round = 404,
		EPCGMetadataMathsOperation__Sqrt = 405,
		EPCGMetadataMathsOperation__Abs = 406,
		EPCGMetadataMathsOperation__Floor = 407,
		EPCGMetadataMathsOperation__Ceil = 408,
		EPCGMetadataMathsOperation__OneMinus = 409,
		EPCGMetadataMathsOperation__BinaryOp = 800,
		EPCGMetadataMathsOperation__Add = 801,
		EPCGMetadataMathsOperation__Subtract = 802,
		EPCGMetadataMathsOperation__Multiply = 803,
		EPCGMetadataMathsOperation__Divide = 804,
		EPCGMetadataMathsOperation__Max = 805,
		EPCGMetadataMathsOperation__Min = 806,
		EPCGMetadataMathsOperation__Pow = 807,
		EPCGMetadataMathsOperation__ClampMin = 808,
		EPCGMetadataMathsOperation__ClampMax = 809,
		EPCGMetadataMathsOperation__Modulo = 80A,
		EPCGMetadataMathsOperation__Set = 80B,
		EPCGMetadataMathsOperation__TernaryOp = 1000,
		EPCGMetadataMathsOperation__Clamp = 1001,
		EPCGMetadataMathsOperation__Lerp = 1002,
	};


	// Enum /Script/PCG.EPCGMetadataSettingsBaseMode
	enum EPCGMetadataSettingsBaseMode
	{
		EPCGMetadataSettingsBaseMode__Inferred = 0,
		EPCGMetadataSettingsBaseMode__NoBroadcast = 1,
		EPCGMetadataSettingsBaseMode__Broadcast = 2,
	};


	// Enum /Script/PCG.EPCGMetadataSettingsBaseTypes
	enum EPCGMetadataSettingsBaseTypes
	{
		EPCGMetadataSettingsBaseTypes__AutoUpcastTypes = 0,
		EPCGMetadataSettingsBaseTypes__StrictTypes = 1,
	};


	// Enum /Script/PCG.EPCGMetadataRotatorOperation
	enum EPCGMetadataRotatorOperation
	{
		EPCGMetadataRotatorOperation__RotatorOp = 0,
		EPCGMetadataRotatorOperation__Combine = 1,
		EPCGMetadataRotatorOperation__Invert = 2,
		EPCGMetadataRotatorOperation__Lerp = 3,
		EPCGMetadataRotatorOperation__Normalize = 4,
		EPCGMetadataRotatorOperation__TransformOp = 64,
		EPCGMetadataRotatorOperation__TransformRotation = 65,
		EPCGMetadataRotatorOperation__InverseTransformRotation = 66,
	};


	// Enum /Script/PCG.EPCGMetadataStringOperation
	enum EPCGMetadataStringOperation
	{
		EPCGMetadataStringOperation__Append = 0,
		EPCGMetadataStringOperation__Replace = 1,
	};


	// Enum /Script/PCG.EPCGMetadataTransformOperation
	enum EPCGMetadataTransformOperation
	{
		EPCGMetadataTransformOperation__Compose = 0,
		EPCGMetadataTransformOperation__Invert = 1,
		EPCGMetadataTransformOperation__Lerp = 2,
	};


	// Enum /Script/PCG.EPCGTransformLerpMode
	enum EPCGTransformLerpMode
	{
		EPCGTransformLerpMode__QuatInterp = 0,
		EPCGTransformLerpMode__EulerInterp = 1,
		EPCGTransformLerpMode__DualQuatInterp = 2,
	};


	// Enum /Script/PCG.EPCGMetadataTrigOperation
	enum EPCGMetadataTrigOperation
	{
		EPCGMetadataTrigOperation__Acos = 0,
		EPCGMetadataTrigOperation__Asin = 1,
		EPCGMetadataTrigOperation__Atan = 2,
		EPCGMetadataTrigOperation__Atan2 = 3,
		EPCGMetadataTrigOperation__Cos = 4,
		EPCGMetadataTrigOperation__Sin = 5,
		EPCGMetadataTrigOperation__Tan = 6,
		EPCGMetadataTrigOperation__DegToRad = 7,
		EPCGMetadataTrigOperation__RadToDeg = 8,
	};


	// Enum /Script/PCG.EPCGMetadataVectorOperation
	enum EPCGMetadataVectorOperation
	{
		EPCGMetadataVectorOperation__VectorOp = 0,
		EPCGMetadataVectorOperation__Cross = 1,
		EPCGMetadataVectorOperation__Dot = 2,
		EPCGMetadataVectorOperation__Distance = 3,
		EPCGMetadataVectorOperation__Normalize = 4,
		EPCGMetadataVectorOperation__Length = 5,
		EPCGMetadataVectorOperation__RotateAroundAxis = 6,
		EPCGMetadataVectorOperation__TransformOp = 64,
		EPCGMetadataVectorOperation__TransformDirection = 65,
		EPCGMetadataVectorOperation__TransformLocation = 66,
		EPCGMetadataVectorOperation__InverseTransformDirection = 67,
		EPCGMetadataVectorOperation__InverseTransformLocation = 68,
	};


	// Enum /Script/PCG.EPCGActorSelection
	enum EPCGActorSelection
	{
		EPCGActorSelection__ByTag = 0,
		EPCGActorSelection__ByName = 1,
		EPCGActorSelection__ByClass = 2,
		EPCGActorSelection__ByPath = 3,
		EPCGActorSelection__Unknown = 4,
	};


	// Enum /Script/PCG.EPCGActorFilter
	enum EPCGActorFilter
	{
		EPCGActorFilter__Self = 0,
		EPCGActorFilter__Parent = 1,
		EPCGActorFilter__Root = 2,
		EPCGActorFilter__AllWorldActors = 3,
		EPCGActorFilter__Original = 4,
		EPCGActorFilter__FromInput = 5,
	};


	// Enum /Script/PCG.EPCGAttributeNoiseMode
	enum EPCGAttributeNoiseMode
	{
		EPCGAttributeNoiseMode__Set = 0,
		EPCGAttributeNoiseMode__Minimum = 1,
		EPCGAttributeNoiseMode__Maximum = 2,
		EPCGAttributeNoiseMode__Add = 3,
		EPCGAttributeNoiseMode__Multiply = 4,
	};


	// Enum /Script/PCG.EPCGAttributeReduceOperation
	enum EPCGAttributeReduceOperation
	{
		EPCGAttributeReduceOperation__Average = 0,
		EPCGAttributeReduceOperation__Max = 1,
		EPCGAttributeReduceOperation__Min = 2,
		EPCGAttributeReduceOperation__Sum = 3,
		EPCGAttributeReduceOperation__Join = 4,
	};


	// Enum /Script/PCG.EPCGAttributeSelectOperation
	enum EPCGAttributeSelectOperation
	{
		EPCGAttributeSelectOperation__Min = 0,
		EPCGAttributeSelectOperation__Max = 1,
		EPCGAttributeSelectOperation__Median = 2,
	};


	// Enum /Script/PCG.EPCGAttributeSelectAxis
	enum EPCGAttributeSelectAxis
	{
		EPCGAttributeSelectAxis__X = 0,
		EPCGAttributeSelectAxis__Y = 1,
		EPCGAttributeSelectAxis__Z = 2,
		EPCGAttributeSelectAxis__W = 3,
		EPCGAttributeSelectAxis__CustomAxis = 4,
	};


	// Enum /Script/PCG.EPCGBoundsModifierMode
	enum EPCGBoundsModifierMode
	{
		EPCGBoundsModifierMode__Set = 0,
		EPCGBoundsModifierMode__Intersect = 1,
		EPCGBoundsModifierMode__Include = 2,
		EPCGBoundsModifierMode__Translate = 3,
		EPCGBoundsModifierMode__Scale = 4,
	};


	// Enum /Script/PCG.EPCGCopyPointsInheritanceMode
	enum EPCGCopyPointsInheritanceMode
	{
		EPCGCopyPointsInheritanceMode__Relative = 0,
		EPCGCopyPointsInheritanceMode__Source = 1,
		EPCGCopyPointsInheritanceMode__Target = 2,
	};


	// Enum /Script/PCG.EPCGCopyPointsTagInheritanceMode
	enum EPCGCopyPointsTagInheritanceMode
	{
		EPCGCopyPointsTagInheritanceMode__Both = 0,
		EPCGCopyPointsTagInheritanceMode__Source = 1,
		EPCGCopyPointsTagInheritanceMode__Target = 2,
	};


	// Enum /Script/PCG.EPCGCopyPointsMetadataInheritanceMode
	enum EPCGCopyPointsMetadataInheritanceMode
	{
		EPCGCopyPointsMetadataInheritanceMode__SourceFirst = 0,
		EPCGCopyPointsMetadataInheritanceMode__TargetFirst = 1,
		EPCGCopyPointsMetadataInheritanceMode__SourceOnly = 2,
		EPCGCopyPointsMetadataInheritanceMode__TargetOnly = 3,
		EPCGCopyPointsMetadataInheritanceMode__None = 4,
	};


	// Enum /Script/PCG.EPCGSphereGeneration
	enum EPCGSphereGeneration
	{
		EPCGSphereGeneration__Geodesic = 0,
		EPCGSphereGeneration__Angle = 1,
		EPCGSphereGeneration__Segments = 2,
		EPCGSphereGeneration__Random = 3,
		EPCGSphereGeneration__Poisson = 4,
	};


	// Enum /Script/PCG.EPCGGeodesicSphereRepresentation
	enum EPCGGeodesicSphereRepresentation
	{
		EPCGGeodesicSphereRepresentation__Icosahedron = 0,
	};


	// Enum /Script/PCG.EPCGSpherePointOrientation
	enum EPCGSpherePointOrientation
	{
		EPCGSpherePointOrientation__Radial = 0,
		EPCGSpherePointOrientation__Centric = 1,
		EPCGSpherePointOrientation__None = 2,
	};


	// Enum /Script/PCG.EPCGCreateSplineMode
	enum EPCGCreateSplineMode
	{
		EPCGCreateSplineMode__CreateDataOnly = 0,
		EPCGCreateSplineMode__CreateComponent = 1,
	};


	// Enum /Script/PCG.EPCGGetDataFromActorMode
	enum EPCGGetDataFromActorMode
	{
		EPCGGetDataFromActorMode__ParseActorComponents = 0,
		EPCGGetDataFromActorMode__GetSinglePoint = 1,
		EPCGGetDataFromActorMode__GetDataFromProperty = 2,
		EPCGGetDataFromActorMode__GetDataFromPCGComponent = 3,
		EPCGGetDataFromActorMode__GetDataFromPCGComponentOrParseComponents = 4,
		EPCGGetDataFromActorMode__GetActorReference = 5,
		EPCGGetDataFromActorMode__GetComponentsReference = 6,
	};


	// Enum /Script/PCG.EPCGFilterByTagOperation
	enum EPCGFilterByTagOperation
	{
		EPCGFilterByTagOperation__KeepTagged = 0,
		EPCGFilterByTagOperation__RemoveTagged = 1,
	};


	// Enum /Script/PCG.EPCGProxyInterfaceMode
	enum EPCGProxyInterfaceMode
	{
		EPCGProxyInterfaceMode__ByNativeElement = 0,
		EPCGProxyInterfaceMode__ByBlueprintElement = 1,
		EPCGProxyInterfaceMode__BySettings = 2,
	};


	// Enum /Script/PCG.EPCGMatchMaxDistanceMode
	enum EPCGMatchMaxDistanceMode
	{
		EPCGMatchMaxDistanceMode__NoMaxDistance = 0,
		EPCGMatchMaxDistanceMode__UseConstantMaxDistance = 1,
		EPCGMatchMaxDistanceMode__AttributeMaxDistance = 2,
	};


	// Enum /Script/PCG.EPCGPointExtentsModifierMode
	enum EPCGPointExtentsModifierMode
	{
		EPCGPointExtentsModifierMode__Set = 0,
		EPCGPointExtentsModifierMode__Minimum = 1,
		EPCGPointExtentsModifierMode__Maximum = 2,
		EPCGPointExtentsModifierMode__Add = 3,
		EPCGPointExtentsModifierMode__Multiply = 4,
	};


	// Enum /Script/PCG.EPCGSelfPruningType
	enum EPCGSelfPruningType
	{
		EPCGSelfPruningType__LargeToSmall = 0,
		EPCGSelfPruningType__SmallToLarge = 1,
		EPCGSelfPruningType__AllEqual = 2,
		EPCGSelfPruningType__None = 3,
		EPCGSelfPruningType__RemoveDuplicates = 4,
	};


	// Enum /Script/PCG.PCGSpatialNoiseMode
	enum PCGSpatialNoiseMode
	{
		PCGSpatialNoiseMode__Perlin2D = 0,
		PCGSpatialNoiseMode__Caustic2D = 1,
		PCGSpatialNoiseMode__Voronoi2D = 2,
		PCGSpatialNoiseMode__FractionalBrownian2D = 3,
		PCGSpatialNoiseMode__EdgeMask2D = 4,
	};


	// Enum /Script/PCG.PCGSpatialNoiseMask2DMode
	enum PCGSpatialNoiseMask2DMode
	{
		PCGSpatialNoiseMask2DMode__Perlin = 0,
		PCGSpatialNoiseMask2DMode__Caustic = 1,
		PCGSpatialNoiseMask2DMode__FractionalBrownian = 2,
	};


	// Enum /Script/PCG.EPCGSpawnActorOption
	enum EPCGSpawnActorOption
	{
		EPCGSpawnActorOption__CollapseActors = 0,
		EPCGSpawnActorOption__MergePCGOnly = 1,
		EPCGSpawnActorOption__NoMerging = 2,
	};


	// Enum /Script/PCG.EPCGSpawnActorGenerationTrigger
	enum EPCGSpawnActorGenerationTrigger
	{
		EPCGSpawnActorGenerationTrigger__Default = 0,
		EPCGSpawnActorGenerationTrigger__ForceGenerate = 1,
		EPCGSpawnActorGenerationTrigger__DoNotGenerateInEditor = 2,
		EPCGSpawnActorGenerationTrigger__DoNotGenerate = 3,
	};


	// Enum /Script/PCG.EPCGSplineMeshForwardAxis
	enum EPCGSplineMeshForwardAxis
	{
		EPCGSplineMeshForwardAxis__X = 0,
		EPCGSplineMeshForwardAxis__Y = 1,
		EPCGSplineMeshForwardAxis__Z = 2,
	};


	// Enum /Script/PCG.EPCGSplineSamplingMode
	enum EPCGSplineSamplingMode
	{
		EPCGSplineSamplingMode__Subdivision = 0,
		EPCGSplineSamplingMode__Distance = 1,
		EPCGSplineSamplingMode__NumberOfSamples = 2,
	};


	// Enum /Script/PCG.EPCGSplineSamplingDimension
	enum EPCGSplineSamplingDimension
	{
		EPCGSplineSamplingDimension__OnSpline = 0,
		EPCGSplineSamplingDimension__OnHorizontal = 1,
		EPCGSplineSamplingDimension__OnVertical = 2,
		EPCGSplineSamplingDimension__OnVolume = 3,
		EPCGSplineSamplingDimension__OnInterior = 4,
	};


	// Enum /Script/PCG.EPCGSplineSamplingFill
	enum EPCGSplineSamplingFill
	{
		EPCGSplineSamplingFill__Fill = 0,
		EPCGSplineSamplingFill__EdgesOnly = 1,
	};


	// Enum /Script/PCG.EPCGSplineSamplingInteriorOrientation
	enum EPCGSplineSamplingInteriorOrientation
	{
		EPCGSplineSamplingInteriorOrientation__Uniform = 0,
		EPCGSplineSamplingInteriorOrientation__FollowCurvature = 1,
	};


	// Enum /Script/PCG.EPCGSplineSamplingSeedingMode
	enum EPCGSplineSamplingSeedingMode
	{
		EPCGSplineSamplingSeedingMode__SeedFromPosition = 0,
		EPCGSplineSamplingSeedingMode__SeedFromIndex = 1,
	};


	// Enum /Script/PCG.EPCGLandscapeCacheSerializationMode
	enum EPCGLandscapeCacheSerializationMode
	{
		EPCGLandscapeCacheSerializationMode__SerializeOnlyAtCook = 0,
		EPCGLandscapeCacheSerializationMode__NeverSerialize = 1,
		EPCGLandscapeCacheSerializationMode__AlwaysSerialize = 2,
	};


	// Enum /Script/PCG.EPCGLandscapeCacheSerializationContents
	enum EPCGLandscapeCacheSerializationContents
	{
		EPCGLandscapeCacheSerializationContents__SerializeOnlyPositionsAndNormals = 0,
		EPCGLandscapeCacheSerializationContents__SerializeOnlyLayerData = 1,
		EPCGLandscapeCacheSerializationContents__SerializeAll = 2,
	};


	// Enum /Script/PCG.EPCGMeshSelectorMaterialOverrideMode
	enum EPCGMeshSelectorMaterialOverrideMode
	{
		EPCGMeshSelectorMaterialOverrideMode__NoOverride = 0,
		EPCGMeshSelectorMaterialOverrideMode__StaticOverride = 1,
		EPCGMeshSelectorMaterialOverrideMode__ByAttributeOverride = 2,
	};


	// Enum /Script/PCG.EPCGComponentInput
	enum EPCGComponentInput
	{
		EPCGComponentInput__Actor = 0,
		EPCGComponentInput__Landscape = 1,
		EPCGComponentInput__Other = 2,
	};


	// Enum /Script/PCG.EPCGComponentGenerationTrigger
	enum EPCGComponentGenerationTrigger
	{
		EPCGComponentGenerationTrigger__GenerateOnLoad = 0,
		EPCGComponentGenerationTrigger__GenerateOnDemand = 1,
		EPCGComponentGenerationTrigger__GenerateAtRuntime = 2,
	};


	// Enum /Script/PCG.EPCGComponentDirtyFlag
	enum EPCGComponentDirtyFlag
	{
		EPCGComponentDirtyFlag__None = 0,
		EPCGComponentDirtyFlag__Actor = 1,
		EPCGComponentDirtyFlag__Landscape = 2,
		EPCGComponentDirtyFlag__Input = 4,
		EPCGComponentDirtyFlag__Data = 8,
		EPCGComponentDirtyFlag__All = F,
	};


	// Enum /Script/PCG.EPCGExecutionPhase
	enum EPCGExecutionPhase
	{
		EPCGExecutionPhase__NotExecuted = 0,
		EPCGExecutionPhase__PrepareData = 1,
		EPCGExecutionPhase__Execute = 2,
		EPCGExecutionPhase__PostExecute = 3,
		EPCGExecutionPhase__Done = 4,
	};


	// Enum /Script/PCG.EPCGDebugVisScaleMethod
	enum EPCGDebugVisScaleMethod
	{
		EPCGDebugVisScaleMethod__Relative = 0,
		EPCGDebugVisScaleMethod__Absolute = 1,
		EPCGDebugVisScaleMethod__Extents = 2,
	};


	// Enum /Script/PCG.EPCGPinUsage
	enum EPCGPinUsage
	{
		EPCGPinUsage__Normal = 0,
		EPCGPinUsage__Loop = 1,
		EPCGPinUsage__Feedback = 2,
		EPCGPinUsage__DependencyOnly = 3,
	};


	// Enum /Script/PCG.EPCGPinStatus
	enum EPCGPinStatus
	{
		EPCGPinStatus__Normal = 0,
		EPCGPinStatus__Required = 1,
		EPCGPinStatus__Advanced = 2,
	};


	// Enum /Script/PCG.EPCGTypeConversion
	enum EPCGTypeConversion
	{
		EPCGTypeConversion__NoConversionRequired = 0,
		EPCGTypeConversion__CollapseToPoint = 1,
		EPCGTypeConversion__Filter = 2,
		EPCGTypeConversion__MakeConcrete = 3,
		EPCGTypeConversion__SplineToSurface = 4,
		EPCGTypeConversion__Failed = 5,
	};


	// Enum /Script/PCG.EPCGPointProperties
	enum EPCGPointProperties
	{
		EPCGPointProperties__Density = 0,
		EPCGPointProperties__BoundsMin = 1,
		EPCGPointProperties__BoundsMax = 2,
		EPCGPointProperties__Extents = 3,
		EPCGPointProperties__Color = 4,
		EPCGPointProperties__Position = 5,
		EPCGPointProperties__Rotation = 6,
		EPCGPointProperties__Scale = 7,
		EPCGPointProperties__Transform = 8,
		EPCGPointProperties__Steepness = 9,
		EPCGPointProperties__LocalCenter = A,
		EPCGPointProperties__Seed = B,
	};


	// Enum /Script/PCG.EPCGSettingsExecutionMode
	enum EPCGSettingsExecutionMode
	{
		EPCGSettingsExecutionMode__Enabled = 0,
		EPCGSettingsExecutionMode__Debug = 1,
		EPCGSettingsExecutionMode__Isolated = 2,
		EPCGSettingsExecutionMode__Disabled = 3,
	};


	// Enum /Script/PCG.EPCGSettingsType
	enum EPCGSettingsType
	{
		EPCGSettingsType__InputOutput = 0,
		EPCGSettingsType__Spatial = 1,
		EPCGSettingsType__Density = 2,
		EPCGSettingsType__Blueprint = 3,
		EPCGSettingsType__Metadata = 4,
		EPCGSettingsType__Filter = 5,
		EPCGSettingsType__Sampler = 6,
		EPCGSettingsType__Spawner = 7,
		EPCGSettingsType__Subgraph = 8,
		EPCGSettingsType__Debug = 9,
		EPCGSettingsType__Generic = A,
		EPCGSettingsType__Param = B,
		EPCGSettingsType__HierarchicalGeneration = C,
		EPCGSettingsType__ControlFlow = D,
		EPCGSettingsType__PointOps = E,
		EPCGSettingsType__GraphParameters = F,
		EPCGSettingsType__Reroute = 10,
	};


	// Enum /Script/PCG.EDeterminismLevel
	enum EDeterminismLevel
	{
		EDeterminismLevel__None = 0,
		EDeterminismLevel__NoDeterminism = 0,
		EDeterminismLevel__Basic = 1,
		EDeterminismLevel__OrderOrthogonal = 2,
		EDeterminismLevel__OrderConsistent = 3,
		EDeterminismLevel__OrderIndependent = 4,
		EDeterminismLevel__Deterministic = 4,
	};

}
