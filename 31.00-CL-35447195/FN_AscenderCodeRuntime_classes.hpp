#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: AscenderCodeRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class AscenderCodeRuntime.FortCheatManager_AscenderZipline
	// Inherited from UChildCheatManager -> UCheatManagerExtension -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortCheatManager_AscenderZipline : public UChildCheatManager	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AscenderCodeRuntime.FortCheatManager_AscenderZipline");
			return ret;
		}

		void RemoveAscenders(bool bRemoveAscendersOn); // Flags: Final|Exec|Native|Public 0x7FF414BD4738
	};


	// Class AscenderCodeRuntime.FortPawnComponent_AscenderMontageProvider
	// Inherited from UPawnComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x20 (0xC0 - 0xA0)
	class UFortPawnComponent_AscenderMontageProvider : public UPawnComponent	
	{
	public:
		UAnimMontage M_Ascending; // 0xA0(0x8)
		UAnimMontage M_Descending; // 0xA8(0x8)
		UAnimMontage F_Ascending; // 0xB0(0x8)
		UAnimMontage F_Descending; // 0xB8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AscenderCodeRuntime.FortPawnComponent_AscenderMontageProvider");
			return ret;
		}

		UAnimMontage GetSuitableMontage(bool bAscending); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure 0x7FF414BD4818
	};


	// Class AscenderCodeRuntime.FortAscenderZipline
	// Inherited from AFortAthenaSplineZipline -> AFortAthenaZipline -> AFortAthenaZiplineBase -> ABuildingGameplayActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x358 (0xFF8 - 0xCA0)
	class AFortAscenderZipline : public AFortAthenaSplineZipline	
	{
	public:
		FMulticastInlineDelegate OnAscenderSetupComplete; // 0xCA0(0x10)
		FName SplineTopAttachPointName; // 0xCB0(0x4)
		bool bAutoFindSplineEndLocation; // 0xCB4(0x1)
		unsigned char UnknownData07_6[0x3]; // 0xCB5(0x3) UNKNOWN PROPERTY
		float SplineOffsetFromGround; // 0xCB8(0x4)
		float CableOffsetFromSplineEnd; // 0xCBC(0x4)
		float SplineLength; // 0xCC0(0x4)
		unsigned char UnknownData08_6[0x4]; // 0xCC4(0x4) UNKNOWN PROPERTY
		UStaticMesh SplineStaticMesh; // 0xCC8(0x8)
		TEnumAsByte MeshForwardAxis; // 0xCD0(0x1)
		bool bHandleReturning; // 0xCD1(0x1)
		unsigned char UnknownData09_6[0x2]; // 0xCD2(0x2) UNKNOWN PROPERTY
		float HandleReturnSpeed; // 0xCD4(0x4)
		bool bCableDropping; // 0xCD8(0x1)
		unsigned char UnknownData10_6[0x3]; // 0xCD9(0x3) UNKNOWN PROPERTY
		float CableDropSpeed; // 0xCDC(0x4)
		float YawRotationOffsetWhileUsingHandle; // 0xCE0(0x4)
		float YawRotationOffsetWhileSlidingDown; // 0xCE4(0x4)
		bool bUseComplexSplineCollision; // 0xCE8(0x1)
		unsigned char UnknownData11_6[0x3]; // 0xCE9(0x3) UNKNOWN PROPERTY
		float SimpleSplineCollisionRadius; // 0xCEC(0x4)
		float SimpleSplineCollisionHeightExtension; // 0xCF0(0x4)
		unsigned char UnknownData12_6[0x4]; // 0xCF4(0x4) UNKNOWN PROPERTY
		FScalableFloat DescendMinDistanceFromBottom; // 0xCF8(0x28)
		FScalableFloat AscendReachedEndHorizontalLaunchSpeed; // 0xD20(0x28)
		FScalableFloat AscendReachedEndVerticalLaunchSpeed; // 0xD48(0x28)
		FScalableFloat AscendJumpedOffHorizontalLaunchSpeed; // 0xD70(0x28)
		FScalableFloat AscendJumpedOffVerticalLaunchSpeed; // 0xD98(0x28)
		FScalableFloat DescendReachedEndHorizontalLaunchSpeed; // 0xDC0(0x28)
		FScalableFloat DescendReachedEndVerticalLaunchSpeed; // 0xDE8(0x28)
		FScalableFloat DescendJumpedOffHorizontalLaunchSpeed; // 0xE10(0x28)
		FScalableFloat DescendJumpedOffVerticalLaunchSpeed; // 0xE38(0x28)
		FScalableFloat HandleActorHitPlayerHorizontalLaunchSpeed; // 0xE60(0x28)
		FScalableFloat HandleActorHitPlayerVerticalLaunchSpeed; // 0xE88(0x28)
		FVector HandleDestroyBuildingsOverlapExtents; // 0xEB0(0x18)
		FVector PlayerDestroyBuildingsOverlapExtents; // 0xEC8(0x18)
		FVector InitialSplineEndLocation; // 0xEE0(0x18)
		FVector CurrentSplineEndLocation; // 0xEF8(0x18)
		FVector TargetSplineEndLocation; // 0xF10(0x18)
		FVector CurrentHandleLocation; // 0xF28(0x18)
		TWeakObjectPtr CurrentInteractComponent; // 0xF40(0x8)
		TWeakObjectPtr PawnUsingHandle; // 0xF48(0x8)
		TWeakObjectPtr PreviousPawnUsingHandle; // 0xF50(0x8)
		USplineMeshComponent SplineMesh; // 0xF58(0x8)
		UCapsuleComponent SimpleSplineMeshCollision; // 0xF60(0x8)
		TWeakObjectPtr FloorActor; // 0xF68(0x8)
		TArray RotationLockedPawns; // 0xF70(0x10)
		unsigned char UnknownData13_6[0x68]; // 0xF80(0x68) UNKNOWN PROPERTY
		UFortLinkToActorComponent LinkToActorComponent; // 0xFE8(0x8)
		UFortZiplineLinkComponent ZiplineLinkComponent; // 0xFF0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AscenderCodeRuntime.FortAscenderZipline");
			return ret;
		}

		void SetupAscender(bool bFromConstruction, bool bFromReplication); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414BD5998
		void OnRep_TargetSplineEndLocation(); // Flags: Final|Native|Protected 0x7FF414BD58B8
		void OnRep_PawnUsingHandle(); // Flags: Final|Native|Protected 0x7FF414BD57D8
		void OnRep_InitialSplineEndLocation(); // Flags: Final|Native|Protected 0x7FF414BD56F8
		void HandlePawnUsingHandleDied(AFortPawn DeadPawn); // Flags: Final|Native|Protected 0x7FF414BD5618
		void HandleFloorActorHealthChanged(); // Flags: Final|Native|Protected 0x7FF414BD5538
		void HandleFloorActorDestroyed(AActor Actor); // Flags: Final|Native|Protected 0x7FF414BD5458
		UPrimitiveComponent GetTopComponent(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x7FF414BD5378
		AFortPlayerPawn GetPawnUsingHandle(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414BD5298
		UPrimitiveComponent GetInteractComponentOverride(AFortPlayerPawn InteractingPawn, UPrimitiveComponent InteractComponent); // Flags: Native|Event|Public|BlueprintEvent|Const 0x7FF414BD51B8
		UPrimitiveComponent GetHandleComponent(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x7FF414BD50D8
		void BP_HandleUpdatedLoweringHandle(); // Flags: Event|Public|BlueprintEvent 0x7FF414BD4FF8
		void BP_HandleUpdatedLoweringCable(); // Flags: Event|Public|BlueprintEvent 0x7FF414BD4F18
		void BP_HandleStoppedLoweringHandle(); // Flags: Event|Public|BlueprintEvent 0x7FF414BD4E38
		void BP_HandleStoppedLoweringCable(); // Flags: Event|Public|BlueprintEvent 0x7FF414BD4D58
		void BP_HandleStartedLoweringHandle(); // Flags: Event|Public|BlueprintEvent 0x7FF414BD4C78
		void BP_HandleStartedLoweringCable(); // Flags: Event|Public|BlueprintEvent 0x7FF414BD4B98
		void BP_HandlePlayerStoppedUsingHandle(AFortPlayerPawn Player); // Flags: Event|Public|BlueprintEvent 0x7FF414BD4AB8
		void BP_HandlePlayerStartedUsingHandle(AFortPlayerPawn Player); // Flags: Event|Public|BlueprintEvent 0x7FF414BD49D8
		void ApplyStructureDamage(ABuildingSMActor BuildingActor, AActor DamageSource); // Flags: Event|Public|BlueprintCallable|BlueprintEvent|Const 0x7FF414BD48F8
	};

}
