#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: MeshModelingToolsExp
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/MeshModelingToolsExp.EBakeNormalSpace
	enum EBakeNormalSpace
	{
		EBakeNormalSpace__Tangent = 0,
		EBakeNormalSpace__Object = 1,
	};


	// Enum /Script/MeshModelingToolsExp.EBakeCurvatureTypeMode
	enum EBakeCurvatureTypeMode
	{
		EBakeCurvatureTypeMode__MeanAverage = 0,
		EBakeCurvatureTypeMode__Max = 1,
		EBakeCurvatureTypeMode__Min = 2,
		EBakeCurvatureTypeMode__Gaussian = 3,
	};


	// Enum /Script/MeshModelingToolsExp.EBakeCurvatureColorMode
	enum EBakeCurvatureColorMode
	{
		EBakeCurvatureColorMode__Grayscale = 0,
		EBakeCurvatureColorMode__RedBlue = 1,
		EBakeCurvatureColorMode__RedGreenBlue = 2,
	};


	// Enum /Script/MeshModelingToolsExp.EBakeCurvatureClampMode
	enum EBakeCurvatureClampMode
	{
		EBakeCurvatureClampMode__None = 0,
		EBakeCurvatureClampMode__OnlyPositive = 1,
		EBakeCurvatureClampMode__OnlyNegative = 2,
	};


	// Enum /Script/MeshModelingToolsExp.EExtrudeMeshSelectionInteractionMode
	enum EExtrudeMeshSelectionInteractionMode
	{
		EExtrudeMeshSelectionInteractionMode__Interactive = 0,
		EExtrudeMeshSelectionInteractionMode__Fixed = 1,
	};


	// Enum /Script/MeshModelingToolsExp.EExtrudeMeshSelectionRegionModifierMode
	enum EExtrudeMeshSelectionRegionModifierMode
	{
		EExtrudeMeshSelectionRegionModifierMode__OriginalShape = 0,
		EExtrudeMeshSelectionRegionModifierMode__FlattenToPlane = 1,
		EExtrudeMeshSelectionRegionModifierMode__RaycastToPlane = 2,
	};


	// Enum /Script/MeshModelingToolsExp.EPlaneBrushSideMode
	enum EPlaneBrushSideMode
	{
		EPlaneBrushSideMode__BothSides = 0,
		EPlaneBrushSideMode__PushDown = 1,
		EPlaneBrushSideMode__PullTowards = 2,
	};


	// Enum /Script/MeshModelingToolsExp.EVertexColorPaintBrushOpBlendMode
	enum EVertexColorPaintBrushOpBlendMode
	{
		EVertexColorPaintBrushOpBlendMode__Lerp = 0,
		EVertexColorPaintBrushOpBlendMode__Mix = 1,
		EVertexColorPaintBrushOpBlendMode__Multiply = 2,
	};


	// Enum /Script/MeshModelingToolsExp.EOffsetMeshSelectionInteractionMode
	enum EOffsetMeshSelectionInteractionMode
	{
		EOffsetMeshSelectionInteractionMode__Fixed = 0,
	};


	// Enum /Script/MeshModelingToolsExp.EOffsetMeshSelectionDirectionMode
	enum EOffsetMeshSelectionDirectionMode
	{
		EOffsetMeshSelectionDirectionMode__VertexNormals = 0,
		EOffsetMeshSelectionDirectionMode__FaceNormals = 1,
		EOffsetMeshSelectionDirectionMode__ConstantWidth = 2,
	};


	// Enum /Script/MeshModelingToolsExp.EPatternToolShape
	enum EPatternToolShape
	{
		EPatternToolShape__Line = 0,
		EPatternToolShape__Grid = 1,
		EPatternToolShape__Circle = 2,
	};


	// Enum /Script/MeshModelingToolsExp.EPatternToolSingleAxis
	enum EPatternToolSingleAxis
	{
		EPatternToolSingleAxis__XAxis = 0,
		EPatternToolSingleAxis__YAxis = 1,
		EPatternToolSingleAxis__ZAxis = 2,
	};


	// Enum /Script/MeshModelingToolsExp.EPatternToolSinglePlane
	enum EPatternToolSinglePlane
	{
		EPatternToolSinglePlane__XYPlane = 0,
		EPatternToolSinglePlane__XZPlane = 1,
		EPatternToolSinglePlane__YZPlane = 2,
	};


	// Enum /Script/MeshModelingToolsExp.EPatternToolAxisSpacingMode
	enum EPatternToolAxisSpacingMode
	{
		EPatternToolAxisSpacingMode__ByCount = 0,
		EPatternToolAxisSpacingMode__StepSize = 1,
		EPatternToolAxisSpacingMode__Packed = 2,
	};


	// Enum /Script/MeshModelingToolsExp.EMeshBoundaryConstraint
	enum EMeshBoundaryConstraint
	{
		EMeshBoundaryConstraint__Fixed = 7,
		EMeshBoundaryConstraint__Refine = 5,
		EMeshBoundaryConstraint__Free = 1,
	};


	// Enum /Script/MeshModelingToolsExp.EGroupBoundaryConstraint
	enum EGroupBoundaryConstraint
	{
		EGroupBoundaryConstraint__Fixed = 7,
		EGroupBoundaryConstraint__Refine = 5,
		EGroupBoundaryConstraint__Free = 1,
		EGroupBoundaryConstraint__Ignore = 0,
	};


	// Enum /Script/MeshModelingToolsExp.EMaterialBoundaryConstraint
	enum EMaterialBoundaryConstraint
	{
		EMaterialBoundaryConstraint__Fixed = 7,
		EMaterialBoundaryConstraint__Refine = 5,
		EMaterialBoundaryConstraint__Free = 1,
		EMaterialBoundaryConstraint__Ignore = 0,
	};


	// Enum /Script/MeshModelingToolsExp.ERevolveSplineSampleMode
	enum ERevolveSplineSampleMode
	{
		ERevolveSplineSampleMode__ControlPointsOnly = 0,
		ERevolveSplineSampleMode__PolyLineMaxError = 1,
		ERevolveSplineSampleMode__UniformSpacingAlongCurve = 2,
	};


	// Enum /Script/MeshModelingToolsExp.EAlignObjectsAlignTypes
	enum EAlignObjectsAlignTypes
	{
		EAlignObjectsAlignTypes__Pivots = 0,
		EAlignObjectsAlignTypes__BoundingBoxes = 1,
	};


	// Enum /Script/MeshModelingToolsExp.EAlignObjectsAlignToOptions
	enum EAlignObjectsAlignToOptions
	{
		EAlignObjectsAlignToOptions__FirstSelected = 0,
		EAlignObjectsAlignToOptions__LastSelected = 1,
		EAlignObjectsAlignToOptions__Combined = 2,
	};


	// Enum /Script/MeshModelingToolsExp.EAlignObjectsBoxPoint
	enum EAlignObjectsBoxPoint
	{
		EAlignObjectsBoxPoint__Center = 0,
		EAlignObjectsBoxPoint__Bottom = 1,
		EAlignObjectsBoxPoint__Top = 2,
		EAlignObjectsBoxPoint__Left = 3,
		EAlignObjectsBoxPoint__Right = 4,
		EAlignObjectsBoxPoint__Front = 5,
		EAlignObjectsBoxPoint__Back = 6,
		EAlignObjectsBoxPoint__Min = 7,
		EAlignObjectsBoxPoint__Max = 8,
	};


	// Enum /Script/MeshModelingToolsExp.EBakeMapType
	enum EBakeMapType
	{
		EBakeMapType__None = 0,
		EBakeMapType__TangentSpaceNormal = 1,
		EBakeMapType__ObjectSpaceNormal = 2,
		EBakeMapType__FaceNormal = 4,
		EBakeMapType__BentNormal = 8,
		EBakeMapType__Position = 10,
		EBakeMapType__Curvature = 20,
		EBakeMapType__AmbientOcclusion = 40,
		EBakeMapType__Texture = 80,
		EBakeMapType__MultiTexture = 100,
		EBakeMapType__VertexColor = 200,
		EBakeMapType__MaterialID = 400,
		EBakeMapType__PolyGroupID = 800,
		EBakeMapType__One = 1000,
		EBakeMapType__Zero = 2000,
		EBakeMapType__All = 1FFF,
	};


	// Enum /Script/MeshModelingToolsExp.EBakeVertexOutput
	enum EBakeVertexOutput
	{
		EBakeVertexOutput__RGBA = 0,
		EBakeVertexOutput__PerChannel = 1,
	};


	// Enum /Script/MeshModelingToolsExp.EBakeVertexChannel
	enum EBakeVertexChannel
	{
		EBakeVertexChannel__R = 0,
		EBakeVertexChannel__G = 1,
		EBakeVertexChannel__B = 2,
		EBakeVertexChannel__A = 3,
		EBakeVertexChannel__RGBA = 4,
	};


	// Enum /Script/MeshModelingToolsExp.EBakeScaleMethod
	enum EBakeScaleMethod
	{
		EBakeScaleMethod__BakeFullScale = 0,
		EBakeScaleMethod__BakeNonuniformScale = 1,
		EBakeScaleMethod__DoNotBakeScale = 2,
	};


	// Enum /Script/MeshModelingToolsExp.EConvertToPolygonsMode
	enum EConvertToPolygonsMode
	{
		EConvertToPolygonsMode__FaceNormalDeviation = 0,
		EConvertToPolygonsMode__FindPolygons = 1,
		EConvertToPolygonsMode__FromUVIslands = 2,
		EConvertToPolygonsMode__FromNormalSeams = 3,
		EConvertToPolygonsMode__FromConnectedTris = 4,
		EConvertToPolygonsMode__FromFurthestPointSampling = 5,
		EConvertToPolygonsMode__CopyFromLayer = 6,
	};


	// Enum /Script/MeshModelingToolsExp.ECubeGridToolFaceSelectionMode
	enum ECubeGridToolFaceSelectionMode
	{
		ECubeGridToolFaceSelectionMode__OutsideBasedOnNormal = 0,
		ECubeGridToolFaceSelectionMode__InsideBasedOnNormal = 1,
		ECubeGridToolFaceSelectionMode__OutsideBasedOnViewRay = 2,
		ECubeGridToolFaceSelectionMode__InsideBasedOnViewRay = 3,
	};


	// Enum /Script/MeshModelingToolsExp.ECubeGridToolAction
	enum ECubeGridToolAction
	{
		ECubeGridToolAction__NoAction = 0,
		ECubeGridToolAction__Push = 1,
		ECubeGridToolAction__Pull = 2,
		ECubeGridToolAction__Flip = 3,
		ECubeGridToolAction__SlideForward = 4,
		ECubeGridToolAction__SlideBack = 5,
		ECubeGridToolAction__DecreaseGridPower = 6,
		ECubeGridToolAction__IncreaseGridPower = 7,
		ECubeGridToolAction__CornerMode = 8,
		ECubeGridToolAction__ResetFromActor = 9,
		ECubeGridToolAction__AcceptAndStartNew = A,
	};


	// Enum /Script/MeshModelingToolsExp.EGroupTopologyDeformationStrategy
	enum EGroupTopologyDeformationStrategy
	{
		EGroupTopologyDeformationStrategy__Linear = 0,
		EGroupTopologyDeformationStrategy__Laplacian = 1,
	};


	// Enum /Script/MeshModelingToolsExp.EWeightScheme
	enum EWeightScheme
	{
		EWeightScheme__Uniform = 0,
		EWeightScheme__Umbrella = 1,
		EWeightScheme__Valence = 2,
		EWeightScheme__MeanValue = 3,
		EWeightScheme__Cotangent = 4,
		EWeightScheme__ClampedCotangent = 5,
		EWeightScheme__IDTCotangent = 6,
	};


	// Enum /Script/MeshModelingToolsExp.EQuickTransformerMode
	enum EQuickTransformerMode
	{
		EQuickTransformerMode__AxisTranslation = 0,
		EQuickTransformerMode__AxisRotation = 1,
	};


	// Enum /Script/MeshModelingToolsExp.EDisplaceMeshToolDisplaceType
	enum EDisplaceMeshToolDisplaceType
	{
		EDisplaceMeshToolDisplaceType__Constant = 0,
		EDisplaceMeshToolDisplaceType__DisplacementMap = 1,
		EDisplaceMeshToolDisplaceType__RandomNoise = 2,
		EDisplaceMeshToolDisplaceType__PerlinNoise = 3,
		EDisplaceMeshToolDisplaceType__SineWave = 4,
	};


	// Enum /Script/MeshModelingToolsExp.EDisplaceMeshToolSubdivisionType
	enum EDisplaceMeshToolSubdivisionType
	{
		EDisplaceMeshToolSubdivisionType__Flat = 0,
		EDisplaceMeshToolSubdivisionType__PNTriangles = 1,
	};


	// Enum /Script/MeshModelingToolsExp.EDisplaceMeshToolTriangleSelectionType
	enum EDisplaceMeshToolTriangleSelectionType
	{
		EDisplaceMeshToolTriangleSelectionType__None = 0,
		EDisplaceMeshToolTriangleSelectionType__Material = 1,
	};


	// Enum /Script/MeshModelingToolsExp.EDisplaceMeshToolChannelType
	enum EDisplaceMeshToolChannelType
	{
		EDisplaceMeshToolChannelType__Red = 0,
		EDisplaceMeshToolChannelType__Green = 1,
		EDisplaceMeshToolChannelType__Blue = 2,
		EDisplaceMeshToolChannelType__Alpha = 3,
	};


	// Enum /Script/MeshModelingToolsExp.EDrawPolyPathWidthMode
	enum EDrawPolyPathWidthMode
	{
		EDrawPolyPathWidthMode__Fixed = 0,
		EDrawPolyPathWidthMode__Interactive = 1,
	};


	// Enum /Script/MeshModelingToolsExp.EDrawPolyPathRadiusMode
	enum EDrawPolyPathRadiusMode
	{
		EDrawPolyPathRadiusMode__Fixed = 0,
		EDrawPolyPathRadiusMode__Interactive = 1,
	};


	// Enum /Script/MeshModelingToolsExp.EDrawPolyPathExtrudeMode
	enum EDrawPolyPathExtrudeMode
	{
		EDrawPolyPathExtrudeMode__Flat = 0,
		EDrawPolyPathExtrudeMode__Fixed = 1,
		EDrawPolyPathExtrudeMode__Interactive = 2,
		EDrawPolyPathExtrudeMode__RampFixed = 3,
		EDrawPolyPathExtrudeMode__RampInteractive = 4,
	};


	// Enum /Script/MeshModelingToolsExp.EDrawPolyPathExtrudeDirection
	enum EDrawPolyPathExtrudeDirection
	{
		EDrawPolyPathExtrudeDirection__SelectionNormal = 0,
		EDrawPolyPathExtrudeDirection__WorldX = 1,
		EDrawPolyPathExtrudeDirection__WorldY = 2,
		EDrawPolyPathExtrudeDirection__WorldZ = 3,
		EDrawPolyPathExtrudeDirection__LocalX = 4,
		EDrawPolyPathExtrudeDirection__LocalY = 5,
		EDrawPolyPathExtrudeDirection__LocalZ = 6,
	};


	// Enum /Script/MeshModelingToolsExp.EDynamicMeshSculptBrushType
	enum EDynamicMeshSculptBrushType
	{
		EDynamicMeshSculptBrushType__Move = 0,
		EDynamicMeshSculptBrushType__PullKelvin = 1,
		EDynamicMeshSculptBrushType__PullSharpKelvin = 2,
		EDynamicMeshSculptBrushType__Smooth = 3,
		EDynamicMeshSculptBrushType__Offset = 4,
		EDynamicMeshSculptBrushType__SculptView = 5,
		EDynamicMeshSculptBrushType__SculptMax = 6,
		EDynamicMeshSculptBrushType__Inflate = 7,
		EDynamicMeshSculptBrushType__ScaleKelvin = 8,
		EDynamicMeshSculptBrushType__Pinch = 9,
		EDynamicMeshSculptBrushType__TwistKelvin = A,
		EDynamicMeshSculptBrushType__Flatten = B,
		EDynamicMeshSculptBrushType__Plane = C,
		EDynamicMeshSculptBrushType__PlaneViewAligned = D,
		EDynamicMeshSculptBrushType__FixedPlane = E,
		EDynamicMeshSculptBrushType__Resample = F,
		EDynamicMeshSculptBrushType__LastValue = 10,
	};


	// Enum /Script/MeshModelingToolsExp.EEditPivotSnapDragRotationMode
	enum EEditPivotSnapDragRotationMode
	{
		EEditPivotSnapDragRotationMode__Ignore = 0,
		EEditPivotSnapDragRotationMode__Align = 1,
		EEditPivotSnapDragRotationMode__AlignFlipped = 2,
		EEditPivotSnapDragRotationMode__LastValue = 3,
	};


	// Enum /Script/MeshModelingToolsExp.EEditPivotToolActions
	enum EEditPivotToolActions
	{
		EEditPivotToolActions__NoAction = 0,
		EEditPivotToolActions__Center = 1,
		EEditPivotToolActions__Bottom = 2,
		EEditPivotToolActions__Top = 3,
		EEditPivotToolActions__Left = 4,
		EEditPivotToolActions__Right = 5,
		EEditPivotToolActions__Front = 6,
		EEditPivotToolActions__Back = 7,
		EEditPivotToolActions__WorldOrigin = 8,
	};


	// Enum /Script/MeshModelingToolsExp.EHoleFillToolActions
	enum EHoleFillToolActions
	{
		EHoleFillToolActions__NoAction = 0,
		EHoleFillToolActions__SelectAll = 1,
		EHoleFillToolActions__ClearSelection = 2,
	};


	// Enum /Script/MeshModelingToolsExp.ELatticeInterpolationType
	enum ELatticeInterpolationType
	{
		ELatticeInterpolationType__Linear = 0,
		ELatticeInterpolationType__Cubic = 1,
	};


	// Enum /Script/MeshModelingToolsExp.ELatticeDeformerToolAction
	enum ELatticeDeformerToolAction
	{
		ELatticeDeformerToolAction__NoAction = 0,
		ELatticeDeformerToolAction__Constrain = 1,
		ELatticeDeformerToolAction__ClearConstraints = 2,
	};


	// Enum /Script/MeshModelingToolsExp.EBrushActionMode
	enum EBrushActionMode
	{
		EBrushActionMode__Paint = 0,
		EBrushActionMode__FloodFill = 1,
	};


	// Enum /Script/MeshModelingToolsExp.EMeshAttributePaintToolActions
	enum EMeshAttributePaintToolActions
	{
		EMeshAttributePaintToolActions__NoAction = 0,
	};


	// Enum /Script/MeshModelingToolsExp.EMeshGroupPaintInteractionType
	enum EMeshGroupPaintInteractionType
	{
		EMeshGroupPaintInteractionType__Brush = 0,
		EMeshGroupPaintInteractionType__Fill = 1,
		EMeshGroupPaintInteractionType__GroupFill = 2,
		EMeshGroupPaintInteractionType__PolyLasso = 3,
		EMeshGroupPaintInteractionType__LastValue = 4,
	};


	// Enum /Script/MeshModelingToolsExp.EMeshGroupPaintBrushType
	enum EMeshGroupPaintBrushType
	{
		EMeshGroupPaintBrushType__Paint = 0,
		EMeshGroupPaintBrushType__Erase = 1,
		EMeshGroupPaintBrushType__LastValue = 2,
	};


	// Enum /Script/MeshModelingToolsExp.EMeshGroupPaintBrushAreaType
	enum EMeshGroupPaintBrushAreaType
	{
		EMeshGroupPaintBrushAreaType__Connected = 0,
		EMeshGroupPaintBrushAreaType__Volumetric = 1,
	};


	// Enum /Script/MeshModelingToolsExp.EMeshGroupPaintVisibilityType
	enum EMeshGroupPaintVisibilityType
	{
		EMeshGroupPaintVisibilityType__None = 0,
		EMeshGroupPaintVisibilityType__FrontFacing = 1,
		EMeshGroupPaintVisibilityType__Unoccluded = 2,
	};


	// Enum /Script/MeshModelingToolsExp.EMeshGroupPaintToolActions
	enum EMeshGroupPaintToolActions
	{
		EMeshGroupPaintToolActions__NoAction = 0,
		EMeshGroupPaintToolActions__ClearFrozen = 1,
		EMeshGroupPaintToolActions__FreezeCurrent = 2,
		EMeshGroupPaintToolActions__FreezeOthers = 3,
		EMeshGroupPaintToolActions__GrowCurrent = 4,
		EMeshGroupPaintToolActions__ShrinkCurrent = 5,
		EMeshGroupPaintToolActions__ClearCurrent = 6,
		EMeshGroupPaintToolActions__FloodFillCurrent = 7,
		EMeshGroupPaintToolActions__ClearAll = 8,
	};


	// Enum /Script/MeshModelingToolsExp.EMeshInspectorToolDrawIndexMode
	enum EMeshInspectorToolDrawIndexMode
	{
		EMeshInspectorToolDrawIndexMode__None = 0,
		EMeshInspectorToolDrawIndexMode__VertexID = 1,
		EMeshInspectorToolDrawIndexMode__TriangleID = 2,
		EMeshInspectorToolDrawIndexMode__GroupID = 3,
		EMeshInspectorToolDrawIndexMode__EdgeID = 4,
	};


	// Enum /Script/MeshModelingToolsExp.EMeshInspectorMaterialMode
	enum EMeshInspectorMaterialMode
	{
		EMeshInspectorMaterialMode__Original = 0,
		EMeshInspectorMaterialMode__FlatShaded = 1,
		EMeshInspectorMaterialMode__Grey = 2,
		EMeshInspectorMaterialMode__Transparent = 3,
		EMeshInspectorMaterialMode__TangentNormal = 4,
		EMeshInspectorMaterialMode__VertexColor = 5,
		EMeshInspectorMaterialMode__GroupColor = 6,
		EMeshInspectorMaterialMode__Checkerboard = 7,
		EMeshInspectorMaterialMode__Override = 8,
	};


	// Enum /Script/MeshModelingToolsExp.EMeshSelectionToolActions
	enum EMeshSelectionToolActions
	{
		EMeshSelectionToolActions__NoAction = 0,
		EMeshSelectionToolActions__SelectAll = 1,
		EMeshSelectionToolActions__SelectAllByMaterial = 2,
		EMeshSelectionToolActions__ClearSelection = 3,
		EMeshSelectionToolActions__InvertSelection = 4,
		EMeshSelectionToolActions__GrowSelection = 5,
		EMeshSelectionToolActions__ShrinkSelection = 6,
		EMeshSelectionToolActions__ExpandToConnected = 7,
		EMeshSelectionToolActions__SelectLargestComponentByTriCount = 8,
		EMeshSelectionToolActions__SelectLargestComponentByArea = 9,
		EMeshSelectionToolActions__OptimizeSelection = A,
		EMeshSelectionToolActions__DeleteSelected = B,
		EMeshSelectionToolActions__DisconnectSelected = C,
		EMeshSelectionToolActions__SeparateSelected = D,
		EMeshSelectionToolActions__DuplicateSelected = E,
		EMeshSelectionToolActions__FlipSelected = F,
		EMeshSelectionToolActions__CreateGroup = 10,
		EMeshSelectionToolActions__SmoothBoundary = 11,
		EMeshSelectionToolActions__CycleSelectionMode = 12,
		EMeshSelectionToolActions__CycleViewMode = 13,
	};


	// Enum /Script/MeshModelingToolsExp.EMeshSelectionToolPrimaryMode
	enum EMeshSelectionToolPrimaryMode
	{
		EMeshSelectionToolPrimaryMode__Brush = 0,
		EMeshSelectionToolPrimaryMode__VolumetricBrush = 1,
		EMeshSelectionToolPrimaryMode__AngleFiltered = 2,
		EMeshSelectionToolPrimaryMode__Visible = 3,
		EMeshSelectionToolPrimaryMode__AllConnected = 4,
		EMeshSelectionToolPrimaryMode__AllInGroup = 5,
		EMeshSelectionToolPrimaryMode__ByMaterial = 6,
		EMeshSelectionToolPrimaryMode__ByMaterialAll = 7,
		EMeshSelectionToolPrimaryMode__ByUVIsland = 8,
		EMeshSelectionToolPrimaryMode__AllWithinAngle = 9,
	};


	// Enum /Script/MeshModelingToolsExp.EMeshFacesColorMode
	enum EMeshFacesColorMode
	{
		EMeshFacesColorMode__None = 0,
		EMeshFacesColorMode__ByGroup = 1,
		EMeshFacesColorMode__ByMaterialID = 2,
		EMeshFacesColorMode__ByUVIsland = 3,
	};


	// Enum /Script/MeshModelingToolsExp.ENonlinearOperationType
	enum ENonlinearOperationType
	{
		ENonlinearOperationType__Bend = 0,
		ENonlinearOperationType__Flare = 1,
		ENonlinearOperationType__Twist = 2,
	};


	// Enum /Script/MeshModelingToolsExp.EFlareProfileType
	enum EFlareProfileType
	{
		EFlareProfileType__SinMode = 0,
		EFlareProfileType__SinSquaredMode = 1,
		EFlareProfileType__TriangleMode = 2,
	};


	// Enum /Script/MeshModelingToolsExp.EMeshSpaceDeformerToolAction
	enum EMeshSpaceDeformerToolAction
	{
		EMeshSpaceDeformerToolAction__NoAction = 0,
		EMeshSpaceDeformerToolAction__ShiftToCenter = 1,
	};


	// Enum /Script/MeshModelingToolsExp.EMeshVertexPaintInteractionType
	enum EMeshVertexPaintInteractionType
	{
		EMeshVertexPaintInteractionType__Brush = 0,
		EMeshVertexPaintInteractionType__TriFill = 1,
		EMeshVertexPaintInteractionType__Fill = 2,
		EMeshVertexPaintInteractionType__GroupFill = 3,
		EMeshVertexPaintInteractionType__PolyLasso = 4,
		EMeshVertexPaintInteractionType__LastValue = 5,
	};


	// Enum /Script/MeshModelingToolsExp.EMeshVertexPaintColorChannel
	enum EMeshVertexPaintColorChannel
	{
		EMeshVertexPaintColorChannel__Red = 0,
		EMeshVertexPaintColorChannel__Green = 1,
		EMeshVertexPaintColorChannel__Blue = 2,
		EMeshVertexPaintColorChannel__Alpha = 3,
	};


	// Enum /Script/MeshModelingToolsExp.EMeshVertexPaintColorBlendMode
	enum EMeshVertexPaintColorBlendMode
	{
		EMeshVertexPaintColorBlendMode__Lerp = 0,
		EMeshVertexPaintColorBlendMode__Mix = 1,
		EMeshVertexPaintColorBlendMode__Multiply = 2,
	};


	// Enum /Script/MeshModelingToolsExp.EMeshVertexPaintBrushType
	enum EMeshVertexPaintBrushType
	{
		EMeshVertexPaintBrushType__Paint = 0,
		EMeshVertexPaintBrushType__Erase = 1,
		EMeshVertexPaintBrushType__Soften = 2,
		EMeshVertexPaintBrushType__Smooth = 3,
		EMeshVertexPaintBrushType__LastValue = 4,
	};


	// Enum /Script/MeshModelingToolsExp.EMeshVertexPaintSecondaryActionType
	enum EMeshVertexPaintSecondaryActionType
	{
		EMeshVertexPaintSecondaryActionType__Erase = 0,
		EMeshVertexPaintSecondaryActionType__Soften = 1,
		EMeshVertexPaintSecondaryActionType__Smooth = 2,
	};


	// Enum /Script/MeshModelingToolsExp.EMeshVertexPaintBrushAreaType
	enum EMeshVertexPaintBrushAreaType
	{
		EMeshVertexPaintBrushAreaType__Connected = 0,
		EMeshVertexPaintBrushAreaType__Volumetric = 1,
	};


	// Enum /Script/MeshModelingToolsExp.EMeshVertexPaintVisibilityType
	enum EMeshVertexPaintVisibilityType
	{
		EMeshVertexPaintVisibilityType__None = 0,
		EMeshVertexPaintVisibilityType__FrontFacing = 1,
		EMeshVertexPaintVisibilityType__Unoccluded = 2,
	};


	// Enum /Script/MeshModelingToolsExp.EMeshVertexPaintMaterialMode
	enum EMeshVertexPaintMaterialMode
	{
		EMeshVertexPaintMaterialMode__LitVertexColor = 0,
		EMeshVertexPaintMaterialMode__UnlitVertexColor = 1,
		EMeshVertexPaintMaterialMode__OriginalMaterial = 2,
	};


	// Enum /Script/MeshModelingToolsExp.EMeshVertexPaintToolActions
	enum EMeshVertexPaintToolActions
	{
		EMeshVertexPaintToolActions__NoAction = 0,
		EMeshVertexPaintToolActions__PaintAll = 1,
		EMeshVertexPaintToolActions__EraseAll = 2,
		EMeshVertexPaintToolActions__FillBlack = 3,
		EMeshVertexPaintToolActions__FillWhite = 4,
		EMeshVertexPaintToolActions__ApplyCurrentUtility = 5,
	};


	// Enum /Script/MeshModelingToolsExp.EMeshVertexPaintToolUtilityOperations
	enum EMeshVertexPaintToolUtilityOperations
	{
		EMeshVertexPaintToolUtilityOperations__BlendAllSeams = 0,
		EMeshVertexPaintToolUtilityOperations__FillChannels = 1,
		EMeshVertexPaintToolUtilityOperations__InvertChannels = 2,
		EMeshVertexPaintToolUtilityOperations__CopyChannelToChannel = 3,
		EMeshVertexPaintToolUtilityOperations__SwapChannels = 4,
		EMeshVertexPaintToolUtilityOperations__CopyFromWeightMap = 5,
		EMeshVertexPaintToolUtilityOperations__CopyToOtherLODs = 6,
		EMeshVertexPaintToolUtilityOperations__CopyToSingleLOD = 7,
	};


	// Enum /Script/MeshModelingToolsExp.EMeshVertexSculptBrushType
	enum EMeshVertexSculptBrushType
	{
		EMeshVertexSculptBrushType__Move = 0,
		EMeshVertexSculptBrushType__PullKelvin = 1,
		EMeshVertexSculptBrushType__PullSharpKelvin = 2,
		EMeshVertexSculptBrushType__Smooth = 3,
		EMeshVertexSculptBrushType__SmoothFill = 4,
		EMeshVertexSculptBrushType__Offset = 5,
		EMeshVertexSculptBrushType__SculptView = 6,
		EMeshVertexSculptBrushType__SculptMax = 7,
		EMeshVertexSculptBrushType__Inflate = 8,
		EMeshVertexSculptBrushType__ScaleKelvin = 9,
		EMeshVertexSculptBrushType__Pinch = A,
		EMeshVertexSculptBrushType__TwistKelvin = B,
		EMeshVertexSculptBrushType__Flatten = C,
		EMeshVertexSculptBrushType__Plane = D,
		EMeshVertexSculptBrushType__PlaneViewAligned = E,
		EMeshVertexSculptBrushType__FixedPlane = F,
		EMeshVertexSculptBrushType__LastValue = 10,
	};


	// Enum /Script/MeshModelingToolsExp.EMeshVertexSculptBrushFilterType
	enum EMeshVertexSculptBrushFilterType
	{
		EMeshVertexSculptBrushFilterType__None = 0,
		EMeshVertexSculptBrushFilterType__Component = 1,
		EMeshVertexSculptBrushFilterType__PolyGroup = 2,
	};


	// Enum /Script/MeshModelingToolsExp.EMirrorSaveMode
	enum EMirrorSaveMode
	{
		EMirrorSaveMode__InputObjects = 0,
		EMirrorSaveMode__NewObjects = 1,
	};


	// Enum /Script/MeshModelingToolsExp.EMirrorOperationMode
	enum EMirrorOperationMode
	{
		EMirrorOperationMode__MirrorAndAppend = 0,
		EMirrorOperationMode__MirrorExisting = 1,
	};


	// Enum /Script/MeshModelingToolsExp.EMirrorToolAction
	enum EMirrorToolAction
	{
		EMirrorToolAction__NoAction = 0,
		EMirrorToolAction__ShiftToCenter = 1,
		EMirrorToolAction__Left = 2,
		EMirrorToolAction__Right = 3,
		EMirrorToolAction__Up = 4,
		EMirrorToolAction__Down = 5,
		EMirrorToolAction__Forward = 6,
		EMirrorToolAction__Backward = 7,
	};


	// Enum /Script/MeshModelingToolsExp.EOffsetMeshToolOffsetType
	enum EOffsetMeshToolOffsetType
	{
		EOffsetMeshToolOffsetType__Iterative = 0,
		EOffsetMeshToolOffsetType__Implicit = 1,
	};


	// Enum /Script/MeshModelingToolsExp.ECollisionGeometryMode
	enum ECollisionGeometryMode
	{
		ECollisionGeometryMode__Default = 0,
		ECollisionGeometryMode__SimpleAndComplex = 1,
		ECollisionGeometryMode__UseSimpleAsComplex = 2,
		ECollisionGeometryMode__UseComplexAsSimple = 3,
	};


	// Enum /Script/MeshModelingToolsExp.EExtractCollisionOutputType
	enum EExtractCollisionOutputType
	{
		EExtractCollisionOutputType__Simple = 0,
		EExtractCollisionOutputType__Complex = 1,
	};


	// Enum /Script/MeshModelingToolsExp.ESetCollisionGeometryInputMode
	enum ESetCollisionGeometryInputMode
	{
		ESetCollisionGeometryInputMode__CombineAll = 0,
		ESetCollisionGeometryInputMode__PerInputObject = 1,
		ESetCollisionGeometryInputMode__PerMeshComponent = 2,
		ESetCollisionGeometryInputMode__PerMeshGroup = 3,
	};


	// Enum /Script/MeshModelingToolsExp.ECollisionGeometryType
	enum ECollisionGeometryType
	{
		ECollisionGeometryType__CopyFromInputs = 0,
		ECollisionGeometryType__AlignedBoxes = 1,
		ECollisionGeometryType__OrientedBoxes = 2,
		ECollisionGeometryType__MinimalSpheres = 3,
		ECollisionGeometryType__Capsules = 4,
		ECollisionGeometryType__ConvexHulls = 5,
		ECollisionGeometryType__ConvexDecompositions = 8,
		ECollisionGeometryType__SweptHulls = 6,
		ECollisionGeometryType__LevelSets = 7,
		ECollisionGeometryType__MinVolume = A,
		ECollisionGeometryType__Empty = B,
	};


	// Enum /Script/MeshModelingToolsExp.EProjectedHullAxis
	enum EProjectedHullAxis
	{
		EProjectedHullAxis__X = 0,
		EProjectedHullAxis__Y = 1,
		EProjectedHullAxis__Z = 2,
		EProjectedHullAxis__SmallestBoxDimension = 3,
		EProjectedHullAxis__SmallestVolume = 4,
	};


	// Enum /Script/MeshModelingToolsExp.EConvexDecompositionMethod
	enum EConvexDecompositionMethod
	{
		EConvexDecompositionMethod__NavigationDriven = 0,
		EConvexDecompositionMethod__VolumetricError = 1,
	};


	// Enum /Script/MeshModelingToolsExp.ESimpleCollisionEditorToolAction
	enum ESimpleCollisionEditorToolAction
	{
		ESimpleCollisionEditorToolAction__NoAction = 0,
		ESimpleCollisionEditorToolAction__AddSphere = 1,
		ESimpleCollisionEditorToolAction__AddBox = 2,
		ESimpleCollisionEditorToolAction__AddCapsule = 3,
		ESimpleCollisionEditorToolAction__Duplicate = 4,
		ESimpleCollisionEditorToolAction__DeleteSelected = 5,
		ESimpleCollisionEditorToolAction__DeleteAll = 6,
	};


	// Enum /Script/MeshModelingToolsExp.EPlaneCutToolActions
	enum EPlaneCutToolActions
	{
		EPlaneCutToolActions__NoAction = 0,
		EPlaneCutToolActions__Cut = 1,
		EPlaneCutToolActions__FlipPlane = 2,
	};


	// Enum /Script/MeshModelingToolsExp.EOcclusionTriangleSamplingUIMode
	enum EOcclusionTriangleSamplingUIMode
	{
		EOcclusionTriangleSamplingUIMode__Vertices = 0,
		EOcclusionTriangleSamplingUIMode__VerticesAndCentroids = 1,
	};


	// Enum /Script/MeshModelingToolsExp.EOcclusionCalculationUIMode
	enum EOcclusionCalculationUIMode
	{
		EOcclusionCalculationUIMode__GeneralizedWindingNumber = 0,
		EOcclusionCalculationUIMode__RaycastOcclusionSamples = 1,
	};


	// Enum /Script/MeshModelingToolsExp.EOccludedAction
	enum EOccludedAction
	{
		EOccludedAction__Remove = 0,
		EOccludedAction__SetNewGroup = 1,
	};


	// Enum /Script/MeshModelingToolsExp.EBrushToolSizeType
	enum EBrushToolSizeType
	{
		EBrushToolSizeType__Adaptive = 0,
		EBrushToolSizeType__World = 1,
	};


	// Enum /Script/MeshModelingToolsExp.EMeshSculptFalloffType
	enum EMeshSculptFalloffType
	{
		EMeshSculptFalloffType__Smooth = 0,
		EMeshSculptFalloffType__Linear = 1,
		EMeshSculptFalloffType__Inverse = 2,
		EMeshSculptFalloffType__Round = 3,
		EMeshSculptFalloffType__BoxSmooth = 4,
		EMeshSculptFalloffType__BoxLinear = 5,
		EMeshSculptFalloffType__BoxInverse = 6,
		EMeshSculptFalloffType__BoxRound = 7,
		EMeshSculptFalloffType__LastValue = 8,
	};


	// Enum /Script/MeshModelingToolsExp.ESmoothMeshToolSmoothType
	enum ESmoothMeshToolSmoothType
	{
		ESmoothMeshToolSmoothType__Iterative = 0,
		ESmoothMeshToolSmoothType__Implicit = 1,
		ESmoothMeshToolSmoothType__Diffusion = 2,
	};


	// Enum /Script/MeshModelingToolsExp.ESplitMeshesMethod
	enum ESplitMeshesMethod
	{
		ESplitMeshesMethod__ByMeshTopology = 0,
		ESplitMeshesMethod__ByVertexOverlap = 1,
		ESplitMeshesMethod__ByMaterialID = 2,
		ESplitMeshesMethod__ByPolyGroup = 3,
	};


	// Enum /Script/MeshModelingToolsExp.ETransformMeshesTransformMode
	enum ETransformMeshesTransformMode
	{
		ETransformMeshesTransformMode__SharedGizmo = 0,
		ETransformMeshesTransformMode__SharedGizmoLocal = 1,
		ETransformMeshesTransformMode__PerObjectGizmo = 2,
		ETransformMeshesTransformMode__LastValue = 3,
	};


	// Enum /Script/MeshModelingToolsExp.ETransformMeshesSnapDragSource
	enum ETransformMeshesSnapDragSource
	{
		ETransformMeshesSnapDragSource__ClickPoint = 0,
		ETransformMeshesSnapDragSource__Pivot = 1,
		ETransformMeshesSnapDragSource__LastValue = 2,
	};


	// Enum /Script/MeshModelingToolsExp.ETransformMeshesSnapDragRotationMode
	enum ETransformMeshesSnapDragRotationMode
	{
		ETransformMeshesSnapDragRotationMode__Ignore = 0,
		ETransformMeshesSnapDragRotationMode__Align = 1,
		ETransformMeshesSnapDragRotationMode__AlignFlipped = 2,
		ETransformMeshesSnapDragRotationMode__LastValue = 3,
	};


	// Enum /Script/MeshModelingToolsExp.EVoxelBlendOperation
	enum EVoxelBlendOperation
	{
		EVoxelBlendOperation__Union = 0,
		EVoxelBlendOperation__Subtract = 1,
	};


	// Enum /Script/MeshModelingToolsExp.EWeldMeshEdgesAttributeUIMode
	enum EWeldMeshEdgesAttributeUIMode
	{
		EWeldMeshEdgesAttributeUIMode__None = 0,
		EWeldMeshEdgesAttributeUIMode__OnWeldedMeshEdgesOnly = 1,
		EWeldMeshEdgesAttributeUIMode__OnFullMesh = 2,
	};

}
