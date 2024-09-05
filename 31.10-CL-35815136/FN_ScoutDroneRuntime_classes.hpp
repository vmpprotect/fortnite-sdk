#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: ScoutDroneRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_Dive
	// Inherited from UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0x1A0 (0xCE0 - 0xB40)
	class UFortGameplayAbility_ScoutDrone_Dive : public UFortGameplayAbility	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0xB40(0x10) UNKNOWN PROPERTY
		FFortScoutDroneDiveTransitionData EaseInData; // 0xB50(0x30)
		FFortScoutDroneDiveTransitionData EaseOutData; // 0xB80(0x30)
		unsigned char UnknownData01_6[0x8]; // 0xBB0(0x8) UNKNOWN PROPERTY
		FScalableFloat DiveUpdateInterval; // 0xBB8(0x28)
		FScalableFloat DiveSpeedIncrease; // 0xBE0(0x28)
		FScalableFloat MinSpeedToDive; // 0xC08(0x28)
		FScalableFloat MinDistToGround; // 0xC30(0x28)
		FScalableFloat TargetPitchToDive; // 0xC58(0x28)
		FScalableFloat DivingGravityScale; // 0xC80(0x28)
		FScalableFloat MaxSpeedDivingGravityScale; // 0xCA8(0x28)
		unsigned char UnknownData02_7[0x10]; // 0xCD0(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_Dive");
			return ret;
		}

		void BP_OnDroneStoppedDiving(); // Flags: BlueprintAuthorityOnly|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnDroneStartedDiving(); // Flags: BlueprintAuthorityOnly|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_TargetingBase
	// Inherited from UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0x48 (0xB88 - 0xB40)
	class UFortGameplayAbility_ScoutDrone_TargetingBase : public UFortGameplayAbility	
	{
	public:
		UTargetingPreset* TargetingPreset; // 0xB40(0x8)
		FTargetingRequestHandle AsyncTargetingHandle; // 0xB48(0x4)
		unsigned char UnknownData00_6[0x4]; // 0xB4C(0x4) UNKNOWN PROPERTY
		FTimerHandle TargetingTimerHandle; // 0xB50(0x8)
		FScalableFloat TargetingInterval; // 0xB58(0x28)
		bool bUseControllerAsInstigator; // 0xB80(0x1)
		unsigned char UnknownData01_7[0x7]; // 0xB81(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_TargetingBase");
			return ret;
		}

		void StopTargeting(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF7515E3034(relative to base address)
		void StartTargeting(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF7515E300C(relative to base address)
		void BP_OnTargetsFound(FTargetingRequestHandle& TargetingHandle); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_SpeedBoost
	// Inherited from UFortGameplayAbility_ScoutDrone_TargetingBase -> UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0xF0 (0xC78 - 0xB88)
	class UFortGameplayAbility_ScoutDrone_SpeedBoost : public UFortGameplayAbility_ScoutDrone_TargetingBase	
	{
	public:
		FGameplayTag DoorBashCueTag; // 0xB88(0x4)
		unsigned char UnknownData00_6[0x4]; // 0xB8C(0x4) UNKNOWN PROPERTY
		UClass* DamageGameplayEffectClass; // 0xB90(0x8)
		FGameplayTag DoorBashPawnLaunchGameplayCueTag; // 0xB98(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xB9C(0x4) UNKNOWN PROPERTY
		FScalableFloat DoorBashEnabledHotfix; // 0xBA0(0x28)
		FScalableFloat DoorBashSphereRadiusForPawnLaunch; // 0xBC8(0x28)
		FScalableFloat DoorBashScalarForPawnLaunch; // 0xBF0(0x28)
		TArray<TEnumAsByte> DoorBashCollisionTypesForPawn; // 0xC18(0x10)
		FScalableFloat DoorBashEnabled; // 0xC28(0x28)
		FScalableFloat DamageOnBoostEnabled; // 0xC50(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_SpeedBoost");
			return ret;
		}

		void OnDoorBashed(FHitResult& HitResult, UFortBuildingWallDoorComponent* BashedDoor); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnBoostedIntoActor(FHitResult& HitResult); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class ScoutDroneRuntime.FortScoutDroneAnalyticsComponent
	// Inherited from UFortControllerComponent -> UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0xB0 (0x158 - 0xA8)
	class UFortScoutDroneAnalyticsComponent : public UFortControllerComponent	
	{
	public:
		float SessionStartTime; // 0xA8(0x4)
		float SessionLength; // 0xAC(0x4)
		FScalableFloat MinSessionLength; // 0xB0(0x28)
		float DistanceTraveled; // 0xD8(0x4)
		int32_t NumberOfContainersInteractedWith; // 0xDC(0x4)
		FGameplayTag DismissalReason; // 0xE0(0x4)
		int32_t NumberOfItemsPickedUp; // 0xE4(0x4)
		TArray<FString> DBNOCarriedPlayers; // 0xE8(0x10)
		int32_t NumberOfEnemiesPassivelyMarked; // 0xF8(0x4)
		int32_t NumberOfEnemiesMarkedOnCaw; // 0xFC(0x4)
		int32_t NumberOfCaws; // 0x100(0x4)
		unsigned char UnknownData00_6[0xC]; // 0x104(0xC) UNKNOWN PROPERTY
		FScalableFloat DistanceTraveledUpdateInterval; // 0x110(0x28)
		FTimerHandle DistanceTraveledUpdateTimerHandle; // 0x138(0x8)
		FVector LastRecorderDroneLocation; // 0x140(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ScoutDroneRuntime.FortScoutDroneAnalyticsComponent");
			return ret;
		}
	};


	// Class ScoutDroneRuntime.FortScoutDroneAnimInstance
	// Inherited from UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x1F8 (0x6A0 - 0x4A8)
	class UFortScoutDroneAnimInstance : public UFortBaseAnimInstance	
	{
	public:
		UFortScoutDroneMovementComponent* FortScoutDroneMovementComponent; // 0x4A8(0x8)
		double YawDeltaLastTick; // 0x4B0(0x8)
		FRotator ActorCurrentRotationTick; // 0x4B8(0x18)
		double YawDeltaCurrentTick; // 0x4D0(0x8)
		FRotator ActorRotationLastTick; // 0x4D8(0x18)
		bool IsFlying; // 0x4F0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x4F1(0x7) UNKNOWN PROPERTY
		double CurrentVelocity; // 0x4F8(0x8)
		double LastVelocity; // 0x500(0x8)
		double Velocity; // 0x508(0x8)
		double ForwardInputAlpha; // 0x510(0x8)
		double StrafeInputAlpha; // 0x518(0x8)
		FRotator DroneRotation; // 0x520(0x18)
		double Acceleration; // 0x538(0x8)
		AFortScoutDrone* ScoutDrone; // 0x540(0x8)
		bool IsBoosting; // 0x548(0x1)
		bool IsDiving; // 0x549(0x1)
		unsigned char UnknownData01_6[0x6]; // 0x54A(0x6) UNKNOWN PROPERTY
		double AimPitch; // 0x550(0x8)
		double NegativeAimPitch; // 0x558(0x8)
		FRotator FinalFanRotationL; // 0x560(0x18)
		FRotator FinalFanRotationR; // 0x578(0x18)
		double FanIdleSpeed; // 0x590(0x8)
		double FanAuthoredSpeed; // 0x598(0x8)
		double FanIdleAuthoredSpeed; // 0x5A0(0x8)
		double FanBwdSpeed; // 0x5A8(0x8)
		double FanFwdSpeed; // 0x5B0(0x8)
		double TurnNoiseAlpha; // 0x5B8(0x8)
		double LeanAlpha; // 0x5C0(0x8)
		double TurnAlpha; // 0x5C8(0x8)
		bool IsColliding; // 0x5D0(0x1)
		bool IsFlyingBwd; // 0x5D1(0x1)
		bool ShouldExitFromFlying; // 0x5D2(0x1)
		bool ShouldExitFromDiving; // 0x5D3(0x1)
		bool EarlyIntoLoop; // 0x5D4(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x5D5(0x3) UNKNOWN PROPERTY
		double AccelerationZ; // 0x5D8(0x8)
		bool IsLeftStrafe; // 0x5E0(0x1)
		bool WasStrafing; // 0x5E1(0x1)
		unsigned char UnknownData03_6[0x6]; // 0x5E2(0x6) UNKNOWN PROPERTY
		double GroundDistance; // 0x5E8(0x8)
		bool HasDivingConditionBeenMet; // 0x5F0(0x1)
		bool IsItemAttached; // 0x5F1(0x1)
		bool IsPlayerAttached; // 0x5F2(0x1)
		unsigned char UnknownData04_6[0x5]; // 0x5F3(0x5) UNKNOWN PROPERTY
		double FlapTime; // 0x5F8(0x8)
		int32_t FlapRandomPick; // 0x600(0x4)
		bool IsFlapSmall; // 0x604(0x1)
		unsigned char UnknownData05_6[0x3]; // 0x605(0x3) UNKNOWN PROPERTY
		int32_t FlapRandomMaxRange; // 0x608(0x4)
		unsigned char UnknownData06_6[0x4]; // 0x60C(0x4) UNKNOWN PROPERTY
		double FlapSmallTimeThreshold; // 0x610(0x8)
		double FlapBigTimeThreshold; // 0x618(0x8)
		double FlapSmallResetDelayDuration; // 0x620(0x8)
		double FlapBigResetDelayDuration; // 0x628(0x8)
		bool IsFlapBig; // 0x630(0x1)
		unsigned char UnknownData07_6[0x7]; // 0x631(0x7) UNKNOWN PROPERTY
		double VerticalInputAlpha; // 0x638(0x8)
		bool WasVerticalUp; // 0x640(0x1)
		bool IsFlyingVerticalUp; // 0x641(0x1)
		bool ShouldExitFromBoostOutro; // 0x642(0x1)
		bool HasSpawned; // 0x643(0x1)
		bool ShouldExitFromSpawning; // 0x644(0x1)
		bool ShouldAllowTransition; // 0x645(0x1)
		bool StateRuleFromBoostOutroToFlying; // 0x646(0x1)
		bool WasBoosting; // 0x647(0x1)
		FScalableFloat SpeedBoostForceBoostVelocity; // 0x648(0x28)
		FScalableFloat SpeedBoostMaxSpeedIncrease; // 0x670(0x28)
		bool IsFlappingTime; // 0x698(0x1)
		unsigned char UnknownData08_7[0x7]; // 0x699(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ScoutDroneRuntime.FortScoutDroneAnimInstance");
			return ret;
		}
	};


	// Class ScoutDroneRuntime.FortScoutDroneGlove
	// Inherited from AFortWeapon -> AActor -> UObject
	// Size: 0x40 (0x1638 - 0x15F8)
	class AFortScoutDroneGlove : public AFortWeapon	
	{
	public:
		FScalableFloat HoldToDeployTime; // 0x15F8(0x28)
		unsigned char UnknownData00_7[0x18]; // 0x1620(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ScoutDroneRuntime.FortScoutDroneGlove");
			return ret;
		}
	};


	// Class ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_Activate
	// Inherited from UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0x20 (0xB60 - 0xB40)
	class UFortGameplayAbility_ScoutDrone_Activate : public UFortGameplayAbility	
	{
	public:
		UClass* RCActorClass; // 0xB40(0x8)
		FVector SpawnOffset; // 0xB48(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_Activate");
			return ret;
		}
	};


	// Class ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_Dismiss
	// Inherited from UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0x10 (0xB50 - 0xB40)
	class UFortGameplayAbility_ScoutDrone_Dismiss : public UFortGameplayAbility	
	{
	public:
		FScoutDroneDeferredDestructionData DismissDelayData; // 0xB40(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_Dismiss");
			return ret;
		}

		AFortScoutDrone GetControlledDrone(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF7515E21DC(relative to base address)
	};


	// Class ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_MarkPotentialTargets
	// Inherited from UFortGameplayAbility_ScoutDrone_TargetingBase -> UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0x130 (0xCB8 - 0xB88)
	class UFortGameplayAbility_ScoutDrone_MarkPotentialTargets : public UFortGameplayAbility_ScoutDrone_TargetingBase	
	{
	public:
		FIndicatedActorData IndicatedActorData; // 0xB88(0xF8)
		unsigned char UnknownData00_6[0x10]; // 0xC80(0x10) UNKNOWN PROPERTY
		FScalableFloat MaxNumberOfPotentialTargets; // 0xC90(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_MarkPotentialTargets");
			return ret;
		}

		void OnStoppedHighlightingTarget(AActor* Target); // Flags: BlueprintCosmetic|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnStartHighlightingTarget(AActor* Target); // Flags: BlueprintCosmetic|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class ScoutDroneRuntime.ScoutDronePassiveMarkPayload
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UScoutDronePassiveMarkPayload : public UObject	
	{
	public:
		FScoutDroneStatusData TargetStatus; // 0x28(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ScoutDroneRuntime.ScoutDronePassiveMarkPayload");
			return ret;
		}
	};


	// Class ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_PassiveMark
	// Inherited from UFortGameplayAbility_ScoutDrone_TargetingBase -> UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0x1F8 (0xD80 - 0xB88)
	class UFortGameplayAbility_ScoutDrone_PassiveMark : public UFortGameplayAbility_ScoutDrone_TargetingBase	
	{
	public:
		FScoutDroneStatusData CurrentTargetStatus; // 0xB88(0x8)
		FStenciledActorData StenciledActorData; // 0xB90(0x80)
		FIndicatedActorData IndicatedActorData; // 0xC10(0xF8)
		FScalableFloat ActorTargetingRange; // 0xD08(0x28)
		FScalableFloat TimeToConfirmTarget; // 0xD30(0x28)
		AActor* CurrentTarget; // 0xD58(0x8)
		FTimerHandle TargetConfirmationTimerHandle; // 0xD60(0x8)
		UScoutDronePassiveMarkPayload* PayloadCache; // 0xD68(0x8)
		unsigned char UnknownData00_7[0x10]; // 0xD70(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_PassiveMark");
			return ret;
		}

		void OnRep_CurrentTargetStatus(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7515E2C80(relative to base address)
		void OnActorIndicatorExpired(AActor* IndicatedActor); // Flags: Final|Native|Private, Memory Exec: 0x7FF7515E23E0(relative to base address)
		void BP_OnTargetStatusChanged(AActor* ActiveTarget); // Flags: BlueprintAuthorityOnly|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class ScoutDroneRuntime.ScoutDronePickUpTargetsPayload
	// Inherited from UObject
	// Size: 0x18 (0x40 - 0x28)
	class UScoutDronePickUpTargetsPayload : public UObject	
	{
	public:
		FScoutDronePickupTargets PickUpTargets; // 0x28(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ScoutDroneRuntime.ScoutDronePickUpTargetsPayload");
			return ret;
		}
	};


	// Class ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_PickUp
	// Inherited from UFortGameplayAbility_ScoutDrone_TargetingBase -> UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0x78 (0xC00 - 0xB88)
	class UFortGameplayAbility_ScoutDrone_PickUp : public UFortGameplayAbility_ScoutDrone_TargetingBase	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0xB88(0x8) UNKNOWN PROPERTY
		FScalableFloat MaxNumberOfItemsToGrab; // 0xB90(0x28)
		UScoutDronePickUpTargetsPayload* PayloadCache; // 0xBB8(0x8)
		FScalableFloat PickupToggleCooldownDuration; // 0xBC0(0x28)
		unsigned char UnknownData01_6[0x10]; // 0xBE8(0x10) UNKNOWN PROPERTY
		UClass* AttachedPawnGEClass; // 0xBF8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_PickUp");
			return ret;
		}

		void ServerConfirmTargets(); // Flags: Final|Net|NetReliableNative|Event|Private|NetServer, Memory Exec: 0x7FF74E313DD4(relative to base address)
	};


	// Class ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_Tether
	// Inherited from UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0x78 (0xBB8 - 0xB40)
	class UFortGameplayAbility_ScoutDrone_Tether : public UFortGameplayAbility	
	{
	public:
		FScalableFloat WarningRange; // 0xB40(0x28)
		FScalableFloat SignalLossRange; // 0xB68(0x28)
		bool bIsInWarningRange; // 0xB90(0x1)
		bool bIsInSignalLossRange; // 0xB91(0x1)
		unsigned char UnknownData00_6[0x6]; // 0xB92(0x6) UNKNOWN PROPERTY
		FTimerHandle TetheringTimerHandle; // 0xB98(0x8)
		FTimerHandle TetheringReportTimerHandle; // 0xBA0(0x8)
		FScoutDroneDeferredDestructionData DismissDelayData; // 0xBA8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_Tether");
			return ret;
		}

		void StopCheckingDistances(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF7515E3020(relative to base address)
		void StartCheckingDistances(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF7515E2FF8(relative to base address)
		void Client_SetIsInWarningRange(bool bValue); // Flags: Final|Net|NetReliableNative|Event|Private|NetClient, Memory Exec: 0x7FF74E486DE4(relative to base address)
		void Client_SetIsInSignalLossRange(bool bValue); // Flags: Final|Net|NetReliableNative|Event|Private|NetClient, Memory Exec: 0x7FF7515E1FC4(relative to base address)
	};


	// Class ScoutDroneRuntime.FortAthenaMutator_ScoutDrone
	// Inherited from AFortAthenaMutator -> AFortGameplayMutator -> AInfo -> AActor -> UObject
	// Size: 0x48 (0x380 - 0x338)
	class AFortAthenaMutator_ScoutDrone : public AFortAthenaMutator	
	{
	public:
		FGameplayTagContainer DroneAllowedInteractionTags; // 0x338(0x20)
		FGameplayTagContainer DroneBlockedInteractionTags; // 0x358(0x20)
		bool bIsControllingDrone; // 0x378(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x379(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ScoutDroneRuntime.FortAthenaMutator_ScoutDrone");
			return ret;
		}

		void OnViewTargetChanged(AFortPlayerController* PlayerController, AActor* OldViewTarget, AActor* NewViewTarget); // Flags: Final|Native|Private, Memory Exec: 0x7FF7515E2D94(relative to base address)
	};


	// Class ScoutDroneRuntime.FortChargingSet_ScoutDroneEnergy
	// Inherited from UFortChargingSet_Base -> UFortAttributeSet -> UAttributeSet -> UObject
	// Size: 0xC0 (0x108 - 0x48)
	class UFortChargingSet_ScoutDroneEnergy : public UFortChargingSet_Base	
	{
	public:
		FFortGameplayAttributeData Energy; // 0x48(0x28)
		FFortGameplayAttributeData MaxEnergy; // 0x70(0x28)
		FFortGameplayAttributeData EnergyChargeRate; // 0x98(0x28)
		FFortGameplayAttributeData ServerTimeEnergyIncrements; // 0xC0(0x28)
		unsigned char UnknownData00_7[0x20]; // 0xE8(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ScoutDroneRuntime.FortChargingSet_ScoutDroneEnergy");
			return ret;
		}

		void OnRep_Energy(FFortGameplayAttributeData& OldValue); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF7515E2C94(relative to base address)
	};


	// Class ScoutDroneRuntime.FortScoutDrone
	// Inherited from ACharacter -> APawn -> AActor -> UObject
	// Size: 0x1B8 (0x7D0 - 0x618)
	class AFortScoutDrone : public ACharacter	
	{
	public:
		unsigned char UnknownData00_3[0x58]; // 0x618(0x58) UNKNOWN PROPERTY
		bool bIsDiving; // 0x670(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x671(0x7) UNKNOWN PROPERTY
		FScalableFloat DivingEnabled; // 0x678(0x28)
		bool bIsSpeedBoosting; // 0x6A0(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x6A1(0x7) UNKNOWN PROPERTY
		UNiagaraComponent* NSScoutDroneIdle_Native; // 0x6A8(0x8)
		UFortScoutDronePickupManager* PickupManagerComponent_Native; // 0x6B0(0x8)
		UClass* TeamMateIndicatorMarkerWidgetClass; // 0x6B8(0x8)
		UAudioComponent* DroneMotorLoopComponent; // 0x6C0(0x8)
		UAudioComponent* DroneThrustSoundComponent; // 0x6C8(0x8)
		FScalableFloat BaseMaxFlySpeed; // 0x6D0(0x28)
		FGameplayTagContainer DefaultTags; // 0x6F8(0x20)
		unsigned char UnknownData03_6[0x8]; // 0x718(0x8) UNKNOWN PROPERTY
		UFortAbilitySystemComponent* AbilitySystemComponent; // 0x720(0x8)
		UFortActorComponent_Affiliation* AffiliationComponent; // 0x728(0x8)
		UFortAbilitySet* StartupAbilitySet; // 0x730(0x8)
		AFortPawn* ControllingPlayerPawn; // 0x738(0x8)
		UFortHealthSet* HealthSet; // 0x740(0x8)
		UFortChargingSet_ScoutDroneEnergy* EnergySet; // 0x748(0x8)
		float LifespanAfterDeath; // 0x750(0x4)
		FFortAttributeInitializationKey AttributeInitKey; // 0x754(0x8)
		TEnumAsByte<EPhysicalSurface> PrimarySurfaceType; // 0x75C(0x1)
		TEnumAsByte<EFortBaseWeaponDamage> WeaponResponseType; // 0x75D(0x1)
		bool bPlayedDeath; // 0x75E(0x1)
		unsigned char UnknownData04_6[0x1]; // 0x75F(0x1) UNKNOWN PROPERTY
		FScoutDroneDeferredDestructionData OutOfHealthDismissDelayData; // 0x760(0x10)
		FScoutDroneDeferredDestructionData OutOfEnergyDismissDelayData; // 0x770(0x10)
		FMulticastInlineDelegate OnTeamIndexChanged; // 0x780(0x10)
		UClass* PawnOverrideComponentClass; // 0x790(0x8)
		USoundBase* DroneMotorLoopSound; // 0x798(0x8)
		USoundBase* DroneThrusterSound; // 0x7A0(0x8)
		UAudioParameterComponent* AudioParameter; // 0x7A8(0x8)
		FName LocallyViewedPawnAudioParamName; // 0x7B0(0x4)
		FName IsEnemyAudioParamName; // 0x7B4(0x4)
		FName ThrustAmountAudioParamName; // 0x7B8(0x4)
		float ThrustSoundThreshold; // 0x7BC(0x4)
		unsigned char UnknownData05_7[0x10]; // 0x7C0(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ScoutDroneRuntime.FortScoutDrone");
			return ret;
		}

		void SetupGameplayAudioParameters(); // Flags: Final|BlueprintCosmetic|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF7515E2FE4(relative to base address)
		void SetTeamMatesIndicator(bool bState); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF7515E2F64(relative to base address)
		void SetAffiliationAudio(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF7515E2F50(relative to base address)
		void OnRep_ControllingPlayerPawn(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7515E2C58(relative to base address)
		void OnDeathPlayEffects(float Damage, FGameplayTagContainer& DamageTags, FVector Momentum, FHitResult& HitInfo, AFortPawn* InstigatedBy, AActor* DamageCauser, FGameplayEffectContextHandle EffectContext); // Flags: BlueprintCosmetic|Event|Protected|HasOutParms|HasDefaults|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnDamagePlayEffects(float Damage, FGameplayTagContainer& DamageTags, FVector Momentum, FHitResult& HitInfo, AFortPawn* InstigatedBy, AActor* DamageCauser, FGameplayEffectContextHandle EffectContext); // Flags: BlueprintCosmetic|Event|Protected|HasOutParms|HasDefaults|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		float GetHealthPercentage(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7515E2384(relative to base address)
		void GetForwardAndRightDotProducts_Native(float& OutForwardDot, float& OutRightDot); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7515E22AC(relative to base address)
		FRotator GetDeltaRotator(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7515E225C(relative to base address)
		AFortPawn GetControllingPlayerPawn(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7515E2244(relative to base address)
		void GameplayCue_Damage(TEnumAsByte<EGameplayCueEvent> EventType, FGameplayCueParameters Parameters); // Flags: Native|Protected, Memory Exec: 0x7FF7515E2048(relative to base address)
	};


	// Class ScoutDroneRuntime.FortScoutDroneCameraMode
	// Inherited from UFort3PCameraMode -> UFortCameraMode -> UObject
	// Size: 0x8 (0x1F8 - 0x1F0)
	class UFortScoutDroneCameraMode : public UFort3PCameraMode	
	{
	public:
		bool bShouldInterpolateLocation; // 0x1F0(0x1)
		bool bShouldInterpolateRotation; // 0x1F1(0x1)
		unsigned char UnknownData00_7[0x6]; // 0x1F2(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ScoutDroneRuntime.FortScoutDroneCameraMode");
			return ret;
		}
	};


	// Class ScoutDroneRuntime.ScoutDroneDeferredDestructionPayload
	// Inherited from UObject
	// Size: 0x10 (0x38 - 0x28)
	class UScoutDroneDeferredDestructionPayload : public UObject	
	{
	public:
		FScoutDroneDeferredDestructionData DeferredDestructionData; // 0x28(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ScoutDroneRuntime.ScoutDroneDeferredDestructionPayload");
			return ret;
		}
	};


	// Class ScoutDroneRuntime.FortScoutDroneControllingComponent
	// Inherited from UFortControllerComponent -> UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x2B0 (0x358 - 0xA8)
	class UFortScoutDroneControllingComponent : public UFortControllerComponent	
	{
	public:
		unsigned char UnknownData00_3[0x30]; // 0xA8(0x30) UNKNOWN PROPERTY
		UInputComponent* DroneInputComponent; // 0xD8(0x8)
		AFortScoutDrone* ControlledDrone; // 0xE0(0x8)
		AActor* OriginalDroneOwner; // 0xE8(0x8)
		UFortInputMappingContext* DroneInputContext; // 0xF0(0x8)
		TArray<FScoutDroneInputTriggerableEvent> InputTriggerableEvents; // 0xF8(0x10)
		UInputAction* MoveUpAction; // 0x108(0x8)
		UInputAction* MoveAction; // 0x110(0x8)
		UInputAction* DismissAction; // 0x118(0x8)
		UClass* DroneCooldownEffectClass; // 0x120(0x8)
		unsigned char UnknownData01_6[0x18]; // 0x128(0x18) UNKNOWN PROPERTY
		FStenciledActorData OwningActorStencilData; // 0x140(0x80)
		FScoutDroneDeferredDestructionData CurrentDestructionData; // 0x1C0(0x10)
		UClass* FirstPersonCameraModeOverride; // 0x1D0(0x8)
		UClass* ThirdPersonCameraModeOverride; // 0x1D8(0x8)
		FGameplayAbilitySpec FakeCameraAbilitySpec; // 0x1E0(0xF0)
		TArray<FName> LegacyInputActionsToBlock; // 0x2D0(0x10)
		UScoutDroneDeferredDestructionPayload* DismissPayloadCache; // 0x2E0(0x8)
		FScalableFloat DismissButtonPressCooldown; // 0x2E8(0x28)
		unsigned char UnknownData02_6[0x8]; // 0x310(0x8) UNKNOWN PROPERTY
		FViewTargetTransitionParams PlayerToDroneTransitionParams; // 0x318(0x10)
		unsigned char UnknownData03_6[0x8]; // 0x328(0x8) UNKNOWN PROPERTY
		FGameplayTagContainer InterruptingPlayerTags; // 0x330(0x20)
		unsigned char UnknownData04_7[0x8]; // 0x350(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ScoutDroneRuntime.FortScoutDroneControllingComponent");
			return ret;
		}

		void ServerRequestDroneDismissal(); // Flags: Final|Net|NetReliableNative|Event|Private|NetServer, Memory Exec: 0x7FF74E217D18(relative to base address)
		void OnWeaponEquipped(AFortWeapon* NewWeapon, AFortWeapon* PrevWeapon); // Flags: Final|Native|Private, Memory Exec: 0x7FF7515E2E8C(relative to base address)
		void OnRep_CurrentDestructionData(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7515E2C6C(relative to base address)
		void OnRep_ControlledDrone(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7515E2C1C(relative to base address)
		void OnPlayerInterruptionTagsChanged(FGameplayTag Tag, int32_t NewCount); // Flags: Final|Native|Private, Memory Exec: 0x7FF7515E29BC(relative to base address)
		void OnOwningPlayerStartedDBNO(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7515E28E0(relative to base address)
		void OnControlledDroneDestroyed(AActor* InControlledDrone); // Flags: Final|Native|Private, Memory Exec: 0x7FF7515E2860(relative to base address)
		AFortScoutDrone GetControlledDrone(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DE155EC(relative to base address)
		void BP_OnPlayerShortInteract(); // Flags: BlueprintCosmetic|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnPlayerInteractLongUseChanged(bool bInteracting, bool bLongUseInteractionCompleted); // Flags: BlueprintCosmetic|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnDroneDestroyed(FGameplayTag& DismissalReason); // Flags: BlueprintCosmetic|Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnDismissalStarted(bool bInstantDismissal, FGameplayTag DismissalReason); // Flags: BlueprintCosmetic|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnDestructionStarted(bool bInstantDestruction, FGameplayTag DismissalReason); // Flags: BlueprintCosmetic|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class ScoutDroneRuntime.FortScoutDroneCooldownMagnitudeCalculation
	// Inherited from UFortGameplayModMagnitudeCalculation -> UGameplayModMagnitudeCalculation -> UGameplayEffectCalculation -> UObject
	// Size: 0x28 (0x68 - 0x40)
	class UFortScoutDroneCooldownMagnitudeCalculation : public UFortGameplayModMagnitudeCalculation	
	{
	public:
		FScalableFloat MinDroneCooldown; // 0x40(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ScoutDroneRuntime.FortScoutDroneCooldownMagnitudeCalculation");
			return ret;
		}
	};


	// Class ScoutDroneRuntime.FortScoutDroneMovementComponent
	// Inherited from UCharacterMovementComponent -> UPawnMovementComponent -> UNavMovementComponent -> UMovementComponent -> UActorComponent -> UObject
	// Size: 0xC8 (0x1040 - 0xF78)
	class UFortScoutDroneMovementComponent : public UCharacterMovementComponent	
	{
	public:
		FVector LocalInputState; // 0xF78(0x18)
		FVector LastInputState; // 0xF90(0x18)
		FVector ReplicatedAcceleration; // 0xFA8(0x18)
		FScalableFloat StrafeInputMultiplier; // 0xFC0(0x28)
		FScalableFloat BacktrackingInputMultiplier; // 0xFE8(0x28)
		FScalableFloat VerticalMovementInputMultiplier; // 0x1010(0x28)
		unsigned char UnknownData00_7[0x8]; // 0x1038(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ScoutDroneRuntime.FortScoutDroneMovementComponent");
			return ret;
		}
	};


	// Class ScoutDroneRuntime.FortScoutDronePawnOverrideComponent
	// Inherited from UFortPawnOverrideComponent -> UFortPawnComponent -> UPawnComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class UFortScoutDronePawnOverrideComponent : public UFortPawnOverrideComponent	
	{
	public:
		UClass* DroneSpectateCameraMode; // 0xA8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ScoutDroneRuntime.FortScoutDronePawnOverrideComponent");
			return ret;
		}
	};


	// Class ScoutDroneRuntime.FortScoutDronePawnOwnerOverrideComponent
	// Inherited from UFortPawnOverrideComponent -> UFortPawnComponent -> UPawnComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class UFortScoutDronePawnOwnerOverrideComponent : public UFortPawnOverrideComponent	
	{
	public:
		TWeakObjectPtr<AFortScoutDrone*> ControlledDrone; // 0xA8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ScoutDroneRuntime.FortScoutDronePawnOwnerOverrideComponent");
			return ret;
		}
	};


	// Class ScoutDroneRuntime.FortScoutDronePickupManager
	// Inherited from UPawnComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x138 (0x1D8 - 0xA0)
	class UFortScoutDronePickupManager : public UPawnComponent	
	{
	public:
		FScoutDronePickupTargets AttachedTargets; // 0xA0(0x18)
		FName AttachPointSocketName; // 0xB8(0x4)
		unsigned char UnknownData00_6[0x4]; // 0xBC(0x4) UNKNOWN PROPERTY
		FScoutDronePickupTargets PreviouslyAttachedTargets; // 0xC0(0x18)
		FVector ItemOffset; // 0xD8(0x18)
		FVector DBNOPawnOffset; // 0xF0(0x18)
		float CurrentlyAppliedCameraOffset; // 0x108(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x10C(0x4) UNKNOWN PROPERTY
		FScoutDroneCapsuleSizeData MaxExtraCapsuleDimensions; // 0x110(0x50)
		FScalableFloat MaxPickupSpread; // 0x160(0x28)
		FScalableFloat PickupTossSpeed; // 0x188(0x28)
		FGameplayTagContainer ItemsPickupTags; // 0x1B0(0x20)
		unsigned char UnknownData02_7[0x8]; // 0x1D0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ScoutDroneRuntime.FortScoutDronePickupManager");
			return ret;
		}

		void ServerUpdateItemAttachment(FVector CalculatedItemOffset); // Flags: Final|Net|NetReliableNative|Event|Private|NetServer|HasDefaults, Memory Exec: 0x7FF75125E848(relative to base address)
		void ServerDropAttachedActors(); // Flags: Net|NetReliableNative|Event|Public|NetServer, Memory Exec: 0x7FF74847EE18(relative to base address)
		void OnRep_AttachedTargets(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7515E2BA4(relative to base address)
		void OnPawnDBNOStateChanged(AFortPawn* Pawn, bool bIsDBNO); // Flags: Final|Native|Private, Memory Exec: 0x7FF7515E28F4(relative to base address)
		void OnAttachedPawnDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum); // Flags: Final|Native|Private|HasDefaults, Memory Exec: 0x7FF7515E2460(relative to base address)
		bool HasAPawnAtached(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7515E23A4(relative to base address)
		bool HasAnyAttachedActors(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7515E23C0(relative to base address)
		void BP_OnActorsDetached(); // Flags: BlueprintCosmetic|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnActorsAttached(); // Flags: BlueprintCosmetic|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
