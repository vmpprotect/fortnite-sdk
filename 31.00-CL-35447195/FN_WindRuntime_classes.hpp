#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: WindRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class WindRuntime.FortPlayerWindTunnelAnimInstance
	// Inherited from UFortPlayerAnimInstanceProxy -> UFortBaseLayerAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x10 (0x1420 - 0x1410)
	class UFortPlayerWindTunnelAnimInstance : public UFortPlayerAnimInstanceProxy	
	{
	public:
		bool bApplyWindSlideAdditive : 1; // 0x1410:0(0x1)
		unsigned char UnknownData01_7[0xF]; // 0x1411(0xF) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/WindRuntime.FortPlayerWindTunnelAnimInstance");
			return ret;
		}
	};


	// Class WindRuntime.WindCheatManager
	// Inherited from UChildCheatManager -> UCheatManagerExtension -> UObject
	// Size: 0x58 (0x80 - 0x28)
	class UWindCheatManager : public UChildCheatManager	
	{
	public:
		TWeakObjectPtr InflateEffectClass; // 0x28(0x20)
		TWeakObjectPtr DeflateEffectClass; // 0x48(0x20)
		int32_t MinBalloonsOnPlayer; // 0x68(0x4)
		int32_t MaxBalloonsOnPlayer; // 0x6C(0x4)
		UClass CachedInflateEffectClass; // 0x70(0x8)
		UClass CachedDeflateEffectClass; // 0x78(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/WindRuntime.WindCheatManager");
			return ret;
		}

		void ReleaseBalloonOnSelf(int32_t NumBalloons); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public 0x7FF414D5C238
		void InflateBalloonOnSelf(int32_t NumBalloons); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Public 0x7FF414D5C158
	};


	// Class WindRuntime.WindField
	// Inherited from AFieldSystemActor -> AActor -> UObject
	// Size: 0x108 (0x3A0 - 0x298)
	class AWindField : public AFieldSystemActor	
	{
	public:
		float StartTime; // 0x298(0x4)
		float StopTime; // 0x29C(0x4)
		float IncomingDuration; // 0x2A0(0x4)
		float OutgoingDuration; // 0x2A4(0x4)
		float StrengthMultiplier; // 0x2A8(0x4)
		bool bIsActive; // 0x2AC(0x1)
		unsigned char UnknownData01_7[0xF3]; // 0x2AD(0xF3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/WindRuntime.WindField");
			return ret;
		}

		void SetActive(bool bInIsActive); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D5C858
		void RemoveIgnoredActor(AActor Actor); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D5C778
		void RemoveCollider(UShapeComponent ShapeComponent); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D5C698
		void OnEndOverlap(UPrimitiveComponent OverlappedComponent, AActor Other, UPrimitiveComponent OtherComp, int32_t OtherBodyIndex); // Flags: Native|Protected 0x7FF414D5C5B8
		void OnBeginOverlap(UPrimitiveComponent OverlappedComponent, AActor Other, UPrimitiveComponent OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // Flags: Native|Protected|HasOutParms 0x7FF414D5C4D8
		void AddIgnoredActor(AActor Actor); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D5C3F8
		void AddCollider(UShapeComponent ShapeComponent); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D5C318
	};


	// Class WindRuntime.LinearWindField
	// Inherited from AWindField -> AFieldSystemActor -> AActor -> UObject
	// Size: 0x90 (0x430 - 0x3A0)
	class ALinearWindField : public AWindField	
	{
	public:
		FVector Direction; // 0x3A0(0x18)
		float FieldStrength; // 0x3B8(0x4)
		float ForceStrength; // 0x3BC(0x4)
		FName PawnForceName; // 0x3C0(0x4)
		float PawnForceStrength; // 0x3C4(0x4)
		URadialVector RadialVector; // 0x3C8(0x8)
		URadialFalloff RadialFalloff; // 0x3D0(0x8)
		UOperatorField OperatorField; // 0x3D8(0x8)
		unsigned char UnknownData01_7[0x50]; // 0x3E0(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/WindRuntime.LinearWindField");
			return ret;
		}
	};


	// Class WindRuntime.RadialWindField
	// Inherited from AWindField -> AFieldSystemActor -> AActor -> UObject
	// Size: 0x150 (0x4F0 - 0x3A0)
	class ARadialWindField : public AWindField	
	{
	public:
		FScalableFloat FieldRadius; // 0x3A0(0x28)
		FScalableFloat FieldStrength; // 0x3C8(0x28)
		FScalableFloat ForceRadius; // 0x3F0(0x28)
		FScalableFloat ForceStrength; // 0x418(0x28)
		UCurveFloat ForceStrengthDistanceFalloff; // 0x440(0x8)
		FName PawnForceName; // 0x448(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x44C(0x4) UNKNOWN PROPERTY
		FScalableFloat PawnForceStrength; // 0x450(0x28)
		UCurveFloat PawnForceStrengthDistanceFalloff; // 0x478(0x8)
		bool bPawnForceIsPush; // 0x480(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x481(0x7) UNKNOWN PROPERTY
		URadialVector RadialVector; // 0x488(0x8)
		URadialFalloff RadialFalloff; // 0x490(0x8)
		UOperatorField OperatorField; // 0x498(0x8)
		unsigned char UnknownData05_7[0x50]; // 0x4A0(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/WindRuntime.RadialWindField");
			return ret;
		}
	};


	// Class WindRuntime.WindSplineComponent
	// Inherited from USplineComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0xDF0 (0x1350 - 0x560)
	class UWindSplineComponent : public USplineComponent	
	{
	public:
		unsigned char UnknownData03_3[0x20]; // 0x560(0x20) UNKNOWN PROPERTY
		FScalableFloat DisableSafeZonePhaseIndex; // 0x580(0x28)
		UStaticMesh StaticMesh; // 0x5A8(0x8)
		UStaticMesh StartStaticMesh; // 0x5B0(0x8)
		UStaticMesh EndStaticMesh; // 0x5B8(0x8)
		TEnumAsByte MeshForwardAxis; // 0x5C0(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x5C1(0x7) UNKNOWN PROPERTY
		FScalableFloat MeshRollVariance; // 0x5C8(0x28)
		FName ActiveSectionStartMaterialParamName; // 0x5F0(0x4)
		FName ActiveSectionEndMaterialParamName; // 0x5F4(0x4)
		FScalableFloat TargetingRefreshRate; // 0x5F8(0x28)
		FScalableFloat TargetingRadius; // 0x620(0x28)
		TArray TargetObjectTypes; // 0x648(0x10)
		FGameplayTagQuery TargetTagQuery; // 0x658(0x48)
		FGameplayTagQuery BlockageTagQuery; // 0x6A0(0x48)
		FScalableFloat BlockageSubdivisions; // 0x6E8(0x28)
		TArray TargetEffects; // 0x710(0x10)
		TMap ObjectTypeToMaxTargetCount; // 0x720(0x50)
		FScalableFloat MaxTargetCountReachedExpelDuration; // 0x770(0x28)
		FScalableFloat SkydivingLandingAngle; // 0x798(0x28)
		FScalableFloat RampUpSpeed; // 0x7C0(0x28)
		FScalableFloat RampDownSpeed; // 0x7E8(0x28)
		FScalableFloat ForwardForceFallOffStartDistance; // 0x810(0x28)
		FScalableFloat ForwardForceMagnitude; // 0x838(0x28)
		FScalableFloat ReverseForceMagnitude; // 0x860(0x28)
		FScalableFloat ForwardForceDistanceFallOffExponent; // 0x888(0x28)
		FScalableFloat InwardForceInnerRadius; // 0x8B0(0x28)
		FScalableFloat InwardForceOuterRadiusAcceleration; // 0x8D8(0x28)
		FScalableFloat InwardForceInnerRadiusDeceleration; // 0x900(0x28)
		FScalableFloat InwardForceInnerRadiusSpeedThreshold; // 0x928(0x28)
		FScalableFloat InwardForceOuterRadiusSpeedThreshold; // 0x950(0x28)
		FScalableFloat InwardForceMaxReductionFromSteering; // 0x978(0x28)
		FScalableFloat InwardForceMaxMultiplierWhenSteering; // 0x9A0(0x28)
		FScalableFloat InwardForceMaxSteerAngle; // 0x9C8(0x28)
		FScalableFloat InwardForceLowVelocityThreshold; // 0x9F0(0x28)
		FScalableFloat InwardForceLowVelocityMinValue; // 0xA18(0x28)
		FScalableFloat InwardForceSteeringReduceAccelerationPower; // 0xA40(0x28)
		FScalableFloat InwardForceSteeringReduceDecelerationPower; // 0xA68(0x28)
		TMap SizeForceModifiers; // 0xA90(0x50)
		TMap ObjectTypeForceModifiers; // 0xAE0(0x50)
		TArray QueryBasedForceModifiers; // 0xB30(0x10)
		FGameplayTagQuery PawnSkydivingTimeLimitQuery; // 0xB40(0x48)
		FScalableFloat PawnSkydivingTimeLimit; // 0xB88(0x28)
		FScalableFloat PawnSkydivingMinDistanceAboveGround; // 0xBB0(0x28)
		FScalableFloat AutoWakeUpPhysicsObjects; // 0xBD8(0x28)
		FScalableFloat FieldMagnitudeBase; // 0xC00(0x28)
		FScalableFloat FieldMinMagnitudeAfterFalloff; // 0xC28(0x28)
		FScalableFloat FieldMaxMagnitudeAfterFalloff; // 0xC50(0x28)
		UClass PlayerWindAnimationLayer; // 0xC78(0x8)
		FMulticastInlineDelegate OnWindSplineDisabled; // 0xC80(0x10)
		FMulticastInlineDelegate OnWindSplineEnabled; // 0xC90(0x10)
		FWindSplineTargetData TargetData; // 0xCA0(0x1B8)
		FWindSplineBlockageArray Blockages; // 0xE58(0x118)
		UFieldSystemComponent FieldSystemComponent; // 0xF70(0x8)
		UUniformVector UniformVector; // 0xF78(0x8)
		UBoxFalloff BoxFalloff; // 0xF80(0x8)
		UOperatorField BoxOperatorField; // 0xF88(0x8)
		TArray MeshDataArray; // 0xF90(0x10)
		TArray FXComponents; // 0xFA0(0x10)
		unsigned char UnknownData05_7[0x3A0]; // 0xFB0(0x3A0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/WindRuntime.WindSplineComponent");
			return ret;
		}

		void OnRep_TargetData(); // Flags: Final|Native|Protected 0x7FF414D5CE78
		void OnRep_Blockages(); // Flags: Final|Native|Protected 0x7FF414D5CD98
		void GetWindDataAtLocation(FVector& InTargetLocation, FVector& OutDirection, float& OutAttenuation); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const 0x7FF414D5CCB8
		float GetTargetingRadius(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D5CBD8
		void GetClosestActiveLocations(FVector& InTargetLocation, bool& bIsClosestPointActive, FVector& ClosestPointOnSpline, TArray& ClosestActiveLocations); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const 0x7FF414D5CAF8
		void Enable(); // Flags: Final|Native|Protected 0x7FF414D5CA18
		void Disable(); // Flags: Final|Native|Protected 0x7FF414D5C938
	};

}
