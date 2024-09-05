#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: EngineMessages
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct EngineMessages.EngineServicePing
	// Size: 0x1 (0x1 - 0x0)
	struct FEngineServicePing	
	{
	public:
		unsigned char UnknownData00_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct EngineMessages.EngineServicePong
	// Size: 0x50 (0x50 - 0x0)
	struct FEngineServicePong	
	{
	public:
		FString CurrentLevel; // 0x0(0x10)
		int32_t EngineVersion; // 0x10(0x4)
		bool HasBegunPlay; // 0x14(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x15(0x3) UNKNOWN PROPERTY
		FGuid InstanceID; // 0x18(0x10)
		FString InstanceType; // 0x28(0x10)
		FGuid SessionId; // 0x38(0x10)
		float WorldTimeSeconds; // 0x48(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x4C(0x4) UNKNOWN PROPERTY
	};


	// Struct EngineMessages.EngineServiceAuthDeny
	// Size: 0x20 (0x20 - 0x0)
	struct FEngineServiceAuthDeny	
	{
	public:
		FString UserName; // 0x0(0x10)
		FString UserToDeny; // 0x10(0x10)
	};


	// Struct EngineMessages.EngineServiceAuthGrant
	// Size: 0x20 (0x20 - 0x0)
	struct FEngineServiceAuthGrant	
	{
	public:
		FString UserName; // 0x0(0x10)
		FString UserToGrant; // 0x10(0x10)
	};


	// Struct EngineMessages.EngineServiceExecuteCommand
	// Size: 0x20 (0x20 - 0x0)
	struct FEngineServiceExecuteCommand	
	{
	public:
		FString Command; // 0x0(0x10)
		FString UserName; // 0x10(0x10)
	};


	// Struct EngineMessages.EngineServiceTerminate
	// Size: 0x10 (0x10 - 0x0)
	struct FEngineServiceTerminate	
	{
	public:
		FString UserName; // 0x0(0x10)
	};


	// Struct EngineMessages.EngineServiceNotification
	// Size: 0x18 (0x18 - 0x0)
	struct FEngineServiceNotification	
	{
	public:
		FString Text; // 0x0(0x10)
		double TimeSeconds; // 0x10(0x8)
	};


	// Struct EngineMessages.TraceControlStatusPing
	// Size: 0x1 (0x1 - 0x0)
	struct FTraceControlStatusPing	
	{
	public:
		unsigned char UnknownData00_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct EngineMessages.TraceControlStatus
	// Size: 0x58 (0x58 - 0x0)
	struct FTraceControlStatus	
	{
	public:
		FString Endpoint; // 0x0(0x10)
		FGuid SessionGuid; // 0x10(0x10)
		FGuid TraceGuid; // 0x20(0x10)
		uint64_t BytesSent; // 0x30(0x8)
		uint64_t BytesTraced; // 0x38(0x8)
		uint64_t MemoryUsed; // 0x40(0x8)
		uint32_t CacheAllocated; // 0x48(0x4)
		uint32_t CacheUsed; // 0x4C(0x4)
		uint32_t CacheWaste; // 0x50(0x4)
		bool bAreStatNamedEventsEnabled; // 0x54(0x1)
		bool bIsPaused; // 0x55(0x1)
		unsigned char UnknownData00_7[0x2]; // 0x56(0x2) UNKNOWN PROPERTY
	};


	// Struct EngineMessages.TraceControlSettingsPing
	// Size: 0x1 (0x1 - 0x0)
	struct FTraceControlSettingsPing	
	{
	public:
		unsigned char UnknownData00_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct EngineMessages.TraceControlSettings
	// Size: 0x8 (0x8 - 0x0)
	struct FTraceControlSettings	
	{
	public:
		bool bUseWorkerThread; // 0x0(0x1)
		bool bUseImportantCache; // 0x1(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x2(0x2) UNKNOWN PROPERTY
		uint32_t TailSizeBytes; // 0x4(0x4)
	};


	// Struct EngineMessages.TraceControlChannelsPing
	// Size: 0x4 (0x4 - 0x0)
	struct FTraceControlChannelsPing	
	{
	public:
		uint32_t KnownChannelCount; // 0x0(0x4)
	};


	// Struct EngineMessages.TraceControlChannelsDesc
	// Size: 0x40 (0x40 - 0x0)
	struct FTraceControlChannelsDesc	
	{
	public:
		TArray<FString> Channels; // 0x0(0x10)
		TArray<uint32_t> Ids; // 0x10(0x10)
		TArray<FString> Descriptions; // 0x20(0x10)
		TArray<uint32_t> ReadOnlyIds; // 0x30(0x10)
	};


	// Struct EngineMessages.TraceControlChannelsStatus
	// Size: 0x10 (0x10 - 0x0)
	struct FTraceControlChannelsStatus	
	{
	public:
		TArray<uint32_t> EnabledIds; // 0x0(0x10)
	};


	// Struct EngineMessages.TraceControlChannelsSet
	// Size: 0x20 (0x20 - 0x0)
	struct FTraceControlChannelsSet	
	{
	public:
		TArray<uint32_t> ChannelIdsToEnable; // 0x0(0x10)
		TArray<uint32_t> ChannelIdsToDisable; // 0x10(0x10)
	};


	// Struct EngineMessages.TraceControlDiscoveryPing
	// Size: 0x20 (0x20 - 0x0)
	struct FTraceControlDiscoveryPing	
	{
	public:
		FGuid SessionId; // 0x0(0x10)
		FGuid InstanceID; // 0x10(0x10)
	};


	// Struct EngineMessages.TraceControlDiscovery
	// Inherited from FTraceControlStatus
	// Size: 0x20 (0x78 - 0x58)
	struct FTraceControlDiscovery : public FTraceControlStatus	
	{
	public:
		FGuid SessionId; // 0x58(0x10)
		FGuid InstanceID; // 0x68(0x10)
	};


	// Struct EngineMessages.TraceControlStop
	// Size: 0x1 (0x1 - 0x0)
	struct FTraceControlStop	
	{
	public:
		unsigned char UnknownData00_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct EngineMessages.TraceControlStartCommon
	// Size: 0x18 (0x18 - 0x0)
	struct FTraceControlStartCommon	
	{
	public:
		FString Channels; // 0x0(0x10)
		bool bExcludeTail; // 0x10(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
	};


	// Struct EngineMessages.TraceControlSend
	// Inherited from FTraceControlStartCommon
	// Size: 0x10 (0x28 - 0x18)
	struct FTraceControlSend : public FTraceControlStartCommon	
	{
	public:
		FString Host; // 0x18(0x10)
	};


	// Struct EngineMessages.TraceControlFile
	// Inherited from FTraceControlStartCommon
	// Size: 0x18 (0x30 - 0x18)
	struct FTraceControlFile : public FTraceControlStartCommon	
	{
	public:
		FString File; // 0x18(0x10)
		bool bTruncateFile; // 0x28(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x29(0x7) UNKNOWN PROPERTY
	};


	// Struct EngineMessages.TraceControlPause
	// Size: 0x1 (0x1 - 0x0)
	struct FTraceControlPause	
	{
	public:
		unsigned char UnknownData00_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct EngineMessages.TraceControlResume
	// Size: 0x1 (0x1 - 0x0)
	struct FTraceControlResume	
	{
	public:
		unsigned char UnknownData00_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct EngineMessages.TraceControlSnapshotSend
	// Size: 0x10 (0x10 - 0x0)
	struct FTraceControlSnapshotSend	
	{
	public:
		FString Host; // 0x0(0x10)
	};


	// Struct EngineMessages.TraceControlSnapshotFile
	// Size: 0x10 (0x10 - 0x0)
	struct FTraceControlSnapshotFile	
	{
	public:
		FString File; // 0x0(0x10)
	};


	// Struct EngineMessages.TraceControlBookmark
	// Size: 0x10 (0x10 - 0x0)
	struct FTraceControlBookmark	
	{
	public:
		FString Label; // 0x0(0x10)
	};


	// Struct EngineMessages.TraceControlScreenshot
	// Size: 0x18 (0x18 - 0x0)
	struct FTraceControlScreenshot	
	{
	public:
		FString Name; // 0x0(0x10)
		bool bShowUI; // 0x10(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
	};


	// Struct EngineMessages.TraceControlSetStatNamedEvents
	// Size: 0x1 (0x1 - 0x0)
	struct FTraceControlSetStatNamedEvents	
	{
	public:
		bool bEnabled; // 0x0(0x1)
	};

}
