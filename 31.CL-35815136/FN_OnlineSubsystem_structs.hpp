#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: OnlineSubsystem
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct OnlineSubsystem.NamedInterface
	// Size: 0x10 (0x10 - 0x0)
	struct FNamedInterface	
	{
	public:
		FName InterfaceName; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		UObject* InterfaceObject; // 0x8(0x8)
	};


	// Struct OnlineSubsystem.NamedInterfaceDef
	// Size: 0x18 (0x18 - 0x0)
	struct FNamedInterfaceDef	
	{
	public:
		FName InterfaceName; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FString InterfaceClassName; // 0x8(0x10)
	};

}
