#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: VerseAbilities
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct VerseAbilities.AbilityPropertyLink
	// Size: 0x20 (0x20 - 0x0)
	struct FAbilityPropertyLink	
	{
	public:
		unsigned char UnknownData01_2[0x20]; // 0x0(0x20) UNKNOWN PROPERTY
	};


	// Struct VerseAbilities.VerseAbilityMapping
	// Inherited from FFastArraySerializerItem
	// Size: 0xC (0x18 - 0xC)
	struct FVerseAbilityMapping : public FFastArraySerializerItem	
	{
	public:
		FGameplayAbilitySpecHandle Handle; // 0xC(0x4)
		UVerseAbility AbilityArchetype; // 0x10(0x8)
	};


	// Struct VerseAbilities.VerseAbilityMappingContainer
	// Inherited from FFastArraySerializer
	// Size: 0x10 (0x118 - 0x108)
	struct FVerseAbilityMappingContainer : public FFastArraySerializer	
	{
	public:
		TArray Items; // 0x108(0x10)
	};

}
