#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: GameplayTags
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/GameplayTags.EGameplayContainerMatchType
	enum EGameplayContainerMatchType
	{
		EGameplayContainerMatchType__Any = 0,
		EGameplayContainerMatchType__All = 1,
	};


	// Enum /Script/GameplayTags.EGameplayTagQueryExprType
	enum EGameplayTagQueryExprType
	{
		EGameplayTagQueryExprType__Undefined = 0,
		EGameplayTagQueryExprType__AnyTagsMatch = 1,
		EGameplayTagQueryExprType__AllTagsMatch = 2,
		EGameplayTagQueryExprType__NoTagsMatch = 3,
		EGameplayTagQueryExprType__AnyExprMatch = 4,
		EGameplayTagQueryExprType__AllExprMatch = 5,
		EGameplayTagQueryExprType__NoExprMatch = 6,
	};


	// Enum /Script/GameplayTags.EGameplayTagSourceType
	enum EGameplayTagSourceType
	{
		EGameplayTagSourceType__Native = 0,
		EGameplayTagSourceType__DefaultTagList = 1,
		EGameplayTagSourceType__TagList = 2,
		EGameplayTagSourceType__RestrictedTagList = 3,
		EGameplayTagSourceType__DataTable = 4,
		EGameplayTagSourceType__Invalid = 5,
	};


	// Enum /Script/GameplayTags.EGameplayTagSelectionType
	enum EGameplayTagSelectionType
	{
		EGameplayTagSelectionType__None = 0,
		EGameplayTagSelectionType__NonRestrictedOnly = 1,
		EGameplayTagSelectionType__RestrictedOnly = 2,
		EGameplayTagSelectionType__All = 3,
	};

}
