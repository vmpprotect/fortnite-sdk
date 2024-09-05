#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: MotherGameplayRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class MotherGameplayRuntime.GravityGunTargetTrackingComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x1C8 (0x268 - 0xA0)
	class UGravityGunTargetTrackingComponent : public UActorComponent	
	{
	public:
		FScalableFloat AllowLargeObjects; // 0xA0(0x28)
		FScalableFloat AllowMultipleGrabbers; // 0xC8(0x28)
		FScalableFloat AllowVehicles; // 0xF0(0x28)
		FScalableFloat AllowPickups; // 0x118(0x28)
		FScalableFloat AllowProjectiles; // 0x140(0x28)
		FScalableFloat AllowForay; // 0x168(0x28)
		FScalableFloat AllowWhileInVehicle; // 0x190(0x28)
		FName GrabbedByGravityGunTagName; // 0x1B8(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x1BC(0x4) UNKNOWN PROPERTY
		FGameplayTagContainer InvalidTargetTags; // 0x1C0(0x20)
		FGameplayTagContainer TargetIsPlayerTag; // 0x1E0(0x20)
		FGameplayTagContainer TargetIsAlreadyGrabbedTag; // 0x200(0x20)
		FGameplayTagContainer TargetIsOwnVehicleTag; // 0x220(0x20)
		FMulticastInlineDelegate FoundTargetDelegate; // 0x240(0x10)
		FMulticastInlineDelegate DeactivateReticleDelegate; // 0x250(0x10)
		unsigned char UnknownData01_7[0x8]; // 0x260(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MotherGameplayRuntime.GravityGunTargetTrackingComponent");
			return ret;
		}

		bool IsValidTarget(AActor* OwningPlayer, AActor* PotentialTarget, FGameplayTagContainer& ReasonForFailure); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7512A9E84(relative to base address)
		bool FindTargetProjectile(AActor* OwningPlayer, FVector& TraceStart, FVector& TraceEnd, float TargetingRadius); // Flags: Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7512A9888(relative to base address)
		void FindTargetActor(AActor* OwningPlayer, FVector& TraceStart, FVector& TraceEnd); // Flags: Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7512A96EC(relative to base address)
	};


	// Class MotherGameplayRuntime.FortCabbageIglooVehicle
	// Inherited from AFortOctopusVehicle -> AFortAthenaSKVehicle -> AFortAthenaVehicle -> AFortPhysicsPawn -> APawn -> AActor -> UObject
	// Size: 0x0 (0x2C60 - 0x2C60)
	class AFortCabbageIglooVehicle : public AFortOctopusVehicle	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MotherGameplayRuntime.FortCabbageIglooVehicle");
			return ret;
		}
	};


	// Class MotherGameplayRuntime.FortBaseAnimInstance_CageSaddle
	// Inherited from UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x188 (0x630 - 0x4A8)
	class UFortBaseAnimInstance_CageSaddle : public UFortBaseAnimInstance	
	{
	public:
		AFortSphericalVehicle* AsFortSphericalVehicle; // 0x4A8(0x8)
		bool bIsOnGround; // 0x4B0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x4B1(0x3) UNKNOWN PROPERTY
		float RemappedPitch; // 0x4B4(0x4)
		float CurrentRoll; // 0x4B8(0x4)
		float LockedRoll; // 0x4BC(0x4)
		bool bHeadShouldBend; // 0x4C0(0x1)
		bool bFootShouldBend; // 0x4C1(0x1)
		unsigned char UnknownData01_6[0x6]; // 0x4C2(0x6) UNKNOWN PROPERTY
		FVector BodyGroundOffset; // 0x4C8(0x18)
		FVector2D MinClampPitchInRange; // 0x4E0(0x10)
		FVector2D MinClampPitchOutRange; // 0x4F0(0x10)
		FVector2D MaxClampPitchInRange; // 0x500(0x10)
		FVector2D MaxClampPitchOutRange; // 0x510(0x10)
		float HeadAlphaInterpSpeed; // 0x520(0x4)
		unsigned char UnknownData02_7[0x10C]; // 0x524(0x10C) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MotherGameplayRuntime.FortBaseAnimInstance_CageSaddle");
			return ret;
		}
	};


	// Class MotherGameplayRuntime.FortGameplayCueNotifyLoop_Goop
	// Inherited from AFortGameplayCueNotify_Loop -> AFortGameplayCueNotify_Actor -> AGameplayCueNotify_Actor -> AActor -> UObject
	// Size: 0x40 (0x9F0 - 0x9B0)
	class AFortGameplayCueNotifyLoop_Goop : public AFortGameplayCueNotify_Loop	
	{
	public:
		FName SpeedParamName; // 0x9B0(0x4)
		FName IsFallingParamName; // 0x9B4(0x4)
		FGoopAudioMapRangeClamped SpeedMapRangeClamped; // 0x9B8(0x20)
		float InterpSpeed; // 0x9D8(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x9DC(0x4) UNKNOWN PROPERTY
		UAudioComponent* LoopingAudioComponent; // 0x9E0(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x9E8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MotherGameplayRuntime.FortGameplayCueNotifyLoop_Goop");
			return ret;
		}
	};


	// Class MotherGameplayRuntime.PropGunFunctionLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UPropGunFunctionLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MotherGameplayRuntime.PropGunFunctionLibrary");
			return ret;
		}

		void UpdatePropPreviewPosition(USceneComponent* PropPreviewComponent, float DeltaTime, AFortPawn* AttachPawn, FName AttachSocket, USkeletalMeshComponent* WeaponMesh, FVector& DesiredRelativeTransform, float MinimumZOffset, FRotator& RelativeRotation, FVector& CachedScale, float InterpSpeed); // Flags: Final|Native|Static|Private|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF7512AA1E0(relative to base address)
		void UpdatePropIndexEventState(AActor* ContextActor, FPaddleGingerPropData& Payload); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7512AA0D8(relative to base address)
		void UpdatePropActivatedEventState(AActor* ContextActor, FPaddleGingerPropActivatedData& Payload); // Flags: Final|Native|Static|Private|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7512A9FD8(relative to base address)
		void ClearPropIndexEventState(AActor* ContextActor); // Flags: Final|Native|Static|Private|BlueprintCallable, Memory Exec: 0x7FF7512A9660(relative to base address)
		void ClearPropActivatedEventState(AActor* ContextActor); // Flags: Final|Native|Static|Private|BlueprintCallable, Memory Exec: 0x7FF7512A95D4(relative to base address)
	};


	// Class MotherGameplayRuntime.ReactorGradeGameplayCue_ChargeUp
	// Inherited from AFortGameplayCueNotify_Loop -> AFortGameplayCueNotify_Actor -> AGameplayCueNotify_Actor -> AActor -> UObject
	// Size: 0x88 (0xA38 - 0x9B0)
	class AReactorGradeGameplayCue_ChargeUp : public AFortGameplayCueNotify_Loop	
	{
	public:
		AFortPawn* Pawn; // 0x9B0(0x8)
		UFortWeaponFxComponent_ChargeAimLocation* CachedAimLocationComponent; // 0x9B8(0x8)
		FVector FoundEndPoint; // 0x9C0(0x18)
		FScalableFloat MinHitDistance; // 0x9D8(0x28)
		FScalableFloat HitObjectsLimit; // 0xA00(0x28)
		unsigned char UnknownData00_6[0x4]; // 0xA28(0x4) UNKNOWN PROPERTY
		TEnumAsByte<ECollisionChannel> TraceChannel; // 0xA2C(0x1)
		unsigned char UnknownData01_7[0xB]; // 0xA2D(0xB) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MotherGameplayRuntime.ReactorGradeGameplayCue_ChargeUp");
			return ret;
		}

		void UpdateAimEndPoint(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7512A9FC4(relative to base address)
		void OnEndPointUpdated(FVector& FoundPoint); // Flags: Event|Public|HasOutParms|HasDefaults|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		FVector GetFoundEndPoint(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7512A9E5C(relative to base address)
	};

}
