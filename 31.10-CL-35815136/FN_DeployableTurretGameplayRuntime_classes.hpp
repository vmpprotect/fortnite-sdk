#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: DeployableTurretGameplayRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class DeployableTurretGameplayRuntime.DeployableTurretAnimInstance
	// Inherited from UAnimInstance -> UObject
	// Size: 0x48 (0x400 - 0x3B8)
	class UDeployableTurretAnimInstance : public UAnimInstance	
	{
	public:
		bool bIsAttacking : 1; // 0x3B8:0(0x1)
		bool bIsWindUp : 1; // 0x3B8:1(0x1)
		bool bIsTracking : 1; // 0x3B8:2(0x1)
		bool bIsWindDown : 1; // 0x3B8:3(0x1)
		bool bIsDeactivated : 1; // 0x3B8:4(0x1)
		bool bIsScanning : 1; // 0x3B8:5(0x1)
		bool bIsAggro : 1; // 0x3B8:6(0x1)
		bool bFallAndDeployToDeactivated : 1; // 0x3B8:7(0x1)
		bool bFallAndDeployToScan : 1; // 0x3B9:0(0x1)
		bool bAggroToFire : 1; // 0x3B9:1(0x1)
		bool bInterruptibleCurveOverThreshold : 1; // 0x3B9:2(0x1)
		bool bTurnEndCurveOverThreshold : 1; // 0x3B9:3(0x1)
		unsigned char UnknownData00_5[0x2]; // 0x3BA(0x2) UNKNOWN PROPERTY
		FName InterruptibleCurveName; // 0x3BC(0x4)
		float InterruptibleCurveThreshold; // 0x3C0(0x4)
		FName TurnEndCurveName; // 0x3C4(0x4)
		float TurnEndCurveThreshold; // 0x3C8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x3CC(0x4) UNKNOWN PROPERTY
		FRotator AimRotationInComponentSpace; // 0x3D0(0x18)
		FRotator SurfaceRotation; // 0x3E8(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DeployableTurretGameplayRuntime.DeployableTurretAnimInstance");
			return ret;
		}

		void SetNativeVariables(ABuildingGameplayActor* OwningTurretBGA, FDeployableTurretBPAnimData& AnimData); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7507514AC(relative to base address)
	};


	// Class DeployableTurretGameplayRuntime.DeployableTurretLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UDeployableTurretLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DeployableTurretGameplayRuntime.DeployableTurretLibrary");
			return ret;
		}

		void FireAnalyticsEvent_DeployableTurretSessionEnd(UObject* WorldContextObject, FUniqueNetIdRepl& TurretOwnerAccountId, TArray<FFortAnalyticsEventAttribute>& Attributes); // Flags: Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF750751340(relative to base address)
		FVector DeployableTurret_GetAimLocationForTargetActor(AActor* TargetActor, TMap<FGameplayTag, FScalableFloat>& NonPlayerPawnTargetTagToZOffsetMap); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750750F34(relative to base address)
		void DeployableTurret_EnableSkeletalMeshComponentBudgeting(USkeletalMeshComponentBudgeted* SkeletalMesh, bool bEnable); // Flags: Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF750750E3C(relative to base address)
		float DeployableTurret_CalculateTargetingLaserScale(AActor* TurretActor, FTransform& CurrentTurretAimTransform, FVector& LaserOrigin, float MaxLaserRange, float DistMult); // Flags: Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF750750B64(relative to base address)
	};

}
