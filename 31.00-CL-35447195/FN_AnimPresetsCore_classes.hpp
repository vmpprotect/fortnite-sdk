#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: AnimPresetsCore
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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

		void HandleAnimInstance(UAnimInstance Instance); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|Const 0x7FF414627D98
		TWeakObjectPtr GetPresetClass(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 0x7FF414627CB8
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
