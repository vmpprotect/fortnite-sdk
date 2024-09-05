#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: NiagaraSimCaching
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class NiagaraSimCaching.MovieSceneNiagaraCacheSection
	// Inherited from UMovieSceneBaseCacheSection -> UMovieSceneSection -> UMovieSceneSignedObject -> UObject
	// Size: 0x90 (0x188 - 0xF8)
	class UMovieSceneNiagaraCacheSection : public UMovieSceneBaseCacheSection	
	{
	public:
		FMovieSceneNiagaraCacheParams Params; // 0xF8(0x88)
		bool bCacheOutOfDate; // 0x180(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x181(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NiagaraSimCaching.MovieSceneNiagaraCacheSection");
			return ret;
		}
	};


	// Class NiagaraSimCaching.MovieSceneNiagaraCacheTrack
	// Inherited from UMovieSceneNameableTrack -> UMovieSceneTrack -> UMovieSceneSignedObject -> UObject
	// Size: 0x30 (0xC8 - 0x98)
	class UMovieSceneNiagaraCacheTrack : public UMovieSceneNameableTrack	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0x98(0x10) UNKNOWN PROPERTY
		bool bIsRecording; // 0xA8(0x1)
		unsigned char UnknownData01_6[0x7]; // 0xA9(0x7) UNKNOWN PROPERTY
		TArray<UMovieSceneSection*> AnimationSections; // 0xB0(0x10)
		bool bCacheRecordingEnabled; // 0xC0(0x1)
		unsigned char UnknownData02_7[0x7]; // 0xC1(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NiagaraSimCaching.MovieSceneNiagaraCacheTrack");
			return ret;
		}
	};

}
