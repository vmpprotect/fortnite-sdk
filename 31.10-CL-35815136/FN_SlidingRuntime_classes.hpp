#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: SlidingRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class SlidingRuntime.FortMovementMode_SlidingRuntimeData
	// Inherited from UFortMovementMode_BaseExtRuntimeData -> UObject
	// Size: 0x50 (0x90 - 0x40)
	class UFortMovementMode_SlidingRuntimeData : public UFortMovementMode_BaseExtRuntimeData	
	{
	public:
		unsigned char UnknownData00_1[0x50]; // 0x40(0x50) UNKNOWN PROPERTY

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
		UClass* SlidingAnimLayer; // 0x148(0x8)
		FGameplayTag GCSliding; // 0x150(0x4)
		FGameplayTag GCCameraShakeSliding; // 0x154(0x4)
		FGameplayTag GCSpeedLines; // 0x158(0x4)
		FGameplayTag EventSlidingStarted; // 0x15C(0x4)
		FGameplayTag SlidingBlockOriginalGATag; // 0x160(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x164(0x4) UNKNOWN PROPERTY
		UClass* CameraMode; // 0x168(0x8)
		UClass* CameraModeModifier; // 0x170(0x8)
		UClass* CameraStartShake; // 0x178(0x8)
		UMaterialParameterCollection* FNMaterialsCollection; // 0x180(0x8)
		FScalableFloat RemoveSpeedLinesAt; // 0x188(0x28)
		FScalableFloat AddSpeedLinesAt; // 0x1B0(0x28)
		unsigned char UnknownData01_7[0x308]; // 0x1D8(0x308) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SlidingRuntime.FortMovementMode_Sliding");
			return ret;
		}

		void ToggleLandFXAthena(AFortPlayerPawnAthena* FortPlayerPawnAthena, bool bHiddenInGame); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ToggleLandFX(AFortPlayerPawn* FortPlayerPawn, bool bHiddenInGame); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetCameraBlendIn(UCameraModifier* SlideCameraModifier); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void GameplayTagCallback_CancelSlidingRequested(FGameplayTag GameplayTag, int32_t Amount); // Flags: Final|Native|Private, Memory Exec: 0x7FF7514CF560(relative to base address)
		void GameplayTagCallback_CancelSlidingKeepCrouchRequested(FGameplayTag GameplayTag, int32_t Amount); // Flags: Final|Native|Private, Memory Exec: 0x7FF7514CF254(relative to base address)
		void EventCallback_OnPawnLanded(FHitResult& Hit); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF7514CEE74(relative to base address)
		void EventCallback_OnDoJumpTriggered(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7514CEA34(relative to base address)
	};


	// Class SlidingRuntime.FortMovementMode_SlidingInputHandler
	// Inherited from UFortPawnComponent -> UPawnComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x88 (0x130 - 0xA8)
	class UFortMovementMode_SlidingInputHandler : public UFortPawnComponent	
	{
	public:
		unsigned char UnknownData00_3[0x30]; // 0xA8(0x30) UNKNOWN PROPERTY
		TArray<UObject*> InstantSlideInputSources; // 0xD8(0x10)
		unsigned char UnknownData01_7[0x48]; // 0xE8(0x48) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SlidingRuntime.FortMovementMode_SlidingInputHandler");
			return ret;
		}

		void InputCallback_TouchCrouchReleased(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7514CFE5C(relative to base address)
		void InputCallback_TouchCrouchPressed(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7514CFE48(relative to base address)
		void InputCallback_GamepadCrouchGyroReleased(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7514CFE34(relative to base address)
		void InputCallback_GamepadCrouchGyroPressed(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7514CFE20(relative to base address)
		void InputCallback_CrouchReleasedWhileEditing(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7514CFE0C(relative to base address)
		void InputCallback_CrouchReleasedWhileBuilding(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7514CFDF8(relative to base address)
		void InputCallback_CrouchReleasedOrRepairWhileEditing(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7514CFDE4(relative to base address)
		void InputCallback_CrouchReleasedOrRepairWhileBuilding(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7514CFDD0(relative to base address)
		void InputCallback_CrouchReleasedOrRepair(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7514CFDBC(relative to base address)
		void InputCallback_CrouchReleased(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7514CFDA8(relative to base address)
		void InputCallback_CrouchPressedWhileEditing(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7514CFD94(relative to base address)
		void InputCallback_CrouchPressedWhileBuilding(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7514CFD80(relative to base address)
		void InputCallback_CrouchPressedOrRepairWhileEditing(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7514CFD6C(relative to base address)
		void InputCallback_CrouchPressedOrRepairWhileBuilding(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7514CFD58(relative to base address)
		void InputCallback_CrouchPressedOrRepairImmediately(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7514CFD44(relative to base address)
		void InputCallback_CrouchPressedOrRepair(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7514CFD30(relative to base address)
		void InputCallback_CrouchPressed(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7514CFD1C(relative to base address)
	};


	// Class SlidingRuntime.FortPawnComponent_SlidingProvider
	// Inherited from UFortPawnComponent -> UPawnComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x128 (0x1D0 - 0xA8)
	class UFortPawnComponent_SlidingProvider : public UFortPawnComponent	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0xA8(0x10) UNKNOWN PROPERTY
		UClass* MovementModeExtension; // 0xB8(0x8)
		UClass* SlidingOG_GA; // 0xC0(0x8)
		UClass* SlidingFeedback_GA; // 0xC8(0x8)
		UClass* DisableSlideGameplayEffectClass; // 0xD0(0x8)
		unsigned char UnknownData01_7[0xF8]; // 0xD8(0xF8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/SlidingRuntime.FortPawnComponent_SlidingProvider");
			return ret;
		}

		void GameplayTagCallback_SlidingIsAllowed(FGameplayTag GameplayTag, int32_t Amount); // Flags: Final|Native|Private, Memory Exec: 0x7FF7514CFB48(relative to base address)
		void GameplayTagCallback_SlidingCancelRequested(FGameplayTag GameplayTag, int32_t Amount); // Flags: Final|Native|Private, Memory Exec: 0x7FF7514CF874(relative to base address)
		void EventCallback_Server_OnCharacterMovementPreUpdate_OG_Sliding(UCharacterMovementComponent* CharMoveComp, float DeltaSeconds); // Flags: Final|Native|Private, Memory Exec: 0x7FF7514CF190(relative to base address)
		void EventCallback_OnRepIsSlidingUpdated_OG_Sliding(bool bIsPawnSliding); // Flags: Final|Native|Private, Memory Exec: 0x7FF7514CF110(relative to base address)
		void EventCallback_OnPostLandedPhysics(FHitResult& Hit); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF7514CF038(relative to base address)
		void EventCallback_OnPawnRestart(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7514CF024(relative to base address)
		void EventCallback_OnPawnLanded(FHitResult& Hit); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF7514CEF4C(relative to base address)
		void EventCallback_OnPawnControllerChanged(APawn* Pawn, AController* OldController, AController* NewController); // Flags: Final|Native|Private, Memory Exec: 0x7FF7514CED7C(relative to base address)
		void EventCallback_OnMovementModeChanged_Sliding(ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, char PreviousCustomMode); // Flags: Final|Native|Private, Memory Exec: 0x7FF7514CEC80(relative to base address)
		void EventCallback_OnMovementModeChanged_OG_Sliding(ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, char PreviousCustomMode); // Flags: Final|Native|Private, Memory Exec: 0x7FF7514CEB84(relative to base address)
		void EventCallback_OnEnteredAircraftComponent_Sliding(AController* PlayerController); // Flags: Final|Native|Private, Memory Exec: 0x7FF7514CEADC(relative to base address)
		void EventCallback_OnEnteredAircraftComponent_OG_Sliding(AController* PlayerController); // Flags: Final|Native|Private, Memory Exec: 0x7FF7514CEA5C(relative to base address)
		void EventCallback_OnEnteredAircraft_Sliding(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7514CEB70(relative to base address)
		void EventCallback_OnEnteredAircraft_OG_Sliding(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7514CEB5C(relative to base address)
		void EventCallback_OnDoJumpTriggered_OG_Sliding(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7514CEA48(relative to base address)
		void EventCallback_OnAbilitySystemComponentInitialized(UFortAbilitySystemComponent* AbilitySystemComponent, AFortPlayerPawn* AffectedPawn); // Flags: Final|Native|Private, Memory Exec: 0x7FF748B50178(relative to base address)
		bool CanPlayerProceedToSliding(bool bPrintLog); // Flags: Native|Public|Const, Memory Exec: 0x7FF7514CE9A0(relative to base address)
	};

}
