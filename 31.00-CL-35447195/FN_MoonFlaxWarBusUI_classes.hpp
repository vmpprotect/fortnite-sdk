#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: MoonFlaxWarBusUI
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class MoonFlaxWarBusUI.MoonFlaxWarBusActionWidget
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x90 (0x348 - 0x2B8)
	class UMoonFlaxWarBusActionWidget : public UUserWidget	
	{
	public:
		unsigned char UnknownData02_3[0x80]; // 0x2B8(0x80) UNKNOWN PROPERTY
		FGameplayTag ActionActiveTag; // 0x338(0x4)
		FGameplayTag ActionCooldownTag; // 0x33C(0x4)
		unsigned char UnknownData03_7[0x8]; // 0x340(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MoonFlaxWarBusUI.MoonFlaxWarBusActionWidget");
			return ret;
		}

		float GetCooldownTimeRemaining(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D0BBD8
		void BP_CooldownTagChanged(bool bIsInCooldown, float TotalDuration, float TimeRemaining); // Flags: Event|Protected|BlueprintEvent 0x7FF414D0BAF8
		void BP_ActionTagChanged(bool bIsActionAvailable); // Flags: Event|Protected|BlueprintEvent 0x7FF414D0BA18
	};

}
