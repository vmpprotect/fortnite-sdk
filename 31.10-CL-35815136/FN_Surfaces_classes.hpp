#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: Surfaces
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /VehicleAudio/Surfaces/B_VehicleSurfaceDataAsset.B_VehicleSurfaceDataAsset_C
	// Inherited from UVehicleSoundSurfaceData -> UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x0 (0x48 - 0x48)
	class UB_VehicleSurfaceDataAsset_C : public UVehicleSoundSurfaceData	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/VehicleAudio/Surfaces/B_VehicleSurfaceDataAsset.B_VehicleSurfaceDataAsset_C");
			return ret;
		}

		USoundBase BP_GetSoundForSurface(TEnumAsByte<EPhysicalSurface> InSurface, bool InAir); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Get Sound For Surface(TEnumAsByte<EPhysicalSurface> Surface, bool InAir, USoundBase* SurfaceSound); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
