#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: MeshModelingToolsExp
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct MeshModelingToolsExp.BakeMultiMeshDetailProperties
	// Size: 0x18 (0x18 - 0x0)
	struct FBakeMultiMeshDetailProperties	
	{
	public:
		UStaticMesh SourceMesh; // 0x0(0x8)
		UTexture2D SourceTexture; // 0x8(0x8)
		int32_t SourceTextureUVLayer; // 0x10(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct MeshModelingToolsExp.PerlinLayerProperties
	// Size: 0x8 (0x8 - 0x0)
	struct FPerlinLayerProperties	
	{
	public:
		float Frequency; // 0x0(0x4)
		float Intensity; // 0x4(0x4)
	};


	// Struct MeshModelingToolsExp.EditPivotTarget
	// Size: 0x10 (0x10 - 0x0)
	struct FEditPivotTarget	
	{
	public:
		UTransformProxy TransformProxy; // 0x0(0x8)
		UCombinedTransformGizmo TransformGizmo; // 0x8(0x8)
	};


	// Struct MeshModelingToolsExp.PhysicsSphereData
	// Size: 0xA0 (0xA0 - 0x0)
	struct FPhysicsSphereData	
	{
	public:
		float Radius; // 0x0(0x4)
		unsigned char UnknownData02_6[0xC]; // 0x4(0xC) UNKNOWN PROPERTY
		FTransform Transform; // 0x10(0x60)
		FKShapeElem Element; // 0x70(0x28)
		unsigned char UnknownData03_7[0x8]; // 0x98(0x8) UNKNOWN PROPERTY
	};


	// Struct MeshModelingToolsExp.PhysicsBoxData
	// Size: 0xB0 (0xB0 - 0x0)
	struct FPhysicsBoxData	
	{
	public:
		FVector Dimensions; // 0x0(0x18)
		unsigned char UnknownData02_6[0x8]; // 0x18(0x8) UNKNOWN PROPERTY
		FTransform Transform; // 0x20(0x60)
		FKShapeElem Element; // 0x80(0x28)
		unsigned char UnknownData03_7[0x8]; // 0xA8(0x8) UNKNOWN PROPERTY
	};


	// Struct MeshModelingToolsExp.PhysicsCapsuleData
	// Size: 0xA0 (0xA0 - 0x0)
	struct FPhysicsCapsuleData	
	{
	public:
		float Radius; // 0x0(0x4)
		float Length; // 0x4(0x4)
		unsigned char UnknownData02_6[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FTransform Transform; // 0x10(0x60)
		FKShapeElem Element; // 0x70(0x28)
		unsigned char UnknownData03_7[0x8]; // 0x98(0x8) UNKNOWN PROPERTY
	};


	// Struct MeshModelingToolsExp.PhysicsConvexData
	// Size: 0x30 (0x30 - 0x0)
	struct FPhysicsConvexData	
	{
	public:
		int32_t NumVertices; // 0x0(0x4)
		int32_t NumFaces; // 0x4(0x4)
		FKShapeElem Element; // 0x8(0x28)
	};


	// Struct MeshModelingToolsExp.PhysicsLevelSetData
	// Size: 0x28 (0x28 - 0x0)
	struct FPhysicsLevelSetData	
	{
	public:
		FKShapeElem Element; // 0x0(0x28)
	};


	// Struct MeshModelingToolsExp.BrushToolRadius
	// Size: 0x14 (0x14 - 0x0)
	struct FBrushToolRadius	
	{
	public:
		EBrushToolSizeType SizeType; // 0x0(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float AdaptiveSize; // 0x4(0x4)
		float WorldRadius; // 0x8(0x4)
		unsigned char UnknownData03_7[0x8]; // 0xC(0x8) UNKNOWN PROPERTY
	};


	// Struct MeshModelingToolsExp.TransformMeshesTarget
	// Size: 0x10 (0x10 - 0x0)
	struct FTransformMeshesTarget	
	{
	public:
		UTransformProxy TransformProxy; // 0x0(0x8)
		UCombinedTransformGizmo TransformGizmo; // 0x8(0x8)
	};

}
