#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: Tweening
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Enum /Script/Tweening.ETweenSplineAlignmentOption
	enum ETweenSplineAlignmentOption
	{
		ETweenSplineAlignmentOption__NoAlignment = 0,
		ETweenSplineAlignmentOption__AlignWithSpline = 1,
		ETweenSplineAlignmentOption__AlignWithTween = 2,
	};


	// Enum /Script/Tweening.ETweenPlayDirection
	enum ETweenPlayDirection
	{
		ETweenPlayDirection__Forward = 0,
		ETweenPlayDirection__Backward = 1,
	};


	// Enum /Script/Tweening.ETweenInitializationPoint
	enum ETweenInitializationPoint
	{
		ETweenInitializationPoint__AfterDelay = 0,
		ETweenInitializationPoint__OnPlay = 1,
	};


	// Enum /Script/Tweening.ETweenLoopType
	enum ETweenLoopType
	{
		ETweenLoopType__None = 0,
		ETweenLoopType__Repeat = 1,
		ETweenLoopType__PingPong = 2,
	};


	// Enum /Script/Tweening.ETweenResetDestination
	enum ETweenResetDestination
	{
		ETweenResetDestination__Beginning = 0,
		ETweenResetDestination__End = 1,
	};


	// Enum /Script/Tweening.ETweenBuiltInEasing
	enum ETweenBuiltInEasing
	{
		ETweenBuiltInEasing__Linear = 0,
		ETweenBuiltInEasing__SinIn = 1,
		ETweenBuiltInEasing__SinOut = 2,
		ETweenBuiltInEasing__SinInOut = 3,
		ETweenBuiltInEasing__QuadIn = 4,
		ETweenBuiltInEasing__QuadOut = 5,
		ETweenBuiltInEasing__QuadInOut = 6,
		ETweenBuiltInEasing__CubicIn = 7,
		ETweenBuiltInEasing__CubicOut = 8,
		ETweenBuiltInEasing__CubicInOut = 9,
		ETweenBuiltInEasing__QuartIn = A,
		ETweenBuiltInEasing__QuartOut = B,
		ETweenBuiltInEasing__QuartInOut = C,
		ETweenBuiltInEasing__QuintIn = D,
		ETweenBuiltInEasing__QuintOut = E,
		ETweenBuiltInEasing__QuintInOut = F,
		ETweenBuiltInEasing__ExpoIn = 10,
		ETweenBuiltInEasing__ExpoOut = 11,
		ETweenBuiltInEasing__ExpoInOut = 12,
		ETweenBuiltInEasing__CircIn = 13,
		ETweenBuiltInEasing__CircOut = 14,
		ETweenBuiltInEasing__CircInOut = 15,
		ETweenBuiltInEasing__BackIn = 16,
		ETweenBuiltInEasing__BackOut = 17,
		ETweenBuiltInEasing__BackInOut = 18,
		ETweenBuiltInEasing__ElasticIn = 19,
		ETweenBuiltInEasing__ElasticOut = 1A,
		ETweenBuiltInEasing__ElasticInOut = 1B,
		ETweenBuiltInEasing__BounceIn = 1C,
		ETweenBuiltInEasing__BounceOut = 1D,
		ETweenBuiltInEasing__BounceInOut = 1E,
	};

}
