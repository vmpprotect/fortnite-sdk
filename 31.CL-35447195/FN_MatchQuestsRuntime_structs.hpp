#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: MatchQuestsRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct MatchQuestsRuntime.SquadMemberSelection
	// Size: 0x10 (0x10 - 0x0)
	struct FSquadMemberSelection	
	{
	public:
		AFortPlayerState SquadMember; // 0x0(0x8)
		int32_t OfferQuestIndex; // 0x8(0x4)
		unsigned char UnknownData01_7[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
	};


	// Struct MatchQuestsRuntime.SquadMatchQuests
	// Size: 0x20 (0x20 - 0x0)
	struct FSquadMatchQuests	
	{
	public:
		TArray SquadOffer; // 0x0(0x10)
		TArray SquadSelections; // 0x10(0x10)
	};


	// Struct MatchQuestsRuntime.MatchQuestsActiveBucketsTableRow
	// Inherited from FTableRowBase
	// Size: 0x8 (0x10 - 0x8)
	struct FMatchQuestsActiveBucketsTableRow : public FTableRowBase	
	{
	public:
		FGameplayTag BucketTag; // 0x8(0x4)
		unsigned char UnknownData01_7[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
	};

}
