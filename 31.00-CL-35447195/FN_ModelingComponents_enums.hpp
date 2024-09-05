#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: ModelingComponents
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/ModelingComponents.EBakeTextureResolution
	enum EBakeTextureResolution
	{
		EBakeTextureResolution__Resolution16 = 10,
		EBakeTextureResolution__Resolution32 = 20,
		EBakeTextureResolution__Resolution64 = 40,
		EBakeTextureResolution__Resolution128 = 80,
		EBakeTextureResolution__Resolution256 = 100,
		EBakeTextureResolution__Resolution512 = 200,
		EBakeTextureResolution__Resolution1024 = 400,
		EBakeTextureResolution__Resolution2048 = 800,
		EBakeTextureResolution__Resolution4096 = 1000,
		EBakeTextureResolution__Resolution8192 = 2000,
	};


	// Enum /Script/ModelingComponents.EBakeTextureBitDepth
	enum EBakeTextureBitDepth
	{
		EBakeTextureBitDepth__ChannelBits8 = 0,
		EBakeTextureBitDepth__ChannelBits16 = 1,
	};


	// Enum /Script/ModelingComponents.EBakeTextureSamplesPerPixel
	enum EBakeTextureSamplesPerPixel
	{
		EBakeTextureSamplesPerPixel__Sample1 = 1,
		EBakeTextureSamplesPerPixel__Sample4 = 4,
		EBakeTextureSamplesPerPixel__Sample16 = 10,
		EBakeTextureSamplesPerPixel__Sample64 = 40,
		EBakeTextureSamplesPerPixel__Sample256 = 100,
	};


	// Enum /Script/ModelingComponents.EGeometrySelectionElementType
	enum EGeometrySelectionElementType
	{
		EGeometrySelectionElementType__Vertex = 1,
		EGeometrySelectionElementType__Edge = 2,
		EGeometrySelectionElementType__Face = 4,
	};


	// Enum /Script/ModelingComponents.EGeometrySelectionTopologyType
	enum EGeometrySelectionTopologyType
	{
		EGeometrySelectionTopologyType__Triangle = 1,
		EGeometrySelectionTopologyType__Polygroup = 2,
	};


	// Enum /Script/ModelingComponents.EMarqueeSelectionUpdateType
	enum EMarqueeSelectionUpdateType
	{
		EMarqueeSelectionUpdateType__OnDrag = 0,
		EMarqueeSelectionUpdateType__OnTickAndRelease = 1,
		EMarqueeSelectionUpdateType__OnRelease = 2,
	};


	// Enum /Script/ModelingComponents.EBaseCreateFromSelectedTargetType
	enum EBaseCreateFromSelectedTargetType
	{
		EBaseCreateFromSelectedTargetType__NewObject = 0,
		EBaseCreateFromSelectedTargetType__FirstInputObject = 1,
		EBaseCreateFromSelectedTargetType__LastInputObject = 2,
	};


	// Enum /Script/ModelingComponents.EUVLayoutPreviewSide
	enum EUVLayoutPreviewSide
	{
		EUVLayoutPreviewSide__Left = 0,
		EUVLayoutPreviewSide__Right = 1,
	};


	// Enum /Script/ModelingComponents.ESpaceCurveControlPointTransformMode
	enum ESpaceCurveControlPointTransformMode
	{
		ESpaceCurveControlPointTransformMode__Shared = 0,
		ESpaceCurveControlPointTransformMode__PerVertex = 1,
	};


	// Enum /Script/ModelingComponents.ESpaceCurveControlPointOriginMode
	enum ESpaceCurveControlPointOriginMode
	{
		ESpaceCurveControlPointOriginMode__Shared = 0,
		ESpaceCurveControlPointOriginMode__First = 1,
		ESpaceCurveControlPointOriginMode__Last = 2,
	};


	// Enum /Script/ModelingComponents.ESpaceCurveControlPointFalloffType
	enum ESpaceCurveControlPointFalloffType
	{
		ESpaceCurveControlPointFalloffType__Linear = 0,
		ESpaceCurveControlPointFalloffType__Smooth = 1,
	};


	// Enum /Script/ModelingComponents.EModelingComponentsPlaneVisualizationMode
	enum EModelingComponentsPlaneVisualizationMode
	{
		EModelingComponentsPlaneVisualizationMode__SimpleGrid = 0,
		EModelingComponentsPlaneVisualizationMode__HierarchicalGrid = 1,
		EModelingComponentsPlaneVisualizationMode__FixedScreenAreaGrid = 2,
	};


	// Enum /Script/ModelingComponents.ECreateModelingObjectResult
	enum ECreateModelingObjectResult
	{
		ECreateModelingObjectResult__Ok = 0,
		ECreateModelingObjectResult__Cancelled = 1,
		ECreateModelingObjectResult__Failed_Unknown = 2,
		ECreateModelingObjectResult__Failed_NoAPIFound = 3,
		ECreateModelingObjectResult__Failed_InvalidWorld = 4,
		ECreateModelingObjectResult__Failed_InvalidMesh = 5,
		ECreateModelingObjectResult__Failed_InvalidTexture = 6,
		ECreateModelingObjectResult__Failed_AssetCreationFailed = 7,
		ECreateModelingObjectResult__Failed_ActorCreationFailed = 8,
		ECreateModelingObjectResult__Failed_InvalidMaterial = 9,
	};


	// Enum /Script/ModelingComponents.ECreateMeshObjectSourceMeshType
	enum ECreateMeshObjectSourceMeshType
	{
		ECreateMeshObjectSourceMeshType__MeshDescription = 0,
		ECreateMeshObjectSourceMeshType__DynamicMesh = 1,
	};


	// Enum /Script/ModelingComponents.ECreateObjectTypeHint
	enum ECreateObjectTypeHint
	{
		ECreateObjectTypeHint__Undefined = 0,
		ECreateObjectTypeHint__StaticMesh = 1,
		ECreateObjectTypeHint__Volume = 2,
		ECreateObjectTypeHint__DynamicMeshActor = 3,
	};


	// Enum /Script/ModelingComponents.EHandleSourcesMethod
	enum EHandleSourcesMethod
	{
		EHandleSourcesMethod__DeleteSources = 0,
		EHandleSourcesMethod__HideSources = 1,
		EHandleSourcesMethod__KeepSources = 2,
		EHandleSourcesMethod__KeepFirstSource = 3,
		EHandleSourcesMethod__KeepLastSource = 4,
	};


	// Enum /Script/ModelingComponents.EMultiTransformerMode
	enum EMultiTransformerMode
	{
		EMultiTransformerMode__DefaultGizmo = 1,
		EMultiTransformerMode__QuickAxisTranslation = 2,
	};

}
