#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: MeshNetwork
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct MeshNetwork.AggregatedFunction
	// Size: 0x28 (0x28 - 0x0)
	struct FAggregatedFunction	
	{
	public:
		UFunction Function; // 0x0(0x8)
		unsigned char UnknownData01_7[0x20]; // 0x8(0x20) UNKNOWN PROPERTY
	};


	// Struct MeshNetwork.AggregatedFunctionConfig
	// Size: 0x60 (0x60 - 0x0)
	struct FAggregatedFunctionConfig	
	{
	public:
		double AggregationTimeout; // 0x0(0x8)
		bool bAggregationEnabled; // 0x8(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x9(0x7) UNKNOWN PROPERTY
		TSet NoAggregationParameters; // 0x10(0x50)
	};


	// Struct MeshNetwork.MeshMetaDataStruct
	// Size: 0x1 (0x1 - 0x0)
	struct FMeshMetaDataStruct	
	{
	public:
	};

}
