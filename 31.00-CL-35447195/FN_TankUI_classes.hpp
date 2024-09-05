#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: TankUI
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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
	// Size: 0x20 (0x5A8 - 0x588)
	class UTankVehicleReticle : public UFortAthenaVehicleDashboardWidget	
	{
	public:
		AFortTankVehicle OwningTankVehicle; // 0x588(0x8)
		float MinTurretPitch; // 0x590(0x4)
		float MaxTurretPitch; // 0x594(0x4)
		bool bDistanceMeterEnabled; // 0x598(0x1)
		bool bTankOrientationEventsEnabled; // 0x599(0x1)
		unsigned char UnknownData01_7[0xE]; // 0x59A(0xE) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TankUI.TankVehicleReticle");
			return ret;
		}

		void SetupVehicleFromBP(AActor NewVehicle); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414CCFF78
		void OnTreadEnabledChanged(bool bEnabled, TEnumAsByte Side); // Flags: Event|Protected|BlueprintEvent 0x7FF414CCFE98
		void OnTankTurretAimYawValueChanged(float Value); // Flags: Event|Protected|BlueprintEvent 0x7FF414CCFDB8
		void OnTankTurretAimPitchValueChanged(float pitch, float PitchPercent); // Flags: Event|Protected|BlueprintEvent 0x7FF414CCFCD8
		void OnTankTargetingReleased(); // Flags: Event|Protected|BlueprintEvent 0x7FF414CCFBF8
		void OnTankTargetingPressed(); // Flags: Event|Protected|BlueprintEvent 0x7FF414CCFB18
		void OnTankRotationValueChanged(float TankValue, float TurretValue); // Flags: Event|Protected|BlueprintEvent 0x7FF414CCFA38
		void OnTankHatchHealthChanged(float HatchHealth, float HatchHealthMax, bool bNewlyDisabled, bool bNewlyEnabled); // Flags: Event|Protected|BlueprintEvent 0x7FF414CCF958
		void OnTankEngineHealthChanged(float EngineHealth, float EngineHealthMax, bool bNewlyDisabled, bool bNewlyEnabled); // Flags: Event|Protected|BlueprintEvent 0x7FF414CCF878
		void OnTankDistanceUpdate(float Distance, float DistancePercent); // Flags: Event|Protected|BlueprintEvent 0x7FF414CCF798
		void OnCannonFired(float RateTime); // Flags: Event|Protected|BlueprintEvent 0x7FF414CCF6B8
		void HandleOnEquipMountedWeapon(AFortWeaponRanged EquippedMountedWeapon); // Flags: Final|Native|Private 0x7FF414CCF5D8
		void HandleOnDamageablePartHealthChanged(FVehicleDamageablePartConfig& PartConfig, FVehicleDamageablePart& Part, bool bNewlyDisabled, bool bNewlyEnabled); // Flags: Final|Native|Private|HasOutParms 0x7FF414CCF4F8
	};

}
