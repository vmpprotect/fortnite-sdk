#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: VehicleCosmeticsAudioRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct VehicleCosmeticsAudioRuntime.DistancePriority
	// Size: 0x8 (0x8 - 0x0)
	struct FDistancePriority	
	{
	public:
		float Distance; // 0x0(0x4)
		float Priority; // 0x4(0x4)
	};


	// Struct VehicleCosmeticsAudioRuntime.VehicleCosmeticLoadRequestInfo
	// Size: 0x38 (0x38 - 0x0)
	struct FVehicleCosmeticLoadRequestInfo	
	{
	public:
		TScriptInterface User; // 0x0(0x10)
		TWeakObjectPtr Sound; // 0x10(0x20)
		bool bIsClientEquippedCosmetic; // 0x30(0x1)
		bool bIsIPCosmetic; // 0x31(0x1)
		bool bIsClientPartyCosmetic; // 0x32(0x1)
		unsigned char UnknownData01_7[0x5]; // 0x33(0x5) UNKNOWN PROPERTY
	};

}
