#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: NeuralMorphModel
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct NeuralMorphModel.NeuralMorphBoneGroup
	// Size: 0x18 (0x18 - 0x0)
	struct FNeuralMorphBoneGroup	
	{
	public:
		FName GroupName; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TArray BoneNames; // 0x8(0x10)
	};


	// Struct NeuralMorphModel.NeuralMorphCurveGroup
	// Size: 0x18 (0x18 - 0x0)
	struct FNeuralMorphCurveGroup	
	{
	public:
		FName GroupName; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TArray CurveNames; // 0x8(0x10)
	};


	// Struct NeuralMorphModel.NeuralMorphMaskInfo
	// Size: 0x18 (0x18 - 0x0)
	struct FNeuralMorphMaskInfo	
	{
	public:
		TArray BoneNames; // 0x0(0x10)
		EMLDeformerMaskingMode MaskMode; // 0x10(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x11(0x3) UNKNOWN PROPERTY
		FName VertexAttributeName; // 0x14(0x4)
	};

}
