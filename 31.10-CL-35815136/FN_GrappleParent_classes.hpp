#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: GrappleParent
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /GrappleParent/GrappleParent/GE_GrappleParent_Cooldown_Variable.GE_GrappleParent_Cooldown_Variable_C
	// Inherited from UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGE_GrappleParent_Cooldown_Variable_C : public UGameplayEffect	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/GrappleParent/GrappleParent/GE_GrappleParent_Cooldown_Variable.GE_GrappleParent_Cooldown_Variable_C");
			return ret;
		}
	};


	// Class /GrappleParent/GrappleParent/GE_GrappleParent_SpeedLinesActive.GE_GrappleParent_SpeedLinesActive_C
	// Inherited from UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGE_GrappleParent_SpeedLinesActive_C : public UGameplayEffect	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/GrappleParent/GrappleParent/GE_GrappleParent_SpeedLinesActive.GE_GrappleParent_SpeedLinesActive_C");
			return ret;
		}
	};


	// Class /GrappleParent/GrappleParent/Prj_GrappleParent_PickUpTaker.Prj_GrappleParent_PickUpTaker_C
	// Inherited from AFortProjectileBase -> AFortGameplayEffectDeliveryActor -> AActor -> UObject
	// Size: 0x60 (0xB88 - 0xB28)
	class APrj_GrappleParent_PickUpTaker_C : public AFortProjectileBase	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xB28(0x8)
		bool Done; // 0xB30(0x1)
		unsigned char UnknownData00_6[0x7]; // 0xB31(0x7) UNKNOWN PROPERTY
		AActor* AttachedPickup; // 0xB38(0x8)
		bool Move; // 0xB40(0x1)
		unsigned char UnknownData01_6[0x7]; // 0xB41(0x7) UNKNOWN PROPERTY
		FVector OriginalVel; // 0xB48(0x18)
		FVector VecToPlayer; // 0xB60(0x18)
		FMulticastInlineDelegate OnDonePullingPickup; // 0xB78(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/GrappleParent/GrappleParent/Prj_GrappleParent_PickUpTaker.Prj_GrappleParent_PickUpTaker_C");
			return ret;
		}

		void ReceiveTick(float DeltaSeconds); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Init(AActor* AttachedPickup); // Flags: Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void StartMoving(); // Flags: Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_Prj_GrappleParent_PickUpTaker(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnDonePullingPickup__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /GrappleParent/GrappleParent/GE_GrappleParent_AttachedToTree_Quest.GE_GrappleParent_AttachedToTree_Quest_C
	// Inherited from UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGE_GrappleParent_AttachedToTree_Quest_C : public UGameplayEffect	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/GrappleParent/GrappleParent/GE_GrappleParent_AttachedToTree_Quest.GE_GrappleParent_AttachedToTree_Quest_C");
			return ret;
		}
	};


	// Class /GrappleParent/GrappleParent/GE_GrappleParent_Skidding.GE_GrappleParent_Skidding_C
	// Inherited from UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGE_GrappleParent_Skidding_C : public UGameplayEffect	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/GrappleParent/GrappleParent/GE_GrappleParent_Skidding.GE_GrappleParent_Skidding_C");
			return ret;
		}
	};


	// Class /GrappleParent/GrappleParent/GE_GrappleParent_HoldingFireButton.GE_GrappleParent_HoldingFireButton_C
	// Inherited from UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGE_GrappleParent_HoldingFireButton_C : public UGameplayEffect	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/GrappleParent/GrappleParent/GE_GrappleParent_HoldingFireButton.GE_GrappleParent_HoldingFireButton_C");
			return ret;
		}
	};


	// Class /GrappleParent/GrappleParent/GE_GrappleParent_DontUseRightAfterDetach.GE_GrappleParent_DontUseRightAfterDetach_C
	// Inherited from UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGE_GrappleParent_DontUseRightAfterDetach_C : public UGameplayEffect	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/GrappleParent/GrappleParent/GE_GrappleParent_DontUseRightAfterDetach.GE_GrappleParent_DontUseRightAfterDetach_C");
			return ret;
		}
	};


	// Class /GrappleParent/GrappleParent/CameraModifier_GrappleParent.CameraModifier_GrappleParent_C
	// Inherited from UFortCameraModifier_Swinging -> UCameraModifier -> UObject
	// Size: 0x8 (0x290 - 0x288)
	class UCameraModifier_GrappleParent_C : public UFortCameraModifier_Swinging	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/GrappleParent/GrappleParent/CameraModifier_GrappleParent.CameraModifier_GrappleParent_C");
			return ret;
		}

		void TurnOff(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Turn On(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_CameraModifier_GrappleParent(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /GrappleParent/GrappleParent/GA_GrappleParent_InSwingingMovementMode.GA_GrappleParent_InSwingingMovementMode_C
	// Inherited from UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0x20 (0xB60 - 0xB40)
	class UGA_GrappleParent_InSwingingMovementMode_C : public UFortGameplayAbility	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0xB40(0x8)
		UCameraModifier_GrappleParent_C* Mod; // 0xB48(0x8)
		AB_Weapon_GrappleParent_C* Weapon; // 0xB50(0x8)
		APlayerCameraManager* CameraManager; // 0xB58(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/GrappleParent/GrappleParent/GA_GrappleParent_InSwingingMovementMode.GA_GrappleParent_InSwingingMovementMode_C");
			return ret;
		}

		void K2_ActivateAbility(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void K2_OnEndAbility(bool bWasCancelled); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void FailedToActivatePassiveAbility(FGameplayAbilityActorInfo ActorInfo); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_GA_GrappleParent_InSwingingMovementMode(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /GrappleParent/GrappleParent/B_Weapon_GrappleParent.B_Weapon_GrappleParent_C
	// Inherited from AFortWeaponRangedDualSwing -> AFortWeaponRangedDual -> AFortWeaponRanged -> AFortWeapon -> AActor -> UObject
	// Size: 0x8F0 (0x27F8 - 0x1F08)
	class AB_Weapon_GrappleParent_C : public AFortWeaponRangedDualSwing	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x1F08(0x8)
		UGrappleSwingingComponent_C* GrappleSwingingComponent; // 0x1F10(0x8)
		FMulticastInlineDelegate Unequipped; // 0x1F18(0x10)
		FMulticastInlineDelegate ReticleUpdate; // 0x1F28(0x10)
		APlayerPawn_Athena_C* Player; // 0x1F38(0x8)
		UCameraModifier_GrappleParent_C* CameraModifier; // 0x1F40(0x8)
		bool FreeFalling; // 0x1F48(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1F49(0x3) UNKNOWN PROPERTY
		FGameplayTag Swinging_DetachCue; // 0x1F4C(0x4)
		double DistanceToGroundOnAttach; // 0x1F50(0x8)
		FTimerHandle SlowerUpdateTimer; // 0x1F58(0x8)
		FScalableFloat SlowUpdateDeltaTime; // 0x1F60(0x28)
		UFortMovementComp_Character* Fort_Movement_Comp_Character; // 0x1F88(0x8)
		FHitResult LastCollision; // 0x1F90(0xF8)
		bool Equipped; // 0x2088(0x1)
		bool Grounded; // 0x2089(0x1)
		bool GoingFast; // 0x208A(0x1)
		bool HoldingFire; // 0x208B(0x1)
		unsigned char UnknownData01_6[0x4]; // 0x208C(0x4) UNKNOWN PROPERTY
		double LastEquippedTime; // 0x2090(0x8)
		double LastHitTime; // 0x2098(0x8)
		UFortControllerComponent_Swinging* SwingingController; // 0x20A0(0x8)
		bool JustLaunched; // 0x20A8(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x20A9(0x7) UNKNOWN PROPERTY
		FScalableFloat GroundDistanceInfluenceOnInitialJump; // 0x20B0(0x28)
		FScalableFloat OnHit_MinDotWithUpToStopSwinging; // 0x20D8(0x28)
		FScalableFloat DelayBetweenRepeatHitEvents; // 0x2100(0x28)
		int32_t TimeBeenSlow; // 0x2128(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x212C(0x4) UNKNOWN PROPERTY
		double StartedSwingingTime; // 0x2130(0x8)
		FMulticastInlineDelegate ReticleCooldown; // 0x2138(0x10)
		FScalableFloat Cooldown_NormalDuration; // 0x2148(0x28)
		FScalableFloat Cooldown_MinimumDuration; // 0x2170(0x28)
		FScalableFloat Cooldown_TimeForNormalDuration; // 0x2198(0x28)
		FScalableFloat SwingingTimeForTip; // 0x21C0(0x28)
		bool DontShowHoldTip; // 0x21E8(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x21E9(0x7) UNKNOWN PROPERTY
		FScalableFloat Cooldown_GotShotDuration; // 0x21F0(0x28)
		FScalableFloat InitialJump_RopeLengthForMax; // 0x2218(0x28)
		FScalableFloat InitialJump_MaxHeight; // 0x2240(0x28)
		FScalableFloat InitialJump_MinHeightForFirstJump; // 0x2268(0x28)
		FScalableFloat OnHit_MinVelocityToNotDetachAfterHit; // 0x2290(0x28)
		FScalableFloat DetachmentDotsAtLowSpeeds; // 0x22B8(0x28)
		FScalableFloat MinSpeedToNotDetachAtBadAngle; // 0x22E0(0x28)
		FScalableFloat SlowUpdateTicksNeededForDetachment; // 0x2308(0x28)
		FScalableFloat MaxWebLengthBeforeForcedDetach; // 0x2330(0x28)
		FScalableFloat CanAttachToMovingObjects; // 0x2358(0x28)
		AActor* ActorAttachedTo; // 0x2380(0x8)
		FVector ActorAttachedTo_OriginalPosition; // 0x2388(0x18)
		FScalableFloat DistanceToDetach; // 0x23A0(0x28)
		int32_t TimeNotGivingInput; // 0x23C8(0x4)
		bool OnHit_WasSwinging; // 0x23CC(0x1)
		unsigned char UnknownData05_6[0x3]; // 0x23CD(0x3) UNKNOWN PROPERTY
		FHitResult TargetingHitResult; // 0x23D0(0xF8)
		bool IsGrappleGloves; // 0x24C8(0x1)
		unsigned char UnknownData06_6[0x3]; // 0x24C9(0x3) UNKNOWN PROPERTY
		FGameplayTag GC_RopeWasShot; // 0x24CC(0x4)
		FName RopeTimestampMaterialParamName; // 0x24D0(0x4)
		FName RopeFadeMaterialParamName; // 0x24D4(0x4)
		FName RopeAnchorOffsetMaterialParamName; // 0x24D8(0x4)
		unsigned char UnknownData07_6[0x4]; // 0x24DC(0x4) UNKNOWN PROPERTY
		double MaxAnchorDistanceFromAttachPoint; // 0x24E0(0x8)
		FGameplayTag Pickup_Impact_FX; // 0x24E8(0x4)
		unsigned char UnknownData08_6[0x4]; // 0x24EC(0x4) UNKNOWN PROPERTY
		UClass* GE_InMovementMode; // 0x24F0(0x8)
		ABGA_GrappleParent_AttachmentPoint_C* AttachPointBGA; // 0x24F8(0x8)
		FVector OriginalActorLocation; // 0x2500(0x18)
		bool bIsAttached; // 0x2518(0x1)
		unsigned char UnknownData09_6[0x7]; // 0x2519(0x7) UNKNOWN PROPERTY
		UClass* SwingingAnimLayerClass; // 0x2520(0x8)
		double LastAttachedTime; // 0x2528(0x8)
		double LastDetachedTime; // 0x2530(0x8)
		AActor* ActorToRide; // 0x2538(0x8)
		bool PendingRide; // 0x2540(0x1)
		bool HasDetachedSinceFireWasPressed; // 0x2541(0x1)
		bool TargetingSomething; // 0x2542(0x1)
		unsigned char UnknownData10_6[0x1]; // 0x2543(0x1) UNKNOWN PROPERTY
		FGameplayTag FireCue; // 0x2544(0x4)
		UClass* AttachPointClass; // 0x2548(0x8)
		USoundBase* DetachSound; // 0x2550(0x8)
		USoundBase* PickupSound; // 0x2558(0x8)
		USoundBase* HitObjectSound; // 0x2560(0x8)
		USoundBase* RopeBreakSound; // 0x2568(0x8)
		FScalableFloat ShowChargeUpCircle; // 0x2570(0x28)
		FScalableFloat PlayGameplayCueOnFire; // 0x2598(0x28)
		FMulticastInlineDelegate ReticleBlockFiring; // 0x25C0(0x10)
		bool bIsPullingActor; // 0x25D0(0x1)
		unsigned char UnknownData11_6[0x7]; // 0x25D1(0x7) UNKNOWN PROPERTY
		USoundBase* FireSound; // 0x25D8(0x8)
		USoundBase* WeaponDepletedDiscardSound; // 0x25E0(0x8)
		bool bJustFired; // 0x25E8(0x1)
		unsigned char UnknownData12_6[0x7]; // 0x25E9(0x7) UNKNOWN PROPERTY
		FGameplayTagContainer BlockingTags; // 0x25F0(0x20)
		FGameplayTagContainer CooldownTags; // 0x2610(0x20)
		bool bPlayDetachAudio; // 0x2630(0x1)
		TEnumAsByte<EFortCustomMovement> SwingingCustomMoveModeIndex; // 0x2631(0x1)
		TEnumAsByte<EFortCustomMovement> SwingingGroundedCustomMoveModeIndex; // 0x2632(0x1)
		bool bBlockRiding; // 0x2633(0x1)
		FGameplayTag GC_SwingingLoop; // 0x2634(0x4)
		UClass* CameraModifierClass; // 0x2638(0x8)
		FGameplayTagContainer BlockUseTag; // 0x2640(0x20)
		FGameplayTag ReticleTag; // 0x2660(0x4)
		bool HasCustomTargeting; // 0x2664(0x1)
		unsigned char UnknownData13_6[0x3]; // 0x2665(0x3) UNKNOWN PROPERTY
		double DelayBetweenDetachAttach; // 0x2668(0x8)
		double DelayBetweenAttachAttach; // 0x2670(0x8)
		UFortWeaponComponent_Swinging* GrappleSwingingComp; // 0x2678(0x8)
		bool RopeAttached; // 0x2680(0x1)
		unsigned char UnknownData14_6[0x7]; // 0x2681(0x7) UNKNOWN PROPERTY
		double LastRopeAttachTime; // 0x2688(0x8)
		bool FallWhenShot; // 0x2690(0x1)
		bool SF_BlockAttachmentWhileGrinding; // 0x2691(0x1)
		bool CancelSwingingOnUnequip; // 0x2692(0x1)
		unsigned char UnknownData15_6[0x5]; // 0x2693(0x5) UNKNOWN PROPERTY
		FTimerHandle RecheckGroundedTimer; // 0x2698(0x8)
		bool bWaitingforBGASpawn; // 0x26A0(0x1)
		bool bRequireHeldInputForAttach; // 0x26A1(0x1)
		unsigned char UnknownData16_6[0x6]; // 0x26A2(0x6) UNKNOWN PROPERTY
		FScalableFloat SF_ShouldAttachBGAToVehicles; // 0x26A8(0x28)
		FScalableFloat SF_ShouldAttachBGAToPassengers; // 0x26D0(0x28)
		FGameplayTagContainer BlockBuildModeTags; // 0x26F8(0x20)
		bool bIsBuildModeBlocked; // 0x2718(0x1)
		unsigned char UnknownData17_6[0x7]; // 0x2719(0x7) UNKNOWN PROPERTY
		FScalableFloat SF_DetachIfUnequippedWhileAttaching; // 0x2720(0x28)
		FScalableFloat SF_HolsterWeaponOnUnequipped; // 0x2748(0x28)
		FScalableFloat SF_BlockBuildModeOnlyWhenEquipped; // 0x2770(0x28)
		FScalableFloat SF_EnableBuildModeBlocking; // 0x2798(0x28)
		FScalableFloat ProjectileSpawnDelay; // 0x27C0(0x28)
		bool TapToAttachMode; // 0x27E8(0x1)
		unsigned char UnknownData18_6[0x7]; // 0x27E9(0x7) UNKNOWN PROPERTY
		UFortExperienceSettingsComponent* ExperienceSettingsComp; // 0x27F0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/GrappleParent/GrappleParent/B_Weapon_GrappleParent.B_Weapon_GrappleParent_C");
			return ret;
		}

		void Player Input Wants Attachment(bool& Wants Attachment); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CheckAttachmentWhenUnequipped(); // Flags: Private|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Check for Vehicle(bool& ShouldAttach); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		FVector GetTrueVelocityBasedOnTransform(); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void DetachmentLaunch(bool DontApplyForce); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void VectorToAttachPoint(FVector& Result, bool& Valid); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ShouldBlockDetachment(bool& Result); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ShouldBlockSwingEndOnLand(bool& Result); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void DelayBetweenRopeAttachAndMovement(bool& Any Delay, double& Delay); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ShouldDetachIfTooSlow(bool& Result); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Jump and Impulse (Override)(FVector New Velocity); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetTargetingResult(bool GettingFireTarget, FHitResult& TargetingHitResult); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void IsFiringBlocked(bool& BlockedByTag, bool& BlockedByNoAmmo); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		FVector CalculateDetachmentForce(FVector VectorToAttachPoint, bool Launch_, FVector LaunchVector_); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ShouldDisableFiring(bool& Result); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CalculateCooldownTime(double& Output); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AllowStopSwinging(bool& OutputPin); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void InitialJumpMultiplier(double& OutputPin); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CalculateChargeTime(double& Time); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		TArray GetAffiliationsToShowFor(); // Flags: Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void FillAudioComponentParams(UAudioComponent* Audio Component); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ResetMeshTransform(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CheckIfShouldLaunch(bool& ShouldLaunch, FVector& LaunchVector); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void IsSwingAttached(bool& IsSwingAttached); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void IsSwinging(bool& IsSwinging); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UserConstructionScript(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Added_859E488E42BA5FA1ABBB659534E2C1B3(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Added_B345AE024926D8E99FC1F9AED51F639A(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Added_3C0F91AD49CBFE1EDEA8C789181CF71C(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void EventReceived_E9E0FA7248A3581BFB09AE99CCFB36A0(FGameplayEventData Payload); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void K2_OnUnEquip(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnWeaponAttached(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PlayerDamaged(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnSwingingEnded(bool SkipRemovingSwingingGE); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Fired(EDualWeaponHand Hand, bool bPersistantFire); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Detach(bool DetachFromHip, bool DontApplyForce, bool ForceRun); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void StartSlowerUpdateTimer(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SlowerUpdate(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void End Animation(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateAnimationStateServer(bool ShouldBeInLayer); // Flags: Net|NetServer|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CallReticleCooldown(double Cooldown Duration); // Flags: Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ApplyCooldown(bool Force); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire); // Flags: BlueprintCosmetic|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPlayerEnteredWater(AFortPlayerPawn* FortPlayerPawn); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateReticleFromNative(bool HitSomething, bool BlockedUse, bool IsTargetAtAimLocation, FVector TargetPosition); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void On Player DBNO(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PlayDetachSound_Multicast(); // Flags: Net|NetMulticast|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdateAnimLayer(bool ShouldBeInLayer); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnCooldownApplied(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void JustTouchedGround(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void FirePressed(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void FireReleased(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPlayerEnteredVehicle(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPlayerSkydiving(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRopeAttached(); // Flags: BlueprintCosmetic|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRopeUpdated(FVector RopeDirection, float RopeLength); // Flags: BlueprintCosmetic|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRopeStartFadeOut(); // Flags: BlueprintCosmetic|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SpawnAttachment(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Detach_Internal(bool DetachFromHip, bool DontApplyForce, bool ForceRun); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Detach_Client(bool DetachFromHip, bool DontApplyForce, bool ForceRun); // Flags: Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void attach(ABGA_GrappleParent_AttachmentPoint_C* Attach Point BGA); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void StopSkidding(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Fall(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Fall_Client(); // Flags: Net|NetClient|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Damaged_Multicast(FVector HitLocation); // Flags: Net|NetMulticast|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Server_ClientRequestedDetach(bool DetachFromHip, bool DontApplyForce, bool ForceRun); // Flags: Net|NetServer|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Client_ShowTip(FGameplayTag TipTag); // Flags: Net|NetClient|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ForceExitSwinging(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPlayerHitWhileSwinging(FHitResult& Hit); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPlayerHitWallWhileSwinging(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPlayerTouchedGroundAfterSwingEnded(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPlayerStartSkidding(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GiveFallDamageImmunity(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Collision_FX_Reset(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CustomFire(FHitResult TargetingHitResult); // Flags: Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void TryToFire(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RequestDetachFromClient(bool DetachFromHip, bool DontApplyForce, bool ForceRun); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void UpdatePendingRide(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRideAnimal(URiderComponent* Rider, URidableComponent* Ridable); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Multicast_PlayPickupEffects(FVector Location, AActor* PickUpActor); // Flags: Net|NetMulticast|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void DonePullingPickup(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReplicatedFireSound(); // Flags: Net|NetMulticast|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPlayerStartedZiplining(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnAttach(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnDetach(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void QuestAttachedToTree(AActor* HitActor); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ClientOnDestroyedOnDepleted(); // Flags: Net|NetMulticast|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetJustFired(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleMovementModeChanged(ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, char PreviousCustomMode); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnEnteredSwinging (Server Only)(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ConsumeResourcesFromFiring(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void DoAttach (after delay)(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PlayerHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, FHitResult& Hit); // Flags: HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void JustFiredTimerElapsed(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void TEMP Print debug points(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnUsableWeaponEquipped(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RecheckLanding(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void RetryLanding(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnDetachedFromTooSlow (Owning Client Only)(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExitSwingingWithoutExitingSwingingMovementMode(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnDetachWhenHitWall (Server)(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetBuildModeBlocked(bool bIsBlocked); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Multicast_SetBuildModeBlocked(bool bIsBlocked); // Flags: Net|NetMulticast|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnWeaponDetached(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Spawn Attachment Failed(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_B_Weapon_GrappleParent(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReticleBlockFiring__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReticleCooldown__DelegateSignature(double Cooldown Duration, double NormalCooldownDuration); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReticleUpdate__DelegateSignature(bool IsLockedOn, FVector Position, bool AbleToUse, bool ShowChargeUpCircle, double ChargeTime, bool IsTargetAtAimLocation, bool IsSwingAttached, bool IsFiringBlocked); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Unequipped__DelegateSignature(); // Flags: Public|Delegate|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /GrappleParent/GrappleParent/GE_GrappleParent_InSwingingMovementMode.GE_GrappleParent_InSwingingMovementMode_C
	// Inherited from UGameplayEffect -> UObject
	// Size: 0x0 (0xA68 - 0xA68)
	class UGE_GrappleParent_InSwingingMovementMode_C : public UGameplayEffect	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/GrappleParent/GrappleParent/GE_GrappleParent_InSwingingMovementMode.GE_GrappleParent_InSwingingMovementMode_C");
			return ret;
		}
	};


	// Class /GrappleParent/GrappleParent/BGA_GrappleParent_AttachmentPoint.BGA_GrappleParent_AttachmentPoint_C
	// Inherited from ABuildingGameplayActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x24 (0x9AC - 0x988)
	class ABGA_GrappleParent_AttachmentPoint_C : public ABuildingGameplayActor	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x988(0x8)
		USceneComponent* DefaultSceneRoot; // 0x990(0x8)
		APlayerPawn_Athena_C* Player; // 0x998(0x8)
		AB_Weapon_GrappleParent_C* Weapon; // 0x9A0(0x8)
		FGameplayTag GC_GrappleAttached; // 0x9A8(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/GrappleParent/GrappleParent/BGA_GrappleParent_AttachmentPoint.BGA_GrappleParent_AttachmentPoint_C");
			return ret;
		}

		void ReceiveBeginPlay(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ReceiveDestroyed(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ParentDestroyed(AActor* DestroyedActor); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ParentDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void TryDetach(); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_BGA_GrappleParent_AttachmentPoint(int32_t EntryPoint); // Flags: Final|HasDefaults, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class /GrappleParent/GrappleParent/GrappleSwingingComponent.GrappleSwingingComponent_C
	// Inherited from UFortWeaponComponent_Swinging -> UFortWeaponComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x8 (0x680 - 0x678)
	class UGrappleSwingingComponent_C : public UFortWeaponComponent_Swinging	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x678(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/GrappleParent/GrappleParent/GrappleSwingingComponent.GrappleSwingingComponent_C");
			return ret;
		}

		void UpdateReticle(bool bHitSomething, bool bUseBlocked, bool bIsWeaponAimingAtTarget, FVector& TargetPos); // Flags: Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnExitGround(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_GrappleSwingingComponent(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
