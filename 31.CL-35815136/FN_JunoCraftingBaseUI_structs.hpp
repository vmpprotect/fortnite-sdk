#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: JunoCraftingBaseUI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

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
		unsigned char UnknownData00_7[0x7]; // 0x61(0x7) UNKNOWN PROPERTY
	};


	// Struct JunoCraftingBaseUI.JunoBuildingFrontendUIData
	// Inherited from FTableRowBase
	// Size: 0x10 (0x18 - 0x8)
	struct FJunoBuildingFrontendUIData : public FTableRowBase	
	{
	public:
		TArray<FName> RequiredRecipes; // 0x8(0x10)
	};


	// Struct JunoCraftingBaseUI.JunoPropFrontendUIData
	// Inherited from FTableRowBase
	// Size: 0x10 (0x18 - 0x8)
	struct FJunoPropFrontendUIData : public FTableRowBase	
	{
	public:
		FText DisplayName; // 0x8(0x10)
	};

}
