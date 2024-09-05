#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: NiagaraSimCaching
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct NiagaraSimCaching.MovieSceneNiagaraCacheParams
	// Inherited from FMovieSceneBaseCacheParams
	// Size: 0x68 (0x88 - 0x20)
	struct FMovieSceneNiagaraCacheParams : public FMovieSceneBaseCacheParams	
	{
	public:
		FNiagaraSimCacheCreateParameters CacheParameters; // 0x20(0x58)
		UNiagaraSimCache* SimCache; // 0x78(0x8)
		bool bLockCacheToReadOnly; // 0x80(0x1)
		bool bOverrideQualityLevel; // 0x81(0x1)
		EPerQualityLevels RecordQualityLevel; // 0x82(0x1)
		ENiagaraSimCacheSectionPlayMode CacheReplayPlayMode; // 0x83(0x1)
		ENiagaraSimCacheSectionStretchMode SectionStretchMode; // 0x84(0x1)
		unsigned char UnknownData00_7[0x3]; // 0x85(0x3) UNKNOWN PROPERTY
	};


	// Struct NiagaraSimCaching.MovieSceneNiagaraSectionTemplateParameter
	// Size: 0x98 (0x98 - 0x0)
	struct FMovieSceneNiagaraSectionTemplateParameter	
	{
	public:
		FMovieSceneFrameRange SectionRange; // 0x0(0x10)
		FMovieSceneNiagaraCacheParams Params; // 0x10(0x88)
	};


	// Struct NiagaraSimCaching.MovieSceneNiagaraCacheSectionTemplate
	// Inherited from FMovieSceneTrackImplementation -> FMovieSceneEvalTemplateBase
	// Size: 0x10 (0x20 - 0x10)
	struct FMovieSceneNiagaraCacheSectionTemplate : public FMovieSceneTrackImplementation	
	{
	public:
		TArray<FMovieSceneNiagaraSectionTemplateParameter> CacheSections; // 0x10(0x10)
	};

}
