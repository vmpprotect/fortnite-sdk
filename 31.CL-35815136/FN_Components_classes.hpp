#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: Components
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /VehicleCosmetics/Components/BP_VehicleCosmeticsAMUC.BP_VehicleCosmeticsAMUC_C
	// Inherited from UVehicleCosmeticsAssembledMeshUserComponent -> UAssembledMeshUserComponent -> UActorComponent -> UObject
	// Size: 0x40 (0x790 - 0x750)
	class UBP_VehicleCosmeticsAMUC_C : public UVehicleCosmeticsAssembledMeshUserComponent	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x750(0x8)
		AFortAthenaVehicle* VehiclePawn; // 0x758(0x8)
		FGameplayTag GC_LoopingApplication; // 0x760(0x4)
		FName BoostTestSocketName; // 0x764(0x4)
		AActor* BoostTestSpawnedActor; // 0x768(0x8)
		UClass* BoostTestActorClass; // 0x770(0x8)
		AActor* TrailTestSpawnedActor; // 0x778(0x8)
		FName TrailTestSocketName; // 0x780(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x784(0x4) UNKNOWN PROPERTY
		UClass* TrailTestActorClass; // 0x788(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/VehicleCosmetics/Components/BP_VehicleCosmeticsAMUC.BP_VehicleCosmeticsAMUC_C");
			return ret;
		}

		void SpawnActorForValidationTest(FName SocketName, UClass* ActorClass, AActor* SpawnedActor); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ApplyInitialGC(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveBeginPlay(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RemoveInitialGC(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ValidateBoostTest(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void EndValidateBoostTest(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ValidateTrailTest(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void EndValidateTrailTest(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_BP_VehicleCosmeticsAMUC(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /EventMode/Components/EventMode_Activator_Component.EventMode_Activator_Component_C
	// Inherited from UFortGameFrameworkComponent_EventMode -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x0 (0x210 - 0x210)
	class UEventMode_Activator_Component_C : public UFortGameFrameworkComponent_EventMode	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/EventMode/Components/EventMode_Activator_Component.EventMode_Activator_Component_C");
			return ret;
		}
	};


	// Class /NPCLibrary/Components/BP_PlayerStateCustomFeedMessages.BP_PlayerStateCustomFeedMessages_C
	// Inherited from UFortPlayerStateComponent_CustomFeedMessage -> UFortPlayerStateComponent -> UPlayerStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x0 (0x108 - 0x108)
	class UBP_PlayerStateCustomFeedMessages_C : public UFortPlayerStateComponent_CustomFeedMessage	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/NPCLibrary/Components/BP_PlayerStateCustomFeedMessages.BP_PlayerStateCustomFeedMessages_C");
			return ret;
		}
	};


	// Class /JunoQuests/Components/BP_JunoFTUEQuestTrackerComponent.BP_JunoFTUEQuestTrackerComponent_C
	// Inherited from UJunoControllerComponent_FTUEQuestTracker -> UFortControllerComponent -> UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x0 (0xF0 - 0xF0)
	class UBP_JunoFTUEQuestTrackerComponent_C : public UJunoControllerComponent_FTUEQuestTracker	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/JunoQuests/Components/BP_JunoFTUEQuestTrackerComponent.BP_JunoFTUEQuestTrackerComponent_C");
			return ret;
		}
	};


	// Class /VehicleAudio/Components/VehicleSound_DamageState.VehicleSound_DamageState_C
	// Inherited from UFortVehicleSoundComponent_DamageState -> UFortVehicleSoundComponent -> UActorComponent -> UObject
	// Size: 0x1A1 (0x291 - 0xF0)
	class UVehicleSound_DamageState_C : public UFortVehicleSoundComponent_DamageState	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xF0(0x8)
		int32_t DamageIndex; // 0xF8(0x4)
		unsigned char UnknownData00_6[0x4]; // 0xFC(0x4) UNKNOWN PROPERTY
		UAudioComponent* DamageAudio; // 0x100(0x8)
		double CurrentHealth; // 0x108(0x8)
		UAudioComponent* ExplodeAudio; // 0x110(0x8)
		bool IsDestroyed; // 0x118(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x119(0x7) UNKNOWN PROPERTY
		USoundBase* TirePopSound; // 0x120(0x8)
		TMap<int32_t, double> DamageStatValues; // 0x128(0x50)
		TMap<int32_t, USoundBase*> DamageStateAudio; // 0x178(0x50)
		TMap<int32_t, USoundBase*> WaterDamageStateSounds; // 0x1C8(0x50)
		FName PreDestroy; // 0x218(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x21C(0x4) UNKNOWN PROPERTY
		USoundBase* PreDestroySoundCue; // 0x220(0x8)
		USoundBase* PreWaterDestroySoundCue; // 0x228(0x8)
		USoundBase* ExplodeSound; // 0x230(0x8)
		UAudioComponent* PreDestroyAudioComponent; // 0x238(0x8)
		FName WindowName; // 0x240(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x244(0x4) UNKNOWN PROPERTY
		USoundBase* WindowBreakSoundCue; // 0x248(0x8)
		bool IsInWater; // 0x250(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x251(0x7) UNKNOWN PROPERTY
		USoundBase* WaterExplodeSound; // 0x258(0x8)
		USoundBase* CurrentDamageWaterSound; // 0x260(0x8)
		USoundBase* CurrentDamageSound; // 0x268(0x8)
		double ScrapingParam; // 0x270(0x8)
		bool IsScraping; // 0x278(0x1)
		unsigned char UnknownData05_6[0x7]; // 0x279(0x7) UNKNOWN PROPERTY
		FTimerHandle HandleScraping; // 0x280(0x8)
		UAudioComponent* ScrapingAudio; // 0x288(0x8)
		bool IsDamaged; // 0x290(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/VehicleAudio/Components/VehicleSound_DamageState.VehicleSound_DamageState_C");
			return ret;
		}

		void SetNativeData(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Stop Scrape Audio(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Tire Popped(FName InName, FName BoneName, bool NewlyDisabled); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void On Scraping Sides or Top(bool bIsScraping); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Update Scraping Audio(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void On Sleep State Changed(bool bIsAwake); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Set Damage State Sounds(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Exit Water(AFortAthenaVehicle* Vehicle, AFortWaterBodyActor* WaterBody); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Enter Water(AFortAthenaVehicle* Vehicle, AFortWaterBodyActor* WaterBody); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Window Break(FName ShapeName, FName BroneName); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Parts Damaged(FVehicleDamageablePartConfig& PartConfig, FVehicleDamageablePart& Part, bool bNewlyDisabled, bool bNewlyEnabled); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void On Health Change(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void On PreDestroy(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void On EndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void On Explode(AController* LastDamageInstigator, AFortAthenaVehicle* Vehicle); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Stop Damage Audio(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Play Damage State Sound(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Update Current Health(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Get Normalized Health(double& NormalizedHealth); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInit(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnShutdown(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnExplode(AController* LastDamageInstigator, AFortAthenaVehicle* Vehicle); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnScrapingSidesOrTop(bool bIsScraping); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSleepStateChanged(bool bIsAwake); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_VehicleSound_DamageState(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /VehicleAudio/Components/VehicleSound_Surfaces.VehicleSound_Surfaces_C
	// Inherited from UFortVehicleSoundComponent_Surface -> UFortVehicleSoundComponent -> UActorComponent -> UObject
	// Size: 0x1E0 (0x458 - 0x278)
	class UVehicleSound_Surfaces_C : public UFortVehicleSoundComponent_Surface	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x278(0x8)
		FTimerHandle Handle_Surface_Timer; // 0x280(0x8)
		double SurfaceParamInterpSpeed; // 0x288(0x8)
		UB_VehicleSurfaceDataAsset_C* SurfaceDefaultAsset; // 0x290(0x8)
		TMap<FGameplayTag, UB_VehicleSurfaceDataAsset_C*> TireModAssets; // 0x298(0x50)
		int32_t Surface_ID; // 0x2E8(0x4)
		float SkiddingParamInterpSpeed; // 0x2EC(0x4)
		UAudioComponent* Skid_Audio; // 0x2F0(0x8)
		TMap<TEnumAsByte, TEnumAsByte> SurfaceMap; // 0x2F8(0x50)
		double SpringCompressionMagnitudeAttack; // 0x348(0x8)
		double SpringCompressionMagnitudeRelease; // 0x350(0x8)
		bool bIsInWater; // 0x358(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x359(0x7) UNKNOWN PROPERTY
		double WaterParamInterpSpeed; // 0x360(0x8)
		USoundBase* WaterExitSound; // 0x368(0x8)
		USoundBase* WaterEnterSound; // 0x370(0x8)
		bool bHasSkid; // 0x378(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x379(0x7) UNKNOWN PROPERTY
		UAudioComponent* Skid_End_Audio; // 0x380(0x8)
		double AirInterpSpeedAttack; // 0x388(0x8)
		double AirInterpSpeedRelease; // 0x390(0x8)
		UAudioComponent* Brake_Audio; // 0x398(0x8)
		USoundBase* HardStopSound; // 0x3A0(0x8)
		double HardStopThreshold; // 0x3A8(0x8)
		USoundBase* SoftStopSound; // 0x3B0(0x8)
		double SoftStopThreshold; // 0x3B8(0x8)
		float BrakeStopFadeOutDuration; // 0x3C0(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x3C4(0x4) UNKNOWN PROPERTY
		double MinSpeedForSkidFX; // 0x3C8(0x8)
		double MaxSpeedForSkidFX; // 0x3D0(0x8)
		double LastGameTimeOnGround; // 0x3D8(0x8)
		double MinAirTimeForLandSound; // 0x3E0(0x8)
		float SpringCompressionMagnitude; // 0x3E8(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x3EC(0x4) UNKNOWN PROPERTY
		double SurfaceMagnitudeParam; // 0x3F0(0x8)
		float ResetSpringCompressionMagnitudeTime; // 0x3F8(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x3FC(0x4) UNKNOWN PROPERTY
		FVector LandSoundLocationOffset; // 0x400(0x18)
		USoundBase* LandSound; // 0x418(0x8)
		int32_t Tires; // 0x420(0x4)
		TEnumAsByte<EPhysicalSurface> Surface_Type_Vehicle_On; // 0x424(0x1)
		bool InAir; // 0x425(0x1)
		bool IsSurfaceAudioPlaying; // 0x426(0x1)
		unsigned char UnknownData05_6[0x1]; // 0x427(0x1) UNKNOWN PROPERTY
		USoundBase* CurrentAudioSurface; // 0x428(0x8)
		bool IsSurfaceSoundPlaying; // 0x430(0x1)
		unsigned char UnknownData06_6[0x7]; // 0x431(0x7) UNKNOWN PROPERTY
		TArray<UAudioComponent*> SurfaceAudioComponents; // 0x438(0x10)
		double SurfaceSpeed; // 0x448(0x8)
		bool SwapSurface; // 0x450(0x1)
		bool TireMod; // 0x451(0x1)
		unsigned char UnknownData07_6[0x2]; // 0x452(0x2) UNKNOWN PROPERTY
		FGameplayTag TireModTag; // 0x454(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/VehicleAudio/Components/VehicleSound_Surfaces.VehicleSound_Surfaces_C");
			return ret;
		}

		void OnSleepStateChange(bool bIsAwake); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnModApplied(AFortAthenaVehicle* Vehicle, FGameplayTag& ModTag); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void StopSurfaceAudio(float FadeOutDuration); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PlaySurfaceAudio(USoundBase* SoundCue); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetSurfaceAudioComponent(TArray<UAudioComponent*>& Surface Audio); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSurfaceTypeChange(TEnumAsByte<EPhysicalSurface> SurfaceTypeVehicleIsOn); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Update Surface(double DeltaTime); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTireRepaired(int32_t TireIndex); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnTirePopped(int32_t TireIndex); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void  UpdateTireCount(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateSurfaceMagnitude(double DeltaTime); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSkiddingChanged(bool bNewState); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInAirChanged(bool bNewState); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnBrakingChanged(bool bNewState); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ResetJitterMagnitude(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSpringCompression(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetSurfaceID(int32_t Surface ID); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetNativeData(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool IsVehicleStopping(double HardStopThreshold, double SoftStopThreshold, bool&  IsHardStop); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool IsAccelerating(); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool HasLostTraction(); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool IsBoostingOnGround(); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnExitBodyWater(AFortAthenaVehicle* Vehicle, AFortWaterBodyActor* WaterBody); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnEnterBodyWater(AFortAthenaVehicle* Vehicle, AFortWaterBodyActor* WaterBody); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInit(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnShutdown(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnUpdate(float DeltaSeconds); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateOnSurfaceChange(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_VehicleSound_Surfaces(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /VehicleAudio/Components/VehicleSound_Boost.VehicleSound_Boost_C
	// Inherited from UFortVehicleSoundComponent_Boost -> UFortVehicleSoundComponent -> UActorComponent -> UObject
	// Size: 0x38 (0x118 - 0xE0)
	class UVehicleSound_Boost_C : public UFortVehicleSoundComponent_Boost	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xE0(0x8)
		USoundBase* BoostSound; // 0xE8(0x8)
		float BoostFadeOut; // 0xF0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0xF4(0x4) UNKNOWN PROPERTY
		USoundBase* BoostEndSound; // 0xF8(0x8)
		float BoostEndFadeOut; // 0x100(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x104(0x4) UNKNOWN PROPERTY
		UAudioComponent* BoostStartAudio; // 0x108(0x8)
		UAudioComponent* BoostEndAudio; // 0x110(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/VehicleAudio/Components/VehicleSound_Boost.VehicleSound_Boost_C");
			return ret;
		}

		void SetNativeData(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void On Boost Finished(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void On Boost(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInit(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_VehicleSound_Boost(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /VehicleAudio/Components/VehicleSound_MotorSims.VehicleSound_MotorSims_C
	// Inherited from UFortVehicleSoundComponent -> UActorComponent -> UObject
	// Size: 0x1AC (0x264 - 0xB8)
	class UVehicleSound_MotorSims_C : public UFortVehicleSoundComponent	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xB8(0x8)
		float Blowoff_Min_Throttle_Time; // 0xC0(0x4)
		float Up_Speed_Max_Friction; // 0xC4(0x4)
		float Min_Speed; // 0xC8(0x4)
		unsigned char UnknownData00_6[0x4]; // 0xCC(0x4) UNKNOWN PROPERTY
		FRuntimeFloatCurve Side_Speed_Friction_Curve; // 0xD0(0x88)
		float Reverse_Engine_Resistance_Modifier; // 0x158(0x4)
		float Limit_Time; // 0x15C(0x4)
		float Decel_Scale; // 0x160(0x4)
		float Air_Max_Throttle_Time; // 0x164(0x4)
		float Side_Speed_Threshold; // 0x168(0x4)
		float Limiter_Max_Rpm; // 0x16C(0x4)
		float Weight; // 0x170(0x4)
		float Engine_Torque; // 0x174(0x4)
		float Braking_Horse_Power; // 0x178(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x17C(0x4) UNKNOWN PROPERTY
		TArray<float> Gear_Ratios; // 0x180(0x10)
		float Clutched_Gear_Ratio; // 0x190(0x4)
		bool Use_Infinite_Gears; // 0x194(0x1)
		bool Always_Downshift_To_Zeroth_Gear; // 0x195(0x1)
		unsigned char UnknownData02_6[0x2]; // 0x196(0x2) UNKNOWN PROPERTY
		float Infinite_Gear_Ratio; // 0x198(0x4)
		float Up_Shift_Max_Rpm; // 0x19C(0x4)
		float Down_Shift_Start_Rpm; // 0x1A0(0x4)
		float Clutched_Force_Modifier; // 0x1A4(0x4)
		float Clutched_Decel_Scale; // 0x1A8(0x4)
		float Engine_Gear_Ratio; // 0x1AC(0x4)
		float Engine_Friction; // 0x1B0(0x4)
		float Ground_Friction; // 0x1B4(0x4)
		float Wind_Resistance_Per_Velocity; // 0x1B8(0x4)
		float Throttle_Interpolation_Time; // 0x1BC(0x4)
		float Rpm_Interp_Speed; // 0x1C0(0x4)
		float No_Throttle_Time; // 0x1C4(0x4)
		float Speed_Threshold; // 0x1C8(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x1CC(0x4) UNKNOWN PROPERTY
		FRuntimeFloatCurve Speed_To_Rpm_Curve; // 0x1D0(0x88)
		float Interp_Speed; // 0x258(0x4)
		float Interp_Time; // 0x25C(0x4)
		float First_Gear_Throttle_Threshold; // 0x260(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/VehicleAudio/Components/VehicleSound_MotorSims.VehicleSound_MotorSims_C");
			return ret;
		}

		void OnInit(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetThrottleStateMotorSim(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetResistanceMotorSim(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetReverseMotorSim(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetRevLimiterMotorSim(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetMotorPhysicsSim(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetVelocitySyncMotorSim(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_VehicleSound_MotorSims(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /VehicleAudio/Components/VehicleSound_Speed.VehicleSound_Speed_C
	// Inherited from UFortVehicleSoundComponent_Speed -> UFortVehicleSoundComponent -> UActorComponent -> UObject
	// Size: 0x58 (0x150 - 0xF8)
	class UVehicleSound_Speed_C : public UFortVehicleSoundComponent_Speed	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xF8(0x8)
		USoundBase* GearShiftUpSound; // 0x100(0x8)
		USoundBase* GearShiftDownSound; // 0x108(0x8)
		USoundBase* RevLimiterHitSound; // 0x110(0x8)
		USoundBase* ReverseSound; // 0x118(0x8)
		double ReversingTriggerTime; // 0x120(0x8)
		int32_t CurrentGear; // 0x128(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x12C(0x4) UNKNOWN PROPERTY
		UAudioComponent* ShiftAudio; // 0x130(0x8)
		UAudioComponent* ReverseAudio; // 0x138(0x8)
		float ReverseFadeOutDuration; // 0x140(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x144(0x4) UNKNOWN PROPERTY
		UAudioComponent* RevLimiter; // 0x148(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/VehicleAudio/Components/VehicleSound_Speed.VehicleSound_Speed_C");
			return ret;
		}

		void OnGearShiftChange(int32_t NewGear); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRevLimiterHit(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInit(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnReversedChanged(bool bReversing); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_VehicleSound_Speed(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /VehicleAudio/Components/VehicleSound_Horn.VehicleSound_Horn_C
	// Inherited from UFortVehicleSoundComponent -> UActorComponent -> UObject
	// Size: 0x48 (0x100 - 0xB8)
	class UVehicleSound_Horn_C : public UFortVehicleSoundComponent	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xB8(0x8)
		USoundBase* HornSound; // 0xC0(0x8)
		UAudioComponent* HornAudio; // 0xC8(0x8)
		FVector2D HornPitchOffset; // 0xD0(0x10)
		bool bIsSpammable; // 0xE0(0x1)
		bool bStopOnRelease; // 0xE1(0x1)
		unsigned char UnknownData00_6[0x2]; // 0xE2(0x2) UNKNOWN PROPERTY
		float HornFadeOutOnRelease; // 0xE4(0x4)
		bool bShouldRedlineWhenHeld; // 0xE8(0x1)
		bool bStackable; // 0xE9(0x1)
		bool IsHeld; // 0xEA(0x1)
		unsigned char UnknownData01_6[0x1]; // 0xEB(0x1) UNKNOWN PROPERTY
		float HornMinSpeed; // 0xEC(0x4)
		double Reverse_Horn_Min_Speed; // 0xF0(0x8)
		double PitchOffset; // 0xF8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/VehicleAudio/Components/VehicleSound_Horn.VehicleSound_Horn_C");
			return ret;
		}

		void CanUseHorn(bool& Result); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRevLimiterHit(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnHorn(AFortPlayerControllerAthena* Controller, AFortAthenaVehicle* Vehicle, bool bIsHeld); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInit(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_VehicleSound_Horn(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /ScoutDrone/Components/FortScoutDronePawnOverrideComponent.FortScoutDronePawnOverrideComponent_C
	// Inherited from UFortScoutDronePawnOverrideComponent -> UFortPawnOverrideComponent -> UFortPawnComponent -> UPawnComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x0 (0xB0 - 0xB0)
	class UFortScoutDronePawnOverrideComponent_C : public UFortScoutDronePawnOverrideComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/ScoutDrone/Components/FortScoutDronePawnOverrideComponent.FortScoutDronePawnOverrideComponent_C");
			return ret;
		}
	};


	// Class /ScoutDrone/Components/BP_FortScoutDronePickupManagerComponent.BP_FortScoutDronePickupManagerComponent_C
	// Inherited from UFortScoutDronePickupManager -> UPawnComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x34 (0x20C - 0x1D8)
	class UBP_FortScoutDronePickupManagerComponent_C : public UFortScoutDronePickupManager	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x1D8(0x8)
		FGameplayTag Pickup_Attached_Gameplay_Cue_Tag; // 0x1E0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x1E4(0x4) UNKNOWN PROPERTY
		UAnimMontage* Pick_up_Items_Anim_Montage; // 0x1E8(0x8)
		UAnimMontage* Drop_Items_Anim_Montage; // 0x1F0(0x8)
		UClass* In_Camera_Modifier_Class; // 0x1F8(0x8)
		UCameraModifier* CameraModifierRef; // 0x200(0x8)
		FGameplayTag Dropped_Gameplay_Cue_Tag; // 0x208(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/ScoutDrone/Components/BP_FortScoutDronePickupManagerComponent.BP_FortScoutDronePickupManagerComponent_C");
			return ret;
		}

		void RemoveLoopingGameplayCueOnDrop(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AddLoopingGameplayCueOnPickup(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Quest Pick Up Weapon Func(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ChangeHUDDescription(bool bAttached); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetDroneControliingPlayer(AFortPawn* AsFort Pawn); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnActorsAttached(); // Flags: BlueprintCosmetic|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnActorsDetached(); // Flags: BlueprintCosmetic|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_BP_FortScoutDronePickupManagerComponent(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /RidingContent/Components/BoarRidableComponent.BoarRidableComponent_C
	// Inherited from UCreatureBaseRidableComponent_C -> UControllableRidableComponent -> URidableComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x4B (0xEEC - 0xEA1)
	class UBoarRidableComponent_C : public UCreatureBaseRidableComponent_C	
	{
	public:
		unsigned char UnknownData00_3[0x7]; // 0xEA1(0x7) UNKNOWN PROPERTY
		FPointerToUberGraphFrame UberGraphFrame; // 0xEA8(0x8)
		USoundBase* BurtChargeStartSound; // 0xEB0(0x8)
		UAudioComponent* ChargeSoundComp; // 0xEB8(0x8)
		double SprintCooldDownTime; // 0xEC0(0x8)
		UClass* GESprintImpactPawn; // 0xEC8(0x8)
		FGameplayTag SprintImpactGameplayCueTag; // 0xED0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xED4(0x4) UNKNOWN PROPERTY
		UClass* GESprintImpactVehicle; // 0xED8(0x8)
		FGameplayTag SprintChargeImpact_Default_CueTag; // 0xEE0(0x4)
		FGameplayTag SprintChargeImpact_Pawn_CueTag; // 0xEE4(0x4)
		FGameplayTag SprintChargeImpact_DestroyBuild_CueTag; // 0xEE8(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RidingContent/Components/BoarRidableComponent.BoarRidableComponent_C");
			return ret;
		}

		void OnReaction(UObject* Object, FHitResult HitResult); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleRiderStoppedRiding(URiderComponent* Rider); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleRiderStartedRiding(URiderComponent* Rider); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleAbilityStarted(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveBeginPlay(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnReactionEvent(AActor* HitActor, bool bFromAsyncSweepBox, FCollisionReactionType CollisionReactionType, bool bIsFirstContinuousReactionOnDelayableActor, FHitResult& HitResult); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_BoarRidableComponent(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /RidingContent/Components/WolfRidableComponent.WolfRidableComponent_C
	// Inherited from UCreatureBaseRidableComponent_C -> UControllableRidableComponent -> URidableComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x0 (0xEA1 - 0xEA1)
	class UWolfRidableComponent_C : public UCreatureBaseRidableComponent_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RidingContent/Components/WolfRidableComponent.WolfRidableComponent_C");
			return ret;
		}
	};


	// Class /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C
	// Inherited from UControllableRidableComponent -> URidableComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x6C1 (0xEA1 - 0x7E0)
	class UCreatureBaseRidableComponent_C : public UControllableRidableComponent	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x7E0(0x8)
		FGameplayTagContainer T_CreatureIsBeingRidden; // 0x7E8(0x20)
		UClass* GE_CreatureIsBeingRidden; // 0x808(0x8)
		UClass* GE_CreatureIsBeingRidden_Passive; // 0x810(0x8)
		bool bDebugDisplay; // 0x818(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x819(0x7) UNKNOWN PROPERTY
		double DebugTickRate; // 0x820(0x8)
		FVector DebugServerRiderLocation; // 0x828(0x18)
		double CapsuleRadiusOffset; // 0x840(0x8)
		double CapsuleHalfHeightOffset; // 0x848(0x8)
		FGameplayTagContainer T_RidingSpecialAbility; // 0x850(0x20)
		UAnimSequence* IdleAnim_Add; // 0x870(0x8)
		UAnimSequence* RunAnim_Add; // 0x878(0x8)
		UBlendSpace* TurnBS; // 0x880(0x8)
		double MinSpeedToRun; // 0x888(0x8)
		double Run_RampIntoSpeed; // 0x890(0x8)
		double Run_RampIntoSpeed_ADS; // 0x898(0x8)
		double Run_PlayRate; // 0x8A0(0x8)
		double Run_PlayRate_ADS; // 0x8A8(0x8)
		double SpringAlpha; // 0x8B0(0x8)
		double SpringAlpha_ADS; // 0x8B8(0x8)
		double Idle_Alpha; // 0x8C0(0x8)
		double Idle_Alpha_ADS; // 0x8C8(0x8)
		double Run_Alpha; // 0x8D0(0x8)
		double Run_Alpha_ADS; // 0x8D8(0x8)
		double Turn_Alpha; // 0x8E0(0x8)
		double Turn_Alpha_ADS; // 0x8E8(0x8)
		UAnimSequence* Clamp_AnimPose_LastResort; // 0x8F0(0x8)
		FRotator Clamp_Foot_R_Adjust; // 0x8F8(0x18)
		FRotator Clamp_Foot_L_Adjust; // 0x910(0x18)
		double CapsuleRadiusOffset_Emote; // 0x928(0x8)
		double CapsuleHalfHeightOffset_Emote; // 0x930(0x8)
		FVector Clamp_Location_Offset; // 0x938(0x18)
		FRotator Clamp_Rotation_Offset; // 0x950(0x18)
		FVector Clamp_ScaleAdjust; // 0x968(0x18)
		FName RidableSocketName; // 0x980(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x984(0x4) UNKNOWN PROPERTY
		double RidableSocket_Alpha; // 0x988(0x8)
		UClass* GE_CooldownOverride; // 0x990(0x8)
		FGameplayTagContainer T_CreatureOverrideCooldown; // 0x998(0x20)
		TMap<TEnumAsByte, TEnumAsByte> OriginalCollisionResponseMap; // 0x9B8(0x50)
		FSoundIndicatorIconPicker RidingSoundIndicatorIconOverride; // 0xA08(0x28)
		FMulticastInlineDelegate AudioOnJump; // 0xA30(0x10)
		FMulticastInlineDelegate AudioOnJumpApex; // 0xA40(0x10)
		char MovementMode; // 0xA50(0x1)
		bool bFalling; // 0xA51(0x1)
		unsigned char UnknownData02_6[0x6]; // 0xA52(0x6) UNKNOWN PROPERTY
		FScalableFloat RidingAbilityEnable_HF; // 0xA58(0x28)
		double JumpAttach_GroundHeightMin; // 0xA80(0x8)
		double JumpAttach_GroundHeightBuffer; // 0xA88(0x8)
		bool UseAltRidingMessage; // 0xA90(0x1)
		unsigned char UnknownData03_6[0x7]; // 0xA91(0x7) UNKNOWN PROPERTY
		FText Riding_Interaction_Text; // 0xA98(0x10)
		double currentEnergyValue; // 0xAA8(0x8)
		UPlayerRiderComponent_C* PlayerRiderComponentRef; // 0xAB0(0x8)
		ANPC_Pawn_Wildlife_Parent_C* NPCPawnWildlifeRef; // 0xAB8(0x8)
		double previousTimeTracked; // 0xAC0(0x8)
		double energyTrackingDeltaTime; // 0xAC8(0x8)
		bool OldEnergyFlowEnabled; // 0xAD0(0x1)
		bool ShouldHaveEnergy; // 0xAD1(0x1)
		unsigned char UnknownData04_6[0x6]; // 0xAD2(0x6) UNKNOWN PROPERTY
		double EnergyRateOfDecayStopped; // 0xAD8(0x8)
		bool allowUpdateEnergyTrackingTick; // 0xAE0(0x1)
		bool lastBeingRiddenState; // 0xAE1(0x1)
		unsigned char UnknownData05_6[0x6]; // 0xAE2(0x6) UNKNOWN PROPERTY
		FCurveTableRowHandle EnergyRateOfDecayMoving; // 0xAE8(0x10)
		FCurveTableRowHandle EnergyRateOfDecaySprinting; // 0xAF8(0x10)
		double CurrentEnergyRateOfRecharge; // 0xB08(0x8)
		FCurveTableRowHandle ExhaustedEnergyRateOfRecharge; // 0xB10(0x10)
		double EnergyWarningThreshold; // 0xB20(0x8)
		double EnergyCriticalThreshold; // 0xB28(0x8)
		bool energyWarningActive; // 0xB30(0x1)
		bool energyCriticalActive; // 0xB31(0x1)
		unsigned char UnknownData06_6[0x6]; // 0xB32(0x6) UNKNOWN PROPERTY
		double minMovementSpeedTreshold; // 0xB38(0x8)
		bool IsJumping; // 0xB40(0x1)
		unsigned char UnknownData07_6[0x7]; // 0xB41(0x7) UNKNOWN PROPERTY
		double EnergyRegenThreshold; // 0xB48(0x8)
		bool AlwaysRegenWhenNotRidden; // 0xB50(0x1)
		unsigned char UnknownData08_6[0x7]; // 0xB51(0x7) UNKNOWN PROPERTY
		UClass* GE_EnergyWarning; // 0xB58(0x8)
		UClass* GE_EnergyCritical; // 0xB60(0x8)
		UClass* GE_EnergyDepleted; // 0xB68(0x8)
		FGameplayTagContainer T_EnergyWarning; // 0xB70(0x20)
		FGameplayTagContainer T_EnergyCritical; // 0xB90(0x20)
		FGameplayTagContainer T_EnergyDepleted; // 0xBB0(0x20)
		FGameplayTagContainer T_CannotRideBucket; // 0xBD0(0x20)
		UClass* Gameplay_Effect; // 0xBF0(0x8)
		FGameplayTag SprintingAbilityTag; // 0xBF8(0x4)
		unsigned char UnknownData09_6[0x4]; // 0xBFC(0x4) UNKNOWN PROPERTY
		UClass* GE_EatToRefuel; // 0xC00(0x8)
		unsigned char UnknownData10_6[0x8]; // 0xC08(0x8) UNKNOWN PROPERTY
		FSlateBrush IconBrush; // 0xC10(0xB0)
		UClass* GE_Creature_Sprint; // 0xCC0(0x8)
		USoundLibrary* RidingFoleySoundLibrary; // 0xCC8(0x8)
		FGameplayTagContainer TagsPreventSprinting; // 0xCD0(0x20)
		FMulticastInlineDelegate RidableUIStart; // 0xCF0(0x10)
		FMulticastInlineDelegate RidableUIUpdateEnergy; // 0xD00(0x10)
		FGameplayTag OutOfEnergySoundLibTag; // 0xD10(0x4)
		FGameplayTag SprintStartSoundLibTag; // 0xD14(0x4)
		TEnumAsByte<TInteractionType> Riding_Interaction_Type; // 0xD18(0x1)
		unsigned char UnknownData11_6[0x7]; // 0xD19(0x7) UNKNOWN PROPERTY
		double StartInAirTimestamp; // 0xD20(0x8)
		FTimerHandle RetryJumpExitTimerHandle; // 0xD28(0x8)
		double JumpExitBufferStartTimeStamp; // 0xD30(0x8)
		FScalableFloat JumpExitBufferTime; // 0xD38(0x28)
		FTimerHandle JumpExitBufferTimerHandle; // 0xD60(0x8)
		FGameplayTag MountLandedCueTag; // 0xD68(0x4)
		unsigned char UnknownData12_6[0x4]; // 0xD6C(0x4) UNKNOWN PROPERTY
		UClass* GE_BlockCreatureAttackOnDismount; // 0xD70(0x8)
		bool EnergyRegenActive; // 0xD78(0x1)
		unsigned char UnknownData13_6[0x7]; // 0xD79(0x7) UNKNOWN PROPERTY
		FGameplayTagContainer BlockPetting_TagContainer; // 0xD80(0x20)
		bool infiniteStaminaBuffEnabled; // 0xDA0(0x1)
		unsigned char UnknownData14_6[0x3]; // 0xDA1(0x3) UNKNOWN PROPERTY
		FGameplayTag InfiniteStaminaEffect_GameplayCueTag; // 0xDA4(0x4)
		FGameplayTagContainer Cannot_Ride_Rider_Bucket; // 0xDA8(0x20)
		FScalableFloat JumpFatigue_Enabled; // 0xDC8(0x28)
		FScalableFloat JumpFatigue_ApplyFatigueMinJumpCount; // 0xDF0(0x28)
		UClass* JumpFatigueGameplayEffect; // 0xE18(0x8)
		bool JumpFatigueDebugEnabled; // 0xE20(0x1)
		unsigned char UnknownData15_6[0x3]; // 0xE21(0x3) UNKNOWN PROPERTY
		int32_t JumpFatigueJumpCount; // 0xE24(0x4)
		double JumpFatigue_LastLandingTimeStamp; // 0xE28(0x8)
		FScalableFloat JumpFatigue_ResetCounterDelay; // 0xE30(0x28)
		bool JumpFatigue_ShouldTimeStampNextLanding; // 0xE58(0x1)
		unsigned char UnknownData16_6[0x3]; // 0xE59(0x3) UNKNOWN PROPERTY
		FActiveGameplayEffectHandle JumpFatigue_GEHandle; // 0xE5C(0x8)
		unsigned char UnknownData17_6[0x4]; // 0xE64(0x4) UNKNOWN PROPERTY
		FTimerHandle JumpFatigue_RemovalTimerHandle; // 0xE68(0x8)
		FScalableFloat JumpFatigue_GeDurationPostLanding; // 0xE70(0x28)
		UClass* GE_NotPetable_IsBeingRidden; // 0xE98(0x8)
		bool bAllowRidingInteraction; // 0xEA0(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C");
			return ret;
		}

		void GetRidingInfoFromTarget(double& JumpAttachGroundHeightMin, double& JumpAttachGroundHeightBuffer, bool& UsesAltRidingMessage); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void JumpFatigue_LandTimeStamp(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void JumpFatigue_CheckApplyFatigue(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void JumpFatigue_CountJumps(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void JumpFatigue_RemoveFatigue(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void JumpFatigue_Landed(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Should Convert Jump Exit to Jump(bool& Out); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ShouldBufferJumpExitToRetryJump(bool& Output); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetInfiniteStaminaBuff(bool Enabled); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool CanBePet(URiderComponent* Rider); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CanJumpExit(bool& CanJumpExit); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateLootAnimalGlow(double Scale); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRep_currentEnergyValue(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Propagate Immunity Fall Damage(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool CanRiderPlayEmote(URiderComponent* Rider); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleEnemyFoleySoundLibrary(UActorComponent* Rider, bool bIsRiding); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnMovementModeChanged(ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, char PreviousCustomMode); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void IsSwimming(bool& IsSwimming); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void StopSprinting(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RemoveGEByTag(FGameplayTagContainer Tags); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ApplyGEToSelf(UClass* GameplayEffectClass, bool& IsValidClass); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void KickRiderOffSelf(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void DetermineRateOfChange(double& RateOfChange); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CommitEnergyCosts(bool RequireAllEnergy, double EnergyCost, bool& Success); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void TestThreshold(bool isDecaying, double CurrentValue, double testTreshold, bool PreviousState, bool& crossedThreshold); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetWildlifeHealth(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateValue(double TargetValue, double RateOfChange, double DeltaTime, double& updatedValue, bool& EnergyDepleted); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ToggleRiding(AActor* PlayerPawn, AActor* Target, bool ShouldRide, bool& bChangedRiding); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ForceTaming(AActor* PlayerPawn, AActor* CreaturePawn, bool& IsTamingEnabled); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RestoreCollisionResponses(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ApplyCollisionResponse(TArray<TEnumAsByte>& Channels, TEnumAsByte<ECollisionResponse> Response); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool ShouldCameraFocusOnRidable(URiderComponent* Rider); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateAnimInputBool(AFortPawn* FortPawn, bool IsBeingRidden); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetRiderCapsuleSize(URiderComponent* Rider, double& RiderCapsuleRadius, double& RiderCapsuleHH); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetRidingEmoteCapsuleSize(URiderComponent* Rider, float OriginalRadius, float OriginalHalfHeight, float& OutRadius, float& OutHalfHeight); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetRidingCapsuleSize(URiderComponent* Rider, float OriginalRadius, float OriginalHalfHeight, float& OutRadius, float& OutHalfHeight); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRep_IdleAnim_Add(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool ShouldSetAsViewTarget(URiderComponent* Rider); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetRiderLocation(FVector& Location); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Removed_AD51144144164FD235EE5BA4F6E87456(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Added_FBD936634BCC61A726DA279226E2F4BE(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Removed_C4C6E29B4217C014B9DE0E80B7134D6E(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ToggleRidingAlternative(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveBeginPlay(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleRiderStartedRiding(URiderComponent* Rider); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleRiderStoppedRiding(URiderComponent* Rider); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateDebug(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleAbilityHeld(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleAbilityStarted(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleAbilityStopped(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleJumpStarted(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnJumping(double JumpPitchInterpSpeed); // Flags: Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnJumpingApex(); // Flags: Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void NPCPawnInteractWithDispatcher_Event(AActor* AIPawn, AFortPlayerPawn* InteractingPlayerPawn); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void EnergyTrackingStart(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void EnergyTrackingStop(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateEnergy(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ConvertedDispatcher_Event(bool Converted, AFortPawn* InstigatorPawn); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPawnHealthChanged_Event(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UseEnergyAmountServer(double EnergyCost); // Flags: Net|NetServer|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleCancelSprint(bool bAbilityInputHeld, bool bForceCancel); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CheatSetStaminaPercent(float StaminaPercent); // Flags: BlueprintAuthorityOnly|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnEnergyUpdate(double Energy, bool bWarningActive); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnEnergyDepletedClient(); // Flags: Net|NetMulticast|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSprintStarted(); // Flags: Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnEatToRefuel(double EnergyCost); // Flags: Net|NetServer|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReTryJumpExit(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ManualEnergyDepleted(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Check Regen on Stopped Riding(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Check Regen on Started Riding(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Activate Regen(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Deactivate Regen(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleJumpStopped(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteBufferedJumpExit(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CancelJumpExitAndJump(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void MountLandedClient(FHitResult& Hit); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void TryConvertBufferedJumpExitToJump(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void MountLandedServer_JumpFatigue(FHitResult& Hit); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void FinalizeRiding(AActor* AIPawn, AFortPlayerPawn* InteractingPlayerPawn); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ParentSprintStarted(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_CreatureBaseRidableComponent(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RidableUIUpdateEnergy__DelegateSignature(double Energy, bool bIsResting); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RidableUIStart__DelegateSignature(FText Name, FSlateBrush Icon); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AudioOnJumpApex__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AudioOnJump__DelegateSignature(double JumpPitchInterpSpeed); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /RidingContent/Components/PlayerRiderComponent.PlayerRiderComponent_C
	// Inherited from UControllingRiderComponent -> URiderComponent -> UFortPawnOverrideComponent -> UFortPawnComponent -> UPawnComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x130 (0x840 - 0x710)
	class UPlayerRiderComponent_C : public UControllingRiderComponent	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x710(0x8)
		FGameplayTagContainer T_PlayerIsRiding; // 0x718(0x20)
		UClass* GE_PlayerIsRiding; // 0x738(0x8)
		AFortPlayerPawn* FortPlayerRef; // 0x740(0x8)
		double JumpOnMountDistanceCheck; // 0x748(0x8)
		FMulticastInlineDelegate RiderUINewStats; // 0x750(0x10)
		FMulticastInlineDelegate RiderUIEnd; // 0x760(0x10)
		double targetEnergy; // 0x770(0x8)
		double targetHealth; // 0x778(0x8)
		FGameplayTagContainer T_CannotRideBucket; // 0x780(0x20)
		FMulticastInlineDelegate RiderUIUpdateEnergy; // 0x7A0(0x10)
		FMulticastInlineDelegate RiderUIUpdateHealth; // 0x7B0(0x10)
		AActor* CachedRidableActor; // 0x7C0(0x8)
		FGameplayTagContainer Cannot_Ride_Rider_Bucket; // 0x7C8(0x20)
		FGameplayTag JumpOnCreature_Cue_Tag; // 0x7E8(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x7EC(0x4) UNKNOWN PROPERTY
		UClass* GE_PlayerPetting; // 0x7F0(0x8)
		FGameplayTagContainer Tag_Quests_Wildlife_Pet; // 0x7F8(0x20)
		UAbilityAsync_WaitGameplayTagAdded* ActiveRidableBlockRidingGameplayTagAsyncAction; // 0x818(0x8)
		FGameplayTagContainer AllowRidingMovementModeChangeTags; // 0x820(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RidingContent/Components/PlayerRiderComponent.PlayerRiderComponent_C");
			return ret;
		}

		void GetRidingInfoFromTarget(double& JumpAttachGroundHeightMin, double& JumpAttachGroundHeightBuffer, bool& UsesAltRidingMessage); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRep_targetHealth(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRep_targetEnergy(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetJumpInfo(AActor* TargetActor, UActorComponent* TargetActorComponent, double& JumpAttach_GroundHeightMin, double& JumpAttach_GroundHeightBuffer, bool& UseAltRidingMessage); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void TestIfValidForRidingAttempt(UObject* Object, bool& Success, UObject* TargetObject, bool& UseAltRidingMessage); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ToggleRiding(AActor* PlayerPawn, AActor* Target, bool ShouldRide, bool& bChangedRiding); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void EventReceived_E5B5FB5340DB5660002329825657B406(FGameplayEventData Payload); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Added_42EF586645CCFF06FFA4D9A5D59B1298(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Added_A83C775344FE0F6BDAAC4B971F57425E(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void EventReceived_3DA19BC649FB853BA2CC0FADFF8D08F6(FGameplayEventData Payload); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Added_D3DFE4374EED456A4C597E95375A2028(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ToggleRidingAlternative(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveBeginPlay(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleStartedRiding(URidableComponent* Ridable); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleStoppedRiding(URidableComponent* Ridable); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ToggleRidingOnServer(UObject* TargetObject, bool UseAltRidingMessage); // Flags: Net|NetServer|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetTargetHealth(double targetHealth); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RiderUIStartClient(FText Name, FSlateBrush Icon, AActor* Ridable); // Flags: Net|NetClient|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RiderUIEndClient(AActor* Ridable); // Flags: Net|NetClient|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void MovementModeChanged(ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, char PreviousCustomMode); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void MountLanded(FHitResult& Hit); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleRequestPettingStart(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleRequestPettingStop(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleRidableFound(FHitResult& HitResult); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_PlayerRiderComponent(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RiderUIUpdateHealth__DelegateSignature(double Health); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RiderUIUpdateEnergy__DelegateSignature(double Energy); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RiderUIEnd__DelegateSignature(AActor* RidableActor); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RiderUINewStats__DelegateSignature(FText Name, FSlateBrush Icon, AActor* RidableActor); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /RidingContent/Components/CreatureBaseNonRidableComponent.CreatureBaseNonRidableComponent_C
	// Inherited from UActorComponent -> UObject
	// Size: 0x1A (0xBA - 0xA0)
	class UCreatureBaseNonRidableComponent_C : public UActorComponent	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xA0(0x8)
		double Jump_Attach_Ground_Height_Min; // 0xA8(0x8)
		double Jump_Attach_Ground_Height_Buffer; // 0xB0(0x8)
		bool Uses_Alt_Riding_Message; // 0xB8(0x1)
		bool KillOnRideAttempt; // 0xB9(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RidingContent/Components/CreatureBaseNonRidableComponent.CreatureBaseNonRidableComponent_C");
			return ret;
		}

		void GetRidingInfoFromTarget(double& JumpAttachGroundHeightMin, double& JumpAttachGroundHeightBuffer, bool& UsesAltRidingMessage); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ToggleRidingAlternative(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AlternateRidingEvent(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_CreatureBaseNonRidableComponent(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /RidingContent/Components/RidingGeneric_Interafce.RidingGeneric_Interafce_C
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class URidingGeneric_Interafce_C : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/RidingContent/Components/RidingGeneric_Interafce.RidingGeneric_Interafce_C");
			return ret;
		}

		void ToggleRidingAlternative(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetRidingInfoFromTarget(double& JumpAttachGroundHeightMin, double& JumpAttachGroundHeightBuffer, bool& UsesAltRidingMessage); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
