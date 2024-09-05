#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: Audio
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /RockVehicle/Audio/Controller/BP_RockVehicleAudioController.BP_RockVehicleAudioController_C
	// Inherited from ARockVehicleAudioController -> AFortVehicleAudioController -> AActor -> UObject
	// Size: 0xD9 (0x5B1 - 0x4D8)
	class ABP_RockVehicleAudioController_C : public ARockVehicleAudioController	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x4D8(0x8)
		UAudioComponent* BoostFailedSound; // 0x4E0(0x8)
		UREVComponent* REV; // 0x4E8(0x8)
		UVelocitySyncMotorSimComponent* VelocitySyncMotorSim; // 0x4F0(0x8)
		UMotorPhysicsSimComponent* MotorPhysicsSim; // 0x4F8(0x8)
		UReverseMotorSimComponent* ReverseMotorSim; // 0x500(0x8)
		URevLimiterMotorSimComponent* RevLimiterMotorSim; // 0x508(0x8)
		UResistanceMotorSimComponent* ResistanceMotorSim; // 0x510(0x8)
		UThrottleStateMotorSimComponent* ThrottleStateMotorSim; // 0x518(0x8)
		UBoostMotorSimComponent* BoostMotorSim; // 0x520(0x8)
		UAudioComponent* OnGround; // 0x528(0x8)
		UAudioComponent* Boost; // 0x530(0x8)
		UAudioComponent* BoostEnd; // 0x538(0x8)
		UAudioComponent* SuperSonicLoop; // 0x540(0x8)
		UAudioComponent* InAir; // 0x548(0x8)
		UFortLayeredAudioComponent* Engine; // 0x550(0x8)
		UFortCollisionAudioComponent* Collision_Body; // 0x558(0x8)
		ARock_Vehicle_C* RockVehicle; // 0x560(0x8)
		bool IsLocal; // 0x568(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x569(0x7) UNKNOWN PROPERTY
		double Boost_Fade_Out_Duration; // 0x570(0x8)
		double EngineRampVolume; // 0x578(0x8)
		UCurveFloat* WheelImpactCurve; // 0x580(0x8)
		UCurveFloat* WheelImpactSkidCurve; // 0x588(0x8)
		TEnumAsByte<EPhysicalSurface> CachedSurface; // 0x590(0x1)
		bool In_Air; // 0x591(0x1)
		bool Occupied; // 0x592(0x1)
		bool TiresActive; // 0x593(0x1)
		unsigned char UnknownData01_6[0x4]; // 0x594(0x4) UNKNOWN PROPERTY
		UAudioComponent* PreDestroyAudioComponent; // 0x598(0x8)
		double DamageValue; // 0x5A0(0x8)
		USoundBase* PreDestroySoundCue; // 0x5A8(0x8)
		bool bOutOfFuel; // 0x5B0(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RockVehicle/Audio/Controller/BP_RockVehicleAudioController.BP_RockVehicleAudioController_C");
			return ret;
		}

		void UpdateTireSounds(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateSurfaceType(TEnumAsByte<EPhysicalSurface> InPhysicalSurface); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnExplode(AController* LastDamageInstigator, AFortAthenaVehicle* Vehicle); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTireCollision(FName Socket, float ImpactSpeed, FHitResult& OutHit); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetVehicleSurfaceType(TEnumAsByte<EPhysicalSurface> InPhysicalSurface, int32_t& Surface ID); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnBodyCollision(FVector HitLocation, FVector NormalImpulse, bool& FilteredHit, double& Magnitude); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetNewSnowmanTransform(FTransform& Transform); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetMaterialInt(int32_t& MatInt); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void InitRockVehicle(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnVehicleSurfaceTypeChanged(TEnumAsByte<EPhysicalSurface> NewSurface); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSuperSonicActivated(UActorComponent* Component, bool Reset); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSuperSonicDeactivated(UActorComponent* Component); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInAirUpdated(bool bNewInAir); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPawnExitedSeat(TScriptInterface<Class>& Vehicle, AFortPawn* PlayerPawn, int32_t SeatIndex); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnWaterStateChanged(bool IsEnteringWater); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPawnEnteredSeat(TScriptInterface<Class>& Vehicle, AFortPawn* PlayerPawn, int32_t SeatIndex); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCollision(FVector HitLocation, FVector NormalImpulse, AActor* Actor, TEnumAsByte<EPhysicalSurface> Surface); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnBoostDeactivated(UActorComponent* Comp); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnBoostActivated(UActorComponent* Comp, bool bReset); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnDodgeActivated(UActorComponent* Comp, bool bReset); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnDoubleJumpActivated(UActorComponent* Comp, bool bReset); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnJumpActivated(UActorComponent* Comp, bool bReset); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnBoostFailed(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCriticalDamage(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInit(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnUpdate(float DeltaSeconds); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void EventOnDamage(double Damage); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CleanUpLoopingAudio(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnOutOfFuel(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRefueledFromEmpty(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_BP_RockVehicleAudioController(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
