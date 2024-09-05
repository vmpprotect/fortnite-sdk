#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: SupplyDropRadioRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio
	// Inherited from ABuildingGameplayActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x1F8 (0xB80 - 0x988)
	class ABuildingGameplayActorSupplyDropRadio : public ABuildingGameplayActor	
	{
	public:
		float MinimumMovingSpeedThresholdSq; // 0x988(0x4)
		float BalloonClosedGroundedFallSpeed; // 0x98C(0x4)
		bool bAutoOpen; // 0x990(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x991(0x7) UNKNOWN PROPERTY
		FGameplayTagContainer ForceOpenActorTags; // 0x998(0x20)
		FGameplayTagQuery IgnoreMovingCollisionWithActorTagQuery; // 0x9B8(0x48)
		float InterpRateToBalloonOpenedFallSpeed; // 0xA00(0x4)
		float DistanceFromOriginalSpawnLocForBalloonOpen; // 0xA04(0x4)
		ESupplyDropRadioBalloonState BalloonState; // 0xA08(0x1)
		unsigned char UnknownData01_6[0x7]; // 0xA09(0x7) UNKNOWN PROPERTY
		FHitResult WaterHitResult; // 0xA10(0xF8)
		bool bMoving; // 0xB08(0x1)
		unsigned char UnknownData02_6[0x3]; // 0xB09(0x3) UNKNOWN PROPERTY
		float FallSpeed; // 0xB0C(0x4)
		float BalloonOpenedFallSpeed; // 0xB10(0x4)
		float GravityMultiplier; // 0xB14(0x4)
		FVector ServerLocation; // 0xB18(0x18)
		float ClientLocationCorrectionMaxDistSqWhenBalloonDisabled; // 0xB30(0x4)
		float ClientLocationCorrectionMaxDistSqWhenBalloonEnabled; // 0xB34(0x4)
		FVector Velocity; // 0xB38(0x18)
		FVector PreviousFrameVelocity; // 0xB50(0x18)
		FVector OriginalServerSpawnLocation; // 0xB68(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio");
			return ret;
		}

		void UpdateGroundInfo(bool bValidBlock, FHitResult& MovementHitResult); // Flags: BlueprintAuthorityOnly|Event|Protected|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetGravityMultiplier(float InGravityMultiplier); // Flags: Final|BlueprintAuthorityOnly|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF74C42CE74(relative to base address)
		void SetBalloonState(ESupplyDropRadioBalloonState InBalloonState); // Flags: Final|BlueprintAuthorityOnly|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF74E2263E0(relative to base address)
		void OpenSupplyDrop(); // Flags: BlueprintAuthorityOnly|Event|Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRep_DistanceFromOriginalSpawnLocForBalloonOpen(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRep_BalloonState(); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool IsMoving(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7513DFE10(relative to base address)
		bool IsGrounded(); // Flags: Event|Protected|BlueprintEvent|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void HandleMoveIgnoredActorEndPlay(AActor* EndPlayActor, TEnumAsByte<EEndPlayReason> Reason); // Flags: Final|Native|Protected, Memory Exec: 0x7FF7513DFD4C(relative to base address)
		UBoxComponent GetRootCollisionComponent(); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF7471BBE78(relative to base address)
		AActor GetHighestAttachParent(AActor* InActor); // Flags: Final|Native|Protected|BlueprintCallable|Const, Memory Exec: 0x7FF7513DFCB8(relative to base address)
		float GetGravityZ(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7513DFC90(relative to base address)
		ESupplyDropRadioBalloonState GetBalloonState(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7513DFC78(relative to base address)
	};


	// Class SupplyDropRadioRuntime.FortSupplyDropRadioAttachActorComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UFortSupplyDropRadioAttachActorComponent : public UActorComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SupplyDropRadioRuntime.FortSupplyDropRadioAttachActorComponent");
			return ret;
		}

		void SetOwningActorNetCullDistance(float DistanceSquared); // Flags: Final|Native|Protected|BlueprintCallable|Const, Memory Exec: 0x7FF7513DFEDC(relative to base address)
	};


	// Class SupplyDropRadioRuntime.FortSupplyDropRadioBlueprintLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UFortSupplyDropRadioBlueprintLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SupplyDropRadioRuntime.FortSupplyDropRadioBlueprintLibrary");
			return ret;
		}

		void StopCurrentConversation(AFortPlayerControllerGameplay* PlayerController); // Flags: Final|Native|Static|Private|BlueprintCallable, Memory Exec: 0x7FF7513DFF5C(relative to base address)
		void SetMoveShouldAbortConversation(AFortPlayerControllerGameplay* PlayerController, bool bNewMoveAbortConversation); // Flags: Final|BlueprintCosmetic|Native|Static|Private|BlueprintCallable, Memory Exec: 0x7FF7513DFE28(relative to base address)
	};

}
