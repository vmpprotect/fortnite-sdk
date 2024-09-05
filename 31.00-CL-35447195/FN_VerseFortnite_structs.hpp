#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: VerseFortnite
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct VerseFortnite.AIComponentSettings
	// Size: 0x10 (0x10 - 0x0)
	struct FAIComponentSettings	
	{
	public:
		UClass AIComponentClass; // 0x0(0x8)
		UAIComponentData AIComponentData; // 0x8(0x8)
	};


	// Struct VerseFortnite.CharacterPreviewMesh
	// Size: 0x40 (0x40 - 0x0)
	struct FCharacterPreviewMesh	
	{
	public:
		TWeakObjectPtr SkeletalMesh; // 0x0(0x20)
		FGameplayTagContainer MeshDescriptor; // 0x20(0x20)
	};


	// Struct VerseFortnite.CharacterModifierEmote
	// Size: 0x20 (0x20 - 0x0)
	struct FCharacterModifierEmote	
	{
	public:
		TWeakObjectPtr EmoteDefinition; // 0x0(0x20)
	};


	// Struct VerseFortnite.CharacterModifierInventoryItem
	// Size: 0x28 (0x28 - 0x0)
	struct FCharacterModifierInventoryItem	
	{
	public:
		TWeakObjectPtr ItemDefinition; // 0x0(0x20)
		int32_t ItemQuantity; // 0x20(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
	};


	// Struct VerseFortnite.DefaultCharacterCustomizationData
	// Size: 0x50 (0x50 - 0x0)
	struct FDefaultCharacterCustomizationData	
	{
	public:
		unsigned char UnknownData01_7[0x40]; // 0x0(0x40) UNKNOWN PROPERTY
		TArray CharacterParts; // 0x40(0x10)
	};


	// Struct VerseFortnite.CharacterTypePreset
	// Size: 0x40 (0x40 - 0x0)
	struct FCharacterTypePreset	
	{
	public:
		TWeakObjectPtr SpawnerData; // 0x0(0x20)
		TWeakObjectPtr AdditionalData; // 0x20(0x20)
	};

}
