#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: MantisRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class MantisRuntime.FortMantisAnimInstance
	// Inherited from UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x18 (0x4C0 - 0x4A8)
	class UFortMantisAnimInstance : public UFortBaseAnimInstance	
	{
	public:
		FFortMantisReplicatedAnimInstanceInfo MantisAnimInstanceInfo; // 0x4A8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MantisRuntime.FortMantisAnimInstance");
			return ret;
		}

		void OnMantisTechniqueStarted(int32_t TechniqueIndex, FName TechniqueName); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnMantisTechniqueEnded(int32_t TechniqueIndex, FName TechniqueName); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class MantisRuntime.FortMantisLayerAnimInstance
	// Inherited from UFortPlayerAnimInstanceProxy -> UFortBaseLayerAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x10 (0x1430 - 0x1420)
	class UFortMantisLayerAnimInstance : public UFortPlayerAnimInstanceProxy	
	{
	public:
		FFortMantisReplicatedAnimInstanceInfo MantisAnimInstanceInfo; // 0x1420(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MantisRuntime.FortMantisLayerAnimInstance");
			return ret;
		}

		void OnMantisTechniqueStarted(int32_t TechniqueIndex, FName TechniqueName); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnMantisTechniqueEnded(int32_t TechniqueIndex, FName TechniqueName); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class MantisRuntime.FortItemLayerAnimInstance_UncleBrolly
	// Inherited from UFortItemLayerAnimInstance -> UFortBaseLayerAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x90 (0x7D0 - 0x740)
	class UFortItemLayerAnimInstance_UncleBrolly : public UFortItemLayerAnimInstance	
	{
	public:
		FCachedAnimStateArray UmbrellaGliderOpenStateDataArray; // 0x740(0x18)
		FVector WrapTranslation; // 0x758(0x18)
		FRotator WrapRotation; // 0x770(0x18)
		FRotator RootRotationOffset; // 0x788(0x18)
		float LandingPredictedTimer; // 0x7A0(0x4)
		bool bShouldUpdateYawCorrection; // 0x7A4(0x1)
		bool bWasAcceleratingBeforeDodge; // 0x7A5(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x7A6(0x2) UNKNOWN PROPERTY
		float UncleBrollyDeployCurveValue; // 0x7A8(0x4)
		float DashChargeTier; // 0x7AC(0x4)
		float DashChargeAdditivePlayrate; // 0x7B0(0x4)
		bool bIsUmbrellaFailing; // 0x7B4(0x1)
		bool bIsMeleeGuarding; // 0x7B5(0x1)
		bool bIsSprinting; // 0x7B6(0x1)
		bool bIsInAir; // 0x7B7(0x1)
		bool bIsLandingPredicted; // 0x7B8(0x1)
		bool bIsJumping; // 0x7B9(0x1)
		bool bIsDodging; // 0x7BA(0x1)
		bool bIsDodgingEast; // 0x7BB(0x1)
		bool bIsDodgingSouth; // 0x7BC(0x1)
		bool bIsDodgingWest; // 0x7BD(0x1)
		bool bIsDashing; // 0x7BE(0x1)
		bool bIsDashCharging; // 0x7BF(0x1)
		bool bIsDashPredictingEnd; // 0x7C0(0x1)
		bool bIsChargeTier1; // 0x7C1(0x1)
		bool bIsChargeTier2; // 0x7C2(0x1)
		bool bIsChargeTier3; // 0x7C3(0x1)
		bool bMeleeGuardingOrUmbrellaFailing; // 0x7C4(0x1)
		bool bTransition_Default_to_GuardLoop; // 0x7C5(0x1)
		bool bTransition_Default_to_GuardIntro; // 0x7C6(0x1)
		bool bTransition_GuardIntro_to_Default; // 0x7C7(0x1)
		bool bUpperBodyShouldPassThrough; // 0x7C8(0x1)
		bool bUmbrellaGliderIsOpen; // 0x7C9(0x1)
		unsigned char UnknownData01_7[0x6]; // 0x7CA(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MantisRuntime.FortItemLayerAnimInstance_UncleBrolly");
			return ret;
		}
	};


	// Class MantisRuntime.UncleBrollyWeaponAnimInstance
	// Inherited from UAnimInstance -> UObject
	// Size: 0x48 (0x400 - 0x3B8)
	class UUncleBrollyWeaponAnimInstance : public UAnimInstance	
	{
	public:
		UClass* UncleBrollyItemLayer; // 0x3B8(0x8)
		FRotator UmbrellaRotation; // 0x3C0(0x18)
		float UmbrellaSpinSpeed; // 0x3D8(0x4)
		float BlockDeployEndPlayrate; // 0x3DC(0x4)
		float BlockDeployEndStartPosition; // 0x3E0(0x4)
		bool bIsDodging; // 0x3E4(0x1)
		bool bIsPlayingMeleeAnim; // 0x3E5(0x1)
		bool bIsUmbrellaFailing; // 0x3E6(0x1)
		bool bIsMeleeGuarding; // 0x3E7(0x1)
		bool bIsInAir; // 0x3E8(0x1)
		bool bIsDashing; // 0x3E9(0x1)
		bool bIsSprinting; // 0x3EA(0x1)
		bool bIsPredictingEnd; // 0x3EB(0x1)
		bool bIsDashCharging; // 0x3EC(0x1)
		bool bIsDashPredictingEnd; // 0x3ED(0x1)
		bool bInAirAndMeleeGuarding; // 0x3EE(0x1)
		bool bTransition_Default_to_DeployStart; // 0x3EF(0x1)
		bool bTransition_DeployStart_to_Default; // 0x3F0(0x1)
		bool bTransition_Fail_to_FailToDeploy; // 0x3F1(0x1)
		bool bTransition_FailLoop_to_DeployEnd; // 0x3F2(0x1)
		unsigned char UnknownData00_7[0xD]; // 0x3F3(0xD) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MantisRuntime.UncleBrollyWeaponAnimInstance");
			return ret;
		}
	};


	// Class MantisRuntime.FortAbilityTask_ApplyRootMotionMantisForce
	// Inherited from UAbilityTask_ApplyRootMotion_Base -> UAbilityTask -> UGameplayTask -> UObject
	// Size: 0x88 (0x140 - 0xB8)
	class UFortAbilityTask_ApplyRootMotionMantisForce : public UAbilityTask_ApplyRootMotion_Base	
	{
	public:
		FMulticastInlineDelegate OnFinish; // 0xB8(0x10)
		float duration; // 0xC8(0x4)
		unsigned char UnknownData00_6[0x4]; // 0xCC(0x4) UNKNOWN PROPERTY
		UAnimMontage* TechniqueMontage; // 0xD0(0x8)
		FFortMantisRootMotionWarpInfo WarpInfo; // 0xD8(0x68)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MantisRuntime.FortAbilityTask_ApplyRootMotionMantisForce");
			return ret;
		}
	};


	// Class MantisRuntime.FortAnimNotify_Mantis
	// Inherited from UAnimNotify -> UObject
	// Size: 0x8 (0x40 - 0x38)
	class UFortAnimNotify_Mantis : public UAnimNotify	
	{
	public:
		EFortMantisNotifyEvent MantisNotifyEvent; // 0x38(0x1)
		EFortMantisBranchRule MantisBranchRule; // 0x39(0x1)
		EFortMantisBranchPath MantisBranchPath; // 0x3A(0x1)
		unsigned char UnknownData00_7[0x5]; // 0x3B(0x5) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MantisRuntime.FortAnimNotify_Mantis");
			return ret;
		}
	};


	// Class MantisRuntime.FortAnimNotifyState_Mantis
	// Inherited from UAnimNotifyState -> UObject
	// Size: 0x18 (0x48 - 0x30)
	class UFortAnimNotifyState_Mantis : public UAnimNotifyState	
	{
	public:
		EFortMantisNotifyWindow MantisNotifyWindow; // 0x30(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x31(0x3) UNKNOWN PROPERTY
		FGameplayTag MantisNotifyTag; // 0x34(0x4)
		EFortMantisNotifyTranslationWarpLimitRule TranslationWarpLimitRule; // 0x38(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x39(0x3) UNKNOWN PROPERTY
		float TranslationWarpLimit; // 0x3C(0x4)
		EFortMantisNotifyRotationWarpRateRule RotationRateWarpRule; // 0x40(0x1)
		bool bWarpRotation : 1; // 0x41:0(0x1)
		bool bWarpTranslation : 1; // 0x41:1(0x1)
		unsigned char UnknownData02_7[0x6]; // 0x42(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MantisRuntime.FortAnimNotifyState_Mantis");
			return ret;
		}
	};


	// Class MantisRuntime.FortGameplayAbility_Mantis
	// Inherited from UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0x58 (0xB98 - 0xB40)
	class UFortGameplayAbility_Mantis : public UFortGameplayAbility	
	{
	public:
		bool bUseCommitValidation; // 0xB40(0x1)
		bool bAllowRootMotionWarping; // 0xB41(0x1)
		bool bUseAlternativeWarpingBehavior; // 0xB42(0x1)
		bool bApplyEffectContainerOnTechniqueDamage; // 0xB43(0x1)
		bool bApplyEffectContainerOnTechniqueStart; // 0xB44(0x1)
		unsigned char UnknownData00_6[0x3]; // 0xB45(0x3) UNKNOWN PROPERTY
		UFortMantisPawnComponent* MantisPawnComponent; // 0xB48(0x8)
		UAbilityTask_PlayMontageAndWait* MontageTask; // 0xB50(0x8)
		UAbilityTask_ApplyRootMotion_Base* RootMotionTask; // 0xB58(0x8)
		unsigned char UnknownData01_7[0x38]; // 0xB60(0x38) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MantisRuntime.FortGameplayAbility_Mantis");
			return ret;
		}

		void OnMontageFinished(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF750679CCC(relative to base address)
		void OnMontageCancelled(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF750679CB8(relative to base address)
		void OnMontageBlendingOut(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF750679CA4(relative to base address)
		int32_t GetLevelForGameplayEffectContainer(FGameplayTag ApplicationTag); // Flags: Native|Event|Protected|BlueprintEvent|Const, Memory Exec: 0x7FF7506798C4(relative to base address)
		FName GetDynamicMontageNameForTechnique(FName TechniqueName); // Flags: Native|Event|Protected|BlueprintEvent|Const, Memory Exec: 0x7FF750679838(relative to base address)
		void FillMetadataForTechnique(FName TechniqueName, FFortMantisTechniqueMetadata& OutTechniqueMetadata); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ConfigureRootMotionWarpingAlternativeBehavior(FName TechniqueName, AActor* OutTargetActor, bool& bOutSnapshotTargetActorLocation, EFortMantisWarpTranslationMethod& OutWarpTranslationMethod, FVector& OutWarpTranslationVector, EFortMantisWarpRotationMethod& OutWarpRotationMethod, FRotator& OutStaticRotation); // Flags: Event|Protected|HasOutParms|HasDefaults|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ConfigureRootMotionWarping(FName TechniqueName, bool& bOutAllowTranslationWarp, bool& bOutAllowRotationWarp, AActor* OutTargetActor, bool& bOutSnapshotTargetActorLocation, bool& bOutWarpTranslationToLocation, FVector& outTargetLocation); // Flags: Native|Event|Protected|HasOutParms|HasDefaults|BlueprintEvent, Memory Exec: 0x7FF750679560(relative to base address)
		void BP_OnTechniqueNotifyWindowStarted(EFortMantisNotifyWindow NotifyWindow, UFortAnimNotifyState_Mantis* Notify); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnTechniqueNotifyWindowEnded(EFortMantisNotifyWindow NotifyWindow, UFortAnimNotifyState_Mantis* Notify); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnTechniqueNotifyEvent(EFortMantisNotifyEvent NotifyEvent, UFortAnimNotify_Mantis* Notify); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnMantisTechniqueHit(FGameplayAbilityTargetDataHandle& TargetDataHandle, FGameplayTag ApplicationTag); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnMantisPreTechniqueSelection(); // Flags: BlueprintCosmetic|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnMantisInputEvent(EFortMantisTechniqueActivationInputType InputType, EFortMantisTechniqueActivationTimingType InputTiming, bool bDidInputStartTechnique, bool bDidInputQueueTechnique, float InputHeldDuration); // Flags: BlueprintCosmetic|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_MantisAbilityTechniqueStarted(FGameplayTagContainer OwningTags, FName SequenceName, bool StartsSequence, bool EndsSequence); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class MantisRuntime.FortMantisData
	// Inherited from UDataAsset -> UObject
	// Size: 0x40 (0x70 - 0x30)
	class UFortMantisData : public UDataAsset	
	{
	public:
		bool bShowTargetHealthBar; // 0x30(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x31(0x7) UNKNOWN PROPERTY
		UClass* TechniqueAbility; // 0x38(0x8)
		TArray<FFortGameplayEffectContainer> TechniqueAdditionEffectContainers; // 0x40(0x10)
		TArray<FFortMantisTechniqueData> Techniques; // 0x50(0x10)
		TArray<FFortMantisTechniqueBranch> Branches; // 0x60(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MantisRuntime.FortMantisData");
			return ret;
		}
	};


	// Class MantisRuntime.FortMantisPawnComponent
	// Inherited from UPawnComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x3C8 (0x468 - 0xA0)
	class UFortMantisPawnComponent : public UPawnComponent	
	{
	public:
		FMulticastInlineDelegate OnTechniqueMetadataReady; // 0xA0(0x10)
		unsigned char UnknownData00_6[0xE0]; // 0xB0(0xE0) UNKNOWN PROPERTY
		TMap<UAnimMontage*, FFortMantisMontageData> MontageDataMap; // 0x190(0x50)
		UFortMantisData* MantisData; // 0x1E0(0x8)
		AFortWeapon* Weapon; // 0x1E8(0x8)
		unsigned char UnknownData01_7[0x278]; // 0x1F0(0x278) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MantisRuntime.FortMantisPawnComponent");
			return ret;
		}

		bool TryManuallyStartTechnique(int32_t TechniqueDataIndex); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75067A4C4(relative to base address)
		bool TryManuallyEndCurrentTechnique(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75067A470(relative to base address)
		void SimulateInputEvent(EFortMantisTechniqueActivationInputType InputType, EFortMantisTechniqueActivationTimingType InputTiming, bool bForceProcessEvent); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75067A374(relative to base address)
		void SetLockOnState(bool bEnabled, AActor* TargetActor); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75067A200(relative to base address)
		void SetBranchRule(EFortMantisBranchRule InBranchRule, EFortMantisBranchPath InBranchPath); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF75067A13C(relative to base address)
		void OnPostPhysicsRotation(UCharacterMovementComponent* CharMoveComp, float DeltaSeconds); // Flags: Final|Native|Protected, Memory Exec: 0x7FF750679CF4(relative to base address)
		void OnOwnerWeaponHolstered(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF750679CE0(relative to base address)
		void OnCharacterMovementPreUpdate(UCharacterMovementComponent* CharMoveComp, float DeltaSeconds); // Flags: Final|Native|Protected, Memory Exec: 0x7FF750679B60(relative to base address)
		bool IsSpecificInputPressed(EFortMantisTechniqueActivationInputType InputType); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF750679AB4(relative to base address)
		bool IsPerformingLockOn(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750679A98(relative to base address)
		bool HasLockOnTarget(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750679A58(relative to base address)
		bool HasCurrentTechniqueMetadataBeenSet(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FDF3C0C(relative to base address)
		UAnimMontage GetMontageForCurrentTechnique(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750679A0C(relative to base address)
		AActor GetLockOnTarget(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7506799E8(relative to base address)
		FFortMantisTechniqueMetadata GetCurrentTechniqueMetadata(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75067981C(relative to base address)
	};


	// Class MantisRuntime.FortMantisWeaponComponent
	// Inherited from UFortWeaponComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x50 (0xF0 - 0xA0)
	class UFortMantisWeaponComponent : public UFortWeaponComponent	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY
		UFortMantisData* MantisData; // 0xA8(0x8)
		TWeakObjectPtr<UFortMantisPawnComponent*> MantisPawnComponent; // 0xB0(0x8)
		FFortMantisReplicatedAnimInstanceInfo AnimInstanceInfo; // 0xB8(0x10)
		FFortMantisReplicatedAnimInstanceInfo ReplayAnimInstanceInfo; // 0xC8(0x10)
		unsigned char UnknownData01_7[0x18]; // 0xD8(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MantisRuntime.FortMantisWeaponComponent");
			return ret;
		}

		void OnWeaponAbilitiesRemoved(AFortWeapon* Weapon, EFortWeaponAbilityRemovalReason RemovalReason); // Flags: Final|Native|Protected, Memory Exec: 0x7FF75067A078(relative to base address)
		void OnUnEquip(AFortWeapon* Weapon); // Flags: Final|Native|Protected, Memory Exec: 0x7FF750679FF8(relative to base address)
		void OnRep_ReplayAnimInstanceInfo(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF750679FB4(relative to base address)
		void OnReleaseTrigger(AFortWeapon* Weapon); // Flags: Final|Native|Protected, Memory Exec: 0x7FF750679F34(relative to base address)
		void OnReleaseSecondaryFire(AFortWeapon* Weapon); // Flags: Final|Native|Protected, Memory Exec: 0x7FF750679EB4(relative to base address)
		void OnPreActivateSecondaryAbility(AFortWeapon* Weapon); // Flags: Final|Native|Protected, Memory Exec: 0x7FF750679E34(relative to base address)
		void OnPreActivatePrimaryAbility(AFortWeapon* Weapon); // Flags: Final|Native|Protected, Memory Exec: 0x7FF750679DB8(relative to base address)
		void OnEquip(AFortWeapon* Weapon); // Flags: Final|Native|Protected, Memory Exec: 0x7FF750679C24(relative to base address)
		FFortMantisReplicatedAnimInstanceInfo GetAnimInstanceInfo(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74FE10390(relative to base address)
	};

}
