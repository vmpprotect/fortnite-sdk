#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: SparksSettingsUI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

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
