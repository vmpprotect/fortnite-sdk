#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: SlidingRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class SlidingRuntime.FortMovementMode_SlidingRuntimeData
	// Inherited from UFortMovementMode_BaseExtRuntimeData -> UObject
	// Size: 0x50 (0x90 - 0x40)
	class UFortMovementMode_SlidingRuntimeData : public UFortMovementMode_BaseExtRuntimeData	
	{
	public:
		unsigned char UnknownData01_1[0x50]; // 0x40(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SlidingRuntime.FortMovementMode_SlidingRuntimeData");
			return ret;
		}
	};


	// Class SlidingRuntime.FortMovementMode_Sliding
	// Inherited from UFortMovementMode_BaseExtLogic -> UObject
	// Size: 0x3C0 (0x4E0 - 0x120)
	class UFortMovementMode_Sliding : public UFortMovementMode_BaseExtLogic	
	{
	public:
		FScalableFloat DashPeriod; // 0x120(0x28)
		UClass SlidingAnimLayer; // 0x148(0x8)
		FGameplayTag GCSliding; // 0x150(0x4)
		FGameplayTag GCCameraShakeSliding; // 0x154(0x4)
		FGameplayTag GCSpeedLines; // 0x158(0x4)
		FGameplayTag EventSlidingStarted; // 0x15C(0x4)
		FGameplayTag SlidingBlockOriginalGATag; // 0x160(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x164(0x4) UNKNOWN PROPERTY
		UClass CameraMode; // 0x168(0x8)
		UClass CameraModeModifier; // 0x170(0x8)
		UClass CameraStartShake; // 0x178(0x8)
		UMaterialParameterCollection FNMaterialsCollection; // 0x180(0x8)
		FScalableFloat RemoveSpeedLinesAt; // 0x188(0x28)
		FScalableFloat AddSpeedLinesAt; // 0x1B0(0x28)
		unsigned char UnknownData03_7[0x308]; // 0x1D8(0x308) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SlidingRuntime.FortMovementMode_Sliding");
			return ret;
		}

		void ToggleLandFXAthena(AFortPlayerPawnAthena FortPlayerPawnAthena, bool bHiddenInGame); // Flags: Event|Public|BlueprintEvent 0x7FF414D1A818
		void ToggleLandFX(AFortPlayerPawn FortPlayerPawn, bool bHiddenInGame); // Flags: Event|Public|BlueprintEvent 0x7FF414D1A738
		void SetCameraBlendIn(UCameraModifier SlideCameraModifier); // Flags: Event|Public|BlueprintEvent 0x7FF414D1A658
		void GameplayTagCallback_CancelSlidingRequested(FGameplayTag GameplayTag, int32_t Amount); // Flags: Final|Native|Private 0x7FF414D1A578
		void GameplayTagCallback_CancelSlidingKeepCrouchRequested(FGameplayTag GameplayTag, int32_t Amount); // Flags: Final|Native|Private 0x7FF414D1A498
		void EventCallback_OnPawnLanded(FHitResult& Hit); // Flags: Final|Native|Private|HasOutParms 0x7FF414D1A3B8
		void EventCallback_OnDoJumpTriggered(); // Flags: Final|Native|Private 0x7FF414D1A2D8
	};


	// Class SlidingRuntime.FortMovementMode_SlidingInputHandler
	// Inherited from UFortPawnComponent -> UPawnComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x88 (0x130 - 0xA8)
	class UFortMovementMode_SlidingInputHandler : public UFortPawnComponent	
	{
	public:
		unsigned char UnknownData02_3[0x30]; // 0xA8(0x30) UNKNOWN PROPERTY
		TArray InstantSlideInputSources; // 0xD8(0x10)
		unsigned char UnknownData03_7[0x48]; // 0xE8(0x48) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SlidingRuntime.FortMovementMode_SlidingInputHandler");
			return ret;
		}

		void InputCallback_TouchCrouchReleased(); // Flags: Final|Native|Private 0x7FF414D1B6F8
		void InputCallback_TouchCrouchPressed(); // Flags: Final|Native|Private 0x7FF414D1B618
		void InputCallback_GamepadCrouchGyroReleased(); // Flags: Final|Native|Private 0x7FF414D1B538
		void InputCallback_GamepadCrouchGyroPressed(); // Flags: Final|Native|Private 0x7FF414D1B458
		void InputCallback_CrouchReleasedWhileEditing(); // Flags: Final|Native|Private 0x7FF414D1B378
		void InputCallback_CrouchReleasedWhileBuilding(); // Flags: Final|Native|Private 0x7FF414D1B298
		void InputCallback_CrouchReleasedOrRepairWhileEditing(); // Flags: Final|Native|Private 0x7FF414D1B1B8
		void InputCallback_CrouchReleasedOrRepairWhileBuilding(); // Flags: Final|Native|Private 0x7FF414D1B0D8
		void InputCallback_CrouchReleasedOrRepair(); // Flags: Final|Native|Private 0x7FF414D1AFF8
		void InputCallback_CrouchReleased(); // Flags: Final|Native|Private 0x7FF414D1AF18
		void InputCallback_CrouchPressedWhileEditing(); // Flags: Final|Native|Private 0x7FF414D1AE38
		void InputCallback_CrouchPressedWhileBuilding(); // Flags: Final|Native|Private 0x7FF414D1AD58
		void InputCallback_CrouchPressedOrRepairWhileEditing(); // Flags: Final|Native|Private 0x7FF414D1AC78
		void InputCallback_CrouchPressedOrRepairWhileBuilding(); // Flags: Final|Native|Private 0x7FF414D1AB98
		void InputCallback_CrouchPressedOrRepairImmediately(); // Flags: Final|Native|Private 0x7FF414D1AAB8
		void InputCallback_CrouchPressedOrRepair(); // Flags: Final|Native|Private 0x7FF414D1A9D8
		void InputCallback_CrouchPressed(); // Flags: Final|Native|Private 0x7FF414D1A8F8
	};


	// Class SlidingRuntime.FortPawnComponent_SlidingProvider
	// Inherited from UFortPawnComponent -> UPawnComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x128 (0x1D0 - 0xA8)
	class UFortPawnComponent_SlidingProvider : public UFortPawnComponent	
	{
	public:
		unsigned char UnknownData02_3[0x10]; // 0xA8(0x10) UNKNOWN PROPERTY
		UClass MovementModeExtension; // 0xB8(0x8)
		UClass SlidingOG_GA; // 0xC0(0x8)
		UClass SlidingFeedback_GA; // 0xC8(0x8)
		UClass DisableSlideGameplayEffectClass; // 0xD0(0x8)
		unsigned char UnknownData03_7[0xF8]; // 0xD8(0xF8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SlidingRuntime.FortPawnComponent_SlidingProvider");
			return ret;
		}

		void GameplayTagCallback_SlidingIsAllowed(FGameplayTag GameplayTag, int32_t Amount); // Flags: Final|Native|Private 0x7FF414D1C5D8
		void GameplayTagCallback_SlidingCancelRequested(FGameplayTag GameplayTag, int32_t Amount); // Flags: Final|Native|Private 0x7FF414D1C4F8
		void EventCallback_Server_OnCharacterMovementPreUpdate_OG_Sliding(UCharacterMovementComponent CharMoveComp, float DeltaSeconds); // Flags: Final|Native|Private 0x7FF414D1C418
		void EventCallback_OnRepIsSlidingUpdated_OG_Sliding(bool bIsPawnSliding); // Flags: Final|Native|Private 0x7FF414D1C338
		void EventCallback_OnPostLandedPhysics(FHitResult& Hit); // Flags: Final|Native|Private|HasOutParms 0x7FF414D1C258
		void EventCallback_OnPawnRestart(); // Flags: Final|Native|Private 0x7FF414D1C178
		void EventCallback_OnPawnLanded(FHitResult& Hit); // Flags: Final|Native|Private|HasOutParms 0x7FF414D1C098
		void EventCallback_OnPawnControllerChanged(APawn Pawn, AController OldController, AController NewController); // Flags: Final|Native|Private 0x7FF414D1BFB8
		void EventCallback_OnMovementModeChanged_Sliding(ACharacter Character, TEnumAsByte PrevMovementMode, char PreviousCustomMode); // Flags: Final|Native|Private 0x7FF414D1BED8
		void EventCallback_OnMovementModeChanged_OG_Sliding(ACharacter Character, TEnumAsByte PrevMovementMode, char PreviousCustomMode); // Flags: Final|Native|Private 0x7FF414D1BDF8
		void EventCallback_OnEnteredAircraftComponent_Sliding(AController PlayerController); // Flags: Final|Native|Private 0x7FF414D1BD18
		void EventCallback_OnEnteredAircraftComponent_OG_Sliding(AController PlayerController); // Flags: Final|Native|Private 0x7FF414D1BC38
		void EventCallback_OnEnteredAircraft_Sliding(); // Flags: Final|Native|Private 0x7FF414D1BB58
		void EventCallback_OnEnteredAircraft_OG_Sliding(); // Flags: Final|Native|Private 0x7FF414D1BA78
		void EventCallback_OnDoJumpTriggered_OG_Sliding(); // Flags: Final|Native|Private 0x7FF414D1B998
		void EventCallback_OnAbilitySystemComponentInitialized(UFortAbilitySystemComponent AbilitySystemComponent, AFortPlayerPawn AffectedPawn); // Flags: Final|Native|Private 0x7FF414D1B8B8
		bool CanPlayerProceedToSliding(bool bPrintLog); // Flags: Native|Public|Const 0x7FF414D1B7D8
	};

}
