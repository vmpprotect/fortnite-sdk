#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: JunoCoreUI
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct JunoCoreUI.JunoContextMenuInfo
	// Size: 0x8 (0x8 - 0x0)
	struct FJunoContextMenuInfo	
	{
	public:
		EJunoContextMenuAction MenuAction; // 0x0(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		int32_t QuantityCount; // 0x4(0x4)
	};


	// Struct JunoCoreUI.JunoContextMenuQuantityChange
	// Size: 0x8 (0x8 - 0x0)
	struct FJunoContextMenuQuantityChange	
	{
	public:
		EJunoContextMenuAction MenuAction; // 0x0(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		int32_t QuantityCount; // 0x4(0x4)
	};


	// Struct JunoCoreUI.JunoWorldImageDataRow
	// Inherited from FTableRowBase
	// Size: 0x20 (0x28 - 0x8)
	struct FJunoWorldImageDataRow : public FTableRowBase	
	{
	public:
		TWeakObjectPtr WorldImage; // 0x8(0x20)
	};

}
