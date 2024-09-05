#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: VotingFramework
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct VotingFramework.CastedVote
	// Size: 0xC (0xC - 0x0)
	struct FCastedVote	
	{
	public:
		FName VoteSessionId; // 0x0(0x4)
		FName VoteId; // 0x4(0x4)
		FName VoteSelectionId; // 0x8(0x4)
	};


	// Struct VotingFramework.VoteSelection
	// Size: 0xC (0xC - 0x0)
	struct FVoteSelection	
	{
	public:
		FGameplayTag VoteSessionId; // 0x0(0x4)
		FGameplayTag VoteId; // 0x4(0x4)
		FGameplayTag VoteSelectionId; // 0x8(0x4)
	};


	// Struct VotingFramework.VoteSelectionSettings
	// Size: 0x18 (0x18 - 0x0)
	struct FVoteSelectionSettings	
	{
	public:
		FGameplayTag VoteSelectionId; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FText VoteSelectionText; // 0x8(0x10)
	};


	// Struct VotingFramework.VoteSettings
	// Size: 0x28 (0x28 - 0x0)
	struct FVoteSettings	
	{
	public:
		FGameplayTag VoteId; // 0x0(0x4)
		bool bLocksSelection; // 0x4(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
		FText VoteText; // 0x8(0x10)
		TArray<FVoteSelectionSettings> VoteSelections; // 0x18(0x10)
	};


	// Struct VotingFramework.VoteSessionSettings
	// Size: 0x30 (0x30 - 0x0)
	struct FVoteSessionSettings	
	{
	public:
		FGameplayTag VoteSessionId; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FText VoteSessionText; // 0x8(0x10)
		TArray<FVoteSettings> VoteSettingsList; // 0x18(0x10)
		EVoteSessionNetworkType NetworkType; // 0x28(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x29(0x7) UNKNOWN PROPERTY
	};


	// Struct VotingFramework.VoteSelectionResults
	// Inherited from FFastArraySerializerItem
	// Size: 0x2C (0x38 - 0xC)
	struct FVoteSelectionResults : public FFastArraySerializerItem	
	{
	public:
		unsigned char UnknownData00_3[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		UWorld* WorldRef; // 0x10(0x8)
		FName VoteSessionId; // 0x18(0x4)
		FName VoteId; // 0x1C(0x4)
		FName VoteSelectionId; // 0x20(0x4)
		int32_t ServerVoteTotal; // 0x24(0x4)
		int32_t AllServersVoteTotal; // 0x28(0x4)
		int32_t Shadow_ServerVoteTotal; // 0x2C(0x4)
		int32_t Shadow_AllServersVoteTotal; // 0x30(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
	};


	// Struct VotingFramework.VoteSelectionResultsArray
	// Inherited from FFastArraySerializer
	// Size: 0x18 (0x120 - 0x108)
	struct FVoteSelectionResultsArray : public FFastArraySerializer	
	{
	public:
		UWorld* WorldRef; // 0x108(0x8)
		TArray<FVoteSelectionResults> VoteSelectionResults; // 0x110(0x10)
	};


	// Struct VotingFramework.VoteRuntime
	// Inherited from FFastArraySerializerItem
	// Size: 0x34 (0x40 - 0xC)
	struct FVoteRuntime : public FFastArraySerializerItem	
	{
	public:
		unsigned char UnknownData00_3[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		UWorld* WorldRef; // 0x10(0x8)
		FName VoteSessionId; // 0x18(0x4)
		FName VoteId; // 0x1C(0x4)
		TArray<FName> VoteSelectionIds; // 0x20(0x10)
		EVoteState VoteState; // 0x30(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x31(0x3) UNKNOWN PROPERTY
		FName VoteSelectionWinningResult; // 0x34(0x4)
		FName Shadow_VoteSelectionWinningResult; // 0x38(0x4)
		EVoteState Shadow_VoteState; // 0x3C(0x1)
		unsigned char UnknownData02_7[0x3]; // 0x3D(0x3) UNKNOWN PROPERTY
	};


	// Struct VotingFramework.VoteRuntimeArray
	// Inherited from FFastArraySerializer
	// Size: 0x18 (0x120 - 0x108)
	struct FVoteRuntimeArray : public FFastArraySerializer	
	{
	public:
		UWorld* WorldRef; // 0x108(0x8)
		TArray<FVoteRuntime> VotingResults; // 0x110(0x10)
	};


	// Struct VotingFramework.VoteSessionRuntime
	// Inherited from FFastArraySerializerItem
	// Size: 0x1C (0x28 - 0xC)
	struct FVoteSessionRuntime : public FFastArraySerializerItem	
	{
	public:
		FName VoteSessionId; // 0xC(0x4)
		EVoteSessionNetworkType NetworkType; // 0x10(0x1)
		EVoteSessionState VoteSessionState; // 0x11(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x12(0x2) UNKNOWN PROPERTY
		FName CurrentVoteId; // 0x14(0x4)
		UWorld* WorldRef; // 0x18(0x8)
		EVoteSessionState Shadow_VoteSessionState; // 0x20(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x21(0x7) UNKNOWN PROPERTY
	};


	// Struct VotingFramework.VoteSessionRuntimeArray
	// Inherited from FFastArraySerializer
	// Size: 0x18 (0x120 - 0x108)
	struct FVoteSessionRuntimeArray : public FFastArraySerializer	
	{
	public:
		UWorld* WorldRef; // 0x108(0x8)
		TArray<FVoteSessionRuntime> VotingSessions; // 0x110(0x10)
	};

}
