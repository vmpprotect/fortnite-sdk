#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: MaterialShaderQualitySettings
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class MaterialShaderQualitySettings.ShaderPlatformQualitySettings
	// Inherited from UObject
	// Size: 0x30 (0x58 - 0x28)
	class UShaderPlatformQualitySettings : public UObject	
	{
	public:
		FMaterialQualityOverrides QualityOverrides; // 0x28(0x20)
		unsigned char UnknownData01_7[0x10]; // 0x48(0x10) UNKNOWN PROPERTY

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
		TMap ForwardSettingMap; // 0x28(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MaterialShaderQualitySettings.MaterialShaderQualitySettings");
			return ret;
		}
	};

}
