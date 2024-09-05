#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: RigLogicModule
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct RigLogicModule.CoordinateSystem
	// Size: 0x3 (0x3 - 0x0)
	struct FCoordinateSystem	
	{
	public:
		EDirection XAxis; // 0x0(0x1)
		EDirection YAxis; // 0x1(0x1)
		EDirection ZAxis; // 0x2(0x1)
	};


	// Struct RigLogicModule.MeshBlendShapeChannelMapping
	// Size: 0x8 (0x8 - 0x0)
	struct FMeshBlendShapeChannelMapping	
	{
	public:
		int32_t MeshIndex; // 0x0(0x4)
		int32_t BlendShapeChannelIndex; // 0x4(0x4)
	};


	// Struct RigLogicModule.TextureCoordinate
	// Size: 0x8 (0x8 - 0x0)
	struct FTextureCoordinate	
	{
	public:
		float U; // 0x0(0x4)
		float V; // 0x4(0x4)
	};


	// Struct RigLogicModule.VertexLayout
	// Size: 0xC (0xC - 0x0)
	struct FVertexLayout	
	{
	public:
		int32_t Position; // 0x0(0x4)
		int32_t TextureCoordinate; // 0x4(0x4)
		int32_t Normal; // 0x8(0x4)
	};


	// Struct RigLogicModule.AnimNode_RigLogic
	// Inherited from FAnimNode_Base
	// Size: 0x50 (0x60 - 0x10)
	struct FAnimNode_RigLogic : public FAnimNode_Base	
	{
	public:
		FPoseLink AnimSequence; // 0x10(0x10)
		int32_t LODThreshold; // 0x20(0x4)
		unsigned char UnknownData00_7[0x3C]; // 0x24(0x3C) UNKNOWN PROPERTY
	};


	// Struct RigLogicModule.RigUnit_RigLogic_IntArray
	// Size: 0x10 (0x10 - 0x0)
	struct FRigUnit_RigLogic_IntArray	
	{
	public:
		TArray<int32_t> Values; // 0x0(0x10)
	};


	// Struct RigLogicModule.RigUnit_RigLogic_Data
	// Size: 0x98 (0x98 - 0x0)
	struct FRigUnit_RigLogic_Data	
	{
	public:
		TWeakObjectPtr<USkeletalMeshComponent*> SkelMeshComponent; // 0x0(0x8)
		unsigned char UnknownData00_6[0x18]; // 0x8(0x18) UNKNOWN PROPERTY
		TArray<int32_t> InputCurveIndices; // 0x20(0x10)
		TArray<int32_t> NeuralNetMaskCurveIndices; // 0x30(0x10)
		TArray<int32_t> HierarchyBoneIndices; // 0x40(0x10)
		TArray<FRigUnit_RigLogic_IntArray> MorphTargetCurveIndices; // 0x50(0x10)
		TArray<FRigUnit_RigLogic_IntArray> BlendShapeIndices; // 0x60(0x10)
		TArray<FRigUnit_RigLogic_IntArray> CurveElementIndicesForAnimMaps; // 0x70(0x10)
		TArray<FRigUnit_RigLogic_IntArray> RigLogicIndicesForAnimMaps; // 0x80(0x10)
		uint32_t CurrentLOD; // 0x90(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x94(0x4) UNKNOWN PROPERTY
	};


	// Struct RigLogicModule.RigUnit_RigLogic
	// Inherited from FRigUnitMutable -> FRigUnit -> FRigVMStruct
	// Size: 0xA0 (0x260 - 0x1C0)
	struct FRigUnit_RigLogic : public FRigUnitMutable	
	{
	public:
		FRigUnit_RigLogic_Data Data; // 0x1C0(0x98)
		bool bIsInitialized; // 0x258(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x259(0x7) UNKNOWN PROPERTY
	};

}
