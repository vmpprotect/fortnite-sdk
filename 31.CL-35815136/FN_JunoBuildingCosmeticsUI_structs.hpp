#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: JunoBuildingCosmeticsUI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct JunoBuildingCosmeticsUI.JunoShopBuildPartInfo
	// Size: 0x18 (0x18 - 0x0)
	struct FJunoShopBuildPartInfo	
	{
	public:
		FText PartName; // 0x0(0x10)
		int32_t PartQuantity; // 0x10(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct JunoBuildingCosmeticsUI.JunoShopPropInfo
	// Size: 0x18 (0x18 - 0x0)
	struct FJunoShopPropInfo	
	{
	public:
		FText DisplayName; // 0x0(0x10)
		bool IsInteractable; // 0x10(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
	};


	// Struct JunoBuildingCosmeticsUI.JunoShopBuildResourceRequirement
	// Size: 0x38 (0x38 - 0x0)
	struct FJunoShopBuildResourceRequirement	
	{
	public:
		TWeakObjectPtr<UTexture2D*> ResourceImage; // 0x0(0x20)
		FText ResourceName; // 0x20(0x10)
		int32_t ResourceQuantity; // 0x30(0x4)
		EFortRarity ResourceRarity; // 0x34(0x1)
		unsigned char UnknownData00_7[0x3]; // 0x35(0x3) UNKNOWN PROPERTY
	};

}
