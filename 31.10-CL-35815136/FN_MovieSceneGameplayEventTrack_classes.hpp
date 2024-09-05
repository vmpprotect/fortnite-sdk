#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: MovieSceneGameplayEventTrack
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class MovieSceneGameplayEventTrack.MovieSceneGameplayEventSection
	// Inherited from UMovieSceneSection -> UMovieSceneSignedObject -> UObject
	// Size: 0x100 (0x1F0 - 0xF0)
	class UMovieSceneGameplayEventSection : public UMovieSceneSection	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0xF0(0x8) UNKNOWN PROPERTY
		FMovieSceneGameplayEventChannel EventChannel; // 0xF8(0xF8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneGameplayEventTrack.MovieSceneGameplayEventSection");
			return ret;
		}
	};


	// Class MovieSceneGameplayEventTrack.MovieSceneGameplayEventSystem
	// Inherited from UMovieSceneEntitySystem -> UObject
	// Size: 0x50 (0x90 - 0x40)
	class UMovieSceneGameplayEventSystem : public UMovieSceneEntitySystem	
	{
	public:
		unsigned char UnknownData00_1[0x50]; // 0x40(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneGameplayEventTrack.MovieSceneGameplayEventSystem");
			return ret;
		}
	};


	// Class MovieSceneGameplayEventTrack.MovieSceneGameplayEventTrack
	// Inherited from UMovieSceneNameableTrack -> UMovieSceneTrack -> UMovieSceneSignedObject -> UObject
	// Size: 0x20 (0xB8 - 0x98)
	class UMovieSceneGameplayEventTrack : public UMovieSceneNameableTrack	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x98(0x8) UNKNOWN PROPERTY
		bool bFireEventsWhenForwards : 1; // 0xA0:0(0x1)
		bool bFireEventsWhenBackwards : 1; // 0xA0:1(0x1)
		unsigned char UnknownData01_5[0x7]; // 0xA1(0x7) UNKNOWN PROPERTY
		TArray<UMovieSceneSection*> Sections; // 0xA8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MovieSceneGameplayEventTrack.MovieSceneGameplayEventTrack");
			return ret;
		}
	};

}
