#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: JunoCoreUI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct JunoCoreUI.JunoContextMenuInfo
	// Size: 0x8 (0x8 - 0x0)
	struct FJunoContextMenuInfo	
	{
	public:
		EJunoContextMenuAction MenuAction; // 0x0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		int32_t QuantityCount; // 0x4(0x4)
	};


	// Struct JunoCoreUI.JunoContextMenuQuantityChange
	// Size: 0x8 (0x8 - 0x0)
	struct FJunoContextMenuQuantityChange	
	{
	public:
		EJunoContextMenuAction MenuAction; // 0x0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		int32_t QuantityCount; // 0x4(0x4)
	};


	// Struct JunoCoreUI.JunoWorldImageDataRow
	// Inherited from FTableRowBase
	// Size: 0x20 (0x28 - 0x8)
	struct FJunoWorldImageDataRow : public FTableRowBase	
	{
	public:
		TWeakObjectPtr<UTexture2D*> WorldImage; // 0x8(0x20)
	};

}
