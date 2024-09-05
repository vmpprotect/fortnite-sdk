#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: MusicBlocks
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

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
		unsigned char UnknownData00_3[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FMusicSequencerHitHandle Handle; // 0x10(0x8)
		float ServerWorldTimeStart; // 0x18(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
		UClass* ActorClass; // 0x20(0x8)
		TWeakObjectPtr<AActor*> Actor; // 0x28(0x8)
		TWeakObjectPtr<APlayerState*> InstigatorPlayerState; // 0x30(0x8)
		FVector_NetQuantize SoundLocation; // 0x38(0x18)
		int32_t SoundIndex; // 0x50(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x54(0x4) UNKNOWN PROPERTY
		FTimerHandle TimerHandle; // 0x58(0x8)
	};


	// Struct MusicBlocks.MusicSequencerHitArray
	// Inherited from FFastArraySerializer
	// Size: 0x18 (0x120 - 0x108)
	struct FMusicSequencerHitArray : public FFastArraySerializer	
	{
	public:
		TArray<FMusicSequencerHitEntry> Items; // 0x108(0x10)
		TWeakObjectPtr<UMusicSequencerHitComponent*> OwningComponent; // 0x118(0x8)
	};

}
