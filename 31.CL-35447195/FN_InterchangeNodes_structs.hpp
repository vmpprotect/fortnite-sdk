#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: InterchangeNodes
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct InterchangeNodes.InterchangeAnimationPayLoadKey
	// Size: 0x18 (0x18 - 0x0)
	struct FInterchangeAnimationPayLoadKey	
	{
	public:
		FString UniqueID; // 0x0(0x10)
		EInterchangeAnimationPayLoadType Type; // 0x10(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
	};


	// Struct InterchangeNodes.InterchangeMeshPayLoadKey
	// Size: 0x18 (0x18 - 0x0)
	struct FInterchangeMeshPayLoadKey	
	{
	public:
		FString UniqueID; // 0x0(0x10)
		EInterchangeMeshPayLoadType Type; // 0x10(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
	};

}
