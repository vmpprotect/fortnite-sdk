#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: FabricEngineSequencer
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

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
		unsigned char UnknownData00_1[0x60]; // 0x50(0x60) UNKNOWN PROPERTY

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
		unsigned char UnknownData00_1[0x28]; // 0x28(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricEngineSequencer.MusicClockMovieSceneClockSource");
			return ret;
		}

		void OnStartPlaying(FQualifiedFrameTime& InStartTime); // Flags: Native|Public|HasOutParms, Memory Exec: 0x7FF7516A54BC(relative to base address)
		FFrameTime OnRequestCurrentTime(FQualifiedFrameTime& InCurrentTime, float InPlayRate); // Flags: Native|Public|HasOutParms, Memory Exec: 0x7FF7516A533C(relative to base address)
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
