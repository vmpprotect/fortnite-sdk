#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: DeployableTurretGameplayRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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
		unsigned char UnknownData02_5[0x2]; // 0x3BA(0x2) UNKNOWN PROPERTY
		FName InterruptibleCurveName; // 0x3BC(0x4)
		float InterruptibleCurveThreshold; // 0x3C0(0x4)
		FName TurnEndCurveName; // 0x3C4(0x4)
		float TurnEndCurveThreshold; // 0x3C8(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x3CC(0x4) UNKNOWN PROPERTY
		FRotator AimRotationInComponentSpace; // 0x3D0(0x18)
		FRotator SurfaceRotation; // 0x3E8(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DeployableTurretGameplayRuntime.DeployableTurretAnimInstance");
			return ret;
		}

		void SetNativeVariables(ABuildingGameplayActor OwningTurretBGA, FDeployableTurretBPAnimData& AnimData); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable 0x7FF414BE6FD8
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

		void FireAnalyticsEvent_DeployableTurretSessionEnd(UObject WorldContextObject, FUniqueNetIdRepl& TurretOwnerAccountId, TArray& Attributes); // Flags: Final|BlueprintAuthorityOnly|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414BE7358
		FVector DeployableTurret_GetAimLocationForTargetActor(AActor TargetActor, TMap& NonPlayerPawnTargetTagToZOffsetMap); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414BE7278
		void DeployableTurret_EnableSkeletalMeshComponentBudgeting(USkeletalMeshComponentBudgeted SkeletalMesh, bool bEnable); // Flags: Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 0x7FF414BE7198
		float DeployableTurret_CalculateTargetingLaserScale(AActor TurretActor, FTransform& CurrentTurretAimTransform, FVector& LaserOrigin, float MaxLaserRange, float DistMult); // Flags: Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414BE70B8
	};

}
