#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: ModelingOperators
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/ModelingOperators.ERecomputeUVsPropertiesUnwrapType
	enum ERecomputeUVsPropertiesUnwrapType
	{
		ERecomputeUVsPropertiesUnwrapType__ExpMap = 0,
		ERecomputeUVsPropertiesUnwrapType__Conformal = 1,
		ERecomputeUVsPropertiesUnwrapType__SpectralConformal = 2,
		ERecomputeUVsPropertiesUnwrapType__IslandMerging = 3,
	};


	// Enum /Script/ModelingOperators.ERecomputeUVsPropertiesIslandMode
	enum ERecomputeUVsPropertiesIslandMode
	{
		ERecomputeUVsPropertiesIslandMode__PolyGroups = 0,
		ERecomputeUVsPropertiesIslandMode__ExistingUVs = 1,
	};


	// Enum /Script/ModelingOperators.ERecomputeUVsToolOrientationMode
	enum ERecomputeUVsToolOrientationMode
	{
		ERecomputeUVsToolOrientationMode__None = 0,
		ERecomputeUVsToolOrientationMode__MinBounds = 1,
	};


	// Enum /Script/ModelingOperators.ERecomputeUVsPropertiesLayoutType
	enum ERecomputeUVsPropertiesLayoutType
	{
		ERecomputeUVsPropertiesLayoutType__None = 0,
		ERecomputeUVsPropertiesLayoutType__Repack = 1,
		ERecomputeUVsPropertiesLayoutType__NormalizeToExistingBounds = 2,
		ERecomputeUVsPropertiesLayoutType__NormalizeToBounds = 3,
		ERecomputeUVsPropertiesLayoutType__NormalizeToWorld = 4,
	};


	// Enum /Script/ModelingOperators.EFlattenCurveMethod
	enum EFlattenCurveMethod
	{
		EFlattenCurveMethod__DoNotFlatten = 0,
		EFlattenCurveMethod__ToBestFitPlane = 1,
		EFlattenCurveMethod__AlongX = 2,
		EFlattenCurveMethod__AlongY = 3,
		EFlattenCurveMethod__AlongZ = 4,
	};


	// Enum /Script/ModelingOperators.ECombineCurvesMethod
	enum ECombineCurvesMethod
	{
		ECombineCurvesMethod__LeaveSeparate = 0,
		ECombineCurvesMethod__Union = 1,
		ECombineCurvesMethod__Intersect = 2,
		ECombineCurvesMethod__Difference = 3,
		ECombineCurvesMethod__ExclusiveOr = 4,
	};


	// Enum /Script/ModelingOperators.EOffsetClosedCurvesMethod
	enum EOffsetClosedCurvesMethod
	{
		EOffsetClosedCurvesMethod__DoNotOffset = 0,
		EOffsetClosedCurvesMethod__OffsetOuterSide = 1,
		EOffsetClosedCurvesMethod__OffsetBothSides = 2,
	};


	// Enum /Script/ModelingOperators.EOffsetOpenCurvesMethod
	enum EOffsetOpenCurvesMethod
	{
		EOffsetOpenCurvesMethod__TreatAsClosed = 0,
		EOffsetOpenCurvesMethod__Offset = 1,
	};


	// Enum /Script/ModelingOperators.EOffsetJoinMethod
	enum EOffsetJoinMethod
	{
		EOffsetJoinMethod__Square = 0,
		EOffsetJoinMethod__Miter = 1,
		EOffsetJoinMethod__Round = 2,
	};


	// Enum /Script/ModelingOperators.EOpenCurveEndShapes
	enum EOpenCurveEndShapes
	{
		EOpenCurveEndShapes__Square = 0,
		EOpenCurveEndShapes__Round = 1,
		EOpenCurveEndShapes__Butt = 2,
	};


	// Enum /Script/ModelingOperators.EUVLayoutType
	enum EUVLayoutType
	{
		EUVLayoutType__Transform = 0,
		EUVLayoutType__Stack = 1,
		EUVLayoutType__Repack = 2,
		EUVLayoutType__Normalize = 3,
	};


	// Enum /Script/ModelingOperators.ENormalCalculationMethod
	enum ENormalCalculationMethod
	{
		ENormalCalculationMethod__AreaWeighted = 0,
		ENormalCalculationMethod__AngleWeighted = 1,
		ENormalCalculationMethod__AreaAngleWeighting = 2,
	};


	// Enum /Script/ModelingOperators.ESplitNormalMethod
	enum ESplitNormalMethod
	{
		ESplitNormalMethod__UseExistingTopology = 0,
		ESplitNormalMethod__FaceNormalThreshold = 1,
		ESplitNormalMethod__FaceGroupID = 2,
		ESplitNormalMethod__PerTriangle = 3,
		ESplitNormalMethod__PerVertex = 4,
	};


	// Enum /Script/ModelingOperators.EHoleFillOpFillType
	enum EHoleFillOpFillType
	{
		EHoleFillOpFillType__TriangleFan = 0,
		EHoleFillOpFillType__PolygonEarClipping = 1,
		EHoleFillOpFillType__Planar = 2,
		EHoleFillOpFillType__Minimal = 3,
		EHoleFillOpFillType__Smooth = 4,
	};


	// Enum /Script/ModelingOperators.ERemeshType
	enum ERemeshType
	{
		ERemeshType__Standard = 0,
		ERemeshType__FullPass = 1,
		ERemeshType__NormalFlow = 2,
	};


	// Enum /Script/ModelingOperators.ERemeshSmoothingType
	enum ERemeshSmoothingType
	{
		ERemeshSmoothingType__Uniform = 0,
		ERemeshSmoothingType__Cotangent = 1,
		ERemeshSmoothingType__MeanValue = 2,
	};


	// Enum /Script/ModelingOperators.ECSGOperation
	enum ECSGOperation
	{
		ECSGOperation__DifferenceAB = 0,
		ECSGOperation__DifferenceBA = 1,
		ECSGOperation__Intersect = 2,
		ECSGOperation__Union = 3,
	};


	// Enum /Script/ModelingOperators.ETrimOperation
	enum ETrimOperation
	{
		ETrimOperation__TrimA = 0,
		ETrimOperation__TrimB = 1,
	};


	// Enum /Script/ModelingOperators.ETrimSide
	enum ETrimSide
	{
		ETrimSide__RemoveInside = 0,
		ETrimSide__RemoveOutside = 1,
	};


	// Enum /Script/ModelingOperators.EMorphologyOperation
	enum EMorphologyOperation
	{
		EMorphologyOperation__Dilate = 0,
		EMorphologyOperation__Contract = 1,
		EMorphologyOperation__Close = 2,
		EMorphologyOperation__Open = 3,
	};


	// Enum /Script/ModelingOperators.EUVProjectionMethod
	enum EUVProjectionMethod
	{
		EUVProjectionMethod__Box = 0,
		EUVProjectionMethod__Cylinder = 1,
		EUVProjectionMethod__Plane = 2,
		EUVProjectionMethod__ExpMap = 3,
	};

}
