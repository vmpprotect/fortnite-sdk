#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: BeanstalkCosmeticsRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct BeanstalkCosmeticsRuntime.BeanCosmeticDataTableRow
	// Inherited from FTableRowBase
	// Size: 0x20 (0x28 - 0x8)
	struct FBeanCosmeticDataTableRow : public FTableRowBase	
	{
	public:
		TWeakObjectPtr<UAthenaCharacterItemDefinition*> Definition; // 0x8(0x20)
	};


	// Struct BeanstalkCosmeticsRuntime.BeanEmoteConversionRow
	// Inherited from FTableRowBase
	// Size: 0x20 (0x28 - 0x8)
	struct FBeanEmoteConversionRow : public FTableRowBase	
	{
	public:
		TWeakObjectPtr<UAthenaDanceItemDefinition*> EmoteDefinition; // 0x8(0x20)
	};

}
