#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: NitroGameplayRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class NitroGameplayRuntime.FortGA_NitroBashBase
	// Inherited from UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0x70 (0xBB0 - 0xB40)
	class UFortGA_NitroBashBase : public UFortGameplayAbility	
	{
	public:
		FScalableFloat MinExplosiveSpeedVehicle; // 0xB40(0x28)
		FScalableFloat SpeedCheckFrequency; // 0xB68(0x28)
		float MinGeneralSpeedToTrigger; // 0xB90(0x4)
		TWeakObjectPtr<AFortAthenaVehicle*> VehicleOnwer; // 0xB94(0x8)
		unsigned char UnknownData00_7[0x14]; // 0xB9C(0x14) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NitroGameplayRuntime.FortGA_NitroBashBase");
			return ret;
		}

		void SpeedCheck(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75136E37C(relative to base address)
		float GetOwnerSpeed(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75136DB58(relative to base address)
		void BP_TryChangeBashState(bool IsBashable); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_OnVehicleDestroyedBuiding(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class NitroGameplayRuntime.FortGCNL_Nitro_Active_Base
	// Inherited from AFortGameplayCueNotify_Loop -> AFortGameplayCueNotify_Actor -> AGameplayCueNotify_Actor -> AActor -> UObject
	// Size: 0x58 (0xA08 - 0x9B0)
	class AFortGCNL_Nitro_Active_Base : public AFortGameplayCueNotify_Loop	
	{
	public:
		float IntervalToUpdateTimerHandleForVFX; // 0x9B0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x9B4(0x4) UNKNOWN PROPERTY
		FGameplayTagContainer NitroStateEffectTags; // 0x9B8(0x20)
		bool UseEffectDuration; // 0x9D8(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x9D9(0x3) UNKNOWN PROPERTY
		FActiveGameplayEffectHandle NitroStateEffectHandle; // 0x9DC(0x8)
		unsigned char UnknownData02_6[0x4]; // 0x9E4(0x4) UNKNOWN PROPERTY
		AActor* TargetActor; // 0x9E8(0x8)
		float RemainingDuration; // 0x9F0(0x4)
		TWeakObjectPtr<UFortAbilitySystemComponent*> OwnerAbilitySystemComponent; // 0x9F4(0x8)
		unsigned char UnknownData03_7[0xC]; // 0x9FC(0xC) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NitroGameplayRuntime.FortGCNL_Nitro_Active_Base");
			return ret;
		}

		void UpdateRemainingDuration(float NewRemainingDuration); // Flags: Native|Event|Protected|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF75136E43C(relative to base address)
		void UpdateDurationAndVFXParameters(); // Flags: Final|Native|Private, Memory Exec: 0x7FF75136E414(relative to base address)
		void UpdateCurrentSpeed(float NewCurrentSpeed); // Flags: Native|Event|Protected|BlueprintEvent, Memory Exec: 0x7FF75136E390(relative to base address)
	};


	// Class NitroGameplayRuntime.FortMovementMode_PlayerNitroStateRuntimeData
	// Inherited from UFortMovementMode_BaseExtRuntimeData -> UObject
	// Size: 0x10 (0x50 - 0x40)
	class UFortMovementMode_PlayerNitroStateRuntimeData : public UFortMovementMode_BaseExtRuntimeData	
	{
	public:
		unsigned char UnknownData00_1[0x10]; // 0x40(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NitroGameplayRuntime.FortMovementMode_PlayerNitroStateRuntimeData");
			return ret;
		}
	};


	// Class NitroGameplayRuntime.FortMovementMode_ExtLogicNitroState
	// Inherited from UFortMovementMode_BaseExtLogic -> UObject
	// Size: 0x140 (0x260 - 0x120)
	class UFortMovementMode_ExtLogicNitroState : public UFortMovementMode_BaseExtLogic	
	{
	public:
		FScalableFloat SwimSpeedSpeedMultiplier; // 0x120(0x28)
		FScalableFloat LandSpeedMultiplier; // 0x148(0x28)
		FScalableFloat JumpZVelocityMultiplier; // 0x170(0x28)
		FScalableFloat JumpHorizontalVelocityOverride; // 0x198(0x28)
		FScalableFloat JumpHorizontalAccelerationOverride; // 0x1C0(0x28)
		FScalableFloat DotThresholdToApplyJumpBoostTag; // 0x1E8(0x28)
		FGameplayTagContainer RequiredTagsToApplyHorizontalJumpBoost; // 0x210(0x20)
		TArray<FGameplayTag> GameplayCuesTagsToPush; // 0x230(0x10)
		unsigned char UnknownData00_7[0x20]; // 0x240(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NitroGameplayRuntime.FortMovementMode_ExtLogicNitroState");
			return ret;
		}
	};


	// Class NitroGameplayRuntime.FortPawnComponent_NitroPlayerState
	// Inherited from UFortPawnComponent -> UPawnComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x20 (0xC8 - 0xA8)
	class UFortPawnComponent_NitroPlayerState : public UFortPawnComponent	
	{
	public:
		UClass* NitroStateMovementModeExtension; // 0xA8(0x8)
		FGameplayTag NitroPlayerStateMovementTag; // 0xB0(0x4)
		unsigned char UnknownData00_7[0x14]; // 0xB4(0x14) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NitroGameplayRuntime.FortPawnComponent_NitroPlayerState");
			return ret;
		}

		void StartNitroPlayerStateMovement(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C8DF6C0(relative to base address)
		void HandleControllerChanged(APawn* Pawn, AController* OldController, AController* NewController); // Flags: Final|Native|Private, Memory Exec: 0x7FF75136DB80(relative to base address)
		void EndNitroState(); // Flags: Final|BlueprintCosmetic|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75136DB44(relative to base address)
	};


	// Class NitroGameplayRuntime.FortWeaponNitroGauntlets
	// Inherited from AFortWeaponRanged -> AFortWeapon -> AActor -> UObject
	// Size: 0x38 (0x1E00 - 0x1DC8)
	class AFortWeaponNitroGauntlets : public AFortWeaponRanged	
	{
	public:
		FMulticastInlineDelegate OnUpdatePunchPreview; // 0x1DC8(0x10)
		FTargetingRequestHandle PunchPreviewAsyncTargetingHandle; // 0x1DD8(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x1DDC(0x4) UNKNOWN PROPERTY
		UTargetingPreset* GroundPunchTargetingPreset; // 0x1DE0(0x8)
		UTargetingPreset* AirPunchTargetingPreset; // 0x1DE8(0x8)
		unsigned char UnknownData01_7[0x10]; // 0x1DF0(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NitroGameplayRuntime.FortWeaponNitroGauntlets");
			return ret;
		}

		void UpdatePunchPreviewNative(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75136E428(relative to base address)
		bool IsAirPunch(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75136DFB8(relative to base address)
		void CleanupAsyncTargeting(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF75136DB30(relative to base address)
	};


	// Class NitroGameplayRuntime.NirtroBashLayerAnimInstance
	// Inherited from UFortPlayerAnimInstanceProxy -> UFortBaseLayerAnimInstance -> UFortBaseAnimInstance -> UAnimInstance -> UObject
	// Size: 0x60 (0x1480 - 0x1420)
	class UNirtroBashLayerAnimInstance : public UFortPlayerAnimInstanceProxy	
	{
	public:
		bool bIsBash_01; // 0x1420(0x1)
		bool bIsBash_02; // 0x1421(0x1)
		bool bIsExitBash; // 0x1422(0x1)
		bool bIsBounceBack; // 0x1423(0x1)
		bool bIsTacSprintOrBashing; // 0x1424(0x1)
		bool bIsCurrentlyBashing; // 0x1425(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x1426(0x2) UNKNOWN PROPERTY
		UAnimSequence* UpperBodyBash; // 0x1428(0x8)
		UAnimSequence* FullBodyBash; // 0x1430(0x8)
		UAnimSequence* UpperBodyBashSequenceA; // 0x1438(0x8)
		UAnimSequence* UpperBodyBashSequenceB; // 0x1440(0x8)
		UAnimSequence* FullBodyBashSequenceA; // 0x1448(0x8)
		UAnimSequence* FullBodyBashSequenceB; // 0x1450(0x8)
		FGameplayTag TacticalSprintTag; // 0x1458(0x4)
		FGameplayTag BounceBackTag; // 0x145C(0x4)
		FGameplayTag IsBashingTag; // 0x1460(0x4)
		unsigned char UnknownData01_7[0x1C]; // 0x1464(0x1C) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NitroGameplayRuntime.NirtroBashLayerAnimInstance");
			return ret;
		}
	};


	// Class NitroGameplayRuntime.NitroGameplayAnalytics
	// Inherited from UGameStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x70 (0x110 - 0xA0)
	class UNitroGameplayAnalytics : public UGameStateComponent	
	{
	public:
		unsigned char UnknownData00_1[0x70]; // 0xA0(0x70) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NitroGameplayRuntime.NitroGameplayAnalytics");
			return ret;
		}

		void RegisterNitroAnalytics(AFortPlayerController* FortPlayerController, FString Source); // Flags: Final|BlueprintAuthorityOnly|Native|Static|Private|BlueprintCallable, Memory Exec: 0x7FF75136DFDC(relative to base address)
	};

}
