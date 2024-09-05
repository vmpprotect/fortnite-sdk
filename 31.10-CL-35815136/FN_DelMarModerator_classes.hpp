#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: DelMarModerator
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class DelMarModerator.DelMarModeratorModeComponent
	// Inherited from UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x18 (0xB8 - 0xA0)
	class UDelMarModeratorModeComponent : public UControllerComponent	
	{
	public:
		UDynamicUIScene* ModeratorScene; // 0xA0(0x8)
		unsigned char UnknownData00_6[0x8]; // 0xA8(0x8) UNKNOWN PROPERTY
		ADelMarVehicle* CachedVehicle; // 0xB0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarModerator.DelMarModeratorModeComponent");
			return ret;
		}

		void HandleExitVehicle(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751A0B768(relative to base address)
		void HandleEnterVehicle(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751A0B754(relative to base address)
	};

}
