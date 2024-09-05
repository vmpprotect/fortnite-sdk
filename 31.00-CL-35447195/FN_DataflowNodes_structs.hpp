#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: DataflowNodes
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct DataflowNodes.DataflowCollectionAddScalarVertexPropertyNode
	// Inherited from FDataflowNode
	// Size: 0xF0 (0x288 - 0x198)
	struct FDataflowCollectionAddScalarVertexPropertyNode : public FDataflowNode	
	{
	public:
		FManagedArrayCollection Collection; // 0x198(0xB0)
		FString Name; // 0x248(0x10)
		FCollectionAttributeKey AttributeKey; // 0x258(0x20)
		TArray VertexWeights; // 0x278(0x10)
	};


	// Struct DataflowNodes.MakeAttributeKeyDataflowNode
	// Inherited from FDataflowNode
	// Size: 0x40 (0x1D8 - 0x198)
	struct FMakeAttributeKeyDataflowNode : public FDataflowNode	
	{
	public:
		FString GroupIn; // 0x198(0x10)
		FString AttributeIn; // 0x1A8(0x10)
		FCollectionAttributeKey AttributeKeyOut; // 0x1B8(0x20)
	};


	// Struct DataflowNodes.BreakAttributeKeyDataflowNode
	// Inherited from FDataflowNode
	// Size: 0x40 (0x1D8 - 0x198)
	struct FBreakAttributeKeyDataflowNode : public FDataflowNode	
	{
	public:
		FCollectionAttributeKey AttributeKeyIn; // 0x198(0x20)
		FString AttributeOut; // 0x1B8(0x10)
		FString GroupOut; // 0x1C8(0x10)
	};


	// Struct DataflowNodes.FloatOverrideDataflowNode
	// Inherited from FDataflowNode
	// Size: 0x10 (0x1A8 - 0x198)
	struct FFloatOverrideDataflowNode : public FDataflowNode	
	{
	public:
		FName PropertyName; // 0x198(0x4)
		FName KeyName; // 0x19C(0x4)
		float ValueOut; // 0x1A0(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x1A4(0x4) UNKNOWN PROPERTY
	};


	// Struct DataflowNodes.SelectionSetDataflowNode
	// Inherited from FDataflowNode
	// Size: 0x20 (0x1B8 - 0x198)
	struct FSelectionSetDataflowNode : public FDataflowNode	
	{
	public:
		FString Indices; // 0x198(0x10)
		TArray IndicesOut; // 0x1A8(0x10)
	};


	// Struct DataflowNodes.GetSkeletalMeshDataflowNode
	// Inherited from FDataflowNode
	// Size: 0x10 (0x1A8 - 0x198)
	struct FGetSkeletalMeshDataflowNode : public FDataflowNode	
	{
	public:
		USkeletalMesh SkeletalMesh; // 0x198(0x8)
		FName PropertyName; // 0x1A0(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x1A4(0x4) UNKNOWN PROPERTY
	};


	// Struct DataflowNodes.GetSkeletonDataflowNode
	// Inherited from FDataflowNode
	// Size: 0x10 (0x1A8 - 0x198)
	struct FGetSkeletonDataflowNode : public FDataflowNode	
	{
	public:
		USkeleton Skeleton; // 0x198(0x8)
		FName PropertyName; // 0x1A0(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x1A4(0x4) UNKNOWN PROPERTY
	};


	// Struct DataflowNodes.SkeletalMeshBoneDataflowNode
	// Inherited from FDataflowNode
	// Size: 0x18 (0x1B0 - 0x198)
	struct FSkeletalMeshBoneDataflowNode : public FDataflowNode	
	{
	public:
		FName BoneName; // 0x198(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x19C(0x4) UNKNOWN PROPERTY
		USkeletalMesh SkeletalMesh; // 0x1A0(0x8)
		int32_t BoneIndexOut; // 0x1A8(0x4)
		FName PropertyName; // 0x1AC(0x4)
	};


	// Struct DataflowNodes.SkeletalMeshReferenceTransformDataflowNode
	// Inherited from FDataflowNode
	// Size: 0x78 (0x210 - 0x198)
	struct FSkeletalMeshReferenceTransformDataflowNode : public FDataflowNode	
	{
	public:
		USkeletalMesh SkeletalMeshIn; // 0x198(0x8)
		int32_t BoneIndexIn; // 0x1A0(0x4)
		unsigned char UnknownData01_6[0xC]; // 0x1A4(0xC) UNKNOWN PROPERTY
		FTransform TransformOut; // 0x1B0(0x60)
	};


	// Struct DataflowNodes.GetStaticMeshDataflowNode
	// Inherited from FDataflowNode
	// Size: 0x10 (0x1A8 - 0x198)
	struct FGetStaticMeshDataflowNode : public FDataflowNode	
	{
	public:
		UStaticMesh StaticMesh; // 0x198(0x8)
		FName PropertyName; // 0x1A0(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x1A4(0x4) UNKNOWN PROPERTY
	};

}
