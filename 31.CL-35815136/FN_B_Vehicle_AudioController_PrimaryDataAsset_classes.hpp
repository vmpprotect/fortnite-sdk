#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: B_Vehicle_AudioController_PrimaryDataAsset
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /VehicleCosmeticsAudio/B_Vehicle_AudioController_PrimaryDataAsset.B_Vehicle_AudioController_PrimaryDataAsset_C
	// Inherited from UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x70 (0xA0 - 0x30)
	class UB_Vehicle_AudioController_PrimaryDataAsset_C : public UPrimaryDataAsset	
	{
	public:
		TWeakObjectPtr<UClass*> Audio_Controller_Class; // 0x30(0x20)
		UB_VehicleSoundDataAsset_C* Component_Data_Asset; // 0x50(0x8)
		TWeakObjectPtr<USoundBase*> Engine_Sound; // 0x58(0x20)
		USoundBase* Engine_On; // 0x78(0x8)
		USoundBase* Engine_Off; // 0x80(0x8)
		USoundBase* Gain_Fuel_Sound; // 0x88(0x8)
		double Boost; // 0x90(0x8)
		double Surface_Friction_Modifier; // 0x98(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/VehicleCosmeticsAudio/B_Vehicle_AudioController_PrimaryDataAsset.B_Vehicle_AudioController_PrimaryDataAsset_C");
			return ret;
		}
	};

}
