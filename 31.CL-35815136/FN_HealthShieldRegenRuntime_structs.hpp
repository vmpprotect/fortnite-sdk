#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: HealthShieldRegenRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct HealthShieldRegenRuntime.FortHealthShieldRegen_ShieldDelegateContainer
	// Size: 0x30 (0x30 - 0x0)
	struct FFortHealthShieldRegen_ShieldDelegateContainer	
	{
	public:
		FDelegateProperty OnShieldChanged; // 0x0(0xC)
		FDelegateProperty OnShieldedDamage; // 0xC(0xC)
		FDelegateProperty OnShieldDestroyed; // 0x18(0xC)
		FDelegateProperty OnDamageReceived; // 0x24(0xC)
	};


	// Struct HealthShieldRegenRuntime.FortHealthShieldRegen_HealthDelegateContainer
	// Size: 0x18 (0x18 - 0x0)
	struct FFortHealthShieldRegen_HealthDelegateContainer	
	{
	public:
		FDelegateProperty OnHealthChanged; // 0x0(0xC)
		FDelegateProperty OnDamageReceived; // 0xC(0xC)
	};

}
