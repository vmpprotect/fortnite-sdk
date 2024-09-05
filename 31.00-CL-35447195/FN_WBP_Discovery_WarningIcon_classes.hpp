#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: WBP_Discovery_WarningIcon
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class /DiscoveryBrowser/WBP_Discovery_WarningIcon.WBP_Discovery_WarningIcon_C
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x10 (0x2C8 - 0x2B8)
	class UWBP_Discovery_WarningIcon_C : public UUserWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2B8(0x8)
		UWidgetAnimation Anim_WarningPulse; // 0x2C0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/WBP_Discovery_WarningIcon.WBP_Discovery_WarningIcon_C");
			return ret;
		}

		void TriggerWarningAnim(int32_t NumLoopsToPlay); // Flags: BlueprintCallable|BlueprintEvent 0x15D63333600
		void ExecuteUbergraph_WBP_Discovery_WarningIcon(int32_t EntryPoint); // Flags: Final 0x15D63333500
	};

}
