#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: WBP_Discovery_MessageNoResults
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class /DiscoveryBrowser/WBP_Discovery_MessageNoResults.WBP_Discovery_NoResultsMessage_C
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x38 (0x2F0 - 0x2B8)
	class UWBP_Discovery_NoResultsMessage_C : public UUserWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2B8(0x8)
		UCommonTextBlock Description; // 0x2C0(0x8)
		UCommonTextBlock Text_FlavorTitle; // 0x2C8(0x8)
		FText FlavorMessageBase; // 0x2D0(0x10)
		FText FlavorTitleBase; // 0x2E0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/DiscoveryBrowser/WBP_Discovery_MessageNoResults.WBP_Discovery_NoResultsMessage_C");
			return ret;
		}

		void Set Message Text Overrides(FText InTitle, FText InMessage); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D4B1AA100
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D4B1AA700
		void ExecuteUbergraph_WBP_Discovery_NoResultsMessage(int32_t EntryPoint); // Flags: Final 0x15D8CA48A00
	};

}
