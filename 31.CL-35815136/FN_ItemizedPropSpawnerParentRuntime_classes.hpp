#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: ItemizedPropSpawnerParentRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class ItemizedPropSpawnerParentRuntime.FortGameplayAbility_RangedPropSpawner
	// Inherited from UFortGameplayAbility_RangedWeapon -> UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0x8 (0xB88 - 0xB80)
	class UFortGameplayAbility_RangedPropSpawner : public UFortGameplayAbility_RangedWeapon	
	{
	public:
		bool bRevertAmmoNumberForRejection; // 0xB80(0x1)
		unsigned char UnknownData00_7[0x7]; // 0xB81(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ItemizedPropSpawnerParentRuntime.FortGameplayAbility_RangedPropSpawner");
			return ret;
		}

		void HandleAbilityRejectedOnClient(AFortWeapon* SourceWeapon); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class ItemizedPropSpawnerParentRuntime.FortWeaponRangedPropSpawner
	// Inherited from AFortWeaponRanged -> AFortWeapon -> AActor -> UObject
	// Size: 0x8 (0x1DD0 - 0x1DC8)
	class AFortWeaponRangedPropSpawner : public AFortWeaponRanged	
	{
	public:
		bool bForceSyncAmmoForLocalPropSpawnerWeapon; // 0x1DC8(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x1DC9(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ItemizedPropSpawnerParentRuntime.FortWeaponRangedPropSpawner");
			return ret;
		}
	};


	// Class ItemizedPropSpawnerParentRuntime.ItemizedPropSpawnerAnimInstanceProxy
	// Inherited from UFortPlayerAnimInstanceProxy -> UFortBaseLayerAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x40 (0x1460 - 0x1420)
	class UItemizedPropSpawnerAnimInstanceProxy : public UFortPlayerAnimInstanceProxy	
	{
	public:
		bool bIsUpperBody; // 0x1420(0x1)
		bool bGrindRail; // 0x1421(0x1)
		bool bIsIceFireToSprint; // 0x1422(0x1)
		bool bIsIceFireToIdle; // 0x1423(0x1)
		bool bIsIceFireFallStart; // 0x1424(0x1)
		bool bIsIceFireFallEnd; // 0x1425(0x1)
		bool bIsIceFireFullBodyGround; // 0x1426(0x1)
		bool bIsIceFire; // 0x1427(0x1)
		bool bIsIceFireUpperBody; // 0x1428(0x1)
		bool bIsFromIceFireEndStates; // 0x1429(0x1)
		bool bIsTrFromFireEndIdle; // 0x142A(0x1)
		bool bIsTrFromFireEndLoco; // 0x142B(0x1)
		bool bIsFireExitUnexpectedly; // 0x142C(0x1)
		bool bIsFireEndExitUnexpectedly; // 0x142D(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x142E(0x2) UNKNOWN PROPERTY
		FRotator UpperBodyTwistRotator; // 0x1430(0x18)
		float TurnEndThreshold; // 0x1448(0x4)
		float TurnEndLocoThreshold; // 0x144C(0x4)
		float PawnVelocityZThreshold; // 0x1450(0x4)
		float InterruptibleThreshold; // 0x1454(0x4)
		unsigned char UnknownData01_7[0x8]; // 0x1458(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ItemizedPropSpawnerParentRuntime.ItemizedPropSpawnerAnimInstanceProxy");
			return ret;
		}
	};


	// Class ItemizedPropSpawnerParentRuntime.FortControllerComponent_ItemizedPropSpawner
	// Inherited from UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x10 (0xB0 - 0xA0)
	class UFortControllerComponent_ItemizedPropSpawner : public UControllerComponent	
	{
	public:
		TArray<TWeakObjectPtr> TrackedInstances; // 0xA0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ItemizedPropSpawnerParentRuntime.FortControllerComponent_ItemizedPropSpawner");
			return ret;
		}

		void RemoveOldestTrackedInstance(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7513B9B90(relative to base address)
		int32_t GetTrackedInstanceCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C0DFE78(relative to base address)
		ABuildingGameplayActor GetOldestTrackedInstance(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7513B893C(relative to base address)
		void AddTrackedInstance(ABuildingGameplayActor* TrackedInstance); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7513B831C(relative to base address)
	};


	// Class ItemizedPropSpawnerParentRuntime.ItemizedPropSpawnerFunctionLibraryNative
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UItemizedPropSpawnerFunctionLibraryNative : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ItemizedPropSpawnerParentRuntime.ItemizedPropSpawnerFunctionLibraryNative");
			return ret;
		}

		bool NativeUpdateTarget(FItemizedPropSpawnerWeaponData& WeaponData, FVector& outTargetLocation, EItemizedPropSpawnerTargetingFailedReason& OutFailureReason, TArray<bool>& OutValidity); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7513B993C(relative to base address)
		bool NativeCheckSpawnValidity(FItemizedPropSpawnerWeaponData& WeaponData, FVector& InOutTargetLocation, float CameraYaw, bool bCheckForAllChunks, TArray<bool>& OutValidity, TArray<double>& OutOffsets, TArray<AActor*>& OutActorsBeingUsedAsBase, EItemizedPropSpawnerTargetingFailedReason& OutFailureReason); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7513B9284(relative to base address)
		void BuildPropDataForWeaponData(TArray<FNativeItemizedPropSpawner_PropSpawnData>& PropSpawnDataArray, TArray<FTransform>& PropRelativeTransforms, TMap<EItemizedPropSpawnerChunkLocation, int32_t>& ChunkLocationToPropIndexMap); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7513B8628(relative to base address)
	};


	// Class ItemizedPropSpawnerParentRuntime.ItemizedPropSpawnerMultiPropSpawner
	// Inherited from ABuildingGameplayActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0x988 - 0x988)
	class AItemizedPropSpawnerMultiPropSpawner : public ABuildingGameplayActor	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ItemizedPropSpawnerParentRuntime.ItemizedPropSpawnerMultiPropSpawner");
			return ret;
		}
	};


	// Class ItemizedPropSpawnerParentRuntime.ItemizedPropSpawnerWallChunk
	// Inherited from ABuildingProp -> ABuildingTimeOfDayLights -> ABuildingAutoNav -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x18 (0xBF0 - 0xBD8)
	class AItemizedPropSpawnerWallChunk : public ABuildingProp	
	{
	public:
		TWeakObjectPtr<AItemizedPropSpawnerWallChunk*> ParentChunk; // 0xBD8(0x8)
		TArray<TWeakObjectPtr> WallActorClassDenyList; // 0xBE0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ItemizedPropSpawnerParentRuntime.ItemizedPropSpawnerWallChunk");
			return ret;
		}

		bool NativeShouldDestroyOverlappedActor(AActor* Actor, FGameplayTagContainer& TagsToDestroyOverlappedActor); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7513B9814(relative to base address)
		bool NativeShouldActorBlockSpawn(AActor* Actor, bool bShouldLaunch, FGameplayTag& BlockTag); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7513B96FC(relative to base address)
		void NativeCheckOverlappedActor(FItemizedPropSpawnerOverlappedActorCheckData& CheckData, AActor* OverlappedActor, TArray<UCapsuleComponent*>& InOutComponentsSetToIgnoreCollision, bool& bInOutShouldPlayImpulseCue, bool& bOutDestroyOverlappedActor, bool& bOutShouldWaitATick, bool& bOutDestroyProp); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7513B8A44(relative to base address)
		bool IsWallAllowedToOverlapActor(AActor* Actor); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7513B8974(relative to base address)
		void GetComponentsForOverlapCheck(TArray<UPrimitiveComponent*>& OutComponents); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void FindSupportingActors(TArray<AActor*>& InOutSupportingActors, bool bAllowWallsAsSupportingActors, TArray<AItemizedPropSpawnerWallChunk*>& ChunksInMyWall); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7513B87C8(relative to base address)
		void AttachActors(TArray<AItemizedPropSpawnerWallChunk*>& ChunksInMyWall, TArray<AActor*>& SupportingActors, AActor* DirectBase); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7513B844C(relative to base address)
	};

}
