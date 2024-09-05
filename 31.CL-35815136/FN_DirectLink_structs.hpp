#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: DirectLink
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct DirectLink.DirectLinkMsg_EndpointLifecycle
	// Size: 0x8 (0x8 - 0x0)
	struct FDirectLinkMsg_EndpointLifecycle	
	{
	public:
		char LifecycleState; // 0x0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		uint32_t EndpointStateRevision; // 0x4(0x4)
	};


	// Struct DirectLink.NamedId
	// Size: 0x28 (0x28 - 0x0)
	struct FNamedId	
	{
	public:
		FString Name; // 0x0(0x10)
		FGuid ID; // 0x10(0x10)
		bool bIsPublic; // 0x20(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x21(0x7) UNKNOWN PROPERTY
	};


	// Struct DirectLink.DirectLinkMsg_EndpointState
	// Size: 0x88 (0x88 - 0x0)
	struct FDirectLinkMsg_EndpointState	
	{
	public:
		uint32_t StateRevision; // 0x0(0x4)
		uint32_t MinProtocolVersion; // 0x4(0x4)
		uint32_t ProtocolVersion; // 0x8(0x4)
		unsigned char UnknownData00_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FString UEVersion; // 0x10(0x10)
		FString ComputerName; // 0x20(0x10)
		FString UserName; // 0x30(0x10)
		uint32_t ProcessId; // 0x40(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x44(0x4) UNKNOWN PROPERTY
		FString ExecutableName; // 0x48(0x10)
		FString NiceName; // 0x58(0x10)
		TArray<FNamedId> Destinations; // 0x68(0x10)
		TArray<FNamedId> Sources; // 0x78(0x10)
	};


	// Struct DirectLink.DirectLinkMsg_QueryEndpointState
	// Size: 0x1 (0x1 - 0x0)
	struct FDirectLinkMsg_QueryEndpointState	
	{
	public:
		unsigned char UnknownData00_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct DirectLink.DirectLinkMsg_OpenStreamRequest
	// Size: 0x28 (0x28 - 0x0)
	struct FDirectLinkMsg_OpenStreamRequest	
	{
	public:
		bool bRequestFromSource; // 0x0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		int32_t RequestFromStreamPort; // 0x4(0x4)
		FGuid SourceGuid; // 0x8(0x10)
		FGuid DestinationGuid; // 0x18(0x10)
	};


	// Struct DirectLink.DirectLinkMsg_OpenStreamAnswer
	// Size: 0x20 (0x20 - 0x0)
	struct FDirectLinkMsg_OpenStreamAnswer	
	{
	public:
		int32_t RecipientStreamPort; // 0x0(0x4)
		bool bAccepted; // 0x4(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
		FString Error; // 0x8(0x10)
		int32_t OpenedStreamPort; // 0x18(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
	};


	// Struct DirectLink.DirectLinkMsg_CloseStreamRequest
	// Size: 0x4 (0x4 - 0x0)
	struct FDirectLinkMsg_CloseStreamRequest	
	{
	public:
		int32_t RecipientStreamPort; // 0x0(0x4)
	};


	// Struct DirectLink.DirectLinkMsg_DeltaMessage
	// Size: 0x20 (0x20 - 0x0)
	struct FDirectLinkMsg_DeltaMessage	
	{
	public:
		int32_t DestinationStreamPort; // 0x0(0x4)
		int8_t BatchCode; // 0x4(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
		int32_t MessageCode; // 0x8(0x4)
		char Kind; // 0xC(0x1)
		bool CompressedPayload; // 0xD(0x1)
		unsigned char UnknownData01_6[0x2]; // 0xE(0x2) UNKNOWN PROPERTY
		TArray<char> Payload; // 0x10(0x10)
	};


	// Struct DirectLink.DirectLinkMsg_HaveListMessage
	// Size: 0x40 (0x40 - 0x0)
	struct FDirectLinkMsg_HaveListMessage	
	{
	public:
		int32_t SourceStreamPort; // 0x0(0x4)
		int32_t SyncCycle; // 0x4(0x4)
		int32_t MessageCode; // 0x8(0x4)
		char Kind; // 0xC(0x1)
		unsigned char UnknownData00_6[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
		TArray<char> Payload; // 0x10(0x10)
		TArray<int32_t> NodeIds; // 0x20(0x10)
		TArray<int32_t> Hashes; // 0x30(0x10)
	};

}
