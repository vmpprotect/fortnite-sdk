#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: LandscapePatch
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/LandscapePatch.ELandscapePatchPriorityInitialization
	enum ELandscapePatchPriorityInitialization
	{
		ELandscapePatchPriorityInitialization__AcquireHighest = 0,
		ELandscapePatchPriorityInitialization__KeepOriginal = 1,
		ELandscapePatchPriorityInitialization__SmallIncrement = 2,
	};


	// Enum /Script/LandscapePatch.ELandscapeTexturePatchSourceMode
	enum ELandscapeTexturePatchSourceMode
	{
		ELandscapeTexturePatchSourceMode__None = 0,
		ELandscapeTexturePatchSourceMode__InternalTexture = 1,
		ELandscapeTexturePatchSourceMode__TextureBackedRenderTarget = 2,
		ELandscapeTexturePatchSourceMode__TextureAsset = 3,
	};


	// Enum /Script/LandscapePatch.ELandscapeTexturePatchBlendMode
	enum ELandscapeTexturePatchBlendMode
	{
		ELandscapeTexturePatchBlendMode__AlphaBlend = 0,
		ELandscapeTexturePatchBlendMode__Additive = 1,
		ELandscapeTexturePatchBlendMode__Min = 2,
		ELandscapeTexturePatchBlendMode__Max = 3,
	};


	// Enum /Script/LandscapePatch.ELandscapeTexturePatchFalloffMode
	enum ELandscapeTexturePatchFalloffMode
	{
		ELandscapeTexturePatchFalloffMode__Circle = 0,
		ELandscapeTexturePatchFalloffMode__RoundedRectangle = 1,
	};


	// Enum /Script/LandscapePatch.ELandscapeTextureHeightPatchEncoding
	enum ELandscapeTextureHeightPatchEncoding
	{
		ELandscapeTextureHeightPatchEncoding__ZeroToOne = 0,
		ELandscapeTextureHeightPatchEncoding__WorldUnits = 1,
		ELandscapeTextureHeightPatchEncoding__NativePackedHeight = 2,
	};


	// Enum /Script/LandscapePatch.ELandscapeTextureHeightPatchZeroHeightMeaning
	enum ELandscapeTextureHeightPatchZeroHeightMeaning
	{
		ELandscapeTextureHeightPatchZeroHeightMeaning__PatchZ = 0,
		ELandscapeTextureHeightPatchZeroHeightMeaning__LandscapeZ = 1,
		ELandscapeTextureHeightPatchZeroHeightMeaning__WorldZero = 2,
	};

}
