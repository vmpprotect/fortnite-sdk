#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: Subsystems
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /Fabric/Subsystems/S_FabricIslandSettingsWorldSubsystem.S_FabricIslandSettingsWorldSubsystem_C
	// Inherited from UFabricIslandSettingsWorldSubsystem -> UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x0 (0xA8 - 0xA8)
	class US_FabricIslandSettingsWorldSubsystem_C : public UFabricIslandSettingsWorldSubsystem	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Fabric/Subsystems/S_FabricIslandSettingsWorldSubsystem.S_FabricIslandSettingsWorldSubsystem_C");
			return ret;
		}
	};

}
