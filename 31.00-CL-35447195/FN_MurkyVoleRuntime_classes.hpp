#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: MurkyVoleRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class MurkyVoleRuntime.FortControllerComponent_MurkyVole
	// Inherited from UFortControllerComponent -> UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x0 (0xA8 - 0xA8)
	class UFortControllerComponent_MurkyVole : public UFortControllerComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MurkyVoleRuntime.FortControllerComponent_MurkyVole");
			return ret;
		}
	};


	// Class MurkyVoleRuntime.FortGameplayAbility_MurkyVoleMissileManager
	// Inherited from UFortGameplayAbility_Action -> UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0x8 (0xB78 - 0xB70)
	class UFortGameplayAbility_MurkyVoleMissileManager : public UFortGameplayAbility_Action	
	{
	public:
		AFortWeaponRangedDual_MurkyVole CurrentWeapon; // 0xB70(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MurkyVoleRuntime.FortGameplayAbility_MurkyVoleMissileManager");
			return ret;
		}

		void SpawnPredictiveMissileProjectile(FMurkyVoleMissileSpawnInfo& SpawnInfo); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414BE5C98
		void ServerSpawnProjectile(FMurkyVoleMissileSpawnInfo SpawnInfo, FPredictionKey PredictionKey); // Flags: Net|NetReliableNative|Event|Public|NetServer 0x7FF414BE5BB8
		void HandleMissileSpawned(AFortProjectileBase SpawnedProjectile); // Flags: Event|Public|BlueprintEvent 0x7FF414BE5AD8
		bool CanFireMissile(FMurkyVoleMissileSpawnInfo& SpawnInfo); // Flags: Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x7FF414BE59F8
	};


	// Class MurkyVoleRuntime.FortProjectileMoveComp_DrunkMurkyVole
	// Inherited from UFortProjectileMoveComp_Drunk -> UFortProjectileMovementComponent -> UProjectileMovementComponent -> UMovementComponent -> UActorComponent -> UObject
	// Size: 0x4F8 (0x9B0 - 0x4B8)
	class UFortProjectileMoveComp_DrunkMurkyVole : public UFortProjectileMoveComp_Drunk	
	{
	public:
		FMurkyVoleDrunkProjectileConfig NewDrunkConfig; // 0x4B8(0x70)
		bool bKeepInitialSpeed; // 0x528(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x529(0x7) UNKNOWN PROPERTY
		UCurveFloat DrunkSpeedScaleCurve; // 0x530(0x8)
		UCurveFloat DrunkGravityScaleCurve; // 0x538(0x8)
		FScalableFloat MaxRandomTurnAngle; // 0x540(0x28)
		FScalableFloat MinRandomTurnAngle; // 0x568(0x28)
		FScalableFloat DirectionChangeRate; // 0x590(0x28)
		FScalableFloat EnableAbovePlaneLimitation; // 0x5B8(0x28)
		FScalableFloat AbovePlaneDistanceThreshold; // 0x5E0(0x28)
		FScalableFloat MaxAngleToLoseAbovePlaneLimit; // 0x608(0x28)
		FScalableFloat MinAngleToLoseAbovePlaneLimit; // 0x630(0x28)
		FScalableFloat HomingRandomTargetPositionRadius; // 0x658(0x28)
		FScalableFloat TargetedInitialDelay; // 0x680(0x28)
		FScalableFloat bAutoAdjustInitialVelocity; // 0x6A8(0x28)
		FScalableFloat InitialMinPitch; // 0x6D0(0x28)
		FScalableFloat InitialRandomYawAngle; // 0x6F8(0x28)
		FScalableFloat DrunkVelocityInitialDelay; // 0x720(0x28)
		FScalableFloat DrunkVelocityDuration; // 0x748(0x28)
		FScalableFloat bEnableDrunkTarget; // 0x770(0x28)
		FScalableFloat DrunkTargetInitialDelay; // 0x798(0x28)
		FScalableFloat DrunkTargetPositionLookaheadDist; // 0x7C0(0x28)
		FScalableFloat StartBlendOutRange; // 0x7E8(0x28)
		FScalableFloat FinishBlendOutRange; // 0x810(0x28)
		FScalableFloat TimeThresholdForBlendOutOnTime; // 0x838(0x28)
		FScalableFloat BlendAlphaThresholdForBlendOutOnTime; // 0x860(0x28)
		FScalableFloat DurationForBlendOutOnTime; // 0x888(0x28)
		FScalableFloat HomingDrunkBlendOutTurnSpeed; // 0x8B0(0x28)
		FScalableFloat TurnAngleBlendOutMultiplier; // 0x8D8(0x28)
		FScalableFloat DeviateStartAngle; // 0x900(0x28)
		FScalableFloat DeviateEndAngle; // 0x928(0x28)
		FScalableFloat DeviateMinBlendOutAlphaAddition; // 0x950(0x28)
		FScalableFloat DeviateMaxBlendOutAlphaAddition; // 0x978(0x28)
		unsigned char UnknownData03_7[0x10]; // 0x9A0(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MurkyVoleRuntime.FortProjectileMoveComp_DrunkMurkyVole");
			return ret;
		}

		void SetNewDrunkConfig(FMurkyVoleDrunkProjectileConfig& NewConfig); // Flags: Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 0x7FF414BE5E58
		FMurkyVoleDrunkProjectileConfig GetDrunkConfig(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BE5D78
	};


	// Class MurkyVoleRuntime.FortWeaponRangedDual_MurkyVole
	// Inherited from AFortWeaponRanged -> AFortWeapon -> AActor -> UObject
	// Size: 0x100 (0x1EA8 - 0x1DA8)
	class AFortWeaponRangedDual_MurkyVole : public AFortWeaponRanged	
	{
	public:
		FMulticastInlineDelegate OnMissileNumberChanged; // 0x1DA8(0x10)
		UFortItemDefinition MissileAmmoDefinition; // 0x1DB8(0x8)
		UClass MissileProjectileClass; // 0x1DC0(0x8)
		FScalableFloat MissileGravityScale; // 0x1DC8(0x28)
		FScalableFloat MissileMinTurnSpeed; // 0x1DF0(0x28)
		FScalableFloat MissileMaxTurnSpeed; // 0x1E18(0x28)
		FScalableFloat MissileRampTimeForTurnSpeed; // 0x1E40(0x28)
		FScalableFloat MissileLockTargetDistanceThreshold; // 0x1E68(0x28)
		int32_t MissileFiredNumber; // 0x1E90(0x4)
		int32_t LocalMissileNumber; // 0x1E94(0x4)
		int32_t ActualMissileNumber; // 0x1E98(0x4)
		unsigned char UnknownData01_7[0xC]; // 0x1E9C(0xC) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MurkyVoleRuntime.FortWeaponRangedDual_MurkyVole");
			return ret;
		}

		void OnRep_MissileNumber(int32_t OldMissileNumber); // Flags: Final|Native|Protected 0x7FF4143E2678
		void OnMissileNumberChanged__DelegateSignature(int32_t OldMissileNumber); // Flags: MulticastDelegate|Public|Delegate 0x7FF4143E2598
		void BPGetMuzzleBlockedLocation(bool& bMuzzleIsBlocked, FVector& MuzzleBlockedLocation); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF4143E24B8
	};


	// Class MurkyVoleRuntime.MurkyVoleHoverLayerAnimInstance
	// Inherited from UFortPlayerAnimInstanceProxy -> UFortBaseLayerAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x120 (0x1530 - 0x1410)
	class UMurkyVoleHoverLayerAnimInstance : public UFortPlayerAnimInstanceProxy	
	{
	public:
		float LeanX; // 0x1410(0x4)
		float LeanY; // 0x1414(0x4)
		bool bIsHoverDash; // 0x1418(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x1419(0x3) UNKNOWN PROPERTY
		float HoverYawDelta; // 0x141C(0x4)
		float DashX; // 0x1420(0x4)
		float DashY; // 0x1424(0x4)
		bool bIsHoverAddArms; // 0x1428(0x1)
		bool bCanEnterPostBoost; // 0x1429(0x1)
		unsigned char UnknownData04_6[0x2]; // 0x142A(0x2) UNKNOWN PROPERTY
		FGameplayTag CooldownTagName; // 0x142C(0x4)
		TArray WeaponDisplayNameSubStringsToAddArmsAnim; // 0x1430(0x10)
		TArray WeaponDisplayNameSubStringsToAddArmsAnimWhenRelaxedLevel1; // 0x1440(0x10)
		FCachedAnimRelevancyData BoostToPostBoostRelevancyData; // 0x1450(0x14)
		unsigned char UnknownData05_7[0xCC]; // 0x1464(0xCC) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MurkyVoleRuntime.MurkyVoleHoverLayerAnimInstance");
			return ret;
		}
	};


	// Class MurkyVoleRuntime.MurkyVolePackCCPAnimInstance
	// Inherited from UCustomCharacterPartAnimInstance -> UFortAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x160 (0x8D0 - 0x770)
	class UMurkyVolePackCCPAnimInstance : public UCustomCharacterPartAnimInstance	
	{
	public:
		bool bHasHoverJets; // 0x770(0x1)
		bool bHasMissileSwarm; // 0x771(0x1)
		bool bHasTurret; // 0x772(0x1)
		bool bIsActiveMissileSwarm; // 0x773(0x1)
		bool bIsActiveHover; // 0x774(0x1)
		unsigned char UnknownData05_6[0x3]; // 0x775(0x3) UNKNOWN PROPERTY
		float LeanX; // 0x778(0x4)
		float LeanY; // 0x77C(0x4)
		bool bIsHoverDash; // 0x780(0x1)
		unsigned char UnknownData06_6[0x7]; // 0x781(0x7) UNKNOWN PROPERTY
		FRotator AimRotationCurrent; // 0x788(0x18)
		bool bIsWindUp; // 0x7A0(0x1)
		bool bIsWindDown; // 0x7A1(0x1)
		unsigned char UnknownData07_6[0x6]; // 0x7A2(0x6) UNKNOWN PROPERTY
		FRotator PlayerAimRotation; // 0x7A8(0x18)
		FRotator TurretAimRotation; // 0x7C0(0x18)
		bool bIsTurretFire; // 0x7D8(0x1)
		bool bIsTurretReFire; // 0x7D9(0x1)
		unsigned char UnknownData08_6[0x2]; // 0x7DA(0x2) UNKNOWN PROPERTY
		float TurretRailOffset; // 0x7DC(0x4)
		bool bIsAutoTargetOff; // 0x7E0(0x1)
		bool bIsAshtonShieldBlocking; // 0x7E1(0x1)
		bool bIsCrouchMoving; // 0x7E2(0x1)
		bool bIsPawnSpeed2DAboveThreshold; // 0x7E3(0x1)
		float TurretPitchOffset; // 0x7E4(0x4)
		FGameplayTag HoverJetsTagName; // 0x7E8(0x4)
		FGameplayTag MissileSwarmTagName; // 0x7EC(0x4)
		FGameplayTag TurretTagName; // 0x7F0(0x4)
		FGameplayTag ActiveTagName; // 0x7F4(0x4)
		FGameplayTag CooldownTagName; // 0x7F8(0x4)
		FGameplayTag ShotFiredTagName; // 0x7FC(0x4)
		UCurveTable MurkyVoleGameplayGameDataCurveTable; // 0x800(0x8)
		unsigned char UnknownData09_7[0xC8]; // 0x808(0xC8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MurkyVoleRuntime.MurkyVolePackCCPAnimInstance");
			return ret;
		}
	};


	// Class MurkyVoleRuntime.MurkyVoleTurretAttachmentActorInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMurkyVoleTurretAttachmentActorInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MurkyVoleRuntime.MurkyVoleTurretAttachmentActorInterface");
			return ret;
		}

		void GetMurkyVoleTurretAttachmentData(bool& bIsInWindUpState, bool& bIsInWindDownState, bool& bIsInManualControlState, FRotator& AimRotationClient); // Flags: Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent 0x7FF414BE5F38
	};

}
