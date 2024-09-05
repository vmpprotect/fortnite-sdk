#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: MeshModelingTools
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Enum /Script/MeshModelingTools.EPolyEditExtrudeEdgeDirectionMode
	enum EPolyEditExtrudeEdgeDirectionMode
	{
		EPolyEditExtrudeEdgeDirectionMode__LocalExtrudeFrames = 0,
		EPolyEditExtrudeEdgeDirectionMode__SingleDirection = 1,
	};


	// Enum /Script/MeshModelingTools.EPolyEditExtrudeEdgeDistanceMode
	enum EPolyEditExtrudeEdgeDistanceMode
	{
		EPolyEditExtrudeEdgeDistanceMode__Fixed = 0,
		EPolyEditExtrudeEdgeDistanceMode__Gizmo = 1,
	};


	// Enum /Script/MeshModelingTools.EMakeMeshPlacementType
	enum EMakeMeshPlacementType
	{
		EMakeMeshPlacementType__GroundPlane = 0,
		EMakeMeshPlacementType__OnScene = 1,
		EMakeMeshPlacementType__AtOrigin = 2,
	};


	// Enum /Script/MeshModelingTools.EMakeMeshPivotLocation
	enum EMakeMeshPivotLocation
	{
		EMakeMeshPivotLocation__Base = 0,
		EMakeMeshPivotLocation__Centered = 1,
		EMakeMeshPivotLocation__Top = 2,
	};


	// Enum /Script/MeshModelingTools.EMakeMeshPolygroupMode
	enum EMakeMeshPolygroupMode
	{
		EMakeMeshPolygroupMode__PerShape = 0,
		EMakeMeshPolygroupMode__PerFace = 1,
		EMakeMeshPolygroupMode__PerQuad = 2,
	};


	// Enum /Script/MeshModelingTools.EProceduralRectType
	enum EProceduralRectType
	{
		EProceduralRectType__Rectangle = 0,
		EProceduralRectType__RoundedRectangle = 1,
	};


	// Enum /Script/MeshModelingTools.EProceduralDiscType
	enum EProceduralDiscType
	{
		EProceduralDiscType__Disc = 0,
		EProceduralDiscType__PuncturedDisc = 1,
	};


	// Enum /Script/MeshModelingTools.EProceduralSphereType
	enum EProceduralSphereType
	{
		EProceduralSphereType__LatLong = 0,
		EProceduralSphereType__Box = 1,
	};


	// Enum /Script/MeshModelingTools.EProceduralStairsType
	enum EProceduralStairsType
	{
		EProceduralStairsType__Linear = 0,
		EProceduralStairsType__Floating = 1,
		EProceduralStairsType__Curved = 2,
		EProceduralStairsType__Spiral = 3,
	};


	// Enum /Script/MeshModelingTools.EDrawPolygonDrawMode
	enum EDrawPolygonDrawMode
	{
		EDrawPolygonDrawMode__Freehand = 0,
		EDrawPolygonDrawMode__Circle = 1,
		EDrawPolygonDrawMode__Square = 2,
		EDrawPolygonDrawMode__Rectangle = 3,
		EDrawPolygonDrawMode__RoundedRectangle = 4,
		EDrawPolygonDrawMode__Ring = 5,
	};


	// Enum /Script/MeshModelingTools.EDrawPolygonExtrudeMode
	enum EDrawPolygonExtrudeMode
	{
		EDrawPolygonExtrudeMode__Flat = 0,
		EDrawPolygonExtrudeMode__Fixed = 1,
		EDrawPolygonExtrudeMode__Interactive = 2,
	};


	// Enum /Script/MeshModelingTools.ELocalFrameMode
	enum ELocalFrameMode
	{
		ELocalFrameMode__FromObject = 0,
		ELocalFrameMode__FromGeometry = 1,
	};


	// Enum /Script/MeshModelingTools.EEditMeshPolygonsToolActions
	enum EEditMeshPolygonsToolActions
	{
		EEditMeshPolygonsToolActions__NoAction = 0,
		EEditMeshPolygonsToolActions__AcceptCurrent = 1,
		EEditMeshPolygonsToolActions__CancelCurrent = 2,
		EEditMeshPolygonsToolActions__Extrude = 3,
		EEditMeshPolygonsToolActions__PushPull = 4,
		EEditMeshPolygonsToolActions__Offset = 5,
		EEditMeshPolygonsToolActions__Inset = 6,
		EEditMeshPolygonsToolActions__Outset = 7,
		EEditMeshPolygonsToolActions__BevelFaces = 8,
		EEditMeshPolygonsToolActions__InsertEdge = 9,
		EEditMeshPolygonsToolActions__InsertEdgeLoop = A,
		EEditMeshPolygonsToolActions__Complete = B,
		EEditMeshPolygonsToolActions__PlaneCut = C,
		EEditMeshPolygonsToolActions__Merge = D,
		EEditMeshPolygonsToolActions__Delete = E,
		EEditMeshPolygonsToolActions__CutFaces = F,
		EEditMeshPolygonsToolActions__RecalculateNormals = 10,
		EEditMeshPolygonsToolActions__FlipNormals = 11,
		EEditMeshPolygonsToolActions__Retriangulate = 12,
		EEditMeshPolygonsToolActions__Decompose = 13,
		EEditMeshPolygonsToolActions__Disconnect = 14,
		EEditMeshPolygonsToolActions__Duplicate = 15,
		EEditMeshPolygonsToolActions__CollapseEdge = 16,
		EEditMeshPolygonsToolActions__WeldEdges = 17,
		EEditMeshPolygonsToolActions__StraightenEdge = 18,
		EEditMeshPolygonsToolActions__FillHole = 19,
		EEditMeshPolygonsToolActions__BridgeEdges = 1A,
		EEditMeshPolygonsToolActions__ExtrudeEdges = 1B,
		EEditMeshPolygonsToolActions__BevelEdges = 1C,
		EEditMeshPolygonsToolActions__SimplifyAlongEdges = 1D,
		EEditMeshPolygonsToolActions__PlanarProjectionUV = 1E,
		EEditMeshPolygonsToolActions__SimplifyByGroups = 1F,
		EEditMeshPolygonsToolActions__RegenerateExtraCorners = 20,
		EEditMeshPolygonsToolActions__PokeSingleFace = 21,
		EEditMeshPolygonsToolActions__SplitSingleEdge = 22,
		EEditMeshPolygonsToolActions__FlipSingleEdge = 23,
		EEditMeshPolygonsToolActions__CollapseSingleEdge = 24,
		EEditMeshPolygonsToolActions__BevelAuto = 25,
	};


	// Enum /Script/MeshModelingTools.EEditMeshPolygonsToolSelectionMode
	enum EEditMeshPolygonsToolSelectionMode
	{
		EEditMeshPolygonsToolSelectionMode__Faces = 0,
		EEditMeshPolygonsToolSelectionMode__Edges = 1,
		EEditMeshPolygonsToolSelectionMode__Vertices = 2,
		EEditMeshPolygonsToolSelectionMode__Loops = 3,
		EEditMeshPolygonsToolSelectionMode__Rings = 4,
		EEditMeshPolygonsToolSelectionMode__FacesEdgesVertices = 5,
	};


	// Enum /Script/MeshModelingTools.ESetMeshMaterialMode
	enum ESetMeshMaterialMode
	{
		ESetMeshMaterialMode__Original = 0,
		ESetMeshMaterialMode__Checkerboard = 1,
		ESetMeshMaterialMode__Override = 2,
	};


	// Enum /Script/MeshModelingTools.EMeshEditingMaterialModes
	enum EMeshEditingMaterialModes
	{
		EMeshEditingMaterialModes__ExistingMaterial = 0,
		EMeshEditingMaterialModes__Diffuse = 1,
		EMeshEditingMaterialModes__Grey = 2,
		EMeshEditingMaterialModes__Soft = 3,
		EMeshEditingMaterialModes__Transparent = 4,
		EMeshEditingMaterialModes__TangentNormal = 5,
		EMeshEditingMaterialModes__VertexColor = 6,
		EMeshEditingMaterialModes__CustomImage = 7,
		EMeshEditingMaterialModes__Custom = 8,
	};


	// Enum /Script/MeshModelingTools.ERevolvePropertiesCapFillMode
	enum ERevolvePropertiesCapFillMode
	{
		ERevolvePropertiesCapFillMode__None = 0,
		ERevolvePropertiesCapFillMode__CenterFan = 1,
		ERevolvePropertiesCapFillMode__Delaunay = 2,
		ERevolvePropertiesCapFillMode__EarClipping = 3,
	};


	// Enum /Script/MeshModelingTools.ERevolvePropertiesPolygroupMode
	enum ERevolvePropertiesPolygroupMode
	{
		ERevolvePropertiesPolygroupMode__PerShape = 0,
		ERevolvePropertiesPolygroupMode__PerFace = 1,
		ERevolvePropertiesPolygroupMode__PerRevolveStep = 2,
		ERevolvePropertiesPolygroupMode__PerPathSegment = 3,
	};


	// Enum /Script/MeshModelingTools.ERevolvePropertiesQuadSplit
	enum ERevolvePropertiesQuadSplit
	{
		ERevolvePropertiesQuadSplit__Uniform = 0,
		ERevolvePropertiesQuadSplit__Compact = 1,
	};


	// Enum /Script/MeshModelingTools.EPolyEditCutPlaneOrientation
	enum EPolyEditCutPlaneOrientation
	{
		EPolyEditCutPlaneOrientation__FaceNormals = 0,
		EPolyEditCutPlaneOrientation__ViewDirection = 1,
	};


	// Enum /Script/MeshModelingTools.EPolyEditExtrudeDirection
	enum EPolyEditExtrudeDirection
	{
		EPolyEditExtrudeDirection__SelectionNormal = 0,
		EPolyEditExtrudeDirection__WorldX = 1,
		EPolyEditExtrudeDirection__WorldY = 2,
		EPolyEditExtrudeDirection__WorldZ = 3,
		EPolyEditExtrudeDirection__LocalX = 4,
		EPolyEditExtrudeDirection__LocalY = 5,
		EPolyEditExtrudeDirection__LocalZ = 6,
	};


	// Enum /Script/MeshModelingTools.EPolyEditExtrudeDistanceMode
	enum EPolyEditExtrudeDistanceMode
	{
		EPolyEditExtrudeDistanceMode__ClickInViewport = 0,
		EPolyEditExtrudeDistanceMode__Fixed = 1,
	};


	// Enum /Script/MeshModelingTools.EPolyEditExtrudeModeOptions
	enum EPolyEditExtrudeModeOptions
	{
		EPolyEditExtrudeModeOptions__SingleDirection = 3,
		EPolyEditExtrudeModeOptions__SelectedTriangleNormals = 0,
		EPolyEditExtrudeModeOptions__SelectedTriangleNormalsEven = 1,
	};


	// Enum /Script/MeshModelingTools.EPolyEditOffsetModeOptions
	enum EPolyEditOffsetModeOptions
	{
		EPolyEditOffsetModeOptions__VertexNormals = 2,
		EPolyEditOffsetModeOptions__SelectedTriangleNormals = 0,
		EPolyEditOffsetModeOptions__SelectedTriangleNormalsEven = 1,
	};


	// Enum /Script/MeshModelingTools.EPolyEditPushPullModeOptions
	enum EPolyEditPushPullModeOptions
	{
		EPolyEditPushPullModeOptions__SelectedTriangleNormals = 0,
		EPolyEditPushPullModeOptions__SelectedTriangleNormalsEven = 1,
		EPolyEditPushPullModeOptions__SingleDirection = 3,
		EPolyEditPushPullModeOptions__VertexNormals = 2,
	};


	// Enum /Script/MeshModelingTools.EGroupEdgeInsertionMode
	enum EGroupEdgeInsertionMode
	{
		EGroupEdgeInsertionMode__Retriangulate = 0,
		EGroupEdgeInsertionMode__PlaneCut = 1,
	};


	// Enum /Script/MeshModelingTools.EEdgeLoopPositioningMode
	enum EEdgeLoopPositioningMode
	{
		EEdgeLoopPositioningMode__Even = 0,
		EEdgeLoopPositioningMode__ProportionOffset = 1,
		EEdgeLoopPositioningMode__DistanceOffset = 2,
	};


	// Enum /Script/MeshModelingTools.EEdgeLoopInsertionMode
	enum EEdgeLoopInsertionMode
	{
		EEdgeLoopInsertionMode__Retriangulate = 0,
		EEdgeLoopInsertionMode__PlaneCut = 1,
	};


	// Enum /Script/MeshModelingTools.EUVProjectionToolActions
	enum EUVProjectionToolActions
	{
		EUVProjectionToolActions__NoAction = 0,
		EUVProjectionToolActions__AutoFit = 1,
		EUVProjectionToolActions__AutoFitAlign = 2,
		EUVProjectionToolActions__Reset = 3,
	};


	// Enum /Script/MeshModelingTools.EUVProjectionToolInitializationMode
	enum EUVProjectionToolInitializationMode
	{
		EUVProjectionToolInitializationMode__Default = 0,
		EUVProjectionToolInitializationMode__UsePrevious = 1,
		EUVProjectionToolInitializationMode__AutoFit = 2,
		EUVProjectionToolInitializationMode__AutoFitAlign = 3,
	};

}
