#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: BallisticShieldBaseRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class BallisticShieldBaseRuntime.BallisticShieldItemLayerAnimInstance
	// Inherited from UFortPlayerAnimInstanceProxy -> UFortBaseLayerAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0xE0 (0x1500 - 0x1420)
	class UBallisticShieldItemLayerAnimInstance : public UFortPlayerAnimInstanceProxy	
	{
	public:
		bool bIsRush; // 0x1420(0x1)
		bool bIsEquipping; // 0x1421(0x1)
		bool bIsReloading; // 0x1422(0x1)
		bool bEnterLanding; // 0x1423(0x1)
		bool bExitLanding; // 0x1424(0x1)
		bool bIsShieldBlocking; // 0x1425(0x1)
		bool bIsStaggerBuildup; // 0x1426(0x1)
		unsigned char UnknownData00_6[0x1]; // 0x1427(0x1) UNKNOWN PROPERTY
		float Yaw; // 0x1428(0x4)
		float ChargeAOAlpha; // 0x142C(0x4)
		int32_t GenderAndSize; // 0x1430(0x4)
		float ReloadUBAlpha; // 0x1434(0x4)
		float MaskLeftArmAlpha; // 0x1438(0x4)
		float StaggerAmount; // 0x143C(0x4)
		unsigned char UnknownData01_7[0xB8]; // 0x1440(0xB8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BallisticShieldBaseRuntime.BallisticShieldItemLayerAnimInstance");
			return ret;
		}
	};


	// Class BallisticShieldBaseRuntime.BallisticShieldWeaponInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UBallisticShieldWeaponInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BallisticShieldBaseRuntime.BallisticShieldWeaponInterface");
			return ret;
		}

		void GetBallisticShieldData(EBallisticShieldPlayerActionState& BallisticShieldPlayerState, float& StaggerBuildupPercent); // Flags: Native|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF750766490(relative to base address)
	};


	// Class BallisticShieldBaseRuntime.FortMovementMode_ELBShieldSprint
	// Inherited from UFortMovementMode_ELTacSprint -> UFortMovementMode_BaseExtLogic -> UObject
	// Size: 0x38 (0x428 - 0x3F0)
	class UFortMovementMode_ELBShieldSprint : public UFortMovementMode_ELTacSprint	
	{
	public:
		FScalableFloat ChargeRotationRate; // 0x3F0(0x28)
		UClass* GrantedAbility; // 0x418(0x8)
		unsigned char UnknownData00_7[0x8]; // 0x420(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BallisticShieldBaseRuntime.FortMovementMode_ELBShieldSprint");
			return ret;
		}
	};


	// Class BallisticShieldBaseRuntime.TargetingFilterTask_BShieldCharge
	// Inherited from UTargetingFilterTask_BasicFilterTemplate -> UTargetingTask -> UObject
	// Size: 0x88 (0xB0 - 0x28)
	class UTargetingFilterTask_BShieldCharge : public UTargetingFilterTask_BasicFilterTemplate	
	{
	public:
		TArray<UClass*> WalkableActorClasses; // 0x28(0x10)
		FScalableFloat BashableActorAngle; // 0x38(0x28)
		FScalableFloat MainTraceDistance; // 0x60(0x28)
		FScalableFloat FloorHitZTolerance; // 0x88(0x28)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/BallisticShieldBaseRuntime.TargetingFilterTask_BShieldCharge");
			return ret;
		}
	};

}
