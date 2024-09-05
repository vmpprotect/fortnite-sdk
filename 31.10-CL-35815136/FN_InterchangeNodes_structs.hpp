#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: InterchangeNodes
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct InterchangeNodes.InterchangeAnimationPayLoadKey
	// Size: 0x18 (0x18 - 0x0)
	struct FInterchangeAnimationPayLoadKey	
	{
	public:
		FString UniqueID; // 0x0(0x10)
		EInterchangeAnimationPayLoadType Type; // 0x10(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
	};


	// Struct InterchangeNodes.InterchangeMeshPayLoadKey
	// Size: 0x18 (0x18 - 0x0)
	struct FInterchangeMeshPayLoadKey	
	{
	public:
		FString UniqueID; // 0x0(0x10)
		EInterchangeMeshPayLoadType Type; // 0x10(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
	};

}
