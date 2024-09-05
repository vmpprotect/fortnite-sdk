#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: Hotfix
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/Hotfix.EHotfixResult
	enum EHotfixResult
	{
		EHotfixResult__Failed = 0,
		EHotfixResult__Success = 1,
		EHotfixResult__SuccessNoChange = 2,
		EHotfixResult__SuccessNeedsReload = 3,
		EHotfixResult__SuccessNeedsRelaunch = 4,
	};


	// Enum /Script/Hotfix.EUpdateState
	enum EUpdateState
	{
		EUpdateState__UpdateIdle = 0,
		EUpdateState__UpdatePending = 1,
		EUpdateState__CheckingForPatch = 2,
		EUpdateState__CheckingForHotfix = 3,
		EUpdateState__WaitingOnInitialLoad = 4,
		EUpdateState__InitialLoadComplete = 5,
		EUpdateState__UpdateComplete = 6,
	};


	// Enum /Script/Hotfix.EUpdateCompletionStatus
	enum EUpdateCompletionStatus
	{
		EUpdateCompletionStatus__UpdateUnknown = 0,
		EUpdateCompletionStatus__UpdateSuccess = 1,
		EUpdateCompletionStatus__UpdateSuccess_NoChange = 2,
		EUpdateCompletionStatus__UpdateSuccess_NeedsReload = 3,
		EUpdateCompletionStatus__UpdateSuccess_NeedsRelaunch = 4,
		EUpdateCompletionStatus__UpdateSuccess_NeedsPatch = 5,
		EUpdateCompletionStatus__UpdateFailure_PatchCheck = 6,
		EUpdateCompletionStatus__UpdateFailure_HotfixCheck = 7,
		EUpdateCompletionStatus__UpdateFailure_NotLoggedIn = 8,
	};

}
