#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: HoverGameplayRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class HoverGameplayRuntime.FortMovementMode_HoverRuntimeData
	// Inherited from UFortMovementMode_BaseExtRuntimeData -> UObject
	// Size: 0x40 (0x80 - 0x40)
	class UFortMovementMode_HoverRuntimeData : public UFortMovementMode_BaseExtRuntimeData	
	{
	public:
		bool bAscend; // 0x40(0x1)
		bool bBoosting; // 0x41(0x1)
		unsigned char UnknownData05_6[0x2]; // 0x42(0x2) UNKNOWN PROPERTY
		float TimeInBoost; // 0x44(0x4)
		bool bHasInteruptedForwardBoost; // 0x48(0x1)
		unsigned char UnknownData06_6[0x3]; // 0x49(0x3) UNKNOWN PROPERTY
		float TargetHeightLimit; // 0x4C(0x4)
		float CurrentHeightLimit; // 0x50(0x4)
		float TimeAboveHeightLimit; // 0x54(0x4)
		bool bObstacleAboveHead; // 0x58(0x1)
		bool bStopHover; // 0x59(0x1)
		bool bLanded; // 0x5A(0x1)
		unsigned char UnknownData07_6[0x1]; // 0x5B(0x1) UNKNOWN PROPERTY
		bool bLocalAscending; // 0x5C(0x1)
		bool bLocalBoosting; // 0x5D(0x1)
		bool bLocalStopHover; // 0x5E(0x1)
		unsigned char UnknownData08_6[0x1]; // 0x5F(0x1) UNKNOWN PROPERTY
		FVector PreviousBoostVelocity; // 0x60(0x18)
		float TimeSinceLaunched; // 0x78(0x4)
		unsigned char UnknownData09_7[0x4]; // 0x7C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/HoverGameplayRuntime.FortMovementMode_HoverRuntimeData");
			return ret;
		}
	};


	// Class HoverGameplayRuntime.FortMovementMode_ExtHover
	// Inherited from UFortMovementMode_BaseExtLogic -> UObject
	// Size: 0x5D8 (0x6F8 - 0x120)
	class UFortMovementMode_ExtHover : public UFortMovementMode_BaseExtLogic	
	{
	public:
		FScalableFloat Row_LateralMovementStrength; // 0x120(0x28)
		unsigned char UnknownData31_6[0x8]; // 0x148(0x8) UNKNOWN PROPERTY
		FScalableFloat Row_AscendStrength; // 0x150(0x28)
		unsigned char UnknownData32_6[0x8]; // 0x178(0x8) UNKNOWN PROPERTY
		FScalableFloat Row_DescendStrength; // 0x180(0x28)
		unsigned char UnknownData33_6[0x8]; // 0x1A8(0x8) UNKNOWN PROPERTY
		FScalableFloat Row_BoostStrength; // 0x1B0(0x28)
		unsigned char UnknownData34_6[0x8]; // 0x1D8(0x8) UNKNOWN PROPERTY
		FScalableFloat Row_SustainedBoostStrength; // 0x1E0(0x28)
		unsigned char UnknownData35_6[0x8]; // 0x208(0x8) UNKNOWN PROPERTY
		FScalableFloat Row_LateralBrakingStrength; // 0x210(0x28)
		unsigned char UnknownData36_6[0x8]; // 0x238(0x8) UNKNOWN PROPERTY
		FScalableFloat Row_VerticalBrakingStrength; // 0x240(0x28)
		unsigned char UnknownData37_6[0x8]; // 0x268(0x8) UNKNOWN PROPERTY
		FScalableFloat Row_DirectionalChangeBonus; // 0x270(0x28)
		unsigned char UnknownData38_6[0x8]; // 0x298(0x8) UNKNOWN PROPERTY
		FScalableFloat Row_VerticleForceVelocityThreshold; // 0x2A0(0x28)
		unsigned char UnknownData39_6[0x8]; // 0x2C8(0x8) UNKNOWN PROPERTY
		FScalableFloat Row_DescendAtHeightLimitThreshold; // 0x2D0(0x28)
		unsigned char UnknownData40_6[0x8]; // 0x2F8(0x8) UNKNOWN PROPERTY
		FScalableFloat Row_AllowedTimeAboveHeightLimit; // 0x300(0x28)
		unsigned char UnknownData41_6[0x8]; // 0x328(0x8) UNKNOWN PROPERTY
		FScalableFloat Row_BoostDuration; // 0x330(0x28)
		unsigned char UnknownData42_6[0x8]; // 0x358(0x8) UNKNOWN PROPERTY
		FScalableFloat Row_BoostingDirectionChangeMax; // 0x360(0x28)
		unsigned char UnknownData43_6[0x8]; // 0x388(0x8) UNKNOWN PROPERTY
		FScalableFloat Row_BoostingDirectionChangeMinMultiplier; // 0x390(0x28)
		unsigned char UnknownData44_6[0x8]; // 0x3B8(0x8) UNKNOWN PROPERTY
		FScalableFloat Row_VelocityBrakeMulitplier; // 0x3C0(0x28)
		unsigned char UnknownData45_6[0x8]; // 0x3E8(0x8) UNKNOWN PROPERTY
		FScalableFloat Row_HeightLimitZBrakeMultiplier; // 0x3F0(0x28)
		unsigned char UnknownData46_6[0x8]; // 0x418(0x8) UNKNOWN PROPERTY
		FScalableFloat Row_LaunchBrakeMultiplier; // 0x420(0x28)
		unsigned char UnknownData47_6[0x8]; // 0x448(0x8) UNKNOWN PROPERTY
		FScalableFloat Row_LateralMaxSpeed; // 0x450(0x28)
		unsigned char UnknownData48_6[0x8]; // 0x478(0x8) UNKNOWN PROPERTY
		FScalableFloat Row_AscendingMaxSpeed; // 0x480(0x28)
		unsigned char UnknownData49_6[0x8]; // 0x4A8(0x8) UNKNOWN PROPERTY
		FScalableFloat Row_BoostingMaxSpeed; // 0x4B0(0x28)
		unsigned char UnknownData50_6[0x8]; // 0x4D8(0x8) UNKNOWN PROPERTY
		FScalableFloat Row_BoostingSustainedMaxSpeed; // 0x4E0(0x28)
		unsigned char UnknownData51_6[0x8]; // 0x508(0x8) UNKNOWN PROPERTY
		FScalableFloat Row_MinSpeed; // 0x510(0x28)
		unsigned char UnknownData52_6[0x8]; // 0x538(0x8) UNKNOWN PROPERTY
		FScalableFloat Row_MinBoostSpeed; // 0x540(0x28)
		unsigned char UnknownData53_6[0x8]; // 0x568(0x8) UNKNOWN PROPERTY
		FScalableFloat Row_MaxBoostVelocityAngleChangeRate; // 0x570(0x28)
		unsigned char UnknownData54_6[0x8]; // 0x598(0x8) UNKNOWN PROPERTY
		FScalableFloat Row_MaxBoostRotationDelta; // 0x5A0(0x28)
		unsigned char UnknownData55_6[0x8]; // 0x5C8(0x8) UNKNOWN PROPERTY
		FScalableFloat Row_SoftHeightLimitSize; // 0x5D0(0x28)
		unsigned char UnknownData56_6[0x8]; // 0x5F8(0x8) UNKNOWN PROPERTY
		FScalableFloat Row_HeightLimitMaxInterpDistance; // 0x600(0x28)
		unsigned char UnknownData57_6[0x8]; // 0x628(0x8) UNKNOWN PROPERTY
		FScalableFloat Row_HeightLimitRiseSpeed; // 0x630(0x28)
		unsigned char UnknownData58_6[0x8]; // 0x658(0x8) UNKNOWN PROPERTY
		FScalableFloat Row_HeightLimitFallSpeed; // 0x660(0x28)
		unsigned char UnknownData59_6[0x8]; // 0x688(0x8) UNKNOWN PROPERTY
		FScalableFloat Row_LaunchResponseMaxTime; // 0x690(0x28)
		unsigned char UnknownData60_6[0x8]; // 0x6B8(0x8) UNKNOWN PROPERTY
		FScalableFloat Row_LaunchResponseMinTime; // 0x6C0(0x28)
		unsigned char UnknownData61_6[0x8]; // 0x6E8(0x8) UNKNOWN PROPERTY
		UClass RuntimeDataClass; // 0x6F0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/HoverGameplayRuntime.FortMovementMode_ExtHover");
			return ret;
		}

		void TryStartBoost(UFortMovementMode_HoverRuntimeData HoverRuntimeData); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BE6E18
		UFortMovementMode_HoverRuntimeData TryActivateHoverMME(AFortPawn TargetPawn, UClass HoverMME, FFortMovementMode_BaseExtCreationData& CreationData); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414BE6D38
		void StopAscending(UFortMovementMode_HoverRuntimeData HoverRuntimeData); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BE6C58
		void StartHover(UFortMovementMode_HoverRuntimeData HoverRuntimeData); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BE6B78
		void StartAscending(UFortMovementMode_HoverRuntimeData HoverRuntimeData); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BE6A98
		void OnHoverStart(UFortMovementMode_HoverRuntimeData HoverRuntimeData); // Flags: Native|Event|Protected|BlueprintCallable|BlueprintEvent 0x7FF414BE69B8
		void OnHoverEnd(UFortMovementMode_HoverRuntimeData HoverRuntimeData); // Flags: Native|Event|Protected|BlueprintCallable|BlueprintEvent 0x7FF414BE68D8
		void OnBoostStart(UFortMovementMode_HoverRuntimeData HoverRuntimeData); // Flags: Native|Event|Protected|BlueprintCallable|BlueprintEvent 0x7FF414BE67F8
		void OnBoostEnd(UFortMovementMode_HoverRuntimeData HoverRuntimeData); // Flags: Native|Event|Protected|BlueprintCallable|BlueprintEvent 0x7FF414BE6718
		void OnAscendStart(UFortMovementMode_HoverRuntimeData HoverRuntimeData); // Flags: Native|Event|Protected|BlueprintCallable|BlueprintEvent 0x7FF414BE6638
		void OnAscendEnd(UFortMovementMode_HoverRuntimeData HoverRuntimeData); // Flags: Native|Event|Protected|BlueprintCallable|BlueprintEvent 0x7FF414BE6558
		void EndHover(UFortMovementMode_HoverRuntimeData HoverRuntimeData); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BE6478
		bool CanStartBoosting(); // Flags: Native|Event|Protected|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x7FF414BE6398
		EFortMovementModeExt_UpdateResult BP_UpdateBeforeCharacterMovement(EFortMovementModeExt_UpdateResult& NativeUpdateResult, FMMERuntimeContext& RuntimeContext); // Flags: Event|Protected|HasOutParms|BlueprintEvent 0x7FF414BE62B8
		void BP_PhysUpdate(FVector& OutVelocity, FVector& OutAcceleration, FMMERuntimeContext& RuntimeContext, FVector& InVelocity, FVector& InAcceleration); // Flags: Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 0x7FF414BE61D8
		void BP_HandleHitResponse(FMMERuntimeContext& RuntimeContext, FVector& InVelocity, FVector& OldPosition, FVector& NewLocation, FVector& Adjustement, FHitResult& Hit); // Flags: Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 0x7FF414BE60F8
	};


	// Class HoverGameplayRuntime.HoverAttributeSet
	// Inherited from UFortAttributeSet -> UAttributeSet -> UObject
	// Size: 0x58 (0x88 - 0x30)
	class UHoverAttributeSet : public UFortAttributeSet	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x30(0x8) UNKNOWN PROPERTY
		FFortGameplayAttributeData MaxFuel; // 0x38(0x28)
		FFortGameplayAttributeData Fuel; // 0x60(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/HoverGameplayRuntime.HoverAttributeSet");
			return ret;
		}

		void OnRep_Fuel(FFortGameplayAttributeData& OldValue); // Flags: Final|Native|Private|HasOutParms 0x7FF414BE6EF8
	};

}
