#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: FortniteUI
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/FortniteUI.EBackgroundSource
	enum EBackgroundSource
	{
		EBackgroundSource__CMS = 0,
		EBackgroundSource__LobbyData = 1,
		EBackgroundSource__URL = 2,
	};


	// Enum /Script/FortniteUI.EFrontendLobbyLocationOrigin
	enum EFrontendLobbyLocationOrigin
	{
		EFrontendLobbyLocationOrigin__Pedestal = 0,
	};


	// Enum /Script/FortniteUI.EFortUIFeature
	enum EFortUIFeature
	{
		EFortUIFeature__ShowHome = 0,
		EFortUIFeature__ShowPlay = 1,
		EFortUIFeature__ShowCommand = 2,
		EFortUIFeature__ShowHeros = 3,
		EFortUIFeature__ShowSquads = 4,
		EFortUIFeature__ShowArmory = 5,
		EFortUIFeature__ShowLocker = 6,
		EFortUIFeature__ShowMultiProductLocker = 7,
		EFortUIFeature__ShowSkillTree = 8,
		EFortUIFeature__ShowStore = 9,
		EFortUIFeature__ShowQuests = A,
		EFortUIFeature__ShowMainStore = B,
		EFortUIFeature__ShowContextHelpMenu = C,
		EFortUIFeature__ShowCampaign = D,
		EFortUIFeature__ShowActiveBoost = E,
		EFortUIFeature__ShowJournal = F,
		EFortUIFeature__ShowPartyBar = 10,
		EFortUIFeature__ShowChatWindow = 11,
		EFortUIFeature__ShowFriendsMenu = 12,
		EFortUIFeature__ShowObjectives = 13,
		EFortUIFeature__ShowRatingIconsInTopbar = 14,
		EFortUIFeature__ShowAntiAddictionMessage = 15,
		EFortUIFeature__ShowMinorShutdownMessage = 16,
		EFortUIFeature__ShowHealthWarningScreen = 17,
		EFortUIFeature__ShowSimplifiedHUD = 18,
		EFortUIFeature__LargeHeaderFooterButtons = 19,
		EFortUIFeature__ShowAthenaFavoriting = 1A,
		EFortUIFeature__ShowAthenaItemRandomization = 1B,
		EFortUIFeature__ShowAthenaQuests = 1C,
		EFortUIFeature__ShowBattlePass = 1D,
		EFortUIFeature__ShowNewBattlePass = 1E,
		EFortUIFeature__ShowDynamicBattlePass = 1F,
		EFortUIFeature__ShowBattlePassFAQ = 20,
		EFortUIFeature__ShowPoblano = 21,
		EFortUIFeature__ShowReplays = 22,
		EFortUIFeature__ShowProfileStatsUI = 23,
		EFortUIFeature__ShowAthenaItemShop = 24,
		EFortUIFeature__ShowMultiProductItemShop = 25,
		EFortUIFeature__ShowShowdown = 26,
		EFortUIFeature__SpecialEventsStart = 27,
		EFortUIFeature__ShowSpecialEvent = 28,
		EFortUIFeature__ShowSpecialEventTeaser = 29,
		EFortUIFeature__ShowSparksSpecialEvent = 2A,
		EFortUIFeature__ShowJunoSpecialEvent = 2B,
		EFortUIFeature__ShowDelMarSpecialEvent = 2C,
		EFortUIFeature__ShowWinterfest = 2D,
		EFortUIFeature__SpecialEventsEnd = 2E,
		EFortUIFeature__ShowSpatialUI = 2F,
		EFortUIFeature__ShowSocial = 30,
		EFortUIFeature__ShowAccountBoosts = 31,
		EFortUIFeature__ShowCustomerSupport = 32,
		EFortUIFeature__ShowGlobalChat = 33,
		EFortUIFeature__ShowEULA = 34,
		EFortUIFeature__ShowEndOfZoneCinematic = 35,
		EFortUIFeature__ShowOnboardingCinematics = 36,
		EFortUIFeature__ShowFounderBannerIcons = 37,
		EFortUIFeature__ShowCurrentRegionInLobby = 38,
		EFortUIFeature__ShowPrerollLlamas = 39,
		EFortUIFeature__EnableFoundersDailyRewards = 3A,
		EFortUIFeature__EnableMatchmakingRegionSetting = 3B,
		EFortUIFeature__EnableLanguageSetting = 3C,
		EFortUIFeature__EnableFriendCodeSetting = 3D,
		EFortUIFeature__EnableEarlyAccessLoadingScreenBanner = 3E,
		EFortUIFeature__EnableAlterationModifications = 3F,
		EFortUIFeature__EnableSchematicRarityUpgrade = 40,
		EFortUIFeature__EnableMissionActivationVote = 41,
		EFortUIFeature__EnableLtmRetrieveTheData = 42,
		EFortUIFeature__EnableUpgradesVideos = 43,
		EFortUIFeature__ShowPreviewTestTab = 44,
		EFortUIFeature__EnableSearchTabInTopNavigationBar = 45,
		EFortUIFeature__EnableDiscoverTabInTopNavigationBar = 46,
		EFortUIFeature__EnableLibraryTabInTopNavigationBar = 47,
		EFortUIFeature__PlaceholderUIFeature1 = 48,
		EFortUIFeature__PlaceholderUIFeature2 = 49,
		EFortUIFeature__PlaceholderUIFeature3 = 4A,
		EFortUIFeature__PlaceholderUIFeature4 = 4B,
		EFortUIFeature__PlaceholderUIFeature5 = 4C,
		EFortUIFeature__Max_None = 4D,
	};


	// Enum /Script/FortniteUI.EFortFrontEndFeatureStateReason
	enum EFortFrontEndFeatureStateReason
	{
		EFortFrontEndFeatureStateReason__Default = 0,
		EFortFrontEndFeatureStateReason__NoHeroes = 1,
		EFortFrontEndFeatureStateReason__Tutorial = 2,
		EFortFrontEndFeatureStateReason__BROnly = 3,
		EFortFrontEndFeatureStateReason__NoPlayerController = 4,
		EFortFrontEndFeatureStateReason__UnexpectedFeature = 5,
		EFortFrontEndFeatureStateReason__Invalid = 6,
	};


	// Enum /Script/FortniteUI.EFortFrontEndFeatureState
	enum EFortFrontEndFeatureState
	{
		EFortFrontEndFeatureState__Enabled = 0,
		EFortFrontEndFeatureState__Disabled = 1,
		EFortFrontEndFeatureState__Hidden = 2,
		EFortFrontEndFeatureState__Invalid = 3,
	};


	// Enum /Script/FortniteUI.EFortFrontEndFeature
	enum EFortFrontEndFeature
	{
		EFortFrontEndFeature__ShowHomeBase = 0,
		EFortFrontEndFeature__ShowHeroList = 1,
		EFortFrontEndFeature__ShowVault = 2,
		EFortFrontEndFeature__ShowStore = 3,
		EFortFrontEndFeature__PlayZone = 4,
		EFortFrontEndFeature__ShowHeroSelect = 5,
		EFortFrontEndFeature__RecruitHero = 6,
		EFortFrontEndFeature__ShowHomeBaseOverview = 7,
		EFortFrontEndFeature__STWArmory_Transform = 8,
		EFortFrontEndFeature__STWArmory_CollectionBook = 9,
		EFortFrontEndFeature__MAX_None = A,
	};


	// Enum /Script/FortniteUI.EFortItemCooldownType
	enum EFortItemCooldownType
	{
		EFortItemCooldownType__None = 0,
		EFortItemCooldownType__AmmoRegeneration = 1,
		EFortItemCooldownType__ItemActivation = 2,
		EFortItemCooldownType__WeaponReloading = 3,
		EFortItemCooldownType__Death = 4,
		EFortItemCooldownType__AthenaWeaponFireCooldown = 5,
		EFortItemCooldownType__AbilitySetActivateByInputAbility = 6,
		EFortItemCooldownType__DirectProgressUpdate = 7,
	};


	// Enum /Script/FortniteUI.EFortContentBrowserQuickbarState
	enum EFortContentBrowserQuickbarState
	{
		EFortContentBrowserQuickbarState__Disabled = 0,
		EFortContentBrowserQuickbarState__Creative = 1,
		EFortContentBrowserQuickbarState__Primary = 2,
		EFortContentBrowserQuickbarState__Trap = 3,
	};


	// Enum /Script/FortniteUI.EFortBuildingInteraction
	enum EFortBuildingInteraction
	{
		EFortBuildingInteraction__None = 0,
		EFortBuildingInteraction__Build = 1,
		EFortBuildingInteraction__Repair = 2,
		EFortBuildingInteraction__Upgrade = 3,
		EFortBuildingInteraction__Edit = 4,
		EFortBuildingInteraction__BeingModified = 5,
		EFortBuildingInteraction__ConfirmEdit = 6,
		EFortBuildingInteraction__Creative = 7,
	};


	// Enum /Script/FortniteUI.EFortBuildingHealthDisplayRule
	enum EFortBuildingHealthDisplayRule
	{
		EFortBuildingHealthDisplayRule__Never = 0,
		EFortBuildingHealthDisplayRule__Allowed = 1,
		EFortBuildingHealthDisplayRule__Always = 2,
	};


	// Enum /Script/FortniteUI.EFortHitPointModificationReason
	enum EFortHitPointModificationReason
	{
		EFortHitPointModificationReason__Invalid = 0,
		EFortHitPointModificationReason__InitalSet = 1,
		EFortHitPointModificationReason__AutoRegen = 2,
		EFortHitPointModificationReason__ItemRegen = 3,
		EFortHitPointModificationReason__DamageOverTime = 4,
		EFortHitPointModificationReason__DamageReceived = 5,
	};


	// Enum /Script/FortniteUI.EFortStoreState
	enum EFortStoreState
	{
		EFortStoreState__Error = 0,
		EFortStoreState__Closed = 1,
		EFortStoreState__CardPackStore = 2,
		EFortStoreState__CurrencyStore = 3,
		EFortStoreState__WebPayment = 4,
		EFortStoreState__PurchaseOpen = 5,
		EFortStoreState__PackOpen = 6,
		EFortStoreState__CardEnter = 7,
		EFortStoreState__CardBackReveal = 8,
		EFortStoreState__CardFlip = 9,
		EFortStoreState__CardFrontReveal = A,
		EFortStoreState__CardExit = B,
		EFortStoreState__SummaryAdd = C,
		EFortStoreState__PackDestroy = D,
		EFortStoreState__Summary = E,
		EFortStoreState__PresentChoice = F,
		EFortStoreState__ChoiceMade = 10,
		EFortStoreState__SummaryAddTransition = 11,
		EFortStoreState__MAX_None = 12,
	};


	// Enum /Script/FortniteUI.EFortUIFeatureStateReason
	enum EFortUIFeatureStateReason
	{
		EFortUIFeatureStateReason__Default = 0,
		EFortUIFeatureStateReason__Tutorial = 1,
		EFortUIFeatureStateReason__ContentInstall = 2,
		EFortUIFeatureStateReason__AccountRestrictions = 3,
		EFortUIFeatureStateReason__Platform = 4,
		EFortUIFeatureStateReason__SeasonOrEventNotActive = 5,
		EFortUIFeatureStateReason__NoPlayerController = 6,
		EFortUIFeatureStateReason__UnexpectedFeature = 7,
		EFortUIFeatureStateReason__Invalid = 8,
	};


	// Enum /Script/FortniteUI.EFortUIFeatureState
	enum EFortUIFeatureState
	{
		EFortUIFeatureState__Enabled = 0,
		EFortUIFeatureState__Disabled = 1,
		EFortUIFeatureState__Hidden = 2,
		EFortUIFeatureState__Invalid = 3,
	};


	// Enum /Script/FortniteUI.EPostGameHUDMode
	enum EPostGameHUDMode
	{
		EPostGameHUDMode__None = 0,
		EPostGameHUDMode__AllHidden = 1,
		EPostGameHUDMode__Spectating = 2,
		EPostGameHUDMode__AllHiddenExceptXP = 3,
	};


	// Enum /Script/FortniteUI.EPostGameClickCatcherMode
	enum EPostGameClickCatcherMode
	{
		EPostGameClickCatcherMode__Catch_None = 0,
		EPostGameClickCatcherMode__Catch_MobileOnly = 1,
		EPostGameClickCatcherMode__Catch_MouseOnly = 2,
		EPostGameClickCatcherMode__Catch_All = 3,
	};


	// Enum /Script/FortniteUI.EInputPriority
	enum EInputPriority
	{
		EInputPriority__Normal = 0,
		EInputPriority__Menu = 1,
		EInputPriority__Chat = 2,
		EInputPriority__Modal = 3,
		EInputPriority__Confirmation = 4,
		EInputPriority__Error = 5,
		EInputPriority__HUD = 6,
	};


	// Enum /Script/FortniteUI.ECollabDialogExitResult
	enum ECollabDialogExitResult
	{
		ECollabDialogExitResult__None = 0,
		ECollabDialogExitResult__Close = 1,
		ECollabDialogExitResult__Continue = 2,
	};


	// Enum /Script/FortniteUI.EFortPrioritizedWidgetContestedBehavior
	enum EFortPrioritizedWidgetContestedBehavior
	{
		EFortPrioritizedWidgetContestedBehavior__QueueBehind = 0,
		EFortPrioritizedWidgetContestedBehavior__StompOther = 1,
	};


	// Enum /Script/FortniteUI.EFortPrioritizedWidgetPriority
	enum EFortPrioritizedWidgetPriority
	{
		EFortPrioritizedWidgetPriority__Priority = 0,
		EFortPrioritizedWidgetPriority__Priority = 1,
		EFortPrioritizedWidgetPriority__Priority = 2,
		EFortPrioritizedWidgetPriority__Priority = 3,
		EFortPrioritizedWidgetPriority__Priority = 4,
		EFortPrioritizedWidgetPriority__Priority = 5,
		EFortPrioritizedWidgetPriority__NumberOfPrios = 6,
	};


	// Enum /Script/FortniteUI.DateFormat
	enum DateFormat
	{
		CountdownTextual = 0,
		CountdownNumeric = 1,
		CountdownNumUnder12Hours = 2,
		Date = 3,
		CountdownNumericDilatable = 4,
	};


	// Enum /Script/FortniteUI.EFlagStatus
	enum EFlagStatus
	{
		EFlagStatus__FlagPresent = 0,
		EFlagStatus__FlagNotPresent = 1,
	};


	// Enum /Script/FortniteUI.EFortInputMode
	enum EFortInputMode
	{
		EFortInputMode__Frontend = 0,
		EFortInputMode__InGame = 1,
		EFortInputMode__InGameCursor = 2,
	};


	// Enum /Script/FortniteUI.EFortUrlType
	enum EFortUrlType
	{
		EFortUrlType__NormalWebLink = 0,
		EFortUrlType__AccountCreationLink = 1,
		EFortUrlType__HelpLink = 2,
		EFortUrlType__EULALink = 3,
	};


	// Enum /Script/FortniteUI.EGridSortKind
	enum EGridSortKind
	{
		EGridSortKind__None = 0,
		EGridSortKind__ByNumber = 1,
		EGridSortKind__ByString = 2,
		EGridSortKind__ByNumberThenString = 3,
		EGridSortKind__ByStringThenNumber = 4,
	};


	// Enum /Script/FortniteUI.EViolatorIntensity
	enum EViolatorIntensity
	{
		EViolatorIntensity__Low = 0,
		EViolatorIntensity__Medium = 1,
		EViolatorIntensity__High = 2,
	};


	// Enum /Script/FortniteUI.EItemShopTileSize
	enum EItemShopTileSize
	{
		EItemShopTileSize__Size_1_x = 0,
		EItemShopTileSize__Size_2_x = 1,
		EItemShopTileSize__Size_3_x = 2,
		EItemShopTileSize__Size_4_x = 3,
		EItemShopTileSize__Size_5_x = 4,
		EItemShopTileSize__Size_1_x = 5,
		EItemShopTileSize__Size_2_x = 6,
		EItemShopTileSize__Size_3_x = 7,
		EItemShopTileSize__Size_4_x = 8,
		EItemShopTileSize__Size_5_x = 9,
		EItemShopTileSize__Max = A,
	};


	// Enum /Script/FortniteUI.EItemShopCurrency
	enum EItemShopCurrency
	{
		EItemShopCurrency__VBucks = 0,
		EItemShopCurrency__RealMoney = 1,
	};


	// Enum /Script/FortniteUI.EFortItemShopLoadingState
	enum EFortItemShopLoadingState
	{
		EFortItemShopLoadingState__Ready = 0,
		EFortItemShopLoadingState__CatalogRefreshing = 1,
		EFortItemShopLoadingState__ContentUpdating = 2,
	};


	// Enum /Script/FortniteUI.EFortItemCardSize
	enum EFortItemCardSize
	{
		EFortItemCardSize__XXS = 0,
		EFortItemCardSize__XS = 1,
		EFortItemCardSize__Wide_S = 2,
		EFortItemCardSize__S = 3,
		EFortItemCardSize__M = 4,
		EFortItemCardSize__L = 5,
		EFortItemCardSize__Wide_L = 6,
		EFortItemCardSize__XL = 7,
		EFortItemCardSize__XXL = 8,
	};


	// Enum /Script/FortniteUI.EItemPreviewRestrictionMode
	enum EItemPreviewRestrictionMode
	{
		EItemPreviewRestrictionMode__AlwaysShowTargetCosmetic = 0,
		EItemPreviewRestrictionMode__HideTargetCosmetic = 1,
	};


	// Enum /Script/FortniteUI.ESocialLinkType
	enum ESocialLinkType
	{
		ESocialLinkType__X = 0,
		ESocialLinkType__TikTok = 1,
		ESocialLinkType__Instagram = 2,
		ESocialLinkType__Discord = 3,
		ESocialLinkType__YouTube = 4,
		ESocialLinkType__Max = 5,
	};


	// Enum /Script/FortniteUI.EActivityImageLoadingState
	enum EActivityImageLoadingState
	{
		EActivityImageLoadingState__Unset = 0,
		EActivityImageLoadingState__Loading = 1,
		EActivityImageLoadingState__Loaded = 2,
		EActivityImageLoadingState__Error = 3,
		EActivityImageLoadingState__Max = 4,
	};


	// Enum /Script/FortniteUI.EFortPlayerPowerRatingType
	enum EFortPlayerPowerRatingType
	{
		EFortPlayerPowerRatingType__Auto = 0,
		EFortPlayerPowerRatingType__Campaign = 1,
		EFortPlayerPowerRatingType__Phoenix = 2,
		EFortPlayerPowerRatingType__Max_None = 3,
	};


	// Enum /Script/FortniteUI.EPreviousNextButtonType
	enum EPreviousNextButtonType
	{
		EPreviousNextButtonType__Previous = 0,
		EPreviousNextButtonType__Next = 1,
	};


	// Enum /Script/FortniteUI.EIsLegacyUIManagerResult
	enum EIsLegacyUIManagerResult
	{
		EIsLegacyUIManagerResult__Yes = 1,
		EIsLegacyUIManagerResult__No = 0,
	};


	// Enum /Script/FortniteUI.EActivatePanelOption
	enum EActivatePanelOption
	{
		EActivatePanelOption__Show = 0,
		EActivatePanelOption__Hide = 1,
		EActivatePanelOption__PlatformDefault = 2,
	};


	// Enum /Script/FortniteUI.EFortUISpecialEvents
	enum EFortUISpecialEvents
	{
		NoEvent = 0,
		FritTemp = 1,
	};


	// Enum /Script/FortniteUI.ECountdownDisplay
	enum ECountdownDisplay
	{
		ECountdownDisplay__EventEndTime = 0,
		ECountdownDisplay__ChallengeUnlockTime = 1,
		ECountdownDisplay__ChallengeBundleUnlockTime = 2,
		ECountdownDisplay__UnlockAlreadySet = 3,
	};


	// Enum /Script/FortniteUI.EAthenaEventMatchInfoSortMethod
	enum EAthenaEventMatchInfoSortMethod
	{
		EAthenaEventMatchInfoSortMethod__Eliminations = 0,
		EAthenaEventMatchInfoSortMethod__Place = 1,
		EAthenaEventMatchInfoSortMethod__Count = 2,
	};


	// Enum /Script/FortniteUI.EFrontendVisibilityMode
	enum EFrontendVisibilityMode
	{
		EFrontendVisibilityMode__Normal = 0,
		EFrontendVisibilityMode__HideTopTabsOnly = 1,
		EFrontendVisibilityMode__HideTopTabsOnlyWithoutBottomBar = 2,
		EFrontendVisibilityMode__OnlyBottom = 3,
		EFrontendVisibilityMode__OnlyTop = 4,
		EFrontendVisibilityMode__OnlyTitleBar = 5,
		EFrontendVisibilityMode__Empty = 6,
	};


	// Enum /Script/FortniteUI.EBattlePassInputs
	enum EBattlePassInputs
	{
		EBattlePassInputs__Back = 0,
		EBattlePassInputs__ViewItem = 1,
		EBattlePassInputs__PreviewAction = 2,
		EBattlePassInputs__ReplayTrailer = 3,
		EBattlePassInputs__ShowAbout = 4,
		EBattlePassInputs__BulkBuyRewards = 5,
		EBattlePassInputs__PageComplete = 6,
		EBattlePassInputs__ShowAboutCustomization = 7,
		EBattlePassInputs__GiftBattlePass = 8,
		EBattlePassInputs__SwipeLeft = 9,
		EBattlePassInputs__SwipeRight = A,
		EBattlePassInputs__RewardDetails = B,
		EBattlePassInputs__COUNT = C,
	};


	// Enum /Script/FortniteUI.EFortDonutIdleGameObject
	enum EFortDonutIdleGameObject
	{
		UnsetObject = 0,
		Tree = 1,
		Mound = 2,
		SmallMound = 3,
		JumpPad = 4,
		Torch = 5,
		PeelMonster = 6,
		Chimichanga = 7,
		Arm = 8,
	};


	// Enum /Script/FortniteUI.EMotdButtonStyle
	enum EMotdButtonStyle
	{
		EMotdButtonStyle__Main = 0,
		EMotdButtonStyle__Secondary = 1,
		EMotdButtonStyle__None = 2,
	};


	// Enum /Script/FortniteUI.EFortActivityDetailsModalExitPath
	enum EFortActivityDetailsModalExitPath
	{
		EFortActivityDetailsModalExitPath__Undefined = 0,
		EFortActivityDetailsModalExitPath__Discover = 1,
		EFortActivityDetailsModalExitPath__Lobby = 2,
		EFortActivityDetailsModalExitPath__Creator = 3,
		EFortActivityDetailsModalExitPath__Attributions = 4,
		EFortActivityDetailsModalExitPath__MAX_NUM = 5,
	};


	// Enum /Script/FortniteUI.EFortAthenaSurvivorTierBadgeSize
	enum EFortAthenaSurvivorTierBadgeSize
	{
		EFortAthenaSurvivorTierBadgeSize__Small = 0,
		EFortAthenaSurvivorTierBadgeSize__Large = 1,
		EFortAthenaSurvivorTierBadgeSize__Count = 2,
	};


	// Enum /Script/FortniteUI.ECabinEmailViewState
	enum ECabinEmailViewState
	{
		ECabinEmailViewState__Initial = 0,
		ECabinEmailViewState__Sending = 1,
		ECabinEmailViewState__Sent = 2,
		ECabinEmailViewState__SendFailed = 3,
	};


	// Enum /Script/FortniteUI.EColorPickerType
	enum EColorPickerType
	{
		EColorPickerType__Swatches = 0,
		EColorPickerType__CustomColor = 1,
		EColorPickerType__Both = 2,
	};


	// Enum /Script/FortniteUI.EColorPickerColorRepresentation
	enum EColorPickerColorRepresentation
	{
		EColorPickerColorRepresentation__HSV = 0,
		EColorPickerColorRepresentation__RGB = 1,
		EColorPickerColorRepresentation__Max_NONE = 2,
	};


	// Enum /Script/FortniteUI.ECountdownTimerState
	enum ECountdownTimerState
	{
		ECountdownTimerState__None = 0,
		ECountdownTimerState__Countdown = 1,
		ECountdownTimerState__Live = 2,
	};


	// Enum /Script/FortniteUI.EFortCreativeItemType
	enum EFortCreativeItemType
	{
		EFortCreativeItemType__Chest = 0,
		EFortCreativeItemType__Item = 1,
		EFortCreativeItemType__Collection = 2,
		EFortCreativeItemType__SubItems = 3,
		EFortCreativeItemType__NoCreativeItems = 4,
	};


	// Enum /Script/FortniteUI.EDiscoverSearchMode
	enum EDiscoverSearchMode
	{
		EDiscoverSearchMode__Island = 0,
		EDiscoverSearchMode__Creator = 1,
		EDiscoverSearchMode__Unset = 2,
	};


	// Enum /Script/FortniteUI.EFortEarnedSubRewardType
	enum EFortEarnedSubRewardType
	{
		EFortEarnedSubRewardType__XP = 0,
		EFortEarnedSubRewardType__Bars = 1,
	};


	// Enum /Script/FortniteUI.EFortItemManagementMode
	enum EFortItemManagementMode
	{
		EFortItemManagementMode__Details = 0,
		EFortItemManagementMode__Comparison = 1,
		EFortItemManagementMode__Mulch = 2,
	};


	// Enum /Script/FortniteUI.EFortUIMatchmakingStatus
	enum EFortUIMatchmakingStatus
	{
		EFortUIMatchmakingStatus__Unready = 0,
		EFortUIMatchmakingStatus__WaitingForPlayersReadyUp = 1,
		EFortUIMatchmakingStatus__FindingServer = 2,
		EFortUIMatchmakingStatus__DownloadingContent = 3,
		EFortUIMatchmakingStatus__MatchFound = 4,
	};


	// Enum /Script/FortniteUI.EFortUIMatchmakingError
	enum EFortUIMatchmakingError
	{
		EFortUIMatchmakingError__WaitingForIslandRefresh = 0,
		EFortUIMatchmakingError__PartyTooLarge = 1,
		EFortUIMatchmakingError__SmallSquadSizeForPrivateMatch = 2,
		EFortUIMatchmakingError__CannotUseWhileLookingForParty = 3,
		EFortUIMatchmakingError__CannotUseWhileUsingPartySignal = 4,
		EFortUIMatchmakingError__CannotPlayCampaign = 5,
		EFortUIMatchmakingError__DownloadingData = 6,
		EFortUIMatchmakingError__ModeUnavailable = 7,
		EFortUIMatchmakingError__CabinRestricted = 8,
		EFortUIMatchmakingError__GenericIslandLocked = 9,
		EFortUIMatchmakingError__NotAvailableInSplitScreen = A,
		EFortUIMatchmakingError__MatchCapHit = B,
		EFortUIMatchmakingError__RegionMismatch = C,
		EFortUIMatchmakingError__TooManyPartyMembers = D,
		EFortUIMatchmakingError__NotEnoughPartyMembers = E,
		EFortUIMatchmakingError__EventBlackedOut = F,
		EFortUIMatchmakingError__IneligibleEvent = 10,
		EFortUIMatchmakingError__Unauthorized = 11,
		EFortUIMatchmakingError__GameLocked = 12,
		EFortUIMatchmakingError__OutfitForbiddenByIslandRating = 13,
		EFortUIMatchmakingError__Num = 14,
	};


	// Enum /Script/FortniteUI.ETagComparisonType
	enum ETagComparisonType
	{
		ETagComparisonType__HasAny = 0,
		ETagComparisonType__HasAll = 1,
		ETagComparisonType__HasNone = 2,
		ETagComparisonType__HasAnyExact = 3,
		ETagComparisonType__HasAllExact = 4,
	};


	// Enum /Script/FortniteUI.EInteractionComparisonType
	enum EInteractionComparisonType
	{
		EInteractionComparisonType__HasAny = 0,
		EInteractionComparisonType__HasNone = 1,
	};


	// Enum /Script/FortniteUI.EFortMtxStoreOfferType
	enum EFortMtxStoreOfferType
	{
		EFortMtxStoreOfferType__FoundersPack = 0,
		EFortMtxStoreOfferType__CurrencyPack = 1,
		EFortMtxStoreOfferType__Unknown = 2,
		EFortMtxStoreOfferType__Max_None = 3,
	};


	// Enum /Script/FortniteUI.EPresenceIndicatorState
	enum EPresenceIndicatorState
	{
		EPresenceIndicatorState__Online = 0,
		EPresenceIndicatorState__Away = 1,
		EPresenceIndicatorState__Offline = 2,
		EPresenceIndicatorState__Blocked = 3,
	};


	// Enum /Script/FortniteUI.ESettingType
	enum ESettingType
	{
		ESettingType__None = 0,
		ESettingType__Header = 1,
		ESettingType__WindowMode = 2,
		ESettingType__DisplayResolution = 3,
		ESettingType__FrameRateLimit = 4,
		ESettingType__VideoQuality = 5,
		ESettingType__ThreeDResolution = 6,
		ESettingType__ViewDistance = 7,
		ESettingType__Shadows = 8,
		ESettingType__AntiAliasing = 9,
		ESettingType__Textures = A,
		ESettingType__Effects = B,
		ESettingType__PostProcessing = C,
		ESettingType__VSync = D,
		ESettingType__MotionBlur = E,
		ESettingType__ShowGrass = F,
		ESettingType__MobileFPSType = 10,
		ESettingType__ShowFPS = 11,
		ESettingType__AllowLowPower = 12,
		ESettingType__AllowVideoPlayback = 13,
		ESettingType__AllowDynamicResolution = 14,
		ESettingType__Disabled_AllowMultithreadedRendering = 15,
		ESettingType__RenderingAPI = 16,
		ESettingType__UseGPUCrashDebugging = 17,
		ESettingType__RegionHeader = 18,
		ESettingType__Language = 19,
		ESettingType__Region = 1A,
		ESettingType__MouseSensitivityYaw = 1B,
		ESettingType__MouseSensitivityPitch = 1C,
		ESettingType__MouseSensitivityMultiplierForAircraft = 1D,
		ESettingType__TouchDragSensitivity = 1E,
		ESettingType__ControllerLookSensitivityYaw = 1F,
		ESettingType__ControllerLookSensitivityPitch = 20,
		ESettingType__MouseTargetingMultiplier = 21,
		ESettingType__MouseScopedMultiplier = 22,
		ESettingType__GamepadTargetingMultiplier = 23,
		ESettingType__GamepadScopedMultiplier = 24,
		ESettingType__GamepadBuildingMultiplier = 25,
		ESettingType__GamepadEditModeMultiplier = 26,
		ESettingType__TouchLookAccelerationMultiplier = 27,
		ESettingType__TouchDragTargetingSensitivity = 28,
		ESettingType__TouchDragScopedSensitivity = 29,
		ESettingType__TouchBuildingMultiplier = 2A,
		ESettingType__TouchEditModeMultiplier = 2B,
		ESettingType__TouchVerticalSensitivity = 2C,
		ESettingType__InvertPitch = 2D,
		ESettingType__InvertYaw = 2E,
		ESettingType__InvertPitchForMotion = 2F,
		ESettingType__InvertPitchForAircraftPrimary = 30,
		ESettingType__InvertPitchForAircraftSecondary = 31,
		ESettingType__InvertYawForMotion = 32,
		ESettingType__GyroEnabled = 33,
		ESettingType__GyroYawAxis = 34,
		ESettingType__GyroSensitivity = 35,
		ESettingType__GyroTargetingSensitivity = 36,
		ESettingType__GyroScopedSensitivity = 37,
		ESettingType__GyroHarvestingToolSensitivity = 38,
		ESettingType__SafeZone = 39,
		ESettingType__AnonymousMode = 3A,
		ESettingType__AnonymousCharacterMode = 3B,
		ESettingType__HideOtherPlayerNames = 3C,
		ESettingType__HiddenMatchmakingDelay = 3D,
		ESettingType__AutoJoinGameVoiceChannel = 3E,
		ESettingType__ShowVoiceIndicators = 3F,
		ESettingType__HUDScale = 40,
		ESettingType__ShowViewerCount = 41,
		ESettingType__FirstPersonCamera = 42,
		ESettingType__PeripheralLighting = 43,
		ESettingType__PingPlaceDangerMarkerWhenTargeting = 44,
		ESettingType__ShowGlobalChat = 45,
		ESettingType__ConsoleUnlockedFPS = 46,
		ESettingType__ToggleDoubleTapAutorun = 47,
		ESettingType__AutorunLockZonePreference = 48,
		ESettingType__ToggleSprint = 49,
		ESettingType__SprintByDefault = 4A,
		ESettingType__SprintCancelsReload = 4B,
		ESettingType__TapInteract = 4C,
		ESettingType__InWorldInteract = 4D,
		ESettingType__ToggleTargeting = 4E,
		ESettingType__HoldToSwapPickup = 4F,
		ESettingType__AutoEquipBetterItems = 50,
		ESettingType__EquipFirstBuildingPieceWhenSwappingQuickbars = 51,
		ESettingType__EquipFirstBuildingPieceWhenSwappingQuickbarsAthena = 52,
		ESettingType__DisablePreEditsWhenPlacingBuilding = 53,
		ESettingType__AimAssist = 54,
		ESettingType__EditModeAimAssist = 55,
		ESettingType__TouchEdit = 56,
		ESettingType__EditConfirmOnRelease = 57,
		ESettingType__QuickEdit = 58,
		ESettingType__TurboBuild = 59,
		ESettingType__CreativeTurboDelete = 5A,
		ESettingType__AutoChangeMaterial = 5B,
		ESettingType__GamepadAutoRun = 5C,
		ESettingType__CrossplayPreference = 5D,
		ESettingType__AutoOpenDoors = 5E,
		ESettingType__AutoPickupWeapons = 5F,
		ESettingType__AutoPickupWeaponsConsolePC = 60,
		ESettingType__AutoSortConsumablesToRight = 61,
		ESettingType__EnableTryBuildOnFocus = 62,
		ESettingType__EditButtonHoldTime = 63,
		ESettingType__SlideButtonHoldTime = 64,
		ESettingType__AccessoriesHeader = 65,
		ESettingType__ForceFeedback = 66,
		ESettingType__ContextTutorial = 67,
		ESettingType__ReplayRecording = 68,
		ESettingType__ReplayRecordingLargeTeams = 69,
		ESettingType__ReplayRecordingCreativeMode = 6A,
		ESettingType__UsePowerSavingMode = 6B,
		ESettingType__ShadowPlayHighlights = 6C,
		ESettingType__ShowTemperature = 6D,
		ESettingType__BuildingPossession = 6E,
		ESettingType__GammaValue = 6F,
		ESettingType__MasterVolume = 70,
		ESettingType__MusicVolume = 71,
		ESettingType__SoundFXVolume = 72,
		ESettingType__DialogVolume = 73,
		ESettingType__VoiceChatVolume = 74,
		ESettingType__CinematicsVolume = 75,
		ESettingType__Subtitles = 76,
		ESettingType__Quality = 77,
		ESettingType__VoiceChat = 78,
		ESettingType__PushToTalk = 79,
		ESettingType__ProximityVoiceChat = 7A,
		ESettingType__VoiceChatInputDevice = 7B,
		ESettingType__VoiceChatOutputDevice = 7C,
		ESettingType__AllowBackgroundAudio = 7D,
		ESettingType__ColorBlindMode = 7E,
		ESettingType__ColorBlindStrength = 7F,
		ESettingType__IgnoreGamepadInput = 80,
		ESettingType__LockPrimaryInputMethodToMouse = 81,
		ESettingType__EnableRudderControl = 82,
		ESettingType__RudderDeadZone = 83,
		ESettingType__RudderMaxThrottle = 84,
		ESettingType__FOVMinimum = 85,
		ESettingType__FOVMaximum = 86,
		ESettingType__VisualizeSoundEffects = 87,
		ESettingType__VisualizeSoundEffectsHeader = 88,
		ESettingType__MoveStickDeadZone = 89,
		ESettingType__LookStickDeadZone = 8A,
		ESettingType__LookSensitivityPreset = 8B,
		ESettingType__LookSensitivityPresetAds = 8C,
		ESettingType__LookBuildModeMultiplier = 8D,
		ESettingType__LookEditModeMultiplier = 8E,
		ESettingType__UseAdvancedOptions = 8F,
		ESettingType__LookHorizontalSpeed = 90,
		ESettingType__LookVerticalSpeed = 91,
		ESettingType__LookHorizontalSpeedAds = 92,
		ESettingType__LookVerticalSpeedAds = 93,
		ESettingType__LookHorizontalBoostSpeed = 94,
		ESettingType__LookVerticalBoostSpeed = 95,
		ESettingType__LookBoostAccelerationTime = 96,
		ESettingType__LookHorizontalBoostSpeedAds = 97,
		ESettingType__LookVerticalBoostSpeedAds = 98,
		ESettingType__LookBoostAccelerationTimeAds = 99,
		ESettingType__InstantBoostWhenBuilding = 9A,
		ESettingType__LookEaseTime = 9B,
		ESettingType__LookInputCurve = 9C,
		ESettingType__AimAssistStrength = 9D,
		ESettingType__UseLegacyControls = 9E,
		ESettingType__PlayerSurveysAllowed = 9F,
		ESettingType__LocalNotifications = A0,
		ESettingType__FireMode = A1,
		ESettingType__COUNT = A2,
	};


	// Enum /Script/FortniteUI.EFortPerksWidgetState
	enum EFortPerksWidgetState
	{
		EFortPerksWidgetState__Normal = 0,
		EFortPerksWidgetState__Upgrade = 1,
		EFortPerksWidgetState__Evolution = 2,
	};


	// Enum /Script/FortniteUI.EFortPlayerSurveyQuestionType
	enum EFortPlayerSurveyQuestionType
	{
		EFortPlayerSurveyQuestionType__SingleChoice = 0,
		EFortPlayerSurveyQuestionType__MultipleChoice = 1,
		EFortPlayerSurveyQuestionType__Rating = 2,
	};


	// Enum /Script/FortniteUI.EFortPlayerSurveyResponseChoiceType
	enum EFortPlayerSurveyResponseChoiceType
	{
		CheckBox = 0,
		Radio = 1,
	};


	// Enum /Script/FortniteUI.EFortLoadoutActionType
	enum EFortLoadoutActionType
	{
		EFortLoadoutActionType__Rename = 0,
		EFortLoadoutActionType__Overwrite = 1,
		EFortLoadoutActionType__SaveNew = 2,
		EFortLoadoutActionType__Clear = 3,
		EFortLoadoutActionType__Delete = 4,
	};


	// Enum /Script/FortniteUI.EFortServerBrowserAction
	enum EFortServerBrowserAction
	{
		EFortServerBrowserAction__BattleLabServerCreate = 0,
		EFortServerBrowserAction__PlaygroundServerCreate = 1,
		EFortServerBrowserAction__CreativeServerCreate = 2,
		EFortServerBrowserAction__Play = 3,
		EFortServerBrowserAction__CreativeIslandCode = 4,
		EFortServerBrowserAction__CreativeDiscovery = 5,
	};


	// Enum /Script/FortniteUI.EFortSettingGameVisibility
	enum EFortSettingGameVisibility
	{
		EFortSettingGameVisibility__None = 0,
		EFortSettingGameVisibility__Campaign = 1,
		EFortSettingGameVisibility__Athena = 2,
	};


	// Enum /Script/FortniteUI.EFortSidebarSpecialNavType
	enum EFortSidebarSpecialNavType
	{
		EFortSidebarSpecialNavType__None = 0,
		EFortSidebarSpecialNavType__GoPrevious = 1,
		EFortSidebarSpecialNavType__GoRebootRally = 2,
		EFortSidebarSpecialNavType__GoPartyUp = 3,
	};


	// Enum /Script/FortniteUI.EReferFriendOrigin
	enum EReferFriendOrigin
	{
		EReferFriendOrigin__AddFriend = 0,
		EReferFriendOrigin__PartyUp = 1,
	};


	// Enum /Script/FortniteUI.ELocalUserOnlineStatus
	enum ELocalUserOnlineStatus
	{
		ELocalUserOnlineStatus__Online = 0,
		ELocalUserOnlineStatus__Offline = 1,
		ELocalUserOnlineStatus__Away = 2,
		ELocalUserOnlineStatus__ExtendedAway = 3,
		ELocalUserOnlineStatus__DoNotDisturb = 4,
		ELocalUserOnlineStatus__Chat = 5,
	};


	// Enum /Script/FortniteUI.ELfgState
	enum ELfgState
	{
		ELfgState__NoResults = 0,
		ELfgState__Shuffling = 1,
		ELfgState__NoSocialTagsAdded = 2,
		ELfgState__LfgOff = 3,
		ELfgState__LfgUnavailable = 4,
		ELfgState__LfgOffNoSocialTags = 5,
		ELfgState__NoSocialTagsSelected = 6,
		ELfgState__NoFriendsSuggestLFG = 7,
		ELfgState__RebootInvitePlayerButton = 8,
		ELfgState__RebootInviteAllRallied = 9,
		ELfgState__ChangeTagsButton = A,
		ELfgState__ApplyButton = B,
		ELfgState__ShuffleButton = C,
		ELfgState__LfgOffSocialBan = D,
	};


	// Enum /Script/FortniteUI.EMultiFriendAction
	enum EMultiFriendAction
	{
		EMultiFriendAction__AcceptFriendRequest = 0,
	};


	// Enum /Script/FortniteUI.EFortSquadSlottingRestrictionReason
	enum EFortSquadSlottingRestrictionReason
	{
		EFortSquadSlottingRestrictionReason__ItemIsInInventoryOverflow = 0,
		EFortSquadSlottingRestrictionReason__MandatorySlotWouldBeEmptied = 1,
		EFortSquadSlottingRestrictionReason__ItemIsOnActiveExpedition = 2,
		EFortSquadSlottingRestrictionReason__HeroRequiresMissingGameplayTag = 3,
		EFortSquadSlottingRestrictionReason__HeroAlreadyEquippedInLoadout = 4,
	};


	// Enum /Script/FortniteUI.ESqueegeeWidgetInjection
	enum ESqueegeeWidgetInjection
	{
		ESqueegeeWidgetInjection__None = 0,
		ESqueegeeWidgetInjection__RatingTag = 1,
		ESqueegeeWidgetInjection__RatingCard = 2,
		ESqueegeeWidgetInjection__GameModeInfo = 3,
		ESqueegeeWidgetInjection__PinModalInfo = 4,
		ESqueegeeWidgetInjection__ManagementScreen = 5,
		ESqueegeeWidgetInjection__ParentalControlsModal = 6,
		ESqueegeeWidgetInjection__LockIcon = 7,
		ESqueegeeWidgetInjection__VideoBumper = 8,
	};


	// Enum /Script/FortniteUI.ESqueegeeText
	enum ESqueegeeText
	{
		ESqueegeeText__LobbyGameModeAction = 0,
		ESqueegeeText__LobbyGameModeActionCabined = 1,
		ESqueegeeText__GameModeInfoAction = 2,
		ESqueegeeText__GameModeDetailsDisplayAction = 3,
		ESqueegeeText__OptionSettingName = 4,
		ESqueegeeText__OptionSettingDescription = 5,
		ESqueegeeText__ActionSettingName = 6,
		ESqueegeeText__ActionSettingDescription = 7,
		ESqueegeeText__SidebarButton = 8,
	};


	// Enum /Script/FortniteUI.ESqueegeeDataTypes
	enum ESqueegeeDataTypes
	{
		ESqueegeeDataTypes__GameActivity = 0,
		ESqueegeeDataTypes__None = 1,
	};


	// Enum /Script/FortniteUI.EPedestalNameplateAction
	enum EPedestalNameplateAction
	{
		EPedestalNameplateAction__None = 0,
		EPedestalNameplateAction__SendFriendRequest = 1,
		EPedestalNameplateAction__AcceptFriendRequest = 2,
	};


	// Enum /Script/FortniteUI.EPedestalNameplateMatchmakingStatus
	enum EPedestalNameplateMatchmakingStatus
	{
		EPedestalNameplateMatchmakingStatus__None = 0,
		EPedestalNameplateMatchmakingStatus__Ready = 1,
		EPedestalNameplateMatchmakingStatus__NotReady = 2,
		EPedestalNameplateMatchmakingStatus__Playing = 3,
		EPedestalNameplateMatchmakingStatus__Disconnected = 4,
		EPedestalNameplateMatchmakingStatus__Downloading = 5,
	};


	// Enum /Script/FortniteUI.EPedestalSocialNudgeAction
	enum EPedestalSocialNudgeAction
	{
		EPedestalSocialNudgeAction__None = 0,
		EPedestalSocialNudgeAction__Join = 1,
		EPedestalSocialNudgeAction__RequestToJoin = 2,
		EPedestalSocialNudgeAction__Invite = 3,
		EPedestalSocialNudgeAction__AcceptInvite = 4,
	};


	// Enum /Script/FortniteUI.EFortToastType
	enum EFortToastType
	{
		EFortToastType__Default = 0,
		EFortToastType__Subdued = 1,
		EFortToastType__Impactful = 2,
	};


	// Enum /Script/FortniteUI.EFortUIState
	enum EFortUIState
	{
		EFortUIState__Invalid = 0,
		EFortUIState__Login = 1,
		EFortUIState__JoinServer = 2,
		EFortUIState__SubgameSelect = 3,
		EFortUIState__FrontEnd = 4,
		EFortUIState__InGame_Custom = 5,
		EFortUIState__UNUSED = 6,
		EFortUIState__InGame_STW = 7,
		EFortUIState__Cinematic = 8,
		EFortUIState__InGame_BR = 9,
		EFortUIState__AthenaSpectator = A,
		EFortUIState__Replay = B,
		EFortUIState__InGame_STW_Custom = C,
	};


	// Enum /Script/FortniteUI.EFortInventoryContext
	enum EFortInventoryContext
	{
		EFortInventoryContext__Game = 0,
		EFortInventoryContext__Lobby = 1,
		EFortInventoryContext__FrontEnd = 2,
		EFortInventoryContext__Pickup = 3,
	};


	// Enum /Script/FortniteUI.ENotificationResult
	enum ENotificationResult
	{
		ENotificationResult__Confirmed = 0,
		ENotificationResult__Declined = 1,
		ENotificationResult__Unknown = 2,
	};


	// Enum /Script/FortniteUI.ENotificationType
	enum ENotificationType
	{
		ENotificationType__Basic = 0,
		ENotificationType__Friends = 1,
	};


	// Enum /Script/FortniteUI.EModalContainerSize
	enum EModalContainerSize
	{
		EModalContainerSize__ExtraSmall = 0,
		EModalContainerSize__Small = 1,
		EModalContainerSize__Medium = 2,
		EModalContainerSize__Large = 3,
		EModalContainerSize__Max = 4,
	};


	// Enum /Script/FortniteUI.EFortSocialPanelType
	enum EFortSocialPanelType
	{
		EFortSocialPanelType__Join = 0,
		EFortSocialPanelType__Invite = 1,
		EFortSocialPanelType__Max = 2,
	};


	// Enum /Script/FortniteUI.EFortSocialPanelTab
	enum EFortSocialPanelTab
	{
		EFortSocialPanelTab__PartyInvitations = 0,
		EFortSocialPanelTab__Friends = 1,
		EFortSocialPanelTab__RecentPlayers = 2,
		EFortSocialPanelTab__Max = 3,
	};


	// Enum /Script/FortniteUI.EFortBangSize
	enum EFortBangSize
	{
		EFortBangSize__XXS = 0,
		EFortBangSize__XS = 1,
		EFortBangSize__S = 2,
		EFortBangSize__M = 3,
		EFortBangSize__L = 4,
		EFortBangSize__XL = 5,
	};


	// Enum /Script/FortniteUI.EFortTutorialGlowType
	enum EFortTutorialGlowType
	{
		EFortTutorialGlowType__None = 0,
		EFortTutorialGlowType__Look = 1,
		EFortTutorialGlowType__Click = 2,
	};


	// Enum /Script/FortniteUI.EFortAnimSpeed
	enum EFortAnimSpeed
	{
		EFortAnimSpeed__Instant = 0,
		EFortAnimSpeed__Fast = 1,
		EFortAnimSpeed__Normal = 2,
	};


	// Enum /Script/FortniteUI.EFortStatValueDisplayType
	enum EFortStatValueDisplayType
	{
		EFortStatValueDisplayType__BasicPaired = 0,
		EFortStatValueDisplayType__BasicSingle = 1,
		EFortStatValueDisplayType__Unique = 2,
		EFortStatValueDisplayType__ElementalFire = 3,
		EFortStatValueDisplayType__ElementalIce = 4,
		EFortStatValueDisplayType__ElementalElectric = 5,
	};


	// Enum /Script/FortniteUI.EFortBuffState
	enum EFortBuffState
	{
		EFortBuffState__NoChange = 0,
		EFortBuffState__Better = 1,
		EFortBuffState__Worse = 2,
	};


	// Enum /Script/FortniteUI.EFortClampState
	enum EFortClampState
	{
		EFortClampState__NoClamp = 0,
		EFortClampState__MinClamp = 1,
		EFortClampState__MaxClamp = 2,
	};


	// Enum /Script/FortniteUI.EFortComparisonType
	enum EFortComparisonType
	{
		EFortComparisonType__None = 0,
		EFortComparisonType__HigherValue = 1,
		EFortComparisonType__LowerValue = 2,
		EFortComparisonType__Upgrade = 3,
	};


	// Enum /Script/FortniteUI.EPlayerReportReasons
	enum EPlayerReportReasons
	{
		EPlayerReportReasons__None = 0,
		EPlayerReportReasons__Communication = 1,
		EPlayerReportReasons__Offensive = 2,
		EPlayerReportReasons__AFK = 3,
		EPlayerReportReasons__IgnoringObjective = 4,
		EPlayerReportReasons__Harassment = 5,
		EPlayerReportReasons__Exploiting = 6,
		EPlayerReportReasons__TradeScam = 7,
		EPlayerReportReasons__CommunicationsAbuse = 8,
		EPlayerReportReasons__OffensiveName = 9,
		EPlayerReportReasons__TeamingUpWithEnemies = A,
		EPlayerReportReasons__InappropriateContent = B,
		EPlayerReportReasons__ExploitingOrHacking = C,
		EPlayerReportReasons__Harassment_Threatening = D,
		EPlayerReportReasons__Harassment_Annoying = E,
		EPlayerReportReasons__Harassment_Selling = F,
		EPlayerReportReasons__Harassment_Verbal = 10,
		EPlayerReportReasons__Harassment_GameBehavior = 11,
	};


	// Enum /Script/FortniteUI.ESubscriptionContentTab
	enum ESubscriptionContentTab
	{
		ESubscriptionContentTab__SubscriptionManagementScreen = 0,
		ESubscriptionContentTab__ProgressiveItemScreen = 1,
		ESubscriptionContentTab__TemporaryItemsScreen = 2,
	};


	// Enum /Script/FortniteUI.EItemShopNavigationAction
	enum EItemShopNavigationAction
	{
		EItemShopNavigationAction__None = 0,
		EItemShopNavigationAction__ShowOfferDetails = 1,
		EItemShopNavigationAction__NavigateToOffer = 2,
	};


	// Enum /Script/FortniteUI.ECosmeticVariantRowType
	enum ECosmeticVariantRowType
	{
		ECosmeticVariantRowType__Numeric = 0,
		ECosmeticVariantRowType__Tiled = 1,
		ECosmeticVariantRowType__RichColor = 2,
		ECosmeticVariantRowType__Texture = 3,
		ECosmeticVariantRowType__Slider = 4,
		ECosmeticVariantRowType__Ranked = 5,
		ECosmeticVariantRowType__Redirector = 6,
		ECosmeticVariantRowType__None = 7,
	};


	// Enum /Script/FortniteUI.UFortVideoWidgetBaseEvents
	enum UFortVideoWidgetBaseEvents
	{
		UFortVideoWidgetBaseEvents__Finished = 0,
		UFortVideoWidgetBaseEvents__Skipped = 1,
	};


	// Enum /Script/FortniteUI.EFortViewModelsDestructionType
	enum EFortViewModelsDestructionType
	{
		EFortViewModelsDestructionType__AfterLastUsage = 0,
		EFortViewModelsDestructionType__Manual = 1,
	};


	// Enum /Script/FortniteUI.EMotdGovernanceEventType
	enum EMotdGovernanceEventType
	{
		EMotdGovernanceEventType__impression = 0,
		EMotdGovernanceEventType__view = 1,
	};


	// Enum /Script/FortniteUI.EButtonAction
	enum EButtonAction
	{
		EButtonAction__NextTile = 0,
		EButtonAction__PreviousTile = 1,
		EButtonAction__Close = 2,
		EButtonAction__ActionButton = 3,
		EButtonAction__Unknown = 4,
	};


	// Enum /Script/FortniteUI.EMotdInteractionType
	enum EMotdInteractionType
	{
		EMotdInteractionType__SeenTeaser = 0,
		EMotdInteractionType__SeenFullScreen = 1,
		EMotdInteractionType__ButtonPressed = 2,
		EMotdInteractionType__Unknown = 3,
	};


	// Enum /Script/FortniteUI.EResponseActions
	enum EResponseActions
	{
		EResponseActions__Seen = 0,
		EResponseActions__LeftFrontend = 1,
		EResponseActions__LogOut = 2,
		EResponseActions__Refreshed = 3,
		EResponseActions__ContentCleared = 4,
	};


	// Enum /Script/FortniteUI.ESpatialStyleCharacterUnlockPrerequisite
	enum ESpatialStyleCharacterUnlockPrerequisite
	{
		ESpatialStyleCharacterUnlockPrerequisite__BattlepassPurchase = 0,
		ESpatialStyleCharacterUnlockPrerequisite__BattlepassLevel = 1,
	};


	// Enum /Script/FortniteUI.EFortSubscriptionContentInterfaceCloseReason
	enum EFortSubscriptionContentInterfaceCloseReason
	{
		EFortSubscriptionContentInterfaceCloseReason__Normal = 0,
		EFortSubscriptionContentInterfaceCloseReason__SubscriptionPurchased = 1,
	};


	// Enum /Script/FortniteUI.EUIKitBlockVisualState
	enum EUIKitBlockVisualState
	{
		EUIKitBlockVisualState__Invalid = 0,
		EUIKitBlockVisualState__Hovered = 1,
		EUIKitBlockVisualState__Unhovered = 2,
		EUIKitBlockVisualState__Focused = 3,
		EUIKitBlockVisualState__Unfocused = 4,
		EUIKitBlockVisualState__Pressed = 5,
		EUIKitBlockVisualState__Released = 6,
		EUIKitBlockVisualState__Disabled = 7,
		EUIKitBlockVisualState__Enabled = 8,
		EUIKitBlockVisualState__Selected = 9,
		EUIKitBlockVisualState__DeselectedIdle = A,
		EUIKitBlockVisualState__DeselectedFocused = B,
	};


	// Enum /Script/FortniteUI.EUIKitBlockInstantTransitionState
	enum EUIKitBlockInstantTransitionState
	{
		EUIKitBlockInstantTransitionState__Invalid = 0,
		EUIKitBlockInstantTransitionState__InstantEnabled = 1,
		EUIKitBlockInstantTransitionState__InstantDisabled = 2,
		EUIKitBlockInstantTransitionState__InstantSelected = 3,
		EUIKitBlockInstantTransitionState__InstantDeselected = 4,
		EUIKitBlockInstantTransitionState__InstantLocked = 5,
		EUIKitBlockInstantTransitionState__InstantUnlocked = 6,
	};


	// Enum /Script/FortniteUI.ETrackedInputPointerStartType
	enum ETrackedInputPointerStartType
	{
		ETrackedInputPointerStartType__Invalid = 0,
		ETrackedInputPointerStartType__Pressed = 1,
		ETrackedInputPointerStartType__EnterBounds = 2,
	};


	// Enum /Script/FortniteUI.ETrackedInputPointerEndType
	enum ETrackedInputPointerEndType
	{
		ETrackedInputPointerEndType__Unknown = 0,
		ETrackedInputPointerEndType__Released = 1,
		ETrackedInputPointerEndType__Cancelled = 2,
		ETrackedInputPointerEndType__ExitBounds = 3,
	};


	// Enum /Script/FortniteUI.EFortServerItemIneligibleReason
	enum EFortServerItemIneligibleReason
	{
		EFortServerItemIneligibleReason__None = 0,
		EFortServerItemIneligibleReason__PartyTooBig = 1,
		EFortServerItemIneligibleReason__PartyTooSmall = 2,
		EFortServerItemIneligibleReason__NotPartyLeader = 3,
		EFortServerItemIneligibleReason__MatchmakingAlready = 4,
		EFortServerItemIneligibleReason__NotSupportedByLeto = 5,
		EFortServerItemIneligibleReason__InvalidData = 6,
	};


	// Enum /Script/FortniteUI.EAvailableSquadSlotsListEntryState
	enum EAvailableSquadSlotsListEntryState
	{
		EAvailableSquadSlotsListEntryState__Detailed = 0,
		EAvailableSquadSlotsListEntryState__Simplified = 1,
	};


	// Enum /Script/FortniteUI.EAthenaConfirmationResult
	enum EAthenaConfirmationResult
	{
		EAthenaConfirmationResult__Confirmed = 0,
		EAthenaConfirmationResult__Declined = 1,
		EAthenaConfirmationResult__Canceled = 2,
		EAthenaConfirmationResult__Max_NONE = 3,
	};


	// Enum /Script/FortniteUI.EEquippedWeaponDisplay
	enum EEquippedWeaponDisplay
	{
		EEquippedWeaponDisplay__None = 0,
		EEquippedWeaponDisplay__Resource = 1,
		EEquippedWeaponDisplay__Magazine = 2,
		EEquippedWeaponDisplay__Utility = 3,
		EEquippedWeaponDisplay__Chargeable = 4,
	};


	// Enum /Script/FortniteUI.EAthenaPlayerActionAlert
	enum EAthenaPlayerActionAlert
	{
		EAthenaPlayerActionAlert__PlayerDown = 0,
		EAthenaPlayerActionAlert__PlayerKill = 1,
		EAthenaPlayerActionAlert__EnteredStorm = 2,
		EAthenaPlayerActionAlert__NewZebulonDrone = 3,
		EAthenaPlayerActionAlert__NewZebulonDroneYou = 4,
	};


	// Enum /Script/FortniteUI.EFortAthenaPlaylist
	enum EFortAthenaPlaylist
	{
		EFortAthenaPlaylist__AthenaSolo = 0,
		EFortAthenaPlaylist__AthenaDuo = 1,
		EFortAthenaPlaylist__AthenaSquad = 2,
	};


	// Enum /Script/FortniteUI.EAthenaLockerInfoRestrictionWarning
	enum EAthenaLockerInfoRestrictionWarning
	{
		EAthenaLockerInfoRestrictionWarning__UnsatisfiedExclusiveItem = 0,
		EAthenaLockerInfoRestrictionWarning__LockedEmote = 1,
		EAthenaLockerInfoRestrictionWarning__CosmeticRestriction = 2,
		EAthenaLockerInfoRestrictionWarning__AllItemsAreArchived = 3,
		EAthenaLockerInfoRestrictionWarning__Unknown = 4,
	};


	// Enum /Script/FortniteUI.EFortMarkerActions
	enum EFortMarkerActions
	{
		EFortMarkerActions__None = 0,
		EFortMarkerActions__Cancel = 1,
		EFortMarkerActions__Confirm = 2,
		EFortMarkerActions__CancelAndReturnNPC = 3,
		EFortMarkerActions__Unconfirm = 4,
	};


	// Enum /Script/FortniteUI.EHealthBarType
	enum EHealthBarType
	{
		EHealthBarType__Health = 0,
		EHealthBarType__Shield = 1,
		EHealthBarType__Overshield = 2,
		EHealthBarType__Armor = 3,
		EHealthBarType__Stamina = 4,
		EHealthBarType__VehicleHealth = 5,
		EHealthBarType__SignalInStorm = 6,
	};


	// Enum /Script/FortniteUI.EBPStatus
	enum EBPStatus
	{
		EBPStatus__UnpurchasedBP = 0,
		EBPStatus__PurchasedBP = 1,
	};


	// Enum /Script/FortniteUI.EAthenaSquadListUpdateType
	enum EAthenaSquadListUpdateType
	{
		EAthenaSquadListUpdateType__None = 0,
		EAthenaSquadListUpdateType__CanResurrect = 1,
		EAthenaSquadListUpdateType__FindResurrectChip = 2,
	};


	// Enum /Script/FortniteUI.ERespawnUIState
	enum ERespawnUIState
	{
		ERespawnUIState__Hidden = 0,
		ERespawnUIState__ShowRespawnEnabled = 1,
		ERespawnUIState__ShowRespawnDisabled = 2,
	};


	// Enum /Script/FortniteUI.EStormSurgeThresholdType
	enum EStormSurgeThresholdType
	{
		EStormSurgeThresholdType__None = 0,
		EStormSurgeThresholdType__Above = 1,
		EStormSurgeThresholdType__Below = 2,
		EStormSurgeThresholdType__Equal = 3,
	};


	// Enum /Script/FortniteUI.EWinConditionParentType
	enum EWinConditionParentType
	{
		EWinConditionParentType__None = 0,
		EWinConditionParentType__Desktop = 1,
		EWinConditionParentType__Mobile = 2,
	};


	// Enum /Script/FortniteUI.EChallengeListEntryType
	enum EChallengeListEntryType
	{
		EChallengeListEntryType__ProductCompatibility = 0,
		EChallengeListEntryType__GoalCard = 1,
		EChallengeListEntryType__Header = 2,
		EChallengeListEntryType__Normal = 3,
		EChallengeListEntryType__PartyUp = 4,
		EChallengeListEntryType__LockedQuest = 5,
		EChallengeListEntryType__AllQuestsComplete = 6,
		EChallengeListEntryType__CustomMessage = 7,
		EChallengeListEntryType__GiftCard = 8,
		EChallengeListEntryType__Count = 9,
	};


	// Enum /Script/FortniteUI.EEndOfMatchQuestCategoryType
	enum EEndOfMatchQuestCategoryType
	{
		EEndOfMatchQuestCategoryType__Completed = 0,
		EEndOfMatchQuestCategoryType__InProgress = 1,
	};


	// Enum /Script/FortniteUI.ELocationEntryState
	enum ELocationEntryState
	{
		ELocationEntryState__Found = 0,
		ELocationEntryState__NotFound = 1,
		ELocationEntryState__Unused = 2,
	};


	// Enum /Script/FortniteUI.EAthenaGameFeatureStatus
	enum EAthenaGameFeatureStatus
	{
		EAthenaGameFeatureStatus__InProgress = 0,
		EAthenaGameFeatureStatus__ProgressPaused = 1,
		EAthenaGameFeatureStatus__ErrorOccured = 2,
	};


	// Enum /Script/FortniteUI.EMinigameActivityWidgetStatFormat
	enum EMinigameActivityWidgetStatFormat
	{
		EMinigameActivityWidgetStatFormat__Score = 0,
		EMinigameActivityWidgetStatFormat__Time = 1,
		EMinigameActivityWidgetStatFormat__AddTime = 2,
		EMinigameActivityWidgetStatFormat__Distance = 3,
		EMinigameActivityWidgetStatFormat__Laps = 4,
	};


	// Enum /Script/FortniteUI.EFlowRiderElement
	enum EFlowRiderElement
	{
		EFlowRiderElement__AutoReadyUp = 0,
		EFlowRiderElement__Button_NextMatch = 1,
		EFlowRiderElement__Button_PlayWithNewTeam = 2,
		EFlowRiderElement__Button_PlayWithNewSquad = 3,
		EFlowRiderElement__Button_ReadyUp = 4,
	};


	// Enum /Script/FortniteUI.EHabaneroProgressError
	enum EHabaneroProgressError
	{
		EHabaneroProgressError__None = 0,
		EHabaneroProgressError__MissingHabaneroComponent = 1,
		EHabaneroProgressError__HabaneroComponentSocialUserNotBound = 2,
		EHabaneroProgressError__HabaneroComponentUnableToQueryProgress = 3,
		EHabaneroProgressError__EmptyRankType = 4,
		EHabaneroProgressError__InitialProgressMapInvalid = 5,
		EHabaneroProgressError__CurrentProgressMapInvalid = 6,
		EHabaneroProgressError__InvalidCurrentTrack = 7,
		EHabaneroProgressError__InitialProgressEntryNotFound = 8,
		EHabaneroProgressError__CurrentProgressEntryNotFound = 9,
		EHabaneroProgressError__GameModeNotFound = A,
		EHabaneroProgressError__CurrentTierLessThanZero = B,
		EHabaneroProgressError__NotEnoughTiersForInitialTier = C,
		EHabaneroProgressError__NotEnoughTiersForCurrentTier = D,
		EHabaneroProgressError__FailedToFindUnrankedTier = E,
		EHabaneroProgressError__UnknownError = F,
	};


	// Enum /Script/FortniteUI.EPostGameScreenContinueBehavior
	enum EPostGameScreenContinueBehavior
	{
		EPostGameScreenContinueBehavior__Next = 0,
		EPostGameScreenContinueBehavior__Previous = 1,
	};


	// Enum /Script/FortniteUI.EPostGamePlacement
	enum EPostGamePlacement
	{
		EPostGamePlacement__Win = 0,
		EPostGamePlacement__Lose = 1,
		EPostGamePlacement__Tie = 2,
		EPostGamePlacement__NoPlacement = 3,
	};


	// Enum /Script/FortniteUI.EBattleLabAlertType
	enum EBattleLabAlertType
	{
		EBattleLabAlertType__QuestComplete = 0,
		EBattleLabAlertType__QuestGranted = 1,
		EBattleLabAlertType__Reward = 2,
	};


	// Enum /Script/FortniteUI.ECobaltStatusTeam
	enum ECobaltStatusTeam
	{
		ECobaltStatusTeam__Ally = 0,
		ECobaltStatusTeam__Enemy = 1,
	};


	// Enum /Script/FortniteUI.EBracketNodeState
	enum EBracketNodeState
	{
		EBracketNodeState__LocalTeam = 0,
		EBracketNodeState__EnemyTeam = 1,
		EBracketNodeState__Neutral = 2,
	};


	// Enum /Script/FortniteUI.ESurvivalObjectiveIconState
	enum ESurvivalObjectiveIconState
	{
		ESurvivalObjectiveIconState__None = 0,
		ESurvivalObjectiveIconState__Spawned = 1,
		ESurvivalObjectiveIconState__Destroyed = 2,
	};


	// Enum /Script/FortniteUI.EDiscoCaptureUIState
	enum EDiscoCaptureUIState
	{
		EDiscoCaptureUIState__None = 0,
		EDiscoCaptureUIState__Hidden = 1,
		EDiscoCaptureUIState__Dance = 2,
		EDiscoCaptureUIState__Capturing = 3,
		EDiscoCaptureUIState__Contested = 4,
	};


	// Enum /Script/FortniteUI.EDiscoCaptureIconState
	enum EDiscoCaptureIconState
	{
		EDiscoCaptureIconState__None = 0,
		EDiscoCaptureIconState__Hidden = 1,
		EDiscoCaptureIconState__Neutral = 2,
		EDiscoCaptureIconState__AllyCaptured = 3,
		EDiscoCaptureIconState__EnemyCaptured = 4,
	};


	// Enum /Script/FortniteUI.EDiscoCaptureProgressState
	enum EDiscoCaptureProgressState
	{
		EDiscoCaptureProgressState__None = 0,
		EDiscoCaptureProgressState__AllyProgress = 1,
		EDiscoCaptureProgressState__EnemyProgress = 2,
	};


	// Enum /Script/FortniteUI.EDiscoScoreProgressTypes
	enum EDiscoScoreProgressTypes
	{
		EDiscoScoreProgressTypes__None = 0,
		EDiscoScoreProgressTypes__ProgressSoundMild = 1,
		EDiscoScoreProgressTypes__ProgressSoundMedium = 2,
		EDiscoScoreProgressTypes__ProgressSoundStrong = 3,
		EDiscoScoreProgressTypes__CountdownSoundNormal = 4,
		EDiscoScoreProgressTypes__CountdownSoundStrong = 5,
	};


	// Enum /Script/FortniteUI.EHeistExitCraftUIState
	enum EHeistExitCraftUIState
	{
		EHeistExitCraftUIState__None = 0,
		EHeistExitCraftUIState__OnTheWay = 1,
		EHeistExitCraftUIState__Incoming = 2,
		EHeistExitCraftUIState__Arrived = 3,
	};


	// Enum /Script/FortniteUI.EHeistBlingIconState
	enum EHeistBlingIconState
	{
		EHeistBlingIconState__None = 0,
		EHeistBlingIconState__SupplyDrop = 1,
		EHeistBlingIconState__PickupItem = 2,
		EHeistBlingIconState__CarriedEnemy = 3,
		EHeistBlingIconState__CarriedAlly = 4,
	};


	// Enum /Script/FortniteUI.EHeistExitCraftIconState
	enum EHeistExitCraftIconState
	{
		EHeistExitCraftIconState__None = 0,
		EHeistExitCraftIconState__Incoming = 1,
		EHeistExitCraftIconState__Spawned = 2,
		EHeistExitCraftIconState__Exited = 3,
	};


	// Enum /Script/FortniteUI.EMinigameCaptureObjectiveIconState
	enum EMinigameCaptureObjectiveIconState
	{
		EMinigameCaptureObjectiveIconState__NotCaptured = 0,
		EMinigameCaptureObjectiveIconState__Captured = 1,
	};


	// Enum /Script/FortniteUI.ETDMScoreProgressTypes
	enum ETDMScoreProgressTypes
	{
		ETDMScoreProgressTypes__None = 0,
		ETDMScoreProgressTypes__ProgressSoundMild = 1,
		ETDMScoreProgressTypes__ProgressSoundMedium = 2,
		ETDMScoreProgressTypes__ProgressSoundStrong = 3,
		ETDMScoreProgressTypes__CountdownSoundNormal = 4,
		ETDMScoreProgressTypes__CountdownSoundStrong = 5,
	};


	// Enum /Script/FortniteUI.EQuestCategoryButtonTimerState
	enum EQuestCategoryButtonTimerState
	{
		EQuestCategoryButtonTimerState__Countdown = 0,
		EQuestCategoryButtonTimerState__Custom = 1,
		EQuestCategoryButtonTimerState__Disabled = 2,
		EQuestCategoryButtonTimerState__None = 3,
	};


	// Enum /Script/FortniteUI.EQuestPanelDebugListEntryType
	enum EQuestPanelDebugListEntryType
	{
		UNSET = 0,
		NotFound = 1,
		ScheduleInstance = 2,
		ScheduleDefinition = 3,
		BundleInstance = 4,
		BundleDefinition = 5,
		QuestInstance = 6,
		QuestDefinition = 7,
	};


	// Enum /Script/FortniteUI.EComboSlotType
	enum EComboSlotType
	{
		EComboSlotType__Primary = 0,
		EComboSlotType__Secondary = 1,
		EComboSlotType__Combo = 2,
		EComboSlotType__Creative = 3,
		EComboSlotType__COUNT = 4,
	};


	// Enum /Script/FortniteUI.EBacchusSignalQuality
	enum EBacchusSignalQuality
	{
		EBacchusSignalQuality__None = 0,
		EBacchusSignalQuality__Low = 1,
		EBacchusSignalQuality__Medium = 2,
		EBacchusSignalQuality__High = 3,
	};


	// Enum /Script/FortniteUI.ECooldownTrackingType
	enum ECooldownTrackingType
	{
		ECooldownTrackingType__Cue = 0,
		ECooldownTrackingType__AbilityCooldownTags = 1,
		ECooldownTrackingType__COUNT = 2,
	};


	// Enum /Script/FortniteUI.EFortPrioritizedWidgetInterruptedBehavior
	enum EFortPrioritizedWidgetInterruptedBehavior
	{
		EFortPrioritizedWidgetInterruptedBehavior__RemainInQueue = 0,
		EFortPrioritizedWidgetInterruptedBehavior__Drop = 1,
	};


	// Enum /Script/FortniteUI.EAthenaSpectatorNameplateDistanceState
	enum EAthenaSpectatorNameplateDistanceState
	{
		EAthenaSpectatorNameplateDistanceState__Near = 0,
		EAthenaSpectatorNameplateDistanceState__MidDistance = 1,
		EAthenaSpectatorNameplateDistanceState__FurtherThanMaxDistance = 2,
	};


	// Enum /Script/FortniteUI.EAthenaSpectatorNameplateDetailState
	enum EAthenaSpectatorNameplateDetailState
	{
		EAthenaSpectatorNameplateDetailState__High = 0,
		EAthenaSpectatorNameplateDetailState__Low = 1,
		EAthenaSpectatorNameplateDetailState__Arrow = 2,
		EAthenaSpectatorNameplateDetailState__Off = 3,
	};


	// Enum /Script/FortniteUI.EBattleMapTimelineWidgetState
	enum EBattleMapTimelineWidgetState
	{
		EBattleMapTimelineWidgetState__None = 0,
		EBattleMapTimelineWidgetState__HasNext = 1,
		EBattleMapTimelineWidgetState__HasPrevious = 2,
		EBattleMapTimelineWidgetState__IsInReplay = 4,
		EBattleMapTimelineWidgetState__CanBeScrubbed = 8,
		EBattleMapTimelineWidgetState__IsStreaming = 10,
		EBattleMapTimelineWidgetState__Invalid = 20,
	};


	// Enum /Script/FortniteUI.ESpectatorBuildCountType
	enum ESpectatorBuildCountType
	{
		ESpectatorBuildCountType__BuildCount = 0,
		ESpectatorBuildCountType__Wood = 1,
		ESpectatorBuildCountType__Stone = 2,
		ESpectatorBuildCountType__Metal = 3,
		ESpectatorBuildCountType__Gold = 4,
	};


	// Enum /Script/FortniteUI.ESpectatorLeaderboardEntryType
	enum ESpectatorLeaderboardEntryType
	{
		ESpectatorLeaderboardEntryType__ScoreWithEndScore = 0,
		ESpectatorLeaderboardEntryType__NoEndScore = 1,
		ESpectatorLeaderboardEntryType__Time = 2,
		ESpectatorLeaderboardEntryType__Invalid = 3,
	};


	// Enum /Script/FortniteUI.ESpectatorMapPlayerListState
	enum ESpectatorMapPlayerListState
	{
		ESpectatorMapPlayerListState__Default = 0,
		ESpectatorMapPlayerListState__Irrelevant = 1,
		ESpectatorMapPlayerListState__Eliminated = 2,
	};


	// Enum /Script/FortniteUI.ESpectatorPlayerListSortMethod
	enum ESpectatorPlayerListSortMethod
	{
		ESpectatorPlayerListSortMethod__SquadId = 0,
		ESpectatorPlayerListSortMethod__PlayerName = 1,
		ESpectatorPlayerListSortMethod__Eliminations = 2,
		ESpectatorPlayerListSortMethod__EventScore = 3,
		ESpectatorPlayerListSortMethod__State = 4,
		ESpectatorPlayerListSortMethod__Count = 5,
	};


	// Enum /Script/FortniteUI.EOptionalFlowSteps
	enum EOptionalFlowSteps
	{
		EOptionalFlowSteps__TryShowMobileGuidedTutorial = 0,
		EOptionalFlowSteps__TryShowMOTDs = 1,
		EOptionalFlowSteps__TryShowNormalBanModal = 2,
		EOptionalFlowSteps__TryShowSocialBanModal = 3,
		EOptionalFlowSteps__TryShowMFAModal = 4,
		EOptionalFlowSteps__TryShowCrossplayDialog = 5,
		EOptionalFlowSteps__TryShowSocialImport = 6,
		EOptionalFlowSteps__TryShowSurveys = 7,
		EOptionalFlowSteps__TryShowBadMatchPopup = 8,
		EOptionalFlowSteps__TryShowMobileInGameAppRating = 9,
		EOptionalFlowSteps__TryShowSamsungSensorWarning = A,
		EOptionalFlowSteps__TryShowBattlePassPurchaseScreen = B,
		EOptionalFlowSteps__TryShowMultipleSubscriptionsAlert = C,
		EOptionalFlowSteps__TryPushGiftingScreen = D,
		EOptionalFlowSteps__TryPushMessagingScreen = E,
		EOptionalFlowSteps__TryGoToBattlePassTab = F,
		EOptionalFlowSteps__TryShowRefundTokenNotification = 10,
		EOptionalFlowSteps__TryShowPriceChangeAcknowledgeNotification = 11,
		EOptionalFlowSteps__TryShowSettingsChangeAcknowledgementScreen = 12,
		EOptionalFlowSteps__TryShowEnterCabinModeScreen = 13,
		EOptionalFlowSteps__TryShowVoiceReportingIntroModal = 14,
		EOptionalFlowSteps__TryShowContentGatingIntroModal = 15,
		EOptionalFlowSteps__TryShowResolutionChangeModal = 16,
		EOptionalFlowSteps__TryPlayEcosystemTrailer = 17,
		EOptionalFlowSteps__TryShowPlaytimeExpiredModal = 18,
	};


	// Enum /Script/FortniteUI.EFuelTankState
	enum EFuelTankState
	{
		EFuelTankState__Empty = 0,
		EFuelTankState__LowFuel = 1,
		EFuelTankState__RegularFuel = 2,
		EFuelTankState__TankFull = 3,
	};


	// Enum /Script/FortniteUI.EActionBindingComparisonType
	enum EActionBindingComparisonType
	{
		EActionBindingComparisonType__NoneBound = 0,
		EActionBindingComparisonType__AnyBound = 1,
		EActionBindingComparisonType__AllBound = 2,
	};


	// Enum /Script/FortniteUI.ENumericalIndicatorActionType
	enum ENumericalIndicatorActionType
	{
		ENumericalIndicatorActionType__Adding = 0,
		ENumericalIndicatorActionType__Removing = 1,
		ENumericalIndicatorActionType__Nothing = 2,
	};


	// Enum /Script/FortniteUI.ELinkAcrossSimpleAction
	enum ELinkAcrossSimpleAction
	{
		ELinkAcrossSimpleAction__AddToAll = 0,
		ELinkAcrossSimpleAction__RemovedFromAll = 1,
		ELinkAcrossSimpleAction__Custom = 2,
		ELinkAcrossSimpleAction__Nothing = 3,
	};


	// Enum /Script/FortniteUI.EHUDLayoutToolPopupType
	enum EHUDLayoutToolPopupType
	{
		EHUDLayoutToolPopupType__Warning = 0,
		EHUDLayoutToolPopupType__Generic = 1,
	};


	// Enum /Script/FortniteUI.EHUDLayoutToolTextInputPopupType
	enum EHUDLayoutToolTextInputPopupType
	{
		EHUDLayoutToolTextInputPopupType__Rename = 0,
		EHUDLayoutToolTextInputPopupType__ImportLayoutID = 1,
	};


	// Enum /Script/FortniteUI.EHUDLayoutToolToasterType
	enum EHUDLayoutToolToasterType
	{
		EHUDLayoutToolToasterType__Success = 0,
		EHUDLayoutToolToasterType__Failure = 1,
		EHUDLayoutToolToasterType__LocalFailure = 2,
		EHUDLayoutToolToasterType__CloudFailure = 3,
	};


	// Enum /Script/FortniteUI.EContextLayoutAccessLevel
	enum EContextLayoutAccessLevel
	{
		EContextLayoutAccessLevel__Editable = 0,
		EContextLayoutAccessLevel__Hidden = 1,
	};


	// Enum /Script/FortniteUI.EFortMaterialProgressBarSection
	enum EFortMaterialProgressBarSection
	{
		EFortMaterialProgressBarSection__Primary = 0,
		EFortMaterialProgressBarSection__Secondary = 1,
		EFortMaterialProgressBarSection__Tertiary = 2,
		EFortMaterialProgressBarSection__Negative = 3,
		EFortMaterialProgressBarSection__MAX_PROGRESS_BAR_SECTIONS = 4,
	};


	// Enum /Script/FortniteUI.EFortMaterialProgressBarSectionColorNumber
	enum EFortMaterialProgressBarSectionColorNumber
	{
		EFortMaterialProgressBarSectionColorNumber__Color1 = 0,
		EFortMaterialProgressBarSectionColorNumber__Color2 = 1,
	};


	// Enum /Script/FortniteUI.EFortMaterialProgressBarSectionOverflowBehavior
	enum EFortMaterialProgressBarSectionOverflowBehavior
	{
		EFortMaterialProgressBarSectionOverflowBehavior__PreserveValues = 0,
		EFortMaterialProgressBarSectionOverflowBehavior__ReverseCollapse = 1,
	};


	// Enum /Script/FortniteUI.ECrewDetailsTag
	enum ECrewDetailsTag
	{
		ECrewDetailsTag__SeasonLaunchBenefit = 0,
		ECrewDetailsTag__MonthlyBenefit = 1,
		ECrewDetailsTag__CrewMonthBenefit = 2,
		ECrewDetailsTag__AvailableUntilBenefit = 3,
		ECrewDetailsTag__MonthlySubscription = 4,
		ECrewDetailsTag__None = 5,
	};


	// Enum /Script/FortniteUI.ECrewTileType
	enum ECrewTileType
	{
		ECrewTileType__None = 0,
		ECrewTileType__Basic = 1,
		ECrewTileType__BattlePass = 2,
		ECrewTileType__CrewPack = 3,
		ECrewTileType__ProgressiveCosmetic = 4,
		ECrewTileType__TemporaryItems = 5,
	};


	// Enum /Script/FortniteUI.ECrewItemShopTileType
	enum ECrewItemShopTileType
	{
		ECrewItemShopTileType__None = 0,
		ECrewItemShopTileType__Subscription = 1,
		ECrewItemShopTileType__ProgressiveCosmetic = 2,
	};


	// Enum /Script/FortniteUI.EAthenaNewsEntryType
	enum EAthenaNewsEntryType
	{
		EAthenaNewsEntryType__Text = 0,
		EAthenaNewsEntryType__Item = 1,
		EAthenaNewsEntryType__Website = 2,
		EAthenaNewsEntryType__NavigateToTab = 3,
		EAthenaNewsEntryType__Challenge = 4,
		EAthenaNewsEntryType__Setting = 5,
		EAthenaNewsEntryType__SpatialScreen = 6,
		EAthenaNewsEntryType__SmallNews = 7,
		EAthenaNewsEntryType__NavigateToBattlePassSubPage = 8,
		EAthenaNewsEntryType__Creative = 9,
		EAthenaNewsEntryType__NavigateToSubscriptionSubPage = A,
		EAthenaNewsEntryType__ProgressiveItemLearnMore = B,
		EAthenaNewsEntryType__ProgressiveItemReminder = C,
		EAthenaNewsEntryType__ProgressiveItemClaimRewards = D,
		EAthenaNewsEntryType__Event = E,
		EAthenaNewsEntryType__Discovery = F,
		EAthenaNewsEntryType__NavigateToCompetitiveSubPage = 10,
		EAthenaNewsEntryType__NavigateToSocialMenu = 11,
		EAthenaNewsEntryType__NavigateToSocialTagsSubPage = 12,
		EAthenaNewsEntryType__NavigateToRebootRallySubPage = 13,
		EAthenaNewsEntryType__NavigateToMapSubPage = 14,
		EAthenaNewsEntryType__NavigateToHabaneroSubPage = 15,
		EAthenaNewsEntryType__Invalid = 16,
	};


	// Enum /Script/FortniteUI.EAthenaNewsStyle
	enum EAthenaNewsStyle
	{
		EAthenaNewsStyle__None = 0,
		EAthenaNewsStyle__SpecialEvent = 1,
		EAthenaNewsStyle__SpecialEvent2 = 2,
	};


	// Enum /Script/FortniteUI.FFortActivityImageShape
	enum FFortActivityImageShape
	{
		FFortActivityImageShape__Rectangular = 0,
		FFortActivityImageShape__Square = 1,
	};


	// Enum /Script/FortniteUI.EBuildingFocusType
	enum EBuildingFocusType
	{
		EBuildingFocusType__Contextual = 0,
		EBuildingFocusType__Interactable = 1,
		EBuildingFocusType__Normal = 2,
		EBuildingFocusType__Count = 3,
	};


	// Enum /Script/FortniteUI.EVaultItemLimitStatus
	enum EVaultItemLimitStatus
	{
		EVaultItemLimitStatus__WellBelowCapacity = 0,
		EVaultItemLimitStatus__NearCapacity = 1,
		EVaultItemLimitStatus__AtCapacity = 2,
		EVaultItemLimitStatus__OverCapacity = 3,
	};


	// Enum /Script/FortniteUI.EItemRecyclingRestrictionReason
	enum EItemRecyclingRestrictionReason
	{
		EItemRecyclingRestrictionReason__InnatelyUnrecyclable = 0,
		EItemRecyclingRestrictionReason__IsSlottedGroundOperative = 1,
		EItemRecyclingRestrictionReason__MissingCatalyst = 2,
		EItemRecyclingRestrictionReason__ItemOutOnExpedition = 3,
		EItemRecyclingRestrictionReason__InUseByCrafting = 4,
		EItemRecyclingRestrictionReason__MulchingNotAllowed = 5,
		EItemRecyclingRestrictionReason__IsSlottedAttributeWorker = 6,
	};


	// Enum /Script/FortniteUI.EItemRecyclingWarning
	enum EItemRecyclingWarning
	{
		EItemRecyclingWarning__HighLevel = 0,
		EItemRecyclingWarning__HighRarity = 1,
		EItemRecyclingWarning__CanSlotInCollectionBook = 2,
	};


	// Enum /Script/FortniteUI.EConversionControlKeyRequest
	enum EConversionControlKeyRequest
	{
		EConversionControlKeyRequest__AllKeys = 0,
		EConversionControlKeyRequest__NonConsumableKeys = 1,
		EConversionControlKeyRequest__ConsumableKeys = 2,
	};


	// Enum /Script/FortniteUI.ECardPackPurchaseError
	enum ECardPackPurchaseError
	{
		ECardPackPurchaseError__PendingServerConfirmation = 0,
		ECardPackPurchaseError__CannotAffordItem = 1,
		ECardPackPurchaseError__NoneLeft = 2,
		ECardPackPurchaseError__PurchaseAlreadyPending = 3,
		ECardPackPurchaseError__NoConnection = 4,
	};


	// Enum /Script/FortniteUI.EPauseType
	enum EPauseType
	{
		EPauseType__NoPause = 0,
		EPauseType__Rare = 1,
		EPauseType__New = 2,
		EPauseType__NewAndRare = 3,
	};


	// Enum /Script/FortniteUI.EShowChannelDetails
	enum EShowChannelDetails
	{
		EShowChannelDetails__FromMinigameSettings = 0,
		EShowChannelDetails__ForceShow = 1,
		EShowChannelDetails__ForceHide = 2,
	};


	// Enum /Script/FortniteUI.EFortCreativeIslandLinkCategory
	enum EFortCreativeIslandLinkCategory
	{
		EFortCreativeIslandLinkCategory__Default = 0,
		EFortCreativeIslandLinkCategory__Favorite = 1,
		EFortCreativeIslandLinkCategory__Published = 2,
		EFortCreativeIslandLinkCategory__Recent = 3,
	};


	// Enum /Script/FortniteUI.EFortCreativeIslandSelectTabType
	enum EFortCreativeIslandSelectTabType
	{
		EFortCreativeIslandSelectTabType__IslandCode = 0,
		EFortCreativeIslandSelectTabType__ListView = 1,
	};


	// Enum /Script/FortniteUI.ECreativePublishError
	enum ECreativePublishError
	{
		ECreativePublishError__None = 0,
		ECreativePublishError__RateLimited = 1,
		ECreativePublishError__PlotOverBudget = 2,
		ECreativePublishError__LinkCodeInvalid = 3,
		ECreativePublishError__SanitizationFiltered = 4,
		ECreativePublishError__Other = 5,
	};


	// Enum /Script/FortniteUI.EConfirmDialogType
	enum EConfirmDialogType
	{
		EConfirmDialogType__CancelChanges = 0,
		EConfirmDialogType__CharLimitExceeded = 1,
		EConfirmDialogType__MarkupWarning = 2,
	};


	// Enum /Script/FortniteUI.EButtonContext
	enum EButtonContext
	{
		EButtonContext__NoButtonSelected = 0,
		EButtonContext__ButtonSelected = 1,
		EButtonContext__StylingButtons = 2,
	};


	// Enum /Script/FortniteUI.EFortCreativeServerPrivacySetting
	enum EFortCreativeServerPrivacySetting
	{
		EFortCreativeServerPrivacySetting__Unknown = 0,
		EFortCreativeServerPrivacySetting__Private = 1,
		EFortCreativeServerPrivacySetting__Public = 2,
	};


	// Enum /Script/FortniteUI.EFortDiscoverLabelStyle
	enum EFortDiscoverLabelStyle
	{
		EFortDiscoverLabelStyle__Utility = 0,
		EFortDiscoverLabelStyle__Attention = 1,
		EFortDiscoverLabelStyle__Social = 2,
		EFortDiscoverLabelStyle__Deal = 3,
		EFortDiscoverLabelStyle__Quiet = 4,
		EFortDiscoverLabelStyle__Max_NONE = 5,
	};


	// Enum /Script/FortniteUI.EActivityItemType
	enum EActivityItemType
	{
		EActivityItemType__Island = 0,
		EActivityItemType__Creator = 1,
		EActivityItemType__PlayingNow = 2,
		EActivityItemType__Max = 3,
	};


	// Enum /Script/FortniteUI.EFortActivityBrowserTagType
	enum EFortActivityBrowserTagType
	{
		EFortActivityBrowserTagType__Default = 0,
		EFortActivityBrowserTagType__EpicOriginal = 1,
		EFortActivityBrowserTagType__SquadSize = 2,
		EFortActivityBrowserTagType__MaxPlayers = 3,
		EFortActivityBrowserTagType__XP = 4,
		EFortActivityBrowserTagType__PurchaseRequired = 5,
		EFortActivityBrowserTagType__DownloadRequired = 6,
		EFortActivityBrowserTagType__LinkCategory = 7,
	};


	// Enum /Script/FortniteUI.ELeaderboardDisplayType
	enum ELeaderboardDisplayType
	{
		ELeaderboardDisplayType__Default = 0,
		ELeaderboardDisplayType__Extra = 1,
	};


	// Enum /Script/FortniteUI.EHabaneroDisplayState
	enum EHabaneroDisplayState
	{
		EHabaneroDisplayState__Solo = 0,
		EHabaneroDisplayState__Party = 1,
		EHabaneroDisplayState__Hidden = 2,
	};


	// Enum /Script/FortniteUI.EChatMessageOrigin
	enum EChatMessageOrigin
	{
		EChatMessageOrigin__Local = 0,
		EChatMessageOrigin__Remote = 1,
		EChatMessageOrigin__System = 2,
		EChatMessageOrigin__Unknown = 3,
	};


	// Enum /Script/FortniteUI.ECollabIPGatingContext
	enum ECollabIPGatingContext
	{
		ECollabIPGatingContext__Edit = 0,
		ECollabIPGatingContext__CreateButton = 1,
		ECollabIPGatingContext__JoinProgramButton = 2,
		ECollabIPGatingContext__ReviewTermsButton = 3,
		ECollabIPGatingContext__ProgramDetailsButton = 4,
		ECollabIPGatingContext__NameIslandDialog = 5,
		ECollabIPGatingContext__Disclaimer = 6,
		ECollabIPGatingContext__Icon = 7,
		ECollabIPGatingContext__BrandAndICPDialog = 8,
		ECollabIPGatingContext__BrandOnlyDialog = 9,
	};


	// Enum /Script/FortniteUI.ECollabIPGatingStatus
	enum ECollabIPGatingStatus
	{
		ECollabIPGatingStatus__Pending = 0,
		ECollabIPGatingStatus__None = 2,
		ECollabIPGatingStatus__ICP = 4,
		ECollabIPGatingStatus__IP = 8,
		ECollabIPGatingStatus__ICP_and_IP = C,
		ECollabIPGatingStatus__LIME = 10,
	};


	// Enum /Script/FortniteUI.ECollabIPGatingType
	enum ECollabIPGatingType
	{
		ECollabIPGatingType__None = 0,
		ECollabIPGatingType__ICP_and_IP = 1,
		ECollabIPGatingType__Lime = 2,
	};


	// Enum /Script/FortniteUI.ECenterPopupMessageStateEnum
	enum ECenterPopupMessageStateEnum
	{
		ECenterPopupMessageStateEnum__NotVisible = 0,
		ECenterPopupMessageStateEnum__WaitingForOutpostOwner = 1,
	};


	// Enum /Script/FortniteUI.EContextPositionPlatform
	enum EContextPositionPlatform
	{
		EContextPositionPlatform__NonMobile = 0,
		EContextPositionPlatform__Mobile = 1,
	};


	// Enum /Script/FortniteUI.EFortKeybindForcedHoldStatus
	enum EFortKeybindForcedHoldStatus
	{
		EFortKeybindForcedHoldStatus__NoForcedHold = 0,
		EFortKeybindForcedHoldStatus__ForcedHold = 1,
		EFortKeybindForcedHoldStatus__NeverShowHold = 2,
	};


	// Enum /Script/FortniteUI.EFortLegacySlateWidget
	enum EFortLegacySlateWidget
	{
		EFortLegacySlateWidget__None = 0,
		EFortLegacySlateWidget__Minimap = 1,
	};


	// Enum /Script/FortniteUI.EFortModifiedStatus
	enum EFortModifiedStatus
	{
		EFortModifiedStatus__IsDefault = 0,
		EFortModifiedStatus__IsModified = 1,
		EFortModifiedStatus__Unsupported = 2,
	};


	// Enum /Script/FortniteUI.EModalContainerSlot
	enum EModalContainerSlot
	{
		EModalContainerSlot__Top = 0,
		EModalContainerSlot__Middle = 1,
		EModalContainerSlot__Bottom = 2,
		EModalContainerSlot__Background = 3,
		EModalContainerSlot__Max = 4,
	};


	// Enum /Script/FortniteUI.EPinGrantState
	enum EPinGrantState
	{
		EPinGrantState__Initial = 0,
		EPinGrantState__Error = 1,
		EPinGrantState__Downloading = 2,
		EPinGrantState__Granted = 3,
	};


	// Enum /Script/FortniteUI.ERedeemCodeFailureReason
	enum ERedeemCodeFailureReason
	{
		ERedeemCodeFailureReason__InvalidCode = 0,
		ERedeemCodeFailureReason__CodeAlreadyUsed = 1,
		ERedeemCodeFailureReason__AlreadyHasAccess = 2,
		ERedeemCodeFailureReason__FailedToGetItem = 3,
		ERedeemCodeFailureReason__Unknown = 4,
	};


	// Enum /Script/FortniteUI.EFortRewardItemType
	enum EFortRewardItemType
	{
		EFortRewardItemType__RewardedBadges = 0,
		EFortRewardItemType__MissedBadges = 1,
		EFortRewardItemType__RewardedItems = 2,
		EFortRewardItemType__RewardedAccountItems = 3,
	};


	// Enum /Script/FortniteUI.EFortTouchControlRegion
	enum EFortTouchControlRegion
	{
		EFortTouchControlRegion__MovePlayer = 0,
		EFortTouchControlRegion__RotateCamera = 1,
		EFortTouchControlRegion__NoRegion = 2,
		EFortTouchControlRegion__COUNT = 3,
	};


	// Enum /Script/FortniteUI.EFortControlType
	enum EFortControlType
	{
		EFortControlType__None = 0,
		EFortControlType__CameraAndMovement = 1,
		EFortControlType__Picking = 2,
		EFortControlType__COUNT = 3,
	};


	// Enum /Script/FortniteUI.ETouchState
	enum ETouchState
	{
		ETouchState__None = 0,
		ETouchState__WaitingForStart = 1,
		ETouchState__Started = 2,
		ETouchState__Active = 3,
		ETouchState__COUNT = 4,
	};


	// Enum /Script/FortniteUI.EFortNamedBundle
	enum EFortNamedBundle
	{
		EFortNamedBundle__Menu = 0,
		EFortNamedBundle__MenuCampaign = 1,
		EFortNamedBundle__MenuAthena = 2,
		EFortNamedBundle__Zone = 3,
		EFortNamedBundle__ZoneCampaign = 4,
		EFortNamedBundle__ZoneAthena = 5,
		EFortNamedBundle__Client = 6,
		EFortNamedBundle__ClientCampaign = 7,
		EFortNamedBundle__ClientAthena = 8,
	};


	// Enum /Script/FortniteUI.EFortUINavigationOp
	enum EFortUINavigationOp
	{
		EFortUINavigationOp__PopContentStack = 0,
		EFortUINavigationOp__FeatureSwitch = 1,
		EFortUINavigationOp__NavigateToSkillTree = 2,
		EFortUINavigationOp__NavigateToSquadSlot = 3,
		EFortUINavigationOp__NavigateToQuest = 4,
		EFortUINavigationOp__NavigateToItemManagement = 5,
		EFortUINavigationOp__NavigateToExpeditions = 6,
		EFortUINavigationOp__NavigateToCollectionBook = 7,
		EFortUINavigationOp__None = 8,
	};


	// Enum /Script/FortniteUI.EForcedIntroTextDisplayState
	enum EForcedIntroTextDisplayState
	{
		EForcedIntroTextDisplayState__Initialized = 0,
		EForcedIntroTextDisplayState__WaitingForPlaylistPlugin = 1,
		EForcedIntroTextDisplayState__WaitingForMatchmakingStartTime = 2,
		EForcedIntroTextDisplayState__InitialDelay = 3,
		EForcedIntroTextDisplayState__Matchmaking = 4,
		EForcedIntroTextDisplayState__Success = 5,
		EForcedIntroTextDisplayState__Failure = 6,
	};


	// Enum /Script/FortniteUI.EFortAthenaRewardState
	enum EFortAthenaRewardState
	{
		EFortAthenaRewardState__LevelAchieved = 0,
		EFortAthenaRewardState__Claimed = 1,
		EFortAthenaRewardState__ForceLocked = 2,
		EFortAthenaRewardState__Owned = 3,
		EFortAthenaRewardState__Max_None = 4,
	};


	// Enum /Script/FortniteUI.EFortFortMobileShareButtonOS
	enum EFortFortMobileShareButtonOS
	{
		EFortFortMobileShareButtonOS__Android = 0,
		EFortFortMobileShareButtonOS__iOS = 1,
	};


	// Enum /Script/FortniteUI.ECosmeticCompatibleMode
	enum ECosmeticCompatibleMode
	{
		ECosmeticCompatibleMode__BattleRoyale = 0,
		ECosmeticCompatibleMode__Juno = 1,
		ECosmeticCompatibleMode__DelMar = 2,
		ECosmeticCompatibleMode__Sparks = 3,
	};


	// Enum /Script/FortniteUI.ESceneTransitionType
	enum ESceneTransitionType
	{
		ESceneTransitionType__NoTransition = 0,
		ESceneTransitionType__Clockwise = 1,
		ESceneTransitionType__CounterClockwise = 2,
	};


	// Enum /Script/FortniteUI.EShareButtonType
	enum EShareButtonType
	{
		EShareButtonType__IOS = 0,
		EShareButtonType__Android = 1,
		EShareButtonType__Generic = 2,
	};


	// Enum /Script/FortniteUI.EFortSidebarButtonType
	enum EFortSidebarButtonType
	{
		EFortSidebarButtonType__PartyUp = 0,
		EFortSidebarButtonType__FindFriends = 1,
		EFortSidebarButtonType__VoiceChat = 2,
		EFortSidebarButtonType__Settings = 3,
		EFortSidebarButtonType__More = 4,
		EFortSidebarButtonType__YourProfile = 5,
		EFortSidebarButtonType__Tags = 6,
		EFortSidebarButtonType__Exit = 7,
	};


	// Enum /Script/FortniteUI.ESidebarExitActions
	enum ESidebarExitActions
	{
		ESidebarExitActions__None = 0,
		ESidebarExitActions__LeaveExperience = 1,
		ESidebarExitActions__AthenaLeaveAction = 2,
		ESidebarExitActions__LogOut = 3,
		ESidebarExitActions__QuitGame = 4,
	};


	// Enum /Script/FortniteUI.ESidebarExitConfirmationNavBehavior
	enum ESidebarExitConfirmationNavBehavior
	{
		ESidebarExitConfirmationNavBehavior__None = 0,
		ESidebarExitConfirmationNavBehavior__ButtonYesFocus = 1,
		ESidebarExitConfirmationNavBehavior__ButtonYesSelection = 2,
		ESidebarExitConfirmationNavBehavior__ButtonYesFocusSelection = 3,
		ESidebarExitConfirmationNavBehavior__ButtonNoFocus = 4,
		ESidebarExitConfirmationNavBehavior__ButtonNoSelection = 5,
		ESidebarExitConfirmationNavBehavior__ButtonNoFocusSelection = 6,
	};


	// Enum /Script/FortniteUI.ESocialTutorialType
	enum ESocialTutorialType
	{
		ESocialTutorialType__None = 0,
		ESocialTutorialType__TagsEditor = 1,
		ESocialTutorialType__LookingForParty = 2,
		ESocialTutorialType__LikeIsland = 3,
		ESocialTutorialType__RebootRallyUsers = 4,
		ESocialTutorialType__KWSSidebarSupervisedSettings = 5,
		ESocialTutorialType__KWSVoiceChannelPanelSupervisedSettings = 6,
		ESocialTutorialType__VoiceReport = 7,
		ESocialTutorialType__ContentRatingSettings = 8,
		ESocialTutorialType__ContentUnlockedSettings = 9,
		ESocialTutorialType__CreativeContentSettings = A,
		ESocialTutorialType__FollowThisCreatorInFortnite = B,
		ESocialTutorialType__FollowedYourFirstCreator = C,
		ESocialTutorialType__SearchForCreators = D,
		ESocialTutorialType__ShareActivitySetting = E,
	};


	// Enum /Script/FortniteUI.EFortSidebarSocialInteractionArrow
	enum EFortSidebarSocialInteractionArrow
	{
		EFortSidebarSocialInteractionArrow__None = 0,
		EFortSidebarSocialInteractionArrow__Up = 1,
		EFortSidebarSocialInteractionArrow__Down = 2,
		EFortSidebarSocialInteractionArrow__Left = 3,
		EFortSidebarSocialInteractionArrow__Right = 4,
	};


	// Enum /Script/FortniteUI.ESocialImportPanelType
	enum ESocialImportPanelType
	{
		ESocialImportPanelType__Athena = 0,
		ESocialImportPanelType__SaveTheWorld = 1,
	};


	// Enum /Script/FortniteUI.EFriendLinkShareButtonType
	enum EFriendLinkShareButtonType
	{
		EFriendLinkShareButtonType__IOS = 0,
		EFriendLinkShareButtonType__Android = 1,
		EFriendLinkShareButtonType__Generic = 2,
	};


	// Enum /Script/FortniteUI.ESidebarState
	enum ESidebarState
	{
		ESidebarState__TabButtons = 0,
		ESidebarState__UserListPanels = 1,
		ESidebarState__ExitPopup = 2,
	};


	// Enum /Script/FortniteUI.EListHeaderType
	enum EListHeaderType
	{
		EListHeaderType__TeamMember = 0,
		EListHeaderType__PartyMember = 1,
		EListHeaderType__JoinableParty = 2,
		EListHeaderType__PlatformOnlineFriend = 3,
		EListHeaderType__McpOnlineFriend = 4,
		EListHeaderType__OfflineFriend = 5,
		EListHeaderType__Blocked = 6,
		EListHeaderType__FriendInvite = 7,
		EListHeaderType__SuggestedFriend = 8,
		EListHeaderType__RecentPlayer = 9,
		EListHeaderType__SearchResults = A,
		EListHeaderType__JoinRequests = B,
		EListHeaderType__LfgFilter = C,
		EListHeaderType__LfgPlayers = D,
		EListHeaderType__LfgInvites = E,
		EListHeaderType__RebootPlayers = F,
		EListHeaderType__GameVoice = 10,
		EListHeaderType__PartyVoice = 11,
		EListHeaderType__PlatformVoice = 12,
		EListHeaderType__AwayFriend = 13,
		EListHeaderType__Hidden = 14,
		EListHeaderType__Invalid = 15,
	};


	// Enum /Script/FortniteUI.EFortSocialUserEntryType
	enum EFortSocialUserEntryType
	{
		EFortSocialUserEntryType__None = 0,
		EFortSocialUserEntryType__PartyMember = 1,
		EFortSocialUserEntryType__TeamMember = 2,
		EFortSocialUserEntryType__VoiceChatMember = 3,
		EFortSocialUserEntryType__UserSearchResult = 4,
		EFortSocialUserEntryType__SuggestedFriend = 5,
		EFortSocialUserEntryType__JoinRequest = 6,
		EFortSocialUserEntryType__RecentPlayer = 7,
		EFortSocialUserEntryType__SocialUser = 8,
		EFortSocialUserEntryType__FriendInvite = 9,
		EFortSocialUserEntryType__JoinableParty = A,
	};


	// Enum /Script/FortniteUI.ESocialTagListHighlightPolicy
	enum ESocialTagListHighlightPolicy
	{
		ESocialTagListHighlightPolicy__All = 0,
		ESocialTagListHighlightPolicy__TagList = 1,
		ESocialTagListHighlightPolicy__LocalUser = 2,
		ESocialTagListHighlightPolicy__FullColor = 3,
	};


	// Enum /Script/FortniteUI.ESocialTagCategory
	enum ESocialTagCategory
	{
		ESocialTagCategory__GameModes = 0,
		ESocialTagCategory__Mood = 1,
		ESocialTagCategory__Utility = 2,
		ESocialTagCategory__Competitive = 3,
		ESocialTagCategory__Other = 4,
	};


	// Enum /Script/FortniteUI.EFortLoginInteraction
	enum EFortLoginInteraction
	{
		EFortLoginInteraction__Begin = 0,
		EFortLoginInteraction__StartLogin = 1,
		EFortLoginInteraction__CredentialSelect = 2,
		EFortLoginInteraction__NamePassword = 3,
		EFortLoginInteraction__AccountNotFound = 4,
		EFortLoginInteraction__CreateDisplayName = 5,
		EFortLoginInteraction__MultiFactorAuth = 6,
		EFortLoginInteraction__EULA = 7,
		EFortLoginInteraction__AccountLink = 8,
		EFortLoginInteraction__AccountPinLink = 9,
		EFortLoginInteraction__WebLogin = A,
		EFortLoginInteraction__WebAccountCreation = B,
		EFortLoginInteraction__AgeGateHeadless = C,
		EFortLoginInteraction__CorrectiveAction = D,
	};


	// Enum /Script/FortniteUI.EParentalControlsViewState
	enum EParentalControlsViewState
	{
		EParentalControlsViewState__Invalid = 0,
		EParentalControlsViewState__EnterPin = 1,
		EParentalControlsViewState__AskToEnableControls = 2,
		EParentalControlsViewState__VerifyEmail = 3,
		EParentalControlsViewState__SetupEmail = 4,
		EParentalControlsViewState__SetupPin = 5,
		EParentalControlsViewState__DisplaySettings = 6,
		EParentalControlsViewState__DisableParentalControls = 7,
		EParentalControlsViewState__AskToReEnable = 8,
		EParentalControlsViewState__ReEnabling = 9,
		EParentalControlsViewState__CabinModeEmailChange = A,
	};


	// Enum /Script/FortniteUI.ESpatialCustomizationRoomState
	enum ESpatialCustomizationRoomState
	{
		ESpatialCustomizationRoomState__None = 0,
		ESpatialCustomizationRoomState__CategorySelection = 1,
		ESpatialCustomizationRoomState__CustomizationSelection = 2,
	};


	// Enum /Script/FortniteUI.ESpatialCustomizationCategoryState
	enum ESpatialCustomizationCategoryState
	{
		ESpatialCustomizationCategoryState__LockedByBattlePass = 0,
		ESpatialCustomizationCategoryState__LockedByChallenge = 1,
		ESpatialCustomizationCategoryState__LockedByChallengeCompletion = 2,
		ESpatialCustomizationCategoryState__UnlockAvailable = 3,
		ESpatialCustomizationCategoryState__UnlockUsed = 4,
		ESpatialCustomizationCategoryState__Max_NONE = 5,
	};


	// Enum /Script/FortniteUI.EFortTopBarTabButtonGroup
	enum EFortTopBarTabButtonGroup
	{
		EFortTopBarTabButtonGroup__Discover = 0,
		EFortTopBarTabButtonGroup__Core = 1,
		EFortTopBarTabButtonGroup__Game = 2,
		EFortTopBarTabButtonGroup__PinnedRight = 3,
	};


	// Enum /Script/FortniteUI.ETooltipAlignment
	enum ETooltipAlignment
	{
		ETooltipAlignment__Up = 0,
		ETooltipAlignment__Down = 1,
		ETooltipAlignment__Left = 2,
		ETooltipAlignment__Right = 3,
	};


	// Enum /Script/FortniteUI.EFortNotificationEntryCompletionStatus
	enum EFortNotificationEntryCompletionStatus
	{
		EFortNotificationEntryCompletionStatus__New = 0,
		EFortNotificationEntryCompletionStatus__Active = 1,
		EFortNotificationEntryCompletionStatus__Completed = 2,
	};


	// Enum /Script/FortniteUI.ESwipeLenghtUnit
	enum ESwipeLenghtUnit
	{
		ESwipeLenghtUnit__Pixels = 0,
		ESwipeLenghtUnit__Inches = 1,
	};


	// Enum /Script/FortniteUI.EItemContextAction
	enum EItemContextAction
	{
		EItemContextAction__Equip = 0,
		EItemContextAction__GoToBattlePassRewards = 1,
		EItemContextAction__GoToBattlePassCustomization = 2,
		EItemContextAction__GoToSpecialCollection = 3,
		EItemContextAction__Count = 4,
	};


	// Enum /Script/FortniteUI.EFortItemCountStyle
	enum EFortItemCountStyle
	{
		EFortItemCountStyle__StackCount = 0,
		EFortItemCountStyle__OverrideCount = 1,
		EFortItemCountStyle__StackCountOverOverride = 2,
	};


	// Enum /Script/FortniteUI.EPresentationMode
	enum EPresentationMode
	{
		EPresentationMode__ItemList = 0,
		EPresentationMode__VariantList = 1,
	};


	// Enum /Script/FortniteUI.ELiveStreamStandaloneBlocked
	enum ELiveStreamStandaloneBlocked
	{
		ELiveStreamStandaloneBlocked__StreamInWorldActive = 0,
	};


	// Enum /Script/FortniteUI.EMatchmakingInputSource
	enum EMatchmakingInputSource
	{
		EMatchmakingInputSource__Local = 0,
		EMatchmakingInputSource__Remote = 1,
		EMatchmakingInputSource__Pool = 2,
	};


	// Enum /Script/FortniteUI.UFortActivatableVideoEvents
	enum UFortActivatableVideoEvents
	{
		UFortActivatableVideoEvents__Finished = 0,
		UFortActivatableVideoEvents__Skipped = 1,
	};


	// Enum /Script/FortniteUI.UFortActivatablePrePostRollStates
	enum UFortActivatablePrePostRollStates
	{
		UFortActivatablePrePostRollStates__None = 0,
		UFortActivatablePrePostRollStates__PreRoll = 1,
		UFortActivatablePrePostRollStates__PreRollComplete = 2,
		UFortActivatablePrePostRollStates__PostRoll = 3,
		UFortActivatablePrePostRollStates__PostRollComplete = 4,
		UFortActivatablePrePostRollStates__BeginningStepOne = 5,
		UFortActivatablePrePostRollStates__BeginningStepTwo = 6,
		UFortActivatablePrePostRollStates__Middle = 7,
		UFortActivatablePrePostRollStates__End = 8,
	};


	// Enum /Script/FortniteUI.UFortActivatableVideoPanelEvents
	enum UFortActivatableVideoPanelEvents
	{
		UFortActivatableVideoPanelEvents__Finished = 0,
		UFortActivatableVideoPanelEvents__Skipped = 1,
	};


	// Enum /Script/FortniteUI.EFortMissionActivationWidgetState
	enum EFortMissionActivationWidgetState
	{
		EFortMissionActivationWidgetState__Default = 0,
		EFortMissionActivationWidgetState__StartObjective = 1,
		EFortMissionActivationWidgetState__IncreaseDifficulty = 2,
		EFortMissionActivationWidgetState__Invalid = 3,
	};


	// Enum /Script/FortniteUI.EFortMtxOfferDisplaySize
	enum EFortMtxOfferDisplaySize
	{
		EFortMtxOfferDisplaySize__Small = 0,
		EFortMtxOfferDisplaySize__Medium = 1,
		EFortMtxOfferDisplaySize__Large = 2,
	};


	// Enum /Script/FortniteUI.EFortItemShopOfferDisplayType
	enum EFortItemShopOfferDisplayType
	{
		EFortItemShopOfferDisplayType__TileGrid = 0,
		EFortItemShopOfferDisplayType__ExpandableList = 1,
		EFortItemShopOfferDisplayType__Billboard = 2,
	};


	// Enum /Script/FortniteUI.EFortItemShopShowIneligibleOffers
	enum EFortItemShopShowIneligibleOffers
	{
		EFortItemShopShowIneligibleOffers__Always = 0,
		EFortItemShopShowIneligibleOffers__OnlyGiftable = 1,
		EFortItemShopShowIneligibleOffers__Never = 2,
	};


	// Enum /Script/FortniteUI.EFortItemShopCMSMaterialParameterType
	enum EFortItemShopCMSMaterialParameterType
	{
		EFortItemShopCMSMaterialParameterType__Invalid = 0,
		EFortItemShopCMSMaterialParameterType__Texture = 1,
		EFortItemShopCMSMaterialParameterType__Scalar = 2,
		EFortItemShopCMSMaterialParameterType__Vector = 3,
	};


	// Enum /Script/FortniteUI.EChannelSpeakerStyle
	enum EChannelSpeakerStyle
	{
		EChannelSpeakerStyle__InGame = 0,
		EChannelSpeakerStyle__InLobby = 1,
		EChannelSpeakerStyle__OutOfClient = 2,
		EChannelSpeakerStyle__Max = 3,
	};


	// Enum /Script/FortniteUI.EPlayerFeedbackSubmitState
	enum EPlayerFeedbackSubmitState
	{
		EPlayerFeedbackSubmitState__Start = 0,
		EPlayerFeedbackSubmitState__Submitting = 1,
		EPlayerFeedbackSubmitState__SubmitFailed = 2,
		EPlayerFeedbackSubmitState__SubmitSucceeded = 3,
	};


	// Enum /Script/FortniteUI.EPlayerFeedback_EpicQAState
	enum EPlayerFeedback_EpicQAState
	{
		EPlayerFeedback_EpicQAState__SignInPage = 0,
		EPlayerFeedback_EpicQAState__SigningInFailed = 1,
		EPlayerFeedback_EpicQAState__SigningIn = 2,
		EPlayerFeedback_EpicQAState__SelectBugComponent = 3,
	};


	// Enum /Script/FortniteUI.EFortPlayerFeedbackFlags
	enum EFortPlayerFeedbackFlags
	{
		EFortPlayerFeedbackFlags__SubscreenFlow_ForceDisplayFreeText = 0,
		EFortPlayerFeedbackFlags__SubscreenFlow_IncludeScreenshotSubscreen = 1,
		EFortPlayerFeedbackFlags__SubscreenFlow_VoiceReportSubmit = 2,
		EFortPlayerFeedbackFlags__SubscreenFlow_OverlandNavigator = 3,
		EFortPlayerFeedbackFlags__DoNotDisplay_SaveTheWorld = 4,
		EFortPlayerFeedbackFlags__DoNotDisplay_Athena = 5,
		EFortPlayerFeedbackFlags__DoNotDisplay_Creative = 6,
		EFortPlayerFeedbackFlags__DoNotDisplay_Juno = 7,
		EFortPlayerFeedbackFlags__Submit_TryDisplayBlockUser = 8,
		EFortPlayerFeedbackFlags__Submit_TryDisplayCommunityRulesURL = 9,
		EFortPlayerFeedbackFlags__Submit_TryDisplayUnfollowCreator = A,
	};


	// Enum /Script/FortniteUI.ESaveProfileForBanners
	enum ESaveProfileForBanners
	{
		ESaveProfileForBanners__SaveTheWorld = 0,
		ESaveProfileForBanners__BattleRoyale = 1,
	};


	// Enum /Script/FortniteUI.EFortRadialControllingStick
	enum EFortRadialControllingStick
	{
		EFortRadialControllingStick__Right = 0,
		EFortRadialControllingStick__Left = 1,
	};


	// Enum /Script/FortniteUI.ECardinalPoint
	enum ECardinalPoint
	{
		ECardinalPoint__E = 0,
		ECardinalPoint__NE = 1,
		ECardinalPoint__N = 2,
		ECardinalPoint__NW = 3,
		ECardinalPoint__W = 4,
		ECardinalPoint__SW = 5,
		ECardinalPoint__S = 6,
		ECardinalPoint__SE = 7,
		ECardinalPoint__None = 8,
	};


	// Enum /Script/FortniteUI.ERadialOrderingMode
	enum ERadialOrderingMode
	{
		ERadialOrderingMode__CounterClockwise = 0,
		ERadialOrderingMode__Clockwise = 1,
		ERadialOrderingMode__Cardinal = 2,
		ERadialOrderingMode__Custom = 3,
	};


	// Enum /Script/FortniteUI.EBattlePassPurchaseButtonLayout
	enum EBattlePassPurchaseButtonLayout
	{
		EBattlePassPurchaseButtonLayout__Normal = 0,
		EBattlePassPurchaseButtonLayout__Bundle = 1,
		EBattlePassPurchaseButtonLayout__Normal_PaysForSelf = 2,
	};


	// Enum /Script/FortniteUI.EBattlePassView
	enum EBattlePassView
	{
		EBattlePassView__None = 0,
		EBattlePassView__LandingPage = 1,
		EBattlePassView__RewardOverview = 2,
		EBattlePassView__ItemDetails = 3,
		EBattlePassView__BulkBuyRewards = 4,
		EBattlePassView__CharacterCustomizer = 5,
		EBattlePassView__BonusRewards = 6,
		EBattlePassView__Weekly = 7,
		EBattlePassView__Quests = 8,
		EBattlePassView__ItemDetailsSecondLayer = 9,
	};


	// Enum /Script/FortniteUI.EBattlePassFeatures
	enum EBattlePassFeatures
	{
		EBattlePassFeatures__None = 0,
		EBattlePassFeatures__BuyBattlePass = 1,
		EBattlePassFeatures__GiftBattlePass = 2,
		EBattlePassFeatures__BuySubscription = 3,
		EBattlePassFeatures__ViewDetails = 4,
		EBattlePassFeatures__WatchVideo = 5,
		EBattlePassFeatures__ShowAbout = 6,
		EBattlePassFeatures__PurchaseResources = 7,
	};


	// Enum /Script/FortniteUI.EBattlePassCurrencyType
	enum EBattlePassCurrencyType
	{
		EBattlePassCurrencyType__BattleStar = 0,
		EBattlePassCurrencyType__CustomSkin = 1,
		EBattlePassCurrencyType__TOTAL_CURRENCIES = 2,
	};


	// Enum /Script/FortniteUI.EBattlePassRewardPrerequisiteType
	enum EBattlePassRewardPrerequisiteType
	{
		EBattlePassRewardPrerequisiteType__RewardCount = 0,
		EBattlePassRewardPrerequisiteType__RequiredItems = 1,
		EBattlePassRewardPrerequisiteType__Quest = 2,
		EBattlePassRewardPrerequisiteType__NeededLevels = 3,
		EBattlePassRewardPrerequisiteType__NONE = 4,
	};


	// Enum /Script/FortniteUI.ERewardPageType
	enum ERewardPageType
	{
		ERewardPageType__Reward = 0,
		ERewardPageType__Quest = 1,
		ERewardPageType__Bonus = 2,
		ERewardPageType__Customization = 3,
		ERewardPageType__Weekly = 4,
	};


	// Enum /Script/FortniteUI.EFortSettingChangeReason
	enum EFortSettingChangeReason
	{
		EFortSettingChangeReason__Change = 0,
		EFortSettingChangeReason__DependencyChanged = 1,
		EFortSettingChangeReason__ResetToDefault = 2,
		EFortSettingChangeReason__RestoreToInitial = 3,
		EFortSettingChangeReason__Refresh = 4,
	};


	// Enum /Script/FortniteUI.EFormatStyle
	enum EFormatStyle
	{
		EFormatStyle__Percentage = 0,
		EFormatStyle__Raw = 1,
	};


	// Enum /Script/FortniteUI.EFortDateTimeStyle
	enum EFortDateTimeStyle
	{
		EFortDateTimeStyle__Default = 0,
		EFortDateTimeStyle__Short = 1,
		EFortDateTimeStyle__Medium = 2,
		EFortDateTimeStyle__Long = 3,
		EFortDateTimeStyle__Full = 4,
	};


	// Enum /Script/FortniteUI.EFortShowdownMatchType
	enum EFortShowdownMatchType
	{
		EFortShowdownMatchType__Unknown = 0,
		EFortShowdownMatchType__Solo = 1,
		EFortShowdownMatchType__Duos = 2,
		EFortShowdownMatchType__Squads = 3,
	};


	// Enum /Script/FortniteUI.EFortShowdownEventState
	enum EFortShowdownEventState
	{
		EFortShowdownEventState__Unknown = 0,
		EFortShowdownEventState__FutureTBD = 1,
		EFortShowdownEventState__FutureScheduled = 2,
		EFortShowdownEventState__FutureNext = 3,
		EFortShowdownEventState__Live = 4,
		EFortShowdownEventState__LiveParticipating = 5,
		EFortShowdownEventState__LiveNotParticipating = 6,
		EFortShowdownEventState__Completed = 7,
		EFortShowdownEventState__CompletedParticipated = 8,
		EFortShowdownEventState__CompletedNotPartipated = 9,
		EFortShowdownEventState__Cancelled = A,
	};


	// Enum /Script/FortniteUI.EFortEventWindowEligibility
	enum EFortEventWindowEligibility
	{
		EFortEventWindowEligibility__Unknown = 0,
		EFortEventWindowEligibility__Public = 1,
		EFortEventWindowEligibility__Private = 2,
		EFortEventWindowEligibility__Locked = 3,
	};


	// Enum /Script/FortniteUI.EFortShowdownPinState
	enum EFortShowdownPinState
	{
		EFortShowdownPinState__None = 0,
		EFortShowdownPinState__Locked = 1,
		EFortShowdownPinState__Unlocked = 2,
	};


	// Enum /Script/FortniteUI.EFortAlterationWidgetState
	enum EFortAlterationWidgetState
	{
		EFortAlterationWidgetState__Normal = 0,
		EFortAlterationWidgetState__Upgrade = 1,
		EFortAlterationWidgetState__Evolution = 2,
	};


	// Enum /Script/FortniteUI.EFortDefenderSlotType
	enum EFortDefenderSlotType
	{
		EFortDefenderSlotType__Invalid = 0,
		EFortDefenderSlotType__Defender = 1,
		EFortDefenderSlotType__Weapon = 2,
	};


	// Enum /Script/FortniteUI.ESubgameLoadFromCMS
	enum ESubgameLoadFromCMS
	{
		ESubgameLoadFromCMS__DoNotLoadFromCMS = 0,
		ESubgameLoadFromCMS__LoadImageFromCMS = 1,
	};


	// Enum /Script/FortniteUI.ESubgameTileType
	enum ESubgameTileType
	{
		ESubgameTileType__Campaign = 0,
		ESubgameTileType__Athena = 1,
		ESubgameTileType__Creative = 2,
	};


	// Enum /Script/FortniteUI.EProgressiveSetProgress
	enum EProgressiveSetProgress
	{
		EProgressiveSetProgress__NoProgress = 0,
		EProgressiveSetProgress__PartialProgress = 1,
		EProgressiveSetProgress__Completed = 2,
		EProgressiveSetProgress__Expired = 3,
	};


	// Enum /Script/FortniteUI.ESubscriptionCancellability
	enum ESubscriptionCancellability
	{
		ESubscriptionCancellability__NotCancellable = 0,
		ESubscriptionCancellability__CancellabeOnPlatform = 1,
		ESubscriptionCancellability__CancellableAnywhere = 2,
	};


	// Enum /Script/FortniteUI.EFortMemberConnectionState
	enum EFortMemberConnectionState
	{
		EFortMemberConnectionState__Open = 0,
		EFortMemberConnectionState__Connecting = 1,
		EFortMemberConnectionState__Connected = 2,
		EFortMemberConnectionState__Invalid = 3,
	};


	// Enum /Script/FortniteUI.ETournmentPosterViolatorState
	enum ETournmentPosterViolatorState
	{
		ETournmentPosterViolatorState__Hidden = 0,
		ETournmentPosterViolatorState__Live = 1,
		ETournmentPosterViolatorState__Countdown = 2,
		ETournmentPosterViolatorState__Info = 3,
	};


	// Enum /Script/FortniteUI.EFortAthenaTutorialStep
	enum EFortAthenaTutorialStep
	{
		EFortAthenaTutorialStep__Look = 0,
		EFortAthenaTutorialStep__Move = 1,
		EFortAthenaTutorialStep__Harvest = 2,
		EFortAthenaTutorialStep__Clamber = 3,
		EFortAthenaTutorialStep__Pickup = 4,
		EFortAthenaTutorialStep__Shoot = 5,
		EFortAthenaTutorialStep__Ambush = 6,
		EFortAthenaTutorialStep__Heal = 7,
		EFortAthenaTutorialStep__Build = 8,
		EFortAthenaTutorialStep__Chest = 9,
		EFortAthenaTutorialStep__Scoping = A,
		EFortAthenaTutorialStep__Completed = B,
		EFortAthenaTutorialStep__Count = C,
	};


	// Enum /Script/FortniteUI.EFortAthenaTutorialSubstep
	enum EFortAthenaTutorialSubstep
	{
		EFortAthenaTutorialSubstep__ScreenSwipeToLook = 0,
		EFortAthenaTutorialSubstep__ScreenFindMarker = 1,
		EFortAthenaTutorialSubstep__ScreenUseLeftStick = 2,
		EFortAthenaTutorialSubstep__ScreenMoveToBuilding = 3,
		EFortAthenaTutorialSubstep__ScreenJump = 4,
		EFortAthenaTutorialSubstep__ScreenCrouch = 5,
		EFortAthenaTutorialSubstep__ScreenReachMarker = 6,
		EFortAthenaTutorialSubstep__ScreenUsePickaxe = 7,
		EFortAthenaTutorialSubstep__ScreenReachClamber = 8,
		EFortAthenaTutorialSubstep__ScreenClamber = 9,
		EFortAthenaTutorialSubstep__ScreenReachPickUp = A,
		EFortAthenaTutorialSubstep__ScreenPickUpItems = B,
		EFortAthenaTutorialSubstep__ScreenEquipItem = C,
		EFortAthenaTutorialSubstep__ScreenShootTargets = D,
		EFortAthenaTutorialSubstep__ScreenReload = E,
		EFortAthenaTutorialSubstep__ScreenReachLocation = F,
		EFortAthenaTutorialSubstep__ScreenDefendYourself = 10,
		EFortAthenaTutorialSubstep__ScreenHealthAlert = 11,
		EFortAthenaTutorialSubstep__ScreenDestroyEnemies = 12,
		EFortAthenaTutorialSubstep__ScreenCollectLoot = 13,
		EFortAthenaTutorialSubstep__ScreenUseMedkit = 14,
		EFortAthenaTutorialSubstep__ScreenUseShield = 15,
		EFortAthenaTutorialSubstep__ScreenShieldInfo = 16,
		EFortAthenaTutorialSubstep__ScreenLookForChest = 17,
		EFortAthenaTutorialSubstep__ScreenChestFound = 18,
		EFortAthenaTutorialSubstep__ScreenSelectBuildMode = 19,
		EFortAthenaTutorialSubstep__ScreenShowMaterials = 1A,
		EFortAthenaTutorialSubstep__ScreenShowBuildPieces = 1B,
		EFortAthenaTutorialSubstep__ScreenSelectStairs = 1C,
		EFortAthenaTutorialSubstep__ScreenPlaceStairs = 1D,
		EFortAthenaTutorialSubstep__ScreenReachChest = 1E,
		EFortAthenaTutorialSubstep__ScreenExitBuildMode = 1F,
		EFortAthenaTutorialSubstep__ScreenLootChest = 20,
		EFortAthenaTutorialSubstep__ScreenCollectLootChest = 21,
		EFortAthenaTutorialSubstep__ScreenEquipRifle = 22,
		EFortAthenaTutorialSubstep__ScreenUseScope = 23,
		EFortAthenaTutorialSubstep__ScreenShootTargetsScoping = 24,
		EFortAthenaTutorialSubstep__ScreenCompleted = 25,
		EFortAthenaTutorialSubstep__HealingInterrupted = 26,
		EFortAthenaTutorialSubstep__Count = 27,
	};


	// Enum /Script/FortniteUI.EFortAthenaTutorialScreenExtraWidget
	enum EFortAthenaTutorialScreenExtraWidget
	{
		EFortAthenaTutorialScreenExtraWidget__None = 0,
		EFortAthenaTutorialScreenExtraWidget__DragToTurn = 1,
		EFortAthenaTutorialScreenExtraWidget__Completed = 2,
		EFortAthenaTutorialScreenExtraWidget__Count = 3,
	};


	// Enum /Script/FortniteUI.ELetoDisplayMode
	enum ELetoDisplayMode
	{
		ELetoDisplayMode__PrimaryOnly = 0,
		ELetoDisplayMode__SingleToggle = 1,
		ELetoDisplayMode__Simultaneous = 2,
	};


	// Enum /Script/FortniteUI.EYieldReason
	enum EYieldReason
	{
		EYieldReason__PlayerLoggedIn = 0,
		EYieldReason__PlayerCanceledLogin = 1,
		EYieldReason__PlayerYielded = 2,
		EYieldReason__ControllerDisconnect = 3,
	};


	// Enum /Script/FortniteUI.EFortLoginDisplay
	enum EFortLoginDisplay
	{
		EFortLoginDisplay__LoginStatus = 0,
		EFortLoginDisplay__SplashScreen = 1,
		EFortLoginDisplay__LoginInteractions = 2,
		EFortLoginDisplay__SafeZoneEditor = 3,
		EFortLoginDisplay__HealthWarning = 4,
		EFortLoginDisplay__QualityPresetSelection = 5,
	};


	// Enum /Script/FortniteUI.EFortItemShopScrollDirection
	enum EFortItemShopScrollDirection
	{
		EFortItemShopScrollDirection__NoScroll = 0,
		EFortItemShopScrollDirection__ScrolledDown = 1,
		EFortItemShopScrollDirection__ScrolledUp = 2,
	};


	// Enum /Script/FortniteUI.EItemAccessRestriction
	enum EItemAccessRestriction
	{
		EItemAccessRestriction__UnsatisfiedExclusiveItem = 0,
		EItemAccessRestriction__LockedEmote = 1,
		EItemAccessRestriction__CosmeticRestrictions = 2,
		EItemAccessRestriction__AllArchived = 3,
		EItemAccessRestriction__RatingGated = 4,
		EItemAccessRestriction__UnsupportedProduct = 5,
		EItemAccessRestriction__AdditionalInfo = 6,
		EItemAccessRestriction__AdditionalInfoWarning = 7,
		EItemAccessRestriction__Unknown = 8,
	};


	// Enum /Script/FortniteUI.EFortSocialPlatformTagDisplayRule
	enum EFortSocialPlatformTagDisplayRule
	{
		EFortSocialPlatformTagDisplayRule__Never = 0,
		EFortSocialPlatformTagDisplayRule__OnlyIfDifferent = 1,
		EFortSocialPlatformTagDisplayRule__Always = 2,
	};


	// Enum /Script/FortniteUI.EDynamicEntryPatternDirection
	enum EDynamicEntryPatternDirection
	{
		EDynamicEntryPatternDirection__FirstToLast = 0,
		EDynamicEntryPatternDirection__LastToFirst = 1,
	};


	// Enum /Script/FortniteUI.ETutorialButtonInteractionType
	enum ETutorialButtonInteractionType
	{
		ETutorialButtonInteractionType__Click = 0,
		ETutorialButtonInteractionType__Press = 1,
	};


	// Enum /Script/FortniteUI.EHighlightType
	enum EHighlightType
	{
		EHighlightType__ESquareHighlight = 0,
		EHighlightType__ECircleHighlight_Big = 1,
		EHighlightType__ECircleHighlight_Small = 2,
	};

}
