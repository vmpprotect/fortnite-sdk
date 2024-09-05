#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: CosmeticsFrameworkItems
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct CosmeticsFrameworkItems.CosmeticPropertyBase
	// Size: 0x4 (0x4 - 0x0)
	struct FCosmeticPropertyBase	
	{
	public:
		FGameplayTag PropertyTag; // 0x0(0x4)
	};


	// Struct CosmeticsFrameworkItems.CosmeticProperty_Vector
	// Inherited from FCosmeticPropertyBase
	// Size: 0x1C (0x20 - 0x4)
	struct FCosmeticProperty_Vector : public FCosmeticPropertyBase	
	{
	public:
		unsigned char UnknownData00_3[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FVector Value; // 0x8(0x18)
	};


	// Struct CosmeticsFrameworkItems.CosmeticProperty_TableRow
	// Inherited from FCosmeticPropertyBase
	// Size: 0x14 (0x18 - 0x4)
	struct FCosmeticProperty_TableRow : public FCosmeticPropertyBase	
	{
	public:
		unsigned char UnknownData00_3[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FDataTableRowHandle TableRow; // 0x8(0x10)
	};


	// Struct CosmeticsFrameworkItems.CosmeticProperty_GameplayTag
	// Inherited from FCosmeticPropertyBase
	// Size: 0x4 (0x8 - 0x4)
	struct FCosmeticProperty_GameplayTag : public FCosmeticPropertyBase	
	{
	public:
		FGameplayTag GameplayTag; // 0x4(0x4)
	};

}
