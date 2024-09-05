#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: WBP_Discovery_MessageNoResults
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /DiscoveryBrowser/WBP_Discovery_MessageNoResults.WBP_Discovery_NoResultsMessage_C
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x38 (0x2E8 - 0x2B0)
	class UWBP_Discovery_NoResultsMessage_C : public UUserWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2B0(0x8)
		UCommonTextBlock* Description; // 0x2B8(0x8)
		UCommonTextBlock* Text_FlavorTitle; // 0x2C0(0x8)
		FText FlavorMessageBase; // 0x2C8(0x10)
		FText FlavorTitleBase; // 0x2D8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/WBP_Discovery_MessageNoResults.WBP_Discovery_NoResultsMessage_C");
			return ret;
		}

		void Set Message Text Overrides(FText InTitle, FText InMessage); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_Discovery_NoResultsMessage(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
