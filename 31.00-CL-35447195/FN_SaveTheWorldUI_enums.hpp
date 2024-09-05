#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: SaveTheWorldUI
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/SaveTheWorldUI.EViewerNavigationDirection
	enum EViewerNavigationDirection
	{
		EViewerNavigationDirection__Previous = 0,
		EViewerNavigationDirection__Next = 1,
	};


	// Enum /Script/SaveTheWorldUI.EFortCollectionBookPopupButtonType
	enum EFortCollectionBookPopupButtonType
	{
		EFortCollectionBookPopupButtonType__Invalid = 0,
		EFortCollectionBookPopupButtonType__SelectItem = 1,
		EFortCollectionBookPopupButtonType__Preview = 2,
		EFortCollectionBookPopupButtonType__Purchase = 3,
		EFortCollectionBookPopupButtonType__Unslot = 4,
		EFortCollectionBookPopupButtonType__Back = 5,
	};


	// Enum /Script/SaveTheWorldUI.ECollectionBookSectionNavTarget
	enum ECollectionBookSectionNavTarget
	{
		ECollectionBookSectionNavTarget__SlotSelect = 0,
		ECollectionBookSectionNavTarget__SlotPicker = 1,
	};


	// Enum /Script/SaveTheWorldUI.EHeroLoadoutSlotType
	enum EHeroLoadoutSlotType
	{
		EHeroLoadoutSlotType__CommanderSlot = 0,
		EHeroLoadoutSlotType__TeamPerkSlot = 1,
		EHeroLoadoutSlotType__CrewSlot = 2,
		EHeroLoadoutSlotType__GadgetSlot = 3,
	};


	// Enum /Script/SaveTheWorldUI.ESquadSlotSortType
	enum ESquadSlotSortType
	{
		ESquadSlotSortType__ByRating = 0,
		ESquadSlotSortType__ByLevel = 1,
		ESquadSlotSortType__ByRarity = 2,
		ESquadSlotSortType__ByBonus = 3,
		ESquadSlotSortType__ByMatch = 4,
	};


	// Enum /Script/SaveTheWorldUI.EFrontEndRewardType
	enum EFrontEndRewardType
	{
		EFrontEndRewardType__Mission = 0,
		EFrontEndRewardType__Quest = 1,
		EFrontEndRewardType__EpicNewQuest = 2,
		EFrontEndRewardType__Expedition = 3,
		EFrontEndRewardType__CollectionBook = 4,
		EFrontEndRewardType__MissionAlert = 5,
		EFrontEndRewardType__DifficultyIncrease = 6,
		EFrontEndRewardType__GiftBox = 7,
		EFrontEndRewardType__ItemCache = 8,
		EFrontEndRewardType__PhoenixLevelUp = 9,
	};


	// Enum /Script/SaveTheWorldUI.ECollectionBookRewardStatus
	enum ECollectionBookRewardStatus
	{
		ECollectionBookRewardStatus__Unknown = 0,
		ECollectionBookRewardStatus__Available = 1,
		ECollectionBookRewardStatus__Claimed = 2,
	};


	// Enum /Script/SaveTheWorldUI.ECollectionBookPrimaryNavTarget
	enum ECollectionBookPrimaryNavTarget
	{
		ECollectionBookPrimaryNavTarget__Overview = 0,
		ECollectionBookPrimaryNavTarget__SectionTileView = 1,
	};


	// Enum /Script/SaveTheWorldUI.EFortExpeditionListSort
	enum EFortExpeditionListSort
	{
		EFortExpeditionListSort__ByRating = 0,
		EFortExpeditionListSort__ByDuration = 1,
		EFortExpeditionListSort__ByName = 2,
	};


	// Enum /Script/SaveTheWorldUI.EFortRewardItemTypeSTW
	enum EFortRewardItemTypeSTW
	{
		EFortRewardItemTypeSTW__RewardedBadges = 0,
		EFortRewardItemTypeSTW__MissedBadges = 1,
		EFortRewardItemTypeSTW__RewardedItems = 2,
		EFortRewardItemTypeSTW__RewardedAccountItems = 3,
	};


	// Enum /Script/SaveTheWorldUI.EFortHeroPerkDisplayType
	enum EFortHeroPerkDisplayType
	{
		EFortHeroPerkDisplayType__CommanderPerk = 0,
		EFortHeroPerkDisplayType__TeamPerk = 1,
		EFortHeroPerkDisplayType__ClassPerk = 2,
		EFortHeroPerkDisplayType__StandardPerk = 3,
		EFortHeroPerkDisplayType__Max_None = 4,
	};


	// Enum /Script/SaveTheWorldUI.EFortAlterationOptionType
	enum EFortAlterationOptionType
	{
		EFortAlterationOptionType__Upgrade = 0,
		EFortAlterationOptionType__Replacement = 1,
		EFortAlterationOptionType__Max_NONE = 2,
	};


	// Enum /Script/SaveTheWorldUI.EFortMissionActivationWidgetSTWState
	enum EFortMissionActivationWidgetSTWState
	{
		EFortMissionActivationWidgetSTWState__Default = 0,
		EFortMissionActivationWidgetSTWState__StartObjective = 1,
		EFortMissionActivationWidgetSTWState__IncreaseDifficulty = 2,
		EFortMissionActivationWidgetSTWState__Invalid = 3,
	};


	// Enum /Script/SaveTheWorldUI.ECalloutNavigationDirection
	enum ECalloutNavigationDirection
	{
		ECalloutNavigationDirection__Previous = 0,
		ECalloutNavigationDirection__Next = 1,
	};


	// Enum /Script/SaveTheWorldUI.EFortUISurvivorSquadMatchType
	enum EFortUISurvivorSquadMatchType
	{
		EFortUISurvivorSquadMatchType__Multi = 0,
		EFortUISurvivorSquadMatchType__Single = 1,
		EFortUISurvivorSquadMatchType__Summary = 2,
		EFortUISurvivorSquadMatchType__Max_None = 3,
	};


	// Enum /Script/SaveTheWorldUI.EUpgradeInfoImageSize
	enum EUpgradeInfoImageSize
	{
		EUpgradeInfoImageSize__Small = 0,
		EUpgradeInfoImageSize__Large = 1,
	};

}
