#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: MovieSceneGameplayEventTrack
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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
		TArray KeyTimes; // 0x50(0x10)
		TArray KeyValues; // 0x60(0x10)
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
		unsigned char UnknownData01_7[0x10]; // 0x50(0x10) UNKNOWN PROPERTY
	};

}
