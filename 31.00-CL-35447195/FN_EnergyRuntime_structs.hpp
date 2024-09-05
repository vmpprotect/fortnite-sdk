#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: EnergyRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct EnergyRuntime.EnergyChannelingData
	// Size: 0x18 (0x18 - 0x0)
	struct FEnergyChannelingData	
	{
	public:
		float EnergyPerSecond; // 0x0(0x4)
		FGameplayTag EnergyChannelingPurposeIdentifier; // 0x4(0x4)
		UObject OptionalEnergyChannelingSource; // 0x8(0x8)
		bool bShouldStopApplyingNextTick; // 0x10(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
	};


	// Struct EnergyRuntime.EnergyRegenOverrideData
	// Size: 0x10 (0x10 - 0x0)
	struct FEnergyRegenOverrideData	
	{
	public:
		FGameplayTag EnergyRegenIdentifier; // 0x0(0x4)
		float RechargeAmountPerSecond; // 0x4(0x4)
		float RechargeDelayInSeconds; // 0x8(0x4)
		float RechargePercentageLimit; // 0xC(0x4)
	};

}
