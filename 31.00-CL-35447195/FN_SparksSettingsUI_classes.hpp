#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: SparksSettingsUI
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class SparksSettingsUI.FortSettingRegistryExtension_Sparks
	// Inherited from UFortGameSettingRegistryExtension -> UFortGameSettingRegistryExtensionBase -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortSettingRegistryExtension_Sparks : public UFortGameSettingRegistryExtension	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksSettingsUI.FortSettingRegistryExtension_Sparks");
			return ret;
		}
	};


	// Class SparksSettingsUI.SparksSettingsUIGlobals
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class USparksSettingsUIGlobals : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SparksSettingsUI.SparksSettingsUIGlobals");
			return ret;
		}
	};

}
