#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: TacticalSprintRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class TacticalSprintRuntime.FortMovementMode_TacSprintRuntimeData
	// Inherited from UFortMovementMode_BaseExtRuntimeData -> UObject
	// Size: 0x30 (0x70 - 0x40)
	class UFortMovementMode_TacSprintRuntimeData : public UFortMovementMode_BaseExtRuntimeData	
	{
	public:
		unsigned char UnknownData01_1[0x30]; // 0x40(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TacticalSprintRuntime.FortMovementMode_TacSprintRuntimeData");
			return ret;
		}
	};


	// Class TacticalSprintRuntime.FortMovementMode_ELTacSprint
	// Inherited from UFortMovementMode_BaseExtLogic -> UObject
	// Size: 0x2D0 (0x3F0 - 0x120)
	class UFortMovementMode_ELTacSprint : public UFortMovementMode_BaseExtLogic	
	{
	public:
		unsigned char UnknownData09_3[0x8]; // 0x120(0x8) UNKNOWN PROPERTY
		FGameplayTagContainer TacticalSprintFail; // 0x128(0x20)
		FGameplayTagContainer TacticalSprintFailLowEnergy; // 0x148(0x20)
		FScalableFloat MinEnergyToActivate; // 0x168(0x28)
		FScalableFloat MinEnergyToActivateCreative; // 0x190(0x28)
		FGameplayTag GCEnergyDrain; // 0x1B8(0x4)
		FGameplayTag GCSpeedLines; // 0x1BC(0x4)
		FGameplayTag GCSprintEnd; // 0x1C0(0x4)
		unsigned char UnknownData10_6[0x4]; // 0x1C4(0x4) UNKNOWN PROPERTY
		FScalableFloat MaxSpeedMultiplier; // 0x1C8(0x28)
		FScalableFloat AccelerationMultiplier; // 0x1F0(0x28)
		FScalableFloat RampUpSpeed; // 0x218(0x28)
		FScalableFloat RampDownSpeed; // 0x240(0x28)
		FScalableFloat JumpHeightMultiplier; // 0x268(0x28)
		unsigned char UnknownData11_6[0x4]; // 0x290(0x4) UNKNOWN PROPERTY
		FGameplayTag TutorialGameplayTag; // 0x294(0x4)
		FGameplayTagContainer TutorialAdditionalSourceTag; // 0x298(0x20)
		FGameplayTagContainer TutorialTargetTag; // 0x2B8(0x20)
		USoundBase OnEnergyFullyDrainedSound; // 0x2D8(0x8)
		FGameplayTag TacticalBehaviorTag; // 0x2E0(0x4)
		bool bIsCancelledBySliding : 1; // 0x2E4:0(0x1)
		bool bShouldHolsterWeapon : 1; // 0x2E4:1(0x1)
		unsigned char UnknownData12_5[0x3]; // 0x2E5(0x3) UNKNOWN PROPERTY
		FGameplayTag TagPreventWeaponHolster; // 0x2E8(0x4)
		float MinSpeedForHolster; // 0x2EC(0x4)
		float HolsterTimeAttemptDelay; // 0x2F0(0x4)
		char MaxTryHolsterAttempt; // 0x2F4(0x1)
		unsigned char UnknownData13_6[0x13]; // 0x2F5(0x13) UNKNOWN PROPERTY
		UClass EnergyComponentClass; // 0x308(0x8)
		FScalableFloat HF_EnergyCostOnStart; // 0x310(0x28)
		FScalableFloat HF_EnergyCostPerSecond; // 0x338(0x28)
		FScalableFloat HF_EnergyCostOnJump; // 0x360(0x28)
		FGameplayTag IgnoreJumpCostTag; // 0x388(0x4)
		FGameplayTag TacticalSprintTag; // 0x38C(0x4)
		FGameplayTag EnergyUseIdentifier; // 0x390(0x4)
		unsigned char UnknownData14_6[0x4]; // 0x394(0x4) UNKNOWN PROPERTY
		USoundMix SprintStartedSoundMix; // 0x398(0x8)
		USoundBase SprintStartedSound2D; // 0x3A0(0x8)
		unsigned char UnknownData15_6[0x8]; // 0x3A8(0x8) UNKNOWN PROPERTY
		FScalableFloat HF_TacSprintEnabled; // 0x3B0(0x28)
		unsigned char UnknownData16_6[0x8]; // 0x3D8(0x8) UNKNOWN PROPERTY
		UClass CameraMode; // 0x3E0(0x8)
		FGameplayTag CameraModeTag; // 0x3E8(0x4)
		unsigned char UnknownData17_7[0x4]; // 0x3EC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TacticalSprintRuntime.FortMovementMode_ELTacSprint");
			return ret;
		}

		void HandleOnReloadCanceling(); // Flags: Final|Native|Public 0x7FF414BE8078
		void HandleOnPlayerWeaponChanged(AFortPawn InPawn, AFortWeapon InNewWeapon, AFortWeapon InPlayerWeapon); // Flags: Final|Native|Public 0x7FF414BE7F98
		void HandleOnPawnJump(); // Flags: Final|Native|Public 0x7FF414BE7EB8
		void HandleOnEnteredEditMode(); // Flags: Final|Native|Public 0x7FF414BE7DD8
		void HandleOnEnterAircraft(); // Flags: Final|Native|Public 0x7FF414BE7CF8
		void HandleOnEnergyDrained(UFortComponent_Energy EnergyComp); // Flags: Final|Native|Public 0x7FF414BE7C18
		void HandleMovementModeChanged(ACharacter Character, TEnumAsByte PreviousMovementMode, char PreviousCustomMode); // Flags: Final|Native|Public 0x7FF414BE7B38
		void HandleFailedToSprint(); // Flags: Final|Native|Public 0x7FF414BE7A58
	};


	// Class TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint
	// Inherited from UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x158 (0x1F8 - 0xA0)
	class UFortPlayerControllerComponent_TacticalSprint : public UControllerComponent	
	{
	public:
		unsigned char UnknownData06_3[0x18]; // 0xA0(0x18) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnFailedToSprint; // 0xB8(0x10)
		UClass MovementModeExtension; // 0xC8(0x8)
		AFortPlayerPawn CurrentBoundPlayerPawn; // 0xD0(0x8)
		bool bTacticalSprintEnabled : 1; // 0xD8:0(0x1)
		bool bWantsToTacticalSprint : 1; // 0xD8:1(0x1)
		bool bHandlingMoveForward : 1; // 0xD8:2(0x1)
		bool bIsSprinting : 1; // 0xD8:3(0x1)
		bool bWasInBuildMode : 1; // 0xD8:4(0x1)
		bool bFireAnalyticsEventOnEndPlay : 1; // 0xD8:5(0x1)
		unsigned char UnknownData07_5[0x3]; // 0xD9(0x3) UNKNOWN PROPERTY
		FGameplayTag TacticalSprintAbilityGameplayTag; // 0xDC(0x4)
		FGameplayTag DisableTacticalSprintAbilityGameplayTag; // 0xE0(0x4)
		unsigned char UnknownData08_6[0x4]; // 0xE4(0x4) UNKNOWN PROPERTY
		FScalableFloat TacticalSprintEnabled; // 0xE8(0x28)
		FScalableFloat TacticalSprintToggleGracePeriod; // 0x110(0x28)
		FMulticastInlineDelegate OnTacticalSprintStarted; // 0x138(0x10)
		FMulticastInlineDelegate OnTacticalSprintEnded; // 0x148(0x10)
		bool bUseMovementModeExtension; // 0x158(0x1)
		unsigned char UnknownData09_6[0xF]; // 0x159(0xF) UNKNOWN PROPERTY
		FGameplayTag AllowPrimaryFireTag; // 0x168(0x4)
		FGameplayTag AllowSecondaryFireTag; // 0x16C(0x4)
		FTimerHandle StopWantingToSprintTimerReceipt; // 0x170(0x8)
		unsigned char UnknownData10_6[0x60]; // 0x178(0x60) UNKNOWN PROPERTY
		UInputComponent InputComponent; // 0x1D8(0x8)
		unsigned char UnknownData11_7[0x18]; // 0x1E0(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint");
			return ret;
		}

		void SetIsSprinting(bool bNewIsSprinting); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414BE8A18
		void RemoveCustomSprintMMEClass(UClass& SprintMMEClassToRemove); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414BE8938
		void RegisterMutatorUpdatedDelegate(); // Flags: Final|Native|Private 0x7FF414BE8858
		void OnWeaponEquipped(AFortWeapon NewWeapon, AFortWeapon PreviousWeapon); // Flags: Final|Native|Private 0x7FF414BE8778
		void OnPlayerStatePawnSet(APlayerState Player, APawn NewPawn, APawn OldPawn); // Flags: Final|Native|Private 0x7FF414BE8698
		void OnPawnChanged(AFortPawn InPawn); // Flags: Final|Native|Private 0x7FF414BE85B8
		void OnMutatorUpdated(); // Flags: Final|Native|Private 0x7FF414BE84D8
		void OnMovementModeChanged(ACharacter Character, TEnumAsByte PrevMovementMode, char PreviousCustomMode); // Flags: Final|Native|Private 0x7FF414BE83F8
		void OnAutoRunChanged(bool bAutoRunIsOn); // Flags: Final|Native|Private 0x7FF414BE8318
		void LogAndVisualLog(UObject LoggingSource, ESprintLoggingVerbosityLevel Verbosity, FString& LogString); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414BE8238
		void AddCustomSprintMMEClass(UClass& SprintMMEClassToAdd); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414BE8158
	};

}
