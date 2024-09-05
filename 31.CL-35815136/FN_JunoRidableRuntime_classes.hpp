#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: JunoRidableRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class JunoRidableRuntime.JunoRidableCheatManager
	// Inherited from UChildCheatManager -> UCheatManagerExtension -> UObject
	// Size: 0x48 (0x70 - 0x28)
	class UJunoRidableCheatManager : public UChildCheatManager	
	{
	public:
		TWeakObjectPtr<UClass*> CreatureRidableComponentClass; // 0x28(0x20)
		TWeakObjectPtr<UClass*> PlayerRidingComponentClass; // 0x48(0x20)
		UClass* RestoreRiderComponentClass; // 0x68(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoRidableRuntime.JunoRidableCheatManager");
			return ret;
		}

		void NativeAddToCheatManager(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void JunoStopRidingDelayedResetRiderComponent(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void JunoStopRiding(); // Flags: BlueprintAuthorityOnly|Exec|Native|Public, Memory Exec: 0x7FF748333524(relative to base address)
		void JunoStartRiding(); // Flags: BlueprintAuthorityOnly|Exec|Native|Public, Memory Exec: 0x7FF7494B08D8(relative to base address)
	};

}
