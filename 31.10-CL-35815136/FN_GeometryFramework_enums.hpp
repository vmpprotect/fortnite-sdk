#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: GeometryFramework
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Enum /Script/GeometryFramework.EDynamicMeshComponentTangentsMode
	enum EDynamicMeshComponentTangentsMode
	{
		EDynamicMeshComponentTangentsMode__NoTangents = 0,
		EDynamicMeshComponentTangentsMode__AutoCalculated = 1,
		EDynamicMeshComponentTangentsMode__ExternallyProvided = 2,
		EDynamicMeshComponentTangentsMode__Default = FF,
	};


	// Enum /Script/GeometryFramework.EDynamicMeshComponentColorOverrideMode
	enum EDynamicMeshComponentColorOverrideMode
	{
		EDynamicMeshComponentColorOverrideMode__None = 0,
		EDynamicMeshComponentColorOverrideMode__VertexColors = 1,
		EDynamicMeshComponentColorOverrideMode__Polygroups = 2,
		EDynamicMeshComponentColorOverrideMode__Constant = 3,
	};


	// Enum /Script/GeometryFramework.EDynamicMeshDrawPath
	enum EDynamicMeshDrawPath
	{
		EDynamicMeshDrawPath__DynamicDraw = 0,
		EDynamicMeshDrawPath__StaticDraw = 1,
	};


	// Enum /Script/GeometryFramework.EDynamicMeshComponentDistanceFieldMode
	enum EDynamicMeshComponentDistanceFieldMode
	{
		EDynamicMeshComponentDistanceFieldMode__NoDistanceField = 0,
		EDynamicMeshComponentDistanceFieldMode__AsyncCPUDistanceField = 1,
	};


	// Enum /Script/GeometryFramework.EDynamicMeshVertexColorTransformMode
	enum EDynamicMeshVertexColorTransformMode
	{
		EDynamicMeshVertexColorTransformMode__NoTransform = 0,
		EDynamicMeshVertexColorTransformMode__LinearToSRGB = 1,
		EDynamicMeshVertexColorTransformMode__SRGBToLinear = 2,
	};


	// Enum /Script/GeometryFramework.EDynamicMeshComponentRenderUpdateMode
	enum EDynamicMeshComponentRenderUpdateMode
	{
		EDynamicMeshComponentRenderUpdateMode__NoUpdate = 0,
		EDynamicMeshComponentRenderUpdateMode__FullUpdate = 1,
		EDynamicMeshComponentRenderUpdateMode__FastUpdate = 2,
	};


	// Enum /Script/GeometryFramework.EDynamicMeshChangeType
	enum EDynamicMeshChangeType
	{
		EDynamicMeshChangeType__GeneralEdit = 0,
		EDynamicMeshChangeType__MeshChange = 1,
		EDynamicMeshChangeType__MeshReplacementChange = 2,
		EDynamicMeshChangeType__MeshVertexChange = 3,
		EDynamicMeshChangeType__DeformationEdit = 4,
		EDynamicMeshChangeType__AttributeEdit = 5,
	};


	// Enum /Script/GeometryFramework.EDynamicMeshAttributeChangeFlags
	enum EDynamicMeshAttributeChangeFlags
	{
		EDynamicMeshAttributeChangeFlags__Unknown = 0,
		EDynamicMeshAttributeChangeFlags__MeshTopology = 1,
		EDynamicMeshAttributeChangeFlags__VertexPositions = 2,
		EDynamicMeshAttributeChangeFlags__NormalsTangents = 4,
		EDynamicMeshAttributeChangeFlags__VertexColors = 8,
		EDynamicMeshAttributeChangeFlags__UVs = 10,
		EDynamicMeshAttributeChangeFlags__TriangleGroups = 20,
	};

}
