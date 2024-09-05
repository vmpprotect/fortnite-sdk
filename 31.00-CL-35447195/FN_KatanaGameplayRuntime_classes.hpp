#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: KatanaGameplayRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class KatanaGameplayRuntime.FortKatanaLayerAnimInstance
	// Inherited from UFortMantisLayerAnimInstance -> UFortPlayerAnimInstanceProxy -> UFortBaseLayerAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x170 (0x1590 - 0x1420)
	class UFortKatanaLayerAnimInstance : public UFortMantisLayerAnimInstance	
	{
	public:
		bool IsDashCharge; // 0x1420(0x1)
		unsigned char UnknownData08_6[0x7]; // 0x1421(0x7) UNKNOWN PROPERTY
		AFortPlayerPawn AsFortPlayerPawn; // 0x1428(0x8)
		bool IsBMeleeKatana; // 0x1430(0x1)
		unsigned char UnknownData09_6[0x3]; // 0x1431(0x3) UNKNOWN PROPERTY
		float HandIKHipAttachAlpha; // 0x1434(0x4)
		FVector LeftAttachedHandIKLoc; // 0x1438(0x18)
		FRotator LeftAttachedhandIKRot; // 0x1450(0x18)
		FVector RightWeaponLoc; // 0x1468(0x18)
		FRotator RightWeaponRot; // 0x1480(0x18)
		FVector LeftAttachedHandIKLocOffsetMED; // 0x1498(0x18)
		FRotator LeftAttachedHandIKRotOffset; // 0x14B0(0x18)
		FVector RightWeaponLocOffsetMED; // 0x14C8(0x18)
		FRotator RightWeaponRotOffset; // 0x14E0(0x18)
		bool IsDashAttack; // 0x14F8(0x1)
		bool IsDashOutro; // 0x14F9(0x1)
		unsigned char UnknownData10_6[0x2]; // 0x14FA(0x2) UNKNOWN PROPERTY
		float PelvisAOAlpha; // 0x14FC(0x4)
		float ClampedAimPitch; // 0x1500(0x4)
		bool EarlyExitFromDashOutro; // 0x1504(0x1)
		bool IsTechniqueActive; // 0x1505(0x1)
		bool IsPrimaryAttack; // 0x1506(0x1)
		unsigned char UnknownData11_6[0x1]; // 0x1507(0x1) UNKNOWN PROPERTY
		float WeaponHipAttachAlpha; // 0x1508(0x4)
		unsigned char UnknownData12_6[0x4]; // 0x150C(0x4) UNKNOWN PROPERTY
		FVector LeftAttachedHandIKLocOffsetLRG; // 0x1510(0x18)
		FVector RightWeaponLocOffsetLRG; // 0x1528(0x18)
		float FeetCorrectionAlpha; // 0x1540(0x4)
		bool IsInAirAttackLeap; // 0x1544(0x1)
		bool ShouldStartDashOutro; // 0x1545(0x1)
		bool StartedDashOutro; // 0x1546(0x1)
		unsigned char UnknownData13_6[0x1]; // 0x1547(0x1) UNKNOWN PROPERTY
		FScalableFloat DashRootMotionDuration; // 0x1548(0x28)
		bool IsPrimaryAttack2; // 0x1570(0x1)
		bool IsAirAttackSlam; // 0x1571(0x1)
		bool TransitionRuleToDefault; // 0x1572(0x1)
		bool IsGrindRailSwing; // 0x1573(0x1)
		bool CanExitDashCharge; // 0x1574(0x1)
		unsigned char UnknownData14_6[0x3]; // 0x1575(0x3) UNKNOWN PROPERTY
		float DashChargePlayRate; // 0x1578(0x4)
		float YawForKatanaDashAO; // 0x157C(0x4)
		unsigned char UnknownData15_7[0x10]; // 0x1580(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/KatanaGameplayRuntime.FortKatanaLayerAnimInstance");
			return ret;
		}
	};


	// Class KatanaGameplayRuntime.FortKatanaWeaponAnimInstance
	// Inherited from UFortMantisAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x158 (0x610 - 0x4B8)
	class UFortKatanaWeaponAnimInstance : public UFortMantisAnimInstance	
	{
	public:
		AFortPlayerPawn AsFortPlayerPawn; // 0x4B8(0x8)
		AFortWeapon BMeleeKatanaAsWeapon; // 0x4C0(0x8)
		bool IsBMeleeKatana; // 0x4C8(0x1)
		unsigned char UnknownData07_6[0x3]; // 0x4C9(0x3) UNKNOWN PROPERTY
		float LocalLeftHandIKAlpha; // 0x4CC(0x4)
		float LocalRightHandIKAlpha; // 0x4D0(0x4)
		bool IsDashCharge; // 0x4D4(0x1)
		bool IsDashAttack; // 0x4D5(0x1)
		unsigned char UnknownData08_6[0x2]; // 0x4D6(0x2) UNKNOWN PROPERTY
		float SwordPlayRate; // 0x4D8(0x4)
		bool IsInAirAttack_Leap; // 0x4DC(0x1)
		bool IsInAirAttack_Slam; // 0x4DD(0x1)
		unsigned char UnknownData09_6[0x2]; // 0x4DE(0x2) UNKNOWN PROPERTY
		UFortKatanaLayerAnimInstance KatanaPlayer; // 0x4E0(0x8)
		bool EarlyExitFromDashOutro; // 0x4E8(0x1)
		bool IsDashOutro; // 0x4E9(0x1)
		unsigned char UnknownData10_6[0x6]; // 0x4EA(0x6) UNKNOWN PROPERTY
		FVector ScabbardLoc; // 0x4F0(0x18)
		FRotator ScabbardRot; // 0x508(0x18)
		FVector ScabbardLocOffset; // 0x520(0x18)
		FRotator ScabbardRotOffset; // 0x538(0x18)
		bool IsSurfaceSwimming; // 0x550(0x1)
		bool IsTechniqueActive; // 0x551(0x1)
		unsigned char UnknownData11_6[0x6]; // 0x552(0x6) UNKNOWN PROPERTY
		FVector SwordLoc; // 0x558(0x18)
		FRotator SwordRot; // 0x570(0x18)
		FVector SwordLocOffset; // 0x588(0x18)
		FRotator SwordRotOffset; // 0x5A0(0x18)
		bool IsRidingSwing; // 0x5B8(0x1)
		bool IsPrimaryAttack; // 0x5B9(0x1)
		bool IsPrimaryAttack2; // 0x5BA(0x1)
		bool ExitFromPrimaryAttack; // 0x5BB(0x1)
		bool ExitFromPrimaryAttack2; // 0x5BC(0x1)
		bool NonPrimaryAttackState; // 0x5BD(0x1)
		bool IsComboAttack; // 0x5BE(0x1)
		bool TransitionRuleToDefaultPose; // 0x5BF(0x1)
		bool ExitFromInAirLand; // 0x5C0(0x1)
		bool IsGrindRailSwing; // 0x5C1(0x1)
		unsigned char UnknownData12_6[0x2]; // 0x5C2(0x2) UNKNOWN PROPERTY
		int32_t CurrentTechniqueBranch; // 0x5C4(0x4)
		int32_t PreviousTechniqueBranch; // 0x5C8(0x4)
		FName PelvisSocket; // 0x5CC(0x4)
		FVector ScabbardLocOffsetVeh; // 0x5D0(0x18)
		FRotator ScabbardRotOffsetVeh; // 0x5E8(0x18)
		float DashChargePlayRate; // 0x600(0x4)
		unsigned char UnknownData13_7[0xC]; // 0x604(0xC) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/KatanaGameplayRuntime.FortKatanaWeaponAnimInstance");
			return ret;
		}
	};


	// Class KatanaGameplayRuntime.KatanaTargetingComponent
	// Inherited from UFortWeaponComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x278 (0x318 - 0xA0)
	class UKatanaTargetingComponent : public UFortWeaponComponent	
	{
	public:
		UClass KatanaTechniqueAbilityClass; // 0xA0(0x8)
		UFortGameplayAbility CachedTechniqueAbilityCDO; // 0xA8(0x8)
		FScalableFloat DashDistance; // 0xB0(0x28)
		FScalableFloat AdditionalDashForwardAttackRange; // 0xD8(0x28)
		FScalableFloat AdditionalOutOfRangeDetection; // 0x100(0x28)
		FScalableFloat DashOffsetFromTarget; // 0x128(0x28)
		FScalableFloat PropRemainingHealthToDestroy; // 0x150(0x28)
		FScalableFloat BuildingRemainingHealthToDestroy; // 0x178(0x28)
		FGameplayTagContainer DashBlockingBuildingTags; // 0x1A0(0x20)
		TSet DashBlockingBuildingClasses; // 0x1C0(0x50)
		FFortAbilityTargetSelectionList PawnTargetSelectionList; // 0x210(0x48)
		TEnumAsByte DashTraceChannel; // 0x258(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x259(0x3) UNKNOWN PROPERTY
		float ObstructionOverlapBoxHalfSize; // 0x25C(0x4)
		FFortTargetFilter ObstructionTargetFilter; // 0x260(0x40)
		FGameplayTagContainer DashBlockIgnoreTags; // 0x2A0(0x20)
		TMap PrimaryAttackVariationInfos; // 0x2C0(0x50)
		float PrimaryAttackMinForwardMovement; // 0x310(0x4)
		TEnumAsByte PrimaryAttackObstructionTraceChannel; // 0x314(0x1)
		unsigned char UnknownData03_7[0x3]; // 0x315(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/KatanaGameplayRuntime.KatanaTargetingComponent");
			return ret;
		}

		FVector PerformPrimaryAttackTargeting(EFortKatanaPrimaryAttackVariation AttackVariation); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable 0x7FF414CC99F8
		bool PerformDashTargeting(FFortKatanaDashTargetingInfo& OutDashTargetingInfo); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414CC9918
	};

}
