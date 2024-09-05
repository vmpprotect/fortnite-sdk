#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: MaterialShaderQualitySettings
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct MaterialShaderQualitySettings.MaterialQualityOverrides
	// Size: 0x8 (0x8 - 0x0)
	struct FMaterialQualityOverrides	
	{
	public:
		bool bDiscardQualityDuringCook; // 0x0(0x1)
		bool bEnableOverride; // 0x1(0x1)
		bool bForceFullyRough; // 0x2(0x1)
		bool bForceNonMetal; // 0x3(0x1)
		bool bForceDisableLMDirectionality; // 0x4(0x1)
		bool bForceDisablePreintegratedGF; // 0x5(0x1)
		bool bDisableMaterialNormalCalculation; // 0x6(0x1)
		EMobileShadowQuality MobileShadowQuality; // 0x7(0x1)
	};

}
