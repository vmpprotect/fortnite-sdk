#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: BattlePassBase
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Enum /Script/BattlePassBase.EBattlePassLandingPageSpecialEntryType
	enum EBattlePassLandingPageSpecialEntryType
	{
		EBattlePassLandingPageSpecialEntryType__None = 0,
		EBattlePassLandingPageSpecialEntryType__Subscription = 1,
		EBattlePassLandingPageSpecialEntryType__CharacterCustomizer = 2,
		EBattlePassLandingPageSpecialEntryType__SpecialCharacter = 3,
		EBattlePassLandingPageSpecialEntryType__Weekly = 4,
		EBattlePassLandingPageSpecialEntryType__COUNT = 5,
	};


	// Enum /Script/BattlePassBase.FBattlePassLandingPageButtonDisplayBehavior
	enum FBattlePassLandingPageButtonDisplayBehavior
	{
		FBattlePassLandingPageButtonDisplayBehavior__None = 0,
		FBattlePassLandingPageButtonDisplayBehavior__MainRewards = 1,
		FBattlePassLandingPageButtonDisplayBehavior__BonusRewards = 2,
		FBattlePassLandingPageButtonDisplayBehavior__WeeklyRewards = 3,
		FBattlePassLandingPageButtonDisplayBehavior__QuestRewards = 4,
		FBattlePassLandingPageButtonDisplayBehavior__Subscription = 5,
		FBattlePassLandingPageButtonDisplayBehavior__Customization = 6,
	};


	// Enum /Script/BattlePassBase.BattlePassTileAvailabilityStates
	enum BattlePassTileAvailabilityStates
	{
		BattlePassTileAvailabilityStates__Invalid = 0,
		BattlePassTileAvailabilityStates__Available = 1,
		BattlePassTileAvailabilityStates__Owned = 2,
		BattlePassTileAvailabilityStates__Locked = 3,
	};

}
