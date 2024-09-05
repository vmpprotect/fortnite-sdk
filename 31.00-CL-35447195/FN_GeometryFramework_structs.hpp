#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: GeometryFramework
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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
		unsigned char UnknownData01_7[0x1D]; // 0x3(0x1D) UNKNOWN PROPERTY
	};

}
