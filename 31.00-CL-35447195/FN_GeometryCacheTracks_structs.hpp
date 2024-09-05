#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: GeometryCacheTracks
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct GeometryCacheTracks.MovieSceneGeometryCacheParams
	// Size: 0x40 (0x40 - 0x0)
	struct FMovieSceneGeometryCacheParams	
	{
	public:
		UGeometryCache GeometryCacheAsset; // 0x0(0x8)
		FFrameNumber FirstLoopStartFrameOffset; // 0x8(0x4)
		FFrameNumber StartFrameOffset; // 0xC(0x4)
		FFrameNumber EndFrameOffset; // 0x10(0x4)
		float PlayRate; // 0x14(0x4)
		bool bReverse : 1; // 0x18:0(0x1)
		unsigned char UnknownData02_5[0x3]; // 0x19(0x3) UNKNOWN PROPERTY
		float StartOffset; // 0x1C(0x4)
		float EndOffset; // 0x20(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
		FSoftObjectPath GeometryCache; // 0x28(0x18)
	};


	// Struct GeometryCacheTracks.MovieSceneGeometryCacheSectionTemplateParameters
	// Inherited from FMovieSceneGeometryCacheParams
	// Size: 0x8 (0x48 - 0x40)
	struct FMovieSceneGeometryCacheSectionTemplateParameters : public FMovieSceneGeometryCacheParams	
	{
	public:
		FFrameNumber SectionStartTime; // 0x40(0x4)
		FFrameNumber SectionEndTime; // 0x44(0x4)
	};


	// Struct GeometryCacheTracks.MovieSceneGeometryCacheSectionTemplate
	// Inherited from FMovieSceneEvalTemplate -> FMovieSceneEvalTemplateBase
	// Size: 0x48 (0x68 - 0x20)
	struct FMovieSceneGeometryCacheSectionTemplate : public FMovieSceneEvalTemplate	
	{
	public:
		FMovieSceneGeometryCacheSectionTemplateParameters Params; // 0x20(0x48)
	};

}
