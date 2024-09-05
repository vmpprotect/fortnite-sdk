#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: AtomRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/AtomRuntime.EAtomModelMergedMeshSelection
	enum EAtomModelMergedMeshSelection
	{
		EAtomModelMergedMeshSelection__AllMeshes = 0,
		EAtomModelMergedMeshSelection__OnlyOpaqueMeshes = 1,
		EAtomModelMergedMeshSelection__OnlyTransparentMeshes = 2,
	};


	// Enum /Script/AtomRuntime.EAtomMaterialType
	enum EAtomMaterialType
	{
		EAtomMaterialType__None = 0,
		EAtomMaterialType__Standard = 1,
		EAtomMaterialType__Transparent = 2,
		EAtomMaterialType__Glitter = 3,
		EAtomMaterialType__Opalescent = 4,
		EAtomMaterialType__Metallic = 5,
	};


	// Enum /Script/AtomRuntime.EAtomMaterialColorSource
	enum EAtomMaterialColorSource
	{
		EAtomMaterialColorSource__VertexColor = 0,
		EAtomMaterialColorSource__InstanceCustomData = 1,
		EAtomMaterialColorSource__Material = 2,
		EAtomMaterialColorSource__LUTVertexColor = 3,
		EAtomMaterialColorSource__LUTInstanceCustomData = 4,
		EAtomMaterialColorSource__LUTMaterial = 5,
	};


	// Enum /Script/AtomRuntime.EAtomPrimitiveCollisionVolumeType
	enum EAtomPrimitiveCollisionVolumeType
	{
		EAtomPrimitiveCollisionVolumeType__Box = 0,
		EAtomPrimitiveCollisionVolumeType__Sphere = 1,
		EAtomPrimitiveCollisionVolumeType__Capsule = 2,
		EAtomPrimitiveCollisionVolumeType__Cylinder = 3,
		EAtomPrimitiveCollisionVolumeType__Tube = 4,
		EAtomPrimitiveCollisionVolumeType__Crate = 5,
	};


	// Enum /Script/AtomRuntime.EPrimitiveAutoCollisionType
	enum EPrimitiveAutoCollisionType
	{
		EPrimitiveAutoCollisionType__Box = 0,
		EPrimitiveAutoCollisionType__Sphere = 1,
		EPrimitiveAutoCollisionType__NDOP10_X = 2,
		EPrimitiveAutoCollisionType__NDOP10_Y = 3,
		EPrimitiveAutoCollisionType__NDOP10_Z = 4,
		EPrimitiveAutoCollisionType__NDOP18 = 5,
		EPrimitiveAutoCollisionType__NDOP26 = 6,
	};


	// Enum /Script/AtomRuntime.EPrimitiveGeometryComplexity
	enum EPrimitiveGeometryComplexity
	{
		EPrimitiveGeometryComplexity__JustShell = 0,
		EPrimitiveGeometryComplexity__ShellAndUncommonParts = 1,
		EPrimitiveGeometryComplexity__ShellWithInsideDetailsAndUncommonParts = 2,
		EPrimitiveGeometryComplexity__ShellWithInsideDetails = 3,
		EPrimitiveGeometryComplexity__ShellWithFlatCapAndUncommonParts = 4,
		EPrimitiveGeometryComplexity__ShellWithFlatCap = 5,
	};


	// Enum /Script/AtomRuntime.EPrimitiveGeometrySectionFlag
	enum EPrimitiveGeometrySectionFlag
	{
		EPrimitiveGeometrySectionFlag__None = 0,
		EPrimitiveGeometrySectionFlag__Shell = 1,
		EPrimitiveGeometrySectionFlag__InsideDetails = 2,
		EPrimitiveGeometrySectionFlag__UndersideCap = 4,
		EPrimitiveGeometrySectionFlag__OtherCap = 8,
		EPrimitiveGeometrySectionFlag__UncommonParts = 10,
		EPrimitiveGeometrySectionFlag__OtherParts = 20,
	};


	// Enum /Script/AtomRuntime.EGetCommonPartDescriptionResult
	enum EGetCommonPartDescriptionResult
	{
		EGetCommonPartDescriptionResult__Valid = 0,
		EGetCommonPartDescriptionResult__Invalid = 1,
	};


	// Enum /Script/AtomRuntime.EAtomShaderType
	enum EAtomShaderType
	{
		EAtomShaderType__Unknown = 0,
		EAtomShaderType__ShinyPlastic = 1,
		EAtomShaderType__MattePlastic = 2,
		EAtomShaderType__Rubber = 3,
		EAtomShaderType__ShinySteel = 4,
		EAtomShaderType__BrushedSteel = 5,
		EAtomShaderType__MatteSteel = 6,
		EAtomShaderType__Glitter = 7,
		EAtomShaderType__Metallic = 8,
		EAtomShaderType__Opalescence = 9,
	};


	// Enum /Script/AtomRuntime.EColorEffects
	enum EColorEffects
	{
		EColorEffects__None = 0,
		EColorEffects__Metallic = 1,
		EColorEffects__Glitter = 2,
		EColorEffects__Opalescent = 3,
	};


	// Enum /Script/AtomRuntime.EAtomModelCommonPartOptimizationFlag
	enum EAtomModelCommonPartOptimizationFlag
	{
		EAtomModelCommonPartOptimizationFlag__None = 0,
		EAtomModelCommonPartOptimizationFlag__RemoveConnected = 1,
		EAtomModelCommonPartOptimizationFlag__RemoveKnobs = 2,
		EAtomModelCommonPartOptimizationFlag__RemoveTubes = 4,
		EAtomModelCommonPartOptimizationFlag__RemovePins = 8,
		EAtomModelCommonPartOptimizationFlag__All = F,
	};


	// Enum /Script/AtomRuntime.EAtomModelPivotAnchor
	enum EAtomModelPivotAnchor
	{
		EAtomModelPivotAnchor__Original = 0,
		EAtomModelPivotAnchor__TopCenter = 1,
		EAtomModelPivotAnchor__Center = 2,
		EAtomModelPivotAnchor__BottomCenter = 3,
	};


	// Enum /Script/AtomRuntime.EAtomIssue
	enum EAtomIssue
	{
		EAtomIssue__None = 0,
		EAtomIssue__FailedToLoadModelFile = 1,
		EAtomIssue__UnsupportedLxFMLVersion = 2,
		EAtomIssue__UnsupportedLxFMLSticker = 3,
		EAtomIssue__MissingPrimitive = 4,
		EAtomIssue__MismatchedPrimitive = 5,
		EAtomIssue__UnsupportedPrimitive = 6,
		EAtomIssue__UnplacedPrimitive = 7,
		EAtomIssue__MissingPrimitiveSourceGeometry = 8,
		EAtomIssue__ExcludedByFilter = 9,
		EAtomIssue__UnsupportedCommonPart = A,
		EAtomIssue__OldVersionPrimitive = B,
		EAtomIssue__UnknownDecorationTexture = C,
		EAtomIssue__UnknownDecorationSurface = D,
		EAtomIssue__DuplicatedSelectionSet = E,
		EAtomIssue__EmptySelectionSet = F,
	};


	// Enum /Script/AtomRuntime.EAtomModelInstanceType
	enum EAtomModelInstanceType
	{
		EAtomModelInstanceType__Components = 0,
		EAtomModelInstanceType__Actors = 1,
		EAtomModelInstanceType__HISM = 2,
		EAtomModelInstanceType__ComponentsWithVertexColor = 3,
		EAtomModelInstanceType__RenderStylesComponents = 4,
	};


	// Enum /Script/AtomRuntime.EAtomPlatform
	enum EAtomPlatform
	{
		EAtomPlatform__NA = 0,
		EAtomPlatform__Duplo = 1,
		EAtomPlatform__Atom = 2,
		EAtomPlatform__Technic = 3,
		EAtomPlatform__Clickits = 4,
		EAtomPlatform__ActionFigures = 5,
		EAtomPlatform__Outdoor = 6,
		EAtomPlatform__SoftPrimitives = 7,
		EAtomPlatform__ExtendedLine = 8,
		EAtomPlatform__Scala = 9,
		EAtomPlatform__Znap = A,
		EAtomPlatform__Toolo = B,
		EAtomPlatform__Storage = C,
		EAtomPlatform__MusicBuilder = D,
		EAtomPlatform__StoryBuilder = E,
		EAtomPlatform__Quatro = F,
		EAtomPlatform__Ccbs = 10,
		EAtomPlatform__Primo1 = 11,
		EAtomPlatform__AtomFoundation = 12,
		EAtomPlatform__DieCutToStickers = 62,
		EAtomPlatform__GeneralPlatform = 63,
	};


	// Enum /Script/AtomRuntime.EAtomCommonPartType
	enum EAtomCommonPartType
	{
		EAtomCommonPartType__None = 0,
		EAtomCommonPartType__Dknob_01_C = 1,
		EAtomCommonPartType__Dknob_01_D = 2,
		EAtomCommonPartType__Dpin_01_C = 3,
		EAtomCommonPartType__Dtube_01_C = 4,
		EAtomCommonPartType__Dtube_02_C = 5,
		EAtomCommonPartType__Dtube_03_C = 6,
		EAtomCommonPartType__Dtube_04_C = 7,
		EAtomCommonPartType__knob_01_C = 8,
		EAtomCommonPartType__knob_01_D = 9,
		EAtomCommonPartType__knob_01_P = A,
		EAtomCommonPartType__knob_01_PC = B,
		EAtomCommonPartType__knob_02_P = C,
		EAtomCommonPartType__knob_02_PC = D,
		EAtomCommonPartType__knob_03_P = E,
		EAtomCommonPartType__knob_03_PC = F,
		EAtomCommonPartType__knob_04_P = 10,
		EAtomCommonPartType__knob_04_PC = 11,
		EAtomCommonPartType__pin_01_C = 12,
		EAtomCommonPartType__pin_01_D = 13,
		EAtomCommonPartType__pin_02_C = 14,
		EAtomCommonPartType__pin_02_D = 15,
		EAtomCommonPartType__tube_01_D = 16,
		EAtomCommonPartType__tube_02_D = 17,
		EAtomCommonPartType__tube_03_D = 18,
	};


	// Enum /Script/AtomRuntime.EAtomCommonPartCategory
	enum EAtomCommonPartCategory
	{
		EAtomCommonPartCategory__None = 0,
		EAtomCommonPartCategory__Knob = 1,
		EAtomCommonPartCategory__Pin = 2,
		EAtomCommonPartCategory__Tube = 3,
	};


	// Enum /Script/AtomRuntime.EAtomPrimitiveImportWarningFlags
	enum EAtomPrimitiveImportWarningFlags
	{
		EAtomPrimitiveImportWarningFlags__None = 0,
		EAtomPrimitiveImportWarningFlags__UnableToFindUnwrappedMeshUVSet = 1,
		EAtomPrimitiveImportWarningFlags__BrokenPrincipalUVSet = 2,
		EAtomPrimitiveImportWarningFlags__InvalidFBXFile = 4,
		EAtomPrimitiveImportWarningFlags__InvalidMeshInFBXScene = 8,
		EAtomPrimitiveImportWarningFlags__CommonPartMeshNotFound = 10,
		EAtomPrimitiveImportWarningFlags__FullyTriangulated = 20,
		EAtomPrimitiveImportWarningFlags__TransformedMeshes = 40,
		EAtomPrimitiveImportWarningFlags__CommonPartRotationsInconsistent = 80,
	};


	// Enum /Script/AtomRuntime.EAtomPrimitiveGeoOptimization
	enum EAtomPrimitiveGeoOptimization
	{
		EAtomPrimitiveGeoOptimization__Default = 0,
		EAtomPrimitiveGeoOptimization__UseForDetailOnly = 1,
		EAtomPrimitiveGeoOptimization__UseApproximationForLODs = 2,
	};


	// Enum /Script/AtomRuntime.EAtomPrimitiveGeoOptimization_Old
	enum EAtomPrimitiveGeoOptimization_Old
	{
		EAtomPrimitiveGeoOptimization_Old__Default = 0,
		EAtomPrimitiveGeoOptimization_Old__UseForDetailOnly = 1,
		EAtomPrimitiveGeoOptimization_Old__UseApproximationForLODs = 2,
	};


	// Enum /Script/AtomRuntime.EAtomPrimitiveApproximationShapeType
	enum EAtomPrimitiveApproximationShapeType
	{
		EAtomPrimitiveApproximationShapeType__Auto = 0,
		EAtomPrimitiveApproximationShapeType__OrientedBox = 1,
		EAtomPrimitiveApproximationShapeType__ExtrudedConvexHull2D = 2,
		EAtomPrimitiveApproximationShapeType__ConvexHull3D = 3,
		EAtomPrimitiveApproximationShapeType__Extrusion = 4,
	};


	// Enum /Script/AtomRuntime.EAtomPrimitiveApproximationShapeType_Old
	enum EAtomPrimitiveApproximationShapeType_Old
	{
		EAtomPrimitiveApproximationShapeType_Old__Auto = 0,
		EAtomPrimitiveApproximationShapeType_Old__OrientedBox = 1,
		EAtomPrimitiveApproximationShapeType_Old__ExtrudedConvexHull2D = 2,
		EAtomPrimitiveApproximationShapeType_Old__ConvexHull3D = 3,
		EAtomPrimitiveApproximationShapeType_Old__Extrusion = 4,
	};


	// Enum /Script/AtomRuntime.EAtomPrimitiveDetailTextureType
	enum EAtomPrimitiveDetailTextureType
	{
		EAtomPrimitiveDetailTextureType__None = 0,
		EAtomPrimitiveDetailTextureType__NormalMap = 1,
		EAtomPrimitiveDetailTextureType__AlphaMask = 2,
	};


	// Enum /Script/AtomRuntime.EConnectionFieldType
	enum EConnectionFieldType
	{
		EConnectionFieldType__Planar = 0,
		EConnectionFieldType__Hinge = 1,
		EConnectionFieldType__Axle = 2,
		EConnectionFieldType__Ball = 3,
		EConnectionFieldType__Cardan = 4,
		EConnectionFieldType__Fixed = 5,
		EConnectionFieldType__Rail = 6,
		EConnectionFieldType__Slider = 7,
		EConnectionFieldType__Gear = 8,
		EConnectionFieldType__User = 9,
	};


	// Enum /Script/AtomRuntime.EConnectionFieldSuperType
	enum EConnectionFieldSuperType
	{
		EConnectionFieldSuperType__Planar = 0,
		EConnectionFieldSuperType__Line = 1,
		EConnectionFieldSuperType__Point = 2,
	};


	// Enum /Script/AtomRuntime.EConnectionFieldGender
	enum EConnectionFieldGender
	{
		EConnectionFieldGender__Receptor = 0,
		EConnectionFieldGender__Connector = 1,
		EConnectionFieldGender__Any = 2,
	};


	// Enum /Script/AtomRuntime.EFieldConnectResult
	enum EFieldConnectResult
	{
		EFieldConnectResult__NoConnection = 0,
		EFieldConnectResult__Rejection = 1,
		EFieldConnectResult__FixedConnection = 2,
		EFieldConnectResult__FreeConnection = 3,
		EFieldConnectResult__HingeConnection = 4,
		EFieldConnectResult__CardanConnection = 5,
		EFieldConnectResult__BallConnection = 6,
		EFieldConnectResult__PrismaticConnection = 7,
		EFieldConnectResult__CylindricalConnection = 8,
		EFieldConnectResult__PrismaticAPerpendicularHingeConnection = 9,
		EFieldConnectResult__PrismaticBPerpendicularHingeConnection = A,
		EFieldConnectResult__ConnectResultMax = B,
		EFieldConnectResult__FirstConnection = 2,
		EFieldConnectResult__LastConnection = A,
	};


	// Enum /Script/AtomRuntime.EAxleDiameter
	enum EAxleDiameter
	{
		EAxleDiameter__Tiny = 0,
		EAxleDiameter__Medium = 1,
		EAxleDiameter__Large = 2,
	};


	// Enum /Script/AtomRuntime.EConnectionAxleType
	enum EConnectionAxleType
	{
		EConnectionAxleType__UnusedReceptor = 0,
		EConnectionAxleType__UnusedConnector = 1,
		EConnectionAxleType__RoundAxleReceptor = 2,
		EConnectionAxleType__RoundAxleConnector = 3,
		EConnectionAxleType__CrossAxleReceptor = 4,
		EConnectionAxleType__CrossAxleConnector = 5,
		EConnectionAxleType__SecondaryPinReceptor = 6,
		EConnectionAxleType__SecondaryPinConnector = 7,
		EConnectionAxleType__PlateRoundCrossAxleReceptor = 8,
		EConnectionAxleType__UnusedPlateRoundCrossAxleConnector = 9,
		EConnectionAxleType__MiniFigNeckReceptor = A,
		EConnectionAxleType__MiniFigNeckConnector = B,
		EConnectionAxleType__RoundCrossAxleReceptor = C,
		EConnectionAxleType__RoundCrossAxleConnector = D,
		EConnectionAxleType__TinyPinReceptor = E,
		EConnectionAxleType__TinyPinConnector = F,
		EConnectionAxleType__UnusedCrossAxlePegHoleCapAlignmentReceptor = 10,
		EConnectionAxleType__CrossAxlePegHoleCapAlignmentConnector = 11,
		EConnectionAxleType__UnusedRoundAxleReceptorDontRejectSecondaryPinConnector = 12,
		EConnectionAxleType__RoundAxleConnectorDontRejectSecondaryPinConnector = 13,
		EConnectionAxleType__UnusedSecondaryPinReceptorDontRejectTinyPinConnector = 14,
		EConnectionAxleType__SecondaryPinConnectorDontRejectTinyPinConnector = 15,
		EConnectionAxleType__SubTypeSize = 16,
	};


	// Enum /Script/AtomRuntime.EConnectionPointType
	enum EConnectionPointType
	{
		EConnectionPointType__Knob = 0,
		EConnectionPointType__HollowKnob = 1,
		EConnectionPointType__KnobFitInPegHole = 2,
		EConnectionPointType__HollowKnobFitInPegHole = 3,
		EConnectionPointType__SquareKnob = 4,
		EConnectionPointType__Tube = 5,
		EConnectionPointType__TubeWithRib = 6,
		EConnectionPointType__BottomTube = 7,
		EConnectionPointType__BottomTubeWithRib = 8,
		EConnectionPointType__SecondaryPin = 9,
		EConnectionPointType__SecondaryPinWithRib = A,
		EConnectionPointType__SecondaryPinWithTinyPinReceptor = B,
		EConnectionPointType__SecondaryPinWithRibAndTinyPinReceptor = C,
		EConnectionPointType__FixedTube = D,
		EConnectionPointType__FixedTubeWithAntiKnob = E,
		EConnectionPointType__AntiKnob = F,
		EConnectionPointType__PegHole = 10,
		EConnectionPointType__SquareAntiKnob = 11,
		EConnectionPointType__TubeGap = 12,
		EConnectionPointType__TubeGrabber = 13,
		EConnectionPointType__TinyPin = 14,
		EConnectionPointType__TinyPinReceptor = 15,
		EConnectionPointType__Edge = 16,
		EConnectionPointType__EdgeGap = 17,
		EConnectionPointType__KnobReject = 18,
		EConnectionPointType__PowerFuncLeftTop = 19,
		EConnectionPointType__PowerFuncRightTop = 1A,
		EConnectionPointType__PowerFuncLeftBottom = 1B,
		EConnectionPointType__PowerFuncRightBottom = 1C,
		EConnectionPointType__VoidFeature = 1D,
		EConnectionPointType__DuploKnob = 1E,
		EConnectionPointType__DuploHollowKnob = 1F,
		EConnectionPointType__DuploAntiKnob = 20,
		EConnectionPointType__DuploTube = 21,
		EConnectionPointType__DuploFixedTube = 22,
		EConnectionPointType__DuploTubeGap = 23,
		EConnectionPointType__DuploAnimalKnob = 24,
		EConnectionPointType__DuploAnimalTube = 25,
		EConnectionPointType__SecondaryPinReceptor = 26,
		EConnectionPointType__DuploFixedAnimalTube = 27,
		EConnectionPointType__DuploSecondaryPinWithRib = 28,
		EConnectionPointType__DuploSecondaryPin = 29,
		EConnectionPointType__DuploKnobReject = 2A,
		EConnectionPointType__RejectAll = 2B,
		EConnectionPointType___size = 2C,
		EConnectionPointType___duploBegin = 1E,
		EConnectionPointType___duploEnd = 2A,
	};


	// Enum /Script/AtomRuntime.EConnectionPointFlags
	enum EConnectionPointFlags
	{
		EConnectionPointFlags__SquareFeature = 1,
		EConnectionPointFlags__RoundFeature = 2,
		EConnectionPointFlags__KnobWithHole = 4,
		EConnectionPointFlags__KnobWithMiniFigHandHole = 8,
		EConnectionPointFlags__KnobWithSingleCollision = 10,
		EConnectionPointFlags__SingleFeature = 20,
		EConnectionPointFlags__ReceptorDontRemoveKnobCollision = 40,
		EConnectionPointFlags__KnobWithoutCollision = 80,
		EConnectionPointFlags__CreationValidFlags = FF,
		EConnectionPointFlags__ThisSideTransparent = 100,
		EConnectionPointFlags__ThisSideHidden = 200,
		EConnectionPointFlags__DynamicValidFlags = 300,
		EConnectionPointFlags__InternalIsDuploSecondaryPin = 10000000,
		EConnectionPointFlags__InternalIsQuadConnector = 20000000,
		EConnectionPointFlags__InternalIsSecondaryPin = 40000000,
		EConnectionPointFlags__InternalIsAnyKnob = 80000000,
		EConnectionPointFlags__SquareOcclusionShapeIndex = 1,
		EConnectionPointFlags__RoundOcclusionShapeIndex = 2,
		EConnectionPointFlags__OtherOcclusionShapeIndex = 0,
		EConnectionPointFlags__OcclusionShapeMask = 3,
	};

}
