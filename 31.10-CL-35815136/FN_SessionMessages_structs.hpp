#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: SessionMessages
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct SessionMessages.SessionServicePing
	// Size: 0x10 (0x10 - 0x0)
	struct FSessionServicePing	
	{
	public:
		FString UserName; // 0x0(0x10)
	};


	// Struct SessionMessages.SessionServicePong
	// Size: 0x90 (0x90 - 0x0)
	struct FSessionServicePong	
	{
	public:
		bool AUTHORIZED; // 0x0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		FString BuildDate; // 0x8(0x10)
		FString DeviceName; // 0x18(0x10)
		FGuid InstanceID; // 0x28(0x10)
		FString InstanceName; // 0x38(0x10)
		FString PlatformName; // 0x48(0x10)
		FGuid SessionId; // 0x58(0x10)
		FString SessionName; // 0x68(0x10)
		FString SessionOwner; // 0x78(0x10)
		bool Standalone; // 0x88(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x89(0x7) UNKNOWN PROPERTY
	};


	// Struct SessionMessages.SessionServiceLog
	// Size: 0x38 (0x38 - 0x0)
	struct FSessionServiceLog	
	{
	public:
		FName category; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FString Data; // 0x8(0x10)
		FGuid InstanceID; // 0x18(0x10)
		double TimeSeconds; // 0x28(0x8)
		char Verbosity; // 0x30(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x31(0x7) UNKNOWN PROPERTY
	};


	// Struct SessionMessages.SessionServiceLogSubscribe
	// Size: 0x1 (0x1 - 0x0)
	struct FSessionServiceLogSubscribe	
	{
	public:
		unsigned char UnknownData00_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct SessionMessages.SessionServiceLogUnsubscribe
	// Size: 0x1 (0x1 - 0x0)
	struct FSessionServiceLogUnsubscribe	
	{
	public:
		unsigned char UnknownData00_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};

}
