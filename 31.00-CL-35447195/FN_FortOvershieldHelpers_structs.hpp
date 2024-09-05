#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: FortOvershieldHelpers
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct FortOvershieldHelpers.FortOvershieldDelegateContainer
	// Size: 0x48 (0x48 - 0x0)
	struct FFortOvershieldDelegateContainer	
	{
	public:
		FDelegateProperty OnOvershieldChanged; // 0x0(0xC)
		FDelegateProperty OnShieldedDamage; // 0xC(0xC)
		FDelegateProperty OnOvershieldedDamage; // 0x18(0xC)
		FDelegateProperty OnShieldDestroyed; // 0x24(0xC)
		FDelegateProperty OnOvershieldDestroyed; // 0x30(0xC)
		FDelegateProperty OnDamageReceived; // 0x3C(0xC)
	};

}
