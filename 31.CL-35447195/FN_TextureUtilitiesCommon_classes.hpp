#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: TextureUtilitiesCommon
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class TextureUtilitiesCommon.TextureImportSettings
	// Inherited from UDeveloperSettings -> UObject
	// Size: 0x10 (0x40 - 0x30)
	class UTextureImportSettings : public UDeveloperSettings	
	{
	public:
		int32_t AutoVTSize; // 0x30(0x4)
		int32_t AutoLimitDimension; // 0x34(0x4)
		bool bEnableNormalizeNormals; // 0x38(0x1)
		bool bEnableFastMipFilter; // 0x39(0x1)
		ETextureImportFloatingPointFormat CompressedFormatForFloatTextures; // 0x3A(0x1)
		ETextureImportPNGInfill PNGInfill; // 0x3B(0x1)
		unsigned char UnknownData01_7[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TextureUtilitiesCommon.TextureImportSettings");
			return ret;
		}
	};

}
