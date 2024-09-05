#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: VehicleAudioRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

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
		unsigned char UnknownData00_6[0x4]; // 0xB4(0x4) UNKNOWN PROPERTY
		FFortMotorSimPatternState DriftState; // 0xB8(0x30)
		FFortMotorSimPatternState AirState; // 0xE8(0x30)
		FFortMotorSimPatternState StartlineState; // 0x118(0x30)
		unsigned char UnknownData01_6[0x20]; // 0x148(0x20) UNKNOWN PROPERTY
		UCurveVector* CurrentCurve; // 0x168(0x8)

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
		TMap<FName, UCurveFloat*> Surfaces; // 0xB0(0x50)
		FVector2f ThrottleRange; // 0x100(0x8)
		float OnsetInterpTime; // 0x108(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x10C(0x4) UNKNOWN PROPERTY
		UCurveFloat* CurrentCurve; // 0x110(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x118(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VehicleAudioRuntime.FortMotorSimComponent_SurfaceModifier");
			return ret;
		}

		void SetSurface(FName NewSurface); // Flags: Final|Native|Private|BlueprintCallable, Memory Exec: 0x7FF7505DEA90(relative to base address)
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
		unsigned char UnknownData00_3[0x28]; // 0x30(0x28) UNKNOWN PROPERTY
		TMap<FGameplayTag, FFortVehicleAudioControllerUpdateGroup> RegisteredUpdateGroups; // 0x58(0x50)
		TMap<UClass*, FGameplayTag> ControllerClassToUpdateGroupMappings; // 0xA8(0x50)
		TMap<UObject*, bool> UpdateStateMap; // 0xF8(0x50)
		TArray<TScriptInterface> UpdateStateReaders; // 0x148(0x10)

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
		USoundAttenuation* SoundAttenuation; // 0x28(0x8)
		float UpdateRadius; // 0x30(0x4)
		int32_t UpdateCap; // 0x34(0x4)
		unsigned char UnknownData00_7[0x10]; // 0x38(0x10) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_7[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_3[0x30]; // 0x30(0x30) UNKNOWN PROPERTY
		TArray<USoundBase*> LoadedAssets; // 0x60(0x10)
		unsigned char UnknownData01_7[0x28]; // 0x70(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VehicleAudioRuntime.FortVehicleEngineAudioRegistry");
			return ret;
		}

		void RemoveVehicleEntry(TScriptInterface<Class>& VehicleToRemove); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF748A5D964(relative to base address)
		void RegisterVehicleEntry(FVehicleEngineAudioRegistryEntryRequest& InRequest); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7470D790C(relative to base address)
	};


	// Class VehicleAudioRuntime.FortVehicleSoundComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x18 (0xB8 - 0xA0)
	class UFortVehicleSoundComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY
		TWeakObjectPtr<AFortVehicleAudioController*> AudioController; // 0xA8(0x8)
		unsigned char UnknownData01_7[0x8]; // 0xB0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VehicleAudioRuntime.FortVehicleSoundComponent");
			return ret;
		}

		void Update(float DeltaSeconds); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF7505DEB90(relative to base address)
		void Shutdown(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF7474A9F44(relative to base address)
		void Resume(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F0F9DB4(relative to base address)
		void Pause(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF7470D9EB4(relative to base address)
		void Init(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C8DF6C0(relative to base address)
		AFortAthenaVehicle GetVehicleActor(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF748B3E2E4(relative to base address)
		bool GetUseMetasounds(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7505DE6A4(relative to base address)
		USceneComponent GetRootComponent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7505DE5AC(relative to base address)
		UFortPhysicsVehicleConfigs GetPhysicsVehicleConfigs(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7505DE560(relative to base address)
		UAudioMotorModelComponent GetMotorModelComponent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7505DE51C(relative to base address)
		UFortLayeredAudioComponent GetLayeredAudioComponent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7505DE4F8(relative to base address)
		UAudioComponent GetEngineAudioComponent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7505DE4B0(relative to base address)
		UAudioParameterComponent GetAudioParameterComponent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7505DE43C(relative to base address)
		AFortVehicleAudioController GetAudioController(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF748995C60(relative to base address)
	};


	// Class VehicleAudioRuntime.FortVehicleSoundComponent_Boost
	// Inherited from UFortVehicleSoundComponent -> UActorComponent -> UObject
	// Size: 0x28 (0xE0 - 0xB8)
	class UFortVehicleSoundComponent_Boost : public UFortVehicleSoundComponent	
	{
	public:
		FFortVehicleSoundComponent_BoostContext Context; // 0xB8(0x18)
		UAudioComponentGroup* VehicleAudioComponentGroup; // 0xD0(0x8)
		UAudioComponent* PlayingComponent; // 0xD8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VehicleAudioRuntime.FortVehicleSoundComponent_Boost");
			return ret;
		}

		void OnBoostStarted(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7474AA124(relative to base address)
		void OnBoostFinished(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7474A9EE8(relative to base address)
	};


	// Class VehicleAudioRuntime.FortVehicleSoundComponent_DamageState
	// Inherited from UFortVehicleSoundComponent -> UActorComponent -> UObject
	// Size: 0x38 (0xF0 - 0xB8)
	class UFortVehicleSoundComponent_DamageState : public UFortVehicleSoundComponent	
	{
	public:
		FFortVehicleSoundComponent_DamageStateContext Context; // 0xB8(0x20)
		unsigned char UnknownData00_7[0x18]; // 0xD8(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VehicleAudioRuntime.FortVehicleSoundComponent_DamageState");
			return ret;
		}

		void OnVehicleSleepStateChanged(bool bIsAwake); // Flags: Final|Native|Private, Memory Exec: 0x7FF747D308F4(relative to base address)
		void OnSleepStateChanged(bool bIsAwake); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnScrapingSidesOrTopChanged(bool bNewScrapingState); // Flags: Final|Native|Private, Memory Exec: 0x7FF747D30874(relative to base address)
		void OnScrapingSidesOrTop(bool bIsScraping); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnExplode(AController* LastDamageInstigator, AFortAthenaVehicle* Vehicle); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleVehicleExploded(AController* LastDamageInstigator, AFortAthenaVehicle* Vehicle); // Flags: Final|Native|Private, Memory Exec: 0x7FF7505DE6F4(relative to base address)
	};


	// Class VehicleAudioRuntime.GameFeatureAction_RegisterVehicleAudioClassMappings
	// Inherited from UGameFeatureAction -> UObject
	// Size: 0x60 (0x88 - 0x28)
	class UGameFeatureAction_RegisterVehicleAudioClassMappings : public UGameFeatureAction	
	{
	public:
		TMap<FSoftClassPath, FGameplayTag> ClassMappings; // 0x28(0x50)
		unsigned char UnknownData00_7[0x10]; // 0x78(0x10) UNKNOWN PROPERTY

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
		TMap<FGameplayTag, UFortVehicleAudioControllerUpdater*> GroupsToRegister; // 0x28(0x50)
		unsigned char UnknownData00_7[0x10]; // 0x78(0x10) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_7[0xC]; // 0x44(0xC) UNKNOWN PROPERTY

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

		void OnUpdate(float DeltaSeconds); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7488BA91C(relative to base address)
		void OnShutdown(); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF748E753C0(relative to base address)
		void OnInit(); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF748D7CC28(relative to base address)
	};


	// Class VehicleAudioRuntime.VehicleSoundSurfaceData
	// Inherited from UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x18 (0x48 - 0x30)
	class UVehicleSoundSurfaceData : public UPrimaryDataAsset	
	{
	public:
		UDataTable* SurfaceData; // 0x30(0x8)
		USoundBase* DefaultSound; // 0x38(0x8)
		USoundBase* InAirSound; // 0x40(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VehicleAudioRuntime.VehicleSoundSurfaceData");
			return ret;
		}

		USoundBase BP_GetSoundForSurface(TEnumAsByte<EPhysicalSurface> InSurface, bool InAir); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class VehicleAudioRuntime.FortVehicleAudioController
	// Inherited from AActor -> UObject
	// Size: 0x158 (0x3E8 - 0x290)
	class AFortVehicleAudioController : public AActor	
	{
	public:
		unsigned char UnknownData00_3[0x20]; // 0x290(0x20) UNKNOWN PROPERTY
		UFortVehicleSoundData* VehicleSoundData; // 0x2B0(0x8)
		unsigned char UnknownData01_6[0x4]; // 0x2B8(0x4) UNKNOWN PROPERTY
		int32_t CurrentSignificance; // 0x2BC(0x4)
		bool bListenerInRange; // 0x2C0(0x1)
		bool bForceUpdatePastListenerRange; // 0x2C1(0x1)
		bool bRedlineAllowed; // 0x2C2(0x1)
		unsigned char UnknownData02_6[0x1]; // 0x2C3(0x1) UNKNOWN PROPERTY
		float JitterTime; // 0x2C4(0x4)
		AFortAthenaVehicle* VehicleBase; // 0x2C8(0x8)
		UFortPhysicsVehicleConfigs* PhysicsVehicleConfigs; // 0x2D0(0x8)
		unsigned char UnknownData03_6[0x58]; // 0x2D8(0x58) UNKNOWN PROPERTY
		UFortLayeredAudioComponent* LayeredAudioComponent; // 0x330(0x8)
		UAudioParameterComponent* AudioParameterComponent; // 0x338(0x8)
		UAudioMotorModelComponent* AudioMotorModelComponent; // 0x340(0x8)
		UAudioComponent* EngineComponent; // 0x348(0x8)
		TArray<UFortVehicleSoundComponent*> VehicleSoundComponents; // 0x350(0x10)
		UMetasoundGeneratorHandle* MetasoundGeneratorHandle; // 0x360(0x8)
		UMetasoundParameterPack* CachedParameterPack; // 0x368(0x8)
		UAudioComponentGroup* VehicleAudioComponentGroup; // 0x370(0x8)
		unsigned char UnknownData04_7[0x70]; // 0x378(0x70) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VehicleAudioRuntime.FortVehicleAudioController");
			return ret;
		}

		bool UseMetasounds(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74EF39E58(relative to base address)
		void UpdateSpringCompressionNative(UFortCollisionAudioComponent* TargetCollisionAudioComponent, FVector& VehicleLocationOffset, bool& OutResult, float& OutMagnitude); // Flags: Native|Protected|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7472F47A4(relative to base address)
		void UpdateMotorModelNative(float DeltaSeconds); // Flags: Native|Protected|BlueprintCallable, Memory Exec: 0x7FF7505DEC14(relative to base address)
		void UpdateCollisionAudioNative(AActor* CollisionTarget, FVector& HitLocation); // Flags: Native|Protected|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF749876DF4(relative to base address)
		void SetVehicle(AFortAthenaVehicle* InVehicle); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C5A4A1C(relative to base address)
		void SetRedlineActive(bool bEnabled); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF7489958A0(relative to base address)
		void SetMetasoundGeneratorHandle(UAudioComponent* TargetComponent); // Flags: Native|Protected|BlueprintCallable, Memory Exec: 0x7FF74868DBCC(relative to base address)
		void SetLayeredAudioComponent(UFortLayeredAudioComponent* InComponent); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7505DEA04(relative to base address)
		void OnVehicleSleepStateChanged(bool bIsAwake); // Flags: Final|Native|Protected, Memory Exec: 0x7FF748FE82FC(relative to base address)
		void OnVehicleRecentlyHit(AFortAthenaVehicle* SelfActor, AActor* HitActor, FVector& HitLocation, FVector& NormalImpulse); // Flags: Final|Native|Protected|HasOutParms|HasDefaults, Memory Exec: 0x7FF7472F5960(relative to base address)
		bool IsNativizationEnabled(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7499A3B4C(relative to base address)
		AFortAthenaVehicle GetVehicleActor(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF748B49DF4(relative to base address)
		float GetThrottleNative(); // Flags: Native|Protected|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7505DE678(relative to base address)
		bool GetShouldUpdate(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7505DE5D0(relative to base address)
		bool GetRedlineActive(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D7898BC(relative to base address)
		UFortPhysicsVehicleConfigs GetPhysicsVehicleConfigs(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7505DE540(relative to base address)
		UFortLayeredAudioComponent GetLayeredAudioComponent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74ECF68F8(relative to base address)
		float GetJitterTime(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C4C59CC(relative to base address)
		UAudioComponent GetEngineAudioComponent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF748BE1784(relative to base address)
		float GetBrakingNative(); // Flags: Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7505DE484(relative to base address)
		UAudioParameterComponent GetAudioParameterComponent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7493E4454(relative to base address)
		UAudioMotorModelComponent GetAudioMotorModelComponent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7496FE348(relative to base address)
		void CacheJitterTime(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF747E38800(relative to base address)
		void BindVehicleCollisionEvent(FVehicleCollisionAudioConfig& CollisionAudioConfig); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7472F849C(relative to base address)
	};


	// Class VehicleAudioRuntime.FortVehicleSoundComponent_Speed
	// Inherited from UFortVehicleSoundComponent -> UActorComponent -> UObject
	// Size: 0x40 (0xF8 - 0xB8)
	class UFortVehicleSoundComponent_Speed : public UFortVehicleSoundComponent	
	{
	public:
		FFortAudioFloatParameter Speed; // 0xB8(0x38)
		unsigned char UnknownData00_7[0x8]; // 0xF0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VehicleAudioRuntime.FortVehicleSoundComponent_Speed");
			return ret;
		}

		void OnReversedChanged(bool bReversing); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class VehicleAudioRuntime.FortVehicleSoundComponent_Surface
	// Inherited from UFortVehicleSoundComponent -> UActorComponent -> UObject
	// Size: 0x1C0 (0x278 - 0xB8)
	class UFortVehicleSoundComponent_Surface : public UFortVehicleSoundComponent	
	{
	public:
		FFortVehicleSoundComponent_SurfaceContext Context; // 0xB8(0x178)
		UAudioComponent* NativeSurfaceAudio1; // 0x230(0x8)
		UAudioComponent* NativeSurfaceAudio2; // 0x238(0x8)
		UAudioComponent* BrakeAudioComponent; // 0x240(0x8)
		UAudioComponentGroup* VehicleAudioComponentGroup; // 0x248(0x8)
		unsigned char UnknownData00_7[0x28]; // 0x250(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VehicleAudioRuntime.FortVehicleSoundComponent_Surface");
			return ret;
		}

		float UpdateSurfaceMagnitude_Native(float& SurfaceMagnitudeParam, float& SpringCompressionMagnitude, float& SpringCompMagnitudeAttack, float& SpringCompMagnitudeRelease, float& DeltaTime); // Flags: Final|Native|Private|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7505DEC98(relative to base address)
		void UpdateSurface_Native(float& DeltaTime); // Flags: Final|Native|Private|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7505DEE48(relative to base address)
		void SetTriggerParameterOnAudioComponents(FName InName); // Flags: Final|Native|Private|BlueprintCallable, Memory Exec: 0x7FF7505DEB10(relative to base address)
		void SetFloatParameterOnAudioComponents(FName InName, float InFloat); // Flags: Final|Native|Private|BlueprintCallable, Memory Exec: 0x7FF7505DE940(relative to base address)
		void OnSurfaceChanged(TEnumAsByte<EPhysicalSurface> NewSurface); // Flags: Final|Native|Public, Memory Exec: 0x7FF747DA1224(relative to base address)
		void OnSpringCompression_Native(); // Flags: Final|Native|Public, Memory Exec: 0x7FF7472F493C(relative to base address)
		void OnSkiddingChanged(bool bNewState); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInAirChanged(bool bNewState); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnExitWaterBody(AFortAthenaVehicle* Vehicle, AFortWaterBodyActor* WaterBody); // Flags: Final|Native|Public, Memory Exec: 0x7FF7505DE87C(relative to base address)
		void OnEnteredWaterBody(AFortAthenaVehicle* Vehicle, AFortWaterBodyActor* WaterBody); // Flags: Final|Native|Public, Memory Exec: 0x7FF7505DE7B8(relative to base address)
		void OnBrakingChanged(bool bNewState); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		float GetSpringCompressionMagnitude(float MaxSpringCompMultiplier); // Flags: Final|Native|Private|BlueprintCallable, Memory Exec: 0x7FF7505DE5E8(relative to base address)
		float CalculateSurfaceSpeed(float& CurrentSurfaceSpeed, float& InterpSpeed, float& DeltaTime, float& OutNormalizedVehicleSpeed); // Flags: Final|Native|Private|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7505DE2AC(relative to base address)
	};


	// Class VehicleAudioRuntime.FortVehicleSoundData
	// Inherited from UDataAsset -> UObject
	// Size: 0x40 (0x70 - 0x30)
	class UFortVehicleSoundData : public UDataAsset	
	{
	public:
		TArray<UFortVehicleSoundComponent*> SoundComponents; // 0x30(0x10)
		bool bUpdateDataFromController; // 0x40(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x41(0x3) UNKNOWN PROPERTY
		float MaxBrakeThreshold; // 0x44(0x4)
		float ThrottleMultiplier; // 0x48(0x4)
		float SurfaceFrictionModifier; // 0x4C(0x4)
		float MotorFrictionModifier; // 0x50(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x54(0x4) UNKNOWN PROPERTY
		FVector2D FrictionJitter; // 0x58(0x10)
		bool bCanShiftOverride; // 0x68(0x1)
		unsigned char UnknownData02_7[0x7]; // 0x69(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VehicleAudioRuntime.FortVehicleSoundData");
			return ret;
		}
	};

}
