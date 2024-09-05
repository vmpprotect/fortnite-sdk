#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: AscenderCodeRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

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

		void RemoveAscenders(bool bRemoveAscendersOn); // Flags: Final|Exec|Native|Public, Memory Exec: 0x7FF74C079284(relative to base address)
	};


	// Class AscenderCodeRuntime.FortPawnComponent_AscenderMontageProvider
	// Inherited from UPawnComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x20 (0xC0 - 0xA0)
	class UFortPawnComponent_AscenderMontageProvider : public UPawnComponent	
	{
	public:
		UAnimMontage* M_Ascending; // 0xA0(0x8)
		UAnimMontage* M_Descending; // 0xA8(0x8)
		UAnimMontage* F_Ascending; // 0xB0(0x8)
		UAnimMontage* F_Descending; // 0xB8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AscenderCodeRuntime.FortPawnComponent_AscenderMontageProvider");
			return ret;
		}

		UAnimMontage GetSuitableMontage(bool bAscending); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF7506847F4(relative to base address)
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
		unsigned char UnknownData00_6[0x3]; // 0xCB5(0x3) UNKNOWN PROPERTY
		float SplineOffsetFromGround; // 0xCB8(0x4)
		float CableOffsetFromSplineEnd; // 0xCBC(0x4)
		float SplineLength; // 0xCC0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xCC4(0x4) UNKNOWN PROPERTY
		UStaticMesh* SplineStaticMesh; // 0xCC8(0x8)
		TEnumAsByte<ESplineMeshAxis> MeshForwardAxis; // 0xCD0(0x1)
		bool bHandleReturning; // 0xCD1(0x1)
		unsigned char UnknownData02_6[0x2]; // 0xCD2(0x2) UNKNOWN PROPERTY
		float HandleReturnSpeed; // 0xCD4(0x4)
		bool bCableDropping; // 0xCD8(0x1)
		unsigned char UnknownData03_6[0x3]; // 0xCD9(0x3) UNKNOWN PROPERTY
		float CableDropSpeed; // 0xCDC(0x4)
		float YawRotationOffsetWhileUsingHandle; // 0xCE0(0x4)
		float YawRotationOffsetWhileSlidingDown; // 0xCE4(0x4)
		bool bUseComplexSplineCollision; // 0xCE8(0x1)
		unsigned char UnknownData04_6[0x3]; // 0xCE9(0x3) UNKNOWN PROPERTY
		float SimpleSplineCollisionRadius; // 0xCEC(0x4)
		float SimpleSplineCollisionHeightExtension; // 0xCF0(0x4)
		unsigned char UnknownData05_6[0x4]; // 0xCF4(0x4) UNKNOWN PROPERTY
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
		TWeakObjectPtr<UPrimitiveComponent*> CurrentInteractComponent; // 0xF40(0x8)
		TWeakObjectPtr<AFortPlayerPawn*> PawnUsingHandle; // 0xF48(0x8)
		TWeakObjectPtr<AFortPlayerPawn*> PreviousPawnUsingHandle; // 0xF50(0x8)
		USplineMeshComponent* SplineMesh; // 0xF58(0x8)
		UCapsuleComponent* SimpleSplineMeshCollision; // 0xF60(0x8)
		TWeakObjectPtr<ABuildingActor*> FloorActor; // 0xF68(0x8)
		TArray<TWeakObjectPtr> RotationLockedPawns; // 0xF70(0x10)
		unsigned char UnknownData06_6[0x68]; // 0xF80(0x68) UNKNOWN PROPERTY
		UFortLinkToActorComponent* LinkToActorComponent; // 0xFE8(0x8)
		UFortZiplineLinkComponent* ZiplineLinkComponent; // 0xFF0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AscenderCodeRuntime.FortAscenderZipline");
			return ret;
		}

		void SetupAscender(bool bFromConstruction, bool bFromReplication); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF7506849EC(relative to base address)
		void OnRep_TargetSplineEndLocation(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74959F4D0(relative to base address)
		void OnRep_PawnUsingHandle(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF747C9CAB4(relative to base address)
		void OnRep_InitialSplineEndLocation(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF748518ED8(relative to base address)
		void HandlePawnUsingHandleDied(AFortPawn* DeadPawn); // Flags: Final|Native|Protected, Memory Exec: 0x7FF75068496C(relative to base address)
		void HandleFloorActorHealthChanged(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF750684958(relative to base address)
		void HandleFloorActorDestroyed(AActor* Actor); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7506848D8(relative to base address)
		UPrimitiveComponent GetTopComponent(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		AFortPlayerPawn GetPawnUsingHandle(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF749417488(relative to base address)
		UPrimitiveComponent GetInteractComponentOverride(AFortPlayerPawn* InteractingPawn, UPrimitiveComponent* InteractComponent); // Flags: Native|Event|Public|BlueprintEvent|Const, Memory Exec: 0x7FF750684728(relative to base address)
		UPrimitiveComponent GetHandleComponent(); // Flags: Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_HandleUpdatedLoweringHandle(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_HandleUpdatedLoweringCable(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_HandleStoppedLoweringHandle(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_HandleStoppedLoweringCable(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_HandleStartedLoweringHandle(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_HandleStartedLoweringCable(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_HandlePlayerStoppedUsingHandle(AFortPlayerPawn* Player); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_HandlePlayerStartedUsingHandle(AFortPlayerPawn* Player); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ApplyStructureDamage(ABuildingSMActor* BuildingActor, AActor* DamageSource); // Flags: Event|Public|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
