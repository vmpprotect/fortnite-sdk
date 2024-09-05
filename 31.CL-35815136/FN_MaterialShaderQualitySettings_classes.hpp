#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: MaterialShaderQualitySettings
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class MaterialShaderQualitySettings.ShaderPlatformQualitySettings
	// Inherited from UObject
	// Size: 0x30 (0x58 - 0x28)
	class UShaderPlatformQualitySettings : public UObject	
	{
	public:
		FMaterialQualityOverrides QualityOverrides; // 0x28(0x20)
		unsigned char UnknownData00_7[0x10]; // 0x48(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MaterialShaderQualitySettings.ShaderPlatformQualitySettings");
			return ret;
		}
	};


	// Class MaterialShaderQualitySettings.MaterialShaderQualitySettings
	// Inherited from UObject
	// Size: 0x50 (0x78 - 0x28)
	class UMaterialShaderQualitySettings : public UObject	
	{
	public:
		TMap<FName, UShaderPlatformQualitySettings*> ForwardSettingMap; // 0x28(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MaterialShaderQualitySettings.MaterialShaderQualitySettings");
			return ret;
		}
	};

}
