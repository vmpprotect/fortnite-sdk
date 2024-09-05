#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: CurveExpression
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct CurveExpression.AnimNode_RemapCurvesBase
	// Inherited from FAnimNode_Base
	// Size: 0x100 (0x110 - 0x10)
	struct FAnimNode_RemapCurvesBase : public FAnimNode_Base	
	{
	public:
		FPoseLink SourcePose; // 0x10(0x10)
		ERemapCurvesExpressionSource ExpressionSource; // 0x20(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x21(0x7) UNKNOWN PROPERTY
		FCurveExpressionList ExpressionList; // 0x28(0x10)
		UCurveExpressionsDataAsset* CurveExpressionsDataAsset; // 0x38(0x8)
		TMap<FName, FString> CurveExpressions; // 0x40(0x50)
		bool bExpressionsImmutable; // 0x90(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x91(0x7) UNKNOWN PROPERTY
		TArray<FName> CachedConstantNames; // 0x98(0x10)
		unsigned char UnknownData02_7[0x68]; // 0xA8(0x68) UNKNOWN PROPERTY
	};


	// Struct CurveExpression.CurveExpressionList
	// Size: 0x10 (0x10 - 0x0)
	struct FCurveExpressionList	
	{
	public:
		FString AssignmentExpressions; // 0x0(0x10)
	};


	// Struct CurveExpression.AnimNode_RemapCurves
	// Inherited from FAnimNode_RemapCurvesBase -> FAnimNode_Base
	// Size: 0x0 (0x110 - 0x110)
	struct FAnimNode_RemapCurves : public FAnimNode_RemapCurvesBase	
	{
	public:
	};


	// Struct CurveExpression.AnimNode_RemapCurvesFromMesh
	// Inherited from FAnimNode_RemapCurvesBase -> FAnimNode_Base
	// Size: 0x78 (0x188 - 0x110)
	struct FAnimNode_RemapCurvesFromMesh : public FAnimNode_RemapCurvesBase	
	{
	public:
		TWeakObjectPtr<USkeletalMeshComponent*> SourceMeshComponent; // 0x110(0x8)
		bool bUseAttachedParent; // 0x118(0x1)
		unsigned char UnknownData00_7[0x6F]; // 0x119(0x6F) UNKNOWN PROPERTY
	};

}
