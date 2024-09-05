#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: GeometryCacheTracks
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

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
		unsigned char UnknownData00_3[0x8]; // 0x98(0x8) UNKNOWN PROPERTY
		TArray<UMovieSceneSection*> AnimationSections; // 0xA0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GeometryCacheTracks.MovieSceneGeometryCacheTrack");
			return ret;
		}
	};

}
