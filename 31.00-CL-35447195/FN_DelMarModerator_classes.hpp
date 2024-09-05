#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: DelMarModerator
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class DelMarModerator.DelMarModeratorModeComponent
	// Inherited from UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x18 (0xB8 - 0xA0)
	class UDelMarModeratorModeComponent : public UControllerComponent	
	{
	public:
		UDynamicUIScene ModeratorScene; // 0xA0(0x8)
		unsigned char UnknownData01_6[0x8]; // 0xA8(0x8) UNKNOWN PROPERTY
		ADelMarVehicle CachedVehicle; // 0xB0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DelMarModerator.DelMarModeratorModeComponent");
			return ret;
		}

		void HandleExitVehicle(); // Flags: Final|Native|Protected 0x7FF414DE9900
		void HandleEnterVehicle(); // Flags: Final|Native|Protected 0x7FF414DE9820
	};

}
