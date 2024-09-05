#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: CorruptionGameplayCodeUI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class CorruptionGameplayCodeUI.FortPowerupReticleExtensionWidget
	// Inherited from UFortWeaponReticleExtensionWidgetBase -> UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x358 - 0x350)
	class UFortPowerupReticleExtensionWidget : public UFortWeaponReticleExtensionWidgetBase	
	{
	public:
		EPowerupHeatState LastPowerupHeatState; // 0x350(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x351(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CorruptionGameplayCodeUI.FortPowerupReticleExtensionWidget");
			return ret;
		}

		float GetOverheatingMaxValue(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751242034(relative to base address)
		float GetCurrentOverheatValue(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF75124200C(relative to base address)
		float GetCurrentOverheatPercent(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751241FE4(relative to base address)
	};

}
