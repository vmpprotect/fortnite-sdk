#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: VotingFramework
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class VotingFramework.VoteBroadcasterComponent
	// Inherited from UMeshNetworkComponent -> UActorComponent -> UObject
	// Size: 0x3C0 (0x510 - 0x150)
	class UVoteBroadcasterComponent : public UMeshNetworkComponent	
	{
	public:
		TArray<FVoteSessionSettings> VoteSessionSettingsList; // 0x150(0x10)
		FVoteSessionRuntimeArray VoteSessionRuntimeList; // 0x160(0x120)
		FVoteRuntimeArray VoteRuntimeList; // 0x280(0x120)
		FVoteSelectionResultsArray VoteResultsList; // 0x3A0(0x120)
		TMap<FUniqueNetIdRepl, FCastedVote> PlayerCastedVotesMap; // 0x4C0(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VotingFramework.VoteBroadcasterComponent");
			return ret;
		}

		void VoteStart(FName VoteSessionId, FName VoteId); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF752093EEC(relative to base address)
		void VoteSetup(FName VoteSessionId, FName VoteId); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF752093E2C(relative to base address)
		void VoteSessionShutdown(FName VoteSessionId); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF752093DAC(relative to base address)
		void VoteSessionSetup(FName VoteSessionId, FName StartingVoteId, EVoteSessionNetworkType NetworkType); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF752093CB4(relative to base address)
		void VoteSessionComplete(FName VoteSessionId); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF752093C34(relative to base address)
		void VoteEnd(FName VoteSessionId, FName VoteId, FName WinningVoteSelectionId); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF752093B40(relative to base address)
		void ServerSubmitVotesAggregated(FName VoteSessionId, FName VoteId, FName VoteSelectionId, int32_t VoteDelta); // Flags: Net|NetReliableNative|Event|Protected|NetServer|NetValidate, Memory Exec: 0x7FF7520939D0(relative to base address)
		void OnVoteCasted(FUniqueNetIdRepl& UserNetId, FGameplayTag& VoteSessionId, FGameplayTag& VoteId, FGameplayTag& VoteSelectionId); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF752092B8C(relative to base address)
	};


	// Class VotingFramework.VoteDispatchSubsystem
	// Inherited from UGameInstanceSubsystem -> USubsystem -> UObject
	// Size: 0xA0 (0xD0 - 0x30)
	class UVoteDispatchSubsystem : public UGameInstanceSubsystem	
	{
	public:
		unsigned char UnknownData00_3[0x90]; // 0x30(0x90) UNKNOWN PROPERTY
		TArray<FVoteSelectionResults> VotingResults; // 0xC0(0x10)

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
		unsigned char UnknownData00_3[0x8]; // 0x290(0x8) UNKNOWN PROPERTY
		UVoteBroadcasterComponent* VoteBroadcasterComponent; // 0x298(0x8)

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

		void OnVoteStart(FGameplayTag& VoteSessionId, FGameplayTag& VoteId, EVoteState VoteState); // Flags: Native|Protected|HasOutParms, Memory Exec: 0x7FF752093624(relative to base address)
		void OnVoteSetup(FGameplayTag& VoteSessionId, FGameplayTag& VoteId, EVoteState VoteState); // Flags: Native|Protected|HasOutParms, Memory Exec: 0x7FF7520934C0(relative to base address)
		void OnVoteSessionVoting(FGameplayTag& VoteSessionId, FGameplayTag& StartingVoteId, EVoteSessionState SessionState); // Flags: Native|Protected|HasOutParms, Memory Exec: 0x7FF75209335C(relative to base address)
		void OnVoteSessionShutdown(FGameplayTag& VoteSessionId); // Flags: Native|Protected|HasOutParms, Memory Exec: 0x7FF74EBBC9D0(relative to base address)
		void OnVoteSessionSetup(FGameplayTag& VoteSessionId, FGameplayTag& StartingVoteId, EVoteSessionNetworkType NetworkType, EVoteSessionState SessionState); // Flags: Native|Protected|HasOutParms, Memory Exec: 0x7FF752093170(relative to base address)
		void OnVoteSessionComplete(FGameplayTag& VoteSessionId); // Flags: Native|Protected|HasOutParms, Memory Exec: 0x7FF7520930E0(relative to base address)
		void OnVoteEnd(FGameplayTag& VoteSessionId, FGameplayTag& VoteId, FGameplayTag& WinningVoteSelectionId, EVoteState VoteState); // Flags: Native|Protected|HasOutParms, Memory Exec: 0x7FF752092F2C(relative to base address)
		void OnVoteChange(FGameplayTag& VoteSessionId, FGameplayTag& VoteId, FGameplayTag& VoteSelectionId, int32_t ServerVoteTotal, int32_t AllServersVoteTotal); // Flags: Native|Protected|HasOutParms, Memory Exec: 0x7FF752092CF8(relative to base address)
	};


	// Class VotingFramework.VoteResponderComponent
	// Inherited from UVoteListenerComponent -> UActorComponent -> UObject
	// Size: 0x70 (0x1F0 - 0x180)
	class UVoteResponderComponent : public UVoteListenerComponent	
	{
	public:
		TArray<FVoteSelection> SupportedVoteSelections; // 0x180(0x10)
		bool bShouldLockVotingAfterCasted; // 0x190(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x191(0x7) UNKNOWN PROPERTY
		TMap<FUniqueNetIdRepl, FCastedVote> PlayerCastedVotesMap; // 0x198(0x50)
		FName ActiveVoteSessionId; // 0x1E8(0x4)
		FName ActiveVoteId; // 0x1EC(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VotingFramework.VoteResponderComponent");
			return ret;
		}

		void ServerCastVoteSelection(FUniqueNetIdRepl InUserId, FCastedVote CastedVote); // Flags: Net|NetReliableNative|Event|Protected|NetServer|NetValidate, Memory Exec: 0x7FF752093788(relative to base address)
		void CastManualVoteSelectionAtIndex(APlayerState* InPlayerState, int32_t SelectionIndex); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF752092AC8(relative to base address)
		void CastManualVoteSelection(APlayerState* InPlayerState, FGameplayTag& VoteSelection); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7520929F8(relative to base address)
		void CastDefaultVoteSelection(APlayerState* InPlayerState); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF752092974(relative to base address)
	};

}
