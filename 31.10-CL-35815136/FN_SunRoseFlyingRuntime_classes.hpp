#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: SunRoseFlyingRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class SunRoseFlyingRuntime.AFortGameplayCueNotifyLoop_SunroseFlying
	// Inherited from AFortGameplayCueNotify_Loop -> AFortGameplayCueNotify_Actor -> AGameplayCueNotify_Actor -> AActor -> UObject
	// Size: 0x40 (0x9F0 - 0x9B0)
	class AAFortGameplayCueNotifyLoop_SunroseFlying : public AFortGameplayCueNotify_Loop	
	{
	public:
		FName IsAscendingParamName; // 0x9B0(0x4)
		FName IsFlappingParamName; // 0x9B4(0x4)
		FName FlappingAlphaParamName; // 0x9B8(0x4)
		FName IsRollingParamName; // 0x9BC(0x4)
		FName IsBoostingParamName; // 0x9C0(0x4)
		FName IsDivingParamName; // 0x9C4(0x4)
		FName PitchParamName; // 0x9C8(0x4)
		FName RollParamName; // 0x9CC(0x4)
		FName SpeedParamName; // 0x9D0(0x4)
		FName IsSkimmingParamName; // 0x9D4(0x4)
		FName AltitudeInterpParamName; // 0x9D8(0x4)
		FFloatRange HeightRange; // 0x9DC(0x10)
		unsigned char UnknownData00_7[0x4]; // 0x9EC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SunRoseFlyingRuntime.AFortGameplayCueNotifyLoop_SunroseFlying");
			return ret;
		}

		void SetFlappingParameters(UFXSystemComponent* FlyingTrailFX, TArray<UAudioComponent*>& AudioComponents, AFortPlayerPawn* PlayerPawn, float FlappingAlpha, float RollCombined, float RollingAlpha, float PitchAlpha, bool bIsBoosting, bool bIsAscending, bool bAllowWingFlap, bool bIsSkimming, float Speed, bool bIsDiving, float CurrentHeight); // Flags: Final|Native|Private|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751371BE8(relative to base address)
	};


	// Class SunRoseFlyingRuntime.FortGameplayCueNotifyLoop_WingsSkimming
	// Inherited from AFortGameplayCueNotify_Loop -> AFortGameplayCueNotify_Actor -> AGameplayCueNotify_Actor -> AActor -> UObject
	// Size: 0x28 (0x9D8 - 0x9B0)
	class AFortGameplayCueNotifyLoop_WingsSkimming : public AFortGameplayCueNotify_Loop	
	{
	public:
		TWeakObjectPtr<USkeletalMeshComponent*> WingsSkeletalMesh; // 0x9B0(0x8)
		TWeakObjectPtr<UFXSystemComponent*> SkimFX; // 0x9B8(0x8)
		TWeakObjectPtr<UAudioComponent*> SkimAudioComponent; // 0x9C0(0x8)
		TWeakObjectPtr<USoundBase*> SkimLoopSound; // 0x9C8(0x8)
		unsigned char UnknownData00_7[0x8]; // 0x9D0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SunRoseFlyingRuntime.FortGameplayCueNotifyLoop_WingsSkimming");
			return ret;
		}

		void ShowWingFX(FVector SkimLocationLeft, FVector SkimNormalLeft, float SkimDistanceLeft, FVector SkimLocationRight, FVector SkimNormalRight, float SkimDistanceRight); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7513725F8(relative to base address)
	};


	// Class SunRoseFlyingRuntime.FortCameraModifier_SunroseWingsFlying
	// Inherited from UFortCameraModifier_Custom -> UCameraModifier -> UObject
	// Size: 0x2E0 (0x370 - 0x90)
	class UFortCameraModifier_SunroseWingsFlying : public UFortCameraModifier_Custom	
	{
	public:
		UClass* NativeFlyingPawnClass; // 0x90(0x8)
		unsigned char UnknownData00_6[0x10]; // 0x98(0x10) UNKNOWN PROPERTY
		FScalableFloat NativeFlyingSpeedBase; // 0xA8(0x28)
		unsigned char UnknownData01_6[0x8]; // 0xD0(0x8) UNKNOWN PROPERTY
		FScalableFloat NativeFlyingSpeedAddedAtMaxDistanceFromCeilingHeight; // 0xD8(0x28)
		unsigned char UnknownData02_6[0x8]; // 0x100(0x8) UNKNOWN PROPERTY
		FScalableFloat NativeFlyingDownZSpeedAddedWhileFalling; // 0x108(0x28)
		unsigned char UnknownData03_6[0x8]; // 0x130(0x8) UNKNOWN PROPERTY
		FScalableFloat NativeFlyingHeightDecayMin; // 0x138(0x28)
		unsigned char UnknownData04_6[0x8]; // 0x160(0x8) UNKNOWN PROPERTY
		FScalableFloat NativePreCrashWindupDuration; // 0x168(0x28)
		unsigned char UnknownData05_6[0x8]; // 0x190(0x8) UNKNOWN PROPERTY
		FScalableFloat NativeFlyingInputWeightHorizontal; // 0x198(0x28)
		unsigned char UnknownData06_6[0x8]; // 0x1C0(0x8) UNKNOWN PROPERTY
		FScalableFloat NativeFlyingInputWeightLookDirection; // 0x1C8(0x28)
		unsigned char UnknownData07_6[0x4]; // 0x1F0(0x4) UNKNOWN PROPERTY
		float NativeDeltaFOVForwardOffsetExponent; // 0x1F4(0x4)
		float NativeFOVModeSwapInterpRate; // 0x1F8(0x4)
		float NativeMaxFOVOffset; // 0x1FC(0x4)
		float NativeRotationRateForMaxRightOffset; // 0x200(0x4)
		float NativeRightOffsetMaxCombinedStrafeTurn; // 0x204(0x4)
		float NativeRightOffsetStrafe; // 0x208(0x4)
		float NativeRightOffsetTurn; // 0x20C(0x4)
		float NativeRightOffsetDodge; // 0x210(0x4)
		float NativeForwardOffsetDistanceCrashingFinal; // 0x214(0x4)
		float NativeForwardOffsetDistanceForceCrashingPhase1; // 0x218(0x4)
		float NativeForwardOffsetDistanceCrashingPhase1; // 0x21C(0x4)
		float NativeForwardOffsetDistanceCrashingPhase2; // 0x220(0x4)
		float NativeForwardOffsetCrashingTimeAfterWindupToEnterFinalPhase; // 0x224(0x4)
		float NativeForwardOffsetInterpSpeedCrashingPhase1; // 0x228(0x4)
		float NativeForwardOffsetInterpSpeedCrashingPhase2; // 0x22C(0x4)
		float NativeForwardOffsetInterpSpeedCrashingFinal; // 0x230(0x4)
		FGameplayTag NativeTagForceCrash; // 0x234(0x4)
		float NativeFOVInterpSpeed; // 0x238(0x4)
		float NativeMinFOVOffsetFast; // 0x23C(0x4)
		float NativeMinFOVOffsetSlow; // 0x240(0x4)
		float NativeMaxFOVOffsetSlow; // 0x244(0x4)
		float NativeLateBoostStartTime; // 0x248(0x4)
		float NativeTimeSinceLastBoostLateMin; // 0x24C(0x4)
		float NativeTimeSinceLastBoostLateMax; // 0x250(0x4)
		float NativeFOVOffsetLateMin; // 0x254(0x4)
		float NativeFOVOffsetLateMax; // 0x258(0x4)
		float NativeTimeSinceEarlyBoostLateMin; // 0x25C(0x4)
		float NativeTimeSinceLastBoostEarlyMax; // 0x260(0x4)
		float NativeFOVOffsetEarlyMin; // 0x264(0x4)
		float NativeFOVOffsetEarlyMax; // 0x268(0x4)
		float NativeFOVOffsetModeMin; // 0x26C(0x4)
		float NativeCrashingFOVInterpSpeed; // 0x270(0x4)
		float NativeFOVOffsetWindup; // 0x274(0x4)
		float NativePositiveFlyingMoveActionXFOVInterpSpeed; // 0x278(0x4)
		float NativeNegativeFlyingMoveActionXFOVInterpSpeed; // 0x27C(0x4)
		float NativeFlyingMoveActionPositiveMin; // 0x280(0x4)
		float NativeFlyingMoveActionPositiveMax; // 0x284(0x4)
		float NativeFlyingMoveActionPositiveFOVMin; // 0x288(0x4)
		float NativeFlyingMoveActionPositiveFOVMax; // 0x28C(0x4)
		float NativeFlyingMoveActionNegativeMin; // 0x290(0x4)
		float NativeFlyingMoveActionNegativeMax; // 0x294(0x4)
		float NativeFlyingMoveActionNegativeFOVMin; // 0x298(0x4)
		float NativeFlyingMoveActionNegativeFOVMax; // 0x29C(0x4)
		float NativeDefaultFOVInterpSpeed; // 0x2A0(0x4)
		float NativePositiveFOVMax; // 0x2A4(0x4)
		float NativeLocationOffsetForPositiveFOVMax; // 0x2A8(0x4)
		float NativeNegativeFOVMax; // 0x2AC(0x4)
		float NativeLocationOffsetForNegativeFOVMax; // 0x2B0(0x4)
		float NativeClampedDeltaFOVInterpSpeed; // 0x2B4(0x4)
		float NativeShortTimeSinceLastBoostStart; // 0x2B8(0x4)
		float NativeLongTimeSinceLastBoostStart; // 0x2BC(0x4)
		float NativeLongOrShortBoostTimeInterpSpeed; // 0x2C0(0x4)
		float NativeMediumBoostTimeInterpSpeed; // 0x2C4(0x4)
		float NativeForwardLocationOffsetTargetMax; // 0x2C8(0x4)
		float NativeForwardLocationOffsetFromDownZVelocityInterpSpeed; // 0x2CC(0x4)
		float NativeDodgeStartDuration; // 0x2D0(0x4)
		float NativeStrafeFOVOffsetMin; // 0x2D4(0x4)
		float NativeStrafeFOVOffsetMax; // 0x2D8(0x4)
		float NativeStrafeFOVMultiplierMin; // 0x2DC(0x4)
		float NativeStrafeFOVMultiplierMax; // 0x2E0(0x4)
		float NativeViewLocationOffsetRightInterpSpeedCrashing; // 0x2E4(0x4)
		float NativeDodgeStartDurationForInterpSpeed; // 0x2E8(0x4)
		float NativeViewLocationOffsetRightInterpSpeedStartingDodge; // 0x2EC(0x4)
		float NativeViewLocationOffsetRightInterpSpeedMostlyStrafing; // 0x2F0(0x4)
		float NativeViewLocationOffsetRightInterpSpeedMostlyTurning; // 0x2F4(0x4)
		bool bUseNativeCalculation; // 0x2F8(0x1)
		unsigned char UnknownData08_7[0x77]; // 0x2F9(0x77) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SunRoseFlyingRuntime.FortCameraModifier_SunroseWingsFlying");
			return ret;
		}

		bool UseNativeCalculation(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751372DAC(relative to base address)
	};


	// Class SunRoseFlyingRuntime.FortContextualTutorialDefinition_WingedFlying
	// Inherited from UUFortContextualTutorialDefinition_GameplayEvent -> UFortContextualTutorialDefinition -> UDataAsset -> UObject
	// Size: 0x28 (0x1C8 - 0x1A0)
	class UFortContextualTutorialDefinition_WingedFlying : public UUFortContextualTutorialDefinition_GameplayEvent	
	{
	public:
		FScalableFloat MinTimeBeforeCompletion; // 0x1A0(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SunRoseFlyingRuntime.FortContextualTutorialDefinition_WingedFlying");
			return ret;
		}
	};


	// Class SunRoseFlyingRuntime.FortContextualTutorial_WingedFlying
	// Inherited from UFortContextualTutorial_GameplayEvent -> UFortContextualTutorial -> UObject
	// Size: 0x10 (0x178 - 0x168)
	class UFortContextualTutorial_WingedFlying : public UFortContextualTutorial_GameplayEvent	
	{
	public:
		unsigned char UnknownData00_1[0x10]; // 0x168(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SunRoseFlyingRuntime.FortContextualTutorial_WingedFlying");
			return ret;
		}
	};


	// Class SunRoseFlyingRuntime.FortMovementMode_WingedFlyingRuntimeData
	// Inherited from UFortMovementMode_FlyingRuntimeData -> UFortMovementMode_BaseExtRuntimeData -> UObject
	// Size: 0x58 (0xD0 - 0x78)
	class UFortMovementMode_WingedFlyingRuntimeData : public UFortMovementMode_FlyingRuntimeData	
	{
	public:
		unsigned char UnknownData00_3[0x2]; // 0x78(0x2) UNKNOWN PROPERTY
		EWingedFlyingStatus FlyingStatus; // 0x7A(0x1)
		unsigned char UnknownData01_6[0x1]; // 0x7B(0x1) UNKNOWN PROPERTY
		float CurrentHeightAboveWorld; // 0x7C(0x4)
		float InterpolatedHeightAboveWorld; // 0x80(0x4)
		float SpeedMultiplierFromForwardInput; // 0x84(0x4)
		float InterpolatedYInput; // 0x88(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x8C(0x4) UNKNOWN PROPERTY
		FVector2D InterpolatedCrashInput; // 0x90(0x10)
		unsigned char UnknownData03_6[0x1]; // 0xA0(0x1) UNKNOWN PROPERTY
		bool bIsStartingFlying; // 0xA1(0x1)
		unsigned char UnknownData04_6[0x2]; // 0xA2(0x2) UNKNOWN PROPERTY
		float FlyingEnergy; // 0xA4(0x4)
		unsigned char UnknownData05_7[0x28]; // 0xA8(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SunRoseFlyingRuntime.FortMovementMode_WingedFlyingRuntimeData");
			return ret;
		}
	};


	// Class SunRoseFlyingRuntime.FortMovementMode_ExtLogicFlyingWinged
	// Inherited from UFortMovementMode_ExtLogicFlying -> UFortMovementMode_BaseExtLogic -> UObject
	// Size: 0x1170 (0x1298 - 0x128)
	class UFortMovementMode_ExtLogicFlyingWinged : public UFortMovementMode_ExtLogicFlying	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0x128(0x10) UNKNOWN PROPERTY
		FGameplayTagQuery TagQueryToFly; // 0x138(0x48)
		bool bUseNativeUpdateForMovement; // 0x180(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x181(0x7) UNKNOWN PROPERTY
		TArray<FFlyingStatusConfig> FlyingStatusConfigs; // 0x188(0x10)
		UClass* FlyingThroughCeilingGE; // 0x198(0x8)
		FGameplayTag FlyingThroughCeilingTag; // 0x1A0(0x4)
		FGameplayTag EnergyDrainCueTag; // 0x1A4(0x4)
		FGameplayTag CrashEnabledCueTag; // 0x1A8(0x4)
		FGameplayTag HitBonkCueTag; // 0x1AC(0x4)
		FGameplayTag EventTagToTriggerWhenMiniBoosting; // 0x1B0(0x4)
		FGameplayTag EventTagToTriggerCrashImpact; // 0x1B4(0x4)
		FGameplayTagContainer TagsToPreventLowFrictionLanding; // 0x1B8(0x20)
		UClass* LowFrictionLandingGE; // 0x1D8(0x8)
		FGameplayTag TagToSetByCallerDuration; // 0x1E0(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x1E4(0x4) UNKNOWN PROPERTY
		FScalableFloat BaseFlyingCost; // 0x1E8(0x28)
		int32_t FlyingStatusToStopBaseCost; // 0x210(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x214(0x4) UNKNOWN PROPERTY
		FScalableFloat ExtraLeapCrashCost; // 0x218(0x28)
		FScalableFloat HeightIncreasePer1Cost; // 0x240(0x28)
		FScalableFloat DodgeSpeedMin; // 0x268(0x28)
		FScalableFloat DodgeSpeedMax; // 0x290(0x28)
		FScalableFloat DodgeSpeedDecayInitialDelay; // 0x2B8(0x28)
		FScalableFloat DodgeSpeedRampExponent; // 0x2E0(0x28)
		FScalableFloat DodgeSpeedDecayExponent; // 0x308(0x28)
		FScalableFloat DodgeDuration; // 0x330(0x28)
		FScalableFloat StartedFlyingTransitionDuration; // 0x358(0x28)
		FScalableFloat StartedFlyingSpeedBoundForInterpMin; // 0x380(0x28)
		FScalableFloat StartedFlyingSpeedBoundForInterpMax; // 0x3A8(0x28)
		FScalableFloat StartedFlyingVelocityInterpSpeedAtMinSpeed; // 0x3D0(0x28)
		FScalableFloat StartedFlyingVelocityInterpSpeedAtMaxSpeed; // 0x3F8(0x28)
		FScalableFloat FlyingLookPitchClampMin; // 0x420(0x28)
		FScalableFloat FlyingLookPitchClampMax; // 0x448(0x28)
		FScalableFloat DefaultLookPitchAngleOffset; // 0x470(0x28)
		FScalableFloat CrashingLookPitchClampMin; // 0x498(0x28)
		FScalableFloat CrashingLookPitchClampMax; // 0x4C0(0x28)
		FScalableFloat CrashingInputWeightLookDirection; // 0x4E8(0x28)
		FScalableFloat FlyingInputWeightLockDirection; // 0x510(0x28)
		FScalableFloat FlyingInputWeightHorizontal; // 0x538(0x28)
		FScalableFloat PitchInterpSpeedWhileCrashing; // 0x560(0x28)
		FScalableFloat PitchInterpSpeedAtBaseSpeed; // 0x588(0x28)
		FScalableFloat PitchInterpSpeedAtMaxLateralSpeed; // 0x5B0(0x28)
		FScalableFloat PitchInterpSpeedAtMaxTotalSpeed; // 0x5D8(0x28)
		FScalableFloat YawInterpSpeedWhileCrashing; // 0x600(0x28)
		FScalableFloat YawInterpSpeedAtMinBrakeSpeed; // 0x628(0x28)
		FScalableFloat YawInterpSpeedAtBaseSpeed; // 0x650(0x28)
		FScalableFloat YawInterpSpeedAtMaxLateralSpeed; // 0x678(0x28)
		FScalableFloat InputInterpSpeedHorizontal; // 0x6A0(0x28)
		FScalableFloat CrashingMovementInterpSpeed; // 0x6C8(0x28)
		FScalableFloat AscendingLookPitchClampMin; // 0x6F0(0x28)
		FScalableFloat CeilingHeightIncreaseSpeedWhileAscendingMin; // 0x718(0x28)
		FScalableFloat CeilingHeightIncreaseSpeedWhileAscendingMax; // 0x740(0x28)
		FScalableFloat MaxCeilingHeightAddLimitFromAscend; // 0x768(0x28)
		FScalableFloat AscendingSpeedZUpAddedMin; // 0x790(0x28)
		FScalableFloat AscendingSpeedZUpAddedMax; // 0x7B8(0x28)
		FScalableFloat MaxCeilingHeightAddLimitFromBoost; // 0x7E0(0x28)
		FScalableFloat CeilingHeightIncreaseSpeedWhileBoostingMin; // 0x808(0x28)
		FScalableFloat CeilingHeightIncreaseSpeedWhileBoostingMax; // 0x830(0x28)
		FScalableFloat PercentMaxLookPitchForMaxBoostCeilingHeightIncrease; // 0x858(0x28)
		FScalableFloat PreCrashWindUpDuration; // 0x880(0x28)
		FScalableFloat CrashingSpeedBase; // 0x8A8(0x28)
		FScalableFloat CrashingSpeedAddedAtMaxDistanceFromCeilingHeight; // 0x8D0(0x28)
		FScalableFloat DistanceFromCeilingHeightForMaxCrashingSpeedAdded; // 0x8F8(0x28)
		FScalableFloat CrashingLookPitchClampFinalMax; // 0x920(0x28)
		FScalableFloat CrashingLookPitchClampDelayBeforeLerpToFinalMax; // 0x948(0x28)
		FScalableFloat CrashingLookPitchClampDurationToLerpToFinalMax; // 0x970(0x28)
		FScalableFloat PreCrashingSpeedBase; // 0x998(0x28)
		FScalableFloat PreCrashingInterpToSpeedMod; // 0x9C0(0x28)
		FScalableFloat DistanceFromCeilingHeightForCrashMode; // 0x9E8(0x28)
		FScalableFloat MinAngleToPreventCrash; // 0xA10(0x28)
		FScalableFloat CrashImpactIgnoreWaterDuration; // 0xA38(0x28)
		FScalableFloat MaxAngleForLowFrictionLanding; // 0xA60(0x28)
		FScalableFloat LowFrictionDurationMin; // 0xA88(0x28)
		FScalableFloat LowFrictionDurationMax; // 0xAB0(0x28)
		FScalableFloat LowFrictionDurationScalar; // 0xAD8(0x28)
		FScalableFloat SpeedForMinLowFrictionMult; // 0xB00(0x28)
		FScalableFloat SpeedForMaxLowFrictionMult; // 0xB28(0x28)
		FScalableFloat LowFrictionMultFromSpeedMin; // 0xB50(0x28)
		FScalableFloat LowFrictionMultFromSpeedMax; // 0xB78(0x28)
		FScalableFloat ImpactAngleForMaxLowFrictionDuration; // 0xBA0(0x28)
		FScalableFloat ImpactAngleForMinLowFrictionDuration; // 0xBC8(0x28)
		FScalableFloat LowFrictionMultFromImpactAngleMax; // 0xBF0(0x28)
		FScalableFloat LowFrictionMultFromImpactAngleMin; // 0xC18(0x28)
		FScalableFloat FlyingSpeedBase; // 0xC40(0x28)
		FScalableFloat FlyingSpeedAddedAtMaxDistanceFromCeilingHeight; // 0xC68(0x28)
		FScalableFloat FlyingDownZSpeedAddedWhileFalling; // 0xC90(0x28)
		FScalableFloat DistanceFromCeilingHeightForMaxFlyingSpeedAdded; // 0xCB8(0x28)
		FScalableFloat AirBrakingDefaultMultiMin; // 0xCE0(0x28)
		FScalableFloat AirBrakingDownSpeedMultiMin; // 0xD08(0x28)
		FScalableFloat ForwardInputThresholdToTriggerMiniBoost; // 0xD30(0x28)
		FScalableFloat PercentMaxCeilingHeightToAddFromDefaultForwardFlyingInput; // 0xD58(0x28)
		FScalableFloat CeilingHeightIncreaseSpeedWhileHoldingForwardMin; // 0xD80(0x28)
		FScalableFloat CeilingHeightIncreaseSpeedWhileHoldingForwardMax; // 0xDA8(0x28)
		FScalableFloat CeilingHeightDecreaseSpeedWhileFlyingAsPctDistanceFromMaxHeight; // 0xDD0(0x28)
		FScalableFloat CeilingHeightMinDecreaseSpeedWhileFlying; // 0xDF8(0x28)
		FScalableFloat CeilingHeightMinDecreaseSpeedWhileBoosting; // 0xE20(0x28)
		FScalableFloat CeilingHeightDecreaseSpeedWhileBoostingAsPctDistanceFromMaxHeight; // 0xE48(0x28)
		FScalableFloat CeilingHeightMinDecreaseSpeedWhileAscending; // 0xE70(0x28)
		FScalableFloat CeilingHeightDecreaseSpeedWhileAscendingAsPctDistanceFromMaxHeight; // 0xE98(0x28)
		FScalableFloat HeightAboveWorldInterpSpeedIncreasing; // 0xEC0(0x28)
		FScalableFloat HeightAboveWorldInterpSpeedDecreasing; // 0xEE8(0x28)
		FScalableFloat HeightForMinAddedCeilingDecay; // 0xF10(0x28)
		FScalableFloat HeightForMaxAddedCeilingDecay; // 0xF38(0x28)
		FScalableFloat MaxAddedCeilingDecayFromHeight; // 0xF60(0x28)
		FScalableFloat EnergyThresholdForAddedCeilingDecay; // 0xF88(0x28)
		FScalableFloat MaxAddedCeilingDecayFromEnergy; // 0xFB0(0x28)
		FScalableFloat GlobalCeilingHeightMax; // 0xFD8(0x28)
		FScalableFloat GlobalCeilingHeightDiminishingReturnsExponent; // 0x1000(0x28)
		FScalableFloat GlobalCeilingHeightDiminishingReturnsRange; // 0x1028(0x28)
		FScalableFloat SkimmingMinRequiredAngleToSurface; // 0x1050(0x28)
		FScalableFloat SkimmingMinRequiredVelocityAlongSurface; // 0x1078(0x28)
		FScalableFloat SkimmingMinRequiredHeightAboveWorld; // 0x10A0(0x28)
		FScalableFloat MaxAngleForGroundHit; // 0x10C8(0x28)
		FScalableFloat VelocityClampOnBonk; // 0x10F0(0x28)
		unsigned char UnknownData04_7[0x180]; // 0x1118(0x180) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SunRoseFlyingRuntime.FortMovementMode_ExtLogicFlyingWinged");
			return ret;
		}

		bool IsClientReplaying(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751371B94(relative to base address)
		void HandleFlyingStatusChanged(UFortMovementMode_WingedFlyingRuntimeData* MoveStatus, EWingedFlyingStatus NewStatus, bool bIsActive, FGameplayTag& FailureTag); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleFlyingStatusActivationFailed(EWingedFlyingStatus FailedStatus, FGameplayTag& FailureTag); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void CanStartFlyingStatus(UFortMovementMode_WingedFlyingRuntimeData* MoveStatus, EWingedFlyingStatus StatusToStart, bool& bOutCanStart, FGameplayTag& OutFailureTag); // Flags: Native|Event|Protected|HasOutParms|BlueprintEvent|Const, Memory Exec: 0x7FF7513717CC(relative to base address)
		bool CanEndFlyingStatus(UFortMovementMode_WingedFlyingRuntimeData* MoveStatus, EWingedFlyingStatus StatusToEnd, float ElapsedDuration); // Flags: Native|Event|Protected|BlueprintEvent|Const, Memory Exec: 0x7FF7513716CC(relative to base address)
		void CanContinueFlyingStatus(UFortMovementMode_WingedFlyingRuntimeData* MoveStatus, EWingedFlyingStatus StatusToContinue, float ElapsedDuration, bool& bOutCanContinue, FGameplayTag& OutFailureTag); // Flags: Native|Event|Protected|HasOutParms|BlueprintEvent|Const, Memory Exec: 0x7FF751371530(relative to base address)
		void BlueprintUpdateForMovement(UFortMovementMode_WingedFlyingRuntimeData* MoveStatus, float DeltaTime, FVector& InVelocity, FVector& InAcceleration, FVector& OutNewVelocity, FVector& OutNewAcceleration); // Flags: Event|Protected|HasOutParms|HasDefaults|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class SunRoseFlyingRuntime.FortPawnComponent_WingedFlying
	// Inherited from UFortPawnComponent -> UPawnComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x160 (0x208 - 0xA8)
	class UFortPawnComponent_WingedFlying : public UFortPawnComponent	
	{
	public:
		EWingedFlyingStatus FlyingStatus; // 0xA8(0x1)
		unsigned char UnknownData00_6[0x3]; // 0xA9(0x3) UNKNOWN PROPERTY
		float ForwardSpeed; // 0xAC(0x4)
		float AddedDownZVelocity; // 0xB0(0x4)
		float NativeCurrentHeightAboveWorld; // 0xB4(0x4)
		float CurrentFlyingEnergy; // 0xB8(0x4)
		bool bIntendsToBoost; // 0xBC(0x1)
		bool bIntendsToAscend; // 0xBD(0x1)
		bool bIntendsToCrash; // 0xBE(0x1)
		bool bIntendsToRollLeft; // 0xBF(0x1)
		bool bIntendsToRollRight; // 0xC0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0xC1(0x7) UNKNOWN PROPERTY
		UClass* FlyingMovementModeExtension; // 0xC8(0x8)
		FGameplayTagContainer TagsToEnableSkimmingCheck; // 0xD0(0x20)
		TEnumAsByte<ECollisionChannel> SkimCheckTraceChannel; // 0xF0(0x1)
		unsigned char UnknownData02_6[0x3]; // 0xF1(0x3) UNKNOWN PROPERTY
		FName SkimCheckLeftStartSocket; // 0xF4(0x4)
		FName SkimCheckLeftEndSocket; // 0xF8(0x4)
		FName SkimCheckRightStartSocket; // 0xFC(0x4)
		FName SkimCheckRightEndSocket; // 0x100(0x4)
		FGameplayTag TagToEnableHeightCheck; // 0x104(0x4)
		FScalableFloat HeightCheckInterval; // 0x108(0x28)
		FScalableFloat HeightCheckTraceLength; // 0x130(0x28)
		unsigned char UnknownData03_7[0xB0]; // 0x158(0xB0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SunRoseFlyingRuntime.FortPawnComponent_WingedFlying");
			return ret;
		}

		void UpdateCurrentFlyingEnergy(float NewFlyingEnergy, bool bForceUpdateFX); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751372CE4(relative to base address)
		void StartFlying(FFortMovementMode_WingedFlyingCreationData& CreationData); // Flags: BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751372C24(relative to base address)
		void StartCustomFlying(UClass* FlyingMMEToStart, FFortMovementMode_WingedFlyingCreationData& CreationData); // Flags: Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751372B08(relative to base address)
		void HandleRightSkimCheckComplete(FHitResult& HitResult); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleOwnerASCInitialized(UFortAbilitySystemComponent* AbilitySystemComponent, AFortPlayerPawn* AffectedPawn); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751371968(relative to base address)
		void HandleLeftSkimCheckComplete(FHitResult& HitResult); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleForwardSpeedUpdated(float NewForwardSpeed); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleFlyingMoveStatusUpdated(UFortMovementMode_WingedFlyingRuntimeData* MoveStatus); // Flags: Native|Event|Public|BlueprintEvent, Memory Exec: 0x7FF74C75FA60(relative to base address)
		void HandleAddedDownZVelocityUpdated(float NewAddedDownZVelocity); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		FVector2D GetLocalFlyingMoveActionValue(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751371938(relative to base address)
		void EndFlying(); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751371924(relative to base address)
	};


	// Class SunRoseFlyingRuntime.FortWeaponWings
	// Inherited from AFortWeapon -> AActor -> UObject
	// Size: 0x130 (0x1728 - 0x15F8)
	class AFortWeaponWings : public AFortWeapon	
	{
	public:
		unsigned char UnknownData00_3[0x30]; // 0x15F8(0x30) UNKNOWN PROPERTY
		UMaterialInstanceDynamic* WingsMaterialInstance; // 0x1628(0x8)
		FGameplayTag IsFlyingGameplayTag; // 0x1630(0x4)
		FName IsFallingAudioParamName; // 0x1634(0x4)
		FName FeatherDissolveName; // 0x1638(0x4)
		FName ReplenishAnimationName; // 0x163C(0x4)
		USoundBase* OutOfEnergy2DSound; // 0x1640(0x8)
		FGameplayTagContainer OwnedGameplayTags; // 0x1648(0x20)
		UFortAbilitySystemComponent* AbilitySystemComponent; // 0x1668(0x8)
		UFortHealthSet* HealthSet; // 0x1670(0x8)
		TEnumAsByte<EPhysicalSurface> PrimarySurfaceType; // 0x1678(0x1)
		TEnumAsByte<EFortBaseWeaponDamage> WeaponResponseType; // 0x1679(0x1)
		unsigned char UnknownData01_6[0x6]; // 0x167A(0x6) UNKNOWN PROPERTY
		UClass* DamageGameplayEffectClass; // 0x1680(0x8)
		FGameplayTag SetByCallerDamageTag; // 0x1688(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x168C(0x4) UNKNOWN PROPERTY
		FGameplayTagContainer TagsToPreventReload; // 0x1690(0x20)
		FScalableFloat ServerMeshRelativeRotationRoll; // 0x16B0(0x28)
		FScalableFloat ServerMeshRelativeLocationY; // 0x16D8(0x28)
		FScalableFloat ServerMeshRelativeLocationZ; // 0x1700(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SunRoseFlyingRuntime.FortWeaponWings");
			return ret;
		}

		void TryResetADSInput(AFortWeapon* Weapon); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751381EF8(relative to base address)
		void NativeUpdateEnergyFX(bool bForceUpdate); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751381988(relative to base address)
		void HandleWeaponAttachmentChanged(AFortWeapon* NewWeapon, AFortWeapon* PrevWeapon); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7513818C4(relative to base address)
		void HandleSecondaryFirePressed(AFortWeapon* Weapon); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleDBNOStateChanged(AFortPawn* FortPawn, bool bInIsDBNO); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7513817FC(relative to base address)
		void BP_ModifyIncomingDamage(float Damage, FGameplayTagContainer& DamageTags, FHitResult& DamageHit, AController* EventInstigator, AActor* DamageCauser, float& OutNewDamage); // Flags: BlueprintAuthorityOnly|Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class SunRoseFlyingRuntime.FortWingedFlyingBlueprintLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortWingedFlyingBlueprintLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SunRoseFlyingRuntime.FortWingedFlyingBlueprintLibrary");
			return ret;
		}

		void TraceForWorldAndWater(AActor* PlayerPawn, FVector& TraceStart, FVector& TraceEnd, bool& bIsBlockingHit, FHitResult& ClosestHit); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF751381C54(relative to base address)
		void SetInputActionDisplayContext(AFortPawn* PlayerPawn, UFortInputMappingContext* InputMappingContext); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF751381A08(relative to base address)
		float GetFlyingStatusElapsedTime(EWingedFlyingStatus FlyingStatus, UFortMovementMode_WingedFlyingRuntimeData* MoveStatus); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7513816EC(relative to base address)
		float GetFlyingDuration(UFortMovementMode_WingedFlyingRuntimeData* MoveStatus); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751381668(relative to base address)
		float GetDodgeElapsedTime(UFortMovementMode_WingedFlyingRuntimeData* MoveStatus); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7513815D4(relative to base address)
		void FlyingStatusRemoveFlags(EWingedFlyingStatus Status, int32_t FlagsToRemove, EWingedFlyingStatus& NewStatus); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7513814D4(relative to base address)
		bool FlyingStatusHasAnyFlags(EWingedFlyingStatus Status, int32_t Flags); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751381414(relative to base address)
		bool FlyingStatusHasAllFlags(EWingedFlyingStatus Status, int32_t Flags); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751381350(relative to base address)
		void FlyingStatusAddFlags(EWingedFlyingStatus Status, int32_t FlagsToAdd, EWingedFlyingStatus& NewStatus); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751381250(relative to base address)
		void ClearInputActionDisplayContext(AFortPawn* PlayerPawn, UFortInputMappingContext* InputMappingContext); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7513810A0(relative to base address)
	};


	// Class SunRoseFlyingRuntime.SunRoseFlying_PlayerAnimInstance
	// Inherited from UFortPlayerAnimInstanceProxy -> UFortBaseLayerAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x80 (0x14A0 - 0x1420)
	class USunRoseFlying_PlayerAnimInstance : public UFortPlayerAnimInstanceProxy	
	{
	public:
		FGameplayTag AscenderTag; // 0x1420(0x4)
		FGameplayTag GrindRailsTag; // 0x1424(0x4)
		FGameplayTag WingedFlightTag; // 0x1428(0x4)
		FGameplayTag WingsForceCrashTag; // 0x142C(0x4)
		FGameplayTag WingsLeapingTag; // 0x1430(0x4)
		float CurrentHeightAboveWorld; // 0x1434(0x4)
		float Fuel; // 0x1438(0x4)
		float GlidePitch; // 0x143C(0x4)
		float GlidePitchAlpha; // 0x1440(0x4)
		float GlidePitchInterp; // 0x1444(0x4)
		float GlidePitchTarget; // 0x1448(0x4)
		float GlideRoll; // 0x144C(0x4)
		float GlideRollCombined; // 0x1450(0x4)
		float GlideRollCombinedTarget; // 0x1454(0x4)
		float GlideRollInterp; // 0x1458(0x4)
		float GroundBlendTime; // 0x145C(0x4)
		float pelvis; // 0x1460(0x4)
		float PitchAlpha; // 0x1464(0x4)
		float RollAlpha; // 0x1468(0x4)
		float SlowDownOrLandAlpha; // 0x146C(0x4)
		float SlowDownOrLandTarget; // 0x1470(0x4)
		float SlowSpeedAlpha; // 0x1474(0x4)
		float YawAlpha; // 0x1478(0x4)
		float YawBlend; // 0x147C(0x4)
		int32_t RandomInteger; // 0x1480(0x4)
		bool bIsAllowWingFlap : 1; // 0x1484:0(0x1)
		bool bIsAscending : 1; // 0x1484:1(0x1)
		bool bIsBoostStartEnd : 1; // 0x1484:2(0x1)
		bool bIsDodgeLeft : 1; // 0x1484:3(0x1)
		bool bIsDodgeRight : 1; // 0x1484:4(0x1)
		bool bIsExtBoostEarly : 1; // 0x1484:5(0x1)
		bool bIsFlyingStart : 1; // 0x1484:6(0x1)
		bool bIsForceDive : 1; // 0x1484:7(0x1)
		bool bIsLeapInterruptible : 1; // 0x1485:0(0x1)
		bool bIsHighWithNoFuel : 1; // 0x1485:1(0x1)
		bool bIsOnAscender : 1; // 0x1485:2(0x1)
		bool bIsOnGrindRail : 1; // 0x1485:3(0x1)
		bool bIsPlayDiveHitToIdle : 1; // 0x1485:4(0x1)
		bool bIsPlayLandAdditive : 1; // 0x1485:5(0x1)
		bool bIsWingLeaping : 1; // 0x1485:6(0x1)
		bool bIsWingReplenish : 1; // 0x1485:7(0x1)
		bool bIsWingsBoosting : 1; // 0x1486:0(0x1)
		bool bIsWingsCrashing : 1; // 0x1486:1(0x1)
		bool bIsWingsFlying : 1; // 0x1486:2(0x1)
		bool bIsDiveStart : 1; // 0x1486:3(0x1)
		bool bToBoosting : 1; // 0x1486:4(0x1)
		unsigned char UnknownData00_7[0x19]; // 0x1487(0x19) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SunRoseFlyingRuntime.SunRoseFlying_PlayerAnimInstance");
			return ret;
		}
	};


	// Class SunRoseFlyingRuntime.SunRoseFlying_WingsAnimInstance
	// Inherited from UFortItemLayerAnimInstance -> UFortBaseLayerAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x60 (0x7A0 - 0x740)
	class USunRoseFlying_WingsAnimInstance : public UFortItemLayerAnimInstance	
	{
	public:
		FRotator PlayerPawnRotationRate; // 0x740(0x18)
		float PlayerCurrentHeightAboveWorld; // 0x758(0x4)
		float PlayerFuel; // 0x75C(0x4)
		float PlayerGlidePitch; // 0x760(0x4)
		float PlayerGlidePitchAlpha; // 0x764(0x4)
		float PlayerGlideRoll; // 0x768(0x4)
		float PlayerGroundBlendTime; // 0x76C(0x4)
		float PlayerGlideRollCombined; // 0x770(0x4)
		float PlayerRollAlpha; // 0x774(0x4)
		float PlayerSlowDownOrLandAlpha; // 0x778(0x4)
		float PlayerSpeed2D; // 0x77C(0x4)
		float WingFlapAlpha; // 0x780(0x4)
		float WingSlowDownOrLandAlpha; // 0x784(0x4)
		float WingSlowDownOrLandAlphaTarget; // 0x788(0x4)
		int32_t PlayerRandomInteger; // 0x78C(0x4)
		bool bIsConduitToMoving : 1; // 0x790:0(0x1)
		bool bIsCrouchIdleToCrouchMoving : 1; // 0x790:1(0x1)
		bool bIsCrouchMovingToCrouchIdle : 1; // 0x790:2(0x1)
		bool bIsFallLoopToJumpLand : 1; // 0x790:3(0x1)
		bool bIsFlyingStart : 1; // 0x790:4(0x1)
		bool bIsNotCrouchIdle : 1; // 0x790:5(0x1)
		bool bIsNotCrouchMoving : 1; // 0x790:6(0x1)
		bool bIsNotMoving : 1; // 0x790:7(0x1)
		bool bIsNotOnZipline : 1; // 0x791:0(0x1)
		bool bIsOnZipline : 1; // 0x791:1(0x1)
		bool bIsOutOfGas : 1; // 0x791:2(0x1)
		bool bIsProceduralDeactivated : 1; // 0x791:3(0x1)
		bool bIsRandomFlap : 1; // 0x791:4(0x1)
		bool bIsTacticalJumpLoopEnd : 1; // 0x791:5(0x1)
		bool bIsToBoostEnd : 1; // 0x791:6(0x1)
		bool bIsToBoostStart : 1; // 0x791:7(0x1)
		bool bIsToSliding : 1; // 0x792:0(0x1)
		bool bLOD2Fix : 1; // 0x792:1(0x1)
		bool bPlayerIsAccelerating2D : 1; // 0x792:2(0x1)
		bool bPlayerIsAllowWingFlap : 1; // 0x792:3(0x1)
		bool bPlayerIsAscending : 1; // 0x792:4(0x1)
		bool bPlayerIsBoostStartEnd : 1; // 0x792:5(0x1)
		bool bPlayerIsCrouching : 1; // 0x792:6(0x1)
		bool bPlayerIsCrouchMoving : 1; // 0x792:7(0x1)
		bool bPlayerIsDodgeLeft : 1; // 0x793:0(0x1)
		bool bPlayerIsDodgeRight : 1; // 0x793:1(0x1)
		bool bPlayerIsFalling : 1; // 0x793:2(0x1)
		bool bPlayerIsJumping : 1; // 0x793:3(0x1)
		bool bPlayerIsForceDive : 1; // 0x793:4(0x1)
		bool bPlayerIsOnAscender : 1; // 0x793:5(0x1)
		bool bPlayerIsOnGrindRail : 1; // 0x793:6(0x1)
		bool bPlayerIsLeapInterruptible : 1; // 0x793:7(0x1)
		bool bPlayerIsPlayDiveHitToIdle : 1; // 0x794:0(0x1)
		bool bPlayerIsPlayLandAdditive : 1; // 0x794:1(0x1)
		bool bPlayerIsSliding : 1; // 0x794:2(0x1)
		bool bPlayerIsSurfaceSwimming : 1; // 0x794:3(0x1)
		bool bPlayerIsTacticalJump : 1; // 0x794:4(0x1)
		bool bPlayerIsTacticalSprint : 1; // 0x794:5(0x1)
		bool bPlayerIsWingReplenish : 1; // 0x794:6(0x1)
		bool bPlayerIsWingLeaping : 1; // 0x794:7(0x1)
		bool bPlayerIsWingsBoosting : 1; // 0x795:0(0x1)
		bool bPlayerIsWingsCrashing : 1; // 0x795:1(0x1)
		bool bPlayerIsWingsFlying : 1; // 0x795:2(0x1)
		bool bPlayerIsZiplining : 1; // 0x795:3(0x1)
		bool bTacticalJumpLoopToTacticalLand : 1; // 0x795:4(0x1)
		bool bToJumpStart : 1; // 0x795:5(0x1)
		unsigned char UnknownData00_7[0xA]; // 0x796(0xA) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SunRoseFlyingRuntime.SunRoseFlying_WingsAnimInstance");
			return ret;
		}
	};


	// Class SunRoseFlyingRuntime.FortGameplayAbility_SunroseWingsCrashBase
	// Inherited from UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0x80 (0xBC0 - 0xB40)
	class UFortGameplayAbility_SunroseWingsCrashBase : public UFortGameplayAbility	
	{
	public:
		float TelegraphUpdateIntervalSeconds; // 0xB40(0x4)
		unsigned char UnknownData00_6[0x4]; // 0xB44(0x4) UNKNOWN PROPERTY
		TArray<TEnumAsByte> TelegraphCollisionObjectTypes; // 0xB48(0x10)
		float TelegraphInterpSpeed; // 0xB58(0x4)
		unsigned char UnknownData01_6[0x2C]; // 0xB5C(0x2C) UNKNOWN PROPERTY
		float CrashWindupDuration; // 0xB88(0x4)
		float CrashLookPitchMin; // 0xB8C(0x4)
		float CrashLookPitchMax; // 0xB90(0x4)
		float TelegraphTraceStartDist; // 0xB94(0x4)
		float TelegraphTraceEndDist; // 0xB98(0x4)
		unsigned char UnknownData02_6[0x4]; // 0xB9C(0x4) UNKNOWN PROPERTY
		UClass* TelegraphActorClass; // 0xBA0(0x8)
		AActor* TelegraphActor; // 0xBA8(0x8)
		UFXSystemAsset* TelegraphFXSystemAsset; // 0xBB0(0x8)
		UFXSystemComponent* TelegraphNS; // 0xBB8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SunRoseFlyingRuntime.FortGameplayAbility_SunroseWingsCrashBase");
			return ret;
		}

		void UpdateTelegraph(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751381F78(relative to base address)
		void EndTelegraph(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75138123C(relative to base address)
		void BeginTelegraph(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75138108C(relative to base address)
	};

}
