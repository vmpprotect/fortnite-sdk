#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: WeaponModsCodeRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct WeaponModsCodeRuntime.FortLocalModPurchaseEventParams
	// Size: 0x10 (0x10 - 0x0)
	struct FFortLocalModPurchaseEventParams	
	{
	public:
		AFortWeapon WeaponActor; // 0x0(0x8)
		UFortWeaponModItemDefinition WeaponMod; // 0x8(0x8)
	};


	// Struct WeaponModsCodeRuntime.FortModStationDataRow
	// Inherited from FTableRowBase
	// Size: 0x10 (0x18 - 0x8)
	struct FFortModStationDataRow : public FTableRowBase	
	{
	public:
		UFortWeaponModItemDefinition WeaponMod; // 0x8(0x8)
		float GoldCost; // 0x10(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct WeaponModsCodeRuntime.FortModSlotPurchaseList
	// Size: 0x10 (0x10 - 0x0)
	struct FFortModSlotPurchaseList	
	{
	public:
		TArray Mods; // 0x0(0x10)
	};

}
