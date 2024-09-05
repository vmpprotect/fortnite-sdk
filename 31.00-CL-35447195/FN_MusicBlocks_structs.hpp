#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: MusicBlocks
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct MusicBlocks.MusicSequencerHitHandle
	// Size: 0x8 (0x8 - 0x0)
	struct FMusicSequencerHitHandle	
	{
	public:
		uint64_t Handle; // 0x0(0x8)
	};


	// Struct MusicBlocks.MusicSequencerHitEntry
	// Inherited from FFastArraySerializerItem
	// Size: 0x54 (0x60 - 0xC)
	struct FMusicSequencerHitEntry : public FFastArraySerializerItem	
	{
	public:
		unsigned char UnknownData03_3[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FMusicSequencerHitHandle Handle; // 0x10(0x8)
		float ServerWorldTimeStart; // 0x18(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
		UClass ActorClass; // 0x20(0x8)
		TWeakObjectPtr Actor; // 0x28(0x8)
		TWeakObjectPtr InstigatorPlayerState; // 0x30(0x8)
		FVector_NetQuantize SoundLocation; // 0x38(0x18)
		int32_t SoundIndex; // 0x50(0x4)
		unsigned char UnknownData05_6[0x4]; // 0x54(0x4) UNKNOWN PROPERTY
		FTimerHandle TimerHandle; // 0x58(0x8)
	};


	// Struct MusicBlocks.MusicSequencerHitArray
	// Inherited from FFastArraySerializer
	// Size: 0x18 (0x120 - 0x108)
	struct FMusicSequencerHitArray : public FFastArraySerializer	
	{
	public:
		TArray Items; // 0x108(0x10)
		TWeakObjectPtr OwningComponent; // 0x118(0x8)
	};

}
