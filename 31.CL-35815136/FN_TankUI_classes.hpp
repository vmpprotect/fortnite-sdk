#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: TankUI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class TankUI.FortGameSettingRegistryExtension_Tank
	// Inherited from UFortGameSettingRegistryExtension -> UFortGameSettingRegistryExtensionBase -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortGameSettingRegistryExtension_Tank : public UFortGameSettingRegistryExtension	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TankUI.FortGameSettingRegistryExtension_Tank");
			return ret;
		}
	};


	// Class TankUI.TankVehicleReticle
	// Inherited from UFortAthenaVehicleDashboardWidget -> UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x20 (0x5A0 - 0x580)
	class UTankVehicleReticle : public UFortAthenaVehicleDashboardWidget	
	{
	public:
		AFortTankVehicle* OwningTankVehicle; // 0x580(0x8)
		float MinTurretPitch; // 0x588(0x4)
		float MaxTurretPitch; // 0x58C(0x4)
		bool bDistanceMeterEnabled; // 0x590(0x1)
		bool bTankOrientationEventsEnabled; // 0x591(0x1)
		unsigned char UnknownData00_7[0xE]; // 0x592(0xE) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TankUI.TankVehicleReticle");
			return ret;
		}

		void SetupVehicleFromBP(AActor* NewVehicle); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751253EE0(relative to base address)
		void OnTreadEnabledChanged(bool bEnabled, TEnumAsByte<ETreadSide> Side); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTankTurretAimYawValueChanged(float Value); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTankTurretAimPitchValueChanged(float pitch, float PitchPercent); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTankTargetingReleased(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTankTargetingPressed(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTankRotationValueChanged(float TankValue, float TurretValue); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTankHatchHealthChanged(float HatchHealth, float HatchHealthMax, bool bNewlyDisabled, bool bNewlyEnabled); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTankEngineHealthChanged(float EngineHealth, float EngineHealthMax, bool bNewlyDisabled, bool bNewlyEnabled); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTankDistanceUpdate(float Distance, float DistancePercent); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCannonFired(float RateTime); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleOnEquipMountedWeapon(AFortWeaponRanged* EquippedMountedWeapon); // Flags: Final|Native|Private, Memory Exec: 0x7FF751253E60(relative to base address)
		void HandleOnDamageablePartHealthChanged(FVehicleDamageablePartConfig& PartConfig, FVehicleDamageablePart& Part, bool bNewlyDisabled, bool bNewlyEnabled); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF751253BA4(relative to base address)
	};

}
