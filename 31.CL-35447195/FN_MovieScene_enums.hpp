#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: MovieScene
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/MovieScene.EMovieSceneKeyInterpolation
	enum EMovieSceneKeyInterpolation
	{
		EMovieSceneKeyInterpolation__Auto = 0,
		EMovieSceneKeyInterpolation__User = 1,
		EMovieSceneKeyInterpolation__Break = 2,
		EMovieSceneKeyInterpolation__Linear = 3,
		EMovieSceneKeyInterpolation__Constant = 4,
		EMovieSceneKeyInterpolation__SmartAuto = 5,
	};


	// Enum /Script/MovieScene.EMovieSceneCompletionMode
	enum EMovieSceneCompletionMode
	{
		EMovieSceneCompletionMode__KeepState = 0,
		EMovieSceneCompletionMode__RestoreState = 1,
		EMovieSceneCompletionMode__ProjectDefault = 2,
	};


	// Enum /Script/MovieScene.EMovieScenePlayerStatus
	enum EMovieScenePlayerStatus
	{
		EMovieScenePlayerStatus__Stopped = 0,
		EMovieScenePlayerStatus__Playing = 1,
		EMovieScenePlayerStatus__Scrubbing = 2,
		EMovieScenePlayerStatus__Jumping = 3,
		EMovieScenePlayerStatus__Stepping = 4,
		EMovieScenePlayerStatus__Paused = 5,
	};


	// Enum /Script/MovieScene.EMovieSceneEvaluationType
	enum EMovieSceneEvaluationType
	{
		EMovieSceneEvaluationType__FrameLocked = 0,
		EMovieSceneEvaluationType__WithSubFrames = 1,
	};


	// Enum /Script/MovieScene.EUpdateClockSource
	enum EUpdateClockSource
	{
		EUpdateClockSource__Tick = 0,
		EUpdateClockSource__Platform = 1,
		EUpdateClockSource__Audio = 2,
		EUpdateClockSource__RelativeTimecode = 3,
		EUpdateClockSource__Timecode = 4,
		EUpdateClockSource__PlayEveryFrame = 5,
		EUpdateClockSource__Custom = 6,
	};


	// Enum /Script/MovieScene.EMovieSceneSequenceFlags
	enum EMovieSceneSequenceFlags
	{
		EMovieSceneSequenceFlags__None = 0,
		EMovieSceneSequenceFlags__Volatile = 1,
		EMovieSceneSequenceFlags__BlockingEvaluation = 2,
		EMovieSceneSequenceFlags__DynamicWeighting = 4,
		EMovieSceneSequenceFlags__InheritedFlags = 1,
	};


	// Enum /Script/MovieScene.EMovieSceneServerClientMask
	enum EMovieSceneServerClientMask
	{
		EMovieSceneServerClientMask__None = 0,
		EMovieSceneServerClientMask__Server = 1,
		EMovieSceneServerClientMask__Client = 2,
		EMovieSceneServerClientMask__All = 3,
	};


	// Enum /Script/MovieScene.EMovieSceneSubSectionFlags
	enum EMovieSceneSubSectionFlags
	{
		EMovieSceneSubSectionFlags__None = 0,
		EMovieSceneSubSectionFlags__OverrideKeepState = 1,
		EMovieSceneSubSectionFlags__OverrideRestoreState = 2,
		EMovieSceneSubSectionFlags__IgnoreHierarchicalBias = 4,
		EMovieSceneSubSectionFlags__BlendHierarchicalBias = 8,
		EMovieSceneSubSectionFlags__AnyRestoreStateOverride = 3,
	};


	// Enum /Script/MovieScene.ESectionEvaluationFlags
	enum ESectionEvaluationFlags
	{
		ESectionEvaluationFlags__None = 0,
		ESectionEvaluationFlags__PreRoll = 1,
		ESectionEvaluationFlags__PostRoll = 2,
		ESectionEvaluationFlags__ForceKeepState = 4,
		ESectionEvaluationFlags__ForceRestoreState = 8,
	};


	// Enum /Script/MovieScene.EMovieSceneCompletionModeOverride
	enum EMovieSceneCompletionModeOverride
	{
		EMovieSceneCompletionModeOverride__None = 0,
		EMovieSceneCompletionModeOverride__ForceKeepState = 1,
		EMovieSceneCompletionModeOverride__ForceRestoreState = 2,
	};


	// Enum /Script/MovieScene.EMovieSceneTimeUnit
	enum EMovieSceneTimeUnit
	{
		EMovieSceneTimeUnit__DisplayRate = 0,
		EMovieSceneTimeUnit__TickResolution = 1,
	};


	// Enum /Script/MovieScene.EMovieSceneSequenceCompilerMask
	enum EMovieSceneSequenceCompilerMask
	{
		EMovieSceneSequenceCompilerMask__Hierarchy = 1,
		EMovieSceneSequenceCompilerMask__EvaluationTemplate = 2,
		EMovieSceneSequenceCompilerMask__EvaluationTemplateField = 4,
		EMovieSceneSequenceCompilerMask__EntityComponentField = 8,
		EMovieSceneSequenceCompilerMask__None = 0,
	};


	// Enum /Script/MovieScene.EMovieSceneBlendType
	enum EMovieSceneBlendType
	{
		EMovieSceneBlendType__Invalid = 0,
		EMovieSceneBlendType__Absolute = 1,
		EMovieSceneBlendType__Additive = 2,
		EMovieSceneBlendType__Relative = 4,
		EMovieSceneBlendType__AdditiveFromBase = 8,
	};


	// Enum /Script/MovieScene.EEvaluationMethod
	enum EEvaluationMethod
	{
		EEvaluationMethod__Static = 0,
		EEvaluationMethod__Swept = 1,
	};


	// Enum /Script/MovieScene.EMovieSceneBuiltInEasing
	enum EMovieSceneBuiltInEasing
	{
		EMovieSceneBuiltInEasing__Linear = 0,
		EMovieSceneBuiltInEasing__SinIn = 1,
		EMovieSceneBuiltInEasing__SinOut = 2,
		EMovieSceneBuiltInEasing__SinInOut = 3,
		EMovieSceneBuiltInEasing__QuadIn = 4,
		EMovieSceneBuiltInEasing__QuadOut = 5,
		EMovieSceneBuiltInEasing__QuadInOut = 6,
		EMovieSceneBuiltInEasing__Cubic = 7,
		EMovieSceneBuiltInEasing__CubicIn = 8,
		EMovieSceneBuiltInEasing__CubicOut = 9,
		EMovieSceneBuiltInEasing__CubicInOut = A,
		EMovieSceneBuiltInEasing__HermiteCubicInOut = B,
		EMovieSceneBuiltInEasing__QuartIn = C,
		EMovieSceneBuiltInEasing__QuartOut = D,
		EMovieSceneBuiltInEasing__QuartInOut = E,
		EMovieSceneBuiltInEasing__QuintIn = F,
		EMovieSceneBuiltInEasing__QuintOut = 10,
		EMovieSceneBuiltInEasing__QuintInOut = 11,
		EMovieSceneBuiltInEasing__ExpoIn = 12,
		EMovieSceneBuiltInEasing__ExpoOut = 13,
		EMovieSceneBuiltInEasing__ExpoInOut = 14,
		EMovieSceneBuiltInEasing__CircIn = 15,
		EMovieSceneBuiltInEasing__CircOut = 16,
		EMovieSceneBuiltInEasing__CircInOut = 17,
		EMovieSceneBuiltInEasing__Custom = 18,
	};


	// Enum /Script/MovieScene.EMovieSceneObjectBindingSpace
	enum EMovieSceneObjectBindingSpace
	{
		EMovieSceneObjectBindingSpace__Local = 0,
		EMovieSceneObjectBindingSpace__Root = 1,
		EMovieSceneObjectBindingSpace__Unused = 2,
	};


	// Enum /Script/MovieScene.EUpdatePositionMethod
	enum EUpdatePositionMethod
	{
		EUpdatePositionMethod__Play = 0,
		EUpdatePositionMethod__Jump = 1,
		EUpdatePositionMethod__Scrub = 2,
	};


	// Enum /Script/MovieScene.EMovieScenePositionType
	enum EMovieScenePositionType
	{
		EMovieScenePositionType__Frame = 0,
		EMovieScenePositionType__Time = 1,
		EMovieScenePositionType__MarkedFrame = 2,
		EMovieScenePositionType__Timecode = 3,
	};


	// Enum /Script/MovieScene.ESpawnOwnership
	enum ESpawnOwnership
	{
		ESpawnOwnership__InnerSequence = 0,
		ESpawnOwnership__RootSequence = 1,
		ESpawnOwnership__External = 2,
	};

}
