#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: GrappleWeaponRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class GrappleWeaponRuntime.CustomCharacterPartAnimInstance_GrappleHook
	// Inherited from UCustomCharacterPartAnimInstance -> UFortAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x20 (0x790 - 0x770)
	class UCustomCharacterPartAnimInstance_GrappleHook : public UCustomCharacterPartAnimInstance	
	{
	public:
		bool IsFired; // 0x770(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x771(0x3) UNKNOWN PROPERTY
		int32_t DistanceBucket; // 0x774(0x4)
		bool MantisAttackAir; // 0x778(0x1)
		bool MantisAttack; // 0x779(0x1)
		bool MantisAttack; // 0x77A(0x1)
		bool MantisAttack; // 0x77B(0x1)
		bool MantisAttack; // 0x77C(0x1)
		bool IsAttackFromCast; // 0x77D(0x1)
		bool IsHookFireShort; // 0x77E(0x1)
		bool IsHookFireMid; // 0x77F(0x1)
		bool IsHookFireLong; // 0x780(0x1)
		unsigned char UnknownData03_7[0xF]; // 0x781(0xF) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GrappleWeaponRuntime.CustomCharacterPartAnimInstance_GrappleHook");
			return ret;
		}
	};


	// Class GrappleWeaponRuntime.GrappleKnifeLayerAnimInstance
	// Inherited from UFortMantisLayerAnimInstance -> UFortPlayerAnimInstanceProxy -> UFortBaseLayerAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x20 (0x1440 - 0x1420)
	class UGrappleKnifeLayerAnimInstance : public UFortMantisLayerAnimInstance	
	{
	public:
		bool bIsAttached; // 0x1420(0x1)
		bool bIsFired; // 0x1421(0x1)
		bool bAnimStartWallBounce; // 0x1422(0x1)
		unsigned char UnknownData02_6[0x1]; // 0x1423(0x1) UNKNOWN PROPERTY
		float PawnRotationRateYaw; // 0x1424(0x4)
		float AnimBounceAngle; // 0x1428(0x4)
		bool bIsFireOnMotorBike; // 0x142C(0x1)
		bool bIsExitUnexpectedly; // 0x142D(0x1)
		bool bIsCastInAir; // 0x142E(0x1)
		bool bIsCastUpperbody; // 0x142F(0x1)
		bool bIsCastGroundIdle; // 0x1430(0x1)
		bool bIsCastGroundLoco; // 0x1431(0x1)
		bool bDistanceBucketIs0; // 0x1432(0x1)
		bool bDistanceBucketIs2; // 0x1433(0x1)
		bool bIsExitGround; // 0x1434(0x1)
		bool bIsExitWallBounce; // 0x1435(0x1)
		bool bIsExitZipAirStart; // 0x1436(0x1)
		unsigned char UnknownData03_7[0x9]; // 0x1437(0x9) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GrappleWeaponRuntime.GrappleKnifeLayerAnimInstance");
			return ret;
		}
	};


	// Class GrappleWeaponRuntime.GrappleKnifeWeaponAnimInstance
	// Inherited from UFortMantisAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x8 (0x4C0 - 0x4B8)
	class UGrappleKnifeWeaponAnimInstance : public UFortMantisAnimInstance	
	{
	public:
		bool MantisAttackAir; // 0x4B8(0x1)
		bool MantisAttack; // 0x4B9(0x1)
		bool MantisAttack; // 0x4BA(0x1)
		bool MantisAttack; // 0x4BB(0x1)
		bool MantisAttack; // 0x4BC(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x4BD(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GrappleWeaponRuntime.GrappleKnifeWeaponAnimInstance");
			return ret;
		}
	};


	// Class GrappleWeaponRuntime.GrappleKnifeWeaponInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UGrappleKnifeWeaponInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GrappleWeaponRuntime.GrappleKnifeWeaponInterface");
			return ret;
		}

		void GetGrappleKnifeData(bool& bIsAttached, bool& bIsFired, int32_t& DistanceBucket, bool& bAnimStartWallBounce, float& AnimBounceAngle); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent 0x7FF414D01D78
	};


	// Class GrappleWeaponRuntime.GrappleWeaponLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UGrappleWeaponLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GrappleWeaponRuntime.GrappleWeaponLibrary");
			return ret;
		}

		void IsTargetingLedge(ACharacter SourceCharacter, AActor TargetActor, FVector& TargetLocation, FVector& TargetNormal, FGrappleWeaponLedgeConfig& Config, bool& OutDidImpactWalkableSurface, bool& OutTargetingLedge, FVector& OutLedgeLocation, bool bDrawDebug); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414D020F8
		FGrappleWeaponTargetInfo GetGrappleWeaponTargetInfo(AFortPlayerPawn SourcePlayerPawn, FGrappleWeaponTargetingConfig& Config, float DrawDebugDuration); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable 0x7FF414D02018
		void DidHitResultImpactLedge(ACharacter SourceCharacter, FHitResult& HitResult, FGrappleWeaponLedgeConfig& Config, bool& OutDidImpactWalkableSurface, bool& OutTargetingLedge, FVector& OutLedgeLocation, bool bDrawDebug); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414D01F38
		FVector CalculateDirectionalTargetOffset(FVector& DirToTarget, FVector& MovementOffset, FVector& LedgeOffset); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414D01E58
	};

}
