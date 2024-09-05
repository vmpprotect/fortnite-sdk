#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: WBP_StatsRow
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class /Career/WBP_StatsRow.WBP_StatsRow_C
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x78 (0x330 - 0x2B8)
	class UWBP_StatsRow_C : public UUserWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2B8(0x8)
		UCommonTextBlock CommonTextBlock; // 0x2C0(0x8)
		UHorizontalBox HB_Content; // 0x2C8(0x8)
		UImage Image_Divisor; // 0x2D0(0x8)
		UImage Image_Divisor; // 0x2D8(0x8)
		UWBP_StatsBlock_C WBP_StatsBlock; // 0x2E0(0x8)
		UWBP_StatsBlock_C WBP_StatsBlock; // 0x2E8(0x8)
		UWBP_StatsBlock_C WBP_StatsBlock; // 0x2F0(0x8)
		UWBP_UIKit_Backplate_C WBP_UIKit_Backplate; // 0x2F8(0x8)
		TArray Label; // 0x300(0x10)
		TArray RatioTextFormat; // 0x310(0x10)
		TArray Icons; // 0x320(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Career/WBP_StatsRow.WBP_StatsRow_C");
			return ret;
		}

		void SetEmptyDataState(bool IsEmpty); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D637BE800
		void SetBlockTemplate(int32_t Index, FText Label, FText RatioTextFormat, UTexture2D IconTexture); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D637BE900
		void ApplyBlocksTemplates(); // Flags: Public|BlueprintCallable|BlueprintEvent 0x15D637BAB00
		void SetBlocksData(int32_t Index, FText ValueText, FText& RatioText); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent 0x15D637BA800
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent 0x15D637BA900
		void ExecuteUbergraph_WBP_StatsRow(int32_t EntryPoint); // Flags: Final 0x15D637BAA00
	};

}
