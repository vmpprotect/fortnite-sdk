#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: AnimPresetsCore
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class AnimPresetsCore.AnimPreset
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UAnimPreset : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AnimPresetsCore.AnimPreset");
			return ret;
		}

		void HandleAnimInstance(UAnimInstance* Instance); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|Const, Memory Exec: 0x7FF74D87CD00(relative to base address)
		TWeakObjectPtr GetPresetClass(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF74D87CCB4(relative to base address)
	};


	// Class AnimPresetsCore.NPCRetargetAnimInstance
	// Inherited from UAnimInstance -> UObject
	// Size: 0x1D8 (0x590 - 0x3B8)
	class UNPCRetargetAnimInstance : public UAnimInstance	
	{
	public:
		FAnimNode_RetargetPoseFromMesh RetargetNode; // 0x3B8(0x1D8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/AnimPresetsCore.NPCRetargetAnimInstance");
			return ret;
		}
	};

}
