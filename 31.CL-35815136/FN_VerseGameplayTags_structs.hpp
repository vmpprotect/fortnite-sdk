#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: VerseGameplayTags
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct VerseGameplayTags.TaggedObjectFinderEntry
	// Size: 0x30 (0x30 - 0x0)
	struct FTaggedObjectFinderEntry	
	{
	public:
		FVerseGameplayTagContainer RequiredTags; // 0x0(0x10)
		FVerseGameplayTagContainer PreferredTags; // 0x10(0x10)
		FVerseGameplayTagContainer ExclusionTags; // 0x20(0x10)
	};


	// Struct VerseGameplayTags.VerseGameplayTagContainer
	// Size: 0x10 (0x10 - 0x0)
	struct FVerseGameplayTagContainer	
	{
	public:
		TArray<FVerseGameplayTag> InternalTags; // 0x0(0x10)
	};


	// Struct VerseGameplayTags.VerseGameplayTag
	// Size: 0x8 (0x8 - 0x0)
	struct FVerseGameplayTag	
	{
	public:
		UClass* InternalTag; // 0x0(0x8)
	};

}
