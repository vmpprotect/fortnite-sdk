#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: ChaosClothAssetEngine
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct ChaosClothAssetEngine.ChaosClothAssetLodTransitionDataCache
	// Size: 0x38 (0x38 - 0x0)
	struct FChaosClothAssetLodTransitionDataCache	
	{
	public:
		unsigned char UnknownData01_2[0x38]; // 0x0(0x38) UNKNOWN PROPERTY
	};


	// Struct ChaosClothAssetEngine.ChaosClothSimulationLodModel
	// Size: 0x1F0 (0x1F0 - 0x0)
	struct FChaosClothSimulationLodModel	
	{
	public:
		TArray Positions; // 0x0(0x10)
		TArray Normals; // 0x10(0x10)
		TArray Indices; // 0x20(0x10)
		TArray BoneData; // 0x30(0x10)
		TArray RequiredExtraBoneIndices; // 0x40(0x10)
		unsigned char UnknownData03_6[0x20]; // 0x50(0x20) UNKNOWN PROPERTY
		TArray PatternPositions; // 0x70(0x10)
		TArray PatternIndices; // 0x80(0x10)
		TArray PatternToWeldedIndices; // 0x90(0x10)
		unsigned char UnknownData04_6[0x50]; // 0xA0(0x50) UNKNOWN PROPERTY
		FClothTetherData TetherData; // 0xF0(0x10)
		unsigned char UnknownData05_7[0xF0]; // 0x100(0xF0) UNKNOWN PROPERTY
	};


	// Struct ChaosClothAssetEngine.ChaosClothSimulationModel
	// Size: 0x38 (0x38 - 0x0)
	struct FChaosClothSimulationModel	
	{
	public:
		TArray ClothSimulationLodModels; // 0x0(0x10)
		TArray UsedBoneNames; // 0x10(0x10)
		TArray UsedBoneIndices; // 0x20(0x10)
		int32_t ReferenceBoneIndex; // 0x30(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
	};

}
