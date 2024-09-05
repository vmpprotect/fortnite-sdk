#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: VotingFramework
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class VotingFramework.VoteBroadcasterComponent
	// Inherited from UMeshNetworkComponent -> UActorComponent -> UObject
	// Size: 0x3C0 (0x510 - 0x150)
	class UVoteBroadcasterComponent : public UMeshNetworkComponent	
	{
	public:
		TArray VoteSessionSettingsList; // 0x150(0x10)
		FVoteSessionRuntimeArray VoteSessionRuntimeList; // 0x160(0x120)
		FVoteRuntimeArray VoteRuntimeList; // 0x280(0x120)
		FVoteSelectionResultsArray VoteResultsList; // 0x3A0(0x120)
		TMap PlayerCastedVotesMap; // 0x4C0(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VotingFramework.VoteBroadcasterComponent");
			return ret;
		}

		void VoteStart(FName VoteSessionId, FName VoteId); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EB5C60
		void VoteSetup(FName VoteSessionId, FName VoteId); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EB5B80
		void VoteSessionShutdown(FName VoteSessionId); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EB5AA0
		void VoteSessionSetup(FName VoteSessionId, FName StartingVoteId, EVoteSessionNetworkType NetworkType); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EB59C0
		void VoteSessionComplete(FName VoteSessionId); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EB58E0
		void VoteEnd(FName VoteSessionId, FName VoteId, FName WinningVoteSelectionId); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EB5800
		void ServerSubmitVotesAggregated(FName VoteSessionId, FName VoteId, FName VoteSelectionId, int32_t VoteDelta); // Flags: Net|NetReliableNative|Event|Protected|NetServer|NetValidate 0x7FF414EB5720
		void OnVoteCasted(FUniqueNetIdRepl& UserNetId, FGameplayTag& VoteSessionId, FGameplayTag& VoteId, FGameplayTag& VoteSelectionId); // Flags: Final|Native|Protected|HasOutParms 0x7FF414EB5640
	};


	// Class VotingFramework.VoteDispatchSubsystem
	// Inherited from UGameInstanceSubsystem -> USubsystem -> UObject
	// Size: 0xA0 (0xD0 - 0x30)
	class UVoteDispatchSubsystem : public UGameInstanceSubsystem	
	{
	public:
		unsigned char UnknownData01_3[0x90]; // 0x30(0x90) UNKNOWN PROPERTY
		TArray VotingResults; // 0xC0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VotingFramework.VoteDispatchSubsystem");
			return ret;
		}
	};


	// Class VotingFramework.VoteInitiationActor
	// Inherited from AInfo -> AActor -> UObject
	// Size: 0x10 (0x2A0 - 0x290)
	class AVoteInitiationActor : public AInfo	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x290(0x8) UNKNOWN PROPERTY
		UVoteBroadcasterComponent VoteBroadcasterComponent; // 0x298(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VotingFramework.VoteInitiationActor");
			return ret;
		}
	};


	// Class VotingFramework.VoteListenerComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0xE0 (0x180 - 0xA0)
	class UVoteListenerComponent : public UActorComponent	
	{
	public:
		FMulticastInlineDelegate OnVoteSessionSetupEvent; // 0xA0(0x10)
		FMulticastInlineDelegate OnVoteSessionVotingEvent; // 0xB0(0x10)
		FMulticastInlineDelegate OnVoteSetupEvent; // 0xC0(0x10)
		FMulticastInlineDelegate OnVoteStartEvent; // 0xD0(0x10)
		FMulticastInlineDelegate OnVoteChangeEvent; // 0xE0(0x10)
		FMulticastInlineDelegate OnVoteEndEvent; // 0xF0(0x10)
		FMulticastInlineDelegate OnVoteSessionCompleteEvent; // 0x100(0x10)
		FMulticastInlineDelegate OnVoteSessionShutdownEvent; // 0x110(0x10)
		FGameplayTagContainer RequestedVoteSessionIds; // 0x120(0x20)
		FGameplayTagContainer RequestedVoteIds; // 0x140(0x20)
		FGameplayTagContainer RequestedVoteSelectionIds; // 0x160(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VotingFramework.VoteListenerComponent");
			return ret;
		}

		void OnVoteStart(FGameplayTag& VoteSessionId, FGameplayTag& VoteId, EVoteState VoteState); // Flags: Native|Protected|HasOutParms 0x7FF414EB6360
		void OnVoteSetup(FGameplayTag& VoteSessionId, FGameplayTag& VoteId, EVoteState VoteState); // Flags: Native|Protected|HasOutParms 0x7FF414EB6280
		void OnVoteSessionVoting(FGameplayTag& VoteSessionId, FGameplayTag& StartingVoteId, EVoteSessionState SessionState); // Flags: Native|Protected|HasOutParms 0x7FF414EB61A0
		void OnVoteSessionShutdown(FGameplayTag& VoteSessionId); // Flags: Native|Protected|HasOutParms 0x7FF414EB60C0
		void OnVoteSessionSetup(FGameplayTag& VoteSessionId, FGameplayTag& StartingVoteId, EVoteSessionNetworkType NetworkType, EVoteSessionState SessionState); // Flags: Native|Protected|HasOutParms 0x7FF414EB5FE0
		void OnVoteSessionComplete(FGameplayTag& VoteSessionId); // Flags: Native|Protected|HasOutParms 0x7FF414EB5F00
		void OnVoteEnd(FGameplayTag& VoteSessionId, FGameplayTag& VoteId, FGameplayTag& WinningVoteSelectionId, EVoteState VoteState); // Flags: Native|Protected|HasOutParms 0x7FF414EB5E20
		void OnVoteChange(FGameplayTag& VoteSessionId, FGameplayTag& VoteId, FGameplayTag& VoteSelectionId, int32_t ServerVoteTotal, int32_t AllServersVoteTotal); // Flags: Native|Protected|HasOutParms 0x7FF414EB5D40
	};


	// Class VotingFramework.VoteResponderComponent
	// Inherited from UVoteListenerComponent -> UActorComponent -> UObject
	// Size: 0x70 (0x1F0 - 0x180)
	class UVoteResponderComponent : public UVoteListenerComponent	
	{
	public:
		TArray SupportedVoteSelections; // 0x180(0x10)
		bool bShouldLockVotingAfterCasted; // 0x190(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x191(0x7) UNKNOWN PROPERTY
		TMap PlayerCastedVotesMap; // 0x198(0x50)
		FName ActiveVoteSessionId; // 0x1E8(0x4)
		FName ActiveVoteId; // 0x1EC(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VotingFramework.VoteResponderComponent");
			return ret;
		}

		void ServerCastVoteSelection(FUniqueNetIdRepl InUserId, FCastedVote CastedVote); // Flags: Net|NetReliableNative|Event|Protected|NetServer|NetValidate 0x7FF414EB66E0
		void CastManualVoteSelectionAtIndex(APlayerState InPlayerState, int32_t SelectionIndex); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EB6600
		void CastManualVoteSelection(APlayerState InPlayerState, FGameplayTag& VoteSelection); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414EB6520
		void CastDefaultVoteSelection(APlayerState InPlayerState); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414EB6440
	};

}
