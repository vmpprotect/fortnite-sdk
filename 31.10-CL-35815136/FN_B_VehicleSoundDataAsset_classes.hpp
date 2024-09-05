#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: B_VehicleSoundDataAsset
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /VehicleAudio/B_VehicleSoundDataAsset.B_VehicleSoundDataAsset_C
	// Inherited from UFortVehicleSoundData -> UDataAsset -> UObject
	// Size: 0x0 (0x70 - 0x70)
	class UB_VehicleSoundDataAsset_C : public UFortVehicleSoundData	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/VehicleAudio/B_VehicleSoundDataAsset.B_VehicleSoundDataAsset_C");
			return ret;
		}
	};

}
