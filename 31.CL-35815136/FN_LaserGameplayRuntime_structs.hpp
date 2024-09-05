#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: LaserGameplayRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct LaserGameplayRuntime.LaserGridConnectionEntry
	// Inherited from FFastArraySerializerItem
	// Size: 0xC (0x18 - 0xC)
	struct FLaserGridConnectionEntry : public FFastArraySerializerItem	
	{
	public:
		FLaserOutletConnection OutletConnection; // 0xC(0x2)
		ELaserConnectionState State; // 0xE(0x1)
		unsigned char UnknownData00_6[0x1]; // 0xF(0x1) UNKNOWN PROPERTY
		ULaserCapsuleComponent* LaserCapsuleComponent; // 0x10(0x8)
	};


	// Struct LaserGameplayRuntime.LaserOutletConnection
	// Size: 0x2 (0x2 - 0x0)
	struct FLaserOutletConnection	
	{
	public:
		char PrimaryOutletIndex; // 0x0(0x1)
		char SecondaryOutletIndex; // 0x1(0x1)
	};


	// Struct LaserGameplayRuntime.LaserGridConnectionArray
	// Inherited from FFastArraySerializer
	// Size: 0x10 (0x118 - 0x108)
	struct FLaserGridConnectionArray : public FFastArraySerializer	
	{
	public:
		TArray<FLaserGridConnectionEntry> Entries; // 0x108(0x10)
	};


	// Struct LaserGameplayRuntime.LaserGridOutletEntry
	// Inherited from FFastArraySerializerItem
	// Size: 0x4 (0x10 - 0xC)
	struct FLaserGridOutletEntry : public FFastArraySerializerItem	
	{
	public:
		char InstanceIndex; // 0xC(0x1)
		ELaserConnectionState State; // 0xD(0x1)
		unsigned char UnknownData00_7[0x2]; // 0xE(0x2) UNKNOWN PROPERTY
	};


	// Struct LaserGameplayRuntime.LaserGridOutletArray
	// Inherited from FFastArraySerializer
	// Size: 0x18 (0x120 - 0x108)
	struct FLaserGridOutletArray : public FFastArraySerializer	
	{
	public:
		TArray<FLaserGridOutletEntry> Entries; // 0x108(0x10)
		unsigned char UnknownData00_7[0x8]; // 0x118(0x8) UNKNOWN PROPERTY
	};


	// Struct LaserGameplayRuntime.LaserGridPattern
	// Size: 0x18 (0x18 - 0x0)
	struct FLaserGridPattern	
	{
	public:
		TArray<FLaserOutletConnection> OutletConnections; // 0x0(0x10)
		float duration; // 0x10(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};

}
