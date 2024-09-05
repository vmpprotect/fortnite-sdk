#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: Macros
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class /Game/Macros/Abilities/AbilityFunctions.AbilityFunctions_C
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UAbilityFunctions_C : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Macros/Abilities/AbilityFunctions.AbilityFunctions_C");
			return ret;
		}

		void GetDistanceFromOwnerToAITarget(UFortGameplayAbility ability, UObject __WorldContext, double& Distance); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D82A98A00
		double CalculateRootMotionDuration(double Distance, double Speed, bool ClampMinMax?, double MinDuration, double MaxDuration, UObject __WorldContext); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D82A99000
		void ApplySlowFall(double SlowFallDuration, UFortGameplayAbility SelfGameplayAbilityReference, UClass GameplayEffect, UObject __WorldContext, FActiveGameplayEffectHandle& EffectSpecHandle); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D82A99100
		void GetDistanceSquaredBetweenActors(AActor Actor 1, AActor Actor 2, UObject __WorldContext, double& Distance Squared); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D82A98900
		void GetDistanceBetweenActors(AActor Actor1, AActor Actor2, UObject __WorldContext, double& Distance); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D82A98B00
		void GetPawnFromPlayerStateZone(AActor InActor, UObject __WorldContext, AFortPlayerPawn& OutPawn, bool& PawnReturned); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D82A98800
		void EvaluatePerkTierBalanceValue(FScalableFloat T01 Balance Value, FScalableFloat T02 Balance Value, bool Owns T02, bool Should Override T01, UObject __WorldContext, FScalableFloat& Balance Value); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D82A98D00
		void GetRangeFromGameplayEffectContainer(FFortGameplayEffectContainer GE Container, int32_t Target Selection List Index, double At Level, UObject __WorldContext, double& Range); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D82A98600
		void GetTotalGameplayEffectCount(TArray& EffectsToCount, UAbilitySystemComponent AbilitySystemComponent, UObject __WorldContext, int32_t& FinalEffectCount); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D82A9C600
		void GetAngleBetweenTwoVectors(FVector VectorA, FVector VectorB, UObject __WorldContext, double& Angle (Degrees)); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D82A98C00
		void GetRangeFromGameplayEffectContainerSpec(FFortGameplayEffectContainerSpec GE Container Spec, int32_t Target Selection List Index, double At Level, UObject __WorldContext, double& Range); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D82A98500
		void GetProjectedTeleportLocation(AActor Actor, double MovementDistance, UObject __WorldContext, FVector& TargetLocation); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D82A98700
		void ConvertRangeToTiles(double InRange, UObject __WorldContext, double& OutTile); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 0x15D82A98F00
		void SetArrayOfHitActors(FGameplayAbilityTargetDataHandle TargetData, TArray& ArrayToSet, UObject __WorldContext); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D82A9C500
		void DoNOTUse-BuildArrayOfHitActors(FGameplayAbilityTargetDataHandle TargetData, UObject __WorldContext, TArray& HitActors); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D82A98E00
	};

}
