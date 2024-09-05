#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: MovieSceneGameplayEventTrack
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct MovieSceneGameplayEventTrack.MovieSceneGameplayEvent
	// Size: 0x40 (0x40 - 0x0)
	struct FMovieSceneGameplayEvent	
	{
	public:
		FMemberReference GameplayEventFunctionProperty; // 0x0(0x30)
		FInstancedPropertyBag Payload; // 0x30(0x10)
	};


	// Struct MovieSceneGameplayEventTrack.MovieSceneGameplayEventChannel
	// Inherited from FMovieSceneChannel
	// Size: 0xA8 (0xF8 - 0x50)
	struct FMovieSceneGameplayEventChannel : public FMovieSceneChannel	
	{
	public:
		TArray<FFrameNumber> KeyTimes; // 0x50(0x10)
		TArray<FMovieSceneGameplayEvent> KeyValues; // 0x60(0x10)
		FMovieSceneKeyHandleMap KeyHandles; // 0x70(0x88)
	};


	// Struct MovieSceneGameplayEventTrack.MovieSceneGameplayEventTriggerData
	// Size: 0x60 (0x60 - 0x0)
	struct FMovieSceneGameplayEventTriggerData	
	{
	public:
		FMemberReference GameplayEventFunctionProperty; // 0x0(0x30)
		FInstancedPropertyBag Payload; // 0x30(0x10)
		FGuid ObjectBindingID; // 0x40(0x10)
		unsigned char UnknownData00_7[0x10]; // 0x50(0x10) UNKNOWN PROPERTY
	};

}
