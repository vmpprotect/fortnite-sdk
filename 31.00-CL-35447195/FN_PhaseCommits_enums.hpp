#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: PhaseCommits
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/PhaseCommits.ECoordinatorFlowState
	enum ECoordinatorFlowState
	{
		ECoordinatorFlowState__NONE = 0,
		ECoordinatorFlowState__Initializing = 1,
		ECoordinatorFlowState__WaitingForRequest = 2,
		ECoordinatorFlowState__WaitingForConsensus_BeginChange = 3,
		ECoordinatorFlowState__WaitingForConsensus_Precommit = 4,
		ECoordinatorFlowState__Consensus_Success = 5,
		ECoordinatorFlowState__Consensus_Failed = 6,
	};


	// Enum /Script/PhaseCommits.EParticipantFlowState
	enum EParticipantFlowState
	{
		EParticipantFlowState__NONE = 0,
		EParticipantFlowState__Initializing = 1,
		EParticipantFlowState__WaitingFor_BroadcastBeginChange = 2,
		EParticipantFlowState__WaitingFor_Precommit = 3,
		EParticipantFlowState__WaitingFor_Commit = 4,
	};


	// Enum /Script/PhaseCommits.EPhaseCommit
	enum EPhaseCommit
	{
		EPhaseCommit__One = 0,
		EPhaseCommit__Two = 1,
		EPhaseCommit__Three = 2,
	};


	// Enum /Script/PhaseCommits.ECoordinatorBroadcasts
	enum ECoordinatorBroadcasts
	{
		ECoordinatorBroadcasts__ReadyForRequests = 0,
		ECoordinatorBroadcasts__BeginStateChange_TwoPhase = 1,
		ECoordinatorBroadcasts__BeginStateChange_ThreePhase = 2,
		ECoordinatorBroadcasts__PreCommit = 3,
		ECoordinatorBroadcasts__Success = 4,
		ECoordinatorBroadcasts__Aborted = 5,
		ECoordinatorBroadcasts__NUM = 6,
	};


	// Enum /Script/PhaseCommits.ECoordinatorBroadcasts_Repl
	enum ECoordinatorBroadcasts_Repl
	{
		ECoordinatorBroadcasts_Repl__R = 0,
		ECoordinatorBroadcasts_Repl__A = 1,
		ECoordinatorBroadcasts_Repl__B = 2,
		ECoordinatorBroadcasts_Repl__C = 3,
		ECoordinatorBroadcasts_Repl__S = 4,
		ECoordinatorBroadcasts_Repl__F = 5,
		ECoordinatorBroadcasts_Repl__NUM = 6,
	};


	// Enum /Script/PhaseCommits.EParticipantResponses
	enum EParticipantResponses
	{
		EParticipantResponses__NONE = 0,
		EParticipantResponses__AcceptedBegin = 1,
		EParticipantResponses__RejectedBegin = 2,
		EParticipantResponses__AcceptedPreCommit = 3,
		EParticipantResponses__RejectedPreCommit = 4,
		EParticipantResponses__ReceivedSuccess = 5,
		EParticipantResponses__ReceivedAbort = 6,
		EParticipantResponses__NUM = 7,
	};


	// Enum /Script/PhaseCommits.EParticipantResponses_Repl
	enum EParticipantResponses_Repl
	{
		EParticipantResponses_Repl__N = 0,
		EParticipantResponses_Repl__A = 1,
		EParticipantResponses_Repl__B = 2,
		EParticipantResponses_Repl__C = 3,
		EParticipantResponses_Repl__D = 4,
		EParticipantResponses_Repl__S = 5,
		EParticipantResponses_Repl__F = 6,
		EParticipantResponses_Repl__NUM = 7,
	};

}
