#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: GeometryFramework
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct GeometryFramework.DynamicMeshChangeInfo
	// Size: 0x20 (0x20 - 0x0)
	struct FDynamicMeshChangeInfo	
	{
	public:
		EDynamicMeshChangeType Type; // 0x0(0x1)
		EDynamicMeshAttributeChangeFlags Flags; // 0x1(0x1)
		bool bIsRevertChange; // 0x2(0x1)
		unsigned char UnknownData00_7[0x1D]; // 0x3(0x1D) UNKNOWN PROPERTY
	};

}
