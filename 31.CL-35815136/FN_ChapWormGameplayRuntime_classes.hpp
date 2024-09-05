#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: ChapWormGameplayRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class ChapWormGameplayRuntime.ChapWormLayerAnimInstance
	// Inherited from UFortPlayerAnimInstanceProxy -> UFortBaseLayerAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x20 (0x1440 - 0x1420)
	class UChapWormLayerAnimInstance : public UFortPlayerAnimInstanceProxy	
	{
	public:
		bool bIsKineticEnergyIdle; // 0x1420(0x1)
		bool bCanEnterBaseToActivate; // 0x1421(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x1422(0x2) UNKNOWN PROPERTY
		FGameplayTag KineticEnergyActivateTagName; // 0x1424(0x4)
		FGameplayTag ApplyOverpowerStatusTagName; // 0x1428(0x4)
		FGameplayTag AthenaInVehicleTagName; // 0x142C(0x4)
		FGameplayTag SurfaceSwimmingTagName; // 0x1430(0x4)
		FGameplayTag IsGrindingTagName; // 0x1434(0x4)
		FGameplayTag HoverActiveTagName; // 0x1438(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x143C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ChapWormGameplayRuntime.ChapWormLayerAnimInstance");
			return ret;
		}
	};


	// Class ChapWormGameplayRuntime.FortCameraModifier_ChapWorm
	// Inherited from UFortCameraModifier_Custom -> UCameraModifier -> UObject
	// Size: 0x60 (0xF0 - 0x90)
	class UFortCameraModifier_ChapWorm : public UFortCameraModifier_Custom	
	{
	public:
		float CameraModifierLifetimeDuration; // 0x90(0x4)
		FGameplayTag OverpoweredGameplayTag; // 0x94(0x4)
		bool bInterpCameraViewFov; // 0x98(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x99(0x3) UNKNOWN PROPERTY
		float FOVInterpSpeed; // 0x9C(0x4)
		float TargetDeltaFov_Default; // 0xA0(0x4)
		float TargetDeltaFov_Overpowered; // 0xA4(0x4)
		bool bInterpCameraViewLocation; // 0xA8(0x1)
		unsigned char UnknownData01_6[0x3]; // 0xA9(0x3) UNKNOWN PROPERTY
		float DeltaLocationInterpSpeed; // 0xAC(0x4)
		float TargetDeltaForwardDirectionOffset_Default; // 0xB0(0x4)
		float TargetDeltaForwardDirectionOffset_Overpowered; // 0xB4(0x4)
		bool bWindingDown; // 0xB8(0x1)
		unsigned char UnknownData02_6[0x3]; // 0xB9(0x3) UNKNOWN PROPERTY
		float CurrentDeltaFov; // 0xBC(0x4)
		FVector CurrentDeltaLocation; // 0xC0(0x18)
		FTimerHandle LifetimeDurationTimerHandle; // 0xD8(0x8)
		unsigned char UnknownData03_7[0x10]; // 0xE0(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ChapWormGameplayRuntime.FortCameraModifier_ChapWorm");
			return ret;
		}

		void WindDownAndRemove(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF750767068(relative to base address)
	};


	// Class ChapWormGameplayRuntime.FortGameplayAbility_ChapWorm_InventoryPassive
	// Inherited from UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0x38 (0xB78 - 0xB40)
	class UFortGameplayAbility_ChapWorm_InventoryPassive : public UFortGameplayAbility	
	{
	public:
		unsigned char UnknownData00_1[0x38]; // 0xB40(0x38) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ChapWormGameplayRuntime.FortGameplayAbility_ChapWorm_InventoryPassive");
			return ret;
		}

		void IncrementKineticEnergy(); // Flags: Final|BlueprintAuthorityOnly|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF74921B8F8(relative to base address)
	};


	// Class ChapWormGameplayRuntime.FortMovementMode_ChapWormSprint
	// Inherited from UFortMovementMode_ELTacSprint -> UFortMovementMode_BaseExtLogic -> UObject
	// Size: 0xD0 (0x4C0 - 0x3F0)
	class UFortMovementMode_ChapWormSprint : public UFortMovementMode_ELTacSprint	
	{
	public:
		UClass* GrantedGameplayEffect; // 0x3F0(0x8)
		FGameplayTag SprintThresholdGameplayTag; // 0x3F8(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x3FC(0x4) UNKNOWN PROPERTY
		FScalableFloat SprintThresholdSpeedMultiplier; // 0x400(0x28)
		FScalableFloat SprintThresholdOverpowerSpeedMultiplier; // 0x428(0x28)
		FGameplayTag OverpowerGameplayTag; // 0x450(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x454(0x4) UNKNOWN PROPERTY
		FScalableFloat OverpowerSpeedMultiplier; // 0x458(0x28)
		FScalableFloat OverpowerJumpHeightMultiplier; // 0x480(0x28)
		FActiveGameplayEffectHandle GrantedGameplayEffectHandle; // 0x4A8(0x8)
		unsigned char UnknownData02_7[0x10]; // 0x4B0(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/ChapWormGameplayRuntime.FortMovementMode_ChapWormSprint");
			return ret;
		}
	};

}
