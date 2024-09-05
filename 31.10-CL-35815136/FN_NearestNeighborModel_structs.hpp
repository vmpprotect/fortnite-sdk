#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: NearestNeighborModel
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct NearestNeighborModel.NearestNeighborNetworkParameter
	// Size: 0x20 (0x20 - 0x0)
	struct FNearestNeighborNetworkParameter	
	{
	public:
		TArray<float> Values; // 0x0(0x10)
		TArray<int32_t> Shape; // 0x10(0x10)
	};


	// Struct NearestNeighborModel.ClothPartData
	// Size: 0x80 (0x80 - 0x0)
	struct FClothPartData	
	{
	public:
		int32_t PCACoeffNum; // 0x0(0x4)
		uint32_t PCACoeffStart; // 0x4(0x4)
		uint32_t NumVertices; // 0x8(0x4)
		uint32_t NumNeighbors; // 0xC(0x4)
		TArray<uint32_t> VertexMap; // 0x10(0x10)
		TArray<float> PCABasis; // 0x20(0x10)
		TArray<float> VertexMean; // 0x30(0x10)
		TArray<float> AssetNeighborCoeffs; // 0x40(0x10)
		TArray<float> AssetNeighborOffsets; // 0x50(0x10)
		TArray<int32_t> AssetNeighborIndexMap; // 0x60(0x10)
		TArray<float> NeighborCoeffs; // 0x70(0x10)
	};

}
