#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: WBP_LockedStatus
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /DiscoveryBrowser/WBP_LockedStatus.WBP_LockedStatus_C
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x31 (0x2E1 - 0x2B0)
	class UWBP_LockedStatus_C : public UUserWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2B0(0x8)
		UWidgetAnimation* Anim_OnHover; // 0x2B8(0x8)
		UWBP_UIKit_StatusIndicator_C* StatusIndicator_Locked; // 0x2C0(0x8)
		UWBP_UIKit_Highlight_C* WBP_UIKit_Highlight; // 0x2C8(0x8)
		FText LockedReason; // 0x2D0(0x10)
		bool UseNewDesign; // 0x2E0(0x1)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/WBP_LockedStatus.WBP_LockedStatus_C");
			return ret;
		}

		void SetDefaultVisualsState(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void On Lock Hover Select(bool bIsHoverSelected); // Flags: BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void Construct(); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_LockedStatus(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
