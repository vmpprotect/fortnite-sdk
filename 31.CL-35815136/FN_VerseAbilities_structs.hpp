#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: VerseAbilities
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct VerseAbilities.AbilityPropertyLink
	// Size: 0x20 (0x20 - 0x0)
	struct FAbilityPropertyLink	
	{
	public:
		unsigned char UnknownData00_2[0x20]; // 0x0(0x20) UNKNOWN PROPERTY
	};


	// Struct VerseAbilities.VerseAbilityMapping
	// Inherited from FFastArraySerializerItem
	// Size: 0xC (0x18 - 0xC)
	struct FVerseAbilityMapping : public FFastArraySerializerItem	
	{
	public:
		FGameplayAbilitySpecHandle Handle; // 0xC(0x4)
		UVerseAbility* AbilityArchetype; // 0x10(0x8)
	};


	// Struct VerseAbilities.VerseAbilityMappingContainer
	// Inherited from FFastArraySerializer
	// Size: 0x10 (0x118 - 0x108)
	struct FVerseAbilityMappingContainer : public FFastArraySerializer	
	{
	public:
		TArray<FVerseAbilityMapping> Items; // 0x108(0x10)
	};

}
