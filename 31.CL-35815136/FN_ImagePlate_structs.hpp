#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: ImagePlate
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct ImagePlate.ImagePlateParameters
	// Size: 0x40 (0x40 - 0x0)
	struct FImagePlateParameters	
	{
	public:
		UMaterialInterface* Material; // 0x0(0x8)
		FName TextureParameterName; // 0x8(0x4)
		bool bFillScreen; // 0xC(0x1)
		unsigned char UnknownData00_6[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
		FVector2D FillScreenAmount; // 0x10(0x10)
		FVector2D FixedSize; // 0x20(0x10)
		UTexture* RenderTexture; // 0x30(0x8)
		UMaterialInstanceDynamic* DynamicMaterial; // 0x38(0x8)
	};

}
