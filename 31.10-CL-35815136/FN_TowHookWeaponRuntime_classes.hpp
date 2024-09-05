#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: TowHookWeaponRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class TowHookWeaponRuntime.FortMovementMode_TetheredRuntimeData
	// Inherited from UFortMovementMode_BaseExtRuntimeData -> UObject
	// Size: 0x170 (0x1B0 - 0x40)
	class UFortMovementMode_TetheredRuntimeData : public UFortMovementMode_BaseExtRuntimeData	
	{
	public:
		TWeakObjectPtr<AActor*> NetTetheredActor; // 0x40(0x8)
		unsigned char UnknownData00_6[0x48]; // 0x48(0x48) UNKNOWN PROPERTY
		FVector_NetQuantize NetLocalTetherLocation; // 0x90(0x18)
		unsigned char UnknownData01_6[0x18]; // 0xA8(0x18) UNKNOWN PROPERTY
		TWeakObjectPtr<AActor*> NetProjectile; // 0xC0(0x8)
		unsigned char UnknownData02_6[0x1]; // 0xC8(0x1) UNKNOWN PROPERTY
		bool bGrounded; // 0xC9(0x1)
		bool bMountingTarget; // 0xCA(0x1)
		bool bIsInWater; // 0xCB(0x1)
		unsigned char UnknownData03_6[0x1C]; // 0xCC(0x1C) UNKNOWN PROPERTY
		ETetherState State; // 0xE8(0x1)
		ETetherEndReason EndReason; // 0xE9(0x1)
		unsigned char UnknownData04_6[0xBA]; // 0xEA(0xBA) UNKNOWN PROPERTY
		float TimeAtSlowSpeed; // 0x1A4(0x4)
		unsigned char UnknownData05_7[0x8]; // 0x1A8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TowHookWeaponRuntime.FortMovementMode_TetheredRuntimeData");
			return ret;
		}
	};


	// Class TowHookWeaponRuntime.FortMovementMode_ExtLogicTethered
	// Inherited from UFortMovementMode_BaseExtLogic -> UObject
	// Size: 0x840 (0x960 - 0x120)
	class UFortMovementMode_ExtLogicTethered : public UFortMovementMode_BaseExtLogic	
	{
	public:
		FScalableFloat LocationTolerance; // 0x120(0x28)
		FScalableFloat DefaultTetherDistance; // 0x148(0x28)
		FScalableFloat MinTetherDistance; // 0x170(0x28)
		FScalableFloat AutoReelOutTetherDistance; // 0x198(0x28)
		FScalableFloat MaxTetherDistance; // 0x1C0(0x28)
		FScalableFloat TetherReelAccel; // 0x1E8(0x28)
		FScalableFloat PlayerLateralAccel; // 0x210(0x28)
		FScalableFloat PlayerLateralAccelMultiplierMinSpeed; // 0x238(0x28)
		FScalableFloat PlayerLateralAccelMultiplierMaxSpeed; // 0x260(0x28)
		FScalableFloat PlayerLateralAccelMultiplierMinMultiplier; // 0x288(0x28)
		FScalableFloat PlayerLateralAccelMultiplierMaxMultiplier; // 0x2B0(0x28)
		FScalableFloat GroundedFriction; // 0x2D8(0x28)
		FScalableFloat GroundedBrakingDeceleration; // 0x300(0x28)
		FScalableFloat MinGroundFrictionMultiplier; // 0x328(0x28)
		FScalableFloat MaxGroundFrictionMultiplier; // 0x350(0x28)
		FScalableFloat FrictionMultiplierDistance; // 0x378(0x28)
		FScalableFloat JumpVelocity; // 0x3A0(0x28)
		FScalableFloat TetherSnapDistance; // 0x3C8(0x28)
		FScalableFloat MaxStuckTime; // 0x3F0(0x28)
		FScalableFloat CanReelIn; // 0x418(0x28)
		FScalableFloat CanReelOut; // 0x440(0x28)
		FScalableFloat ReelInSpeed; // 0x468(0x28)
		FScalableFloat ReelOutSpeed; // 0x490(0x28)
		UCurveFloat* ReelInSpeedOverTimeMultiplier; // 0x4B8(0x8)
		UCurveFloat* ReelOutSpeedOverTimeMultiplier; // 0x4C0(0x8)
		FScalableFloat ReelInDeadZone; // 0x4C8(0x28)
		FScalableFloat ReelInCatchupMinSpeed; // 0x4F0(0x28)
		FScalableFloat ReelInCatchupSpeedMultiplier; // 0x518(0x28)
		FScalableFloat ReelInCatchupMinDistance; // 0x540(0x28)
		FScalableFloat CanMount; // 0x568(0x28)
		FScalableFloat MountMovementTolerance; // 0x590(0x28)
		FGameplayTagContainer MountAllowList; // 0x5B8(0x20)
		FGameplayTagContainer MountDenyList; // 0x5D8(0x20)
		FScalableFloat MountApexHeight; // 0x5F8(0x28)
		FScalableFloat TimeToMount; // 0x620(0x28)
		FVector MountTargetOffset; // 0x648(0x18)
		FScalableFloat MountingLateralVelocityLimiter; // 0x660(0x28)
		FScalableFloat MountingUpwardVelocityLimiter; // 0x688(0x28)
		FScalableFloat MountingDownwardVelocityLimiter; // 0x6B0(0x28)
		FScalableFloat WalkingSpeedThreshold; // 0x6D8(0x28)
		FScalableFloat WalkingTimeThreshold; // 0x700(0x28)
		FScalableFloat WalkingTetherSnapDistance; // 0x728(0x28)
		FScalableFloat TetheredActorMinReEnterVelocity; // 0x750(0x28)
		FGameplayTagContainer TetheredBlockedTags; // 0x778(0x20)
		FVector MountColliderBoundsExtentsBuffer; // 0x798(0x18)
		FScalableFloat WaterBobMinSpeed; // 0x7B0(0x28)
		FScalableFloat WaterGravityMultiplier; // 0x7D8(0x28)
		FScalableFloat WaterBobTargetImmersionDepth; // 0x800(0x28)
		FScalableFloat LedgeTraceBackwardsOffset; // 0x828(0x28)
		FScalableFloat LedgeTraceStartZOffset; // 0x850(0x28)
		FScalableFloat LedgeTraceEndZOffset; // 0x878(0x28)
		unsigned char UnknownData00_7[0xC0]; // 0x8A0(0xC0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TowHookWeaponRuntime.FortMovementMode_ExtLogicTethered");
			return ret;
		}

		bool ShouldReEnterTetheredMovement(UFortMovementMode_TetheredRuntimeData* TetheredRuntimeData); // Flags: Native|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF75158198C(relative to base address)
		bool ShouldActivateInTetheredMovement(UFortMovementMode_TetheredRuntimeData* TetheredRuntimeData); // Flags: Native|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7515818FC(relative to base address)
		bool IsAtSlowSpeed(UFortMovementMode_TetheredRuntimeData* TetheredRuntimeData, FVector& PawnVelocity, float DeltaTime); // Flags: Native|Event|Protected|HasOutParms|HasDefaults|BlueprintEvent|Const, Memory Exec: 0x7FF751581738(relative to base address)
		bool IsAnotherTetheredMMEActive(UFortMovementMode_TetheredRuntimeData* TetheredRuntimeData); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751581654(relative to base address)
		void HandleTetheredMovementEnded(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleTetheredMovementBegun(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void EventCallback_OnJumpInput(bool bPressed); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7515813E0(relative to base address)
		void BP_OnExtensionEnded(FMMERuntimeContext& RuntimeContext); // Flags: Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		UFortMovementMode_TetheredRuntimeData BP_GetRuntimeData(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75158136C(relative to base address)
	};


	// Class TowHookWeaponRuntime.FortPawnComponent_TetheredMovement
	// Inherited from UFortPawnComponent -> UPawnComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x98 (0x140 - 0xA8)
	class UFortPawnComponent_TetheredMovement : public UFortPawnComponent	
	{
	public:
		FMulticastInlineDelegate OnGroundedStateChanged; // 0xA8(0x10)
		FMulticastInlineDelegate OnWaterStateChanged; // 0xB8(0x10)
		UClass* TetheredMovementModeExtension; // 0xC8(0x8)
		UStaticMesh* TetherRopeMesh; // 0xD0(0x8)
		UMaterialInterface* TetherRopeMaterial; // 0xD8(0x8)
		FName PawnTetherRopeSocket; // 0xE0(0x4)
		FName RopeMaterialWiggleParameter; // 0xE4(0x4)
		float RopeMaterialWiggleValue; // 0xE8(0x4)
		float PawnTetherRopeZOffset; // 0xEC(0x4)
		FName ProjectileTetherRopeSocket; // 0xF0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0xF4(0x4) UNKNOWN PROPERTY
		FReplicatedRopeData ReplicatedRopeData; // 0xF8(0x28)
		unsigned char UnknownData01_6[0x8]; // 0x120(0x8) UNKNOWN PROPERTY
		UStaticMeshComponent* TetherRopeComp; // 0x128(0x8)
		unsigned char UnknownData02_7[0x10]; // 0x130(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TowHookWeaponRuntime.FortPawnComponent_TetheredMovement");
			return ret;
		}

		void StartTetheredMovement(FFortMovementMode_TetheredCreationData& CreationData); // Flags: BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751581A1C(relative to base address)
		void OnRep_ReplicatedRopeData(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7515818E8(relative to base address)
		void EndTetheredMovement(); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7515813CC(relative to base address)
		UFortMovementMode_TetheredRuntimeData BP_GetRuntimeData(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751581390(relative to base address)
	};


	// Class TowHookWeaponRuntime.TowHookCameraModifier
	// Inherited from UCameraModifier -> UObject
	// Size: 0x1A8 (0x1F0 - 0x48)
	class UTowHookCameraModifier : public UCameraModifier	
	{
	public:
		FScalableFloat CameraOffsetBlendInSeconds; // 0x48(0x28)
		FScalableFloat CameraOffsetBlendOutSeconds; // 0x70(0x28)
		FScalableFloat CameraFovBlendInSeconds; // 0x98(0x28)
		FScalableFloat CameraFovBlendOutSeconds; // 0xC0(0x28)
		FScalableFloat MinAdditionalFOV; // 0xE8(0x28)
		FScalableFloat MaxAdditionalFOV; // 0x110(0x28)
		FScalableFloat CameraOffsetX; // 0x138(0x28)
		FScalableFloat CameraOffsetY; // 0x160(0x28)
		FScalableFloat CameraOffsetZ; // 0x188(0x28)
		unsigned char UnknownData00_7[0x40]; // 0x1B0(0x40) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TowHookWeaponRuntime.TowHookCameraModifier");
			return ret;
		}

		void BlendOut(); // Flags: Final|Native|Private|BlueprintCallable, Memory Exec: 0x7FF7515813B4(relative to base address)
	};


	// Class TowHookWeaponRuntime.TowHookLayerAnimInstance
	// Inherited from UFortPlayerAnimInstanceProxy -> UFortBaseLayerAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x170 (0x1590 - 0x1420)
	class UTowHookLayerAnimInstance : public UFortPlayerAnimInstanceProxy	
	{
	public:
		bool bIsTethered; // 0x1420(0x1)
		bool bIsTetheredJumping; // 0x1421(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x1422(0x2) UNKNOWN PROPERTY
		float TetheredDirection; // 0x1424(0x4)
		float TetheredSpeed; // 0x1428(0x4)
		bool bIsRightLean; // 0x142C(0x1)
		bool bIsLeftLean; // 0x142D(0x1)
		bool bIsAnyLean; // 0x142E(0x1)
		unsigned char UnknownData01_6[0x1]; // 0x142F(0x1) UNKNOWN PROPERTY
		float NoisePlayRate; // 0x1430(0x4)
		bool bIsForward; // 0x1434(0x1)
		bool bIsBack; // 0x1435(0x1)
		bool bIsLeft; // 0x1436(0x1)
		bool bIsRight; // 0x1437(0x1)
		bool bIsYank; // 0x1438(0x1)
		bool bIsYankWeak; // 0x1439(0x1)
		bool bIsYankStrong; // 0x143A(0x1)
		unsigned char UnknownData02_6[0x1]; // 0x143B(0x1) UNKNOWN PROPERTY
		float TetherLateralAccel; // 0x143C(0x4)
		bool bIsAttachWait; // 0x1440(0x1)
		bool bIsMounting; // 0x1441(0x1)
		bool bIsAltMount; // 0x1442(0x1)
		unsigned char UnknownData03_6[0x1]; // 0x1443(0x1) UNKNOWN PROPERTY
		int32_t JumpPicker; // 0x1444(0x4)
		float LeanCurve; // 0x1448(0x4)
		bool bIsAdditiveLeans; // 0x144C(0x1)
		bool bIsBackwardLean; // 0x144D(0x1)
		bool bIsForwardLean; // 0x144E(0x1)
		unsigned char UnknownData04_6[0x1]; // 0x144F(0x1) UNKNOWN PROPERTY
		int32_t PoseShift; // 0x1450(0x4)
		int32_t NoisePicker; // 0x1454(0x4)
		bool bIsBackOrLeftOrRight; // 0x1458(0x1)
		unsigned char UnknownData05_6[0x3]; // 0x1459(0x3) UNKNOWN PROPERTY
		float YankInAirAlpha; // 0x145C(0x4)
		float AttachFullBodyAlpha; // 0x1460(0x4)
		bool bIsAttachSlow; // 0x1464(0x1)
		bool bIsAttachFast; // 0x1465(0x1)
		unsigned char UnknownData06_6[0x2]; // 0x1466(0x2) UNKNOWN PROPERTY
		FGameplayTag PlayerTetheredTagName; // 0x1468(0x4)
		FGameplayTag WaterTagName; // 0x146C(0x4)
		unsigned char UnknownData07_7[0x120]; // 0x1470(0x120) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TowHookWeaponRuntime.TowHookLayerAnimInstance");
			return ret;
		}
	};


	// Class TowHookWeaponRuntime.TowHookWeaponAnimInstance
	// Inherited from UAnimInstance -> UObject
	// Size: 0x18 (0x3D0 - 0x3B8)
	class UTowHookWeaponAnimInstance : public UAnimInstance	
	{
	public:
		bool bHasAmmo; // 0x3B8(0x1)
		unsigned char UnknownData00_7[0x17]; // 0x3B9(0x17) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TowHookWeaponRuntime.TowHookWeaponAnimInstance");
			return ret;
		}
	};


	// Class TowHookWeaponRuntime.TowHookWeaponBlueprintLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UTowHookWeaponBlueprintLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TowHookWeaponRuntime.TowHookWeaponBlueprintLibrary");
			return ret;
		}

		FTowHookWeaponTargetInfo GetTowHookWeaponTargetInfo(AFortPlayerPawn* SourcePlayerPawn, FTowHookWeaponTargetingConfig& TargetingConfig, float DrawDebugDuration); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751581460(relative to base address)
	};

}
