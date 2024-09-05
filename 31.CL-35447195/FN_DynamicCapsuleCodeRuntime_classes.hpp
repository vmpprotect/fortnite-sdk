#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: DynamicCapsuleCodeRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class DynamicCapsuleCodeRuntime.DynamicCapsuleComponent
	// Inherited from UFortPawnComponent -> UPawnComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x50 (0xF8 - 0xA8)
	class UDynamicCapsuleComponent : public UFortPawnComponent	
	{
	public:
		TArray DynamicCapsuleEntryStack; // 0xA8(0x10)
		FDynamicCapsuleState ReplicatedCapsuleState; // 0xB8(0x10)
		unsigned char UnknownData01_7[0x30]; // 0xC8(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DynamicCapsuleCodeRuntime.DynamicCapsuleComponent");
			return ret;
		}

		void ServerRemoveDynamicCapsule(FGameplayTag tag); // Flags: Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate 0x7FF414CE5758
		void ServerApplyDynamicCapsule(FGameplayTag tag, float CapsuleRadius, float CapsuleHalfHeight, double NewRelativeMeshHeight); // Flags: Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate 0x7FF414CE5678
		bool RemoveDynamicCapsule(FGameplayTag& tag); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF414CE5598
		void OnRep_ReplicatedCapsuleState(); // Flags: Final|Native|Private 0x7FF414CE54B8
		void OnRep_DynamicCapsuleEntryStack(); // Flags: Final|Native|Private 0x7FF414CE53D8
		bool ApplyDynamicCapsuleWithLocationAdjust(FGameplayTag& tag, float CapsuleRadius, float CapsuleHalfHeight, double NewRelativeMeshHeight); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF414CE52F8
		bool ApplyDynamicCapsule(FGameplayTag& tag, float CapsuleRadius, float CapsuleHalfHeight); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF414CE5218
	};


	// Class DynamicCapsuleCodeRuntime.AnimNotifyState_SetCapsuleSize
	// Inherited from UAnimNotifyState -> UObject
	// Size: 0x18 (0x48 - 0x30)
	class UAnimNotifyState_SetCapsuleSize : public UAnimNotifyState	
	{
	public:
		float TargetCapsuleRadius; // 0x30(0x4)
		float TargetCapsuleHalfHeight; // 0x34(0x4)
		bool bAdjustRelativeMeshHeight; // 0x38(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x39(0x3) UNKNOWN PROPERTY
		float TargetRelativeMeshHeight; // 0x3C(0x4)
		FGameplayTag CapsuleSizeTag; // 0x40(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x44(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DynamicCapsuleCodeRuntime.AnimNotifyState_SetCapsuleSize");
			return ret;
		}
	};


	// Class DynamicCapsuleCodeRuntime.JumpSlideComponent
	// Inherited from UFortPawnComponent -> UPawnComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class UJumpSlideComponent : public UFortPawnComponent	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0xA8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DynamicCapsuleCodeRuntime.JumpSlideComponent");
			return ret;
		}

		void OnMovementModeChange(ACharacter Character, TEnumAsByte PrevMovementMode, char PreviousCustomMode); // Flags: Final|Native|Private 0x7FF414CE59F8
		void OnJumpSlideStart(); // Flags: Event|Public|BlueprintEvent 0x7FF414CE5918
		void OnJumpSlideEnd(); // Flags: Event|Public|BlueprintEvent 0x7FF414CE5838
	};

}
