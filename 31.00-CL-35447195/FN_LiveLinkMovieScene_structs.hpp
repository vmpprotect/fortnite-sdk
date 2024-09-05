#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: LiveLinkMovieScene
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct LiveLinkMovieScene.MovieSceneLiveLinkSectionTemplate
	// Inherited from FMovieScenePropertySectionTemplate -> FMovieSceneEvalTemplate -> FMovieSceneEvalTemplateBase
	// Size: 0x80 (0xB8 - 0x38)
	struct FMovieSceneLiveLinkSectionTemplate : public FMovieScenePropertySectionTemplate	
	{
	public:
		FLiveLinkSubjectPreset SubjectPreset; // 0x38(0x38)
		TArray ChannelMask; // 0x70(0x10)
		TArray SubSectionsData; // 0x80(0x10)
		unsigned char UnknownData01_7[0x28]; // 0x90(0x28) UNKNOWN PROPERTY
	};


	// Struct LiveLinkMovieScene.LiveLinkSubSectionData
	// Size: 0x10 (0x10 - 0x0)
	struct FLiveLinkSubSectionData	
	{
	public:
		TArray Properties; // 0x0(0x10)
	};


	// Struct LiveLinkMovieScene.LiveLinkPropertyData
	// Size: 0x58 (0x58 - 0x0)
	struct FLiveLinkPropertyData	
	{
	public:
		FName PropertyName; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TArray FloatChannel; // 0x8(0x10)
		TArray StringChannel; // 0x18(0x10)
		TArray IntegerChannel; // 0x28(0x10)
		TArray BoolChannel; // 0x38(0x10)
		TArray ByteChannel; // 0x48(0x10)
	};

}
