#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: NearestNeighborModel
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct NearestNeighborModel.NearestNeighborNetworkParameter
	// Size: 0x20 (0x20 - 0x0)
	struct FNearestNeighborNetworkParameter	
	{
	public:
		TArray Values; // 0x0(0x10)
		TArray Shape; // 0x10(0x10)
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
		TArray VertexMap; // 0x10(0x10)
		TArray PCABasis; // 0x20(0x10)
		TArray VertexMean; // 0x30(0x10)
		TArray AssetNeighborCoeffs; // 0x40(0x10)
		TArray AssetNeighborOffsets; // 0x50(0x10)
		TArray AssetNeighborIndexMap; // 0x60(0x10)
		TArray NeighborCoeffs; // 0x70(0x10)
	};

}
