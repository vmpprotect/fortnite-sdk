#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: MoonFlaxWarBusRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class MoonFlaxWarBusRuntime.MoonFlaxWarBusTurretAudioManager
	// Inherited from UObject
	// Size: 0x90 (0xB8 - 0x28)
	class UMoonFlaxWarBusTurretAudioManager : public UObject	
	{
	public:
		AFortAthenaVehicle* VehicleOwner; // 0x28(0x8)
		float WeaponsMovementMinThreshold; // 0x30(0x4)
		float WeaponsMovementMaxThreshold; // 0x34(0x4)
		FMoonFlaxWarBusTurretState FrontTurretState; // 0x38(0x40)
		FMoonFlaxWarBusTurretState BackTurretState; // 0x78(0x40)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MoonFlaxWarBusRuntime.MoonFlaxWarBusTurretAudioManager");
			return ret;
		}

		void UpdateFrontTurretAudio(); // Flags: Final|Native|Private, Memory Exec: 0x7FF75138E434(relative to base address)
		void UpdateBackTurretAudio(); // Flags: Final|Native|Private, Memory Exec: 0x7FF75138E420(relative to base address)
		void StopFrontTurretUpdate(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75138E40C(relative to base address)
		void StopBackTurretUpdate(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75138E3F8(relative to base address)
		void StartFrontTurretUpdate(float TickRate, UAudioComponent* InTurretAudioComponent); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75138E334(relative to base address)
		void StartBackTurretUpdate(float TickRate, UAudioComponent* InTurretAudioComponent); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75138E270(relative to base address)
		void SetTurretAimDelta(FMoonFlaxWarBusTurretState& TurretState); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF75138E1B4(relative to base address)
		void Initialize(FMoonFlaxWarBusTurretState& InFrontTurretState, FMoonFlaxWarBusTurretState& InBackTurretState); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF75138E01C(relative to base address)
	};

}
