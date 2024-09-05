#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: SupplyDrops
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /SupplyDropRadioGameplay/SupplyDrops/SupplyDropRadioActor_CrateHealth.SupplyDropRadioActor_CrateHealth_C
	// Inherited from ASupplyDropRadioActor_CrateParent_C -> ASupplyDropRadioActorParent_C -> ABuildingGameplayActorSupplyDropRadio -> ABuildingGameplayActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xEA8 - 0xEA8)
	class ASupplyDropRadioActor_CrateHealth_C : public ASupplyDropRadioActor_CrateParent_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/SupplyDropRadioGameplay/SupplyDrops/SupplyDropRadioActor_CrateHealth.SupplyDropRadioActor_CrateHealth_C");
			return ret;
		}
	};


	// Class /SupplyDropRadioGameplay/SupplyDrops/SupplyDropRadioItem_CrateHealth.SupplyDropRadioItem_CrateHealth_C
	// Inherited from ASupplyDropRadioItem_CrateParent_C -> AFortAthenaSupplyDrop -> ABuildingGameplayActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0xB48 - 0xB48)
	class ASupplyDropRadioItem_CrateHealth_C : public ASupplyDropRadioItem_CrateParent_C	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/SupplyDropRadioGameplay/SupplyDrops/SupplyDropRadioItem_CrateHealth.SupplyDropRadioItem_CrateHealth_C");
			return ret;
		}
	};


	// Class /SupplyDropRadioGameplay/SupplyDrops/SupplyDropRadioItem_CrateParent.SupplyDropRadioItem_CrateParent_C
	// Inherited from AFortAthenaSupplyDrop -> ABuildingGameplayActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x38 (0xB48 - 0xB10)
	class ASupplyDropRadioItem_CrateParent_C : public AFortAthenaSupplyDrop	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xB10(0x8)
		UStaticMeshComponent* CrateMesh; // 0xB18(0x8)
		USceneComponent* DefaultSceneRoot; // 0xB20(0x8)
		bool bOpened; // 0xB28(0x1)
		unsigned char UnknownData00_6[0x7]; // 0xB29(0x7) UNKNOWN PROPERTY
		USoundBase* SoundDestroyed; // 0xB30(0x8)
		UParticleSystem* LootedFX; // 0xB38(0x8)
		USoundBase* SoundLooted; // 0xB40(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/SupplyDropRadioGameplay/SupplyDrops/SupplyDropRadioItem_CrateParent.SupplyDropRadioItem_CrateParent_C");
			return ret;
		}

		void GetSupplyDropRadioActorParent(ASupplyDropRadioActorParent_C* ActorParent); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRep_bOpened(); // Flags: HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SpawnSupplyDropLoot(AFortPawn* FortPawn); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleInteractQuests(AFortPawn* InteractingPlayerPawn); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		FText BlueprintGetInteractionString(AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool BlueprintCanInteract(AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted, TEnumAsByte<TInteractionType> InteractionType); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BlueprintOnInteract(AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted); // Flags: BlueprintAuthorityOnly|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SpawnLoot(TArray<FFortItemEntry>& ItemsToSpawn, AFortPawn* TriggeringPawn); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnDeathServer(float Damage, FGameplayTagContainer& DamageTags, FVector Momentum, FHitResult& HitInfo, AController* InstigatedBy, AActor* DamageCauser, FGameplayEffectContextHandle EffectContext); // Flags: BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnDeathPlayEffects(float Damage, FGameplayTagContainer& DamageTags, FVector Momentum, FHitResult& HitInfo, AFortPawn* InstigatedBy, AActor* DamageCauser, FGameplayEffectContextHandle EffectContext); // Flags: BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_SupplyDropRadioItem_CrateParent(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /SupplyDropRadioGameplay/SupplyDrops/SupplyDropRadioActor_CrateParent.SupplyDropRadioActor_CrateParent_C
	// Inherited from ASupplyDropRadioActorParent_C -> ABuildingGameplayActorSupplyDropRadio -> ABuildingGameplayActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x30 (0xEA8 - 0xE78)
	class ASupplyDropRadioActor_CrateParent_C : public ASupplyDropRadioActorParent_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xE78(0x8)
		UAthenaBuildingActorChildComponent* CrateActorChild; // 0xE80(0x8)
		USoundBase* LandingSoundCue; // 0xE88(0x8)
		UFXSystemAsset* LandingFXSystem_Land; // 0xE90(0x8)
		UFXSystemAsset* LandingFXSystem_Water; // 0xE98(0x8)
		UClass* QuestSearchSupplyDropGE; // 0xEA0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/SupplyDropRadioGameplay/SupplyDrops/SupplyDropRadioActor_CrateParent.SupplyDropRadioActor_CrateParent_C");
			return ret;
		}

		void GetAttachedActorToMark(AActor* Actor); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleLandEvent(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OpenSupplyDrop(); // Flags: BlueprintAuthorityOnly|Event|Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_SupplyDropRadioActor_CrateParent(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /SupplyDropRadioGameplay/SupplyDrops/SupplyDropRadioBalloonParent_Vehicle.SupplyDropRadioBalloonParent_Vehicle_C
	// Inherited from ASupplyDropRadioBalloonParent_C -> AFortAthenaSupplyDropBalloon -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0xC (0xCA8 - 0xC9C)
	class ASupplyDropRadioBalloonParent_Vehicle_C : public ASupplyDropRadioBalloonParent_C	
	{
	public:
		unsigned char UnknownData00_3[0x4]; // 0xC9C(0x4) UNKNOWN PROPERTY
		UStaticMeshComponent* SM_Magnet; // 0xCA0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/SupplyDropRadioGameplay/SupplyDrops/SupplyDropRadioBalloonParent_Vehicle.SupplyDropRadioBalloonParent_Vehicle_C");
			return ret;
		}
	};


	// Class /SupplyDropRadioGameplay/SupplyDrops/SupplyDropRadioBalloonParent.SupplyDropRadioBalloonParent_C
	// Inherited from AFortAthenaSupplyDropBalloon -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0xEC (0xC9C - 0xBB0)
	class ASupplyDropRadioBalloonParent_C : public AFortAthenaSupplyDropBalloon	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xBB0(0x8)
		UNiagaraComponent* NS_SupplyDrop_Light; // 0xBB8(0x8)
		UAudioComponent* FallingAudio; // 0xBC0(0x8)
		FMulticastInlineDelegate OnBalloonDestroyed; // 0xBC8(0x10)
		USoundBase* BalloonPopSound; // 0xBD8(0x8)
		UParticleSystem* BalloonPopFX; // 0xBE0(0x8)
		UClass* GE_SupplyDropBalloonDamageReduction; // 0xBE8(0x8)
		USupplyDropRadioBalloonHealthBarComponent_C* HealthBarComponent; // 0xBF0(0x8)
		FTimerHandle HandleFallingAudioStateTimerHandle; // 0xBF8(0x8)
		FTransform HealthBarComponentRelativeTransform; // 0xC00(0x60)
		FString SupplyDropShotDownAnalyticsEvent; // 0xC60(0x10)
		FName BalloonPopFXMeshSocket; // 0xC70(0x4)
		unsigned char UnknownData00_6[0x4]; // 0xC74(0x4) UNKNOWN PROPERTY
		double UpdateFallingAudioStateInterval; // 0xC78(0x8)
		ASupplyDropRadioActorParent_C* SupplyDropRadioActorParent; // 0xC80(0x8)
		UNiagaraSystem* BalloonPopFX_NS; // 0xC88(0x8)
		FTimerHandle Healthbar_Visible_Timer_Handle; // 0xC90(0x8)
		float HealthbarVisibleTime; // 0xC98(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/SupplyDropRadioGameplay/SupplyDrops/SupplyDropRadioBalloonParent.SupplyDropRadioBalloonParent_C");
			return ret;
		}

		AActor GetAttachedActorToMark(); // Flags: Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RecordBalloonDeathAnalytics(AController* Controller); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PlaySpawnMaterialAnimation(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleBalloonStateChanged(ESupplyDropRadioBalloonState BalloonState); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRep_SupplyDropRadioActorParent(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetSupplyDropRadioActorParent(ASupplyDropRadioActorParent_C* InParentActor); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateFallingAudioState(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleGroundInfoUpdated(FSupplyDropRadioGroundInfoStruct GroundInfo); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnDamageServer(float Damage, FGameplayTagContainer& DamageTags, FVector Momentum, FHitResult& HitInfo, AController* InstigatedBy, AActor* DamageCauser, FGameplayEffectContextHandle EffectContext); // Flags: BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnDeathPlayEffects(float Damage, FGameplayTagContainer& DamageTags, FVector Momentum, FHitResult& HitInfo, AFortPawn* InstigatedBy, AActor* DamageCauser, FGameplayEffectContextHandle EffectContext); // Flags: BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnDeathServer(float Damage, FGameplayTagContainer& DamageTags, FVector Momentum, FHitResult& HitInfo, AController* InstigatedBy, AActor* DamageCauser, FGameplayEffectContextHandle EffectContext); // Flags: BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnBuildingActorInitialized(TEnumAsByte<EFortBuildingInitializationReason> InitializationReason, TEnumAsByte<EFortBuildingPersistentState> BuildingPersistentState); // Flags: BlueprintAuthorityOnly|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnHealthbarVisibleTimerExpired(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_SupplyDropRadioBalloonParent(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnBalloonDestroyed__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /SupplyDropRadioGameplay/SupplyDrops/SupplyDropRadioActor_Vehicle.SupplyDropRadioActor_Vehicle_C
	// Inherited from ASupplyDropRadioActorParent_C -> ABuildingGameplayActorSupplyDropRadio -> ABuildingGameplayActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x48 (0xEC0 - 0xE78)
	class ASupplyDropRadioActor_Vehicle_C : public ASupplyDropRadioActorParent_C	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xE78(0x8)
		UChildActorComponent* VehiclePreview_EDITORONLY; // 0xE80(0x8)
		USceneComponent* VehicleAttachComponent; // 0xE88(0x8)
		UClass* VehicleClass; // 0xE90(0x8)
		FGameplayTagContainer VehicleModTags; // 0xE98(0x20)
		AFortAthenaVehicle* SpawnedVehicle; // 0xEB8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/SupplyDropRadioGameplay/SupplyDrops/SupplyDropRadioActor_Vehicle.SupplyDropRadioActor_Vehicle_C");
			return ret;
		}

		void GetAttachedActorToMark(AActor* Actor); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ShouldAddAttachComponentForActor(AActor* InActor, bool& bAdd); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleMovementBlocked_Deprecated(FHitResult& HitResult, bool& bValidBlock); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRep_SpawnedVehicle(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UserConstructionScript(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OpenSupplyDrop(); // Flags: BlueprintAuthorityOnly|Event|Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleOnHealthChanged(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_SupplyDropRadioActor_Vehicle(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /SupplyDropRadioGameplay/SupplyDrops/SupplyDropRadioActorParent.SupplyDropRadioActorParent_C
	// Inherited from ABuildingGameplayActorSupplyDropRadio -> ABuildingGameplayActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x2F8 (0xE78 - 0xB80)
	class ASupplyDropRadioActorParent_C : public ABuildingGameplayActorSupplyDropRadio	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xB80(0x8)
		UAthenaSpecialActorComponent* AthenaSpecialActor; // 0xB88(0x8)
		UNiagaraComponent* EntryFX; // 0xB90(0x8)
		USphereComponent* WaterCollision; // 0xB98(0x8)
		UAthenaBuildingActorChildComponent* BalloonActorChild; // 0xBA0(0x8)
		UBoxComponent* WorldCollision; // 0xBA8(0x8)
		double FallHeight; // 0xBB0(0x8)
		bool bFalling; // 0xBB8(0x1)
		unsigned char UnknownData00_6[0x3]; // 0xBB9(0x3) UNKNOWN PROPERTY
		FGameplayTag OpenGameplayCueTag; // 0xBBC(0x4)
		ASupplyDropRadioIndicator_C* Indicator; // 0xBC0(0x8)
		FSupplyDropRadioGroundInfoStruct GroundInfo; // 0xBC8(0x28)
		FMulticastInlineDelegate OnGroundInfoUpdate; // 0xBF0(0x10)
		UClass* SupplyDropFallingQuestGE; // 0xC00(0x8)
		double FlareDurationMultiplier; // 0xC08(0x8)
		bool bDebugMovement; // 0xC10(0x1)
		unsigned char UnknownData01_6[0x3]; // 0xC11(0x3) UNKNOWN PROPERTY
		int32_t MaxNumOfHeightTeleportAttempts; // 0xC14(0x4)
		double FallHeightTeleportFailIncrement; // 0xC18(0x8)
		TArray<UBP_SupplyDropRadioAttachActorComponent_C*> AttachActorComponents; // 0xC20(0x10)
		FHitResult LatestSweep; // 0xC30(0xF8)
		FMulticastInlineDelegate OnBalloonStateChanged; // 0xD28(0x10)
		FScalableFloat Hotfix_ClientLocationCorrectionMaxDistSqWhenBalloonDisabled; // 0xD38(0x28)
		FScalableFloat Hotfix_FlareDurationMultiplier; // 0xD60(0x28)
		FScalableFloat Hotfix_MaxNumOfHeightTeleportAttempts; // 0xD88(0x28)
		FScalableFloat Hotfix_FallHeightTeleportFailIncrement; // 0xDB0(0x28)
		FScalableFloat Hotfix_ClientLocationCorrectionMaxDistSqWhenBalloonEnabled; // 0xDD8(0x28)
		bool bIsDying; // 0xE00(0x1)
		unsigned char UnknownData02_6[0x3]; // 0xE01(0x3) UNKNOWN PROPERTY
		FGameplayTag SpawnGameplayCueTag; // 0xE04(0x4)
		double GravityMultiplier_PreOpen; // 0xE08(0x8)
		double GravityMultiplier_PostOpen; // 0xE10(0x8)
		double EntryFXOffsetDuration; // 0xE18(0x8)
		FVector CenterOfMassRelativeOffset; // 0xE20(0x18)
		FVector SupplyDropActorHalfSize; // 0xE38(0x18)
		FScalableFloat Hotfix_AutoMarkOnSpawn; // 0xE50(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/SupplyDropRadioGameplay/SupplyDrops/SupplyDropRadioActorParent.SupplyDropRadioActorParent_C");
			return ret;
		}

		void AutoMarkOnSpawn(AActor* ActorToMark); // Flags: Protected|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetAttachedActorToMark(AActor* Actor); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRep_bIsDying(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void DelayedSilentDie(); // Flags: Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UBoxComponent GetRootCollisionComponent(); // Flags: Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateGroundInfo(bool bValidBlock, FHitResult& MovementHitResult); // Flags: BlueprintAuthorityOnly|Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool IsGrounded(); // Flags: Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void InitData(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetClosedStateFallDuration(double& Value); // Flags: Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetFlareDuration(double& duration); // Flags: Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetupEntryFXTime(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void TickBalloonState_Deprecated(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateVelocity_Deprecated(double DeltaTime, FVector PreviousLocation); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ShouldAddAttachComponentForActor(AActor* InActor, bool& bAdd); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ApplyAttachComponentToAttachedActors(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetDesiredNetCullDistanceSquaredForAttachedActor(AActor* InActor, double& NetCullDistanceSquared); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void TeleportToDesiredHeight(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateBalloonFallSpeed_Deprecated(double DeltaTime); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetGroundInfo(FSupplyDropRadioGroundInfoStruct& GroundInfo); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRep_GroundInfo(); // Flags: HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleGroundBuildingActorDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleGroundActorDestroyed(AActor* DestroyedActor); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleLandEvent(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void DestroyBalloonActor(bool bSilent); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetBalloonActor(ASupplyDropRadioBalloonParent_C* BalloonActor); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleMovementBlocked_Deprecated(FHitResult& HitResult, bool& bValidBlock); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SweepMovement_Deprecated(double DeltaTime, FHitResult& HitResult); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void TickMovement_Deprecated(double DeltaTime); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleBalloonDestroyed(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void NotifySupplyDropComplete(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnBuildingActorInitialized(TEnumAsByte<EFortBuildingInitializationReason> InitializationReason, TEnumAsByte<EFortBuildingPersistentState> BuildingPersistentState); // Flags: BlueprintAuthorityOnly|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BndEvt__AthenaSupplyDropRadioDeliveryActorParent_WaterCollision_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // Flags: HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleWaterCollisionOverlap(AActor* OtherActor); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnDeathServer(float Damage, FGameplayTagContainer& DamageTags, FVector Momentum, FHitResult& HitInfo, AController* InstigatedBy, AActor* DamageCauser, FGameplayEffectContextHandle EffectContext); // Flags: BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OpenSupplyDrop(); // Flags: BlueprintAuthorityOnly|Event|Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRep_BalloonState(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRep_DistanceFromOriginalSpawnLocForBalloonOpen(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_SupplyDropRadioActorParent(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnBalloonStateChanged__DelegateSignature(ESupplyDropRadioBalloonState BalloonState); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnGroundInfoUpdate__DelegateSignature(FSupplyDropRadioGroundInfoStruct GroundInfo); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /SupplyDropRadioGameplay/SupplyDrops/SupplyDropRadioIndicator.SupplyDropRadioIndicator_C
	// Inherited from AActor -> UObject
	// Size: 0x98 (0x328 - 0x290)
	class ASupplyDropRadioIndicator_C : public AActor	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x8)
		UFortSoundIndicatorComponent* FortSoundIndicator; // 0x298(0x8)
		UAudioComponent* ReticleAudio; // 0x2A0(0x8)
		UAudioComponent* FlareAudio; // 0x2A8(0x8)
		UNiagaraComponent* Flare_Niagara; // 0x2B0(0x8)
		UNiagaraComponent* Reticle_Niagara; // 0x2B8(0x8)
		FVector GroundLocation; // 0x2C0(0x18)
		double UpgradeGroundLocation; // 0x2D8(0x8)
		FTimerHandle UpgradeGroundLocationTimerHandle; // 0x2E0(0x8)
		double FallHeight; // 0x2E8(0x8)
		AActor* GroundActor; // 0x2F0(0x8)
		bool bOwnerLanded; // 0x2F8(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x2F9(0x7) UNKNOWN PROPERTY
		double FlareDuration; // 0x300(0x8)
		bool bDisableFlare; // 0x308(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x309(0x7) UNKNOWN PROPERTY
		TArray<AActor*> PersistentTraceIgnoreActors; // 0x310(0x10)
		USoundBase* MarkerAudio; // 0x320(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/SupplyDropRadioGameplay/SupplyDrops/SupplyDropRadioIndicator.SupplyDropRadioIndicator_C");
			return ret;
		}

		void OnRep_bOwnerLanded(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UnbindGroundDestroyedDelegates(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void StartUpdateGroundLocationChecks(float InitialStartDelay); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleGroundBuildingActorDestroyed(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRep_bDisableFlare(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetOwnerLanded(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleGroundActorDestroyed(AActor* DestroyedActor); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateGroundLocation(); // Flags: Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRep_GroundLocation(); // Flags: HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void DisableFlare(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_SupplyDropRadioIndicator(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /SupplyDropRadioGameplay/SupplyDrops/SupplyDropRadioBalloonHealthBarComponent.SupplyDropRadioBalloonHealthBarComponent_C
	// Inherited from UFortHealthBarComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x0 (0x270 - 0x270)
	class USupplyDropRadioBalloonHealthBarComponent_C : public UFortHealthBarComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/SupplyDropRadioGameplay/SupplyDrops/SupplyDropRadioBalloonHealthBarComponent.SupplyDropRadioBalloonHealthBarComponent_C");
			return ret;
		}
	};

}
