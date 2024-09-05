#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: JunoReplayUI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class JunoReplayUI.FortGameSettingRegistryExtension_JunoReplay
	// Inherited from UFortGameSettingRegistryExtension -> UFortGameSettingRegistryExtensionBase -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortGameSettingRegistryExtension_JunoReplay : public UFortGameSettingRegistryExtension	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoReplayUI.FortGameSettingRegistryExtension_JunoReplay");
			return ret;
		}
	};


	// Class JunoReplayUI.JunoReplayUIGlobals
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoReplayUIGlobals : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoReplayUI.JunoReplayUIGlobals");
			return ret;
		}
	};

}
