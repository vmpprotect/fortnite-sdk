#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: ItemizedPropSpawnerParentRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class ItemizedPropSpawnerParentRuntime.FortGameplayAbility_RangedPropSpawner
	// Inherited from UFortGameplayAbility_RangedWeapon -> UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0x8 (0xB88 - 0xB80)
	class UFortGameplayAbility_RangedPropSpawner : public UFortGameplayAbility_RangedWeapon	
	{
	public:
		bool bRevertAmmoNumberForRejection; // 0xB80(0x1)
		unsigned char UnknownData01_7[0x7]; // 0xB81(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ItemizedPropSpawnerParentRuntime.FortGameplayAbility_RangedPropSpawner");
			return ret;
		}

		void HandleAbilityRejectedOnClient(AFortWeapon SourceWeapon); // Flags: Event|Public|BlueprintEvent 0x7FF414CFE1F8
	};


	// Class ItemizedPropSpawnerParentRuntime.FortWeaponRangedPropSpawner
	// Inherited from AFortWeaponRanged -> AFortWeapon -> AActor -> UObject
	// Size: 0x8 (0x1DB0 - 0x1DA8)
	class AFortWeaponRangedPropSpawner : public AFortWeaponRanged	
	{
	public:
		bool bForceSyncAmmoForLocalPropSpawnerWeapon; // 0x1DA8(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x1DA9(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ItemizedPropSpawnerParentRuntime.FortWeaponRangedPropSpawner");
			return ret;
		}
	};


	// Class ItemizedPropSpawnerParentRuntime.ItemizedPropSpawnerAnimInstanceProxy
	// Inherited from UFortPlayerAnimInstanceProxy -> UFortBaseLayerAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x40 (0x1450 - 0x1410)
	class UItemizedPropSpawnerAnimInstanceProxy : public UFortPlayerAnimInstanceProxy	
	{
	public:
		bool bIsUpperBody; // 0x1410(0x1)
		bool bGrindRail; // 0x1411(0x1)
		bool bIsIceFireToSprint; // 0x1412(0x1)
		bool bIsIceFireToIdle; // 0x1413(0x1)
		bool bIsIceFireFallStart; // 0x1414(0x1)
		bool bIsIceFireFallEnd; // 0x1415(0x1)
		bool bIsIceFireFullBodyGround; // 0x1416(0x1)
		bool bIsIceFire; // 0x1417(0x1)
		bool bIsIceFireUpperBody; // 0x1418(0x1)
		bool bIsFromIceFireEndStates; // 0x1419(0x1)
		bool bIsTrFromFireEndIdle; // 0x141A(0x1)
		bool bIsTrFromFireEndLoco; // 0x141B(0x1)
		bool bIsFireExitUnexpectedly; // 0x141C(0x1)
		bool bIsFireEndExitUnexpectedly; // 0x141D(0x1)
		unsigned char UnknownData02_6[0x2]; // 0x141E(0x2) UNKNOWN PROPERTY
		FRotator UpperBodyTwistRotator; // 0x1420(0x18)
		float TurnEndThreshold; // 0x1438(0x4)
		float TurnEndLocoThreshold; // 0x143C(0x4)
		float PawnVelocityZThreshold; // 0x1440(0x4)
		float InterruptibleThreshold; // 0x1444(0x4)
		unsigned char UnknownData03_7[0x8]; // 0x1448(0x8) UNKNOWN PROPERTY

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
		TArray TrackedInstances; // 0xA0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ItemizedPropSpawnerParentRuntime.FortControllerComponent_ItemizedPropSpawner");
			return ret;
		}

		void RemoveOldestTrackedInstance(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414CFE578
		int32_t GetTrackedInstanceCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CFE498
		ABuildingGameplayActor GetOldestTrackedInstance(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CFE3B8
		void AddTrackedInstance(ABuildingGameplayActor TrackedInstance); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414CFE2D8
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

		void NativeUpdateTarget(FItemizedPropSpawnerWeaponData& WeaponData, FVector& outTargetLocation); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414CFE818
		bool NativeCheckSpawnValidity(FItemizedPropSpawnerWeaponData& WeaponData, FVector& InOutTargetLocation, float CameraYaw, bool bCheckForAllChunks, TArray& OutValidity, TArray& OutOffsets, TArray& OutActorsBeingUsedAsBase, EItemizedPropSpawnerTargetingFailedReason& OutFailureReason); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414CFE738
		void BuildPropDataForWeaponData(TArray& PropSpawnDataArray, TArray& PropRelativeTransforms, TMap& ChunkLocationToPropIndexMap); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 0x7FF414CFE658
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
		TWeakObjectPtr ParentChunk; // 0xBD8(0x8)
		TArray WallActorClassDenyList; // 0xBE0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ItemizedPropSpawnerParentRuntime.ItemizedPropSpawnerWallChunk");
			return ret;
		}

		bool NativeShouldDestroyOverlappedActor(AActor Actor, FGameplayTagContainer& TagsToDestroyOverlappedActor); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414CFEE38
		bool NativeShouldActorBlockSpawn(AActor Actor, bool bShouldLaunch, FGameplayTag& BlockTag); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414CFED58
		void NativeCheckOverlappedActor(FItemizedPropSpawnerOverlappedActorCheckData& CheckData, AActor OverlappedActor, TArray& InOutComponentsSetToIgnoreCollision, bool& bInOutShouldPlayImpulseCue, bool& bOutDestroyOverlappedActor, bool& bOutShouldWaitATick, bool& bOutDestroyProp); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414CFEC78
		bool IsWallAllowedToOverlapActor(AActor Actor); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414CFEB98
		void GetComponentsForOverlapCheck(TArray& OutComponents); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 0x7FF414CFEAB8
		void FindSupportingActors(TArray& InOutSupportingActors, bool bAllowWallsAsSupportingActors, TArray& ChunksInMyWall); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414CFE9D8
		void AttachActors(TArray& ChunksInMyWall, TArray& SupportingActors, AActor DirectBase); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414CFE8F8
	};

}
