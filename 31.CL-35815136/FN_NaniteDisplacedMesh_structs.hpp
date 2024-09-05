#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: NaniteDisplacedMesh
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct NaniteDisplacedMesh.NaniteDisplacedMeshDisplacementMap
	// Size: 0x10 (0x10 - 0x0)
	struct FNaniteDisplacedMeshDisplacementMap	
	{
	public:
		UTexture2D* Texture; // 0x0(0x8)
		float Magnitude; // 0x8(0x4)
		float Center; // 0xC(0x4)
	};


	// Struct NaniteDisplacedMesh.NaniteDisplacedMeshParams
	// Size: 0x1 (0x1 - 0x0)
	struct FNaniteDisplacedMeshParams	
	{
	public:
		unsigned char UnknownData00_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};

}
