#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: JunoRidableRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class JunoRidableRuntime.JunoRidableCheatManager
	// Inherited from UChildCheatManager -> UCheatManagerExtension -> UObject
	// Size: 0x48 (0x70 - 0x28)
	class UJunoRidableCheatManager : public UChildCheatManager	
	{
	public:
		TWeakObjectPtr CreatureRidableComponentClass; // 0x28(0x20)
		TWeakObjectPtr PlayerRidingComponentClass; // 0x48(0x20)
		UClass RestoreRiderComponentClass; // 0x68(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoRidableRuntime.JunoRidableCheatManager");
			return ret;
		}

		void NativeAddToCheatManager(); // Flags: Final|Native|Protected|BlueprintCallable 0x7FF414E5DBA0
		void JunoStopRidingDelayedResetRiderComponent(); // Flags: Final|Native|Protected 0x7FF414E5DAC0
		void JunoStopRiding(); // Flags: BlueprintAuthorityOnly|Exec|Native|Public 0x7FF414E5D9E0
		void JunoStartRiding(); // Flags: BlueprintAuthorityOnly|Exec|Native|Public 0x7FF414E5D900
	};

}
