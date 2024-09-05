#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: LiveLinkMovieScene
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class LiveLinkMovieScene.MovieSceneLiveLinkSection
	// Inherited from UMovieSceneSection -> UMovieSceneSignedObject -> UObject
	// Size: 0x140 (0x230 - 0xF0)
	class UMovieSceneLiveLinkSection : public UMovieSceneSection	
	{
	public:
		FLiveLinkSubjectPreset SubjectPreset; // 0xF0(0x38)
		TArray ChannelMask; // 0x128(0x10)
		TArray Subsections; // 0x138(0x10)
		unsigned char UnknownData02_6[0x10]; // 0x148(0x10) UNKNOWN PROPERTY
		FName SubjectName; // 0x158(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x15C(0x4) UNKNOWN PROPERTY
		FLiveLinkFrameData TemplateToPush; // 0x160(0x90)
		FLiveLinkRefSkeleton RefSkeleton; // 0x1F0(0x20)
		TArray CurveNames; // 0x210(0x10)
		TArray PropertyFloatChannels; // 0x220(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LiveLinkMovieScene.MovieSceneLiveLinkSection");
			return ret;
		}
	};


	// Class LiveLinkMovieScene.MovieSceneLiveLinkSubSection
	// Inherited from UObject
	// Size: 0x28 (0x50 - 0x28)
	class UMovieSceneLiveLinkSubSection : public UObject	
	{
	public:
		FLiveLinkSubSectionData SubSectionData; // 0x28(0x10)
		UClass SubjectRole; // 0x38(0x8)
		unsigned char UnknownData01_7[0x10]; // 0x40(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LiveLinkMovieScene.MovieSceneLiveLinkSubSection");
			return ret;
		}
	};


	// Class LiveLinkMovieScene.MovieSceneLiveLinkSubSectionAnimation
	// Inherited from UMovieSceneLiveLinkSubSection -> UObject
	// Size: 0x10 (0x60 - 0x50)
	class UMovieSceneLiveLinkSubSectionAnimation : public UMovieSceneLiveLinkSubSection	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0x50(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LiveLinkMovieScene.MovieSceneLiveLinkSubSectionAnimation");
			return ret;
		}
	};


	// Class LiveLinkMovieScene.MovieSceneLiveLinkSubSectionBasicRole
	// Inherited from UMovieSceneLiveLinkSubSection -> UObject
	// Size: 0x10 (0x60 - 0x50)
	class UMovieSceneLiveLinkSubSectionBasicRole : public UMovieSceneLiveLinkSubSection	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0x50(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LiveLinkMovieScene.MovieSceneLiveLinkSubSectionBasicRole");
			return ret;
		}
	};


	// Class LiveLinkMovieScene.MovieSceneLiveLinkSubSectionProperties
	// Inherited from UMovieSceneLiveLinkSubSection -> UObject
	// Size: 0x10 (0x60 - 0x50)
	class UMovieSceneLiveLinkSubSectionProperties : public UMovieSceneLiveLinkSubSection	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0x50(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LiveLinkMovieScene.MovieSceneLiveLinkSubSectionProperties");
			return ret;
		}
	};


	// Class LiveLinkMovieScene.MovieSceneLiveLinkTrack
	// Inherited from UMovieScenePropertyTrack -> UMovieSceneNameableTrack -> UMovieSceneTrack -> UMovieSceneSignedObject -> UObject
	// Size: 0x10 (0xD0 - 0xC0)
	class UMovieSceneLiveLinkTrack : public UMovieScenePropertyTrack	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0xC0(0x8) UNKNOWN PROPERTY
		UClass TrackRole; // 0xC8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LiveLinkMovieScene.MovieSceneLiveLinkTrack");
			return ret;
		}
	};

}
