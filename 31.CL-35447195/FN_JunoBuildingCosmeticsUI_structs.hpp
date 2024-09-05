#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: JunoBuildingCosmeticsUI
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct JunoBuildingCosmeticsUI.JunoShopBuildPartInfo
	// Size: 0x18 (0x18 - 0x0)
	struct FJunoShopBuildPartInfo	
	{
	public:
		FText PartName; // 0x0(0x10)
		int32_t PartQuantity; // 0x10(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct JunoBuildingCosmeticsUI.JunoShopPropInfo
	// Size: 0x18 (0x18 - 0x0)
	struct FJunoShopPropInfo	
	{
	public:
		FText DisplayName; // 0x0(0x10)
		bool IsInteractable; // 0x10(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
	};


	// Struct JunoBuildingCosmeticsUI.JunoShopBuildResourceRequirement
	// Size: 0x38 (0x38 - 0x0)
	struct FJunoShopBuildResourceRequirement	
	{
	public:
		TWeakObjectPtr ResourceImage; // 0x0(0x20)
		FText ResourceName; // 0x20(0x10)
		int32_t ResourceQuantity; // 0x30(0x4)
		EFortRarity ResourceRarity; // 0x34(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x35(0x3) UNKNOWN PROPERTY
	};

}
