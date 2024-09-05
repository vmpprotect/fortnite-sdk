#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: ClothingSystemRuntimeInterface
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct ClothingSystemRuntimeInterface.ClothCollisionPrim_Sphere
	// Size: 0x20 (0x20 - 0x0)
	struct FClothCollisionPrim_Sphere	
	{
	public:
		int32_t BoneIndex; // 0x0(0x4)
		float Radius; // 0x4(0x4)
		FVector LocalPosition; // 0x8(0x18)
	};


	// Struct ClothingSystemRuntimeInterface.ClothCollisionPrim_SphereConnection
	// Size: 0x8 (0x8 - 0x0)
	struct FClothCollisionPrim_SphereConnection	
	{
	public:
		int32_t SphereIndices; // 0x0(0x8)
	};


	// Struct ClothingSystemRuntimeInterface.ClothCollisionPrim_ConvexFace
	// Size: 0x30 (0x30 - 0x0)
	struct FClothCollisionPrim_ConvexFace	
	{
	public:
		FPlane Plane; // 0x0(0x20)
		TArray Indices; // 0x20(0x10)
	};


	// Struct ClothingSystemRuntimeInterface.ClothCollisionPrim_Convex
	// Size: 0x28 (0x28 - 0x0)
	struct FClothCollisionPrim_Convex	
	{
	public:
		TArray Faces; // 0x0(0x10)
		TArray SurfacePoints; // 0x10(0x10)
		int32_t BoneIndex; // 0x20(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
	};


	// Struct ClothingSystemRuntimeInterface.ClothCollisionPrim_Box
	// Size: 0x60 (0x60 - 0x0)
	struct FClothCollisionPrim_Box	
	{
	public:
		FVector LocalPosition; // 0x0(0x18)
		unsigned char UnknownData02_6[0x8]; // 0x18(0x8) UNKNOWN PROPERTY
		FQuat LocalRotation; // 0x20(0x20)
		FVector HalfExtents; // 0x40(0x18)
		int32_t BoneIndex; // 0x58(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x5C(0x4) UNKNOWN PROPERTY
	};


	// Struct ClothingSystemRuntimeInterface.ClothVertBoneData
	// Size: 0x4C (0x4C - 0x0)
	struct FClothVertBoneData	
	{
	public:
		int32_t NumInfluences; // 0x0(0x4)
		uint16_t BoneIndices; // 0x4(0x18)
		float BoneWeights; // 0x1C(0x30)
	};


	// Struct ClothingSystemRuntimeInterface.ClothCollisionData
	// Size: 0x40 (0x40 - 0x0)
	struct FClothCollisionData	
	{
	public:
		TArray Spheres; // 0x0(0x10)
		TArray SphereConnections; // 0x10(0x10)
		TArray Convexes; // 0x20(0x10)
		TArray Boxes; // 0x30(0x10)
	};

}
