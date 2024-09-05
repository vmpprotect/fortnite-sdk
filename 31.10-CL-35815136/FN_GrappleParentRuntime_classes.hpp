#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: GrappleParentRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class GrappleParentRuntime.FortCameraModifier_Swinging
	// Inherited from UCameraModifier -> UObject
	// Size: 0x240 (0x288 - 0x48)
	class UFortCameraModifier_Swinging : public UCameraModifier	
	{
	public:
		float MaxVelocityDeltaPerSecond; // 0x48(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4C(0x4) UNKNOWN PROPERTY
		UCurveFloat* BlendInCurve; // 0x50(0x8)
		UCurveFloat* BlendOutCurve; // 0x58(0x8)
		FSpeedScaledAxisOffsetData ForwardOffsetData; // 0x60(0x60)
		FVector2D TotalForwardOffsetBounds; // 0xC0(0x10)
		FSpeedScaledAxisOffsetData RightOffsetData; // 0xD0(0x60)
		FVector2D RightForwardOffsetMultiplierBounds; // 0x130(0x10)
		FSpeedScaledAxisOffsetData UpOffsetData; // 0x140(0x60)
		FVector2D UpPositiveForwardOffsetMultiplierBounds; // 0x1A0(0x10)
		FVector2D UpNegativeForwardOffsetMultiplierBounds; // 0x1B0(0x10)
		float FOVInterpSpeed; // 0x1C0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x1C4(0x4) UNKNOWN PROPERTY
		FVector2D FOVBounds; // 0x1C8(0x10)
		UCurveFloat* BoostCurve; // 0x1D8(0x8)
		FScalableFloat BoostModifier; // 0x1E0(0x28)
		float AttachBoostDuration; // 0x208(0x4)
		float AttachBoostMagnitude; // 0x20C(0x4)
		float DetachBoostDuration; // 0x210(0x4)
		float DetachBoostMagnitude; // 0x214(0x4)
		UCurveFloat* SlidingHeightCurve; // 0x218(0x8)
		FGameplayTag SlidingGameplayTag; // 0x220(0x4)
		float SlideHeightTransitionDuration; // 0x224(0x4)
		float MaxSlidingSpeedMultiplierOffset; // 0x228(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x22C(0x4) UNKNOWN PROPERTY
		AFortPlayerPawnAthena* CachedPlayer; // 0x230(0x8)
		AFortWeaponRangedDualSwing* CachedWeapon; // 0x238(0x8)
		unsigned char UnknownData03_7[0x48]; // 0x240(0x48) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GrappleParentRuntime.FortCameraModifier_Swinging");
			return ret;
		}

		void RemoveSelfFromCameraManager(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF750791554(relative to base address)
		void CalculateDynamicMultipliers(float& OutFOVBoundsMultiplier, float& OutBoostOffsetMultiplier); // Flags: Native|Event|Protected|HasOutParms|BlueprintEvent|Const, Memory Exec: 0x7FF750791268(relative to base address)
	};


	// Class GrappleParentRuntime.FortSwingingLayerAnimInstance
	// Inherited from UFortBaseLayerAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x1A8 (0x660 - 0x4B8)
	class UFortSwingingLayerAnimInstance : public UFortBaseLayerAnimInstance	
	{
	public:
		UAnimInstance* MainAnimBP; // 0x4B8(0x8)
		AFortPlayerPawnAthena* Player; // 0x4C0(0x8)
		bool IsGroundSwing; // 0x4C8(0x1)
		bool IsFemale; // 0x4C9(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x4CA(0x2) UNKNOWN PROPERTY
		float PlayerDistanceToGround; // 0x4CC(0x4)
		bool CalculateRotation; // 0x4D0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x4D1(0x7) UNKNOWN PROPERTY
		FScalableFloat ForwardInfluenceOnRotation; // 0x4D8(0x28)
		FScalableFloat TimeForMaxRotationSpeed; // 0x500(0x28)
		FScalableFloat MaxRotationSpeed; // 0x528(0x28)
		FScalableFloat RotationSpeedWhileNotAttached; // 0x550(0x28)
		FScalableFloat RotationSpeedWhileNotRotated; // 0x578(0x28)
		AActor* GetAttachedActor; // 0x5A0(0x8)
		bool IsFreeFalling; // 0x5A8(0x1)
		bool IsAttached; // 0x5A9(0x1)
		bool IsNotAttachedToCliff; // 0x5AA(0x1)
		unsigned char UnknownData02_6[0x5]; // 0x5AB(0x5) UNKNOWN PROPERTY
		FVector Velocity; // 0x5B0(0x18)
		FVector XYVelocity; // 0x5C8(0x18)
		FVector VecFromPlayerToAttachPoint; // 0x5E0(0x18)
		float PitchAngleFromAttachPoint; // 0x5F8(0x4)
		float RollAngle; // 0x5FC(0x4)
		float YawAngleToAttachTarget; // 0x600(0x4)
		FName CurveName_SwingPhase; // 0x604(0x4)
		FName CurveName_BlendOut; // 0x608(0x4)
		float SwingPhase; // 0x60C(0x4)
		FRotator CurrentRootRotation; // 0x610(0x18)
		FVector CurrentRootTranslation; // 0x628(0x18)
		bool IsSwingRelease1; // 0x640(0x1)
		bool IsSwingRelease2; // 0x641(0x1)
		bool IsSwingRelease3; // 0x642(0x1)
		bool IsSwingRelease4; // 0x643(0x1)
		bool IsSwingRelease5; // 0x644(0x1)
		bool IsSwingReleaseSkid; // 0x645(0x1)
		bool IsMovingAttachPoint; // 0x646(0x1)
		bool IsBlendOut; // 0x647(0x1)
		float WebCastAttachDirection; // 0x648(0x4)
		bool IsWebCastDown; // 0x64C(0x1)
		bool IsSwingOneHand; // 0x64D(0x1)
		bool IsRandomHandBool; // 0x64E(0x1)
		bool IsRandomSwingReleaseBool; // 0x64F(0x1)
		bool IsRandomeReleaseBool; // 0x650(0x1)
		bool IsWithin100UnitsOfGround; // 0x651(0x1)
		bool IsHanging; // 0x652(0x1)
		bool IsFallRelease; // 0x653(0x1)
		bool IsOnGroundWebCast; // 0x654(0x1)
		bool IsSwingNearGroundToSkid; // 0x655(0x1)
		bool IsHangToSwingInAir; // 0x656(0x1)
		bool IsHangToSwingNearGround; // 0x657(0x1)
		unsigned char UnknownData03_7[0x8]; // 0x658(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GrappleParentRuntime.FortSwingingLayerAnimInstance");
			return ret;
		}

		void GetPlayerAnglesFromAttachPoint(float& pitch, float& Roll, float& Yaw); // Flags: Final|Native|Public|HasOutParms, Memory Exec: 0x7FF75079142C(relative to base address)
		FVector GetAttachVectorInPlayerSpace(FVector& InPlayerToAttachPoint); // Flags: Final|Native|Public|HasOutParms|HasDefaults, Memory Exec: 0x7FF750791348(relative to base address)
	};

}
