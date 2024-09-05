#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: LiveLinkMessageBusFramework
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct LiveLinkMessageBusFramework.LiveLinkPingMessage
	// Size: 0x14 (0x14 - 0x0)
	struct FLiveLinkPingMessage	
	{
	public:
		FGuid PollRequest; // 0x0(0x10)
		int32_t LiveLinkVersion; // 0x10(0x4)
	};


	// Struct LiveLinkMessageBusFramework.LiveLinkPongMessage
	// Size: 0x40 (0x40 - 0x0)
	struct FLiveLinkPongMessage	
	{
	public:
		FString ProviderName; // 0x0(0x10)
		FString MachineName; // 0x10(0x10)
		FGuid PollRequest; // 0x20(0x10)
		int32_t LiveLinkVersion; // 0x30(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
		double CreationPlatformTime; // 0x38(0x8)
	};


	// Struct LiveLinkMessageBusFramework.LiveLinkConnectMessage
	// Size: 0x4 (0x4 - 0x0)
	struct FLiveLinkConnectMessage	
	{
	public:
		int32_t LiveLinkVersion; // 0x0(0x4)
	};


	// Struct LiveLinkMessageBusFramework.LiveLinkHeartbeatMessage
	// Size: 0x1 (0x1 - 0x0)
	struct FLiveLinkHeartbeatMessage	
	{
	public:
		unsigned char UnknownData00_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct LiveLinkMessageBusFramework.LiveLinkClearSubject
	// Size: 0x4 (0x4 - 0x0)
	struct FLiveLinkClearSubject	
	{
	public:
		FName SubjectName; // 0x0(0x4)
	};


	// Struct LiveLinkMessageBusFramework.LiveLinkSubjectDataMessage
	// Size: 0x28 (0x28 - 0x0)
	struct FLiveLinkSubjectDataMessage	
	{
	public:
		FLiveLinkRefSkeleton RefSkeleton; // 0x0(0x20)
		FName SubjectName; // 0x20(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
	};


	// Struct LiveLinkMessageBusFramework.LiveLinkSubjectFrameMessage
	// Size: 0x90 (0x90 - 0x0)
	struct FLiveLinkSubjectFrameMessage	
	{
	public:
		FName SubjectName; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TArray<FTransform> Transforms; // 0x8(0x10)
		TArray<FLiveLinkCurveElement> Curves; // 0x18(0x10)
		FLiveLinkMetaData MetaData; // 0x28(0x60)
		double Time; // 0x88(0x8)
	};

}
