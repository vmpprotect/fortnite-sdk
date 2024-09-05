#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: CreativeDebugMenuRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class CreativeDebugMenuRuntime.FortControllerComponent_CreativeDebugger
	// Inherited from UFortControllerComponent -> UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x138 (0x1E0 - 0xA8)
	class UFortControllerComponent_CreativeDebugger : public UFortControllerComponent	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0xA8(0x8) UNKNOWN PROPERTY
		FScalableFloat DebuggerEnabledByDataRegistry; // 0xB0(0x28)
		FScalableFloat VerseDebugDrawEnabledByDataRegistry; // 0xD8(0x28)
		FScalableFloat NavigationMeshEnabledByDataRegistry; // 0x100(0x28)
		FScalableFloat NavigationPathsEnabledByDataRegistry; // 0x128(0x28)
		FScalableFloat GhostModeEnabledByDataRegistry; // 0x150(0x28)
		FScalableFloat InvincibilityEnabledByDataRegistry; // 0x178(0x28)
		FScalableFloat FastIterationEnabledByDataRegistry; // 0x1A0(0x28)
		UClass AIDebuggerClass; // 0x1C8(0x8)
		unsigned char UnknownData03_7[0x10]; // 0x1D0(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CreativeDebugMenuRuntime.FortControllerComponent_CreativeDebugger");
			return ret;
		}

		void OnPlayerSpawned(AFortPlayerController PC); // Flags: Final|Native|Public 0x7FF414D619B8
		void OnMutatorUpdated(); // Flags: Final|Native|Public 0x7FF414D618D8
		void OnMinigameStateChanged(AFortMinigame Minigame, EFortMinigameState MinigameState); // Flags: Final|Native|Public 0x7FF414D617F8
	};

}
