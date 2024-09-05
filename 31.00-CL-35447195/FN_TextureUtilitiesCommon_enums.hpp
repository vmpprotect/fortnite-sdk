#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: TextureUtilitiesCommon
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/TextureUtilitiesCommon.ETextureImportFloatingPointFormat
	enum ETextureImportFloatingPointFormat
	{
		ETextureImportFloatingPointFormat__HDR_F16 = 0,
		ETextureImportFloatingPointFormat__HDRCompressed_BC6 = 1,
		ETextureImportFloatingPointFormat__HDR_F32_or_F16 = 2,
		ETextureImportFloatingPointFormat__PreviousDefault = 0,
	};


	// Enum /Script/TextureUtilitiesCommon.ETextureImportPNGInfill
	enum ETextureImportPNGInfill
	{
		ETextureImportPNGInfill__Default = 0,
		ETextureImportPNGInfill__Never = 1,
		ETextureImportPNGInfill__OnlyOnBinaryTransparency = 2,
		ETextureImportPNGInfill__Always = 3,
	};

}
