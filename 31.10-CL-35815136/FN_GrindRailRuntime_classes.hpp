#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: GrindRailRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class GrindRailRuntime.FortCameraModifier_Grinding
	// Inherited from UCameraModifier -> UObject
	// Size: 0x978 (0x9C0 - 0x48)
	class UFortCameraModifier_Grinding : public UCameraModifier	
	{
	public:
		FScalableFloat bUseNativeCalculation; // 0x48(0x28)
		UCurveFloat* BlendInCurve; // 0x70(0x8)
		UCurveFloat* BlendOutCurve; // 0x78(0x8)
		FScalableFloat SnapToGrindingLocation; // 0x80(0x28)
		FScalableFloat ADSAlphaInterpSpeed; // 0xA8(0x28)
		FScalableFloat CurrentForwardInterpSpeed; // 0xD0(0x28)
		FScalableFloat MaxRightSpeedOldRangeForForward; // 0xF8(0x28)
		FScalableFloat MaxRightSpeedNewRangeForForward; // 0x120(0x28)
		FScalableFloat MinForwardSpeedOldRangeForForward; // 0x148(0x28)
		FScalableFloat MaxForwardSpeedOldRangeForForward; // 0x170(0x28)
		FScalableFloat MinForwardSpeedNewRangeForForward; // 0x198(0x28)
		FScalableFloat MaxForwardSpeedNewRangeForForward; // 0x1C0(0x28)
		FScalableFloat MinUpSpeedOldRangeForForward; // 0x1E8(0x28)
		FScalableFloat MaxUpSpeedOldRangeForForward; // 0x210(0x28)
		FScalableFloat MinUpSpeedNewRangeForForward; // 0x238(0x28)
		FScalableFloat MaxUpSpeedNewRangeForForward; // 0x260(0x28)
		FScalableFloat BaseForwardMultiplier; // 0x288(0x28)
		FScalableFloat SpeedUpBoosterForwardMultiplier; // 0x2B0(0x28)
		FScalableFloat SprintingForwardMultiplier; // 0x2D8(0x28)
		FScalableFloat RightSpeedOldRangeForRight; // 0x300(0x28)
		FScalableFloat RightSpeedNewRangeForRight; // 0x328(0x28)
		FScalableFloat MaxUpSpeedOldRangeForRight; // 0x350(0x28)
		FScalableFloat MaxUpSpeedNewRangeForRight; // 0x378(0x28)
		FScalableFloat MinForwardSpeedOldRangeForRight; // 0x3A0(0x28)
		FScalableFloat MaxForwardSpeedOldRangeForRight; // 0x3C8(0x28)
		FScalableFloat MinForwardSpeedNewRangeForRight; // 0x3F0(0x28)
		FScalableFloat MaxForwardSpeedNewRangeForRight; // 0x418(0x28)
		FScalableFloat BaseRightMultiplier; // 0x440(0x28)
		FScalableFloat SpeedUpBoostRightMultiplier; // 0x468(0x28)
		FScalableFloat SprintingRightMultiplier; // 0x490(0x28)
		FScalableFloat CurrentRightInterpSpeed; // 0x4B8(0x28)
		FScalableFloat UpSpeedOldRangeForUp; // 0x4E0(0x28)
		FScalableFloat UpSpeedNewRangeForUp; // 0x508(0x28)
		FScalableFloat CurrentUpInterpSpeed; // 0x530(0x28)
		FScalableFloat BaseUpMultiplier; // 0x558(0x28)
		FScalableFloat SpeedUpBoostUpMultiplier; // 0x580(0x28)
		FScalableFloat SprintingUpMultiplier; // 0x5A8(0x28)
		FScalableFloat MinForwardSpeedOldRangeForLean; // 0x5D0(0x28)
		FScalableFloat MaxForwardSpeedOldRangeForLean; // 0x5F8(0x28)
		FScalableFloat MinForwardSpeedNewRangeForLean; // 0x620(0x28)
		FScalableFloat MaxForwardSpeedNewRangeForLean; // 0x648(0x28)
		FScalableFloat MultiplierForMaxNewLeanRange; // 0x670(0x28)
		FScalableFloat CurrentLeanInterpSpeed; // 0x698(0x28)
		FScalableFloat MaxSpeedOldRangeForFOV; // 0x6C0(0x28)
		FScalableFloat MaxSpeedNewRangeForFOV; // 0x6E8(0x28)
		FScalableFloat BaseFOV; // 0x710(0x28)
		FScalableFloat SpeedUpBoosterFOV; // 0x738(0x28)
		FScalableFloat SprintingFOV; // 0x760(0x28)
		FScalableFloat CurrentFOVInterpSpeed; // 0x788(0x28)
		FScalableFloat DeltaDecreaseInZForOffset; // 0x7B0(0x28)
		FScalableFloat CurrentOffsetInterpSpeed; // 0x7D8(0x28)
		FScalableFloat StraightnessMultiplierForOffset; // 0x800(0x28)
		FScalableFloat FinalOffsetForwardDelta; // 0x828(0x28)
		FScalableFloat FinalOffsetUpDelta; // 0x850(0x28)
		FScalableFloat FinalOffsetRightDelta; // 0x878(0x28)
		unsigned char UnknownData00_6[0x50]; // 0x8A0(0x50) UNKNOWN PROPERTY
		bool bCachedUseNativeCalculation; // 0x8F0(0x1)
		unsigned char UnknownData01_7[0xCF]; // 0x8F1(0xCF) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GrindRailRuntime.FortCameraModifier_Grinding");
			return ret;
		}
	};


	// Class GrindRailRuntime.FortGrindRail
	// Inherited from ABuildingGameplayActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x2D0 (0xC58 - 0x988)
	class AFortGrindRail : public ABuildingGameplayActor	
	{
	public:
		FScalableFloat SpeedHardCap; // 0x988(0x28)
		FScalableFloat BaseMaxSpeed; // 0x9B0(0x28)
		FScalableFloat MaxSpeedIncreaseFromDownwardSlope; // 0x9D8(0x28)
		FScalableFloat MaxBaseAcceleration; // 0xA00(0x28)
		FScalableFloat MinBaseAcceleration; // 0xA28(0x28)
		FScalableFloat MaxStartSpeed; // 0xA50(0x28)
		FScalableFloat MinStartSpeed; // 0xA78(0x28)
		FScalableFloat SprintingAcceleration; // 0xAA0(0x28)
		FScalableFloat SprintingMaxSpeed; // 0xAC8(0x28)
		TArray<USplineMeshComponent*> GrindRailMeshes; // 0xAF0(0x10)
		TArray<FGrindRailBoosterInfo> BoosterInfos; // 0xB00(0x10)
		USplineComponent* SplineComponent; // 0xB10(0x8)
		FScalableFloat EnableBoosters; // 0xB18(0x28)
		FScalableFloat EnableGrinding; // 0xB40(0x28)
		FScalableFloat EnableProjectileCollision; // 0xB68(0x28)
		FScalableFloat EnableMeshCollision; // 0xB90(0x28)
		FScalableFloat EnableWeaponBulletCollision; // 0xBB8(0x28)
		bool bSimulateSplineGravity; // 0xBE0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0xBE1(0x3) UNKNOWN PROPERTY
		float SimulatedSplineGravityAcceleration; // 0xBE4(0x4)
		float TargetDistanceBetweenSplinePointsForGravitySimulation; // 0xBE8(0x4)
		int32_t SplineGravitySimulationIterationCount; // 0xBEC(0x4)
		float SplineGravitySimulationTime; // 0xBF0(0x4)
		bool bDisableBooster; // 0xBF4(0x1)
		unsigned char UnknownData01_6[0x3]; // 0xBF5(0x3) UNKNOWN PROPERTY
		TArray<FName> ResolverScopes; // 0xBF8(0x10)
		unsigned char UnknownData02_6[0x10]; // 0xC08(0x10) UNKNOWN PROPERTY
		TWeakObjectPtr<AFortGrindRail*> HeadConnectedRail; // 0xC18(0x20)
		TWeakObjectPtr<AFortGrindRail*> TailConnectedRail; // 0xC38(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GrindRailRuntime.FortGrindRail");
			return ret;
		}

		void UpdateTransientComponentTransforms(TArray<USceneComponent*> TransientSceneComponents); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF7512AE600(relative to base address)
		bool ShouldSoftCapMaxSpeeds(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF749859FE0(relative to base address)
		bool ShouldApplyFallDamageImmunity(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF748CDD424(relative to base address)
		void SetupMeshInfo(USplineMeshComponent* SplineMeshComponent); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7512AE540(relative to base address)
		void OnRep_TailConnectedRail(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7512AE52C(relative to base address)
		void OnRep_HeadConnectedRail(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7512AE52C(relative to base address)
		void OnRep_DisableBooster(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74956C2F4(relative to base address)
		void OnPlaylistDataReady(AFortGameStateAthena* GameState, UFortPlaylist* Playlist, FGameplayTagContainer& PlaylistContextTags); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF749009C18(relative to base address)
		void OnPlayerEndedGrinding(AFortPlayerPawn* Pawn); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPlayerBeganGrinding(AFortPlayerPawn* GrindingPawn); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void NativeGetNextPositionToGrind(float DistanceToTravel, float CurrentDistanceAlongSpline, float RightLeanValue, FVector& OutNextLocation, bool& bGotToEnd, float& NextLocationOnRail, EGrindRailBoosterMode& BoosterMode, bool& bHitObstacle, bool& bNewRail, float& DistanceAlongNewRail, AFortGrindRail* TheNewRail, bool& bNewRailReverseDirection); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7512AE00C(relative to base address)
		bool IsTipCapped(bool bStartTip); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool IsGrindRailEnabled(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF749859FE0(relative to base address)
		bool HasTailConnection(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7512ADFE8(relative to base address)
		bool HasHeadConnection(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7512ADFC4(relative to base address)
		bool GetSpeedSettingsOverride(FGrindRailSpeedSettings& SpeedSettingsOverride); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent|Const, Memory Exec: 0x7FF7512ADD58(relative to base address)
		bool GetCameraModifierOverrideClass(UClass* OutCameraModifierOverrideClass); // Flags: Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7512ADCE4(relative to base address)
		void GenerateMeshesAlongSpline(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ForceClearBoosters(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ConnectToRailAtTailUnchecked(AFortGrindRail* RailToConnectTo); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7512ADA24(relative to base address)
		void BPRerunConstructionScript(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74921B8F8(relative to base address)
		bool AllowSprinting(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF749859FE0(relative to base address)
	};


	// Class GrindRailRuntime.FortGrindRailConnector
	// Inherited from ABuildingGameplayActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0x988 - 0x988)
	class AFortGrindRailConnector : public ABuildingGameplayActor	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GrindRailRuntime.FortGrindRailConnector");
			return ret;
		}
	};


	// Class GrindRailRuntime.FortGrindRailLayerAnimInstance
	// Inherited from UFortBaseLayerAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x2F8 (0x7B0 - 0x4B8)
	class UFortGrindRailLayerAnimInstance : public UFortBaseLayerAnimInstance	
	{
	public:
		UAnimMontage* LancePickaxeMontage; // 0x4B8(0x8)
		UAnimMontage* ScythePickaxeMontage; // 0x4C0(0x8)
		UAnimMontage* FruitCakePickaxeMontage; // 0x4C8(0x8)
		FName LeanAlphaCurve; // 0x4D0(0x4)
		FName MeleeTwistCurve; // 0x4D4(0x4)
		FName InterruptibleCurve; // 0x4D8(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4DC(0x4) UNKNOWN PROPERTY
		TMap<FName, float> SlopeWarpingCurveMap; // 0x4E0(0x50)
		double LeanBwdVelocityThreshold; // 0x530(0x8)
		FCachedAnimRelevancyData BwdStartCachedData; // 0x538(0x14)
		unsigned char UnknownData01_6[0x4]; // 0x54C(0x4) UNKNOWN PROPERTY
		double IsMovingThresholdSpeed; // 0x550(0x8)
		double NoisePlayRateSprintSpeedThreshold; // 0x558(0x8)
		FVector2D NoisePlayRateNormalSpeedInputRange; // 0x560(0x10)
		FVector2D NoisePlayRateNormalSpeedOutputRange; // 0x570(0x10)
		FVector2D NoisePlayRateHighSpeedInputRange; // 0x580(0x10)
		FVector2D NoisePlayRateHighSpeedOutputRange; // 0x590(0x10)
		FVector2D CombatNoisePlayRateSpeedInputRange; // 0x5A0(0x10)
		FVector2D CombatNoisePlayRateSpeedOutputRange; // 0x5B0(0x10)
		double CombatNoiseAlphaTargeting; // 0x5C0(0x8)
		double CombatNoiseAlphaNonTargeting; // 0x5C8(0x8)
		double RootLeanAlphaInterpSpeed; // 0x5D0(0x8)
		double SlopeWarpAlphaInterpSpeed; // 0x5D8(0x8)
		double SplineRelativeAimYawDeltaThreshold; // 0x5E0(0x8)
		double AimYawSmoothInterpolationCoefficient; // 0x5E8(0x8)
		double IsSmoothingYawThreshold; // 0x5F0(0x8)
		double LeanBWDThreshold; // 0x5F8(0x8)
		double MuteUpperBodyAlphaMeleeWeapon; // 0x600(0x8)
		double MuteUpperBodyAlphaNonMeleeWeapon; // 0x608(0x8)
		double MuteUpperBodyAlphaFruitcakePickaxe; // 0x610(0x8)
		double MuteUpperBodyAlphaLanceSyctheOrDualWeild; // 0x618(0x8)
		double BaseLeanDirection; // 0x620(0x8)
		bool bIsGrinding; // 0x628(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x629(0x7) UNKNOWN PROPERTY
		double CurrentSpeed; // 0x630(0x8)
		double LeanDirection; // 0x638(0x8)
		bool bSprinting; // 0x640(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x641(0x7) UNKNOWN PROPERTY
		double LeanForward; // 0x648(0x8)
		bool bIsWeaponActive; // 0x650(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x651(0x7) UNKNOWN PROPERTY
		FRotator SplineRelativeAim; // 0x658(0x18)
		FFortAnimInput_GrindRail GrindRailInput; // 0x670(0x18)
		TWeakObjectPtr<UFortPawnComponent_GrindingProvider*> GrindingProvider; // 0x688(0x8)
		TWeakObjectPtr<UCharacterMovementComponent*> MovementComponent; // 0x690(0x8)
		TWeakObjectPtr<AFortPlayerPawn*> FortPlayerPawn; // 0x698(0x8)
		bool bIsFalling; // 0x6A0(0x1)
		unsigned char UnknownData05_6[0x7]; // 0x6A1(0x7) UNKNOWN PROPERTY
		double LeanAlpha; // 0x6A8(0x8)
		bool bIsMoving; // 0x6B0(0x1)
		bool bShould180Turn; // 0x6B1(0x1)
		bool bShouldPlayEntry; // 0x6B2(0x1)
		unsigned char UnknownData06_6[0x5]; // 0x6B3(0x5) UNKNOWN PROPERTY
		double NoisePlayRate; // 0x6B8(0x8)
		bool bIsLeanBwd; // 0x6C0(0x1)
		bool bIsLeft180Turn; // 0x6C1(0x1)
		bool bShould180TurnAgain; // 0x6C2(0x1)
		bool bIsTurning; // 0x6C3(0x1)
		bool bShouldExitLocomotion; // 0x6C4(0x1)
		bool bIsBoosting; // 0x6C5(0x1)
		bool bEarlyExitFromEntry; // 0x6C6(0x1)
		bool bAimFWD; // 0x6C7(0x1)
		bool bAimBWD; // 0x6C8(0x1)
		bool bAimLFT; // 0x6C9(0x1)
		bool bAimRGT; // 0x6CA(0x1)
		unsigned char UnknownData07_6[0x5]; // 0x6CB(0x5) UNKNOWN PROPERTY
		double AimFWDDeltaAngleDegrees; // 0x6D0(0x8)
		double AimBWDDeltaAngleDegrees; // 0x6D8(0x8)
		double AimLFTDeltaAngleDegrees; // 0x6E0(0x8)
		double AimRGTDeltaAngleDegrees; // 0x6E8(0x8)
		double NegativeYaw; // 0x6F0(0x8)
		FRotator MeleeTwistRot; // 0x6F8(0x18)
		double BwdStartCachedTime; // 0x710(0x8)
		double Velocity; // 0x718(0x8)
		bool bIsEntryLeft; // 0x720(0x1)
		bool bIsEntryFromAir; // 0x721(0x1)
		bool bIsEntryRight; // 0x722(0x1)
		bool bEnteredFromInteraction; // 0x723(0x1)
		unsigned char UnknownData08_6[0x4]; // 0x724(0x4) UNKNOWN PROPERTY
		double SlopeWarpAlpha; // 0x728(0x8)
		double SplineRelativeAimYaw; // 0x730(0x8)
		double AimYawSmoothed; // 0x738(0x8)
		bool bIsSmoothingYaw; // 0x740(0x1)
		unsigned char UnknownData09_6[0x7]; // 0x741(0x7) UNKNOWN PROPERTY
		double LastSplineRelativeAimYaw; // 0x748(0x8)
		double RootLeanAlpha; // 0x750(0x8)
		double MuteUpperBodyAlpha; // 0x758(0x8)
		bool bIsLanceType; // 0x760(0x1)
		bool bWasSprinting; // 0x761(0x1)
		bool bStateRuleToBoostLoop; // 0x762(0x1)
		bool bIsInAction; // 0x763(0x1)
		unsigned char UnknownData10_6[0x4]; // 0x764(0x4) UNKNOWN PROPERTY
		double CombatNoisePlayRate; // 0x768(0x8)
		double CombatNoiseAlpha; // 0x770(0x8)
		bool bIsTwoHandedMelee; // 0x778(0x1)
		bool bShouldCorrectUpperBody; // 0x779(0x1)
		bool bBothHandsDown; // 0x77A(0x1)
		unsigned char UnknownData11_6[0x5]; // 0x77B(0x5) UNKNOWN PROPERTY
		double TurnInPlaceAnimCurveValue; // 0x780(0x8)
		double TurnRotationAmountCurveValue; // 0x788(0x8)
		bool bIsFallingAndNotEnteredFromInteraction; // 0x790(0x1)
		bool bIsMovingOrIsTurning; // 0x791(0x1)
		bool bIsTurningOrNotIsLeanBwd; // 0x792(0x1)
		bool bIsFallingAndNotIsWeaponActive; // 0x793(0x1)
		bool bNotIsWeaponActiveAndNotIsFalling; // 0x794(0x1)
		bool bIsWeaponActiveOrIsBoosting; // 0x795(0x1)
		unsigned char UnknownData12_7[0x1A]; // 0x796(0x1A) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GrindRailRuntime.FortGrindRailLayerAnimInstance");
			return ret;
		}

		void HandleBegunGrinding(bool bWasAlreadyGrinding, bool bWasJumpingFromRail, bool bFromInteraction, FVector PreviousPlayerLocation); // Flags: Final|Native|Public|HasDefaults, Memory Exec: 0x7FF7512ADDE0(relative to base address)
		void AnimNotify_IdleEnter(UAnimNotify* Notify); // Flags: Final|Native|Public, Memory Exec: 0x7FF7512AD944(relative to base address)
		void AnimNotify_EntryExit(UAnimNotify* Notify); // Flags: Final|Native|Public, Memory Exec: 0x7FF7512AD9B4(relative to base address)
		void AnimNotify_EntryEnter(UAnimNotify* Notify); // Flags: Final|Native|Public, Memory Exec: 0x7FF7512AD944(relative to base address)
	};


	// Class GrindRailRuntime.FortMovementMode_GrindingRuntimeData
	// Inherited from UFortMovementMode_BaseExtRuntimeData -> UObject
	// Size: 0x1A0 (0x1E0 - 0x40)
	class UFortMovementMode_GrindingRuntimeData : public UFortMovementMode_BaseExtRuntimeData	
	{
	public:
		unsigned char UnknownData00_1[0x1A0]; // 0x40(0x1A0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GrindRailRuntime.FortMovementMode_GrindingRuntimeData");
			return ret;
		}
	};


	// Class GrindRailRuntime.FortMovementMode_ExtLogicGrinding
	// Inherited from UFortMovementMode_BaseExtLogic -> UObject
	// Size: 0xC18 (0xD38 - 0x120)
	class UFortMovementMode_ExtLogicGrinding : public UFortMovementMode_BaseExtLogic	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0x120(0x10) UNKNOWN PROPERTY
		TWeakObjectPtr<UFortPawnComponent_GrindingProvider*> GrindingProvider; // 0x130(0x8)
		UClass* GrindCameraModifierClass; // 0x138(0x8)
		FGameplayTag StartGrindingGameplayEvent; // 0x140(0x4)
		FGameplayTag StopGrindingGameplayEvent; // 0x144(0x4)
		FGameplayTag VehicleLaunchImmuneTag; // 0x148(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x14C(0x4) UNKNOWN PROPERTY
		FScalableFloat ShouldDropHeldObject; // 0x150(0x28)
		FGameplayTag BuildingTagImmuneToDamage; // 0x178(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x17C(0x4) UNKNOWN PROPERTY
		FScalableFloat BaseMaxLeanAngularSpeed; // 0x180(0x28)
		FScalableFloat BaseLeanInterpSpeed; // 0x1A8(0x28)
		TWeakObjectPtr<UFortComponent_Energy*> TacticalSprintEnergyComponent; // 0x1D0(0x8)
		FGameplayTagContainer TacticalSprintTooLowEnergyTag; // 0x1D8(0x20)
		FScalableFloat JumpDistanceMultiplier; // 0x1F8(0x28)
		FScalableFloat SameRailAnchoring_MaxForwardDistanceMultiplier; // 0x220(0x28)
		FScalableFloat NoAnchorJumpDistanceMultiplier; // 0x248(0x28)
		FScalableFloat SameRailAnchoring_MaxAngle; // 0x270(0x28)
		FScalableFloat MinJumpOffSpeed; // 0x298(0x28)
		FScalableFloat JumpHeight; // 0x2C0(0x28)
		FScalableFloat InfluenceOfMomentumOnAnchorJump; // 0x2E8(0x28)
		FScalableFloat SprintUsePerSecond; // 0x310(0x28)
		FScalableFloat SprintUsePerSecond_Creative; // 0x338(0x28)
		FGameplayTag SprintUseEnergyTag; // 0x360(0x4)
		FGameplayTag SprintStartedGameplayEvent; // 0x364(0x4)
		FScalableFloat MaxAllowedInclineSplinePitch; // 0x368(0x28)
		FScalableFloat MaxAllowedDeclineSplinePitch; // 0x390(0x28)
		FScalableFloat MaxAllowedShootingSplinePitch; // 0x3B8(0x28)
		FScalableFloat TurnAngleThreshold; // 0x3E0(0x28)
		FScalableFloat AnimatedTurnDuration; // 0x408(0x28)
		FScalableFloat BaseGrindRailYawRotationInterpSpeed; // 0x430(0x28)
		FScalableFloat InclineGrindRailPitchRotationInterpSpeed; // 0x458(0x28)
		FScalableFloat DeclineGrindRailPitchRotationInterpSpeed; // 0x480(0x28)
		FScalableFloat ShootingGrindRailRotationInterpSpeed; // 0x4A8(0x28)
		FScalableFloat NextGrindRailDetectionOffset; // 0x4D0(0x28)
		FGameplayTag CancelGrindingTag; // 0x4F8(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x4FC(0x4) UNKNOWN PROPERTY
		FScalableFloat MinTimeBeforeJumpSinceEntry; // 0x500(0x28)
		FScalableFloat CancelSprintLeanBackThreshold; // 0x528(0x28)
		FScalableFloat WeaponHolsterCooldown; // 0x550(0x28)
		FScalableFloat WeaponIsShootingCooldown; // 0x578(0x28)
		FScalableFloat GravityForceWhenGoingDown; // 0x5A0(0x28)
		FScalableFloat GravityForceWhenGoingUp; // 0x5C8(0x28)
		FScalableFloat BoosterSprintingAccelerationOnSlowDownBooster; // 0x5F0(0x28)
		FScalableFloat BoosterAccelerationOnSpeedUpBooster; // 0x618(0x28)
		FScalableFloat BoosterSlowDownBoosterDragMultiplier; // 0x640(0x28)
		FScalableFloat BoosterSlowDownBoosterGoalSpeed; // 0x668(0x28)
		FScalableFloat BoosterMaxSpeed; // 0x690(0x28)
		FScalableFloat ShootingMaxSpeedMultiplier; // 0x6B8(0x28)
		FScalableFloat AngleForMaxSpeedIncreaseFromDownwardSlope; // 0x6E0(0x28)
		FScalableFloat MaxSpeedIncreaseFromDownwardSlope; // 0x708(0x28)
		FScalableFloat MaxDragForSpeedSoftCap; // 0x730(0x28)
		FScalableFloat SpeedHardCap; // 0x758(0x28)
		FScalableFloat SprintingAcceleration; // 0x780(0x28)
		FScalableFloat SprintingMaxSpeed; // 0x7A8(0x28)
		FScalableFloat SpeedThresholdForTurn; // 0x7D0(0x28)
		FScalableFloat TimeToTurnAround; // 0x7F8(0x28)
		FScalableFloat SpeedForMaxLeanAcceleration; // 0x820(0x28)
		FScalableFloat SpeedForMinLeanAcceleration; // 0x848(0x28)
		FScalableFloat MaxLeanAcceleration; // 0x870(0x28)
		FScalableFloat MinLeanAcceleration; // 0x898(0x28)
		FScalableFloat CanAccelerateByLeaningIntoTurns; // 0x8C0(0x28)
		FScalableFloat CurvatureForMaxLeanIntoTurnsAcceleration; // 0x8E8(0x28)
		FScalableFloat LeanIntoTurnsMaxAcceleration; // 0x910(0x28)
		FScalableFloat IncreasedMaxSpeedFromLeanIntoTurn; // 0x938(0x28)
		FScalableFloat SidewaysLeanBoostReductionRate; // 0x960(0x28)
		FScalableFloat SpeedForMaxBaseAcceleration; // 0x988(0x28)
		FScalableFloat SpeedForMinBaseAcceleration; // 0x9B0(0x28)
		FScalableFloat MaxBaseAcceleration; // 0x9D8(0x28)
		FScalableFloat MinBaseAcceleration; // 0xA00(0x28)
		FScalableFloat BaseGoalSpeed; // 0xA28(0x28)
		FScalableFloat BaseMaxSpeed; // 0xA50(0x28)
		FScalableFloat EnableFriction; // 0xA78(0x28)
		FScalableFloat BaseGoalDecelerationSpeed; // 0xAA0(0x28)
		FScalableFloat FrictionWhenNotLeaning; // 0xAC8(0x28)
		FScalableFloat SpeedMultiplierOnHitRailCap; // 0xAF0(0x28)
		FScalableFloat MinSpeedAfterBouncedOffRailCap; // 0xB18(0x28)
		FScalableFloat SpeedMultiplierWhenImpactedPlayer; // 0xB40(0x28)
		FScalableFloat SpeedMinBouncePlayer; // 0xB68(0x28)
		unsigned char UnknownData04_7[0x1A8]; // 0xB90(0x1A8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GrindRailRuntime.FortMovementMode_ExtLogicGrinding");
			return ret;
		}

		void RemoveGrindRailInitiatedEffects(AFortGrindRail* GrindRail); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnIgnoredBuildingEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7512B00D0(relative to base address)
		bool IsThrowableItem(ABuildingActor* BuildingActor); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool IsDamageableDevice(ABuildingActor* BuildingActor); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleGrindingEnded(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleGrindingBegun(AFortGrindRail* GrindRail); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleGameplayEffectsOnVehicleHit(AFortAthenaVehicle* AthenaVehicle); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleGameplayCuesOnSprinting(AFortGrindRail* GrindRail, bool bWantsToGrindSprint); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleGameplayCuesOnRailJump(bool bIsAnchorJumpActive); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleGameplayCuesOnHit(AFortGrindRail* GrindRail); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleGameplayCuesOnFeetLanding(AFortGrindRail* GrindRail); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleGameplayCuesOnBoosterModeChange(AFortGrindRail* GrindRail, EGrindRailBoosterMode OldBoosterMode, EGrindRailBoosterMode NewBoosterMode); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleFallDamageImmunityOnGrindingEnd(bool bShouldApplyFallDamageImmunityOnEnd); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UClass GetGrindInAirGameplayEffectClass(AFortGrindRail* GrindRail); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GameplayTagCallback_StartDashMME(FGameplayTag Tag, int32_t NewCount); // Flags: Final|Native|Private|Const, Memory Exec: 0x7FF7512AFCF8(relative to base address)
		void GameplayTagCallback_CancelGrinding(FGameplayTag Tag, int32_t NewCount); // Flags: Final|Native|Private|Const, Memory Exec: 0x7FF7512AF9F4(relative to base address)
		void GameplayTagCallback_BlockSprintingAndHolstering(FGameplayTag Tag, int32_t NewCount); // Flags: Final|Native|Private, Memory Exec: 0x7FF7512AF7F8(relative to base address)
		void GameplayTagCallback_BlockSprinting(FGameplayTag Tag, int32_t NewCount); // Flags: Final|Native|Private, Memory Exec: 0x7FF7512AF61C(relative to base address)
		void EventCallback_OnTeleport(AFortPawn* TeleportedPawn); // Flags: Final|Native|Private, Memory Exec: 0x7FF7512AF59C(relative to base address)
		void EventCallback_OnSprintInputPressed(bool bPressed); // Flags: Final|Native|Private, Memory Exec: 0x7FF7512AF51C(relative to base address)
		void EventCallback_OnReloadInput(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7512AF508(relative to base address)
		void EventCallback_OnPawnLanded(FHitResult& Hit); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF7512AF430(relative to base address)
		void EventCallback_OnJumpInput(bool bPressed); // Flags: Final|Native|Private, Memory Exec: 0x7FF7512AF3B0(relative to base address)
		void EventCallback_OnGrindLostStructuralSupport(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7512AF39C(relative to base address)
		void EventCallback_OnFeetLanded(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7512AF388(relative to base address)
		void EventCallback_OnEnergyCompletelyDrained(UFortComponent_Energy* EnergyComponentDrained); // Flags: Final|Native|Private, Memory Exec: 0x7FF7512AF308(relative to base address)
		void EventCallback_OnDismountPlayerRequested(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7512AF2E0(relative to base address)
		void EventCallback_OnBaseMeshReady(AFortPlayerPawn* Pawn, USkeletalMeshComponent* MeshComponent); // Flags: Final|Native|Private, Memory Exec: 0x7FF7512AF038(relative to base address)
		void EventCallback_OnApplyDamageToDevice(ABuildingActor* BuildingActor); // Flags: Final|Native|Private, Memory Exec: 0x7FF7512AEFB8(relative to base address)
		void DrawDebugHUD(AHUD* HUD, UCanvas* Canvas); // Flags: Final|Native|Protected|Const, Memory Exec: 0x7FF74C8E74BC(relative to base address)
		void ApplyDamageToDevice(ABuildingActor* BuildingActor); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void AddTemporaryMoveIgnoreActor(ABuildingActor* BuildingActor, float IgnoreDuration); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF7512AEDA4(relative to base address)
	};


	// Class GrindRailRuntime.FortPawnComponent_GrindingProvider
	// Inherited from UFortPawnComponent -> UPawnComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x248 (0x2F0 - 0xA8)
	class UFortPawnComponent_GrindingProvider : public UFortPawnComponent	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0xA8(0x8) UNKNOWN PROPERTY
		FMulticastInlineDelegate GrindRailChangedDelegate; // 0xB0(0x10)
		FMulticastInlineDelegate FeetLandedDelegate; // 0xC0(0x10)
		FMulticastInlineDelegate BegunGrindingDelegate; // 0xD0(0x10)
		FMulticastInlineDelegate HitObstacleWhenGrindingDelegate; // 0xE0(0x10)
		FMulticastInlineDelegate BoosterModeChangedDelegate; // 0xF0(0x10)
		FMulticastInlineDelegate SprintingStateChangedDelegate; // 0x100(0x10)
		FMulticastInlineDelegate EndedGrindingDelegate; // 0x110(0x10)
		FMulticastInlineDelegate ADSPressedDelegate; // 0x120(0x10)
		FMulticastInlineDelegate ADSReleasedDelegate; // 0x130(0x10)
		FMulticastInlineDelegate ApplyDamageToDeviceDelegate; // 0x140(0x10)
		FMulticastInlineDelegate DismountPlayerDelegate; // 0x150(0x10)
		FScalableFloat DisablePlayerFromGrinding; // 0x160(0x28)
		FScalableFloat ForceGrindingFromWalking; // 0x188(0x28)
		FScalableFloat GrindFromLandSpeedBoost; // 0x1B0(0x28)
		FScalableFloat MinStartSpeed; // 0x1D8(0x28)
		FScalableFloat MaxStartSpeed; // 0x200(0x28)
		FGameplayTag CancelGrindingTag; // 0x228(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x22C(0x4) UNKNOWN PROPERTY
		FScalableFloat EnableSprinting; // 0x230(0x28)
		FScalableFloat GrindInteractionReentryCooldownTime; // 0x258(0x28)
		UClass* GrindingAnimLayer; // 0x280(0x8)
		UClass* GrindingExtLogicClass; // 0x288(0x8)
		TWeakObjectPtr<AFortPlayerPawn*> OwnerPawn; // 0x290(0x8)
		TWeakObjectPtr<UFortMovementComp_Character*> MovementComponent; // 0x298(0x8)
		unsigned char UnknownData02_7[0x50]; // 0x2A0(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GrindRailRuntime.FortPawnComponent_GrindingProvider");
			return ret;
		}

		bool RequestGrindingOnRail(AFortGrindRail* GrindRail, float OptionalStartDistance, bool bFromInteraction); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7512B042C(relative to base address)
		void OnWalkingBaseChanged(AFortPawn* Pawn, AActor* NewBase); // Flags: Final|Native|Private, Memory Exec: 0x7FF7512B0368(relative to base address)
		void OnPawnLandedCallback(FHitResult& Hit); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF7512B0290(relative to base address)
		void OnMovementModeChanged(ACharacter* InCharacter, TEnumAsByte<EMovementMode> PrevMovementMode, char PreviousCustomMode); // Flags: Final|Native|Private, Memory Exec: 0x7FF7512B0194(relative to base address)
		bool IsSprinting(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7512B00AC(relative to base address)
		bool IsGrindingDisabledForPlayers(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7512B008C(relative to base address)
		bool IsGrinding(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF749178FE8(relative to base address)
		bool GetStartedGrindingFromLand(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7512B0044(relative to base address)
		AFortGrindRail GetCurrentGrindingRailActor(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7512B0020(relative to base address)
		EGrindRailBoosterMode GetCurrentBoosterMode(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7512AFFFC(relative to base address)
		void EventCallback_OnEndedGrinding(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7512AF2F4(relative to base address)
		void EventCallback_OnBegunGrinding(bool bWasAlreadyGrinding, bool bWasJumpingFromRail, bool bEnteredFromInteraction, FVector PreviousPlayerLocation); // Flags: Final|Native|Private|HasDefaults, Memory Exec: 0x7FF7512AF0FC(relative to base address)
		void Broadcast_FeetLandedEvent(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF7512AEF88(relative to base address)
		void Broadcast_DismountPlayerEvent(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF7512AEF58(relative to base address)
		void Broadcast_ApplyDamageToBuildingActorEvent(ABuildingActor* BuildingActor); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF7512AEEC8(relative to base address)
		void Broadcast_ADSReleasedEvent(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF7512AEE98(relative to base address)
		void Broadcast_ADSPressedEvent(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF7512AEE68(relative to base address)
		void BP_OnFeetLanded(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnDismount(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnApplyDamageToDevice(ABuildingActor* BuildingActor); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnADSReleased(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnADSPressed(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_HandleGameplayEffectsOnPlayerJumpOff(FVector PlayerPosition); // Flags: Event|Public|HasDefaults|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool BP_CanBeginGrinding(); // Flags: Event|Public|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class GrindRailRuntime.GrindRailEditorComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UGrindRailEditorComponent : public UActorComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GrindRailRuntime.GrindRailEditorComponent");
			return ret;
		}
	};


	// Class GrindRailRuntime.StructurallySupportedSplineComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x78 (0x118 - 0xA0)
	class UStructurallySupportedSplineComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData00_1[0x78]; // 0xA0(0x78) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GrindRailRuntime.StructurallySupportedSplineComponent");
			return ret;
		}

		void OnStructuralSupportDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum); // Flags: Final|Native|Protected|HasDefaults, Memory Exec: 0x7FF7512D10F4(relative to base address)
		void OnDestroyFromStructuralSupport(AActor* SupportActor); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Multicast_OnStructuralSupportDied(); // Flags: Net|NetReliableNative|Event|NetMulticast|Protected, Memory Exec: 0x7FF74C8DF6C0(relative to base address)
	};


	// Class GrindRailRuntime.FortAthenaAIBotEvaluator_GrindRail
	// Inherited from UFortAthenaAIBotEvaluator -> UFortAthenaAIEvaluator -> UObject
	// Size: 0x68 (0x110 - 0xA8)
	class UFortAthenaAIBotEvaluator_GrindRail : public UFortAthenaAIBotEvaluator	
	{
	public:
		FGameplayTag GrindRailTag; // 0xA8(0x4)
		unsigned char UnknownData00_6[0x4]; // 0xAC(0x4) UNKNOWN PROPERTY
		FScalableFloat GrindDuration; // 0xB0(0x28)
		FScalableFloat GrindDurationRandomDeviation; // 0xD8(0x28)
		unsigned char UnknownData01_7[0x10]; // 0x100(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GrindRailRuntime.FortAthenaAIBotEvaluator_GrindRail");
			return ret;
		}
	};


	// Class GrindRailRuntime.FortGameplayCueNotifyLoop_Grinding
	// Inherited from AFortGameplayCueNotify_Loop -> AFortGameplayCueNotify_Actor -> AGameplayCueNotify_Actor -> AActor -> UObject
	// Size: 0x190 (0xB40 - 0x9B0)
	class AFortGameplayCueNotifyLoop_Grinding : public AFortGameplayCueNotify_Loop	
	{
	public:
		bool bFeetHasLanded; // 0x9B0(0x1)
		bool bEnableNativeAudioUpdate; // 0x9B1(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x9B2(0x2) UNKNOWN PROPERTY
		float ForwardChangedValueThreshold; // 0x9B4(0x4)
		FFortAudioFloatParameter Speed; // 0x9B8(0x38)
		FFortAudioFloatParameter Forward; // 0x9F0(0x38)
		FFortAudioFloatParameter Boost; // 0xA28(0x38)
		FFortAudioFloatParameter Curve; // 0xA60(0x38)
		FFortAudioFloatParameter IsGrinding; // 0xA98(0x38)
		FFortAudioFloatParameter IsSlowDown; // 0xAD0(0x38)
		FName LeanForwardSpeedName; // 0xB08(0x4)
		FName TurnOnSpeedFXName; // 0xB0C(0x4)
		float TurnOnSpeedFXThreshold; // 0xB10(0x4)
		TWeakObjectPtr<UFXSystemComponent*> EffectsComponent; // 0xB14(0x8)
		unsigned char UnknownData01_6[0x4]; // 0xB1C(0x4) UNKNOWN PROPERTY
		UAudioComponent* AudioComponent; // 0xB20(0x8)
		AFortPlayerPawn* PlayerPawn; // 0xB28(0x8)
		UFortPawnComponent_GrindingProvider* GrindingProvider; // 0xB30(0x8)
		unsigned char UnknownData02_7[0x8]; // 0xB38(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GrindRailRuntime.FortGameplayCueNotifyLoop_Grinding");
			return ret;
		}

		void OnForwardChanged(bool bNewState); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CacheReferences(UAudioComponent* InAudioComponent, UFXSystemComponent* InEffectsComponent, AFortPlayerPawn* InPlayerPawn, UFortPawnComponent_GrindingProvider* InGrindingProvider); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7512D0ED8(relative to base address)
	};

}
