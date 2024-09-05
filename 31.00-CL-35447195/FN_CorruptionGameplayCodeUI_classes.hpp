#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: CorruptionGameplayCodeUI
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class CorruptionGameplayCodeUI.FortPowerupReticleExtensionWidget
	// Inherited from UFortWeaponReticleExtensionWidgetBase -> UFortHUDElementWidget -> UCommonUserWidget -> UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x8 (0x360 - 0x358)
	class UFortPowerupReticleExtensionWidget : public UFortWeaponReticleExtensionWidgetBase	
	{
	public:
		EPowerupHeatState LastPowerupHeatState; // 0x358(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x359(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CorruptionGameplayCodeUI.FortPowerupReticleExtensionWidget");
			return ret;
		}

		float GetOverheatingMaxValue(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414CCD2D8
		float GetCurrentOverheatValue(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414CCD1F8
		float GetCurrentOverheatPercent(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 0x7FF414CCD118
	};

}
