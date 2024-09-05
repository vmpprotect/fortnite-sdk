#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: NeuralMorphModel
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct NeuralMorphModel.NeuralMorphBoneGroup
	// Size: 0x18 (0x18 - 0x0)
	struct FNeuralMorphBoneGroup	
	{
	public:
		FName GroupName; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TArray<FBoneReference> BoneNames; // 0x8(0x10)
	};


	// Struct NeuralMorphModel.NeuralMorphCurveGroup
	// Size: 0x18 (0x18 - 0x0)
	struct FNeuralMorphCurveGroup	
	{
	public:
		FName GroupName; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TArray<FMLDeformerCurveReference> CurveNames; // 0x8(0x10)
	};


	// Struct NeuralMorphModel.NeuralMorphMaskInfo
	// Size: 0x18 (0x18 - 0x0)
	struct FNeuralMorphMaskInfo	
	{
	public:
		TArray<FName> BoneNames; // 0x0(0x10)
		EMLDeformerMaskingMode MaskMode; // 0x10(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x11(0x3) UNKNOWN PROPERTY
		FName VertexAttributeName; // 0x14(0x4)
	};

}
