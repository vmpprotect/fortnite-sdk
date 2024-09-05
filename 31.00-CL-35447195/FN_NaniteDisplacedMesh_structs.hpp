#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: NaniteDisplacedMesh
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct NaniteDisplacedMesh.NaniteDisplacedMeshDisplacementMap
	// Size: 0x10 (0x10 - 0x0)
	struct FNaniteDisplacedMeshDisplacementMap	
	{
	public:
		UTexture2D Texture; // 0x0(0x8)
		float Magnitude; // 0x8(0x4)
		float Center; // 0xC(0x4)
	};


	// Struct NaniteDisplacedMesh.NaniteDisplacedMeshParams
	// Size: 0x1 (0x1 - 0x0)
	struct FNaniteDisplacedMeshParams	
	{
	public:
		unsigned char UnknownData01_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};

}
