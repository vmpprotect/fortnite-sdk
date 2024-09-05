#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: SrirachaRanchValet
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class SrirachaRanchValet.StreamingRadioPlayerComponent_Valet
	// Inherited from UStreamingRadioPlayerComponent -> UFortPawnComponent -> UPawnComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x0 (0x540 - 0x540)
	class UStreamingRadioPlayerComponent_Valet : public UStreamingRadioPlayerComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SrirachaRanchValet.StreamingRadioPlayerComponent_Valet");
			return ret;
		}

		void VehicleExploded(AController* LastDamageInstigator, AFortAthenaVehicle* Vehicle); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7512421C4(relative to base address)
	};

}
