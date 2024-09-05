#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: AnimationLocomotionLibraryRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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

		FVector PredictGroundMovementStopLocation(FVector& Velocity, bool bUseSeparateBrakingFriction, float BrakingFriction, float GroundFriction, float BrakingFrictionFactor, float BrakingDecelerationWalking); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414D00BF8
		FVector PredictGroundMovementPivotLocation(FVector& Acceleration, FVector& Velocity, float GroundFriction); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414D00B18
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

		FSequencePlayerReference SetPlayrateToMatchSpeed(FSequencePlayerReference& SequencePlayer, float SpeedToMatch, FVector2D PlayRateClamp); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414D00E98
		FSequenceEvaluatorReference DistanceMatchToTarget(FSequenceEvaluatorReference& SequenceEvaluator, float DistanceToTarget, FName DistanceCurveName); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414D00DB8
		FSequenceEvaluatorReference AdvanceTimeByDistanceMatching(FAnimUpdateContext& UpdateContext, FSequenceEvaluatorReference& SequenceEvaluator, float DistanceTraveled, FName DistanceCurveName, FVector2D PlayRateClamp); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414D00CD8
	};

}
