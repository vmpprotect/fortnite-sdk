#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: Audio
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class /RockVehicle/Audio/Controller/BP_RockVehicleAudioController.BP_RockVehicleAudioController_C
	// Inherited from ARockVehicleAudioController -> AFortVehicleAudioController -> AActor -> UObject
	// Size: 0xD9 (0x5B1 - 0x4D8)
	class ABP_RockVehicleAudioController_C : public ARockVehicleAudioController	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x4D8(0x8)
		UAudioComponent BoostFailedSound; // 0x4E0(0x8)
		UREVComponent REV; // 0x4E8(0x8)
		UVelocitySyncMotorSimComponent VelocitySyncMotorSim; // 0x4F0(0x8)
		UMotorPhysicsSimComponent MotorPhysicsSim; // 0x4F8(0x8)
		UReverseMotorSimComponent ReverseMotorSim; // 0x500(0x8)
		URevLimiterMotorSimComponent RevLimiterMotorSim; // 0x508(0x8)
		UResistanceMotorSimComponent ResistanceMotorSim; // 0x510(0x8)
		UThrottleStateMotorSimComponent ThrottleStateMotorSim; // 0x518(0x8)
		UBoostMotorSimComponent BoostMotorSim; // 0x520(0x8)
		UAudioComponent OnGround; // 0x528(0x8)
		UAudioComponent Boost; // 0x530(0x8)
		UAudioComponent BoostEnd; // 0x538(0x8)
		UAudioComponent SuperSonicLoop; // 0x540(0x8)
		UAudioComponent InAir; // 0x548(0x8)
		UFortLayeredAudioComponent Engine; // 0x550(0x8)
		UFortCollisionAudioComponent Collision_Body; // 0x558(0x8)
		ARock_Vehicle_C RockVehicle; // 0x560(0x8)
		bool IsLocal; // 0x568(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x569(0x7) UNKNOWN PROPERTY
		double Boost_Fade_Out_Duration; // 0x570(0x8)
		double EngineRampVolume; // 0x578(0x8)
		UCurveFloat WheelImpactCurve; // 0x580(0x8)
		UCurveFloat WheelImpactSkidCurve; // 0x588(0x8)
		TEnumAsByte CachedSurface; // 0x590(0x1)
		bool In_Air; // 0x591(0x1)
		bool Occupied; // 0x592(0x1)
		bool TiresActive; // 0x593(0x1)
		unsigned char UnknownData03_6[0x4]; // 0x594(0x4) UNKNOWN PROPERTY
		UAudioComponent PreDestroyAudioComponent; // 0x598(0x8)
		double DamageValue; // 0x5A0(0x8)
		USoundBase PreDestroySoundCue; // 0x5A8(0x8)
		bool bOutOfFuel; // 0x5B0(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RockVehicle/Audio/Controller/BP_RockVehicleAudioController.BP_RockVehicleAudioController_C");
			return ret;
		}

		void UpdateTireSounds(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D5C2CF900
		void UpdateSurfaceType(TEnumAsByte InPhysicalSurface); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D5C2CFA00
		void OnExplode(AController LastDamageInstigator, AFortAthenaVehicle Vehicle); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D5C2CCF00
		void OnTireCollision(FName Socket, float ImpactSpeed, FHitResult& OutHit); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D5C2CFE00
		void GetVehicleSurfaceType(TEnumAsByte InPhysicalSurface, int32_t& Surface ID); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D5C2CD900
		void OnBodyCollision(FVector HitLocation, FVector NormalImpulse, bool& FilteredHit, double& Magnitude); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D5C2CD700
		void GetNewSnowmanTransform(FTransform& Transform); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D5C2CDA00
		void GetMaterialInt(int32_t& MatInt); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D5C2CDB00
		void InitRockVehicle(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D5C2CD800
		void OnVehicleSurfaceTypeChanged(TEnumAsByte NewSurface); // Flags: BlueprintCallable|BlueprintEvent 0x15D5C2CFC00
		void OnSuperSonicActivated(UActorComponent Component, bool Reset); // Flags: BlueprintCallable|BlueprintEvent 0x15D5C2CC700
		void OnSuperSonicDeactivated(UActorComponent Component); // Flags: BlueprintCallable|BlueprintEvent 0x15D5C2CFF00
		void OnInAirUpdated(bool bNewInAir); // Flags: Event|Public|BlueprintCallable|BlueprintEvent 0x15D5C2CCE00
		void OnPawnExitedSeat(TScriptInterface& Vehicle, AFortPawn PlayerPawn, int32_t SeatIndex); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent 0x15D5C2CC900
		void OnWaterStateChanged(bool IsEnteringWater); // Flags: BlueprintCallable|BlueprintEvent 0x15D5C2CFB00
		void OnPawnEnteredSeat(TScriptInterface& Vehicle, AFortPawn PlayerPawn, int32_t SeatIndex); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent 0x15D5C2CCA00
		void OnCollision(FVector HitLocation, FVector NormalImpulse, AActor Actor, TEnumAsByte Surface); // Flags: BlueprintCallable|BlueprintEvent 0x15D5C2CD300
		void OnBoostDeactivated(UActorComponent Comp); // Flags: BlueprintCallable|BlueprintEvent 0x15D5C2CD500
		void OnBoostActivated(UActorComponent Comp, bool bReset); // Flags: BlueprintCallable|BlueprintEvent 0x15D5C2CD600
		void OnDodgeActivated(UActorComponent Comp, bool bReset); // Flags: BlueprintCallable|BlueprintEvent 0x15D5C2CD100
		void OnDoubleJumpActivated(UActorComponent Comp, bool bReset); // Flags: BlueprintCallable|BlueprintEvent 0x15D5C2CD000
		void OnJumpActivated(UActorComponent Comp, bool bReset); // Flags: BlueprintCallable|BlueprintEvent 0x15D5C2CCC00
		void OnBoostFailed(); // Flags: BlueprintCallable|BlueprintEvent 0x15D5C2CD400
		void OnCriticalDamage(); // Flags: BlueprintCallable|BlueprintEvent 0x15D5C2CD200
		void OnInit(); // Flags: Event|Public|BlueprintEvent 0x15D5C2CCD00
		void OnUpdate(float DeltaSeconds); // Flags: Event|Public|BlueprintEvent 0x15D5C2CFD00
		void EventOnDamage(double Damage); // Flags: BlueprintCallable|BlueprintEvent 0x15D5C2CDD00
		void CleanUpLoopingAudio(); // Flags: BlueprintCallable|BlueprintEvent 0x15D5C2CDE00
		void OnOutOfFuel(); // Flags: BlueprintCallable|BlueprintEvent 0x15D5C2CCB00
		void OnRefueledFromEmpty(); // Flags: BlueprintCallable|BlueprintEvent 0x15D5C2CC800
		void ExecuteUbergraph_BP_RockVehicleAudioController(int32_t EntryPoint); // Flags: Final|HasDefaults 0x15D5C2CDC00
	};

}
