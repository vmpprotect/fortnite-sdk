#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: ChaosClothAssetEngine
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct ChaosClothAssetEngine.ChaosClothAssetLodTransitionDataCache
	// Size: 0x38 (0x38 - 0x0)
	struct FChaosClothAssetLodTransitionDataCache	
	{
	public:
		unsigned char UnknownData00_2[0x38]; // 0x0(0x38) UNKNOWN PROPERTY
	};


	// Struct ChaosClothAssetEngine.ChaosClothSimulationLodModel
	// Size: 0x1F0 (0x1F0 - 0x0)
	struct FChaosClothSimulationLodModel	
	{
	public:
		TArray<FVector3f> Positions; // 0x0(0x10)
		TArray<FVector3f> Normals; // 0x10(0x10)
		TArray<uint32_t> Indices; // 0x20(0x10)
		TArray<FClothVertBoneData> BoneData; // 0x30(0x10)
		TArray<uint16_t> RequiredExtraBoneIndices; // 0x40(0x10)
		unsigned char UnknownData00_6[0x20]; // 0x50(0x20) UNKNOWN PROPERTY
		TArray<FVector2f> PatternPositions; // 0x70(0x10)
		TArray<uint32_t> PatternIndices; // 0x80(0x10)
		TArray<uint32_t> PatternToWeldedIndices; // 0x90(0x10)
		unsigned char UnknownData01_6[0x50]; // 0xA0(0x50) UNKNOWN PROPERTY
		FClothTetherData TetherData; // 0xF0(0x10)
		unsigned char UnknownData02_7[0xF0]; // 0x100(0xF0) UNKNOWN PROPERTY
	};


	// Struct ChaosClothAssetEngine.ChaosClothSimulationModel
	// Size: 0x38 (0x38 - 0x0)
	struct FChaosClothSimulationModel	
	{
	public:
		TArray<FChaosClothSimulationLodModel> ClothSimulationLodModels; // 0x0(0x10)
		TArray<FName> UsedBoneNames; // 0x10(0x10)
		TArray<int32_t> UsedBoneIndices; // 0x20(0x10)
		int32_t ReferenceBoneIndex; // 0x30(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
	};

}
