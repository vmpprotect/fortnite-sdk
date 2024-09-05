#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: CreativeDynamicUIRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct CreativeDynamicUIRuntime.CreativeDynamicUIAlignmentConstraint
	// Size: 0x18 (0x18 - 0x0)
	struct FCreativeDynamicUIAlignmentConstraint	
	{
	public:
		ECreativeDynamicUIAlignment Alignment; // 0x0(0x1)
		ECreativeDynamicUIAnchor Anchor; // 0x1(0x1)
		ECreativeDynamicUIAspectRatioType AspectRatio; // 0x2(0x1)
		unsigned char UnknownData01_6[0x5]; // 0x3(0x5) UNKNOWN PROPERTY
		FVector2D Offset; // 0x8(0x10)
	};


	// Struct CreativeDynamicUIRuntime.CreativeDynamicUIFixedSizeModifier
	// Size: 0xC (0xC - 0x0)
	struct FCreativeDynamicUIFixedSizeModifier	
	{
	public:
		FVector2f Size; // 0x0(0x8)
		bool bUseRenderTransform; // 0x8(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
	};


	// Struct CreativeDynamicUIRuntime.CreativeDynamicUIScaleSizeModifier
	// Size: 0xC (0xC - 0x0)
	struct FCreativeDynamicUIScaleSizeModifier	
	{
	public:
		FVector2f Scale; // 0x0(0x8)
		bool bUseRenderTransform; // 0x8(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
	};

}
