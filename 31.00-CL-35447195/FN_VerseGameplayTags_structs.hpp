#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: VerseGameplayTags
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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
		TArray InternalTags; // 0x0(0x10)
	};


	// Struct VerseGameplayTags.VerseGameplayTag
	// Size: 0x8 (0x8 - 0x0)
	struct FVerseGameplayTag	
	{
	public:
		UClass InternalTag; // 0x0(0x8)
	};

}
