#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: Party
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct Party.PartyMemberPlatformData
	// Size: 0x98 (0x98 - 0x0)
	struct FPartyMemberPlatformData	
	{
	public:
		FUserPlatform Platform; // 0x0(0x58)
		FUniqueNetIdRepl UniqueID; // 0x58(0x30)
		FString SessionId; // 0x88(0x10)
	};


	// Struct Party.UserPlatform
	// Size: 0x58 (0x58 - 0x0)
	struct FUserPlatform	
	{
	public:
		FSocialPlatformDescription PlatformDescription; // 0x0(0x58)
	};


	// Struct Party.SocialPlatformDescription
	// Size: 0x58 (0x58 - 0x0)
	struct FSocialPlatformDescription	
	{
	public:
		FString Name; // 0x0(0x10)
		FString PlatformType; // 0x10(0x10)
		FName OnlineSubsystem; // 0x20(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
		FString SessionType; // 0x28(0x10)
		FString ExternalAccountType; // 0x38(0x10)
		FString CrossplayPool; // 0x48(0x10)
	};


	// Struct Party.PartyMemberJoinInProgressRequest
	// Size: 0x38 (0x38 - 0x0)
	struct FPartyMemberJoinInProgressRequest	
	{
	public:
		FUniqueNetIdRepl Target; // 0x0(0x30)
		int64_t Time; // 0x30(0x8)
	};


	// Struct Party.PartyMemberJoinInProgressResponse
	// Size: 0x48 (0x48 - 0x0)
	struct FPartyMemberJoinInProgressResponse	
	{
	public:
		FUniqueNetIdRepl Requester; // 0x0(0x30)
		int64_t RequestTime; // 0x30(0x8)
		int64_t ResponseTime; // 0x38(0x8)
		char DenialReason; // 0x40(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x41(0x7) UNKNOWN PROPERTY
	};


	// Struct Party.PartyMemberJoinInProgressData
	// Size: 0x48 (0x48 - 0x0)
	struct FPartyMemberJoinInProgressData	
	{
	public:
		FPartyMemberJoinInProgressRequest Request; // 0x0(0x38)
		TArray Responses; // 0x38(0x10)
	};


	// Struct Party.OnlinePartyRepDataBase
	// Size: 0x18 (0x18 - 0x0)
	struct FOnlinePartyRepDataBase	
	{
	public:
		unsigned char UnknownData01_2[0x18]; // 0x0(0x18) UNKNOWN PROPERTY
	};


	// Struct Party.PartyMemberRepData
	// Inherited from FOnlinePartyRepDataBase
	// Size: 0x258 (0x270 - 0x18)
	struct FPartyMemberRepData : public FOnlinePartyRepDataBase	
	{
	public:
		unsigned char UnknownData05_3[0x10]; // 0x18(0x10) UNKNOWN PROPERTY
		FPartyMemberPlatformData PlatformData; // 0x28(0x98)
		unsigned char UnknownData06_6[0x90]; // 0xC0(0x90) UNKNOWN PROPERTY
		ECrossplayPreference CrossplayPreference; // 0x150(0x1)
		unsigned char UnknownData07_6[0x37]; // 0x151(0x37) UNKNOWN PROPERTY
		FString JoinMethod; // 0x188(0x10)
		unsigned char UnknownData08_6[0x30]; // 0x198(0x30) UNKNOWN PROPERTY
		FPartyMemberJoinInProgressData JoinInProgressData; // 0x1C8(0x48)
		unsigned char UnknownData09_7[0x60]; // 0x210(0x60) UNKNOWN PROPERTY
	};


	// Struct Party.PartyPlatformSessionInfo
	// Size: 0x50 (0x50 - 0x0)
	struct FPartyPlatformSessionInfo	
	{
	public:
		FString SessionType; // 0x0(0x10)
		FString SessionId; // 0x10(0x10)
		FUniqueNetIdRepl OwnerPrimaryId; // 0x20(0x30)
	};


	// Struct Party.PartyPrivacySettings
	// Size: 0x3 (0x3 - 0x0)
	struct FPartyPrivacySettings	
	{
	public:
		EPartyType PartyType; // 0x0(0x1)
		EPartyInviteRestriction PartyInviteRestriction; // 0x1(0x1)
		bool bOnlyLeaderFriendsCanJoin; // 0x2(0x1)
	};


	// Struct Party.PartyRepData
	// Inherited from FOnlinePartyRepDataBase
	// Size: 0x68 (0x80 - 0x18)
	struct FPartyRepData : public FOnlinePartyRepDataBase	
	{
	public:
		unsigned char UnknownData03_3[0x9]; // 0x18(0x9) UNKNOWN PROPERTY
		FPartyPrivacySettings PrivacySettings; // 0x21(0x3)
		unsigned char UnknownData04_6[0x34]; // 0x24(0x34) UNKNOWN PROPERTY
		TArray PlatformSessions; // 0x58(0x10)
		unsigned char UnknownData05_7[0x18]; // 0x68(0x18) UNKNOWN PROPERTY
	};


	// Struct Party.SocialChatChannelConfig
	// Size: 0x38 (0x38 - 0x0)
	struct FSocialChatChannelConfig	
	{
	public:
		USocialUser SocialUser; // 0x0(0x8)
		unsigned char UnknownData02_6[0x10]; // 0x8(0x10) UNKNOWN PROPERTY
		TArray ListenChannels; // 0x18(0x10)
		unsigned char UnknownData03_7[0x10]; // 0x28(0x10) UNKNOWN PROPERTY
	};

}
