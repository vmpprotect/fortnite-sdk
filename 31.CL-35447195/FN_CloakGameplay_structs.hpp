#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: CloakGameplay
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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
		unsigned char UnknownData01_5[0x3]; // 0xC9(0x3) UNKNOWN PROPERTY
		float CurrentAlpha; // 0xCC(0x4)
	};

}
