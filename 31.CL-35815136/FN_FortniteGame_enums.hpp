#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: FortniteGame
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Enum /Script/FortniteGame.EFortMutatorOverridePriority
	enum EFortMutatorOverridePriority
	{
		EFortMutatorOverridePriority__None = 0,
		EFortMutatorOverridePriority__Low = 1,
		EFortMutatorOverridePriority__Medium = 2,
		EFortMutatorOverridePriority__High = 3,
	};


	// Enum /Script/FortniteGame.EAthenaGameMessageDataFlags
	enum EAthenaGameMessageDataFlags
	{
		EAthenaGameMessageDataFlags__None = 0,
		EAthenaGameMessageDataFlags__DisableCreativeExclamation = 1,
	};


	// Enum /Script/FortniteGame.EAthenaGameMsgType
	enum EAthenaGameMsgType
	{
		EAthenaGameMsgType__None = 0,
		EAthenaGameMsgType__DefaultIntro = 1,
		EAthenaGameMsgType__DefaultMessage = 2,
		EAthenaGameMsgType__DefaultCriticalMessage = 3,
		EAthenaGameMsgType__CommIntro = 4,
		EAthenaGameMsgType__CommMessage = 5,
		EAthenaGameMsgType__CommCriticalMessage = 6,
		EAthenaGameMsgType__CornerIntro = 7,
		EAthenaGameMsgType__CornerMessage = 8,
		EAthenaGameMsgType__CornerCriticalMessage = 9,
		EAthenaGameMsgType__RespawnTurningOffWarning = A,
		EAthenaGameMsgType__RespawnOffWarning = B,
		EAthenaGameMsgType__CenterMessage = C,
		EAthenaGameMsgType__CenterImportantMessage = D,
		EAthenaGameMsgType__CenterCriticalMessage = E,
	};


	// Enum /Script/FortniteGame.EUraniumRoundPhase
	enum EUraniumRoundPhase
	{
		EUraniumRoundPhase__None = 0,
		EUraniumRoundPhase__EndOfRoundStart = 1,
		EUraniumRoundPhase__ShowRoundEnd = 2,
		EUraniumRoundPhase__HideRoundEnd = 3,
		EUraniumRoundPhase__FadeOut = 4,
		EUraniumRoundPhase__SetupForNextRound = 5,
		EUraniumRoundPhase__ShowRoundIntro = 6,
		EUraniumRoundPhase__ShowPOICamera = 7,
		EUraniumRoundPhase__PerkSelect = 8,
		EUraniumRoundPhase__RoundActive = 9,
		EUraniumRoundPhase__FadeIn = A,
		EUraniumRoundPhase__EndOfRoundFinish = B,
		EUraniumRoundPhase__FadeBeforeReleasePlayerIntoGameplay = C,
		EUraniumRoundPhase__ReleasePlayersIntoGameplay = D,
		EUraniumRoundPhase__EndGame = E,
	};


	// Enum /Script/FortniteGame.EUraniumEventId
	enum EUraniumEventId
	{
		EUraniumEventId__Intro = 0,
		EUraniumEventId__CartBecomesPushable = 1,
		EUraniumEventId__CheckPointReached = 2,
		EUraniumEventId__NearCheckPoint = 3,
		EUraniumEventId__NearFinalCheckPoint = 4,
		EUraniumEventId__TimeIsLow = 5,
		EUraniumEventId__TimeIsExtraLow = 6,
		EUraniumEventId__OvertimeStarted = 7,
		EUraniumEventId__RoundEnd_PushersWin = 8,
		EUraniumEventId__RoundEnd_DefendersWin = 9,
		EUraniumEventId__RoundStart = A,
		EUraniumEventId__GameEnded_AllRoundsPlayed = B,
		EUraniumEventId__GameEndedEarly_BlowOut = C,
		EUraniumEventId__GameEndedEarly_OutNumbered = D,
	};


	// Enum /Script/FortniteGame.EUraniumCartMovementRuleOnNewRound
	enum EUraniumCartMovementRuleOnNewRound
	{
		EUraniumCartMovementRuleOnNewRound__NoChange = 0,
		EUraniumCartMovementRuleOnNewRound__MoveToNextCheckpoint = 1,
		EUraniumCartMovementRuleOnNewRound__MoveToStartOfNewSpline = 2,
		EUraniumCartMovementRuleOnNewRound__MoveToRandomCheckPointOfNewSpline = 3,
		EUraniumCartMovementRuleOnNewRound__MoveToNextCheckPointOfNewSpline = 4,
	};


	// Enum /Script/FortniteGame.EUraniumRoundEndCondition
	enum EUraniumRoundEndCondition
	{
		EUraniumRoundEndCondition__RanOutOfTime_Or_CheckpointReached = 0,
		EUraniumRoundEndCondition__RanOutOfTime_Or_LastCheckpointReached = 1,
	};


	// Enum /Script/FortniteGame.EVehicleSeats
	enum EVehicleSeats
	{
		EVehicleSeats__Driver = 0,
		EVehicleSeats__Passenger1 = 1,
		EVehicleSeats__Passenger2 = 2,
		EVehicleSeats__Passenger3 = 3,
		EVehicleSeats__Passenger4 = 4,
		EVehicleSeats__Passenger5 = 5,
		EVehicleSeats__Passenger6 = 6,
		EVehicleSeats__MaxCount = 7,
	};


	// Enum /Script/FortniteGame.ETireStates
	enum ETireStates
	{
		ETireStates__Default = 0,
		ETireStates__Popped = 1,
	};


	// Enum /Script/FortniteGame.EInteractionBeingAttempted
	enum EInteractionBeingAttempted
	{
		FirstInteraction = 0,
		SecondInteraction = 1,
		AllInteraction = 2,
	};


	// Enum /Script/FortniteGame.TInteractionType
	enum TInteractionType
	{
		IT_NoInteraction = 0,
		IT_Simple = 1,
		IT_LongPress = 2,
		IT_BuildingEdit = 3,
		IT_BuildingImprovement = 4,
		IT_TrapPlacement = 5,
	};


	// Enum /Script/FortniteGame.EVehicleWheelLocations
	enum EVehicleWheelLocations
	{
		EVehicleWheelLocations__FrontRight = 0,
		EVehicleWheelLocations__FrontLeft = 1,
		EVehicleWheelLocations__BackRight = 2,
		EVehicleWheelLocations__BackLeft = 3,
		EVehicleWheelLocations__MiddleRight = 4,
		EVehicleWheelLocations__MiddleLeft = 5,
		EVehicleWheelLocations__Max = 6,
	};


	// Enum /Script/FortniteGame.ETireSurfaces
	enum ETireSurfaces
	{
		ETireSurfaces__Road = 0,
		ETireSurfaces__Dirt = 1,
		ETireSurfaces__Grass = 2,
		ETireSurfaces__Air = 3,
		ETireSurfaces__Water = 4,
	};


	// Enum /Script/FortniteGame.EUIExtensionSlot
	enum EUIExtensionSlot
	{
		EUIExtensionSlot__Invalid = 0,
		EUIExtensionSlot__Primary = 1,
		EUIExtensionSlot__Secondary = 2,
		EUIExtensionSlot__TopRightCorner = 3,
		EUIExtensionSlot__GameInfoBox = 4,
		EUIExtensionSlot__Quickbar = 5,
		EUIExtensionSlot__QuickbarUnderlay = 6,
		EUIExtensionSlot__UpperCenter = 7,
		EUIExtensionSlot__CrosshairRight = 8,
		EUIExtensionSlot__MobileCrosshairRight = 9,
		EUIExtensionSlot__UnderSquadInfo = A,
		EUIExtensionSlot__FullScreenMap = B,
		EUIExtensionSlot__BelowRespawnWidget = C,
		EUIExtensionSlot__BelowCompass = D,
		EUIExtensionSlot__UnderTeammateStatus = E,
		EUIExtensionSlot__ControllerBindingCallout = F,
		EUIExtensionSlot__AboveStormMessageSlot = 10,
		EUIExtensionSlot__CustomMinigameCallouts = 11,
		EUIExtensionSlot__UnderLocalPlayerInfo = 12,
		EUIExtensionSlot__PlayerHealthbarOverlay = 13,
		EUIExtensionSlot__PlayerOverHealthbarOverlay = 14,
		EUIExtensionSlot__UnderMinimapMessageContainer = 15,
		EUIExtensionSlot__VehicleActionsSpacer = 16,
		EUIExtensionSlot__InventoryScreenReplacement = 17,
		EUIExtensionSlot__Reticle = 18,
		EUIExtensionSlot__KillfeedSlot = 19,
		EUIExtensionSlot__PrioritizedContextualSlot = 1A,
		EUIExtensionSlot__RightOfTeammateStatus = 1B,
		EUIExtensionSlot__RightOfTeammateStatusBars = 1C,
		EUIExtensionSlot__TeammateStatusPortraitOverlay = 1D,
		EUIExtensionSlot__TeammateStatusPortraitUnderlay = 1E,
		EUIExtensionSlot__TeammateStatusPortraitOverlay_IGM = 1F,
		EUIExtensionSlot__TeammateOverHealthbarOverlay = 20,
		EUIExtensionSlot__TeammateOverShieldbarOverlay = 21,
		EUIExtensionSlot__MobileHUDBottomRight = 22,
		EUIExtensionSlot__InventoryScreenTab = 23,
		EUIExtensionSlot__InventoryPanelSubTab = 24,
		EUIExtensionSlot__MiniMapOverlay = 25,
		EUIExtensionSlot__AboveResourcesOverlay = 26,
		EUIExtensionSlot__UnderResourcesOverlay = 27,
		EUIExtensionSlot__InventoryEquipSlot = 28,
		EUIExtensionSlot__InventoryItemInfoBelowItemType = 29,
		EUIExtensionSlot__HUDEquippedItemInfo = 2A,
		EUIExtensionSlot__HUDEquippedItemInfo_Ammo = 2B,
		EUIExtensionSlot__UnderneathTeammateStatusList = 2C,
		EUIExtensionSlot__FullScreenMapSquadEliminationsOverlay = 2D,
		EUIExtensionSlot__FullScreenMapStormInfo = 2E,
		EUIExtensionSlot__PrimaryQuickBarSlot = 2F,
		EUIExtensionSlot__MainMenuButtonListInZone = 30,
		EUIExtensionSlot__MainMenuButtonListFrontEnd = 31,
		EUIExtensionSlot__DynamicOverlayLobby = 32,
		EUIExtensionSlot__PostMatchXPRecap = 33,
		EUIExtensionSlot__PostMatchXPRecap_RightSide = 34,
		EUIExtensionSlot__PostMatchXPRecap_TopLeft = 35,
		EUIExtensionSlot__PostMatchXPDetails_AccoladeList = 36,
		EUIExtensionSlot__MobileHUDUnderMinimap = 37,
		EUIExtensionSlot__SidebarPanels = 38,
		EUIExtensionSlot__SpectatorRightOfPlayerStatus = 39,
		EUIExtensionSlot__LastKillerInfoStatus = 3A,
		EUIExtensionSlot__BehindMobileLocalPlayerInfo = 3B,
		EUIExtensionSlot__UnderMobileLocalPlayerInfo = 3C,
		EUIExtensionSlot__AboveMobileLocalPlayerInfo = 3D,
		EUIExtensionSlot__DynamicOverlayFrontEnd = 3E,
		EUIExtensionSlot__NPCStatusWidgetBarsPrefix = 3F,
		EUIExtensionSlot__NPCStatusWidgetAboveBars = 40,
		EUIExtensionSlot__AbovePlayerIndicatorWidget = 41,
		EUIExtensionSlot__AthenaDashboardWidgetOverlay = 42,
		EUIExtensionSlot__FullScreenMapTab = 43,
		EUIExtensionSlot__PostMatchScreenTab = 44,
		EUIExtensionSlot__AboveBacchusEquippedItemReloadWidget = 45,
		EUIExtensionSlot__InventoryExtensionRow = 46,
		EUIExtensionSlot__UnderDefaultLobbyDetails = 47,
		EUIExtensionSlot__VisitedAreaDisplayUnderlay = 48,
		EUIExtensionSlot__DiscoveredAreaTextUnderlay = 49,
		EUIExtensionSlot__StaminaOverlay = 4A,
		EUIExtensionSlot__LevelUpMobile = 4B,
		EUIExtensionSlot__ExpMobile = 4C,
		EUIExtensionSlot__InventoryGroupPanel = 4D,
		EUIExtensionSlot__InventoryQuickbarEditor = 4E,
		EUIExtensionSlot__VisitedAreaDisplayMainBoxOverride = 4F,
		EUIExtensionSlot__InventoryItemInfoContents = 50,
		EUIExtensionSlot__DiscoverInLobby = 51,
		EUIExtensionSlot__PlaylistUIExtensionMobile = 52,
		EUIExtensionSlot__InventoryItemInfoInspectPreview = 53,
		EUIExtensionSlot__LastKillerWeaponInfo = 54,
		EUIExtensionSlot__UnderPlayerVehicleHealthbar = 55,
		EUIExtensionSlot__AboveQuestsMobileUI = 56,
		EUIExtensionSlot__PinnedContentList = 57,
		EUIExtensionSlot__AboveMobileMinimap = 58,
		EUIExtensionSlot__POIProgressBarWidgetExtension = 59,
		EUIExtensionSlot__VehicleSecondaryInteractionInfo = 5A,
		EUIExtensionSlot__VehicleFuelGaugeOverlay = 5B,
		EUIExtensionSlot__VehicleDashboardActionSlot = 5C,
		EUIExtensionSlot__MarkerDetailsWidgetExtension = 5D,
		EUIExtensionSlot__PostGamePlacementOverlayVictory = 5E,
		EUIExtensionSlot__TeammateStatusHealthShieldsReplacement = 5F,
		EUIExtensionSlot__GameInfoBelowMap = 60,
		EUIExtensionSlot__HUDEquippedItemReticle = 61,
		EUIExtensionSlot__HUDUnderKnockedPlayer = 62,
		EUIExtensionSlot__HUDAboveReticle = 63,
		EUIExtensionSlot__Count = 64,
	};


	// Enum /Script/FortniteGame.ESlotEnvironmentExposure
	enum ESlotEnvironmentExposure
	{
		ESlotEnvironmentExposure__Unknown = 0,
		ESlotEnvironmentExposure__Exposed = 1,
		ESlotEnvironmentExposure__Protected = 2,
	};


	// Enum /Script/FortniteGame.EFortMarkedActorScreenClamping
	enum EFortMarkedActorScreenClamping
	{
		EFortMarkedActorScreenClamping__Default = 0,
		EFortMarkedActorScreenClamping__Clamp = 1,
		EFortMarkedActorScreenClamping__ClampWhileNew = 2,
		EFortMarkedActorScreenClamping__DontClamp = 3,
	};


	// Enum /Script/FortniteGame.EFortBaseWeaponDamage
	enum EFortBaseWeaponDamage
	{
		EFortBaseWeaponDamage__Combat = 0,
		EFortBaseWeaponDamage__Environmental = 1,
	};


	// Enum /Script/FortniteGame.EVehicleInitialOverlapBehavior
	enum EVehicleInitialOverlapBehavior
	{
		EVehicleInitialOverlapBehavior__None = 0,
		EVehicleInitialOverlapBehavior__DontCollideUntilNotOverlapping = 1,
		EVehicleInitialOverlapBehavior__DestroyWhenVehicleOccupied = 2,
		EVehicleInitialOverlapBehavior__DestroyIfBackingInto = 3,
	};


	// Enum /Script/FortniteGame.EFortItemType
	enum EFortItemType
	{
		EFortItemType__WorldItem = 0,
		EFortItemType__Ammo = 1,
		EFortItemType__Badge = 2,
		EFortItemType__BackpackPickup = 3,
		EFortItemType__BuildingPiece = 4,
		EFortItemType__CharacterPart = 5,
		EFortItemType__Consumable = 6,
		EFortItemType__Deco = 7,
		EFortItemType__EditTool = 8,
		EFortItemType__Ingredient = 9,
		EFortItemType__ItemCache = A,
		EFortItemType__Food = B,
		EFortItemType__Gadget = C,
		EFortItemType__AthenaGadget = D,
		EFortItemType__HomebaseGadget = E,
		EFortItemType__BattleLabDevice = F,
		EFortItemType__SpyTechPerk = 10,
		EFortItemType__HeroAbility = 11,
		EFortItemType__MissionItem = 12,
		EFortItemType__Trap = 13,
		EFortItemType__MultiItem = 14,
		EFortItemType__Weapon = 15,
		EFortItemType__WeaponMelee = 16,
		EFortItemType__WeaponRanged = 17,
		EFortItemType__WeaponHarvest = 18,
		EFortItemType__WeaponCreativePhone = 19,
		EFortItemType__WeaponMod = 1A,
		EFortItemType__WorldResource = 1B,
		EFortItemType__CreativeUserPrefab = 1C,
		EFortItemType__CreativePlayset = 1D,
		EFortItemType__Vehicle = 1E,
		EFortItemType__Npc = 1F,
		EFortItemType__PlayerAugment = 20,
		EFortItemType__AccountItem = 21,
		EFortItemType__AccountResource = 22,
		EFortItemType__CollectedResource = 23,
		EFortItemType__Alteration = 24,
		EFortItemType__CardPack = 25,
		EFortItemType__Currency = 26,
		EFortItemType__Hero = 27,
		EFortItemType__Schematic = 28,
		EFortItemType__Worker = 29,
		EFortItemType__TeamPerk = 2A,
		EFortItemType__PlayerTech = 2B,
		EFortItemType__Token = 2C,
		EFortItemType__DailyRewardScheduleToken = 2D,
		EFortItemType__CodeToken = 2E,
		EFortItemType__Stat = 2F,
		EFortItemType__Buff = 30,
		EFortItemType__BuffCredit = 31,
		EFortItemType__Quest = 32,
		EFortItemType__Accolades = 33,
		EFortItemType__FriendChest = 34,
		EFortItemType__MedalsPunchCard = 35,
		EFortItemType__RepeatableDailiesCard = 36,
		EFortItemType__ChallengeBundle = 37,
		EFortItemType__ChallengeBundleSchedule = 38,
		EFortItemType__ChallengeBundleCompletionToken = 39,
		EFortItemType__GameplayModifier = 3A,
		EFortItemType__Outpost = 3B,
		EFortItemType__HomebaseNode = 3C,
		EFortItemType__Defender = 3D,
		EFortItemType__ConversionControl = 3E,
		EFortItemType__DeployableBaseCloudSave = 3F,
		EFortItemType__ConsumableAccountItem = 40,
		EFortItemType__Quota = 41,
		EFortItemType__Expedition = 42,
		EFortItemType__HomebaseBannerIcon = 43,
		EFortItemType__HomebaseBannerColor = 44,
		EFortItemType__AthenaSkyDiveContrail = 45,
		EFortItemType__PersonalVehicle = 46,
		EFortItemType__AthenaGlider = 47,
		EFortItemType__AthenaPickaxe = 48,
		EFortItemType__AthenaBackpack = 49,
		EFortItemType__AthenaCharacter = 4A,
		EFortItemType__AthenaDance = 4B,
		EFortItemType__AthenaLoadingScreen = 4C,
		EFortItemType__AthenaBattleBus = 4D,
		EFortItemType__AthenaVehicleCosmetic = 4E,
		EFortItemType__AthenaItemWrap = 4F,
		EFortItemType__AthenaMusicPack = 50,
		EFortItemType__AthenaPetCosmetic = 51,
		EFortItemType__AthenaSeasonTreasure = 52,
		EFortItemType__AthenaSeason = 53,
		EFortItemType__AthenaRewardGraph = 54,
		EFortItemType__AthenaExtResource = 55,
		EFortItemType__EventDescription = 56,
		EFortItemType__BattleLabDeviceAccount = 57,
		EFortItemType__AthenaEventToken = 58,
		EFortItemType__EventPurchaseTracker = 59,
		EFortItemType__CosmeticVariantToken = 5A,
		EFortItemType__CampaignHeroLoadout = 5B,
		EFortItemType__Playset = 5C,
		EFortItemType__PrerollData = 5D,
		EFortItemType__CreativePlot = 5E,
		EFortItemType__PlayerSurveyToken = 5F,
		EFortItemType__CosmeticLocker = 60,
		EFortItemType__BannerToken = 61,
		EFortItemType__RestedXpBoosterToken = 62,
		EFortItemType__RewardEventGraphPurchaseToken = 63,
		EFortItemType__HardcoreModifier = 64,
		EFortItemType__EventDependentItem = 65,
		EFortItemType__ItemAccessToken = 66,
		EFortItemType__STWAccoladeReward = 67,
		EFortItemType__Campsite = 68,
		EFortItemType__VictoryCrown = 69,
		EFortItemType__RealitySapling = 6A,
		EFortItemType__Apparel = 6B,
		EFortItemType__ApparelLayout = 6C,
		EFortItemType__PlayerAugmentsPersistence = 6D,
		EFortItemType__SparksAura = 6E,
		EFortItemType__SparksGuitar = 6F,
		EFortItemType__SparksBass = 70,
		EFortItemType__SparksKeyboard = 71,
		EFortItemType__SparksMicrophone = 72,
		EFortItemType__SparksDrums = 73,
		EFortItemType__SparksSpotlightAnim = 74,
		EFortItemType__SparksSong = 75,
		EFortItemType__JunoBuildingSet = 76,
		EFortItemType__JunoBuildingProp = 77,
		EFortItemType__SpecialItem = 78,
		EFortItemType__Emote = 79,
		EFortItemType__Stack = 7A,
		EFortItemType__CollectionBookPage = 7B,
		EFortItemType__BGAConsumableWrapper = 7C,
		EFortItemType__GiftBox = 7D,
		EFortItemType__GiftBoxUnlock = 7E,
		EFortItemType__PlaysetProp = 7F,
		EFortItemType__RegCosmeticDef = 80,
		EFortItemType__Profile = 81,
		EFortItemType__Max_None = 82,
	};


	// Enum /Script/FortniteGame.EFortGameplayState
	enum EFortGameplayState
	{
		EFortGameplayState__NormalGameplay = 0,
		EFortGameplayState__WaitingToStart = 1,
		EFortGameplayState__EndOfZone = 2,
		EFortGameplayState__EnteringZone = 3,
		EFortGameplayState__LeavingZone = 4,
		EFortGameplayState__Invalid = 5,
	};


	// Enum /Script/FortniteGame.ESubGame
	enum ESubGame
	{
		ESubGame__Campaign = 0,
		ESubGame__Athena = 1,
		ESubGame__Invalid = 2,
		ESubGame__Count = 2,
		ESubGame__Creative = 3,
	};


	// Enum /Script/FortniteGame.EFortReportDayPhase
	enum EFortReportDayPhase
	{
		EFortReportDayPhase__Dawn = 0,
		EFortReportDayPhase__Dusk = 1,
		EFortReportDayPhase__ZoneFinished = 2,
		EFortReportDayPhase__PlayerLogout = 3,
	};


	// Enum /Script/FortniteGame.EForceKickAfterDeathMode
	enum EForceKickAfterDeathMode
	{
		EForceKickAfterDeathMode__Disabled = 0,
		EForceKickAfterDeathMode__KickAll = 1,
		EForceKickAfterDeathMode__KickPrivate = 2,
	};


	// Enum /Script/FortniteGame.EFortIsFinalXpUpdate
	enum EFortIsFinalXpUpdate
	{
		EFortIsFinalXpUpdate__Uninitialized = 0,
		EFortIsFinalXpUpdate__NotFinal = 1,
		EFortIsFinalXpUpdate__Final = 2,
	};


	// Enum /Script/FortniteGame.EFortTeam
	enum EFortTeam
	{
		EFortTeam__Spectator = 0,
		EFortTeam__HumanCampaign = 1,
		EFortTeam__Monster = 2,
		EFortTeam__HumanPvP_Team1 = 3,
		EFortTeam__HumanPvP_Team2 = 4,
	};


	// Enum /Script/FortniteGame.EProfileCaptureType
	enum EProfileCaptureType
	{
		EProfileCaptureType__FramePro = 0,
		EProfileCaptureType__Insights = 1,
		EProfileCaptureType__Network = 2,
		EProfileCaptureType__Count = 3,
	};


	// Enum /Script/FortniteGame.EFortVoteStatus
	enum EFortVoteStatus
	{
		EFortVoteStatus__Begin = 0,
		EFortVoteStatus__Update = 1,
		EFortVoteStatus__End = 2,
		EFortVoteStatus__BeginLockout = 3,
		EFortVoteStatus__EndLockout = 4,
	};


	// Enum /Script/FortniteGame.EFortVoteType
	enum EFortVoteType
	{
		EFortVoteType__SurvivalVote = 0,
		EFortVoteType__DifficultyIncrease = 1,
		EFortVoteType__MissionActivation = 2,
		EFortVoteType__ContinueOrExtract = 3,
		EFortVoteType__TierSelection = 4,
	};


	// Enum /Script/FortniteGame.EStatCategory
	enum EStatCategory
	{
		EStatCategory__Combat = 0,
		EStatCategory__Building = 1,
		EStatCategory__Utility = 2,
		EStatCategory__Max_None = 3,
	};


	// Enum /Script/FortniteGame.EFortVoteArbitratorType
	enum EFortVoteArbitratorType
	{
		EFortVoteArbitratorType__Invalid = 0,
		EFortVoteArbitratorType__Majority = 1,
		EFortVoteArbitratorType__Unanimous = 2,
	};


	// Enum /Script/FortniteGame.EFortCompletionResult
	enum EFortCompletionResult
	{
		EFortCompletionResult__Win = 0,
		EFortCompletionResult__Loss = 1,
		EFortCompletionResult__Draw = 2,
		EFortCompletionResult__Undefined = 3,
	};


	// Enum /Script/FortniteGame.EWaveRules
	enum EWaveRules
	{
		EWaveRules__KillAllEnemies = 0,
		EWaveRules__Timed = 1,
		EWaveRules__KillPoints = 2,
		EWaveRules__KillSpecificEnemy = 3,
		EWaveRules__Mission = 4,
		EWaveRules__DestroyRifts = 5,
	};


	// Enum /Script/FortniteGame.EFortAIDirectorEvent
	enum EFortAIDirectorEvent
	{
		EFortAIDirectorEvent__PlayerAIEnemies = 0,
		EFortAIDirectorEvent__PlayerTakeDamage = 1,
		EFortAIDirectorEvent__PlayerHealth = 2,
		EFortAIDirectorEvent__PlayerDeath = 3,
		EFortAIDirectorEvent__PlayerLookAtAIEnemy = 4,
		EFortAIDirectorEvent__PlayerDamageAIEnemy = 5,
		EFortAIDirectorEvent__PlayerKillAIEnemy = 6,
		EFortAIDirectorEvent__PlayerHealingPotential = 7,
		EFortAIDirectorEvent__PlayerAmmoLight = 8,
		EFortAIDirectorEvent__PlayerAmmoMedium = 9,
		EFortAIDirectorEvent__PlayerAmmoHeavy = A,
		EFortAIDirectorEvent__PlayerAmmoShells = B,
		EFortAIDirectorEvent__PlayerAmmoEnergy = C,
		EFortAIDirectorEvent__PlayerAINear = D,
		EFortAIDirectorEvent__PlayerMovement = E,
		EFortAIDirectorEvent__ObjectiveTakeDamage = F,
		EFortAIDirectorEvent__ObjectiveHealth = 10,
		EFortAIDirectorEvent__ObjectiveDestroyed = 11,
		EFortAIDirectorEvent__TrapFired = 12,
		EFortAIDirectorEvent__TrapDamagedAIEnemy = 13,
		EFortAIDirectorEvent__ObjectivePathCost = 14,
		EFortAIDirectorEvent__PlayerPathCost = 15,
		EFortAIDirectorEvent__ObjectiveNearbyBuildingDamaged = 16,
		EFortAIDirectorEvent__Max_None = 17,
	};


	// Enum /Script/FortniteGame.EServerStability
	enum EServerStability
	{
		EServerStability__Stable = 0,
		EServerStability__LowUnstability = 1,
		EServerStability__HighUnstability = 2,
		EServerStability__Count = 3,
	};


	// Enum /Script/FortniteGame.ETenacityType
	enum ETenacityType
	{
		ETenacityType__Default = 0,
		ETenacityType__MaxHealth = 1,
		ETenacityType__Custom = 2,
	};


	// Enum /Script/FortniteGame.EDBNOMutatorType
	enum EDBNOMutatorType
	{
		EDBNOMutatorType__Default = 0,
		EDBNOMutatorType__On = 1,
		EDBNOMutatorType__Off = 2,
		EDBNOMutatorType__Improved = 3,
	};


	// Enum /Script/FortniteGame.EFortPlaylistType
	enum EFortPlaylistType
	{
		EFortPlaylistType__Default = 0,
		EFortPlaylistType__Playground = 1,
		EFortPlaylistType__Creative = 2,
		EFortPlaylistType__Creative_LTM = 3,
	};


	// Enum /Script/FortniteGame.EAthenaGamePhaseStep
	enum EAthenaGamePhaseStep
	{
		EAthenaGamePhaseStep__None = 0,
		EAthenaGamePhaseStep__Setup = 1,
		EAthenaGamePhaseStep__Warmup = 2,
		EAthenaGamePhaseStep__GetReady = 3,
		EAthenaGamePhaseStep__BusLocked = 4,
		EAthenaGamePhaseStep__BusFlying = 5,
		EAthenaGamePhaseStep__StormForming = 6,
		EAthenaGamePhaseStep__StormHolding = 7,
		EAthenaGamePhaseStep__StormShrinking = 8,
		EAthenaGamePhaseStep__Countdown = 9,
		EAthenaGamePhaseStep__FinalCountdown = A,
		EAthenaGamePhaseStep__EndGame = B,
		EAthenaGamePhaseStep__Count = C,
	};


	// Enum /Script/FortniteGame.EFortResourceType
	enum EFortResourceType
	{
		EFortResourceType__Wood = 0,
		EFortResourceType__Stone = 1,
		EFortResourceType__Metal = 2,
		EFortResourceType__Permanite = 3,
		EFortResourceType__GoldCurrency = 4,
		EFortResourceType__Ingredient = 5,
		EFortResourceType__None = 6,
	};


	// Enum /Script/FortniteGame.EMapLocationStateType
	enum EMapLocationStateType
	{
		EMapLocationStateType__Normal = 0,
		EMapLocationStateType__Golden = 1,
		EMapLocationStateType__Undiscovered = 2,
		EMapLocationStateType__Max = 3,
	};


	// Enum /Script/FortniteGame.EEventTournamentRound
	enum EEventTournamentRound
	{
		EEventTournamentRound__Open = 0,
		EEventTournamentRound__Qualifiers = 1,
		EEventTournamentRound__SemiFinals = 2,
		EEventTournamentRound__Finals = 3,
		EEventTournamentRound__Unknown = 4,
		EEventTournamentRound__Arena = 5,
	};


	// Enum /Script/FortniteGame.EFriendlyFireType
	enum EFriendlyFireType
	{
		EFriendlyFireType__Off = 0,
		EFriendlyFireType__On = 1,
	};


	// Enum /Script/FortniteGame.EFortItemEntryState
	enum EFortItemEntryState
	{
		EFortItemEntryState__NoneState = 0,
		EFortItemEntryState__NewItemCount = 1,
		EFortItemEntryState__ShouldShowItemToast = 2,
		EFortItemEntryState__DurabilityInitialized = 3,
		EFortItemEntryState__DoNotShowSpawnParticles = 4,
		EFortItemEntryState__FromRecoveredBackpack = 5,
		EFortItemEntryState__FromGift = 6,
		EFortItemEntryState__PendingUpgradeCriteriaProgress = 7,
		EFortItemEntryState__OwnerBuildingHandle = 8,
		EFortItemEntryState__FromDroppedPickup = 9,
		EFortItemEntryState__JustCrafted = A,
		EFortItemEntryState__CraftAndSlotTarget = B,
		EFortItemEntryState__GenericAttributeValueSet = C,
		EFortItemEntryState__PickupInstigatorHandle = D,
		EFortItemEntryState__RechargingWeaponServerTime = E,
		EFortItemEntryState__DisallowSwapOnNextPickUpAttempt = F,
		EFortItemEntryState__DroppedFromQuestSource = 10,
		EFortItemEntryState__Tossed = 11,
		EFortItemEntryState__Loaded = 12,
		EFortItemEntryState__SaveMagazineAmmo = 13,
		EFortItemEntryState__MultiItemLevel = 14,
		EFortItemEntryState__MultiItemXP = 15,
		EFortItemEntryState__FromAugment = 16,
		EFortItemEntryState__PreventDropping = 17,
		EFortItemEntryState__PreventDroppingExceptFromDeath = 18,
		EFortItemEntryState__PreventDroppingExceptFromDeathWithCount = 19,
		EFortItemEntryState__ReAddedItem = 1A,
		EFortItemEntryState__WeaponAmmoOverride = 1B,
		EFortItemEntryState__DurabilityCooldownTimeRemainingOnUpdate = 1C,
		EFortItemEntryState__LoadedAmmoHasBeenSet = 1D,
	};


	// Enum /Script/FortniteGame.EFortQuickBars
	enum EFortQuickBars
	{
		EFortQuickBars__Primary = 0,
		EFortQuickBars__Secondary = 1,
		EFortQuickBars__Creative = 2,
		EFortQuickBars__Max_None = 3,
	};


	// Enum /Script/FortniteGame.EAthenaCustomizationCategory
	enum EAthenaCustomizationCategory
	{
		EAthenaCustomizationCategory__None = 0,
		EAthenaCustomizationCategory__Glider = 1,
		EAthenaCustomizationCategory__Pickaxe = 2,
		EAthenaCustomizationCategory__Backpack = 3,
		EAthenaCustomizationCategory__Character = 4,
		EAthenaCustomizationCategory__LoadingScreen = 5,
		EAthenaCustomizationCategory__Dance = 6,
		EAthenaCustomizationCategory__SkyDiveContrail = 7,
		EAthenaCustomizationCategory__MusicPack = 8,
		EAthenaCustomizationCategory__ItemWrap = 9,
		EAthenaCustomizationCategory__RegCosmeticDef = A,
		EAthenaCustomizationCategory__Apparel = B,
		EAthenaCustomizationCategory__SparksAura = C,
		EAthenaCustomizationCategory__SparksGuitar = D,
		EAthenaCustomizationCategory__SparksBass = E,
		EAthenaCustomizationCategory__SparksKeyboard = F,
		EAthenaCustomizationCategory__SparksMicrophone = 10,
		EAthenaCustomizationCategory__SparksDrums = 11,
		EAthenaCustomizationCategory__SparksSpotlightAnim = 12,
		EAthenaCustomizationCategory__SparksSong = 13,
		EAthenaCustomizationCategory__Loadout = 14,
		EAthenaCustomizationCategory__SaveLoadout = 15,
	};


	// Enum /Script/FortniteGame.EFortObjectiveStatus
	enum EFortObjectiveStatus
	{
		EFortObjectiveStatus__Created = 0,
		EFortObjectiveStatus__InProgress = 1,
		EFortObjectiveStatus__Succeeded = 2,
		EFortObjectiveStatus__Failed = 3,
		EFortObjectiveStatus__NeutralCompletion = 4,
		EFortObjectiveStatus__Max_None = 5,
	};


	// Enum /Script/FortniteGame.ERichPresenceStateChange
	enum ERichPresenceStateChange
	{
		ERichPresenceStateChange__AutoUpdate = 0,
		ERichPresenceStateChange__Idle = 1,
		ERichPresenceStateChange__Active = 2,
		ERichPresenceStateChange__Busy = 3,
		ERichPresenceStateChange__NotBusy = 4,
	};


	// Enum /Script/FortniteGame.ELockOnState
	enum ELockOnState
	{
		ELockOnState__NoTarget = 0,
		ELockOnState__TargetAcquired = 1,
		ELockOnState__LockingOnToTarget = 2,
		ELockOnState__TargetLockedOn = 3,
		ELockOnState__Cooldown = 4,
		ELockOnState__COUNT = 5,
	};


	// Enum /Script/FortniteGame.EStatRecordingPeriod
	enum EStatRecordingPeriod
	{
		EStatRecordingPeriod__Frame = 0,
		EStatRecordingPeriod__Minute = 1,
		EStatRecordingPeriod__AthenaSafeZonePhase = 2,
		EStatRecordingPeriod__Life = 3,
		EStatRecordingPeriod__Map = 4,
		EStatRecordingPeriod__Campaign = 5,
		EStatRecordingPeriod__Persistent = 6,
		EStatRecordingPeriod__Max = 7,
	};


	// Enum /Script/FortniteGame.EStatMod
	enum EStatMod
	{
		EStatMod__Delta = 0,
		EStatMod__Set = 1,
		EStatMod__Maximum = 2,
	};


	// Enum /Script/FortniteGame.EFortDamageZone
	enum EFortDamageZone
	{
		EFortDamageZone__Light = 0,
		EFortDamageZone__Normal = 1,
		EFortDamageZone__Critical = 2,
		EFortDamageZone__Vulnerability = 3,
		EFortDamageZone__Invulnerability = 4,
		EFortDamageZone__Max = 5,
	};


	// Enum /Script/FortniteGame.ESpatialLoadingState
	enum ESpatialLoadingState
	{
		ESpatialLoadingState__Uninitialized = 0,
		ESpatialLoadingState__ReadOnly = 1,
		ESpatialLoadingState__Initializing = 2,
		ESpatialLoadingState__Ready = 3,
	};


	// Enum /Script/FortniteGame.EFortEmotePlayMode
	enum EFortEmotePlayMode
	{
		EFortEmotePlayMode__CheckIfOwned = 0,
		EFortEmotePlayMode__ForcePlay = 1,
	};


	// Enum /Script/FortniteGame.EFortItemTier
	enum EFortItemTier
	{
		EFortItemTier__No_Tier = 0,
		EFortItemTier__I = 1,
		EFortItemTier__II = 2,
		EFortItemTier__III = 3,
		EFortItemTier__IV = 4,
		EFortItemTier__V = 5,
		EFortItemTier__VI = 6,
		EFortItemTier__VII = 7,
		EFortItemTier__VIII = 8,
		EFortItemTier__IX = 9,
		EFortItemTier__X = A,
		EFortItemTier__NumItemTierValues = B,
	};


	// Enum /Script/FortniteGame.EFortResourceLevel
	enum EFortResourceLevel
	{
		EFortResourceLevel__First = 0,
		EFortResourceLevel__Second = 1,
		EFortResourceLevel__Third = 2,
		EFortResourceLevel__Fourth = 3,
		EFortResourceLevel__Fifth = 4,
		EFortResourceLevel__Sixth = 5,
		EFortResourceLevel__NumLevels = 6,
		EFortResourceLevel__Invalid = 7,
	};


	// Enum /Script/FortniteGame.EFortRequestedGameplayAction
	enum EFortRequestedGameplayAction
	{
		EFortRequestedGameplayAction__ContinuePlaying = 0,
		EFortRequestedGameplayAction__StartPlaying = 1,
		EFortRequestedGameplayAction__StopPlaying = 2,
		EFortRequestedGameplayAction__EnterZone = 3,
		EFortRequestedGameplayAction__LeaveZone = 4,
		EFortRequestedGameplayAction__ReturnToMainMenu = 5,
		EFortRequestedGameplayAction__QuitGame = 6,
		EFortRequestedGameplayAction__Invalid = 7,
	};


	// Enum /Script/FortniteGame.EFortQuestObjectiveStatEvent
	enum EFortQuestObjectiveStatEvent
	{
		EFortQuestObjectiveStatEvent__Kill = 0,
		EFortQuestObjectiveStatEvent__TeamKill = 1,
		EFortQuestObjectiveStatEvent__KillContribution = 2,
		EFortQuestObjectiveStatEvent__Damage = 3,
		EFortQuestObjectiveStatEvent__SquadDamage = 4,
		EFortQuestObjectiveStatEvent__Visit = 5,
		EFortQuestObjectiveStatEvent__VisitDiscoverPOI = 6,
		EFortQuestObjectiveStatEvent__Land = 7,
		EFortQuestObjectiveStatEvent__Emote = 8,
		EFortQuestObjectiveStatEvent__Spray = 9,
		EFortQuestObjectiveStatEvent__Toy = A,
		EFortQuestObjectiveStatEvent__Build = B,
		EFortQuestObjectiveStatEvent__BuildingEdit = C,
		EFortQuestObjectiveStatEvent__BuildingRepair = D,
		EFortQuestObjectiveStatEvent__BuildingUpgrade = E,
		EFortQuestObjectiveStatEvent__PlaceTrap = F,
		EFortQuestObjectiveStatEvent__Complete = 10,
		EFortQuestObjectiveStatEvent__Craft = 11,
		EFortQuestObjectiveStatEvent__Collect = 12,
		EFortQuestObjectiveStatEvent__Win = 13,
		EFortQuestObjectiveStatEvent__Interact = 14,
		EFortQuestObjectiveStatEvent__TeamInteract = 15,
		EFortQuestObjectiveStatEvent__Destroy = 16,
		EFortQuestObjectiveStatEvent__Ability = 17,
		EFortQuestObjectiveStatEvent__WaveComplete = 18,
		EFortQuestObjectiveStatEvent__Custom = 19,
		EFortQuestObjectiveStatEvent__ComplexCustom = 1A,
		EFortQuestObjectiveStatEvent__Client = 1B,
		EFortQuestObjectiveStatEvent__AthenaRank = 1C,
		EFortQuestObjectiveStatEvent__AthenaOutlive = 1D,
		EFortQuestObjectiveStatEvent__RevivePlayer = 1E,
		EFortQuestObjectiveStatEvent__Heal = 1F,
		EFortQuestObjectiveStatEvent__EarnVehicleTrickPoints = 20,
		EFortQuestObjectiveStatEvent__VehicleAirTime = 21,
		EFortQuestObjectiveStatEvent__TimeElapsed = 22,
		EFortQuestObjectiveStatEvent__Death = 23,
		EFortQuestObjectiveStatEvent__AthenaMarker = 24,
		EFortQuestObjectiveStatEvent__PlacementUpdate = 25,
		EFortQuestObjectiveStatEvent__StormPhase = 26,
		EFortQuestObjectiveStatEvent__DistanceTraveled = 27,
		EFortQuestObjectiveStatEvent__DownOrElim = 28,
		EFortQuestObjectiveStatEvent__Accolade = 29,
		EFortQuestObjectiveStatEvent__TakeDamage = 2A,
		EFortQuestObjectiveStatEvent__AthenaCollection = 2B,
		EFortQuestObjectiveStatEvent__AthenaCollectionFoundItem = 2C,
		EFortQuestObjectiveStatEvent__UsedNPCService = 2D,
		EFortQuestObjectiveStatEvent__ReceivedNPCGift = 2E,
		EFortQuestObjectiveStatEvent__InitiatedNPCConversation = 2F,
		EFortQuestObjectiveStatEvent__AthenaCraft = 30,
		EFortQuestObjectiveStatEvent__AthenaTurnInQuest = 31,
		EFortQuestObjectiveStatEvent__AthenaVehicleMod = 32,
		EFortQuestObjectiveStatEvent__AthenaOpenedFriendChest = 33,
		EFortQuestObjectiveStatEvent__AthenaAcquire = 34,
		EFortQuestObjectiveStatEvent__InitiatedServiceStationConversation = 35,
		EFortQuestObjectiveStatEvent__AthenaAccumulatedItem = 36,
		EFortQuestObjectiveStatEvent__AthenaVehicleFlip = 37,
		EFortQuestObjectiveStatEvent__AthenaVehicleTirePopped = 38,
		EFortQuestObjectiveStatEvent__RevealedPawnDisguise = 39,
		EFortQuestObjectiveStatEvent__ManuallyCompleted = 3A,
		EFortQuestObjectiveStatEvent__SpentBarsOnNPCService = 3B,
		EFortQuestObjectiveStatEvent__Hit = 3C,
		EFortQuestObjectiveStatEvent__CreativeDevice = 3D,
		EFortQuestObjectiveStatEvent__Feed = 3E,
		EFortQuestObjectiveStatEvent__HitWeakpoint = 3F,
		EFortQuestObjectiveStatEvent__PlaceTent = 40,
		EFortQuestObjectiveStatEvent__ConvertNPC = 41,
		EFortQuestObjectiveStatEvent__DiscoverLoot = 42,
		EFortQuestObjectiveStatEvent__GlideDistance = 43,
		EFortQuestObjectiveStatEvent__Throw = 44,
		EFortQuestObjectiveStatEvent__Repair = 45,
		EFortQuestObjectiveStatEvent__Ignite = 46,
		EFortQuestObjectiveStatEvent__Refuel = 47,
		EFortQuestObjectiveStatEvent__AthenaVehiclePartDisabled = 48,
		EFortQuestObjectiveStatEvent__RevivedFromDBNO = 49,
		EFortQuestObjectiveStatEvent__AthenaGainXp = 4A,
		EFortQuestObjectiveStatEvent__AthenaDistanceTraveled = 4B,
		EFortQuestObjectiveStatEvent__MatchStarted = 4C,
		EFortQuestObjectiveStatEvent__Finish = 4D,
		EFortQuestObjectiveStatEvent__TeammateDealtDamage = 4E,
		EFortQuestObjectiveStatEvent__CurrencyCollected = 4F,
		EFortQuestObjectiveStatEvent__ScoredPlayerElimination = 50,
		EFortQuestObjectiveStatEvent__SquadScoredPlayerElimination = 51,
		EFortQuestObjectiveStatEvent__SlayWildlife = 52,
		EFortQuestObjectiveStatEvent__TeamScoredPlayerElimination = 53,
		EFortQuestObjectiveStatEvent__AthenaLevelUp = 54,
		EFortQuestObjectiveStatEvent__AugmentAttached = 55,
		EFortQuestObjectiveStatEvent__AthenaEarnMiniGameScore = 56,
		EFortQuestObjectiveStatEvent__AugmentsAvailable = 57,
		EFortQuestObjectiveStatEvent__HatchedAI = 58,
		EFortQuestObjectiveStatEvent__KillWhileMounted = 59,
		EFortQuestObjectiveStatEvent__DistanceTraveledWhileMounted = 5A,
		EFortQuestObjectiveStatEvent__NumGameplayEvents = 5B,
		EFortQuestObjectiveStatEvent__Acquire = 5C,
		EFortQuestObjectiveStatEvent__Consume = 5D,
		EFortQuestObjectiveStatEvent__OpenCardPack = 5E,
		EFortQuestObjectiveStatEvent__PurchaseCardPack = 5F,
		EFortQuestObjectiveStatEvent__Convert = 60,
		EFortQuestObjectiveStatEvent__Upgrade = 61,
		EFortQuestObjectiveStatEvent__UpgradeRarity = 62,
		EFortQuestObjectiveStatEvent__QuestComplete = 63,
		EFortQuestObjectiveStatEvent__AssignWorker = 64,
		EFortQuestObjectiveStatEvent__CollectExpedition = 65,
		EFortQuestObjectiveStatEvent__CollectSuccessfulExpedition = 66,
		EFortQuestObjectiveStatEvent__LevelUpCollectionBook = 67,
		EFortQuestObjectiveStatEvent__LevelUpAthenaSeason = 68,
		EFortQuestObjectiveStatEvent__LevelUpBattlePass = 69,
		EFortQuestObjectiveStatEvent__GainAthenaSeasonXp = 6A,
		EFortQuestObjectiveStatEvent__HasItem = 6B,
		EFortQuestObjectiveStatEvent__HasAccumulatedItem = 6C,
		EFortQuestObjectiveStatEvent__SlotInCollection = 6D,
		EFortQuestObjectiveStatEvent__AlterationRespec = 6E,
		EFortQuestObjectiveStatEvent__AlterationUpgrade = 6F,
		EFortQuestObjectiveStatEvent__HasCompletedQuest = 70,
		EFortQuestObjectiveStatEvent__HasAssignedWorker = 71,
		EFortQuestObjectiveStatEvent__HasUpgraded = 72,
		EFortQuestObjectiveStatEvent__HasConverted = 73,
		EFortQuestObjectiveStatEvent__HasUpgradedRarity = 74,
		EFortQuestObjectiveStatEvent__HasLeveledUpCollectionBook = 75,
		EFortQuestObjectiveStatEvent__SlotHeroInLoadout = 76,
		EFortQuestObjectiveStatEvent__HasLeveledUpAthenaSeason = 77,
		EFortQuestObjectiveStatEvent__HasLeveledUpBattlePass = 78,
		EFortQuestObjectiveStatEvent__HasGainedAthenaSeasonXp = 79,
		EFortQuestObjectiveStatEvent__MinigameDynamicEvent = 7A,
		EFortQuestObjectiveStatEvent__MinigameComplete = 7B,
		EFortQuestObjectiveStatEvent__MinigameDeath = 7C,
		EFortQuestObjectiveStatEvent__MinigameAssist = 7D,
		EFortQuestObjectiveStatEvent__Max_None = 7E,
	};


	// Enum /Script/FortniteGame.EFortGameplayEventReferenceType
	enum EFortGameplayEventReferenceType
	{
		EFortGameplayEventReferenceType__None = 0,
		EFortGameplayEventReferenceType__EventDescriptor = 1,
		EFortGameplayEventReferenceType__EventFunction = 2,
	};


	// Enum /Script/FortniteGame.EBuildingHighlightType
	enum EBuildingHighlightType
	{
		EBuildingHighlightType__Primary = 0,
		EBuildingHighlightType__Interact = 1,
		EBuildingHighlightType__WillBeDestroyed = 2,
		EBuildingHighlightType__Quest = 3,
		EBuildingHighlightType__AuxiliaryInterestPoint = 4,
		EBuildingHighlightType__MAX_None = 5,
	};


	// Enum /Script/FortniteGame.EFortCollectedVariantClientUpdate
	enum EFortCollectedVariantClientUpdate
	{
		EFortCollectedVariantClientUpdate__NewVariant = 0,
		EFortCollectedVariantClientUpdate__CollectedCount = 1,
		EFortCollectedVariantClientUpdate__Improvement = 2,
		EFortCollectedVariantClientUpdate__HiddenImprovement = 3,
	};


	// Enum /Script/FortniteGame.EFortCollectedState
	enum EFortCollectedState
	{
		EFortCollectedState__Unknown = 0,
		EFortCollectedState__New = 1,
		EFortCollectedState__Known = 2,
		EFortCollectedState__NewlyCollected = 3,
		EFortCollectedState__Collected = 4,
		EFortCollectedState__NewBest = 5,
		EFortCollectedState__NewRecord = 6,
		EFortCollectedState__NewLocation = 7,
		EFortCollectedState__NewlyCompleted = 8,
		EFortCollectedState__Complete = 9,
	};


	// Enum /Script/FortniteGame.EFortPawnStasisMode
	enum EFortPawnStasisMode
	{
		EFortPawnStasisMode__None = 0,
		EFortPawnStasisMode__NoMovement = 1,
		EFortPawnStasisMode__NoMovementOrTurning = 2,
		EFortPawnStasisMode__NoMovementOrFalling = 3,
		EFortPawnStasisMode__NoMovement_EmotesEnabled = 4,
		EFortPawnStasisMode__NoMovementOrTurning_EmotesEnabled = 5,
		EFortPawnStasisMode__NoMovementOrFalling_EmotesEnabled = 6,
	};


	// Enum /Script/FortniteGame.EFortJumpStaminaCost
	enum EFortJumpStaminaCost
	{
		EFortJumpStaminaCost__None = 0,
		EFortJumpStaminaCost__Trigger = 1,
		EFortJumpStaminaCost__SprintTrigger = 2,
		EFortJumpStaminaCost__SprintAir = 3,
	};


	// Enum /Script/FortniteGame.EFortVoiceChatMethod
	enum EFortVoiceChatMethod
	{
		EFortVoiceChatMethod__OpenMic = 0,
		EFortVoiceChatMethod__PTT = 1,
		EFortVoiceChatMethod__Mute = 2,
	};


	// Enum /Script/FortniteGame.EFortPCTutorialCompletedState
	enum EFortPCTutorialCompletedState
	{
		EFortPCTutorialCompletedState__Unknown = 0,
		EFortPCTutorialCompletedState__Incomplete = 1,
		EFortPCTutorialCompletedState__Complete = 2,
	};


	// Enum /Script/FortniteGame.EFortRewardActivityType
	enum EFortRewardActivityType
	{
		EFortRewardActivityType__General = 0,
		EFortRewardActivityType__MissionPrimary = 1,
		EFortRewardActivityType__MissionSecondary = 2,
		EFortRewardActivityType__AccountLevelUp = 3,
		EFortRewardActivityType__Max_None = 4,
	};


	// Enum /Script/FortniteGame.EFortDelayedQuickBarAction
	enum EFortDelayedQuickBarAction
	{
		EFortDelayedQuickBarAction__Add = 0,
		EFortDelayedQuickBarAction__Remove = 1,
		EFortDelayedQuickBarAction__Replace = 2,
		EFortDelayedQuickBarAction__Invalid = 3,
	};


	// Enum /Script/FortniteGame.EFortElementalDamageType
	enum EFortElementalDamageType
	{
		EFortElementalDamageType__None = 0,
		EFortElementalDamageType__Fire = 1,
		EFortElementalDamageType__Ice = 2,
		EFortElementalDamageType__Lightning = 3,
		EFortElementalDamageType__Energy = 4,
	};


	// Enum /Script/FortniteGame.EFortDamageNumberType
	enum EFortDamageNumberType
	{
		EFortDamageNumberType__None = 0,
		EFortDamageNumberType__Pawn = 1,
		EFortDamageNumberType__Building = 2,
		EFortDamageNumberType__Player = 3,
		EFortDamageNumberType__Shield = 4,
		EFortDamageNumberType__Score = 5,
		EFortDamageNumberType__DBNO = 6,
		EFortDamageNumberType__Percent = 7,
	};


	// Enum /Script/FortniteGame.EFortCostInfoTypes
	enum EFortCostInfoTypes
	{
		EFortCostInfoTypes__Placement = 0,
		EFortCostInfoTypes__Repair = 1,
		EFortCostInfoTypes__Conversion = 2,
		EFortCostInfoTypes__Ability = 3,
		EFortCostInfoTypes__None = 4,
	};


	// Enum /Script/FortniteGame.EFortBuildPreviewMarkerOptionalAdjustment
	enum EFortBuildPreviewMarkerOptionalAdjustment
	{
		EFortBuildPreviewMarkerOptionalAdjustment__None = 0,
		EFortBuildPreviewMarkerOptionalAdjustment__FreeWallPieceOnTop = 1,
		EFortBuildPreviewMarkerOptionalAdjustment__FreeWallPieceOnBottom = 2,
	};


	// Enum /Script/FortniteGame.EPlayerControllerFollow
	enum EPlayerControllerFollow
	{
		EPlayerControllerFollow__NextTeammate = 0,
		EPlayerControllerFollow__PreviousTeammate = 1,
		EPlayerControllerFollow__NextPlayer = 2,
		EPlayerControllerFollow__PreviousPlayer = 3,
		EPlayerControllerFollow__SpecialActor = 4,
	};


	// Enum /Script/FortniteGame.ESpectateBlendEasing
	enum ESpectateBlendEasing
	{
		ESpectateBlendEasing__Linear = 0,
		ESpectateBlendEasing__EaseOutQuad = 1,
	};


	// Enum /Script/FortniteGame.EFortSpectatorBlendType
	enum EFortSpectatorBlendType
	{
		EFortSpectatorBlendType__None = 0,
		EFortSpectatorBlendType__Orbit = 1,
		EFortSpectatorBlendType__Default = 2,
	};


	// Enum /Script/FortniteGame.ESpectatorSquadIdMode
	enum ESpectatorSquadIdMode
	{
		ESpectatorSquadIdMode__AlwaysOff = 0,
		ESpectatorSquadIdMode__AlwaysOn = 1,
		ESpectatorSquadIdMode__HoldToDisplay = 2,
	};


	// Enum /Script/FortniteGame.ESpectatorCameraType
	enum ESpectatorCameraType
	{
		ESpectatorCameraType__ThirdPerson = 0,
		ESpectatorCameraType__DroneFree = 1,
		ESpectatorCameraType__Gameplay = 2,
		ESpectatorCameraType__ReverseShot = 3,
		ESpectatorCameraType__FollowShot = 4,
		ESpectatorCameraType__DroneFollow = 5,
		ESpectatorCameraType__DroneAttach = 6,
		ESpectatorCameraType__BattleMap = 7,
		ESpectatorCameraType__ARDrone = 8,
	};


	// Enum /Script/FortniteGame.EPlayEventType
	enum EPlayEventType
	{
		EPlayEventType__None = 0,
		EPlayEventType__TeamFlight = 1,
		EPlayEventType__Zone = 2,
		EPlayEventType__Elimination = 3,
		EPlayEventType__PlayerMoves = 4,
		EPlayEventType__SinglePlayerMove = 5,
		EPlayEventType__ActorsPosition = 6,
		EPlayEventType__GameHighlights = 7,
		EPlayEventType__Timecode = 8,
	};


	// Enum /Script/FortniteGame.ECameraShotNotificationTypes
	enum ECameraShotNotificationTypes
	{
		ECameraShotNotificationTypes__Notification = 0,
		ECameraShotNotificationTypes__HighlightAnnotation = 1,
		ECameraShotNotificationTypes__TitleScreen = 2,
	};


	// Enum /Script/FortniteGame.EThirdPersonAutoFollowMode
	enum EThirdPersonAutoFollowMode
	{
		EThirdPersonAutoFollowMode__Off = 0,
		EThirdPersonAutoFollowMode__Auto = 1,
		EThirdPersonAutoFollowMode__Lazy = 2,
	};


	// Enum /Script/FortniteGame.EFortMinigameStatOperation
	enum EFortMinigameStatOperation
	{
		EFortMinigameStatOperation__Equal = 0,
		EFortMinigameStatOperation__Less = 1,
		EFortMinigameStatOperation__Greater = 2,
		EFortMinigameStatOperation__LessOrEqual = 3,
		EFortMinigameStatOperation__GreaterOrEqual = 4,
	};


	// Enum /Script/FortniteGame.EFortMinigameStatScope
	enum EFortMinigameStatScope
	{
		EFortMinigameStatScope__Group = 0,
		EFortMinigameStatScope__Team = 1,
		EFortMinigameStatScope__Player = 2,
	};


	// Enum /Script/FortniteGame.EDeviceFireVolumeFireOption
	enum EDeviceFireVolumeFireOption
	{
		EDeviceFireVolumeFireOption__None = 0,
		EDeviceFireVolumeFireOption__UseIslandSettings = 1,
		EDeviceFireVolumeFireOption__Yes = 2,
		EDeviceFireVolumeFireOption__No = 3,
	};


	// Enum /Script/FortniteGame.EFortMinigamePlayerSpawnLocationSetting
	enum EFortMinigamePlayerSpawnLocationSetting
	{
		EFortMinigamePlayerSpawnLocationSetting__SpawnPads = 0,
		EFortMinigamePlayerSpawnLocationSetting__Device = 1,
		EFortMinigamePlayerSpawnLocationSetting__Preplaced = 2,
		EFortMinigamePlayerSpawnLocationSetting__Air = 3,
		EFortMinigamePlayerSpawnLocationSetting__CurrentLocation = 4,
		EFortMinigamePlayerSpawnLocationSetting__DoNotSpawn = 5,
	};


	// Enum /Script/FortniteGame.EFortMinigameEnd
	enum EFortMinigameEnd
	{
		EFortMinigameEnd__Teardown = 0,
		EFortMinigameEnd__AbandonGame = 1,
		EFortMinigameEnd__EndGame = 2,
		EFortMinigameEnd__EndRound = 3,
	};


	// Enum /Script/FortniteGame.EMinigameTeamListType
	enum EMinigameTeamListType
	{
		EMinigameTeamListType__Blacklist = 0,
		EMinigameTeamListType__Whitelist = 1,
	};


	// Enum /Script/FortniteGame.EMinigameScoreboardStates
	enum EMinigameScoreboardStates
	{
		EMinigameScoreboardStates__RoundEndDisplayWinner = 0,
		EMinigameScoreboardStates__GameEndDisplayWinner = 1,
		EMinigameScoreboardStates__RoundEndDisplayScoreboard = 2,
		EMinigameScoreboardStates__GameEndDisplayScoreboard = 3,
		EMinigameScoreboardStates__Max = 4,
	};


	// Enum /Script/FortniteGame.EMinigameFullscreenMapWidgetType
	enum EMinigameFullscreenMapWidgetType
	{
		EMinigameFullscreenMapWidgetType__Last_Opened = 0,
		EMinigameFullscreenMapWidgetType__Default_Map = 1,
		EMinigameFullscreenMapWidgetType__Creative_Scoreboard = 2,
	};


	// Enum /Script/FortniteGame.EFortMinigameExec
	enum EFortMinigameExec
	{
		EFortMinigameExec__Yes = 0,
		EFortMinigameExec__No = 1,
	};


	// Enum /Script/FortniteGame.EFortMinigameState
	enum EFortMinigameState
	{
		EFortMinigameState__PreGame = 0,
		EFortMinigameState__Setup = 1,
		EFortMinigameState__Transitioning = 2,
		EFortMinigameState__WaitingForCameras = 3,
		EFortMinigameState__Warmup = 4,
		EFortMinigameState__InProgress = 5,
		EFortMinigameState__PostGameTimeDilation = 6,
		EFortMinigameState__PostRoundEnd = 7,
		EFortMinigameState__PostGameEnd = 8,
		EFortMinigameState__PostGameAbandon = 9,
		EFortMinigameState__PostGameReset = A,
		EFortMinigameState__Teardown = B,
	};


	// Enum /Script/FortniteGame.EClearItemOnSwitchRules
	enum EClearItemOnSwitchRules
	{
		EClearItemOnSwitchRules__NeverClear = 0,
		EClearItemOnSwitchRules__ClearOnTeamSwitch = 1,
		EClearItemOnSwitchRules__ClearOnClassSwitch = 2,
		EClearItemOnSwitchRules__ClearOnClassOrTeamSwitch = 3,
	};


	// Enum /Script/FortniteGame.ERoundVictoryAnimation
	enum ERoundVictoryAnimation
	{
		ERoundVictoryAnimation__Default = 0,
		ERoundVictoryAnimation__None = 1,
	};


	// Enum /Script/FortniteGame.EMinigameGameEndCustomPostGameAnimationColorSet
	enum EMinigameGameEndCustomPostGameAnimationColorSet
	{
		EMinigameGameEndCustomPostGameAnimationColorSet__Default = 0,
		EMinigameGameEndCustomPostGameAnimationColorSet__GoldenYellow = 1,
		EMinigameGameEndCustomPostGameAnimationColorSet__BlueGreen = 2,
		EMinigameGameEndCustomPostGameAnimationColorSet__VibrantPurple = 3,
		EMinigameGameEndCustomPostGameAnimationColorSet__FuriousFlame = 4,
		EMinigameGameEndCustomPostGameAnimationColorSet__Monochrome = 5,
		EMinigameGameEndCustomPostGameAnimationColorSet__FailureRed = 6,
	};


	// Enum /Script/FortniteGame.EMinigameGameEndCustomPostGameAnimationStyle
	enum EMinigameGameEndCustomPostGameAnimationStyle
	{
		EMinigameGameEndCustomPostGameAnimationStyle__LightningBolt = 0,
		EMinigameGameEndCustomPostGameAnimationStyle__Shards = 1,
		EMinigameGameEndCustomPostGameAnimationStyle__WipeLeftToRight = 2,
		EMinigameGameEndCustomPostGameAnimationStyle__WipeRightToLeft = 3,
		EMinigameGameEndCustomPostGameAnimationStyle__WipeTopToBottom = 4,
		EMinigameGameEndCustomPostGameAnimationStyle__WipeBottomToTop = 5,
		EMinigameGameEndCustomPostGameAnimationStyle__None = 6,
	};


	// Enum /Script/FortniteGame.EMinigameGameEndPostGameType
	enum EMinigameGameEndPostGameType
	{
		EMinigameGameEndPostGameType__Classic = 0,
		EMinigameGameEndPostGameType__BattleRoyale = 1,
		EMinigameGameEndPostGameType__Custom = 2,
	};


	// Enum /Script/FortniteGame.EMinigameGameEndCallout
	enum EMinigameGameEndCallout
	{
		EMinigameGameEndCallout__WinLose = 0,
		EMinigameGameEndCallout__Placement = 1,
		EMinigameGameEndCallout__Cooperative = 2,
	};


	// Enum /Script/FortniteGame.EMinigameWinCondition
	enum EMinigameWinCondition
	{
		EMinigameWinCondition__MostRoundWins = 0,
		EMinigameWinCondition__MostScoreWins = 1,
	};


	// Enum /Script/FortniteGame.EMinigamePlayerPersistence
	enum EMinigamePlayerPersistence
	{
		EMinigamePlayerPersistence__None = 0,
		EMinigamePlayerPersistence__PartyLeaderOnly = 1,
		EMinigamePlayerPersistence__AllPlayers = 2,
	};


	// Enum /Script/FortniteGame.EFortMinigameClassResetType
	enum EFortMinigameClassResetType
	{
		EFortMinigameClassResetType__Never = 0,
		EFortMinigameClassResetType__RoundEnd = 1,
		EFortMinigameClassResetType__GameEnd = 2,
		EFortMinigameClassResetType__PlayerDeath = 3,
	};


	// Enum /Script/FortniteGame.EFortMinigameSpawnPadSelection
	enum EFortMinigameSpawnPadSelection
	{
		EFortMinigameSpawnPadSelection__Random = 0,
		EFortMinigameSpawnPadSelection__NearTeammates = 1,
	};


	// Enum /Script/FortniteGame.EFortMinigamePostGameSpawnLocationSetting
	enum EFortMinigamePostGameSpawnLocationSetting
	{
		EFortMinigamePostGameSpawnLocationSetting__IslandStart = 0,
		EFortMinigamePostGameSpawnLocationSetting__PreGameLocation = 1,
	};


	// Enum /Script/FortniteGame.ERespawnSpectateBehavior
	enum ERespawnSpectateBehavior
	{
		ERespawnSpectateBehavior__Spectate = 0,
		ERespawnSpectateBehavior__BlackScreen = 1,
	};


	// Enum /Script/FortniteGame.ECreativeBossDisplayMode
	enum ECreativeBossDisplayMode
	{
		ECreativeBossDisplayMode__DontOverride = 0,
		ECreativeBossDisplayMode__Yes = 1,
		ECreativeBossDisplayMode__No = 2,
	};


	// Enum /Script/FortniteGame.EPlayerIndicatorDisplayMode
	enum EPlayerIndicatorDisplayMode
	{
		EPlayerIndicatorDisplayMode__DontOverride = 0,
		EPlayerIndicatorDisplayMode__TeamOnly = 1,
		EPlayerIndicatorDisplayMode__Enemies = 2,
		EPlayerIndicatorDisplayMode__Anyone = 3,
		EPlayerIndicatorDisplayMode__Never = 4,
	};


	// Enum /Script/FortniteGame.ELeecherStatus
	enum ELeecherStatus
	{
		ELeecherStatus__NotReady = 0,
		ELeecherStatus__NonLeecher = 1,
		ELeecherStatus__Leecher = 2,
	};


	// Enum /Script/FortniteGame.EHUDMessagePlacement
	enum EHUDMessagePlacement
	{
		EHUDMessagePlacement__None = 0,
		EHUDMessagePlacement__BottomCenter = 1,
		EHUDMessagePlacement__TopCenter = 2,
		EHUDMessagePlacement__CenterRight = 3,
	};


	// Enum /Script/FortniteGame.EMatchmakingCancelReasonV2
	enum EMatchmakingCancelReasonV2
	{
		EMatchmakingCancelReasonV2__Explicit = 0,
		EMatchmakingCancelReasonV2__JoinedParty = 1,
		EMatchmakingCancelReasonV2__LeftParty = 2,
		EMatchmakingCancelReasonV2__PartyMemberJoined = 3,
		EMatchmakingCancelReasonV2__PartyMemberLeft = 4,
		EMatchmakingCancelReasonV2__PartyMemberCanceled = 5,
		EMatchmakingCancelReasonV2__PartyLeaderSwap = 6,
		EMatchmakingCancelReasonV2__PlayReplay = 7,
		EMatchmakingCancelReasonV2__UIDestroyed = 8,
		EMatchmakingCancelReasonV2__PCDestroyed = 9,
		EMatchmakingCancelReasonV2__AppBackgrounded = A,
		EMatchmakingCancelReasonV2__HotfixOutdated = B,
		EMatchmakingCancelReasonV2__TournamentOver = C,
		EMatchmakingCancelReasonV2__NotInParty = D,
		EMatchmakingCancelReasonV2__CrossplayBlocked = E,
		EMatchmakingCancelReasonV2__TournamentCrossplayBlocked = F,
		EMatchmakingCancelReasonV2__AccountLevelTooLow = 10,
		EMatchmakingCancelReasonV2__FillNoCrossplay = 11,
		EMatchmakingCancelReasonV2__CreativeCanceledByLeader = 12,
		EMatchmakingCancelReasonV2__CreativeMemberLeftIsland = 13,
		EMatchmakingCancelReasonV2__CreativeIslandStateChanged = 14,
		EMatchmakingCancelReasonV2__JoinInProgressRejected = 15,
		EMatchmakingCancelReasonV2__MatchmakingDisabled = 16,
		EMatchmakingCancelReasonV2__NotLoggedIn = 17,
		EMatchmakingCancelReasonV2__NoIdentityInterface = 18,
		EMatchmakingCancelReasonV2__NoSessionInterface = 19,
		EMatchmakingCancelReasonV2__TimedOut = 1A,
		EMatchmakingCancelReasonV2__InvalidPlaylist = 1B,
		EMatchmakingCancelReasonV2__AttemptedToQueueTooFrequently = 1C,
		EMatchmakingCancelReasonV2__TournamentBlackout = 1D,
		EMatchmakingCancelReasonV2__CancelledDuringPreTravelSetup = 1E,
		EMatchmakingCancelReasonV2__Unknown = 1F,
	};


	// Enum /Script/FortniteGame.EFortInputActionGroup
	enum EFortInputActionGroup
	{
		EFortInputActionGroup__AllModes = 0,
		EFortInputActionGroup__Combat = 1,
		EFortInputActionGroup__Building = 2,
		EFortInputActionGroup__Movement = 3,
		EFortInputActionGroup__Edit = 4,
		EFortInputActionGroup__Death = 5,
		EFortInputActionGroup__Cinematic = 6,
		EFortInputActionGroup__Picker = 7,
		EFortInputActionGroup__Other = 8,
		EFortInputActionGroup__Interaction = 9,
		EFortInputActionGroup__AthenaLTMAbilities = A,
		EFortInputActionGroup__ShoppingCart = B,
		EFortInputActionGroup__ShoppingCartDriver = C,
		EFortInputActionGroup__ShoppingCartPassenger = D,
		EFortInputActionGroup__Cannon = E,
		EFortInputActionGroup__CannonDriver = F,
		EFortInputActionGroup__CannonPassenger = 10,
		EFortInputActionGroup__GolfCart = 11,
		EFortInputActionGroup__GolfCartDriver = 12,
		EFortInputActionGroup__GolfCartPassenger = 13,
		EFortInputActionGroup__QuadCrasher = 14,
		EFortInputActionGroup__QuadCrasherDriver = 15,
		EFortInputActionGroup__QuadCrasherPassenger = 16,
		EFortInputActionGroup__Biplane = 17,
		EFortInputActionGroup__BiplaneDriver = 18,
		EFortInputActionGroup__BiplaneGroundDriver = 19,
		EFortInputActionGroup__BiplanePassenger = 1A,
		EFortInputActionGroup__Hamsterball = 1B,
		EFortInputActionGroup__Jackal = 1C,
		EFortInputActionGroup__Ostrich = 1D,
		EFortInputActionGroup__OstrichDriver = 1E,
		EFortInputActionGroup__OstrichPassenger = 1F,
		EFortInputActionGroup__Meatball = 20,
		EFortInputActionGroup__MeatballDriver = 21,
		EFortInputActionGroup__MeatballPassenger = 22,
		EFortInputActionGroup__HoagieDriver = 23,
		EFortInputActionGroup__Dagwood = 24,
		EFortInputActionGroup__DagwoodDriver = 25,
		EFortInputActionGroup__DagwoodPassenger = 26,
		EFortInputActionGroup__Nevada = 27,
		EFortInputActionGroup__NevadaDriver = 28,
		EFortInputActionGroup__MountedTurret = 29,
		EFortInputActionGroup__Spectating = 2A,
		EFortInputActionGroup__FullscreenMap = 2B,
		EFortInputActionGroup__CreativeAll = 2C,
		EFortInputActionGroup__CreativeModeratorMode = 2D,
		EFortInputActionGroup__CreativeMoveToolEquipped = 2E,
		EFortInputActionGroup__CreativeMoveObjectsFreely = 2F,
		EFortInputActionGroup__CreativeMoveBuildingsOnGrid = 30,
		EFortInputActionGroup__CreativeFlying = 31,
		EFortInputActionGroup__CreativeIslandPanel = 32,
		EFortInputActionGroup__CreativeChair = 33,
		EFortInputActionGroup__PropSelectorEquipped = 34,
		EFortInputActionGroup__CreativeInputDevice = 35,
		EFortInputActionGroup__DBNOCarryStart = 36,
		EFortInputActionGroup__DBNOCarryStop = 37,
		EFortInputActionGroup__DBNOCarry = 38,
		EFortInputActionGroup__InteractionStart = 39,
		EFortInputActionGroup__InteractionStop = 3A,
		EFortInputActionGroup__BattleLab = 3B,
		EFortInputActionGroup__RemoteControl = 3C,
		EFortInputActionGroup__SuperDuper = 3D,
		EFortInputActionGroup__Tether = 3E,
		EFortInputActionGroup__Riding = 3F,
		EFortInputActionGroup__Tank = 40,
		EFortInputActionGroup__TankDriver = 41,
		EFortInputActionGroup__TankPassenger = 42,
		EFortInputActionGroup__RockVehicle = 43,
		EFortInputActionGroup__RockVehicleB = 44,
		EFortInputActionGroup__Dirtbike = 45,
		EFortInputActionGroup__DirtbikeDriver = 46,
		EFortInputActionGroup__DirtbikePassenger = 47,
		EFortInputActionGroup__Sportbike = 48,
		EFortInputActionGroup__SportbikeDriver = 49,
		EFortInputActionGroup__SportbikePassenger = 4A,
		EFortInputActionGroup__PlayerAugments = 4B,
		EFortInputActionGroup__Targeting = 4C,
		EFortInputActionGroup__CombatAndBuilding = 4D,
		EFortInputActionGroup__CombatAndAthenaLTMAbilities = 4E,
		EFortInputActionGroup__CombatBuildingAndAthenaLTMAbilities = 4F,
	};


	// Enum /Script/FortniteGame.EEndOfMatchReason
	enum EEndOfMatchReason
	{
		EEndOfMatchReason__LastManStanding = 0,
		EEndOfMatchReason__ScoreReached = 1,
		EEndOfMatchReason__TimeRanOut = 2,
		EEndOfMatchReason__WinEventOccurred = 3,
		EEndOfMatchReason__AllLoggedOut = 4,
		EEndOfMatchReason__AllEliminated = 5,
	};


	// Enum /Script/FortniteGame.EDeathCause
	enum EDeathCause
	{
		EDeathCause__OutsideSafeZone = 0,
		EDeathCause__FallDamage = 1,
		EDeathCause__Pistol = 2,
		EDeathCause__Shotgun = 3,
		EDeathCause__Rifle = 4,
		EDeathCause__SMG = 5,
		EDeathCause__Sniper = 6,
		EDeathCause__SniperNoScope = 7,
		EDeathCause__Melee = 8,
		EDeathCause__InfinityBlade = 9,
		EDeathCause__Grenade = A,
		EDeathCause__C4 = B,
		EDeathCause__GrenadeLauncher = C,
		EDeathCause__RocketLauncher = D,
		EDeathCause__Minigun = E,
		EDeathCause__Bow = F,
		EDeathCause__Trap = 10,
		EDeathCause__DBNOTimeout = 11,
		EDeathCause__Banhammer = 12,
		EDeathCause__RemovedFromGame = 13,
		EDeathCause__MassiveMelee = 14,
		EDeathCause__MassiveDiveBomb = 15,
		EDeathCause__MassiveRanged = 16,
		EDeathCause__Vehicle = 17,
		EDeathCause__ShoppingCart = 18,
		EDeathCause__ATK = 19,
		EDeathCause__QuadCrasher = 1A,
		EDeathCause__Biplane = 1B,
		EDeathCause__BiplaneGun = 1C,
		EDeathCause__LMG = 1D,
		EDeathCause__GasGrenade = 1E,
		EDeathCause__InstantEnvironmental = 1F,
		EDeathCause__InstantEnvironmentalFellOutOfWorld = 20,
		EDeathCause__InstantEnvironmentalUnderLandscape = 21,
		EDeathCause__Turret = 22,
		EDeathCause__ShipCannon = 23,
		EDeathCause__Cube = 24,
		EDeathCause__Balloon = 25,
		EDeathCause__StormSurge = 26,
		EDeathCause__Lava = 27,
		EDeathCause__BasicFiend = 28,
		EDeathCause__EliteFiend = 29,
		EDeathCause__RangedFiend = 2A,
		EDeathCause__BasicBrute = 2B,
		EDeathCause__EliteBrute = 2C,
		EDeathCause__MegaBrute = 2D,
		EDeathCause__SilentSwitchingToSpectate = 2E,
		EDeathCause__LoggedOut = 2F,
		EDeathCause__TeamSwitchSuicide = 30,
		EDeathCause__WonMatch = 31,
		EDeathCause__Unspecified = 32,
	};


	// Enum /Script/FortniteGame.ERewardSource
	enum ERewardSource
	{
		ERewardSource__Invalid = 0,
		ERewardSource__MinutesPlayed = 1,
		ERewardSource__FirstKill = 2,
		ERewardSource__TeamKills = 3,
		ERewardSource__FirstRevive = 4,
		ERewardSource__AdditionalRevives = 5,
		ERewardSource__Placement = 6,
		ERewardSource__Medals = 7,
		ERewardSource__FirstWin = 8,
		ERewardSource__SeasonLevelUp = 9,
		ERewardSource__BookLevelUp = A,
		ERewardSource__MatchXP = B,
		ERewardSource__MAX_COUNT = C,
	};


	// Enum /Script/FortniteGame.EAthenaMatchXpMultiplierSource
	enum EAthenaMatchXpMultiplierSource
	{
		EAthenaMatchXpMultiplierSource__Invalid = 0,
		EAthenaMatchXpMultiplierSource__BattlePassSelf = 1,
		EAthenaMatchXpMultiplierSource__BattlePassFriends = 2,
		EAthenaMatchXpMultiplierSource__CosmeticSet = 3,
		EAthenaMatchXpMultiplierSource__AntiAddictionPenalty = 4,
		EAthenaMatchXpMultiplierSource__BonusXpEvent = 5,
		EAthenaMatchXpMultiplierSource__MAX_COUNT = 6,
	};


	// Enum /Script/FortniteGame.EFortAccoladeSubtype
	enum EFortAccoladeSubtype
	{
		EFortAccoladeSubtype__NotSet = 0,
		EFortAccoladeSubtype__Action = 1,
		EFortAccoladeSubtype__Discovery = 2,
		EFortAccoladeSubtype__XpToken = 3,
	};


	// Enum /Script/FortniteGame.EDuelState
	enum EDuelState
	{
		EDuelState__Started = 0,
		EDuelState__Won = 1,
		EDuelState__Lost = 2,
	};


	// Enum /Script/FortniteGame.EFortVolumeType
	enum EFortVolumeType
	{
		EFortVolumeType__None = 0,
		EFortVolumeType__Island = 1,
		EFortVolumeType__Published = 2,
		EFortVolumeType__Featured = 3,
		EFortVolumeType__Hub = 4,
	};


	// Enum /Script/FortniteGame.EFortEncounterDirection
	enum EFortEncounterDirection
	{
		EFortEncounterDirection__North = 0,
		EFortEncounterDirection__NorthEast = 1,
		EFortEncounterDirection__East = 2,
		EFortEncounterDirection__SouthEast = 3,
		EFortEncounterDirection__South = 4,
		EFortEncounterDirection__SouthWest = 5,
		EFortEncounterDirection__West = 6,
		EFortEncounterDirection__NorthWest = 7,
		EFortEncounterDirection__Max_None = 8,
	};


	// Enum /Script/FortniteGame.EFortWorldMarkerType
	enum EFortWorldMarkerType
	{
		EFortWorldMarkerType__None = 0,
		EFortWorldMarkerType__Location = 1,
		EFortWorldMarkerType__Enemy = 2,
		EFortWorldMarkerType__Item = 3,
		EFortWorldMarkerType__Elimination = 4,
		EFortWorldMarkerType__SpecialLocal = 5,
		EFortWorldMarkerType__SpecialServer = 6,
		EFortWorldMarkerType__Teammate = 7,
		EFortWorldMarkerType__PingGROUPSTART = 8,
		EFortWorldMarkerType__PingGoTo = 9,
		EFortWorldMarkerType__PingHoldPosition = A,
		EFortWorldMarkerType__PingNoIcon = B,
		EFortWorldMarkerType__PingAttack = C,
		EFortWorldMarkerType__PingGROUPEND = D,
		EFortWorldMarkerType__SquadComsGROUPSTART = E,
		EFortWorldMarkerType__SquadComsWatchArea = F,
		EFortWorldMarkerType__SquadComsDefend = 10,
		EFortWorldMarkerType__SquadComsSomeonesHere = 11,
		EFortWorldMarkerType__SquadComsLootArea = 12,
		EFortWorldMarkerType__SquadComsAttack = 13,
		EFortWorldMarkerType__SquadComsHelp = 14,
		EFortWorldMarkerType__SquadComsGROUPEND = 15,
	};


	// Enum /Script/FortniteGame.EFortBuildingType
	enum EFortBuildingType
	{
		EFortBuildingType__Wall = 0,
		EFortBuildingType__Floor = 1,
		EFortBuildingType__Corner = 2,
		EFortBuildingType__Deco = 3,
		EFortBuildingType__Prop = 4,
		EFortBuildingType__Stairs = 5,
		EFortBuildingType__Roof = 6,
		EFortBuildingType__Pillar = 7,
		EFortBuildingType__SpawnedItem = 8,
		EFortBuildingType__Container = 9,
		EFortBuildingType__Trap = A,
		EFortBuildingType__GenericCenterCellActor = B,
		EFortBuildingType__StructuralCorner = C,
		EFortBuildingType__RoofSpacer = D,
		EFortBuildingType__None = E,
	};


	// Enum /Script/FortniteGame.EMatchmakingUtilityState
	enum EMatchmakingUtilityState
	{
		EMatchmakingUtilityState__Idle = 0,
		EMatchmakingUtilityState__MatchmakingUtilityBegin = 1,
		EMatchmakingUtilityState__MatchmakingUtilityCompleted = 2,
		EMatchmakingUtilityState__Completed = 3,
		EMatchmakingUtilityState__Failed = 4,
		EMatchmakingUtilityState__CheckSittingOutState = 5,
		EMatchmakingUtilityState__InitializePlaylistSelection = 6,
		EMatchmakingUtilityState__JoinMatchInProgress = 7,
		EMatchmakingUtilityState__CheckingIfBanned = 8,
		EMatchmakingUtilityState__PrivateMatchMinPartySize = 9,
		EMatchmakingUtilityState__GameFeaturePluginDownloadModal = A,
		EMatchmakingUtilityState__CreativeContentDownloadModal = B,
		EMatchmakingUtilityState__CheckModeratorModePermissions = C,
		EMatchmakingUtilityState__CrossplayOptIn_GameMode = D,
		EMatchmakingUtilityState__CrossplayOptIn_Fill = E,
		EMatchmakingUtilityState__CrossplayDevices = F,
		EMatchmakingUtilityState__FactionChoice = 10,
		EMatchmakingUtilityState__SetPartyReadiness = 11,
		EMatchmakingUtilityState__WaitingForPartyReadinessConfirmed = 12,
		EMatchmakingUtilityState__TournamentEligibility = 13,
		EMatchmakingUtilityState__TournamentRegionLock = 14,
		EMatchmakingUtilityState__TournamentMFA = 15,
		EMatchmakingUtilityState__TournamentEULA = 16,
		EMatchmakingUtilityState__AppEnvSecurity = 17,
		EMatchmakingUtilityState__WaitingForInitialPlaylistSelection = 18,
		EMatchmakingUtilityState__ServerBrowsers = 19,
		EMatchmakingUtilityState__WaitingForServerBrowserPlaylistSwap = 1A,
		EMatchmakingUtilityState__DelayReadyUp = 1B,
		EMatchmakingUtilityState__QoSSettings_UpdateManager = 1C,
		EMatchmakingUtilityState__QoSSettings_UpdateManager_Success = 1D,
		EMatchmakingUtilityState__SetAthenaReady = 1E,
		EMatchmakingUtilityState__WaitingForAthenaReadinessConfirmed = 1F,
		EMatchmakingUtilityState__PreloadAthena = 20,
		EMatchmakingUtilityState__UpdateHiddenMatchmakingDelay = 21,
		EMatchmakingUtilityState__WaitingForUpdateHiddenMatchmakingDelay = 22,
		EMatchmakingUtilityState__HiddenMatchmakingDelay = 23,
		EMatchmakingUtilityState__FindExistingEditSession = 24,
		EMatchmakingUtilityState__SelectingFlow = 25,
		EMatchmakingUtilityState__ReadyingUpforFlow = 26,
		EMatchmakingUtilityState__PartyMemberSameLocationCheck = 27,
		EMatchmakingUtilityState__CallingMatchmakingForFlow = 28,
		EMatchmakingUtilityState__WaitingForJoinMatchInProgressResponse = 29,
		EMatchmakingUtilityState__WaitingForMatchmakingResponse = 2A,
		EMatchmakingUtilityState__WaitingForMatchmakingToCompleteAsPartyMember = 2B,
		EMatchmakingUtilityState__WaitingForEntirePartyReady = 2C,
		EMatchmakingUtilityState__WaitingForPartyToBeInSameLocation = 2D,
		EMatchmakingUtilityState__WaitingForPartyToSwitchSubgames = 2E,
		EMatchmakingUtilityState__WaitingToRestartMatchmaking_TooFrequentRequest = 2F,
		EMatchmakingUtilityState__RequestingSpectateMatch = 30,
		EMatchmakingUtilityState__ProcessingMatchmakingResults_Success = 31,
		EMatchmakingUtilityState__ProcessingMatchmakingResults_Fail = 32,
		EMatchmakingUtilityState__PreloadingForJoiningMatchInProgress = 33,
		EMatchmakingUtilityState__ProcessingJoinMatchInProgressResults_Success = 34,
		EMatchmakingUtilityState__ProcessingJoinMatchInProgressResults_Fail = 35,
		EMatchmakingUtilityState__RestartingReadyChecksForLegacyFlow = 36,
		EMatchmakingUtilityState__RestartingMatchmaking = 37,
		EMatchmakingUtilityState__QueryingForLiveSpectatorEula = 38,
		EMatchmakingUtilityState__PreTravelToSessionSetup = 39,
		EMatchmakingUtilityState__RunningPlaylistChecks = 3A,
		EMatchmakingUtilityState__NewReadiness_Begin = 3B,
		EMatchmakingUtilityState__NewReadiness_Ready_WaitingForConfirmation = 3C,
		EMatchmakingUtilityState__NewReadiness_Unready_WaitingForConfirmation = 3D,
		EMatchmakingUtilityState__NewReadiness_End = 3E,
		EMatchmakingUtilityState__INVALID = 3F,
	};


	// Enum /Script/FortniteGame.EFortBuildingPersistentState
	enum EFortBuildingPersistentState
	{
		EFortBuildingPersistentState__Default = 0,
		EFortBuildingPersistentState__New = 1,
		EFortBuildingPersistentState__Constructed = 2,
		EFortBuildingPersistentState__Destroyed = 3,
		EFortBuildingPersistentState__Searched = 4,
		EFortBuildingPersistentState__None = 5,
	};


	// Enum /Script/FortniteGame.EFortBuildingInitializationReason
	enum EFortBuildingInitializationReason
	{
		EFortBuildingInitializationReason__StaticallyPlaced = 0,
		EFortBuildingInitializationReason__Spawned = 1,
		EFortBuildingInitializationReason__Replaced = 2,
		EFortBuildingInitializationReason__LoadedFromSave = 3,
		EFortBuildingInitializationReason__DynamicBuilderPlaced = 4,
		EFortBuildingInitializationReason__PlacementTool = 5,
		EFortBuildingInitializationReason__TrapTool = 6,
		EFortBuildingInitializationReason__None = 7,
	};


	// Enum /Script/FortniteGame.EFortDayPhase
	enum EFortDayPhase
	{
		EFortDayPhase__Morning = 0,
		EFortDayPhase__Day = 1,
		EFortDayPhase__Evening = 2,
		EFortDayPhase__Night = 3,
		EFortDayPhase__NumPhases = 4,
	};


	// Enum /Script/FortniteGame.EDynamicBuildingPlacementType
	enum EDynamicBuildingPlacementType
	{
		EDynamicBuildingPlacementType__CountsTowardsBounds = 0,
		EDynamicBuildingPlacementType__DestroyIfColliding = 1,
		EDynamicBuildingPlacementType__DestroyAnythingThatCollides = 2,
	};


	// Enum /Script/FortniteGame.EBuildingActorComponentCreationPolicy
	enum EBuildingActorComponentCreationPolicy
	{
		EBuildingActorComponentCreationPolicy__Never = 0,
		EBuildingActorComponentCreationPolicy__Lazy = 1,
		EBuildingActorComponentCreationPolicy__Always = 2,
	};


	// Enum /Script/FortniteGame.UFortMatchmakingKnobsDataSource
	enum UFortMatchmakingKnobsDataSource
	{
		UFortMatchmakingKnobsDataSource__None = 0,
		UFortMatchmakingKnobsDataSource__Playlist = 1,
		UFortMatchmakingKnobsDataSource__Mutator = 2,
		UFortMatchmakingKnobsDataSource__GameMode = 3,
		UFortMatchmakingKnobsDataSource__Permissions = 4,
		UFortMatchmakingKnobsDataSource__UISettings = 5,
		UFortMatchmakingKnobsDataSource__CreativeGlobalOption = 6,
		UFortMatchmakingKnobsDataSource__MatchmakingGenerated = 7,
		UFortMatchmakingKnobsDataSource__Debug = 8,
		UFortMatchmakingKnobsDataSource__Max = 9,
	};


	// Enum /Script/FortniteGame.EUserOptionDefinitionContextTagQueryFailBehavior
	enum EUserOptionDefinitionContextTagQueryFailBehavior
	{
		EUserOptionDefinitionContextTagQueryFailBehavior__Disables = 0,
		EUserOptionDefinitionContextTagQueryFailBehavior__Hides = 1,
	};


	// Enum /Script/FortniteGame.EAttributeInitLevelSource
	enum EAttributeInitLevelSource
	{
		EAttributeInitLevelSource__WorldDifficulty = 0,
		EAttributeInitLevelSource__PlayerBuildingSkill = 1,
		EAttributeInitLevelSource__AthenaPlaylist = 2,
	};


	// Enum /Script/FortniteGame.EFortAbilityTargetingSource
	enum EFortAbilityTargetingSource
	{
		EFortAbilityTargetingSource__Camera = 0,
		EFortAbilityTargetingSource__PawnForward = 1,
		EFortAbilityTargetingSource__PawnTowardsFocus = 2,
		EFortAbilityTargetingSource__WeaponForward = 3,
		EFortAbilityTargetingSource__WeaponTowardsFocus = 4,
		EFortAbilityTargetingSource__Custom = 5,
		EFortAbilityTargetingSource__Max_None = 6,
	};


	// Enum /Script/FortniteGame.EFortDeliveryInfoBuildingActorSpecification
	enum EFortDeliveryInfoBuildingActorSpecification
	{
		EFortDeliveryInfoBuildingActorSpecification__All = 0,
		EFortDeliveryInfoBuildingActorSpecification__PlayerBuildable = 1,
		EFortDeliveryInfoBuildingActorSpecification__NonPlayerBuildable = 2,
	};


	// Enum /Script/FortniteGame.EFortTeamAffiliation
	enum EFortTeamAffiliation
	{
		EFortTeamAffiliation__Friendly = 0,
		EFortTeamAffiliation__Neutral = 1,
		EFortTeamAffiliation__Hostile = 2,
	};


	// Enum /Script/FortniteGame.EFortProximityBasedGEApplicationType
	enum EFortProximityBasedGEApplicationType
	{
		EFortProximityBasedGEApplicationType__ApplyOnProximityPulse = 0,
		EFortProximityBasedGEApplicationType__ApplyOnProximityTouch = 1,
		EFortProximityBasedGEApplicationType__ApplyOnlyDuringProximityTouch = 2,
		EFortProximityBasedGEApplicationType__ApplyOnProximityExit = 3,
		EFortProximityBasedGEApplicationType__ApplyOnProximityPrePulse = 4,
	};


	// Enum /Script/FortniteGame.ETrustedPlatformType
	enum ETrustedPlatformType
	{
		ETrustedPlatformType__Unknown = 0,
		ETrustedPlatformType__Untrusted = 1,
		ETrustedPlatformType__PS4 = 2,
		ETrustedPlatformType__PS5 = 3,
		ETrustedPlatformType__XboxOne = 4,
		ETrustedPlatformType__Switch = 5,
	};


	// Enum /Script/FortniteGame.EReadyCheckState
	enum EReadyCheckState
	{
		EReadyCheckState__CheckStarted = 0,
		EReadyCheckState__Ready = 1,
		EReadyCheckState__NotReady = 2,
	};


	// Enum /Script/FortniteGame.EFortAppliedSwapItemAndVariantState
	enum EFortAppliedSwapItemAndVariantState
	{
		EFortAppliedSwapItemAndVariantState__None = 0,
		EFortAppliedSwapItemAndVariantState__Active = 1,
		EFortAppliedSwapItemAndVariantState__Inactive = 2,
	};


	// Enum /Script/FortniteGame.EFortCustomBodyType
	enum EFortCustomBodyType
	{
		EFortCustomBodyType__NONE = 0,
		EFortCustomBodyType__Small = 1,
		EFortCustomBodyType__Medium = 2,
		EFortCustomBodyType__MediumAndSmall = 3,
		EFortCustomBodyType__Large = 4,
		EFortCustomBodyType__LargeAndSmall = 5,
		EFortCustomBodyType__LargeAndMedium = 6,
		EFortCustomBodyType__All = 7,
		EFortCustomBodyType__Deprecated = 8,
	};


	// Enum /Script/FortniteGame.EFortCustomGender
	enum EFortCustomGender
	{
		EFortCustomGender__Invalid = 0,
		EFortCustomGender__Male = 1,
		EFortCustomGender__Female = 2,
		EFortCustomGender__Both = 3,
	};


	// Enum /Script/FortniteGame.EFortPlayerRole
	enum EFortPlayerRole
	{
		EFortPlayerRole__Player = 0,
		EFortPlayerRole__LiveSpectator = 1,
		EFortPlayerRole__ReplaySpectator = 2,
		EFortPlayerRole__InactivePlayer = 3,
	};


	// Enum /Script/FortniteGame.EFortKickReason
	enum EFortKickReason
	{
		EFortKickReason__NotKicked = 0,
		EFortKickReason__GenericKick = 1,
		EFortKickReason__WasBanned = 2,
		EFortKickReason__EncryptionRequired = 3,
		EFortKickReason__CrossPlayRestriction = 4,
		EFortKickReason__ClientIdRestriction = 5,
	};


	// Enum /Script/FortniteGame.EMessageDispatcherErrorMessageType
	enum EMessageDispatcherErrorMessageType
	{
		EMessageDispatcherErrorMessageType__FailedToSetTrigger_TooManyTriggers = 0,
		EMessageDispatcherErrorMessageType__FailedToSetReceiver_TooManyReceivers = 1,
		EMessageDispatcherErrorMessageType__FailedToSetReceiver_TooManyReceiversOnOneChannel = 2,
		EMessageDispatcherErrorMessageType__FailedToSetTriggerReceiver_InvalidChannel = 3,
		EMessageDispatcherErrorMessageType__FailedToEnqueueMessage = 4,
		EMessageDispatcherErrorMessageType__BuildLimitReached = 5,
		EMessageDispatcherErrorMessageType__UnknownError = 6,
	};


	// Enum /Script/FortniteGame.ECreativePersistenceErrorTypes
	enum ECreativePersistenceErrorTypes
	{
		ECreativePersistenceErrorTypes__None = 0,
		ECreativePersistenceErrorTypes__VersionError = 1,
		ECreativePersistenceErrorTypes__LocalOnly = 2,
		ECreativePersistenceErrorTypes__LSRError = 3,
	};


	// Enum /Script/FortniteGame.EFortBudgetCategory
	enum EFortBudgetCategory
	{
		EFortBudgetCategory__Memory = 0,
		EFortBudgetCategory__Simulation = 1,
		EFortBudgetCategory__Rendering = 2,
		EFortBudgetCategory__Network = 3,
		EFortBudgetCategory__Audio = 4,
		EFortBudgetCategory__Max = 5,
	};


	// Enum /Script/FortniteGame.EMatchAbandonState
	enum EMatchAbandonState
	{
		EMatchAbandonState__None = 0,
		EMatchAbandonState__Joining = 1,
		EMatchAbandonState__CanAbandon = 2,
		EMatchAbandonState__TeamLocked = 3,
	};


	// Enum /Script/FortniteGame.EKeepPlayingTogetherVotingStatus
	enum EKeepPlayingTogetherVotingStatus
	{
		EKeepPlayingTogetherVotingStatus__Undecided = 0,
		EKeepPlayingTogetherVotingStatus__OptedIn = 1,
		EKeepPlayingTogetherVotingStatus__OptedOut_Manual = 2,
		EKeepPlayingTogetherVotingStatus__OptedOut_PartySizeIncreased = 3,
		EKeepPlayingTogetherVotingStatus__OptedOut_PartyMemberInLobby = 4,
		EKeepPlayingTogetherVotingStatus__OptedOut_PartyMemberOptedOut = 5,
		EKeepPlayingTogetherVotingStatus__OptedOut_PartyMemberLeft = 6,
		EKeepPlayingTogetherVotingStatus__OptedOut_Forced = 7,
		EKeepPlayingTogetherVotingStatus__OptedOut_TimedOut = 8,
		EKeepPlayingTogetherVotingStatus__OptedOut_PlayerReturnedToLobby = 9,
		EKeepPlayingTogetherVotingStatus__OptedOut_OnlyPlayerInSquad = A,
		EKeepPlayingTogetherVotingStatus__OptedOut_Disconnected = B,
	};


	// Enum /Script/FortniteGame.EAthenaScoringEvent
	enum EAthenaScoringEvent
	{
		EAthenaScoringEvent__None = 0,
		EAthenaScoringEvent__Elimination = 1,
		EAthenaScoringEvent__ChestOpened = 2,
		EAthenaScoringEvent__AmmoCanOpened = 3,
		EAthenaScoringEvent__SupplyDropOpened = 4,
		EAthenaScoringEvent__SupplyLlamaOpened = 5,
		EAthenaScoringEvent__ForagedItemConsumed = 6,
		EAthenaScoringEvent__SurvivalInMinutes = 7,
		EAthenaScoringEvent__CollectedCoinBronze = 8,
		EAthenaScoringEvent__CollectedCoinSilver = 9,
		EAthenaScoringEvent__CollectedCoinGold = A,
		EAthenaScoringEvent__AIKilled = B,
	};


	// Enum /Script/FortniteGame.ETeamMemberState
	enum ETeamMemberState
	{
		ETeamMemberState__None = 0,
		ETeamMemberState__FIRST_CHAT_MESSAGE = 1,
		ETeamMemberState__NeedAmmoHeavy = 1,
		ETeamMemberState__NeedAmmoLight = 2,
		ETeamMemberState__NeedAmmoMedium = 3,
		ETeamMemberState__NeedAmmoShells = 4,
		ETeamMemberState__NeedAmmoRocket = 5,
		ETeamMemberState__ChatBubble = 6,
		ETeamMemberState__EnemySpotted = 7,
		ETeamMemberState__NeedBandages = 8,
		ETeamMemberState__NeedMaterials = 9,
		ETeamMemberState__NeedShields = A,
		ETeamMemberState__NeedWeapon = B,
		ETeamMemberState__LAST_CHAT_MESSAGE = B,
	};


	// Enum /Script/FortniteGame.EFortWeaponSoundState
	enum EFortWeaponSoundState
	{
		EFortWeaponSoundState__Normal = 0,
		EFortWeaponSoundState__LowAmmo = 1,
		EFortWeaponSoundState__Degraded = 2,
		EFortWeaponSoundState__Max_None = 3,
	};


	// Enum /Script/FortniteGame.EFortWeaponCoreAnimation
	enum EFortWeaponCoreAnimation
	{
		EFortWeaponCoreAnimation__Melee = 0,
		EFortWeaponCoreAnimation__Pistol = 1,
		EFortWeaponCoreAnimation__Shotgun = 2,
		EFortWeaponCoreAnimation__PaperBlueprint = 3,
		EFortWeaponCoreAnimation__Rifle = 4,
		EFortWeaponCoreAnimation__MeleeOneHand = 5,
		EFortWeaponCoreAnimation__MachinePistol = 6,
		EFortWeaponCoreAnimation__RocketLauncher = 7,
		EFortWeaponCoreAnimation__GrenadeLauncher = 8,
		EFortWeaponCoreAnimation__GoingCommando = 9,
		EFortWeaponCoreAnimation__AssaultRifle = A,
		EFortWeaponCoreAnimation__TacticalShotgun = B,
		EFortWeaponCoreAnimation__SniperRifle = C,
		EFortWeaponCoreAnimation__TrapPlacement = D,
		EFortWeaponCoreAnimation__ShoulderLauncher = E,
		EFortWeaponCoreAnimation__AbilityDecoTool = F,
		EFortWeaponCoreAnimation__Crossbow = 10,
		EFortWeaponCoreAnimation__C4 = 11,
		EFortWeaponCoreAnimation__RemoteControl = 12,
		EFortWeaponCoreAnimation__DualWield = 13,
		EFortWeaponCoreAnimation__AR_BullPup = 14,
		EFortWeaponCoreAnimation__AR_ForwardGrip = 15,
		EFortWeaponCoreAnimation__MedPackPaddles = 16,
		EFortWeaponCoreAnimation__SMG_P90 = 17,
		EFortWeaponCoreAnimation__AR_DrumGun = 18,
		EFortWeaponCoreAnimation__Consumable_Small = 19,
		EFortWeaponCoreAnimation__Consumable_Large = 1A,
		EFortWeaponCoreAnimation__Balloon = 1B,
		EFortWeaponCoreAnimation__MountedTurret = 1C,
		EFortWeaponCoreAnimation__CreativeTool = 1D,
		EFortWeaponCoreAnimation__ExplosiveBow = 1E,
		EFortWeaponCoreAnimation__AshtonIndigo = 1F,
		EFortWeaponCoreAnimation__AshtonChicago = 20,
		EFortWeaponCoreAnimation__MeleeDualWield = 21,
		EFortWeaponCoreAnimation__Unarmed = 22,
	};


	// Enum /Script/FortniteGame.EFortWeaponChargeStateForFireFX
	enum EFortWeaponChargeStateForFireFX
	{
		EFortWeaponChargeStateForFireFX__Partial = 0,
		EFortWeaponChargeStateForFireFX__Full = 1,
		EFortWeaponChargeStateForFireFX__Over = 2,
		EFortWeaponChargeStateForFireFX__Max_None = 3,
	};


	// Enum /Script/FortniteGame.EFortRarity
	enum EFortRarity
	{
		EFortRarity__Common = 0,
		EFortRarity__Uncommon = 1,
		EFortRarity__Rare = 2,
		EFortRarity__Epic = 3,
		EFortRarity__Legendary = 4,
		EFortRarity__Mythic = 5,
		EFortRarity__Transcendent = 6,
		EFortRarity__Unattainable = 7,
		EFortRarity__NumRarityValues = 8,
	};


	// Enum /Script/FortniteGame.EFortWeaponTriggerType
	enum EFortWeaponTriggerType
	{
		EFortWeaponTriggerType__OnPress = 0,
		EFortWeaponTriggerType__Automatic = 1,
		EFortWeaponTriggerType__OnRelease = 2,
		EFortWeaponTriggerType__OnPressAndRelease = 3,
		EFortWeaponTriggerType__Custom = 4,
	};


	// Enum /Script/FortniteGame.EFortReloadFXState
	enum EFortReloadFXState
	{
		EFortReloadFXState__ReloadStart = 0,
		EFortReloadFXState__ReloadCartridge = 1,
		EFortReloadFXState__ReloadEnd = 2,
		EFortReloadFXState__Max_None = 3,
	};


	// Enum /Script/FortniteGame.EFortWeaponHandGripType
	enum EFortWeaponHandGripType
	{
		EFortWeaponHandGripType__Default = 0,
		EFortWeaponHandGripType__OneHand = 1,
		EFortWeaponHandGripType__TwoHand = 2,
	};


	// Enum /Script/FortniteGame.EFortCustomPartType
	enum EFortCustomPartType
	{
		EFortCustomPartType__Head = 0,
		EFortCustomPartType__Body = 1,
		EFortCustomPartType__Hat = 2,
		EFortCustomPartType__Backpack = 3,
		EFortCustomPartType__MiscOrTail = 4,
		EFortCustomPartType__Face = 5,
		EFortCustomPartType__Gameplay = 6,
		EFortCustomPartType__NumTypes = 7,
	};


	// Enum /Script/FortniteGame.EFortWeaponReduceMeshWorkSetting
	enum EFortWeaponReduceMeshWorkSetting
	{
		EFortWeaponReduceMeshWorkSetting__DisableTick = 0,
		EFortWeaponReduceMeshWorkSetting__DontReduceWork = 1,
		EFortWeaponReduceMeshWorkSetting__HandledInAnimInstance = 2,
	};


	// Enum /Script/FortniteGame.EFortWeaponAbilityRemovalPolicy
	enum EFortWeaponAbilityRemovalPolicy
	{
		EFortWeaponAbilityRemovalPolicy__GameDefault = 0,
		EFortWeaponAbilityRemovalPolicy__Remove = 1,
		EFortWeaponAbilityRemovalPolicy__Persist = 2,
	};


	// Enum /Script/FortniteGame.EFortWeaponReloadType
	enum EFortWeaponReloadType
	{
		EFortWeaponReloadType__ReloadWholeClip = 0,
		EFortWeaponReloadType__ReloadIndividualBullets = 1,
		EFortWeaponReloadType__ReloadBasedOnAmmoCostPerFire = 2,
		EFortWeaponReloadType__ReloadBasedOnCartridgePerFire = 3,
	};


	// Enum /Script/FortniteGame.EItemWrapMaterialType
	enum EItemWrapMaterialType
	{
		EItemWrapMaterialType__WeaponWrap = 0,
		EItemWrapMaterialType__VehicleWrap_Opaque = 1,
		EItemWrapMaterialType__VehicleWrap_Masked = 2,
		EItemWrapMaterialType__Character = 3,
	};


	// Enum /Script/FortniteGame.EAdHocSquads_InviteStatus
	enum EAdHocSquads_InviteStatus
	{
		EAdHocSquads_InviteStatus__Unset = 0,
		EAdHocSquads_InviteStatus__Inviting = 1,
		EAdHocSquads_InviteStatus__InviteEnded_APlayerAcceptedTheInvite = 2,
		EAdHocSquads_InviteStatus__InviteCancelled_SquadFull = 3,
		EAdHocSquads_InviteStatus__InviteCancelled_ByInvitingPlayer = 4,
	};


	// Enum /Script/FortniteGame.EBuildingReplacementType
	enum EBuildingReplacementType
	{
		BRT_None = 0,
		BRT_Edited = 1,
		BRT_Upgrade = 2,
	};


	// Enum /Script/FortniteGame.FCollisionReactionType
	enum FCollisionReactionType
	{
		FCollisionReactionType__Nothing = 0,
		FCollisionReactionType__Pawn = 1,
		FCollisionReactionType__Vehicle = 2,
		FCollisionReactionType__PhysicsObject = 3,
		FCollisionReactionType__BuildingActor = 4,
	};


	// Enum /Script/FortniteGame.EAdHocSquads_SquadUpResult
	enum EAdHocSquads_SquadUpResult
	{
		EAdHocSquads_SquadUpResult__Success = 0,
		EAdHocSquads_SquadUpResult__Failure_OneOrMorePlayersWereNull = 1,
		EAdHocSquads_SquadUpResult__Failure_BothPlayersAreInAdHocSquads = 2,
		EAdHocSquads_SquadUpResult__Failure_BothPlayersAreAlreadyInTheSameAdHocSquad = 3,
		EAdHocSquads_SquadUpResult__Failure_CouldNotCreateAdHocSquad = 4,
		EAdHocSquads_SquadUpResult__Failure_CalledOnClient = 5,
		EAdHocSquads_SquadUpResult__Failure_SquadIsAlreadyFull = 6,
		EAdHocSquads_SquadUpResult__Failure_TooManyPlayersToMergeSquads = 7,
		EAdHocSquads_SquadUpResult__Failure_MutatorIsDisabled = 8,
		EAdHocSquads_SquadUpResult__Failure_Unknown = 9,
		EAdHocSquads_SquadUpResult__Failure_Custom = A,
	};


	// Enum /Script/FortniteGame.EAdHocSquads_LeaveSquadReason
	enum EAdHocSquads_LeaveSquadReason
	{
		EAdHocSquads_LeaveSquadReason__ManualLeave = 0,
		EAdHocSquads_LeaveSquadReason__MutatorDisabled = 1,
		EAdHocSquads_LeaveSquadReason__JoinedADifferentSquad = 2,
		EAdHocSquads_LeaveSquadReason__PlayerDiedAndCannotBeRevived = 3,
		EAdHocSquads_LeaveSquadReason__PlayerHasWonGame = 4,
	};


	// Enum /Script/FortniteGame.EDialogMarkerInteractionState
	enum EDialogMarkerInteractionState
	{
		EDialogMarkerInteractionState__Conversation = 0,
		EDialogMarkerInteractionState__InteractionRange = 1,
		EDialogMarkerInteractionState__IndicatorRange = 2,
		EDialogMarkerInteractionState__None = 3,
	};


	// Enum /Script/FortniteGame.EFortInventoryType
	enum EFortInventoryType
	{
		EFortInventoryType__World = 0,
		EFortInventoryType__Account = 1,
		EFortInventoryType__Outpost = 2,
	};


	// Enum /Script/FortniteGame.ECollectionBookRewardType
	enum ECollectionBookRewardType
	{
		ECollectionBookRewardType__Uninitialized = 0,
		ECollectionBookRewardType__Book = 1,
		ECollectionBookRewardType__Page = 2,
		ECollectionBookRewardType__Section = 3,
	};


	// Enum /Script/FortniteGame.EFortWeakPointState
	enum EFortWeakPointState
	{
		EFortWeakPointState__Uninitialized = 0,
		EFortWeakPointState__Inactive = 1,
		EFortWeakPointState__Active = 2,
		EFortWeakPointState__Destroyed = 3,
	};


	// Enum /Script/FortniteGame.EFortCreativeHeatmapDrawState
	enum EFortCreativeHeatmapDrawState
	{
		EFortCreativeHeatmapDrawState__Visible = 0,
		EFortCreativeHeatmapDrawState__VisibleWithValues = 1,
		EFortCreativeHeatmapDrawState__NotVisible = 2,
		EFortCreativeHeatmapDrawState__Count = 3,
	};


	// Enum /Script/FortniteGame.ECreativeKeyLockState
	enum ECreativeKeyLockState
	{
		ECreativeKeyLockState__LOCKED = 0,
		ECreativeKeyLockState__UNLOCKED = 1,
		ECreativeKeyLockState__INVALID = 2,
	};


	// Enum /Script/FortniteGame.ELockState
	enum ELockState
	{
		ELockState__INVALID = 0,
		ELockState__UNLOCKED = 1,
		ELockState__LOCKED = 2,
	};


	// Enum /Script/FortniteGame.EMatchConditionMutatorTimingType
	enum EMatchConditionMutatorTimingType
	{
		EMatchConditionMutatorTimingType__Round = 0,
		EMatchConditionMutatorTimingType__MatchAtEndOfRound = 1,
		EMatchConditionMutatorTimingType__MatchImmediate = 2,
		EMatchConditionMutatorTimingType__COUNT = 3,
	};


	// Enum /Script/FortniteGame.EFortPawnMaterialOverrideFlags
	enum EFortPawnMaterialOverrideFlags
	{
		EFortPawnMaterialOverrideFlags__None = 0,
		EFortPawnMaterialOverrideFlags__HideParticleSystems = 1,
		EFortPawnMaterialOverrideFlags__ApplyToWeapon = 2,
		EFortPawnMaterialOverrideFlags__ApplyToEmoteProps = 4,
		EFortPawnMaterialOverrideFlags__RespectPartOverrides = 8,
	};


	// Enum /Script/FortniteGame.EMiniMapComponentDiscoverableVisibility
	enum EMiniMapComponentDiscoverableVisibility
	{
		EMiniMapComponentDiscoverableVisibility__Unset = 0,
		EMiniMapComponentDiscoverableVisibility__NotVisible = 1,
		EMiniMapComponentDiscoverableVisibility__Visible_NotDiscovered = 2,
		EMiniMapComponentDiscoverableVisibility__Discovered = 3,
	};


	// Enum /Script/FortniteGame.EBackupSaveState
	enum EBackupSaveState
	{
		EBackupSaveState__Ready = 0,
		EBackupSaveState__InProgress = 1,
		EBackupSaveState__OnCooldown = 2,
	};


	// Enum /Script/FortniteGame.EBuildingGameplayActorSentry_State
	enum EBuildingGameplayActorSentry_State
	{
		EBuildingGameplayActorSentry_State__PassiveIdle = 0,
		EBuildingGameplayActorSentry_State__ActiveIdle = 1,
		EBuildingGameplayActorSentry_State__Tracking = 2,
		EBuildingGameplayActorSentry_State__Aggro = 3,
		EBuildingGameplayActorSentry_State__Dormant = 4,
		EBuildingGameplayActorSentry_State__Deactivated = 5,
		EBuildingGameplayActorSentry_State__ReturningToIdle = 6,
		EBuildingGameplayActorSentry_State__LocatingDamager = 7,
	};


	// Enum /Script/FortniteGame.ECapturePointState
	enum ECapturePointState
	{
		ECapturePointState__Idle = 0,
		ECapturePointState__Capturing = 1,
		ECapturePointState__Contested = 2,
		ECapturePointState__Resetting = 3,
		ECapturePointState__Captured = 4,
		ECapturePointState__Reset = 5,
	};


	// Enum /Script/FortniteGame.ECaptureState
	enum ECaptureState
	{
		ECaptureState__Neutral = 0,
		ECaptureState__Capturing = 1,
		ECaptureState__Contested = 2,
		ECaptureState__Disabled = 3,
		ECaptureState__Decapturing = 4,
		ECaptureState__Neutralizing = 5,
		ECaptureState__Deneutralizing = 6,
		ECaptureState__Captured = 7,
	};


	// Enum /Script/FortniteGame.EFortMovementStyle
	enum EFortMovementStyle
	{
		EFortMovementStyle__Running = 0,
		EFortMovementStyle__Walking = 1,
		EFortMovementStyle__Charging = 2,
		EFortMovementStyle__Sprinting = 3,
		EFortMovementStyle__PersonalVehicle = 4,
		EFortMovementStyle__Flying = 5,
		EFortMovementStyle__Tethered = 6,
		EFortMovementStyle__Invalid = 7,
	};


	// Enum /Script/FortniteGame.EFortDBNOCarryEvent
	enum EFortDBNOCarryEvent
	{
		EFortDBNOCarryEvent__PickedUp = 0,
		EFortDBNOCarryEvent__Interrogating = 1,
		EFortDBNOCarryEvent__Dropped = 2,
		EFortDBNOCarryEvent__Thrown = 3,
	};


	// Enum /Script/FortniteGame.EAthenaGamePhase
	enum EAthenaGamePhase
	{
		EAthenaGamePhase__None = 0,
		EAthenaGamePhase__Setup = 1,
		EAthenaGamePhase__Warmup = 2,
		EAthenaGamePhase__Aircraft = 3,
		EAthenaGamePhase__SafeZones = 4,
		EAthenaGamePhase__EndGame = 5,
		EAthenaGamePhase__Count = 6,
	};


	// Enum /Script/FortniteGame.EDualWeaponHand
	enum EDualWeaponHand
	{
		EDualWeaponHand__LEFT = 0,
		EDualWeaponHand__RIGHT = 1,
	};


	// Enum /Script/FortniteGame.EMatchmakingCompleteResult
	enum EMatchmakingCompleteResult
	{
		EMatchmakingCompleteResult__NotStarted = 0,
		EMatchmakingCompleteResult__UpdateNeeded = 1,
		EMatchmakingCompleteResult__OutpostNotFound = 2,
		EMatchmakingCompleteResult__Cancelled = 3,
		EMatchmakingCompleteResult__NoResults = 4,
		EMatchmakingCompleteResult__Failure = 5,
		EMatchmakingCompleteResult__CreateFailure = 6,
		EMatchmakingCompleteResult__Success = 7,
	};


	// Enum /Script/FortniteGame.EMatchmakingState
	enum EMatchmakingState
	{
		EMatchmakingState__NotMatchmaking = 0,
		EMatchmakingState__CancelingMatchmaking = 1,
		EMatchmakingState__ReleasingLock = 2,
		EMatchmakingState__AcquiringLock = 3,
		EMatchmakingState__LockAcquistionFailure = 4,
		EMatchmakingState__FindingEmptyServer = 5,
		EMatchmakingState__FindingExistingSession = 6,
		EMatchmakingState__TestingEmptyServers = 7,
		EMatchmakingState__TestingExistingSessions = 8,
		EMatchmakingState__JoiningExistingSession = 9,
		EMatchmakingState__NoMatchesAvailable = A,
		EMatchmakingState__CleaningUpExisting = B,
		EMatchmakingState__HandlingFailure = C,
		EMatchmakingState__JoinSuccess = D,
	};


	// Enum /Script/FortniteGame.EHitTraceRule
	enum EHitTraceRule
	{
		EHitTraceRule__Visibility = 0,
		EHitTraceRule__Terrain = 1,
		EHitTraceRule__None = 2,
	};


	// Enum /Script/FortniteGame.EScaleAxis
	enum EScaleAxis
	{
		EScaleAxis__All = 0,
		EScaleAxis__X = 1,
		EScaleAxis__Y = 2,
		EScaleAxis__Z = 3,
	};


	// Enum /Script/FortniteGame.ETransformationType
	enum ETransformationType
	{
		ETransformationType__Translation = 0,
		ETransformationType__Rotation = 1,
		ETransformationType__Scale = 2,
		ETransformationType__None = 3,
	};


	// Enum /Script/FortniteGame.EPropertyOverrideTargetType
	enum EPropertyOverrideTargetType
	{
		EPropertyOverrideTargetType__None = 0,
		EPropertyOverrideTargetType__Default = 1,
		EPropertyOverrideTargetType__ImmutableTarget = 2,
	};


	// Enum /Script/FortniteGame.EFortMissionVisibilityOverride
	enum EFortMissionVisibilityOverride
	{
		EFortMissionVisibilityOverride__Visible = 0,
		EFortMissionVisibilityOverride__Invisible = 1,
		EFortMissionVisibilityOverride__Max_None = 2,
	};


	// Enum /Script/FortniteGame.EFortWeaponOverheatState
	enum EFortWeaponOverheatState
	{
		EFortWeaponOverheatState__None = 0,
		EFortWeaponOverheatState__Heating = 1,
		EFortWeaponOverheatState__Cooling = 2,
		EFortWeaponOverheatState__Overheated = 3,
	};


	// Enum /Script/FortniteGame.EPortalLinkCodeLockStatus
	enum EPortalLinkCodeLockStatus
	{
		EPortalLinkCodeLockStatus__Unlocked_NotSet = 0,
		EPortalLinkCodeLockStatus__Unlocked = 1,
		EPortalLinkCodeLockStatus__Locked = 2,
	};


	// Enum /Script/FortniteGame.EStyleSpecificationMethod
	enum EStyleSpecificationMethod
	{
		EStyleSpecificationMethod__StyleSetLookup = 0,
		EStyleSpecificationMethod__DirectReference = 1,
	};


	// Enum /Script/FortniteGame.EQuartzGunfireState
	enum EQuartzGunfireState
	{
		EQuartzGunfireState__FirstShot = 0,
		EQuartzGunfireState__Shooting = 1,
		EQuartzGunfireState__Stopped = 2,
		EQuartzGunfireState__Max_None = 3,
	};


	// Enum /Script/FortniteGame.EFortSafeZoneState
	enum EFortSafeZoneState
	{
		EFortSafeZoneState__None = 0,
		EFortSafeZoneState__Starting = 1,
		EFortSafeZoneState__Holding = 2,
		EFortSafeZoneState__Shrinking = 3,
	};


	// Enum /Script/FortniteGame.ESelectionProperty
	enum ESelectionProperty
	{
		ESelectionProperty__SingleObject = 0,
		ESelectionProperty__SingleObjectMoveOnGrid = 1,
		ESelectionProperty__MultipleObjects = 2,
		ESelectionProperty__MultipleObjectsMoveOnGrid = 3,
		ESelectionProperty__None = 4,
	};


	// Enum /Script/FortniteGame.EFortFactionAttitude
	enum EFortFactionAttitude
	{
		EFortFactionAttitude__Friendly = 0,
		EFortFactionAttitude__Neutral = 1,
		EFortFactionAttitude__Hostile = 2,
	};


	// Enum /Script/FortniteGame.EAthenaStormCapState
	enum EAthenaStormCapState
	{
		EAthenaStormCapState__None = 0,
		EAthenaStormCapState__Clear = 1,
		EAthenaStormCapState__Warning = 2,
		EAthenaStormCapState__Damaging = 3,
	};


	// Enum /Script/FortniteGame.ETimestampEventType
	enum ETimestampEventType
	{
		ETimestampEventType__NamedEvent = 0,
		ETimestampEventType__ChangeBPM = 1,
		ETimestampEventType__Max_None = 2,
	};


	// Enum /Script/FortniteGame.EAthenaTravelLogPlayerType
	enum EAthenaTravelLogPlayerType
	{
		EAthenaTravelLogPlayerType__Self = 0,
		EAthenaTravelLogPlayerType__Ally = 1,
		EAthenaTravelLogPlayerType__Enemy = 2,
		EAthenaTravelLogPlayerType__Invalid = 3,
	};


	// Enum /Script/FortniteGame.EAthenaTravelEventType
	enum EAthenaTravelEventType
	{
		EAthenaTravelEventType__GroundMove = 0,
		EAthenaTravelEventType__AirMove = 1,
		EAthenaTravelEventType__BattleBusJump = 2,
		EAthenaTravelEventType__LaunchJump = 3,
		EAthenaTravelEventType__Landed = 4,
		EAthenaTravelEventType__OpenChest = 5,
		EAthenaTravelEventType__OpenAmmo = 6,
		EAthenaTravelEventType__GotAssist = 7,
		EAthenaTravelEventType__GotKnockdown = 8,
		EAthenaTravelEventType__GotKill = 9,
		EAthenaTravelEventType__PlayerDowned = A,
		EAthenaTravelEventType__PlayerDied = B,
		EAthenaTravelEventType__Won = C,
		EAthenaTravelEventType__DealtDamage = D,
		EAthenaTravelEventType__HealthChange = E,
		EAthenaTravelEventType__GotItem = F,
		EAthenaTravelEventType__DroppedItem = 10,
		EAthenaTravelEventType__ShieldChange = 11,
		EAthenaTravelEventType__WeaponExecuted = 12,
		EAthenaTravelEventType__EnteredVehicle = 13,
		EAthenaTravelEventType__ExitedVehicle = 14,
		EAthenaTravelEventType__TrapBuilt = 15,
		EAthenaTravelEventType__UsedItem = 16,
		EAthenaTravelEventType__ZoneUpdate = 17,
		EAthenaTravelEventType__PlacedBuilding = 18,
		EAthenaTravelEventType__EmoteUsed = 19,
		EAthenaTravelEventType__UpgradedBuilding = 1A,
		EAthenaTravelEventType__EditedBuilding = 1B,
		EAthenaTravelEventType__Count = 1C,
	};


	// Enum /Script/FortniteGame.EGlobalWeatherState
	enum EGlobalWeatherState
	{
		EGlobalWeatherState__Inactive = 0,
		EGlobalWeatherState__Active = 1,
		EGlobalWeatherState__BlendingIn = 2,
		EGlobalWeatherState__BlendingOut = 3,
	};


	// Enum /Script/FortniteGame.EHudVisibilityState
	enum EHudVisibilityState
	{
		EHudVisibilityState__FullyVisible = 0,
		EHudVisibilityState__FullyHidden = 1,
		EHudVisibilityState__GameOnly = 2,
		EHudVisibilityState__ReplayOnly = 3,
	};


	// Enum /Script/FortniteGame.EFortReplayEventType
	enum EFortReplayEventType
	{
		EFortReplayEventType__Elimination = 0,
		EFortReplayEventType__Eliminated = 1,
		EFortReplayEventType__DBNO = 2,
		EFortReplayEventType__UserPlaced = 3,
	};


	// Enum /Script/FortniteGame.EAthenaRoundsMutatorPhase
	enum EAthenaRoundsMutatorPhase
	{
		EAthenaRoundsMutatorPhase__GamePhase_Setup = 0,
		EAthenaRoundsMutatorPhase__GamePhase_Warmup = 1,
		EAthenaRoundsMutatorPhase__FadeOutToNextRound = 2,
		EAthenaRoundsMutatorPhase__RoundSetup = 3,
		EAthenaRoundsMutatorPhase__RoundPlay = 4,
		EAthenaRoundsMutatorPhase__RoundEnd = 5,
		EAthenaRoundsMutatorPhase__RoundEndUI = 6,
		EAthenaRoundsMutatorPhase__MatchEndUI = 7,
		EAthenaRoundsMutatorPhase__MatchEndedPrematurely = 8,
	};


	// Enum /Script/FortniteGame.EQuestUpdateType
	enum EQuestUpdateType
	{
		EQuestUpdateType__ObjectiveCompleted = 0,
		EQuestUpdateType__QuestCompleted = 1,
		EQuestUpdateType__ObjectiveUpdated = 2,
		EQuestUpdateType__QuestUpdated = 3,
		EQuestUpdateType__QuestAndObjectiveUpdate = 4,
	};


	// Enum /Script/FortniteGame.EQuestVisibilityResponse
	enum EQuestVisibilityResponse
	{
		EQuestVisibilityResponse__Hide = 0,
		EQuestVisibilityResponse__Show = 1,
		EQuestVisibilityResponse__Custom = 2,
	};


	// Enum /Script/FortniteGame.EFortVisibilityBehavior
	enum EFortVisibilityBehavior
	{
		EFortVisibilityBehavior__Proximity = 0,
		EFortVisibilityBehavior__OnceSeenAlwaysSeen = 1,
		EFortVisibilityBehavior__AlwaysSeen = 2,
		EFortVisibilityBehavior__Invalid = 3,
	};


	// Enum /Script/FortniteGame.EMiniMapIconParameterDataType
	enum EMiniMapIconParameterDataType
	{
		EMiniMapIconParameterDataType__None = 0,
		EMiniMapIconParameterDataType__Scalar = 1,
		EMiniMapIconParameterDataType__Vector = 2,
		EMiniMapIconParameterDataType__Texture = 3,
	};


	// Enum /Script/FortniteGame.EFortMinimapLayer
	enum EFortMinimapLayer
	{
		EFML_PrePOIText = 0,
		EFML_PostStorm = 1,
		EFML_PostSpecialActors = 2,
		EFML_PostSquadIcons = 3,
	};


	// Enum /Script/FortniteGame.ECreativeMinimapComponentIconColorType
	enum ECreativeMinimapComponentIconColorType
	{
		ECreativeMinimapComponentIconColorType__None = 0,
		ECreativeMinimapComponentIconColorType__White = 1,
		ECreativeMinimapComponentIconColorType__Red = 2,
		ECreativeMinimapComponentIconColorType__Orange = 3,
		ECreativeMinimapComponentIconColorType__Yellow = 4,
		ECreativeMinimapComponentIconColorType__Green = 5,
		ECreativeMinimapComponentIconColorType__Teal = 6,
		ECreativeMinimapComponentIconColorType__Blue = 7,
		ECreativeMinimapComponentIconColorType__Purple = 8,
	};


	// Enum /Script/FortniteGame.EFortProjectileDetachReason
	enum EFortProjectileDetachReason
	{
		EFortProjectileDetachReason__HostDied = 0,
		EFortProjectileDetachReason__HostEndedPlay = 1,
		EFortProjectileDetachReason__Ejected = 2,
	};


	// Enum /Script/FortniteGame.EAllowedConfrontationalEmoteDisplaySources
	enum EAllowedConfrontationalEmoteDisplaySources
	{
		EAllowedConfrontationalEmoteDisplaySources__Anyone = 0,
		EAllowedConfrontationalEmoteDisplaySources__FriendsInParty = 1,
		EAllowedConfrontationalEmoteDisplaySources__LocalOnly = 2,
	};


	// Enum /Script/FortniteGame.EFortAllowBackgroundAudioSetting
	enum EFortAllowBackgroundAudioSetting
	{
		EFortAllowBackgroundAudioSetting__Off = 0,
		EFortAllowBackgroundAudioSetting__NotificationsOnly = 1,
		EFortAllowBackgroundAudioSetting__AllSounds = 2,
		EFortAllowBackgroundAudioSetting__Num = 3,
	};


	// Enum /Script/FortniteGame.EFortAutoMulchMode
	enum EFortAutoMulchMode
	{
		EFortAutoMulchMode__Off = 0,
		EFortAutoMulchMode__Common = 1,
		EFortAutoMulchMode__Uncommon = 2,
		EFortAutoMulchMode__Rare = 3,
		EFortAutoMulchMode__Epic = 4,
		EFortAutoMulchMode__Num = 5,
	};


	// Enum /Script/FortniteGame.EFortAutoMulchCategory
	enum EFortAutoMulchCategory
	{
		EFortAutoMulchCategory__Invalid = 0,
		EFortAutoMulchCategory__Weapon = 1,
		EFortAutoMulchCategory__Trap = 2,
		EFortAutoMulchCategory__Survivor = 3,
		EFortAutoMulchCategory__Defender = 4,
		EFortAutoMulchCategory__Hero = 5,
		EFortAutoMulchCategory__Num = 6,
	};


	// Enum /Script/FortniteGame.EAutorunLockZonePreferenceMobile
	enum EAutorunLockZonePreferenceMobile
	{
		EAutorunLockZonePreferenceMobile__Off = 0,
		EAutorunLockZonePreferenceMobile__Fixed = 1,
		EAutorunLockZonePreferenceMobile__Dynamic = 2,
	};


	// Enum /Script/FortniteGame.EBrelmarCameraShake
	enum EBrelmarCameraShake
	{
		EBrelmarCameraShake__Default = 0,
		EBrelmarCameraShake__Low = 1,
		EBrelmarCameraShake__Off = 2,
	};


	// Enum /Script/FortniteGame.ECameraResetAxes
	enum ECameraResetAxes
	{
		ECameraResetAxes__Pitch = 0,
		ECameraResetAxes__Yaw = 1,
		ECameraResetAxes__Both = 2,
	};


	// Enum /Script/FortniteGame.ECilantroIdleTime
	enum ECilantroIdleTime
	{
		ECilantroIdleTime__Minutes = 0,
		ECilantroIdleTime__Minutes = 1,
		ECilantroIdleTime__Minutes = 2,
		ECilantroIdleTime__Minutes = 3,
		ECilantroIdleTime__Minutes = 4,
		ECilantroIdleTime__Minutes = 5,
	};


	// Enum /Script/FortniteGame.EColorBlindMode
	enum EColorBlindMode
	{
		EColorBlindMode__Off = 0,
		EColorBlindMode__Deuteranope = 1,
		EColorBlindMode__Protanope = 2,
		EColorBlindMode__Tritanope = 3,
	};


	// Enum /Script/FortniteGame.ECombinedADSFireMode
	enum ECombinedADSFireMode
	{
		ECombinedADSFireMode__Disabled = 0,
		ECombinedADSFireMode__OnPressed = 1,
		ECombinedADSFireMode__WhileHeld = 2,
	};


	// Enum /Script/FortniteGame.EEditAutoConfirmation
	enum EEditAutoConfirmation
	{
		EEditAutoConfirmation__None = 0,
		EEditAutoConfirmation__Edit = 1,
		EEditAutoConfirmation__Reset = 2,
		EEditAutoConfirmation__Both = 3,
	};


	// Enum /Script/FortniteGame.EGyroButtonResponse
	enum EGyroButtonResponse
	{
		EGyroButtonResponse__NoChange = 0,
		EGyroButtonResponse__Disable = 1,
		EGyroButtonResponse__Trackball = 2,
		EGyroButtonResponse__Invert = 3,
		EGyroButtonResponse__Enable = 4,
	};


	// Enum /Script/FortniteGame.EDoughnutFillingSetting
	enum EDoughnutFillingSetting
	{
		EDoughnutFillingSetting__CeilingAngle = 0,
		EDoughnutFillingSetting__CeilingTimeDelay = 1,
		EDoughnutFillingSetting__CeilingReleaseInput = 2,
		EDoughnutFillingSetting__Never = 3,
		EDoughnutFillingSetting__Always = 4,
	};


	// Enum /Script/FortniteGame.EGyroAcceleration
	enum EGyroAcceleration
	{
		EGyroAcceleration__Off = 0,
		EGyroAcceleration__Low = 1,
		EGyroAcceleration__Medium = 2,
		EGyroAcceleration__High = 3,
		EGyroAcceleration__Custom = 4,
		EGyroAcceleration__Legacy = 5,
	};


	// Enum /Script/FortniteGame.EGyroActiveBuildMode
	enum EGyroActiveBuildMode
	{
		EGyroActiveBuildMode__None = 0,
		EGyroActiveBuildMode__Edit = 1,
		EGyroActiveBuildMode__All = 2,
	};


	// Enum /Script/FortniteGame.EGyroActiveMode
	enum EGyroActiveMode
	{
		EGyroActiveMode__None = 0,
		EGyroActiveMode__ScopeOnly = 1,
		EGyroActiveMode__ScopeADS = 2,
		EGyroActiveMode__ScopeADSHarvesting = 3,
		EGyroActiveMode__ScopeADSHarvestingFiring = 4,
		EGyroActiveMode__All = 5,
	};


	// Enum /Script/FortniteGame.EGyroButton
	enum EGyroButton
	{
		EGyroButton__Custom = 0,
		EGyroButton__ReloadInteract = 1,
		EGyroButton__TogglePickaxe = 2,
		EGyroButton__CrouchSlide = 3,
		EGyroButton__ResetCamera = 4,
		EGyroButton__Touch = 5,
	};


	// Enum /Script/FortniteGame.EAxisDirection
	enum EAxisDirection
	{
		EAxisDirection__Disabled = 0,
		EAxisDirection__Standard = 1,
		EAxisDirection__Inverted = 2,
	};


	// Enum /Script/FortniteGame.EGyroSpace
	enum EGyroSpace
	{
		EGyroSpace__Local = 0,
		EGyroSpace__Player = 1,
	};


	// Enum /Script/FortniteGame.EGyroStickMode
	enum EGyroStickMode
	{
		EGyroStickMode__None = 0,
		EGyroStickMode__Disables = 1,
		EGyroStickMode__Enables = 2,
	};


	// Enum /Script/FortniteGame.EGyroTouchMode
	enum EGyroTouchMode
	{
		EGyroTouchMode__None = 0,
		EGyroTouchMode__Disables = 1,
		EGyroTouchMode__Enables = 2,
	};


	// Enum /Script/FortniteGame.EHitFeedbackMode
	enum EHitFeedbackMode
	{
		EHitFeedbackMode__Invalid = 0,
		EHitFeedbackMode__HitAndIcon = 1,
		EHitFeedbackMode__HitOnly = 2,
		EHitFeedbackMode__Off = 3,
		EHitFeedbackMode__Num = 4,
	};


	// Enum /Script/FortniteGame.EHitNumbersMode
	enum EHitNumbersMode
	{
		EHitNumbersMode__Invalid = 0,
		EHitNumbersMode__Cumulative = 1,
		EHitNumbersMode__List = 2,
		EHitNumbersMode__Num = 3,
	};


	// Enum /Script/FortniteGame.EJoyConMotionSelection
	enum EJoyConMotionSelection
	{
		EJoyConMotionSelection__Left = 0,
		EJoyConMotionSelection__Right = 1,
	};


	// Enum /Script/FortniteGame.ELicensedAudioTreatment
	enum ELicensedAudioTreatment
	{
		ELicensedAudioTreatment__None = 0,
		ELicensedAudioTreatment__MuteOthers = 1,
		ELicensedAudioTreatment__MuteAll = 2,
	};


	// Enum /Script/FortniteGame.EFortMotionYawAxis
	enum EFortMotionYawAxis
	{
		EFortMotionYawAxis__Yaw = 0,
		EFortMotionYawAxis__Roll = 1,
	};


	// Enum /Script/FortniteGame.EPostpartyClippingState
	enum EPostpartyClippingState
	{
		EPostpartyClippingState__Unset = 0,
		EPostpartyClippingState__Disabled = 1,
		EPostpartyClippingState__Enabled = 2,
	};


	// Enum /Script/FortniteGame.EFortPreferredItemSlotItemType
	enum EFortPreferredItemSlotItemType
	{
		EFortPreferredItemSlotItemType__Unassigned = 0,
		EFortPreferredItemSlotItemType__AssaultRifle = 1,
		EFortPreferredItemSlotItemType__Shotgun = 2,
		EFortPreferredItemSlotItemType__SMG = 3,
		EFortPreferredItemSlotItemType__Pistol = 4,
		EFortPreferredItemSlotItemType__SniperAndBow = 5,
		EFortPreferredItemSlotItemType__Launcher = 6,
		EFortPreferredItemSlotItemType__Utility = 7,
		EFortPreferredItemSlotItemType__Consumable = 8,
		EFortPreferredItemSlotItemType__Num = 9,
	};


	// Enum /Script/FortniteGame.EQuickWeaponButtonGroup
	enum EQuickWeaponButtonGroup
	{
		EQuickWeaponButtonGroup__DPad = 0,
		EQuickWeaponButtonGroup__FaceButtons = 1,
		EQuickWeaponButtonGroup__Both = 2,
	};


	// Enum /Script/FortniteGame.EQuickWeaponToggle
	enum EQuickWeaponToggle
	{
		EQuickWeaponToggle__None = 0,
		EQuickWeaponToggle__Secondary = 1,
		EQuickWeaponToggle__PreviouslyEquipped = 2,
	};


	// Enum /Script/FortniteGame.EFortReticleColor
	enum EFortReticleColor
	{
		EFortReticleColor__Red = 0,
		EFortReticleColor__Orange = 1,
		EFortReticleColor__Yellow = 2,
		EFortReticleColor__Green = 3,
		EFortReticleColor__Cyan = 4,
		EFortReticleColor__Blue = 5,
		EFortReticleColor__Purple = 6,
		EFortReticleColor__Magenta = 7,
	};


	// Enum /Script/FortniteGame.ETouchInteractMode
	enum ETouchInteractMode
	{
		ETouchInteractMode__Off = 0,
		ETouchInteractMode__InWorld = 1,
		ETouchInteractMode__Buttons = 2,
	};


	// Enum /Script/FortniteGame.EVisualizeAudioPriority
	enum EVisualizeAudioPriority
	{
		EVisualizeAudioPriority__HighPriority = 0,
		EVisualizeAudioPriority__All = 1,
	};


	// Enum /Script/FortniteGame.EFortGamepadLookInputCurve
	enum EFortGamepadLookInputCurve
	{
		EFortGamepadLookInputCurve__Linear = 0,
		EFortGamepadLookInputCurve__Exponential = 1,
	};


	// Enum /Script/FortniteGame.EFortGamepadSensitivity
	enum EFortGamepadSensitivity
	{
		EFortGamepadSensitivity__Invalid = 0,
		EFortGamepadSensitivity__Slow = 1,
		EFortGamepadSensitivity__SlowPlus = 2,
		EFortGamepadSensitivity__SlowPlusPlus = 3,
		EFortGamepadSensitivity__Normal = 4,
		EFortGamepadSensitivity__NormalPlus = 5,
		EFortGamepadSensitivity__NormalPlusPlus = 6,
		EFortGamepadSensitivity__Fast = 7,
		EFortGamepadSensitivity__FastPlus = 8,
		EFortGamepadSensitivity__FastPlusPlus = 9,
		EFortGamepadSensitivity__Insane = A,
	};


	// Enum /Script/FortniteGame.ECloudFileState
	enum ECloudFileState
	{
		ECloudFileState__Unitialized = 0,
		ECloudFileState__Saving = 1,
		ECloudFileState__Loading = 2,
		ECloudFileState__Idle = 3,
	};


	// Enum /Script/FortniteGame.EKWSSetttingIndividalMigration
	enum EKWSSetttingIndividalMigration
	{
		EKWSSetttingIndividalMigration__PartyJoinability = 0,
		EKWSSetttingIndividalMigration__ShowSeasonLevenInFeed = 1,
		EKWSSetttingIndividalMigration__ShowPlayerSurveys = 2,
		EKWSSetttingIndividalMigration__ReceiveGiftsAllowed = 3,
	};


	// Enum /Script/FortniteGame.EQuestMapScreenMode
	enum EQuestMapScreenMode
	{
		EQuestMapScreenMode__Invalid = 0,
		EQuestMapScreenMode__MainCampaign = 1,
		EQuestMapScreenMode__Event = 2,
	};


	// Enum /Script/FortniteGame.EHUDLayoutToolTheme
	enum EHUDLayoutToolTheme
	{
		EHUDLayoutToolTheme__None = 0,
		EHUDLayoutToolTheme__Default = 1,
		EHUDLayoutToolTheme__Dark = 2,
	};


	// Enum /Script/FortniteGame.ESchemaModificationType
	enum ESchemaModificationType
	{
		ESchemaModificationType__AddOrModify = 0,
		ESchemaModificationType__Remove = 1,
		ESchemaModificationType__Count = 2,
	};


	// Enum /Script/FortniteGame.EFireModeType
	enum EFireModeType
	{
		EFireModeType__Unset = 0,
		EFireModeType__TapToShoot = 1,
		EFireModeType__FireButton = 2,
		EFireModeType__AutoFire = 3,
		EFireModeType__ForceTouch = 4,
		EFireModeType__Custom = 5,
	};


	// Enum /Script/FortniteGame.EBacchusHUDStateType
	enum EBacchusHUDStateType
	{
		EBacchusHUDStateType__DoNothing = 0,
		EBacchusHUDStateType__Hide = 1,
		EBacchusHUDStateType__Show = 2,
		EBacchusHUDStateType__FallbackToDefault = 3,
	};


	// Enum /Script/FortniteGame.EAndroidAppStoreTypes
	enum EAndroidAppStoreTypes
	{
		EAndroidAppStoreTypes__Unset = 0,
		EAndroidAppStoreTypes__Epic = 1,
		EAndroidAppStoreTypes__Samsung = 2,
	};


	// Enum /Script/FortniteGame.EFortInventoryCustomFilter
	enum EFortInventoryCustomFilter
	{
		EFortInventoryCustomFilter__Mythic = 0,
		EFortInventoryCustomFilter__Legendary = 1,
		EFortInventoryCustomFilter__Epic = 2,
		EFortInventoryCustomFilter__Rare = 3,
		EFortInventoryCustomFilter__Uncommon = 4,
		EFortInventoryCustomFilter__Common = 5,
	};


	// Enum /Script/FortniteGame.EAthenaPinnedQuestType
	enum EAthenaPinnedQuestType
	{
		EAthenaPinnedQuestType__UserSelected = 0,
		EAthenaPinnedQuestType__ConciergeSuggested = 1,
		EAthenaPinnedQuestType__NoPinnedQuest = 2,
	};


	// Enum /Script/FortniteGame.EPlayerBountyThreatLevel
	enum EPlayerBountyThreatLevel
	{
		EPlayerBountyThreatLevel__Low = 0,
		EPlayerBountyThreatLevel__Medium = 1,
		EPlayerBountyThreatLevel__High = 2,
	};


	// Enum /Script/FortniteGame.EFortQuestState
	enum EFortQuestState
	{
		EFortQuestState__Inactive = 0,
		EFortQuestState__Active = 1,
		EFortQuestState__Completed = 2,
		EFortQuestState__Claimed = 3,
	};


	// Enum /Script/FortniteGame.EObjectiveCategories
	enum EObjectiveCategories
	{
		EObjectiveCategories__Default = 0,
		EObjectiveCategories__Exploration = 1,
		EObjectiveCategories__Resource = 2,
		EObjectiveCategories__Combat = 3,
		EObjectiveCategories__Ranked = 4,
	};


	// Enum /Script/FortniteGame.EFortSimulatedXPSize
	enum EFortSimulatedXPSize
	{
		EFortSimulatedXPSize__None = 0,
		EFortSimulatedXPSize__VerySmall = 1,
		EFortSimulatedXPSize__Small = 2,
		EFortSimulatedXPSize__Medium = 3,
		EFortSimulatedXPSize__Large = 4,
		EFortSimulatedXPSize__VeryLarge = 5,
	};


	// Enum /Script/FortniteGame.EFortDialogFeedbackType
	enum EFortDialogFeedbackType
	{
		EFortDialogFeedbackType__FriendRequestSent = 0,
		EFortDialogFeedbackType__FriendRequestReceived = 1,
		EFortDialogFeedbackType__FriendRequestAccepted = 2,
		EFortDialogFeedbackType__Default = 3,
	};


	// Enum /Script/FortniteGame.EEventResponderEventType
	enum EEventResponderEventType
	{
		EEventResponderEventType__OneShotEvent = 0,
		EEventResponderEventType__PersistentEventJoinInProgress = 1,
		EEventResponderEventType__PersistentEventStart = 2,
		EEventResponderEventType__PersistentEventChange = 3,
		EEventResponderEventType__PersistentEventEnd = 4,
	};


	// Enum /Script/FortniteGame.EFortAbilityTargetSelectionUsage
	enum EFortAbilityTargetSelectionUsage
	{
		EFortAbilityTargetSelectionUsage__BothTargetingAndCanHit = 0,
		EFortAbilityTargetSelectionUsage__OnlyTargeting = 1,
		EFortAbilityTargetSelectionUsage__OnlyCanHit = 2,
	};


	// Enum /Script/FortniteGame.EFortTargetSelectionFilter
	enum EFortTargetSelectionFilter
	{
		EFortTargetSelectionFilter__Damageable = 0,
		EFortTargetSelectionFilter__Everything = 1,
		EFortTargetSelectionFilter__Pawns = 2,
		EFortTargetSelectionFilter__Buildings = 3,
		EFortTargetSelectionFilter__Walls = 4,
		EFortTargetSelectionFilter__Traps = 5,
		EFortTargetSelectionFilter__Players = 6,
		EFortTargetSelectionFilter__AIPawns = 7,
		EFortTargetSelectionFilter__Instigator = 8,
		EFortTargetSelectionFilter__WeakSpots = 9,
		EFortTargetSelectionFilter__World = A,
		EFortTargetSelectionFilter__Max = B,
	};


	// Enum /Script/FortniteGame.EFortTargetSelectionTestType
	enum EFortTargetSelectionTestType
	{
		EFortTargetSelectionTestType__Overlap = 0,
		EFortTargetSelectionTestType__Swept = 1,
		EFortTargetSelectionTestType__Ballistic = 2,
	};


	// Enum /Script/FortniteGame.EFortTargetSelectionShape
	enum EFortTargetSelectionShape
	{
		EFortTargetSelectionShape__Sphere = 0,
		EFortTargetSelectionShape__Cone = 1,
		EFortTargetSelectionShape__Box = 2,
		EFortTargetSelectionShape__Capsule = 3,
		EFortTargetSelectionShape__Line = 4,
		EFortTargetSelectionShape__Cylinder = 5,
		EFortTargetSelectionShape__Custom = 6,
		EFortTargetSelectionShape__CustomOnSource = 7,
	};


	// Enum /Script/FortniteGame.EFortGetPlayerPawnExecutions
	enum EFortGetPlayerPawnExecutions
	{
		EFortGetPlayerPawnExecutions__ValidFortPlayerPawn = 0,
		EFortGetPlayerPawnExecutions__AvatarCastFailed = 1,
	};


	// Enum /Script/FortniteGame.EFortAbilityChargeState
	enum EFortAbilityChargeState
	{
		EFortAbilityChargeState__None = 0,
		EFortAbilityChargeState__ChargingUp = 1,
		EFortAbilityChargeState__MaxCharge = 2,
		EFortAbilityChargeState__Discharge = 3,
		EFortAbilityChargeState__ChargingDown = 4,
	};


	// Enum /Script/FortniteGame.EFortGameplayAbilityTagChangedActionType
	enum EFortGameplayAbilityTagChangedActionType
	{
		EFortGameplayAbilityTagChangedActionType__Cancel = 0,
	};


	// Enum /Script/FortniteGame.EFortGameplayAbilityTagChangedEvent
	enum EFortGameplayAbilityTagChangedEvent
	{
		EFortGameplayAbilityTagChangedEvent__NewlyAdded = 0,
		EFortGameplayAbilityTagChangedEvent__Increased = 1,
		EFortGameplayAbilityTagChangedEvent__FullyRemoved = 2,
		EFortGameplayAbilityTagChangedEvent__Decreased = 3,
	};


	// Enum /Script/FortniteGame.EFortGameplayAbilityMontageSectionToPlay
	enum EFortGameplayAbilityMontageSectionToPlay
	{
		EFortGameplayAbilityMontageSectionToPlay__FirstSection = 0,
		EFortGameplayAbilityMontageSectionToPlay__RandomSection = 1,
		EFortGameplayAbilityMontageSectionToPlay__TestedRandomSection = 2,
	};


	// Enum /Script/FortniteGame.EFortAIWeaponUsage
	enum EFortAIWeaponUsage
	{
		EFortAIWeaponUsage__NoWeaponUsage = 0,
		EFortAIWeaponUsage__UsesRangedWeapon = 1,
		EFortAIWeaponUsage__UsesMeleeWeapon = 2,
	};


	// Enum /Script/FortniteGame.EFortAbilityCostSource
	enum EFortAbilityCostSource
	{
		EFortAbilityCostSource__Stamina = 0,
		EFortAbilityCostSource__Durability = 1,
		EFortAbilityCostSource__AmmoMagazine = 2,
		EFortAbilityCostSource__AmmoPrimary = 3,
		EFortAbilityCostSource__Item = 4,
	};


	// Enum /Script/FortniteGame.EFortGameplayAbilityActivation
	enum EFortGameplayAbilityActivation
	{
		EFortGameplayAbilityActivation__Passive = 0,
		EFortGameplayAbilityActivation__Triggered = 1,
		EFortGameplayAbilityActivation__Active = 2,
	};


	// Enum /Script/FortniteGame.EHeldObjectState
	enum EHeldObjectState
	{
		EHeldObjectState__Unheld = 0,
		EHeldObjectState__Held = 1,
		EHeldObjectState__Thrown = 2,
		EHeldObjectState__Placed = 3,
		EHeldObjectState__Dropped = 4,
		EHeldObjectState__HeldInVehicle = 5,
	};


	// Enum /Script/FortniteGame.ELinkToDirection
	enum ELinkToDirection
	{
		ELinkToDirection__Up = 0,
		ELinkToDirection__Down = 1,
		ELinkToDirection__Right = 2,
		ELinkToDirection__Left = 3,
		ELinkToDirection__Forward = 4,
		ELinkToDirection__Backward = 5,
	};


	// Enum /Script/FortniteGame.EOfferPurchaseError
	enum EOfferPurchaseError
	{
		EOfferPurchaseError__NoError = 0,
		EOfferPurchaseError__PendingServerConfirmation = 1,
		EOfferPurchaseError__CannotAffordItem = 2,
		EOfferPurchaseError__InvalidOfferID = 3,
		EOfferPurchaseError__InvalidPriceIndex = 4,
		EOfferPurchaseError__NoneLeft = 5,
		EOfferPurchaseError__PurchaseAlreadyPending = 6,
		EOfferPurchaseError__NoConnection = 7,
		EOfferPurchaseError__AccountNotEligible = 8,
		EOfferPurchaseError__CannotGiftItem = 9,
		EOfferPurchaseError__MFANotEnabled = A,
	};


	// Enum /Script/FortniteGame.EFortAlteration
	enum EFortAlteration
	{
		EFortAlteration__AttributeSlot = 0,
		EFortAlteration__GameplaySlot = 1,
		EFortAlteration__ComplexCosmeticSlot = 2,
		EFortAlteration__UserPickedCosmeticSlot = 3,
		EFortAlteration__ColorSlot = 4,
		EFortAlteration__HeroSpecializationTier1Slot = 5,
		EFortAlteration__HeroSpecializationTier2Slot = 6,
		EFortAlteration__HeroSpecializationTier3Slot = 7,
		EFortAlteration__HeroSpecializationTier4Slot = 8,
		EFortAlteration__HeroSpecializationTier5Slot = 9,
	};


	// Enum /Script/FortniteGame.EPlayerCompetitiveBanReasons
	enum EPlayerCompetitiveBanReasons
	{
		EPlayerCompetitiveBanReasons__None = 0,
		EPlayerCompetitiveBanReasons__Cheating = 1,
		EPlayerCompetitiveBanReasons__Collusion = 2,
		EPlayerCompetitiveBanReasons__Toxicity = 3,
		EPlayerCompetitiveBanReasons__Harassment = 4,
		EPlayerCompetitiveBanReasons__Ringing = 5,
		EPlayerCompetitiveBanReasons__Gambling = 6,
		EPlayerCompetitiveBanReasons__Exploiting = 7,
		EPlayerCompetitiveBanReasons__IntentionalDisconnect = 8,
		EPlayerCompetitiveBanReasons__IllegalRestart = 9,
		EPlayerCompetitiveBanReasons__Other = A,
		EPlayerCompetitiveBanReasons__AccountSharing = B,
		EPlayerCompetitiveBanReasons__CircumventingRegionLock = C,
		EPlayerCompetitiveBanReasons__CircumventingBan = D,
		EPlayerCompetitiveBanReasons__Smurfing = E,
		EPlayerCompetitiveBanReasons__CircumventingTeamLock = F,
		EPlayerCompetitiveBanReasons__RuleViolation = 10,
	};


	// Enum /Script/FortniteGame.EPlayerBanReasons
	enum EPlayerBanReasons
	{
		EPlayerBanReasons__Teaming = 0,
		EPlayerBanReasons__Afk_Leeching = 1,
		EPlayerBanReasons__Harassment = 2,
		EPlayerBanReasons__TradeScamming = 3,
		EPlayerBanReasons__Exploiting = 4,
		EPlayerBanReasons__Competitive = 5,
		EPlayerBanReasons__Creative = 6,
		EPlayerBanReasons__TeamingWithCheater = 7,
		EPlayerBanReasons__StreamSniping = 8,
		EPlayerBanReasons__ModifiedCosmetics = 9,
		EPlayerBanReasons__TermsOfService = A,
	};


	// Enum /Script/FortniteGame.EAthenaRebootEligiblityStatus
	enum EAthenaRebootEligiblityStatus
	{
		EAthenaRebootEligiblityStatus__None = 0,
		EAthenaRebootEligiblityStatus__User = 1,
		EAthenaRebootEligiblityStatus__Squad = 2,
	};


	// Enum /Script/FortniteGame.ECampaignCustomizationCategory
	enum ECampaignCustomizationCategory
	{
		ECampaignCustomizationCategory__None = 0,
		ECampaignCustomizationCategory__PersonalVehicle = 1,
	};


	// Enum /Script/FortniteGame.EAthenaPartyMemberReadyType
	enum EAthenaPartyMemberReadyType
	{
		EAthenaPartyMemberReadyType__Ready = 0,
		EAthenaPartyMemberReadyType__NotReady = 1,
		EAthenaPartyMemberReadyType__Playing = 2,
		EAthenaPartyMemberReadyType__Spectating = 3,
		EAthenaPartyMemberReadyType__WatchingReplay = 4,
	};


	// Enum /Script/FortniteGame.EFortFriendRequestStatus
	enum EFortFriendRequestStatus
	{
		EFortFriendRequestStatus__None = 0,
		EFortFriendRequestStatus__Accepted = 1,
		EFortFriendRequestStatus__PendingReceived = 2,
		EFortFriendRequestStatus__PendingSent = 3,
	};


	// Enum /Script/FortniteGame.EFortPartyMemberLocation
	enum EFortPartyMemberLocation
	{
		EFortPartyMemberLocation__PreLobby = 0,
		EFortPartyMemberLocation__ConnectingToLobby = 1,
		EFortPartyMemberLocation__Lobby = 2,
		EFortPartyMemberLocation__JoiningGame = 3,
		EFortPartyMemberLocation__ProcessingRejoin = 4,
		EFortPartyMemberLocation__InGame = 5,
		EFortPartyMemberLocation__Spectating = 6,
		EFortPartyMemberLocation__WatchingReplay = 7,
		EFortPartyMemberLocation__ReturningToFrontEnd = 8,
	};


	// Enum /Script/FortniteGame.EFortPartyState
	enum EFortPartyState
	{
		EFortPartyState__Undetermined = 0,
		EFortPartyState__WorldView = 1,
		EFortPartyState__TheaterView = 2,
		EFortPartyState__Matchmaking = 3,
		EFortPartyState__PostMatchmaking = 4,
		EFortPartyState__ReturningToFrontEnd = 5,
		EFortPartyState__BattleRoyaleView = 6,
		EFortPartyState__BattleRoyalePreloading = 7,
		EFortPartyState__BattleRoyaleMatchmaking = 8,
		EFortPartyState__BattleRoyalePostMatchmaking = 9,
	};


	// Enum /Script/FortniteGame.EFortPartyMemberDisplayState
	enum EFortPartyMemberDisplayState
	{
		EFortPartyMemberDisplayState__Open = 0,
		EFortPartyMemberDisplayState__Connecting = 1,
		EFortPartyMemberDisplayState__Connected = 2,
		EFortPartyMemberDisplayState__Max = 3,
	};


	// Enum /Script/FortniteGame.EFortHomingStyle
	enum EFortHomingStyle
	{
		EFortHomingStyle__None = 0,
		EFortHomingStyle__LockOn = 1,
		EFortHomingStyle__LaserTargeted = 2,
		EFortHomingStyle__LaserTargeted_NoTrace = 3,
		EFortHomingStyle__DrunkArtillery = 4,
	};


	// Enum /Script/FortniteGame.EFortHomingOffsetStyle
	enum EFortHomingOffsetStyle
	{
		EFortHomingOffsetStyle__Auto = 0,
		EFortHomingOffsetStyle__Absolute = 1,
		EFortHomingOffsetStyle__Relative = 2,
	};


	// Enum /Script/FortniteGame.EFortPrototypingStatus
	enum EFortPrototypingStatus
	{
		EFortPrototypingStatus__Unknown = 0,
		EFortPrototypingStatus__Disabled = 1,
		EFortPrototypingStatus__Enabled = 2,
	};


	// Enum /Script/FortniteGame.EXPEventPriorityType
	enum EXPEventPriorityType
	{
		EXPEventPriorityType__NearReticle = 0,
		EXPEventPriorityType__XPBarOnly = 1,
		EXPEventPriorityType__TopCenter = 2,
		EXPEventPriorityType__Feed = 3,
	};


	// Enum /Script/FortniteGame.EFortQuestAnalyticState
	enum EFortQuestAnalyticState
	{
		EFortQuestAnalyticState__None = 0,
		EFortQuestAnalyticState__Granted = 1,
		EFortQuestAnalyticState__Claimed = 2,
	};


	// Enum /Script/FortniteGame.EFortQuestType
	enum EFortQuestType
	{
		EFortQuestType__Task = 0,
		EFortQuestType__Optional = 1,
		EFortQuestType__DailyQuest = 2,
		EFortQuestType__TransientQuest = 3,
		EFortQuestType__SurvivorQuest = 4,
		EFortQuestType__Achievement = 5,
		EFortQuestType__Onboarding = 6,
		EFortQuestType__Athena = 7,
		EFortQuestType__AthenaDailyQuest = 8,
		EFortQuestType__AthenaEvent = 9,
		EFortQuestType__AthenaChallengeBundleQuest = A,
		EFortQuestType__AthenaLooseQuest = B,
		EFortQuestType__All = C,
	};


	// Enum /Script/FortniteGame.EFortZoneType
	enum EFortZoneType
	{
		EFortZoneType__PVE = 0,
		EFortZoneType__PVP = 1,
		EFortZoneType__Keep = 2,
		EFortZoneType__SingleZone = 3,
		EFortZoneType__Max_None = 4,
	};


	// Enum /Script/FortniteGame.EFortTheaterType
	enum EFortTheaterType
	{
		EFortTheaterType__Standard = 0,
		EFortTheaterType__Elder = 1,
		EFortTheaterType__PvP = 2,
		EFortTheaterType__PvP2 = 3,
		EFortTheaterType__Tutorial = 4,
		EFortTheaterType__TutorialGate = 5,
		EFortTheaterType__Max_None = 6,
	};


	// Enum /Script/FortniteGame.EClampToScreenDirection
	enum EClampToScreenDirection
	{
		EClampToScreenDirection__Left = 0,
		EClampToScreenDirection__Top = 1,
		EClampToScreenDirection__Right = 2,
		EClampToScreenDirection__Bottom = 3,
		EClampToScreenDirection__None = 4,
	};


	// Enum /Script/FortniteGame.EIntelStateEnum
	enum EIntelStateEnum
	{
		EIntelStateEnum__None = 0,
		EIntelStateEnum__OnGround = 1,
		EIntelStateEnum__HeldByAttacker = 2,
		EIntelStateEnum__HeldByDefender = 3,
		EIntelStateEnum__Downloaded = 4,
		EIntelStateEnum__Captured = 5,
		EIntelStateEnum__Downloading = 6,
	};


	// Enum /Script/FortniteGame.EFortCreativeLinearMoverRotationDirection
	enum EFortCreativeLinearMoverRotationDirection
	{
		EFortCreativeLinearMoverRotationDirection__EFCLMRD_Clockwise = 0,
		EFortCreativeLinearMoverRotationDirection__EFCLMRD_CounterClockwise = 1,
	};


	// Enum /Script/FortniteGame.EFortCreativeLinearMoverTranslationType
	enum EFortCreativeLinearMoverTranslationType
	{
		EFortCreativeLinearMoverTranslationType__EFCLMTT_None = 0,
		EFortCreativeLinearMoverTranslationType__EFCLMTT_Forward = 1,
		EFortCreativeLinearMoverTranslationType__EFCLMTT_Reverse = 2,
	};


	// Enum /Script/FortniteGame.EFortCreativeLinearMoverMode
	enum EFortCreativeLinearMoverMode
	{
		EFortCreativeLinearMoverMode__EFCLMM_Translation = 0,
		EFortCreativeLinearMoverMode__EFCLMM_Rotation = 1,
	};


	// Enum /Script/FortniteGame.EFortCreativeLinearMoverRotationAxis
	enum EFortCreativeLinearMoverRotationAxis
	{
		EFortCreativeLinearMoverRotationAxis__EFCLMRA_Roll = 0,
		EFortCreativeLinearMoverRotationAxis__EFCLMRA_Pitch = 1,
		EFortCreativeLinearMoverRotationAxis__EFCLMRA_Yaw = 2,
	};


	// Enum /Script/FortniteGame.EFortCreativeLinearMoverMovementCompleteBehavior
	enum EFortCreativeLinearMoverMovementCompleteBehavior
	{
		EFortCreativeLinearMoverMovementCompleteBehavior__EFCLMMS_None = 0,
		EFortCreativeLinearMoverMovementCompleteBehavior__EFCLMMS_Repeat = 1,
		EFortCreativeLinearMoverMovementCompleteBehavior__EFCLMMS_PingPong = 2,
		EFortCreativeLinearMoverMovementCompleteBehavior__EFCLMMS_Reset = 3,
	};


	// Enum /Script/FortniteGame.EFortKeyframedMovementMovementMode
	enum EFortKeyframedMovementMovementMode
	{
		EFortKeyframedMovementMovementMode__EFKMMM_OneShot = 0,
		EFortKeyframedMovementMovementMode__EFKMMM_Loop = 1,
		EFortKeyframedMovementMovementMode__EFKMMM_PingPong = 2,
	};


	// Enum /Script/FortniteGame.EFortKeyframedMovementNetCommand
	enum EFortKeyframedMovementNetCommand
	{
		EFortKeyframedMovementNetCommand__EFKMNC_PlayFrom = 0,
		EFortKeyframedMovementNetCommand__EFKMNC_HaltAt = 1,
	};


	// Enum /Script/FortniteGame.EAthenaBroadcastKillFeedEntryType
	enum EAthenaBroadcastKillFeedEntryType
	{
		EAthenaBroadcastKillFeedEntryType__Elimination = 0,
		EAthenaBroadcastKillFeedEntryType__Storm = 1,
		EAthenaBroadcastKillFeedEntryType__FallDamage = 2,
		EAthenaBroadcastKillFeedEntryType__Explosion = 3,
		EAthenaBroadcastKillFeedEntryType__DBNO = 4,
	};


	// Enum /Script/FortniteGame.ECosmeticCompatibleModeLegacy
	enum ECosmeticCompatibleModeLegacy
	{
		ECosmeticCompatibleModeLegacy__BattleRoyale = 0,
		ECosmeticCompatibleModeLegacy__Juno = 1,
		ECosmeticCompatibleModeLegacy__DelMar = 2,
		ECosmeticCompatibleModeLegacy__Sparks = 3,
	};


	// Enum /Script/FortniteGame.EAthenaPickerType
	enum EAthenaPickerType
	{
		EAthenaPickerType__EditMode = 0,
		EAthenaPickerType__Interact = 1,
	};


	// Enum /Script/FortniteGame.EBattlePassRewardSource
	enum EBattlePassRewardSource
	{
		EBattlePassRewardSource__None = 0,
		EBattlePassRewardSource__ChallengeBundle = 1,
		EBattlePassRewardSource__Quest = 2,
	};


	// Enum /Script/FortniteGame.ESeasonTitleDisplayType
	enum ESeasonTitleDisplayType
	{
		ESeasonTitleDisplayType__ChapterAndSeason = 0,
		ESeasonTitleDisplayType__OnlySeason = 1,
		ESeasonTitleDisplayType__OnlyChapter = 2,
	};


	// Enum /Script/FortniteGame.EAttributeHandling
	enum EAttributeHandling
	{
		EAttributeHandling__HealthAmount = 0,
		EAttributeHandling__HealthPercent = 1,
		EAttributeHandling__ShieldAmount = 2,
		EAttributeHandling__ShieldPercent = 3,
		EAttributeHandling__OverShieldAmount = 4,
		EAttributeHandling__OverShieldPercent = 5,
	};


	// Enum /Script/FortniteGame.ECreativeLayoutAnchorOption
	enum ECreativeLayoutAnchorOption
	{
		ECreativeLayoutAnchorOption__TopLeft = 0,
		ECreativeLayoutAnchorOption__TopCenter = 1,
		ECreativeLayoutAnchorOption__TopRight = 2,
		ECreativeLayoutAnchorOption__CenterLeft = 3,
		ECreativeLayoutAnchorOption__CenterCenter = 4,
		ECreativeLayoutAnchorOption__CenterRight = 5,
		ECreativeLayoutAnchorOption__BottomLeft = 6,
		ECreativeLayoutAnchorOption__BottomCenter = 7,
		ECreativeLayoutAnchorOption__BottomRight = 8,
	};


	// Enum /Script/FortniteGame.ECreativeLayoutAlignmentOption
	enum ECreativeLayoutAlignmentOption
	{
		ECreativeLayoutAlignmentOption__TopLeft = 0,
		ECreativeLayoutAlignmentOption__TopCenter = 1,
		ECreativeLayoutAlignmentOption__TopRight = 2,
		ECreativeLayoutAlignmentOption__MiddleLeft = 3,
		ECreativeLayoutAlignmentOption__Centered = 4,
		ECreativeLayoutAlignmentOption__MiddleRight = 5,
		ECreativeLayoutAlignmentOption__BottomLeft = 6,
		ECreativeLayoutAlignmentOption__BottomCenter = 7,
		ECreativeLayoutAlignmentOption__BottomRight = 8,
		ECreativeLayoutAlignmentOption__CenteredFull = 9,
		ECreativeLayoutAlignmentOption__LeftTall = A,
		ECreativeLayoutAlignmentOption__CenteredTall = B,
		ECreativeLayoutAlignmentOption__RightTall = C,
		ECreativeLayoutAlignmentOption__TopWide = D,
		ECreativeLayoutAlignmentOption__CenteredWide = E,
		ECreativeLayoutAlignmentOption__BottomWide = F,
	};


	// Enum /Script/FortniteGame.ECreativeRegisteredPlayerGroups
	enum ECreativeRegisteredPlayerGroups
	{
		ECreativeRegisteredPlayerGroups__None = 0,
		ECreativeRegisteredPlayerGroups__RegisteredPlayers = 1,
		ECreativeRegisteredPlayerGroups__NonRegisteredPlayers = 2,
		ECreativeRegisteredPlayerGroups__Everyone = 3,
	};


	// Enum /Script/FortniteGame.ECreativePlayerSpawnMethod
	enum ECreativePlayerSpawnMethod
	{
		ECreativePlayerSpawnMethod__Spawner = 0,
		ECreativePlayerSpawnMethod__Rift = 1,
		ECreativePlayerSpawnMethod__Aircraft = 2,
	};


	// Enum /Script/FortniteGame.EScoreDistributionType
	enum EScoreDistributionType
	{
		EScoreDistributionType__Default = 0,
		EScoreDistributionType__DivideByDamage = 1,
		EScoreDistributionType__DivideEvenly = 2,
		EScoreDistributionType__AllToEliminator = 3,
	};


	// Enum /Script/FortniteGame.ECreatureManagerAffectedTargets
	enum ECreatureManagerAffectedTargets
	{
		ECreatureManagerAffectedTargets__NewPawnsOnly = 0,
		ECreatureManagerAffectedTargets__NewAndExistingPawns = 1,
	};


	// Enum /Script/FortniteGame.ECustomHatType
	enum ECustomHatType
	{
		ECustomHatType_None = 0,
		ECustomHatType_Cap = 1,
		ECustomHatType_Helmet = 2,
		ECustomHatType_Mask = 3,
		ECustomHatType_Hat = 4,
		ECustomHatType_HeadReplacement = 5,
	};


	// Enum /Script/FortniteGame.EColorSwatchType
	enum EColorSwatchType
	{
		EColorSwatchType_Skin = 0,
		EColorSwatchType_Hair = 1,
		EColorSwatchType_BodyAccessory = 2,
		EColorSwatchType_Accessory = 3,
		EColorSwatchType_NumTypes = 4,
	};


	// Enum /Script/FortniteGame.ECharacterColorSwatchType
	enum ECharacterColorSwatchType
	{
		ECharacterColorSwatchType_Skin = 0,
		ECharacterColorSwatchType_Hair = 1,
		ECharacterColorSwatchType_NumTypes = 2,
	};


	// Enum /Script/FortniteGame.EVkEditStatus
	enum EVkEditStatus
	{
		EVkEditStatus__DEFAULT = 0,
		EVkEditStatus__UpToDate = 1,
		EVkEditStatus__RefreshRequested = 2,
		EVkEditStatus__RefreshRequired = 3,
		EVkEditStatus__Uploading = 4,
		EVkEditStatus__Staging = 5,
		EVkEditStatus__Preparing = 6,
		EVkEditStatus__Downloading = 7,
		EVkEditStatus__LoadingProject = 8,
		EVkEditStatus__Error = 9,
		EVkEditStatus__NumStatuses = A,
	};


	// Enum /Script/FortniteGame.EGameplayTagListenBehavior
	enum EGameplayTagListenBehavior
	{
		EGameplayTagListenBehavior__Added = 0,
		EGameplayTagListenBehavior__Removed = 1,
	};


	// Enum /Script/FortniteGame.EGateOpenState
	enum EGateOpenState
	{
		EGateOpenState__Open = 0,
		EGateOpenState__Closed = 1,
	};


	// Enum /Script/FortniteGame.EFortAccoladeType
	enum EFortAccoladeType
	{
		EFortAccoladeType__Acknowledgement = 0,
		EFortAccoladeType__Accolade = 1,
		EFortAccoladeType__Medal = 2,
	};


	// Enum /Script/FortniteGame.EAimedObjectType
	enum EAimedObjectType
	{
		EAimedObjectType__HasSightOrScope = 0,
		EAimedObjectType__HighlyAnimated = 1,
	};


	// Enum /Script/FortniteGame.EFortAIUtility
	enum EFortAIUtility
	{
		EFortAIUtility__KillPlayersMelee = 0,
		EFortAIUtility__KillPlayersRanged = 1,
		EFortAIUtility__KillPlayersArtillery = 2,
		EFortAIUtility__DestroyBuildingsMelee = 3,
		EFortAIUtility__DestroyBuildingsRanged = 4,
		EFortAIUtility__DestroyBuildingsArtillery = 5,
		EFortAIUtility__DestroyTraps = 6,
		EFortAIUtility__Tank = 7,
		EFortAIUtility__Infiltrate = 8,
		EFortAIUtility__Mob = 9,
		EFortAIUtility__Support = A,
		EFortAIUtility__Kiting = B,
		EFortAIUtility__AreaOfDenial = C,
		EFortAIUtility__DisableTraps = D,
		EFortAIUtility__Dormant = E,
		EFortAIUtility__Assassin = F,
	};


	// Enum /Script/FortniteGame.ECurveFilterSlotMode
	enum ECurveFilterSlotMode
	{
		ECurveFilterSlotMode__Open = 0,
		ECurveFilterSlotMode__Closed = 1,
	};


	// Enum /Script/FortniteGame.EFortArrayElementPosition
	enum EFortArrayElementPosition
	{
		EFortArrayElementPosition__None = 0,
		EFortArrayElementPosition__First = 1,
		EFortArrayElementPosition__Last = 2,
		EFortArrayElementPosition__Random = 3,
	};


	// Enum /Script/FortniteGame.EFortExitRequirements
	enum EFortExitRequirements
	{
		EFortExitRequirements__AnyPlayer = 0,
		EFortExitRequirements__WholeSquad = 1,
	};


	// Enum /Script/FortniteGame.EBuildingDamageTeamFilter
	enum EBuildingDamageTeamFilter
	{
		EBuildingDamageTeamFilter__Default = 0,
		EBuildingDamageTeamFilter__OwnerOnly = 1,
		EBuildingDamageTeamFilter__TeamOnly = 2,
		EBuildingDamageTeamFilter__EnemyOnly = 3,
		EBuildingDamageTeamFilter__EnemyAndOwnerOnly = 4,
		EBuildingDamageTeamFilter__None = 5,
	};


	// Enum /Script/FortniteGame.EEnvironmentDamageFilter
	enum EEnvironmentDamageFilter
	{
		EEnvironmentDamageFilter__Off = 0,
		EEnvironmentDamageFilter__PlayerBuiltOnly = 1,
		EEnvironmentDamageFilter__All = 2,
	};


	// Enum /Script/FortniteGame.ECoastState
	enum ECoastState
	{
		ECoastState__Idle = 0,
		ECoastState__Mount = 1,
		ECoastState__Coasting = 2,
		ECoastState__Pedaling = 3,
		ECoastState__PreDismount = 4,
		ECoastState__Dismount = 5,
		ECoastState__EndCoast = 6,
	};


	// Enum /Script/FortniteGame.EPowerSlideState
	enum EPowerSlideState
	{
		EPowerSlideState__None = 0,
		EPowerSlideState__Entering = 1,
		EPowerSlideState__InProgress = 2,
		EPowerSlideState__Exiting = 3,
	};


	// Enum /Script/FortniteGame.ENaturalSlideState
	enum ENaturalSlideState
	{
		ENaturalSlideState__None = 0,
		ENaturalSlideState__Entering = 1,
		ENaturalSlideState__InProgress = 2,
		ENaturalSlideState__Exiting = 3,
	};


	// Enum /Script/FortniteGame.EBounceCompressionState
	enum EBounceCompressionState
	{
		EBounceCompressionState__None = 0,
		EBounceCompressionState__Crouching = 1,
		EBounceCompressionState__Crouched = 2,
		EBounceCompressionState__Jumping = 3,
		EBounceCompressionState__Recoiling = 4,
	};


	// Enum /Script/FortniteGame.EFortAudioTODScheduleMode
	enum EFortAudioTODScheduleMode
	{
		EFortAudioTODScheduleMode__RelativeToDayPhaseChange = 0,
		EFortAudioTODScheduleMode__RandomTimeDuringDayPhase = 1,
		EFortAudioTODScheduleMode__PlayInTimeRange = 2,
		EFortAudioTODScheduleMode__Count = 3,
	};


	// Enum /Script/FortniteGame.EAutorunActivationMode
	enum EAutorunActivationMode
	{
		EAutorunActivationMode__None = 0,
		EAutorunActivationMode__DoubleTap = 1,
		EAutorunActivationMode__LockZoneButton = 2,
	};


	// Enum /Script/FortniteGame.EDoghouseControlMode
	enum EDoghouseControlMode
	{
		EDoghouseControlMode__GroundControls = 0,
		EDoghouseControlMode__AirControls = 1,
		EDoghouseControlMode__MaxCount = 2,
	};


	// Enum /Script/FortniteGame.EAileronRollDirection
	enum EAileronRollDirection
	{
		EAileronRollDirection__None = 0,
		EAileronRollDirection__Right = 1,
		EAileronRollDirection__Left = 2,
	};


	// Enum /Script/FortniteGame.EBiplaneSimEvent
	enum EBiplaneSimEvent
	{
		EBiplaneSimEvent__EngineStart = 0,
		EBiplaneSimEvent__EngineStop = 1,
		EBiplaneSimEvent__Takeoff = 2,
		EBiplaneSimEvent__Landing = 3,
		EBiplaneSimEvent__BoostBegin = 4,
		EBiplaneSimEvent__BoostEnd = 5,
		EBiplaneSimEvent__BoostChargeAboveThreshold = 6,
		EBiplaneSimEvent__AileronRoll = 7,
		EBiplaneSimEvent__ControlContextChange = 8,
	};


	// Enum /Script/FortniteGame.EFortBrushSize
	enum EFortBrushSize
	{
		EFortBrushSize__VeryVerySmall = 0,
		EFortBrushSize__VerySmall = 1,
		EFortBrushSize__Small = 2,
		EFortBrushSize__Medium = 3,
		EFortBrushSize__Large = 4,
		EFortBrushSize__VeryLarge = 5,
	};


	// Enum /Script/FortniteGame.EVehicleModCameraOriginCalculation
	enum EVehicleModCameraOriginCalculation
	{
		EVehicleModCameraOriginCalculation__UseParentCameraModeOriginCalculation = 0,
		EVehicleModCameraOriginCalculation__OriginFromModStaticMeshComponent = 1,
	};


	// Enum /Script/FortniteGame.EFortCustomMovement
	enum EFortCustomMovement
	{
		EFortCustomMovement__Default = 0,
		EFortCustomMovement__Driving = 1,
		EFortCustomMovement__Passenger = 2,
		EFortCustomMovement__Parachuting = 3,
		EFortCustomMovement__Skydiving = 4,
		EFortCustomMovement__SkydiveFollowing = 5,
		EFortCustomMovement__Hover = 6,
		EFortCustomMovement__RemoteControl_Flying = 7,
		EFortCustomMovement__Ziplining = 8,
		EFortCustomMovement__ZipliningOnSpline = 9,
		EFortCustomMovement__Grinding = A,
		EFortCustomMovement__Ballooning = B,
		EFortCustomMovement__SurfaceSwimming = C,
		EFortCustomMovement__DBNOCarried = D,
		EFortCustomMovement__Floating = E,
		EFortCustomMovement__Goop = F,
		EFortCustomMovement__DeimosPreFall = 10,
		EFortCustomMovement__Sliding = 11,
		EFortCustomMovement__Skating = 12,
		EFortCustomMovement__Swinging = 13,
		EFortCustomMovement__SwingingGrounded = 14,
		EFortCustomMovement__SynchedAction = 15,
		EFortCustomMovement__Ridden = 16,
		EFortCustomMovement__FlyingRidden = 17,
		EFortCustomMovement__MovementExtension = 18,
		EFortCustomMovement__Count = 19,
	};


	// Enum /Script/FortniteGame.EChuteActions
	enum EChuteActions
	{
		EChuteActions__None = 0,
		EChuteActions__WantsToOpen = 1,
		EChuteActions__WantsToClose = 2,
	};


	// Enum /Script/FortniteGame.EChatRoomJoinHelperState
	enum EChatRoomJoinHelperState
	{
		EChatRoomJoinHelperState__Ready = 0,
		EChatRoomJoinHelperState__AttemptingJoin = 1,
		EChatRoomJoinHelperState__Joined = 2,
		EChatRoomJoinHelperState__AttemptingLeave = 3,
	};


	// Enum /Script/FortniteGame.EFortCollectionBookState
	enum EFortCollectionBookState
	{
		EFortCollectionBookState__Active = 0,
		EFortCollectionBookState__Completed = 1,
		EFortCollectionBookState__Claimed = 2,
	};


	// Enum /Script/FortniteGame.EFortCreativeEventSystemType
	enum EFortCreativeEventSystemType
	{
		EFortCreativeEventSystemType__Channels = 0,
		EFortCreativeEventSystemType__ChannelsWithEvents = 1,
		EFortCreativeEventSystemType__DirectBinding = 2,
	};


	// Enum /Script/FortniteGame.EIndexObjectRegisterLogType
	enum EIndexObjectRegisterLogType
	{
		EIndexObjectRegisterLogType__Off = 0,
		EIndexObjectRegisterLogType__On = 1,
		EIndexObjectRegisterLogType__Verbose = 2,
	};


	// Enum /Script/FortniteGame.ECreativeItemListType
	enum ECreativeItemListType
	{
		ECreativeItemListType__ThemedCollection = 0,
		ECreativeItemListType__ItemCollection = 1,
		ECreativeItemListType__Device = 2,
		ECreativeItemListType__Equipment = 3,
		ECreativeItemListType__Expendable = 4,
		ECreativeItemListType__Island = 5,
		ECreativeItemListType__Hidden = 6,
		ECreativeItemListType__None = 7,
	};


	// Enum /Script/FortniteGame.ECreativeOptionDestructiveActionOperator
	enum ECreativeOptionDestructiveActionOperator
	{
		ECreativeOptionDestructiveActionOperator__Invalid = 0,
		ECreativeOptionDestructiveActionOperator__LessThan = 1,
		ECreativeOptionDestructiveActionOperator__NotEqual = 2,
		ECreativeOptionDestructiveActionOperator__GreaterThan = 3,
	};


	// Enum /Script/FortniteGame.EFortSourDropperColorType
	enum EFortSourDropperColorType
	{
		EFortSourDropperColorType__None = 0,
		EFortSourDropperColorType__Bright = 1,
		EFortSourDropperColorType__MidBright = 2,
		EFortSourDropperColorType__MidDark = 3,
		EFortSourDropperColorType__Dark = 4,
	};


	// Enum /Script/FortniteGame.ECreativeVersionCompareResult
	enum ECreativeVersionCompareResult
	{
		ECreativeVersionCompareResult__OlderVersion = 0,
		ECreativeVersionCompareResult__Equal = 1,
		ECreativeVersionCompareResult__NewerVersion = 2,
	};


	// Enum /Script/FortniteGame.EFortDayPhasePrio
	enum EFortDayPhasePrio
	{
		EFortDayPhasePrio__Default = 0,
		EFortDayPhasePrio__DailySummary = 1,
	};


	// Enum /Script/FortniteGame.EFortDialogResult
	enum EFortDialogResult
	{
		EFortDialogResult__Confirmed = 0,
		EFortDialogResult__Declined = 1,
		EFortDialogResult__Ignored = 2,
		EFortDialogResult__Killed = 3,
		EFortDialogResult__TimedOut = 4,
		EFortDialogResult__Unknown = 5,
	};


	// Enum /Script/FortniteGame.EDynamicBackgroudKey
	enum EDynamicBackgroudKey
	{
		EDynamicBackgroudKey__Lobby = 0,
		EDynamicBackgroudKey__Vault = 1,
		EDynamicBackgroudKey__Max_None = 2,
	};


	// Enum /Script/FortniteGame.EDynamicXpReportingStatus
	enum EDynamicXpReportingStatus
	{
		EDynamicXpReportingStatus__NotSet = 0,
		EDynamicXpReportingStatus__Creative = 1,
		EDynamicXpReportingStatus__VkPlayXps = 2,
		EDynamicXpReportingStatus__VkPlayDisabled = 3,
		EDynamicXpReportingStatus__VkPlayXpsNotAvail = 4,
		EDynamicXpReportingStatus__VkPlayXpsNoData = 5,
		EDynamicXpReportingStatus__VkPlayXpsPlayerNotCached = 6,
		EDynamicXpReportingStatus__VkPlayXpsUpdateFailed = 7,
	};


	// Enum /Script/FortniteGame.EDynamicXpCalibrationPhase
	enum EDynamicXpCalibrationPhase
	{
		EDynamicXpCalibrationPhase__None = 0,
		EDynamicXpCalibrationPhase__DataGathering = 1,
		EDynamicXpCalibrationPhase__DataAnalysis = 2,
		EDynamicXpCalibrationPhase__LiveXpOnceApproved = 3,
		EDynamicXpCalibrationPhase__LiveXp = 4,
		EDynamicXpCalibrationPhase__Failed = 5,
	};


	// Enum /Script/FortniteGame.EFortEncounterSpawnLocationPlacementMode
	enum EFortEncounterSpawnLocationPlacementMode
	{
		EFortEncounterSpawnLocationPlacementMode__Directional = 0,
		EFortEncounterSpawnLocationPlacementMode__Ring = 1,
		EFortEncounterSpawnLocationPlacementMode__Volume = 2,
		EFortEncounterSpawnLocationPlacementMode__Custom = 3,
		EFortEncounterSpawnLocationPlacementMode__Max_None = 4,
	};


	// Enum /Script/FortniteGame.EFortErrorSeverity
	enum EFortErrorSeverity
	{
		EFortErrorSeverity__Unspecified = 0,
		EFortErrorSeverity__Silent = 1,
		EFortErrorSeverity__Passive = 2,
		EFortErrorSeverity__Blocking = 3,
		EFortErrorSeverity__SevereBlocking = 4,
	};


	// Enum /Script/FortniteGame.EFortEventNameType
	enum EFortEventNameType
	{
		EFortEventNameType__Mission = 0,
		EFortEventNameType__Client = 1,
	};


	// Enum /Script/FortniteGame.ESideEffect_NewIconVisibility
	enum ESideEffect_NewIconVisibility
	{
		ESideEffect_NewIconVisibility__MakeIconVisible = 0,
		ESideEffect_NewIconVisibility__HideIcon = 1,
	};


	// Enum /Script/FortniteGame.ESideEffect_NewTargetVisibility
	enum ESideEffect_NewTargetVisibility
	{
		ESideEffect_NewTargetVisibility__MakeActorVisible = 0,
		ESideEffect_NewTargetVisibility__HideActor = 1,
	};


	// Enum /Script/FortniteGame.EReloadMtxExperimentBucketType
	enum EReloadMtxExperimentBucketType
	{
		EReloadMtxExperimentBucketType__Disabled = 0,
		EReloadMtxExperimentBucketType__ReloadMtxIncremental = 1,
		EReloadMtxExperimentBucketType__ReloadMtxStatic = 2,
	};


	// Enum /Script/FortniteGame.EBattlePassPurchaseScreenExperimentBucketType
	enum EBattlePassPurchaseScreenExperimentBucketType
	{
		EBattlePassPurchaseScreenExperimentBucketType__ShowBattlePassPurchaseScreen = 0,
		EBattlePassPurchaseScreenExperimentBucketType__SkipBattlePassPurchaseScreen = 1,
	};


	// Enum /Script/FortniteGame.EMPLobbyExperimentBucketType
	enum EMPLobbyExperimentBucketType
	{
		EMPLobbyExperimentBucketType__OldLobby = 0,
		EMPLobbyExperimentBucketType__MultiproductLobby = 1,
		EMPLobbyExperimentBucketType__MultiproductLobbyWithSearch = 2,
	};


	// Enum /Script/FortniteGame.EItemShopCmsExperimentBucketType
	enum EItemShopCmsExperimentBucketType
	{
		EItemShopCmsExperimentBucketType__CmsPageA = 0,
		EItemShopCmsExperimentBucketType__CmsPageB = 1,
		EItemShopCmsExperimentBucketType__CmsPageC = 2,
	};


	// Enum /Script/FortniteGame.ETwoOptionExperimentBucketType
	enum ETwoOptionExperimentBucketType
	{
		ETwoOptionExperimentBucketType__Option1 = 0,
		ETwoOptionExperimentBucketType__Option2 = 1,
	};


	// Enum /Script/FortniteGame.EGfaCvarPriority
	enum EGfaCvarPriority
	{
		EGfaCvarPriority__PluginLowPriority = 0,
		EGfaCvarPriority__DeviceProfile = 1,
		EGfaCvarPriority__PluginHighPriority = 2,
		EGfaCvarPriority__Code = 3,
	};


	// Enum /Script/FortniteGame.EFortGameFeature
	enum EFortGameFeature
	{
		EFortGameFeature__EarlyStartup = 0,
		EFortGameFeature__DedicatedServer = 1,
		EFortGameFeature__DanceRoyale = 2,
		EFortGameFeature__Frontend = 3,
		EFortGameFeature__MinimalLobby = 4,
		EFortGameFeature__GameplayAthena = 5,
		EFortGameFeature__GameplayCampaignTutorial = 6,
		EFortGameFeature__GameplayCampaign = 7,
		EFortGameFeature__GameplayCreative = 8,
		EFortGameFeature__PredownloadedCosmetics = 9,
		EFortGameFeature__Invalid = A,
		EFortGameFeature__Count = A,
	};


	// Enum /Script/FortniteGame.EFortGameFeatureState
	enum EFortGameFeatureState
	{
		EFortGameFeatureState__Unknown = 0,
		EFortGameFeatureState__UninstallFailled = 1,
		EFortGameFeatureState__Uninstalled = 2,
		EFortGameFeatureState__Uninstalling = 3,
		EFortGameFeatureState__Unavailable = 4,
		EFortGameFeatureState__Downloading = 5,
		EFortGameFeatureState__DownloadingPaused = 6,
		EFortGameFeatureState__DownloadFailed = 7,
		EFortGameFeatureState__Available = 8,
		EFortGameFeatureState__Preloading = 9,
		EFortGameFeatureState__PreloadingFailed = A,
		EFortGameFeatureState__Preloaded = B,
		EFortGameFeatureState__Loading = C,
		EFortGameFeatureState__Loaded = D,
		EFortGameFeatureState__Count = D,
	};


	// Enum /Script/FortniteGame.EFortDisplayGender
	enum EFortDisplayGender
	{
		EFortDisplayGender__Unknown = 0,
		EFortDisplayGender__Male = 1,
		EFortDisplayGender__Female = 2,
		EFortDisplayGender__NumTypes = 3,
	};


	// Enum /Script/FortniteGame.EHabaneroTierType
	enum EHabaneroTierType
	{
		EHabaneroTierType__HabaneroSauce0 = 0,
		EHabaneroTierType__HabaneroSauce1 = 1,
		EHabaneroTierType__HabaneroSauce2 = 2,
		EHabaneroTierType__HabaneroSauce3 = 3,
		EHabaneroTierType__HabaneroSauce4 = 4,
		EHabaneroTierType__HabaneroSauce5 = 5,
		EHabaneroTierType__HabaneroSauce6 = 6,
		EHabaneroTierType__HabaneroSauce7 = 7,
		EHabaneroTierType__HabaneroSauce8 = 8,
	};


	// Enum /Script/FortniteGame.ESwingType
	enum ESwingType
	{
		ESwingType__Swing1 = 0,
		ESwingType__Swing2 = 1,
		ESwingType__Swing3 = 2,
		ESwingType__Swing4 = 3,
		ESwingType__UniqueSwingCount = 4,
	};


	// Enum /Script/FortniteGame.ESwingSequence
	enum ESwingSequence
	{
		ESwingSequence__UpperBodySwing = 0,
		ESwingSequence__UpperBodyReturn = 1,
		ESwingSequence__CrouchUpperBodySwing = 2,
		ESwingSequence__CrouchUpperBodyReturn = 3,
		ESwingSequence__CrouchInPlaceAdditiveSwing = 4,
		ESwingSequence__CrouchInPlaceAdditiveReturn = 5,
		ESwingSequence__SwingSequenceCount = 6,
	};


	// Enum /Script/FortniteGame.EAnimNotifyTracks
	enum EAnimNotifyTracks
	{
		EAnimNotifyTracks__GenericNotifies = 0,
		EAnimNotifyTracks__DualWield = 1,
		EAnimNotifyTracks__DecisionWindow = 2,
		EAnimNotifyTracks__AbilityTrigger = 3,
		EAnimNotifyTracks__AudioParameters = 4,
		EAnimNotifyTracks__ReloadFx = 5,
		EAnimNotifyTracks__MeleeTrails = 6,
		EAnimNotifyTracks__StopMeleeTrailsOnEnd = 7,
		EAnimNotifyTracks__PlaySwimmingSounds = 8,
		EAnimNotifyTracks__Count = 9,
	};


	// Enum /Script/FortniteGame.EHarvestSwingPhase
	enum EHarvestSwingPhase
	{
		EHarvestSwingPhase__Swing = 0,
		EHarvestSwingPhase__End = 1,
	};


	// Enum /Script/FortniteGame.EFortInputMouseAxis
	enum EFortInputMouseAxis
	{
		EFortInputMouseAxis__X = 0,
		EFortInputMouseAxis__Y = 1,
		EFortInputMouseAxis__Both = 2,
	};


	// Enum /Script/FortniteGame.EFortInputStickOption
	enum EFortInputStickOption
	{
		EFortInputStickOption__Move = 0,
		EFortInputStickOption__Look = 1,
	};


	// Enum /Script/FortniteGame.EInteriorAudioBuildingRelativePosition
	enum EInteriorAudioBuildingRelativePosition
	{
		EInteriorAudioBuildingRelativePosition__SameCell = 0,
		EInteriorAudioBuildingRelativePosition__SameCellQuadrantTestFailed = 1,
		EInteriorAudioBuildingRelativePosition__OtherCellParallelToForward = 2,
		EInteriorAudioBuildingRelativePosition__OtherCellParallelToRight = 3,
		EInteriorAudioBuildingRelativePosition__OtherCellParallelToUp = 4,
		EInteriorAudioBuildingRelativePosition__Max_None = 5,
	};


	// Enum /Script/FortniteGame.EInteriorAudioBuildingTags
	enum EInteriorAudioBuildingTags
	{
		EInteriorAudioBuildingTags__None = 0,
		EInteriorAudioBuildingTags__HasDoors = 1,
		EInteriorAudioBuildingTags__RotationDependant = 2,
		EInteriorAudioBuildingTags__UseConditionalEvaluation = 3,
	};


	// Enum /Script/FortniteGame.EInteriorAudioBuildingType
	enum EInteriorAudioBuildingType
	{
		EInteriorAudioBuildingType__None = 0,
		EInteriorAudioBuildingType__Wall = 1,
		EInteriorAudioBuildingType__Floor = 2,
		EInteriorAudioBuildingType__CenterCell = 3,
	};


	// Enum /Script/FortniteGame.EInteriorAudioQuadrant
	enum EInteriorAudioQuadrant
	{
		EInteriorAudioQuadrant__None = 0,
		EInteriorAudioQuadrant__Left = 1,
		EInteriorAudioQuadrant__Right = 2,
		EInteriorAudioQuadrant__Top = 4,
		EInteriorAudioQuadrant__Bottom = 8,
	};


	// Enum /Script/FortniteGame.EInteriorAudioBuildingDefaultRotation
	enum EInteriorAudioBuildingDefaultRotation
	{
		EInteriorAudioBuildingDefaultRotation__PositiveY = 0,
		EInteriorAudioBuildingDefaultRotation__NegativeX = 1,
		EInteriorAudioBuildingDefaultRotation__NegativeY = 2,
		EInteriorAudioBuildingDefaultRotation__PositiveX = 3,
	};


	// Enum /Script/FortniteGame.EInteriorAudioBuildingEvaluation
	enum EInteriorAudioBuildingEvaluation
	{
		EInteriorAudioBuildingEvaluation__Invalid = 0,
		EInteriorAudioBuildingEvaluation__Partial = 1,
		EInteriorAudioBuildingEvaluation__Solid = 2,
	};


	// Enum /Script/FortniteGame.EInteriorAudioBuildingDirection
	enum EInteriorAudioBuildingDirection
	{
		EInteriorAudioBuildingDirection__Left = 0,
		EInteriorAudioBuildingDirection__Right = 1,
		EInteriorAudioBuildingDirection__Forward = 2,
		EInteriorAudioBuildingDirection__Backward = 3,
		EInteriorAudioBuildingDirection__Upward = 4,
	};


	// Enum /Script/FortniteGame.EFortInventoryFilter
	enum EFortInventoryFilter
	{
		EFortInventoryFilter__WeaponMelee = 0,
		EFortInventoryFilter__WeaponRanged = 1,
		EFortInventoryFilter__WeaponMod = 2,
		EFortInventoryFilter__Ammo = 3,
		EFortInventoryFilter__Traps = 4,
		EFortInventoryFilter__Consumables = 5,
		EFortInventoryFilter__Ingredients = 6,
		EFortInventoryFilter__PlayerAugment = 7,
		EFortInventoryFilter__Gadget = 8,
		EFortInventoryFilter__Decorations = 9,
		EFortInventoryFilter__Badges = A,
		EFortInventoryFilter__Heroes = B,
		EFortInventoryFilter__LeadSurvivors = C,
		EFortInventoryFilter__Survivors = D,
		EFortInventoryFilter__Defenders = E,
		EFortInventoryFilter__Resources = F,
		EFortInventoryFilter__ConversionControl = 10,
		EFortInventoryFilter__AthenaCosmetics = 11,
		EFortInventoryFilter__Playset = 12,
		EFortInventoryFilter__CreativePlot = 13,
		EFortInventoryFilter__TeamPerk = 14,
		EFortInventoryFilter__Workers = 15,
		EFortInventoryFilter__Invisible = 16,
		EFortInventoryFilter__Max_None = 17,
	};


	// Enum /Script/FortniteGame.EFortFrontendInventoryFilter
	enum EFortFrontendInventoryFilter
	{
		EFortFrontendInventoryFilter__Schematics = 0,
		EFortFrontendInventoryFilter__WorldItems = 1,
		EFortFrontendInventoryFilter__WorldItemsInGame = 2,
		EFortFrontendInventoryFilter__WorldItemsStorage = 3,
		EFortFrontendInventoryFilter__WorldItemsTransfer = 4,
		EFortFrontendInventoryFilter__ConsumablesAndAccountResources = 5,
		EFortFrontendInventoryFilter__Heroes = 6,
		EFortFrontendInventoryFilter__Defenders = 7,
		EFortFrontendInventoryFilter__Survivors = 8,
		EFortFrontendInventoryFilter__AthenaCharacter = 9,
		EFortFrontendInventoryFilter__AthenaBackpack = A,
		EFortFrontendInventoryFilter__AthenaPickaxe = B,
		EFortFrontendInventoryFilter__AthenaGliders = C,
		EFortFrontendInventoryFilter__AthenaContrails = D,
		EFortFrontendInventoryFilter__AthenaEmotes = E,
		EFortFrontendInventoryFilter__AthenaItemWraps = F,
		EFortFrontendInventoryFilter__AthenaLoadingScreens = 10,
		EFortFrontendInventoryFilter__AthenaLobbyMusic = 11,
		EFortFrontendInventoryFilter__HestiaWeapons = 12,
		EFortFrontendInventoryFilter__HestiaResources = 13,
		EFortFrontendInventoryFilter__StarlightInventory = 14,
		EFortFrontendInventoryFilter__Invisible = 15,
		EFortFrontendInventoryFilter__Max_None = 16,
	};


	// Enum /Script/FortniteGame.EInventoryContentSortType
	enum EInventoryContentSortType
	{
		EInventoryContentSortType__ByName = 0,
		EInventoryContentSortType__ByRating = 1,
		EInventoryContentSortType__ByLevel = 2,
		EInventoryContentSortType__ByCategory = 3,
		EInventoryContentSortType__ByRarity = 4,
		EInventoryContentSortType__ByLocation = 5,
		EInventoryContentSortType__ByPersonality = 6,
		EInventoryContentSortType__ByBonus = 7,
		EInventoryContentSortType__BySubtype = 8,
		EInventoryContentSortType__ByGrantTime = 9,
		EInventoryContentSortType__BySeries = A,
		EInventoryContentSortType__BySet = B,
		EInventoryContentSortType__ByReleaseDate = C,
		EInventoryContentSortType__Invalid = D,
	};


	// Enum /Script/FortniteGame.EMinigameStatToSave
	enum EMinigameStatToSave
	{
		EMinigameStatToSave__None = 0,
		EMinigameStatToSave__Round = 1,
		EMinigameStatToSave__Career = 2,
		EMinigameStatToSave__RoundAndCareer = 3,
	};


	// Enum /Script/FortniteGame.EMinigameStatSavePolicy
	enum EMinigameStatSavePolicy
	{
		Never = 0,
		Always = 1,
		OnlyIfLower = 2,
		OnlyIfHigher = 3,
	};


	// Enum /Script/FortniteGame.EWorldItemDropBehavior
	enum EWorldItemDropBehavior
	{
		EWorldItemDropBehavior__DropAsPickup = 0,
		EWorldItemDropBehavior__DestroyOnDrop = 1,
		EWorldItemDropBehavior__DropAsPickupDestroyOnEmpty = 2,
		EWorldItemDropBehavior__DropAsPickupEvenWhenEmpty = 3,
	};


	// Enum /Script/FortniteGame.EPickupMeshTransformExec
	enum EPickupMeshTransformExec
	{
		EPickupMeshTransformExec__IsIdentity = 0,
		EPickupMeshTransformExec__IsOverridden = 1,
	};


	// Enum /Script/FortniteGame.EFortJackalSimEvent
	enum EFortJackalSimEvent
	{
		EFortJackalSimEvent__Jumped = 0,
	};


	// Enum /Script/FortniteGame.EFortLeaderboardMetric
	enum EFortLeaderboardMetric
	{
		EFortLeaderboardMetric__Score = 0,
		EFortLeaderboardMetric__Kills = 1,
		EFortLeaderboardMetric__TeamScore = 2,
	};


	// Enum /Script/FortniteGame.ELightweightProjectileRequestType
	enum ELightweightProjectileRequestType
	{
		ELightweightProjectileRequestType__None = 0,
		ELightweightProjectileRequestType__Single = 1,
		ELightweightProjectileRequestType__Looping = 2,
	};


	// Enum /Script/FortniteGame.ELinkEntryQueryResult
	enum ELinkEntryQueryResult
	{
		ELinkEntryQueryResult__Success = 0,
		ELinkEntryQueryResult__PartialSuccess = 1,
		ELinkEntryQueryResult__FailedQuery = 2,
		ELinkEntryQueryResult__FailedPlayerDataQuery = 3,
		ELinkEntryQueryResult__FailedParse = 4,
		ELinkEntryQueryResult__NotAllowedOnPlatform = 5,
		ELinkEntryQueryResult__CabinModeBlocked = 6,
		ELinkEntryQueryResult__UnableToFind = 7,
		ELinkEntryQueryResult__NotVisible = 8,
		ELinkEntryQueryResult__TournamentDataUnavailable = 9,
		ELinkEntryQueryResult__FailedStringSanitization = A,
		ELinkEntryQueryResult__FailedSubModePopulation = B,
		ELinkEntryQueryResult__FailedSubModeSurfacePopulation = C,
		ELinkEntryQueryResult__FailedSubModeParsing = D,
		ELinkEntryQueryResult__FilteredOut = E,
		ELinkEntryQueryResult__RatingUnrated = F,
		ELinkEntryQueryResult__RatingRestricted = 10,
		ELinkEntryQueryResult__ModeratorOnly = 11,
	};


	// Enum /Script/FortniteGame.EFortLobbyType
	enum EFortLobbyType
	{
		EFortLobbyType__Default = 0,
		EFortLobbyType__Tournament = 1,
		EFortLobbyType__Creative = 2,
		EFortLobbyType__Division = 3,
	};


	// Enum /Script/FortniteGame.EFortMotionMatchingLocomotionStyle
	enum EFortMotionMatchingLocomotionStyle
	{
		EFortMotionMatchingLocomotionStyle__Idle = 0,
		EFortMotionMatchingLocomotionStyle__Walk = 1,
		EFortMotionMatchingLocomotionStyle__Run = 2,
		EFortMotionMatchingLocomotionStyle__Sprint = 3,
	};


	// Enum /Script/FortniteGame.EFortSessionHelperJoinResult
	enum EFortSessionHelperJoinResult
	{
		EFortSessionHelperJoinResult__NoResult = 0,
		EFortSessionHelperJoinResult__ReservationSuccess = 1,
		EFortSessionHelperJoinResult__ReservationFailure_PartyLimitReached = 2,
		EFortSessionHelperJoinResult__ReservationFailure_IncorrectPlayerCount = 3,
		EFortSessionHelperJoinResult__ReservationFailure_RequestTimedOut = 4,
		EFortSessionHelperJoinResult__ReservationFailure_ReservationNotFound = 5,
		EFortSessionHelperJoinResult__ReservationFailure_ReservationDenied = 6,
		EFortSessionHelperJoinResult__ReservationFailure_ReservationDenied_Banned = 7,
		EFortSessionHelperJoinResult__ReservationFailure_ReservationRequestCanceled = 8,
		EFortSessionHelperJoinResult__ReservationFailure_ReservationInvalid = 9,
		EFortSessionHelperJoinResult__ReservationFailure_BadSessionId = A,
		EFortSessionHelperJoinResult__ReservationFailure_ReservationDenied_ContainsExistingPlayers = B,
		EFortSessionHelperJoinResult__ReservationFailure_GeneralError = C,
		EFortSessionHelperJoinResult__ReservationFailure_NoSubsystem = D,
		EFortSessionHelperJoinResult__ReservationFailure_NoIdentity = E,
		EFortSessionHelperJoinResult__ReservationFailure_InvalidSession = F,
		EFortSessionHelperJoinResult__ReservationFailure_InvalidUser = 10,
		EFortSessionHelperJoinResult__ReservationFailure_EncryptionKey = 11,
		EFortSessionHelperJoinResult__ReservationFailure_RefreshAuth = 12,
		EFortSessionHelperJoinResult__ReservationFailure_AlreadyJoiningDuringReserve = 13,
		EFortSessionHelperJoinResult__ReservationFailure_AlreadyJoiningDuringSkip = 14,
		EFortSessionHelperJoinResult__JoinSessionSuccess = 15,
		EFortSessionHelperJoinResult__JoinSessionFailure_SessionIsFull = 16,
		EFortSessionHelperJoinResult__JoinSessionFailure_SessionDoesNotExist = 17,
		EFortSessionHelperJoinResult__JoinSessionFailure_CouldNotRetrieveAddress = 18,
		EFortSessionHelperJoinResult__JoinSessionFailure_AlreadyInSession = 19,
		EFortSessionHelperJoinResult__JoinSessionFailure_UnknownError = 1A,
		EFortSessionHelperJoinResult__JoinSessionFailure_InvalidSession = 1B,
		EFortSessionHelperJoinResult__JoinSessionFailure_InvalidSearchResultIndex = 1C,
		EFortSessionHelperJoinResult__JoinSessionFailure_AlreadyJoiningDuringJoin = 1D,
		EFortSessionHelperJoinResult__SearchPassFailure_NoSessionHelper = 1E,
		EFortSessionHelperJoinResult__SearchPassFailure_InvalidUser = 1F,
		EFortSessionHelperJoinResult__SearchPassFailure_NoIdentity = 20,
		EFortSessionHelperJoinResult__SearchPassFailure_InvalidSearchResult = 21,
		EFortSessionHelperJoinResult__SearchPassFailure_InvalidSearchResultIndex = 22,
		EFortSessionHelperJoinResult__JoinSessionCanceled = 23,
	};


	// Enum /Script/FortniteGame.EMatchmakingUtilityFlows
	enum EMatchmakingUtilityFlows
	{
		EMatchmakingUtilityFlows__Automatic = 0,
		EMatchmakingUtilityFlows__JoinMatchInProgress = 1,
		EMatchmakingUtilityFlows__SpectateMatch = 2,
		EMatchmakingUtilityFlows__Legacy = 3,
		EMatchmakingUtilityFlows__LinkCode = 4,
		EMatchmakingUtilityFlows__JoinEditingSession = 5,
		EMatchmakingUtilityFlows__SaveTheWorld = 6,
		EMatchmakingUtilityFlows__Internal_Unselected = 7,
	};


	// Enum /Script/FortniteGame.EMatchmakingReadyCheck
	enum EMatchmakingReadyCheck
	{
		EMatchmakingReadyCheck__NotReady = 0,
		EMatchmakingReadyCheck__Default = 1,
		EMatchmakingReadyCheck__SaveTheWorld = 2,
		EMatchmakingReadyCheck__LinkCode = 3,
		EMatchmakingReadyCheck__JoinEditingSession = 4,
		EMatchmakingReadyCheck__MAX_NUM = 5,
	};


	// Enum /Script/FortniteGame.EGameReadiness
	enum EGameReadiness
	{
		EGameReadiness__NotReady = 0,
		EGameReadiness__Ready = 1,
		EGameReadiness__Reevaluating = 2,
		EGameReadiness__SittingOut = 3,
		EGameReadiness__NUM = 4,
	};


	// Enum /Script/FortniteGame.EGameReadiness_Repl
	enum EGameReadiness_Repl
	{
		EGameReadiness_Repl__N = 0,
		EGameReadiness_Repl__Y = 1,
		EGameReadiness_Repl__R = 2,
		EGameReadiness_Repl__S = 3,
		EGameReadiness_Repl__NUM = 4,
	};


	// Enum /Script/FortniteGame.EInGameLinkType
	enum EInGameLinkType
	{
		EInGameLinkType__BattleRoyale = 0,
		EInGameLinkType__CreativeIsland = 1,
		EInGameLinkType__Competitive = 2,
		EInGameLinkType__UEFN = 3,
		EInGameLinkType__UNDEFINED = 4,
		EInGameLinkType__NUM = 5,
	};


	// Enum /Script/FortniteGame.EInGameLinkType_Repl
	enum EInGameLinkType_Repl
	{
		EInGameLinkType_Repl__B = 0,
		EInGameLinkType_Repl__I = 1,
		EInGameLinkType_Repl__C = 2,
		EInGameLinkType_Repl__U = 3,
		EInGameLinkType_Repl__X = 4,
		EInGameLinkType_Repl__NUM = 5,
	};


	// Enum /Script/FortniteGame.EFortTournamentAlertType
	enum EFortTournamentAlertType
	{
		EFortTournamentAlertType__Warning = 0,
		EFortTournamentAlertType__Info = 1,
	};


	// Enum /Script/FortniteGame.EPlaylistUpdateReason
	enum EPlaylistUpdateReason
	{
		EPlaylistUpdateReason__LocalPlayerJoinedParty = 0,
		EPlaylistUpdateReason__LocalPlayerLocationChangedToFrontend = 1,
		EPlaylistUpdateReason__LocalPlayerSubgameSelected = 2,
		EPlaylistUpdateReason__LocalPlayerLeftParty = 3,
		EPlaylistUpdateReason__LocalPlayerDeclinedCrossplayPermission = 4,
		EPlaylistUpdateReason__PartyGameSessionKeyChanged = 5,
		EPlaylistUpdateReason__PartySquadFillChanged = 6,
		EPlaylistUpdateReason__PartyMemberJoined = 7,
		EPlaylistUpdateReason__PartyMemberLeft = 8,
		EPlaylistUpdateReason__PartyMemberReadinessChanged = 9,
		EPlaylistUpdateReason__PartyMemberInGameReadyCheckChanged = A,
		EPlaylistUpdateReason__PartyMemberLocationChanged = B,
		EPlaylistUpdateReason__PartyMemberSpectateAvailabilityChanged = C,
		EPlaylistUpdateReason__PartyMemberSessionJoinInfoChanged = D,
		EPlaylistUpdateReason__ValidatePlaylist_QoSCheckFailed = E,
		EPlaylistUpdateReason__ValidatePlaylist_TournamentEventOver = F,
		EPlaylistUpdateReason__ValidatePlaylist_BlackoutChanged = 10,
		EPlaylistUpdateReason__ValidatePlaylist_MatchmakingEventsChanged = 11,
		EPlaylistUpdateReason__ValidatePlaylist_TournamentNewEventStarted = 12,
		EPlaylistUpdateReason__ValidatePlaylist_TournamentNewEventCountdown = 13,
		EPlaylistUpdateReason__ValidatePlaylist_TournamentsChanged = 14,
		EPlaylistUpdateReason__ValidatePlaylist_PlayerTournamentDataRefreshed = 15,
		EPlaylistUpdateReason__Initialization = 16,
	};


	// Enum /Script/FortniteGame.EActivePreTravelSetupStepsMask
	enum EActivePreTravelSetupStepsMask
	{
		EActivePreTravelSetupStepsMask__None = 0,
		EActivePreTravelSetupStepsMask__WaitingForSubGameContent = 1,
		EActivePreTravelSetupStepsMask__WaitingForDownloadableContent = 2,
		EActivePreTravelSetupStepsMask__WaitingForServerInitialization = 4,
		EActivePreTravelSetupStepsMask__WaitingForContentBeaconDisconnect = 8,
		EActivePreTravelSetupStepsMask__WaitingForSecondContentBeacon = 10,
		EActivePreTravelSetupStepsMask__CancelingPreTravelSetup = 20,
	};


	// Enum /Script/FortniteGame.EMatchmakingErrorV2
	enum EMatchmakingErrorV2
	{
		EMatchmakingErrorV2__Success = 0,
		EMatchmakingErrorV2__Canceled = 1,
		EMatchmakingErrorV2__NeedUpdate = 2,
		EMatchmakingErrorV2__VersionMismatch = 3,
		EMatchmakingErrorV2__UpdateFailed = 4,
		EMatchmakingErrorV2__NotLoggedIn = 5,
		EMatchmakingErrorV2__NoIdentityInterface = 6,
		EMatchmakingErrorV2__NoSessionInterface = 7,
		EMatchmakingErrorV2__AlreadyInSession = 8,
		EMatchmakingErrorV2__FindSessionFailure = 9,
		EMatchmakingErrorV2__InvalidSessionId = A,
		EMatchmakingErrorV2__FailedToQueryEncryptionKey = B,
		EMatchmakingErrorV2__FailedToRefreshAuthToken = C,
		EMatchmakingErrorV2__FailedToCleanupSession = D,
		EMatchmakingErrorV2__FailedToJoinSession = E,
		EMatchmakingErrorV2__FailedToTravelToSession = F,
		EMatchmakingErrorV2__Unauthorized = 10,
		EMatchmakingErrorV2__BannedFromAthena = 11,
		EMatchmakingErrorV2__BannedFromAthenaForExploit = 12,
		EMatchmakingErrorV2__BannedFromAthenaForTeaming = 13,
		EMatchmakingErrorV2__BannedFromAthenaForTeamKilling = 14,
		EMatchmakingErrorV2__InvalidCustomMatchKey = 15,
		EMatchmakingErrorV2__FailedToContactGameServices = 16,
		EMatchmakingErrorV2__FailedToConnectToMMS = 17,
		EMatchmakingErrorV2__MMSCommunicationIssue = 18,
		EMatchmakingErrorV2__ServiceReturnedError = 19,
		EMatchmakingErrorV2__PlaylistNoLongerAvailable = 1A,
		EMatchmakingErrorV2__CrossplayUnsetWithInputDevicePoolShift = 1B,
		EMatchmakingErrorV2__CrossplayNeededForTournamentMatch = 1C,
		EMatchmakingErrorV2__MatchmakingDisabled = 1D,
		EMatchmakingErrorV2__AccountLevelTooLow = 1E,
		EMatchmakingErrorV2__JoinInProgressError = 1F,
		EMatchmakingErrorV2__SpectateInProgressError = 20,
		EMatchmakingErrorV2__MatchmakingInProgress = 21,
		EMatchmakingErrorV2__TooFrequentRequests = 22,
		EMatchmakingErrorV2__HostFailedToGenerateDownloadableContent = 23,
		EMatchmakingErrorV2__SourceVersionTooNew = 24,
		EMatchmakingErrorV2__FailedToAcquireContent = 25,
		EMatchmakingErrorV2__CancelledDownloadContent = 26,
		EMatchmakingErrorV2__DataAssetDirectoryUpdateFailed = 27,
		EMatchmakingErrorV2__InvalidPlaylistRevision = 28,
		EMatchmakingErrorV2__FailedToConnectToContentBeacon = 29,
		EMatchmakingErrorV2__FailedToAcquireServerInitializationState = 2A,
		EMatchmakingErrorV2__CancelledDuringPreTravelSetup = 2B,
		EMatchmakingErrorV2__QueryUserSessionIdTokensFailed = 2C,
		EMatchmakingErrorV2__ArbitratedWorldLookupFailed = 2D,
		EMatchmakingErrorV2__ArbitratedWorldTokenFailed = 2E,
		EMatchmakingErrorV2__ArbitratedWorldUnavailable = 2F,
		EMatchmakingErrorV2__PersistentPartyMissing = 30,
		EMatchmakingErrorV2__ContentGatingCheckFailed = 31,
		EMatchmakingErrorV2__UnknownError = 32,
	};


	// Enum /Script/FortniteGame.EUseInputWithPartyResult
	enum EUseInputWithPartyResult
	{
		EUseInputWithPartyResult__Success = 0,
		EUseInputWithPartyResult__LocalPlayerNeedsToAllowCrossplay = 1,
		EUseInputWithPartyResult__LocalPlayerRestricted = 2,
		EUseInputWithPartyResult__RemotePlayerRestricted = 3,
		EUseInputWithPartyResult__UnknownFailure = 4,
	};


	// Enum /Script/FortniteGame.EMatchmakingSourceV2
	enum EMatchmakingSourceV2
	{
		EMatchmakingSourceV2__None = 0,
		EMatchmakingSourceV2__AthenaMatchmakingWidget = 1,
		EMatchmakingSourceV2__ActivityMatchmakingWidget = 2,
		EMatchmakingSourceV2__ReadyUpScreenWidget = 3,
		EMatchmakingSourceV2__ForcedIntro = 4,
		EMatchmakingSourceV2__KeepPlayingTogetherWidget = 5,
		EMatchmakingSourceV2__Unknown = 6,
	};


	// Enum /Script/FortniteGame.EMatchmakingV2State
	enum EMatchmakingV2State
	{
		EMatchmakingV2State__Begin = 0,
		EMatchmakingV2State__Idle = 1,
		EMatchmakingV2State__Completed = 2,
		EMatchmakingV2State__Failed = 3,
		EMatchmakingV2State__INVALID = 4,
		EMatchmakingV2State__RunningMainBranch = 5,
		EMatchmakingV2State__Main_RunningChecks = 6,
		EMatchmakingV2State__Main_DADUpdate = 7,
		EMatchmakingV2State__Main_CheckPlaylistValid = 8,
		EMatchmakingV2State__Main_CheckContentGating = 9,
		EMatchmakingV2State__Main_ModifyOptions = A,
		EMatchmakingV2State__Main_Begin_JoinInProgress = B,
		EMatchmakingV2State__Main_JoinInProgress_PartyLeader_Begin = C,
		EMatchmakingV2State__Main_JoinInProgress_PartyLeader_Success = D,
		EMatchmakingV2State__Main_JoinInProgress_PartyLeader_Failed = E,
		EMatchmakingV2State__Main_JoinInProgress_PartyMember = F,
		EMatchmakingV2State__Main_Begin_NormalFlow = 10,
		EMatchmakingV2State__Main_NormalFlow_SetValues = 11,
		EMatchmakingV2State__Main_NormalFlow_CheckPartyValidity = 12,
		EMatchmakingV2State__Main_NormalFlow_CheckInputValidity = 13,
		EMatchmakingV2State__Main_NormalFlow_CheckTournamentValidity = 14,
		EMatchmakingV2State__Main_NormalFlow_Complete = 15,
		EMatchmakingV2State__ValidateProductModes = 16,
		EMatchmakingV2State__RunningFollowerBranch = 17,
		EMatchmakingV2State__Follower_CheckIsNotMatchmaking = 18,
		EMatchmakingV2State__Follower_SettingMemberVariables = 19,
		EMatchmakingV2State__Follower_ValidatingLeaderMatchmakingInfo = 1A,
		EMatchmakingV2State__Follower_ValidatingRegion = 1B,
		EMatchmakingV2State__Follower_ValidatingHotfixVersion = 1C,
		EMatchmakingV2State__Follower_ValidatingTournamentQualifications = 1D,
		EMatchmakingV2State__Follower_ValidatingPlaylist = 1E,
		EMatchmakingV2State__Follower_RunDADUpdate = 1F,
		EMatchmakingV2State__Follower_AfterDADUpdate_SetValues = 20,
		EMatchmakingV2State__Follower_AfterDADUpdate_CheckPartyValidity = 21,
		EMatchmakingV2State__FollowerBranch_Complete = 22,
		EMatchmakingV2State__CallingMatchmakingService = 23,
		EMatchmakingV2State__WaitingForMatchmakingServiceCallback = 24,
		EMatchmakingV2State__FindingSessionId = 25,
		EMatchmakingV2State__WaitingForFindSessionIdCallback = 26,
		EMatchmakingV2State__QueryUserSessionIdTokens = 27,
		EMatchmakingV2State__ConnectToReservationBeaconForArbitratedWorldParty = 28,
		EMatchmakingV2State__AfterFindSession = 29,
		EMatchmakingV2State__Fork_JoinFoundSession = 2A,
		EMatchmakingV2State__RefreshPlatformAuthToken = 2B,
		EMatchmakingV2State__DestroySession = 2C,
		EMatchmakingV2State__DestroyConsoleSession = 2D,
		EMatchmakingV2State__CheckConsoleSessionDestruction = 2E,
		EMatchmakingV2State__JoinSession = 2F,
		EMatchmakingV2State__PassedJoinSession = 30,
		EMatchmakingV2State__PreTravelSetupStartTime = 31,
		EMatchmakingV2State__ClearJoinSessionDelegate = 32,
		EMatchmakingV2State__Fork_ServerInitAndContent = 33,
		EMatchmakingV2State__OnReadyForTravel = 34,
		EMatchmakingV2State__WaitingForReadyToTravelToSession = 35,
		EMatchmakingV2State__AttemptToTravel = 36,
	};


	// Enum /Script/FortniteGame.EMatchmakingV2_Temp_PreloadingAthenaForJoinInProgress
	enum EMatchmakingV2_Temp_PreloadingAthenaForJoinInProgress
	{
		EMatchmakingV2_Temp_PreloadingAthenaForJoinInProgress__Begin = 0,
		EMatchmakingV2_Temp_PreloadingAthenaForJoinInProgress__Idle = 1,
		EMatchmakingV2_Temp_PreloadingAthenaForJoinInProgress__Completed = 2,
		EMatchmakingV2_Temp_PreloadingAthenaForJoinInProgress__Failed = 3,
		EMatchmakingV2_Temp_PreloadingAthenaForJoinInProgress__INVALID = 4,
		EMatchmakingV2_Temp_PreloadingAthenaForJoinInProgress__PreloadingAthena = 5,
		EMatchmakingV2_Temp_PreloadingAthenaForJoinInProgress__BeginningServerTransfer_UnfinishedRefactor = 6,
	};


	// Enum /Script/FortniteGame.EMatchmakingV2_Temp_JoinInProgressState
	enum EMatchmakingV2_Temp_JoinInProgressState
	{
		EMatchmakingV2_Temp_JoinInProgressState__Begin = 0,
		EMatchmakingV2_Temp_JoinInProgressState__Idle = 1,
		EMatchmakingV2_Temp_JoinInProgressState__Completed = 2,
		EMatchmakingV2_Temp_JoinInProgressState__Failed = 3,
		EMatchmakingV2_Temp_JoinInProgressState__INVALID = 4,
		EMatchmakingV2_Temp_JoinInProgressState__Branch_JoinHost = 5,
		EMatchmakingV2_Temp_JoinInProgressState__Branch_JoinParty = 6,
		EMatchmakingV2_Temp_JoinInProgressState__Branch_JoinBroadcaster = 7,
		EMatchmakingV2_Temp_JoinInProgressState__Branch_JoinPartyMember = 8,
		EMatchmakingV2_Temp_JoinInProgressState__ConnectToReservationBeacon = 9,
		EMatchmakingV2_Temp_JoinInProgressState__ConnectToReservationBeaconForPersistentParty = A,
		EMatchmakingV2_Temp_JoinInProgressState__CheckConnectToReservationBeaconForPersistentPartyData = B,
		EMatchmakingV2_Temp_JoinInProgressState__DelayingCallToJoin = C,
		EMatchmakingV2_Temp_JoinInProgressState__CheckNotMatchmaking = D,
		EMatchmakingV2_Temp_JoinInProgressState__CallToJoin = E,
	};


	// Enum /Script/FortniteGame.EMatchmakingV2Fork_ContentBeacon
	enum EMatchmakingV2Fork_ContentBeacon
	{
		EMatchmakingV2Fork_ContentBeacon__Begin = 0,
		EMatchmakingV2Fork_ContentBeacon__Idle = 1,
		EMatchmakingV2Fork_ContentBeacon__Completed = 2,
		EMatchmakingV2Fork_ContentBeacon__Failed = 3,
		EMatchmakingV2Fork_ContentBeacon__INVALID = 4,
		EMatchmakingV2Fork_ContentBeacon__V2_DisconnectedBegin = 5,
		EMatchmakingV2Fork_ContentBeacon__V2_ReadinessChangedBegin = 6,
		EMatchmakingV2Fork_ContentBeacon__V2_OnContentBeaconErrorFailed = 7,
		EMatchmakingV2Fork_ContentBeacon__V2_OnContentBeaconErrorSuccess = 8,
		EMatchmakingV2Fork_ContentBeacon__V2_OnClientReadinessChangedFailed = 9,
		EMatchmakingV2Fork_ContentBeacon__V2_OnClientReadinessChangedSuccess = A,
		EMatchmakingV2Fork_ContentBeacon__V2_CancelRequested = B,
		EMatchmakingV2Fork_ContentBeacon__V1_Begin = C,
		EMatchmakingV2Fork_ContentBeacon__V1_WaitingForContent = D,
		EMatchmakingV2Fork_ContentBeacon__V1_Disconnected = E,
		EMatchmakingV2Fork_ContentBeacon__V1_Failed = F,
		EMatchmakingV2Fork_ContentBeacon__V1_ReadinessCallback = 10,
		EMatchmakingV2Fork_ContentBeacon__V1_JoinAnyways = 11,
		EMatchmakingV2Fork_ContentBeacon__V1_TravelToSession = 12,
		EMatchmakingV2Fork_ContentBeacon__V1_TravelToSessionLambda = 13,
		EMatchmakingV2Fork_ContentBeacon__V1_TravelToSessionTimeout = 14,
		EMatchmakingV2Fork_ContentBeacon__V1_ReadinessCallbackFailed = 15,
		EMatchmakingV2Fork_ContentBeacon__V1_CancelRequested = 16,
	};


	// Enum /Script/FortniteGame.EMatchmakingV2Fork_ServerInit
	enum EMatchmakingV2Fork_ServerInit
	{
		EMatchmakingV2Fork_ServerInit__Begin = 0,
		EMatchmakingV2Fork_ServerInit__Idle = 1,
		EMatchmakingV2Fork_ServerInit__Completed = 2,
		EMatchmakingV2Fork_ServerInit__Failed = 3,
		EMatchmakingV2Fork_ServerInit__INVALID = 4,
		EMatchmakingV2Fork_ServerInit__ReadyToTravel = 5,
		EMatchmakingV2Fork_ServerInit__WaitForInit = 6,
		EMatchmakingV2Fork_ServerInit__WaitForSubGameContent = 7,
		EMatchmakingV2Fork_ServerInit__WaitForSubGameContent_Callback = 8,
		EMatchmakingV2Fork_ServerInit__WaitForSubGameContent_Callback_Ready = 9,
		EMatchmakingV2Fork_ServerInit__WaitForSubGameContent_Callback_NotReady = A,
		EMatchmakingV2Fork_ServerInit__WaitBeforeTravel = B,
		EMatchmakingV2Fork_ServerInit__FailedToConnect = C,
		EMatchmakingV2Fork_ServerInit__MissingParty = D,
		EMatchmakingV2Fork_ServerInit__FailedCallback = E,
		EMatchmakingV2Fork_ServerInit__ServerInitStateChange_Callback = F,
		EMatchmakingV2Fork_ServerInit__ServerInitStateChange_Callback_Ready = 10,
		EMatchmakingV2Fork_ServerInit__ServerInitStateChange_Callback_NotReady = 11,
		EMatchmakingV2Fork_ServerInit__CancelRequested = 12,
	};


	// Enum /Script/FortniteGame.EFortMediaGlobalEventsPlayerType
	enum EFortMediaGlobalEventsPlayerType
	{
		EFortMediaGlobalEventsPlayerType__Primary = 0,
		EFortMediaGlobalEventsPlayerType__Secondary = 1,
		EFortMediaGlobalEventsPlayerType__BackgroundAudio = 2,
	};


	// Enum /Script/FortniteGame.EMemorySamplerState
	enum EMemorySamplerState
	{
		EMemorySamplerState__Idle = 0,
		EMemorySamplerState__InProgress = 1,
		EMemorySamplerState__InProgressNotOwner = 2,
		EMemorySamplerState__LaunchError = 3,
		EMemorySamplerState__GeneratingSamplingLocations = 4,
		EMemorySamplerState__Initializing = 5,
		EMemorySamplerState__Ready = 6,
	};


	// Enum /Script/FortniteGame.EFortTextChatChannelType
	enum EFortTextChatChannelType
	{
		EFortTextChatChannelType__ALL = 0,
		EFortTextChatChannelType__Party = 1,
		EFortTextChatChannelType__Game = 2,
		EFortTextChatChannelType__Whisper = 3,
		EFortTextChatChannelType__MAX_NUM = 4,
	};


	// Enum /Script/FortniteGame.EFortTextChatMessageType
	enum EFortTextChatMessageType
	{
		EFortTextChatMessageType__Sent = 0,
		EFortTextChatMessageType__ReceivedFromPlayer = 1,
		EFortTextChatMessageType__System = 2,
		EFortTextChatMessageType__Game = 3,
		EFortTextChatMessageType__Killfeed = 4,
		EFortTextChatMessageType__MAX_NUM = 5,
	};


	// Enum /Script/FortniteGame.EFortTextChatCurrentUIContext
	enum EFortTextChatCurrentUIContext
	{
		EFortTextChatCurrentUIContext__Unknown = 0,
		EFortTextChatCurrentUIContext__STW = 1,
		EFortTextChatCurrentUIContext__STW_InMatch = 2,
		EFortTextChatCurrentUIContext__Frontend = 3,
		EFortTextChatCurrentUIContext__InMatch = 4,
		EFortTextChatCurrentUIContext__MAX_NUM = 5,
	};


	// Enum /Script/FortniteGame.ETrackedObjectiveQuery
	enum ETrackedObjectiveQuery
	{
		ETrackedObjectiveQuery__All = 0,
		ETrackedObjectiveQuery__ExactTeam = 1,
		ETrackedObjectiveQuery__Friendly = 2,
		ETrackedObjectiveQuery__Neutral = 3,
		ETrackedObjectiveQuery__Hostile = 4,
		ETrackedObjectiveQuery__NotFriendly = 5,
	};


	// Enum /Script/FortniteGame.EFortMinigameTimeAliveStartPoint
	enum EFortMinigameTimeAliveStartPoint
	{
		EFortMinigameTimeAliveStartPoint__RoundStart = 0,
		EFortMinigameTimeAliveStartPoint__PawnCreated = 1,
	};


	// Enum /Script/FortniteGame.EFortMinigameTimeAliveTeamTrackingMethod
	enum EFortMinigameTimeAliveTeamTrackingMethod
	{
		EFortMinigameTimeAliveTeamTrackingMethod__Accumulate = 0,
		EFortMinigameTimeAliveTeamTrackingMethod__Max = 1,
		EFortMinigameTimeAliveTeamTrackingMethod__Min = 2,
	};


	// Enum /Script/FortniteGame.EFortMinigameClassSlot
	enum EFortMinigameClassSlot
	{
		EFortMinigameClassSlot__ZeroIndex = 0,
		EFortMinigameClassSlot__None = FF,
	};


	// Enum /Script/FortniteGame.EBuildingMode
	enum EBuildingMode
	{
		EBuildingMode__None = 0,
		EBuildingMode__BuildingsOnly = 1,
		EBuildingMode__TrapsOnly = 2,
		EBuildingMode__All = 3,
	};


	// Enum /Script/FortniteGame.EMinigamePlayerPawnType
	enum EMinigamePlayerPawnType
	{
		EMinigamePlayerPawnType__Fortnite = 0,
		EMinigamePlayerPawnType__Bean = 1,
	};


	// Enum /Script/FortniteGame.EMinigameDevelopmentPersistenceBehavior
	enum EMinigameDevelopmentPersistenceBehavior
	{
		EMinigameDevelopmentPersistenceBehavior__ImportLiveData = 0,
		EMinigameDevelopmentPersistenceBehavior__SimulateNewUser = 1,
	};


	// Enum /Script/FortniteGame.EMissionGenerationCategory
	enum EMissionGenerationCategory
	{
		EMissionGenerationCategory__Primary = 0,
		EMissionGenerationCategory__Secondary = 1,
		EMissionGenerationCategory__Tertiary = 2,
		EMissionGenerationCategory__Survivor = 3,
		EMissionGenerationCategory__Max_None = 4,
	};


	// Enum /Script/FortniteGame.EMobileInteractionIconTypes
	enum EMobileInteractionIconTypes
	{
		EMobileInteractionIconTypes__Interact = 0,
		EMobileInteractionIconTypes__Swap = 1,
		EMobileInteractionIconTypes__Revive = 2,
		EMobileInteractionIconTypes__Blocked = 3,
	};


	// Enum /Script/FortniteGame.ELowerBodyBlendMask
	enum ELowerBodyBlendMask
	{
		ELowerBodyBlendMask__None = 0,
		ELowerBodyBlendMask__Default = 1,
		ELowerBodyBlendMask__LowerBodyNoFeathering = 2,
		ELowerBodyBlendMask__CrouchShuffleRelaxedLocalSpace = 3,
		ELowerBodyBlendMask__CrouchShuffleRelaxedMeshSpace = 4,
		ELowerBodyBlendMask__PartialUpperBodyLocalSpace = 5,
		ELowerBodyBlendMask__PartialUpperBodyMeshSpace = 6,
		ELowerBodyBlendMask__OneHandMontage = 7,
		ELowerBodyBlendMask__TwoHandMontage = 8,
	};


	// Enum /Script/FortniteGame.EFortMovementUrgency
	enum EFortMovementUrgency
	{
		EFortMovementUrgency__None = 0,
		EFortMovementUrgency__Low = 1,
		EFortMovementUrgency__Medium = 2,
		EFortMovementUrgency__High = 3,
		EFortMovementUrgency__NumLevels = 4,
	};


	// Enum /Script/FortniteGame.EMovementLeanState
	enum EMovementLeanState
	{
		EMovementLeanState__None = 0,
		EMovementLeanState__BlendingIn = 1,
		EMovementLeanState__BlendingOut = 2,
		EMovementLeanState__SettleDelay = 3,
		EMovementLeanState__Settling = 4,
		EMovementLeanState__Idle = 5,
	};


	// Enum /Script/FortniteGame.EFortMovementModeExt_PhysUpdateResult
	enum EFortMovementModeExt_PhysUpdateResult
	{
		EFortMovementModeExt_PhysUpdateResult__Continue = 0,
		EFortMovementModeExt_PhysUpdateResult__AbortIteration = 1,
		EFortMovementModeExt_PhysUpdateResult__AbortPhysUpdate = 2,
	};


	// Enum /Script/FortniteGame.ERootMotionMMEFinishVelocityMode
	enum ERootMotionMMEFinishVelocityMode
	{
		ERootMotionMMEFinishVelocityMode__MaintainLastRootMotionVelocity = 0,
		ERootMotionMMEFinishVelocityMode__SetVelocity = 1,
		ERootMotionMMEFinishVelocityMode__ClampVelocity = 2,
	};


	// Enum /Script/FortniteGame.ERootMotionMMETargetOffsetType
	enum ERootMotionMMETargetOffsetType
	{
		ERootMotionMMETargetOffsetType__AlignFromTargetToSource = 0,
		ERootMotionMMETargetOffsetType__AlignToTargetForward = 1,
		ERootMotionMMETargetOffsetType__AlignToWorldSpace = 2,
	};


	// Enum /Script/FortniteGame.ERootMotionMMEMode
	enum ERootMotionMMEMode
	{
		ERootMotionMMEMode__ConstantForce = 0,
		ERootMotionMMEMode__MoveToTarget = 1,
		ERootMotionMMEMode__MoveToActor = 2,
	};


	// Enum /Script/FortniteGame.EFortMovementModeExt_UpdateResult
	enum EFortMovementModeExt_UpdateResult
	{
		EFortMovementModeExt_UpdateResult__Updating = 0,
		EFortMovementModeExt_UpdateResult__Active = 1,
		EFortMovementModeExt_UpdateResult__Active_Layered = 2,
		EFortMovementModeExt_UpdateResult__Ended = 3,
	};


	// Enum /Script/FortniteGame.EFortMusicPlaybackType
	enum EFortMusicPlaybackType
	{
		EFortMusicPlaybackType__Normal = 0,
		EFortMusicPlaybackType__Preview = 1,
		EFortMusicPlaybackType__Stems = 2,
	};


	// Enum /Script/FortniteGame.EFortNetworkScope
	enum EFortNetworkScope
	{
		EFortNetworkScope__Neither = 0,
		EFortNetworkScope__Client = 1,
		EFortNetworkScope__Server = 2,
		EFortNetworkScope__Both = 3,
	};


	// Enum /Script/FortniteGame.EObjectiveProcessorPropertyRequirement
	enum EObjectiveProcessorPropertyRequirement
	{
		EObjectiveProcessorPropertyRequirement__Ignored = 0,
		EObjectiveProcessorPropertyRequirement__Required = 1,
		EObjectiveProcessorPropertyRequirement__Prohibited = 2,
	};


	// Enum /Script/FortniteGame.EDistanceTravelDirection
	enum EDistanceTravelDirection
	{
		EDistanceTravelDirection__Any = 0,
		EDistanceTravelDirection__Vertical = 1,
		EDistanceTravelDirection__Horizontal = 2,
		EDistanceTravelDirection__SingleAxis = 3,
	};


	// Enum /Script/FortniteGame.EAxisDirectionTypeFlags
	enum EAxisDirectionTypeFlags
	{
		EAxisDirectionTypeFlags__None = 0,
		EAxisDirectionTypeFlags__PositiveX = 1,
		EAxisDirectionTypeFlags__NegativeX = 2,
		EAxisDirectionTypeFlags__PositiveY = 4,
		EAxisDirectionTypeFlags__NegativeY = 8,
		EAxisDirectionTypeFlags__PositiveZ = 10,
		EAxisDirectionTypeFlags__NegativeZ = 20,
		EAxisDirectionTypeFlags__All = 3F,
	};


	// Enum /Script/FortniteGame.EAxisTravelBehavior
	enum EAxisTravelBehavior
	{
		EAxisTravelBehavior__RequireAny = 0,
		EAxisTravelBehavior__RequireAll = 1,
		EAxisTravelBehavior__RequireNone = 2,
	};


	// Enum /Script/FortniteGame.EGameplayDebugState
	enum EGameplayDebugState
	{
		EGameplayDebugState__Unset = 0,
		EGameplayDebugState__Show = 1,
		EGameplayDebugState__Hide = 2,
	};


	// Enum /Script/FortniteGame.EDistanceTravelMode
	enum EDistanceTravelMode
	{
		EDistanceTravelMode__Any = 0,
		EDistanceTravelMode__Ballooning = 1,
		EDistanceTravelMode__Crouch = 2,
		EDistanceTravelMode__DBNOCarried = 3,
		EDistanceTravelMode__Driving = 4,
		EDistanceTravelMode__Falling = 5,
		EDistanceTravelMode__Floating = 6,
		EDistanceTravelMode__Flying = 7,
		EDistanceTravelMode__Goop = 8,
		EDistanceTravelMode__Grinding = 9,
		EDistanceTravelMode__Hover = A,
		EDistanceTravelMode__Parachuting = B,
		EDistanceTravelMode__Passenger = C,
		EDistanceTravelMode__RemoteControl_Flying = D,
		EDistanceTravelMode__Running = E,
		EDistanceTravelMode__Skating = F,
		EDistanceTravelMode__SkydiveFollowing = 10,
		EDistanceTravelMode__SkyDiving = 11,
		EDistanceTravelMode__Sliding = 12,
		EDistanceTravelMode__SurfaceSwimming = 13,
		EDistanceTravelMode__Swimming = 14,
		EDistanceTravelMode__Ziplining = 15,
		EDistanceTravelMode__ZipliningOnSpline = 16,
		EDistanceTravelMode__Sprinting = 17,
		EDistanceTravelMode__Jumping = 18,
	};


	// Enum /Script/FortniteGame.EVehicleSurfaceType
	enum EVehicleSurfaceType
	{
		EVehicleSurfaceType__None = 0,
		EVehicleSurfaceType__InAir = 1,
		EVehicleSurfaceType__InWater = 2,
		EVehicleSurfaceType__OnDirt = 3,
		EVehicleSurfaceType__OnGrass = 4,
		EVehicleSurfaceType__OnGround = 5,
		EVehicleSurfaceType__OnIce = 6,
		EVehicleSurfaceType__OnRoad = 7,
		EVehicleSurfaceType__OnSnow = 8,
	};


	// Enum /Script/FortniteGame.EFortHealingIncrementType
	enum EFortHealingIncrementType
	{
		EFortHealingIncrementType__Single = 0,
		EFortHealingIncrementType__HealingAmount = 1,
		EFortHealingIncrementType__HealthOverHealing = 2,
		EFortHealingIncrementType__PercentHealed = 3,
		EFortHealingIncrementType__TotalHealingDone = 4,
	};


	// Enum /Script/FortniteGame.EFortSelfHealingHandling
	enum EFortSelfHealingHandling
	{
		EFortSelfHealingHandling__Allowed = 0,
		EFortSelfHealingHandling__Required = 1,
		EFortSelfHealingHandling__Prohibited = 2,
	};


	// Enum /Script/FortniteGame.EFortOctopusSimEvent
	enum EFortOctopusSimEvent
	{
		EFortOctopusSimEvent__BeginBoostCooldown = 0,
	};


	// Enum /Script/FortniteGame.EFortPawnDisplayContext
	enum EFortPawnDisplayContext
	{
		EFortPawnDisplayContext__BattleRoyale = 0,
		EFortPawnDisplayContext__VaultItemsFromOffer = 1,
		EFortPawnDisplayContext__VaultItem = 2,
		EFortPawnDisplayContext__VaultItems = 3,
		EFortPawnDisplayContext__VaultItemFromDefinition = 4,
		EFortPawnDisplayContext__CampaignFrontEndPlayer = 5,
		EFortPawnDisplayContext__CampaignNPC = 6,
		EFortPawnDisplayContext__CampaignHeroInspect = 7,
		EFortPawnDisplayContext__CampaignHeroLoadoutSupport = 8,
		EFortPawnDisplayContext__CampaignOutfitPicker = 9,
	};


	// Enum /Script/FortniteGame.EFortPawnPushSize
	enum EFortPawnPushSize
	{
		EFortPawnPushSize__FFPS_Normal = 0,
		EFortPawnPushSize__FPPS_Player = 1,
		EFortPawnPushSize__FPPS_Large = 2,
		EFortPawnPushSize__FPPS_SuperLarge = 3,
	};


	// Enum /Script/FortniteGame.EFortControlRecoveryBehavior
	enum EFortControlRecoveryBehavior
	{
		EFortControlRecoveryBehavior__DefaultControl = 0,
		EFortControlRecoveryBehavior__LimitedControl = 1,
		EFortControlRecoveryBehavior__ChainControl = 2,
	};


	// Enum /Script/FortniteGame.EFortWeaponListRemovalBehavior
	enum EFortWeaponListRemovalBehavior
	{
		EFortWeaponListRemovalBehavior__DestroyImmediately = 0,
		EFortWeaponListRemovalBehavior__DeferredLifespan = 1,
		EFortWeaponListRemovalBehavior__DoNotDestroy = 2,
	};


	// Enum /Script/FortniteGame.EFortSynchedActionEndMovementMode
	enum EFortSynchedActionEndMovementMode
	{
		EFortSynchedActionEndMovementMode__PhysFalling = 0,
		EFortSynchedActionEndMovementMode__PhysWalking = 1,
	};


	// Enum /Script/FortniteGame.EWindVolumePriority
	enum EWindVolumePriority
	{
		EWindVolumePriority__Priority = 1,
		EWindVolumePriority__Priority = 2,
		EWindVolumePriority__Priority = 3,
		EWindVolumePriority__Priority = 4,
		EWindVolumePriority__Priority = 5,
		EWindVolumePriority__Priority = 6,
		EWindVolumePriority__Priority = 7,
		EWindVolumePriority__Priority = 8,
		EWindVolumePriority__Priority = 9,
		EWindVolumePriority__Priority = A,
		EWindVolumePriority__Priority_Default = B,
	};


	// Enum /Script/FortniteGame.EFortPhysicsSimSize
	enum EFortPhysicsSimSize
	{
		EFortPhysicsSimSize__Small = 0,
		EFortPhysicsSimSize__Average = 1,
		EFortPhysicsSimSize__Medium = 2,
		EFortPhysicsSimSize__Large = 3,
		EFortPhysicsSimSize__Huge = 4,
		EFortPhysicsSimSize__Giant = 5,
		EFortPhysicsSimSize__Enormous = 6,
		EFortPhysicsSimSize__Invalid = 7,
	};


	// Enum /Script/FortniteGame.EFortPickupSourceTypeFlag
	enum EFortPickupSourceTypeFlag
	{
		EFortPickupSourceTypeFlag__Other = 0,
		EFortPickupSourceTypeFlag__Player = 1,
		EFortPickupSourceTypeFlag__Destruction = 2,
		EFortPickupSourceTypeFlag__Container = 4,
		EFortPickupSourceTypeFlag__AI = 8,
		EFortPickupSourceTypeFlag__Tossed = 10,
		EFortPickupSourceTypeFlag__FloorLoot = 20,
		EFortPickupSourceTypeFlag__Fishing = 40,
		EFortPickupSourceTypeFlag__NPCService = 80,
	};


	// Enum /Script/FortniteGame.EFortPickupSpawnSource
	enum EFortPickupSpawnSource
	{
		EFortPickupSpawnSource__Unset = 0,
		EFortPickupSpawnSource__PlayerElimination = 1,
		EFortPickupSpawnSource__Chest = 2,
		EFortPickupSpawnSource__SupplyDrop = 3,
		EFortPickupSpawnSource__AmmoBox = 4,
		EFortPickupSpawnSource__Drone = 5,
		EFortPickupSpawnSource__ItemSpawner = 6,
		EFortPickupSpawnSource__BotElimination = 7,
		EFortPickupSpawnSource__NPCElimination = 8,
		EFortPickupSpawnSource__LootDrop = 9,
		EFortPickupSpawnSource__TossedByPlayer = A,
		EFortPickupSpawnSource__NPC = B,
		EFortPickupSpawnSource__NPCGift = C,
		EFortPickupSpawnSource__CraftingBench = D,
		EFortPickupSpawnSource__VendingMachine = E,
		EFortPickupSpawnSource__QuestReward = F,
	};


	// Enum /Script/FortniteGame.EFortInputDevice
	enum EFortInputDevice
	{
		EFortInputDevice__Mouse = 0,
		EFortInputDevice__Keyboard = 1,
		EFortInputDevice__Gamepad = 2,
		EFortInputDevice__Touch = 3,
	};


	// Enum /Script/FortniteGame.EFortInputActionType
	enum EFortInputActionType
	{
		EFortInputActionType__Press = 0,
		EFortInputActionType__Click = 1,
		EFortInputActionType__Hold = 2,
		EFortInputActionType__Release = 3,
	};


	// Enum /Script/FortniteGame.EPlaylistAdvertisementType
	enum EPlaylistAdvertisementType
	{
		EPlaylistAdvertisementType__None = 0,
		EPlaylistAdvertisementType__New = 1,
		EPlaylistAdvertisementType__Updated = 2,
	};


	// Enum /Script/FortniteGame.EPlaylistVisibilityState
	enum EPlaylistVisibilityState
	{
		EPlaylistVisibilityState__Enabled = 1,
		EPlaylistVisibilityState__Disabled = 2,
		EPlaylistVisibilityState__EnabledButInvisible = 3,
		EPlaylistVisibilityState__Hidden = 4,
	};


	// Enum /Script/FortniteGame.EFortIdleDetectionState
	enum EFortIdleDetectionState
	{
		EFortIdleDetectionState__Disabled = 0,
		EFortIdleDetectionState__Default = 1,
		EFortIdleDetectionState__Suspicious = 2,
		EFortIdleDetectionState__Problematic = 3,
		EFortIdleDetectionState__Inactive = 4,
	};


	// Enum /Script/FortniteGame.EObjectValidPins
	enum EObjectValidPins
	{
		Valid = 0,
		NotValid = 1,
	};


	// Enum /Script/FortniteGame.ESharedQuestScopePolicy
	enum ESharedQuestScopePolicy
	{
		ESharedQuestScopePolicy__Party = 0,
		ESharedQuestScopePolicy__Squad = 1,
	};


	// Enum /Script/FortniteGame.ETrackedTagType
	enum ETrackedTagType
	{
		ETrackedTagType__TrackExactTagHierarchyMatches = 0,
		ETrackedTagType__TrackDirectChildTagMatches = 1,
	};


	// Enum /Script/FortniteGame.ETriggeredSpawnLocationType
	enum ETriggeredSpawnLocationType
	{
		ETriggeredSpawnLocationType__AuthorLocation = 0,
		ETriggeredSpawnLocationType__EventLocation = 1,
		ETriggeredSpawnLocationType__NamedSubjectLocation = 2,
	};


	// Enum /Script/FortniteGame.ETriggeredSpawnFacingDirection
	enum ETriggeredSpawnFacingDirection
	{
		ETriggeredSpawnFacingDirection__Forward = 0,
		ETriggeredSpawnFacingDirection__Backward = 1,
		ETriggeredSpawnFacingDirection__Left = 2,
		ETriggeredSpawnFacingDirection__Right = 3,
		ETriggeredSpawnFacingDirection__Up = 4,
		ETriggeredSpawnFacingDirection__Down = 5,
	};


	// Enum /Script/FortniteGame.EObjectiveNeeds
	enum EObjectiveNeeds
	{
		EObjectiveNeeds__None = 0,
		EObjectiveNeeds__ObjectiveUpdate = 1,
		EObjectiveNeeds__ObjectiveUpdateWithContext = 2,
	};


	// Enum /Script/FortniteGame.EQuestEditorGenerateBackendNameReason
	enum EQuestEditorGenerateBackendNameReason
	{
		EQuestEditorGenerateBackendNameReason__NoAction = 0,
		EQuestEditorGenerateBackendNameReason__OnlyBuildEmpty = 1,
		EQuestEditorGenerateBackendNameReason__ForceRebuild = 2,
	};


	// Enum /Script/FortniteGame.EFortQuestRewardType
	enum EFortQuestRewardType
	{
		EFortQuestRewardType__BasicRewards = 0,
		EFortQuestRewardType__BasicPlusSingleChoice = 1,
	};


	// Enum /Script/FortniteGame.EObjectiveStatusUpdateType
	enum EObjectiveStatusUpdateType
	{
		EObjectiveStatusUpdateType__Always = 0,
		EObjectiveStatusUpdateType__OnPercent = 1,
		EObjectiveStatusUpdateType__OnComplete = 2,
		EObjectiveStatusUpdateType__Never = 3,
	};


	// Enum /Script/FortniteGame.EObjectiveConversationTriggerType
	enum EObjectiveConversationTriggerType
	{
		EObjectiveConversationTriggerType__StatEquals = 0,
		EObjectiveConversationTriggerType__StatIncreasedby = 1,
		EObjectiveConversationTriggerType__StatLessThan = 2,
		EObjectiveConversationTriggerType__Max = 3,
	};


	// Enum /Script/FortniteGame.EFortQuestSubtype
	enum EFortQuestSubtype
	{
		EFortQuestSubtype__None = 0,
		EFortQuestSubtype__WeeklyChallenge = 1,
		EFortQuestSubtype__PunchCard = 2,
		EFortQuestSubtype__QuickChallenge = 3,
		EFortQuestSubtype__Milestone = 4,
		EFortQuestSubtype__MilestoneCapper = 5,
		EFortQuestSubtype__UrgentQuest = 6,
		EFortQuestSubtype__Autofill = 7,
	};


	// Enum /Script/FortniteGame.EInlineObjectiveStatTagCheckEntryType
	enum EInlineObjectiveStatTagCheckEntryType
	{
		EInlineObjectiveStatTagCheckEntryType__Target = 0,
		EInlineObjectiveStatTagCheckEntryType__Source = 1,
		EInlineObjectiveStatTagCheckEntryType__Context = 2,
	};


	// Enum /Script/FortniteGame.EFortXPPropagationRule
	enum EFortXPPropagationRule
	{
		EFortXPPropagationRule__Self = 0,
		EFortXPPropagationRule__Party = 1,
		EFortXPPropagationRule__Squad = 2,
	};


	// Enum /Script/FortniteGame.EFortQuestObjectiveItemEvent
	enum EFortQuestObjectiveItemEvent
	{
		EFortQuestObjectiveItemEvent__Craft = 0,
		EFortQuestObjectiveItemEvent__Collect = 1,
		EFortQuestObjectiveItemEvent__Acquire = 2,
		EFortQuestObjectiveItemEvent__Consume = 3,
		EFortQuestObjectiveItemEvent__OpenCardPack = 4,
		EFortQuestObjectiveItemEvent__PurchaseCardPack = 5,
		EFortQuestObjectiveItemEvent__Convert = 6,
		EFortQuestObjectiveItemEvent__Upgrade = 7,
		EFortQuestObjectiveItemEvent__UpgradeRarity = 8,
		EFortQuestObjectiveItemEvent__QuestComplete = 9,
		EFortQuestObjectiveItemEvent__AssignWorker = A,
		EFortQuestObjectiveItemEvent__LevelUpCollectionBook = B,
		EFortQuestObjectiveItemEvent__LevelUpAthenaSeason = C,
		EFortQuestObjectiveItemEvent__LevelUpBattlePass = D,
		EFortQuestObjectiveItemEvent__GainAthenaSeasonXp = E,
		EFortQuestObjectiveItemEvent__HasItem = F,
		EFortQuestObjectiveItemEvent__HasAccumulatedItem = 10,
		EFortQuestObjectiveItemEvent__SlotInCollection = 11,
		EFortQuestObjectiveItemEvent__AlterationRespec = 12,
		EFortQuestObjectiveItemEvent__AlterationUpgrade = 13,
		EFortQuestObjectiveItemEvent__HasCompletedQuest = 14,
		EFortQuestObjectiveItemEvent__HasAssignedWorker = 15,
		EFortQuestObjectiveItemEvent__HasUpgraded = 16,
		EFortQuestObjectiveItemEvent__HasConverted = 17,
		EFortQuestObjectiveItemEvent__HasUpgradedRarity = 18,
		EFortQuestObjectiveItemEvent__HasLeveledUpCollectionBook = 19,
		EFortQuestObjectiveItemEvent__SlotHeroInLoadout = 1A,
		EFortQuestObjectiveItemEvent__HasLeveledUpAthenaSeason = 1B,
		EFortQuestObjectiveItemEvent__HasLeveledUpBattlePass = 1C,
		EFortQuestObjectiveItemEvent__HasGainedAthenaSeasonXp = 1D,
		EFortQuestObjectiveItemEvent__MinigameTime = 1E,
		EFortQuestObjectiveItemEvent__Max_None = 1F,
	};


	// Enum /Script/FortniteGame.EFortReplenishmentType
	enum EFortReplenishmentType
	{
		EFortReplenishmentType__Restricted = 0,
		EFortReplenishmentType__ClampMin = 1,
		EFortReplenishmentType__Add = 2,
		EFortReplenishmentType__Ability = 3,
	};


	// Enum /Script/FortniteGame.EFortReplicatedStat
	enum EFortReplicatedStat
	{
		EFortReplicatedStat__MonsterKills = 0,
		EFortReplicatedStat__MonsterDamagePoints = 1,
		EFortReplicatedStat__PlayerKills = 2,
		EFortReplicatedStat__WoodGathered = 3,
		EFortReplicatedStat__StoneGathered = 4,
		EFortReplicatedStat__MetalGathered = 5,
		EFortReplicatedStat__Deaths = 6,
		EFortReplicatedStat__BluGloActivity = 7,
		EFortReplicatedStat__BuildingsBuilt = 8,
		EFortReplicatedStat__BuildingsBuilt_Wood = 9,
		EFortReplicatedStat__BuildingsBuilt_Stone = A,
		EFortReplicatedStat__BuildingsBuilt_Metal = B,
		EFortReplicatedStat__BuildingsUpgraded_Wood2 = C,
		EFortReplicatedStat__BuildingsUpgraded_Wood3 = D,
		EFortReplicatedStat__BuildingsUpgraded_Stone2 = E,
		EFortReplicatedStat__BuildingsUpgraded_Stone3 = F,
		EFortReplicatedStat__BuildingsUpgraded_Metal2 = 10,
		EFortReplicatedStat__BuildingsUpgraded_Metal3 = 11,
		EFortReplicatedStat__BuildingsDestroyed = 12,
		EFortReplicatedStat__Repair_Wood = 13,
		EFortReplicatedStat__Repair_Stone = 14,
		EFortReplicatedStat__Repair_Metal = 15,
		EFortReplicatedStat__FlagsCaptured = 16,
		EFortReplicatedStat__FlagsReturned = 17,
		EFortReplicatedStat__ContainersLooted = 18,
		EFortReplicatedStat__CraftingPoints = 19,
		EFortReplicatedStat__TrapPlacementPoints = 1A,
		EFortReplicatedStat__TrapActivationPoints = 1B,
		EFortReplicatedStat__TotalScore = 1C,
		EFortReplicatedStat__OldTotalScore = 1D,
		EFortReplicatedStat__CombatScore = 1E,
		EFortReplicatedStat__BuildingScore = 1F,
		EFortReplicatedStat__UtilityScore = 20,
		EFortReplicatedStat__BadgesScore = 21,
		EFortReplicatedStat__None = 22,
	};


	// Enum /Script/FortniteGame.EFortServerTickRate
	enum EFortServerTickRate
	{
		EFortServerTickRate__UseDefault = 0,
		EFortServerTickRate__Twenty = 1,
		EFortServerTickRate__Thirty = 2,
		EFortServerTickRate__Sixty = 3,
	};


	// Enum /Script/FortniteGame.EBlueprintableSideEffectTriggerType
	enum EBlueprintableSideEffectTriggerType
	{
		EBlueprintableSideEffectTriggerType__TriggeredAsTarget = 0,
		EBlueprintableSideEffectTriggerType__TriggeredAsSource = 1,
	};


	// Enum /Script/FortniteGame.ESpecialActorStatType
	enum ESpecialActorStatType
	{
		ESpecialActorStatType__NumEliminationsNearby = 0,
		ESpecialActorStatType__TimeInWorld = 1,
		ESpecialActorStatType__PickupNumSpawns = 2,
		ESpecialActorStatType__PickupNumDespawns = 3,
		ESpecialActorStatType__PickupNumDropped = 4,
		ESpecialActorStatType__PickupNumTaken = 5,
		ESpecialActorStatType__PlayerWon = 6,
		ESpecialActorStatType__PlayerNumEliminations = 7,
		ESpecialActorStatType__PlayerNum = 8,
		ESpecialActorStatType__TotalStats = 9,
	};


	// Enum /Script/FortniteGame.ESubGameAccessStatus
	enum ESubGameAccessStatus
	{
		ESubGameAccessStatus__Disabled = 0,
		ESubGameAccessStatus__LimitedAccess = 1,
		ESubGameAccessStatus__OpenAccess = 2,
	};


	// Enum /Script/FortniteGame.ESubGameMatchmakingStatus
	enum ESubGameMatchmakingStatus
	{
		ESubGameMatchmakingStatus__Disabled = 0,
		ESubGameMatchmakingStatus__Enabled = 1,
	};


	// Enum /Script/FortniteGame.EDeathFailurePolicy
	enum EDeathFailurePolicy
	{
		EDeathFailurePolicy__None = 0,
		EDeathFailurePolicy__FailQuestIfAnyParticipantDies = 1,
	};


	// Enum /Script/FortniteGame.EAugmentReRollType
	enum EAugmentReRollType
	{
		EAugmentReRollType__Any = 0,
		EAugmentReRollType__Free = 1,
		EAugmentReRollType__SpentBars = 2,
	};


	// Enum /Script/FortniteGame.EFortWeaponType
	enum EFortWeaponType
	{
		EFortWeaponType__None = 0,
		EFortWeaponType__RangedAny = 1,
		EFortWeaponType__Pistol = 2,
		EFortWeaponType__Shotgun = 3,
		EFortWeaponType__Rifle = 4,
		EFortWeaponType__SMG = 5,
		EFortWeaponType__Sniper = 6,
		EFortWeaponType__GrenadeLauncher = 7,
		EFortWeaponType__RocketLauncher = 8,
		EFortWeaponType__Bow = 9,
		EFortWeaponType__Minigun = A,
		EFortWeaponType__LMG = B,
		EFortWeaponType__BiplaneGun = C,
		EFortWeaponType__MeleeAny = D,
		EFortWeaponType__Harvesting = E,
	};


	// Enum /Script/FortniteGame.EVehicleModWeaponUpdateDamageStartSetting
	enum EVehicleModWeaponUpdateDamageStartSetting
	{
		EVehicleModWeaponUpdateDamageStartSetting__UseWeaponRangedDamageStart = 0,
		EVehicleModWeaponUpdateDamageStartSetting__UseVehicleMountedTurretDamageStart = 1,
	};


	// Enum /Script/FortniteGame.EFortWeaponReticleBehaviour
	enum EFortWeaponReticleBehaviour
	{
		EFortWeaponReticleBehaviour__Center = 0,
		EFortWeaponReticleBehaviour__FocusTarget = 1,
		EFortWeaponReticleBehaviour__Never = 2,
	};


	// Enum /Script/FortniteGame.EFortWeaponReticleSourceDistanceLocation
	enum EFortWeaponReticleSourceDistanceLocation
	{
		EFortWeaponReticleSourceDistanceLocation__Character = 0,
		EFortWeaponReticleSourceDistanceLocation__Camera = 1,
	};


	// Enum /Script/FortniteGame.EFortWorldPartitionActorDescMutatorRuleLogicalOperator
	enum EFortWorldPartitionActorDescMutatorRuleLogicalOperator
	{
		EFortWorldPartitionActorDescMutatorRuleLogicalOperator__Or = 0,
		EFortWorldPartitionActorDescMutatorRuleLogicalOperator__And = 1,
		EFortWorldPartitionActorDescMutatorRuleLogicalOperator__Not = 2,
	};


	// Enum /Script/FortniteGame.EWorldStatUpdateType
	enum EWorldStatUpdateType
	{
		EWorldStatUpdateType__Increment = 0,
		EWorldStatUpdateType__Set = 1,
		EWorldStatUpdateType__Maximum = 2,
	};


	// Enum /Script/FortniteGame.EFrontEndCamera
	enum EFrontEndCamera
	{
		EFrontEndCamera__Invalid = 0,
		EFrontEndCamera__Command = 1,
		EFrontEndCamera__Command_HeroLoadout = 2,
		EFrontEndCamera__LegacyHeroLoadout = 3,
		EFrontEndCamera__Cosmetics = 4,
		EFrontEndCamera__Expeditions = 5,
		EFrontEndCamera__FrontendDefault = 6,
		EFrontEndCamera__Heroes = 7,
		EFrontEndCamera__HeroSelect = 8,
		EFrontEndCamera__HeroLoadout = 9,
		EFrontEndCamera__Home = A,
		EFrontEndCamera__HomeBase = B,
		EFrontEndCamera__Login = C,
		EFrontEndCamera__Manage1 = D,
		EFrontEndCamera__Manage2 = E,
		EFrontEndCamera__Manage3 = F,
		EFrontEndCamera__Manage4 = 10,
		EFrontEndCamera__MissionControl = 11,
		EFrontEndCamera__Party = 12,
		EFrontEndCamera__Play = 13,
		EFrontEndCamera__Research = 14,
		EFrontEndCamera__SkillTrees = 15,
		EFrontEndCamera__SmallCosmetics = 16,
		EFrontEndCamera__SpatialUI = 17,
		EFrontEndCamera__SpecialEvent = 18,
		EFrontEndCamera__SpecialEvent2 = 19,
		EFrontEndCamera__SpecialEvent3 = 1A,
		EFrontEndCamera__Store = 1B,
		EFrontEndCamera__StoreItemInspect = 1C,
		EFrontEndCamera__StwFrontendDefault = 1D,
		EFrontEndCamera__SurvivorSquadBuilding1 = 1E,
		EFrontEndCamera__SurvivorSquadBuilding2 = 1F,
		EFrontEndCamera__SurvivorSquadBuilding3 = 20,
		EFrontEndCamera__SurvivorSquadBuilding4 = 21,
		EFrontEndCamera__TutorialPhaseOne = 22,
		EFrontEndCamera__TutorialPhaseTwo = 23,
		EFrontEndCamera__TutorialPhaseThree = 24,
		EFrontEndCamera__Upgrades = 25,
		EFrontEndCamera__Vault = 26,
		EFrontEndCamera__WorldMap = 27,
		EFrontEndCamera__LobbyCentered = 28,
		EFrontEndCamera__CosmeticDisplay = 29,
		EFrontEndCamera__BattlePass = 2A,
		EFrontEndCamera__Rewards = 2B,
		EFrontEndCamera__SpecialEventRewards = 2C,
		EFrontEndCamera__Armory = 2D,
		EFrontEndCamera__DM_Customization = 2E,
		EFrontEndCamera__DiscoveryHome = 2F,
		EFrontEndCamera__MultipleSquads = 30,
	};


	// Enum /Script/FortniteGame.EFortActivityValidationResult
	enum EFortActivityValidationResult
	{
		EFortActivityValidationResult__NotFound = 0,
		EFortActivityValidationResult__InvalidKeyTooShort = 1,
		EFortActivityValidationResult__InvalidKeyCharacters = 2,
		EFortActivityValidationResult__IneligibleParty = 3,
		EFortActivityValidationResult__IslandPrivate = 4,
		EFortActivityValidationResult__Success = 5,
	};


	// Enum /Script/FortniteGame.EFortSharedAnimationState
	enum EFortSharedAnimationState
	{
		EFortSharedAnimationState__Anim_Walk = 0,
		EFortSharedAnimationState__Anim_Run = 1,
		EFortSharedAnimationState__Anim_Turn = 2,
		EFortSharedAnimationState__Anim_Attack = 3,
		EFortSharedAnimationState__Anim_Death = 4,
		EFortSharedAnimationState__Anim_Knockback = 5,
		EFortSharedAnimationState__Anim_FullBodyHit = 6,
		EFortSharedAnimationState__Anim_Pushed = 7,
		EFortSharedAnimationState__Anim_Dance = 8,
		EFortSharedAnimationState__Anim_Idle = 9,
		EFortSharedAnimationState__Anim_RangedAttack = A,
	};


	// Enum /Script/FortniteGame.EHabaneroAnimatedMessage
	enum EHabaneroAnimatedMessage
	{
		EHabaneroAnimatedMessage__None = 0,
		EHabaneroAnimatedMessage__HabaneroEngaged = 1,
		EHabaneroAnimatedMessage__ReadyUp = 2,
	};


	// Enum /Script/FortniteGame.EIslandInspectorState
	enum EIslandInspectorState
	{
		EIslandInspectorState__Initializing = 0,
		EIslandInspectorState__Ready = 1,
		EIslandInspectorState__AwaitingProcessCommand = 2,
		EIslandInspectorState__ProcessingCommand = 3,
	};


	// Enum /Script/FortniteGame.EBackgroundIntensityLevel
	enum EBackgroundIntensityLevel
	{
		EBackgroundIntensityLevel__None = 0,
		EBackgroundIntensityLevel__LowIntensity = 1,
		EBackgroundIntensityLevel__HighIntensity = 2,
	};


	// Enum /Script/FortniteGame.ELevelSaveRecordVersion
	enum ELevelSaveRecordVersion
	{
		ELevelSaveRecordVersion__CloudSaveInfoAdded = 0,
		ELevelSaveRecordVersion__TimestampConversion = 1,
		ELevelSaveRecordVersion__SoftActorClassReferences = 2,
		ELevelSaveRecordVersion__SoftActorComponentClassReferences = 3,
		ELevelSaveRecordVersion__DuplicateNewActorRecordsRemoved = 4,
		ELevelSaveRecordVersion__StartOfResaveWhenNotLatestVersion = 5,
		ELevelSaveRecordVersion__LowerCloseThresholdForDuplicates = 6,
		ELevelSaveRecordVersion__DeprecatedDeleteAndNewActorRecords = 7,
		ELevelSaveRecordVersion__DependenciesFromSerializedWorld = 8,
		ELevelSaveRecordVersion__RemovingSerializedDependencies = 9,
		ELevelSaveRecordVersion__AddingVolumeInfoRecordsMap = A,
		ELevelSaveRecordVersion__AddingVolumeGridDependency = B,
		ELevelSaveRecordVersion__AddingScale = C,
		ELevelSaveRecordVersion__AddingDataHash = D,
		ELevelSaveRecordVersion__AddedIslandTemplateId = E,
		ELevelSaveRecordVersion__AddedLevelStreamedDeleteRecord = F,
		ELevelSaveRecordVersion__UsingSaveActorGUID = 10,
		ELevelSaveRecordVersion__UsingActorFNameForEditorSpawning = 11,
		ELevelSaveRecordVersion__AddedPlayerPersistenceUserWipeNumber = 12,
		ELevelSaveRecordVersion__Unused = 13,
		ELevelSaveRecordVersion__AddedVkPalette = 14,
		ELevelSaveRecordVersion__SwitchingToCoreSerialization = 15,
		ELevelSaveRecordVersion__AddedNavmeshRequired = 16,
		ELevelSaveRecordVersion__InitialUEFiveChange = 17,
		ELevelSaveRecordVersion__AddedPersistenceRequired = 18,
		ELevelSaveRecordVersion__AddedLevelInstance = 19,
		ELevelSaveRecordVersion__AddedInnerArchiverSerialization = 1A,
		ELevelSaveRecordVersion__AddedHardReferenceTracking = 1B,
		ELevelSaveRecordVersion__AddedDataHeaderSize = 1C,
		ELevelSaveRecordVersion__AddedCrossReferenceSaving = 1D,
		ELevelSaveRecordVersion__SpawningActorsWithConsistentName = 1E,
		ELevelSaveRecordVersion__UpdatePackageNameFromIslandTemplateId = 1F,
		ELevelSaveRecordVersion__LargeWorldCoordinateSerializationChange = 20,
		ELevelSaveRecordVersion__SeasionTwentyTwoRelease = 21,
		ELevelSaveRecordVersion__EnforceUniqueLabels = 22,
		ELevelSaveRecordVersion__AddedConfigForNonSaveGameProperties = 23,
		ELevelSaveRecordVersion__AddedLevelSaveTags = 24,
		ELevelSaveRecordVersion__AddedSubobjectSerialization = 25,
		ELevelSaveRecordVersion__RefactoredSubobjectSerialization = 26,
		ELevelSaveRecordVersion__RemoveInvalidEventBindings = 27,
		ELevelSaveRecordVersion__AddRedirectForPackageName = 28,
		ELevelSaveRecordVersion__VersionPlusOne = 29,
		ELevelSaveRecordVersion__LatestVersion = 28,
	};


	// Enum /Script/FortniteGame.ELevelSaveCategory
	enum ELevelSaveCategory
	{
		ELevelSaveCategory__ActorInstance = 0,
		ELevelSaveCategory__VolumeInfoActor = 1,
	};


	// Enum /Script/FortniteGame.ELockedWidgetDisplayQuantity
	enum ELockedWidgetDisplayQuantity
	{
		ELockedWidgetDisplayQuantity__ShowAll = 0,
		ELockedWidgetDisplayQuantity__ShowNextOnly = 1,
	};


	// Enum /Script/FortniteGame.ELockedWidgetUnlockType
	enum ELockedWidgetUnlockType
	{
		ELockedWidgetUnlockType__QuestDaysFromEventStart = 0,
		ELockedWidgetUnlockType__QuestChallengesCompleteUntilUnlocked = 1,
		ELockedWidgetUnlockType__BundleDaysFromEventStart = 2,
		ELockedWidgetUnlockType__PrerequisiteQuest = 3,
	};


	// Enum /Script/FortniteGame.EFlowState
	enum EFlowState
	{
		EFlowState__NotExecuted = 0,
		EFlowState__InProgress = 1,
		EFlowState__Success = 2,
		EFlowState__SuccessWithWarnings = 3,
		EFlowState__Canceled = 4,
		EFlowState__Failed = 5,
	};


	// Enum /Script/FortniteGame.EIslandJoinability
	enum EIslandJoinability
	{
		EIslandJoinability__CanNotBeJoinedOrWatched = 0,
		EIslandJoinability__Joinable = 1,
		EIslandJoinability__Watchable = 2,
	};


	// Enum /Script/FortniteGame.EMatchPrivacy
	enum EMatchPrivacy
	{
		EMatchPrivacy__Private = 0,
		EMatchPrivacy__NoFill = 1,
		EMatchPrivacy__Fill = 2,
		EMatchPrivacy__Undefined = 3,
	};


	// Enum /Script/FortniteGame.EResetLevel
	enum EResetLevel
	{
		EResetLevel__Objective = 0,
		EResetLevel__Quest = 1,
	};


	// Enum /Script/FortniteGame.EGateType
	enum EGateType
	{
		EGateType__SingleEvent = 0,
		EGateType__GameplayAbility = 1,
		EGateType__Verb = 2,
		EGateType__GameplayTag = 3,
		EGateType__ObjectiveUpdated = 4,
		EGateType__GuidBlocker = 5,
	};


	// Enum /Script/FortniteGame.EGameplayTagGateBehavior
	enum EGameplayTagGateBehavior
	{
		EGameplayTagGateBehavior__OpenOnAdded = 0,
		EGameplayTagGateBehavior__CloseOnAdded = 1,
		EGameplayTagGateBehavior__OpenOnRemoved = 2,
		EGameplayTagGateBehavior__CloseOnRemoved = 3,
	};


	// Enum /Script/FortniteGame.EGateCheckType
	enum EGateCheckType
	{
		EGateCheckType__RequireAll = 0,
		EGateCheckType__RequireAny = 1,
		EGateCheckType__RequireSequentialOrder = 2,
	};


	// Enum /Script/FortniteGame.EObjectiveGateRelation
	enum EObjectiveGateRelation
	{
		EObjectiveGateRelation__RequiredOpen = 0,
		EObjectiveGateRelation__RequiredClosed = 1,
		EObjectiveGateRelation__RequiredSame = 2,
		EObjectiveGateRelation__RequiredOpposite = 3,
		EObjectiveGateRelation__Substitution = 4,
	};


	// Enum /Script/FortniteGame.EGateResetBehavior
	enum EGateResetBehavior
	{
		EGateResetBehavior__DoesNotReset = 0,
		EGateResetBehavior__ResetObjectiveOnGateClose = 1,
		EGateResetBehavior__ResetObjectiveAndDataOnGateClose = 2,
		EGateResetBehavior__ResetQuestOnGateClose = 3,
		EGateResetBehavior__ResetObjectiveAndDataOnGateClose_NoToast = 4,
	};


	// Enum /Script/FortniteGame.EPersistenceFrameworkExecutionOption
	enum EPersistenceFrameworkExecutionOption
	{
		EPersistenceFrameworkExecutionOption__RemoveAllActionsOnFinish = 0,
		EPersistenceFrameworkExecutionOption__AbortIfAnyActionFails = 1,
		EPersistenceFrameworkExecutionOption__EPersistenceFrameworkActionQueueOptions_MaxFlags = 2,
	};


	// Enum /Script/FortniteGame.EPersistenceFrameworkActionEnd
	enum EPersistenceFrameworkActionEnd
	{
		EPersistenceFrameworkActionEnd__Finished = 0,
		EPersistenceFrameworkActionEnd__Aborted = 1,
	};


	// Enum /Script/FortniteGame.EPersistenceFrameworkResult
	enum EPersistenceFrameworkResult
	{
		EPersistenceFrameworkResult__Failed = 0,
		EPersistenceFrameworkResult__Success = 1,
		EPersistenceFrameworkResult__InProgress = 2,
		EPersistenceFrameworkResult__NotReady = 3,
	};


	// Enum /Script/FortniteGame.EPersistenceFrameworkServiceLatentResult
	enum EPersistenceFrameworkServiceLatentResult
	{
		EPersistenceFrameworkServiceLatentResult__EndedTickingWithFailure = 0,
		EPersistenceFrameworkServiceLatentResult__EndedTickingWithSuccess = 1,
		EPersistenceFrameworkServiceLatentResult__ContinueTicking = 2,
	};


	// Enum /Script/FortniteGame.EPersistenceFrameworkState
	enum EPersistenceFrameworkState
	{
		EPersistenceFrameworkState__NotReady = 0,
		EPersistenceFrameworkState__ReadyForPersistence = 1,
		EPersistenceFrameworkState__Deinitializing = 2,
		EPersistenceFrameworkState__DeInitialized = 3,
	};


	// Enum /Script/FortniteGame.UPFWCheat_RootArea
	enum UPFWCheat_RootArea
	{
		UPFWCheat_RootArea__Player = 0,
		UPFWCheat_RootArea__WorldForPlayer = 1,
		UPFWCheat_RootArea__World = 2,
	};


	// Enum /Script/FortniteGame.EModularGatePlatformTypes
	enum EModularGatePlatformTypes
	{
		EModularGatePlatformTypes__None = 0,
		EModularGatePlatformTypes__Mobile = 1,
		EModularGatePlatformTypes__Console = 2,
		EModularGatePlatformTypes__Desktop = 4,
		EModularGatePlatformTypes__All = 7,
	};


	// Enum /Script/FortniteGame.EPrimitiveCrosstalkFunctions
	enum EPrimitiveCrosstalkFunctions
	{
		EPrimitiveCrosstalkFunctions__SendTagAsPayload = 0,
		EPrimitiveCrosstalkFunctions__SendTaggedObjectPayload = 1,
		EPrimitiveCrosstalkFunctions__SendTaggedStringPayload = 2,
		EPrimitiveCrosstalkFunctions__SendTaggedIntPayload = 3,
		EPrimitiveCrosstalkFunctions__GetTaggedObjectPayload = 4,
		EPrimitiveCrosstalkFunctions__GetTaggedStringPayload = 5,
		EPrimitiveCrosstalkFunctions__GetTaggedIntPayload = 6,
		EPrimitiveCrosstalkFunctions__BindNoParamEventToTaggedDelegate = 7,
		EPrimitiveCrosstalkFunctions__UnbindNoParamEventFromTaggedDelegate = 8,
		EPrimitiveCrosstalkFunctions__UnbindObjectCallbacksFromAllTaggedDelegates = 9,
	};


	// Enum /Script/FortniteGame.EQuestItemComponentDebugStyleType
	enum EQuestItemComponentDebugStyleType
	{
		EQuestItemComponentDebugStyleType__PushStyleColor = 0,
		EQuestItemComponentDebugStyleType__PopStyleColor = 1,
		EQuestItemComponentDebugStyleType__SameLineText = 2,
		EQuestItemComponentDebugStyleType__NewLineText = 3,
		EQuestItemComponentDebugStyleType__ProgressBar = 4,
		EQuestItemComponentDebugStyleType__SetToolTip = 5,
	};


	// Enum /Script/FortniteGame.EQuestParticipationScope
	enum EQuestParticipationScope
	{
		EQuestParticipationScope__None = 0,
		EQuestParticipationScope__Personal = 1,
		EQuestParticipationScope__Playspace = 2,
		EQuestParticipationScope__World = 3,
		EQuestParticipationScope__Squad = 4,
		EQuestParticipationScope__Party = 5,
	};


	// Enum /Script/FortniteGame.EQuestObjectiveUpdateType
	enum EQuestObjectiveUpdateType
	{
		EQuestObjectiveUpdateType__Progressed = 0,
		EQuestObjectiveUpdateType__ResetObjective = 1,
		EQuestObjectiveUpdateType__ResetQuest = 2,
		EQuestObjectiveUpdateType__ResetObjectiveNoDisplayUpdate = 3,
		EQuestObjectiveUpdateType__Decremented = 4,
	};


	// Enum /Script/FortniteGame.EPriorityInsertion
	enum EPriorityInsertion
	{
		EPriorityInsertion__AfterReferenceTag = 0,
		EPriorityInsertion__BeforeReferenceTag = 1,
	};


	// Enum /Script/FortniteGame.EIndexNavigationResult
	enum EIndexNavigationResult
	{
		EIndexNavigationResult__Succeeded = 0,
		EIndexNavigationResult__Modified = 1,
		EIndexNavigationResult__Clamped = 2,
		EIndexNavigationResult__StepOff = 3,
		EIndexNavigationResult__NoMove = 4,
	};


	// Enum /Script/FortniteGame.ESocialRequirementsRequiredForGate
	enum ESocialRequirementsRequiredForGate
	{
		ESocialRequirementsRequiredForGate__AllSocialRequirements = 0,
		ESocialRequirementsRequiredForGate__AnySocialRequirements = 1,
		ESocialRequirementsRequiredForGate__NoSocialRequirements = 2,
	};


	// Enum /Script/FortniteGame.ESocialRequirementGateGroupType
	enum ESocialRequirementGateGroupType
	{
		ESocialRequirementGateGroupType__Solo = 0,
		ESocialRequirementGateGroupType__Squad = 1,
		ESocialRequirementGateGroupType__Party = 2,
	};


	// Enum /Script/FortniteGame.EStateTransitionControlEvent
	enum EStateTransitionControlEvent
	{
		EStateTransitionControlEvent__OnStateTransitionPaused = 0,
		EStateTransitionControlEvent__OnStateTransitionComplete = 1,
		EStateTransitionControlEvent__Count = 2,
	};


	// Enum /Script/FortniteGame.EStateTransitionPauseRequestHandleClearType
	enum EStateTransitionPauseRequestHandleClearType
	{
		EStateTransitionPauseRequestHandleClearType__ClearWhenAllHandlesAreRemoved = 0,
		EStateTransitionPauseRequestHandleClearType__ClearRightAway = 1,
	};


	// Enum /Script/FortniteGame.ETriState
	enum ETriState
	{
		ETriState__DefaultState = 0,
		ETriState__TrueState = 1,
		ETriState__FalseState = 2,
	};


	// Enum /Script/FortniteGame.EVkConversationRequirement_TargetEnum
	enum EVkConversationRequirement_TargetEnum
	{
		EVkConversationRequirement_TargetEnum__Instigator = 0,
		EVkConversationRequirement_TargetEnum__ConversationDevice = 1,
	};


	// Enum /Script/FortniteGame.EVkConversationRequirement_TypeOfCheckEnum
	enum EVkConversationRequirement_TypeOfCheckEnum
	{
		EVkConversationRequirement_TypeOfCheckEnum__All = 0,
		EVkConversationRequirement_TypeOfCheckEnum__None = 1,
		EVkConversationRequirement_TypeOfCheckEnum__Any = 2,
	};


	// Enum /Script/FortniteGame.EVkConversationRequirement_FailureTypeEnum
	enum EVkConversationRequirement_FailureTypeEnum
	{
		EVkConversationRequirement_FailureTypeEnum__Hide = 0,
		EVkConversationRequirement_FailureTypeEnum__Disable = 1,
	};


	// Enum /Script/FortniteGame.EVoiceRepUploadRecordResult
	enum EVoiceRepUploadRecordResult
	{
		EVoiceRepUploadRecordResult__Success = 0,
		EVoiceRepUploadRecordResult__Cancelled = 1,
		EVoiceRepUploadRecordResult__NoAudioToUpload = 2,
		EVoiceRepUploadRecordResult__EmeraldError = 3,
		EVoiceRepUploadRecordResult__FailedUpload = 4,
	};


	// Enum /Script/FortniteGame.FTurnTransitionCondition
	enum FTurnTransitionCondition
	{
		FTurnTransitionCondition__None = 0,
		FTurnTransitionCondition__Inplace = 1,
		FTurnTransitionCondition__Start = 2,
		FTurnTransitionCondition__Moving = 3,
	};


	// Enum /Script/FortniteGame.EJumpBoostPackState
	enum EJumpBoostPackState
	{
		EJumpBoostPackState__Idle = 0,
		EJumpBoostPackState__Boost = 1,
		EJumpBoostPackState__Hovering = 2,
		EJumpBoostPackState__Falling = 3,
		EJumpBoostPackState__None = 4,
	};


	// Enum /Script/FortniteGame.EMedicPackState
	enum EMedicPackState
	{
		EMedicPackState__Idle = 0,
		EMedicPackState__Active = 1,
		EMedicPackState__None = 2,
	};


	// Enum /Script/FortniteGame.EFortGameplayCueAttachType
	enum EFortGameplayCueAttachType
	{
		EFortGameplayCueAttachType__AttachToTarget = 0,
		EFortGameplayCueAttachType__DoNotAttach = 1,
	};


	// Enum /Script/FortniteGame.EFortGameplayCueSourceCondition
	enum EFortGameplayCueSourceCondition
	{
		EFortGameplayCueSourceCondition__AnySource = 0,
		EFortGameplayCueSourceCondition__LocalPlayerSource = 1,
		EFortGameplayCueSourceCondition__NonLocalPlayerSource = 2,
	};


	// Enum /Script/FortniteGame.EFortAbilityTask_PlayContextualAnimMode
	enum EFortAbilityTask_PlayContextualAnimMode
	{
		EFortAbilityTask_PlayContextualAnimMode__StartContextualAnim = 0,
		EFortAbilityTask_PlayContextualAnimMode__TransitionContextualAnim = 1,
	};


	// Enum /Script/FortniteGame.EFortAbilityTargetDataPolicy
	enum EFortAbilityTargetDataPolicy
	{
		EFortAbilityTargetDataPolicy__ReplicateToServer = 0,
		EFortAbilityTargetDataPolicy__SimulateOnServer = 1,
	};


	// Enum /Script/FortniteGame.EFortActorTemplateCostUpdateMethod
	enum EFortActorTemplateCostUpdateMethod
	{
		EFortActorTemplateCostUpdateMethod__Latest = 0,
		EFortActorTemplateCostUpdateMethod__Smallest = 1,
		EFortActorTemplateCostUpdateMethod__OnlyNew = 2,
		EFortActorTemplateCostUpdateMethod__Double = 3,
	};


	// Enum /Script/FortniteGame.EFortAnalyticsClientEngagementEventType
	enum EFortAnalyticsClientEngagementEventType
	{
		EFortAnalyticsClientEngagementEventType__None = 0,
		EFortAnalyticsClientEngagementEventType__DamageReceivedFromPlayerPawn = 1,
		EFortAnalyticsClientEngagementEventType__DamageDealtToPlayerPawn = 2,
		EFortAnalyticsClientEngagementEventType__DamageDealtToPlayerBuild = 3,
		EFortAnalyticsClientEngagementEventType__DamageDealtToOther = 4,
		EFortAnalyticsClientEngagementEventType__EngagementTimeout = 5,
		EFortAnalyticsClientEngagementEventType__PlayerWon = 6,
		EFortAnalyticsClientEngagementEventType__PlayerDeathOnWin = 7,
		EFortAnalyticsClientEngagementEventType__TeamWon = 8,
		EFortAnalyticsClientEngagementEventType__TeamLost = 9,
		EFortAnalyticsClientEngagementEventType__PlayerLost = A,
		EFortAnalyticsClientEngagementEventType__PlayerKilledPlayer = B,
		EFortAnalyticsClientEngagementEventType__PlayerFiredWeapon = C,
		EFortAnalyticsClientEngagementEventType__ManagerStopped = D,
		EFortAnalyticsClientEngagementEventType__PlayerPawnDied = E,
		EFortAnalyticsClientEngagementEventType__PlayerPawnSpawned = F,
		EFortAnalyticsClientEngagementEventType__Count = 10,
	};


	// Enum /Script/FortniteGame.EFortAnalyticsEventDenylistPlaylistKey
	enum EFortAnalyticsEventDenylistPlaylistKey
	{
		EFortAnalyticsEventDenylistPlaylistKey__PlaylistType = 0,
		EFortAnalyticsEventDenylistPlaylistKey__PlaylistName = 1,
		EFortAnalyticsEventDenylistPlaylistKey__All = 2,
	};


	// Enum /Script/FortniteGame.EEnvironmentalItemEndReason
	enum EEnvironmentalItemEndReason
	{
		EEnvironmentalItemEndReason__None = 0,
		EEnvironmentalItemEndReason__PlayerExit = 1,
		EEnvironmentalItemEndReason__PlayerDeath = 2,
		EEnvironmentalItemEndReason__ObjectDestroyed = 3,
	};


	// Enum /Script/FortniteGame.EIDScannerResult
	enum EIDScannerResult
	{
		EIDScannerResult__Success_PlayerBelongsToFaction = 0,
		EIDScannerResult__Success_DownedPlayer = 1,
		EIDScannerResult__Success_DownedGuard = 2,
		EIDScannerResult__Success_PlayerIsDisguised = 3,
		EIDScannerResult__Failure_NotFromFaction = 4,
		EIDScannerResult__Other = 5,
	};


	// Enum /Script/FortniteGame.ECreativeCreatorAnalyticsType
	enum ECreativeCreatorAnalyticsType
	{
		ECreativeCreatorAnalyticsType__MatchEnd = 0,
		ECreativeCreatorAnalyticsType__Heartbeat = 1,
	};


	// Enum /Script/FortniteGame.EAlphaFromDeltaTypes
	enum EAlphaFromDeltaTypes
	{
		EAlphaFromDeltaTypes__TranslationX = 0,
		EAlphaFromDeltaTypes__TranslationY = 1,
		EAlphaFromDeltaTypes__TranslationZ = 2,
		EAlphaFromDeltaTypes__Scale = 3,
		EAlphaFromDeltaTypes__ScaleX = 4,
		EAlphaFromDeltaTypes__ScaleY = 5,
		EAlphaFromDeltaTypes__ScaleZ = 6,
		EAlphaFromDeltaTypes__EulerX = 7,
		EAlphaFromDeltaTypes__EulerY = 8,
		EAlphaFromDeltaTypes__EulerZ = 9,
		EAlphaFromDeltaTypes__QuaternionTwist = A,
	};


	// Enum /Script/FortniteGame.ESkydivingDirection
	enum ESkydivingDirection
	{
		ESkydivingDirection__Center = 0,
		ESkydivingDirection__Right = 1,
		ESkydivingDirection__Left = 2,
		ESkydivingDirection__Forward = 3,
		ESkydivingDirection__Back = 4,
	};


	// Enum /Script/FortniteGame.EAnimRelaxedState
	enum EAnimRelaxedState
	{
		EAnimRelaxedState__None = 0,
		EAnimRelaxedState__WeaponRaised = 1,
		EAnimRelaxedState__RelaxedLevel1 = 2,
		EAnimRelaxedState__RelaxedLevel2 = 3,
	};


	// Enum /Script/FortniteGame.ERidingFootPhase
	enum ERidingFootPhase
	{
		ERidingFootPhase__FeetInAir = 0,
		ERidingFootPhase__FrontFeetPlanted = 1,
		ERidingFootPhase__BackFeetPlanted = 2,
		ERidingFootPhase__LeftBackFeetForward = 3,
		ERidingFootPhase__RightBackFeetForward = 4,
		ERidingFootPhase__LeftPlantedRightPass = 5,
		ERidingFootPhase__RightPlantedLeftPass = 6,
	};


	// Enum /Script/FortniteGame.ESourceSelectionMode
	enum ESourceSelectionMode
	{
		ESourceSelectionMode__MaxDifference = 0,
	};


	// Enum /Script/FortniteGame.EFortAnimNode_NoBlendCurveSlot_Mode
	enum EFortAnimNode_NoBlendCurveSlot_Mode
	{
		EFortAnimNode_NoBlendCurveSlot_Mode__FullFromSourceWhileActive = 0,
		EFortAnimNode_NoBlendCurveSlot_Mode__FullFromLatestMontage = 1,
		EFortAnimNode_NoBlendCurveSlot_Mode__Blended = 2,
	};


	// Enum /Script/FortniteGame.EPredictiveStrideWarpingAxisMode
	enum EPredictiveStrideWarpingAxisMode
	{
		EPredictiveStrideWarpingAxisMode__IKFootRootLocalX = 0,
		EPredictiveStrideWarpingAxisMode__IKFootRootLocalY = 1,
		EPredictiveStrideWarpingAxisMode__IKFootRootLocalZ = 2,
		EPredictiveStrideWarpingAxisMode__WorldSpaceVectorInput = 3,
		EPredictiveStrideWarpingAxisMode__ComponentSpaceVectorInput = 4,
		EPredictiveStrideWarpingAxisMode__ActorSpaceVectorInput = 5,
	};


	// Enum /Script/FortniteGame.ESpeedWarpingAxisMode
	enum ESpeedWarpingAxisMode
	{
		ESpeedWarpingAxisMode__IKFootRootLocalX = 0,
		ESpeedWarpingAxisMode__IKFootRootLocalY = 1,
		ESpeedWarpingAxisMode__IKFootRootLocalZ = 2,
		ESpeedWarpingAxisMode__WorldSpaceVectorInput = 3,
		ESpeedWarpingAxisMode__ComponentSpaceVectorInput = 4,
		ESpeedWarpingAxisMode__ActorSpaceVectorInput = 5,
	};


	// Enum /Script/FortniteGame.EMontageSyncTargetType
	enum EMontageSyncTargetType
	{
		EMontageSyncTargetType__Pet = 0,
		EMontageSyncTargetType__CustomPartType = 1,
		EMontageSyncTargetType__Weapon = 2,
	};


	// Enum /Script/FortniteGame.EMontageInterrupt
	enum EMontageInterrupt
	{
		EMontageInterrupt__Any = 0,
		EMontageInterrupt__RootMotionOnly = 1,
		EMontageInterrupt__None = 2,
	};


	// Enum /Script/FortniteGame.EFortNotifyAudioParamsStoreSource
	enum EFortNotifyAudioParamsStoreSource
	{
		EFortNotifyAudioParamsStoreSource__Weapon = 0,
		EFortNotifyAudioParamsStoreSource__Pawn = 1,
		EFortNotifyAudioParamsStoreSource__Controller = 2,
	};


	// Enum /Script/FortniteGame.EDeimosAnimState
	enum EDeimosAnimState
	{
		EDeimosAnimState__Idle = 0,
		EDeimosAnimState__Running = 1,
		EDeimosAnimState__Attack = 2,
		EDeimosAnimState__Dance = 3,
		EDeimosAnimState__Dying = 4,
		EDeimosAnimState__Died = 5,
		EDeimosAnimState__FullBodyHitReact = 6,
		EDeimosAnimState__AdditiveHitReact = 7,
		EDeimosAnimState__ActiveIdle = 8,
		EDeimosAnimState__Falling = 9,
		EDeimosAnimState__Frozen = A,
		EDeimosAnimState__RangedAttack = B,
		EDeimosAnimState__Walking = C,
		EDeimosAnimState__Sprinting = D,
	};


	// Enum /Script/FortniteGame.EFortFacialAnimTypes
	enum EFortFacialAnimTypes
	{
		EFortFacialAnimTypes__Default = 0,
		EFortFacialAnimTypes__FaceOnly = 1,
		EFortFacialAnimTypes__FullHead = 2,
		EFortFacialAnimTypes__FromAmplitude = 3,
		EFortFacialAnimTypes__Max = 4,
	};


	// Enum /Script/FortniteGame.EGliderType
	enum EGliderType
	{
		EGliderType__HangGlider = 0,
		EGliderType__Umbrella = 1,
		EGliderType__Surfing = 2,
		EGliderType__SurfingSimple = 3,
		EGliderType__Cape = 4,
		EGliderType__Stairs = 5,
		EGliderType__NoGlider = 6,
	};


	// Enum /Script/FortniteGame.EPlaneDirection
	enum EPlaneDirection
	{
		EPlaneDirection__Center = 0,
		EPlaneDirection__Right = 1,
		EPlaneDirection__Left = 2,
		EPlaneDirection__Up = 3,
		EPlaneDirection__Down = 4,
	};


	// Enum /Script/FortniteGame.EFortCardinalDirection
	enum EFortCardinalDirection
	{
		EFortCardinalDirection__North = 0,
		EFortCardinalDirection__East = 1,
		EFortCardinalDirection__South = 2,
		EFortCardinalDirection__West = 3,
	};


	// Enum /Script/FortniteGame.EFortPlayerAnimBodyType
	enum EFortPlayerAnimBodyType
	{
		EFortPlayerAnimBodyType__Small = 0,
		EFortPlayerAnimBodyType__Medium = 1,
		EFortPlayerAnimBodyType__Large = 2,
		EFortPlayerAnimBodyType__All = 3,
	};


	// Enum /Script/FortniteGame.EFortHandIKOverrideType
	enum EFortHandIKOverrideType
	{
		EFortHandIKOverrideType__UseDefault = 0,
		EFortHandIKOverrideType__ForceFK = 1,
		EFortHandIKOverrideType__ForceIK = 2,
		EFortHandIKOverrideType__ForceFKSnap = 3,
	};


	// Enum /Script/FortniteGame.EHarvesterSwingTagType
	enum EHarvesterSwingTagType
	{
		Hit = 0,
		Combo = 1,
	};


	// Enum /Script/FortniteGame.EFortHuskAnimType
	enum EFortHuskAnimType
	{
		EFortHuskAnimType__Basic = 0,
		EFortHuskAnimType__Dwarf = 1,
		EFortHuskAnimType__BlasterBig = 2,
		EFortHuskAnimType__Weak = 3,
		EFortHuskAnimType__TinyHead = 4,
		EFortHuskAnimType__Beehive = 5,
		EFortHuskAnimType__Husky = 6,
		EFortHuskAnimType__Sploder = 7,
		EFortHuskAnimType__Zapper = 8,
	};


	// Enum /Script/FortniteGame.EFortValetVehicleType
	enum EFortValetVehicleType
	{
		EFortValetVehicleType__Default = 0,
		EFortValetVehicleType__Sport = 1,
		EFortValetVehicleType__BasicTruck = 2,
	};


	// Enum /Script/FortniteGame.EFortAnnouncementDelivery
	enum EFortAnnouncementDelivery
	{
		EFortAnnouncementDelivery__Created = 0,
		EFortAnnouncementDelivery__Received = 1,
		EFortAnnouncementDelivery__Ignored = 2,
		EFortAnnouncementDelivery__Active = 3,
		EFortAnnouncementDelivery__Stopped = 4,
		EFortAnnouncementDelivery__Max_None = 5,
	};


	// Enum /Script/FortniteGame.EFortAnnouncementChannel
	enum EFortAnnouncementChannel
	{
		EFortAnnouncementChannel__Primary = 0,
		EFortAnnouncementChannel__Conversation = 1,
		EFortAnnouncementChannel__Tutorial = 2,
		EFortAnnouncementChannel__Max_None = 3,
	};


	// Enum /Script/FortniteGame.EFortAnnouncementDisplayPreference
	enum EFortAnnouncementDisplayPreference
	{
		EFortAnnouncementDisplayPreference__Default_HUD = 0,
		EFortAnnouncementDisplayPreference__QuestIntroduction = 1,
		EFortAnnouncementDisplayPreference__QuestJournal = 2,
	};


	// Enum /Script/FortniteGame.EFortWaitForTimeOfDayManagerUpdatedBehavior
	enum EFortWaitForTimeOfDayManagerUpdatedBehavior
	{
		EFortWaitForTimeOfDayManagerUpdatedBehavior__ContextAware = 0,
		EFortWaitForTimeOfDayManagerUpdatedBehavior__GlobalOnly = 1,
		EFortWaitForTimeOfDayManagerUpdatedBehavior__LocalOnly = 2,
	};


	// Enum /Script/FortniteGame.EAthenaPIEStartupMode
	enum EAthenaPIEStartupMode
	{
		EAthenaPIEStartupMode__UseDefaults = 0,
		EAthenaPIEStartupMode__Warmup = 1,
		EAthenaPIEStartupMode__WarmupPaused = 2,
		EAthenaPIEStartupMode__Aircraft = 3,
		EAthenaPIEStartupMode__AircraftPaused = 4,
		EAthenaPIEStartupMode__Gameplay = 5,
	};


	// Enum /Script/FortniteGame.EAthenaQuickChatFilteringType
	enum EAthenaQuickChatFilteringType
	{
		EAthenaQuickChatFilteringType__AlwaysVisible = 0,
		EAthenaQuickChatFilteringType__ActiveMaterial = 1,
		EAthenaQuickChatFilteringType__FacingPickup = 2,
		EAthenaQuickChatFilteringType__ActiveHotbarItem = 3,
		EAthenaQuickChatFilteringType__ActiveHotbarItemAmmo = 4,
		EAthenaQuickChatFilteringType__FacingPickupOrActiveHotbarItem = 5,
		EAthenaQuickChatFilteringType__NoWeaponEquippedRequiringAmmo = 6,
		EAthenaQuickChatFilteringType__WeaponEquippedOfAmmoType = 7,
	};


	// Enum /Script/FortniteGame.EAthenaRewardItemType
	enum EAthenaRewardItemType
	{
		EAthenaRewardItemType__Normal = 0,
		EAthenaRewardItemType__HiddenReward = 1,
		EAthenaRewardItemType__GiftboxHiddenReward = 2,
		EAthenaRewardItemType__NonExportedFakeReward = 3,
	};


	// Enum /Script/FortniteGame.EAthenaRewardVisualImportanceType
	enum EAthenaRewardVisualImportanceType
	{
		EAthenaRewardVisualImportanceType__Normal = 0,
		EAthenaRewardVisualImportanceType__Hot = 1,
		EAthenaRewardVisualImportanceType__CrazyHot = 2,
		EAthenaRewardVisualImportanceType__Crazy = 3,
	};


	// Enum /Script/FortniteGame.EAthenaSeasonRewardTrack
	enum EAthenaSeasonRewardTrack
	{
		EAthenaSeasonRewardTrack__Invalid = 0,
		EAthenaSeasonRewardTrack__SeasonProgressionTrack = 1,
		EAthenaSeasonRewardTrack__CompendiumFreeTrack = 2,
		EAthenaSeasonRewardTrack__CompendiumPaidTrack = 3,
		EAthenaSeasonRewardTrack__CompendiumAdditionalTrack = 4,
	};


	// Enum /Script/FortniteGame.EBarrierFlagState
	enum EBarrierFlagState
	{
		EBarrierFlagState__FlagUp = 0,
		EBarrierFlagState__FlagDown = 1,
	};


	// Enum /Script/FortniteGame.EBarrierState
	enum EBarrierState
	{
		EBarrierState__BarrierUp = 0,
		EBarrierState__BarrierComingDown = 1,
		EBarrierState__BarrierDown = 2,
	};


	// Enum /Script/FortniteGame.EContentionRuleType
	enum EContentionRuleType
	{
		EContentionRuleType__MajorityWins = 0,
		EContentionRuleType__OneTeamOnlyWins = 1,
	};


	// Enum /Script/FortniteGame.ECapturePointUnlockRules
	enum ECapturePointUnlockRules
	{
		ECapturePointUnlockRules__Reset = 0,
		ECapturePointUnlockRules__MaintainState = 1,
		ECapturePointUnlockRules__ResetDeactivate = 2,
	};


	// Enum /Script/FortniteGame.ETraversePointState
	enum ETraversePointState
	{
		ETraversePointState__None = 0,
		ETraversePointState__Hidden = 1,
		ETraversePointState__Active = 2,
		ETraversePointState__TouchedByPlayer = 3,
		ETraversePointState__Finished = 4,
	};


	// Enum /Script/FortniteGame.ESpawnResult
	enum ESpawnResult
	{
		ESpawnResult__Success = 0,
		ESpawnResult__Failure_NoLocationFound = 1,
		ESpawnResult__Failure_NoActorClass = 2,
		ESpawnResult__Failure_BadQueryData = 3,
	};


	// Enum /Script/FortniteGame.EStashInventoryServiceSyncState
	enum EStashInventoryServiceSyncState
	{
		EStashInventoryServiceSyncState__Uninitialized = 0,
		EStashInventoryServiceSyncState__Syncing = 1,
		EStashInventoryServiceSyncState__Ready = 2,
	};


	// Enum /Script/FortniteGame.EPoiDiscoveredState
	enum EPoiDiscoveredState
	{
		EPoiDiscoveredState__Undiscovered = 0,
		EPoiDiscoveredState__Discovered = 1,
		EPoiDiscoveredState__ForceDiscovered = 2,
	};


	// Enum /Script/FortniteGame.ESkydiveFeedbackPhase
	enum ESkydiveFeedbackPhase
	{
		ESkydiveFeedbackPhase__Initial = 0,
		ESkydiveFeedbackPhase__WithGlider = 1,
		ESkydiveFeedbackPhase__InVortex = 2,
		ESkydiveFeedbackPhase__None = 3,
	};


	// Enum /Script/FortniteGame.EQuestAnalyticStage
	enum EQuestAnalyticStage
	{
		EQuestAnalyticStage__Granted = 0,
		EQuestAnalyticStage__AutoCompleted = 1,
		EQuestAnalyticStage__Completed = 2,
		EQuestAnalyticStage__Failed = 3,
	};


	// Enum /Script/FortniteGame.EDadBroHealthType
	enum EDadBroHealthType
	{
		EDadBroHealthType__None = 0,
		EDadBroHealthType__Weakpoints = 1,
		EDadBroHealthType__Horn = 2,
		EDadBroHealthType__Guy = 3,
	};


	// Enum /Script/FortniteGame.FCollisionWithBuildingActorReactionTypes
	enum FCollisionWithBuildingActorReactionTypes
	{
		FCollisionWithBuildingActorReactionTypes__DoNothing = 0,
		FCollisionWithBuildingActorReactionTypes__PlayAttackAbility = 1,
		FCollisionWithBuildingActorReactionTypes__Destroy = 2,
		FCollisionWithBuildingActorReactionTypes__ApplyGameplayEffect = 3,
	};


	// Enum /Script/FortniteGame.FCollisionWithLaunchableReactionTypes
	enum FCollisionWithLaunchableReactionTypes
	{
		FCollisionWithLaunchableReactionTypes__DoNothing = 0,
		FCollisionWithLaunchableReactionTypes__Launch = 1,
		FCollisionWithLaunchableReactionTypes__OverrideOther = 2,
	};


	// Enum /Script/FortniteGame.ETypeOfBuildingActor
	enum ETypeOfBuildingActor
	{
		ETypeOfBuildingActor__Anything = 0,
		ETypeOfBuildingActor__PlayerBuilt = 1,
		ETypeOfBuildingActor__NonPlayerBuilt = 2,
	};


	// Enum /Script/FortniteGame.EFreelookMode
	enum EFreelookMode
	{
		EFreelookMode__None = 0,
		EFreelookMode__Mouse = 1,
		EFreelookMode__Analog = 2,
		EFreelookMode__Touch = 3,
	};


	// Enum /Script/FortniteGame.EExitCraftState
	enum EExitCraftState
	{
		EExitCraftState__None = 0,
		EExitCraftState__Spawned = 1,
		EExitCraftState__Landed = 2,
		EExitCraftState__SpawnBalloon = 3,
		EExitCraftState__GettingIntoPosition = 4,
		EExitCraftState__GettingIntoPosition_Simple = 5,
		EExitCraftState__WaitingForPawns = 6,
		EExitCraftState__Exiting = 7,
	};


	// Enum /Script/FortniteGame.EBuildingGameplayActorAircraftSpawnSide
	enum EBuildingGameplayActorAircraftSpawnSide
	{
		EBuildingGameplayActorAircraftSpawnSide__None = 0,
		EBuildingGameplayActorAircraftSpawnSide__Side1 = 1,
		EBuildingGameplayActorAircraftSpawnSide__Side2 = 2,
	};


	// Enum /Script/FortniteGame.EDebugVehicleFlags
	enum EDebugVehicleFlags
	{
		EDebugVehicleFlags__Status = 0,
		EDebugVehicleFlags__Input = 1,
		EDebugVehicleFlags__Controls = 2,
		EDebugVehicleFlags__Shocks = 3,
		EDebugVehicleFlags__Exits = 4,
		EDebugVehicleFlags__Water = 5,
		EDebugVehicleFlags__Wheels = 6,
		EDebugVehicleFlags__Friction = 7,
		EDebugVehicleFlags__AirControl = 8,
		EDebugVehicleFlags__CenterOfMass = 9,
		EDebugVehicleFlags__Gravity = A,
		EDebugVehicleFlags__Forces = B,
		EDebugVehicleFlags__Damage = C,
		EDebugVehicleFlags__Collisions = D,
		EDebugVehicleFlags__OrientationCorrection = E,
		EDebugVehicleFlags__BoundarySpline = F,
		EDebugVehicleFlags__Sleeping = 10,
		EDebugVehicleFlags__Misc = 11,
		EDebugVehicleFlags__LeanBreak = 12,
		EDebugVehicleFlags__LevelOfDetail = 13,
	};


	// Enum /Script/FortniteGame.EWaxTokenState
	enum EWaxTokenState
	{
		EWaxTokenState__None = 0,
		EWaxTokenState__FirstSpline = 1,
		EWaxTokenState__Interpolation = 2,
		EWaxTokenState__LastSpline = 3,
		EWaxTokenState__Finished = 4,
	};


	// Enum /Script/FortniteGame.EOstrichDetonationState
	enum EOstrichDetonationState
	{
		EOstrichDetonationState__None = 0,
		EOstrichDetonationState__Detonate = 1,
		EOstrichDetonationState__SelfDestruct = 2,
		EOstrichDetonationState__Instant = 3,
	};


	// Enum /Script/FortniteGame.EFortContrailsState
	enum EFortContrailsState
	{
		EFortContrailsState__NotActive = 0,
		EFortContrailsState__ActivationPending = 1,
		EFortContrailsState__AwaitingLoad = 2,
		EFortContrailsState__Active = 3,
	};


	// Enum /Script/FortniteGame.ECreativePortalManagerValidityResult
	enum ECreativePortalManagerValidityResult
	{
		ECreativePortalManagerValidityResult__Valid = 0,
		ECreativePortalManagerValidityResult__Invalid = 1,
	};


	// Enum /Script/FortniteGame.EAircraftLaunchReason
	enum EAircraftLaunchReason
	{
		EAircraftLaunchReason__StdTimerAllPlayers = 0,
		EAircraftLaunchReason__EarlyTimerAllPlayers = 1,
		EAircraftLaunchReason__StdTimerMostPlayers = 2,
		EAircraftLaunchReason__EarlyTimerMostPlayers = 3,
		EAircraftLaunchReason__StdTimerFewPlayers = 4,
	};


	// Enum /Script/FortniteGame.EGameModePauseWarmupMaskId
	enum EGameModePauseWarmupMaskId
	{
		EGameModePauseWarmupMaskId__None = 0,
		EGameModePauseWarmupMaskId__Debug = 1,
		EGameModePauseWarmupMaskId__Mutator = 2,
		EGameModePauseWarmupMaskId__BroadcastController = 4,
		EGameModePauseWarmupMaskId__PlayerBotsSpawning = 8,
		EGameModePauseWarmupMaskId__DownloadOnDemand = 10,
		EGameModePauseWarmupMaskId__Minigame = 20,
	};


	// Enum /Script/FortniteGame.EPlayerIndicatorFlags
	enum EPlayerIndicatorFlags
	{
		EPlayerIndicatorFlags__None = 0,
		EPlayerIndicatorFlags__Minimap = 1,
		EPlayerIndicatorFlags__WorldArrow = 2,
		EPlayerIndicatorFlags__WorldName = 4,
		EPlayerIndicatorFlags__DBNOCountDown = 8,
		EPlayerIndicatorFlags__VoiceIndicator = 10,
	};


	// Enum /Script/FortniteGame.EAthenaAerialPhase
	enum EAthenaAerialPhase
	{
		EAthenaAerialPhase__None = 0,
		EAthenaAerialPhase__BusCantExit = 1,
		EAthenaAerialPhase__BusCanExit = 2,
		EAthenaAerialPhase__BusCanExitEndZebulonDrone = 3,
		EAthenaAerialPhase__Skydiving = 4,
		EAthenaAerialPhase__Parachuting = 5,
		EAthenaAerialPhase__Falling = 6,
	};


	// Enum /Script/FortniteGame.EFortMapDisplayType
	enum EFortMapDisplayType
	{
		EFortMapDisplayType__None = 0,
		EFortMapDisplayType__Capture = 1,
		EFortMapDisplayType__CustomMaterial = 2,
		EFortMapDisplayType__CustomTexture = 3,
		EFortMapDisplayType__Count = 4,
	};


	// Enum /Script/FortniteGame.EAthenaFilterDisplayType
	enum EAthenaFilterDisplayType
	{
		EAthenaFilterDisplayType__UseCategoryName = 0,
		EAthenaFilterDisplayType__ShowFilterString = 1,
	};


	// Enum /Script/FortniteGame.EMegaStormState
	enum EMegaStormState
	{
		EMegaStormState__GatheringActorList = 0,
		EMegaStormState__DamagingActors = 1,
	};


	// Enum /Script/FortniteGame.EMutatorListInitState
	enum EMutatorListInitState
	{
		EMutatorListInitState__Default = 0,
		EMutatorListInitState__Enabled = 1,
		EMutatorListInitState__Disabled = 2,
	};


	// Enum /Script/FortniteGame.EMutatorOverrideSource
	enum EMutatorOverrideSource
	{
		EMutatorOverrideSource__Default = 0,
		EMutatorOverrideSource__External = 1,
	};


	// Enum /Script/FortniteGame.EPartyRiftPortalManagerValidityResult
	enum EPartyRiftPortalManagerValidityResult
	{
		EPartyRiftPortalManagerValidityResult__Valid = 0,
		EPartyRiftPortalManagerValidityResult__Invalid = 1,
	};


	// Enum /Script/FortniteGame.EPawnLaunchMinVelocityApply
	enum EPawnLaunchMinVelocityApply
	{
		EPawnLaunchMinVelocityApply__Add = 0,
		EPawnLaunchMinVelocityApply__Min = 1,
	};


	// Enum /Script/FortniteGame.EMapZoomingMode
	enum EMapZoomingMode
	{
		EMapZoomingMode__None = 0,
		EMapZoomingMode__ZoomingIn = 1,
		EMapZoomingMode__ZoomingOut = 2,
	};


	// Enum /Script/FortniteGame.EBackpackType
	enum EBackpackType
	{
		EBackpackType__Jetpack = 0,
		EBackpackType__Medic = 1,
		EBackpackType__StormTracker = 2,
		EBackpackType__Glider = 3,
	};


	// Enum /Script/FortniteGame.EFortPawnState
	enum EFortPawnState
	{
		EFortPawnState__Default = 0,
		EFortPawnState__InCombat = 1,
		EFortPawnState__DBNO = 2,
		EFortPawnState__IsReviving = 4,
		EFortPawnState__BeingRevived = 8,
		EFortPawnState__Dead = 10,
	};


	// Enum /Script/FortniteGame.EKeepPlayingTogetherAnalyticEventPhase
	enum EKeepPlayingTogetherAnalyticEventPhase
	{
		EKeepPlayingTogetherAnalyticEventPhase__PrePostGamePhase = 0,
		EKeepPlayingTogetherAnalyticEventPhase__Countdown = 1,
		EKeepPlayingTogetherAnalyticEventPhase__TimedOut = 2,
		EKeepPlayingTogetherAnalyticEventPhase__AllSquadMembersVoted = 3,
	};


	// Enum /Script/FortniteGame.ECustomGameVoiceChannel
	enum ECustomGameVoiceChannel
	{
		ECustomGameVoiceChannel__Squad = 0,
		ECustomGameVoiceChannel__FullTeam = 1,
	};


	// Enum /Script/FortniteGame.ESafeZoneStartUp
	enum ESafeZoneStartUp
	{
		ESafeZoneStartUp__UseDefaultGameBehavior = 0,
		ESafeZoneStartUp__StartsWithWarmUp = 1,
		ESafeZoneStartUp__StartsWithAirCraft = 2,
		ESafeZoneStartUp__StartsWithNoAirCraft = 3,
	};


	// Enum /Script/FortniteGame.EAirCraftBehavior
	enum EAirCraftBehavior
	{
		EAirCraftBehavior__Default = 0,
		EAirCraftBehavior__OpposingAirCraftForEachTeam = 1,
		EAirCraftBehavior__FlyTowardFirstCircleCenter = 2,
		EAirCraftBehavior__NoAircraft = 3,
	};


	// Enum /Script/FortniteGame.EAthenaRespawnType
	enum EAthenaRespawnType
	{
		EAthenaRespawnType__None = 0,
		EAthenaRespawnType__InfiniteRespawn = 1,
		EAthenaRespawnType__InfiniteRespawnExceptStorm = 2,
	};


	// Enum /Script/FortniteGame.EAthenaRespawnLocation
	enum EAthenaRespawnLocation
	{
		EAthenaRespawnLocation__LastDeath = 0,
		EAthenaRespawnLocation__CreativePlayerStart = 1,
	};


	// Enum /Script/FortniteGame.EAthenaWinCondition
	enum EAthenaWinCondition
	{
		EAthenaWinCondition__LastManStanding = 0,
		EAthenaWinCondition__LastManStandingIncludingAllies = 1,
		EAthenaWinCondition__TimedTeamFinalFight = 2,
		EAthenaWinCondition__FirstToGoalScore = 3,
		EAthenaWinCondition__TimedLastMenStanding = 4,
		EAthenaWinCondition__MutatorControlled = 5,
		EAthenaWinCondition__MutatorControlledGoalScore = 6,
		EAthenaWinCondition__MutatorControlledChinaSupported = 7,
	};


	// Enum /Script/FortniteGame.ERewardTimePlayedType
	enum ERewardTimePlayedType
	{
		ERewardTimePlayedType__Default = 0,
		ERewardTimePlayedType__NoReward = 1,
		ERewardTimePlayedType__FlatValue = 2,
	};


	// Enum /Script/FortniteGame.ERewardPlacementBonusType
	enum ERewardPlacementBonusType
	{
		ERewardPlacementBonusType__Solo = 0,
		ERewardPlacementBonusType__Duo = 1,
		ERewardPlacementBonusType__Squad = 2,
		ERewardPlacementBonusType__LargeTeam = 3,
		ERewardPlacementBonusType__None = 4,
		ERewardPlacementBonusType__TwoTeam = 5,
		ERewardPlacementBonusType__MediumTeam = 6,
		ERewardPlacementBonusType__QuickSolo = 7,
		ERewardPlacementBonusType__QuickDuo = 8,
		ERewardPlacementBonusType__QuickSquad = 9,
		ERewardPlacementBonusType__QuickLargeTeam = A,
		ERewardPlacementBonusType__QuickTwoTeam = B,
		ERewardPlacementBonusType__QuickMediumTeam = C,
		ERewardPlacementBonusType__SinglePlacement = D,
	};


	// Enum /Script/FortniteGame.EWeaponSelectionPreservationType
	enum EWeaponSelectionPreservationType
	{
		EWeaponSelectionPreservationType__KeepSelectionWhenRespawning = 0,
		EWeaponSelectionPreservationType__NeverKeepSelection = 1,
	};


	// Enum /Script/FortniteGame.EFortSpawnActorTime
	enum EFortSpawnActorTime
	{
		EFortSpawnActorTime__PostPlaylistLoad = 0,
		EFortSpawnActorTime__StartOfStormHoldTime = 1,
	};


	// Enum /Script/FortniteGame.ESupplyDropSpawnType
	enum ESupplyDropSpawnType
	{
		ESupplyDropSpawnType__SafeZoneDriven = 0,
		ESupplyDropSpawnType__ItemDeliveryManagement = 1,
		ESupplyDropSpawnType__MutatorManaged = 2,
	};


	// Enum /Script/FortniteGame.ESupplyDropItemTrackType
	enum ESupplyDropItemTrackType
	{
		ESupplyDropItemTrackType__SpecialActors = 0,
	};


	// Enum /Script/FortniteGame.EMessageFeedRelationshipFilter
	enum EMessageFeedRelationshipFilter
	{
		EMessageFeedRelationshipFilter__Anyone = 0,
		EMessageFeedRelationshipFilter__SquadAndTeamMembers = 1,
		EMessageFeedRelationshipFilter__SquadMembersOnly = 2,
		EMessageFeedRelationshipFilter__SelfOnly = 3,
	};


	// Enum /Script/FortniteGame.EMessageFeedSubject
	enum EMessageFeedSubject
	{
		EMessageFeedSubject__ToyOwner = 0,
		EMessageFeedSubject__OtherPlayerInteractingWithToy = 1,
	};


	// Enum /Script/FortniteGame.EFortDualWieldSwingState
	enum EFortDualWieldSwingState
	{
		EFortDualWieldSwingState__None = 0,
		EFortDualWieldSwingState__MainHand = 1,
		EFortDualWieldSwingState__OffHand = 2,
		EFortDualWieldSwingState__BothHands = 3,
	};


	// Enum /Script/FortniteGame.EFortDualWieldDataSource
	enum EFortDualWieldDataSource
	{
		EFortDualWieldDataSource__BaseConfiguration = 0,
		EFortDualWieldDataSource__DataDriven = 1,
	};


	// Enum /Script/FortniteGame.EFortWeaponUpgradeCosts
	enum EFortWeaponUpgradeCosts
	{
		EFortWeaponUpgradeCosts__NotSet = 0,
		EFortWeaponUpgradeCosts__WoodUncommon = 1,
		EFortWeaponUpgradeCosts__WoodRare = 2,
		EFortWeaponUpgradeCosts__WoodVeryRare = 3,
		EFortWeaponUpgradeCosts__WoodSuperRare = 4,
		EFortWeaponUpgradeCosts__MetalUncommon = 5,
		EFortWeaponUpgradeCosts__MetalRare = 6,
		EFortWeaponUpgradeCosts__MetalVeryRare = 7,
		EFortWeaponUpgradeCosts__MetalSuperRare = 8,
		EFortWeaponUpgradeCosts__BrickUncommon = 9,
		EFortWeaponUpgradeCosts__BrickRare = A,
		EFortWeaponUpgradeCosts__BrickVeryRare = B,
		EFortWeaponUpgradeCosts__BrickSuperRare = C,
		EFortWeaponUpgradeCosts__HorizontalWoodCommon = D,
		EFortWeaponUpgradeCosts__HorizontalWoodUncommon = E,
		EFortWeaponUpgradeCosts__HorizontalWoodRare = F,
		EFortWeaponUpgradeCosts__HorizontalWoodVeryRare = 10,
		EFortWeaponUpgradeCosts__HorizontalWoodSuperRare = 11,
		EFortWeaponUpgradeCosts__HorizontalMetalCommon = 12,
		EFortWeaponUpgradeCosts__HorizontalMetalUncommon = 13,
		EFortWeaponUpgradeCosts__HorizontalMetalRare = 14,
		EFortWeaponUpgradeCosts__HorizontalMetalVeryRare = 15,
		EFortWeaponUpgradeCosts__HorizontalMetalSuperRare = 16,
		EFortWeaponUpgradeCosts__HorizontalBrickCommon = 17,
		EFortWeaponUpgradeCosts__HorizontalBrickUncommon = 18,
		EFortWeaponUpgradeCosts__HorizontalBrickRare = 19,
		EFortWeaponUpgradeCosts__HorizontalBrickVeryRare = 1A,
		EFortWeaponUpgradeCosts__HorizontalBrickSuperRare = 1B,
	};


	// Enum /Script/FortniteGame.EFortWeaponUpgradeDirection
	enum EFortWeaponUpgradeDirection
	{
		EFortWeaponUpgradeDirection__NotSet = 0,
		EFortWeaponUpgradeDirection__Vertical = 1,
		EFortWeaponUpgradeDirection__Horizontal = 2,
	};


	// Enum /Script/FortniteGame.EFortWeaponUpgradeInteractionResult
	enum EFortWeaponUpgradeInteractionResult
	{
		EFortWeaponUpgradeInteractionResult__Upgradable = 0,
		EFortWeaponUpgradeInteractionResult__NotEnoughResources = 1,
		EFortWeaponUpgradeInteractionResult__CannotUpgrade = 2,
		EFortWeaponUpgradeInteractionResult__CannotInteract = 3,
	};


	// Enum /Script/FortniteGame.EPlayerAttributeClampType
	enum EPlayerAttributeClampType
	{
		EPlayerAttributeClampType__Minimum = 0,
		EPlayerAttributeClampType__Maximum = 1,
	};


	// Enum /Script/FortniteGame.ERadiusTrackingGroupingType
	enum ERadiusTrackingGroupingType
	{
		ERadiusTrackingGroupingType__Global = 0,
		ERadiusTrackingGroupingType__Team = 1,
		ERadiusTrackingGroupingType__Squad = 2,
	};


	// Enum /Script/FortniteGame.EAnalyticMatchCounts
	enum EAnalyticMatchCounts
	{
		EAnalyticMatchCounts__IDScannerDoorFailed = 0,
		EAnalyticMatchCounts__IDSCannerDoorSuccessBelongsToFaction = 1,
		EAnalyticMatchCounts__IDSCannerDoorSuccessPlayerDisguised = 2,
		EAnalyticMatchCounts__IDSCannerDoorSuccessCarriedHenchman = 3,
		EAnalyticMatchCounts__IDSCannerDoorSuccessCarriedHuman = 4,
		EAnalyticMatchCounts__IDScannerChestFailed = 5,
		EAnalyticMatchCounts__IDSCannerChestSuccessBelongsToFaction = 6,
		EAnalyticMatchCounts__IDSCannerChestSuccessPlayerDisguised = 7,
		EAnalyticMatchCounts__IDSCannerChestSuccessCarriedHenchman = 8,
		EAnalyticMatchCounts__IDSCannerChestSuccessCarriedHuman = 9,
		EAnalyticMatchCounts__HenchmenEnteredSuspiciousState = A,
		EAnalyticMatchCounts__HenchmenEnteredLostTargetState = B,
		EAnalyticMatchCounts__HenchmenEnteredThreatenedState = C,
		EAnalyticMatchCounts__HenchmenDowned = D,
		EAnalyticMatchCounts__HenchmenEliminated = E,
		EAnalyticMatchCounts__HenchmenInterrogated = F,
		EAnalyticMatchCounts__BossesEliminated = 10,
		EAnalyticMatchCounts__DisguisePhoneBoothTimesEntered = 11,
		EAnalyticMatchCounts__DisguiseItemTimesUsed = 12,
		EAnalyticMatchCounts__HiddenPassagesTimesEntered = 13,
		EAnalyticMatchCounts__CameraOrSentryTimesEnteredCautionState = 14,
		EAnalyticMatchCounts__CameraOrSentryTimesEnteredAltertedState = 15,
		EAnalyticMatchCounts__CameraOrSentryTimesDestroyed = 16,
		EAnalyticMatchCounts__GeneratorTimesDisabled = 17,
		EAnalyticMatchCounts__UmbrellaNumberOfDashes = 18,
		EAnalyticMatchCounts__UmbrellaNumberUsedToFloat = 19,
		EAnalyticMatchCounts__UmbrellaAmountDamageBlocked = 1A,
		EAnalyticMatchCounts__UmbrellaBulletsBlocked = 1B,
		EAnalyticMatchCounts__UmbrellaMeleeHitsBlocked = 1C,
		EAnalyticMatchCounts__Count = 1D,
	};


	// Enum /Script/FortniteGame.ESpawnPointState
	enum ESpawnPointState
	{
		ESpawnPointState__Inactive = 0,
		ESpawnPointState__Active_CarryObjectInRange = 1,
		ESpawnPointState__Active_CarryObjectOutOfRange = 2,
		ESpawnPointState__IntelCaptured = 3,
		ESpawnPointState__IntelDownloaded = 4,
	};


	// Enum /Script/FortniteGame.ERespawnAndSpectatePlayerRespawningState
	enum ERespawnAndSpectatePlayerRespawningState
	{
		ERespawnAndSpectatePlayerRespawningState__None = 0,
		ERespawnAndSpectatePlayerRespawningState__WaitingOnTimer = 1,
		ERespawnAndSpectatePlayerRespawningState__WaitingOnPlayerSelection = 2,
		ERespawnAndSpectatePlayerRespawningState__WaitingOnClientReady = 3,
		ERespawnAndSpectatePlayerRespawningState__Respawning = 4,
		ERespawnAndSpectatePlayerRespawningState__RespawnFinishing = 5,
	};


	// Enum /Script/FortniteGame.ECancelMarkerReason
	enum ECancelMarkerReason
	{
		ECancelMarkerReason__Ping = 0,
		ECancelMarkerReason__MapOrDeath = 1,
	};


	// Enum /Script/FortniteGame.EMarkableResult
	enum EMarkableResult
	{
		EMarkableResult__Markable = 0,
		EMarkableResult__Block = 1,
		EMarkableResult__Continue = 2,
		EMarkableResult__MarkableWithoutAttaching = 3,
	};


	// Enum /Script/FortniteGame.EFortMutatorReturnValue
	enum EFortMutatorReturnValue
	{
		EFortMutatorReturnValue__Ignore = 0,
		EFortMutatorReturnValue__Override = 1,
		EFortMutatorReturnValue__OverrideReturn = 2,
	};


	// Enum /Script/FortniteGame.EAshtonStoneType
	enum EAshtonStoneType
	{
		EAshtonStoneType__Purple = 0,
		EAshtonStoneType__Blue = 1,
		EAshtonStoneType__Red = 2,
		EAshtonStoneType__Orange = 3,
		EAshtonStoneType__Green = 4,
		EAshtonStoneType__Yellow = 5,
	};


	// Enum /Script/FortniteGame.EAshtonStoneStateType
	enum EAshtonStoneStateType
	{
		EAshtonStoneStateType__NotSpawned = 0,
		EAshtonStoneStateType__Spawned = 1,
		EAshtonStoneStateType__Captured = 2,
	};


	// Enum /Script/FortniteGame.EAshtonTeam
	enum EAshtonTeam
	{
		EAshtonTeam__Heroes = 0,
		EAshtonTeam__Villains = 1,
		EAshtonTeam__Invalid = 2,
	};


	// Enum /Script/FortniteGame.EFortCreativeAutoPickupSetting
	enum EFortCreativeAutoPickupSetting
	{
		EFortCreativeAutoPickupSetting__IsFalse = 0,
		EFortCreativeAutoPickupSetting__IsTrue = 1,
		EFortCreativeAutoPickupSetting__AutoOnly = 2,
		EFortCreativeAutoPickupSetting__Unset = FF,
	};


	// Enum /Script/FortniteGame.EBagelPhase
	enum EBagelPhase
	{
		EBagelPhase__NotStarted = 0,
		EBagelPhase__Preparation = 1,
		EBagelPhase__Survival = 2,
		EBagelPhase__AfterMath = 3,
		EBagelPhase__Moving = 4,
		EBagelPhase__FinalPhase = 5,
		EBagelPhase__FinalPhaseFullStorm = 6,
	};


	// Enum /Script/FortniteGame.EBagelScoreEvent
	enum EBagelScoreEvent
	{
		EBagelScoreEvent__FiendKill = 0,
		EBagelScoreEvent__BruteKill = 1,
		EBagelScoreEvent__RangedKill = 2,
		EBagelScoreEvent__ExplodingKill = 3,
		EBagelScoreEvent__ChillKill = 4,
		EBagelScoreEvent__PoisonKill = 5,
		EBagelScoreEvent__GoldKill = 6,
		EBagelScoreEvent__RiftDestroyed = 7,
		EBagelScoreEvent__ScoreMultiplierUsed = 8,
		EBagelScoreEvent__HeadshotKill = 9,
		EBagelScoreEvent__RespawnPenalty = A,
		EBagelScoreEvent__AmmoBoxOpened = B,
		EBagelScoreEvent__ChestOpened = C,
		EBagelScoreEvent__FinalBossKill = D,
	};


	// Enum /Script/FortniteGame.EBagelDifficulty
	enum EBagelDifficulty
	{
		EBagelDifficulty__Easy = 0,
		EBagelDifficulty__Medium = 1,
		EBagelDifficulty__Hard = 2,
	};


	// Enum /Script/FortniteGame.EBarrierFoodTeam
	enum EBarrierFoodTeam
	{
		EBarrierFoodTeam__Burger = 0,
		EBarrierFoodTeam__Tomato = 1,
	};


	// Enum /Script/FortniteGame.EBarrierObjectiveDamageState
	enum EBarrierObjectiveDamageState
	{
		EBarrierObjectiveDamageState__Health = 0,
		EBarrierObjectiveDamageState__Health = 1,
		EBarrierObjectiveDamageState__Health = 2,
		EBarrierObjectiveDamageState__Health = 3,
		EBarrierObjectiveDamageState__Health = 4,
		EBarrierObjectiveDamageState__Health = 5,
		EBarrierObjectiveDamageState__Health = 6,
		EBarrierObjectiveDamageState__Health = 7,
		EBarrierObjectiveDamageState__Health = 8,
	};


	// Enum /Script/FortniteGame.ECreativeAllowSpectateOtherTeams
	enum ECreativeAllowSpectateOtherTeams
	{
		ECreativeAllowSpectateOtherTeams__Disallow = 0,
		ECreativeAllowSpectateOtherTeams__Allow = 1,
		ECreativeAllowSpectateOtherTeams__BattleRoyale = 2,
	};


	// Enum /Script/FortniteGame.EAllowedToEdit
	enum EAllowedToEdit
	{
		EAllowedToEdit__Default = 0,
		EAllowedToEdit__Anyone = 1,
	};


	// Enum /Script/FortniteGame.ECreativeRespawnWaveType
	enum ECreativeRespawnWaveType
	{
		ECreativeRespawnWaveType__None = 0,
		ECreativeRespawnWaveType__WaveStartingOnElimination = 1,
	};


	// Enum /Script/FortniteGame.ECanSlideMutatorType
	enum ECanSlideMutatorType
	{
		ECanSlideMutatorType__Unset = 0,
		ECanSlideMutatorType__Yes = 1,
		ECanSlideMutatorType__No = 2,
	};


	// Enum /Script/FortniteGame.EFortCrucibleStatType
	enum EFortCrucibleStatType
	{
		EFortCrucibleStatType__CourseOverall = 0,
		EFortCrucibleStatType__CourseSegment1 = 1,
		EFortCrucibleStatType__CourseSegment2 = 2,
		EFortCrucibleStatType__CourseSegment3 = 3,
		EFortCrucibleStatType__CourseSegment4 = 4,
		EFortCrucibleStatType__CourseSegment5 = 5,
		EFortCrucibleStatType__Count = 6,
	};


	// Enum /Script/FortniteGame.EFortCrucibleControlType
	enum EFortCrucibleControlType
	{
		EFortCrucibleControlType__Gamepad = 0,
		EFortCrucibleControlType__KBM = 1,
		EFortCrucibleControlType__Touch = 2,
		EFortCrucibleControlType__Count = 3,
	};


	// Enum /Script/FortniteGame.EFortCrucibleStatId
	enum EFortCrucibleStatId
	{
		EFortCrucibleStatId__Gamepad_CourseOverall = 0,
		EFortCrucibleStatId__Gamepad_CourseSegment1 = 1,
		EFortCrucibleStatId__Gamepad_CourseSegment2 = 2,
		EFortCrucibleStatId__Gamepad_CourseSegment3 = 3,
		EFortCrucibleStatId__Gamepad_CourseSegment4 = 4,
		EFortCrucibleStatId__Gamepad_CourseSegment5 = 5,
		EFortCrucibleStatId__KBM_CourseOverall = 6,
		EFortCrucibleStatId__KBM_CourseSegment1 = 7,
		EFortCrucibleStatId__KBM_CourseSegment2 = 8,
		EFortCrucibleStatId__KBM_CourseSegment3 = 9,
		EFortCrucibleStatId__KBM_CourseSegment4 = A,
		EFortCrucibleStatId__KBM_CourseSegment5 = B,
		EFortCrucibleStatId__Touch_CourseOverall = C,
		EFortCrucibleStatId__Touch_CourseSegment1 = D,
		EFortCrucibleStatId__Touch_CourseSegment2 = E,
		EFortCrucibleStatId__Touch_CourseSegment3 = F,
		EFortCrucibleStatId__Touch_CourseSegment4 = 10,
		EFortCrucibleStatId__Touch_CourseSegment5 = 11,
		EFortCrucibleStatId__Count = 12,
	};


	// Enum /Script/FortniteGame.EFortCrucibleStatSource
	enum EFortCrucibleStatSource
	{
		EFortCrucibleStatSource__None = 0,
		EFortCrucibleStatSource__Backend = 1,
		EFortCrucibleStatSource__CurrentSession = 2,
	};


	// Enum /Script/FortniteGame.EFortCrucibleLeaderboardId
	enum EFortCrucibleLeaderboardId
	{
		EFortCrucibleLeaderboardId__GlobalGamepad = 0,
		EFortCrucibleLeaderboardId__GlobalKBM = 1,
		EFortCrucibleLeaderboardId__GlobalTouch = 2,
		EFortCrucibleLeaderboardId__GlobalAll = 3,
		EFortCrucibleLeaderboardId__FriendsGamepad = 4,
		EFortCrucibleLeaderboardId__FriendsKBM = 5,
		EFortCrucibleLeaderboardId__FriendsTouch = 6,
		EFortCrucibleLeaderboardId__FriendsAll = 7,
		EFortCrucibleLeaderboardId__Count = 8,
	};


	// Enum /Script/FortniteGame.EFortCrucibleLeaderboardState
	enum EFortCrucibleLeaderboardState
	{
		EFortCrucibleLeaderboardState__Disabled = 0,
		EFortCrucibleLeaderboardState__ReadyForQuery = 1,
		EFortCrucibleLeaderboardState__WaitingForQueryResults = 2,
		EFortCrucibleLeaderboardState__NeedsUserInfoQueried = 3,
		EFortCrucibleLeaderboardState__Complete = 4,
	};


	// Enum /Script/FortniteGame.EFortCrucibleWorkType
	enum EFortCrucibleWorkType
	{
		EFortCrucibleWorkType__Invalid = 0,
		EFortCrucibleWorkType__SetupPlayer = 1,
		EFortCrucibleWorkType__GetFriendsList = 2,
		EFortCrucibleWorkType__GetFriendsStats = 3,
		EFortCrucibleWorkType__GetGlobalLeaderboard = 4,
		EFortCrucibleWorkType__GetDisplayNames = 5,
	};


	// Enum /Script/FortniteGame.EDadBroState
	enum EDadBroState
	{
		EDadBroState__NotYet = 0,
		EDadBroState__Initializing = 1,
		EDadBroState__Active = 2,
	};


	// Enum /Script/FortniteGame.EControlPointState
	enum EControlPointState
	{
		EControlPointState__None = 0,
		EControlPointState__Disabled = 1,
		EControlPointState__Enabled = 2,
	};


	// Enum /Script/FortniteGame.EEQSActorSpawnerTriggerType
	enum EEQSActorSpawnerTriggerType
	{
		EEQSActorSpawnerTriggerType__Manual = 0,
		EEQSActorSpawnerTriggerType__SafeZoneState = 1,
	};


	// Enum /Script/FortniteGame.EEQSActorSpawnerSpawnType
	enum EEQSActorSpawnerSpawnType
	{
		EEQSActorSpawnerSpawnType__Actor = 0,
		EEQSActorSpawnerSpawnType__AIPawn = 1,
		EEQSActorSpawnerSpawnType__Pickup = 2,
	};


	// Enum /Script/FortniteGame.EEQSActorSpawnerStopSpawningReason
	enum EEQSActorSpawnerStopSpawningReason
	{
		EEQSActorSpawnerStopSpawningReason__Success = 0,
		EEQSActorSpawnerStopSpawningReason__ManualStop = 1,
		EEQSActorSpawnerStopSpawningReason__Requeued = 2,
		EEQSActorSpawnerStopSpawningReason__RanOutOfRetries = 3,
	};


	// Enum /Script/FortniteGame.EAthenaMutatorEvaluators
	enum EAthenaMutatorEvaluators
	{
		EAthenaMutatorEvaluators__NoOverride = 0,
		EAthenaMutatorEvaluators__ForceOverride = 1,
		EAthenaMutatorEvaluators__Add = 2,
		EAthenaMutatorEvaluators__Multiply = 3,
	};


	// Enum /Script/FortniteGame.EHeistExitCraftState
	enum EHeistExitCraftState
	{
		EHeistExitCraftState__None = 0,
		EHeistExitCraftState__Incoming = 1,
		EHeistExitCraftState__Spawned = 2,
		EHeistExitCraftState__Exited = 3,
	};


	// Enum /Script/FortniteGame.EFortHUDElementVisibiltyOption
	enum EFortHUDElementVisibiltyOption
	{
		EFortHUDElementVisibiltyOption__DoNotOverride = 0,
		EFortHUDElementVisibiltyOption__ShowElement = 1,
		EFortHUDElementVisibiltyOption__HideElement = 2,
	};


	// Enum /Script/FortniteGame.EFortReticleVisibiltyOption
	enum EFortReticleVisibiltyOption
	{
		EFortReticleVisibiltyOption__DoNotOverride = 0,
		EFortReticleVisibiltyOption__ShowAlways = 1,
		EFortReticleVisibiltyOption__ShowPickaxeOnly = 2,
		EFortReticleVisibiltyOption__ShowNonPickaxeOnly = 3,
		EFortReticleVisibiltyOption__HideAlways = 4,
	};


	// Enum /Script/FortniteGame.EFortHUDElementVisibiltyPriority
	enum EFortHUDElementVisibiltyPriority
	{
		EFortHUDElementVisibiltyPriority__Lowest = 0,
		EFortHUDElementVisibiltyPriority__VeryLow = 1,
		EFortHUDElementVisibiltyPriority__Low = 2,
		EFortHUDElementVisibiltyPriority__Normal = 3,
		EFortHUDElementVisibiltyPriority__High = 4,
		EFortHUDElementVisibiltyPriority__VeryHigh = 5,
		EFortHUDElementVisibiltyPriority__Highest = 6,
		EFortHUDElementVisibiltyPriority__COUNT = 7,
	};


	// Enum /Script/FortniteGame.EInfiltrationTeam
	enum EInfiltrationTeam
	{
		EInfiltrationTeam__Attacking = 0,
		EInfiltrationTeam__Defending = 1,
		EInfiltrationTeam__NumOfTeams = 2,
	};


	// Enum /Script/FortniteGame.EAthenaLootDropOverride
	enum EAthenaLootDropOverride
	{
		EAthenaLootDropOverride__NoOverride = 0,
		EAthenaLootDropOverride__ForceDrop = 1,
		EAthenaLootDropOverride__ForceKeep = 2,
		EAthenaLootDropOverride__ForceDestroy = 3,
		EAthenaLootDropOverride__ForceDropUnlessRespawning = 4,
		EAthenaLootDropOverride__ForceDestroyUnlessRespawning = 5,
		EAthenaLootDropOverride__DropUnlessTeamSelectionUpdated = 6,
	};


	// Enum /Script/FortniteGame.EAthenaInventorySpawnOverride
	enum EAthenaInventorySpawnOverride
	{
		EAthenaInventorySpawnOverride__NoOverride = 0,
		EAthenaInventorySpawnOverride__Always = 1,
		EAthenaInventorySpawnOverride__IntialSpawn = 2,
		EAthenaInventorySpawnOverride__AircraftPhaseOnly = 3,
		EAthenaInventorySpawnOverride__AfterWarmup = 4,
	};


	// Enum /Script/FortniteGame.ERespawnRequirements
	enum ERespawnRequirements
	{
		ERespawnRequirements__RespawnOnly = 0,
		ERespawnRequirements__NoRespawnOnly = 1,
		ERespawnRequirements__Both = 2,
	};


	// Enum /Script/FortniteGame.ECustomLootSelection
	enum ECustomLootSelection
	{
		ECustomLootSelection__Default = 0,
		ECustomLootSelection__SolidGold = 1,
	};


	// Enum /Script/FortniteGame.EMashPhase
	enum EMashPhase
	{
		EMashPhase__NotStarted = 0,
		EMashPhase__Preparation = 1,
		EMashPhase__Survival = 2,
		EMashPhase__AfterMath = 3,
		EMashPhase__Moving = 4,
		EMashPhase__FinalPhase = 5,
		EMashPhase__FinalPhaseFullStorm = 6,
	};


	// Enum /Script/FortniteGame.EMashAISpecialEncounterType
	enum EMashAISpecialEncounterType
	{
		EMashAISpecialEncounterType__Boss = 0,
		EMashAISpecialEncounterType__UniqueAISpawn = 1,
	};


	// Enum /Script/FortniteGame.EMashScoreEvent
	enum EMashScoreEvent
	{
		EMashScoreEvent__FiendKill = 0,
		EMashScoreEvent__BruteKill = 1,
		EMashScoreEvent__RangedKill = 2,
		EMashScoreEvent__ExplodingKill = 3,
		EMashScoreEvent__ChillKill = 4,
		EMashScoreEvent__PoisonKill = 5,
		EMashScoreEvent__GoldKill = 6,
		EMashScoreEvent__RiftDestroyed = 7,
		EMashScoreEvent__ScoreMultiplierUsed = 8,
		EMashScoreEvent__HeadshotKill = 9,
		EMashScoreEvent__RespawnPenalty = A,
		EMashScoreEvent__AmmoBoxOpened = B,
		EMashScoreEvent__ChestOpened = C,
		EMashScoreEvent__BossKill = D,
		EMashScoreEvent__FinalBossKill = E,
		EMashScoreEvent__SafeDetonationDistanceKill = F,
		EMashScoreEvent__SpecialEncounterKill = 10,
	};


	// Enum /Script/FortniteGame.EMashDifficulty
	enum EMashDifficulty
	{
		EMashDifficulty__Easy = 0,
		EMashDifficulty__Medium = 1,
		EMashDifficulty__Hard = 2,
	};


	// Enum /Script/FortniteGame.EMatchConditionMutatorTeamStatus
	enum EMatchConditionMutatorTeamStatus
	{
		EMatchConditionMutatorTeamStatus__None = 0,
		EMatchConditionMutatorTeamStatus__Won = 1,
		EMatchConditionMutatorTeamStatus__Lost = 2,
		EMatchConditionMutatorTeamStatus__Placed = 3,
	};


	// Enum /Script/FortniteGame.EMultiInteractionMutatorType
	enum EMultiInteractionMutatorType
	{
		EMultiInteractionMutatorType__Unset = 0,
		EMultiInteractionMutatorType__On = 1,
		EMultiInteractionMutatorType__Off = 2,
	};


	// Enum /Script/FortniteGame.EIndicatorDisplayMode
	enum EIndicatorDisplayMode
	{
		EIndicatorDisplayMode__Default = 0,
		EIndicatorDisplayMode__Always = 1,
		EIndicatorDisplayMode__Never = 2,
		EIndicatorDisplayMode__MiniMap = 3,
		EIndicatorDisplayMode__Custom = 4,
	};


	// Enum /Script/FortniteGame.EVoiceIndicatorOnNameplateDisplayMode
	enum EVoiceIndicatorOnNameplateDisplayMode
	{
		EVoiceIndicatorOnNameplateDisplayMode__Default = 0,
		EVoiceIndicatorOnNameplateDisplayMode__Team = 1,
		EVoiceIndicatorOnNameplateDisplayMode__Hostiles = 2,
		EVoiceIndicatorOnNameplateDisplayMode__All = 3,
		EVoiceIndicatorOnNameplateDisplayMode__Disable = 4,
	};


	// Enum /Script/FortniteGame.EOmahaTeam
	enum EOmahaTeam
	{
		EOmahaTeam__Home = 0,
		EOmahaTeam__Away = 1,
	};


	// Enum /Script/FortniteGame.EOperationsTeamFaction
	enum EOperationsTeamFaction
	{
		EOperationsTeamFaction__Alter = 0,
		EOperationsTeamFaction__Ego = 1,
		EOperationsTeamFaction__NumFactions = 2,
	};


	// Enum /Script/FortniteGame.EOverrideCubemapType
	enum EOverrideCubemapType
	{
		EOverrideCubemapType__No = 0,
		EOverrideCubemapType__Yes = 1,
	};


	// Enum /Script/FortniteGame.EPlayerDamageHeightRatioDetectionType
	enum EPlayerDamageHeightRatioDetectionType
	{
		EPlayerDamageHeightRatioDetectionType__None = 0,
		EPlayerDamageHeightRatioDetectionType__FromBottom = 1,
		EPlayerDamageHeightRatioDetectionType__FromTop = 2,
	};


	// Enum /Script/FortniteGame.EHarvestStyleOverride
	enum EHarvestStyleOverride
	{
		EHarvestStyleOverride__None = 0,
		EHarvestStyleOverride__Creative = 1,
		EHarvestStyleOverride__BattleRoyale = 2,
		EHarvestStyleOverride__SaveTheWorld = 3,
	};


	// Enum /Script/FortniteGame.EGravityPresetOverride
	enum EGravityPresetOverride
	{
		EGravityPresetOverride__Normal = 0,
		EGravityPresetOverride__Low = 1,
		EGravityPresetOverride__VeryLow = 2,
		EGravityPresetOverride__High = 3,
		EGravityPresetOverride__VeryHigh = 4,
	};


	// Enum /Script/FortniteGame.EFlightSpeedPresetOverride
	enum EFlightSpeedPresetOverride
	{
		EFlightSpeedPresetOverride__FlightSpeed0 = 0,
		EFlightSpeedPresetOverride__FlightSpeed1 = 1,
		EFlightSpeedPresetOverride__FlightSpeed2 = 2,
		EFlightSpeedPresetOverride__FlightSpeed3 = 3,
		EFlightSpeedPresetOverride__FlightSpeed4 = 4,
		EFlightSpeedPresetOverride__FlightSpeed5 = 5,
		EFlightSpeedPresetOverride__FlightSpeed6 = 6,
	};


	// Enum /Script/FortniteGame.EIndicatorLineOfSightMode
	enum EIndicatorLineOfSightMode
	{
		EIndicatorLineOfSightMode__AlwaysShow = 0,
		EIndicatorLineOfSightMode__HideBehindObstacles = 1,
	};


	// Enum /Script/FortniteGame.ESelfDamageTargetPreset
	enum ESelfDamageTargetPreset
	{
		ESelfDamageTargetPreset__NonPlayers = 0,
		ESelfDamageTargetPreset__PlayersOnly = 1,
		ESelfDamageTargetPreset__All = 2,
	};


	// Enum /Script/FortniteGame.ESelfDamageWeaponTypePreset
	enum ESelfDamageWeaponTypePreset
	{
		ESelfDamageWeaponTypePreset__PickaxeOnly = 0,
		ESelfDamageWeaponTypePreset__MeleeOnly = 1,
		ESelfDamageWeaponTypePreset__RangedOnly = 2,
		ESelfDamageWeaponTypePreset__All = 3,
	};


	// Enum /Script/FortniteGame.EAthenaTODPostProcessOverride
	enum EAthenaTODPostProcessOverride
	{
		EAthenaTODPostProcessOverride__NoOverride = 0,
		EAthenaTODPostProcessOverride__PostProcess0 = 1,
		EAthenaTODPostProcessOverride__PostProcess1 = 2,
		EAthenaTODPostProcessOverride__PostProcess2 = 3,
		EAthenaTODPostProcessOverride__PostProcess3 = 4,
		EAthenaTODPostProcessOverride__PostProcess4 = 5,
		EAthenaTODPostProcessOverride__PostProcess5 = 6,
		EAthenaTODPostProcessOverride__PostProcess6 = 7,
		EAthenaTODPostProcessOverride__PostProcess7 = 8,
		EAthenaTODPostProcessOverride__PostProcess8 = 9,
		EAthenaTODPostProcessOverride__PostProcess9 = A,
		EAthenaTODPostProcessOverride__PostProcess10 = B,
		EAthenaTODPostProcessOverride__PostProcess11 = C,
		EAthenaTODPostProcessOverride__PostProcess12 = D,
		EAthenaTODPostProcessOverride__PostProcess13 = E,
		EAthenaTODPostProcessOverride__PostProcess14 = F,
		EAthenaTODPostProcessOverride__PostProcess15 = 10,
	};


	// Enum /Script/FortniteGame.ERepGraphMutatorSpatializationZoneType
	enum ERepGraphMutatorSpatializationZoneType
	{
		ERepGraphMutatorSpatializationZoneType__AI = 0,
		ERepGraphMutatorSpatializationZoneType__AINonFast = 1,
		ERepGraphMutatorSpatializationZoneType__NonAI = 2,
		ERepGraphMutatorSpatializationZoneType__NonAINonFast = 3,
		ERepGraphMutatorSpatializationZoneType__COUNT = 4,
	};


	// Enum /Script/FortniteGame.ERespawnAndSpectateClientEventId
	enum ERespawnAndSpectateClientEventId
	{
		ERespawnAndSpectateClientEventId__ShowUI = 0,
		ERespawnAndSpectateClientEventId__HideUI = 1,
		ERespawnAndSpectateClientEventId__ShowRespawnAvailableUI = 2,
	};


	// Enum /Script/FortniteGame.ERespawnAndSpectateServerPayloadId
	enum ERespawnAndSpectateServerPayloadId
	{
		ERespawnAndSpectateServerPayloadId__SpectateTargetSelected = 0,
		ERespawnAndSpectateServerPayloadId__RespawnTargetSelected = 1,
		ERespawnAndSpectateServerPayloadId__SpectateAndRespawnTargetSelected = 2,
	};


	// Enum /Script/FortniteGame.EShowPlacardPhase
	enum EShowPlacardPhase
	{
		EShowPlacardPhase__None = 0,
		EShowPlacardPhase__StartShow = 1,
		EShowPlacardPhase__WaitBeforeInitialFadeOut = 2,
		EShowPlacardPhase__PreShowFadeOut = 3,
		EShowPlacardPhase__Show = 4,
		EShowPlacardPhase__FadeOut = 5,
		EShowPlacardPhase__PostShowFadeIn = 6,
		EShowPlacardPhase__DoneShowingScreen = 7,
	};


	// Enum /Script/FortniteGame.ESkyCapState
	enum ESkyCapState
	{
		ESkyCapState__Hidden = 0,
		ESkyCapState__StormStarting = 1,
	};


	// Enum /Script/FortniteGame.ESynchronizedTeleportHealthAndShieldResetType
	enum ESynchronizedTeleportHealthAndShieldResetType
	{
		ESynchronizedTeleportHealthAndShieldResetType__None = 0,
		ESynchronizedTeleportHealthAndShieldResetType__EvaluateHealthAndShieldMutators = 1,
		ESynchronizedTeleportHealthAndShieldResetType__MaxHealth = 2,
	};


	// Enum /Script/FortniteGame.ETeamPerformanceMessageReplicationType
	enum ETeamPerformanceMessageReplicationType
	{
		ETeamPerformanceMessageReplicationType__VariableReplication = 0,
		ETeamPerformanceMessageReplicationType__MulticastFunction_Unreliable = 1,
		ETeamPerformanceMessageReplicationType__MulticastFunction_Reliable = 2,
	};


	// Enum /Script/FortniteGame.ETeamPerformanceMessageTrackingStat
	enum ETeamPerformanceMessageTrackingStat
	{
		ETeamPerformanceMessageTrackingStat__TeamScore = 0,
		ETeamPerformanceMessageTrackingStat__TeamScorePercent = 1,
	};


	// Enum /Script/FortniteGame.EAthenaTimeOfDayOverride
	enum EAthenaTimeOfDayOverride
	{
		EAthenaTimeOfDayOverride__NoOverride = 0,
		EAthenaTimeOfDayOverride__ForceDay = 1,
		EAthenaTimeOfDayOverride__ForceNight = 2,
		EAthenaTimeOfDayOverride__Custom = 3,
		EAthenaTimeOfDayOverride__Hour0 = 4,
		EAthenaTimeOfDayOverride__Hour1 = 5,
		EAthenaTimeOfDayOverride__Hour2 = 6,
		EAthenaTimeOfDayOverride__Hour3 = 7,
		EAthenaTimeOfDayOverride__Hour4 = 8,
		EAthenaTimeOfDayOverride__Hour5 = 9,
		EAthenaTimeOfDayOverride__Hour6 = A,
		EAthenaTimeOfDayOverride__Hour7 = B,
		EAthenaTimeOfDayOverride__Hour8 = C,
		EAthenaTimeOfDayOverride__Hour9 = D,
		EAthenaTimeOfDayOverride__Hour10 = E,
		EAthenaTimeOfDayOverride__Hour11 = F,
		EAthenaTimeOfDayOverride__Hour12 = 10,
		EAthenaTimeOfDayOverride__Hour13 = 11,
		EAthenaTimeOfDayOverride__Hour14 = 12,
		EAthenaTimeOfDayOverride__Hour15 = 13,
		EAthenaTimeOfDayOverride__Hour16 = 14,
		EAthenaTimeOfDayOverride__Hour17 = 15,
		EAthenaTimeOfDayOverride__Hour18 = 16,
		EAthenaTimeOfDayOverride__Hour19 = 17,
		EAthenaTimeOfDayOverride__Hour20 = 18,
		EAthenaTimeOfDayOverride__Hour21 = 19,
		EAthenaTimeOfDayOverride__Hour22 = 1A,
		EAthenaTimeOfDayOverride__Hour23 = 1B,
		EAthenaTimeOfDayOverride__Random = 1C,
	};


	// Enum /Script/FortniteGame.EAthenaLightIntensityOverride
	enum EAthenaLightIntensityOverride
	{
		EAthenaLightIntensityOverride__NoOverride = 0,
		EAthenaLightIntensityOverride__Intensity0 = 1,
		EAthenaLightIntensityOverride__Intensity1 = 2,
		EAthenaLightIntensityOverride__Intensity2 = 3,
		EAthenaLightIntensityOverride__Intensity3 = 4,
		EAthenaLightIntensityOverride__Intensity4 = 5,
		EAthenaLightIntensityOverride__Intensity5 = 6,
		EAthenaLightIntensityOverride__Intensity6 = 7,
		EAthenaLightIntensityOverride__Intensity7 = 8,
		EAthenaLightIntensityOverride__Intensity8 = 9,
		EAthenaLightIntensityOverride__Intensity9 = A,
		EAthenaLightIntensityOverride__Intensity10 = B,
	};


	// Enum /Script/FortniteGame.EAthenaFogDensityOverride
	enum EAthenaFogDensityOverride
	{
		EAthenaFogDensityOverride__NoOverride = 0,
		EAthenaFogDensityOverride__Fog0 = 1,
		EAthenaFogDensityOverride__Fog1 = 2,
		EAthenaFogDensityOverride__Fog2 = 3,
		EAthenaFogDensityOverride__Fog3 = 4,
		EAthenaFogDensityOverride__Fog4 = 5,
		EAthenaFogDensityOverride__Fog5 = 6,
		EAthenaFogDensityOverride__Fog6 = 7,
		EAthenaFogDensityOverride__Fog7 = 8,
		EAthenaFogDensityOverride__Fog8 = 9,
		EAthenaFogDensityOverride__Fog9 = A,
		EAthenaFogDensityOverride__Fog10 = B,
	};


	// Enum /Script/FortniteGame.EAthenaTODColor
	enum EAthenaTODColor
	{
		EAthenaTODColor__NoOverride = 0,
		EAthenaTODColor__Black = 1,
		EAthenaTODColor__White = 2,
		EAthenaTODColor__Red = 3,
		EAthenaTODColor__Green = 4,
		EAthenaTODColor__Blue = 5,
		EAthenaTODColor__Yellow = 6,
		EAthenaTODColor__Magenta = 7,
		EAthenaTODColor__Cyan = 8,
	};


	// Enum /Script/FortniteGame.EUraniumGameEndedReason
	enum EUraniumGameEndedReason
	{
		EUraniumGameEndedReason__GameIsStillInProgress = 0,
		EUraniumGameEndedReason__AllRoundsPlayed = 1,
		EUraniumGameEndedReason__EarlyGameEnd_BlowOut = 2,
		EUraniumGameEndedReason__EarlyGameEnd_OutNumbered = 3,
	};


	// Enum /Script/FortniteGame.EFortAthenaMutator_VoiceChatChannelType
	enum EFortAthenaMutator_VoiceChatChannelType
	{
		EFortAthenaMutator_VoiceChatChannelType__Default = 0,
		EFortAthenaMutator_VoiceChatChannelType__None = 1,
		EFortAthenaMutator_VoiceChatChannelType__SquadOnly = 2,
		EFortAthenaMutator_VoiceChatChannelType__TeamOnly = 3,
		EFortAthenaMutator_VoiceChatChannelType__WholeServer = 4,
		EFortAthenaMutator_VoiceChatChannelType__ScopeOnly = 5,
		EFortAthenaMutator_VoiceChatChannelType__ScopeSquadOnly = 6,
		EFortAthenaMutator_VoiceChatChannelType__ScopeTeamOnly = 7,
	};


	// Enum /Script/FortniteGame.EWaxMinimapDrawMode
	enum EWaxMinimapDrawMode
	{
		EWaxMinimapDrawMode__NoDrawing = 0,
		EWaxMinimapDrawMode__DrawCloseAndMoveOrShoot = 1,
		EWaxMinimapDrawMode__DrawMoveOrShoot = 2,
		EWaxMinimapDrawMode__DrawAlways = 3,
	};


	// Enum /Script/FortniteGame.EWaxState
	enum EWaxState
	{
		EWaxState__None = 0,
		EWaxState__SomewhatVisible = 1,
		EWaxState__ModeratelyVisible = 2,
		EWaxState__VeryVisible = 3,
		EWaxState__Undeniable = 4,
	};


	// Enum /Script/FortniteGame.ESpecialRelevancyMode
	enum ESpecialRelevancyMode
	{
		ESpecialRelevancyMode__NormalRelevancy = 0,
		ESpecialRelevancyMode__SoloRelevancy = 1,
		ESpecialRelevancyMode__SquadRelevancy = 2,
		ESpecialRelevancyMode__MultiSquad = 3,
		ESpecialRelevancyMode__Custom = 4,
	};


	// Enum /Script/FortniteGame.ENavOptionFallbackDir
	enum ENavOptionFallbackDir
	{
		ENavOptionFallbackDir__Left = 0,
		ENavOptionFallbackDir__Right = 1,
		ENavOptionFallbackDir__Up = 2,
		ENavOptionFallbackDir__Down = 3,
		ENavOptionFallbackDir__Num = 4,
		ENavOptionFallbackDir__Invalid = 5,
	};


	// Enum /Script/FortniteGame.EVisibilityResponse
	enum EVisibilityResponse
	{
		EVisibilityResponse__Hide = 0,
		EVisibilityResponse__Show = 1,
		EVisibilityResponse__Custom = 2,
	};


	// Enum /Script/FortniteGame.ESpecialEventInputActionBindType
	enum ESpecialEventInputActionBindType
	{
		ESpecialEventInputActionBindType__Consume = 0,
		ESpecialEventInputActionBindType__Bind = 1,
		ESpecialEventInputActionBindType__None = 2,
	};


	// Enum /Script/FortniteGame.EFortContextualTutorialPlatform
	enum EFortContextualTutorialPlatform
	{
		EFortContextualTutorialPlatform__Any = 0,
		EFortContextualTutorialPlatform__PcAndConsole = 1,
		EFortContextualTutorialPlatform__Mobile = 2,
	};


	// Enum /Script/FortniteGame.EFortAthenaTutorial_StandaloneStep
	enum EFortAthenaTutorial_StandaloneStep
	{
		EFortAthenaTutorial_StandaloneStep__None = 0,
		EFortAthenaTutorial_StandaloneStep__HealingInterrupted = 1,
		EFortAthenaTutorial_StandaloneStep__Count = 2,
	};


	// Enum /Script/FortniteGame.FTowhookExtensionState
	enum FTowhookExtensionState
	{
		FTowhookExtensionState__Hold = 0,
		FTowhookExtensionState__Extend = 1,
		FTowhookExtensionState__Contract = 2,
	};


	// Enum /Script/FortniteGame.EPlateHawkInputEvents
	enum EPlateHawkInputEvents
	{
		EPlateHawkInputEvents__PrimaryFire = 0,
		EPlateHawkInputEvents__SecondaryFire = 1,
		EPlateHawkInputEvents__Sprint = 2,
		EPlateHawkInputEvents__Reload = 3,
	};


	// Enum /Script/FortniteGame.EFortFuelGadgetVisualType
	enum EFortFuelGadgetVisualType
	{
		EFortFuelGadgetVisualType__FuelMeter = 0,
		EFortFuelGadgetVisualType__ChargeText = 1,
		EFortFuelGadgetVisualType__Invalid = 2,
	};


	// Enum /Script/FortniteGame.BattleMapHoveredReason
	enum BattleMapHoveredReason
	{
		BattleMapHoveredReason__None = 0,
		BattleMapHoveredReason__Mouse = 1,
		BattleMapHoveredReason__Code = 2,
	};


	// Enum /Script/FortniteGame.EBuildingTickReason
	enum EBuildingTickReason
	{
		EBuildingTickReason__Dynamic = 0,
		EBuildingTickReason__Damaged = 1,
		EBuildingTickReason__GameplayCue_Damage = 2,
		EBuildingTickReason__GameplayCue_Healing = 3,
		EBuildingTickReason__GameplayCue_InstantDeath = 4,
		EBuildingTickReason__UnderConstruction = 5,
		EBuildingTickReason__UnderRepair = 6,
		EBuildingTickReason__Editing = 7,
		EBuildingTickReason__BuildingAnimation = 8,
		EBuildingTickReason__DynamicLODAnim = 9,
		EBuildingTickReason__DynamicShrinkAnim = A,
		EBuildingTickReason__AutoBuild = B,
		EBuildingTickReason__FullHealthEffect = C,
		EBuildingTickReason__BounceAnimation = D,
		EBuildingTickReason__DoorOpenStyleChanged = E,
		EBuildingTickReason__DoorOpenChanged = F,
		EBuildingTickReason__DoorInteract = 10,
		EBuildingTickReason__CinematicCamera = 11,
		EBuildingTickReason__Blueprint = 12,
	};


	// Enum /Script/FortniteGame.ENavLinkPreviewMode
	enum ENavLinkPreviewMode
	{
		ENavLinkPreviewMode__None = 0,
		ENavLinkPreviewMode__Definition = 1,
		ENavLinkPreviewMode__Cache = 2,
	};


	// Enum /Script/FortniteGame.ECalendarDrivenState
	enum ECalendarDrivenState
	{
		ECalendarDrivenState__ForceEnable = 0,
		ECalendarDrivenState__ForceDisable = 1,
	};


	// Enum /Script/FortniteGame.EBuildingFoundationType
	enum EBuildingFoundationType
	{
		BFT_3x3 = 0,
		BFT_5x5 = 1,
		BFT_5x10 = 2,
		BFT_None = 3,
	};


	// Enum /Script/FortniteGame.EDynamicFoundationType
	enum EDynamicFoundationType
	{
		EDynamicFoundationType__Static = 0,
		EDynamicFoundationType__StartEnabled_Stationary = 1,
		EDynamicFoundationType__StartEnabled_Dynamic = 2,
		EDynamicFoundationType__StartDisabled = 3,
	};


	// Enum /Script/FortniteGame.EDynamicFoundationEnabledState
	enum EDynamicFoundationEnabledState
	{
		EDynamicFoundationEnabledState__Unknown = 0,
		EDynamicFoundationEnabledState__Enabled = 1,
		EDynamicFoundationEnabledState__Disabled = 2,
	};


	// Enum /Script/FortniteGame.EBuildingGameplayActorSentry_IdleBehavior
	enum EBuildingGameplayActorSentry_IdleBehavior
	{
		EBuildingGameplayActorSentry_IdleBehavior__Oscillates = 0,
		EBuildingGameplayActorSentry_IdleBehavior__ContinuouslyTurnLeft = 1,
		EBuildingGameplayActorSentry_IdleBehavior__ContinuouslyTurnRight = 2,
	};


	// Enum /Script/FortniteGame.ESpawnMachineState
	enum ESpawnMachineState
	{
		ESpawnMachineState__Default = 0,
		ESpawnMachineState__WaitingForUse = 1,
		ESpawnMachineState__BeingUsed = 2,
		ESpawnMachineState__Active = 3,
		ESpawnMachineState__Complete = 4,
		ESpawnMachineState__OnCooldown = 5,
	};


	// Enum /Script/FortniteGame.ESpawnMachineSubTextState
	enum ESpawnMachineSubTextState
	{
		ESpawnMachineSubTextState__NoCards = 0,
		ESpawnMachineSubTextState__VanInUse = 1,
		ESpawnMachineSubTextState__TeamOnOtherVan = 2,
		ESpawnMachineSubTextState__None = 3,
		ESpawnMachineSubTextState__HasResource = 4,
		ESpawnMachineSubTextState__NoResource = 5,
		ESpawnMachineSubTextState__NotEnabledForPlayer = 6,
	};


	// Enum /Script/FortniteGame.EFortItemCollectorState
	enum EFortItemCollectorState
	{
		EFortItemCollectorState__CanInteract = 0,
		EFortItemCollectorState__Active = 1,
		EFortItemCollectorState__Inactive = 2,
		EFortItemCollectorState__Captured = 3,
		EFortItemCollectorState__Invalid = 4,
	};


	// Enum /Script/FortniteGame.EFortItemCollectorBehavior
	enum EFortItemCollectorBehavior
	{
		EFortItemCollectorBehavior__FirstToGoal = 0,
		EFortItemCollectorBehavior__FreeForAll = 1,
	};


	// Enum /Script/FortniteGame.EFortItemCollectorTrackingType
	enum EFortItemCollectorTrackingType
	{
		EFortItemCollectorTrackingType__Player = 0,
		EFortItemCollectorTrackingType__Team = 1,
	};


	// Enum /Script/FortniteGame.ELayoutRequirementStatus
	enum ELayoutRequirementStatus
	{
		ELayoutRequirementStatus__Inactive_Invisible = 0,
		ELayoutRequirementStatus__Active_Invisible = 1,
		ELayoutRequirementStatus__Active_Visible = 2,
	};


	// Enum /Script/FortniteGame.EMusicTrackPlayback
	enum EMusicTrackPlayback
	{
		EMusicTrackPlayback__Disabled = 0,
		EMusicTrackPlayback__Enabled = 1,
	};


	// Enum /Script/FortniteGame.EPlayerCaptureKnobOptions
	enum EPlayerCaptureKnobOptions
	{
		EPlayerCaptureKnobOptions__Off = 0,
		EPlayerCaptureKnobOptions__EachPlayer = 1,
		EPlayerCaptureKnobOptions__OnePlayerPerTeam = 2,
		EPlayerCaptureKnobOptions__OwningTeam = 3,
	};


	// Enum /Script/FortniteGame.ECaptureAreaItemFilters
	enum ECaptureAreaItemFilters
	{
		ECaptureAreaItemFilters__None = 0,
		ECaptureAreaItemFilters__Both = 1,
		ECaptureAreaItemFilters__ForPeriodicScoring = 2,
		ECaptureAreaItemFilters__ToTakeControl = 3,
	};


	// Enum /Script/FortniteGame.ECreativeVendingMachineState
	enum ECreativeVendingMachineState
	{
		ECreativeVendingMachineState__DisplayingItem = 0,
		ECreativeVendingMachineState__AcceptingItem = 1,
		ECreativeVendingMachineState__AcceptedItem = 2,
		ECreativeVendingMachineState__RejectedItem = 3,
	};


	// Enum /Script/FortniteGame.EFortRiftSlotStatus
	enum EFortRiftSlotStatus
	{
		EFortRiftSlotStatus__Reserved = 0,
		EFortRiftSlotStatus__Occupied = 1,
		EFortRiftSlotStatus__Max_None = 2,
	};


	// Enum /Script/FortniteGame.EFortRiftSpawnSlotSelectionMode
	enum EFortRiftSpawnSlotSelectionMode
	{
		EFortRiftSpawnSlotSelectionMode__Random = 0,
		EFortRiftSpawnSlotSelectionMode__BestScore = 1,
	};


	// Enum /Script/FortniteGame.ERiftCosmeticState
	enum ERiftCosmeticState
	{
		ERiftCosmeticState__None = 0,
		ERiftCosmeticState__Intro = 1,
		ERiftCosmeticState__Idle = 2,
		ERiftCosmeticState__RampUp = 3,
		ERiftCosmeticState__ShouldDie = 4,
	};


	// Enum /Script/FortniteGame.EBuildingAnim
	enum EBuildingAnim
	{
		EBuildingAnim__EBA_None = 0,
		EBuildingAnim__EBA_Building = 1,
		EBuildingAnim__EBA_Breaking = 2,
		EBuildingAnim__EBA_Constructed = 3,
		EBuildingAnim__EBA_Destruction = 4,
		EBuildingAnim__EBA_Placement = 5,
		EBuildingAnim__EBA_DynamicLOD = 6,
		EBuildingAnim__EBA_DynamicShrink = 7,
	};


	// Enum /Script/FortniteGame.EBuildingAttachmentSlot
	enum EBuildingAttachmentSlot
	{
		SLOT_Floor = 0,
		SLOT_Wall = 1,
		SLOT_Ceiling = 2,
		SLOT_None = 3,
	};


	// Enum /Script/FortniteGame.EBuildingAttachmentSide
	enum EBuildingAttachmentSide
	{
		EBuildingAttachmentSide__Front = 0,
		EBuildingAttachmentSide__Back = 1,
		EBuildingAttachmentSide__Any = 2,
	};


	// Enum /Script/FortniteGame.EPlacementType
	enum EPlacementType
	{
		EPlacementType__Free = 0,
		EPlacementType__Grid = 1,
		EPlacementType__None = 2,
	};


	// Enum /Script/FortniteGame.ESavedSupportStatus
	enum ESavedSupportStatus
	{
		ESavedSupportStatus__UnknownState = 0,
		ESavedSupportStatus__Supported = 1,
		ESavedSupportStatus__UnSupported = 2,
	};


	// Enum /Script/FortniteGame.EStructuralSupportCheck
	enum EStructuralSupportCheck
	{
		EStructuralSupportCheck__Stable = 0,
		EStructuralSupportCheck__Unstable = 1,
		EStructuralSupportCheck__Max_None = 2,
	};


	// Enum /Script/FortniteGame.EFortDamageVisualsState
	enum EFortDamageVisualsState
	{
		EFortDamageVisualsState__UnDamaged = 0,
		EFortDamageVisualsState__DamagedAndAnimating = 1,
		EFortDamageVisualsState__DamagedAndStatic = 2,
	};


	// Enum /Script/FortniteGame.EBuildingNavObstacleType
	enum EBuildingNavObstacleType
	{
		EBuildingNavObstacleType__UnwalkableAll = 0,
		EBuildingNavObstacleType__UnwalkableHuskOnly = 1,
		EBuildingNavObstacleType__SmashWhenLowHeight = 2,
		EBuildingNavObstacleType__SmashOnlyLowHeight = 3,
		EBuildingNavObstacleType__SmashSmasherOnly = 4,
		EBuildingNavObstacleType__SmashAll = 5,
	};


	// Enum /Script/FortniteGame.EBuildingTintSource
	enum EBuildingTintSource
	{
		EBuildingTintSource__Disabled = 0,
		EBuildingTintSource__Custom = 1,
		EBuildingTintSource__Table = 2,
	};


	// Enum /Script/FortniteGame.EBuildingAttachmentType
	enum EBuildingAttachmentType
	{
		ATTACH_Floor = 0,
		ATTACH_Wall = 1,
		ATTACH_Ceiling = 2,
		ATTACH_Corner = 3,
		ATTACH_All = 4,
		ATTACH_WallThenFloor = 5,
		ATTACH_FloorAndStairs = 6,
		ATTACH_CeilingAndStairs = 7,
		ATTACH_StairsBothSides = 8,
		ATTACH_None = 9,
	};


	// Enum /Script/FortniteGame.EFortTextureDataType
	enum EFortTextureDataType
	{
		EFortTextureDataType__Any = 0,
		EFortTextureDataType__OuterWall = 1,
		EFortTextureDataType__InnerWall = 2,
		EFortTextureDataType__Corner = 3,
		EFortTextureDataType__Floor = 4,
		EFortTextureDataType__Ceiling = 5,
		EFortTextureDataType__Trim = 6,
		EFortTextureDataType__Roof = 7,
		EFortTextureDataType__Pillar = 8,
		EFortTextureDataType__Shingle = 9,
		EFortTextureDataType__None = A,
	};


	// Enum /Script/FortniteGame.EFortTextureDataSlot
	enum EFortTextureDataSlot
	{
		EFortTextureDataSlot__Primary = 0,
		EFortTextureDataSlot__Secondary = 1,
		EFortTextureDataSlot__Tertiary = 2,
		EFortTextureDataSlot__Fourth = 3,
		EFortTextureDataSlot__NumSlots = 4,
	};


	// Enum /Script/FortniteGame.EFortBuildingState
	enum EFortBuildingState
	{
		EFortBuildingState__Placement = 0,
		EFortBuildingState__EditMode = 1,
		EFortBuildingState__None = 2,
	};


	// Enum /Script/FortniteGame.EFortStructuralGridQueryResults
	enum EFortStructuralGridQueryResults
	{
		EFortStructuralGridQueryResults__CanAdd = 0,
		EFortStructuralGridQueryResults__ExistingActor = 1,
		EFortStructuralGridQueryResults__Obstructed = 2,
		EFortStructuralGridQueryResults__NoStructuralSupport = 3,
		EFortStructuralGridQueryResults__InvalidActor = 4,
		EFortStructuralGridQueryResults__ReachedLimit = 5,
		EFortStructuralGridQueryResults__NoEditPermission = 6,
		EFortStructuralGridQueryResults__PatternNotPermittedByLayoutRequirement = 7,
		EFortStructuralGridQueryResults__ResourceTypeNotPermittedByLayoutRequirement = 8,
		EFortStructuralGridQueryResults__BuildingAtRequirementsDisabled = 9,
		EFortStructuralGridQueryResults__BuildingOtherThanRequirementsDisabled = A,
	};


	// Enum /Script/FortniteGame.EFortDecoPlacementQueryResults
	enum EFortDecoPlacementQueryResults
	{
		EFortDecoPlacementQueryResults__CanAdd = 0,
		EFortDecoPlacementQueryResults__ExistingTrap = 1,
		EFortDecoPlacementQueryResults__ExistingObject = 2,
		EFortDecoPlacementQueryResults__Obstructed = 3,
		EFortDecoPlacementQueryResults__NoLocation = 4,
		EFortDecoPlacementQueryResults__WrongType = 5,
		EFortDecoPlacementQueryResults__WrongShape = 6,
		EFortDecoPlacementQueryResults__BeingModified = 7,
		EFortDecoPlacementQueryResults__WrongTeam = 8,
		EFortDecoPlacementQueryResults__BlueprintFailure = 9,
		EFortDecoPlacementQueryResults__AbilityFailure = A,
		EFortDecoPlacementQueryResults__RequiresPlayerBuildableActor = B,
		EFortDecoPlacementQueryResults__NoEditPermission = C,
		EFortDecoPlacementQueryResults__WrongZone = D,
	};


	// Enum /Script/FortniteGame.EFortConnectivityCubeFace
	enum EFortConnectivityCubeFace
	{
		EFortConnectivityCubeFace__Front = 0,
		EFortConnectivityCubeFace__Left = 1,
		EFortConnectivityCubeFace__Back = 2,
		EFortConnectivityCubeFace__Right = 3,
		EFortConnectivityCubeFace__Upper = 4,
		EFortConnectivityCubeFace__Lower = 5,
	};


	// Enum /Script/FortniteGame.EFortBounceType
	enum EFortBounceType
	{
		EFortBounceType__Hit = 0,
		EFortBounceType__Interact = 1,
		EFortBounceType__EditPlaced = 2,
	};


	// Enum /Script/FortniteGame.EFortBuildingDestroyedReason
	enum EFortBuildingDestroyedReason
	{
		EFortBuildingDestroyedReason__Unknown = 0,
		EFortBuildingDestroyedReason__WeaponDamage = 1,
		EFortBuildingDestroyedReason__LostSupport = 2,
		EFortBuildingDestroyedReason__Edit = 3,
		EFortBuildingDestroyedReason__FireDirect = 4,
		EFortBuildingDestroyedReason__FireIndirect = 5,
	};


	// Enum /Script/FortniteGame.EDoorOpenStyle
	enum EDoorOpenStyle
	{
		EDoorOpenStyle__Open = 0,
		EDoorOpenStyle__SlamOpen = 1,
		EDoorOpenStyle__SmashOpen = 2,
		EDoorOpenStyle__Close = 3,
	};


	// Enum /Script/FortniteGame.EDeployableBaseBoxType
	enum EDeployableBaseBoxType
	{
		EDeployableBaseBoxType__BuildSpace = 0,
		EDeployableBaseBoxType__SaveSpace = 1,
		EDeployableBaseBoxType__PlotSpace = 2,
		EDeployableBaseBoxType__NumSpaceTypes = 3,
	};


	// Enum /Script/FortniteGame.EDeployableBaseBuildingState
	enum EDeployableBaseBuildingState
	{
		EDeployableBaseBuildingState__Empty = 0,
		EDeployableBaseBuildingState__Built = 1,
		EDeployableBaseBuildingState__Unoccupied = 2,
		EDeployableBaseBuildingState__WaitingToBuild = 3,
		EDeployableBaseBuildingState__Building = 4,
		EDeployableBaseBuildingState__WaitingToDestroy = 5,
		EDeployableBaseBuildingState__Destroying = 6,
		EDeployableBaseBuildingState__WaitingToReset = 7,
		EDeployableBaseBuildingState__Resetting = 8,
	};


	// Enum /Script/FortniteGame.EDeployableBaseConstructionStatus
	enum EDeployableBaseConstructionStatus
	{
		EDeployableBaseConstructionStatus__Constructing = 0,
		EDeployableBaseConstructionStatus__Destroying = 1,
		EDeployableBaseConstructionStatus__Finished = 2,
	};


	// Enum /Script/FortniteGame.FDynamicBuildOrder
	enum FDynamicBuildOrder
	{
		FDynamicBuildOrder__X = 0,
		FDynamicBuildOrder__Y = 1,
		FDynamicBuildOrder__Z = 2,
		FDynamicBuildOrder__None = 3,
	};


	// Enum /Script/FortniteGame.EBinaryToggleValues
	enum EBinaryToggleValues
	{
		BTV_Active = 0,
		BTV_Inactive = 1,
		BTV_Either = 2,
	};


	// Enum /Script/FortniteGame.EFloorPatternType
	enum EFloorPatternType
	{
		EFloorPatternType__None = 0,
		EFloorPatternType__DefaultPiece = 1,
		EFloorPatternType__LPiece = 2,
		EFloorPatternType__HalfPiece = 3,
		EFloorPatternType__DiagonalPiece = 4,
		EFloorPatternType__CornerPiece = 5,
	};


	// Enum /Script/FortniteGame.EAuxIndicatorStates
	enum EAuxIndicatorStates
	{
		AIS_GuidingArrow = 0,
		AIS_ConfirmedArrow = 1,
		AIS_Inactive = 2,
		AIS_Active = 3,
	};


	// Enum /Script/FortniteGame.EGravityGunHolderState
	enum EGravityGunHolderState
	{
		EGravityGunHolderState__Invalid = 0,
		EGravityGunHolderState__Unrooting = 1,
		EGravityGunHolderState__Catching = 2,
		EGravityGunHolderState__Holding = 3,
		EGravityGunHolderState__Detached = 4,
	};


	// Enum /Script/FortniteGame.EGravityGunHolderObjectType
	enum EGravityGunHolderObjectType
	{
		EGravityGunHolderObjectType__Invalid = 0,
		EGravityGunHolderObjectType__PhysicsObject = 1,
		EGravityGunHolderObjectType__Vehicle = 2,
		EGravityGunHolderObjectType__Projectile = 3,
		EGravityGunHolderObjectType__PickUp = 4,
	};


	// Enum /Script/FortniteGame.EGravityGunHolderRotationAxis
	enum EGravityGunHolderRotationAxis
	{
		EGravityGunHolderRotationAxis__XZ = 0,
		EGravityGunHolderRotationAxis__YZ = 1,
		EGravityGunHolderRotationAxis__ZX = 2,
	};


	// Enum /Script/FortniteGame.EVolumeShape
	enum EVolumeShape
	{
		EVolumeShape__Sphere = 0,
		EVolumeShape__Box = 1,
	};


	// Enum /Script/FortniteGame.EActorFilterPolicy
	enum EActorFilterPolicy
	{
		EActorFilterPolicy__POL_FilterActorsWithoutVolumeReference = 0,
		EActorFilterPolicy__POL_IgnorePreviewActors = 1,
	};


	// Enum /Script/FortniteGame.EVolumeValidityResult
	enum EVolumeValidityResult
	{
		EVolumeValidityResult__Valid = 0,
		EVolumeValidityResult__Invalid = 1,
	};


	// Enum /Script/FortniteGame.ESimpleDestructiblePropCollisionFlags
	enum ESimpleDestructiblePropCollisionFlags
	{
		ESimpleDestructiblePropCollisionFlags__Disabled = 0,
		ESimpleDestructiblePropCollisionFlags__ClientEnabled = 1,
		ESimpleDestructiblePropCollisionFlags__ServerEnabled = 2,
	};


	// Enum /Script/FortniteGame.EGridScale
	enum EGridScale
	{
		EGridScale__OneHundredPercent = 0,
		EGridScale__FiftyPercent = 1,
		EGridScale__TwentyFivePercent = 2,
	};


	// Enum /Script/FortniteGame.EStructuralWallPosition
	enum EStructuralWallPosition
	{
		EStructuralWallPosition__Left = 0,
		EStructuralWallPosition__Right = 1,
		EStructuralWallPosition__Front = 2,
		EStructuralWallPosition__Back = 3,
	};


	// Enum /Script/FortniteGame.EStructuralFloorPosition
	enum EStructuralFloorPosition
	{
		EStructuralFloorPosition__Top = 0,
		EStructuralFloorPosition__Bottom = 1,
	};


	// Enum /Script/FortniteGame.ERecoilType
	enum ERecoilType
	{
		ERecoilType__Fixed = 0,
		ERecoilType__RandomNegativeOneToOne = 1,
		ERecoilType__RandomZeroToOne = 2,
	};


	// Enum /Script/FortniteGame.EModifierPriority
	enum EModifierPriority
	{
		EModifierPriority__Min = 0,
		EModifierPriority__VeryLow = 1,
		EModifierPriority__Low = 2,
		EModifierPriority__Default = 3,
		EModifierPriority__High = 4,
		EModifierPriority__VeryHigh = 5,
		EModifierPriority__Max = 6,
	};


	// Enum /Script/FortniteGame.EModifierInheritanceType
	enum EModifierInheritanceType
	{
		EModifierInheritanceType__RelativeMotion = 0,
		EModifierInheritanceType__AbsoluteMotion = 1,
		EModifierInheritanceType__RawAnimatedMotion = 2,
	};


	// Enum /Script/FortniteGame.ESineWaveTarget
	enum ESineWaveTarget
	{
		ESineWaveTarget__TranslationX = 0,
		ESineWaveTarget__TranslationY = 1,
		ESineWaveTarget__TranslationZ = 2,
		ESineWaveTarget__RotationPitch = 3,
		ESineWaveTarget__RotationRoll = 4,
		ESineWaveTarget__RotationYaw = 5,
	};


	// Enum /Script/FortniteGame.EFortUICameraFrameTargetBoundingBehavior
	enum EFortUICameraFrameTargetBoundingBehavior
	{
		EFortUICameraFrameTargetBoundingBehavior__NoBounds = 0,
		EFortUICameraFrameTargetBoundingBehavior__AllBounds = 1,
		EFortUICameraFrameTargetBoundingBehavior__TopBoundOnly = 2,
	};


	// Enum /Script/FortniteGame.EBlendState
	enum EBlendState
	{
		EBlendState__Out = 0,
		EBlendState__BlendingIn = 1,
		EBlendState__In = 2,
		EBlendState__BlendingOut = 3,
	};


	// Enum /Script/FortniteGame.EFortCameraAxisConstraintRule
	enum EFortCameraAxisConstraintRule
	{
		EFortCameraAxisConstraintRule__None = 0,
		EFortCameraAxisConstraintRule__LockedTo = 1,
		EFortCameraAxisConstraintRule__LessThan = 2,
		EFortCameraAxisConstraintRule__GreaterThan = 3,
	};


	// Enum /Script/FortniteGame.ECameraOrigin
	enum ECameraOrigin
	{
		ECameraOrigin__ViewTargetTransform = 0,
		ECameraOrigin__BoneTransform = 1,
	};


	// Enum /Script/FortniteGame.EMotionTarget
	enum EMotionTarget
	{
		EMotionTarget__Camera = 0,
		EMotionTarget__AimedObject = 1,
		EMotionTarget__Count = 2,
	};


	// Enum /Script/FortniteGame.EChallengeBundleQuestUnlockType
	enum EChallengeBundleQuestUnlockType
	{
		EChallengeBundleQuestUnlockType__Manually = 0,
		EChallengeBundleQuestUnlockType__GrantWithBundle = 1,
		EChallengeBundleQuestUnlockType__RequiresBattlePass = 2,
		EChallengeBundleQuestUnlockType__DaysFromEventStart = 3,
		EChallengeBundleQuestUnlockType__ChallengesCompletedToUnlock = 4,
		EChallengeBundleQuestUnlockType__BundleLevelup = 5,
	};


	// Enum /Script/FortniteGame.EChallengeBundleQuestExpireType
	enum EChallengeBundleQuestExpireType
	{
		EChallengeBundleQuestExpireType__WithSchedule = 0,
		EChallengeBundleQuestExpireType__DaysFromEventStart = 1,
	};


	// Enum /Script/FortniteGame.EGoalCardOrientation
	enum EGoalCardOrientation
	{
		EGoalCardOrientation__Vertical = 0,
		EGoalCardOrientation__Horizontal = 1,
	};


	// Enum /Script/FortniteGame.EChallengeScheduleUnlockType
	enum EChallengeScheduleUnlockType
	{
		EChallengeScheduleUnlockType__Manually = 0,
		EChallengeScheduleUnlockType__OnScheduleGranted = 1,
		EChallengeScheduleUnlockType__DaysSinceEventStart = 2,
	};


	// Enum /Script/FortniteGame.EBundleStyleColor
	enum EBundleStyleColor
	{
		EBundleStyleColor__Primary = 0,
		EBundleStyleColor__Secondary = 1,
		EBundleStyleColor__Accent = 2,
	};


	// Enum /Script/FortniteGame.ECreativeBotIslandIterationType
	enum ECreativeBotIslandIterationType
	{
		ECreativeBotIslandIterationType__CBI_NONE = 0,
		ECreativeBotIslandIterationType__CBI_Mnemonics = 1,
		ECreativeBotIslandIterationType__CBI_User = 2,
	};


	// Enum /Script/FortniteGame.ECreativeBotIslandLoadingState
	enum ECreativeBotIslandLoadingState
	{
		ECreativeBotIslandLoadingState__ILS_NONE = 0,
		ECreativeBotIslandLoadingState__ILS_LoadNotStarted = 1,
		ECreativeBotIslandLoadingState__ILS_GrantPlotItem = 2,
		ECreativeBotIslandLoadingState__ILS_WaitingUserPlotReady = 3,
		ECreativeBotIslandLoadingState__ILS_LoadInProgress = 4,
		ECreativeBotIslandLoadingState__ILS_LoadComplete = 5,
		ECreativeBotIslandLoadingState__ILS_Teleporting = 6,
		ECreativeBotIslandLoadingState__ILS_Returning = 7,
		ECreativeBotIslandLoadingState__ILS_Items = 8,
	};


	// Enum /Script/FortniteGame.ECreativeBotItemTestingState
	enum ECreativeBotItemTestingState
	{
		ECreativeBotItemTestingState__ITS_NONE = 0,
		ECreativeBotItemTestingState__ITS_Teleporting = 1,
		ECreativeBotItemTestingState__ITS_Landing = 2,
		ECreativeBotItemTestingState__ITS_Grant = 3,
		ECreativeBotItemTestingState__ITS_Equip = 4,
		ECreativeBotItemTestingState__ITS_Place = 5,
		ECreativeBotItemTestingState__ITS_Cleanup = 6,
	};


	// Enum /Script/FortniteGame.EPickupDeleteType
	enum EPickupDeleteType
	{
		EPickupDeleteType__DeleteAllTrackedPickups = 0,
		EPickupDeleteType__DeleteAllPickupsWithinBounds = 1,
	};


	// Enum /Script/FortniteGame.EInteractProgressDecay
	enum EInteractProgressDecay
	{
		EInteractProgressDecay__EInteractDecay_Multi = 0,
		EInteractProgressDecay__EInteractDecay_Reset = 1,
		EInteractProgressDecay__EInteractDecay_Pause = 2,
		EInteractProgressDecay__EInteractDecay_BR = 3,
	};


	// Enum /Script/FortniteGame.ECollectionsComponentValidityResult
	enum ECollectionsComponentValidityResult
	{
		ECollectionsComponentValidityResult__IsValid = 0,
		ECollectionsComponentValidityResult__IsNotValid = 1,
	};


	// Enum /Script/FortniteGame.EContextualContext
	enum EContextualContext
	{
		EContextualContext__DoNotShow = 0,
		EContextualContext__BusPhase = 1,
		EContextualContext__Skydiving = 2,
		EContextualContext__Gameplay = 3,
	};


	// Enum /Script/FortniteGame.EContextualEvent
	enum EContextualEvent
	{
		EContextualEvent__Generic = 0,
		EContextualEvent__Location = 1,
		EContextualEvent__InventoryAdded = 2,
		EContextualEvent__InventoryRemoved = 3,
		EContextualEvent__StartSkydiving = 4,
		EContextualEvent__NewQuests = 5,
	};


	// Enum /Script/FortniteGame.EIndicatorStateImage
	enum EIndicatorStateImage
	{
		EIndicatorStateImage__FIRST_FRIENDLY_STATE = 0,
		EIndicatorStateImage__Default = 0,
		EIndicatorStateImage__InCombat = 1,
		EIndicatorStateImage__DBNO = 2,
		EIndicatorStateImage__BeingRevived = 3,
		EIndicatorStateImage__Dead = 4,
		EIndicatorStateImage__LAST_FRIENDLY_STATE = 4,
		EIndicatorStateImage__FIRST_CHAT_MESSAGE = 5,
		EIndicatorStateImage__NeedAmmoHeavy = 5,
		EIndicatorStateImage__NeedAmmoLight = 6,
		EIndicatorStateImage__NeedAmmoMedium = 7,
		EIndicatorStateImage__NeedAmmoShells = 8,
		EIndicatorStateImage__NeedAmmoRocket = 9,
		EIndicatorStateImage__ChatBubble = A,
		EIndicatorStateImage__EnemySpotted = B,
		EIndicatorStateImage__NeedBandages = C,
		EIndicatorStateImage__NeedMaterials = D,
		EIndicatorStateImage__NeedShields = E,
		EIndicatorStateImage__NeedWeapon = F,
		EIndicatorStateImage__LAST_CHAT_MESSAGE = F,
		EIndicatorStateImage__FIRST_MATE_STATE = 10,
		EIndicatorStateImage__Squadmate = 10,
		EIndicatorStateImage__Teammate = 11,
		EIndicatorStateImage__LAST_MATE_STATE = 11,
		EIndicatorStateImage__FIRST_ENEMY_STATE = 12,
		EIndicatorStateImage__Enemy = 12,
		EIndicatorStateImage__LAST_ENEMY_STATE = 12,
		EIndicatorStateImage__FIRST_NPC_STATE = 13,
		EIndicatorStateImage__FriendlyNPC = 13,
		EIndicatorStateImage__EnemyNPC = 14,
		EIndicatorStateImage__EliteFriendlyNPC = 15,
		EIndicatorStateImage__EliteEnemyNPC = 16,
		EIndicatorStateImage__LAST_NPC_STATE = 16,
		EIndicatorStateImage__FIRST_WORLDITEM_STATE = 17,
		EIndicatorStateImage__Interactable = 17,
		EIndicatorStateImage__InteractableLarge = 18,
		EIndicatorStateImage__GameplayItem = 19,
		EIndicatorStateImage__TreasureChest = 1A,
		EIndicatorStateImage__LAST_WORLDITEM_STATE = 1A,
		EIndicatorStateImage__FIRST_HARDCORE_STATE = 1B,
		EIndicatorStateImage__HardCoreBeacon = 1B,
		EIndicatorStateImage__LAST_HARDCORE_STATE = 1B,
		EIndicatorStateImage__LAST_STATE = 1B,
		EIndicatorStateImage__None = 1C,
	};


	// Enum /Script/FortniteGame.EShareActorWith
	enum EShareActorWith
	{
		EShareActorWith__None = 0,
		EShareActorWith__SquadOnTeam = 1,
		EShareActorWith__AllTeam = 2,
	};


	// Enum /Script/FortniteGame.EShareActorWithMask
	enum EShareActorWithMask
	{
		EShareActorWithMask__None = 0,
		EShareActorWithMask__SquadOnTeam = 1,
		EShareActorWithMask__AllTeam = 2,
		EShareActorWithMask__Target = 4,
	};


	// Enum /Script/FortniteGame.EInteractionOrigin
	enum EInteractionOrigin
	{
		EInteractionOrigin__Camera = 0,
		EInteractionOrigin__CharacterAdjustedCamera = 1,
		EInteractionOrigin__Character = 2,
	};


	// Enum /Script/FortniteGame.EMinigameActivityComponentValidityResult
	enum EMinigameActivityComponentValidityResult
	{
		EMinigameActivityComponentValidityResult__Valid = 0,
		EMinigameActivityComponentValidityResult__IsNotValid = 1,
	};


	// Enum /Script/FortniteGame.EMinigameActivityStat
	enum EMinigameActivityStat
	{
		EMinigameActivityStat__Score = 0,
		EMinigameActivityStat__Time = 1,
		EMinigameActivityStat__Distance = 2,
		EMinigameActivityStat__RaceProgress = 3,
		EMinigameActivityStat__CurrentLap = 4,
		EMinigameActivityStat__MaxLaps = 5,
		EMinigameActivityStat__BestLapTime = 6,
		EMinigameActivityStat__COUNT = 7,
	};


	// Enum /Script/FortniteGame.EAllowedPinnedQuestTypes
	enum EAllowedPinnedQuestTypes
	{
		EAllowedPinnedQuestTypes__AllAllowed = 0,
		EAllowedPinnedQuestTypes__OnlyUserSelected = 1,
		EAllowedPinnedQuestTypes__OnlyConciergeSuggested = 2,
	};


	// Enum /Script/FortniteGame.EFortEntitlementState
	enum EFortEntitlementState
	{
		EFortEntitlementState__NotRequested = 0,
		EFortEntitlementState__Requesting = 1,
		EFortEntitlementState__RequestError = 2,
		EFortEntitlementState__NotGranted = 3,
		EFortEntitlementState__Granted = 4,
		EFortEntitlementState__DevGranted = 5,
	};


	// Enum /Script/FortniteGame.EFortFootstepPlayerRelation
	enum EFortFootstepPlayerRelation
	{
		EFortFootstepPlayerRelation__LocalPlayer = 0,
		EFortFootstepPlayerRelation__Friendly = 1,
		EFortFootstepPlayerRelation__Enemy = 2,
		EFortFootstepPlayerRelation__Max_None = 3,
	};


	// Enum /Script/FortniteGame.EFortFootstepStanceType
	enum EFortFootstepStanceType
	{
		EFortFootstepStanceType__Walk = 0,
		EFortFootstepStanceType__Run = 1,
		EFortFootstepStanceType__Sprint = 2,
		EFortFootstepStanceType__CrouchWalk = 3,
		EFortFootstepStanceType__CrouchRun = 4,
		EFortFootstepStanceType__Max_None = 5,
	};


	// Enum /Script/FortniteGame.EFortFootstepSurface
	enum EFortFootstepSurface
	{
		EFortFootstepSurface__Dirt = 0,
		EFortFootstepSurface__Grass = 1,
		EFortFootstepSurface__Metal = 2,
		EFortFootstepSurface__Sand = 3,
		EFortFootstepSurface__Snow = 4,
		EFortFootstepSurface__Ice = 5,
		EFortFootstepSurface__Stone = 6,
		EFortFootstepSurface__Water = 7,
		EFortFootstepSurface__Wood = 8,
		EFortFootstepSurface__Chrome = 9,
		EFortFootstepSurface__ChromePetrified = A,
		EFortFootstepSurface__Mud = B,
		EFortFootstepSurface__WetConcrete = C,
		EFortFootstepSurface__TreeCanopy = D,
		EFortFootstepSurface__Max_None = E,
	};


	// Enum /Script/FortniteGame.EUnableToLoadReason
	enum EUnableToLoadReason
	{
		EUnableToLoadReason__None = 0,
		EUnableToLoadReason__PackageDoesNotExist = 1,
		EUnableToLoadReason__EndPlay = 2,
		EUnableToLoadReason__UnableToUnload = 3,
	};


	// Enum /Script/FortniteGame.EUnableToUnloadReason
	enum EUnableToUnloadReason
	{
		EUnableToUnloadReason__None = 0,
		EUnableToUnloadReason__EndPlay = 1,
	};


	// Enum /Script/FortniteGame.FLightOverrideLevel
	enum FLightOverrideLevel
	{
		FLightOverrideLevel__Default = 0,
		FLightOverrideLevel__High = 1,
		FLightOverrideLevel__Count = 2,
	};


	// Enum /Script/FortniteGame.EAIPingCommandType
	enum EAIPingCommandType
	{
		EAIPingCommandType__None = 0,
		EAIPingCommandType__PingGoTo = 1,
		EAIPingCommandType__PingHoldPosition = 2,
		EAIPingCommandType__PingBackToMe = 3,
	};


	// Enum /Script/FortniteGame.EUpdateCustomDepthOptimDirtyFlags
	enum EUpdateCustomDepthOptimDirtyFlags
	{
		EUpdateCustomDepthOptimDirtyFlags__None = 0,
		EUpdateCustomDepthOptimDirtyFlags__CharacterParts = 1,
		EUpdateCustomDepthOptimDirtyFlags__Weapon = 2,
		EUpdateCustomDepthOptimDirtyFlags__PossessedProp = 4,
	};


	// Enum /Script/FortniteGame.EFortPawnComponent_DisguiseRevealReason
	enum EFortPawnComponent_DisguiseRevealReason
	{
		EFortPawnComponent_DisguiseRevealReason__ByDamage = 0,
		EFortPawnComponent_DisguiseRevealReason__ByConversation = 1,
		EFortPawnComponent_DisguiseRevealReason__ByProximity = 2,
		EFortPawnComponent_DisguiseRevealReason__Unknown = 3,
	};


	// Enum /Script/FortniteGame.ECustomFeedFilterParticipantNames
	enum ECustomFeedFilterParticipantNames
	{
		ECustomFeedFilterParticipantNames__NoFiltering = 0,
		ECustomFeedFilterParticipantNames__AllPlayers = 1,
	};


	// Enum /Script/FortniteGame.EFortSnapOnSurfaceBehavior
	enum EFortSnapOnSurfaceBehavior
	{
		EFortSnapOnSurfaceBehavior__None = 0,
		EFortSnapOnSurfaceBehavior__Landscape = 1,
		EFortSnapOnSurfaceBehavior__Navmesh = 2,
		EFortSnapOnSurfaceBehavior__Trace = 3,
		EFortSnapOnSurfaceBehavior__AttachTo = 4,
		EFortSnapOnSurfaceBehavior__SphereTrace = 5,
	};


	// Enum /Script/FortniteGame.EFortRecoilCurveType
	enum EFortRecoilCurveType
	{
		EFortRecoilCurveType__WithTime = 0,
		EFortRecoilCurveType__WithOverheat = 1,
	};


	// Enum /Script/FortniteGame.ESpatialSceneQueryShape
	enum ESpatialSceneQueryShape
	{
		ESpatialSceneQueryShape__Sphere = 0,
		ESpatialSceneQueryShape__Box = 1,
		ESpatialSceneQueryShape__Capsule = 2,
		ESpatialSceneQueryShape__VolumeBounds = 3,
	};


	// Enum /Script/FortniteGame.EConversationEventQueryMethod
	enum EConversationEventQueryMethod
	{
		EConversationEventQueryMethod__CheckAgainstCurrentConversationParticipant = 0,
		EConversationEventQueryMethod__CheckAgainstConversationEntryTag = 1,
	};


	// Enum /Script/FortniteGame.EQuestSpecificationMethod
	enum EQuestSpecificationMethod
	{
		EQuestSpecificationMethod__Static = 0,
		EQuestSpecificationMethod__Slotted = 1,
		EQuestSpecificationMethod__ServiceProvider = 2,
	};


	// Enum /Script/FortniteGame.EFortSentenceAudioPreference
	enum EFortSentenceAudioPreference
	{
		EFortSentenceAudioPreference__AudioAsset = 0,
		EFortSentenceAudioPreference__FeedbackBank = 1,
	};


	// Enum /Script/FortniteGame.EContextRequirementMatchPolicy
	enum EContextRequirementMatchPolicy
	{
		EContextRequirementMatchPolicy__RequireAll = 0,
		EContextRequirementMatchPolicy__RequireAny = 1,
	};


	// Enum /Script/FortniteGame.EControllerRequirementQuestPolicy
	enum EControllerRequirementQuestPolicy
	{
		EControllerRequirementQuestPolicy__Single = 0,
		EControllerRequirementQuestPolicy__AnyOf = 1,
		EControllerRequirementQuestPolicy__AllOf = 2,
	};


	// Enum /Script/FortniteGame.EPreventAbilityUseReason
	enum EPreventAbilityUseReason
	{
		EPreventAbilityUseReason__CannotAfford = 0,
		EPreventAbilityUseReason__AlreadyActive = 1,
		EPreventAbilityUseReason__AbilityActivationBlocked = 2,
		EPreventAbilityUseReason__None = 3,
		EPreventAbilityUseReason__Count = 4,
	};


	// Enum /Script/FortniteGame.EDataDrivenEffectRecipient
	enum EDataDrivenEffectRecipient
	{
		EDataDrivenEffectRecipient__Player = 0,
		EDataDrivenEffectRecipient__NPC = 1,
	};


	// Enum /Script/FortniteGame.ERequirementMatchPolicy
	enum ERequirementMatchPolicy
	{
		ERequirementMatchPolicy__RequireAll = 0,
		ERequirementMatchPolicy__RequireAny = 1,
	};


	// Enum /Script/FortniteGame.EPreventUseStormCircleServiceReason
	enum EPreventUseStormCircleServiceReason
	{
		EPreventUseStormCircleServiceReason__CannotAfford = 0,
		EPreventUseStormCircleServiceReason__AlreadyActive = 1,
		EPreventUseStormCircleServiceReason__StormLocationsAlreadyRevealed = 2,
		EPreventUseStormCircleServiceReason__None = 3,
	};


	// Enum /Script/FortniteGame.ESupplyDropSpawnLocationPolicy
	enum ESupplyDropSpawnLocationPolicy
	{
		ESupplyDropSpawnLocationPolicy__RadiusAroundLocation = 0,
		ESupplyDropSpawnLocationPolicy__SafeZone = 1,
	};


	// Enum /Script/FortniteGame.EPreventSupplyDropUseReason
	enum EPreventSupplyDropUseReason
	{
		EPreventSupplyDropUseReason__CannotAfford = 0,
		EPreventSupplyDropUseReason__OutOfStock = 1,
		EPreventSupplyDropUseReason__None = 2,
		EPreventSupplyDropUseReason__Count = 3,
	};


	// Enum /Script/FortniteGame.EFortDebugInfoCategory
	enum EFortDebugInfoCategory
	{
		EFortDebugInfoCategory__Info = 0,
		EFortDebugInfoCategory__Positive = 1,
		EFortDebugInfoCategory__Negative = 2,
		EFortDebugInfoCategory__Warning = 3,
		EFortDebugInfoCategory__Deemphasize = 4,
	};


	// Enum /Script/FortniteGame.ENPCServiceSupportState
	enum ENPCServiceSupportState
	{
		ENPCServiceSupportState__ServiceNotSupported = 0,
		ENPCServiceSupportState__ServiceConditionallyLocked = 1,
		ENPCServiceSupportState__ServiceSupported = 2,
	};


	// Enum /Script/FortniteGame.EThresholdRequirement
	enum EThresholdRequirement
	{
		EThresholdRequirement__LessThan = 0,
		EThresholdRequirement__LessThanOrEqual = 1,
		EThresholdRequirement__Equal = 2,
		EThresholdRequirement__GreaterThan = 3,
		EThresholdRequirement__GreaterThanOrEqual = 4,
	};


	// Enum /Script/FortniteGame.EFortEncryptionStatus
	enum EFortEncryptionStatus
	{
		EFortEncryptionStatus__ENCRYPTED = 0,
		EFortEncryptionStatus__RELEASED = 1,
	};


	// Enum /Script/FortniteGame.EFortContentEncryptionCollectionGrouping
	enum EFortContentEncryptionCollectionGrouping
	{
		EFortContentEncryptionCollectionGrouping__Individual = 0,
		EFortContentEncryptionCollectionGrouping__Combined = 1,
		EFortContentEncryptionCollectionGrouping__ByCosmeticSet = 2,
	};


	// Enum /Script/FortniteGame.EFortContentEncryptionAllowedReferences
	enum EFortContentEncryptionAllowedReferences
	{
		EFortContentEncryptionAllowedReferences__None = 0,
		EFortContentEncryptionAllowedReferences__SoftOnly = 1,
		EFortContentEncryptionAllowedReferences__Any = 2,
	};


	// Enum /Script/FortniteGame.EFortContentEncryptionGroupType
	enum EFortContentEncryptionGroupType
	{
		EFortContentEncryptionGroupType__Root = 0,
		EFortContentEncryptionGroupType__Explicit = 1,
	};


	// Enum /Script/FortniteGame.EFortBadMatchTriggerOperation
	enum EFortBadMatchTriggerOperation
	{
		EFortBadMatchTriggerOperation__LessThan = 0,
		EFortBadMatchTriggerOperation__LessThanOrEqual = 1,
		EFortBadMatchTriggerOperation__Equal = 2,
		EFortBadMatchTriggerOperation__GreaterThan = 3,
		EFortBadMatchTriggerOperation__GreaterThanOrEqual = 4,
	};


	// Enum /Script/FortniteGame.EFortBadMatchTriggerType
	enum EFortBadMatchTriggerType
	{
		EFortBadMatchTriggerType__Unspecified = 0,
		EFortBadMatchTriggerType__SmallTeam = 1,
		EFortBadMatchTriggerType__LargeTeam = 2,
		EFortBadMatchTriggerType__LetoTeam = 3,
	};


	// Enum /Script/FortniteGame.EQualitativePerfMetricIndex
	enum EQualitativePerfMetricIndex
	{
		EQualitativePerfMetricIndex__Excellent = 0,
		EQualitativePerfMetricIndex__Good = 1,
		EQualitativePerfMetricIndex__Average = 2,
		EQualitativePerfMetricIndex__Poor = 3,
		EQualitativePerfMetricIndex__Terrible = 4,
		EQualitativePerfMetricIndex__Count = 5,
	};


	// Enum /Script/FortniteGame.EQualitativePerfMetric
	enum EQualitativePerfMetric
	{
		EQualitativePerfMetric__MVP = 0,
		EQualitativePerfMetric__HitchTimePercent = 1,
		EQualitativePerfMetric__LevelStreamingDistanceP01 = 2,
		EQualitativePerfMetric__DynamicResolution = 3,
		EQualitativePerfMetric__PercentFramesOverBadPingThreshold = 4,
		EQualitativePerfMetric__FrameTime = 5,
		EQualitativePerfMetric__MemoryRisk = 6,
		EQualitativePerfMetric__MapLoadTime = 7,
		EQualitativePerfMetric__BootTime = 8,
		EQualitativePerfMetric__Count = 9,
	};


	// Enum /Script/FortniteGame.ECosmeticStepOrdinality
	enum ECosmeticStepOrdinality
	{
		ECosmeticStepOrdinality__PreStep = 0,
		ECosmeticStepOrdinality__Default = 1,
		ECosmeticStepOrdinality__PostStep = 2,
		ECosmeticStepOrdinality__NumPhases = 3,
	};


	// Enum /Script/FortniteGame.EFortLockerAnalyticAction
	enum EFortLockerAnalyticAction
	{
		EFortLockerAnalyticAction__Locker_SaveChanges = 0,
		EFortLockerAnalyticAction__Locker_CreateNew = 1,
		EFortLockerAnalyticAction__Locker_Clear = 2,
		EFortLockerAnalyticAction__Locker_Revert = 3,
		EFortLockerAnalyticAction__Locker_Randomize = 4,
		EFortLockerAnalyticAction__Preset_Delete = 5,
		EFortLockerAnalyticAction__Preset_ChangeActive = 6,
		EFortLockerAnalyticAction__Preset_ChangeName = 7,
		EFortLockerAnalyticAction__InGame_Warmup = 8,
	};


	// Enum /Script/FortniteGame.EFCRP_LoopBehavior
	enum EFCRP_LoopBehavior
	{
		EFCRP_LoopBehavior__StopAtEnd = 0,
		EFCRP_LoopBehavior__PingPong = 1,
		EFCRP_LoopBehavior__WrapAround = 2,
	};


	// Enum /Script/FortniteGame.EFortCosmeticRestrictionTagType
	enum EFortCosmeticRestrictionTagType
	{
		EFortCosmeticRestrictionTagType__ItemTags = 0,
		EFortCosmeticRestrictionTagType__MetaTags = 1,
		EFortCosmeticRestrictionTagType__Both = 2,
	};


	// Enum /Script/FortniteGame.EFortCosmeticItemBlockedTextFlags
	enum EFortCosmeticItemBlockedTextFlags
	{
		EFortCosmeticItemBlockedTextFlags__None = 0,
		EFortCosmeticItemBlockedTextFlags__ItemShop = 1,
	};


	// Enum /Script/FortniteGame.ECosmeticBudgetingMode
	enum ECosmeticBudgetingMode
	{
		ECosmeticBudgetingMode__Direct = 0,
		ECosmeticBudgetingMode__IndirectOrNone = 1,
	};


	// Enum /Script/FortniteGame.EVariantUnlockType
	enum EVariantUnlockType
	{
		EVariantUnlockType__UnlockAll = 0,
		EVariantUnlockType__ExclusiveChoice = 1,
	};


	// Enum /Script/FortniteGame.EMontageSelectionPredicateType
	enum EMontageSelectionPredicateType
	{
		EMontageSelectionPredicateType__NotSet = 0,
		EMontageSelectionPredicateType__MetaTags = 1,
		EMontageSelectionPredicateType__CharacterParts = 2,
		EMontageSelectionPredicateType__ActiveSwapPresence = 3,
		EMontageSelectionPredicateType__Invalid = 4,
	};


	// Enum /Script/FortniteGame.EEventTokenType
	enum EEventTokenType
	{
		EEventTokenType__Invite = 0,
		EEventTokenType__Creation = 1,
	};


	// Enum /Script/FortniteGame.ELayeredAudioTriggerDirection
	enum ELayeredAudioTriggerDirection
	{
		ELayeredAudioTriggerDirection__AnyDirection = 0,
		ELayeredAudioTriggerDirection__Forwards = 1,
		ELayeredAudioTriggerDirection__Sideways = 2,
		ELayeredAudioTriggerDirection__Backwards = 3,
		ELayeredAudioTriggerDirection__Count = 4,
	};


	// Enum /Script/FortniteGame.EGliderTrailActivationMode
	enum EGliderTrailActivationMode
	{
		EGliderTrailActivationMode__None = 0,
		EGliderTrailActivationMode__AutoActivate = 1,
		EGliderTrailActivationMode__FullyDeployed = 2,
	};


	// Enum /Script/FortniteGame.EGliderTrailAttachmentMode
	enum EGliderTrailAttachmentMode
	{
		EGliderTrailAttachmentMode__GliderMesh = 0,
		EGliderTrailAttachmentMode__PlayerPawn = 1,
	};


	// Enum /Script/FortniteGame.EItemWrapSectionNames
	enum EItemWrapSectionNames
	{
		EItemWrapSectionNames__Section = 0,
		EItemWrapSectionNames__Section = 1,
		EItemWrapSectionNames__Section = 2,
		EItemWrapSectionNames__Section = 3,
		EItemWrapSectionNames__Section = 4,
		EItemWrapSectionNames__Section = 5,
		EItemWrapSectionNames__Section = 6,
		EItemWrapSectionNames__Section = 7,
		EItemWrapSectionNames__Section = 8,
		EItemWrapSectionNames__Section = 9,
		EItemWrapSectionNames__Section = A,
		EItemWrapSectionNames__Section = B,
		EItemWrapSectionNames__Section = C,
		EItemWrapSectionNames__Section = D,
		EItemWrapSectionNames__Section = E,
		EItemWrapSectionNames__Section = F,
		EItemWrapSectionNames__Section = 10,
		EItemWrapSectionNames__Section = 11,
		EItemWrapSectionNames__Section = 12,
		EItemWrapSectionNames__Section = 13,
		EItemWrapSectionNames__Section = 14,
		EItemWrapSectionNames__Section = 15,
		EItemWrapSectionNames__Section = 16,
		EItemWrapSectionNames__Section = 17,
		EItemWrapSectionNames__Section = 18,
		EItemWrapSectionNames__Section = 19,
		EItemWrapSectionNames__Section = 1A,
		EItemWrapSectionNames__Section = 1B,
		EItemWrapSectionNames__Section = 1C,
		EItemWrapSectionNames__Section = 1D,
		EItemWrapSectionNames__Section = 1E,
		EItemWrapSectionNames__Section = 1F,
	};


	// Enum /Script/FortniteGame.EAthenaPetAttachRule
	enum EAthenaPetAttachRule
	{
		EAthenaPetAttachRule__AttachToBackpack = 0,
		EAthenaPetAttachRule__AttachToBody = 1,
	};


	// Enum /Script/FortniteGame.EBannerUsageContext
	enum EBannerUsageContext
	{
		EBannerUsageContext__Unknown = 0,
		EBannerUsageContext__BannerIcon = 1,
		EBannerUsageContext__PhysicalBanner = 2,
		EBannerUsageContext__Spray = 3,
	};


	// Enum /Script/FortniteGame.EMontageVisibilityRule
	enum EMontageVisibilityRule
	{
		EMontageVisibilityRule__RequiredItem = 0,
		EMontageVisibilityRule__ForbiddenItem = 1,
		EMontageVisibilityRule__MetaTagQuery = 2,
	};


	// Enum /Script/FortniteGame.ECosmeticTestOperationType
	enum ECosmeticTestOperationType
	{
		ECosmeticTestOperationType__Multiply = 0,
		ECosmeticTestOperationType__Add = 1,
		ECosmeticTestOperationType__None = 2,
	};


	// Enum /Script/FortniteGame.EFortCosmeticHabaneroProgressionType
	enum EFortCosmeticHabaneroProgressionType
	{
		EFortCosmeticHabaneroProgressionType__CurrentProgress = 0,
		EFortCosmeticHabaneroProgressionType__HighestProgress = 1,
	};


	// Enum /Script/FortniteGame.ECosmeticMetaTagRequirementCategory
	enum ECosmeticMetaTagRequirementCategory
	{
		ECosmeticMetaTagRequirementCategory__None = 0,
		ECosmeticMetaTagRequirementCategory__Glider = 1,
		ECosmeticMetaTagRequirementCategory__Pickaxe = 2,
		ECosmeticMetaTagRequirementCategory__Backpack = 3,
		ECosmeticMetaTagRequirementCategory__Character = 4,
		ECosmeticMetaTagRequirementCategory__FullLoadout = 5,
	};


	// Enum /Script/FortniteGame.ERankedVariantRank
	enum ERankedVariantRank
	{
		ERankedVariantRank__Bronze = 0,
		ERankedVariantRank__Silver = 1,
		ERankedVariantRank__Gold = 2,
		ERankedVariantRank__Platinum = 3,
		ERankedVariantRank__Diamond = 4,
		ERankedVariantRank__Elite = 5,
		ERankedVariantRank__Champion = 6,
		ERankedVariantRank__Unreal = 7,
		ERankedVariantRank__MAX_None = 8,
	};


	// Enum /Script/FortniteGame.EFortRichColorConflictResolutionRules
	enum EFortRichColorConflictResolutionRules
	{
		EFortRichColorConflictResolutionRules__NoConflictsAllowed = 0,
		EFortRichColorConflictResolutionRules__BlackOrWhiteCannotConflict = 1,
		EFortRichColorConflictResolutionRules__MinimumDistanceBlackOrWhite = 2,
		EFortRichColorConflictResolutionRules__MinimumContrast = 3,
		EFortRichColorConflictResolutionRules__MinimumContrastOrHueSaturationShift = 4,
		EFortRichColorConflictResolutionRules__MinimumContrastGrayscale = 5,
	};


	// Enum /Script/FortniteGame.EAnimInstanceClassSwapType
	enum EAnimInstanceClassSwapType
	{
		EAnimInstanceClassSwapType__None = 0,
		EAnimInstanceClassSwapType__SwapOnMatch = 1,
	};


	// Enum /Script/FortniteGame.ELoadoutVariantInsertType
	enum ELoadoutVariantInsertType
	{
		ELoadoutVariantInsertType__StartOfArray = 0,
		ELoadoutVariantInsertType__EndOfArray = 1,
	};


	// Enum /Script/FortniteGame.ECreativeQuestStat
	enum ECreativeQuestStat
	{
		ECreativeQuestStat__None = 0,
		ECreativeQuestStat__Eliminations = 1,
		ECreativeQuestStat__Eliminated = 2,
		ECreativeQuestStat__Score = 3,
		ECreativeQuestStat__ChestOpened = 4,
		ECreativeQuestStat__LlamaOpened = 5,
		ECreativeQuestStat__PlayerRevived = 6,
		ECreativeQuestStat__PlayerInterrogated = 7,
		ECreativeQuestStat__RaceCheckpointActivated = 8,
		ECreativeQuestStat__FishFished = 9,
		ECreativeQuestStat__WeaponFished = A,
		ECreativeQuestStat__PropDestroyed = B,
		ECreativeQuestStat__ShieldPotionConsumed = C,
		ECreativeQuestStat__DistanceTraveledOnFoot = D,
		ECreativeQuestStat__DistanceTraveledInVehicle = E,
		ECreativeQuestStat__DistanceTraveledInAir = F,
		ECreativeQuestStat__DistanceTraveled = 10,
		ECreativeQuestStat__RoundCompleted = 11,
		ECreativeQuestStat__RoundWon = 12,
		ECreativeQuestStat__GameCompleted = 13,
		ECreativeQuestStat__GameWon = 14,
		ECreativeQuestStat__PlayTimeElapsed = 15,
	};


	// Enum /Script/FortniteGame.ECreativeQuestSharing
	enum ECreativeQuestSharing
	{
		ECreativeQuestSharing__Individual = 0,
		ECreativeQuestSharing__Team = 1,
		ECreativeQuestSharing__All = 2,
	};


	// Enum /Script/FortniteGame.EShowProgressMode
	enum EShowProgressMode
	{
		EShowProgressMode__Total = 0,
		EShowProgressMode__Remaining = 1,
		EShowProgressMode__Off = 2,
	};


	// Enum /Script/FortniteGame.EShowOnHudMode
	enum EShowOnHudMode
	{
		EShowOnHudMode__No = 0,
		EShowOnHudMode__Detailed = 1,
		EShowOnHudMode__List = 2,
		EShowOnHudMode__Both = 3,
	};


	// Enum /Script/FortniteGame.ESmoothProgressState
	enum ESmoothProgressState
	{
		ESmoothProgressState__Enabled = 0,
		ESmoothProgressState__DisabledByState = 1,
	};


	// Enum /Script/FortniteGame.EValueCostCalculationMethod
	enum EValueCostCalculationMethod
	{
		EValueCostCalculationMethod__Assets = 0,
		EValueCostCalculationMethod__Max = 1,
		EValueCostCalculationMethod__InstancePayload = 2,
	};


	// Enum /Script/FortniteGame.EFortCreativeLinearMoverCollisionBehavior
	enum EFortCreativeLinearMoverCollisionBehavior
	{
		EFortCreativeLinearMoverCollisionBehavior__EFCLMCB_None = 0,
		EFortCreativeLinearMoverCollisionBehavior__EFCLMCB_Stop = 1,
		EFortCreativeLinearMoverCollisionBehavior__EFCLMCB_Reverse = 2,
		EFortCreativeLinearMoverCollisionBehavior__EFCLMCB_Push = 3,
	};


	// Enum /Script/FortniteGame.EFortCreativeResourceNodeDepletionMode
	enum EFortCreativeResourceNodeDepletionMode
	{
		EFortCreativeResourceNodeDepletionMode__Destroy = 0,
		EFortCreativeResourceNodeDepletionMode__RestockOnDelay = 1,
		EFortCreativeResourceNodeDepletionMode__RestockOverTime = 2,
		EFortCreativeResourceNodeDepletionMode__StayEmpty = 3,
		EFortCreativeResourceNodeDepletionMode__None = 4,
	};


	// Enum /Script/FortniteGame.EDeviceTrackingFilterType
	enum EDeviceTrackingFilterType
	{
		EDeviceTrackingFilterType__Undefined = 0,
		EDeviceTrackingFilterType__Unfiltered = 1,
		EDeviceTrackingFilterType__WithEventsOrFunctions = 2,
		EDeviceTrackingFilterType__WithFunctions = 3,
		EDeviceTrackingFilterType__WithEvents = 4,
		EDeviceTrackingFilterType__WithOnlyFunctions = 5,
		EDeviceTrackingFilterType__WithOnlyEvents = 6,
		EDeviceTrackingFilterType__WithBindings = 7,
		EDeviceTrackingFilterType__Favorites = 8,
	};


	// Enum /Script/FortniteGame.EDeviceTrackingSortingType
	enum EDeviceTrackingSortingType
	{
		EDeviceTrackingSortingType__Undefined = 0,
		EDeviceTrackingSortingType__Default = 1,
		EDeviceTrackingSortingType__Alphabetical = 2,
		EDeviceTrackingSortingType__ReverseAlphabetical = 3,
		EDeviceTrackingSortingType__Favorites = 4,
		EDeviceTrackingSortingType__MostBindingsToLeast = 5,
		EDeviceTrackingSortingType__LeastBindingsToMost = 6,
	};


	// Enum /Script/FortniteGame.EFortCreativeDiscoveryDeterminism
	enum EFortCreativeDiscoveryDeterminism
	{
		EFortCreativeDiscoveryDeterminism__Always = 0,
		EFortCreativeDiscoveryDeterminism__Random = 1,
		EFortCreativeDiscoveryDeterminism__PlayerDeterministic = 2,
		EFortCreativeDiscoveryDeterminism__PartyDeterministic = 3,
		EFortCreativeDiscoveryDeterminism__EpicEmployee = 4,
		EFortCreativeDiscoveryDeterminism__Never = 5,
	};


	// Enum /Script/FortniteGame.EFortCreativeDiscoveryPanelType
	enum EFortCreativeDiscoveryPanelType
	{
		EFortCreativeDiscoveryPanelType__CuratedList = 0,
		EFortCreativeDiscoveryPanelType__MetricDriven = 1,
		EFortCreativeDiscoveryPanelType__Recommendations = 2,
		EFortCreativeDiscoveryPanelType__PlayHistory = 3,
		EFortCreativeDiscoveryPanelType__AnalyticsList = 4,
		EFortCreativeDiscoveryPanelType__Tournaments = 5,
	};


	// Enum /Script/FortniteGame.EFortCreativeDiscoveryPanelOrdering
	enum EFortCreativeDiscoveryPanelOrdering
	{
		EFortCreativeDiscoveryPanelOrdering__Locked = 0,
		EFortCreativeDiscoveryPanelOrdering__Floating = 1,
	};


	// Enum /Script/FortniteGame.EFortCreativeDiscoveryPlayHistoryType
	enum EFortCreativeDiscoveryPlayHistoryType
	{
		EFortCreativeDiscoveryPlayHistoryType__RecentlyPlayed = 0,
		EFortCreativeDiscoveryPlayHistoryType__Favorites = 1,
		EFortCreativeDiscoveryPlayHistoryType__RecentlyPlayedAndFavorites = 2,
		EFortCreativeDiscoveryPlayHistoryType__Queued = 3,
	};


	// Enum /Script/FortniteGame.EFortCreativeDiscoverySkippedEntries
	enum EFortCreativeDiscoverySkippedEntries
	{
		EFortCreativeDiscoverySkippedEntries__None = 0,
		EFortCreativeDiscoverySkippedEntries__ByCount = 1,
		EFortCreativeDiscoverySkippedEntries__ByPercent = 2,
	};


	// Enum /Script/FortniteGame.EFortLockDeviceVisibilityDuringGames
	enum EFortLockDeviceVisibilityDuringGames
	{
		EFortLockDeviceVisibilityDuringGames__No = 0,
		EFortLockDeviceVisibilityDuringGames__Yes = 1,
		EFortLockDeviceVisibilityDuringGames__HologramOnly = 2,
	};


	// Enum /Script/FortniteGame.ETimerDeviceState
	enum ETimerDeviceState
	{
		ETimerDeviceState__Enabled = 0,
		ETimerDeviceState__Activated = 1,
		ETimerDeviceState__Paused = 2,
		ETimerDeviceState__Completed = 3,
		ETimerDeviceState__Disabled = 4,
	};


	// Enum /Script/FortniteGame.ECreativeClassType
	enum ECreativeClassType
	{
		ECreativeClassType__ClassSlot = 0,
		ECreativeClassType__NoClass = 1,
		ECreativeClassType__All = 2,
		ECreativeClassType__Any = 3,
	};


	// Enum /Script/FortniteGame.EFortCreativeItemDropAmount
	enum EFortCreativeItemDropAmount
	{
		EFortCreativeItemDropAmount__All = 0,
		EFortCreativeItemDropAmount__FlatAmount = 1,
		EFortCreativeItemDropAmount__Percentage = 2,
	};


	// Enum /Script/FortniteGame.ECreativeLinkPreviewSize
	enum ECreativeLinkPreviewSize
	{
		ECreativeLinkPreviewSize__Small = 0,
		ECreativeLinkPreviewSize__Medium = 1,
		ECreativeLinkPreviewSize__Large = 2,
		ECreativeLinkPreviewSize__Extra_Small = 3,
		ECreativeLinkPreviewSize__NUM_SIZES = 4,
	};


	// Enum /Script/FortniteGame.ECreativeTeamType
	enum ECreativeTeamType
	{
		ECreativeTeamType__TeamIndex = 0,
		ECreativeTeamType__None = 1,
		ECreativeTeamType__All = 2,
		ECreativeTeamType__Any = 3,
		ECreativeTeamType__Allies = 4,
		ECreativeTeamType__Hostiles = 5,
		ECreativeTeamType__Friendlies = 6,
		ECreativeTeamType__Enemies = 7,
		ECreativeTeamType__Neutral = 8,
		ECreativeTeamType__Random = 9,
		ECreativeTeamType__DoNotSwitch = A,
		ECreativeTeamType__ActivatingTeam = B,
		ECreativeTeamType__WinningTeam = C,
		ECreativeTeamType__UseGameWinConditions = D,
		ECreativeTeamType__CompletingTeamWins = E,
		ECreativeTeamType__TriggeringPlayer = F,
		ECreativeTeamType__TriggeringTeam = 10,
		ECreativeTeamType__Spectating = 11,
		ECreativeTeamType__Cooperative = 12,
		ECreativeTeamType__FreeForAll = 13,
		ECreativeTeamType__Custom = 14,
		ECreativeTeamType__SpawnOnNextRound = 15,
		ECreativeTeamType__Spawn = 16,
		ECreativeTeamType__Spectate = 17,
	};


	// Enum /Script/FortniteGame.EFortCreativeTeleporterGroup
	enum EFortCreativeTeleporterGroup
	{
		EFortCreativeTeleporterGroup__Group_A = 0,
		EFortCreativeTeleporterGroup__Group_B = 1,
		EFortCreativeTeleporterGroup__Group_C = 2,
		EFortCreativeTeleporterGroup__Group_D = 3,
		EFortCreativeTeleporterGroup__Group_E = 4,
		EFortCreativeTeleporterGroup__Group_F = 5,
		EFortCreativeTeleporterGroup__Group_G = 6,
		EFortCreativeTeleporterGroup__Group_H = 7,
		EFortCreativeTeleporterGroup__Group_I = 8,
		EFortCreativeTeleporterGroup__Group_J = 9,
		EFortCreativeTeleporterGroup__Group_K = A,
		EFortCreativeTeleporterGroup__Group_L = B,
		EFortCreativeTeleporterGroup__Group_M = C,
		EFortCreativeTeleporterGroup__Group_N = D,
		EFortCreativeTeleporterGroup__Group_O = E,
		EFortCreativeTeleporterGroup__Group_P = F,
		EFortCreativeTeleporterGroup__Group_Q = 10,
		EFortCreativeTeleporterGroup__Group_R = 11,
		EFortCreativeTeleporterGroup__Group_S = 12,
		EFortCreativeTeleporterGroup__Group_T = 13,
		EFortCreativeTeleporterGroup__Group_U = 14,
		EFortCreativeTeleporterGroup__Group_V = 15,
		EFortCreativeTeleporterGroup__Group_W = 16,
		EFortCreativeTeleporterGroup__Group_X = 17,
		EFortCreativeTeleporterGroup__Group_Y = 18,
		EFortCreativeTeleporterGroup__Group_Z = 19,
		EFortCreativeTeleporterGroup__Group_None = 1A,
	};


	// Enum /Script/FortniteGame.EFortCreativeTeleporterEvent
	enum EFortCreativeTeleporterEvent
	{
		EFortCreativeTeleporterEvent__Entered = 0,
		EFortCreativeTeleporterEvent__Exited = 1,
		EFortCreativeTeleporterEvent__Enabled = 2,
		EFortCreativeTeleporterEvent__Disabled = 3,
		EFortCreativeTeleporterEvent__None = 4,
	};


	// Enum /Script/FortniteGame.EMMSRulePreset
	enum EMMSRulePreset
	{
		EMMSRulePreset__RespectParties = 0,
		EMMSRulePreset__KeepFull = 1,
		EMMSRulePreset__Off = 2,
	};


	// Enum /Script/FortniteGame.EMMSPrivacy
	enum EMMSPrivacy
	{
		EMMSPrivacy__Public = 0,
		EMMSPrivacy__Private = 1,
	};


	// Enum /Script/FortniteGame.EMMSPlayersPerTeamPreset
	enum EMMSPlayersPerTeamPreset
	{
		EMMSPlayersPerTeamPreset__Solos = 1,
		EMMSPlayersPerTeamPreset__Duos = 2,
		EMMSPlayersPerTeamPreset__Trios = 3,
		EMMSPlayersPerTeamPreset__Squads = 4,
		EMMSPlayersPerTeamPreset__SplitEvenly = 5,
		EMMSPlayersPerTeamPreset__Dynamic = 6,
	};


	// Enum /Script/FortniteGame.EMMSTeamFillOption
	enum EMMSTeamFillOption
	{
		EMMSTeamFillOption__PartyChoice = 0,
		EMMSTeamFillOption__MustFill = 1,
	};


	// Enum /Script/FortniteGame.ECreatorManagedTeams
	enum ECreatorManagedTeams
	{
		ECreatorManagedTeams__Enabled = 0,
		ECreatorManagedTeams__Disabled = 1,
	};


	// Enum /Script/FortniteGame.ECreativePublishedIslandCodeDisplay
	enum ECreativePublishedIslandCodeDisplay
	{
		ECreativePublishedIslandCodeDisplay__Off = 0,
		ECreativePublishedIslandCodeDisplay__ShowWithWatermark = 1,
		ECreativePublishedIslandCodeDisplay__ShowWithoutWatermark = 2,
	};


	// Enum /Script/FortniteGame.EWidgetInterfaceTimerStatus
	enum EWidgetInterfaceTimerStatus
	{
		EWidgetInterfaceTimerStatus__None = 0,
		EWidgetInterfaceTimerStatus__Active = 1,
		EWidgetInterfaceTimerStatus__Paused = 2,
		EWidgetInterfaceTimerStatus__Inactive = 3,
	};


	// Enum /Script/FortniteGame.EFortCurieNativeFXType
	enum EFortCurieNativeFXType
	{
		EFortCurieNativeFXType__None = 0,
		EFortCurieNativeFXType__Electricity = 1,
		EFortCurieNativeFXType__Fire = 2,
		EFortCurieNativeFXType__Charred = 4,
		EFortCurieNativeFXType__Max = 8,
	};


	// Enum /Script/FortniteGame.EFortCurieExecutionType
	enum EFortCurieExecutionType
	{
		EFortCurieExecutionType__Application = 0,
		EFortCurieExecutionType__Interaction = 1,
	};


	// Enum /Script/FortniteGame.EFortCurieApplicationEvent
	enum EFortCurieApplicationEvent
	{
		EFortCurieApplicationEvent__OnHit = 0,
		EFortCurieApplicationEvent__OnBeginOverlap = 1,
		EFortCurieApplicationEvent__OnEndOverlap = 2,
		EFortCurieApplicationEvent__MaxValue = 3,
	};


	// Enum /Script/FortniteGame.EFortNativeCurieFXCueResponse
	enum EFortNativeCurieFXCueResponse
	{
		EFortNativeCurieFXCueResponse__IgnoreCue = 0,
		EFortNativeCurieFXCueResponse__AllowCue = 1,
		EFortNativeCurieFXCueResponse__OverrideCue = 2,
	};


	// Enum /Script/FortniteGame.EFortCurieToggleComponentActivationBehavior
	enum EFortCurieToggleComponentActivationBehavior
	{
		EFortCurieToggleComponentActivationBehavior__OnValidAttachment = 0,
	};


	// Enum /Script/FortniteGame.EFortCurieToggleComponentDeactivationBehavior
	enum EFortCurieToggleComponentDeactivationBehavior
	{
		EFortCurieToggleComponentDeactivationBehavior__NeverDeactivate = 0,
		EFortCurieToggleComponentDeactivationBehavior__TimedDeactivationAllowRefresh = 1,
		EFortCurieToggleComponentDeactivationBehavior__TimedDeactivationNoRefresh = 2,
	};


	// Enum /Script/FortniteGame.EAccessoryColorName
	enum EAccessoryColorName
	{
		EAccessoryColorName_AccessoryColor1 = 0,
		EAccessoryColorName_AccessoryColor2 = 1,
		EAccessoryColorName_AccessoryColor3 = 2,
		EAccessoryColorName_NumTypes = 3,
	};


	// Enum /Script/FortniteGame.ECharacterPartAttachmentTargetType
	enum ECharacterPartAttachmentTargetType
	{
		ECharacterPartAttachmentTargetType__RootComponent = 0,
		ECharacterPartAttachmentTargetType__SkeletalMeshForAssociatedPlayerPawnPartType = 1,
	};


	// Enum /Script/FortniteGame.EClothingColorName
	enum EClothingColorName
	{
		EClothingColorName_AccessoryColor1 = 0,
		EClothingColorName_AccessoryColor2 = 1,
		EClothingColorName_NumTypes = 2,
	};


	// Enum /Script/FortniteGame.EVehicleEnteredCosmeticReaction
	enum EVehicleEnteredCosmeticReaction
	{
		EVehicleEnteredCosmeticReaction__Driver = 0,
		EVehicleEnteredCosmeticReaction__Passenger = 1,
		EVehicleEnteredCosmeticReaction__Both = 2,
	};


	// Enum /Script/FortniteGame.ECosmeticModifierOutExec
	enum ECosmeticModifierOutExec
	{
		ECosmeticModifierOutExec__Success = 0,
		ECosmeticModifierOutExec__Failure = 1,
	};


	// Enum /Script/FortniteGame.EManagedCosmeticType
	enum EManagedCosmeticType
	{
		EManagedCosmeticType__Glider = 0,
		EManagedCosmeticType__GliderAnimSet = 1,
		EManagedCosmeticType__Pickaxe = 2,
		EManagedCosmeticType__Pet = 3,
		EManagedCosmeticType__ItemWrap = 4,
		EManagedCosmeticType__MAX_COUNT = 5,
	};


	// Enum /Script/FortniteGame.EFortCustomizationAssetLoaderFlags
	enum EFortCustomizationAssetLoaderFlags
	{
		EFortCustomizationAssetLoaderFlags__None = 1,
		EFortCustomizationAssetLoaderFlags__ForceSynchronousLoad = 2,
		EFortCustomizationAssetLoaderFlags__CustomizationDestroy = 4,
		EFortCustomizationAssetLoaderFlags__CustomizationStart = 8,
		EFortCustomizationAssetLoaderFlags__LoadNewAssets = 10,
		EFortCustomizationAssetLoaderFlags__EndPlay = 20,
		EFortCustomizationAssetLoaderFlags__Destroyed = 40,
		EFortCustomizationAssetLoaderFlags__LevelTransition = 80,
		EFortCustomizationAssetLoaderFlags__EndPlayInEditor = 100,
		EFortCustomizationAssetLoaderFlags__RemovedFromWorld = 200,
		EFortCustomizationAssetLoaderFlags__Quit = 400,
	};


	// Enum /Script/FortniteGame.EAssetLoadHistoryState
	enum EAssetLoadHistoryState
	{
		EAssetLoadHistoryState__None = 0,
		EAssetLoadHistoryState__Requested = 1,
		EAssetLoadHistoryState__Cancelled = 2,
		EAssetLoadHistoryState__Finished = 3,
		EAssetLoadHistoryState__Removed = 4,
	};


	// Enum /Script/FortniteGame.EFortPlayerMannequinLoadingMode
	enum EFortPlayerMannequinLoadingMode
	{
		EFortPlayerMannequinLoadingMode__Asynchronous = 0,
		EFortPlayerMannequinLoadingMode__Synchronous = 1,
	};


	// Enum /Script/FortniteGame.EFortPlayerMannequinFlowgraphMode
	enum EFortPlayerMannequinFlowgraphMode
	{
		EFortPlayerMannequinFlowgraphMode__Unsupported = 0,
		EFortPlayerMannequinFlowgraphMode__Supported = 1,
	};


	// Enum /Script/FortniteGame.EWrapPreviewGridLockerMode
	enum EWrapPreviewGridLockerMode
	{
		EWrapPreviewGridLockerMode__IgnoreLockerConfiguration = 0,
		EWrapPreviewGridLockerMode__SupportedWeaponsOnly = 1,
		EWrapPreviewGridLockerMode__UnsupportedWeaponsOnly = 2,
	};


	// Enum /Script/FortniteGame.ETimespanAsTextFormat
	enum ETimespanAsTextFormat
	{
		ETimespanAsTextFormat__DaysHoursMinutesSeconds = 0,
		ETimespanAsTextFormat__Colons = 1,
		ETimespanAsTextFormat__ColonsWithMilliseconds = 2,
		ETimespanAsTextFormat__Approximate = 3,
		ETimespanAsTextFormat__ApproximateWithWeeks = 4,
		ETimespanAsTextFormat__ApproximateWithMonths = 5,
		ETimespanAsTextFormat__ApproximateWithYears = 6,
	};


	// Enum /Script/FortniteGame.ETimespanUnitDisplayFormat
	enum ETimespanUnitDisplayFormat
	{
		ETimespanUnitDisplayFormat__Full = 0,
		ETimespanUnitDisplayFormat__Abbreviated = 1,
	};


	// Enum /Script/FortniteGame.EDynamicDestructionResourceType
	enum EDynamicDestructionResourceType
	{
		EDynamicDestructionResourceType__Invalid = 0,
		EDynamicDestructionResourceType__Wood = 1,
		EDynamicDestructionResourceType__Stone = 2,
		EDynamicDestructionResourceType__Metal = 3,
		EDynamicDestructionResourceType__Foliage = 4,
		EDynamicDestructionResourceType__Unused = 5,
		EDynamicDestructionResourceType__Unused = 6,
		EDynamicDestructionResourceType__Unused = 7,
		EDynamicDestructionResourceType__Unused = 8,
	};


	// Enum /Script/FortniteGame.EFXType
	enum EFXType
	{
		EFXType__GenericAnimNotify = 0,
		EFXType__TrailAnimNotify = 1,
		EFXType__WeaponImpactEffect = 2,
		EFXType__WeaponMeleeImpactEffect = 3,
		EFXType__Contrail = 4,
		EFXType__Emote = 5,
		EFXType__Trap = 6,
		EFXType__Skin = 7,
		EFXType__Glider = 8,
		EFXType__Vehicle = 9,
		EFXType__BackpackBling = A,
		EFXType__Water = B,
		EFXType__LootChest = C,
		EFXType__EnvironmentalAmbient = D,
		EFXType__WeaponRangedBeam = E,
		EFXType__WeaponBulletShells = F,
		EFXType__WeaponMuzzleFlashes = 10,
		EFXType__PickAxe = 11,
		EFXType__Curie = 12,
		EFXType__Projectile = 13,
		EFXType__Land = 14,
	};


	// Enum /Script/FortniteGame.ESkyTubeMovementDirection
	enum ESkyTubeMovementDirection
	{
		ESkyTubeMovementDirection__BothWays = 0,
		ESkyTubeMovementDirection__Forward = 1,
		ESkyTubeMovementDirection__Reverse = 2,
	};


	// Enum /Script/FortniteGame.EFortEventRepeat
	enum EFortEventRepeat
	{
		EFortEventRepeat__EFER_Inactive = 0,
		EFortEventRepeat__EFER_Always = 1,
		EFortEventRepeat__EFER_OncePerPlayer = 2,
		EFortEventRepeat__EFER_OncePerCampaign = 3,
		EFortEventRepeat__EFER_OncePerMap = 4,
	};


	// Enum /Script/FortniteGame.EFortCompare
	enum EFortCompare
	{
		EFortCompare__EFC_LessThan = 0,
		EFortCompare__EFC_LessThanOrEqual = 1,
		EFortCompare__EFC_GreaterThan = 2,
		EFortCompare__EFC_GreaterThanOrEqual = 3,
		EFortCompare__EFC_Equals = 4,
	};


	// Enum /Script/FortniteGame.EFortEventConditionType
	enum EFortEventConditionType
	{
		EFortEventConditionType__EFEC_StatCompare = 0,
	};


	// Enum /Script/FortniteGame.EExperimentBucket
	enum EExperimentBucket
	{
		EExperimentBucket__Baseline = 0,
		EExperimentBucket__Variation1 = 1,
		EExperimentBucket__NotInExperiment = 2,
	};


	// Enum /Script/FortniteGame.EFortLabelOverrideForceFixUpMode
	enum EFortLabelOverrideForceFixUpMode
	{
		EFortLabelOverrideForceFixUpMode__NONE = 0,
		EFortLabelOverrideForceFixUpMode__FROM_LABEL_OVERRIDE = 1,
		EFortLabelOverrideForceFixUpMode__FROM_BASE_LABEL = 2,
	};


	// Enum /Script/FortniteGame.EFortActorSpawnerAuthority
	enum EFortActorSpawnerAuthority
	{
		EFortActorSpawnerAuthority__ServerAuthoritative = 0,
		EFortActorSpawnerAuthority__ClientAuthoritative = 1,
	};


	// Enum /Script/FortniteGame.EClientSettingsSaveType
	enum EClientSettingsSaveType
	{
		EClientSettingsSaveType__Unknown = 0,
		EClientSettingsSaveType__LocalDisk = 1,
		EClientSettingsSaveType__CloudStorage = 2,
	};


	// Enum /Script/FortniteGame.EFortPerModeInputType
	enum EFortPerModeInputType
	{
		EFortPerModeInputType__KeyboardMouse = 0,
		EFortPerModeInputType__Controller = 1,
	};


	// Enum /Script/FortniteGame.EFortAmmoType
	enum EFortAmmoType
	{
		EFortAmmoType__Pistol = 0,
		EFortAmmoType__Shotgun = 1,
		EFortAmmoType__Assault = 2,
		EFortAmmoType__Sniper = 3,
		EFortAmmoType__Energy = 4,
	};


	// Enum /Script/FortniteGame.EFortMontageInputType
	enum EFortMontageInputType
	{
		EFortMontageInputType__WindowClickOrHold = 0,
		EFortMontageInputType__WindowHoldOnly = 1,
		EFortMontageInputType__InstantClick = 2,
	};


	// Enum /Script/FortniteGame.EFortWeaponSoundChannel
	enum EFortWeaponSoundChannel
	{
		EFortWeaponSoundChannel__NormalA = 0,
		EFortWeaponSoundChannel__NormalB = 1,
		EFortWeaponSoundChannel__LowAmmo = 2,
		EFortWeaponSoundChannel__Degraded = 3,
		EFortWeaponSoundChannel__Max_None = 4,
	};


	// Enum /Script/FortniteGame.EFortTargetingFXState
	enum EFortTargetingFXState
	{
		EFortTargetingFXState__TargetingStart = 0,
		EFortTargetingFXState__TargetingEnd = 1,
		EFortTargetingFXState__Max_None = 2,
	};


	// Enum /Script/FortniteGame.EFortCombatThresholds
	enum EFortCombatThresholds
	{
		EFortCombatThresholds__Low = 0,
		EFortCombatThresholds__Medium = 1,
		EFortCombatThresholds__High = 2,
		EFortCombatThresholds__Extreme = 3,
		EFortCombatThresholds__Max_None = 4,
	};


	// Enum /Script/FortniteGame.EFortAIDirectorEventParticipant
	enum EFortAIDirectorEventParticipant
	{
		EFortAIDirectorEventParticipant__Target = 0,
		EFortAIDirectorEventParticipant__Source = 1,
		EFortAIDirectorEventParticipant__Either = 2,
		EFortAIDirectorEventParticipant__Max_None = 3,
	};


	// Enum /Script/FortniteGame.EFortCombatEvents
	enum EFortCombatEvents
	{
		EFortCombatEvents__HuskFollowing = 0,
		EFortCombatEvents__SmasherFollowing = 1,
		EFortCombatEvents__TrollFollowing = 2,
		EFortCombatEvents__FlingerFollowing = 3,
		EFortCombatEvents__TakerFollowing = 4,
		EFortCombatEvents__HuskCombatNearby = 5,
		EFortCombatEvents__SmasherCombatNearby = 6,
		EFortCombatEvents__TrollCombatNearby = 7,
		EFortCombatEvents__FlingerCombatNearby = 8,
		EFortCombatEvents__TakerCombatNearby = 9,
		EFortCombatEvents__PlayerTakeDamage = A,
		EFortCombatEvents__PlayerHealth = B,
		EFortCombatEvents__PlayerLookAtEnemy = C,
		EFortCombatEvents__PlayerDamageEnemy = D,
		EFortCombatEvents__PlayerKilledEnemy = E,
		EFortCombatEvents__AtlasTakeDamage = F,
		EFortCombatEvents__AtlasHealth = 10,
		EFortCombatEvents__AtlasDestroyed = 11,
		EFortCombatEvents__TrapFiring = 12,
		EFortCombatEvents__BuildingTakeDamage = 13,
		EFortCombatEvents__FoodHealingPotential = 14,
		EFortCombatEvents__PlayerAmmo = 15,
		EFortCombatEvents__EnemiesNear = 16,
		EFortCombatEvents__PlayerMovement = 17,
		EFortCombatEvents__BuildingDamagedNearObjective = 18,
		EFortCombatEvents__TrapDamageEnemy = 19,
		EFortCombatEvents__ObjectivePathCost = 1A,
		EFortCombatEvents__PlayerPathCost = 1B,
		EFortCombatEvents__Max_None = 1C,
	};


	// Enum /Script/FortniteGame.EFortCombatEventContribution
	enum EFortCombatEventContribution
	{
		EFortCombatEventContribution__Linear = 0,
		EFortCombatEventContribution__Inverse = 1,
		EFortCombatEventContribution__Accumulator = 2,
		EFortCombatEventContribution__Max_None = 3,
	};


	// Enum /Script/FortniteGame.EFortCombatFactors
	enum EFortCombatFactors
	{
		EFortCombatFactors__PlayerDamageThreat = 0,
		EFortCombatFactors__ObjectiveDamageThreat = 1,
		EFortCombatFactors__ObjectivePathCost = 2,
		EFortCombatFactors__PlayerPathCost = 3,
		EFortCombatFactors__PlayerMovement = 4,
		EFortCombatFactors__TrapsEffective = 5,
		EFortCombatFactors__PlayerWander = 6,
		EFortCombatFactors__NearbyEnemyPresence = 7,
		EFortCombatFactors__OffensiveResources = 8,
		EFortCombatFactors__DefensiveResources = 9,
		EFortCombatFactors__Boredom = A,
		EFortCombatFactors__ArtilleryVulnerability = B,
		EFortCombatFactors__Max_None = C,
	};


	// Enum /Script/FortniteGame.EFortAIDirectorFactor
	enum EFortAIDirectorFactor
	{
		EFortAIDirectorFactor__PlayerDamageThreat = 0,
		EFortAIDirectorFactor__ObjectiveDamageThreat = 1,
		EFortAIDirectorFactor__ObjectivePathCost = 2,
		EFortAIDirectorFactor__PlayerPathCost = 3,
		EFortAIDirectorFactor__PlayerMovement = 4,
		EFortAIDirectorFactor__TrapsEffective = 5,
		EFortAIDirectorFactor__PlayerWander = 6,
		EFortAIDirectorFactor__NearbyEnemyPresence = 7,
		EFortAIDirectorFactor__OffensiveResources = 8,
		EFortAIDirectorFactor__DefensiveResources = 9,
		EFortAIDirectorFactor__Boredom = A,
		EFortAIDirectorFactor__ArtilleryVulnerability = B,
		EFortAIDirectorFactor__Max_None = C,
	};


	// Enum /Script/FortniteGame.EFortFactorContributionType
	enum EFortFactorContributionType
	{
		EFortFactorContributionType__CurrentValue_Direct = 0,
		EFortFactorContributionType__CurrentValue_Inverse = 1,
		EFortFactorContributionType__AverageValue_Direct = 2,
		EFortFactorContributionType__AverageValue_Inverse = 3,
	};


	// Enum /Script/FortniteGame.EFortContributionGraphElements
	enum EFortContributionGraphElements
	{
		EFortContributionGraphElements__ProportionalLine = 0,
		EFortContributionGraphElements__IntegralLine = 1,
		EFortContributionGraphElements__TotalLine = 2,
		EFortContributionGraphElements__PendingLine = 3,
		EFortContributionGraphElements__ActionLine = 4,
		EFortContributionGraphElements__Max_None = 5,
	};


	// Enum /Script/FortniteGame.EFortIntensityGraphElements
	enum EFortIntensityGraphElements
	{
		EFortIntensityGraphElements__ActualIntensity = 0,
		EFortIntensityGraphElements__DesiredIntensity = 1,
		EFortIntensityGraphElements__Max_None = 2,
	};


	// Enum /Script/FortniteGame.EFortPIDValueGraphElements
	enum EFortPIDValueGraphElements
	{
		EFortPIDValueGraphElements__Proportional = 0,
		EFortPIDValueGraphElements__Integral = 1,
		EFortPIDValueGraphElements__Max_None = 2,
	};


	// Enum /Script/FortniteGame.EBudgetClassLimitsFor
	enum EBudgetClassLimitsFor
	{
		EBudgetClassLimitsFor__Creative = 0,
		EBudgetClassLimitsFor__Uefn = 1,
	};


	// Enum /Script/FortniteGame.ECreativeAssetCostFilterMethod
	enum ECreativeAssetCostFilterMethod
	{
		ECreativeAssetCostFilterMethod__IncludeOnly = 0,
		ECreativeAssetCostFilterMethod__Exclude = 1,
	};


	// Enum /Script/FortniteGame.EPlayStopPauseExecutionContext
	enum EPlayStopPauseExecutionContext
	{
		EPlayStopPauseExecutionContext__ServerOnly = 0,
		EPlayStopPauseExecutionContext__ServerAndClient = 1,
	};


	// Enum /Script/FortniteGame.EFortGameActivityType
	enum EFortGameActivityType
	{
		EFortGameActivityType__Undefined = 0,
		EFortGameActivityType__STW = 1,
		EFortGameActivityType__BR = 2,
		EFortGameActivityType__LTM = 3,
		EFortGameActivityType__CreativePublishedIsland = 4,
		EFortGameActivityType__CreativePersonalIsland = 5,
		EFortGameActivityType__Valkyrie = 6,
		EFortGameActivityType__ModeSet = 7,
		EFortGameActivityType__Reference = 8,
	};


	// Enum /Script/FortniteGame.EActivityCheckSolution
	enum EActivityCheckSolution
	{
		EActivityCheckSolution__None = 0,
		EActivityCheckSolution__Purchase = 1,
		EActivityCheckSolution__Install = 2,
		EActivityCheckSolution__Settings = 3,
		EActivityCheckSolution__LeavePartyAndPlayTutorial = 4,
	};


	// Enum /Script/FortniteGame.EFortDiscoveryOptionsOverride
	enum EFortDiscoveryOptionsOverride
	{
		EFortDiscoveryOptionsOverride__Undefined = 0,
		EFortDiscoveryOptionsOverride__Privacy = 1,
		EFortDiscoveryOptionsOverride__FillOnly = 2,
		EFortDiscoveryOptionsOverride__OnlyFillSolo = 3,
	};


	// Enum /Script/FortniteGame.EFortDiscoveryDisabledFeatures
	enum EFortDiscoveryDisabledFeatures
	{
		EFortDiscoveryDisabledFeatures__Undefined = 0,
		EFortDiscoveryDisabledFeatures__AllWrites = 1,
		EFortDiscoveryDisabledFeatures__Favorites = 2,
		EFortDiscoveryDisabledFeatures__PlayHistory = 3,
		EFortDiscoveryDisabledFeatures__Queues = 4,
		EFortDiscoveryDisabledFeatures__ForCabin = 5,
		EFortDiscoveryDisabledFeatures__DiscoverySurface = 6,
	};


	// Enum /Script/FortniteGame.EFortActivityLockStatus
	enum EFortActivityLockStatus
	{
		EFortActivityLockStatus__Locked = 0,
		EFortActivityLockStatus__Unlocked = 1,
	};


	// Enum /Script/FortniteGame.EFortActivityLockStatusReason
	enum EFortActivityLockStatusReason
	{
		EFortActivityLockStatusReason__None = 0,
		EFortActivityLockStatusReason__RatingThreshold = 1,
		EFortActivityLockStatusReason__Override = 2,
		EFortActivityLockStatusReason__Legacy = 3,
		EFortActivityLockStatusReason__Invalidated = 4,
		EFortActivityLockStatusReason__Unrated = 5,
		EFortActivityLockStatusReason__FailedToCheckContentGating = 6,
	};


	// Enum /Script/FortniteGame.EFortActivityIsLockedReason
	enum EFortActivityIsLockedReason
	{
		EFortActivityIsLockedReason__None = 0,
		EFortActivityIsLockedReason__AgeRating = 1,
		EFortActivityIsLockedReason__K3SAllowCreateSetting = 2,
		EFortActivityIsLockedReason__K3SOtherSetting = 3,
	};


	// Enum /Script/FortniteGame.EFortActivityLinkCategory
	enum EFortActivityLinkCategory
	{
		EFortActivityLinkCategory__None = 0,
		EFortActivityLinkCategory__LEGO = 1,
		EFortActivityLinkCategory__RocketRacing = 2,
		EFortActivityLinkCategory__FallGuys = 3,
	};


	// Enum /Script/FortniteGame.ESubGameAccessReason
	enum ESubGameAccessReason
	{
		ESubGameAccessReason__NoAccess = 0,
		ESubGameAccessReason__OpenAccess = 1,
		ESubGameAccessReason__TokenItemAccess = 2,
		ESubGameAccessReason__XboxHomeSharingAccess = 3,
		ESubGameAccessReason__XboxServiceOutageAccess = 4,
		ESubGameAccessReason__LimitedAccess = 5,
	};


	// Enum /Script/FortniteGame.EPlayerQueueType
	enum EPlayerQueueType
	{
		EPlayerQueueType__Player = 0,
		EPlayerQueueType__BroadcastSpectator = 1,
	};


	// Enum /Script/FortniteGame.EDynamicSoundOverride
	enum EDynamicSoundOverride
	{
		EDynamicSoundOverride__Cue = 0,
		EDynamicSoundOverride__Wave = 1,
		EDynamicSoundOverride__Class = 2,
	};


	// Enum /Script/FortniteGame.EFortInputFilterLevel
	enum EFortInputFilterLevel
	{
		EFortInputFilterLevel__None = 0,
		EFortInputFilterLevel__Touch = 1,
		EFortInputFilterLevel__Gamepad = 2,
		EFortInputFilterLevel__Mouse = 3,
	};


	// Enum /Script/FortniteGame.ETeamChatRoomState
	enum ETeamChatRoomState
	{
		ETeamChatRoomState__NotCreated = 0,
		ETeamChatRoomState__Creating = 1,
		ETeamChatRoomState__Created = 2,
		ETeamChatRoomState__Timeout = 3,
	};


	// Enum /Script/FortniteGame.EFortOfferSeenLevel
	enum EFortOfferSeenLevel
	{
		EFortOfferSeenLevel__Unseen = 0,
		EFortOfferSeenLevel__Notification = 1,
		EFortOfferSeenLevel__ItemShopVisited = 2,
		EFortOfferSeenLevel__OfferSectionVisited = 3,
		EFortOfferSeenLevel__Purchased = 4,
	};


	// Enum /Script/FortniteGame.EFortMobileFPSMode
	enum EFortMobileFPSMode
	{
		EFortMobileFPSMode__Mode_20Fps = 0,
		EFortMobileFPSMode__Mode_30Fps = 1,
		EFortMobileFPSMode__Mode_45Fps = 2,
		EFortMobileFPSMode__Mode_60Fps = 3,
		EFortMobileFPSMode__Mode_90Fps = 4,
		EFortMobileFPSMode__Mode_120Fps = 5,
		EFortMobileFPSMode__Num = 6,
	};


	// Enum /Script/FortniteGame.EFortContentQualityLevel
	enum EFortContentQualityLevel
	{
		EFortContentQualityLevel__Unset = 0,
		EFortContentQualityLevel__Quality_Base = 1,
		EFortContentQualityLevel__Quality_Medium = 2,
		EFortContentQualityLevel__Quality_High = 3,
		EFortContentQualityLevel__Num = 4,
	};


	// Enum /Script/FortniteGame.EFortAllowDownloadHighResMipsBehavior
	enum EFortAllowDownloadHighResMipsBehavior
	{
		EFortAllowDownloadHighResMipsBehavior__Disabled_Permanent = 0,
		EFortAllowDownloadHighResMipsBehavior__Disabled_Temp = 1,
		EFortAllowDownloadHighResMipsBehavior__Enabled = 2,
	};


	// Enum /Script/FortniteGame.EFortAllowCosmeticStreaming
	enum EFortAllowCosmeticStreaming
	{
		EFortAllowCosmeticStreaming__CodeSet_Enabled = 0,
		EFortAllowCosmeticStreaming__CodeSet_Disabled = 1,
		EFortAllowCosmeticStreaming__UserSet_Enabled = 2,
		EFortAllowCosmeticStreaming__UserSet_Disabled = 3,
		EFortAllowCosmeticStreaming__Default = 0,
	};


	// Enum /Script/FortniteGame.ESavedAccountType
	enum ESavedAccountType
	{
		ESavedAccountType__None = 0,
		ESavedAccountType__Facebook = 1,
		ESavedAccountType__Google = 2,
		ESavedAccountType__Epic = 3,
		ESavedAccountType__Device = 4,
		ESavedAccountType__Headless = 5,
		ESavedAccountType__Refresh = 6,
	};


	// Enum /Script/FortniteGame.EFortScalabilityMode
	enum EFortScalabilityMode
	{
		EFortScalabilityMode__LowPower = 0,
		EFortScalabilityMode__Frontend = 1,
	};


	// Enum /Script/FortniteGame.EShowInGamePictureInPicture
	enum EShowInGamePictureInPicture
	{
		EShowInGamePictureInPicture__Default = 0,
		EShowInGamePictureInPicture__Hide = 1,
		EShowInGamePictureInPicture__Show = 2,
	};


	// Enum /Script/FortniteGame.ERHIType
	enum ERHIType
	{
		ERHIType__D3D11 = 0,
		ERHIType__D3D12 = 1,
		ERHIType__Performance = 2,
	};


	// Enum /Script/FortniteGame.EFortAntiAliasingMethod
	enum EFortAntiAliasingMethod
	{
		EFortAntiAliasingMethod__Disabled = 0,
		EFortAntiAliasingMethod__FXAA = 1,
		EFortAntiAliasingMethod__TAA = 2,
		EFortAntiAliasingMethod__TSRLow = 3,
		EFortAntiAliasingMethod__TSRMedium = 4,
		EFortAntiAliasingMethod__TSRHigh = 5,
		EFortAntiAliasingMethod__TSREpic = 6,
		EFortAntiAliasingMethod__TSR = 6,
		EFortAntiAliasingMethod__DLSS = 7,
		EFortAntiAliasingMethod__Num = 8,
		EFortAntiAliasingMethod__Default = 6,
	};


	// Enum /Script/FortniteGame.EFortTemporalSuperResolutionSetting
	enum EFortTemporalSuperResolutionSetting
	{
		EFortTemporalSuperResolutionSetting__Recommended = 0,
		EFortTemporalSuperResolutionSetting__Performance = 1,
		EFortTemporalSuperResolutionSetting__Balanced = 2,
		EFortTemporalSuperResolutionSetting__Quality = 3,
		EFortTemporalSuperResolutionSetting__Native = 4,
		EFortTemporalSuperResolutionSetting__Custom = 5,
		EFortTemporalSuperResolutionSetting__Num = 6,
		EFortTemporalSuperResolutionSetting__Default = 0,
	};


	// Enum /Script/FortniteGame.EFortAccountLinkingUIConfig
	enum EFortAccountLinkingUIConfig
	{
		EFortAccountLinkingUIConfig__Disabled = 0,
		EFortAccountLinkingUIConfig__Default = 1,
		EFortAccountLinkingUIConfig__ExternalViewerOnly = 2,
		EFortAccountLinkingUIConfig__FullExternal = 3,
	};


	// Enum /Script/FortniteGame.EContentInstallState
	enum EContentInstallState
	{
		EContentInstallState__NotInstalled = 0,
		EContentInstallState__Pending = 1,
		EContentInstallState__Installed = 2,
		EContentInstallState__Unknown = 3,
		EContentInstallState__Error = 4,
	};


	// Enum /Script/FortniteGame.EFortClientUpdateType
	enum EFortClientUpdateType
	{
		EFortClientUpdateType__Client = 0,
		EFortClientUpdateType__ContentOnly = 1,
	};


	// Enum /Script/FortniteGame.EFortGlobalAction
	enum EFortGlobalAction
	{
		EFortGlobalAction__TrapConfirm = 0,
		EFortGlobalAction__TrapPicker = 1,
		EFortGlobalAction__BuildConfirm = 2,
		EFortGlobalAction__PerformBuildingEditInteraction = 3,
		EFortGlobalAction__PerformBuildingImprovementInteraction = 4,
		EFortGlobalAction__SwitchQuickBar = 5,
		EFortGlobalAction__Use = 6,
		EFortGlobalAction__Reload = 7,
		EFortGlobalAction__InventoryOrChatHold = 8,
		EFortGlobalAction__GamepadChangeMaterialOrHarvestHold = 9,
		EFortGlobalAction__GamepadNextWeaponOrHarvestHold = A,
		EFortGlobalAction__GamepadNextWeaponOrAltInteractOrHarvestHold = B,
		EFortGlobalAction__ChangeMaterial = C,
		EFortGlobalAction__Fire = D,
		EFortGlobalAction__RotatePrimitiveClockwise = E,
		EFortGlobalAction__Gadget1 = F,
		EFortGlobalAction__Gadget2 = 10,
		EFortGlobalAction__Ability1 = 11,
		EFortGlobalAction__Ability2 = 12,
		EFortGlobalAction__Ability3 = 13,
		EFortGlobalAction__ToggleFullScreenMap = 14,
		EFortGlobalAction__ToggleInventory = 15,
		EFortGlobalAction__Jump = 16,
		EFortGlobalAction__Crouch = 17,
		EFortGlobalAction__ShoppingCartCoast = 18,
		EFortGlobalAction__GolfCartEBrake = 19,
		EFortGlobalAction__GolfCartForward = 1A,
		EFortGlobalAction__GolfCartReverse = 1B,
		EFortGlobalAction__GolfCartHonk = 1C,
		EFortGlobalAction__GamepadToggleHarvestOrHoldCreativePhone = 1D,
		EFortGlobalAction__GamepadToggleCreativePhoneWeapon = 1E,
		EFortGlobalAction__Count = 1F,
	};


	// Enum /Script/FortniteGame.ETimeLimitForReplayCinematic
	enum ETimeLimitForReplayCinematic
	{
		ETimeLimitForReplayCinematic__OpenTimeLimit = 0,
		ETimeLimitForReplayCinematic__DurationTimeLimit = 1,
		ETimeLimitForReplayCinematic__DurationExtraTime = 2,
	};


	// Enum /Script/FortniteGame.EMapCaptureMethod
	enum EMapCaptureMethod
	{
		EMapCaptureMethod__None = 0,
		EMapCaptureMethod__LiveCapture = 1,
		EMapCaptureMethod__StaticCapture = 2,
	};


	// Enum /Script/FortniteGame.EFortInteractContextInfoType
	enum EFortInteractContextInfoType
	{
		EFortInteractContextInfoType__Standard = 0,
		EFortInteractContextInfoType__Crafting = 1,
	};


	// Enum /Script/FortniteGame.ELevelManagementTerrainType
	enum ELevelManagementTerrainType
	{
		ELevelManagementTerrainType__Level = 0,
		ELevelManagementTerrainType__Terrain = 1,
	};


	// Enum /Script/FortniteGame.EFortMiniMapDrawCategory
	enum EFortMiniMapDrawCategory
	{
		EFortMiniMapDrawCategory__AthenaBackground = 0,
		EFortMiniMapDrawCategory__MapLocation = 1,
		EFortMiniMapDrawCategory__SafeZone = 2,
		EFortMiniMapDrawCategory__BusPath = 3,
		EFortMiniMapDrawCategory__SpecialActorIcon = 4,
		EFortMiniMapDrawCategory__SquadPin = 5,
		EFortMiniMapDrawCategory__MapIndicator = 6,
		EFortMiniMapDrawCategory__MapCursor = 7,
		EFortMiniMapDrawCategory__Elimination = 8,
	};


	// Enum /Script/FortniteGame.ETimerOverrideSetting
	enum ETimerOverrideSetting
	{
		ETimerOverrideSetting__DefaultBehavior = 0,
		ETimerOverrideSetting__ForceShow = 1,
		ETimerOverrideSetting__ForceHide = 2,
		ETimerOverrideSetting__ShowAtEnd = 3,
	};


	// Enum /Script/FortniteGame.EFortNearbyActorsTypes
	enum EFortNearbyActorsTypes
	{
		EFortNearbyActorsTypes__None = 0,
		EFortNearbyActorsTypes__RealPlayers = 1,
		EFortNearbyActorsTypes__Bots = 2,
		EFortNearbyActorsTypes__NPCs = 4,
		EFortNearbyActorsTypes__AIPawns = 8,
		EFortNearbyActorsTypes__All = F,
	};


	// Enum /Script/FortniteGame.EActionStatus
	enum EActionStatus
	{
		EActionStatus__Pending = 0,
		EActionStatus__Running = 1,
		EActionStatus__Completed = 2,
	};


	// Enum /Script/FortniteGame.EFortRewardType
	enum EFortRewardType
	{
		EFortRewardType__Default = 0,
		EFortRewardType__Missed = 1,
		EFortRewardType__Max_None = 2,
	};


	// Enum /Script/FortniteGame.EFortPlayerWorkOverFramesMode
	enum EFortPlayerWorkOverFramesMode
	{
		EFortPlayerWorkOverFramesMode__NotProcessing = 0,
		EFortPlayerWorkOverFramesMode__PreInitializeComponents = 1,
		EFortPlayerWorkOverFramesMode__DefaultPartsWhileWaiting = 2,
		EFortPlayerWorkOverFramesMode__UpdateCharacterCustomization = 3,
		EFortPlayerWorkOverFramesMode__NumTypes = 4,
	};


	// Enum /Script/FortniteGame.EFortPlayerWorkOverFramesStage
	enum EFortPlayerWorkOverFramesStage
	{
		EFortPlayerWorkOverFramesStage__NotProcessing = 0,
		EFortPlayerWorkOverFramesStage__PreloadingParts = 1,
		EFortPlayerWorkOverFramesStage__QueuePostLoad = 2,
		EFortPlayerWorkOverFramesStage__PostLoad = 3,
		EFortPlayerWorkOverFramesStage__InitializeCharacterParts = 4,
		EFortPlayerWorkOverFramesStage__FinishUpdatingParts = 5,
		EFortPlayerWorkOverFramesStage__FinishedCustomization = 6,
		EFortPlayerWorkOverFramesStage__NumTypes = 7,
	};


	// Enum /Script/FortniteGame.EFortPlayerPartState
	enum EFortPlayerPartState
	{
		EFortPlayerPartState__NeverInitalized = 0,
		EFortPlayerPartState__AssetsPreloading = 1,
		EFortPlayerPartState__QueuedForInitialization = 2,
		EFortPlayerPartState__CurrentlyInitializing = 3,
		EFortPlayerPartState__InitializationComplete = 4,
		EFortPlayerPartState__InitializationComplete_EmptyPart = 5,
		EFortPlayerPartState__InitializationComplete_Cancelled = 6,
		EFortPlayerPartState__InitializationFailed_NoParts = 7,
		EFortPlayerPartState__NumTypes = 8,
	};


	// Enum /Script/FortniteGame.EPartsShowingMode
	enum EPartsShowingMode
	{
		EPartsShowingMode__NeverInitalized = 0,
		EPartsShowingMode__ShowingTemporaryDefaultParts = 1,
		EPartsShowingMode__ShowingTemporaryFallbackParts = 2,
		EPartsShowingMode__ShowingDefaultParts = 3,
		EPartsShowingMode__ShowingFallbackParts = 4,
		EPartsShowingMode__ShowingDesiredParts = 5,
	};


	// Enum /Script/FortniteGame.EDBNOType
	enum EDBNOType
	{
		EDBNOType__On = 0,
		EDBNOType__Off = 1,
		EDBNOType__NotWhenRespawning = 2,
	};


	// Enum /Script/FortniteGame.EFortGameType
	enum EFortGameType
	{
		EFortGameType__BR = 0,
		EFortGameType__ZeroBuild = 1,
		EFortGameType__Creative = 2,
		EFortGameType__CreativeLTM = 3,
		EFortGameType__Playground = 4,
		EFortGameType__STW = 5,
		EFortGameType__BRArena = 6,
		EFortGameType__BRLTM = 7,
		EFortGameType__Social = 8,
		EFortGameType__VKEdit = 9,
		EFortGameType__VKPlay = A,
		EFortGameType__DelMar = B,
		EFortGameType__Festival = C,
		EFortGameType__FestivalMainStage = D,
		EFortGameType__FestivalJamStage = E,
		EFortGameType__Juno = F,
		EFortGameType__FestivalBattleStage = 10,
		EFortGameType__BlastBerry = 11,
	};


	// Enum /Script/FortniteGame.EPortalLinkCodeLockMode
	enum EPortalLinkCodeLockMode
	{
		EPortalLinkCodeLockMode__NeverLocked = 0,
		EPortalLinkCodeLockMode__WindowLocked = 1,
		EPortalLinkCodeLockMode__AlwaysLocked = 2,
	};


	// Enum /Script/FortniteGame.ERegisteredPlayerUnregistrationStatus
	enum ERegisteredPlayerUnregistrationStatus
	{
		ERegisteredPlayerUnregistrationStatus__Registered = 0,
		ERegisteredPlayerUnregistrationStatus__UnregistrationStarting = 1,
		ERegisteredPlayerUnregistrationStatus__UnregistrationWaitingForInitialLock = 2,
		ERegisteredPlayerUnregistrationStatus__UnregistrationWaitingForScoreSave = 3,
		ERegisteredPlayerUnregistrationStatus__UnregistrationWaitingForFinalSave = 4,
		ERegisteredPlayerUnregistrationStatus__UnregistrationWaitingForProfileUnlock = 5,
		ERegisteredPlayerUnregistrationStatus__UnregistrationComplete = 6,
	};


	// Enum /Script/FortniteGame.EFortScriptedActionSource
	enum EFortScriptedActionSource
	{
		EFortScriptedActionSource__Quest = 0,
		EFortScriptedActionSource__Token = 1,
		EFortScriptedActionSource__Manual = 2,
		EFortScriptedActionSource__Max_None = 3,
	};


	// Enum /Script/FortniteGame.EFortScriptedActionEnvironment
	enum EFortScriptedActionEnvironment
	{
		EFortScriptedActionEnvironment__FrontEnd = 0,
		EFortScriptedActionEnvironment__GameServer = 1,
		EFortScriptedActionEnvironment__GameClient = 2,
		EFortScriptedActionEnvironment__Max_None = 3,
	};


	// Enum /Script/FortniteGame.EFortSoundIndicatorTypes
	enum EFortSoundIndicatorTypes
	{
		EFortSoundIndicatorTypes__Generic = 0,
		EFortSoundIndicatorTypes__FootStep = 1,
		EFortSoundIndicatorTypes__Gunshot = 2,
		EFortSoundIndicatorTypes__Chest = 3,
		EFortSoundIndicatorTypes__Glider = 4,
		EFortSoundIndicatorTypes__Vehicle = 5,
		EFortSoundIndicatorTypes__Infected = 6,
		EFortSoundIndicatorTypes__Healing = 7,
		EFortSoundIndicatorTypes__COUNT = 8,
	};


	// Enum /Script/FortniteGame.EFortStreamLimits
	enum EFortStreamLimits
	{
		EFortStreamLimits__None = 0,
		EFortStreamLimits__Discovery = 1,
		EFortStreamLimits__InWorld = 2,
		EFortStreamLimits__Creative = 3,
		EFortStreamLimits__PiP = 4,
		EFortStreamLimits__FNEvents = 5,
	};


	// Enum /Script/FortniteGame.EFortTODMPostProcess
	enum EFortTODMPostProcess
	{
		EFortTODMPostProcess__Morning = 0,
		EFortTODMPostProcess__Day = 1,
		EFortTODMPostProcess__Evening = 2,
		EFortTODMPostProcess__Night = 3,
		EFortTODMPostProcess__Classic = 4,
		EFortTODMPostProcess__NumPostprocess = 5,
	};


	// Enum /Script/FortniteGame.ESettingTab
	enum ESettingTab
	{
		ESettingTab__None = 0,
		ESettingTab__Video = 1,
		ESettingTab__Game = 2,
		ESettingTab__GameUI = 3,
		ESettingTab__Brightness = 4,
		ESettingTab__Audio = 5,
		ESettingTab__Accessibility = 6,
		ESettingTab__Input = 7,
		ESettingTab__MouseAndKeyboard = 8,
		ESettingTab__Controller = 9,
		ESettingTab__ControllerSensitivity = A,
		ESettingTab__TouchAndMotion = B,
		ESettingTab__TouchWeapon = C,
		ESettingTab__Account = D,
		ESettingTab__CreativeWorld = E,
		ESettingTab__CreativePlayer = F,
	};


	// Enum /Script/FortniteGame.EFortItemCategoryOrdinal
	enum EFortItemCategoryOrdinal
	{
		EFortItemCategoryOrdinal__Primary = 0,
		EFortItemCategoryOrdinal__Secondary = 1,
		EFortItemCategoryOrdinal__Tertiary = 2,
	};


	// Enum /Script/FortniteGame.EChangeInStructDetected
	enum EChangeInStructDetected
	{
		EChangeInStructDetected__Dirty = 0,
		EChangeInStructDetected__Clean = 1,
	};


	// Enum /Script/FortniteGame.EFortItemViewRotationMode
	enum EFortItemViewRotationMode
	{
		EFortItemViewRotationMode__None = 0,
		EFortItemViewRotationMode__BoundsPivot = 1,
		EFortItemViewRotationMode__World = 2,
		EFortItemViewRotationMode__Relative = 3,
		EFortItemViewRotationMode__Self = 4,
	};


	// Enum /Script/FortniteGame.EFortTileEdgeType
	enum EFortTileEdgeType
	{
		EFortTileEdgeType__Undefined = 0,
		EFortTileEdgeType__Outer = 1,
		EFortTileEdgeType__Transition = 2,
		EFortTileEdgeType__Inner = 3,
		EFortTileEdgeType__Border = 4,
		EFortTileEdgeType__BorderTransitionSingle = 5,
		EFortTileEdgeType__BorderTransitionDouble = 6,
	};


	// Enum /Script/FortniteGame.EFortIndicatorState
	enum EFortIndicatorState
	{
		EFortIndicatorState__Hidden = 0,
		EFortIndicatorState__OnlyFriendsVisible = 1,
		EFortIndicatorState__Visible = 2,
	};


	// Enum /Script/FortniteGame.EKeepContainerType
	enum EKeepContainerType
	{
		EKeepContainerType__Base = 0,
		EKeepContainerType__Storeroom = 1,
		EKeepContainerType__FirstAid = 2,
		EKeepContainerType__Armory = 3,
		EKeepContainerType__Workshop = 4,
		EKeepContainerType__AmmoStash = 5,
		EKeepContainerType__Max = 6,
	};


	// Enum /Script/FortniteGame.EKeepDefenseState
	enum EKeepDefenseState
	{
		EKeepDefenseState__Inactive = 0,
		EKeepDefenseState__Warmup = 1,
		EKeepDefenseState__Defense = 2,
		EKeepDefenseState__LastAlive = 3,
		EKeepDefenseState__Max = 4,
	};


	// Enum /Script/FortniteGame.EFortCraftFailCause
	enum EFortCraftFailCause
	{
		EFortCraftFailCause__Unknown = 0,
		EFortCraftFailCause__NotEnoughResources = 1,
		EFortCraftFailCause__InventoryFull = 2,
		EFortCraftFailCause__InsufficientTeamLevel = 3,
		EFortCraftFailCause__CraftingQueueFull = 4,
		EFortCraftFailCause__CurrentlyLocked = 5,
		EFortCraftFailCause__OverflowSchematic = 6,
	};


	// Enum /Script/FortniteGame.ECraftingUpgradeDataFlags
	enum ECraftingUpgradeDataFlags
	{
		ECraftingUpgradeDataFlags__None = 0,
		ECraftingUpgradeDataFlags__OverrideWrap = 1,
		ECraftingUpgradeDataFlags__Durability = 2,
		ECraftingUpgradeDataFlags__PhantomAmmo = 4,
		ECraftingUpgradeDataFlags__LoadedAmmo = 8,
		ECraftingUpgradeDataFlags__ModSlots = 10,
		ECraftingUpgradeDataFlags__All = FF,
	};


	// Enum /Script/FortniteGame.EFortBangType
	enum EFortBangType
	{
		EFortBangType__Invalid = 0,
		EFortBangType__Custom = 1,
		EFortBangType__PlayTab = 2,
		EFortBangType__VaultTab = 3,
		EFortBangType__StoreTab = 4,
		EFortBangType__QuestsTab = 5,
		EFortBangType__SubGameAccessChanged = 6,
		EFortBangType__QuestsButton = 7,
		EFortBangType__MainMenu = 8,
		EFortBangType__VaultSchematics = 9,
		EFortBangType__VaultLeadSurvivors = A,
		EFortBangType__VaultSurvivors = B,
		EFortBangType__VaultHeroes = C,
		EFortBangType__VaultDefenders = D,
		EFortBangType__VaultResources = E,
		EFortBangType__VaultMelee = F,
		EFortBangType__VaultRanged = 10,
		EFortBangType__VaultConsumables = 11,
		EFortBangType__VaultIngredients = 12,
		EFortBangType__VaultTraps = 13,
		EFortBangType__BattlePassTab = 14,
		EFortBangType__SpecialEventTab = 15,
		EFortBangType__WinterfestTab = 16,
		EFortBangType__CosmeticsTab = 17,
		EFortBangType__AthenaDirectedAcquisitionTab = 18,
		EFortBangType__MultiProductItemShop = 19,
		EFortBangType__AthenaChallengesTab = 1A,
		EFortBangType__AthenaCareerTab = 1B,
		EFortBangType__STWCommand = 1C,
		EFortBangType__STWCommand_Heroes = 1D,
		EFortBangType__STWCommand_Heroes_Manage = 1E,
		EFortBangType__STWCommand_Heroes_HeroLoadout = 1F,
		EFortBangType__STWCommand_Heroes_Defenders = 20,
		EFortBangType__STWCommand_Heroes_Expeditions = 21,
		EFortBangType__STWCommand_Survivors = 22,
		EFortBangType__STWCommand_Survivors_Manage = 23,
		EFortBangType__STWCommand_Survivors_Squads = 24,
		EFortBangType__STWCommand_Upgrades = 25,
		EFortBangType__STWCommand_Research = 26,
		EFortBangType__STWCommand_AccountXP = 27,
		EFortBangType__STWArmory = 28,
		EFortBangType__STWArmory_Schematics = 29,
		EFortBangType__STWArmory_Backpack = 2A,
		EFortBangType__STWArmory_Storage = 2B,
		EFortBangType__STWArmory_CollectionBook = 2C,
		EFortBangType__STWArmory_Transform = 2D,
		EFortBangType__STWArmory_Resources = 2E,
		EFortBangType__STWLocker = 2F,
		EFortBangType__SocialButton = 30,
	};


	// Enum /Script/FortniteGame.ETutorialType
	enum ETutorialType
	{
		ETutorialType__None = 0,
		ETutorialType__Callout = 1,
		ETutorialType__GuardScreen = 2,
		ETutorialType__WidgetIntro = 3,
		ETutorialType__Highlight = 4,
	};


	// Enum /Script/FortniteGame.EFortNotificationQueueType
	enum EFortNotificationQueueType
	{
		EFortNotificationQueueType__Toasts = 0,
		EFortNotificationQueueType__Stickies = 1,
		EFortNotificationQueueType__Messages = 2,
		EFortNotificationQueueType__Max = 3,
	};


	// Enum /Script/FortniteGame.EFortClientAnnouncementQueueType
	enum EFortClientAnnouncementQueueType
	{
		EFortClientAnnouncementQueueType__Toasts = 0,
		EFortClientAnnouncementQueueType__Stickies = 1,
		EFortClientAnnouncementQueueType__Max = 2,
	};


	// Enum /Script/FortniteGame.EStormShieldDefense
	enum EStormShieldDefense
	{
		EStormShieldDefense__NotSSD = 0,
		EStormShieldDefense__StormShieldExpansion = 1,
		EStormShieldDefense__WargameSimulation = 2,
	};


	// Enum /Script/FortniteGame.EItemListViewDisplayType
	enum EItemListViewDisplayType
	{
		EItemListViewDisplayType__World = 0,
		EItemListViewDisplayType__Outpost = 1,
		EItemListViewDisplayType__Account = 2,
		EItemListViewDisplayType__DeployableBase = 3,
		EItemListViewDisplayType__Max = 4,
	};


	// Enum /Script/FortniteGame.EFortGliderType
	enum EFortGliderType
	{
		EFortGliderType__Glider = 0,
		EFortGliderType__Umbrella = 1,
	};


	// Enum /Script/FortniteGame.EPTTState
	enum EPTTState
	{
		EPTTState__Enabled = 0,
		EPTTState__MicDisabled = 1,
		EPTTState__AllSoundDisabled = 2,
	};


	// Enum /Script/FortniteGame.EFortPickerMode
	enum EFortPickerMode
	{
		EFortPickerMode__BuildingCategory = 0,
		EFortPickerMode__TrapCategory = 1,
		EFortPickerMode__WeaponCategory = 2,
		EFortPickerMode__SocialCategory = 3,
		EFortPickerMode__Building = 4,
		EFortPickerMode__Trap = 5,
		EFortPickerMode__TrapRadial = 6,
		EFortPickerMode__Weapon = 7,
		EFortPickerMode__Social = 8,
		EFortPickerMode__DirectPickEmote = 9,
		EFortPickerMode__DirectPickSpray = A,
		EFortPickerMode__SquadQuickChat = B,
		EFortPickerMode__WeaponsSlotted = C,
		EFortPickerMode__MusicSource = D,
		EFortPickerMode__NPCCommand = E,
		EFortPickerMode__SquadRequest = F,
	};


	// Enum /Script/FortniteGame.EFortMatchmakingTileStyle
	enum EFortMatchmakingTileStyle
	{
		EFortMatchmakingTileStyle__None = 0,
		EFortMatchmakingTileStyle__Special = 1,
		EFortMatchmakingTileStyle__HighStakes = 2,
		EFortMatchmakingTileStyle__Showdown = 3,
	};


	// Enum /Script/FortniteGame.EFortMatchmakingViolatorStyle
	enum EFortMatchmakingViolatorStyle
	{
		EFortMatchmakingViolatorStyle__None = 0,
		EFortMatchmakingViolatorStyle__Basic = 1,
		EFortMatchmakingViolatorStyle__HighStakes = 2,
		EFortMatchmakingViolatorStyle__Showdown = 3,
		EFortMatchmakingViolatorStyle__FirstTimeUser = 4,
	};


	// Enum /Script/FortniteGame.EEventTournamentType
	enum EEventTournamentType
	{
		EEventTournamentType__Online = 0,
		EEventTournamentType__Onsite = 1,
		EEventTournamentType__Test = 2,
		EEventTournamentType__Unknown = 3,
	};


	// Enum /Script/FortniteGame.EFortCreativeAdType
	enum EFortCreativeAdType
	{
		EFortCreativeAdType__Default = 0,
		EFortCreativeAdType__Playset = 1,
		EFortCreativeAdType__Toy = 2,
		EFortCreativeAdType__Game = 3,
		EFortCreativeAdType__Island = 4,
		EFortCreativeAdType__Knob = 5,
	};


	// Enum /Script/FortniteGame.EFortCreativeAdColorPreset
	enum EFortCreativeAdColorPreset
	{
		EFortCreativeAdColorPreset__Default = 0,
		EFortCreativeAdColorPreset__Emphasized = 1,
		EFortCreativeAdColorPreset__Common = 2,
		EFortCreativeAdColorPreset__Uncommon = 3,
		EFortCreativeAdColorPreset__Rare = 4,
		EFortCreativeAdColorPreset__Epic = 5,
		EFortCreativeAdColorPreset__Legendary = 6,
	};


	// Enum /Script/FortniteGame.EFortStartupPhase
	enum EFortStartupPhase
	{
		EFortStartupPhase__InitializingEngine = 0,
		EFortStartupPhase__EarlyStartupLoading = 1,
		EFortStartupPhase__EarlyStartupFinished = 2,
		EFortStartupPhase__GameStartupLoading = 3,
		EFortStartupPhase__GameStartupFinished = 4,
		EFortStartupPhase__Invalid = 5,
		EFortStartupPhase__Count = 5,
	};


	// Enum /Script/FortniteGame.EFortPlaylistTeamSizeType
	enum EFortPlaylistTeamSizeType
	{
		EFortPlaylistTeamSizeType__Solo = 0,
		EFortPlaylistTeamSizeType__Duo = 1,
		EFortPlaylistTeamSizeType__Trio = 2,
		EFortPlaylistTeamSizeType__Squad = 3,
		EFortPlaylistTeamSizeType__LargeTeam = 4,
	};


	// Enum /Script/FortniteGame.EFortQuickTimeEventResult
	enum EFortQuickTimeEventResult
	{
		EFortQuickTimeEventResult__None = 0,
		EFortQuickTimeEventResult__Miss = 1,
		EFortQuickTimeEventResult__Good = 2,
		EFortQuickTimeEventResult__Great = 3,
		EFortQuickTimeEventResult__Perfect = 4,
	};


	// Enum /Script/FortniteGame.EMissionStormShieldState
	enum EMissionStormShieldState
	{
		EMissionStormShieldState__IDLE = 0,
		EMissionStormShieldState__GROWING = 1,
		EMissionStormShieldState__SHRINKING = 2,
	};


	// Enum /Script/FortniteGame.EHighResTexturesChangeReason
	enum EHighResTexturesChangeReason
	{
		EHighResTexturesChangeReason__UserGameSettings = 0,
		EHighResTexturesChangeReason__QualityLevelSelectScreenSettings = 1,
		EHighResTexturesChangeReason__ContentOnDemandFreedUpMemorySelection = 2,
		EHighResTexturesChangeReason__ContentOnDemandDisplayOutOfMemory = 3,
		EHighResTexturesChangeReason__ContentOnDemandOutOfMemoryErrorClosed = 4,
	};


	// Enum /Script/FortniteGame.EFortItemInspectionMode
	enum EFortItemInspectionMode
	{
		EFortItemInspectionMode__Overview = 0,
		EFortItemInspectionMode__Details = 1,
		EFortItemInspectionMode__View = 2,
		EFortItemInspectionMode__Evolution = 3,
		EFortItemInspectionMode__Upgrade = 4,
		EFortItemInspectionMode__UpgradeRarity = 5,
		EFortItemInspectionMode__Promotion = 6,
	};


	// Enum /Script/FortniteGame.EFortContentRating
	enum EFortContentRating
	{
		EFortContentRating__IARC_Everyone = 0,
		EFortContentRating__IARC_TenPlus = 1,
		EFortContentRating__IARC_Teen = 2,
	};


	// Enum /Script/FortniteGame.EFortPlayerPawnType
	enum EFortPlayerPawnType
	{
		EFortPlayerPawnType__Fortnite = 0,
		EFortPlayerPawnType__Bean = 1,
	};


	// Enum /Script/FortniteGame.EFortUserCloudRequestType
	enum EFortUserCloudRequestType
	{
		EFortUserCloudRequestType__LoadCloudFile = 0,
		EFortUserCloudRequestType__SaveCloudFile = 1,
	};


	// Enum /Script/FortniteGame.EFortUserCloudRequestResult
	enum EFortUserCloudRequestResult
	{
		EFortUserCloudRequestResult__Success = 0,
		EFortUserCloudRequestResult__Failure_CloudStorageDisabled = 1,
		EFortUserCloudRequestResult__Failure_CloudStorageError = 2,
		EFortUserCloudRequestResult__Failure_FileNotFoundInUserFileList = 3,
		EFortUserCloudRequestResult__Failure_SavingNotAllowedForSpecifiedUser = 4,
	};


	// Enum /Script/FortniteGame.EUserOptionDefinitionGenerationFlags
	enum EUserOptionDefinitionGenerationFlags
	{
		EUserOptionDefinitionGenerationFlags__None = 0,
		EUserOptionDefinitionGenerationFlags__AutoAdded = 1,
		EUserOptionDefinitionGenerationFlags__Inherited = 2,
	};


	// Enum /Script/FortniteGame.EFloatRangeType
	enum EFloatRangeType
	{
		EFloatRangeType__Linear = 0,
		EFloatRangeType__Exponential = 1,
	};


	// Enum /Script/FortniteGame.EVehicleMovementMode
	enum EVehicleMovementMode
	{
		EVehicleMovementMode__OnGround = 0,
		EVehicleMovementMode__InAir = 1,
		EVehicleMovementMode__WipeOut = 2,
		EVehicleMovementMode__MaxCount = 3,
	};


	// Enum /Script/FortniteGame.EVehicleSessionEndReason
	enum EVehicleSessionEndReason
	{
		EVehicleSessionEndReason__Invalid = 0,
		EVehicleSessionEndReason__NoPassengers = 1,
	};


	// Enum /Script/FortniteGame.EVehicleFuelState
	enum EVehicleFuelState
	{
		EVehicleFuelState__Uninitialized = 0,
		EVehicleFuelState__UsingVehicleFuel = 1,
		EVehicleFuelState__NotUsingVehicleFuel = 2,
	};


	// Enum /Script/FortniteGame.EVehicleExitLocationSelectionBehavior
	enum EVehicleExitLocationSelectionBehavior
	{
		EVehicleExitLocationSelectionBehavior__Unspecified = 0,
		EVehicleExitLocationSelectionBehavior__BySeat = 1,
		EVehicleExitLocationSelectionBehavior__ByPlayerCameraForward = 2,
		EVehicleExitLocationSelectionBehavior__ByClosestToGivenLocation = 3,
	};


	// Enum /Script/FortniteGame.ETryExitVehicleBehavior
	enum ETryExitVehicleBehavior
	{
		ETryExitVehicleBehavior__DoNotForce = 0,
		ETryExitVehicleBehavior__ForceOnBlocking = 1,
		ETryExitVehicleBehavior__ForceAlways = 2,
	};


	// Enum /Script/FortniteGame.EFortWorldRecordAction
	enum EFortWorldRecordAction
	{
		EFortWorldRecordAction__LoadWorldOnly = 0,
		EFortWorldRecordAction__SaveWorldOnly = 1,
		EFortWorldRecordAction__SaveZoneAndWorld = 2,
		EFortWorldRecordAction__LoadZoneAndWorld = 3,
		EFortWorldRecordAction__SaveDeployableBasesAndWorld = 4,
		EFortWorldRecordAction__Max_None = 5,
	};


	// Enum /Script/FortniteGame.EFortWorldRecordState
	enum EFortWorldRecordState
	{
		EFortWorldRecordState__StartProcessing = 0,
		EFortWorldRecordState__WaitingForResponse = 1,
		EFortWorldRecordState__RetrievingTheaterInformation = 2,
		EFortWorldRecordState__RetrievingZoneInformation = 3,
		EFortWorldRecordState__LoadingWorldRecord = 4,
		EFortWorldRecordState__LoadingZoneRecord = 5,
		EFortWorldRecordState__SavingZoneRecord = 6,
		EFortWorldRecordState__SavingPlayerProfiles = 7,
		EFortWorldRecordState__SavingPlayerDeployableBases = 8,
		EFortWorldRecordState__Succeeded = 9,
		EFortWorldRecordState__Failed = A,
		EFortWorldRecordState__Max_None = B,
	};


	// Enum /Script/FortniteGame.EFortQueuedActionUserStatus
	enum EFortQueuedActionUserStatus
	{
		EFortQueuedActionUserStatus__Succeeded = 0,
		EFortQueuedActionUserStatus__Failed = 1,
		EFortQueuedActionUserStatus__WaitingForCloudRequest = 2,
		EFortQueuedActionUserStatus__WaitingForProfileSave = 3,
	};


	// Enum /Script/FortniteGame.EFortLevelStreamingState
	enum EFortLevelStreamingState
	{
		LSS_Unloaded = 0,
		LSS_Loaded = 1,
		LSS_UnconditionalFoundationsUpdated = 2,
		LSS_AllFoundationsUpdated = 3,
		LSS_NewActorsCreatedButNotUpdated = 4,
		LSS_AllUpdated = 5,
		LSS_Ready = 6,
	};


	// Enum /Script/FortniteGame.EFortWorldManagerState
	enum EFortWorldManagerState
	{
		WMS_Created = 0,
		WMS_QueryingWorld = 1,
		WMS_WorldQueryComplete = 2,
		WMS_CreatingNewWorld = 3,
		WMS_LoadingExistingWorld = 4,
		WMS_Running = 5,
		WMS_Failed = 6,
	};


	// Enum /Script/FortniteGame.EDeathCauseReason
	enum EDeathCauseReason
	{
		EDeathCauseReason__SelfInflicted = 0,
		EDeathCauseReason__SelfInflictedDBNO = 1,
		EDeathCauseReason__Eliminated = 2,
		EDeathCauseReason__EliminatedDBNO = 3,
	};


	// Enum /Script/FortniteGame.EFortInputGameMode
	enum EFortInputGameMode
	{
		EFortInputGameMode__SaveTheWorld = 0,
		EFortInputGameMode__Athena = 1,
	};


	// Enum /Script/FortniteGame.EMutatorAddTarget
	enum EMutatorAddTarget
	{
		EMutatorAddTarget__FortGameStateAthena = 0,
		EMutatorAddTarget__FortMinigame = 1,
		EMutatorAddTarget__FortGameModeAthena = 2,
	};


	// Enum /Script/FortniteGame.EFortGameFeatureActionAddComponentMode
	enum EFortGameFeatureActionAddComponentMode
	{
		EFortGameFeatureActionAddComponentMode__None = 0,
		EFortGameFeatureActionAddComponentMode__Game = 1,
		EFortGameFeatureActionAddComponentMode__Editor = 2,
	};


	// Enum /Script/FortniteGame.EKeyboardMouseKeybindingsAtRegistrationTime
	enum EKeyboardMouseKeybindingsAtRegistrationTime
	{
		EKeyboardMouseKeybindingsAtRegistrationTime__Invalid = 0,
		EKeyboardMouseKeybindingsAtRegistrationTime__GameFeatureRegistrationTime = 1,
		EKeyboardMouseKeybindingsAtRegistrationTime__GameFeatureActivationTime = 2,
	};


	// Enum /Script/FortniteGame.EInterfaceWithGameInstanceSubsystemStage
	enum EInterfaceWithGameInstanceSubsystemStage
	{
		EInterfaceWithGameInstanceSubsystemStage__OnGameFeatureActivation = 0,
		EInterfaceWithGameInstanceSubsystemStage__OnGameFeatureRegistration = 1,
	};


	// Enum /Script/FortniteGame.EFrontendRequirement
	enum EFrontendRequirement
	{
		EFrontendRequirement__None = 0,
		EFrontendRequirement__RequireFrontend = 1,
		EFrontendRequirement__RequireNotFrontend = 2,
	};


	// Enum /Script/FortniteGame.EFortGameplayDataTrackerEventContributionType
	enum EFortGameplayDataTrackerEventContributionType
	{
		EFortGameplayDataTrackerEventContributionType__Accumulate = 0,
		EFortGameplayDataTrackerEventContributionType__Set = 1,
	};


	// Enum /Script/FortniteGame.EFortHelpItemType
	enum EFortHelpItemType
	{
		EFortHelpItemType__Header = 0,
		EFortHelpItemType__Entry = 1,
		EFortHelpItemType__Max = 2,
	};


	// Enum /Script/FortniteGame.EFortHelpContentLocation
	enum EFortHelpContentLocation
	{
		EFortHelpContentLocation__Top = 0,
		EFortHelpContentLocation__Bottom = 1,
		EFortHelpContentLocation__Max = 2,
	};


	// Enum /Script/FortniteGame.EMapCursorHoverTarget
	enum EMapCursorHoverTarget
	{
		EMapCursorHoverTarget__None = 0,
		EMapCursorHoverTarget__Marker = 1,
		EMapCursorHoverTarget__SpecialActor = 2,
	};


	// Enum /Script/FortniteGame.EQuickHealingRequirementFlags
	enum EQuickHealingRequirementFlags
	{
		EQuickHealingRequirementFlags__Nothing = 0,
		EQuickHealingRequirementFlags__NeedsHealing = 1,
		EQuickHealingRequirementFlags__NeedsShields = 2,
		EQuickHealingRequirementFlags__NeedsBoth = 3,
		EQuickHealingRequirementFlags__Invalid = 4,
	};


	// Enum /Script/FortniteGame.EPageItemTileSize
	enum EPageItemTileSize
	{
		EPageItemTileSize__Size_1_x = 0,
		EPageItemTileSize__Size_2_x = 1,
		EPageItemTileSize__Size_2_x = 2,
		EPageItemTileSize__Size_3_x = 3,
		EPageItemTileSize__Size_3_x = 4,
		EPageItemTileSize__Count = 5,
	};


	// Enum /Script/FortniteGame.EFortVariantTokenEquipRule
	enum EFortVariantTokenEquipRule
	{
		EFortVariantTokenEquipRule__EquipBaseVariantOnly = 0,
		EFortVariantTokenEquipRule__AlsoEquipAdditionalGrants = 1,
		EFortVariantTokenEquipRule__AlsoEquipPreviewGrantsIfOwned = 2,
		EFortVariantTokenEquipRule__EquipAllExceptUnowned = 3,
	};


	// Enum /Script/FortniteGame.EFortAttributeDisplay
	enum EFortAttributeDisplay
	{
		EFortAttributeDisplay__BasicInt = 0,
		EFortAttributeDisplay__NegativeImpliesInfiniteInt = 1,
		EFortAttributeDisplay__BasicFloat = 2,
		EFortAttributeDisplay__NegativeImpliesInfiniteFloat = 3,
		EFortAttributeDisplay__BasicString = 4,
		EFortAttributeDisplay__NormalizedPercentage = 5,
		EFortAttributeDisplay__StringArray = 6,
		EFortAttributeDisplay__SlateBrush = 7,
		EFortAttributeDisplay__DoNotDisplay = 8,
		EFortAttributeDisplay__None_Max = 9,
	};


	// Enum /Script/FortniteGame.ESmartBuildMode
	enum ESmartBuildMode
	{
		ESmartBuildMode__None = 0,
		ESmartBuildMode__Auto = 1,
		ESmartBuildMode__Box = 2,
		ESmartBuildMode__Bridge = 3,
		ESmartBuildMode__Tower = 4,
		ESmartBuildMode__ProtectedRamp = 5,
	};


	// Enum /Script/FortniteGame.ESmartBuildPlayerLocationInCell
	enum ESmartBuildPlayerLocationInCell
	{
		ESmartBuildPlayerLocationInCell__Anywhere = 0,
		ESmartBuildPlayerLocationInCell__Forward = 1,
		ESmartBuildPlayerLocationInCell__Back = 2,
	};


	// Enum /Script/FortniteGame.ECodeTokenPlatform
	enum ECodeTokenPlatform
	{
		ECodeTokenPlatform__PC = 0,
		ECodeTokenPlatform__PS4 = 1,
		ECodeTokenPlatform__XBOX = 2,
	};


	// Enum /Script/FortniteGame.EFortConditionalResourceItemTest
	enum EFortConditionalResourceItemTest
	{
		EFortConditionalResourceItemTest__CanEarnMtx = 0,
	};


	// Enum /Script/FortniteGame.EFortCreativePlotPermission
	enum EFortCreativePlotPermission
	{
		EFortCreativePlotPermission__Private = 0,
		EFortCreativePlotPermission__Public = 1,
	};


	// Enum /Script/FortniteGame.ERealEstateOffsetType
	enum ERealEstateOffsetType
	{
		ERealEstateOffsetType__CustomOffsetFromCorner = 0,
		ERealEstateOffsetType__Center = 1,
	};


	// Enum /Script/FortniteGame.EFriendChestInstancedType
	enum EFriendChestInstancedType
	{
		EFriendChestInstancedType__ItemDefinition = 0,
		EFriendChestInstancedType__FreshDripCounter = 1,
		EFriendChestInstancedType__GrantXp = 2,
		EFriendChestInstancedType__Undefined = 3,
	};


	// Enum /Script/FortniteGame.EFriendChestTimePeriod
	enum EFriendChestTimePeriod
	{
		EFriendChestTimePeriod__Daily = 0,
		EFriendChestTimePeriod__Weekly = 1,
	};


	// Enum /Script/FortniteGame.EFortGiftWrapType
	enum EFortGiftWrapType
	{
		EFortGiftWrapType__System = 0,
		EFortGiftWrapType__UserFree = 1,
		EFortGiftWrapType__UserUnlock = 2,
		EFortGiftWrapType__UserConsumable = 3,
		EFortGiftWrapType__Message = 4,
		EFortGiftWrapType__Ungift = 5,
	};


	// Enum /Script/FortniteGame.EFortHardcoreModifierTier
	enum EFortHardcoreModifierTier
	{
		EFortHardcoreModifierTier__Bronze = 0,
		EFortHardcoreModifierTier__Silver = 1,
		EFortHardcoreModifierTier__Gold = 2,
		EFortHardcoreModifierTier__Platinum = 3,
		EFortHardcoreModifierTier__Diamond = 4,
	};


	// Enum /Script/FortniteGame.EItemUpgradeRestrictionReason
	enum EItemUpgradeRestrictionReason
	{
		EItemUpgradeRestrictionReason__NoAdditionalLevels = 0,
		EItemUpgradeRestrictionReason__MaximumLevelAchieved = 1,
		EItemUpgradeRestrictionReason__VaultOverflow = 2,
	};


	// Enum /Script/FortniteGame.EItemEvolutionRestrictionReason
	enum EItemEvolutionRestrictionReason
	{
		EItemEvolutionRestrictionReason__NoEvolutions = 0,
		EItemEvolutionRestrictionReason__BelowMaximumLevel = 1,
		EItemEvolutionRestrictionReason__VaultOverflow = 2,
		EItemEvolutionRestrictionReason__MissingCatalyst = 3,
		EItemEvolutionRestrictionReason__MissingCosts = 4,
		EItemEvolutionRestrictionReason__NoRarityUpgrade = 5,
		EItemEvolutionRestrictionReason__InUseByCrafting = 6,
	};


	// Enum /Script/FortniteGame.EFortTemplateAccess
	enum EFortTemplateAccess
	{
		EFortTemplateAccess__Normal = 0,
		EFortTemplateAccess__Trusted = 1,
		EFortTemplateAccess__Private = 2,
	};


	// Enum /Script/FortniteGame.EItemProfileType
	enum EItemProfileType
	{
		EItemProfileType__Common = 0,
		EItemProfileType__Campaign = 1,
		EItemProfileType__Athena = 2,
	};


	// Enum /Script/FortniteGame.ELootQuotaLevel
	enum ELootQuotaLevel
	{
		ELootQuotaLevel__Unlimited = 0,
		ELootQuotaLevel__Level1 = 1,
		ELootQuotaLevel__Level2 = 2,
		ELootQuotaLevel__Level3 = 3,
		ELootQuotaLevel__Level4 = 4,
		ELootQuotaLevel__Level5 = 5,
		ELootQuotaLevel__Level6 = 6,
		ELootQuotaLevel__Level7 = 7,
		ELootQuotaLevel__Level8 = 8,
		ELootQuotaLevel__Level9 = 9,
		ELootQuotaLevel__Level10 = A,
		ELootQuotaLevel__Level11 = B,
		ELootQuotaLevel__Level12 = C,
		ELootQuotaLevel__Level13 = D,
		ELootQuotaLevel__Level14 = E,
		ELootQuotaLevel__Level15 = F,
		ELootQuotaLevel__Level16 = 10,
		ELootQuotaLevel__Level17 = 11,
		ELootQuotaLevel__NumLevels = 12,
	};


	// Enum /Script/FortniteGame.EFortPickupTossState
	enum EFortPickupTossState
	{
		EFortPickupTossState__NotTossed = 0,
		EFortPickupTossState__InProgress = 1,
		EFortPickupTossState__AtRest = 2,
	};


	// Enum /Script/FortniteGame.EManagedPickupBucket
	enum EManagedPickupBucket
	{
		EManagedPickupBucket__Default = 0,
		EManagedPickupBucket__Junk = 1,
		EManagedPickupBucket__Normal = 2,
		EManagedPickupBucket__Important = 3,
	};


	// Enum /Script/FortniteGame.EManagedPickupContext
	enum EManagedPickupContext
	{
		EManagedPickupContext__Unknown = 0,
		EManagedPickupContext__PlayerDropped = 1,
		EManagedPickupContext__Overflow = 2,
		EManagedPickupContext__Spawned = 3,
	};


	// Enum /Script/FortniteGame.EPlaysetOffsetType
	enum EPlaysetOffsetType
	{
		EPlaysetOffsetType__CustomOffsetFromCorner = 0,
		EPlaysetOffsetType__Center = 1,
	};


	// Enum /Script/FortniteGame.EPlaysetCategory
	enum EPlaysetCategory
	{
		EPlaysetCategory__Prefab = 0,
		EPlaysetCategory__Gallery = 1,
		EPlaysetCategory__Device = 2,
		EPlaysetCategory__Island = 3,
	};


	// Enum /Script/FortniteGame.EFortAccoladeSource
	enum EFortAccoladeSource
	{
		EFortAccoladeSource__Mission = 0,
		EFortAccoladeSource__Quest = 1,
	};


	// Enum /Script/FortniteGame.ELevelSaveRollback
	enum ELevelSaveRollback
	{
		ELevelSaveRollback__Cleanup = 0,
		ELevelSaveRollback__Reload = 1,
	};


	// Enum /Script/FortniteGame.ENavigationSupport
	enum ENavigationSupport
	{
		ENavigationSupport__Unknown = 0,
		ENavigationSupport__NavigationSupported = 1,
		ENavigationSupport__NavigationDisabled = 2,
	};


	// Enum /Script/FortniteGame.ELevelSaveSpawnContext
	enum ELevelSaveSpawnContext
	{
		ELevelSaveSpawnContext__None = 0,
		ELevelSaveSpawnContext__FromPlayset = 1,
	};


	// Enum /Script/FortniteGame.ELevelSaveRecordThumbnailTextureCreationMode
	enum ELevelSaveRecordThumbnailTextureCreationMode
	{
		ELevelSaveRecordThumbnailTextureCreationMode__TransientTextureOnGPU = 0,
		ELevelSaveRecordThumbnailTextureCreationMode__SaveableTexture = 1,
		ELevelSaveRecordThumbnailTextureCreationMode__PNGImage = 2,
		ELevelSaveRecordThumbnailTextureCreationMode__SceneImage = 3,
	};


	// Enum /Script/FortniteGame.EMaterialStyleParameterType
	enum EMaterialStyleParameterType
	{
		EMaterialStyleParameterType__Scalar = 0,
		EMaterialStyleParameterType__Vector = 1,
		EMaterialStyleParameterType__Texture = 2,
	};


	// Enum /Script/FortniteGame.EStyleRequestArbitrationPolicy
	enum EStyleRequestArbitrationPolicy
	{
		EStyleRequestArbitrationPolicy__ReplaceActive = 0,
		EStyleRequestArbitrationPolicy__QueueBack = 1,
		EStyleRequestArbitrationPolicy__QueueFront = 2,
	};


	// Enum /Script/FortniteGame.EStyleRequirementMatchPolicy
	enum EStyleRequirementMatchPolicy
	{
		EStyleRequirementMatchPolicy__RequireAll = 0,
		EStyleRequirementMatchPolicy__RequireAny = 1,
	};


	// Enum /Script/FortniteGame.RankingType
	enum RankingType
	{
		RankingType__StandardCompetition = 0,
		RankingType__ModifiedCompetition = 1,
	};


	// Enum /Script/FortniteGame.EMinigameCaptureObjectiveState
	enum EMinigameCaptureObjectiveState
	{
		EMinigameCaptureObjectiveState__NotCaptured = 0,
		EMinigameCaptureObjectiveState__Captured = 1,
	};


	// Enum /Script/FortniteGame.EObjectiveType
	enum EObjectiveType
	{
		EObjectiveType__DestructionObjective = 0,
		EObjectiveType__CaptureObjective = 1,
	};


	// Enum /Script/FortniteGame.EMinigameScoreType
	enum EMinigameScoreType
	{
		EMinigameScoreType__Time = 0,
		EMinigameScoreType__PointTotal = 1,
	};


	// Enum /Script/FortniteGame.EJamEnabledOptions
	enum EJamEnabledOptions
	{
		EJamEnabledOptions__Off = 0,
		EJamEnabledOptions__On = 1,
		EJamEnabledOptions__Default = 2,
	};


	// Enum /Script/FortniteGame.ECreativeUITeamColors
	enum ECreativeUITeamColors
	{
		ECreativeUITeamColors__Relationship = 0,
		ECreativeUITeamColors__TeamColor = 1,
	};


	// Enum /Script/FortniteGame.EPartySizeRestriction
	enum EPartySizeRestriction
	{
		EPartySizeRestriction__None = 0,
		EPartySizeRestriction__Team = 1,
	};


	// Enum /Script/FortniteGame.EMinigameTeamStructurePreset
	enum EMinigameTeamStructurePreset
	{
		EMinigameTeamStructurePreset__Legacy = 0,
		EMinigameTeamStructurePreset__Custom = 1,
		EMinigameTeamStructurePreset__SinglePlayer = 2,
		EMinigameTeamStructurePreset__Cooperative = 3,
		EMinigameTeamStructurePreset__FreeForAll = 4,
		EMinigameTeamStructurePreset__TeamPvP = 5,
	};


	// Enum /Script/FortniteGame.EFortCheatMissionGenType
	enum EFortCheatMissionGenType
	{
		EFortCheatMissionGenType__NewGeneration = 0,
		EFortCheatMissionGenType__OldGeneration = 1,
		EFortCheatMissionGenType__Max_None = 2,
	};


	// Enum /Script/FortniteGame.EFortOptionGenerationResult
	enum EFortOptionGenerationResult
	{
		EFortOptionGenerationResult__NoOptionsGenerated = 0,
		EFortOptionGenerationResult__NewOptionsGenerated = 1,
		EFortOptionGenerationResult__ExistingOptionsGenerated = 2,
	};


	// Enum /Script/FortniteGame.EMissionReplyTypes
	enum EMissionReplyTypes
	{
		EMissionReplyTypes__Handled = 0,
		EMissionReplyTypes__NotHandled = 1,
	};


	// Enum /Script/FortniteGame.EPollActorsInVolumeTypes
	enum EPollActorsInVolumeTypes
	{
		EPollActorsInVolumeTypes__DesignerPlacedOnly = 0,
		EPollActorsInVolumeTypes__PlayerBuiltOnly = 1,
		EPollActorsInVolumeTypes__All = 2,
	};


	// Enum /Script/FortniteGame.EFortEncounterPacingMode
	enum EFortEncounterPacingMode
	{
		EFortEncounterPacingMode__SpawnPointsPercentageCurve = 0,
		EFortEncounterPacingMode__IntensityCurve = 1,
		EFortEncounterPacingMode__Burst = 2,
		EFortEncounterPacingMode__Fixed = 3,
	};


	// Enum /Script/FortniteGame.EFortEncounterSpawnLocationManagementMode
	enum EFortEncounterSpawnLocationManagementMode
	{
		EFortEncounterSpawnLocationManagementMode__Spawn = 0,
		EFortEncounterSpawnLocationManagementMode__Search = 1,
	};


	// Enum /Script/FortniteGame.EFortEncounterUtilitiesMode
	enum EFortEncounterUtilitiesMode
	{
		EFortEncounterUtilitiesMode__LockedOnly = 0,
		EFortEncounterUtilitiesMode__LockedAndFree = 1,
	};


	// Enum /Script/FortniteGame.EFortEncounterSpawnLimitType
	enum EFortEncounterSpawnLimitType
	{
		EFortEncounterSpawnLimitType__NoLimit = 0,
		EFortEncounterSpawnLimitType__NumPawnsLimit = 1,
		EFortEncounterSpawnLimitType__SpawnPointLimit = 2,
		EFortEncounterSpawnLimitType__UserDefined = 3,
	};


	// Enum /Script/FortniteGame.EFortMissionStatus
	enum EFortMissionStatus
	{
		EFortMissionStatus__Created = 0,
		EFortMissionStatus__InProgress = 1,
		EFortMissionStatus__Succeeded = 2,
		EFortMissionStatus__Failed = 3,
		EFortMissionStatus__NeutralCompletion = 4,
		EFortMissionStatus__Quit = 5,
		EFortMissionStatus__Max_None = 6,
	};


	// Enum /Script/FortniteGame.EFortObjectiveRequirement
	enum EFortObjectiveRequirement
	{
		EFortObjectiveRequirement__Optional = 0,
		EFortObjectiveRequirement__Required = 1,
		EFortObjectiveRequirement__RequiredButCanFail = 2,
	};


	// Enum /Script/FortniteGame.EFortMissionType
	enum EFortMissionType
	{
		EFortMissionType__Primary = 0,
		EFortMissionType__Secondary = 1,
		EFortMissionType__Max_None = 2,
	};


	// Enum /Script/FortniteGame.EFortMissionAudibility
	enum EFortMissionAudibility
	{
		EFortMissionAudibility__UseVisibility = 0,
		EFortMissionAudibility__Audible = 1,
		EFortMissionAudibility__Inaudible = 2,
	};


	// Enum /Script/FortniteGame.ESetCVarType
	enum ESetCVarType
	{
		ESetCVarType__Numeric = 0,
		ESetCVarType__String = 1,
	};


	// Enum /Script/FortniteGame.EMovingPlatformPickupState
	enum EMovingPlatformPickupState
	{
		EMovingPlatformPickupState__Normal = 0,
		EMovingPlatformPickupState__OnTooLong = 1,
	};


	// Enum /Script/FortniteGame.EFortBudgetType
	enum EFortBudgetType
	{
		EFortBudgetType__Live = 0,
		EFortBudgetType__Preview = 1,
		EFortBudgetType__Max = 2,
	};


	// Enum /Script/FortniteGame.ESavePlayerQuestUpdate
	enum ESavePlayerQuestUpdate
	{
		ESavePlayerQuestUpdate__QuestGiven = 0,
		ESavePlayerQuestUpdate__QuestCompleted = 1,
	};


	// Enum /Script/FortniteGame.ECharacterEncounterType
	enum ECharacterEncounterType
	{
		ECharacterEncounterType__Converstation = 0,
		ECharacterEncounterType__Attack = 1,
		ECharacterEncounterType__Count = 2,
	};


	// Enum /Script/FortniteGame.EClientContentReadinessV2
	enum EClientContentReadinessV2
	{
		EClientContentReadinessV2__NotConnected = 0,
		EClientContentReadinessV2__AwaitingServerResponse = 1,
		EClientContentReadinessV2__GeneratingManifests = 2,
		EClientContentReadinessV2__MountingContent = 3,
		EClientContentReadinessV2__LoadedContent = 4,
		EClientContentReadinessV2__ReadyToJoin = 5,
		EClientContentReadinessV2__AllRequestsComplete = 6,
		EClientContentReadinessV2__Disconnecting = 7,
		EClientContentReadinessV2__None = 8,
	};


	// Enum /Script/FortniteGame.EServerContentReadinessV2
	enum EServerContentReadinessV2
	{
		EServerContentReadinessV2__Initializing = 0,
		EServerContentReadinessV2__GeneratingManifests = 1,
		EServerContentReadinessV2__WaitingForClient = 2,
		EServerContentReadinessV2__ReadyToJoin = 3,
		EServerContentReadinessV2__Disconnecting = 4,
	};


	// Enum /Script/FortniteGame.EContentBeaconMetadataChangeType
	enum EContentBeaconMetadataChangeType
	{
		EContentBeaconMetadataChangeType__Add = 0,
		EContentBeaconMetadataChangeType__Remove = 1,
	};


	// Enum /Script/FortniteGame.EContentBeaconHostGlobalState
	enum EContentBeaconHostGlobalState
	{
		EContentBeaconHostGlobalState__Initializing = 0,
		EContentBeaconHostGlobalState__Running = 1,
		EContentBeaconHostGlobalState__WaitingForUnload = 2,
		EContentBeaconHostGlobalState__PendingShutdown = 3,
		EContentBeaconHostGlobalState__Shutdown = 4,
	};


	// Enum /Script/FortniteGame.EContentRequestInstallState
	enum EContentRequestInstallState
	{
		EContentRequestInstallState__None = 0,
		EContentRequestInstallState__Initialized = 1,
		EContentRequestInstallState__ManifestsBuilt = 2,
		EContentRequestInstallState__Installed = 3,
		EContentRequestInstallState__HostLoadedClientsInstalled = 4,
		EContentRequestInstallState__HostActiveClientsInstalled = 5,
		EContentRequestInstallState__Loaded = 6,
		EContentRequestInstallState__Active = 7,
		EContentRequestInstallState__ClientsUninstalled = 8,
		EContentRequestInstallState__Uninstalled = 9,
		EContentRequestInstallState__COMPLETELYLOADED = 7,
	};


	// Enum /Script/FortniteGame.EContentBeaconClientState
	enum EContentBeaconClientState
	{
		EContentBeaconClientState__Idle = 0,
		EContentBeaconClientState__Cooking = 1,
		EContentBeaconClientState__Downloading = 2,
	};


	// Enum /Script/FortniteGame.EContentBeaconErrorCode
	enum EContentBeaconErrorCode
	{
		EContentBeaconErrorCode__Success = 0,
		EContentBeaconErrorCode__FailedToConnect = 1,
		EContentBeaconErrorCode__FailedToGenerateContentPackage = 2,
		EContentBeaconErrorCode__FailedToCreateContentPackageResolver = 3,
		EContentBeaconErrorCode__RequestInvalid = 4,
		EContentBeaconErrorCode__ContentPackageResolverBecameInvalid = 5,
		EContentBeaconErrorCode__PackageResolveFlowCancelled = 6,
		EContentBeaconErrorCode__FailedToBuildManifestServer = 7,
		EContentBeaconErrorCode__FailedToBuildManifestClient = 8,
		EContentBeaconErrorCode__FailedToInstallModule = 9,
		EContentBeaconErrorCode__InvalidStateRequested = A,
		EContentBeaconErrorCode__DuplicateClientConnected = B,
		EContentBeaconErrorCode__TimeoutUnspecifiedClientTransition = C,
		EContentBeaconErrorCode__TimeoutUnspecifiedRequestTransition = D,
		EContentBeaconErrorCode__TimeoutRequestTransitionHostActive = E,
		EContentBeaconErrorCode__TimeoutRequestTransitionClientsActive = F,
		EContentBeaconErrorCode__TimeoutRequestTransitionClientsUninstalled = 10,
		EContentBeaconErrorCode__TimeoutClientTransitionAllLoaded = 11,
		EContentBeaconErrorCode__TimeoutClientTransitionUninstalled = 12,
		EContentBeaconErrorCode__ClientCancelledDownload = 13,
		EContentBeaconErrorCode__UnauthorizedClient = 14,
		EContentBeaconErrorCode__FailedToSetProjectId = 15,
		EContentBeaconErrorCode__Unknown = 16,
	};


	// Enum /Script/FortniteGame.EInnerErrorType
	enum EInnerErrorType
	{
		EInnerErrorType__None = 0,
		EInnerErrorType__ContentServiceError = 1,
		EInnerErrorType__ContentServiceInvalidSourceVersionError = 2,
		EInnerErrorType__ContentSentryUnknownError = 3,
		EInnerErrorType__ProjectDuplicationError = 4,
		EInnerErrorType__CookFailure = 5,
		EInnerErrorType__CookFailureOutOfMemory = 6,
		EInnerErrorType__CookUnknownError = 7,
		EInnerErrorType__CookBadInput = 8,
		EInnerErrorType__StagingFailure = 9,
		EInnerErrorType__Unknown = A,
	};


	// Enum /Script/FortniteGame.EContentBeaconErrorSource
	enum EContentBeaconErrorSource
	{
		EContentBeaconErrorSource__Unknown = 0,
		EContentBeaconErrorSource__Host = 1,
		EContentBeaconErrorSource__Client = 2,
	};


	// Enum /Script/FortniteGame.EContentBeaconErrorResponse
	enum EContentBeaconErrorResponse
	{
		EContentBeaconErrorResponse__None = 0,
		EContentBeaconErrorResponse__DisconnectClient = 1,
		EContentBeaconErrorResponse__CancelRequest = 2,
		EContentBeaconErrorResponse__Shutdown = 3,
	};


	// Enum /Script/FortniteGame.EClientModuleType
	enum EClientModuleType
	{
		EClientModuleType__Local = 0,
		EClientModuleType__Remote = 1,
	};


	// Enum /Script/FortniteGame.EClientsReadyToJoinPhase
	enum EClientsReadyToJoinPhase
	{
		EClientsReadyToJoinPhase__Uninitialized = 0,
		EClientsReadyToJoinPhase__WaitingForPlaylistInitialize = 1,
		EClientsReadyToJoinPhase__WaitingForPartyLeader = 2,
		EClientsReadyToJoinPhase__WaitingForLoadContentCall = 3,
		EClientsReadyToJoinPhase__ReadyToJoin = 4,
	};


	// Enum /Script/FortniteGame.EFortServerStatus
	enum EFortServerStatus
	{
		EFortServerStatus__Launching = 0,
		EFortServerStatus__Idle = 1,
		EFortServerStatus__StartingMode = 2,
		EFortServerStatus__Running = 3,
		EFortServerStatus__ServerTravel = 4,
		EFortServerStatus__ShuttingDown = 5,
		EFortServerStatus__Restarting = 6,
		EFortServerStatus__UpdateCheck = 7,
	};


	// Enum /Script/FortniteGame.EFortServerGameMode
	enum EFortServerGameMode
	{
		EFortServerGameMode__Idle = 0,
		EFortServerGameMode__LobbyPvE = 1,
		EFortServerGameMode__LobbyPvP = 2,
		EFortServerGameMode__ZonePvP = 3,
		EFortServerGameMode__ZonePvE = 4,
	};


	// Enum /Script/FortniteGame.EServerRestartReason
	enum EServerRestartReason
	{
		EServerRestartReason__HotfixApplied = 0,
		EServerRestartReason__GracefulShutdown = 1,
		EServerRestartReason__BeaconJoinDelayRestart = 2,
		EServerRestartReason__Other = 3,
	};


	// Enum /Script/FortniteGame.EFortServerContentRestartReason
	enum EFortServerContentRestartReason
	{
		EFortServerContentRestartReason__None = 0,
		EFortServerContentRestartReason__CreativeCuratedHubChanged = 1,
		EFortServerContentRestartReason__CreativeFeaturedIslandsChanged = 2,
		EFortServerContentRestartReason__CreativePreloadRevisionChanged = 4,
		EFortServerContentRestartReason__CreativePlaylistConditionalFlagsChanged = 8,
		EFortServerContentRestartReason__GameFeaturePluginDisabled = 10,
		EFortServerContentRestartReason__ForceRestartEventFlagsChanged = 20,
		EFortServerContentRestartReason__ForceRestartFlagActiveStateChanged = 40,
	};


	// Enum /Script/FortniteGame.EFortBanHammerNotificationAction
	enum EFortBanHammerNotificationAction
	{
		EFortBanHammerNotificationAction__BanAndKick = 0,
		EFortBanHammerNotificationAction__Kick = 1,
	};


	// Enum /Script/FortniteGame.EFortGameServiceHotConfigResult
	enum EFortGameServiceHotConfigResult
	{
		EFortGameServiceHotConfigResult__Success_ReplacedDomain = 0,
		EFortGameServiceHotConfigResult__Success_DomainAlreadySet = 1,
		EFortGameServiceHotConfigResult__Failure_ConfigSectionNotFound = 2,
		EFortGameServiceHotConfigResult__Failure_PlatformNotFound = 3,
		EFortGameServiceHotConfigResult__Failure_GameServiceNotFound = 4,
		EFortGameServiceHotConfigResult__Failure_EpicAppNotFound = 5,
		EFortGameServiceHotConfigResult__Failure_ConfigParsingFailed = 6,
		EFortGameServiceHotConfigResult__Unknown = 7,
	};


	// Enum /Script/FortniteGame.ELobbyMissionGeneratorDetailsRequirement
	enum ELobbyMissionGeneratorDetailsRequirement
	{
		ELobbyMissionGeneratorDetailsRequirement__Unknown = 0,
		ELobbyMissionGeneratorDetailsRequirement__NotRequired = 1,
		ELobbyMissionGeneratorDetailsRequirement__Required = 2,
	};


	// Enum /Script/FortniteGame.EFortMatchmakingType
	enum EFortMatchmakingType
	{
		EFortMatchmakingType__Gathering = 0,
		EFortMatchmakingType__CriticalMission = 1,
		EFortMatchmakingType__QuickPlay = 2,
		EFortMatchmakingType__Session = 3,
	};


	// Enum /Script/FortniteGame.EFortSTWMatchmakingPrivacyType
	enum EFortSTWMatchmakingPrivacyType
	{
		EFortSTWMatchmakingPrivacyType__Public = 0,
		EFortSTWMatchmakingPrivacyType__FriendsOnly = 1,
		EFortSTWMatchmakingPrivacyType__Private = 2,
	};


	// Enum /Script/FortniteGame.EMatchmakingStartLocation
	enum EMatchmakingStartLocation
	{
		EMatchmakingStartLocation__Lobby = 0,
		EMatchmakingStartLocation__Game = 1,
		EMatchmakingStartLocation__CreateNew = 2,
		EMatchmakingStartLocation__FindSingle = 3,
	};


	// Enum /Script/FortniteGame.EMatchmakingFlags
	enum EMatchmakingFlags
	{
		EMatchmakingFlags__None = 0,
		EMatchmakingFlags__CreateNewOnly = 1,
		EMatchmakingFlags__NoReservation = 2,
		EMatchmakingFlags__Private = 4,
		EMatchmakingFlags__UseWorldDataOwner = 8,
	};


	// Enum /Script/FortniteGame.EFortMatchmakingPrivacyConfiguration
	enum EFortMatchmakingPrivacyConfiguration
	{
		EFortMatchmakingPrivacyConfiguration__UserPartyConfigured = 0,
		EFortMatchmakingPrivacyConfiguration__ForcePrivate = 1,
		EFortMatchmakingPrivacyConfiguration__ForcePublic = 2,
	};


	// Enum /Script/FortniteGame.EFortMatchmakingPool
	enum EFortMatchmakingPool
	{
		EFortMatchmakingPool__Any = 0,
		EFortMatchmakingPool__Desktop = 1,
		EFortMatchmakingPool__PS4 = 2,
		EFortMatchmakingPool__XboxOne = 3,
		EFortMatchmakingPool__Mobile = 4,
		EFortMatchmakingPool__Test = 5,
		EFortMatchmakingPool__Switch = 6,
		EFortMatchmakingPool__Console = 7,
		EFortMatchmakingPool__All = 8,
	};


	// Enum /Script/FortniteGame.EIslandQueuePrivacy
	enum EIslandQueuePrivacy
	{
		EIslandQueuePrivacy__Unrestricted = 0,
		EIslandQueuePrivacy__Public = 1,
		EIslandQueuePrivacy__Private = 2,
	};


	// Enum /Script/FortniteGame.EBadMatchType
	enum EBadMatchType
	{
		EBadMatchType__None = 0,
		EBadMatchType__Ping = 1,
		EBadMatchType__PacketLoss = 2,
		EBadMatchType__NotMonitored = 3,
	};


	// Enum /Script/FortniteGame.ESocialImportPanelPlatform
	enum ESocialImportPanelPlatform
	{
		ESocialImportPanelPlatform__Facebook = 0,
		ESocialImportPanelPlatform__VK = 1,
		ESocialImportPanelPlatform__Steam = 2,
		ESocialImportPanelPlatform__Xbox = 3,
		ESocialImportPanelPlatform__Playstation = 4,
		ESocialImportPanelPlatform__Switch = 5,
		ESocialImportPanelPlatform__None = 6,
	};


	// Enum /Script/FortniteGame.EMcpSubscriptionState
	enum EMcpSubscriptionState
	{
		EMcpSubscriptionState__Inactive = 0,
		EMcpSubscriptionState__Active = 1,
		EMcpSubscriptionState__NotAutoRenewable = 2,
		EMcpSubscriptionState__Canceled = 3,
		EMcpSubscriptionState__PaymentProcessError = 4,
		EMcpSubscriptionState__PlatformAuthError = 5,
		EMcpSubscriptionState__RewardsDelayed = 6,
		EMcpSubscriptionState__Unknown = 7,
	};


	// Enum /Script/FortniteGame.EPublishStatus
	enum EPublishStatus
	{
		EPublishStatus__Banned = 0,
		EPublishStatus__CannotPublish = 1,
		EPublishStatus__NeedsCreatorName = 2,
		EPublishStatus__CanPublishProvisionally = 3,
		EPublishStatus__CanPublish = 4,
	};


	// Enum /Script/FortniteGame.EFortMtxPlatform
	enum EFortMtxPlatform
	{
		EFortMtxPlatform__Epic = 0,
		EFortMtxPlatform__PSN = 1,
		EFortMtxPlatform__Live = 2,
		EFortMtxPlatform__Shared = 3,
		EFortMtxPlatform__EpicPC = 4,
		EFortMtxPlatform__EpicPCKorea = 5,
		EFortMtxPlatform__IOSAppStore = 6,
		EFortMtxPlatform__EpicAndroid = 7,
		EFortMtxPlatform__Nintendo = 8,
		EFortMtxPlatform__WeGame = 9,
		EFortMtxPlatform__Samsung = A,
		EFortMtxPlatform__GooglePlay = B,
		EFortMtxPlatform__EpicIOS = C,
	};


	// Enum /Script/FortniteGame.EServerInitializationState
	enum EServerInitializationState
	{
		EServerInitializationState__UNINITIALIZED = 0,
		EServerInitializationState__STARTING_UP = 1,
		EServerInitializationState__READY_FOR_PLAYERS = 2,
	};


	// Enum /Script/FortniteGame.EFortPartyMemberInGameMode
	enum EFortPartyMemberInGameMode
	{
		EFortPartyMemberInGameMode__None = 0,
		EFortPartyMemberInGameMode__InBattleRoyale = 1,
		EFortPartyMemberInGameMode__InCreative = 2,
		EFortPartyMemberInGameMode__InSaveTheWorld = 3,
	};


	// Enum /Script/FortniteGame.EFillSuggestion
	enum EFillSuggestion
	{
		EFillSuggestion__None = 0,
		EFillSuggestion__Fill = 1,
		EFillSuggestion__NoFill = 2,
	};


	// Enum /Script/FortniteGame.EPrivateMatchSuggestion
	enum EPrivateMatchSuggestion
	{
		EPrivateMatchSuggestion__None = 0,
		EPrivateMatchSuggestion__Private = 1,
		EPrivateMatchSuggestion__Public = 2,
	};


	// Enum /Script/FortniteGame.EFortPartyMemberReadyCheckStatus
	enum EFortPartyMemberReadyCheckStatus
	{
		EFortPartyMemberReadyCheckStatus__None = 0,
		EFortPartyMemberReadyCheckStatus__InProgress = 1,
		EFortPartyMemberReadyCheckStatus__Complete = 2,
		EFortPartyMemberReadyCheckStatus__Canceled = 3,
	};


	// Enum /Script/FortniteGame.ESquadChangeType
	enum ESquadChangeType
	{
		ESquadChangeType__JoinSquad = 0,
		ESquadChangeType__BenchSelf = 1,
		ESquadChangeType__UnbenchSelf = 2,
		ESquadChangeType__Swap = 3,
		ESquadChangeType__None = 4,
	};


	// Enum /Script/FortniteGame.EPartyMemberVoiceChatStatus
	enum EPartyMemberVoiceChatStatus
	{
		EPartyMemberVoiceChatStatus__Disabled = 0,
		EPartyMemberVoiceChatStatus__Enabled = 1,
		EPartyMemberVoiceChatStatus__PartyVoice = 2,
		EPartyMemberVoiceChatStatus__GameVoice = 3,
		EPartyMemberVoiceChatStatus__PlatformVoice = 4,
	};


	// Enum /Script/FortniteGame.EJoinServerState
	enum EJoinServerState
	{
		EJoinServerState__Inactive = 0,
		EJoinServerState__Rejoin = 1,
		EJoinServerState__Tutorial = 2,
		EJoinServerState__Abandon = 3,
	};


	// Enum /Script/FortniteGame.EClassRepNodeMapping
	enum EClassRepNodeMapping
	{
		NotRouted = 0,
		RelevantAllConnections = 1,
		RelevantAllInsideFortVolume = 2,
		Custom = 3,
		Spatialize_Static = 4,
		Spatialize_Dynamic = 5,
		Spatialize_Dormancy = 6,
		Instance_Dynamic = 7,
	};


	// Enum /Script/FortniteGame.EFortDynamicNodeType
	enum EFortDynamicNodeType
	{
		EFortDynamicNodeType__AI = 0,
		EFortDynamicNodeType__PhysicsObject = 1,
		EFortDynamicNodeType__Vehicle = 2,
		EFortDynamicNodeType__NumTypes = 3,
	};


	// Enum /Script/FortniteGame.ENewsExternalURLMode
	enum ENewsExternalURLMode
	{
		ENewsExternalURLMode__PatchNotes = 0,
		ENewsExternalURLMode__UpdateNotes = 1,
		ENewsExternalURLMode__MoreInformation = 2,
	};


	// Enum /Script/FortniteGame.EFortRuntimeOptionTabState
	enum EFortRuntimeOptionTabState
	{
		EFortRuntimeOptionTabState__Default = 0,
		EFortRuntimeOptionTabState__Disabled = 1,
		EFortRuntimeOptionTabState__Hidden = 2,
	};


	// Enum /Script/FortniteGame.EFortRuntimeOptionTabStateTarget
	enum EFortRuntimeOptionTabStateTarget
	{
		EFortRuntimeOptionTabStateTarget__All = 0,
		EFortRuntimeOptionTabStateTarget__Primary = 1,
		EFortRuntimeOptionTabStateTarget__Secondary = 2,
	};


	// Enum /Script/FortniteGame.ECrucibleWhitelistOverride
	enum ECrucibleWhitelistOverride
	{
		ECrucibleWhitelistOverride__DoNothing = 0,
		ECrucibleWhitelistOverride__ForceOn = 1,
		ECrucibleWhitelistOverride__ForceOff = 2,
	};


	// Enum /Script/FortniteGame.EMobileScreenAllowedOrientation
	enum EMobileScreenAllowedOrientation
	{
		EMobileScreenAllowedOrientation__All = 0,
		EMobileScreenAllowedOrientation__PortraitOnly = 1,
		EMobileScreenAllowedOrientation__LandscapeOnly = 2,
	};


	// Enum /Script/FortniteGame.EFortSessionHelperJoinState
	enum EFortSessionHelperJoinState
	{
		EFortSessionHelperJoinState__NotJoining = 0,
		EFortSessionHelperJoinState__RequestingReservation = 1,
		EFortSessionHelperJoinState__FailedReservation = 2,
		EFortSessionHelperJoinState__WaitingOnGame = 3,
		EFortSessionHelperJoinState__AttemptingJoin = 4,
		EFortSessionHelperJoinState__JoiningSession = 5,
		EFortSessionHelperJoinState__FailedJoin = 6,
		EFortSessionHelperJoinState__CanceledJoin = 7,
	};


	// Enum /Script/FortniteGame.EJoinPartySource
	enum EJoinPartySource
	{
		EJoinPartySource__Sidebar = 0,
		EJoinPartySource__Toast = 1,
		EJoinPartySource__Lobby = 2,
		EJoinPartySource__Discovery = 3,
		EJoinPartySource__RequestToJoin = 4,
		EJoinPartySource__RichPresence = 5,
		EJoinPartySource__RiftPortal = 6,
		EJoinPartySource__CommandLine = 7,
		EJoinPartySource__MAX_NUM = 8,
	};


	// Enum /Script/FortniteGame.EInGameReadyCheckStatus
	enum EInGameReadyCheckStatus
	{
		EInGameReadyCheckStatus__None = 0,
		EInGameReadyCheckStatus__Initiated = 1,
		EInGameReadyCheckStatus__Finished = 2,
	};


	// Enum /Script/FortniteGame.EFortInvalidActivityReason
	enum EFortInvalidActivityReason
	{
		EFortInvalidActivityReason__None = 0,
		EFortInvalidActivityReason__PartyTooBig = 1,
		EFortInvalidActivityReason__NotPartyLeader = 2,
		EFortInvalidActivityReason__MatchmakingAlready = 3,
		EFortInvalidActivityReason__PlaylistDisabled = 4,
		EFortInvalidActivityReason__PlayerIsLfg = 5,
		EFortInvalidActivityReason__InvalidData = 6,
	};


	// Enum /Script/FortniteGame.EFortActivityContextFeedbackReason
	enum EFortActivityContextFeedbackReason
	{
		EFortActivityContextFeedbackReason__None = 0,
		EFortActivityContextFeedbackReason__PartyLargerThanTeam = 1,
	};


	// Enum /Script/FortniteGame.EFortPowerRatingComparison
	enum EFortPowerRatingComparison
	{
		EFortPowerRatingComparison__InRange = 0,
		EFortPowerRatingComparison__OverLevel = 1,
		EFortPowerRatingComparison__UnderLevel = 2,
		EFortPowerRatingComparison__Unknown = 3,
	};


	// Enum /Script/FortniteGame.ESendFriendInviteFailureReason
	enum ESendFriendInviteFailureReason
	{
		ESendFriendInviteFailureReason__NotFound = 0,
		ESendFriendInviteFailureReason__AlreadyFriends = 1,
		ESendFriendInviteFailureReason__InvitePending = 2,
		ESendFriendInviteFailureReason__AddingSelfFail = 3,
		ESendFriendInviteFailureReason__AddingBlockedFail = 4,
		ESendFriendInviteFailureReason__AutoDeclined = 5,
		ESendFriendInviteFailureReason__BlockedByTarget = 6,
		ESendFriendInviteFailureReason__InviteeInboxFull = 7,
		ESendFriendInviteFailureReason__SelfOutboxFull = 8,
		ESendFriendInviteFailureReason__MissingPin = 9,
		ESendFriendInviteFailureReason__InvalidPin = A,
		ESendFriendInviteFailureReason__PinAttemptsExceeded = B,
		ESendFriendInviteFailureReason__UnknownError = C,
	};


	// Enum /Script/FortniteGame.EAcceptFriendInviteFailureReason
	enum EAcceptFriendInviteFailureReason
	{
		EAcceptFriendInviteFailureReason__InviterTooManyFriends = 0,
		EAcceptFriendInviteFailureReason__SelfTooManyFriends = 1,
		EAcceptFriendInviteFailureReason__MissingPin = 2,
		EAcceptFriendInviteFailureReason__InvalidPin = 3,
		EAcceptFriendInviteFailureReason__PinAttemptsExceeded = 4,
		EAcceptFriendInviteFailureReason__UnknownError = 5,
	};


	// Enum /Script/FortniteGame.EUnlockGameModeFailureReason
	enum EUnlockGameModeFailureReason
	{
		EUnlockGameModeFailureReason__InvalidPin = 0,
		EUnlockGameModeFailureReason__PinAttemptsExceeded = 1,
		EUnlockGameModeFailureReason__UnknownError = 2,
	};


	// Enum /Script/FortniteGame.EGenericPinFailureReason
	enum EGenericPinFailureReason
	{
		EGenericPinFailureReason__InvalidPin = 0,
		EGenericPinFailureReason__PinAttemptsExceeded = 1,
		EGenericPinFailureReason__UnknownError = 2,
	};


	// Enum /Script/FortniteGame.EFortSocialFriendRequestMethod
	enum EFortSocialFriendRequestMethod
	{
		EFortSocialFriendRequestMethod__LobbySuggestion = 0,
		EFortSocialFriendRequestMethod__LobbyPlayerPanel = 1,
		EFortSocialFriendRequestMethod__MassImportPlatformFriends = 2,
		EFortSocialFriendRequestMethod__AutoImportPlatformFriends = 3,
		EFortSocialFriendRequestMethod__PartyContextRewriteHelper = 4,
		EFortSocialFriendRequestMethod__SocialInteraction_AddFriend = 5,
		EFortSocialFriendRequestMethod__SocialInteraction_AddPlatformFriend = 6,
	};


	// Enum /Script/FortniteGame.ESocialTagsChangeReason
	enum ESocialTagsChangeReason
	{
		ESocialTagsChangeReason__Service = 0,
		ESocialTagsChangeReason__Editor = 1,
	};


	// Enum /Script/FortniteGame.ERatingsBoard
	enum ERatingsBoard
	{
		ERatingsBoard__ESRB = 0,
		ERatingsBoard__PEGI = 1,
		ERatingsBoard__USK = 2,
		ERatingsBoard__GRAC = 3,
		ERatingsBoard__IARC = 4,
		ERatingsBoard__ACB = 5,
		ERatingsBoard__ClassInd = 6,
		ERatingsBoard__Russia = 7,
		ERatingsBoard__CERO = 8,
		ERatingsBoard__FPB = 9,
		ERatingsBoard__GCAM = A,
		ERatingsBoard__MRO = B,
		ERatingsBoard__None = C,
	};


	// Enum /Script/FortniteGame.ESupervisedSettingRestrictionReason
	enum ESupervisedSettingRestrictionReason
	{
		ESupervisedSettingRestrictionReason__ParentalLimit = 0,
		ESupervisedSettingRestrictionReason__EnforcedLimit = 1,
		ESupervisedSettingRestrictionReason__None = 2,
	};


	// Enum /Script/FortniteGame.EVoiceChatRecordingPreference
	enum EVoiceChatRecordingPreference
	{
		EVoiceChatRecordingPreference__PreferRecording = 0,
		EVoiceChatRecordingPreference__PreferNotRecording = 1,
	};


	// Enum /Script/FortniteGame.ESupervisedSettingScheduleCadence
	enum ESupervisedSettingScheduleCadence
	{
		ESupervisedSettingScheduleCadence__SameEveryDay = 0,
		ESupervisedSettingScheduleCadence__ByDayOfWeek = 1,
		ESupervisedSettingScheduleCadence__None = 2,
		ESupervisedSettingScheduleCadence__MAX_NUM = 3,
	};


	// Enum /Script/FortniteGame.EScoreMatchOperator
	enum EScoreMatchOperator
	{
		EScoreMatchOperator__Invalid = 0,
		EScoreMatchOperator__LessThan = 1,
		EScoreMatchOperator__LessThanOrEqual = 2,
		EScoreMatchOperator__Equal = 3,
		EScoreMatchOperator__GreaterThan = 4,
		EScoreMatchOperator__GreaterThanOrEqual = 5,
	};


	// Enum /Script/FortniteGame.ETournamentDisplayType
	enum ETournamentDisplayType
	{
		ETournamentDisplayType__Default = 0,
		ETournamentDisplayType__Creative = 1,
	};


	// Enum /Script/FortniteGame.EPayoutRewardType
	enum EPayoutRewardType
	{
		EPayoutRewardType__Invalid = 0,
		EPayoutRewardType__Commerce = 1,
		EPayoutRewardType__GameRelated = 2,
		EPayoutRewardType__Token = 3,
		EPayoutRewardType__Score = 4,
	};


	// Enum /Script/FortniteGame.EPayoutScoringType
	enum EPayoutScoringType
	{
		EPayoutScoringType__Invalid = 0,
		EPayoutScoringType__Points = 1,
		EPayoutScoringType__Ranking = 2,
		EPayoutScoringType__Percentile = 3,
		EPayoutScoringType__Persistent = 4,
	};


	// Enum /Script/FortniteGame.EFortressAIType
	enum EFortressAIType
	{
		EFortressAIType__FAT_Dormant = 0,
		EFortressAIType__FAT_Cleaner = 1,
		EFortressAIType__FAT_DayWanderer = 2,
		EFortressAIType__FAT_NightWanderer = 3,
		EFortressAIType__FAT_DebugOnly = 4,
		EFortressAIType__FAT_Encounter = 5,
	};


	// Enum /Script/FortniteGame.EFortAILevelRatingDisplayType
	enum EFortAILevelRatingDisplayType
	{
		EFortAILevelRatingDisplayType__DisplayRatingBasedOnDifficulty = 0,
		EFortAILevelRatingDisplayType__DisplayAIDifficultyAsRating = 1,
		EFortAILevelRatingDisplayType__DontDisplayRating = 2,
	};


	// Enum /Script/FortniteGame.EFortAIPawnGender
	enum EFortAIPawnGender
	{
		EFortAIPawnGender__FAPG_Default = 0,
		EFortAIPawnGender__FAPG_Female = 1,
		EFortAIPawnGender__FAPG_Male = 2,
	};


	// Enum /Script/FortniteGame.EBodyPartVisibilityGrouping
	enum EBodyPartVisibilityGrouping
	{
		EBodyPartVisibilityGrouping__AllParts = 0,
		EBodyPartVisibilityGrouping__AllButHead = 1,
		EBodyPartVisibilityGrouping__OnlyBackBling = 2,
		EBodyPartVisibilityGrouping__BackBlingAndCharm = 3,
		EBodyPartVisibilityGrouping__OnlyBody = 4,
		EBodyPartVisibilityGrouping__OnlyHead = 5,
		EBodyPartVisibilityGrouping__OnlyTail = 6,
	};


	// Enum /Script/FortniteGame.EFortPartVisibility
	enum EFortPartVisibility
	{
		EFortPartVisibility__Visible = 0,
		EFortPartVisibility__Hidden = 1,
		EFortPartVisibility__HiddenCastShadow = 2,
	};


	// Enum /Script/FortniteGame.EZiplineMovementDirection
	enum EZiplineMovementDirection
	{
		EZiplineMovementDirection__Unset = 0,
		EZiplineMovementDirection__Forward = 1,
		EZiplineMovementDirection__Backward = 2,
	};


	// Enum /Script/FortniteGame.EItemInteractionType
	enum EItemInteractionType
	{
		EItemInteractionType__Search = 0,
		EItemInteractionType__LockOnSearch = 1,
		EItemInteractionType__None = 2,
	};


	// Enum /Script/FortniteGame.EItemInteractionStatus
	enum EItemInteractionStatus
	{
		EItemInteractionStatus__Interrupted = 0,
		EItemInteractionStatus__Completed = 1,
		EItemInteractionStatus__TimedOut = 2,
	};


	// Enum /Script/FortniteGame.EStateOfGetPersistence
	enum EStateOfGetPersistence
	{
		EStateOfGetPersistence__NotStarted = 0,
		EStateOfGetPersistence__Failed = 1,
		EStateOfGetPersistence__WaitingToRetry = 2,
		EStateOfGetPersistence__Success = 3,
		EStateOfGetPersistence__InProgress = 4,
	};


	// Enum /Script/FortniteGame.EPersistenceFrameworkPlayerRegistration
	enum EPersistenceFrameworkPlayerRegistration
	{
		EPersistenceFrameworkPlayerRegistration__Registered = 0,
		EPersistenceFrameworkPlayerRegistration__UnRegistered = 1,
	};


	// Enum /Script/FortniteGame.EPersistenceFrameworkStorageEnvironment
	enum EPersistenceFrameworkStorageEnvironment
	{
		EPersistenceFrameworkStorageEnvironment__Live = 0,
		EPersistenceFrameworkStorageEnvironment__Playtest = 1,
	};


	// Enum /Script/FortniteGame.EDamageCauserType
	enum EDamageCauserType
	{
		Undefined = 0,
		Pickaxe = 1,
		RangedWeapon = 2,
		Fire = 3,
		Vehicle = 4,
		Vehicle_Empty = 5,
		IndirectCauser = 6,
		Inactivation = 7,
		EnteringWater = 8,
		ShockwaveMace = 9,
		Katana = A,
		ForcePower = B,
		ODMGear = C,
	};


	// Enum /Script/FortniteGame.EFortPhysicsObjectAwakeState
	enum EFortPhysicsObjectAwakeState
	{
		EFortPhysicsObjectAwakeState__Invalid = 0,
		EFortPhysicsObjectAwakeState__Awake = 1,
		EFortPhysicsObjectAwakeState__Asleep = 2,
	};


	// Enum /Script/FortniteGame.EFortPhysicsObjectImpactDamageType
	enum EFortPhysicsObjectImpactDamageType
	{
		EFortPhysicsObjectImpactDamageType__Environment = 0,
		EFortPhysicsObjectImpactDamageType__Pawn = 1,
		EFortPhysicsObjectImpactDamageType__Vehicle = 2,
		EFortPhysicsObjectImpactDamageType__Wildlife = 3,
	};


	// Enum /Script/FortniteGame.EFortPhysicsObjectMovementState
	enum EFortPhysicsObjectMovementState
	{
		EFortPhysicsObjectMovementState__None = 0,
		EFortPhysicsObjectMovementState__Flying = 1,
		EFortPhysicsObjectMovementState__Rolling = 2,
		EFortPhysicsObjectMovementState__Sliding = 3,
		EFortPhysicsObjectMovementState__Floating = 4,
	};


	// Enum /Script/FortniteGame.EFortPhysicsObjectActivationType
	enum EFortPhysicsObjectActivationType
	{
		EFortPhysicsObjectActivationType__Unset = 0,
		EFortPhysicsObjectActivationType__Normal = 1,
		EFortPhysicsObjectActivationType__Lazy = 2,
		EFortPhysicsObjectActivationType__AlwaysInstant = 3,
	};


	// Enum /Script/FortniteGame.EFortPhysicsObjectType
	enum EFortPhysicsObjectType
	{
		EFortPhysicsObjectType__Invalid = 0,
		EFortPhysicsObjectType__StaticObject = 1,
		EFortPhysicsObjectType__PhysicsObject = 2,
		EFortPhysicsObjectType__Vehicle = 3,
		EFortPhysicsObjectType__Pawn = 4,
		EFortPhysicsObjectType__Projectile = 5,
		EFortPhysicsObjectType__Player = 6,
	};


	// Enum /Script/FortniteGame.ERepositionAllPlayers
	enum ERepositionAllPlayers
	{
		ERepositionAllPlayers__HumanPlayers = 0,
		ERepositionAllPlayers__HumanPlayersAndPlayerBots = 1,
		ERepositionAllPlayers__HumanPlayersAndPlayerBotsAndNPCs = 2,
		ERepositionAllPlayers__AllControllers = 3,
	};


	// Enum /Script/FortniteGame.EFortPickerToDisplay
	enum EFortPickerToDisplay
	{
		EFortPickerToDisplay__TrapPicker = 0,
		EFortPickerToDisplay__SocialPicker = 1,
		EFortPickerToDisplay__ChatPicker = 2,
		EFortPickerToDisplay__NotePicker = 3,
		EFortPickerToDisplay__EmotePicker = 4,
		EFortPickerToDisplay__SquadQuickChatPicker = 5,
		EFortPickerToDisplay__MusicSourcePicker = 6,
		EFortPickerToDisplay__NPCCommandPicker = 7,
		EFortPickerToDisplay__SquadRequestPicker = 8,
	};


	// Enum /Script/FortniteGame.EQuickbarSlots
	enum EQuickbarSlots
	{
		EQuickbarSlots__HarvestingTool = 0,
		EQuickbarSlots__Weapon1 = 1,
		EQuickbarSlots__Weapon2 = 2,
		EQuickbarSlots__Weapon3 = 3,
		EQuickbarSlots__Consumable = 4,
		EQuickbarSlots__Gadget1 = 5,
		EQuickbarSlots__Gadget2 = 6,
		EQuickbarSlots__Ability1 = 7,
		EQuickbarSlots__Ability2 = 8,
		EQuickbarSlots__Ability3 = 9,
	};


	// Enum /Script/FortniteGame.ECreativeQuickbarSlots
	enum ECreativeQuickbarSlots
	{
		ECreativeQuickbarSlots__Phone = 0,
		ECreativeQuickbarSlots__Max_None = 1,
	};


	// Enum /Script/FortniteGame.EFortCrucibleWhitelistLevel
	enum EFortCrucibleWhitelistLevel
	{
		EFortCrucibleWhitelistLevel__None = 0,
		EFortCrucibleWhitelistLevel__Basic = 1,
		EFortCrucibleWhitelistLevel__Advanced = 2,
	};


	// Enum /Script/FortniteGame.ECameraStateRestoreReason
	enum ECameraStateRestoreReason
	{
		ECameraStateRestoreReason__Unknown = 0,
		ECameraStateRestoreReason__ChangedFollowTarget = 1,
		ECameraStateRestoreReason__ChangedCameraType = 2,
		ECameraStateRestoreReason__InvokedHotKey = 3,
		ECameraStateRestoreReason__Scrubbed = 4,
		ECameraStateRestoreReason__Restored = 5,
		ECameraStateRestoreReason__SpecialAction = 6,
	};


	// Enum /Script/FortniteGame.EHighlightReelTypes
	enum EHighlightReelTypes
	{
		EHighlightReelTypes__Generic = 0,
		EHighlightReelTypes__GameSummary = 1,
		EHighlightReelTypes__ExtendedGameSummary = 2,
		EHighlightReelTypes__Builder = 3,
		EHighlightReelTypes__FastMover = 4,
		EHighlightReelTypes__LongDistance = 5,
		EHighlightReelTypes__Multikill = 6,
		EHighlightReelTypes__StormCloud = 7,
	};


	// Enum /Script/FortniteGame.EVehicleTrickAxis
	enum EVehicleTrickAxis
	{
		EVehicleTrickAxis__X = 0,
		EVehicleTrickAxis__XNeg = 1,
		EVehicleTrickAxis__Y = 2,
		EVehicleTrickAxis__YNeg = 3,
		EVehicleTrickAxis__Z = 4,
		EVehicleTrickAxis__ZNeg = 5,
		EVehicleTrickAxis__Count = 6,
	};


	// Enum /Script/FortniteGame.EVehicleTrickType
	enum EVehicleTrickType
	{
		EVehicleTrickType__None = 0,
		EVehicleTrickType__RollIncrement = 1,
		EVehicleTrickType__ReverseRollIncrement = 2,
		EVehicleTrickType__YawIncrement = 3,
		EVehicleTrickType__ReverseYawIncrement = 4,
		EVehicleTrickType__PitchIncrement = 5,
		EVehicleTrickType__ReversePitchIncrement = 6,
		EVehicleTrickType__HeightIncrement = 7,
		EVehicleTrickType__DistanceIncrement = 8,
		EVehicleTrickType__AirTimeIncrement = 9,
		EVehicleTrickType__ShoppingCart_Flying = A,
		EVehicleTrickType__ShoppingCart_Stooping = B,
		EVehicleTrickType__StartedLanding = C,
		EVehicleTrickType__FailedLanding = D,
		EVehicleTrickType__Cancelled = E,
		EVehicleTrickType__StuckLanding = F,
		EVehicleTrickType__GenericTrick1 = 10,
		EVehicleTrickType__GenericTrick2 = 11,
		EVehicleTrickType__GenericTrick3 = 12,
		EVehicleTrickType__GenericTrick4 = 13,
		EVehicleTrickType__IncrementGenericTrick1 = 14,
		EVehicleTrickType__IncrementGenericTrick2 = 15,
		EVehicleTrickType__IncrementGenericTrick3 = 16,
		EVehicleTrickType__IncrementGenericTrick4 = 17,
		EVehicleTrickType__Count = 18,
	};


	// Enum /Script/FortniteGame.ESceneQueryShape
	enum ESceneQueryShape
	{
		ESceneQueryShape__Sphere = 0,
		ESceneQueryShape__Box = 1,
		ESceneQueryShape__Capsule = 2,
		ESceneQueryShape__VolumeBounds = 3,
	};


	// Enum /Script/FortniteGame.EFortPlayspaceUserAcceptanceType
	enum EFortPlayspaceUserAcceptanceType
	{
		EFortPlayspaceUserAcceptanceType__CustomLogic = 0,
		EFortPlayspaceUserAcceptanceType__Matchmaking = 1,
		EFortPlayspaceUserAcceptanceType__VolumeBased = 2,
	};


	// Enum /Script/FortniteGame.EFortPlayspaceMatchmakingRules
	enum EFortPlayspaceMatchmakingRules
	{
		EFortPlayspaceMatchmakingRules__AllPlaylists = 0,
		EFortPlayspaceMatchmakingRules__SpecificPlaylists = 1,
	};


	// Enum /Script/FortniteGame.EFortQuestMapNodeType
	enum EFortQuestMapNodeType
	{
		EFortQuestMapNodeType__MandatoryQuest = 0,
		EFortQuestMapNodeType__SideQuest = 1,
	};


	// Enum /Script/FortniteGame.EFortQuestMapNodeLabelPosition
	enum EFortQuestMapNodeLabelPosition
	{
		EFortQuestMapNodeLabelPosition__Top = 0,
		EFortQuestMapNodeLabelPosition__Bottom = 1,
	};


	// Enum /Script/FortniteGame.ECosmeticType
	enum ECosmeticType
	{
		ECosmeticType__Image = 0,
		ECosmeticType__Widget = 1,
	};


	// Enum /Script/FortniteGame.EFortChallengeBundleInfoLockedReasonCode
	enum EFortChallengeBundleInfoLockedReasonCode
	{
		EFortChallengeBundleInfoLockedReasonCode__Unlocked = 0,
		EFortChallengeBundleInfoLockedReasonCode__NoKnownUnlockMethod = 1,
		EFortChallengeBundleInfoLockedReasonCode__PurchaseTheBattlePass = 2,
		EFortChallengeBundleInfoLockedReasonCode__ReachSpecificTier = 3,
		EFortChallengeBundleInfoLockedReasonCode__TimeLeftBeforeUnlock = 4,
	};


	// Enum /Script/FortniteGame.EAcquireIncrementType
	enum EAcquireIncrementType
	{
		EAcquireIncrementType__Single = 0,
		EAcquireIncrementType__HighestMatchingItemCount = 1,
		EAcquireIncrementType__TotalMatchingItemCounts = 2,
		EAcquireIncrementType__UniqueMatchingItems = 3,
		EAcquireIncrementType__TotalItemCount = 4,
		EAcquireIncrementType__UniqueItemCount = 5,
	};


	// Enum /Script/FortniteGame.EFortCraftObjectiveIncrementType
	enum EFortCraftObjectiveIncrementType
	{
		EFortCraftObjectiveIncrementType__Single = 0,
		EFortCraftObjectiveIncrementType__MatchingIngredientCount = 1,
		EFortCraftObjectiveIncrementType__ItemCount = 2,
	};


	// Enum /Script/FortniteGame.EFortShieldGainIncrementType
	enum EFortShieldGainIncrementType
	{
		EFortShieldGainIncrementType__Single = 0,
		EFortShieldGainIncrementType__ShieldGainAmount = 1,
		EFortShieldGainIncrementType__ShieldGainedOverFull = 2,
		EFortShieldGainIncrementType__ShieldGainPercent = 3,
		EFortShieldGainIncrementType__TotalShieldGained = 4,
	};


	// Enum /Script/FortniteGame.EFinalBlowAllowance
	enum EFinalBlowAllowance
	{
		EFinalBlowAllowance__WhenPassingFilter = 0,
		EFinalBlowAllowance__Always = 1,
		EFinalBlowAllowance__Never = 2,
	};


	// Enum /Script/FortniteGame.EFortTrickIncrementType
	enum EFortTrickIncrementType
	{
		EFortTrickIncrementType__Single = 0,
		EFortTrickIncrementType__AirDistance = 1,
		EFortTrickIncrementType__AirHeight = 2,
		EFortTrickIncrementType__AirTime = 3,
		EFortTrickIncrementType__TrickCount = 4,
		EFortTrickIncrementType__TrickPoints = 5,
	};


	// Enum /Script/FortniteGame.ELevelUpIncrementType
	enum ELevelUpIncrementType
	{
		ELevelUpIncrementType__Single = 0,
		ELevelUpIncrementType__TotalLevelsGained = 1,
	};


	// Enum /Script/FortniteGame.EEliminationKillType
	enum EEliminationKillType
	{
		EEliminationKillType__Player = 0,
		EEliminationKillType__NPC = 1,
		EEliminationKillType__Wildlife = 2,
	};


	// Enum /Script/FortniteGame.EPlacementAuthorHandling
	enum EPlacementAuthorHandling
	{
		EPlacementAuthorHandling__Any = 0,
		EPlacementAuthorHandling__RequireAuthorSetPlacement = 1,
		EPlacementAuthorHandling__ProhibitAuthorSetPlacement = 2,
	};


	// Enum /Script/FortniteGame.EFortRepairIncrementType
	enum EFortRepairIncrementType
	{
		EFortRepairIncrementType__Single = 0,
		EFortRepairIncrementType__RepairAmount = 1,
		EFortRepairIncrementType__PercentRepaired = 2,
	};


	// Enum /Script/FortniteGame.EFortMarkerIncrementType
	enum EFortMarkerIncrementType
	{
		EFortMarkerIncrementType__Single = 0,
		EFortMarkerIncrementType__Distance = 1,
		EFortMarkerIncrementType__StackSize = 2,
	};


	// Enum /Script/FortniteGame.ESupportedQuestPlatforms
	enum ESupportedQuestPlatforms
	{
		PlatformsNone = 0,
		Android = 1,
		iPhone = 2,
		Linux = 4,
		Mac = 8,
		WindowsPC = 10,
		GFN = 20,
		GFNMobile = 40,
		Luna = 80,
		LunaMobile = 100,
		Salmon = 200,
		Helios = 400,
		HeliosMobile = 800,
		PSN = 1000,
		SWITCH = 2000,
		XBL = 4000,
		PS5 = 8000,
		XSX = 10000,
	};


	// Enum /Script/FortniteGame.ERebootRallyQuestType
	enum ERebootRallyQuestType
	{
		ERebootRallyQuestType__Other = 0,
		ERebootRallyQuestType__QRQuest = 1,
		ERebootRallyQuestType__RewardQuest = 2,
	};


	// Enum /Script/FortniteGame.EUefnPlaytimeQuestType
	enum EUefnPlaytimeQuestType
	{
		EUefnPlaytimeQuestType__Other = 0,
		EUefnPlaytimeQuestType__XP = 1,
		EUefnPlaytimeQuestType__LevelUp = 2,
	};


	// Enum /Script/FortniteGame.EAthenaChallengeTimerState
	enum EAthenaChallengeTimerState
	{
		EAthenaChallengeTimerState__Hidden = 0,
		EAthenaChallengeTimerState__WeeksRemaining = 1,
		EAthenaChallengeTimerState__DaysRemaining = 2,
		EAthenaChallengeTimerState__HoursRemaining = 3,
		EAthenaChallengeTimerState__MinutesRemaining = 4,
		EAthenaChallengeTimerState__Urgent = 5,
	};


	// Enum /Script/FortniteGame.EAutoFrameMode
	enum EAutoFrameMode
	{
		EAutoFrameMode__Off = 0,
		EAutoFrameMode__ManualOverride = 1,
		EAutoFrameMode__AutoFrame = 2,
	};


	// Enum /Script/FortniteGame.EClipMessageSettings
	enum EClipMessageSettings
	{
		EClipMessageSettings__DontShow = 0,
		EClipMessageSettings__ShowString = 1,
		EClipMessageSettings__DeduceUnicornAnnotation = 2,
		EClipMessageSettings__ShotTitleScreen = 3,
	};


	// Enum /Script/FortniteGame.EPegasusTimelineCategories
	enum EPegasusTimelineCategories
	{
		EPegasusTimelineCategories__Unassigned = 0,
		EPegasusTimelineCategories__Player = 1,
		EPegasusTimelineCategories__Combat = 2,
		EPegasusTimelineCategories__Building = 3,
		EPegasusTimelineCategories__Inventory = 4,
		EPegasusTimelineCategories__Social = 5,
		EPegasusTimelineCategories__Resources = 6,
	};


	// Enum /Script/FortniteGame.EVideoManagerStates
	enum EVideoManagerStates
	{
		EVideoManagerStates__INVALID = 0,
		EVideoManagerStates__LoadingReplay = 1,
		EVideoManagerStates__ScrubbingReplay = 2,
		EVideoManagerStates__WaitingForShotSetup = 3,
		EVideoManagerStates__WatchingShot = 4,
		EVideoManagerStates__ExportingShot = 5,
		EVideoManagerStates__PostExportedShot = 6,
	};


	// Enum /Script/FortniteGame.EVideoManagerJobTypes
	enum EVideoManagerJobTypes
	{
		EVideoManagerJobTypes__EliminationExtraction = 0,
		EVideoManagerJobTypes__DefinedShotSequence = 1,
	};


	// Enum /Script/FortniteGame.EHighlightFeatures
	enum EHighlightFeatures
	{
		EHighlightFeatures__INVALID = 0,
		EHighlightFeatures__FollowingPlayerKill = 1,
		EHighlightFeatures__FollowingPlayerDeath = 2,
		EHighlightFeatures__InterestingDeathCause = 3,
		EHighlightFeatures__BusyBuilder = 4,
		EHighlightFeatures__FastMover = 5,
		EHighlightFeatures__LongDistanceKill = 6,
		EHighlightFeatures__Multikill = 7,
		EHighlightFeatures__StormCloudAction = 8,
		EHighlightFeatures__WinningMoment = 9,
		EHighlightFeatures__PlacementScore = A,
		EHighlightFeatures__FollowingPlayerKillDBNO = B,
		EHighlightFeatures__FollowingPlayerDBNOFinished = C,
		EHighlightFeatures__MaxLongKillDistance = D,
		EHighlightFeatures__VehicleMultikill = E,
		EHighlightFeatures__VehiclePlayerLaunchDistance = F,
		EHighlightFeatures__VehicleKills = 10,
		EHighlightFeatures__MaxMidFallKillTime = 11,
		EHighlightFeatures__MaxMidFallNoScopeKillTime = 12,
		EHighlightFeatures__MaxMidFallKillSpeed = 13,
		EHighlightFeatures__MaxMidFallNoScopeSpeed = 14,
		EHighlightFeatures__FallingElimination = 15,
		EHighlightFeatures__VehicleUsage = 16,
		EHighlightFeatures__COUNT = 17,
	};


	// Enum /Script/FortniteGame.EHighlightSignificances
	enum EHighlightSignificances
	{
		EHighlightSignificances__NotSignificant = 0,
		EHighlightSignificances__SomewhatSignificant = 1,
		EHighlightSignificances__Significant = 15,
		EHighlightSignificances__VerySignificant = 1F,
		EHighlightSignificances__Critical = 29,
	};


	// Enum /Script/FortniteGame.EDroneFollowMode
	enum EDroneFollowMode
	{
		EDroneFollowMode__None = 0,
		EDroneFollowMode__ForceFacingLocation = 1,
		EDroneFollowMode__ForceFacingFollowedPlayer = 2,
		EDroneFollowMode__TetherToFollowedPlayer = 3,
	};


	// Enum /Script/FortniteGame.EEventMatchScreen
	enum EEventMatchScreen
	{
		EEventMatchScreen__None = 0,
		EEventMatchScreen__MatchStatus = 1,
		EEventMatchScreen__Scoreboard = 2,
	};


	// Enum /Script/FortniteGame.EFortSpectatorRackFocusState
	enum EFortSpectatorRackFocusState
	{
		EFortSpectatorRackFocusState__Started = 0,
		EFortSpectatorRackFocusState__Running = 1,
		EFortSpectatorRackFocusState__Paused = 2,
		EFortSpectatorRackFocusState__Finished = 3,
	};


	// Enum /Script/FortniteGame.EDroneFacingLocationMode
	enum EDroneFacingLocationMode
	{
		EDroneFacingLocationMode__NotFacingLocation = 0,
		EDroneFacingLocationMode__FindingPoint = 1,
		EDroneFacingLocationMode__TrackingPoint = 2,
	};


	// Enum /Script/FortniteGame.EDroneFocusActorMode
	enum EDroneFocusActorMode
	{
		EDroneFocusActorMode__NoActor = 0,
		EDroneFocusActorMode__FindingActor = 1,
		EDroneFocusActorMode__TrackingActor = 2,
	};


	// Enum /Script/FortniteGame.ESaveLocation
	enum ESaveLocation
	{
		ESaveLocation__Local_ForDevice = 0,
	};


	// Enum /Script/FortniteGame.EScriptedActionStatus
	enum EScriptedActionStatus
	{
		EScriptedActionStatus__Pending = 0,
		EScriptedActionStatus__Running = 1,
		EScriptedActionStatus__Completed = 2,
	};


	// Enum /Script/FortniteGame.EAthenaSeasonMapIconState
	enum EAthenaSeasonMapIconState
	{
		EAthenaSeasonMapIconState__Unknown = 0,
		EAthenaSeasonMapIconState__Found = 1,
		EAthenaSeasonMapIconState__Interacted = 2,
	};


	// Enum /Script/FortniteGame.EAudioAnalysisParameterType
	enum EAudioAnalysisParameterType
	{
		EAudioAnalysisParameterType__Scalar = 0,
		EAudioAnalysisParameterType__Vector4 = 1,
		EAudioAnalysisParameterType__Count = 2,
	};


	// Enum /Script/FortniteGame.EAudioAnalysisEnvelopeFollowerStereoBehavior
	enum EAudioAnalysisEnvelopeFollowerStereoBehavior
	{
		EAudioAnalysisEnvelopeFollowerStereoBehavior__Average = 0,
		EAudioAnalysisEnvelopeFollowerStereoBehavior__Add = 1,
		EAudioAnalysisEnvelopeFollowerStereoBehavior__Max = 2,
		EAudioAnalysisEnvelopeFollowerStereoBehavior__Count = 3,
	};


	// Enum /Script/FortniteGame.EVectorCurveFloat
	enum EVectorCurveFloat
	{
		EVectorCurveFloat__VectorCurve_X = 0,
		EVectorCurveFloat__VectorCurve_Y = 1,
		EVectorCurveFloat__VectorCurve_Z = 2,
	};


	// Enum /Script/FortniteGame.EVectorCurveType
	enum EVectorCurveType
	{
		EVectorCurveType__Original = 0,
		EVectorCurveType__Modified = 1,
	};


	// Enum /Script/FortniteGame.EFortBuildingSoundType
	enum EFortBuildingSoundType
	{
		EFortBuildingSoundType__Construction = 0,
		EFortBuildingSoundType__GenericDestruction = 1,
		EFortBuildingSoundType__PlayerBuiltDestruction = 2,
		EFortBuildingSoundType__None = 3,
	};


	// Enum /Script/FortniteGame.EFortFeedbackContext
	enum EFortFeedbackContext
	{
		FFC_Instigator = 0,
		FFC_Recipient = 1,
		FFC_TeamWitness = 2,
		FFC_EnemyWitness = 3,
		FFC_AllPawns = 4,
		FFC_Announcer = 5,
		FFC_None_Max = 6,
	};


	// Enum /Script/FortniteGame.EFortFeedbackAddressee
	enum EFortFeedbackAddressee
	{
		FFA_Instigator = 0,
		FFA_Recipient = 1,
		FFA_All = 2,
	};


	// Enum /Script/FortniteGame.EFortFeedbackSelectionMethod
	enum EFortFeedbackSelectionMethod
	{
		FFSM_Instigator = 0,
		FFSM_Recipient = 1,
		FFSM_TeamWitness = 2,
		FFSM_EnemyWitness = 3,
		FFSM_Random = 4,
		FFSM_Priority_IRTE = 5,
		FFSM_AllPawns = 6,
		FFSM_Announcer = 7,
	};


	// Enum /Script/FortniteGame.EFortFeedbackBroadcastFilter
	enum EFortFeedbackBroadcastFilter
	{
		FFBF_Speaker = 0,
		FFBF_SpeakerTeam = 1,
		FFBF_SpeakerAdressee = 2,
		FFBF_HumanPvP_Team1 = 3,
		FFBF_HumanPvP_Team2 = 4,
		FFBF_None_Max = 5,
	};


	// Enum /Script/FortniteGame.EFortFootstepAudioType
	enum EFortFootstepAudioType
	{
		EFortFootstepAudioType__Crouch = 0,
		EFortFootstepAudioType__CrouchSprint = 1,
		EFortFootstepAudioType__Walk = 2,
		EFortFootstepAudioType__Sprint = 3,
		EFortFootstepAudioType__Jump = 4,
		EFortFootstepAudioType__Land = 5,
		EFortFootstepAudioType__LandHard = 6,
		EFortFootstepAudioType__Max_None = 7,
	};


	// Enum /Script/FortniteGame.EFortFootstepSurfaceType
	enum EFortFootstepSurfaceType
	{
		EFortFootstepSurfaceType__Default = 0,
		EFortFootstepSurfaceType__Wood = 1,
		EFortFootstepSurfaceType__Stone = 2,
		EFortFootstepSurfaceType__Metal = 3,
		EFortFootstepSurfaceType__Water = 4,
		EFortFootstepSurfaceType__Snow = 5,
		EFortFootstepSurfaceType__Ice = 6,
		EFortFootstepSurfaceType__Lava = 7,
		EFortFootstepSurfaceType__Dirt = 8,
		EFortFootstepSurfaceType__Grass = 9,
		EFortFootstepSurfaceType__Sand = A,
		EFortFootstepSurfaceType__Cube = B,
		EFortFootstepSurfaceType__Chrome = C,
		EFortFootstepSurfaceType__ChromePetrified = D,
		EFortFootstepSurfaceType__Mud = E,
		EFortFootstepSurfaceType__WetConcrete = F,
		EFortFootstepSurfaceType__TreeCanopy = 10,
		EFortFootstepSurfaceType__Max_None = 11,
	};


	// Enum /Script/FortniteGame.EFortFootstepPosition
	enum EFortFootstepPosition
	{
		EFortFootstepPosition__Parallel = 0,
		EFortFootstepPosition__Above = 1,
		EFortFootstepPosition__Below = 2,
		EFortFootstepPosition__AboveOrBelowAndVisible = 3,
		EFortFootstepPosition__Max_None = 4,
	};


	// Enum /Script/FortniteGame.ELayeredAudioInterpolationType
	enum ELayeredAudioInterpolationType
	{
		ELayeredAudioInterpolationType__None = 0,
		ELayeredAudioInterpolationType__CustomCurve = 1,
		ELayeredAudioInterpolationType__Linear = 2,
	};


	// Enum /Script/FortniteGame.ELayeredAudioTriggerDir
	enum ELayeredAudioTriggerDir
	{
		ELayeredAudioTriggerDir__Forward = 0,
		ELayeredAudioTriggerDir__Backward = 1,
	};


	// Enum /Script/FortniteGame.EFortAnnouncerTeamVocalChords
	enum EFortAnnouncerTeamVocalChords
	{
		EFortAnnouncerTeamVocalChords__Team1 = 0,
		EFortAnnouncerTeamVocalChords__Team2 = 1,
		EFortAnnouncerTeamVocalChords__Max_None = 2,
	};


	// Enum /Script/FortniteGame.ESkeletalAudioBoneEvent
	enum ESkeletalAudioBoneEvent
	{
		ESkeletalAudioBoneEvent__None = 0,
		ESkeletalAudioBoneEvent__SlowThresholdStart = 1,
		ESkeletalAudioBoneEvent__SlowThresholdStop = 2,
		ESkeletalAudioBoneEvent__MediumThreshold = 3,
		ESkeletalAudioBoneEvent__FastThreshold = 4,
	};


	// Enum /Script/FortniteGame.ESkeletalAudioBoneSpace
	enum ESkeletalAudioBoneSpace
	{
		ESkeletalAudioBoneSpace__Relative = 0,
		ESkeletalAudioBoneSpace__World = 1,
	};


	// Enum /Script/FortniteGame.ESkeletalAudioBoneVelocityType
	enum ESkeletalAudioBoneVelocityType
	{
		ESkeletalAudioBoneVelocityType__Linear = 0,
		ESkeletalAudioBoneVelocityType__Rotational = 1,
		ESkeletalAudioBoneVelocityType__Custom = 2,
	};


	// Enum /Script/FortniteGame.EFortHitNotifyAudioType
	enum EFortHitNotifyAudioType
	{
		EFortHitNotifyAudioType__Invalid = 0,
		EFortHitNotifyAudioType__Body = 1,
		EFortHitNotifyAudioType__BodyCrit = 2,
		EFortHitNotifyAudioType__Shield = 3,
		EFortHitNotifyAudioType__ShieldCrit = 4,
		EFortHitNotifyAudioType__Death = 5,
		EFortHitNotifyAudioType__DeathCrit = 6,
		EFortHitNotifyAudioType__Fall = 7,
		EFortHitNotifyAudioType__FallDeath = 8,
	};


	// Enum /Script/FortniteGame.EFortHitNotifyAudioPerspective
	enum EFortHitNotifyAudioPerspective
	{
		EFortHitNotifyAudioPerspective__Invalid = 0,
		EFortHitNotifyAudioPerspective__Instigate = 1,
		EFortHitNotifyAudioPerspective__Receive = 2,
		EFortHitNotifyAudioPerspective__Observe = 3,
	};


	// Enum /Script/FortniteGame.ESplineWaterAudioWindingOrder
	enum ESplineWaterAudioWindingOrder
	{
		ESplineWaterAudioWindingOrder__Clockwise = 0,
		ESplineWaterAudioWindingOrder__Counterclockwise = 1,
	};


	// Enum /Script/FortniteGame.ESplineWaterAudioFacingDirection
	enum ESplineWaterAudioFacingDirection
	{
		ESplineWaterAudioFacingDirection__None = 0,
		ESplineWaterAudioFacingDirection__Inwards = 1,
		ESplineWaterAudioFacingDirection__Outwards = 2,
	};


	// Enum /Script/FortniteGame.EFortSwimmingAudioType
	enum EFortSwimmingAudioType
	{
		EFortSwimmingAudioType__Normal = 0,
		EFortSwimmingAudioType__Sprint = 1,
		EFortSwimmingAudioType__SprintStart = 2,
		EFortSwimmingAudioType__PickaxeSwing = 3,
		EFortSwimmingAudioType__NormalDBNO = 4,
		EFortSwimmingAudioType__SprintBoostStart = 5,
		EFortSwimmingAudioType__SwimStart = 6,
		EFortSwimmingAudioType__SwimEnd = 7,
		EFortSwimmingAudioType__Max_None = 8,
	};


	// Enum /Script/FortniteGame.EVehicleAudioInterpolationType
	enum EVehicleAudioInterpolationType
	{
		EVehicleAudioInterpolationType__None = 0,
		EVehicleAudioInterpolationType__CustomCurve = 1,
		EVehicleAudioInterpolationType__Linear = 2,
	};


	// Enum /Script/FortniteGame.EVehicleAudioTriggerDir
	enum EVehicleAudioTriggerDir
	{
		EVehicleAudioTriggerDir__Forward = 0,
		EVehicleAudioTriggerDir__Backward = 1,
	};


	// Enum /Script/FortniteGame.EInteriorAudioAmbientState
	enum EInteriorAudioAmbientState
	{
		EInteriorAudioAmbientState__Indoors = 0,
		EInteriorAudioAmbientState__Outdoors = 1,
		EInteriorAudioAmbientState__PartialOutdoors = 2,
		EInteriorAudioAmbientState__Max_None = 3,
	};


	// Enum /Script/FortniteGame.EInteriorAudioRoomSize
	enum EInteriorAudioRoomSize
	{
		EInteriorAudioRoomSize__Small = 0,
		EInteriorAudioRoomSize__Medium = 1,
		EInteriorAudioRoomSize__Large = 2,
		EInteriorAudioRoomSize__Max_None = 3,
	};


	// Enum /Script/FortniteGame.EMusicEventResolutionRule
	enum EMusicEventResolutionRule
	{
		EMusicEventResolutionRule__NewestWins = 0,
		EMusicEventResolutionRule__OldestWins = 1,
		EMusicEventResolutionRule__ClosestWins = 2,
	};


	// Enum /Script/FortniteGame.EFortMusicSectionStopBehavior
	enum EFortMusicSectionStopBehavior
	{
		EFortMusicSectionStopBehavior__Crossfade = 0,
		EFortMusicSectionStopBehavior__AllowFadeOut = 1,
	};


	// Enum /Script/FortniteGame.EFortMusicSectionType
	enum EFortMusicSectionType
	{
		EFortMusicSectionType__Intro = 0,
		EFortMusicSectionType__Loop = 1,
		EFortMusicSectionType__Outro = 2,
		EFortMusicSectionType__Max_None = 3,
	};


	// Enum /Script/FortniteGame.EFortMusicCombatIntensity
	enum EFortMusicCombatIntensity
	{
		EFortMusicCombatIntensity__Low = 0,
		EFortMusicCombatIntensity__Medium = 1,
		EFortMusicCombatIntensity__High = 2,
		EFortMusicCombatIntensity__VeryHigh = 3,
		EFortMusicCombatIntensity__Max_None = 4,
	};


	// Enum /Script/FortniteGame.EMusicFadeStyles
	enum EMusicFadeStyles
	{
		EMusicFadeStyles__CrossFade = 0,
		EMusicFadeStyles__FadeOutThenIn = 1,
		EMusicFadeStyles__Max_None = 2,
	};


	// Enum /Script/FortniteGame.EMusicChannel
	enum EMusicChannel
	{
		EMusicChannel__VoiceA = 0,
		EMusicChannel__VoiceB = 1,
		EMusicChannel__Max_None = 2,
	};


	// Enum /Script/FortniteGame.EStatTeamAggregateFunction
	enum EStatTeamAggregateFunction
	{
		EStatTeamAggregateFunction__Add = 0,
		EStatTeamAggregateFunction__Max = 1,
		EStatTeamAggregateFunction__Min = 2,
	};


	// Enum /Script/FortniteGame.EFortDefenderInteractionError
	enum EFortDefenderInteractionError
	{
		EFortDefenderInteractionError__None = 0,
		EFortDefenderInteractionError__Obstructed = 1,
		EFortDefenderInteractionError__NoEditPermission = 2,
		EFortDefenderInteractionError__UsedByAnotherPlayer = 3,
	};


	// Enum /Script/FortniteGame.EHordeTierStartStatus
	enum EHordeTierStartStatus
	{
		EHordeTierStartStatus__ReadyToStart = 0,
		EHordeTierStartStatus__WaitingForPlayer = 1,
		EHordeTierStartStatus__WaitingForDBM = 2,
		EHordeTierStartStatus__GenericNotReadyToStart = 3,
	};


	// Enum /Script/FortniteGame.EQueueActionType
	enum EQueueActionType
	{
		EQueueActionType__Plot = 0,
		EQueueActionType__ZoneCleanup = 1,
		EQueueActionType__EnvironmentActorRestoration = 2,
	};


	// Enum /Script/FortniteGame.EHordeWaveStingerType
	enum EHordeWaveStingerType
	{
		EHordeWaveStingerType__WaveSuccess = 0,
		EHordeWaveStingerType__WaveFailure = 1,
		EHordeWaveStingerType__WaveIncoming = 2,
		EHordeWaveStingerType__WaveStarted = 3,
	};


	// Enum /Script/FortniteGame.EDefenderSpawnFailureReason
	enum EDefenderSpawnFailureReason
	{
		EDefenderSpawnFailureReason__None = 0,
		EDefenderSpawnFailureReason__AllPlayerSlotsFull = 1,
		EDefenderSpawnFailureReason__DefendersNotUnlocked = 2,
		EDefenderSpawnFailureReason__CurrentlySimulatingDefender = 3,
		EDefenderSpawnFailureReason__NotOutpostOwner = 4,
	};


	// Enum /Script/FortniteGame.EOutpostBuildings
	enum EOutpostBuildings
	{
		EOutpostBuildings__StormShield = 0,
		EOutpostBuildings__HarvestingOptimizer = 1,
		EOutpostBuildings__StorageVault = 2,
		EOutpostBuildings__POST = 3,
	};


	// Enum /Script/FortniteGame.ECollectionSelectionMethod
	enum ECollectionSelectionMethod
	{
		ECollectionSelectionMethod__TierAsIndex = 0,
		ECollectionSelectionMethod__TierAsIndexOverflowToLastValid = 1,
		ECollectionSelectionMethod__Modulo = 2,
		ECollectionSelectionMethod__Random = 3,
		ECollectionSelectionMethod__None = 4,
	};


	// Enum /Script/FortniteGame.ESpecializationType
	enum ESpecializationType
	{
		ESpecializationType__Tier1 = 0,
		ESpecializationType__Tier2 = 1,
		ESpecializationType__Tier3 = 2,
		ESpecializationType__Tier4 = 3,
		ESpecializationType__NumTiers = 4,
	};


	// Enum /Script/FortniteGame.EFortHeroLoadoutPerkType
	enum EFortHeroLoadoutPerkType
	{
		EFortHeroLoadoutPerkType__Commander = 0,
		EFortHeroLoadoutPerkType__Standard = 1,
	};


	// Enum /Script/FortniteGame.EFortSupportBonusType
	enum EFortSupportBonusType
	{
		EFortSupportBonusType__Normal = 0,
		EFortSupportBonusType__Tactical = 1,
		EFortSupportBonusType__Max_None = 2,
	};


	// Enum /Script/FortniteGame.EFortHomebaseSquadType
	enum EFortHomebaseSquadType
	{
		EFortHomebaseSquadType__AttributeSquad = 0,
		EFortHomebaseSquadType__CombatSquad = 1,
		EFortHomebaseSquadType__DefenderSquad = 2,
		EFortHomebaseSquadType__ExpeditionSquad = 3,
		EFortHomebaseSquadType__Max_None = 4,
	};


	// Enum /Script/FortniteGame.ESquadSlotType
	enum ESquadSlotType
	{
		ESquadSlotType__HeroSquadMissionDefender = 0,
		ESquadSlotType__SurvivorSquadLeadSurvivor = 1,
		ESquadSlotType__SurvivorSquadSurvivor = 2,
		ESquadSlotType__DefenderSquadMember = 3,
		ESquadSlotType__ExpeditionSquadMember = 4,
	};


	// Enum /Script/FortniteGame.EFortDefenderSubtype
	enum EFortDefenderSubtype
	{
		EFortDefenderSubtype__AssaultRifle = 0,
		EFortDefenderSubtype__Pistol = 1,
		EFortDefenderSubtype__Melee = 2,
		EFortDefenderSubtype__Sniper = 3,
		EFortDefenderSubtype__Shotgun = 4,
		EFortDefenderSubtype__Invalid = 5,
	};


	// Enum /Script/FortniteGame.EHomebaseNodeType
	enum EHomebaseNodeType
	{
		EHomebaseNodeType__Gadget = 0,
		EHomebaseNodeType__Utility = 1,
		EHomebaseNodeType__Hidden = 2,
	};


	// Enum /Script/FortniteGame.EFortStatType
	enum EFortStatType
	{
		EFortStatType__Fortitude = 0,
		EFortStatType__Offense = 1,
		EFortStatType__Resistance = 2,
		EFortStatType__Technology = 3,
		EFortStatType__Fortitude_Team = 4,
		EFortStatType__Offense_Team = 5,
		EFortStatType__Resistance_Team = 6,
		EFortStatType__Technology_Team = 7,
		EFortStatType__Invalid = 8,
	};


	// Enum /Script/FortniteGame.EFortIdleCheckResult
	enum EFortIdleCheckResult
	{
		EFortIdleCheckResult__Invalid = 0,
		EFortIdleCheckResult__ActivityDetected = 1,
		EFortIdleCheckResult__Idle = 2,
		EFortIdleCheckResult__IdlePastMaxTime = 3,
	};


	// Enum /Script/FortniteGame.EFortUIScoreType
	enum EFortUIScoreType
	{
		EFortUIScoreType__Combat = 0,
		EFortUIScoreType__Building = 1,
		EFortUIScoreType__Utility = 2,
		EFortUIScoreType__Badges = 3,
		EFortUIScoreType__Bonus = 4,
		EFortUIScoreType__Total = 5,
		EFortUIScoreType__Max_None = 6,
	};


	// Enum /Script/FortniteGame.EFortHexTileAdjacency
	enum EFortHexTileAdjacency
	{
		EFortHexTileAdjacency__North = 0,
		EFortHexTileAdjacency__NorthEast = 1,
		EFortHexTileAdjacency__SouthEast = 2,
		EFortHexTileAdjacency__South = 3,
		EFortHexTileAdjacency__SouthWest = 4,
		EFortHexTileAdjacency__NorthWest = 5,
		EFortHexTileAdjacency__Max_None = 6,
	};


	// Enum /Script/FortniteGame.EFortTheaterMapTileType
	enum EFortTheaterMapTileType
	{
		EFortTheaterMapTileType__Normal = 0,
		EFortTheaterMapTileType__CriticalMission = 1,
		EFortTheaterMapTileType__AlwaysActive = 2,
		EFortTheaterMapTileType__Outpost = 3,
		EFortTheaterMapTileType__NonMission = 4,
		EFortTheaterMapTileType__PvPFOB = 5,
	};


	// Enum /Script/FortniteGame.EFortMissionQuestValidityResult
	enum EFortMissionQuestValidityResult
	{
		EFortMissionQuestValidityResult__Invalid = 0,
		EFortMissionQuestValidityResult__InvalidNotPlayable = 1,
		EFortMissionQuestValidityResult__ValidLinked = 2,
		EFortMissionQuestValidityResult__ValidObjectiveCondition = 3,
		EFortMissionQuestValidityResult__ValidFallback = 4,
	};


	// Enum /Script/FortniteGame.EFortMapNavigationDirection
	enum EFortMapNavigationDirection
	{
		EFortMapNavigationDirection__North = 0,
		EFortMapNavigationDirection__NorthEast = 1,
		EFortMapNavigationDirection__East = 2,
		EFortMapNavigationDirection__SouthEast = 3,
		EFortMapNavigationDirection__South = 4,
		EFortMapNavigationDirection__SouthWest = 5,
		EFortMapNavigationDirection__West = 6,
		EFortMapNavigationDirection__NorthWest = 7,
		EFortMapNavigationDirection__Invalid = 8,
	};


	// Enum /Script/FortniteGame.ETasksOverFramesSchedulePriorityCategory
	enum ETasksOverFramesSchedulePriorityCategory
	{
		ETasksOverFramesSchedulePriorityCategory__Default = 0,
		ETasksOverFramesSchedulePriorityCategory__CharacterCustomization = 1,
	};


	// Enum /Script/FortniteGame.EFortAutoTestState
	enum EFortAutoTestState
	{
		EFortAutoTestState__InitialLoad = 0,
		EFortAutoTestState__Login = 1,
		EFortAutoTestState__FrontendLoad = 2,
		EFortAutoTestState__FrontendPvELoad = 3,
		EFortAutoTestState__FrontendPvETest = 4,
		EFortAutoTestState__PvEMatchmaking = 5,
		EFortAutoTestState__ZoneLoad = 6,
		EFortAutoTestState__ZoneTest = 7,
		EFortAutoTestState__Finished = 8,
	};


	// Enum /Script/FortniteGame.EFortRpcCategory
	enum EFortRpcCategory
	{
		EFortRpcCategory__ActorInfo = 0,
		EFortRpcCategory__SocialActions = 1,
		EFortRpcCategory__GameplayActions = 2,
		EFortRpcCategory__ProjectActions = 3,
		EFortRpcCategory__WaspActions = 4,
		EFortRpcCategory__CheatCommands = 5,
		EFortRpcCategory__PilotCommands = 6,
		EFortRpcCategory__RecordingCommands = 7,
		EFortRpcCategory__UICommands = 8,
		EFortRpcCategory__Unknown = 9,
	};


	// Enum /Script/FortniteGame.EProfileGoState
	enum EProfileGoState
	{
		EProfileGoState__None = 0,
		EProfileGoState__StartingRequest = 1,
		EProfileGoState__SettlingLocation = 2,
		EProfileGoState__RunningCommands = 3,
		EProfileGoState__CompletedScenario = 4,
		EProfileGoState__Summary = 5,
		EProfileGoState__Completed = 6,
	};


	// Enum /Script/FortniteGame.ETrackDirection
	enum ETrackDirection
	{
		ETrackDirection__YNegative = 0,
		ETrackDirection__XPositive = 1,
		ETrackDirection__YPositive = 2,
		ETrackDirection__XNegative = 3,
		ETrackDirection__Max_None = 4,
	};


	// Enum /Script/FortniteGame.ETrackPieceType
	enum ETrackPieceType
	{
		ETrackPieceType__None = 0,
		ETrackPieceType__Straight = 1,
		ETrackPieceType__Turn = 2,
		ETrackPieceType__TShape = 3,
		ETrackPieceType__Cross = 4,
		ETrackPieceType__Max_None = 5,
	};


	// Enum /Script/FortniteGame.ETrackIncline
	enum ETrackIncline
	{
		ETrackIncline__NoNeighbor = 0,
		ETrackIncline__Flat = 1,
		ETrackIncline__Up = 2,
		ETrackIncline__Down = 3,
		ETrackIncline__GradualUp = 4,
		ETrackIncline__GradualDown = 5,
		ETrackIncline__Max_None = 6,
	};


	// Enum /Script/FortniteGame.ETrackVerticality
	enum ETrackVerticality
	{
		ETrackVerticality__Floor = 0,
		ETrackVerticality__Ramp = 1,
		ETrackVerticality__GradualRamp = 2,
		ETrackVerticality__Max_None = 3,
	};


	// Enum /Script/FortniteGame.EFortStatDisplayType
	enum EFortStatDisplayType
	{
		EFortStatDisplayType__Category = 0,
		EFortStatDisplayType__Buff = 1,
		EFortStatDisplayType__Debuff = 2,
		EFortStatDisplayType__Neutral = 3,
		EFortStatDisplayType__DoNotDisplay = 4,
	};


	// Enum /Script/FortniteGame.EFortActorIndicatorContainerWidget
	enum EFortActorIndicatorContainerWidget
	{
		EFortActorIndicatorContainerWidget__Top = 0,
		EFortActorIndicatorContainerWidget__Middle = 1,
		EFortActorIndicatorContainerWidget__Bottom = 2,
	};


	// Enum /Script/FortniteGame.EPinModalType
	enum EPinModalType
	{
		EPinModalType__AcceptFriendRequest = 0,
		EPinModalType__SendFriendRequest = 1,
		EPinModalType__UnlockGameModeRequest = 2,
		EPinModalType__OpenParentalControlsRequest = 3,
		EPinModalType__PurchaseRequest = 4,
		EPinModalType__AddCilantroRequest = 5,
	};


	// Enum /Script/FortniteGame.EPinModalValidityState
	enum EPinModalValidityState
	{
		EPinModalValidityState__None = 0,
		EPinModalValidityState__Requesting = 1,
		EPinModalValidityState__Success = 2,
		EPinModalValidityState__Invalid = 3,
	};


	// Enum /Script/FortniteGame.EFortTipDisplayPlatformGroup
	enum EFortTipDisplayPlatformGroup
	{
		EFortTipDisplayPlatformGroup__None = 0,
		EFortTipDisplayPlatformGroup__Desktop = 1,
		EFortTipDisplayPlatformGroup__Console = 2,
		EFortTipDisplayPlatformGroup__Switch = 4,
		EFortTipDisplayPlatformGroup__Mobile = 8,
	};


	// Enum /Script/FortniteGame.EFortUIFriendNotificationType
	enum EFortUIFriendNotificationType
	{
		EFortUIFriendNotificationType__Default = 0,
		EFortUIFriendNotificationType__FriendRequest = 1,
		EFortUIFriendNotificationType__PartyInviteSent = 2,
		EFortUIFriendNotificationType__PartyInvite = 3,
		EFortUIFriendNotificationType__InviteFriendToParty = 4,
		EFortUIFriendNotificationType__PartyRequest = 5,
		EFortUIFriendNotificationType__AutoImportFriendSuggestion = 6,
		EFortUIFriendNotificationType__PartyMemberCreated = 7,
		EFortUIFriendNotificationType__PartyMemberLeft = 8,
	};


	// Enum /Script/FortniteGame.EFortNotificationType
	enum EFortNotificationType
	{
		EFortNotificationType__Default = 0,
		EFortNotificationType__Power = 1,
		EFortNotificationType__HealthWarning = 2,
		EFortNotificationType__Error = 3,
		EFortNotificationType__GiftSent = 4,
		EFortNotificationType__VoiceChannel = 5,
		EFortNotificationType__DonutChallenge = 6,
		EFortNotificationType__SocialNotification = 7,
		EFortNotificationType__BattlePassPageUnlock = 8,
		EFortNotificationType__DownloadOnDemandError = 9,
		EFortNotificationType__CompeteStart = A,
		EFortNotificationType__Max = B,
	};


	// Enum /Script/FortniteGame.EFortNotificationPriority
	enum EFortNotificationPriority
	{
		EFortNotificationPriority__Vote = 0,
		EFortNotificationPriority__Friend = 1,
		EFortNotificationPriority__BoostedXP = 2,
		EFortNotificationPriority__GeneralSendNotification = 3,
		EFortNotificationPriority__Max = 4,
	};


	// Enum /Script/FortniteGame.EFortContextualReticleTypes
	enum EFortContextualReticleTypes
	{
		FCR_GenericFailure = 0,
		FCR_Upgrade = 1,
		FCR_Repair = 2,
		FCR_Locked = 3,
		FCR_Placement = 4,
		FCR_Edit = 5,
		FCR_NoTarget = 6,
		FCR_InProgress = 7,
		FCR_None = 8,
	};


	// Enum /Script/FortniteGame.EForLockerCategorySlotPriority
	enum EForLockerCategorySlotPriority
	{
		EForLockerCategorySlotPriority__Primary = 0,
		EForLockerCategorySlotPriority__Secondary = 1,
		EForLockerCategorySlotPriority__Tertiary = 2,
	};


	// Enum /Script/FortniteGame.EFortItemShopTileImageRuleset
	enum EFortItemShopTileImageRuleset
	{
		EFortItemShopTileImageRuleset__Default = 0,
		EFortItemShopTileImageRuleset__ScaledStandard = 1,
		EFortItemShopTileImageRuleset__ScaledHalfStep = 2,
		EFortItemShopTileImageRuleset__Bundle = 3,
		EFortItemShopTileImageRuleset__FullSquare = 4,
		EFortItemShopTileImageRuleset__Basic = 5,
		EFortItemShopTileImageRuleset__ScaledFull = 6,
	};


	// Enum /Script/FortniteGame.EDeployableBaseUseType
	enum EDeployableBaseUseType
	{
		EDeployableBaseUseType__Neighborhood = 0,
		EDeployableBaseUseType__PvECombat = 1,
	};


	// Enum /Script/FortniteGame.EFortMiniMapHeight
	enum EFortMiniMapHeight
	{
		EFMH_Equal = 0,
		EFMH_Below = 1,
		EFMH_Above = 2,
	};


	// Enum /Script/FortniteGame.EFortMiniMapContext
	enum EFortMiniMapContext
	{
		EFMC_MiniMap = 0,
		EFMC_FullScreenMap = 1,
	};


	// Enum /Script/FortniteGame.EFortMiniMapIconRotation
	enum EFortMiniMapIconRotation
	{
		EFMMIR_None = 0,
		EFMMIR_Absolute = 1,
		EFMMIR_Relative = 2,
	};


	// Enum /Script/FortniteGame.ELayoutDataType
	enum ELayoutDataType
	{
		ELayoutDataType__Custom = 0,
		ELayoutDataType__DefaultToolLayout = 1,
		ELayoutDataType__DefaultGameLayout = 2,
		ELayoutDataType__MAX_Local = 3,
		ELayoutDataType__CustomCloudLayout = 4,
	};


	// Enum /Script/FortniteGame.EUnicornSocialFeatures
	enum EUnicornSocialFeatures
	{
		EUnicornSocialFeatures__INVALID = 0,
		EUnicornSocialFeatures__FriendPlay = 1,
		EUnicornSocialFeatures__DancePartyManpower = 2,
		EUnicornSocialFeatures__CongaLineManpower = 3,
		EUnicornSocialFeatures__SocialPartyDuration = 4,
		EUnicornSocialFeatures__COUNT = 5,
	};


	// Enum /Script/FortniteGame.EHighlightReelIds
	enum EHighlightReelIds
	{
		EHighlightReelIds__INVALID = 0,
		EHighlightReelIds__MainHighlightReel = 1,
		EHighlightReelIds__ShortHighlightReel = 2,
		EHighlightReelIds__MicroHighlights = 3,
		EHighlightReelIds__EntireGameReel = 4,
		EHighlightReelIds__ShortExtendedHighlightReel = 5,
		EHighlightReelIds__MediumHighlightReel = 6,
		EHighlightReelIds__MediumExtendedHighlightReel = 7,
		EHighlightReelIds__ShorterHighlightReel = 8,
		EHighlightReelIds__PlayerSpotlightReel = 9,
		EHighlightReelIds__PlayerSpotlightNoDeathsReel = A,
		EHighlightReelIds__VATReel = B,
		EHighlightReelIds__COUNT = C,
	};


	// Enum /Script/FortniteGame.EFortExposedAssetExposureType
	enum EFortExposedAssetExposureType
	{
		EFortExposedAssetExposureType__PublicAlias = 0,
		EFortExposedAssetExposureType__InternalOnly = 1,
		EFortExposedAssetExposureType__Deprecated = 2,
		EFortExposedAssetExposureType__ForceDelete = 3,
	};


	// Enum /Script/FortniteGame.EFortExposedAssetPathCustomizationType
	enum EFortExposedAssetPathCustomizationType
	{
		EFortExposedAssetPathCustomizationType__FullPath = 0,
		EFortExposedAssetPathCustomizationType__RelativeTo = 1,
		EFortExposedAssetPathCustomizationType__NameOnly = 2,
	};


	// Enum /Script/FortniteGame.ESeatSelectionRule
	enum ESeatSelectionRule
	{
		TwoClosest = 0,
		ClosestToPlayer = 1,
		ClosestToAim = 2,
		TwoClosestThenClosestToPlayer = 3,
	};


	// Enum /Script/FortniteGame.ETreadSide
	enum ETreadSide
	{
		ETreadSide__Invalid = 0,
		ETreadSide__Left = 1,
		ETreadSide__Right = 2,
	};


	// Enum /Script/FortniteGame.EVelocityUnits
	enum EVelocityUnits
	{
		EVelocityUnits__CentimetersPerSecond = 0,
		EVelocityUnits__KilometersPerHour = 1,
	};


	// Enum /Script/FortniteGame.EModExecResult
	enum EModExecResult
	{
		EModExecResult__Valid = 0,
		EModExecResult__Invalid = 1,
	};


	// Enum /Script/FortniteGame.EWrapPreviewCamera
	enum EWrapPreviewCamera
	{
		EWrapPreviewCamera__Weapon = 0,
		EWrapPreviewCamera__LargeWeapon = 1,
		EWrapPreviewCamera__Vehicle = 2,
	};


	// Enum /Script/FortniteGame.EFortDisplayTier
	enum EFortDisplayTier
	{
		EFortDisplayTier__Invalid = 0,
		EFortDisplayTier__Handmade = 1,
		EFortDisplayTier__Copper = 2,
		EFortDisplayTier__Silver = 3,
		EFortDisplayTier__Malachite = 4,
		EFortDisplayTier__Obsidian = 5,
		EFortDisplayTier__Brightcore = 6,
		EFortDisplayTier__Spectrolite = 7,
		EFortDisplayTier__Shadowshard = 8,
		EFortDisplayTier__Sunbeam = 9,
		EFortDisplayTier__Moonglow = A,
	};


	// Enum /Script/FortniteGame.EFortMeleeFX
	enum EFortMeleeFX
	{
		EFortMeleeFX__Idle = 0,
		EFortMeleeFX__Swing = 1,
		EFortMeleeFX__AnimTrail = 2,
	};


	// Enum /Script/FortniteGame.EHitTraceType
	enum EHitTraceType
	{
		EHitTraceType__Single = 0,
		EHitTraceType__Multi = 1,
	};


	// Enum /Script/FortniteGame.EAddToSelectionResult
	enum EAddToSelectionResult
	{
		EAddToSelectionResult__Added = 0,
		EAddToSelectionResult__Removed = 1,
		EAddToSelectionResult__AtLimit = 2,
		EAddToSelectionResult__None = 3,
	};


	// Enum /Script/FortniteGame.ECameraSpaceHoldPosition
	enum ECameraSpaceHoldPosition
	{
		ECameraSpaceHoldPosition__AsPickup = 0,
		ECameraSpaceHoldPosition__Left = 1,
		ECameraSpaceHoldPosition__Center = 2,
		ECameraSpaceHoldPosition__Right = 3,
	};


	// Enum /Script/FortniteGame.EBuildingAsPropSetting
	enum EBuildingAsPropSetting
	{
		EBuildingAsPropSetting__None = 0,
		EBuildingAsPropSetting__SnapToEdge = 1,
		EBuildingAsPropSetting__SnapToCenter = 2,
	};


	// Enum /Script/FortniteGame.EMoveToolPlacementCheckResult
	enum EMoveToolPlacementCheckResult
	{
		EMoveToolPlacementCheckResult__Untested = 0,
		EMoveToolPlacementCheckResult__Valid = 1,
		EMoveToolPlacementCheckResult__Invalid = 2,
		EMoveToolPlacementCheckResult__OverBudget = 3,
	};


	// Enum /Script/FortniteGame.EFortReloadMontageSection
	enum EFortReloadMontageSection
	{
		EFortReloadMontageSection__Intro = 0,
		EFortReloadMontageSection__Loop = 1,
		EFortReloadMontageSection__Outro = 2,
	};


	// Enum /Script/FortniteGame.EFortWeaponAbilityRemovalReason
	enum EFortWeaponAbilityRemovalReason
	{
		EFortWeaponAbilityRemovalReason__RemovedFromInventory = 0,
		EFortWeaponAbilityRemovalReason__EndPlay = 1,
		EFortWeaponAbilityRemovalReason__Unequipped = 2,
	};


	// Enum /Script/FortniteGame.MountedCannonLaunchPlayerMode
	enum MountedCannonLaunchPlayerMode
	{
		MountedCannonLaunchPlayerMode__Off = 0,
		MountedCannonLaunchPlayerMode__PrimaryFire = 1,
		MountedCannonLaunchPlayerMode__SecondaryFire = 2,
		MountedCannonLaunchPlayerMode__PrimaryWhileTargeting = 3,
	};


	// Enum /Script/FortniteGame.EProjectileWaterHitBehavior
	enum EProjectileWaterHitBehavior
	{
		EProjectileWaterHitBehavior__Overlap = 0,
		EProjectileWaterHitBehavior__StopIfStopSimulatingOnHit = 1,
		EProjectileWaterHitBehavior__StopOnOverlap = 2,
	};


	// Enum /Script/FortniteGame.EDefaultCharacterSelection
	enum EDefaultCharacterSelection
	{
		EDefaultCharacterSelection__Random = 0,
		EDefaultCharacterSelection__DefaultBase = 1,
	};

}
