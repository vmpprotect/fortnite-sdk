#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: InterchangeCommon
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Enum /Script/InterchangeCommon.EInterchangeMaterialXShaders
	enum EInterchangeMaterialXShaders
	{
		EInterchangeMaterialXShaders__OpenPBRSurface = 0,
		EInterchangeMaterialXShaders__OpenPBRSurfaceTransmission = 1,
		EInterchangeMaterialXShaders__StandardSurface = 2,
		EInterchangeMaterialXShaders__StandardSurfaceTransmission = 3,
		EInterchangeMaterialXShaders__SurfaceUnlit = 4,
		EInterchangeMaterialXShaders__UsdPreviewSurface = 5,
		EInterchangeMaterialXShaders__Surface = 6,
		EInterchangeMaterialXShaders__MaxShaderCount = 7,
	};


	// Enum /Script/InterchangeCommon.EInterchangeMaterialXBSDF
	enum EInterchangeMaterialXBSDF
	{
		EInterchangeMaterialXBSDF__OrenNayarDiffuse = 0,
		EInterchangeMaterialXBSDF__BurleyDiffuse = 1,
		EInterchangeMaterialXBSDF__Translucent = 2,
		EInterchangeMaterialXBSDF__Dielectric = 3,
		EInterchangeMaterialXBSDF__Conductor = 4,
		EInterchangeMaterialXBSDF__GeneralizedSchlick = 5,
		EInterchangeMaterialXBSDF__Subsurface = 6,
		EInterchangeMaterialXBSDF__Sheen = 7,
		EInterchangeMaterialXBSDF__ThinFilm = 8,
		EInterchangeMaterialXBSDF__MaxBSDFCount = 9,
	};


	// Enum /Script/InterchangeCommon.EInterchangeMaterialXEDF
	enum EInterchangeMaterialXEDF
	{
		EInterchangeMaterialXEDF__Uniform = 0,
		EInterchangeMaterialXEDF__Conical = 1,
		EInterchangeMaterialXEDF__Measured = 2,
		EInterchangeMaterialXEDF__MaxEDFCount = 3,
	};


	// Enum /Script/InterchangeCommon.EInterchangeMaterialXVDF
	enum EInterchangeMaterialXVDF
	{
		EInterchangeMaterialXVDF__Absorption = 0,
		EInterchangeMaterialXVDF__Anisotropic = 1,
		EInterchangeMaterialXVDF__MaxVDFCount = 2,
	};

}
