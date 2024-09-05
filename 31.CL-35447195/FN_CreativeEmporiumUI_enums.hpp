#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: CreativeEmporiumUI
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/CreativeEmporiumUI.EFortEmporiumLayoutVersion
	enum EFortEmporiumLayoutVersion
	{
		EFortEmporiumLayoutVersion__Original = 0,
		EFortEmporiumLayoutVersion__Version = 2,
	};


	// Enum /Script/CreativeEmporiumUI.EFortEmporiumItemTagFilterMode
	enum EFortEmporiumItemTagFilterMode
	{
		EFortEmporiumItemTagFilterMode__MatchAny = 0,
		EFortEmporiumItemTagFilterMode__MatchAll = 1,
	};


	// Enum /Script/CreativeEmporiumUI.EFortEmporiumItemPriceFilter
	enum EFortEmporiumItemPriceFilter
	{
		EFortEmporiumItemPriceFilter__Invalid = 0,
		EFortEmporiumItemPriceFilter__Free = 1,
		EFortEmporiumItemPriceFilter__Premium = 2,
		EFortEmporiumItemPriceFilter__All = FF,
	};


	// Enum /Script/CreativeEmporiumUI.EFortEmporiumItemFilterMode
	enum EFortEmporiumItemFilterMode
	{
		EFortEmporiumItemFilterMode__Price = 0,
		EFortEmporiumItemFilterMode__License = 1,
	};


	// Enum /Script/CreativeEmporiumUI.EFortEmporiumItemSortMode
	enum EFortEmporiumItemSortMode
	{
		EFortEmporiumItemSortMode__MCP = 0,
		EFortEmporiumItemSortMode__AtoZ = 1,
		EFortEmporiumItemSortMode__ZtoA = 2,
		EFortEmporiumItemSortMode__PriceLowToHigh = 3,
		EFortEmporiumItemSortMode__PriceHighToLow = 4,
		EFortEmporiumItemSortMode__SizeLowToHigh = 5,
		EFortEmporiumItemSortMode__SizeHighToLow = 6,
	};


	// Enum /Script/CreativeEmporiumUI.EFortEmporiumItemLicense
	enum EFortEmporiumItemLicense
	{
		EFortEmporiumItemLicense__Invalid = 0,
		EFortEmporiumItemLicense__CC0 = 1,
		EFortEmporiumItemLicense__CC_BY = 2,
		EFortEmporiumItemLicense__CC_BY_SA = 4,
		EFortEmporiumItemLicense__CC_BY_NC = 8,
		EFortEmporiumItemLicense__CC_BY_NC_SA = 10,
		EFortEmporiumItemLicense__CC_BY_ND = 20,
		EFortEmporiumItemLicense__CC_BY_NC_ND = 40,
		EFortEmporiumItemLicense__Standard = 80,
		EFortEmporiumItemLicense__All = FF,
	};

}
