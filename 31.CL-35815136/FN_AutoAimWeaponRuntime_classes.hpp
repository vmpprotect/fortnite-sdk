#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: AutoAimWeaponRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class AutoAimWeaponRuntime.AutoAimWeaponKismetLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UAutoAimWeaponKismetLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AutoAimWeaponRuntime.AutoAimWeaponKismetLibrary");
			return ret;
		}

		UAutoAimWeaponPawnComponent GetAutoAimWeaponPawnComponent(AFortPawn* SourcePawn); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7506ABCBC(relative to base address)
		void FindBestAutoAimTarget(AFortPawn* OutTargetPawn, float& OutReticleDistance, AFortPlayerPawn* SourcePawn, float ReticleSize, float Range); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7506AB934(relative to base address)
		bool DoesAutoAimWeaponReticleIntersectTarget(float& OutReticleDistance, AFortPawn* SourcePawn, AFortPawn* TargetPawn, float ReticleSize); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7506AB70C(relative to base address)
		bool DoesAutoAimWeaponHaveLineOfSight(AFortPawn* SourcePawn, AFortPawn* TargetPawn); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF7506AB638(relative to base address)
	};


	// Class AutoAimWeaponRuntime.AutoAimWeaponPawnComponent
	// Inherited from UFortPawnComponent -> UPawnComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0xE0 (0x188 - 0xA8)
	class UAutoAimWeaponPawnComponent : public UFortPawnComponent	
	{
	public:
		FGameplayTagContainer UseSingleLocationTargetingPawnTags; // 0xA8(0x20)
		FGameplayTagContainer LowPriorityTargetPawnTags; // 0xC8(0x20)
		TArray<FAutoAimWeaponBoneSegmentData> MultiSocketTargetingBoneSegmentDatas; // 0xE8(0x10)
		FScalableFloat LockOnTimeReticleCenter; // 0xF8(0x28)
		FScalableFloat LockOnTimeReticleEdge; // 0x120(0x28)
		FScalableFloat MaxLockOns; // 0x148(0x28)
		float ProgressTowardNextLockOn; // 0x170(0x4)
		int32_t CurrentLockOnCount; // 0x174(0x4)
		float TargetToReticleDistanceNormalized; // 0x178(0x4)
		TWeakObjectPtr<AFortPawn*> LockOnTarget; // 0x17C(0x8)
		unsigned char UnknownData00_7[0x4]; // 0x184(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AutoAimWeaponRuntime.AutoAimWeaponPawnComponent");
			return ret;
		}

		float GetTargetToReticleDistanceNormalized(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D264AE8(relative to base address)
		bool GetLockOnTargetLocation(FVector& OutLockTargetLocation); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const, Memory Exec: 0x7FF7506ABD98(relative to base address)
		float GetLockOnProgress(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7506ABD70(relative to base address)
		int32_t GetCurrentLockOnCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74D0986F4(relative to base address)
	};

}
