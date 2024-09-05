#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: SrirachaRanchValet
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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

		void VehicleExploded(AController LastDamageInstigator, AFortAthenaVehicle Vehicle); // Flags: Final|Native|Protected 0x7FF414CCD498
	};

}
