#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: LiveLinkHubMessaging
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct LiveLinkHubMessaging.LiveLinkHubTimecodeSettings
	// Size: 0x10 (0x10 - 0x0)
	struct FLiveLinkHubTimecodeSettings	
	{
	public:
		ELiveLinkHubTimecodeSource Source; // 0x0(0x4)
		FName SubjectName; // 0x4(0x4)
		FFrameRate DesiredFrameRate; // 0x8(0x8)
	};


	// Struct LiveLinkHubMessaging.LiveLinkClientInfoMessage
	// Size: 0x50 (0x50 - 0x0)
	struct FLiveLinkClientInfoMessage	
	{
	public:
		FString LongName; // 0x0(0x10)
		ELiveLinkClientStatus Status; // 0x10(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
		FString HostName; // 0x18(0x10)
		FString ProjectName; // 0x28(0x10)
		FString CurrentLevel; // 0x38(0x10)
		int32_t LiveLinkVersion; // 0x48(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x4C(0x4) UNKNOWN PROPERTY
	};


	// Struct LiveLinkHubMessaging.LiveLinkHubConnectMessage
	// Size: 0x50 (0x50 - 0x0)
	struct FLiveLinkHubConnectMessage	
	{
	public:
		FLiveLinkClientInfoMessage ClientInfo; // 0x0(0x50)
	};

}
