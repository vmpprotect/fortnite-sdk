#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: GameplayTags
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct GameplayTags.GameplayTag
	// Size: 0x4 (0x4 - 0x0)
	struct FGameplayTag	
	{
	public:
		FName TagName; // 0x0(0x4)
	};


	// Struct GameplayTags.GameplayTagContainer
	// Size: 0x20 (0x20 - 0x0)
	struct FGameplayTagContainer	
	{
	public:
		TArray<FGameplayTag> GameplayTags; // 0x0(0x10)
		TArray<FGameplayTag> ParentTags; // 0x10(0x10)
	};


	// Struct GameplayTags.GameplayTagQuery
	// Size: 0x48 (0x48 - 0x0)
	struct FGameplayTagQuery	
	{
	public:
		int32_t TokenStreamVersion; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TArray<FGameplayTag> TagDictionary; // 0x8(0x10)
		TArray<char> QueryTokenStream; // 0x18(0x10)
		FString UserDescription; // 0x28(0x10)
		FString AutoDescription; // 0x38(0x10)
	};


	// Struct GameplayTags.GameplayTagContainerNetSerializerSerializationHelper
	// Size: 0x10 (0x10 - 0x0)
	struct FGameplayTagContainerNetSerializerSerializationHelper	
	{
	public:
		TArray<FGameplayTag> GameplayTags; // 0x0(0x10)
	};


	// Struct GameplayTags.GameplayTagCreationWidgetHelper
	// Size: 0x1 (0x1 - 0x0)
	struct FGameplayTagCreationWidgetHelper	
	{
	public:
		unsigned char UnknownData00_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct GameplayTags.GameplayTagContainerNetSerializerConfig
	// Inherited from FNetSerializerConfig
	// Size: 0x0 (0x10 - 0x10)
	struct FGameplayTagContainerNetSerializerConfig : public FNetSerializerConfig	
	{
	public:
	};


	// Struct GameplayTags.GameplayTagNetSerializerConfig
	// Inherited from FNetSerializerConfig
	// Size: 0x0 (0x10 - 0x10)
	struct FGameplayTagNetSerializerConfig : public FNetSerializerConfig	
	{
	public:
	};


	// Struct GameplayTags.GameplayTagRedirect
	// Size: 0x8 (0x8 - 0x0)
	struct FGameplayTagRedirect	
	{
	public:
		FName OldTagName; // 0x0(0x4)
		FName NewTagName; // 0x4(0x4)
	};


	// Struct GameplayTags.GameplayTagTableRow
	// Inherited from FTableRowBase
	// Size: 0x18 (0x20 - 0x8)
	struct FGameplayTagTableRow : public FTableRowBase	
	{
	public:
		FName Tag; // 0x8(0x4)
		unsigned char UnknownData00_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FString DevComment; // 0x10(0x10)
	};


	// Struct GameplayTags.RestrictedGameplayTagTableRow
	// Inherited from FGameplayTagTableRow -> FTableRowBase
	// Size: 0x8 (0x28 - 0x20)
	struct FRestrictedGameplayTagTableRow : public FGameplayTagTableRow	
	{
	public:
		bool bAllowNonRestrictedChildren; // 0x20(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x21(0x7) UNKNOWN PROPERTY
	};


	// Struct GameplayTags.GameplayTagSource
	// Size: 0x18 (0x18 - 0x0)
	struct FGameplayTagSource	
	{
	public:
		FName SourceName; // 0x0(0x4)
		EGameplayTagSourceType SourceType; // 0x4(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
		UGameplayTagsList* SourceTagList; // 0x8(0x8)
		URestrictedGameplayTagsList* SourceRestrictedTagList; // 0x10(0x8)
	};


	// Struct GameplayTags.GameplayTagNode
	// Size: 0x50 (0x50 - 0x0)
	struct FGameplayTagNode	
	{
	public:
		unsigned char UnknownData00_2[0x50]; // 0x0(0x50) UNKNOWN PROPERTY
	};


	// Struct GameplayTags.GameplayTagCategoryRemap
	// Size: 0x20 (0x20 - 0x0)
	struct FGameplayTagCategoryRemap	
	{
	public:
		FString BaseCategory; // 0x0(0x10)
		TArray<FString> RemapCategories; // 0x10(0x10)
	};


	// Struct GameplayTags.RestrictedConfigInfo
	// Size: 0x20 (0x20 - 0x0)
	struct FRestrictedConfigInfo	
	{
	public:
		FString RestrictedConfigName; // 0x0(0x10)
		TArray<FString> Owners; // 0x10(0x10)
	};

}
