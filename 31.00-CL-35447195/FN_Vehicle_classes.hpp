#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: Vehicle
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class /HoverboardV2/Vehicle/HoverboardV2_VehicleConfigs.HoverboardV2_VehicleConfigs_C
	// Inherited from UVehicleConfigsJackal_C -> UFortAthenaJackalVehicleConfigs -> UFortPhysicsVehicleConfigs -> UFortVehicleConfigs -> UObject
	// Size: 0x0 (0xAE0 - 0xAE0)
	class UHoverboardV2_VehicleConfigs_C : public UVehicleConfigsJackal_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/HoverboardV2/Vehicle/HoverboardV2_VehicleConfigs.HoverboardV2_VehicleConfigs_C");
			return ret;
		}
	};


	// Class /HoverboardV2/Vehicle/Hoverboard_V2.Hoverboard_V2_C
	// Inherited from AJackalVehicle_Athena_C -> AFortAthenaJackalVehicle -> AFortAthenaSKVehicle -> AFortAthenaVehicle -> AFortPhysicsPawn -> APawn -> AActor -> UObject
	// Size: 0x45 (0x24C5 - 0x2480)
	class AHoverboard_V2_C : public AJackalVehicle_Athena_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2480(0x8)
		UNiagaraComponent BoostFX_NS; // 0x2488(0x8)
		UNiagaraComponent NS_LoopingFX; // 0x2490(0x8)
		UFortVehicleFuelComponent FortVehicleFuel; // 0x2498(0x8)
		bool OutOfFuel; // 0x24A0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x24A1(0x7) UNKNOWN PROPERTY
		UNiagaraComponent inWaterFX_NS; // 0x24A8(0x8)
		double RotorWashForceStrength; // 0x24B0(0x8)
		AFN_WashForce_C Physical_Wash_Force; // 0x24B8(0x8)
		int32_t FXColorSet; // 0x24C0(0x4)
		bool CosmeticsInitialized; // 0x24C4(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/HoverboardV2/Vehicle/Hoverboard_V2.Hoverboard_V2_C");
			return ret;
		}

		void DeactivateComponents(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D60F2B700
		bool BP_CanBoost(); // Flags: Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D60F2BA00
		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent 0x15D60F2AB00
		void BP_OnEmptyFuel(); // Flags: Event|Public|BlueprintEvent 0x15D60F2B900
		void OnDeathPlayEffects(float Damage, FGameplayTagContainer& DamageTags, FVector Momentum, FHitResult& HitInfo, AFortPawn InstigatedBy, AActor DamageCauser, FGameplayEffectContextHandle EffectContext); // Flags: BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 0x15D60F2B100
		void OnJumped(float Charge); // Flags: Event|Public|BlueprintEvent 0x15D60F2AC00
		void OnCollisionHitEffects(FVector& HitLocation, FVector& HitNormalImpulse, FVector& HitFrictionImpulse, FVector& HitNormal, AActor HitActor, TEnumAsByte HitSurfaceType); // Flags: BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 0x15D60F2B200
		void OnEnteredWaterBody(AFortWaterBodyActor WaterBody); // Flags: Event|Public|BlueprintEvent 0x15D60F2B000
		void OnExitedWaterBody(AFortWaterBodyActor WaterBody); // Flags: Event|Public|BlueprintEvent 0x15D60F2AE00
		void OnEnteredWaterVolume(FVector& WaterSurfacePoint); // Flags: Event|Public|HasOutParms|BlueprintEvent 0x15D60F2AF00
		void OnExitedWaterVolume(FVector& WaterSurfacePoint); // Flags: Event|Public|HasOutParms|BlueprintEvent 0x15D60F2AD00
		void OnBoostBegin(); // Flags: Event|Public|BlueprintEvent 0x15D60F2B400
		void OnBoostEnd(); // Flags: Event|Public|BlueprintEvent 0x15D60F2B300
		void SetupCosmetics(); // Flags: BlueprintCallable|BlueprintEvent 0x15D60F2AA00
		void CheckWaterEvent(); // Flags: BlueprintCallable|BlueprintEvent 0x15D60F2B800
		void HandleRefueledFromEmpty(); // Flags: BlueprintCallable|BlueprintEvent 0x15D60F2B500
		void ExecuteUbergraph_Hoverboard_V2(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D60F2B600
	};

}
