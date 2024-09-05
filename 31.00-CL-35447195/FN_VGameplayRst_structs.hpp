#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: VGameplayRst
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct VGameplayRst.ActiveSoundInfo
	// Size: 0x8 (0x8 - 0x0)
	struct FActiveSoundInfo	
	{
	public:
		bool bActive; // 0x0(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float StartTime; // 0x4(0x4)
	};


	// Struct VGameplayRst.DatastoreEntry
	// Inherited from FFastArraySerializerItem
	// Size: 0x14 (0x20 - 0xC)
	struct FDatastoreEntry : public FFastArraySerializerItem	
	{
	public:
		FName KeyName; // 0xC(0x4)
		FString ValueData; // 0x10(0x10)
	};


	// Struct VGameplayRst.DatastoreState
	// Inherited from FFastArraySerializer
	// Size: 0x20 (0x128 - 0x108)
	struct FDatastoreState : public FFastArraySerializer	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x108(0x8) UNKNOWN PROPERTY
		TArray EntriesArray; // 0x110(0x10)
		UDatastoreComponentBase OwningComponent; // 0x120(0x8)
	};


	// Struct VGameplayRst.VerseLevelStreamingLevelStatus
	// Size: 0x28 (0x28 - 0x0)
	struct FVerseLevelStreamingLevelStatus	
	{
	public:
		unsigned char UnknownData02_7[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
		ULevelStreamingDynamic Streamer; // 0x10(0x8)
		UVerseAssetPtr LevelAsset; // 0x18(0x8)
		unsigned char UnknownData03_7[0x8]; // 0x20(0x8) UNKNOWN PROPERTY
	};


	// Struct VGameplayRst.VerseLevelStreamingLevelIdentifier
	// Size: 0x28 (0x28 - 0x0)
	struct FVerseLevelStreamingLevelIdentifier	
	{
	public:
		FSoftObjectPath LevelPath; // 0x0(0x18)
		FString LevelNameOverride; // 0x18(0x10)
	};

}
