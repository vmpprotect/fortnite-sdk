#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: MLDeformerFramework
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct MLDeformerFramework.MLDeformerCurveReference
	// Size: 0x4 (0x4 - 0x0)
	struct FMLDeformerCurveReference	
	{
	public:
		FName CurveName; // 0x0(0x4)
	};


	// Struct MLDeformerFramework.MLDeformerTrainingInputAnim
	// Size: 0x8 (0x8 - 0x0)
	struct FMLDeformerTrainingInputAnim	
	{
	public:
		unsigned char UnknownData00_2[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct MLDeformerFramework.MLDeformerGeomCacheTrainingInputAnim
	// Inherited from FMLDeformerTrainingInputAnim
	// Size: 0x0 (0x8 - 0x8)
	struct FMLDeformerGeomCacheTrainingInputAnim : public FMLDeformerTrainingInputAnim	
	{
	public:
	};


	// Struct MLDeformerFramework.MLDeformerMaskInfo
	// Size: 0x18 (0x18 - 0x0)
	struct FMLDeformerMaskInfo	
	{
	public:
		TArray<FName> BoneNames; // 0x0(0x10)
		EMLDeformerMaskingMode MaskMode; // 0x10(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x11(0x3) UNKNOWN PROPERTY
		FName VertexAttributeName; // 0x14(0x4)
	};


	// Struct MLDeformerFramework.MLDeformerMorphModelQualityLevel
	// Size: 0x4 (0x4 - 0x0)
	struct FMLDeformerMorphModelQualityLevel	
	{
	public:
		int32_t MaxActiveMorphs; // 0x0(0x4)
	};


	// Struct MLDeformerFramework.MLDeformerCompareActor
	// Size: 0x28 (0x28 - 0x0)
	struct FMLDeformerCompareActor	
	{
	public:
		FName Name; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr<UMLDeformerAsset*> DeformerAsset; // 0x8(0x20)
	};

}
