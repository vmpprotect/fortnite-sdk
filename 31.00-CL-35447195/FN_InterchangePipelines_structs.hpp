#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: InterchangePipelines
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct InterchangePipelines.InterchangeLodSceneNodeContainer
	// Size: 0x10 (0x10 - 0x0)
	struct FInterchangeLodSceneNodeContainer	
	{
	public:
		TArray SceneNodes; // 0x0(0x10)
	};


	// Struct InterchangePipelines.InterchangeMeshInstance
	// Size: 0x80 (0x80 - 0x0)
	struct FInterchangeMeshInstance	
	{
	public:
		FString MeshInstanceUid; // 0x0(0x10)
		UInterchangeSceneNode LodGroupNode; // 0x10(0x8)
		bool bReferenceSkinnedMesh; // 0x18(0x1)
		bool bReferenceMorphTarget; // 0x19(0x1)
		bool bHasMorphTargets; // 0x1A(0x1)
		unsigned char UnknownData01_6[0x5]; // 0x1B(0x5) UNKNOWN PROPERTY
		TMap SceneNodePerLodIndex; // 0x20(0x50)
		TArray ReferencingMeshGeometryUids; // 0x70(0x10)
	};


	// Struct InterchangePipelines.InterchangeMeshGeometry
	// Size: 0x38 (0x38 - 0x0)
	struct FInterchangeMeshGeometry	
	{
	public:
		FString MeshUid; // 0x0(0x10)
		UInterchangeMeshNode MeshNode; // 0x10(0x8)
		TArray ReferencingMeshInstanceUids; // 0x18(0x10)
		TArray AttachedSocketUids; // 0x28(0x10)
	};


	// Struct InterchangePipelines.InterchangePipelineMeshesUtilitiesContext
	// Size: 0x6 (0x6 - 0x0)
	struct FInterchangePipelineMeshesUtilitiesContext	
	{
	public:
		bool bConvertStaticMeshToSkeletalMesh; // 0x0(0x1)
		bool bConvertSkeletalMeshToStaticMesh; // 0x1(0x1)
		bool bConvertStaticsWithMorphTargetsToSkeletals; // 0x2(0x1)
		bool bImportMeshesInBoneHierarchy; // 0x3(0x1)
		bool bQueryGeometryOnlyIfNoInstance; // 0x4(0x1)
		bool bIgnoreStaticMeshes; // 0x5(0x1)
	};

}
