#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: AnimationCore
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct AnimationCore.Axis
	// Size: 0x20 (0x20 - 0x0)
	struct FAxis	
	{
	public:
		FVector Axis; // 0x0(0x18)
		bool bInLocalSpace; // 0x18(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x19(0x7) UNKNOWN PROPERTY
	};


	// Struct AnimationCore.NodeChain
	// Size: 0x10 (0x10 - 0x0)
	struct FNodeChain	
	{
	public:
		TArray<FName> Nodes; // 0x0(0x10)
	};


	// Struct AnimationCore.NodeObject
	// Size: 0x8 (0x8 - 0x0)
	struct FNodeObject	
	{
	public:
		FName Name; // 0x0(0x4)
		FName ParentName; // 0x4(0x4)
	};


	// Struct AnimationCore.NodeHierarchyData
	// Size: 0x70 (0x70 - 0x0)
	struct FNodeHierarchyData	
	{
	public:
		TArray<FNodeObject> Nodes; // 0x0(0x10)
		TArray<FTransform> Transforms; // 0x10(0x10)
		TMap<FName, int32_t> NodeNameToIndexMapping; // 0x20(0x50)
	};


	// Struct AnimationCore.NodeHierarchyWithUserData
	// Size: 0x78 (0x78 - 0x0)
	struct FNodeHierarchyWithUserData	
	{
	public:
		unsigned char UnknownData00_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		FNodeHierarchyData Hierarchy; // 0x8(0x70)
	};


	// Struct AnimationCore.CCDIKChainLink
	// Size: 0xE0 (0xE0 - 0x0)
	struct FCCDIKChainLink	
	{
	public:
		unsigned char UnknownData00_2[0xE0]; // 0x0(0xE0) UNKNOWN PROPERTY
	};


	// Struct AnimationCore.FilterOptionPerAxis
	// Size: 0x3 (0x3 - 0x0)
	struct FFilterOptionPerAxis	
	{
	public:
		bool bX; // 0x0(0x1)
		bool bY; // 0x1(0x1)
		bool bZ; // 0x2(0x1)
	};


	// Struct AnimationCore.TransformFilter
	// Size: 0x9 (0x9 - 0x0)
	struct FTransformFilter	
	{
	public:
		FFilterOptionPerAxis TranslationFilter; // 0x0(0x3)
		FFilterOptionPerAxis RotationFilter; // 0x3(0x3)
		FFilterOptionPerAxis ScaleFilter; // 0x6(0x3)
	};


	// Struct AnimationCore.ConstraintDescription
	// Size: 0xD (0xD - 0x0)
	struct FConstraintDescription	
	{
	public:
		bool bTranslation; // 0x0(0x1)
		bool bRotation; // 0x1(0x1)
		bool bScale; // 0x2(0x1)
		bool bParent; // 0x3(0x1)
		FFilterOptionPerAxis TranslationAxes; // 0x4(0x3)
		FFilterOptionPerAxis RotationAxes; // 0x7(0x3)
		FFilterOptionPerAxis ScaleAxes; // 0xA(0x3)
	};


	// Struct AnimationCore.ConstraintOffset
	// Size: 0xC0 (0xC0 - 0x0)
	struct FConstraintOffset	
	{
	public:
		FVector Translation; // 0x0(0x18)
		unsigned char UnknownData00_6[0x8]; // 0x18(0x8) UNKNOWN PROPERTY
		FQuat Rotation; // 0x20(0x20)
		FVector Scale; // 0x40(0x18)
		unsigned char UnknownData01_6[0x8]; // 0x58(0x8) UNKNOWN PROPERTY
		FTransform Parent; // 0x60(0x60)
	};


	// Struct AnimationCore.TransformConstraint
	// Size: 0x20 (0x20 - 0x0)
	struct FTransformConstraint	
	{
	public:
		FConstraintDescription Operator; // 0x0(0xD)
		unsigned char UnknownData00_6[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
		FName SourceNode; // 0x10(0x4)
		FName TargetNode; // 0x14(0x4)
		float Weight; // 0x18(0x4)
		bool bMaintainOffset; // 0x1C(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x1D(0x3) UNKNOWN PROPERTY
	};


	// Struct AnimationCore.ConstraintDescriptionEx
	// Size: 0x10 (0x10 - 0x0)
	struct FConstraintDescriptionEx	
	{
	public:
		unsigned char UnknownData00_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		FFilterOptionPerAxis AxesFilterOption; // 0x8(0x3)
		unsigned char UnknownData01_7[0x5]; // 0xB(0x5) UNKNOWN PROPERTY
	};


	// Struct AnimationCore.TransformConstraintDescription
	// Inherited from FConstraintDescriptionEx
	// Size: 0x8 (0x18 - 0x10)
	struct FTransformConstraintDescription : public FConstraintDescriptionEx	
	{
	public:
		ETransformConstraintType TransformType; // 0x10(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
	};


	// Struct AnimationCore.AimConstraintDescription
	// Inherited from FConstraintDescriptionEx
	// Size: 0x60 (0x70 - 0x10)
	struct FAimConstraintDescription : public FConstraintDescriptionEx	
	{
	public:
		FAxis LookAt_Axis; // 0x10(0x20)
		FAxis LookUp_Axis; // 0x30(0x20)
		bool bUseLookUp; // 0x50(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x51(0x7) UNKNOWN PROPERTY
		FVector LookUpTarget; // 0x58(0x18)
	};


	// Struct AnimationCore.ConstraintDescriptor
	// Size: 0x10 (0x10 - 0x0)
	struct FConstraintDescriptor	
	{
	public:
		EConstraintType Type; // 0x0(0x1)
		unsigned char UnknownData00_7[0xF]; // 0x1(0xF) UNKNOWN PROPERTY
	};


	// Struct AnimationCore.ConstraintData
	// Size: 0xE0 (0xE0 - 0x0)
	struct FConstraintData	
	{
	public:
		FConstraintDescriptor Constraint; // 0x0(0x10)
		float Weight; // 0x10(0x4)
		bool bMaintainOffset; // 0x14(0x1)
		unsigned char UnknownData00_6[0xB]; // 0x15(0xB) UNKNOWN PROPERTY
		FTransform Offset; // 0x20(0x60)
		FTransform CurrentTransform; // 0x80(0x60)
	};


	// Struct AnimationCore.EulerTransform
	// Size: 0x48 (0x48 - 0x0)
	struct FEulerTransform	
	{
	public:
		FVector Location; // 0x0(0x18)
		FRotator Rotation; // 0x18(0x18)
		FVector Scale; // 0x30(0x18)
	};


	// Struct AnimationCore.FABRIKChainLink
	// Size: 0x50 (0x50 - 0x0)
	struct FFABRIKChainLink	
	{
	public:
		unsigned char UnknownData00_2[0x50]; // 0x0(0x50) UNKNOWN PROPERTY
	};


	// Struct AnimationCore.TransformNoScale
	// Size: 0x40 (0x40 - 0x0)
	struct FTransformNoScale	
	{
	public:
		FVector Location; // 0x0(0x18)
		unsigned char UnknownData00_6[0x8]; // 0x18(0x8) UNKNOWN PROPERTY
		FQuat Rotation; // 0x20(0x20)
	};

}
