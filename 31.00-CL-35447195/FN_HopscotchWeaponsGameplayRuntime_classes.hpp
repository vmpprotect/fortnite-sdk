#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: HopscotchWeaponsGameplayRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class HopscotchWeaponsGameplayRuntime.FortGameplayAbility_AppleSunSmall_Passive
	// Inherited from UFortGameplayAbility -> UGameplayAbility -> UObject
	// Size: 0xC8 (0xC08 - 0xB40)
	class UFortGameplayAbility_AppleSunSmall_Passive : public UFortGameplayAbility	
	{
	public:
		TWeakObjectPtr PlayerPawn; // 0xB40(0x8)
		TWeakObjectPtr CharacterMovementComponent; // 0xB48(0x8)
		FScalableFloat UpdateIntervalRow; // 0xB50(0x28)
		UClass CanCrashpadGameplayEffectClass; // 0xB78(0x8)
		FGameplayTagContainer CanCrashpadGameplayTags; // 0xB80(0x20)
		FGameplayTagContainer GliderRedeployTags; // 0xBA0(0x20)
		float UpdateInterval; // 0xBC0(0x4)
		float MaxFallVelocity; // 0xBC4(0x4)
		float CloseToGroundThreshold; // 0xBC8(0x4)
		float GroundTraceMaxDistance; // 0xBCC(0x4)
		float MaxVelocityJumpPromt; // 0xBD0(0x4)
		float DefaultMinVelocityJumpPromt; // 0xBD4(0x4)
		float SwimmingMinVelocityJumpPromt; // 0xBD8(0x4)
		float CurrentMinVelocityJumpPrompt; // 0xBDC(0x4)
		float DefaultMinTimeSinceGroundedForJumpPrompt; // 0xBE0(0x4)
		float SwimmingMinTimeSinceGroundedForJumpPrompt; // 0xBE4(0x4)
		float CurrentMinTimeSinceGroundedForJumpPrompt; // 0xBE8(0x4)
		float TraceDistanceToGround; // 0xBEC(0x4)
		float TimeSinceGrounded; // 0xBF0(0x4)
		bool bCanCrashpadByJumping; // 0xBF4(0x1)
		bool bPreviousCanCrashpad; // 0xBF5(0x1)
		bool bIsCloseToGround; // 0xBF6(0x1)
		bool bIsClambering; // 0xBF7(0x1)
		bool bBlockedTag; // 0xBF8(0x1)
		bool bGliderTag; // 0xBF9(0x1)
		unsigned char UnknownData01_7[0xE]; // 0xBFA(0xE) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/HopscotchWeaponsGameplayRuntime.FortGameplayAbility_AppleSunSmall_Passive");
			return ret;
		}

		void UpdateIsCloseToGround(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414CD0218
		void UpdateCanCrashpad(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414CD0138
		void OnPlayerMovementModeChanged(ACharacter Character, TEnumAsByte PrevMovementMode, char PreviousCustomMode); // Flags: Final|Native|Private 0x7FF414CD0058
	};

}
