#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: MassEntity
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Enum /Script/MassEntity.EMassCommandOperationType
	enum EMassCommandOperationType
	{
		EMassCommandOperationType__None = 0,
		EMassCommandOperationType__Create = 1,
		EMassCommandOperationType__Add = 2,
		EMassCommandOperationType__Remove = 3,
		EMassCommandOperationType__ChangeComposition = 4,
		EMassCommandOperationType__Set = 5,
		EMassCommandOperationType__Destroy = 6,
	};


	// Enum /Script/MassEntity.EMassObservedOperation
	enum EMassObservedOperation
	{
		EMassObservedOperation__Add = 0,
		EMassObservedOperation__Remove = 1,
	};


	// Enum /Script/MassEntity.EProcessorExecutionFlags
	enum EProcessorExecutionFlags
	{
		EProcessorExecutionFlags__None = 0,
		EProcessorExecutionFlags__Standalone = 1,
		EProcessorExecutionFlags__Server = 2,
		EProcessorExecutionFlags__Client = 4,
		EProcessorExecutionFlags__Editor = 8,
		EProcessorExecutionFlags__EditorWorld = 10,
		EProcessorExecutionFlags__AllNetModes = 7,
		EProcessorExecutionFlags__AllWorldModes = 17,
		EProcessorExecutionFlags__All = 1F,
	};


	// Enum /Script/MassEntity.EMassProcessingPhase
	enum EMassProcessingPhase
	{
		EMassProcessingPhase__PrePhysics = 0,
		EMassProcessingPhase__StartPhysics = 1,
		EMassProcessingPhase__DuringPhysics = 2,
		EMassProcessingPhase__EndPhysics = 3,
		EMassProcessingPhase__PostPhysics = 4,
		EMassProcessingPhase__FrameEnd = 5,
	};


	// Enum /Script/MassEntity.EMassFragmentAccess
	enum EMassFragmentAccess
	{
		EMassFragmentAccess__None = 0,
		EMassFragmentAccess__ReadOnly = 1,
		EMassFragmentAccess__ReadWrite = 2,
	};


	// Enum /Script/MassEntity.EMassFragmentPresence
	enum EMassFragmentPresence
	{
		EMassFragmentPresence__All = 0,
		EMassFragmentPresence__Any = 1,
		EMassFragmentPresence__None = 2,
		EMassFragmentPresence__Optional = 3,
	};

}
