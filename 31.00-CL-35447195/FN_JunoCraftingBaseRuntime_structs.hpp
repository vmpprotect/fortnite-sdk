#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: JunoCraftingBaseRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct JunoCraftingBaseRuntime.JunoCraftingCategoryFilteringUIDataRow
	// Inherited from FTableRowBase
	// Size: 0x68 (0x70 - 0x8)
	struct FJunoCraftingCategoryFilteringUIDataRow : public FTableRowBase	
	{
	public:
		EJunoCraftingCategoryFilteringUIEntryType EntryType; // 0x8(0x1)
		bool bEnabled; // 0x9(0x1)
		unsigned char UnknownData02_6[0x6]; // 0xA(0x6) UNKNOWN PROPERTY
		FText DisplayText; // 0x10(0x10)
		FGameplayTag IdTag; // 0x20(0x4)
		FGameplayTag ParentTag; // 0x24(0x4)
		FGameplayTagContainer FilterTags; // 0x28(0x20)
		TWeakObjectPtr DisplayIcon; // 0x48(0x20)
		int32_t SortingPriority; // 0x68(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x6C(0x4) UNKNOWN PROPERTY
	};


	// Struct JunoCraftingBaseRuntime.JunoCraftingHeaderUIDataEntry
	// Size: 0x18 (0x18 - 0x0)
	struct FJunoCraftingHeaderUIDataEntry	
	{
	public:
		FGameplayTag HeaderTag; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FText HeaderText; // 0x8(0x10)
	};


	// Struct JunoCraftingBaseRuntime.JunoCraftingSubCategoryUIDataEntry
	// Size: 0x68 (0x68 - 0x0)
	struct FJunoCraftingSubCategoryUIDataEntry	
	{
	public:
		FGameplayTag CategoryTag; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr CategoryIcon; // 0x8(0x20)
		FText CategoryTitle; // 0x28(0x10)
		FText CategoryTitleFormattedWithCount; // 0x38(0x10)
		TArray Headers; // 0x48(0x10)
		TArray SortingPreferences; // 0x58(0x10)
	};


	// Struct JunoCraftingBaseRuntime.JunoCraftingCategoryUIDataEntry
	// Size: 0x68 (0x68 - 0x0)
	struct FJunoCraftingCategoryUIDataEntry	
	{
	public:
		FGameplayTag CategoryTag; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr CategoryIcon; // 0x8(0x20)
		FText CategoryTitle; // 0x28(0x10)
		TArray Headers; // 0x38(0x10)
		TArray Subcategories; // 0x48(0x10)
		TArray SortingPreferences; // 0x58(0x10)
	};

}
