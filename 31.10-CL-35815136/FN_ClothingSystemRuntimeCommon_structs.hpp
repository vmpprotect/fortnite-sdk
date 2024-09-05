#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: ClothingSystemRuntimeCommon
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct ClothingSystemRuntimeCommon.ClothConstraintSetup_Legacy
	// Size: 0x10 (0x10 - 0x0)
	struct FClothConstraintSetup_Legacy	
	{
	public:
		float Stiffness; // 0x0(0x4)
		float StiffnessMultiplier; // 0x4(0x4)
		float StretchLimit; // 0x8(0x4)
		float CompressionLimit; // 0xC(0x4)
	};


	// Struct ClothingSystemRuntimeCommon.ClothConfig_Legacy
	// Size: 0x130 (0x130 - 0x0)
	struct FClothConfig_Legacy	
	{
	public:
		EClothingWindMethod_Legacy WindMethod; // 0x0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		FClothConstraintSetup_Legacy VerticalConstraintConfig; // 0x4(0x10)
		FClothConstraintSetup_Legacy HorizontalConstraintConfig; // 0x14(0x10)
		FClothConstraintSetup_Legacy BendConstraintConfig; // 0x24(0x10)
		FClothConstraintSetup_Legacy ShearConstraintConfig; // 0x34(0x10)
		float SelfCollisionRadius; // 0x44(0x4)
		float SelfCollisionStiffness; // 0x48(0x4)
		float SelfCollisionCullScale; // 0x4C(0x4)
		FVector Damping; // 0x50(0x18)
		float Friction; // 0x68(0x4)
		float WindDragCoefficient; // 0x6C(0x4)
		float WindLiftCoefficient; // 0x70(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x74(0x4) UNKNOWN PROPERTY
		FVector LinearDrag; // 0x78(0x18)
		FVector AngularDrag; // 0x90(0x18)
		FVector LinearInertiaScale; // 0xA8(0x18)
		FVector AngularInertiaScale; // 0xC0(0x18)
		FVector CentrifugalInertiaScale; // 0xD8(0x18)
		float SolverFrequency; // 0xF0(0x4)
		float StiffnessFrequency; // 0xF4(0x4)
		float GravityScale; // 0xF8(0x4)
		unsigned char UnknownData02_6[0x4]; // 0xFC(0x4) UNKNOWN PROPERTY
		FVector GravityOverride; // 0x100(0x18)
		bool bUseGravityOverride; // 0x118(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x119(0x3) UNKNOWN PROPERTY
		float TetherStiffness; // 0x11C(0x4)
		float TetherLimit; // 0x120(0x4)
		float CollisionThickness; // 0x124(0x4)
		float AnimDriveSpringStiffness; // 0x128(0x4)
		float AnimDriveDamperStiffness; // 0x12C(0x4)
	};


	// Struct ClothingSystemRuntimeCommon.PointWeightMap
	// Size: 0x10 (0x10 - 0x0)
	struct FPointWeightMap	
	{
	public:
		TArray<float> Values; // 0x0(0x10)
	};


	// Struct ClothingSystemRuntimeCommon.ClothLODDataCommon
	// Size: 0x158 (0x158 - 0x0)
	struct FClothLODDataCommon	
	{
	public:
		FClothPhysicalMeshData PhysicalMeshData; // 0x0(0x128)
		bool bUseMultipleInfluences; // 0x128(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x129(0x3) UNKNOWN PROPERTY
		float SkinningKernelRadius; // 0x12C(0x4)
		bool bSmoothTransition; // 0x130(0x1)
		unsigned char UnknownData01_7[0x27]; // 0x131(0x27) UNKNOWN PROPERTY
	};


	// Struct ClothingSystemRuntimeCommon.ClothPhysicalMeshData
	// Size: 0x128 (0x128 - 0x0)
	struct FClothPhysicalMeshData	
	{
	public:
		TArray<FVector3f> Vertices; // 0x0(0x10)
		TArray<FVector3f> Normals; // 0x10(0x10)
		TArray<uint32_t> Indices; // 0x20(0x10)
		TMap<uint32_t, FPointWeightMap> WeightMaps; // 0x30(0x50)
		TArray<float> InverseMasses; // 0x80(0x10)
		TArray<FClothVertBoneData> BoneData; // 0x90(0x10)
		TSet<int32_t> SelfCollisionVertexSet; // 0xA0(0x50)
		FClothTetherData EuclideanTethers; // 0xF0(0x10)
		FClothTetherData GeodesicTethers; // 0x100(0x10)
		int32_t MaxBoneWeights; // 0x110(0x4)
		int32_t NumFixedVerts; // 0x114(0x4)
		TArray<uint32_t> SelfCollisionIndices; // 0x118(0x10)
	};


	// Struct ClothingSystemRuntimeCommon.ClothTetherData
	// Size: 0x10 (0x10 - 0x0)
	struct FClothTetherData	
	{
	public:
		unsigned char UnknownData00_2[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
	};


	// Struct ClothingSystemRuntimeCommon.ClothParameterMask_Legacy
	// Size: 0x28 (0x28 - 0x0)
	struct FClothParameterMask_Legacy	
	{
	public:
		FName MaskName; // 0x0(0x4)
		EWeightMapTargetCommon CurrentTarget; // 0x4(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
		float MaxValue; // 0x8(0x4)
		float MinValue; // 0xC(0x4)
		TArray<float> Values; // 0x10(0x10)
		bool bEnabled; // 0x20(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x21(0x7) UNKNOWN PROPERTY
	};

}
