#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: FabricLevelSequencer
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct FabricLevelSequencer.SongSyncPlaybackRequest
	// Size: 0xC (0xC - 0x0)
	struct FSongSyncPlaybackRequest	
	{
	public:
		FMusicTimestamp StartingTimestamp; // 0x0(0x8)
		bool bPlay; // 0x8(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
	};


	// Struct FabricLevelSequencer.SongSyncSequenceActor
	// Size: 0x10 (0x10 - 0x0)
	struct FSongSyncSequenceActor	
	{
	public:
		ALevelSequenceActor LevelSequenceActor; // 0x0(0x8)
		bool bInitialized; // 0x8(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x9(0x7) UNKNOWN PROPERTY
	};


	// Struct FabricLevelSequencer.LinkedSequence
	// Size: 0x20 (0x20 - 0x0)
	struct FLinkedSequence	
	{
	public:
		TWeakObjectPtr LevelSequence; // 0x0(0x20)
	};


	// Struct FabricLevelSequencer.LinkedSongSync
	// Size: 0x20 (0x20 - 0x0)
	struct FLinkedSongSync	
	{
	public:
		TWeakObjectPtr LinkedSongSync; // 0x0(0x20)
	};


	// Struct FabricLevelSequencer.LinkedSongSyncList
	// Size: 0x10 (0x10 - 0x0)
	struct FLinkedSongSyncList	
	{
	public:
		TArray LinkedSongSyncs; // 0x0(0x10)
	};


	// Struct FabricLevelSequencer.UserOptionDefinitionLinkedSequenceMetaData
	// Inherited from FUserOptionDefinitionMetaData
	// Size: 0x0 (0x8 - 0x8)
	struct FUserOptionDefinitionLinkedSequenceMetaData : public FUserOptionDefinitionMetaData	
	{
	public:
	};


	// Struct FabricLevelSequencer.UserOptionDefinitionLinkedSongSyncListMetaData
	// Inherited from FUserOptionDefinitionMetaData
	// Size: 0x10 (0x18 - 0x8)
	struct FUserOptionDefinitionLinkedSongSyncListMetaData : public FUserOptionDefinitionMetaData	
	{
	public:
		FLinkedSongSyncList DefaultValue; // 0x8(0x10)
	};

}
