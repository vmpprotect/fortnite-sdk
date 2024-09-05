#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: LiveLinkMovieScene
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct LiveLinkMovieScene.MovieSceneLiveLinkSectionTemplate
	// Inherited from FMovieScenePropertySectionTemplate -> FMovieSceneEvalTemplate -> FMovieSceneEvalTemplateBase
	// Size: 0x80 (0xB8 - 0x38)
	struct FMovieSceneLiveLinkSectionTemplate : public FMovieScenePropertySectionTemplate	
	{
	public:
		FLiveLinkSubjectPreset SubjectPreset; // 0x38(0x38)
		TArray<bool> ChannelMask; // 0x70(0x10)
		TArray<FLiveLinkSubSectionData> SubSectionsData; // 0x80(0x10)
		unsigned char UnknownData00_7[0x28]; // 0x90(0x28) UNKNOWN PROPERTY
	};


	// Struct LiveLinkMovieScene.LiveLinkSubSectionData
	// Size: 0x10 (0x10 - 0x0)
	struct FLiveLinkSubSectionData	
	{
	public:
		TArray<FLiveLinkPropertyData> Properties; // 0x0(0x10)
	};


	// Struct LiveLinkMovieScene.LiveLinkPropertyData
	// Size: 0x58 (0x58 - 0x0)
	struct FLiveLinkPropertyData	
	{
	public:
		FName PropertyName; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TArray<FMovieSceneFloatChannel> FloatChannel; // 0x8(0x10)
		TArray<FMovieSceneStringChannel> StringChannel; // 0x18(0x10)
		TArray<FMovieSceneIntegerChannel> IntegerChannel; // 0x28(0x10)
		TArray<FMovieSceneBoolChannel> BoolChannel; // 0x38(0x10)
		TArray<FMovieSceneByteChannel> ByteChannel; // 0x48(0x10)
	};

}
