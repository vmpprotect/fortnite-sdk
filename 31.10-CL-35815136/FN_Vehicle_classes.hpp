#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: Vehicle
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /HoverboardV2/Vehicle/Hoverboard_V2.Hoverboard_V2_C
	// Inherited from AJackalVehicle_Athena_C -> AFortAthenaJackalVehicle -> AFortAthenaSKVehicle -> AFortAthenaVehicle -> AFortPhysicsPawn -> APawn -> AActor -> UObject
	// Size: 0x45 (0x24C5 - 0x2480)
	class AHoverboard_V2_C : public AJackalVehicle_Athena_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2480(0x8)
		UNiagaraComponent* BoostFX_NS; // 0x2488(0x8)
		UNiagaraComponent* NS_LoopingFX; // 0x2490(0x8)
		UFortVehicleFuelComponent* FortVehicleFuel; // 0x2498(0x8)
		bool OutOfFuel; // 0x24A0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x24A1(0x7) UNKNOWN PROPERTY
		UNiagaraComponent* inWaterFX_NS; // 0x24A8(0x8)
		double RotorWashForceStrength; // 0x24B0(0x8)
		AFN_WashForce_C* Physical_Wash_Force; // 0x24B8(0x8)
		int32_t FXColorSet; // 0x24C0(0x4)
		bool CosmeticsInitialized; // 0x24C4(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/HoverboardV2/Vehicle/Hoverboard_V2.Hoverboard_V2_C");
			return ret;
		}

		void DeactivateComponents(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool BP_CanBoost(); // Flags: Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnEmptyFuel(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnDeathPlayEffects(float Damage, FGameplayTagContainer& DamageTags, FVector Momentum, FHitResult& HitInfo, AFortPawn* InstigatedBy, AActor* DamageCauser, FGameplayEffectContextHandle EffectContext); // Flags: BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnJumped(float Charge); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCollisionHitEffects(FVector& HitLocation, FVector& HitNormalImpulse, FVector& HitFrictionImpulse, FVector& HitNormal, AActor* HitActor, TEnumAsByte<EPhysicalSurface> HitSurfaceType); // Flags: BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnEnteredWaterBody(AFortWaterBodyActor* WaterBody); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnExitedWaterBody(AFortWaterBodyActor* WaterBody); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnEnteredWaterVolume(FVector& WaterSurfacePoint); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnExitedWaterVolume(FVector& WaterSurfacePoint); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnBoostBegin(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnBoostEnd(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetupCosmetics(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CheckWaterEvent(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleRefueledFromEmpty(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_Hoverboard_V2(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


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

}
