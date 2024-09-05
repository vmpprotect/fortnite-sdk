#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: WBP_StatsBlock
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class /Career/WBP_StatsBlock.WBP_StatsBlock_C
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x58 (0x310 - 0x2B8)
	class UWBP_StatsBlock_C : public UUserWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2B8(0x8)
		UCommonRichTextBlock CommonRichTextBlock; // 0x2C0(0x8)
		UCommonRichTextBlock CommonRichTextBlock; // 0x2C8(0x8)
		UCommonTextBlock CommonTextBlock; // 0x2D0(0x8)
		UImage Icon; // 0x2D8(0x8)
		UVerticalBox VB_Content; // 0x2E0(0x8)
		FText Label; // 0x2E8(0x10)
		FText RatioTextFormat; // 0x2F8(0x10)
		UTexture2D IconTexture; // 0x308(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Career/WBP_StatsBlock.WBP_StatsBlock_C");
			return ret;
		}

		void SetEmptyDataState(bool IsEmpty); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D62E47A00
		void SetValuesText(FText ValueText, FText& RatioText); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 0x15D62E47800
		void SetTemplate(FText Label, FText RatioTextFormat, UTexture2D IconTexture); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D62E47900
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D62E47B00
		void ExecuteUbergraph_WBP_StatsBlock(int32_t EntryPoint); // Flags: Final 0x15D62E47C00
	};

}
