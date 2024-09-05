#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: TakeMovieScene
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class TakeMovieScene.MovieSceneTakeSection
	// Inherited from UMovieSceneSection -> UMovieSceneSignedObject -> UObject
	// Size: 0x750 (0x840 - 0xF0)
	class UMovieSceneTakeSection : public UMovieSceneSection	
	{
	public:
		FMovieSceneIntegerChannel HoursCurve; // 0xF0(0x108)
		FMovieSceneIntegerChannel MinutesCurve; // 0x1F8(0x108)
		FMovieSceneIntegerChannel SecondsCurve; // 0x300(0x108)
		FMovieSceneIntegerChannel FramesCurve; // 0x408(0x108)
		FMovieSceneFloatChannel SubFramesCurve; // 0x510(0x110)
		FMovieSceneFloatChannel RateCurve; // 0x620(0x110)
		FMovieSceneStringChannel Slate; // 0x730(0x110)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TakeMovieScene.MovieSceneTakeSection");
			return ret;
		}
	};


	// Class TakeMovieScene.MovieSceneTakeSettings
	// Inherited from UObject
	// Size: 0x70 (0x98 - 0x28)
	class UMovieSceneTakeSettings : public UObject	
	{
	public:
		FString HoursName; // 0x28(0x10)
		FString MinutesName; // 0x38(0x10)
		FString SecondsName; // 0x48(0x10)
		FString FramesName; // 0x58(0x10)
		FString SubFramesName; // 0x68(0x10)
		FString RateName; // 0x78(0x10)
		FString SlateName; // 0x88(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TakeMovieScene.MovieSceneTakeSettings");
			return ret;
		}
	};


	// Class TakeMovieScene.MovieSceneTakeTrack
	// Inherited from UMovieSceneNameableTrack -> UMovieSceneTrack -> UMovieSceneSignedObject -> UObject
	// Size: 0x10 (0xA8 - 0x98)
	class UMovieSceneTakeTrack : public UMovieSceneNameableTrack	
	{
	public:
		TArray<UMovieSceneSection*> Sections; // 0x98(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/TakeMovieScene.MovieSceneTakeTrack");
			return ret;
		}
	};

}
