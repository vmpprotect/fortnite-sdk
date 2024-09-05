#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: DynamicRollTablesRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct DynamicRollTablesRuntime.FortDynamicRollResult
	// Size: 0x8 (0x8 - 0x0)
	struct FFortDynamicRollResult	
	{
	public:
		UFortItemDefinition Item; // 0x0(0x8)
	};


	// Struct DynamicRollTablesRuntime.FortDynamicRollBaseWeightTableRow
	// Inherited from FTableRowBase
	// Size: 0x30 (0x38 - 0x8)
	struct FFortDynamicRollBaseWeightTableRow : public FTableRowBase	
	{
	public:
		UFortItemDefinition ItemDefinition; // 0x8(0x8)
		float BaseWeight; // 0x10(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
		TArray ModTags; // 0x18(0x10)
		bool bOwningItemZerosWeight; // 0x28(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x29(0x3) UNKNOWN PROPERTY
		float MaxModifiedWeight; // 0x2C(0x4)
		float MinModifiedWeight; // 0x30(0x4)
		unsigned char UnknownData05_7[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
	};


	// Struct DynamicRollTablesRuntime.FortDynamicRollWeightModifierTableRow
	// Inherited from FTableRowBase
	// Size: 0x10 (0x18 - 0x8)
	struct FFortDynamicRollWeightModifierTableRow : public FTableRowBase	
	{
	public:
		FGameplayTag ActivatingPlayerTag; // 0x8(0x4)
		FGameplayTag TargetModTag; // 0xC(0x4)
		ERollModifierOperation WeightModifierOperation; // 0x10(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x11(0x3) UNKNOWN PROPERTY
		float WeightModificationValue; // 0x14(0x4)
	};


	// Struct DynamicRollTablesRuntime.DynamicRollModifiersActivatedByPlayerTagContainer
	// Size: 0x10 (0x10 - 0x0)
	struct FDynamicRollModifiersActivatedByPlayerTagContainer	
	{
	public:
		unsigned char UnknownData01_2[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
	};

}
