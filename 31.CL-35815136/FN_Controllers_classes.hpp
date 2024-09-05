#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: Controllers
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /VehicleCosmeticsAudio/Controllers/BP_VehicleCosmetics_AudioController_Parent.BP_VehicleCosmetics_AudioController_Parent_C
	// Inherited from AVehicleCosmeticsAudioController -> AFortVehicleAudioController -> AActor -> UObject
	// Size: 0x1B0 (0x5C8 - 0x418)
	class ABP_VehicleCosmetics_AudioController_Parent_C : public AVehicleCosmeticsAudioController	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x418(0x8)
		UFortCollisionAudioComponent* SpringCompressionAudio; // 0x420(0x8)
		UFortCollisionAudioComponent* CollisionAudio; // 0x428(0x8)
		UVelocitySyncMotorSimComponent* VelocitySyncMotorSim; // 0x430(0x8)
		UMotorPhysicsSimComponent* MotorPhysicsSim; // 0x438(0x8)
		URevLimiterMotorSimComponent* RevLimiterMotorSim; // 0x440(0x8)
		UReverseMotorSimComponent* ReverseMotorSim; // 0x448(0x8)
		UResistanceMotorSimComponent* ResistanceMotorSim; // 0x450(0x8)
		UThrottleStateMotorSimComponent* ThrottleStateMotorSim; // 0x458(0x8)
		UAudioMotorModelComponent* MotorModel; // 0x460(0x8)
		AFortAthenaVehicle* Vehicle; // 0x468(0x8)
		int32_t SortOrder; // 0x470(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x474(0x4) UNKNOWN PROPERTY
		double MaxCollisionSpeed; // 0x478(0x8)
		double MaxBrakeThreshold; // 0x480(0x8)
		float Boost; // 0x488(0x4)
		bool CanShiftOverride; // 0x48C(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x48D(0x3) UNKNOWN PROPERTY
		double ThrottleMultiplier; // 0x490(0x8)
		float Surface_Friction_Modifier; // 0x498(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x49C(0x4) UNKNOWN PROPERTY
		double FrictionJitterMin; // 0x4A0(0x8)
		double FrictionJitterMax; // 0x4A8(0x8)
		float Motor_Friction_Modifier; // 0x4B0(0x4)
		bool GroundedOverride; // 0x4B4(0x1)
		bool IsLocalPawnInVehicle; // 0x4B5(0x1)
		unsigned char UnknownData03_6[0x2]; // 0x4B6(0x2) UNKNOWN PROPERTY
		AFortPlayerPawn* LocalPawnInVehicle; // 0x4B8(0x8)
		TEnumAsByte<EFortTeamAffiliation> PlayerAffliation; // 0x4C0(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x4C1(0x7) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnGearChangedEvent; // 0x4C8(0x10)
		bool bShouldRedline; // 0x4D8(0x1)
		unsigned char UnknownData05_6[0x7]; // 0x4D9(0x7) UNKNOWN PROPERTY
		double RedlineSurfaceFrictionMultiplier; // 0x4E0(0x8)
		FMulticastInlineDelegate OnRevLimiterHit; // 0x4E8(0x10)
		float CollisionMagnitude; // 0x4F8(0x4)
		int32_t PrevGear; // 0x4FC(0x4)
		USoundBase* DefaultEngineSound; // 0x500(0x8)
		USoundBase* CosmeticEngineSound; // 0x508(0x8)
		UVehicleAudioCosmeticData* Cosmetic_Data; // 0x510(0x8)
		bool IsTeamMemberInVehicle; // 0x518(0x1)
		bool LimitVehicleToLowSpecAudio; // 0x519(0x1)
		unsigned char UnknownData06_6[0x6]; // 0x51A(0x6) UNKNOWN PROPERTY
		USoundBase* DefaultIgnition; // 0x520(0x8)
		USoundBase* DefaultEngineOff; // 0x528(0x8)
		double IgnitionWorldTime; // 0x530(0x8)
		USoundBase* LoadedEngineSound; // 0x538(0x8)
		double IgnitionTimeThreshold; // 0x540(0x8)
		FVector CollisionLocation; // 0x548(0x18)
		AActor* CollidedActor; // 0x560(0x8)
		double CollisionValue; // 0x568(0x8)
		bool HitPawn; // 0x570(0x1)
		unsigned char UnknownData07_6[0x7]; // 0x571(0x7) UNKNOWN PROPERTY
		USoundBase* GainFuelSound; // 0x578(0x8)
		UAudioComponent* Fuel_Gained_Loop; // 0x580(0x8)
		TWeakObjectPtr<USoundBase*> DefaultEngineSoundPath; // 0x588(0x20)
		bool CosmeticsDataFailed; // 0x5A8(0x1)
		unsigned char UnknownData08_6[0x7]; // 0x5A9(0x7) UNKNOWN PROPERTY
		UAudioComponent* IgnitionAudio; // 0x5B0(0x8)
		bool bUnloadEngineSoundOnFadeOut; // 0x5B8(0x1)
		unsigned char UnknownData09_6[0x7]; // 0x5B9(0x7) UNKNOWN PROPERTY
		UB_Vehicle_AudioController_PrimaryDataAsset_C* Audio_Data_Asset; // 0x5C0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/VehicleCosmeticsAudio/Controllers/BP_VehicleCosmetics_AudioController_Parent.BP_VehicleCosmetics_AudioController_Parent_C");
			return ret;
		}

		void SetAudioDataAsset(UB_Vehicle_AudioController_PrimaryDataAsset_C* AudioDataAsset); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnEngineAudioComponentFinished(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UnregisterEngineSoundFromLoading(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RegisterEngineSoundForLoading(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Fuel Bindings(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnOutOfFuel(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRefuelStart(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRefuelStop(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetActorSoundParams(TArray<FAudioParameter>& Params); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void StopRefuelSoundLoop(); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PlayRefuelSoundLoop(); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PlayEngineOff(); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PlayIgnition(); // Flags: Protected|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetCosmeticData(UVehicleAudioCosmeticData* Cosmetic Data); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ToggleEngineSound(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ConfigureSoundData(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RemoveMotorSimComponent(TScriptInterface<Class> InComponent); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPassengersUpdated(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetRedlineState(bool Enabled); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		TWeakObjectPtr GetPlayerPerspectiveModel(); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PawnEnterVehicle(TScriptInterface<Class>& Vehicle, AFortPawn* PlayerPawn, int32_t SeatIndex); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PawnExitVehicle(TScriptInterface<Class>& Vehicle, AFortPawn* PlayerPawn, int32_t SeatIndex); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetNormalizedRpm(float& RPM); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void End Audio(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Start Audio(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AudioDebug(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool GetCanShift(); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool GetGrounded(); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetBoost(float& Output_Get); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetBraking(double& Return Value); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		float GetThrottle(); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		double GetUpSpeed(); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		double GetSideSpeed(); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		float GetFowardSpeed(); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		float GetTotalSpeed(); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateMotorModel(float Delta Time); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AddMotorComponents(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateSpringCompressionAudio(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateCollisionAudio(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, FHitResult& Hit); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BindEvents(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void On Sleep State Change(bool bIsAwake); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AddMotorSimComponentOrder(TScriptInterface<Class> InComponent); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__BP_Vehicles_AudioController_Parent_MotorPhysicsSim_K2Node_ComponentBoundEvent_0_OnGearChanged__DelegateSignature(int32_t NewGear); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__BP_Vehicles_AudioController_Parent_RevLimiterMotorSim_K2Node_ComponentBoundEvent_2_OnRevLimiterHit__DelegateSignature(); // Flags: BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInit(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnShutdown(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Event On Disabled Changed(bool bIsDisabled); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnBlowoff(float BlowoffStrength); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnCosmeticsFailed(FVehicleCosmeticsFailureInfo ReasonInfo); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnCosmeticsDataUpdated(UVehicleAudioCosmeticData* CosmeticData); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnEngineAudioDataLoaded(USoundBase* Sound); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnEngineAudioDataEjected(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_BP_VehicleCosmetics_AudioController_Parent(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRevLimiterHit__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnGearChangedEvent__DelegateSignature(int32_t NewGear, bool IgnoreExhaustPops); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
