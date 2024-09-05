#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: SupplyDropRadioRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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
		unsigned char UnknownData03_6[0x7]; // 0x991(0x7) UNKNOWN PROPERTY
		FGameplayTagContainer ForceOpenActorTags; // 0x998(0x20)
		FGameplayTagQuery IgnoreMovingCollisionWithActorTagQuery; // 0x9B8(0x48)
		float InterpRateToBalloonOpenedFallSpeed; // 0xA00(0x4)
		float DistanceFromOriginalSpawnLocForBalloonOpen; // 0xA04(0x4)
		ESupplyDropRadioBalloonState BalloonState; // 0xA08(0x1)
		unsigned char UnknownData04_6[0x7]; // 0xA09(0x7) UNKNOWN PROPERTY
		FHitResult WaterHitResult; // 0xA10(0xF8)
		bool bMoving; // 0xB08(0x1)
		unsigned char UnknownData05_6[0x3]; // 0xB09(0x3) UNKNOWN PROPERTY
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

		void UpdateGroundInfo(bool bValidBlock, FHitResult& MovementHitResult); // Flags: BlueprintAuthorityOnly|Event|Protected|HasOutParms|BlueprintEvent 0x7FF414D019F8
		void SetGravityMultiplier(float InGravityMultiplier); // Flags: Final|BlueprintAuthorityOnly|Native|Protected|BlueprintCallable 0x7FF414D01918
		void SetBalloonState(ESupplyDropRadioBalloonState InBalloonState); // Flags: Final|BlueprintAuthorityOnly|Native|Protected|BlueprintCallable 0x7FF414D01838
		void OpenSupplyDrop(); // Flags: BlueprintAuthorityOnly|Event|Protected|BlueprintCallable|BlueprintEvent 0x7FF414D01758
		void OnRep_DistanceFromOriginalSpawnLocForBalloonOpen(); // Flags: Event|Protected|BlueprintEvent 0x7FF414D01678
		void OnRep_BalloonState(); // Flags: Event|Protected|BlueprintEvent 0x7FF414D01598
		bool IsMoving(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414D014B8
		bool IsGrounded(); // Flags: Event|Protected|BlueprintEvent|Const 0x7FF414D013D8
		void HandleMoveIgnoredActorEndPlay(AActor EndPlayActor, TEnumAsByte Reason); // Flags: Final|Native|Protected 0x7FF414D012F8
		UBoxComponent GetRootCollisionComponent(); // Flags: Event|Protected|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x7FF414D01218
		AActor GetHighestAttachParent(AActor InActor); // Flags: Final|Native|Protected|BlueprintCallable|Const 0x7FF414D01138
		float GetGravityZ(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414D01058
		ESupplyDropRadioBalloonState GetBalloonState(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414D00F78
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

		void SetOwningActorNetCullDistance(float DistanceSquared); // Flags: Final|Native|Protected|BlueprintCallable|Const 0x7FF414D01AD8
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

		void StopCurrentConversation(AFortPlayerControllerGameplay PlayerController); // Flags: Final|Native|Static|Private|BlueprintCallable 0x7FF414D01C98
		void SetMoveShouldAbortConversation(AFortPlayerControllerGameplay PlayerController, bool bNewMoveAbortConversation); // Flags: Final|BlueprintCosmetic|Native|Static|Private|BlueprintCallable 0x7FF414D01BB8
	};

}
