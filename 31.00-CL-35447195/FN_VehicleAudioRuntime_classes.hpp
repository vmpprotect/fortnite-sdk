#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: VehicleAudioRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class VehicleAudioRuntime.BudgetedEngineAudioUser
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UBudgetedEngineAudioUser : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VehicleAudioRuntime.BudgetedEngineAudioUser");
			return ret;
		}
	};


	// Class VehicleAudioRuntime.FortMotorSimComponent_PatternPlayer
	// Inherited from UAudioMotorSimComponent -> UActorComponent -> UObject
	// Size: 0xC0 (0x170 - 0xB0)
	class UFortMotorSimComponent_PatternPlayer : public UAudioMotorSimComponent	
	{
	public:
		float PatternResetCooldown; // 0xB0(0x4)
		unsigned char UnknownData02_6[0x4]; // 0xB4(0x4) UNKNOWN PROPERTY
		FFortMotorSimPatternState DriftState; // 0xB8(0x30)
		FFortMotorSimPatternState AirState; // 0xE8(0x30)
		FFortMotorSimPatternState StartlineState; // 0x118(0x30)
		unsigned char UnknownData03_6[0x20]; // 0x148(0x20) UNKNOWN PROPERTY
		UCurveVector CurrentCurve; // 0x168(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VehicleAudioRuntime.FortMotorSimComponent_PatternPlayer");
			return ret;
		}
	};


	// Class VehicleAudioRuntime.FortMotorSimComponent_SurfaceModifier
	// Inherited from UAudioMotorSimComponent -> UActorComponent -> UObject
	// Size: 0x70 (0x120 - 0xB0)
	class UFortMotorSimComponent_SurfaceModifier : public UAudioMotorSimComponent	
	{
	public:
		TMap Surfaces; // 0xB0(0x50)
		FVector2f ThrottleRange; // 0x100(0x8)
		float OnsetInterpTime; // 0x108(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x10C(0x4) UNKNOWN PROPERTY
		UCurveFloat CurrentCurve; // 0x110(0x8)
		unsigned char UnknownData03_7[0x8]; // 0x118(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VehicleAudioRuntime.FortMotorSimComponent_SurfaceModifier");
			return ret;
		}

		void SetSurface(FName NewSurface); // Flags: Final|Native|Private|BlueprintCallable 0x7FF414BBCEF8
	};


	// Class VehicleAudioRuntime.FortVehicleAudioControllerInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortVehicleAudioControllerInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VehicleAudioRuntime.FortVehicleAudioControllerInterface");
			return ret;
		}
	};


	// Class VehicleAudioRuntime.FortVehicleAudioControllerSubsystem
	// Inherited from UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x128 (0x158 - 0x30)
	class UFortVehicleAudioControllerSubsystem : public UWorldSubsystem	
	{
	public:
		unsigned char UnknownData01_3[0x28]; // 0x30(0x28) UNKNOWN PROPERTY
		TMap RegisteredUpdateGroups; // 0x58(0x50)
		TMap ControllerClassToUpdateGroupMappings; // 0xA8(0x50)
		TMap UpdateStateMap; // 0xF8(0x50)
		TArray UpdateStateReaders; // 0x148(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VehicleAudioRuntime.FortVehicleAudioControllerSubsystem");
			return ret;
		}
	};


	// Class VehicleAudioRuntime.FortVehicleAudioControllerUpdater
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortVehicleAudioControllerUpdater : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VehicleAudioRuntime.FortVehicleAudioControllerUpdater");
			return ret;
		}
	};


	// Class VehicleAudioRuntime.FortVehicleAudioControllerUpdater_UpdateAll
	// Inherited from UFortVehicleAudioControllerUpdater -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortVehicleAudioControllerUpdater_UpdateAll : public UFortVehicleAudioControllerUpdater	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VehicleAudioRuntime.FortVehicleAudioControllerUpdater_UpdateAll");
			return ret;
		}
	};


	// Class VehicleAudioRuntime.FortVehicleAudioControllerUpdater_Proximity
	// Inherited from UFortVehicleAudioControllerUpdater -> UObject
	// Size: 0x20 (0x48 - 0x28)
	class UFortVehicleAudioControllerUpdater_Proximity : public UFortVehicleAudioControllerUpdater	
	{
	public:
		USoundAttenuation SoundAttenuation; // 0x28(0x8)
		float UpdateRadius; // 0x30(0x4)
		int32_t UpdateCap; // 0x34(0x4)
		unsigned char UnknownData01_7[0x10]; // 0x38(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VehicleAudioRuntime.FortVehicleAudioControllerUpdater_Proximity");
			return ret;
		}
	};


	// Class VehicleAudioRuntime.FortVehicleAudioControllerUpdater_Significance
	// Inherited from UFortVehicleAudioControllerUpdater -> UObject
	// Size: 0x8 (0x30 - 0x28)
	class UFortVehicleAudioControllerUpdater_Significance : public UFortVehicleAudioControllerUpdater	
	{
	public:
		int32_t LODBucketCap; // 0x28(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VehicleAudioRuntime.FortVehicleAudioControllerUpdater_Significance");
			return ret;
		}
	};


	// Class VehicleAudioRuntime.FortVehicleAudioControllerUpdateStateReader
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortVehicleAudioControllerUpdateStateReader : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VehicleAudioRuntime.FortVehicleAudioControllerUpdateStateReader");
			return ret;
		}
	};


	// Class VehicleAudioRuntime.FortVehicleEngineAudioRegistry
	// Inherited from UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x68 (0x98 - 0x30)
	class UFortVehicleEngineAudioRegistry : public UWorldSubsystem	
	{
	public:
		unsigned char UnknownData02_3[0x30]; // 0x30(0x30) UNKNOWN PROPERTY
		TArray LoadedAssets; // 0x60(0x10)
		unsigned char UnknownData03_7[0x28]; // 0x70(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VehicleAudioRuntime.FortVehicleEngineAudioRegistry");
			return ret;
		}

		void RemoveVehicleEntry(TScriptInterface& VehicleToRemove); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF414BBD0B8
		void RegisterVehicleEntry(FVehicleEngineAudioRegistryEntryRequest& InRequest); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF414BBCFD8
	};


	// Class VehicleAudioRuntime.FortVehicleSoundComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x18 (0xB8 - 0xA0)
	class UFortVehicleSoundComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY
		TWeakObjectPtr AudioController; // 0xA8(0x8)
		unsigned char UnknownData03_7[0x8]; // 0xB0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VehicleAudioRuntime.FortVehicleSoundComponent");
			return ret;
		}

		void Update(float DeltaSeconds); // Flags: Native|Public|BlueprintCallable 0x7FF414BBDCF8
		void Shutdown(); // Flags: Native|Public|BlueprintCallable 0x7FF414BBDC18
		void Resume(); // Flags: Native|Public|BlueprintCallable 0x7FF414BBDB38
		void Pause(); // Flags: Native|Public|BlueprintCallable 0x7FF414BBDA58
		void Init(); // Flags: Native|Public|BlueprintCallable 0x7FF414BBD978
		AFortAthenaVehicle GetVehicleActor(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BBD898
		bool GetUseMetasounds(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BBD7B8
		USceneComponent GetRootComponent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BBD6D8
		UFortPhysicsVehicleConfigs GetPhysicsVehicleConfigs(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BBD5F8
		UAudioMotorModelComponent GetMotorModelComponent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BBD518
		UFortLayeredAudioComponent GetLayeredAudioComponent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BBD438
		UAudioComponent GetEngineAudioComponent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BBD358
		UAudioParameterComponent GetAudioParameterComponent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BBD278
		AFortVehicleAudioController GetAudioController(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BBD198
	};


	// Class VehicleAudioRuntime.FortVehicleSoundComponent_Boost
	// Inherited from UFortVehicleSoundComponent -> UActorComponent -> UObject
	// Size: 0x28 (0xE0 - 0xB8)
	class UFortVehicleSoundComponent_Boost : public UFortVehicleSoundComponent	
	{
	public:
		FFortVehicleSoundComponent_BoostContext Context; // 0xB8(0x18)
		UAudioComponentGroup VehicleAudioComponentGroup; // 0xD0(0x8)
		UAudioComponent PlayingComponent; // 0xD8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VehicleAudioRuntime.FortVehicleSoundComponent_Boost");
			return ret;
		}

		void OnBoostStarted(); // Flags: Final|Native|Private 0x7FF414BBDEB8
		void OnBoostFinished(); // Flags: Final|Native|Private 0x7FF414BBDDD8
	};


	// Class VehicleAudioRuntime.FortVehicleSoundComponent_DamageState
	// Inherited from UFortVehicleSoundComponent -> UActorComponent -> UObject
	// Size: 0x38 (0xF0 - 0xB8)
	class UFortVehicleSoundComponent_DamageState : public UFortVehicleSoundComponent	
	{
	public:
		FFortVehicleSoundComponent_DamageStateContext Context; // 0xB8(0x20)
		unsigned char UnknownData01_7[0x18]; // 0xD8(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VehicleAudioRuntime.FortVehicleSoundComponent_DamageState");
			return ret;
		}

		void OnVehicleSleepStateChanged(bool bIsAwake); // Flags: Final|Native|Private 0x7FF414BBE3F8
		void OnSleepStateChanged(bool bIsAwake); // Flags: Event|Public|BlueprintEvent 0x7FF414BBE318
		void OnScrapingSidesOrTopChanged(bool bNewScrapingState); // Flags: Final|Native|Private 0x7FF414BBE238
		void OnScrapingSidesOrTop(bool bIsScraping); // Flags: Event|Public|BlueprintEvent 0x7FF414BBE158
		void OnExplode(AController LastDamageInstigator, AFortAthenaVehicle Vehicle); // Flags: Event|Public|BlueprintEvent 0x7FF414BBE078
		void HandleVehicleExploded(AController LastDamageInstigator, AFortAthenaVehicle Vehicle); // Flags: Final|Native|Private 0x7FF414BBDF98
	};


	// Class VehicleAudioRuntime.GameFeatureAction_RegisterVehicleAudioClassMappings
	// Inherited from UGameFeatureAction -> UObject
	// Size: 0x60 (0x88 - 0x28)
	class UGameFeatureAction_RegisterVehicleAudioClassMappings : public UGameFeatureAction	
	{
	public:
		TMap ClassMappings; // 0x28(0x50)
		unsigned char UnknownData01_7[0x10]; // 0x78(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VehicleAudioRuntime.GameFeatureAction_RegisterVehicleAudioClassMappings");
			return ret;
		}
	};


	// Class VehicleAudioRuntime.GameFeatureAction_RegisterVehicleAudioControllerGroup
	// Inherited from UGameFeatureAction -> UObject
	// Size: 0x60 (0x88 - 0x28)
	class UGameFeatureAction_RegisterVehicleAudioControllerGroup : public UGameFeatureAction	
	{
	public:
		TMap GroupsToRegister; // 0x28(0x50)
		unsigned char UnknownData01_7[0x10]; // 0x78(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VehicleAudioRuntime.GameFeatureAction_RegisterVehicleAudioControllerGroup");
			return ret;
		}
	};


	// Class VehicleAudioRuntime.GameFeatureAction_SetMaxLoadedEngineAudioItems
	// Inherited from UGameFeatureAction -> UObject
	// Size: 0x28 (0x50 - 0x28)
	class UGameFeatureAction_SetMaxLoadedEngineAudioItems : public UGameFeatureAction	
	{
	public:
		int32_t DefaultSetting; // 0x28(0x4)
		int32_t XB1Setting; // 0x2C(0x4)
		int32_t XSXSetting; // 0x30(0x4)
		int32_t PS4Setting; // 0x34(0x4)
		int32_t PS5Setting; // 0x38(0x4)
		int32_t MobileSetting; // 0x3C(0x4)
		int32_t SwitchSetting; // 0x40(0x4)
		unsigned char UnknownData01_7[0xC]; // 0x44(0xC) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VehicleAudioRuntime.GameFeatureAction_SetMaxLoadedEngineAudioItems");
			return ret;
		}
	};


	// Class VehicleAudioRuntime.VehicleAudioLifecycleInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UVehicleAudioLifecycleInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VehicleAudioRuntime.VehicleAudioLifecycleInterface");
			return ret;
		}

		void OnUpdate(float DeltaSeconds); // Flags: Native|Event|Public|BlueprintEvent 0x7FF414BBE698
		void OnShutdown(); // Flags: Native|Event|Public|BlueprintEvent 0x7FF414BBE5B8
		void OnInit(); // Flags: Native|Event|Public|BlueprintEvent 0x7FF414BBE4D8
	};


	// Class VehicleAudioRuntime.VehicleSoundSurfaceData
	// Inherited from UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x18 (0x48 - 0x30)
	class UVehicleSoundSurfaceData : public UPrimaryDataAsset	
	{
	public:
		UDataTable SurfaceData; // 0x30(0x8)
		USoundBase DefaultSound; // 0x38(0x8)
		USoundBase InAirSound; // 0x40(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VehicleAudioRuntime.VehicleSoundSurfaceData");
			return ret;
		}

		USoundBase BP_GetSoundForSurface(TEnumAsByte InSurface, bool InAir); // Flags: Event|Public|BlueprintEvent 0x7FF414BBE778
	};


	// Class VehicleAudioRuntime.FortVehicleAudioController
	// Inherited from AActor -> UObject
	// Size: 0x158 (0x3E8 - 0x290)
	class AFortVehicleAudioController : public AActor	
	{
	public:
		unsigned char UnknownData05_3[0x20]; // 0x290(0x20) UNKNOWN PROPERTY
		UFortVehicleSoundData VehicleSoundData; // 0x2B0(0x8)
		unsigned char UnknownData06_6[0x4]; // 0x2B8(0x4) UNKNOWN PROPERTY
		int32_t CurrentSignificance; // 0x2BC(0x4)
		bool bListenerInRange; // 0x2C0(0x1)
		bool bForceUpdatePastListenerRange; // 0x2C1(0x1)
		bool bRedlineAllowed; // 0x2C2(0x1)
		unsigned char UnknownData07_6[0x1]; // 0x2C3(0x1) UNKNOWN PROPERTY
		float JitterTime; // 0x2C4(0x4)
		AFortAthenaVehicle VehicleBase; // 0x2C8(0x8)
		UFortPhysicsVehicleConfigs PhysicsVehicleConfigs; // 0x2D0(0x8)
		unsigned char UnknownData08_6[0x58]; // 0x2D8(0x58) UNKNOWN PROPERTY
		UFortLayeredAudioComponent LayeredAudioComponent; // 0x330(0x8)
		UAudioParameterComponent AudioParameterComponent; // 0x338(0x8)
		UAudioMotorModelComponent AudioMotorModelComponent; // 0x340(0x8)
		UAudioComponent EngineComponent; // 0x348(0x8)
		TArray VehicleSoundComponents; // 0x350(0x10)
		UMetasoundGeneratorHandle MetasoundGeneratorHandle; // 0x360(0x8)
		UMetasoundParameterPack CachedParameterPack; // 0x368(0x8)
		UAudioComponentGroup VehicleAudioComponentGroup; // 0x370(0x8)
		unsigned char UnknownData09_7[0x70]; // 0x378(0x70) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VehicleAudioRuntime.FortVehicleAudioController");
			return ret;
		}

		bool UseMetasounds(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BBFC78
		void UpdateSpringCompressionNative(UFortCollisionAudioComponent TargetCollisionAudioComponent, FVector& VehicleLocationOffset, bool& OutResult, float& OutMagnitude); // Flags: Native|Protected|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414BBFB98
		void UpdateMotorModelNative(float DeltaSeconds); // Flags: Native|Protected|BlueprintCallable 0x7FF414BBFAB8
		void UpdateCollisionAudioNative(AActor CollisionTarget, FVector& HitLocation); // Flags: Native|Protected|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414BBF9D8
		void SetVehicle(AFortAthenaVehicle InVehicle); // Flags: Native|Public|BlueprintCallable 0x7FF414BBF8F8
		void SetRedlineActive(bool bEnabled); // Flags: Native|Public|BlueprintCallable 0x7FF414BBF818
		void SetMetasoundGeneratorHandle(UAudioComponent TargetComponent); // Flags: Native|Protected|BlueprintCallable 0x7FF414BBF738
		void SetLayeredAudioComponent(UFortLayeredAudioComponent InComponent); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BBF658
		void OnVehicleSleepStateChanged(bool bIsAwake); // Flags: Final|Native|Protected 0x7FF414BBF578
		void OnVehicleRecentlyHit(AFortAthenaVehicle SelfActor, AActor HitActor, FVector& HitLocation, FVector& NormalImpulse); // Flags: Final|Native|Protected|HasOutParms|HasDefaults 0x7FF414BBF498
		bool IsNativizationEnabled(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BBF3B8
		AFortAthenaVehicle GetVehicleActor(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BBF2D8
		float GetThrottleNative(); // Flags: Native|Protected|BlueprintCallable|BlueprintPure 0x7FF414BBF1F8
		bool GetShouldUpdate(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BBF118
		bool GetRedlineActive(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BBF038
		UFortPhysicsVehicleConfigs GetPhysicsVehicleConfigs(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BBEF58
		UFortLayeredAudioComponent GetLayeredAudioComponent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BBEE78
		float GetJitterTime(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BBED98
		UAudioComponent GetEngineAudioComponent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BBECB8
		float GetBrakingNative(); // Flags: Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414BBEBD8
		UAudioParameterComponent GetAudioParameterComponent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BBEAF8
		UAudioMotorModelComponent GetAudioMotorModelComponent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BBEA18
		void CacheJitterTime(); // Flags: Native|Public|BlueprintCallable 0x7FF414BBE938
		void BindVehicleCollisionEvent(FVehicleCollisionAudioConfig& CollisionAudioConfig); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable 0x7FF414BBE858
	};


	// Class VehicleAudioRuntime.FortVehicleSoundComponent_Speed
	// Inherited from UFortVehicleSoundComponent -> UActorComponent -> UObject
	// Size: 0x40 (0xF8 - 0xB8)
	class UFortVehicleSoundComponent_Speed : public UFortVehicleSoundComponent	
	{
	public:
		FFortAudioFloatParameter Speed; // 0xB8(0x38)
		unsigned char UnknownData01_7[0x8]; // 0xF0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VehicleAudioRuntime.FortVehicleSoundComponent_Speed");
			return ret;
		}

		void OnReversedChanged(bool bReversing); // Flags: Event|Public|BlueprintEvent 0x7FF414BBFD58
	};


	// Class VehicleAudioRuntime.FortVehicleSoundComponent_Surface
	// Inherited from UFortVehicleSoundComponent -> UActorComponent -> UObject
	// Size: 0x1C0 (0x278 - 0xB8)
	class UFortVehicleSoundComponent_Surface : public UFortVehicleSoundComponent	
	{
	public:
		FFortVehicleSoundComponent_SurfaceContext Context; // 0xB8(0x178)
		UAudioComponent NativeSurfaceAudio1; // 0x230(0x8)
		UAudioComponent NativeSurfaceAudio2; // 0x238(0x8)
		UAudioComponent BrakeAudioComponent; // 0x240(0x8)
		UAudioComponentGroup VehicleAudioComponentGroup; // 0x248(0x8)
		unsigned char UnknownData01_7[0x28]; // 0x250(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VehicleAudioRuntime.FortVehicleSoundComponent_Surface");
			return ret;
		}

		float UpdateSurfaceMagnitude_Native(float& SurfaceMagnitudeParam, float& SpringCompressionMagnitude, float& SpringCompMagnitudeAttack, float& SpringCompMagnitudeRelease, float& DeltaTime); // Flags: Final|Native|Private|HasOutParms|BlueprintCallable 0x7FF414BC08B8
		void UpdateSurface_Native(float& DeltaTime); // Flags: Final|Native|Private|HasOutParms|BlueprintCallable 0x7FF414BC07D8
		void SetTriggerParameterOnAudioComponents(FName InName); // Flags: Final|Native|Private|BlueprintCallable 0x7FF414BC06F8
		void SetFloatParameterOnAudioComponents(FName InName, float InFloat); // Flags: Final|Native|Private|BlueprintCallable 0x7FF414BC0618
		void OnSurfaceChanged(TEnumAsByte NewSurface); // Flags: Final|Native|Public 0x7FF414BC0538
		void OnSpringCompression_Native(); // Flags: Final|Native|Public 0x7FF414BC0458
		void OnSkiddingChanged(bool bNewState); // Flags: Event|Public|BlueprintEvent 0x7FF414BC0378
		void OnInAirChanged(bool bNewState); // Flags: Event|Public|BlueprintEvent 0x7FF414BC0298
		void OnExitWaterBody(AFortAthenaVehicle Vehicle, AFortWaterBodyActor WaterBody); // Flags: Final|Native|Public 0x7FF414BC01B8
		void OnEnteredWaterBody(AFortAthenaVehicle Vehicle, AFortWaterBodyActor WaterBody); // Flags: Final|Native|Public 0x7FF414BC00D8
		void OnBrakingChanged(bool bNewState); // Flags: Event|Public|BlueprintEvent 0x7FF414BBFFF8
		float GetSpringCompressionMagnitude(float MaxSpringCompMultiplier); // Flags: Final|Native|Private|BlueprintCallable 0x7FF414BBFF18
		float CalculateSurfaceSpeed(float& CurrentSurfaceSpeed, float& InterpSpeed, float& DeltaTime, float& OutNormalizedVehicleSpeed); // Flags: Final|Native|Private|HasOutParms|BlueprintCallable 0x7FF414BBFE38
	};


	// Class VehicleAudioRuntime.FortVehicleSoundData
	// Inherited from UDataAsset -> UObject
	// Size: 0x40 (0x70 - 0x30)
	class UFortVehicleSoundData : public UDataAsset	
	{
	public:
		TArray SoundComponents; // 0x30(0x10)
		bool bUpdateDataFromController; // 0x40(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x41(0x3) UNKNOWN PROPERTY
		float MaxBrakeThreshold; // 0x44(0x4)
		float ThrottleMultiplier; // 0x48(0x4)
		float SurfaceFrictionModifier; // 0x4C(0x4)
		float MotorFrictionModifier; // 0x50(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x54(0x4) UNKNOWN PROPERTY
		FVector2D FrictionJitter; // 0x58(0x10)
		bool bCanShiftOverride; // 0x68(0x1)
		unsigned char UnknownData05_7[0x7]; // 0x69(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VehicleAudioRuntime.FortVehicleSoundData");
			return ret;
		}
	};

}
