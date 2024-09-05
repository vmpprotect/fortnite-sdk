#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: CloakGameplay
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct CloakGameplay.FortGameCueCloakModifier
	// Size: 0xD0 (0xD0 - 0x0)
	struct FFortGameCueCloakModifier	
	{
	public:
		FScalableFloat bCanBeEnabled; // 0x0(0x28)
		FScalableFloat VisibilityModifierMultiplicative; // 0x28(0x28)
		FScalableFloat VisibilityModifierAdditive; // 0x50(0x28)
		FScalableFloat AlphaTimeToEnabled; // 0x78(0x28)
		FScalableFloat AlphaTimeToDisabled; // 0xA0(0x28)
		bool bCurrentlyEnabled : 1; // 0xC8:0(0x1)
		unsigned char UnknownData00_5[0x3]; // 0xC9(0x3) UNKNOWN PROPERTY
		float CurrentAlpha; // 0xCC(0x4)
	};

}
