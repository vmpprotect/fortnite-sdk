#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: AnimationLocomotionLibraryRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class AnimationLocomotionLibraryRuntime.AnimCharacterMovementLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UAnimCharacterMovementLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AnimationLocomotionLibraryRuntime.AnimCharacterMovementLibrary");
			return ret;
		}

		FVector PredictGroundMovementStopLocation(FVector& Velocity, bool bUseSeparateBrakingFriction, float BrakingFriction, float GroundFriction, float BrakingFrictionFactor, float BrakingDecelerationWalking); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7513DC980(relative to base address)
		FVector PredictGroundMovementPivotLocation(FVector& Acceleration, FVector& Velocity, float GroundFriction); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7513DC784(relative to base address)
	};


	// Class AnimationLocomotionLibraryRuntime.AnimDistanceMatchingLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UAnimDistanceMatchingLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AnimationLocomotionLibraryRuntime.AnimDistanceMatchingLibrary");
			return ret;
		}

		FSequencePlayerReference SetPlayrateToMatchSpeed(FSequencePlayerReference& SequencePlayer, float SpeedToMatch, FVector2D PlayRateClamp); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7513DCCE8(relative to base address)
		FSequenceEvaluatorReference DistanceMatchToTarget(FSequenceEvaluatorReference& SequenceEvaluator, float DistanceToTarget, FName DistanceCurveName); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7513DC55C(relative to base address)
		FSequenceEvaluatorReference AdvanceTimeByDistanceMatching(FAnimUpdateContext& UpdateContext, FSequenceEvaluatorReference& SequenceEvaluator, float DistanceTraveled, FName DistanceCurveName, FVector2D PlayRateClamp); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7513DC1B4(relative to base address)
	};

}
