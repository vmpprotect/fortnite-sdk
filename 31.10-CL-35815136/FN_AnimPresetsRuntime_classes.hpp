#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: AnimPresetsRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class AnimPresetsRuntime.AnimPresetComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x20 (0xC0 - 0xA0)
	class UAnimPresetComponent : public UActorComponent	
	{
	public:
		TWeakObjectPtr<UClass*> AnimPreset; // 0xA0(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AnimPresetsRuntime.AnimPresetComponent");
			return ret;
		}
	};


	// Class AnimPresetsRuntime.AnimPreset_BasicLocomotion
	// Inherited from UAnimPreset -> UObject
	// Size: 0x50 (0x78 - 0x28)
	class UAnimPreset_BasicLocomotion : public UAnimPreset	
	{
	public:
		FAnimPreset_SingleAnimationData Idle; // 0x28(0x10)
		FAnimPreset_SingleAnimationData MoveForward; // 0x38(0x10)
		FAnimPreset_SingleAnimationData MoveBackward; // 0x48(0x10)
		FAnimPreset_SingleAnimationData MoveLeft; // 0x58(0x10)
		FAnimPreset_SingleAnimationData MoveRight; // 0x68(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AnimPresetsRuntime.AnimPreset_BasicLocomotion");
			return ret;
		}
	};


	// Class AnimPresetsRuntime.GameFeatureAction_AnimPreset
	// Inherited from UGameFeatureAction -> UObject
	// Size: 0x20 (0x48 - 0x28)
	class UGameFeatureAction_AnimPreset : public UGameFeatureAction	
	{
	public:
		TWeakObjectPtr<UClass*> AnimBP_Preset_BasicLocomotion; // 0x28(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AnimPresetsRuntime.GameFeatureAction_AnimPreset");
			return ret;
		}
	};

}
