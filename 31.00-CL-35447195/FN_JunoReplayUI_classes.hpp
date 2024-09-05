#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: JunoReplayUI
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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
