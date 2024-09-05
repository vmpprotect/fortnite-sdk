#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: GameplayTasks
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Enum /Script/GameplayTasks.ETaskResourceOverlapPolicy
	enum ETaskResourceOverlapPolicy
	{
		ETaskResourceOverlapPolicy__StartOnTop = 0,
		ETaskResourceOverlapPolicy__StartAtEnd = 1,
		ETaskResourceOverlapPolicy__RequestCancelAndStartOnTop = 2,
		ETaskResourceOverlapPolicy__RequestCancelAndStartAtEnd = 3,
	};


	// Enum /Script/GameplayTasks.EGameplayTaskState
	enum EGameplayTaskState
	{
		EGameplayTaskState__Uninitialized = 0,
		EGameplayTaskState__AwaitingActivation = 1,
		EGameplayTaskState__Paused = 2,
		EGameplayTaskState__Active = 3,
		EGameplayTaskState__Finished = 4,
	};


	// Enum /Script/GameplayTasks.EGameplayTaskRunResult
	enum EGameplayTaskRunResult
	{
		EGameplayTaskRunResult__Error = 0,
		EGameplayTaskRunResult__Failed = 1,
		EGameplayTaskRunResult__Success_Paused = 2,
		EGameplayTaskRunResult__Success_Active = 3,
		EGameplayTaskRunResult__Success_Finished = 4,
	};

}
