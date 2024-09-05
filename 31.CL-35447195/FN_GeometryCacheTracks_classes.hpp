#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: GeometryCacheTracks
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class GeometryCacheTracks.MovieSceneGeometryCacheSection
	// Inherited from UMovieSceneSection -> UMovieSceneSignedObject -> UObject
	// Size: 0x40 (0x130 - 0xF0)
	class UMovieSceneGeometryCacheSection : public UMovieSceneSection	
	{
	public:
		FMovieSceneGeometryCacheParams Params; // 0xF0(0x40)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GeometryCacheTracks.MovieSceneGeometryCacheSection");
			return ret;
		}
	};


	// Class GeometryCacheTracks.MovieSceneGeometryCacheTrack
	// Inherited from UMovieSceneNameableTrack -> UMovieSceneTrack -> UMovieSceneSignedObject -> UObject
	// Size: 0x18 (0xB0 - 0x98)
	class UMovieSceneGeometryCacheTrack : public UMovieSceneNameableTrack	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x98(0x8) UNKNOWN PROPERTY
		TArray AnimationSections; // 0xA0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GeometryCacheTracks.MovieSceneGeometryCacheTrack");
			return ret;
		}
	};

}
