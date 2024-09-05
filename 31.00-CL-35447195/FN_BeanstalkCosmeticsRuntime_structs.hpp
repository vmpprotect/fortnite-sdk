#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: BeanstalkCosmeticsRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct BeanstalkCosmeticsRuntime.BeanCosmeticDataTableRow
	// Inherited from FTableRowBase
	// Size: 0x20 (0x28 - 0x8)
	struct FBeanCosmeticDataTableRow : public FTableRowBase	
	{
	public:
		TWeakObjectPtr Definition; // 0x8(0x20)
	};


	// Struct BeanstalkCosmeticsRuntime.BeanEmoteConversionRow
	// Inherited from FTableRowBase
	// Size: 0x20 (0x28 - 0x8)
	struct FBeanEmoteConversionRow : public FTableRowBase	
	{
	public:
		TWeakObjectPtr EmoteDefinition; // 0x8(0x20)
	};

}
