#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: CommonConversationRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Enum /Script/CommonConversationRuntime.EConversationTaskResultType
	enum EConversationTaskResultType
	{
		EConversationTaskResultType__Invalid = 0,
		EConversationTaskResultType__AbortConversation = 1,
		EConversationTaskResultType__AdvanceConversation = 2,
		EConversationTaskResultType__AdvanceConversationWithChoice = 3,
		EConversationTaskResultType__PauseConversationAndSendClientChoices = 4,
		EConversationTaskResultType__ReturnToLastClientChoice = 5,
		EConversationTaskResultType__ReturnToCurrentClientChoice = 6,
		EConversationTaskResultType__ReturnToConversationStart = 7,
	};


	// Enum /Script/CommonConversationRuntime.EConversationRequirementResult
	enum EConversationRequirementResult
	{
		EConversationRequirementResult__Passed = 0,
		EConversationRequirementResult__FailedButVisible = 1,
		EConversationRequirementResult__FailedAndHidden = 2,
	};


	// Enum /Script/CommonConversationRuntime.EConversationChoiceType
	enum EConversationChoiceType
	{
		EConversationChoiceType__ServerOnly = 0,
		EConversationChoiceType__UserChoiceAvailable = 1,
		EConversationChoiceType__UserChoiceUnavailable = 2,
	};

}
