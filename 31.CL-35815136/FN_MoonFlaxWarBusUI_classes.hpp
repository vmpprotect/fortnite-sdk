#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: MoonFlaxWarBusUI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class MoonFlaxWarBusUI.MoonFlaxWarBusActionWidget
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x90 (0x340 - 0x2B0)
	class UMoonFlaxWarBusActionWidget : public UUserWidget	
	{
	public:
		unsigned char UnknownData00_3[0x80]; // 0x2B0(0x80) UNKNOWN PROPERTY
		FGameplayTag ActionActiveTag; // 0x330(0x4)
		FGameplayTag ActionCooldownTag; // 0x334(0x4)
		unsigned char UnknownData01_7[0x8]; // 0x338(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MoonFlaxWarBusUI.MoonFlaxWarBusActionWidget");
			return ret;
		}

		float GetCooldownTimeRemaining(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7514834F0(relative to base address)
		void BP_CooldownTagChanged(bool bIsInCooldown, float TotalDuration, float TimeRemaining); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BP_ActionTagChanged(bool bIsActionAvailable); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
