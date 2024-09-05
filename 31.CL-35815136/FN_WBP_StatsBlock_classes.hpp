#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: WBP_StatsBlock
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /Career/WBP_StatsBlock.WBP_StatsBlock_C
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x58 (0x308 - 0x2B0)
	class UWBP_StatsBlock_C : public UUserWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2B0(0x8)
		UCommonRichTextBlock* CommonRichTextBlock; // 0x2B8(0x8)
		UCommonRichTextBlock* CommonRichTextBlock; // 0x2C0(0x8)
		UCommonTextBlock* CommonTextBlock; // 0x2C8(0x8)
		UImage* Icon; // 0x2D0(0x8)
		UVerticalBox* VB_Content; // 0x2D8(0x8)
		FText Label; // 0x2E0(0x10)
		FText RatioTextFormat; // 0x2F0(0x10)
		UTexture2D* IconTexture; // 0x300(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Career/WBP_StatsBlock.WBP_StatsBlock_C");
			return ret;
		}

		void SetEmptyDataState(bool IsEmpty); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetValuesText(FText ValueText, FText& RatioText); // Flags: Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetTemplate(FText Label, FText RatioTextFormat, UTexture2D* IconTexture); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_StatsBlock(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
