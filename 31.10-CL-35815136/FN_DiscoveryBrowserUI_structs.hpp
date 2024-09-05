#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: DiscoveryBrowserUI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct DiscoveryBrowserUI.ColorSchemeParamaterValues
	// Size: 0xA8 (0xA8 - 0x0)
	struct FColorSchemeParamaterValues	
	{
	public:
		UMaterialParameterCollection* AlternateMaterialCollection; // 0x0(0x8)
		TMap<FName, float> ScalarParameterValues; // 0x8(0x50)
		TMap<FName, FLinearColor> VectorParameterValues; // 0x58(0x50)
	};

}
