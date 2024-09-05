#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: FabricEngineSequencer
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class FabricEngineSequencer.FabricAudioSyncSection
	// Inherited from UMovieSceneAudioSection -> UMovieSceneSection -> UMovieSceneSignedObject -> UObject
	// Size: 0x110 (0x730 - 0x620)
	class UFabricAudioSyncSection : public UMovieSceneAudioSection	
	{
	public:
		FMovieSceneFloatChannel SyncSoundVolume; // 0x620(0x110)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricEngineSequencer.FabricAudioSyncSection");
			return ret;
		}
	};


	// Class FabricEngineSequencer.FabricAudioSyncTrackInstance
	// Inherited from UMovieSceneTrackInstance -> UObject
	// Size: 0x60 (0xB0 - 0x50)
	class UFabricAudioSyncTrackInstance : public UMovieSceneTrackInstance	
	{
	public:
		unsigned char UnknownData01_1[0x60]; // 0x50(0x60) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricEngineSequencer.FabricAudioSyncTrackInstance");
			return ret;
		}
	};


	// Class FabricEngineSequencer.MusicClockMovieSceneClockSource
	// Inherited from UObject
	// Size: 0x28 (0x50 - 0x28)
	class UMusicClockMovieSceneClockSource : public UObject	
	{
	public:
		unsigned char UnknownData01_1[0x28]; // 0x28(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricEngineSequencer.MusicClockMovieSceneClockSource");
			return ret;
		}

		void OnStartPlaying(FQualifiedFrameTime& InStartTime); // Flags: Native|Public|HasOutParms 0x7FF414D7F158
		FFrameTime OnRequestCurrentTime(FQualifiedFrameTime& InCurrentTime, float InPlayRate); // Flags: Native|Public|HasOutParms 0x7FF414D7F078
	};


	// Class FabricEngineSequencer.FabricAudioSyncTrack
	// Inherited from UMovieSceneAudioTrack -> UMovieSceneNameableTrack -> UMovieSceneTrack -> UMovieSceneSignedObject -> UObject
	// Size: 0x0 (0xA8 - 0xA8)
	class UFabricAudioSyncTrack : public UMovieSceneAudioTrack	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricEngineSequencer.FabricAudioSyncTrack");
			return ret;
		}
	};

}
