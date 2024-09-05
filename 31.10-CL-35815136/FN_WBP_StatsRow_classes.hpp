#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: WBP_StatsRow
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /Career/WBP_StatsRow.WBP_StatsRow_C
	// Inherited from UUserWidget -> UWidget -> UVisual -> UObject
	// Size: 0x78 (0x328 - 0x2B0)
	class UWBP_StatsRow_C : public UUserWidget	
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame; // 0x2B0(0x8)
		UCommonTextBlock* CommonTextBlock; // 0x2B8(0x8)
		UHorizontalBox* HB_Content; // 0x2C0(0x8)
		UImage* Image_Divisor; // 0x2C8(0x8)
		UImage* Image_Divisor; // 0x2D0(0x8)
		UWBP_StatsBlock_C* WBP_StatsBlock; // 0x2D8(0x8)
		UWBP_StatsBlock_C* WBP_StatsBlock; // 0x2E0(0x8)
		UWBP_StatsBlock_C* WBP_StatsBlock; // 0x2E8(0x8)
		UWBP_UIKit_Backplate_C* WBP_UIKit_Backplate; // 0x2F0(0x8)
		TArray<FText> Label; // 0x2F8(0x10)
		TArray<FText> RatioTextFormat; // 0x308(0x10)
		TArray<UTexture2D*> Icons; // 0x318(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Career/WBP_StatsRow.WBP_StatsRow_C");
			return ret;
		}

		void SetEmptyDataState(bool IsEmpty); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetBlockTemplate(int32_t Index, FText Label, FText RatioTextFormat, UTexture2D* IconTexture); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ApplyBlocksTemplates(); // Flags: Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void SetBlocksData(int32_t Index, FText ValueText, FText& RatioText); // Flags: Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void PreConstruct(bool IsDesignTime); // Flags: BlueprintCosmetic|Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void ExecuteUbergraph_WBP_StatsRow(int32_t EntryPoint); // Flags: Final, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};

}
