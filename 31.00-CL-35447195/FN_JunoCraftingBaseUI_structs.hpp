#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: JunoCraftingBaseUI
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct JunoCraftingBaseUI.JunoCraftingIngredientShopUIData
	// Inherited from FCraftingIngredientUIData -> FItemShopTableRowBase -> FTableRowBase
	// Size: 0x18 (0x68 - 0x50)
	struct FJunoCraftingIngredientShopUIData : public FCraftingIngredientUIData	
	{
	public:
		FText DisplayName; // 0x50(0x10)
		EFortRarity Rarity; // 0x60(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x61(0x7) UNKNOWN PROPERTY
	};

}
