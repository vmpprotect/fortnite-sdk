#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: FabricLevelSequencer
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class FabricLevelSequencer.FabricSongSyncComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x170 (0x210 - 0xA0)
	class UFabricSongSyncComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData05_3[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY
		float MinAllowedTempo; // 0xA8(0x4)
		float MaxAllowedTempo; // 0xAC(0x4)
		TArray AllowedTimeSignatureNumerators; // 0xB0(0x10)
		TArray AllowedTimeSignatureDenominators; // 0xC0(0x10)
		FName MidiFilePropertyName; // 0xD0(0x4)
		FName OffsetBarsProperty; // 0xD4(0x4)
		FName OffsetBeatsProperty; // 0xD8(0x4)
		FName IgnoreSeeksProperty; // 0xDC(0x4)
		FMulticastInlineDelegate OnSongSyncPlayInitiated; // 0xE0(0x10)
		FMulticastInlineDelegate OnSongSyncStarted; // 0xF0(0x10)
		FMulticastInlineDelegate OnSongSyncStopped; // 0x100(0x10)
		FSongSyncPlaybackRequest ServerPlaybackRequest; // 0x110(0xC)
		unsigned char UnknownData06_6[0x10]; // 0x11C(0x10) UNKNOWN PROPERTY
		FMusicTimestamp PlaybackStartTimestamp; // 0x12C(0x8)
		FMusicTimestamp RelativeOffsetTimestampMidi; // 0x134(0x8)
		FMusicTimestamp RelativeOffsetTimestampLinked; // 0x13C(0x8)
		bool bWaitForClockRestart; // 0x144(0x1)
		unsigned char UnknownData07_6[0x3]; // 0x145(0x3) UNKNOWN PROPERTY
		FMusicTimestamp CachedTimeStampPreRestart; // 0x148(0x8)
		unsigned char UnknownData08_6[0x60]; // 0x150(0x60) UNKNOWN PROPERTY
		TWeakObjectPtr TempoMapMidiFile; // 0x1B0(0x8)
		FSongSyncSequenceActor ServerLevelSequenceActor; // 0x1B8(0x10)
		unsigned char UnknownData09_6[0x18]; // 0x1C8(0x18) UNKNOWN PROPERTY
		TWeakObjectPtr AuthoritySongSync; // 0x1E0(0x8)
		TArray LinkedSongSyncs; // 0x1E8(0x10)
		UMusicClockMovieSceneClockSource CustomClockSource; // 0x1F8(0x8)
		TWeakObjectPtr FabricTimelineSyncComponent; // 0x200(0x8)
		TWeakObjectPtr FollowComponent; // 0x208(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricLevelSequencer.FabricSongSyncComponent");
			return ret;
		}

		void SetTimingType(EFabricSongSyncTimingType InTimingType); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D80738
		void SetStartSeekToTimeSeconds(float InStartSeekToTimeSeconds); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D80658
		void SetPlaybackType(EFabricSongSyncPlaybackType InPlaybackType); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D80578
		void SetMidiFile(UMidiFile InMidiFile); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D80498
		void SetLooping(bool bInLooping); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D803B8
		void SetFabricTimelineSync(UFabricTimelineSyncComponent InFabricTimelineSync); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D802D8
		void SetFabricMIDIPlayerPatchWrapper(UFabricMIDIPlayerPatchWrapper PatchWrapper); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D801F8
		void SetFabricMetasoundManager(UFabricMetaSoundManagerComponent InFabricMetasoundManager); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D80118
		void SetControllingTempoInGroup(bool bInControllingTempoInGroup); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D80038
		void ServerStopSongSync(); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D7FF58
		void ServerPlaySongSync(FMusicTimestamp& StartingTimestamp); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable 0x7FF414D7FE78
		void OnTimelineSyncSeek(FMidiSongPos& ClientPos, FMidiSongPos& ServerPos); // Flags: Final|Native|Private|HasOutParms 0x7FF414D7FD98
		void OnRep_ServerPlaybackRequest(); // Flags: Final|Native|Private 0x7FF414D7FCB8
		void OnRep_ServerLevelSequenceActor(); // Flags: Final|Native|Private 0x7FF414D7FBD8
		void OnMidiLooped(FMusicTimestamp& NewStartTimestamp); // Flags: Final|Native|Private|HasOutParms 0x7FF414D7FAF8
		void OnLevelSequenceLooped(FMusicTimestamp& NewStartTimestamp); // Flags: Final|Native|Private|HasOutParms 0x7FF414D7FA18
		void OnDiscontinuity(EMusicTimeDiscontinuityType DiscontinuityType, FMidiSongPos PreviousPos, FMidiSongPos NewPos); // Flags: Final|Native|Private 0x7FF414D7F938
		void OnClockAuthorityChanged(EFabricMetasoundClock ClockType, ABuildingActor OldAuthority, ABuildingActor NewAuthority); // Flags: Final|Native|Private 0x7FF414D7F858
		bool MidiFileHasAnyTempoData(UMidiFile InMidiFile); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D7F778
		void LocalStopSongSync(UFabricSongSyncComponent InAuthoritySongSync); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D7F698
		bool IsPlaying(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D7F5B8
		bool IsControllingTempo(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D7F4D8
		FMusicTimestamp GetCurrentTimestamp(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414D7F3F8
		void AddLinkedSongSync(UFabricSongSyncComponent FollowerSongSync); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D7F318
		void AddLevelSequence(TWeakObjectPtr LevelSequenceAsset); // Flags: Final|Native|Public|BlueprintCallable 0x7FF414D7F238
	};


	// Class FabricLevelSequencer.PlaylistUserOptionLinkedSequence
	// Inherited from UPlaylistUserOptionBase -> UDataAsset -> UObject
	// Size: 0x20 (0x1D8 - 0x1B8)
	class UPlaylistUserOptionLinkedSequence : public UPlaylistUserOptionBase	
	{
	public:
		FLinkedSequence DefaultValue; // 0x1B8(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricLevelSequencer.PlaylistUserOptionLinkedSequence");
			return ret;
		}
	};


	// Class FabricLevelSequencer.PlaylistUserOptionLinkedSongSyncList
	// Inherited from UPlaylistUserOptionBase -> UDataAsset -> UObject
	// Size: 0x10 (0x1C8 - 0x1B8)
	class UPlaylistUserOptionLinkedSongSyncList : public UPlaylistUserOptionBase	
	{
	public:
		FLinkedSongSyncList DefaultValue; // 0x1B8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricLevelSequencer.PlaylistUserOptionLinkedSongSyncList");
			return ret;
		}
	};

}
