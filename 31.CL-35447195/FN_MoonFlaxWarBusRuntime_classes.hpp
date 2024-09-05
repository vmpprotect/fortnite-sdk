#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: MoonFlaxWarBusRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class MoonFlaxWarBusRuntime.MoonFlaxWarBusTurretAudioManager
	// Inherited from UObject
	// Size: 0x90 (0xB8 - 0x28)
	class UMoonFlaxWarBusTurretAudioManager : public UObject	
	{
	public:
		AFortAthenaVehicle VehicleOwner; // 0x28(0x8)
		float WeaponsMovementMinThreshold; // 0x30(0x4)
		float WeaponsMovementMaxThreshold; // 0x34(0x4)
		FMoonFlaxWarBusTurretState FrontTurretState; // 0x38(0x40)
		FMoonFlaxWarBusTurretState BackTurretState; // 0x78(0x40)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MoonFlaxWarBusRuntime.MoonFlaxWarBusTurretAudioManager");
			return ret;
		}

		void UpdateFrontTurretAudio(); // Flags: Final|Native|Private 0x7FF414CFC278
		void UpdateBackTurretAudio(); // Flags: Final|Native|Private 0x7FF414CFC198
		void StopFrontTurretUpdate(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414CFC0B8
		void StopBackTurretUpdate(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414CFBFD8
		void StartFrontTurretUpdate(float TickRate, UAudioComponent InTurretAudioComponent); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414CFBEF8
		void StartBackTurretUpdate(float TickRate, UAudioComponent InTurretAudioComponent); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414CFBE18
		void SetTurretAimDelta(FMoonFlaxWarBusTurretState& TurretState); // Flags: Final|Native|Private|HasOutParms 0x7FF414CFBD38
		void Initialize(FMoonFlaxWarBusTurretState& InFrontTurretState, FMoonFlaxWarBusTurretState& InBackTurretState); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414CFBC58
	};

}
