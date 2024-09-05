#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: FabricLevelSequencer
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class FabricLevelSequencer.FabricSongSyncComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x170 (0x210 - 0xA0)
	class UFabricSongSyncComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY
		float MinAllowedTempo; // 0xA8(0x4)
		float MaxAllowedTempo; // 0xAC(0x4)
		TArray<int32_t> AllowedTimeSignatureNumerators; // 0xB0(0x10)
		TArray<int32_t> AllowedTimeSignatureDenominators; // 0xC0(0x10)
		FName MidiFilePropertyName; // 0xD0(0x4)
		FName OffsetBarsProperty; // 0xD4(0x4)
		FName OffsetBeatsProperty; // 0xD8(0x4)
		FName IgnoreSeeksProperty; // 0xDC(0x4)
		FMulticastInlineDelegate OnSongSyncPlayInitiated; // 0xE0(0x10)
		FMulticastInlineDelegate OnSongSyncStarted; // 0xF0(0x10)
		FMulticastInlineDelegate OnSongSyncStopped; // 0x100(0x10)
		FSongSyncPlaybackRequest ServerPlaybackRequest; // 0x110(0xC)
		unsigned char UnknownData01_6[0x10]; // 0x11C(0x10) UNKNOWN PROPERTY
		FMusicTimestamp PlaybackStartTimestamp; // 0x12C(0x8)
		FMusicTimestamp RelativeOffsetTimestampMidi; // 0x134(0x8)
		FMusicTimestamp RelativeOffsetTimestampLinked; // 0x13C(0x8)
		bool bWaitForClockRestart; // 0x144(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x145(0x3) UNKNOWN PROPERTY
		FMusicTimestamp CachedTimeStampPreRestart; // 0x148(0x8)
		unsigned char UnknownData03_6[0x60]; // 0x150(0x60) UNKNOWN PROPERTY
		TWeakObjectPtr<UMidiFile*> TempoMapMidiFile; // 0x1B0(0x8)
		FSongSyncSequenceActor ServerLevelSequenceActor; // 0x1B8(0x10)
		unsigned char UnknownData04_6[0x18]; // 0x1C8(0x18) UNKNOWN PROPERTY
		TWeakObjectPtr<UFabricSongSyncComponent*> AuthoritySongSync; // 0x1E0(0x8)
		TArray<TWeakObjectPtr> LinkedSongSyncs; // 0x1E8(0x10)
		UMusicClockMovieSceneClockSource* CustomClockSource; // 0x1F8(0x8)
		TWeakObjectPtr<UFabricTimelineSyncComponent*> FabricTimelineSyncComponent; // 0x200(0x8)
		TWeakObjectPtr<UFabricMidiFollowComponent*> FollowComponent; // 0x208(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/FabricLevelSequencer.FabricSongSyncComponent");
			return ret;
		}

		void SetTimingType(EFabricSongSyncTimingType InTimingType); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7516A998C(relative to base address)
		void SetStartSeekToTimeSeconds(float InStartSeekToTimeSeconds); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7516A990C(relative to base address)
		void SetPlaybackType(EFabricSongSyncPlaybackType InPlaybackType); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7516A9890(relative to base address)
		void SetMidiFile(UMidiFile* InMidiFile); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7516A9810(relative to base address)
		void SetLooping(bool bInLooping); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F151C24(relative to base address)
		void SetFabricTimelineSync(UFabricTimelineSyncComponent* InFabricTimelineSync); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7516A9710(relative to base address)
		void SetFabricMIDIPlayerPatchWrapper(UFabricMIDIPlayerPatchWrapper* PatchWrapper); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7516A9590(relative to base address)
		void SetFabricMetasoundManager(UFabricMetaSoundManagerComponent* InFabricMetasoundManager); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7516A9690(relative to base address)
		void SetControllingTempoInGroup(bool bInControllingTempoInGroup); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7516A9510(relative to base address)
		void ServerStopSongSync(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7516A94C4(relative to base address)
		void ServerPlaySongSync(FMusicTimestamp& StartingTimestamp); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF7516A9430(relative to base address)
		void OnTimelineSyncSeek(FMidiSongPos& ClientPos, FMidiSongPos& ServerPos); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF7516A9298(relative to base address)
		void OnRep_ServerPlaybackRequest(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7516A9230(relative to base address)
		void OnRep_ServerLevelSequenceActor(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7516A921C(relative to base address)
		void OnMidiLooped(FMusicTimestamp& NewStartTimestamp); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF7516A9188(relative to base address)
		void OnLevelSequenceLooped(FMusicTimestamp& NewStartTimestamp); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF7516A90F0(relative to base address)
		void OnDiscontinuity(EMusicTimeDiscontinuityType DiscontinuityType, FMidiSongPos PreviousPos, FMidiSongPos NewPos); // Flags: Final|Native|Private, Memory Exec: 0x7FF7516A8DF0(relative to base address)
		void OnClockAuthorityChanged(EFabricMetasoundClock ClockType, ABuildingActor* OldAuthority, ABuildingActor* NewAuthority); // Flags: Final|Native|Private, Memory Exec: 0x7FF7516A8CF8(relative to base address)
		bool MidiFileHasAnyTempoData(UMidiFile* InMidiFile); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7516A8C34(relative to base address)
		void LocalStopSongSync(UFabricSongSyncComponent* InAuthoritySongSync); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7516A8BB4(relative to base address)
		bool IsPlaying(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7516A8B9C(relative to base address)
		bool IsControllingTempo(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74DE15928(relative to base address)
		FMusicTimestamp GetCurrentTimestamp(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7516A8B70(relative to base address)
		void AddLinkedSongSync(UFabricSongSyncComponent* FollowerSongSync); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7516A8A64(relative to base address)
		void AddLevelSequence(TWeakObjectPtr<ULevelSequence*> LevelSequenceAsset); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF7516A8968(relative to base address)
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
