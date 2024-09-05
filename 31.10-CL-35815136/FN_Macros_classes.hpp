#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: Macros
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

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

		void GetDistanceFromOwnerToAITarget(UFortGameplayAbility* ability, UObject* __WorldContext, double& Distance); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		double CalculateRootMotionDuration(double Distance, double Speed, bool ClampMinMax?, double MinDuration, double MaxDuration, UObject* __WorldContext); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ApplySlowFall(double SlowFallDuration, UFortGameplayAbility* SelfGameplayAbilityReference, UClass* GameplayEffect, UObject* __WorldContext, FActiveGameplayEffectHandle& EffectSpecHandle); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetDistanceSquaredBetweenActors(AActor* Actor 1, AActor* Actor 2, UObject* __WorldContext, double& Distance Squared); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetDistanceBetweenActors(AActor* Actor1, AActor* Actor2, UObject* __WorldContext, double& Distance); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetPawnFromPlayerStateZone(AActor* InActor, UObject* __WorldContext, AFortPlayerPawn* OutPawn, bool& PawnReturned); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void EvaluatePerkTierBalanceValue(FScalableFloat T01 Balance Value, FScalableFloat T02 Balance Value, bool Owns T02, bool Should Override T01, UObject* __WorldContext, FScalableFloat& Balance Value); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetRangeFromGameplayEffectContainer(FFortGameplayEffectContainer GE Container, int32_t Target Selection List Index, double At Level, UObject* __WorldContext, double& Range); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetTotalGameplayEffectCount(TArray<UClass*>& EffectsToCount, UAbilitySystemComponent* AbilitySystemComponent, UObject* __WorldContext, int32_t& FinalEffectCount); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetAngleBetweenTwoVectors(FVector VectorA, FVector VectorB, UObject* __WorldContext, double& Angle (Degrees)); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetRangeFromGameplayEffectContainerSpec(FFortGameplayEffectContainerSpec GE Container Spec, int32_t Target Selection List Index, double At Level, UObject* __WorldContext, double& Range); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GetProjectedTeleportLocation(AActor* Actor, double MovementDistance, UObject* __WorldContext, FVector& TargetLocation); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ConvertRangeToTiles(double InRange, UObject* __WorldContext, double& OutTile); // Flags: Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetArrayOfHitActors(FGameplayAbilityTargetDataHandle TargetData, TArray<AActor*>& ArrayToSet, UObject* __WorldContext); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void DoNOTUse-BuildArrayOfHitActors(FGameplayAbilityTargetDataHandle TargetData, UObject* __WorldContext, TArray<AActor*>& HitActors); // Flags: Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
