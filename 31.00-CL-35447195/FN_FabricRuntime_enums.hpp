#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: FabricRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/FabricRuntime.EFabricContinuousInteractionDirection
	enum EFabricContinuousInteractionDirection
	{
		EFabricContinuousInteractionDirection__Vertical = 0,
		EFabricContinuousInteractionDirection__Horizontal = 1,
	};


	// Enum /Script/FabricRuntime.EFabricInteractionToolStates
	enum EFabricInteractionToolStates
	{
		EFabricInteractionToolStates__Equipped = 0,
		EFabricInteractionToolStates__HoveredControl = 1,
		EFabricInteractionToolStates__HoveredValidCablePort = 2,
		EFabricInteractionToolStates__HoveredInvalid = 3,
		EFabricInteractionToolStates__ContinuousSelected = 4,
		EFabricInteractionToolStates__MomentarySelected = 5,
		EFabricInteractionToolStates__CableSelected = 6,
		EFabricInteractionToolStates__None = 7,
	};


	// Enum /Script/FabricRuntime.EFabricInteractableType
	enum EFabricInteractableType
	{
		EFabricInteractableType__Momentary = 0,
		EFabricInteractableType__Continuous = 1,
		EFabricInteractableType__Cable = 2,
		EFabricInteractableType__None = 3,
	};


	// Enum /Script/FabricRuntime.EFabricMetasoundPlayState
	enum EFabricMetasoundPlayState
	{
		EFabricMetasoundPlayState__Playing = 0,
		EFabricMetasoundPlayState__Rebuilding = 1,
		EFabricMetasoundPlayState__Paused = 2,
		EFabricMetasoundPlayState__Stopped = 3,
	};


	// Enum /Script/FabricRuntime.EFabricMetasoundMusicEventPriority
	enum EFabricMetasoundMusicEventPriority
	{
		EFabricMetasoundMusicEventPriority__AboveEmotes = 0,
		EFabricMetasoundMusicEventPriority__BelowEmotes = 1,
	};


	// Enum /Script/FabricRuntime.EFabricMetasoundClock
	enum EFabricMetasoundClock
	{
		EFabricMetasoundClock__Metronome = 0,
		EFabricMetasoundClock__MidiTempoMap = 1,
	};


	// Enum /Script/FabricRuntime.EFabricNoteStyle
	enum EFabricNoteStyle
	{
		EFabricNoteStyle__Straight = 0,
		EFabricNoteStyle__Triplet = 1,
		EFabricNoteStyle__Dotted = 2,
	};


	// Enum /Script/FabricRuntime.EFabricFloatProviderType
	enum EFabricFloatProviderType
	{
		EFabricFloatProviderType__Continuous = 0,
		EFabricFloatProviderType__Instantaneous = 1,
	};


	// Enum /Script/FabricRuntime.EFabricWaveSyncType
	enum EFabricWaveSyncType
	{
		EFabricWaveSyncType__Free = 0,
		EFabricWaveSyncType__BeatSync = 1,
	};


	// Enum /Script/FabricRuntime.EFabricWaveShape
	enum EFabricWaveShape
	{
		EFabricWaveShape__Sine = 0,
		EFabricWaveShape__Triangle = 1,
		EFabricWaveShape__Saw = 2,
		EFabricWaveShape__Square = 3,
		EFabricWaveShape__RandomStepped = 4,
		EFabricWaveShape__RandomSmooth = 5,
	};


	// Enum /Script/FabricRuntime.EFabricValueSetterTransitionTiming
	enum EFabricValueSetterTransitionTiming
	{
		Immediate = 0,
		NextBeat = 1,
		NextBar = 2,
		NextPhrase = 3,
	};


	// Enum /Script/FabricRuntime.EFabricCloneTransformBehavior
	enum EFabricCloneTransformBehavior
	{
		EFabricCloneTransformBehavior__None = 0,
		EFabricCloneTransformBehavior__Uniform = 1,
		EFabricCloneTransformBehavior__Stepped = 2,
		EFabricCloneTransformBehavior__SteppedCentered = 3,
		EFabricCloneTransformBehavior__SteppedExponential = 4,
	};


	// Enum /Script/FabricRuntime.EFabricMetasoundPlayStrategy
	enum EFabricMetasoundPlayStrategy
	{
		EFabricMetasoundPlayStrategy__Delayed = 0,
		EFabricMetasoundPlayStrategy__Instant = 1,
	};


	// Enum /Script/FabricRuntime.EFabricMetasoundPlayPriority
	enum EFabricMetasoundPlayPriority
	{
		EFabricMetasoundPlayPriority__Normal = 0,
		EFabricMetasoundPlayPriority__High = 1,
		EFabricMetasoundPlayPriority__Highest = 2,
	};


	// Enum /Script/FabricRuntime.EJamFabricSyncType
	enum EJamFabricSyncType
	{
		EJamFabricSyncType__Disconnected = 0,
		EJamFabricSyncType__FabricControlsJam = 1,
		EJamFabricSyncType__Bidirectional = 2,
	};


	// Enum /Script/FabricRuntime.EFabricMetasoundUtilityLoadedBroadcastBy
	enum EFabricMetasoundUtilityLoadedBroadcastBy
	{
		EFabricMetasoundUtilityLoadedBroadcastBy__Never = 0,
		EFabricMetasoundUtilityLoadedBroadcastBy__UtilityPatchAsyncLoad = 1,
		EFabricMetasoundUtilityLoadedBroadcastBy__LiveUpdateGraphInit = 2,
		EFabricMetasoundUtilityLoadedBroadcastBy__AddMusicProviderPatch = 3,
		EFabricMetasoundUtilityLoadedBroadcastBy__AddTempoClockProviderPatch = 4,
		EFabricMetasoundUtilityLoadedBroadcastBy__AddMetronomeClockPatch = 5,
		EFabricMetasoundUtilityLoadedBroadcastBy__AddHarmonixTransportPatch = 6,
	};


	// Enum /Script/FabricRuntime.EFabricMetaSoundPinDirection
	enum EFabricMetaSoundPinDirection
	{
		EFabricMetaSoundPinDirection__Input = 0,
		EFabricMetaSoundPinDirection__Output = 1,
	};


	// Enum /Script/FabricRuntime.EFabricMetasoundInputType
	enum EFabricMetasoundInputType
	{
		EFabricMetasoundInputType__ModulatedUserOption = 0,
		EFabricMetasoundInputType__NonModulatedUserOption = 1,
		EFabricMetasoundInputType__DirectInput = 2,
	};


	// Enum /Script/FabricRuntime.EFabricMetaSoundPatchWrapperQuality
	enum EFabricMetaSoundPatchWrapperQuality
	{
		EFabricMetaSoundPatchWrapperQuality__High = 0,
		EFabricMetaSoundPatchWrapperQuality__Low = 1,
	};


	// Enum /Script/FabricRuntime.EFabricMidiPlayerLoopType
	enum EFabricMidiPlayerLoopType
	{
		EFabricMidiPlayerLoopType__None = 0,
		EFabricMidiPlayerLoopType__MidiLength = 1,
		EFabricMidiPlayerLoopType__SequenceLength = 2,
	};


	// Enum /Script/FabricRuntime.ESequencerType
	enum ESequencerType
	{
		ESequencerType__MultiTrack = 0,
		ESequencerType__SingleTrack = 1,
	};


	// Enum /Script/FabricRuntime.EFabricIslandSettingsMemoryModeType
	enum EFabricIslandSettingsMemoryModeType
	{
		EFabricIslandSettingsMemoryModeType__Cables = 0,
		EFabricIslandSettingsMemoryModeType__SequencerSquares = 1,
		EFabricIslandSettingsMemoryModeType__TopperVFX = 2,
	};

}
