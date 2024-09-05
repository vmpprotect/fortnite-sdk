#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: DynamicCapsuleCodeRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class DynamicCapsuleCodeRuntime.DynamicCapsuleComponent
	// Inherited from UFortPawnComponent -> UPawnComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x50 (0xF8 - 0xA8)
	class UDynamicCapsuleComponent : public UFortPawnComponent	
	{
	public:
		TArray<FDynamicCapsuleEntry> DynamicCapsuleEntryStack; // 0xA8(0x10)
		FDynamicCapsuleState ReplicatedCapsuleState; // 0xB8(0x10)
		unsigned char UnknownData00_7[0x30]; // 0xC8(0x30) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DynamicCapsuleCodeRuntime.DynamicCapsuleComponent");
			return ret;
		}

		void ServerRemoveDynamicCapsule(FGameplayTag Tag); // Flags: Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate, Memory Exec: 0x7FF7512EAB10(relative to base address)
		void ServerApplyDynamicCapsule(FGameplayTag Tag, float CapsuleRadius, float CapsuleHalfHeight, double NewRelativeMeshHeight); // Flags: Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate, Memory Exec: 0x7FF7512EA78C(relative to base address)
		bool RemoveDynamicCapsule(FGameplayTag& Tag); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7512EA6F4(relative to base address)
		void OnRep_ReplicatedCapsuleState(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7488CA1A0(relative to base address)
		void OnRep_DynamicCapsuleEntryStack(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7512EA6E0(relative to base address)
		bool ApplyDynamicCapsuleWithLocationAdjust(FGameplayTag& Tag, float CapsuleRadius, float CapsuleHalfHeight, double NewRelativeMeshHeight); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7512EA4C0(relative to base address)
		bool ApplyDynamicCapsule(FGameplayTag& Tag, float CapsuleRadius, float CapsuleHalfHeight); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7512EA328(relative to base address)
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
		unsigned char UnknownData00_6[0x3]; // 0x39(0x3) UNKNOWN PROPERTY
		float TargetRelativeMeshHeight; // 0x3C(0x4)
		FGameplayTag CapsuleSizeTag; // 0x40(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x44(0x4) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_1[0x8]; // 0xA8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DynamicCapsuleCodeRuntime.JumpSlideComponent");
			return ret;
		}

		void OnMovementModeChange(ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, char PreviousCustomMode); // Flags: Final|Native|Private, Memory Exec: 0x7FF74759B7D0(relative to base address)
		void OnJumpSlideStart(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnJumpSlideEnd(); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
