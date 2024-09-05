#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: FortniteUI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Struct FortniteUI.FrontendLobbyData
	// Size: 0xA8 (0xA8 - 0x0)
	struct FFrontendLobbyData	
	{
	public:
		TWeakObjectPtr<UTexture*> Texture; // 0x0(0x20)
		TWeakObjectPtr<UMaterialInstance*> Material; // 0x20(0x20)
		TWeakObjectPtr<UMaterialInstance*> PreBlurMaterial; // 0x40(0x20)
		TArray<FFrontendLobbyFXData> SpawnFXList; // 0x60(0x10)
		TArray<FFrontendLobbyActor> SpawnActorList; // 0x70(0x10)
		TArray<FFrontendLobbyCameraPositionOverride> CameraPositionOverrideList; // 0x80(0x10)
		float FadeGrid; // 0x90(0x4)
		float FadeFloorToBlack; // 0x94(0x4)
		float NamePlateHeight; // 0x98(0x4)
		float SuggestionWidgetHeight; // 0x9C(0x4)
		bool bHasRankedWidget; // 0xA0(0x1)
		bool bHasLevelWidget; // 0xA1(0x1)
		bool bHasSurvivorTierWidget; // 0xA2(0x1)
		unsigned char UnknownData00_7[0x5]; // 0xA3(0x5) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.FrontendLobbyCameraPositionOverride
	// Size: 0x38 (0x38 - 0x0)
	struct FFrontendLobbyCameraPositionOverride	
	{
	public:
		EFrontEndCamera Type; // 0x0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		FLobbyCameraPositionData Position; // 0x8(0x30)
	};


	// Struct FortniteUI.LobbyCameraPositionData
	// Size: 0x30 (0x30 - 0x0)
	struct FLobbyCameraPositionData	
	{
	public:
		FVector Location; // 0x0(0x18)
		FRotator Rotation; // 0x18(0x18)
	};


	// Struct FortniteUI.FrontendLobbyActor
	// Size: 0x70 (0x70 - 0x0)
	struct FFrontendLobbyActor	
	{
	public:
		TWeakObjectPtr<UClass*> ActorClass; // 0x0(0x20)
		FLobbyPositionData LobbyPosition; // 0x20(0x50)
	};


	// Struct FortniteUI.LobbyPositionData
	// Size: 0x50 (0x50 - 0x0)
	struct FLobbyPositionData	
	{
	public:
		FVector LocationOriginOffset; // 0x0(0x18)
		FRotator Rotation; // 0x18(0x18)
		FVector Scale; // 0x30(0x18)
		EFrontendLobbyLocationOrigin LocationOrigin; // 0x48(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x49(0x7) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.FrontendLobbyFXData
	// Size: 0x80 (0x80 - 0x0)
	struct FFrontendLobbyFXData	
	{
	public:
		FTransform Location; // 0x0(0x60)
		TWeakObjectPtr<UNiagaraSystem*> NiagaraFX; // 0x60(0x20)
	};


	// Struct FortniteUI.GridSortKey
	// Size: 0x18 (0x18 - 0x0)
	struct FGridSortKey	
	{
	public:
		float Number; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FString String; // 0x8(0x10)
	};


	// Struct FortniteUI.FortFocusedBuildingInfo
	// Size: 0x48 (0x48 - 0x0)
	struct FFortFocusedBuildingInfo	
	{
	public:
		bool bIsInteractable; // 0x0(0x1)
		bool bCanBePlayerEdited; // 0x1(0x1)
		unsigned char UnknownData00_6[0x6]; // 0x2(0x6) UNKNOWN PROPERTY
		FVector IndicatorRelativeLocation; // 0x8(0x18)
		EFortBuildingHealthDisplayRule HealthDisplayRule; // 0x20(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x21(0x3) UNKNOWN PROPERTY
		float MaxHealth; // 0x24(0x4)
		bool bIsAnyTrapAttached; // 0x28(0x1)
		bool bIsTrapAttachedFacingPlayer; // 0x29(0x1)
		bool bIsPreviewTrapAttached; // 0x2A(0x1)
		unsigned char UnknownData02_6[0x1]; // 0x2B(0x1) UNKNOWN PROPERTY
		float AttachedTrapMaxDurability; // 0x2C(0x4)
		EFortBuildingInteraction InteractionType; // 0x30(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x31(0x3) UNKNOWN PROPERTY
		int32_t InteractionCost; // 0x34(0x4)
		TEnumAsByte<EFortResourceType> BuildingMaterial; // 0x38(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x39(0x3) UNKNOWN PROPERTY
		FName QuickEditClass; // 0x3C(0x4)
		bool bIsPlayerBuilt; // 0x40(0x1)
		unsigned char UnknownData05_7[0x7]; // 0x41(0x7) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.FortHUDState
	// Size: 0x4 (0x4 - 0x0)
	struct FFortHUDState	
	{
	public:
		bool bInBuildMode : 1; // 0x0:0(0x1)
		bool bInCombatMode : 1; // 0x0:1(0x1)
		bool bInEditMode : 1; // 0x0:2(0x1)
		bool bInCreativeMode : 1; // 0x0:3(0x1)
		bool bIsParachuteOpen : 1; // 0x0:4(0x1)
		bool bIsFreeFalling : 1; // 0x0:5(0x1)
		bool bInLockedBus : 1; // 0x0:6(0x1)
		bool bInUnlockedBus : 1; // 0x0:7(0x1)
		bool bOnTargeting : 1; // 0x1:0(0x1)
		bool bOnUsingScopeTargeting : 1; // 0x1:1(0x1)
		bool bOnCanTarget : 1; // 0x1:2(0x1)
		bool bOnCanUseScopeTargeting : 1; // 0x1:3(0x1)
		bool bOnCanUseSecondaryAbility : 1; // 0x1:4(0x1)
		bool bCanOpenChute : 1; // 0x1:5(0x1)
		bool bCrouching : 1; // 0x1:6(0x1)
		bool bDBNO : 1; // 0x1:7(0x1)
		bool bIsControllingRCPawn : 1; // 0x2:0(0x1)
		bool bIsInVehicle : 1; // 0x2:1(0x1)
		bool bIsDrivingVehicle : 1; // 0x2:2(0x1)
		bool bCanSwapSeats : 1; // 0x2:3(0x1)
		bool bIsCarryingDBNO : 1; // 0x2:4(0x1)
		bool bIsCarryingHeldObject : 1; // 0x2:5(0x1)
		bool bIsZiplining : 1; // 0x2:6(0x1)
		bool bIsCreativeFlying : 1; // 0x2:7(0x1)
		bool bImprovedDBNO : 1; // 0x3:0(0x1)
	};


	// Struct FortniteUI.UINavigationData
	// Size: 0x20 (0x20 - 0x0)
	struct FUINavigationData	
	{
	public:
		FText DisplayName; // 0x0(0x10)
		UObject* ObjectData; // 0x10(0x8)
		FName IdData; // 0x18(0x4)
		int32_t IntData; // 0x1C(0x4)
	};


	// Struct FortniteUI.AthenaMapScreenContainerTabInfo
	// Size: 0x40 (0x40 - 0x0)
	struct FAthenaMapScreenContainerTabInfo	
	{
	public:
		FText TabTitle; // 0x0(0x10)
		TWeakObjectPtr<UObject*> TabIcon; // 0x10(0x20)
		int32_t Order; // 0x30(0x4)
		bool bDefaultFrontendActiveTab; // 0x34(0x1)
		bool bDefaultInGameActiveTab; // 0x35(0x1)
		bool bShowPlayerProfile; // 0x36(0x1)
		unsigned char UnknownData00_6[0x1]; // 0x37(0x1) UNKNOWN PROPERTY
		FName TabID; // 0x38(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.EliminationTimelineEntry
	// Size: 0x58 (0x58 - 0x0)
	struct FEliminationTimelineEntry	
	{
	public:
		FString PlayerName; // 0x0(0x10)
		FString PlayerRankType; // 0x10(0x10)
		int32_t PlayerRank; // 0x20(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr<UTexture2D*> EliminatedAvatarBrushPtr; // 0x28(0x20)
		int32_t PlayersLeft; // 0x48(0x4)
		int32_t PlayersTotal; // 0x4C(0x4)
		float Time; // 0x50(0x4)
		bool bLocalElimination; // 0x54(0x1)
		bool bPlayersLeftEntry; // 0x55(0x1)
		unsigned char UnknownData01_7[0x2]; // 0x56(0x2) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.AthenaWinnerInfo
	// Size: 0x20 (0x20 - 0x0)
	struct FAthenaWinnerInfo	
	{
	public:
		FString BigNameWinnerName; // 0x0(0x10)
		TArray<FString> WinnerNames; // 0x10(0x10)
	};


	// Struct FortniteUI.FortPostGameScreenConfig
	// Size: 0x8 (0x8 - 0x0)
	struct FFortPostGameScreenConfig	
	{
	public:
		EPostGameClickCatcherMode ClickCatcherState; // 0x0(0x1)
		EPostGameHUDMode PostGameHUDMode; // 0x1(0x1)
		bool bSohwCinematicBars; // 0x2(0x1)
		bool bShowPlacementOverlay; // 0x3(0x1)
		bool bIsContainerSafeZoneEnabled; // 0x4(0x1)
		bool bShowSpectatingPlayerName; // 0x5(0x1)
		bool bPutPawnInStasis; // 0x6(0x1)
		bool bAllowEmotesInStasis; // 0x7(0x1)
	};


	// Struct FortniteUI.FortUIStatStyle
	// Size: 0xE0 (0xE0 - 0x0)
	struct FFortUIStatStyle	
	{
	public:
		FText Name; // 0x0(0x10)
		FText HighestText; // 0x10(0x10)
		FSlateBrush Icon; // 0x20(0xB0)
		ECommonNumericType NumericType; // 0xD0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0xD1(0x3) UNKNOWN PROPERTY
		float MinimalNotableValue; // 0xD4(0x4)
		unsigned char UnknownData01_7[0x8]; // 0xD8(0x8) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.PrimaryContentSetup
	// Size: 0x3 (0x3 - 0x0)
	struct FPrimaryContentSetup	
	{
	public:
		bool bShowBottomBar; // 0x0(0x1)
		bool bShowChatWidget; // 0x1(0x1)
		bool bShowTopBar; // 0x2(0x1)
	};


	// Struct FortniteUI.FortTabListRegistrationInfo
	// Size: 0x120 (0x120 - 0x0)
	struct FFortTabListRegistrationInfo	
	{
	public:
		FName TabNameID; // 0x0(0x4)
		bool bHidden; // 0x4(0x1)
		bool bAllowedInZone; // 0x5(0x1)
		unsigned char UnknownData00_6[0xA]; // 0x6(0xA) UNKNOWN PROPERTY
		FFortTabButtonLabelInfo TabLabelInfo; // 0x10(0xF0)
		UClass* TabButtonType; // 0x100(0x8)
		UClass* TabContentType; // 0x108(0x8)
		UWidget* CreatedTabContentWidget; // 0x110(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x118(0x8) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.FortTabButtonLabelInfo
	// Size: 0xF0 (0xF0 - 0x0)
	struct FFortTabButtonLabelInfo	
	{
	public:
		FText DisplayName; // 0x0(0x10)
		FSlateBrush IconBrush; // 0x10(0xB0)
		TWeakObjectPtr<UObject*> IconResource; // 0xC0(0x20)
		FFortPrioritizedWidgetData PriorityData; // 0xE0(0x2)
		unsigned char UnknownData00_7[0x6]; // 0xE2(0x6) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.FortPrioritizedWidgetData
	// Size: 0x2 (0x2 - 0x0)
	struct FFortPrioritizedWidgetData	
	{
	public:
		EFortPrioritizedWidgetPriority Priority; // 0x0(0x1)
		EFortPrioritizedWidgetContestedBehavior WhenContesting; // 0x1(0x1)
	};


	// Struct FortniteUI.FortBackendVersion
	// Size: 0x98 (0x98 - 0x0)
	struct FFortBackendVersion	
	{
	public:
		unsigned char UnknownData00_2[0x98]; // 0x0(0x98) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.FortUIFeatureStruct
	// Size: 0x18 (0x18 - 0x0)
	struct FFortUIFeatureStruct	
	{
	public:
		EFortUIFeatureState CurrentState; // 0x0(0x1)
		EFortUIFeatureState ForcedState; // 0x1(0x1)
		EFortUIFeatureStateReason ForcedStateReason; // 0x2(0x1)
		unsigned char UnknownData00_6[0x5]; // 0x3(0x5) UNKNOWN PROPERTY
		FMulticastInlineDelegate ChangeDelegate; // 0x8(0x10)
	};


	// Struct FortniteUI.FortAttributeModifierDisplayData
	// Size: 0x150 (0x150 - 0x0)
	struct FFortAttributeModifierDisplayData	
	{
	public:
		FGameplayAttribute Attribute; // 0x0(0x38)
		float Value; // 0x38(0x4)
		TEnumAsByte<EGameplayModOp> ModifierType; // 0x3C(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x3D(0x3) UNKNOWN PROPERTY
		FGameplayTagRequirements SourceTags; // 0x40(0x88)
		FGameplayTagRequirements TargetTags; // 0xC8(0x88)
	};


	// Struct FortniteUI.FortReceivedItemLootInfo
	// Size: 0x218 (0x218 - 0x0)
	struct FFortReceivedItemLootInfo	
	{
	public:
		FFortItemHeaderInformation HeaderInformation; // 0x0(0x108)
		UFortItem* SourceItemInstance; // 0x108(0x8)
		UFortItem* GeneratedItemInstance; // 0x110(0x8)
		UFortItemDefinition* ItemDef; // 0x118(0x8)
		UFortItemVM* ItemVM; // 0x120(0x8)
		FItemPreviewSettings PreviewSettings; // 0x128(0xC8)
		FString TemplateId; // 0x1F0(0x10)
		int32_t Quantity; // 0x200(0x4)
		unsigned char UnknownData00_7[0x14]; // 0x204(0x14) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.ItemPreviewSettings
	// Size: 0xC8 (0xC8 - 0x0)
	struct FItemPreviewSettings	
	{
	public:
		UFortAccountItemDefinition* ItemToView; // 0x0(0x8)
		int32_t SubSlotIndex; // 0x8(0x4)
		unsigned char UnknownData00_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FGameplayTagContainer PreviewExcludedTags; // 0x10(0x20)
		int32_t ItemVariantPreviewIndex; // 0x30(0x4)
		unsigned char UnknownData01_6[0x54]; // 0x34(0x54) UNKNOWN PROPERTY
		bool bHasEtherealBackground; // 0x88(0x1)
		unsigned char UnknownData02_6[0xF]; // 0x89(0xF) UNKNOWN PROPERTY
		TArray<FVaultVariantOverrideOption> VariantOverrides; // 0x98(0x10)
		UFortItem* SourceItemInstance; // 0xA8(0x8)
		unsigned char UnknownData03_7[0x18]; // 0xB0(0x18) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.VaultVariantOverrideOption
	// Size: 0x20 (0x20 - 0x0)
	struct FVaultVariantOverrideOption	
	{
	public:
		FGameplayTag VariantChannelOverride; // 0x0(0x4)
		FGameplayTag VariantTagOverride; // 0x4(0x4)
		FString CustomDataPayload; // 0x8(0x10)
		UItemDefinitionBase* OptionalItemVariantIsUsedFor; // 0x18(0x8)
	};


	// Struct FortniteUI.FortItemShopLoadedPresentation
	// Size: 0x10 (0x10 - 0x0)
	struct FFortItemShopLoadedPresentation	
	{
	public:
		UTexture2D* Texture; // 0x0(0x8)
		UMaterialInterface* Material; // 0x8(0x8)
	};


	// Struct FortniteUI.FortItemShopOfferMetaDisplayData
	// Size: 0x50 (0x50 - 0x0)
	struct FFortItemShopOfferMetaDisplayData	
	{
	public:
		FLinearColor Color1; // 0x0(0x10)
		FLinearColor Color2; // 0x10(0x10)
		FLinearColor Color3; // 0x20(0x10)
		FLinearColor TextBackgroundColor; // 0x30(0x10)
		FString TileBackgroundMaterialKey; // 0x40(0x10)
	};


	// Struct FortniteUI.FortItemShopLayout
	// Size: 0x20 (0x20 - 0x0)
	struct FFortItemShopLayout	
	{
	public:
		FString SectionId; // 0x0(0x10)
		FString SubsectionId; // 0x10(0x10)
	};


	// Struct FortniteUI.FortItemShopCMSBackground
	// Size: 0x20 (0x20 - 0x0)
	struct FFortItemShopCMSBackground	
	{
	public:
		FString CustomTexture; // 0x0(0x10)
		FString CookedAssetKey; // 0x10(0x10)
	};


	// Struct FortniteUI.FortSettingsFilterState
	// Size: 0x3A0 (0x3A0 - 0x0)
	struct FFortSettingsFilterState	
	{
	public:
		bool bIncludeDisabled; // 0x0(0x1)
		bool bIncludeHidden; // 0x1(0x1)
		bool bIncludeResetable; // 0x2(0x1)
		bool bIncludeNestedPages; // 0x3(0x1)
		unsigned char UnknownData00_6[0x37C]; // 0x4(0x37C) UNKNOWN PROPERTY
		TArray<UFortSetting*> SettingRootList; // 0x380(0x10)
		TArray<UFortSetting*> SettingWhiteList; // 0x390(0x10)
	};


	// Struct FortniteUI.FortSimpleWidgetAnimations
	// Size: 0x30 (0x30 - 0x0)
	struct FFortSimpleWidgetAnimations	
	{
	public:
		FName Name; // 0x0(0x4)
		bool bIsEnabled; // 0x4(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
		TArray<FFortSimpleWidgetAnimation> Targets; // 0x8(0x10)
		FMulticastInlineDelegate OnAnimationsFinished; // 0x18(0x10)
		unsigned char UnknownData01_7[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.FortSimpleWidgetAnimation
	// Size: 0x88 (0x88 - 0x0)
	struct FFortSimpleWidgetAnimation	
	{
	public:
		FName TargetName; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		UCurveVector* Translation; // 0x8(0x8)
		UCurveVector* Scale; // 0x10(0x8)
		UCurveFloat* Alpha; // 0x18(0x8)
		bool bResetOnFinish; // 0x20(0x1)
		bool bShouldAnimateTranslation; // 0x21(0x1)
		bool bShouldAnimateScale; // 0x22(0x1)
		bool bShouldAnimateAlpha; // 0x23(0x1)
		unsigned char UnknownData01_6[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
		TArray<FFortSimpleWidgetMaterialScalarAnimation> MaterialScalarAnimations; // 0x28(0x10)
		unsigned char UnknownData02_6[0x14]; // 0x38(0x14) UNKNOWN PROPERTY
		TWeakObjectPtr<UWorld*> WeakWorld; // 0x4C(0x8)
		unsigned char UnknownData03_7[0x34]; // 0x54(0x34) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.FortSimpleWidgetMaterialScalarAnimation
	// Size: 0x18 (0x18 - 0x0)
	struct FFortSimpleWidgetMaterialScalarAnimation	
	{
	public:
		FName MaterialParameter; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		UCurveFloat* ScalarCurve; // 0x8(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x10(0x8) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.CardPackOffer
	// Size: 0x60 (0x60 - 0x0)
	struct FCardPackOffer	
	{
	public:
		FText Title; // 0x0(0x10)
		FText Description; // 0x10(0x10)
		int32_t MtxPrice; // 0x20(0x4)
		TEnumAsByte<ECatalogSaleType> SaleType; // 0x24(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x25(0x3) UNKNOWN PROPERTY
		FText SaleText; // 0x28(0x10)
		int32_t Price; // 0x38(0x4)
		int32_t RegularPrice; // 0x3C(0x4)
		UFortAccountItemDefinition* CurrencyType; // 0x40(0x8)
		int32_t QuantityRemaining; // 0x48(0x4)
		bool bTimedOffer; // 0x4C(0x1)
		unsigned char UnknownData01_7[0x13]; // 0x4D(0x13) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.UIKitBlockTiming
	// Size: 0x2C (0x2C - 0x0)
	struct FUIKitBlockTiming	
	{
	public:
		float Hovering; // 0x0(0x4)
		float Unhovering; // 0x4(0x4)
		float Focusing; // 0x8(0x4)
		float Unfocusing; // 0xC(0x4)
		float Pressing; // 0x10(0x4)
		float Releasing; // 0x14(0x4)
		float Disabling; // 0x18(0x4)
		float Enabling; // 0x1C(0x4)
		float Selecting; // 0x20(0x4)
		float DeselectingIdle; // 0x24(0x4)
		float DeselectingFocused; // 0x28(0x4)
	};


	// Struct FortniteUI.TimerDisplayData
	// Size: 0x30 (0x30 - 0x0)
	struct FTimerDisplayData	
	{
	public:
		FLinearColor BrushColor; // 0x0(0x10)
		FText TimeRemainingDisplayText; // 0x10(0x10)
		FLinearColor TextColor; // 0x20(0x10)
	};


	// Struct FortniteUI.AthenaInventoryDropStackSizeRow
	// Inherited from FTableRowBase
	// Size: 0x28 (0x30 - 0x8)
	struct FAthenaInventoryDropStackSizeRow : public FTableRowBase	
	{
	public:
		FGameplayTagContainer ItemTags; // 0x8(0x20)
		int32_t StackSize; // 0x28(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.StatBound
	// Size: 0x8 (0x8 - 0x0)
	struct FStatBound	
	{
	public:
		float Minimum; // 0x0(0x4)
		float Maximum; // 0x4(0x4)
	};


	// Struct FortniteUI.AthenaInventoryItemStatBoundsRow
	// Inherited from FTableRowBase
	// Size: 0x40 (0x48 - 0x8)
	struct FAthenaInventoryItemStatBoundsRow : public FTableRowBase	
	{
	public:
		FGameplayTagContainer ItemTags; // 0x8(0x20)
		FStatBound Damage; // 0x28(0x8)
		FStatBound FireRate; // 0x30(0x8)
		FStatBound MagazineSize; // 0x38(0x8)
		FStatBound ReloadTime; // 0x40(0x8)
	};


	// Struct FortniteUI.AthenaItemShopReloadMtxInfo
	// Size: 0x80 (0x80 - 0x0)
	struct FAthenaItemShopReloadMtxInfo	
	{
	public:
		TArray<FName> StaticStorefrontNames; // 0x0(0x10)
		TArray<FName> DynamicStorefrontNames; // 0x10(0x10)
		FName IncrementalStorefrontName; // 0x20(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
		FString DynamicOtherOptionOfferId; // 0x28(0x10)
		int32_t MaxMtxQuantityToShowDynamicReloadMtx; // 0x38(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr<UClass*> StaticReloadMtxScreenClass; // 0x40(0x20)
		TWeakObjectPtr<UClass*> DynamicReloadMtxScreenClass; // 0x60(0x20)
	};


	// Struct FortniteUI.AthenaMosaicWidgetTileData
	// Inherited from FTableRowBase
	// Size: 0x30 (0x38 - 0x8)
	struct FAthenaMosaicWidgetTileData : public FTableRowBase	
	{
	public:
		UTexture2D* Texture; // 0x8(0x8)
		FVector2D Position; // 0x10(0x10)
		FString RequiredQuestTemplateId; // 0x20(0x10)
		int32_t RequiredQuestProgress; // 0x30(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.AthenaPostMatchScreenContainerTabInfo
	// Size: 0x40 (0x40 - 0x0)
	struct FAthenaPostMatchScreenContainerTabInfo	
	{
	public:
		FText TabTitle; // 0x0(0x10)
		TWeakObjectPtr<UObject*> TabIcon; // 0x10(0x20)
		int32_t Order; // 0x30(0x4)
		bool bDefaultInGameActiveTab; // 0x34(0x1)
		bool bShowForSpectators; // 0x35(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x36(0x2) UNKNOWN PROPERTY
		FName AutoAdvanceToTabID; // 0x38(0x4)
		FName TabID; // 0x3C(0x4)
	};


	// Struct FortniteUI.AthenaReplayBrowserRowData
	// Size: 0x40 (0x40 - 0x0)
	struct FAthenaReplayBrowserRowData	
	{
	public:
		FString Name; // 0x0(0x10)
		FDateTime Date; // 0x10(0x8)
		float Length; // 0x18(0x4)
		int32_t Rank; // 0x1C(0x4)
		int32_t NumPlayers; // 0x20(0x4)
		int32_t Eliminations; // 0x24(0x4)
		int32_t DownloadModulesCount; // 0x28(0x4)
		unsigned char UnknownData00_7[0x14]; // 0x2C(0x14) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.BattlePassEntrySelectedParams
	// Size: 0x48 (0x48 - 0x0)
	struct FBattlePassEntrySelectedParams	
	{
	public:
		unsigned char UnknownData00_2[0x48]; // 0x0(0x48) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.BattlePassCoverPageParams
	// Size: 0x38 (0x38 - 0x0)
	struct FBattlePassCoverPageParams	
	{
	public:
		unsigned char UnknownData00_2[0x38]; // 0x0(0x38) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.CreativeContentBrowserRemoveItemDefinitionMessage
	// Size: 0x10 (0x10 - 0x0)
	struct FCreativeContentBrowserRemoveItemDefinitionMessage	
	{
	public:
		TArray<UFortItemDefinition*> ItemDefinitionsToRemove; // 0x0(0x10)
	};


	// Struct FortniteUI.CreativeContentBrowserTabInitializer
	// Size: 0x38 (0x38 - 0x0)
	struct FCreativeContentBrowserTabInitializer	
	{
	public:
		FText TabLabel; // 0x0(0x10)
		TWeakObjectPtr<UClass*> CreativeContentBrowserTabClass; // 0x10(0x20)
		UCreativeContentBrowserTab_CreationCondition* CreationCondition; // 0x30(0x8)
	};


	// Struct FortniteUI.MotdVideo
	// Size: 0x38 (0x38 - 0x0)
	struct FMotdVideo	
	{
	public:
		FString UID; // 0x0(0x10)
		FString VideoString; // 0x10(0x10)
		FTimespan StartTime; // 0x20(0x8)
		FTimespan EndTime; // 0x28(0x8)
		bool bAutoPlay; // 0x30(0x1)
		bool bStreamingEnabled; // 0x31(0x1)
		bool bEnableLooping; // 0x32(0x1)
		unsigned char UnknownData00_7[0x5]; // 0x33(0x5) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.MotdImage
	// Size: 0x18 (0x18 - 0x0)
	struct FMotdImage	
	{
	public:
		FString URL; // 0x0(0x10)
		int32_t Width; // 0x10(0x4)
		int32_t Height; // 0x14(0x4)
	};


	// Struct FortniteUI.MotdButton
	// Size: 0x20 (0x20 - 0x0)
	struct FMotdButton	
	{
	public:
		FText Text; // 0x0(0x10)
		EMotdButtonStyle Style; // 0x10(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
		UMotdActionBase* Action; // 0x18(0x8)
	};


	// Struct FortniteUI.MotdBackground
	// Size: 0x48 (0x48 - 0x0)
	struct FMotdBackground	
	{
	public:
		TArray<FMotdImage> Images; // 0x0(0x10)
		FMotdVideo Video; // 0x10(0x38)
	};


	// Struct FortniteUI.FortAthenaItemManagementInventoryFilterTabLabelInfo
	// Inherited from FFortTabButtonLabelInfo
	// Size: 0x28 (0x110 - 0xE8)
	struct FFortAthenaItemManagementInventoryFilterTabLabelInfo : public FFortTabButtonLabelInfo	
	{
	public:
		FName FilterTabNameId; // 0xE8(0x4)
		bool bAllowEmptySlotItem; // 0xEC(0x1)
		unsigned char UnknownData00_6[0x3]; // 0xED(0x3) UNKNOWN PROPERTY
		FText EmptyFilterDisplay; // 0xF0(0x10)
		FText EmptyArchivedFilterDisplay; // 0x100(0x10)
	};


	// Struct FortniteUI.CreativeDeviceSubscription
	// Size: 0x58 (0x58 - 0x0)
	struct FCreativeDeviceSubscription	
	{
	public:
		int32_t DestinationDeviceGUID; // 0x0(0x4)
		bool bIsEvent; // 0x4(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
		FText SourceSubscriptionDisplayName; // 0x8(0x10)
		FText DestinationDeviceDisplayName; // 0x18(0x10)
		FText DestinationSubscriptionDisplayName; // 0x28(0x10)
		TWeakObjectPtr<AActor*> ActorPtr; // 0x38(0x20)
	};


	// Struct FortniteUI.ViewModelRelation
	// Size: 0x10 (0x10 - 0x0)
	struct FViewModelRelation	
	{
	public:
		unsigned char UnknownData00_2[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.FortItemCard_PowerRatingBlock_Configuration
	// Size: 0x130 (0x130 - 0x0)
	struct FFortItemCard_PowerRatingBlock_Configuration	
	{
	public:
		unsigned char UnknownData00_7[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
		FSlateBrush MoonbeamBorderBrush; // 0x10(0xB0)
		FMargin MoonbeamBorderExteriorPadding; // 0xC0(0x10)
		FMargin MoonbeamBorderPadding; // 0xD0(0x10)
		FMargin CustomRatingInternalPadding; // 0xE0(0x10)
		FVector2D CustomRatingIconSize; // 0xF0(0x10)
		TWeakObjectPtr<UClass*> CustomRatingTextStyle; // 0x100(0x20)
		FVector2D ComparisonIndicatorSize; // 0x120(0x10)
	};


	// Struct FortniteUI.FortItemCard_PowerRatingBlock_PersonnelAndSchematics_Configuration
	// Inherited from FFortItemCard_PowerRatingBlock_Configuration
	// Size: 0x1A0 (0x2D0 - 0x130)
	struct FFortItemCard_PowerRatingBlock_PersonnelAndSchematics_Configuration : public FFortItemCard_PowerRatingBlock_Configuration	
	{
	public:
		FSlateBrush PersonnelPowerRatingIconBrush; // 0x130(0xB0)
		TWeakObjectPtr<UClass*> PersonnelPowerRatingTextStyle; // 0x1E0(0x20)
		FSlateBrush SchematicPowerRatingIconBrush; // 0x200(0xB0)
		TWeakObjectPtr<UClass*> SchematicPowerRatingTextStyle; // 0x2B0(0x20)
	};


	// Struct FortniteUI.FortItemCard_PowerRatingBlock_ItemInstance_Configuration
	// Inherited from FFortItemCard_PowerRatingBlock_Configuration
	// Size: 0xD0 (0x200 - 0x130)
	struct FFortItemCard_PowerRatingBlock_ItemInstance_Configuration : public FFortItemCard_PowerRatingBlock_Configuration	
	{
	public:
		FSlateBrush PowerRatingIconBrush; // 0x130(0xB0)
		TWeakObjectPtr<UClass*> PowerRatingTextStyle; // 0x1E0(0x20)
	};


	// Struct FortniteUI.FortItemCard_StackCountBlock_Configuration
	// Size: 0x28 (0x28 - 0x0)
	struct FFortItemCard_StackCountBlock_Configuration	
	{
	public:
		bool bShowShorthandStackCount; // 0x0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		TWeakObjectPtr<UClass*> TextStyle; // 0x8(0x20)
	};


	// Struct FortniteUI.FortItemCard_NameplateBorder_Configuration
	// Size: 0xC0 (0xC0 - 0x0)
	struct FFortItemCard_NameplateBorder_Configuration	
	{
	public:
		FMargin Padding; // 0x0(0x10)
		FSlateBrush Brush; // 0x10(0xB0)
	};


	// Struct FortniteUI.FortItemCard_DefenderWeaponTypeIcon_Configuration
	// Size: 0x10 (0x10 - 0x0)
	struct FFortItemCard_DefenderWeaponTypeIcon_Configuration	
	{
	public:
		FVector2D IconConstraints; // 0x0(0x10)
	};


	// Struct FortniteUI.FortItemCard_DetailAreaBorder_Configuration
	// Size: 0x14 (0x14 - 0x0)
	struct FFortItemCard_DetailAreaBorder_Configuration	
	{
	public:
		float MinimumHeight; // 0x0(0x4)
		FMargin Padding; // 0x4(0x10)
	};


	// Struct FortniteUI.FortItemCard_TierMeter_Configuration
	// Size: 0x18 (0x18 - 0x0)
	struct FFortItemCard_TierMeter_Configuration	
	{
	public:
		FVector2D PipSize; // 0x0(0x10)
		float InterPipPadding; // 0x10(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.FortItemCard_LevelMeter_Configuration
	// Size: 0x14 (0x14 - 0x0)
	struct FFortItemCard_LevelMeter_Configuration	
	{
	public:
		float MeterThickness; // 0x0(0x4)
		FMargin MeterPadding; // 0x4(0x10)
	};


	// Struct FortniteUI.FortItemCard_DurabilityMeter_Configuration
	// Size: 0x14 (0x14 - 0x0)
	struct FFortItemCard_DurabilityMeter_Configuration	
	{
	public:
		float MeterThickness; // 0x0(0x4)
		FMargin MeterPadding; // 0x4(0x10)
	};


	// Struct FortniteUI.FortItemCard_XL_PersonnelAndSchematics_Configuration
	// Size: 0x4D0 (0x4D0 - 0x0)
	struct FFortItemCard_XL_PersonnelAndSchematics_Configuration	
	{
	public:
		FMargin BackgroundPadding; // 0x0(0x10)
		FFortItemCard_PowerRatingBlock_PersonnelAndSchematics_Configuration PowerRatingBlock; // 0x10(0x2D0)
		FVector2D BookmarkImageSize; // 0x2E0(0x10)
		FFortItemCard_NameplateBorder_Configuration Nameplate; // 0x2F0(0xC0)
		TWeakObjectPtr<UClass*> ItemNameTextStyle; // 0x3B0(0x20)
		FVector2D LeadSurvivorTypeIconSize; // 0x3D0(0x10)
		FVector2D FirstIconSlotSize; // 0x3E0(0x10)
		float PaddingBetweenIconSlots; // 0x3F0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x3F4(0x4) UNKNOWN PROPERTY
		FVector2D SecondIconSlotSize; // 0x3F8(0x10)
		FFortItemCard_DefenderWeaponTypeIcon_Configuration DefenderWeaponTypeIcon; // 0x408(0x10)
		FFortItemCard_DetailAreaBorder_Configuration DetailAreaBorder; // 0x418(0x14)
		float RarityNameTextLeftPadding; // 0x42C(0x4)
		TWeakObjectPtr<UClass*> RarityNameTextStyle; // 0x430(0x20)
		float ClassIconImageLeftPadding; // 0x450(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x454(0x4) UNKNOWN PROPERTY
		FVector2D ClassIconSize; // 0x458(0x10)
		float PaddingBetweenClassIconAndName; // 0x468(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x46C(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr<UClass*> ClassNameTextStyle; // 0x470(0x20)
		float TierMeterLeftPadding; // 0x490(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x494(0x4) UNKNOWN PROPERTY
		FFortItemCard_TierMeter_Configuration TierMeter; // 0x498(0x18)
		FMargin IconSlotOverNameplatePadding; // 0x4B0(0x10)
		FVector2D IconSlotOverNameplateSize; // 0x4C0(0x10)
	};


	// Struct FortniteUI.FortItemCard_XL_ItemInstance_Configuration
	// Size: 0x2D0 (0x2D0 - 0x0)
	struct FFortItemCard_XL_ItemInstance_Configuration	
	{
	public:
		FMargin BackgroundPadding; // 0x0(0x10)
		FMargin PowerRatingBlockPadding; // 0x10(0x10)
		FFortItemCard_PowerRatingBlock_ItemInstance_Configuration PowerRatingBlock; // 0x20(0x200)
		FVector2D BookmarkImageSize; // 0x220(0x10)
		FFortItemCard_StackCountBlock_Configuration StackCountBlock; // 0x230(0x28)
		FMargin TraitBoxPadding; // 0x258(0x10)
		FVector2D FirstTraitSize; // 0x268(0x10)
		float PaddingBetweenTraitIcons; // 0x278(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x27C(0x4) UNKNOWN PROPERTY
		FVector2D SecondTraitSize; // 0x280(0x10)
		FMargin TierMeterPadding; // 0x290(0x10)
		FFortItemCard_TierMeter_Configuration TierMeter; // 0x2A0(0x18)
		FFortItemCard_DurabilityMeter_Configuration DurabilityMeter; // 0x2B8(0x14)
		unsigned char UnknownData01_7[0x4]; // 0x2CC(0x4) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.FortItemCard_XL_TransformKey_Configuration
	// Size: 0x48 (0x48 - 0x0)
	struct FFortItemCard_XL_TransformKey_Configuration	
	{
	public:
		FMargin BackgroundPadding; // 0x0(0x10)
		FFortItemCard_StackCountBlock_Configuration StackCountBlock; // 0x10(0x28)
		FVector2D TransformKeyIconSize; // 0x38(0x10)
	};


	// Struct FortniteUI.FortItemCard_L_PersonnelAndSchematics_Configuration
	// Size: 0x450 (0x450 - 0x0)
	struct FFortItemCard_L_PersonnelAndSchematics_Configuration	
	{
	public:
		FMargin BackgroundPadding; // 0x0(0x10)
		FFortItemCard_PowerRatingBlock_PersonnelAndSchematics_Configuration PowerRatingBlock; // 0x10(0x2D0)
		FVector2D BookmarkImageSize; // 0x2E0(0x10)
		FFortItemCard_NameplateBorder_Configuration Nameplate; // 0x2F0(0xC0)
		FVector2D ClassIconSize; // 0x3B0(0x10)
		FVector2D LeadSurvivorTypeIconSize; // 0x3C0(0x10)
		FVector2D FirstIconSlotSize; // 0x3D0(0x10)
		float PaddingBetweenIconSlots; // 0x3E0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x3E4(0x4) UNKNOWN PROPERTY
		FVector2D SecondIconSlotSize; // 0x3E8(0x10)
		FFortItemCard_DefenderWeaponTypeIcon_Configuration DefenderWeaponTypeIcon; // 0x3F8(0x10)
		FFortItemCard_DetailAreaBorder_Configuration DetailAreaBorder; // 0x408(0x14)
		FFortItemCard_LevelMeter_Configuration LevelMeter; // 0x41C(0x14)
		float TierMeterLeftPadding; // 0x430(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x434(0x4) UNKNOWN PROPERTY
		FFortItemCard_TierMeter_Configuration TierMeter; // 0x438(0x18)
	};


	// Struct FortniteUI.FortItemCard_L_ItemInstance_Configuration
	// Size: 0x2D0 (0x2D0 - 0x0)
	struct FFortItemCard_L_ItemInstance_Configuration	
	{
	public:
		FMargin BackgroundPadding; // 0x0(0x10)
		FMargin PowerRatingBlockPadding; // 0x10(0x10)
		FFortItemCard_PowerRatingBlock_ItemInstance_Configuration PowerRatingBlock; // 0x20(0x200)
		FVector2D BookmarkImageSize; // 0x220(0x10)
		FFortItemCard_StackCountBlock_Configuration StackCountBlock; // 0x230(0x28)
		FMargin TraitBoxPadding; // 0x258(0x10)
		FVector2D FirstTraitSize; // 0x268(0x10)
		float PaddingBetweenTraitIcons; // 0x278(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x27C(0x4) UNKNOWN PROPERTY
		FVector2D SecondTraitSize; // 0x280(0x10)
		FMargin TierMeterPadding; // 0x290(0x10)
		FFortItemCard_TierMeter_Configuration TierMeter; // 0x2A0(0x18)
		FFortItemCard_DurabilityMeter_Configuration DurabilityMeter; // 0x2B8(0x14)
		unsigned char UnknownData01_7[0x4]; // 0x2CC(0x4) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.FortItemCard_L_TransformKey_Configuration
	// Size: 0x48 (0x48 - 0x0)
	struct FFortItemCard_L_TransformKey_Configuration	
	{
	public:
		FMargin BackgroundPadding; // 0x0(0x10)
		FFortItemCard_StackCountBlock_Configuration StackCountBlock; // 0x10(0x28)
		FVector2D TransformKeyIconSize; // 0x38(0x10)
	};


	// Struct FortniteUI.FortItemCard_M_PersonnelAndSchematics_Configuration
	// Size: 0x450 (0x450 - 0x0)
	struct FFortItemCard_M_PersonnelAndSchematics_Configuration	
	{
	public:
		FMargin BackgroundPadding; // 0x0(0x10)
		FFortItemCard_PowerRatingBlock_PersonnelAndSchematics_Configuration PowerRatingBlock; // 0x10(0x2D0)
		FVector2D BookmarkImageSize; // 0x2E0(0x10)
		FFortItemCard_NameplateBorder_Configuration Nameplate; // 0x2F0(0xC0)
		FVector2D ClassIconSize; // 0x3B0(0x10)
		FVector2D LeadSurvivorTypeIconSize; // 0x3C0(0x10)
		FVector2D FirstIconSlotSize; // 0x3D0(0x10)
		float PaddingBetweenIconSlots; // 0x3E0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x3E4(0x4) UNKNOWN PROPERTY
		FVector2D SecondIconSlotSize; // 0x3E8(0x10)
		FFortItemCard_DefenderWeaponTypeIcon_Configuration DefenderWeaponTypeIcon; // 0x3F8(0x10)
		FFortItemCard_DetailAreaBorder_Configuration DetailAreaBorder; // 0x408(0x14)
		FFortItemCard_LevelMeter_Configuration LevelMeter; // 0x41C(0x14)
		float TierMeterLeftPadding; // 0x430(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x434(0x4) UNKNOWN PROPERTY
		FFortItemCard_TierMeter_Configuration TierMeter; // 0x438(0x18)
	};


	// Struct FortniteUI.FortItemCard_M_ItemInstance_Configuration
	// Size: 0x2D0 (0x2D0 - 0x0)
	struct FFortItemCard_M_ItemInstance_Configuration	
	{
	public:
		FMargin BackgroundPadding; // 0x0(0x10)
		FMargin PowerRatingBlockPadding; // 0x10(0x10)
		FFortItemCard_PowerRatingBlock_ItemInstance_Configuration PowerRatingBlock; // 0x20(0x200)
		FVector2D BookmarkImageSize; // 0x220(0x10)
		FFortItemCard_StackCountBlock_Configuration StackCountBlock; // 0x230(0x28)
		FMargin TraitBoxPadding; // 0x258(0x10)
		FVector2D FirstTraitSize; // 0x268(0x10)
		float PaddingBetweenTraitIcons; // 0x278(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x27C(0x4) UNKNOWN PROPERTY
		FVector2D SecondTraitSize; // 0x280(0x10)
		FMargin TierMeterPadding; // 0x290(0x10)
		FFortItemCard_TierMeter_Configuration TierMeter; // 0x2A0(0x18)
		FFortItemCard_DurabilityMeter_Configuration DurabilityMeter; // 0x2B8(0x14)
		unsigned char UnknownData01_7[0x4]; // 0x2CC(0x4) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.FortItemCard_M_TransformKey_Configuration
	// Size: 0x48 (0x48 - 0x0)
	struct FFortItemCard_M_TransformKey_Configuration	
	{
	public:
		FMargin BackgroundPadding; // 0x0(0x10)
		FFortItemCard_StackCountBlock_Configuration StackCountBlock; // 0x10(0x28)
		FVector2D TransformKeyIconSize; // 0x38(0x10)
	};


	// Struct FortniteUI.FortItemCard_S_PersonnelAndSchematics_Configuration
	// Size: 0x450 (0x450 - 0x0)
	struct FFortItemCard_S_PersonnelAndSchematics_Configuration	
	{
	public:
		FMargin BackgroundPadding; // 0x0(0x10)
		FFortItemCard_PowerRatingBlock_PersonnelAndSchematics_Configuration PowerRatingBlock; // 0x10(0x2D0)
		FVector2D BookmarkImageSize; // 0x2E0(0x10)
		FFortItemCard_NameplateBorder_Configuration Nameplate; // 0x2F0(0xC0)
		FVector2D ClassIconSize; // 0x3B0(0x10)
		FVector2D LeadSurvivorTypeIconSize; // 0x3C0(0x10)
		FVector2D FirstIconSlotSize; // 0x3D0(0x10)
		float PaddingBetweenIconSlots; // 0x3E0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x3E4(0x4) UNKNOWN PROPERTY
		FVector2D SecondIconSlotSize; // 0x3E8(0x10)
		FFortItemCard_DefenderWeaponTypeIcon_Configuration DefenderWeaponTypeIcon; // 0x3F8(0x10)
		FFortItemCard_DetailAreaBorder_Configuration DetailAreaBorder; // 0x408(0x14)
		FFortItemCard_LevelMeter_Configuration LevelMeter; // 0x41C(0x14)
		float TierMeterLeftPadding; // 0x430(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x434(0x4) UNKNOWN PROPERTY
		FFortItemCard_TierMeter_Configuration TierMeter; // 0x438(0x18)
	};


	// Struct FortniteUI.FortItemCard_S_ItemInstance_Configuration
	// Size: 0x2C0 (0x2C0 - 0x0)
	struct FFortItemCard_S_ItemInstance_Configuration	
	{
	public:
		FMargin BackgroundPadding; // 0x0(0x10)
		FMargin PowerRatingBlockPadding; // 0x10(0x10)
		FFortItemCard_PowerRatingBlock_ItemInstance_Configuration PowerRatingBlock; // 0x20(0x200)
		FVector2D BookmarkImageSize; // 0x220(0x10)
		FFortItemCard_StackCountBlock_Configuration StackCountBlock; // 0x230(0x28)
		FMargin TraitBoxPadding; // 0x258(0x10)
		FVector2D FirstTraitSize; // 0x268(0x10)
		FMargin TierMeterPadding; // 0x278(0x10)
		FFortItemCard_TierMeter_Configuration TierMeter; // 0x288(0x18)
		FFortItemCard_DurabilityMeter_Configuration DurabilityMeter; // 0x2A0(0x14)
		unsigned char UnknownData00_7[0xC]; // 0x2B4(0xC) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.FortItemCard_S_TransformKey_Configuration
	// Size: 0x48 (0x48 - 0x0)
	struct FFortItemCard_S_TransformKey_Configuration	
	{
	public:
		FMargin BackgroundPadding; // 0x0(0x10)
		FFortItemCard_StackCountBlock_Configuration StackCountBlock; // 0x10(0x28)
		FVector2D TransformKeyIconSize; // 0x38(0x10)
	};


	// Struct FortniteUI.FortItemCard_XS_PersonnelAndSchematics_Configuration
	// Size: 0x48 (0x48 - 0x0)
	struct FFortItemCard_XS_PersonnelAndSchematics_Configuration	
	{
	public:
		FMargin BackgroundPadding; // 0x0(0x10)
		FVector2D BookmarkImageSize; // 0x10(0x10)
		FFortItemCard_DetailAreaBorder_Configuration DetailAreaBorder; // 0x20(0x14)
		unsigned char UnknownData00_6[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
		FVector2D AvailableUpgradeIconSize; // 0x38(0x10)
	};


	// Struct FortniteUI.FortItemCard_XS_ItemInstance_Configuration
	// Size: 0x290 (0x290 - 0x0)
	struct FFortItemCard_XS_ItemInstance_Configuration	
	{
	public:
		FMargin BackgroundPadding; // 0x0(0x10)
		FMargin PowerRatingBlockPadding; // 0x10(0x10)
		FFortItemCard_PowerRatingBlock_ItemInstance_Configuration PowerRatingBlock; // 0x20(0x200)
		FVector2D BookmarkImageSize; // 0x220(0x10)
		FMargin TraitBoxPadding; // 0x230(0x10)
		FVector2D FirstTraitSize; // 0x240(0x10)
		FFortItemCard_StackCountBlock_Configuration StackCountBlock; // 0x250(0x28)
		FFortItemCard_DurabilityMeter_Configuration DurabilityMeter; // 0x278(0x14)
		unsigned char UnknownData00_7[0x4]; // 0x28C(0x4) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.FortItemCard_XS_TransformKey_Configuration
	// Size: 0x48 (0x48 - 0x0)
	struct FFortItemCard_XS_TransformKey_Configuration	
	{
	public:
		FMargin BackgroundPadding; // 0x0(0x10)
		FFortItemCard_StackCountBlock_Configuration StackCountBlock; // 0x10(0x28)
		FVector2D TransformKeyIconSize; // 0x38(0x10)
	};


	// Struct FortniteUI.FortItemCard_XXS_ItemInstance_Configuration
	// Size: 0x28 (0x28 - 0x0)
	struct FFortItemCard_XXS_ItemInstance_Configuration	
	{
	public:
		FFortItemCard_StackCountBlock_Configuration StackCountBlock; // 0x0(0x28)
	};


	// Struct FortniteUI.FortItemManagementInventoryFilterTabLabelInfo
	// Inherited from FFortTabButtonLabelInfo
	// Size: 0x8 (0xF0 - 0xE8)
	struct FFortItemManagementInventoryFilterTabLabelInfo : public FFortTabButtonLabelInfo	
	{
	public:
		FName FilterTabNameId; // 0xE8(0x4)
		unsigned char UnknownData00_7[0x4]; // 0xEC(0x4) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.QuickbarEquipSlotIndicesConfig
	// Size: 0x10 (0x10 - 0x0)
	struct FQuickbarEquipSlotIndicesConfig	
	{
	public:
		TArray<int32_t> EquipSlotIndices; // 0x0(0x10)
	};


	// Struct FortniteUI.MatchmakingWidgetErrorVisuals
	// Size: 0x38 (0x38 - 0x0)
	struct FMatchmakingWidgetErrorVisuals	
	{
	public:
		FName ID; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FText ErrorMessage; // 0x8(0x10)
		FText PlayButtonTextOverride; // 0x18(0x10)
		UTexture* Icon; // 0x28(0x8)
		UClass* OnPlayButtonClickedAction; // 0x30(0x8)
	};


	// Struct FortniteUI.MatchmakingWidgetErrorVisualsDefaultData
	// Size: 0x28 (0x28 - 0x0)
	struct FMatchmakingWidgetErrorVisualsDefaultData	
	{
	public:
		FText ErrorMessage; // 0x0(0x10)
		FText PlayButtonTextOverride; // 0x10(0x10)
		UTexture* Icon; // 0x20(0x8)
	};


	// Struct FortniteUI.GameSelectionButtonInfo
	// Size: 0x28 (0x28 - 0x0)
	struct FGameSelectionButtonInfo	
	{
	public:
		FText PrimaryText; // 0x0(0x10)
		FText SecondaryText; // 0x10(0x10)
		bool bIsEnabled; // 0x20(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x21(0x7) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.QueriedResultIconAssignment
	// Size: 0x18 (0x18 - 0x0)
	struct FQueriedResultIconAssignment	
	{
	public:
		UPaperSprite* SpriteToUse; // 0x0(0x8)
		TArray<UFortMobileButtonBehaviorComponent_IconPicker*> QueriedIconComponents; // 0x8(0x10)
	};


	// Struct FortniteUI.QueriedResultVisibilityAssignment
	// Size: 0x18 (0x18 - 0x0)
	struct FQueriedResultVisibilityAssignment	
	{
	public:
		ESlateVisibility VisibilityToAssign; // 0x0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		TArray<UFortMobileButtonBehaviorComponent_Visibility*> QueriedVisibilityComponents; // 0x8(0x10)
	};


	// Struct FortniteUI.TagFilterOverride
	// Size: 0x68 (0x68 - 0x0)
	struct FTagFilterOverride	
	{
	public:
		FGameplayTagContainer OverridingTags; // 0x0(0x20)
		ETagComparisonType ComparisonTypeToOverride; // 0x20(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x21(0x7) UNKNOWN PROPERTY
		FGameplayTagContainer TagsToRemove; // 0x28(0x20)
		FGameplayTagContainer TagsToAdd; // 0x48(0x20)
	};


	// Struct FortniteUI.TagVisibility
	// Size: 0x28 (0x28 - 0x0)
	struct FTagVisibility	
	{
	public:
		FGameplayTagContainer Tags; // 0x0(0x20)
		ETagComparisonType ComparisonType; // 0x20(0x1)
		ESlateVisibility Visibility; // 0x21(0x1)
		unsigned char UnknownData00_7[0x6]; // 0x22(0x6) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.IconPicker
	// Size: 0x30 (0x30 - 0x0)
	struct FIconPicker	
	{
	public:
		FGameplayTagContainer Tags; // 0x0(0x20)
		ETagComparisonType ComparisonType; // 0x20(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x21(0x7) UNKNOWN PROPERTY
		UPaperSprite* Sprite; // 0x28(0x8)
	};


	// Struct FortniteUI.TextIconPicker
	// Size: 0x30 (0x30 - 0x0)
	struct FTextIconPicker	
	{
	public:
		FGameplayTagContainer Tags; // 0x0(0x20)
		ETagComparisonType ComparisonType; // 0x20(0x1)
		TEnumAsByte<EInteractionBeingAttempted> InteractionType; // 0x21(0x1)
		unsigned char UnknownData00_6[0x6]; // 0x22(0x6) UNKNOWN PROPERTY
		UFortMobileTextIconDataMapping* TextIconMapping; // 0x28(0x8)
	};


	// Struct FortniteUI.TagColor
	// Size: 0x28 (0x28 - 0x0)
	struct FTagColor	
	{
	public:
		FGameplayTagContainer Tags; // 0x0(0x20)
		ETagComparisonType ComparisonType; // 0x20(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x21(0x3) UNKNOWN PROPERTY
		FColor Color; // 0x24(0x4)
	};


	// Struct FortniteUI.ToggleBehaviorSelector
	// Size: 0x28 (0x28 - 0x0)
	struct FToggleBehaviorSelector	
	{
	public:
		FGameplayTagContainer Tags; // 0x0(0x20)
		ETagComparisonType ComparisonType; // 0x20(0x1)
		bool bIsToggleButton; // 0x21(0x1)
		unsigned char UnknownData00_7[0x6]; // 0x22(0x6) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.InteractionVisibility
	// Size: 0x3 (0x3 - 0x0)
	struct FInteractionVisibility	
	{
	public:
		EInteractionComparisonType ComparisonType; // 0x0(0x1)
		ESlateVisibility Visibility; // 0x1(0x1)
		TEnumAsByte<EInteractionBeingAttempted> InteractionType; // 0x2(0x1)
	};


	// Struct FortniteUI.FortModalContainerSizeEntry
	// Size: 0x1C (0x1C - 0x0)
	struct FFortModalContainerSizeEntry	
	{
	public:
		float AbsoluteWidth; // 0x0(0x4)
		float TopPercent; // 0x4(0x4)
		float MiddlePercent; // 0x8(0x4)
		float BottomPercent; // 0xC(0x4)
		float VerticalPadding; // 0x10(0x4)
		float HorizontalPadding; // 0x14(0x4)
		float ContentPadding; // 0x18(0x4)
	};


	// Struct FortniteUI.FortUIPerkTier
	// Size: 0x10 (0x10 - 0x0)
	struct FFortUIPerkTier	
	{
	public:
		UFortHero* CurrentHero; // 0x0(0x8)
		EFortItemTier Tier; // 0x8(0x1)
		bool bIsUpgrade; // 0x9(0x1)
		bool bIsEvolution; // 0xA(0x1)
		unsigned char UnknownData00_7[0x5]; // 0xB(0x5) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.FortUIPerk
	// Size: 0x88 (0x88 - 0x0)
	struct FFortUIPerk	
	{
	public:
		FFortSpecializationSlot SpecializationSlot; // 0x0(0x78)
		UFortHero* Hero; // 0x78(0x8)
		EFortItemTier Tier; // 0x80(0x1)
		EFortSupportBonusType SupportBonusType; // 0x81(0x1)
		bool bIsTierPerk; // 0x82(0x1)
		bool bIsUpgrade; // 0x83(0x1)
		bool bIsEvolution; // 0x84(0x1)
		bool bIsEvolutionBranch; // 0x85(0x1)
		unsigned char UnknownData00_7[0x2]; // 0x86(0x2) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.FortPlayerSurveyCMSCustomTextReplacement
	// Size: 0x20 (0x20 - 0x0)
	struct FFortPlayerSurveyCMSCustomTextReplacement	
	{
	public:
		FString TextReplacementTag; // 0x0(0x10)
		TArray<FFortPlayerSurveyLocalizableText> TextReplacementValues; // 0x10(0x10)
	};


	// Struct FortniteUI.FortPlayerSurveyLocalizableText
	// Size: 0x20 (0x20 - 0x0)
	struct FFortPlayerSurveyLocalizableText	
	{
	public:
		FString TextID; // 0x0(0x10)
		FString LocalizedText; // 0x10(0x10)
	};


	// Struct FortniteUI.FortPlayerSurveyCMSQuestion
	// Size: 0x50 (0x50 - 0x0)
	struct FFortPlayerSurveyCMSQuestion	
	{
	public:
		FFortPlayerSurveyLocalizableText QuestionText; // 0x0(0x20)
		FString Type; // 0x20(0x10)
		uint32_t NumberOfOptions; // 0x30(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
		TArray<FFortPlayerSurveyLocalizableText> Responses; // 0x38(0x10)
		bool bRandomizeResponseOrder; // 0x48(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x49(0x7) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.FortPlayerSurveyCMSFrequentlyAskedQuestion
	// Size: 0x60 (0x60 - 0x0)
	struct FFortPlayerSurveyCMSFrequentlyAskedQuestion	
	{
	public:
		FString FrequentlyAskedQuestionID; // 0x0(0x10)
		FFortPlayerSurveyCMSQuestion Question; // 0x10(0x50)
	};


	// Struct FortniteUI.FortPlayerSurveyCMSFrequentlyAskedQuestionID
	// Size: 0x10 (0x10 - 0x0)
	struct FFortPlayerSurveyCMSFrequentlyAskedQuestionID	
	{
	public:
		FString ID; // 0x0(0x10)
	};


	// Struct FortniteUI.FortPlayerSurveyCMSQuestionContainer
	// Size: 0x60 (0x60 - 0x0)
	struct FFortPlayerSurveyCMSQuestionContainer	
	{
	public:
		FFortPlayerSurveyCMSFrequentlyAskedQuestionID FrequentlyAskedQuestionID; // 0x0(0x10)
		FFortPlayerSurveyCMSQuestion Question; // 0x10(0x50)
	};


	// Struct FortniteUI.FortPlayerSurveyCMSCondition
	// Size: 0x50 (0x50 - 0x0)
	struct FFortPlayerSurveyCMSCondition	
	{
	public:
		FString Type; // 0x0(0x10)
		FString Operation; // 0x10(0x10)
		FString ComparisonValue; // 0x20(0x10)
		TArray<FString> ConditionInfo; // 0x30(0x10)
		TArray<FJsonObjectWrapper> ChildConditions; // 0x40(0x10)
	};


	// Struct FortniteUI.FortPlayerSurveyCMSConditionGroup
	// Size: 0x20 (0x20 - 0x0)
	struct FFortPlayerSurveyCMSConditionGroup	
	{
	public:
		FString ConditionGroupID; // 0x0(0x10)
		TArray<FFortPlayerSurveyCMSCondition> Conditions; // 0x10(0x10)
	};


	// Struct FortniteUI.FortPlayerSurveyCMSSurvey
	// Size: 0x78 (0x78 - 0x0)
	struct FFortPlayerSurveyCMSSurvey	
	{
	public:
		FString SurveyID; // 0x0(0x10)
		TArray<FString> SurveyTags; // 0x10(0x10)
		FString Title; // 0x20(0x10)
		TArray<FString> ConditionGroupIDs; // 0x30(0x10)
		TArray<FFortPlayerSurveyCMSCondition> Conditions; // 0x40(0x10)
		TArray<FFortPlayerSurveyCMSQuestionContainer> Questions; // 0x50(0x10)
		TArray<FFortPlayerSurveyCMSCustomTextReplacement> TextReplacementOverrides; // 0x60(0x10)
		bool bRandomizeQuestionOrder; // 0x70(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x71(0x7) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.FortPlayerSurveyCMSData
	// Size: 0x58 (0x58 - 0x0)
	struct FFortPlayerSurveyCMSData	
	{
	public:
		TArray<FFortPlayerSurveyCMSConditionGroup> ConditionGroups; // 0x0(0x10)
		TArray<FFortPlayerSurveyCMSFrequentlyAskedQuestion> FrequentlyAskedQuestions; // 0x10(0x10)
		TArray<FFortPlayerSurveyCMSCustomTextReplacement> CustomTextReplacements; // 0x20(0x10)
		TArray<FFortPlayerSurveyCMSCustomTextReplacement> WhitelistedTextReplacements; // 0x30(0x10)
		TArray<FFortPlayerSurveyCMSSurvey> Surveys; // 0x40(0x10)
		bool bSurveysEnabled; // 0x50(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x51(0x7) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.FortRichTextDecoratorExtension
	// Size: 0x30 (0x30 - 0x0)
	struct FFortRichTextDecoratorExtension	
	{
	public:
		TWeakObjectPtr<UClass*> TargetClass; // 0x0(0x20)
		TArray<UClass*> Decorators; // 0x20(0x10)
	};


	// Struct FortniteUI.SqueegeeStyleParams
	// Size: 0x30 (0x30 - 0x0)
	struct FSqueegeeStyleParams	
	{
	public:
		FVector2D IconSize; // 0x0(0x10)
		FVector2D IconSkewSize; // 0x10(0x10)
		int32_t FontSize; // 0x20(0x4)
		float PaddingSize; // 0x24(0x4)
		bool bShowDetails; // 0x28(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x29(0x7) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.SqueegeeData
	// Size: 0x20 (0x20 - 0x0)
	struct FSqueegeeData	
	{
	public:
		ESqueegeeDataTypes DataType; // 0x0(0x1)
		unsigned char UnknownData00_7[0x1F]; // 0x1(0x1F) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.FortUIPickerTrapSortScores
	// Size: 0x14 (0x14 - 0x0)
	struct FFortUIPickerTrapSortScores	
	{
	public:
		float UniqueTrapBonus; // 0x0(0x4)
		float SlottedBonus; // 0x4(0x4)
		float FavoriteBonus; // 0x8(0x4)
		float MaxTrackedTrapBonusTime; // 0xC(0x4)
		float TrackedTrapBonusMultiplier; // 0x10(0x4)
	};


	// Struct FortniteUI.FortUIPickerTrapSortModifier
	// Inherited from FTableRowBase
	// Size: 0x50 (0x58 - 0x8)
	struct FFortUIPickerTrapSortModifier : public FTableRowBase	
	{
	public:
		FGameplayTagQuery ItemTagQuery; // 0x8(0x48)
		float ScoreBonus; // 0x50(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x54(0x4) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.ExternalDynamicTabParams
	// Size: 0x200 (0x200 - 0x0)
	struct FExternalDynamicTabParams	
	{
	public:
		TWeakObjectPtr<UClass*> TabScreenClass; // 0x0(0x20)
		FFortTopBarTabButtonInfo TabButtonInfo; // 0x20(0x1D0)
		bool bIsMobileOverride; // 0x1F0(0x1)
		unsigned char UnknownData00_7[0xF]; // 0x1F1(0xF) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.FortTopBarTabButtonInfo
	// Size: 0x1D0 (0x1D0 - 0x0)
	struct FFortTopBarTabButtonInfo	
	{
	public:
		FName TabID; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FString CalendarEventName; // 0x8(0x10)
		FText DisplayName; // 0x18(0x10)
		unsigned char UnknownData01_6[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		FSlateBrush IconBrush; // 0x30(0xB0)
		FSlateBrush MobileIconBrush; // 0xE0(0xB0)
		bool bOverride_MobileIconBrush; // 0x190(0x1)
		EFortUIFeature LinkedUIFeature; // 0x191(0x1)
		EFortUIFeature ForwardOnRemoval; // 0x192(0x1)
		EFortBangType BangType; // 0x193(0x1)
		int32_t SortOrder; // 0x194(0x4)
		bool bForceImage; // 0x198(0x1)
		bool bPrimaryPlayerOnly; // 0x199(0x1)
		bool bShowInSplitscreenV2; // 0x19A(0x1)
		bool bInteractAnalytic; // 0x19B(0x1)
		unsigned char UnknownData02_6[0x4]; // 0x19C(0x4) UNKNOWN PROPERTY
		UClass* OverrideTabWidget; // 0x1A0(0x8)
		TArray<TWeakObjectPtr> PersistentTabObjects; // 0x1A8(0x10)
		bool bIsDynamicTab; // 0x1B8(0x1)
		EFortTopBarTabButtonGroup ButtonGroup; // 0x1B9(0x1)
		unsigned char UnknownData03_6[0x6]; // 0x1BA(0x6) UNKNOWN PROPERTY
		UClass* ViewModel; // 0x1C0(0x8)
		unsigned char UnknownData04_7[0x8]; // 0x1C8(0x8) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.FrontendDisabledTabs
	// Size: 0x20 (0x20 - 0x0)
	struct FFrontendDisabledTabs	
	{
	public:
		TArray<FName> DisabledTabNames; // 0x0(0x10)
		TArray<FName> HiddenTabNames; // 0x10(0x10)
	};


	// Struct FortniteUI.FrontendExperienceFlowParams
	// Size: 0x30 (0x30 - 0x0)
	struct FFrontendExperienceFlowParams	
	{
	public:
		FString PluginName; // 0x0(0x10)
		TWeakObjectPtr<UClass*> FrontendExperienceFlowClass; // 0x10(0x20)
	};


	// Struct FortniteUI.CareerStatsScreenParams
	// Size: 0x28 (0x28 - 0x0)
	struct FCareerStatsScreenParams	
	{
	public:
		APlayerController* ContextPC; // 0x0(0x8)
		FString PlayerAccountId; // 0x8(0x10)
		FText PlayerDisplayName; // 0x18(0x10)
	};


	// Struct FortniteUI.ProductWidgetKey
	// Size: 0x8 (0x8 - 0x0)
	struct FProductWidgetKey	
	{
	public:
		FGameplayTag ProductTag; // 0x0(0x4)
		FGameplayTag WidgetAliasTag; // 0x4(0x4)
	};


	// Struct FortniteUI.UIStateTag
	// Inherited from FUITag -> FGameplayTag
	// Size: 0x0 (0x4 - 0x4)
	struct FUIStateTag : public FUITag	
	{
	public:
	};


	// Struct FortniteUI.UIStateTag_FortStartup
	// Inherited from FUIStateTag -> FUITag -> FGameplayTag
	// Size: 0x0 (0x4 - 0x4)
	struct FUIStateTag_FortStartup : public FUIStateTag	
	{
	public:
	};


	// Struct FortniteUI.UIStateTag_Athena
	// Inherited from FUIStateTag -> FUITag -> FGameplayTag
	// Size: 0x0 (0x4 - 0x4)
	struct FUIStateTag_Athena : public FUIStateTag	
	{
	public:
	};


	// Struct FortniteUI.UIStateTag_STW
	// Inherited from FUIStateTag -> FUITag -> FGameplayTag
	// Size: 0x0 (0x4 - 0x4)
	struct FUIStateTag_STW : public FUIStateTag	
	{
	public:
	};


	// Struct FortniteUI.FortUIStyleWindowButtons
	// Size: 0xDC0 (0xDC0 - 0x0)
	struct FFortUIStyleWindowButtons	
	{
	public:
		FButtonStyle Close; // 0x0(0x370)
		FButtonStyle Minimize; // 0x370(0x370)
		FButtonStyle Maximize; // 0x6E0(0x370)
		FButtonStyle Restore; // 0xA50(0x370)
	};


	// Struct FortniteUI.FortUIStyleDefinition
	// Size: 0xDC0 (0xDC0 - 0x0)
	struct FFortUIStyleDefinition	
	{
	public:
		FFortUIStyleWindowButtons WindowButtons; // 0x0(0xDC0)
	};


	// Struct FortniteUI.FortUITutorialData
	// Inherited from FTableRowBase
	// Size: 0x48 (0x50 - 0x8)
	struct FFortUITutorialData : public FTableRowBase	
	{
	public:
		FName TutorialWidgetName; // 0x8(0x4)
		unsigned char UnknownData00_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FText Title; // 0x10(0x10)
		FString DevComment; // 0x20(0x10)
		TArray<FText> Descriptions; // 0x30(0x10)
		TArray<TWeakObjectPtr> PreviewImages; // 0x40(0x10)
	};


	// Struct FortniteUI.FortToastDisplayInfo
	// Size: 0x48 (0x48 - 0x0)
	struct FFortToastDisplayInfo	
	{
	public:
		FText Header; // 0x0(0x10)
		FText Body; // 0x10(0x10)
		TWeakObjectPtr<UTexture2D*> Image; // 0x20(0x20)
		EFortToastType Type; // 0x40(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x41(0x7) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.FortErrorInfo
	// Size: 0x58 (0x58 - 0x0)
	struct FFortErrorInfo	
	{
	public:
		FText Operation; // 0x0(0x10)
		FText ErrorMessage; // 0x10(0x10)
		FString ErrorCode; // 0x20(0x10)
		EFortErrorSeverity ErrorSeverity; // 0x30(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x31(0x7) UNKNOWN PROPERTY
		FText ContinueButtonText; // 0x38(0x10)
		unsigned char UnknownData01_7[0x10]; // 0x48(0x10) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.FortDisplayModifier
	// Size: 0x28 (0x28 - 0x0)
	struct FFortDisplayModifier	
	{
	public:
		FText Label; // 0x0(0x10)
		FText Value; // 0x10(0x10)
		EFortStatValueDisplayType DisplayType; // 0x20(0x1)
		EFortBuffState BuffState; // 0x21(0x1)
		unsigned char UnknownData00_7[0x6]; // 0x22(0x6) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.FortDisplayAttribute
	// Size: 0x70 (0x70 - 0x0)
	struct FFortDisplayAttribute	
	{
	public:
		FGameplayAttribute Attribute; // 0x0(0x38)
		FText Label; // 0x38(0x10)
		FText Value; // 0x48(0x10)
		FText HoverText; // 0x58(0x10)
		float NumericValue; // 0x68(0x4)
		EFortStatValueDisplayType DisplayType; // 0x6C(0x1)
		EFortBuffState BuffState; // 0x6D(0x1)
		EFortClampState ClampState; // 0x6E(0x1)
		EFortComparisonType ComparisonType; // 0x6F(0x1)
	};


	// Struct FortniteUI.FortSquadIconData
	// Inherited from FTableRowBase
	// Size: 0x428 (0x430 - 0x8)
	struct FFortSquadIconData : public FTableRowBase	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FFortMultiSizeBrush Brush; // 0x10(0x420)
	};


	// Struct FortniteUI.FortHealthyGamingData
	// Inherited from FTableRowBase
	// Size: 0x68 (0x70 - 0x8)
	struct FFortHealthyGamingData : public FTableRowBase	
	{
	public:
		float HealthWarningToastInterval; // 0x8(0x4)
		unsigned char UnknownData00_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FText HealthWarningToastDescriptionFormat; // 0x10(0x10)
		FText HealthWarningScreenText; // 0x20(0x10)
		FText GameplayRestrictionText; // 0x30(0x10)
		float GameplayRestrictionWarningTimeOffset; // 0x40(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x44(0x4) UNKNOWN PROPERTY
		FText AntiAddictionTotalDescriptionFormat; // 0x48(0x10)
		bool bUsePlayerTimeLimitSystem; // 0x58(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x59(0x7) UNKNOWN PROPERTY
		TArray<TWeakObjectPtr> RatingIcons; // 0x60(0x10)
	};


	// Struct FortniteUI.StartMatchmakingFlowPayload
	// Size: 0x1 (0x1 - 0x0)
	struct FStartMatchmakingFlowPayload	
	{
	public:
		unsigned char UnknownData00_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.MatchmakingUIOverride
	// Size: 0x40 (0x40 - 0x0)
	struct FMatchmakingUIOverride	
	{
	public:
		TWeakObjectPtr<UClass*> MatchmakingWidgetClass; // 0x0(0x20)
		TWeakObjectPtr<UClass*> MatchmakingWidgetOverrideClass; // 0x20(0x20)
	};


	// Struct FortniteUI.SidebarClose
	// Size: 0x1 (0x1 - 0x0)
	struct FSidebarClose	
	{
	public:
		unsigned char UnknownData00_2[0x1]; // 0x0(0x1) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.VariantDisplayInfo
	// Size: 0x38 (0x38 - 0x0)
	struct FVariantDisplayInfo	
	{
	public:
		TWeakObjectPtr<UTexture2D*> Texture; // 0x0(0x20)
		FSlateColor TintColor; // 0x20(0x14)
		bool bApplyTexture : 1; // 0x34:0(0x1)
		bool bApplyTint : 1; // 0x34:1(0x1)
		unsigned char UnknownData00_7[0x3]; // 0x35(0x3) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.FortCosmeticVariantFilterContext
	// Size: 0x30 (0x30 - 0x0)
	struct FFortCosmeticVariantFilterContext	
	{
	public:
		unsigned char UnknownData00_2[0x30]; // 0x0(0x30) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.MobileEnhancedInputData
	// Size: 0x50 (0x50 - 0x0)
	struct FMobileEnhancedInputData	
	{
	public:
		UInputAction* InputAction; // 0x0(0x8)
		FVector InputActionValue; // 0x8(0x18)
		bool bShouldConstrainInputActionValueType; // 0x20(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x21(0x7) UNKNOWN PROPERTY
		TArray<UInputModifier*> Modifiers; // 0x28(0x10)
		TArray<UInputTrigger*> Triggers; // 0x38(0x10)
		FGameplayTag InputContextTag; // 0x48(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x4C(0x4) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.MotdInteraction
	// Size: 0x48 (0x48 - 0x0)
	struct FMotdInteraction	
	{
	public:
		unsigned char UnknownData00_2[0x48]; // 0x0(0x48) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.MotdButtonInteraction
	// Inherited from FMotdInteraction
	// Size: 0x18 (0x60 - 0x48)
	struct FMotdButtonInteraction : public FMotdInteraction	
	{
	public:
		unsigned char UnknownData00_1[0x18]; // 0x48(0x18) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.ProductModeUserFacingDataItem
	// Size: 0x50 (0x50 - 0x0)
	struct FProductModeUserFacingDataItem	
	{
	public:
		FText DisplayName; // 0x0(0x10)
		FText Description; // 0x10(0x10)
		TWeakObjectPtr<UTexture2D*> Image; // 0x20(0x20)
		FLinearColor Color; // 0x40(0x10)
	};


	// Struct FortniteUI.SettingsScreenTabSchema
	// Size: 0x110 (0x110 - 0x0)
	struct FSettingsScreenTabSchema	
	{
	public:
		FName SettingCollectionName; // 0x0(0x4)
		int32_t DisplayPriority; // 0x4(0x4)
		TArray<USettingsTabDisplayCondition*> DisplayConditions; // 0x8(0x10)
		unsigned char UnknownData00_6[0x8]; // 0x18(0x8) UNKNOWN PROPERTY
		FFortTabButtonLabelInfo TabButtonLabel; // 0x20(0xF0)
	};


	// Struct FortniteUI.AthenaStyleMissionData
	// Size: 0x28 (0x28 - 0x0)
	struct FAthenaStyleMissionData	
	{
	public:
		UFortVariantTokenType* StyleDefinition; // 0x0(0x8)
		TArray<UFortVariantTokenType*> OptionalAdditionalStyleDefinitions; // 0x8(0x10)
		UFortQuestItemDefinition* Mission; // 0x18(0x8)
		UAnimationAsset* OverrideIdleAnimation; // 0x20(0x8)
	};


	// Struct FortniteUI.AthenaSpatialStyleCharacterData
	// Size: 0x30 (0x30 - 0x0)
	struct FAthenaSpatialStyleCharacterData	
	{
	public:
		UAthenaCharacterItemDefinition* Character; // 0x0(0x8)
		TArray<FAthenaStyleMissionData> Styles; // 0x8(0x10)
		TArray<ESpatialStyleCharacterUnlockPrerequisite> CharacterPrerequisites; // 0x18(0x10)
		UAnimationAsset* CharacterIdleAnimation; // 0x28(0x8)
	};


	// Struct FortniteUI.PointerInjectedInputActionContext
	// Size: 0x30 (0x30 - 0x0)
	struct FPointerInjectedInputActionContext	
	{
	public:
		UInputAction* InputAction; // 0x0(0x8)
		TArray<UInputModifier*> InputModifiers; // 0x8(0x10)
		TArray<UInputTrigger*> InputTriggers; // 0x18(0x10)
		char StartSources; // 0x28(0x1)
		bool bUseYAxisFor1D; // 0x29(0x1)
		unsigned char UnknownData00_7[0x6]; // 0x2A(0x6) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.TrackedInputPointerConfig
	// Size: 0x18 (0x18 - 0x0)
	struct FTrackedInputPointerConfig	
	{
	public:
		char StartSources; // 0x0(0x1)
		ECommonInputMode InputMode; // 0x1(0x1)
		char MaxTrackedPointers; // 0x2(0x1)
		bool bTrackPastBounds; // 0x3(0x1)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TArray<FPointerInjectedInputActionContext> InputActions; // 0x8(0x10)
	};


	// Struct FortniteUI.TrackedInputPointer
	// Size: 0x90 (0x90 - 0x0)
	struct FTrackedInputPointer	
	{
	public:
		unsigned char UnknownData00_2[0x90]; // 0x0(0x90) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.UIKitTabData
	// Size: 0x10 (0x10 - 0x0)
	struct FUIKitTabData	
	{
	public:
		bool bEnableTabID; // 0x0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		FName TabID; // 0x4(0x4)
		UMVVMViewModelBase* TabViewModel; // 0x8(0x8)
	};


	// Struct FortniteUI.TrackedInjectedPointerInputActions
	// Size: 0x10 (0x10 - 0x0)
	struct FTrackedInjectedPointerInputActions	
	{
	public:
		TArray<FPointerInjectedInputActionContext> ActionContexts; // 0x0(0x10)
	};


	// Struct FortniteUI.VideoWidgetConfig
	// Size: 0x98 (0x98 - 0x0)
	struct FVideoWidgetConfig	
	{
	public:
		UFortStreamMediaSource* StreamingMediaSource; // 0x0(0x8)
		FName VideoString; // 0x8(0x4)
		FName VideoDisplayDataID; // 0xC(0x4)
		FName FallbackVideoID; // 0x10(0x4)
		bool bCheckAutoPlay; // 0x14(0x1)
		bool bForceAutoPlay; // 0x15(0x1)
		bool bStreamingEnabled; // 0x16(0x1)
		unsigned char UnknownData00_6[0x1]; // 0x17(0x1) UNKNOWN PROPERTY
		FString VideoUID; // 0x18(0x10)
		bool bShouldBeModal; // 0x28(0x1)
		bool bUseSkipBoundaries; // 0x29(0x1)
		bool bHoldToSkip; // 0x2A(0x1)
		bool bFadeFromColor; // 0x2B(0x1)
		bool bEndFadeFromColor; // 0x2C(0x1)
		bool bFadeUpToColor; // 0x2D(0x1)
		bool bAllowSkipping; // 0x2E(0x1)
		unsigned char UnknownData01_6[0x1]; // 0x2F(0x1) UNKNOWN PROPERTY
		FString MimeType; // 0x30(0x10)
		FString VideoURL; // 0x40(0x10)
		bool bEnableLooping; // 0x50(0x1)
		bool bAutoClose; // 0x51(0x1)
		bool bHideControls; // 0x52(0x1)
		bool bHideBackground; // 0x53(0x1)
		bool bHideBackgroundUntilVideoDetected; // 0x54(0x1)
		bool bStartMTTransparent; // 0x55(0x1)
		unsigned char UnknownData02_6[0x2]; // 0x56(0x2) UNKNOWN PROPERTY
		USoundMix* SoundMixOverride; // 0x58(0x8)
		bool bOverrideSoundMix; // 0x60(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x61(0x7) UNKNOWN PROPERTY
		USoundClass* SoundClassOverride; // 0x68(0x8)
		bool bControlWorldRendering; // 0x70(0x1)
		bool bControlShaderPipelineCacheBatching; // 0x71(0x1)
		bool bDisablePiP; // 0x72(0x1)
		unsigned char UnknownData04_6[0x1]; // 0x73(0x1) UNKNOWN PROPERTY
		float PartySyncStartTime; // 0x74(0x4)
		bool bDisableCursor; // 0x78(0x1)
		bool bDisableStreamLimitsFromWidget; // 0x79(0x1)
		bool bStartHidden; // 0x7A(0x1)
		bool bAudioOnlyHandlingFromMetadata; // 0x7B(0x1)
		bool bTreatAudioOnlyAsColorFades; // 0x7C(0x1)
		bool bEnableDebugCommands; // 0x7D(0x1)
		unsigned char UnknownData05_6[0x2]; // 0x7E(0x2) UNKNOWN PROPERTY
		FLinearColor FadeColor; // 0x80(0x10)
		bool bPrePostRollNoAudioMix; // 0x90(0x1)
		bool bAllowGlobalForceGC; // 0x91(0x1)
		bool bInstanceForceGC; // 0x92(0x1)
		unsigned char UnknownData06_7[0x5]; // 0x93(0x5) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.BasicEffectData
	// Size: 0x10 (0x10 - 0x0)
	struct FBasicEffectData	
	{
	public:
		UMaterialInstanceDynamic* Material; // 0x0(0x8)
		FName ParameterName; // 0x8(0x4)
		unsigned char UnknownData00_7[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.ParallaxEffectData
	// Inherited from FBasicEffectData
	// Size: 0x8 (0x18 - 0x10)
	struct FParallaxEffectData : public FBasicEffectData	
	{
	public:
		float PitchOffsetMultiplier; // 0x10(0x4)
		float YawOffsetMultiplier; // 0x14(0x4)
	};


	// Struct FortniteUI.AthenaCollectionScreenContainerTabInfo
	// Size: 0x70 (0x70 - 0x0)
	struct FAthenaCollectionScreenContainerTabInfo	
	{
	public:
		FText TabTitle; // 0x0(0x10)
		TWeakObjectPtr<UObject*> TabIcon; // 0x10(0x20)
		TWeakObjectPtr<UClass*> TabClass; // 0x30(0x20)
		FGameplayTagContainer TabCategoryTags; // 0x50(0x20)
	};


	// Struct FortniteUI.MutatorAddedWidgets
	// Size: 0x10 (0x10 - 0x0)
	struct FMutatorAddedWidgets	
	{
	public:
		unsigned char UnknownData00_2[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.AthenaPlaylistLeaderboardData
	// Size: 0x50 (0x50 - 0x0)
	struct FAthenaPlaylistLeaderboardData	
	{
	public:
		FName StatId; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FText StatDisplayName; // 0x8(0x10)
		FText TabDisplayName; // 0x18(0x10)
		FText RowDisplayName; // 0x28(0x10)
		FString BaseGameplayTag; // 0x38(0x10)
		bool bIsGlobal; // 0x48(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x49(0x7) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.AthenaLeaderboardData
	// Inherited from FTableRowBase
	// Size: 0x38 (0x40 - 0x8)
	struct FAthenaLeaderboardData : public FTableRowBase	
	{
	public:
		EFortAthenaPlaylist Playlist; // 0x8(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
		FName PlaylistName; // 0xC(0x4)
		ECommonInputType InputType; // 0x10(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
		TArray<FAthenaPlaylistLeaderboardData> Stats; // 0x18(0x10)
		bool bExcludePlaylistNames; // 0x28(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x29(0x7) UNKNOWN PROPERTY
		TArray<FString> PlaylistNames; // 0x30(0x10)
	};


	// Struct FortniteUI.PlaylistFilter
	// Size: 0x10 (0x10 - 0x0)
	struct FPlaylistFilter	
	{
	public:
		UDataTable* PlaylistsData; // 0x0(0x8)
		unsigned char UnknownData00_7[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.LeaderboardFilter
	// Inherited from FPlaylistFilter
	// Size: 0x8 (0x18 - 0x10)
	struct FLeaderboardFilter : public FPlaylistFilter	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x10(0x8) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.FortResurrectionUIData
	// Size: 0x10 (0x10 - 0x0)
	struct FFortResurrectionUIData	
	{
	public:
		bool bResurrectionChipAvailable; // 0x0(0x1)
		bool bResurrectionChipPickedUp; // 0x1(0x1)
		bool bResurrectionChipRebooting; // 0x2(0x1)
		EAthenaSquadListUpdateType SquadDirectiveUpdateType; // 0x3(0x1)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		AFortPlayerStateAthena* PlayerState; // 0x8(0x8)
	};


	// Struct FortniteUI.MarkerLargeIndicatorType
	// Size: 0x18 (0x18 - 0x0)
	struct FMarkerLargeIndicatorType	
	{
	public:
		UMaterialInterface* MarkerMaterial; // 0x0(0x8)
		FVector2D ImageSize; // 0x8(0x10)
	};


	// Struct FortniteUI.AthenaTeamCountSlotData
	// Size: 0x28 (0x28 - 0x0)
	struct FAthenaTeamCountSlotData	
	{
	public:
		FText TeamNameText; // 0x0(0x10)
		FText TeamCountText; // 0x10(0x10)
		bool bIsMyTeam; // 0x20(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x21(0x7) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.WinConditionPlacementData
	// Size: 0x14 (0x14 - 0x0)
	struct FWinConditionPlacementData	
	{
	public:
		FMargin Padding; // 0x0(0x10)
		TEnumAsByte<EHorizontalAlignment> HorizontalAlignment; // 0x10(0x1)
		TEnumAsByte<EVerticalAlignment> VerticalAlignment; // 0x11(0x1)
		unsigned char UnknownData00_7[0x2]; // 0x12(0x2) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.WinConditionPlacementDataMapWrapper
	// Size: 0x50 (0x50 - 0x0)
	struct FWinConditionPlacementDataMapWrapper	
	{
	public:
		TMap<EHUDMessagePlacement, FWinConditionPlacementData> Data; // 0x0(0x50)
	};


	// Struct FortniteUI.ChallengeRewardCarouselData
	// Size: 0x10 (0x10 - 0x0)
	struct FChallengeRewardCarouselData	
	{
	public:
		UUserWidget* Widget; // 0x0(0x8)
		UItemDefinitionBase* ItemDefinition; // 0x8(0x8)
	};


	// Struct FortniteUI.QuestEntryVisualData
	// Size: 0x10 (0x10 - 0x0)
	struct FQuestEntryVisualData	
	{
	public:
		UClass* EntryClass; // 0x0(0x8)
		int32_t PreAllocationCount; // 0x8(0x4)
		unsigned char UnknownData00_7[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.QuestRecapData
	// Size: 0x14 (0x14 - 0x0)
	struct FQuestRecapData	
	{
	public:
		TWeakObjectPtr<UFortQuestItem*> QuestItem; // 0x0(0x8)
		int32_t LastKnownMcpValue; // 0x8(0x4)
		int32_t AchivedCount; // 0xC(0x4)
		int32_t RequiredCount; // 0x10(0x4)
	};


	// Struct FortniteUI.AthenaFeatTimelineDisplayData
	// Inherited from FTableRowBase
	// Size: 0x38 (0x40 - 0x8)
	struct FAthenaFeatTimelineDisplayData : public FTableRowBase	
	{
	public:
		FGameplayTag FeatChallengeBundleTag; // 0x8(0x4)
		unsigned char UnknownData00_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FText SeasonText; // 0x10(0x10)
		FLinearColor Color1; // 0x20(0x10)
		FLinearColor Color2; // 0x30(0x10)
	};


	// Struct FortniteUI.LevelEffectsData
	// Size: 0x48 (0x48 - 0x0)
	struct FLevelEffectsData	
	{
	public:
		int32_t MinPlayerLevel; // 0x0(0x4)
		FLinearColor ContentColor; // 0x4(0x10)
		FLinearColor OutlineColor; // 0x14(0x10)
		unsigned char UnknownData00_6[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr<UObject*> FlameDisplayObject; // 0x28(0x20)
	};


	// Struct FortniteUI.FortEmotePickerCategory
	// Size: 0x50 (0x50 - 0x0)
	struct FFortEmotePickerCategory	
	{
	public:
		unsigned char UnknownData00_2[0x50]; // 0x0(0x50) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.FortEmotePickerSubCategoryIdentifier
	// Size: 0x18 (0x18 - 0x0)
	struct FFortEmotePickerSubCategoryIdentifier	
	{
	public:
		FGameplayTag Tag; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FText Name; // 0x8(0x10)
	};


	// Struct FortniteUI.NextTournamentData
	// Size: 0x30 (0x30 - 0x0)
	struct FNextTournamentData	
	{
	public:
		FString TournamentName; // 0x0(0x10)
		FDateTime StartTime; // 0x10(0x8)
		FDateTime EndTime; // 0x18(0x8)
		bool bIsLoadingImage; // 0x20(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x21(0x7) UNKNOWN PROPERTY
		UTexture2D* TournamentTexture; // 0x28(0x8)
	};


	// Struct FortniteUI.GenericAction
	// Size: 0x40 (0x40 - 0x0)
	struct FGenericAction	
	{
	public:
		unsigned char UnknownData00_2[0x40]; // 0x0(0x40) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.SquadComsNPCCommandEntry
	// Size: 0xD0 (0xD0 - 0x0)
	struct FSquadComsNPCCommandEntry	
	{
	public:
		FText Label; // 0x0(0x10)
		FSlateBrush Brush; // 0x10(0xB0)
		PingCommandType CommandType; // 0xC0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0xC1(0x7) UNKNOWN PROPERTY
		USoundBase* ConfirmSound; // 0xC8(0x8)
	};


	// Struct FortniteUI.SquadComsQuickChatEntry
	// Size: 0xD0 (0xD0 - 0x0)
	struct FSquadComsQuickChatEntry	
	{
	public:
		FText Label; // 0x0(0x10)
		FSlateBrush Brush; // 0x10(0xB0)
		EFortWorldMarkerType MarkerType; // 0xC0(0x1)
		unsigned char UnknownData00_7[0xF]; // 0xC1(0xF) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.FortSquadComsPickerCategory
	// Size: 0x20 (0x20 - 0x0)
	struct FFortSquadComsPickerCategory	
	{
	public:
		unsigned char UnknownData00_2[0x20]; // 0x0(0x20) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.FortSquadComsPickerSubCategoryIdentifier
	// Size: 0x18 (0x18 - 0x0)
	struct FFortSquadComsPickerSubCategoryIdentifier	
	{
	public:
		FGameplayTag Tag; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FText Name; // 0x8(0x10)
	};


	// Struct FortniteUI.BarrierObjectState
	// Size: 0x10 (0x10 - 0x0)
	struct FBarrierObjectState	
	{
	public:
		AAthenaBarrierObjective* ObjectiveActor; // 0x0(0x8)
		char TeamNum; // 0x8(0x1)
		EBarrierFoodTeam FoodTeam; // 0x9(0x1)
		EBarrierObjectiveDamageState DamageState; // 0xA(0x1)
		unsigned char UnknownData00_7[0x5]; // 0xB(0x5) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.BattleLabDisplayData
	// Size: 0x50 (0x50 - 0x0)
	struct FBattleLabDisplayData	
	{
	public:
		FText TitleText; // 0x0(0x10)
		FText DescriptionText; // 0x10(0x10)
		EBattleLabAlertType AlertType; // 0x20(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x21(0x3) UNKNOWN PROPERTY
		int32_t RewardCount; // 0x24(0x4)
		int32_t RewardCountTotal; // 0x28(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr<UTexture2D*> MainIconTexture; // 0x30(0x20)
	};


	// Struct FortniteUI.AthenaBossHealthData
	// Size: 0x28 (0x28 - 0x0)
	struct FAthenaBossHealthData	
	{
	public:
		bool bVisible; // 0x0(0x1)
		bool bShowShields; // 0x1(0x1)
		unsigned char UnknownData00_6[0x6]; // 0x2(0x6) UNKNOWN PROPERTY
		FText Name; // 0x8(0x10)
		int32_t Health; // 0x18(0x4)
		int32_t HealthMax; // 0x1C(0x4)
		int32_t Shields; // 0x20(0x4)
		int32_t ShieldsMax; // 0x24(0x4)
	};


	// Struct FortniteUI.CobaltPlayerPortraitIndexInfo
	// Size: 0x10 (0x10 - 0x0)
	struct FCobaltPlayerPortraitIndexInfo	
	{
	public:
		TArray<int32_t> PortraitIndexArray; // 0x0(0x10)
	};


	// Struct FortniteUI.SurvivalObjectiveIconData
	// Size: 0xC (0xC - 0x0)
	struct FSurvivalObjectiveIconData	
	{
	public:
		int32_t IconIndex; // 0x0(0x4)
		ESurvivalObjectiveIconState IconState; // 0x4(0x1)
		ESurvivalObjectiveIconState PrevIconState; // 0x5(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x6(0x2) UNKNOWN PROPERTY
		FName SpecialActorID; // 0x8(0x4)
	};


	// Struct FortniteUI.SurvivalObjectiveText
	// Size: 0x10 (0x10 - 0x0)
	struct FSurvivalObjectiveText	
	{
	public:
		TArray<FString> SafezoneStateText; // 0x0(0x10)
	};


	// Struct FortniteUI.DiscoCaptureUIData
	// Size: 0x38 (0x38 - 0x0)
	struct FDiscoCaptureUIData	
	{
	public:
		EDiscoCaptureUIState CurrDisplayState; // 0x0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		AAthenaCapturePoint* CapturePoint; // 0x8(0x8)
		AFortPlayerPawnAthena* CurrPawn; // 0x10(0x8)
		UMaterialInstanceDynamic* CurrMID; // 0x18(0x8)
		float FillAmount; // 0x20(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
		FText DisplayText; // 0x28(0x10)
	};


	// Struct FortniteUI.DiscoCaptureIconData
	// Size: 0x10 (0x10 - 0x0)
	struct FDiscoCaptureIconData	
	{
	public:
		EDiscoCaptureIconState CurrIconState; // 0x0(0x1)
		EDiscoCaptureProgressState CurrProgressState; // 0x1(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x2(0x2) UNKNOWN PROPERTY
		float CurrCapturePercent; // 0x4(0x4)
		AAthenaCapturePoint* CapturePoint; // 0x8(0x8)
	};


	// Struct FortniteUI.DiscoTeamScoreData
	// Size: 0x18 (0x18 - 0x0)
	struct FDiscoTeamScoreData	
	{
	public:
		FText CurrScoreText; // 0x0(0x10)
		float CurrScorePercent; // 0x10(0x4)
		int32_t CurrScore; // 0x14(0x4)
	};


	// Struct FortniteUI.GGCenterDisplayEntry
	// Inherited from FFortChangeMonitoringStruct
	// Size: 0x17 (0x18 - 0x1)
	struct FGGCenterDisplayEntry : public FFortChangeMonitoringStruct	
	{
	public:
		unsigned char UnknownData00_3[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		UFortWeaponItemDefinition* WeaponAt; // 0x8(0x8)
		int32_t PlayersAtWeapon; // 0x10(0x4)
		bool bIsEnabled; // 0x14(0x1)
		bool bShowHarvestingTool; // 0x15(0x1)
		unsigned char UnknownData01_7[0x2]; // 0x16(0x2) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.HeistBlingIconData
	// Size: 0x8 (0x8 - 0x0)
	struct FHeistBlingIconData	
	{
	public:
		int32_t IconIndex; // 0x0(0x4)
		EHeistBlingIconState IconState; // 0x4(0x1)
		EHeistBlingIconState PrevIconState; // 0x5(0x1)
		unsigned char UnknownData00_7[0x2]; // 0x6(0x2) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.HeistExitCraftIconData
	// Size: 0x10 (0x10 - 0x0)
	struct FHeistExitCraftIconData	
	{
	public:
		int32_t IconIndex; // 0x0(0x4)
		EHeistExitCraftIconState IconState; // 0x4(0x1)
		EHeistExitCraftIconState PrevIconState; // 0x5(0x1)
		unsigned char UnknownData00_6[0x2]; // 0x6(0x2) UNKNOWN PROPERTY
		int32_t SecondsUntilIncoming; // 0x8(0x4)
		bool bTeamHasBling; // 0xC(0x1)
		unsigned char UnknownData01_7[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.FortCountdownSounds
	// Size: 0x20 (0x20 - 0x0)
	struct FFortCountdownSounds	
	{
	public:
		USoundBase* Sound; // 0x0(0x8)
		int32_t StartTime; // 0x8(0x4)
		int32_t StopTime; // 0xC(0x4)
		float FadeOutTime; // 0x10(0x4)
		bool bPlayed; // 0x14(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x15(0x3) UNKNOWN PROPERTY
		UAudioComponent* PlayInstance; // 0x18(0x8)
	};


	// Struct FortniteUI.PerkPipData
	// Size: 0x10 (0x10 - 0x0)
	struct FPerkPipData	
	{
	public:
		UFortAccoladeItemDefinition* AccoladeItemDef; // 0x0(0x8)
		int32_t NumOfPips; // 0x8(0x4)
		unsigned char UnknownData00_7[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.SoundThreshold
	// Size: 0x10 (0x10 - 0x0)
	struct FSoundThreshold	
	{
	public:
		USoundCue* SoundCue; // 0x0(0x8)
		float Threshold; // 0x8(0x4)
		unsigned char UnknownData00_7[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.TDMTeamScoreData
	// Size: 0x18 (0x18 - 0x0)
	struct FTDMTeamScoreData	
	{
	public:
		FText CurrScoreText; // 0x0(0x10)
		float CurrScorePercent; // 0x10(0x4)
		int32_t CurrScore; // 0x14(0x4)
	};


	// Struct FortniteUI.WaxPlacementData
	// Size: 0x20 (0x20 - 0x0)
	struct FWaxPlacementData	
	{
	public:
		int32_t Placement; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FString PlayerName; // 0x8(0x10)
		int32_t CoinCount; // 0x18(0x4)
		bool bIsPlayer; // 0x1C(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x1D(0x3) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.ProductQueryMapData
	// Size: 0x50 (0x50 - 0x0)
	struct FProductQueryMapData	
	{
	public:
		FGameplayTagQuery ProductQuery; // 0x0(0x48)
		bool bCanShowMap; // 0x48(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x49(0x7) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.GoalsPageCategoryTabData
	// Size: 0x20 (0x20 - 0x0)
	struct FGoalsPageCategoryTabData	
	{
	public:
		UObject* TabDisplayAsset; // 0x0(0x8)
		FText DisplayName; // 0x8(0x10)
		FGameplayTag IncludeTag; // 0x18(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.SelectedChallengesData
	// Size: 0x20 (0x20 - 0x0)
	struct FSelectedChallengesData	
	{
	public:
		unsigned char UnknownData00_7[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
		bool bIsCompleted; // 0x10(0x1)
		bool bIsLocked; // 0x11(0x1)
		bool bHasIconOverride; // 0x12(0x1)
		unsigned char UnknownData01_6[0x1]; // 0x13(0x1) UNKNOWN PROPERTY
		float Progress; // 0x14(0x4)
		int32_t NumObjectivesCompleted; // 0x18(0x4)
		int32_t NumObjectives; // 0x1C(0x4)
	};


	// Struct FortniteUI.DisabledQuestData
	// Size: 0x10 (0x10 - 0x0)
	struct FDisabledQuestData	
	{
	public:
		FString Name; // 0x0(0x10)
	};


	// Struct FortniteUI.QuestPanelDebugCategoryData
	// Size: 0x8 (0x8 - 0x0)
	struct FQuestPanelDebugCategoryData	
	{
	public:
		TWeakObjectPtr<UQuestCategoryData*> CategoryData; // 0x0(0x8)
	};


	// Struct FortniteUI.QuestPanelDebugProductData
	// Size: 0xA8 (0xA8 - 0x0)
	struct FQuestPanelDebugProductData	
	{
	public:
		FQuestProductData ProductData; // 0x0(0x98)
		TArray<FQuestPanelDebugCategoryData> CategoryList; // 0x98(0x10)
	};


	// Struct FortniteUI.QuestPanelDebugEntryData
	// Size: 0x30 (0x30 - 0x0)
	struct FQuestPanelDebugEntryData	
	{
	public:
		UFortChallengeBundleScheduleDefinition* ScheduleDefinition; // 0x0(0x8)
		UFortChallengeBundleScheduleItem* ScheduleItem; // 0x8(0x8)
		UFortChallengeBundleItemDefinition* BundleDefinition; // 0x10(0x8)
		UFortChallengeBundleItem* BundleItem; // 0x18(0x8)
		UFortQuestItemDefinition* QuestDefinition; // 0x20(0x8)
		UFortQuestItem* QuestItem; // 0x28(0x8)
	};


	// Struct FortniteUI.BundleQuestEntryDebugData
	// Size: 0x50 (0x50 - 0x0)
	struct FBundleQuestEntryDebugData	
	{
	public:
		FFortChallengeBundleQuestEntry QuestEntry; // 0x0(0x40)
		int32_t QuestAchievedCount; // 0x40(0x4)
		int32_t QuestRequiredCount; // 0x44(0x4)
		EFortQuestState QuestState; // 0x48(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x49(0x7) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.StatGroupData
	// Size: 0xD0 (0xD0 - 0x0)
	struct FStatGroupData	
	{
	public:
		FText GroupName; // 0x0(0x10)
		FSlateBrush Group; // 0x10(0xB0)
		float Value; // 0xC0(0x4)
		float ChartValue; // 0xC4(0x4)
		float ChartOrigionalValue; // 0xC8(0x4)
		unsigned char UnknownData00_7[0x4]; // 0xCC(0x4) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.AthenaTeamDisplayInfo
	// Size: 0x70 (0x70 - 0x0)
	struct FAthenaTeamDisplayInfo	
	{
	public:
		TWeakObjectPtr<UObject*> Icon; // 0x0(0x20)
		TWeakObjectPtr<UObject*> Ribbon; // 0x20(0x20)
		FText Name; // 0x40(0x10)
		FLinearColor TextColor; // 0x50(0x10)
		FLinearColor PedestalColor; // 0x60(0x10)
	};


	// Struct FortniteUI.ActionBindingIconPicker
	// Size: 0x18 (0x18 - 0x0)
	struct FActionBindingIconPicker	
	{
	public:
		TArray<FName> ActionNames; // 0x0(0x10)
		UPaperSprite* Sprite; // 0x10(0x8)
	};


	// Struct FortniteUI.ActionBindingVisibility
	// Size: 0x18 (0x18 - 0x0)
	struct FActionBindingVisibility	
	{
	public:
		TArray<FName> ActionNames; // 0x0(0x10)
		EActionBindingComparisonType ComparisonType; // 0x10(0x1)
		ESlateVisibility Visibility; // 0x11(0x1)
		unsigned char UnknownData00_7[0x6]; // 0x12(0x6) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.GameplayMessageVisibility
	// Size: 0x8 (0x8 - 0x0)
	struct FGameplayMessageVisibility	
	{
	public:
		FEventMessageTag EventMessageTag; // 0x0(0x4)
		ESlateVisibility MessageReceivedVisibility; // 0x4(0x1)
		ESlateVisibility MessageStateClearedVisibility; // 0x5(0x1)
		unsigned char UnknownData00_7[0x2]; // 0x6(0x2) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.HUDWidgetRegistryEntry
	// Size: 0x48 (0x48 - 0x0)
	struct FHUDWidgetRegistryEntry	
	{
	public:
		FGameplayTag HUDWidgetTag; // 0x0(0x4)
		bool bIsMandatory; // 0x4(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
		float MandatoryOnScreenPercent; // 0x8(0x4)
		int32_t MaximumAmountOfInstances; // 0xC(0x4)
		int32_t ZOrder; // 0x10(0x4)
		bool bHasDynamicUIUniqueID; // 0x14(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x15(0x3) UNKNOWN PROPERTY
		FName DynamicUIUniqueID; // 0x18(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
		UClass* HUDWidgetClass; // 0x20(0x8)
		UClass* HUDWidgetProxyClass; // 0x28(0x8)
		UClass* HUDWidgetPreviewClass; // 0x30(0x8)
		TArray<UFortMobileHUDWidgetCustomPropertyModel*> CustomPropertyModels; // 0x38(0x10)
	};


	// Struct FortniteUI.HUDWidgetBehaviorRegistryEntry
	// Size: 0x10 (0x10 - 0x0)
	struct FHUDWidgetBehaviorRegistryEntry	
	{
	public:
		FGameplayTag HUDWidgetBehaviorTag; // 0x0(0x4)
		FGameplayTag HUDWidgetOverrideTag; // 0x4(0x4)
		UClass* HUDWidgetBehaviorClass; // 0x8(0x8)
	};


	// Struct FortniteUI.HUDWidgetSchemaInitializer
	// Size: 0x10 (0x10 - 0x0)
	struct FHUDWidgetSchemaInitializer	
	{
	public:
		unsigned char UnknownData00_2[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.HUDWidgetBehaviorExtensionsRegistryEntry
	// Size: 0x18 (0x18 - 0x0)
	struct FHUDWidgetBehaviorExtensionsRegistryEntry	
	{
	public:
		FGameplayTag HUDWidgetBehaviorTag; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TArray<UClass*> HUDWidgetBehaviorExtensions; // 0x8(0x10)
	};


	// Struct FortniteUI.HUDWidgetException
	// Size: 0x80 (0x80 - 0x0)
	struct FHUDWidgetException	
	{
	public:
		FHUDWidgetBehaviorRegistryEntry HUDWidgetBehaviorRegistryEntry; // 0x0(0x10)
		TArray<FHUDWidgetRegistryEntry> WidgetEntriesToAdd; // 0x10(0x10)
		TArray<FHUDWidgetBehaviorRegistryEntry> BehaviorEntriesToAdd; // 0x20(0x10)
		TArray<FHUDWidgetBehaviorExtensionsRegistryEntry> BehaviorExtensionEntriesToAdd; // 0x30(0x10)
		TArray<FHUDWidgetRegistryEntry> WidgetEntriesToRemove; // 0x40(0x10)
		TArray<FHUDWidgetBehaviorRegistryEntry> BehaviorEntriesToRemove; // 0x50(0x10)
		TArray<FHUDWidgetBehaviorExtensionsRegistryEntry> BehaviorExtensionEntriesToRemove; // 0x60(0x10)
		FString CVarEnabler; // 0x70(0x10)
	};


	// Struct FortniteUI.TouchInteractionIconOverride
	// Size: 0x28 (0x28 - 0x0)
	struct FTouchInteractionIconOverride	
	{
	public:
		TWeakObjectPtr<UTexture2D*> IconOverride; // 0x0(0x20)
		float IconScale; // 0x20(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.ButtonInteractionPair
	// Size: 0x28 (0x28 - 0x0)
	struct FButtonInteractionPair	
	{
	public:
		AActor* TrackedInteraction; // 0x0(0x8)
		UFortTouchInteractionButton* TrackedButton; // 0x8(0x8)
		FVector ButtonWorldLocation; // 0x10(0x18)
	};


	// Struct FortniteUI.UserAction
	// Size: 0x18 (0x18 - 0x0)
	struct FUserAction	
	{
	public:
		unsigned char UnknownData00_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		FString ActionName; // 0x8(0x10)
	};


	// Struct FortniteUI.UserGenericAction
	// Inherited from FUserAction
	// Size: 0x38 (0x50 - 0x18)
	struct FUserGenericAction : public FUserAction	
	{
	public:
		FFortMobileHUDProfileBase ActiveProfile; // 0x18(0x38)
	};


	// Struct FortniteUI.UserRenameAction
	// Inherited from FUserAction
	// Size: 0x20 (0x38 - 0x18)
	struct FUserRenameAction : public FUserAction	
	{
	public:
		FString PreviousName; // 0x18(0x10)
		FString NewName; // 0x28(0x10)
	};


	// Struct FortniteUI.UserSelectProfileAction
	// Inherited from FUserAction
	// Size: 0x70 (0x88 - 0x18)
	struct FUserSelectProfileAction : public FUserAction	
	{
	public:
		FFortMobileHUDProfileBase PreviousProfile; // 0x18(0x38)
		FFortMobileHUDProfileBase NewProfile; // 0x50(0x38)
	};


	// Struct FortniteUI.HUDLayoutToolV2_ButtonStateColor
	// Size: 0x38 (0x38 - 0x0)
	struct FHUDLayoutToolV2_ButtonStateColor	
	{
	public:
		FSlateColor TextColor; // 0x0(0x14)
		FLinearColor IconColor; // 0x14(0x10)
		FLinearColor BackgroundColor; // 0x24(0x10)
		float IconAngle; // 0x34(0x4)
	};


	// Struct FortniteUI.LinkAcrossNumericalIndicatorActionSymbol
	// Size: 0x28 (0x28 - 0x0)
	struct FLinkAcrossNumericalIndicatorActionSymbol	
	{
	public:
		ENumericalIndicatorActionType ActionType; // 0x0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		FText ActionSymbol; // 0x8(0x10)
		FLinearColor ActionColor; // 0x18(0x10)
	};


	// Struct FortniteUI.SimpleActionMessages
	// Size: 0x28 (0x28 - 0x0)
	struct FSimpleActionMessages	
	{
	public:
		ELinkAcrossSimpleAction SimpleActionType; // 0x0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		FText SimpleActionTitle; // 0x8(0x10)
		FText SimpleActionBody; // 0x18(0x10)
	};


	// Struct FortniteUI.HUDLayoutToolV2_PopupContent
	// Size: 0x48 (0x48 - 0x0)
	struct FHUDLayoutToolV2_PopupContent	
	{
	public:
		EHUDLayoutToolPopupType PopupType; // 0x0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		FText TitleText; // 0x8(0x10)
		FText DescriptionText; // 0x18(0x10)
		FText ButtonConfirmText; // 0x28(0x10)
		FText ButtonCancelText; // 0x38(0x10)
	};


	// Struct FortniteUI.QuickbarProxySlotIconContainer
	// Size: 0x10 (0x10 - 0x0)
	struct FQuickbarProxySlotIconContainer	
	{
	public:
		TArray<UPaperSprite*> SlotIcons; // 0x0(0x10)
	};


	// Struct FortniteUI.HUDLayoutToolV2_TextInputPopupContent
	// Size: 0x48 (0x48 - 0x0)
	struct FHUDLayoutToolV2_TextInputPopupContent	
	{
	public:
		EHUDLayoutToolTextInputPopupType PopupType; // 0x0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		FText TitleText; // 0x8(0x10)
		FText DescriptionText; // 0x18(0x10)
		FText ButtonConfirmText; // 0x28(0x10)
		FText ButtonCancelText; // 0x38(0x10)
	};


	// Struct FortniteUI.HUDLayoutToolV2_ToastNotificationContent
	// Size: 0x28 (0x28 - 0x0)
	struct FHUDLayoutToolV2_ToastNotificationContent	
	{
	public:
		EHUDLayoutToolToasterType ToasterType; // 0x0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		FText TitleText; // 0x8(0x10)
		FText DescriptionText; // 0x18(0x10)
	};


	// Struct FortniteUI.FortMobileContextFilter
	// Size: 0x40 (0x40 - 0x0)
	struct FFortMobileContextFilter	
	{
	public:
		FGameplayTagContainer ShownInContexts; // 0x0(0x20)
		FGameplayTagContainer HiddenInContexts; // 0x20(0x20)
	};


	// Struct FortniteUI.FortMobileHUDContextLayout
	// Size: 0x20 (0x20 - 0x0)
	struct FFortMobileHUDContextLayout	
	{
	public:
		unsigned char UnknownData00_7[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
		UFortMobileHUDContextModel* HUDContextModel; // 0x10(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x18(0x8) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.FortMobileHUDContextModelExtension
	// Size: 0x28 (0x28 - 0x0)
	struct FFortMobileHUDContextModelExtension	
	{
	public:
		FGameplayTag ContextLayoutTag; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FGameplayTagContainer UseableHUDWidgetTags; // 0x8(0x20)
	};


	// Struct FortniteUI.FortMobileHUDLayoutProfile
	// Size: 0x38 (0x38 - 0x0)
	struct FFortMobileHUDLayoutProfile	
	{
	public:
		FText ProfileName; // 0x0(0x10)
		TArray<FFortMobileHUDContextLayout> ContextLayouts; // 0x10(0x10)
		unsigned char UnknownData00_7[0x18]; // 0x20(0x18) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.FortMobileHUDWidgetLayout
	// Size: 0x58 (0x58 - 0x0)
	struct FFortMobileHUDWidgetLayout	
	{
	public:
		FAnchorData LayoutData; // 0x0(0x40)
		int32_t ZOrder; // 0x40(0x4)
		unsigned char UnknownData00_7[0x14]; // 0x44(0x14) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.NPCServiceWidgetData
	// Size: 0x50 (0x50 - 0x0)
	struct FNPCServiceWidgetData	
	{
	public:
		FNPCServiceData ServiceData; // 0x0(0x30)
		UFortResourceItemDefinition* CostResource; // 0x30(0x8)
		int32_t CostAmountMin; // 0x38(0x4)
		int32_t CostAmountMax; // 0x3C(0x4)
		bool bIsLocked; // 0x40(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x41(0x3) UNKNOWN PROPERTY
		int32_t MinRequiredBenefitLevel; // 0x44(0x4)
		int32_t Priority; // 0x48(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x4C(0x4) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.NPCServiceData
	// Size: 0x30 (0x30 - 0x0)
	struct FNPCServiceData	
	{
	public:
		FText Name; // 0x0(0x10)
		TWeakObjectPtr<UObject*> Icon; // 0x10(0x20)
	};


	// Struct FortniteUI.NPCServiceDataRow
	// Inherited from FTableRowBase
	// Size: 0x58 (0x60 - 0x8)
	struct FNPCServiceDataRow : public FTableRowBase	
	{
	public:
		FGameplayTagContainer ServiceTags; // 0x8(0x20)
		FName PricingKey; // 0x28(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
		FNPCServiceData ServiceData; // 0x30(0x30)
	};


	// Struct FortniteUI.NPCSpecializationDataRow
	// Inherited from FTableRowBase
	// Size: 0x38 (0x40 - 0x8)
	struct FNPCSpecializationDataRow : public FTableRowBase	
	{
	public:
		FName PricingKey; // 0x8(0x4)
		unsigned char UnknownData00_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FNPCServiceData ServiceData; // 0x10(0x30)
	};


	// Struct FortniteUI.FortManagedTextureHelper
	// Size: 0x10 (0x10 - 0x0)
	struct FFortManagedTextureHelper	
	{
	public:
		unsigned char UnknownData00_2[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.FortMaterialProgressBarSectionStyle
	// Size: 0x30 (0x30 - 0x0)
	struct FFortMaterialProgressBarSectionStyle	
	{
	public:
		bool bGradientBar; // 0x0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		FName BarParamName; // 0x4(0x4)
		FName BarColorOneParamName; // 0x8(0x4)
		FName BarColorTwoParamName; // 0xC(0x4)
		FLinearColor BarColorOne; // 0x10(0x10)
		FLinearColor BarColorTwo; // 0x20(0x10)
	};


	// Struct FortniteUI.FortMaterialProgressBarSectionInfo
	// Size: 0x34 (0x34 - 0x0)
	struct FFortMaterialProgressBarSectionInfo	
	{
	public:
		FFortMaterialProgressBarSectionStyle SectionStyle; // 0x0(0x30)
		float Percent; // 0x30(0x4)
	};


	// Struct FortniteUI.AthenaSubscriptionProgressiveInfo
	// Size: 0x20 (0x20 - 0x0)
	struct FAthenaSubscriptionProgressiveInfo	
	{
	public:
		TArray<FText> InfoModalEntries; // 0x0(0x10)
		FText NewStagesUnlockFinePrint; // 0x10(0x10)
	};


	// Struct FortniteUI.AthenaSubscriptionTemporaryItemsInfo
	// Size: 0x10 (0x10 - 0x0)
	struct FAthenaSubscriptionTemporaryItemsInfo	
	{
	public:
		TArray<FText> InfoModalEntries; // 0x0(0x10)
	};


	// Struct FortniteUI.SubscriptionModalInfo
	// Size: 0x38 (0x38 - 0x0)
	struct FSubscriptionModalInfo	
	{
	public:
		FString ModalId; // 0x0(0x10)
		EAppStore PlatformId; // 0x10(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
		TArray<FText> Entries; // 0x18(0x10)
		FString QrCodeImage; // 0x28(0x10)
	};


	// Struct FortniteUI.SubscriptionModals
	// Size: 0x10 (0x10 - 0x0)
	struct FSubscriptionModals	
	{
	public:
		TArray<FSubscriptionModalInfo> Modals; // 0x0(0x10)
	};


	// Struct FortniteUI.CrewTileImages
	// Size: 0x20 (0x20 - 0x0)
	struct FCrewTileImages	
	{
	public:
		FString TileImageURL; // 0x0(0x10)
		FString NextTileImageURL; // 0x10(0x10)
	};


	// Struct FortniteUI.BattlePassPurchaseData
	// Size: 0x80 (0x80 - 0x0)
	struct FBattlePassPurchaseData	
	{
	public:
		FString BattlePassPurchaseBackgroundURL; // 0x0(0x10)
		FText BattlePassPurchaseDisclaimer; // 0x10(0x10)
		FText BattlePassScreenDisclaimer; // 0x20(0x10)
		FText BattlePassPurchaseLevelDisclaimer; // 0x30(0x10)
		FText BattlePassPurchaseDescription; // 0x40(0x10)
		FString BattlePassPurchaseConfirmBackgroundURL; // 0x50(0x10)
		FCrewTileImages BattlePassTileImages; // 0x60(0x20)
	};


	// Struct FortniteUI.CrewDefaultData
	// Size: 0x30 (0x30 - 0x0)
	struct FCrewDefaultData	
	{
	public:
		FText Title; // 0x0(0x10)
		FText Description; // 0x10(0x10)
		FString BackgroundURL; // 0x20(0x10)
	};


	// Struct FortniteUI.CrewTileDetailsData
	// Size: 0x48 (0x48 - 0x0)
	struct FCrewTileDetailsData	
	{
	public:
		FString TileImageURL; // 0x0(0x10)
		FText Title; // 0x10(0x10)
		FText Description; // 0x20(0x10)
		ECrewDetailsTag Tag; // 0x30(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x31(0x7) UNKNOWN PROPERTY
		FString BackgroundImageURL; // 0x38(0x10)
	};


	// Struct FortniteUI.CrewTileDataBasic
	// Size: 0x68 (0x68 - 0x0)
	struct FCrewTileDataBasic	
	{
	public:
		unsigned char UnknownData00_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		ECrewTileType TileType; // 0x8(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x9(0x7) UNKNOWN PROPERTY
		FText TileLabel; // 0x10(0x10)
		FCrewTileDetailsData Details; // 0x20(0x48)
	};


	// Struct FortniteUI.CrewTileDataBattlePass
	// Inherited from FCrewTileDataBasic
	// Size: 0x0 (0x68 - 0x68)
	struct FCrewTileDataBattlePass : public FCrewTileDataBasic	
	{
	public:
	};


	// Struct FortniteUI.CrewTileDataCrewPack
	// Inherited from FCrewTileDataBasic
	// Size: 0x70 (0xD8 - 0x68)
	struct FCrewTileDataCrewPack : public FCrewTileDataBasic	
	{
	public:
		TArray<FString> CrewPackItems; // 0x68(0x10)
		bool bHasNextCrewPackDetails; // 0x78(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x79(0x7) UNKNOWN PROPERTY
		FCrewTileDetailsData NextDetails; // 0x80(0x48)
		TArray<FString> NextCrewPackItems; // 0xC8(0x10)
	};


	// Struct FortniteUI.CrewTileDataProgressiveCosmetic
	// Inherited from FCrewTileDataBasic
	// Size: 0x0 (0x68 - 0x68)
	struct FCrewTileDataProgressiveCosmetic : public FCrewTileDataBasic	
	{
	public:
	};


	// Struct FortniteUI.CrewTileDataTemporaryItems
	// Inherited from FCrewTileDataBasic
	// Size: 0x0 (0x68 - 0x68)
	struct FCrewTileDataTemporaryItems : public FCrewTileDataBasic	
	{
	public:
	};


	// Struct FortniteUI.CrewBenefits
	// Size: 0x20 (0x20 - 0x0)
	struct FCrewBenefits	
	{
	public:
		unsigned char UnknownData00_2[0x20]; // 0x0(0x20) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.CrewSubscriptionStateModal
	// Size: 0x18 (0x18 - 0x0)
	struct FCrewSubscriptionStateModal	
	{
	public:
		EMcpSubscriptionState SubscriptionState; // 0x0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		TArray<FText> BulletPoints; // 0x8(0x10)
	};


	// Struct FortniteUI.CrewPlatformAndCountriesPair
	// Size: 0x18 (0x18 - 0x0)
	struct FCrewPlatformAndCountriesPair	
	{
	public:
		EAppStore SubscriptionPlatform; // 0x0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		FString CountryCodes; // 0x8(0x10)
	};


	// Struct FortniteUI.CrewTableRow
	// Size: 0x18 (0x18 - 0x0)
	struct FCrewTableRow	
	{
	public:
		TArray<FText> RowData; // 0x0(0x10)
		bool bIsHeaderRow; // 0x10(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.CrewPlatformTable
	// Size: 0x18 (0x18 - 0x0)
	struct FCrewPlatformTable	
	{
	public:
		EAppStore SubscriptionPlatform; // 0x0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		TArray<FCrewTableRow> TableRows; // 0x8(0x10)
	};


	// Struct FortniteUI.CrewPlatformAndCountriesNotificationModal
	// Size: 0xF8 (0xF8 - 0x0)
	struct FCrewPlatformAndCountriesNotificationModal	
	{
	public:
		FString NotificationID; // 0x0(0x10)
		TArray<FCrewPlatformAndCountriesPair> ValidPlatformAndCountriesPairs; // 0x10(0x10)
		FText Title; // 0x20(0x10)
		FText DefaultBodyText; // 0x30(0x10)
		FText BodyTextIfSubscriptionCanceled; // 0x40(0x10)
		FText BodyTextIfNoBodyTable; // 0x50(0x10)
		FText BodyTextIfNoBodyTableAndSubscriptionCanceled; // 0x60(0x10)
		FDateTime EffectiveDate; // 0x70(0x8)
		TArray<FCrewPlatformTable> PlatformSpecificBodyTables; // 0x78(0x10)
		FText CheckboxText; // 0x88(0x10)
		FText DefaultConfirmButtonText; // 0x98(0x10)
		FText ConfirmButtonTextIfSubscriptionCanceled; // 0xA8(0x10)
		FText CancelSubscriptionButtonText; // 0xB8(0x10)
		FText MoreInfoText; // 0xC8(0x10)
		FText MoreInfoUrl; // 0xD8(0x10)
		FDateTime NotificationStartDate; // 0xE8(0x8)
		FDateTime NotificationEndDate; // 0xF0(0x8)
	};


	// Struct FortniteUI.CrewModals
	// Size: 0x20 (0x20 - 0x0)
	struct FCrewModals	
	{
	public:
		TArray<FCrewSubscriptionStateModal> CancellationInfoErrorStateModals; // 0x0(0x10)
		TArray<FCrewPlatformAndCountriesNotificationModal> PlatformAndCountriesNotificationModals; // 0x10(0x10)
	};


	// Struct FortniteUI.CrewItemShopTileData
	// Size: 0x50 (0x50 - 0x0)
	struct FCrewItemShopTileData	
	{
	public:
		FText ViolatorText; // 0x0(0x10)
		EViolatorIntensity ViolatorIntensity; // 0x10(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
		FText NextViolatorText; // 0x18(0x10)
		EViolatorIntensity NextViolatorIntensity; // 0x28(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x29(0x7) UNKNOWN PROPERTY
		FCrewTileImages ItemShopTileImages; // 0x30(0x20)
	};


	// Struct FortniteUI.CrewItemShopTileEntry
	// Size: 0x58 (0x58 - 0x0)
	struct FCrewItemShopTileEntry	
	{
	public:
		ECrewItemShopTileType TileType; // 0x0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		FCrewItemShopTileData TileData; // 0x8(0x50)
	};


	// Struct FortniteUI.CrewItemShopData
	// Size: 0x10 (0x10 - 0x0)
	struct FCrewItemShopData	
	{
	public:
		TArray<FCrewItemShopTileEntry> TileEntries; // 0x0(0x10)
	};


	// Struct FortniteUI.CrewScreenData
	// Size: 0xD0 (0xD0 - 0x0)
	struct FCrewScreenData	
	{
	public:
		FText CrewDisclaimer; // 0x0(0x10)
		FCrewDefaultData DefaultData; // 0x10(0x30)
		FCrewBenefits Benefits; // 0x40(0x20)
		FCrewModals CrewModals; // 0x60(0x20)
		FCrewItemShopData ItemShopData; // 0x80(0x10)
		FAthenaSubscriptionProgressiveInfo ProgressiveInfo; // 0x90(0x20)
		FAthenaSubscriptionTemporaryItemsInfo TemporaryItemsInfo; // 0xB0(0x10)
		FSubscriptionModals SubModals; // 0xC0(0x10)
	};


	// Struct FortniteUI.ImageRef
	// Size: 0x18 (0x18 - 0x0)
	struct FImageRef	
	{
	public:
		int32_t Width; // 0x0(0x4)
		int32_t Height; // 0x4(0x4)
		FString URL; // 0x8(0x10)
	};


	// Struct FortniteUI.AthenaMOTDBase
	// Size: 0xE0 (0xE0 - 0x0)
	struct FAthenaMOTDBase	
	{
	public:
		unsigned char UnknownData00_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		EAthenaNewsEntryType EntryType; // 0x8(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x9(0x7) UNKNOWN PROPERTY
		FString Title; // 0x10(0x10)
		FString Body; // 0x20(0x10)
		TArray<FImageRef> Images; // 0x30(0x10)
		TArray<FImageRef> TileImages; // 0x40(0x10)
		FColor CustomDarkColor; // 0x50(0x4)
		FColor CustomLightColor; // 0x54(0x4)
		FString AdSpace; // 0x58(0x10)
		FString TabTitleOverride; // 0x68(0x10)
		FString ButtonTextOverride; // 0x78(0x10)
		bool bHasCustomColor; // 0x88(0x1)
		bool bIsFtueMotd; // 0x89(0x1)
		unsigned char UnknownData02_7[0x56]; // 0x8A(0x56) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.SmallNewsMOTD
	// Inherited from FAthenaMOTDBase
	// Size: 0x0 (0xE0 - 0xE0)
	struct FSmallNewsMOTD : public FAthenaMOTDBase	
	{
	public:
	};


	// Struct FortniteUI.ItemMOTD
	// Inherited from FAthenaMOTDBase
	// Size: 0x18 (0xF8 - 0xE0)
	struct FItemMOTD : public FAthenaMOTDBase	
	{
	public:
		unsigned char UnknownData00_1[0x18]; // 0xE0(0x18) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.NavigateToTabMOTD
	// Inherited from FAthenaMOTDBase
	// Size: 0x18 (0xF8 - 0xE0)
	struct FNavigateToTabMOTD : public FAthenaMOTDBase	
	{
	public:
		unsigned char UnknownData00_1[0x18]; // 0xE0(0x18) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.SettingsMOTD
	// Inherited from FAthenaMOTDBase
	// Size: 0x20 (0x100 - 0xE0)
	struct FSettingsMOTD : public FAthenaMOTDBase	
	{
	public:
		unsigned char UnknownData00_1[0x20]; // 0xE0(0x20) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.ChallengeMOTD
	// Inherited from FAthenaMOTDBase
	// Size: 0x10 (0xF0 - 0xE0)
	struct FChallengeMOTD : public FAthenaMOTDBase	
	{
	public:
		unsigned char UnknownData00_1[0x10]; // 0xE0(0x10) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.WebsiteMOTD
	// Inherited from FAthenaMOTDBase
	// Size: 0x20 (0x100 - 0xE0)
	struct FWebsiteMOTD : public FAthenaMOTDBase	
	{
	public:
		unsigned char UnknownData00_1[0x20]; // 0xE0(0x20) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.SpatialScreenMOTD
	// Inherited from FAthenaMOTDBase
	// Size: 0x10 (0xF0 - 0xE0)
	struct FSpatialScreenMOTD : public FAthenaMOTDBase	
	{
	public:
		unsigned char UnknownData00_1[0x10]; // 0xE0(0x10) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.NavigateToBattlePassSubPageMOTD
	// Inherited from FAthenaMOTDBase
	// Size: 0x28 (0x108 - 0xE0)
	struct FNavigateToBattlePassSubPageMOTD : public FAthenaMOTDBase	
	{
	public:
		unsigned char UnknownData00_1[0x28]; // 0xE0(0x28) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.CreativeMOTD
	// Inherited from FAthenaMOTDBase
	// Size: 0x30 (0x110 - 0xE0)
	struct FCreativeMOTD : public FAthenaMOTDBase	
	{
	public:
		unsigned char UnknownData00_1[0x30]; // 0xE0(0x30) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.NavigateToSubscriptionSubPageMOTD
	// Inherited from FAthenaMOTDBase
	// Size: 0x8 (0xE8 - 0xE0)
	struct FNavigateToSubscriptionSubPageMOTD : public FAthenaMOTDBase	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0xE0(0x8) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.NavigateToSocialMenuMOTD
	// Inherited from FAthenaMOTDBase
	// Size: 0x8 (0xE8 - 0xE0)
	struct FNavigateToSocialMenuMOTD : public FAthenaMOTDBase	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0xE0(0x8) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.NavigateToSocialTagsSubPageMOTD
	// Inherited from FAthenaMOTDBase
	// Size: 0x0 (0xE0 - 0xE0)
	struct FNavigateToSocialTagsSubPageMOTD : public FAthenaMOTDBase	
	{
	public:
	};


	// Struct FortniteUI.NavigateToRebootRallySubPageMOTD
	// Inherited from FAthenaMOTDBase
	// Size: 0x0 (0xE0 - 0xE0)
	struct FNavigateToRebootRallySubPageMOTD : public FAthenaMOTDBase	
	{
	public:
	};


	// Struct FortniteUI.EventMOTD
	// Inherited from FAthenaMOTDBase
	// Size: 0x8 (0xE8 - 0xE0)
	struct FEventMOTD : public FAthenaMOTDBase	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0xE0(0x8) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.DiscoveryMOTD
	// Inherited from FAthenaMOTDBase
	// Size: 0x20 (0x100 - 0xE0)
	struct FDiscoveryMOTD : public FAthenaMOTDBase	
	{
	public:
		unsigned char UnknownData00_1[0x20]; // 0xE0(0x20) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.NavigateToCompetitiveSubPageMOTD
	// Inherited from FAthenaMOTDBase
	// Size: 0x10 (0xF0 - 0xE0)
	struct FNavigateToCompetitiveSubPageMOTD : public FAthenaMOTDBase	
	{
	public:
		unsigned char UnknownData00_1[0x10]; // 0xE0(0x10) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.NavigateToMapSubPageMOTD
	// Inherited from FAthenaMOTDBase
	// Size: 0x8 (0xE8 - 0xE0)
	struct FNavigateToMapSubPageMOTD : public FAthenaMOTDBase	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0xE0(0x8) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.NavigateToHabaneroSubPageMOTD
	// Inherited from FAthenaMOTDBase
	// Size: 0x0 (0xE0 - 0xE0)
	struct FNavigateToHabaneroSubPageMOTD : public FAthenaMOTDBase	
	{
	public:
	};


	// Struct FortniteUI.AthenaMessageEntry
	// Size: 0x50 (0x50 - 0x0)
	struct FAthenaMessageEntry	
	{
	public:
		FString Title; // 0x0(0x10)
		FString Body; // 0x10(0x10)
		FString Image; // 0x20(0x10)
		FString Type; // 0x30(0x10)
		FString AdSpace; // 0x40(0x10)
	};


	// Struct FortniteUI.AthenaEmergencyNotice
	// Size: 0x40 (0x40 - 0x0)
	struct FAthenaEmergencyNotice	
	{
	public:
		FString Title; // 0x0(0x10)
		FString Body; // 0x10(0x10)
		unsigned char UnknownData00_7[0x20]; // 0x20(0x20) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.AthenaSpectatorUITeamEntry
	// Size: 0x20 (0x20 - 0x0)
	struct FAthenaSpectatorUITeamEntry	
	{
	public:
		unsigned char UnknownData00_2[0x20]; // 0x0(0x20) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.ShowdownTournamentData
	// Size: 0x1B0 (0x1B0 - 0x0)
	struct FShowdownTournamentData	
	{
	public:
		FString Tournament_Display_Id; // 0x0(0x10)
		FText Title_Line; // 0x10(0x10)
		FText Title_Line; // 0x20(0x10)
		FText Schedule_Info; // 0x30(0x10)
		FString Poster_Front_Image; // 0x40(0x10)
		FString Poster_Back_Image; // 0x50(0x10)
		FText Flavor_Description; // 0x60(0x10)
		FText Details_Description; // 0x70(0x10)
		FText Short_Format_Title; // 0x80(0x10)
		FText Long_Format_Title; // 0x90(0x10)
		FText Background_Title; // 0xA0(0x10)
		int32_t Pin_Score_Requirement; // 0xB0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0xB4(0x4) UNKNOWN PROPERTY
		FText Pin_Earned_Text; // 0xB8(0x10)
		FLinearColor base_color; // 0xC8(0x10)
		FLinearColor Primary_Color; // 0xD8(0x10)
		FLinearColor Secondary_Color; // 0xE8(0x10)
		FLinearColor Highlight_Color; // 0xF8(0x10)
		FLinearColor Title_Color; // 0x108(0x10)
		FLinearColor Shadow_Color; // 0x118(0x10)
		FLinearColor Background_Left_Color; // 0x128(0x10)
		FLinearColor Background_Right_Color; // 0x138(0x10)
		FLinearColor Background_Text_Color; // 0x148(0x10)
		FLinearColor Poster_Fade_Color; // 0x158(0x10)
		FString Playlist_Tile_Image; // 0x168(0x10)
		FString Loading_Screen_Image; // 0x178(0x10)
		FString Style_Info_Id; // 0x188(0x10)
		FString Alert_Text; // 0x198(0x10)
		EFortTournamentAlertType AlertType; // 0x1A8(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x1A9(0x7) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.ShowdownTournamentJsonObject
	// Size: 0x10 (0x10 - 0x0)
	struct FShowdownTournamentJsonObject	
	{
	public:
		TArray<FShowdownTournamentData> Tournaments; // 0x0(0x10)
	};


	// Struct FortniteUI.ShowdownTournamentSource
	// Size: 0x30 (0x30 - 0x0)
	struct FShowdownTournamentSource	
	{
	public:
		FShowdownTournamentJsonObject Tournament_Info; // 0x0(0x10)
		FString _title; // 0x10(0x10)
		FString _locale; // 0x20(0x10)
	};


	// Struct FortniteUI.FortShowdownScoringRuleDisplayInfo
	// Size: 0x60 (0x60 - 0x0)
	struct FFortShowdownScoringRuleDisplayInfo	
	{
	public:
		FName Name; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FText Description; // 0x8(0x10)
		FText PosterDescription; // 0x18(0x10)
		FText PosterIntervalDescription; // 0x28(0x10)
		TWeakObjectPtr<UTexture2D*> Icon; // 0x38(0x20)
		bool bShowScoreToastNotifications; // 0x58(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x59(0x7) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.SubgameDisplayData
	// Size: 0x70 (0x70 - 0x0)
	struct FSubgameDisplayData	
	{
	public:
		FText Title; // 0x0(0x10)
		FText Description; // 0x10(0x10)
		FText SpecialMessage; // 0x20(0x10)
		FText StandardMessageLine1; // 0x30(0x10)
		FText StandardMessageLine2; // 0x40(0x10)
		FString Image; // 0x50(0x10)
		FLinearColor Color; // 0x60(0x10)
	};


	// Struct FortniteUI.SubgameScreenSource
	// Size: 0x170 (0x170 - 0x0)
	struct FSubgameScreenSource	
	{
	public:
		FString _title; // 0x0(0x10)
		FString __locale; // 0x10(0x10)
		FSubgameDisplayData Creative; // 0x20(0x70)
		FSubgameDisplayData SaveTheWorld; // 0x90(0x70)
		FSubgameDisplayData BattleRoyale; // 0x100(0x70)
	};


	// Struct FortniteUI.CreativeAdData
	// Size: 0x68 (0x68 - 0x0)
	struct FCreativeAdData	
	{
	public:
		FString Header; // 0x0(0x10)
		FString Sub_Header; // 0x10(0x10)
		FString Description; // 0x20(0x10)
		FString Creator_Name; // 0x30(0x10)
		FString Island_Code; // 0x40(0x10)
		EFortCreativeAdType Ad_Type; // 0x50(0x1)
		EFortCreativeAdColorPreset Ad_Color_Preset; // 0x51(0x1)
		unsigned char UnknownData00_6[0x6]; // 0x52(0x6) UNKNOWN PROPERTY
		FString Image; // 0x58(0x10)
	};


	// Struct FortniteUI.CreativeAdJsonObject
	// Size: 0x10 (0x10 - 0x0)
	struct FCreativeAdJsonObject	
	{
	public:
		TArray<FCreativeAdData> Ads; // 0x0(0x10)
	};


	// Struct FortniteUI.CreativeAdSource
	// Size: 0x30 (0x30 - 0x0)
	struct FCreativeAdSource	
	{
	public:
		FString _title; // 0x0(0x10)
		FString __locale; // 0x10(0x10)
		FCreativeAdJsonObject Ad_Info; // 0x20(0x10)
	};


	// Struct FortniteUI.DynamicBackground
	// Size: 0x48 (0x48 - 0x0)
	struct FDynamicBackground	
	{
	public:
		FString _title; // 0x0(0x10)
		FString __locale; // 0x10(0x10)
		EDynamicBackgroudKey Key; // 0x20(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x21(0x7) UNKNOWN PROPERTY
		FString BackgroundImage; // 0x28(0x10)
		FString Stage; // 0x38(0x10)
	};


	// Struct FortniteUI.DynamicBackgrounds
	// Size: 0x10 (0x10 - 0x0)
	struct FDynamicBackgrounds	
	{
	public:
		TArray<FDynamicBackground> Backgrounds; // 0x0(0x10)
	};


	// Struct FortniteUI.DynamicBackgroundsSource
	// Size: 0x40 (0x40 - 0x0)
	struct FDynamicBackgroundsSource	
	{
	public:
		FString _title; // 0x0(0x10)
		FString __locale; // 0x10(0x10)
		FString LastModified; // 0x20(0x10)
		FDynamicBackgrounds Backgrounds; // 0x30(0x10)
	};


	// Struct FortniteUI.CmsJsonMessages
	// Size: 0x1F0 (0x1F0 - 0x0)
	struct FCmsJsonMessages	
	{
	public:
		FString _title; // 0x0(0x10)
		FString _locale; // 0x10(0x10)
		FShowdownTournamentSource TournamentInformation; // 0x20(0x30)
		FSubgameScreenSource SubGameInfo; // 0x50(0x170)
		FCreativeAdSource CreativeAds; // 0x1C0(0x30)
	};


	// Struct FortniteUI.PlatformPurchaseMessaging
	// Size: 0x10 (0x10 - 0x0)
	struct FPlatformPurchaseMessaging	
	{
	public:
		FPlatformPurchaseErrorCodeMessages ErrorCodeMessages; // 0x0(0x10)
	};


	// Struct FortniteUI.PlatformPurchaseErrorCodeMessages
	// Size: 0x10 (0x10 - 0x0)
	struct FPlatformPurchaseErrorCodeMessages	
	{
	public:
		TArray<FPlatformPurchaseErrorCodeMessage> ErrorCodeMessageList; // 0x0(0x10)
	};


	// Struct FortniteUI.PlatformPurchaseErrorCodeMessage
	// Size: 0x30 (0x30 - 0x0)
	struct FPlatformPurchaseErrorCodeMessage	
	{
	public:
		FString ErrorCode; // 0x0(0x10)
		FText Title; // 0x10(0x10)
		TArray<FText> Messages; // 0x20(0x10)
	};


	// Struct FortniteUI.AthenaShopSpecialOffer
	// Size: 0xA0 (0xA0 - 0x0)
	struct FAthenaShopSpecialOffer	
	{
	public:
		bool bSpecialOfferEnabled; // 0x0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		FVideoWidgetConfig SpecialOfferVideo; // 0x8(0x98)
	};


	// Struct FortniteUI.SocialEventJSON
	// Size: 0x20 (0x20 - 0x0)
	struct FSocialEventJSON	
	{
	public:
		int32_t event_id; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FText Title; // 0x8(0x10)
		FDateTime starts_at_utc; // 0x18(0x8)
	};


	// Struct FortniteUI.SocialEventsJsonObject
	// Size: 0x10 (0x10 - 0x0)
	struct FSocialEventsJsonObject	
	{
	public:
		TArray<FSocialEventJSON> Events; // 0x0(0x10)
	};


	// Struct FortniteUI.SocialEventsSource
	// Size: 0x40 (0x40 - 0x0)
	struct FSocialEventsSource	
	{
	public:
		FString _title; // 0x0(0x10)
		FString __locale; // 0x10(0x10)
		FString LastModified; // 0x20(0x10)
		FSocialEventsJsonObject SocialEvents; // 0x30(0x10)
	};


	// Struct FortniteUI.FortActivityImageCache
	// Size: 0x18 (0x18 - 0x0)
	struct FFortActivityImageCache	
	{
	public:
		unsigned char UnknownData00_2[0x18]; // 0x0(0x18) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.FortActivityCompressedImageCache
	// Size: 0x18 (0x18 - 0x0)
	struct FFortActivityCompressedImageCache	
	{
	public:
		TArray<char> CompressedImage; // 0x0(0x10)
		unsigned char UnknownData00_7[0x8]; // 0x10(0x8) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.FortMissionRewardInfo
	// Size: 0xD0 (0xD0 - 0x0)
	struct FFortMissionRewardInfo	
	{
	public:
		FSlateBrush Icon; // 0x0(0xB0)
		FText DisplayName; // 0xB0(0x10)
		UFortItem* Item; // 0xC0(0x8)
		bool bIsMissionAlertReward; // 0xC8(0x1)
		unsigned char UnknownData00_7[0x7]; // 0xC9(0x7) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.FortMissionDetails
	// Size: 0x128 (0x128 - 0x0)
	struct FFortMissionDetails	
	{
	public:
		EFortTheaterMapTileType TileType; // 0x0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		FText TheaterDisplayName; // 0x8(0x10)
		FText MissionName; // 0x18(0x10)
		FText MissionDescription; // 0x28(0x10)
		bool bIsGroupContent; // 0x38(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x39(0x7) UNKNOWN PROPERTY
		UFortMissionGenerator* MissionDefinition; // 0x40(0x8)
		FText ZoneName; // 0x48(0x10)
		FText ZoneDescription; // 0x58(0x10)
		FText RegionThemeName; // 0x68(0x10)
		TWeakObjectPtr<USlateBrushAsset*> RegionThemeIcon; // 0x78(0x20)
		FText DifficultyName; // 0x98(0x10)
		TArray<FFortMissionRewardInfo> MissionRewards; // 0xA8(0x10)
		FTimespan AvailableTime; // 0xB8(0x8)
		ERatingsEnforcementType RatingsEnforcement; // 0xC0(0x1)
		unsigned char UnknownData02_6[0x3]; // 0xC1(0x3) UNKNOWN PROPERTY
		int32_t RequiredBaseRating; // 0xC4(0x4)
		int32_t RecommendedBaseRating; // 0xC8(0x4)
		int32_t MaxBaseRating; // 0xCC(0x4)
		int32_t ContentDifficultyLevel; // 0xD0(0x4)
		bool bIsOnboarding; // 0xD4(0x1)
		unsigned char UnknownData03_6[0x3]; // 0xD5(0x3) UNKNOWN PROPERTY
		int32_t LootLevel; // 0xD8(0x4)
		bool bOverrideConningText; // 0xDC(0x1)
		unsigned char UnknownData04_6[0x3]; // 0xDD(0x3) UNKNOWN PROPERTY
		FText ConningOverrideText; // 0xE0(0x10)
		FString TheaterUniqueId; // 0xF0(0x10)
		UFortCloudSaveItemDefinition* AssociatedCloudSaveItemDefinition; // 0x100(0x8)
		TArray<UFortGameplayModifierItemDefinition*> GameplayModifiers; // 0x108(0x10)
		TArray<FText> Objectives; // 0x118(0x10)
	};


	// Struct FortniteUI.UnlockableVariantPreviewInfo
	// Size: 0x20 (0x20 - 0x0)
	struct FUnlockableVariantPreviewInfo	
	{
	public:
		bool bIsValid; // 0x0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		int32_t SetNumber; // 0x4(0x4)
		int32_t SetCount; // 0x8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FText UnlockCondition; // 0x10(0x10)
	};


	// Struct FortniteUI.CanShowPhoenixStatusDisplay
	// Size: 0x1 (0x1 - 0x0)
	struct FCanShowPhoenixStatusDisplay	
	{
	public:
		bool bCanShowPhoenixStatusDisplay; // 0x0(0x1)
	};


	// Struct FortniteUI.FortFrontEndFeatureStruct
	// Size: 0x18 (0x18 - 0x0)
	struct FFortFrontEndFeatureStruct	
	{
	public:
		EFortFrontEndFeatureState CurrentState; // 0x0(0x1)
		EFortFrontEndFeatureState ForcedState; // 0x1(0x1)
		EFortFrontEndFeatureStateReason ForcedStateReason; // 0x2(0x1)
		unsigned char UnknownData00_6[0x5]; // 0x3(0x5) UNKNOWN PROPERTY
		FMulticastInlineDelegate ChangeDelegate; // 0x8(0x10)
	};


	// Struct FortniteUI.ViewVaultItemsParams
	// Size: 0x18 (0x18 - 0x0)
	struct FViewVaultItemsParams	
	{
	public:
		TArray<UItemDefinitionBase*> ItemsToView; // 0x0(0x10)
		unsigned char UnknownData00_7[0x8]; // 0x10(0x8) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.FortBasicMissionInfo
	// Size: 0x470 (0x470 - 0x0)
	struct FFortBasicMissionInfo	
	{
	public:
		FText MissionName; // 0x0(0x10)
		FFortMultiSizeBrush MissionIcons; // 0x10(0x420)
		FText TheaterName; // 0x430(0x10)
		FText DifficultyName; // 0x440(0x10)
		UMediaSource* EndOfMissionMediaSource; // 0x450(0x8)
		UMediaSource* EndOfMissionMediaSourceStreamed; // 0x458(0x8)
		bool bSkipEndOfMissionVideo; // 0x460(0x1)
		bool bIsGroupContent; // 0x461(0x1)
		unsigned char UnknownData00_7[0xE]; // 0x462(0xE) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.FortItemDelta
	// Size: 0x10 (0x10 - 0x0)
	struct FFortItemDelta	
	{
	public:
		UItemDefinitionBase* ItemDefinition; // 0x0(0x8)
		int32_t BaseAmount; // 0x8(0x4)
		int32_t DeltaAmount; // 0xC(0x4)
	};


	// Struct FortniteUI.FortItemListFilter
	// Size: 0x18 (0x18 - 0x0)
	struct FFortItemListFilter	
	{
	public:
		FString SearchText; // 0x0(0x10)
		EFortInventoryFilter FilterType; // 0x10(0x1)
		bool bInStorageVault; // 0x11(0x1)
		bool bIncludeVaultOverflow; // 0x12(0x1)
		unsigned char UnknownData00_7[0x5]; // 0x13(0x5) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.FortPickerTemporaryWheelItem
	// Size: 0x18 (0x18 - 0x0)
	struct FFortPickerTemporaryWheelItem	
	{
	public:
		FText LabelOverride; // 0x0(0x10)
		UItemDefinitionBase* Item; // 0x10(0x8)
	};


	// Struct FortniteUI.FortPickerTemporaryWheel
	// Size: 0x28 (0x28 - 0x0)
	struct FFortPickerTemporaryWheel	
	{
	public:
		unsigned char UnknownData00_7[0x18]; // 0x0(0x18) UNKNOWN PROPERTY
		TArray<FFortPickerTemporaryWheelItem> Items; // 0x18(0x10)
	};


	// Struct FortniteUI.TrackedTrapTimeAndCount
	// Size: 0x8 (0x8 - 0x0)
	struct FTrackedTrapTimeAndCount	
	{
	public:
		unsigned char UnknownData00_2[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.StoreCallout
	// Size: 0x70 (0x70 - 0x0)
	struct FStoreCallout	
	{
	public:
		FFortToastDisplayInfo ToastDisplayInfo; // 0x0(0x48)
		FText ItemName; // 0x48(0x10)
		FText ItemSet; // 0x58(0x10)
		FName LayoutId; // 0x68(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x6C(0x4) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.Card
	// Size: 0x18 (0x18 - 0x0)
	struct FCard	
	{
	public:
		int32_t QuantityReceived; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		UFortItem* Item; // 0x8(0x8)
		EPauseType PauseType; // 0x10(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.OpenedCardPack
	// Size: 0x10 (0x10 - 0x0)
	struct FOpenedCardPack	
	{
	public:
		UFortCardPackItemDefinition* CardPackDefinition; // 0x0(0x8)
		int32_t DisplayLevel; // 0x8(0x4)
		unsigned char UnknownData00_7[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.MinigameStateScenes
	// Size: 0x18 (0x18 - 0x0)
	struct FMinigameStateScenes	
	{
	public:
		uint32_t MinigameStateBitmask; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TArray<UDynamicUIScene*> Scenes; // 0x8(0x10)
	};


	// Struct FortniteUI.CoreGamerRankingInfo
	// Size: 0x20 (0x20 - 0x0)
	struct FCoreGamerRankingInfo	
	{
	public:
		int32_t Score; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FText Name; // 0x8(0x10)
		unsigned char UnknownData01_7[0x8]; // 0x18(0x8) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.CreativeDeviceInfo
	// Size: 0x60 (0x60 - 0x0)
	struct FCreativeDeviceInfo	
	{
	public:
		int32_t DeviceTrackingGUID; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr<AActor*> ActorPtr; // 0x8(0x20)
		FString DisplayName; // 0x28(0x10)
		TArray<FCreativeDeviceSubscription> OutgoingEvents; // 0x38(0x10)
		TArray<FCreativeDeviceSubscription> CalledFunctions; // 0x48(0x10)
		int32_t NumBoundEvents; // 0x58(0x4)
		int32_t NumBoundFunctions; // 0x5C(0x4)
	};


	// Struct FortniteUI.CreativeDeviceCached
	// Size: 0x38 (0x38 - 0x0)
	struct FCreativeDeviceCached	
	{
	public:
		FText DisplayName; // 0x0(0x10)
		int32_t NumBoundEvents; // 0x10(0x4)
		int32_t NumBoundFunctions; // 0x14(0x4)
		TWeakObjectPtr<AActor*> ActorPtr; // 0x18(0x20)
	};


	// Struct FortniteUI.CachedIslandsGroup
	// Size: 0x28 (0x28 - 0x0)
	struct FCachedIslandsGroup	
	{
	public:
		TArray<UFortCreativeIslandLink*> IslandLinks; // 0x0(0x10)
		unsigned char UnknownData00_7[0x18]; // 0x10(0x18) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.StyleButtonReference
	// Size: 0x18 (0x18 - 0x0)
	struct FStyleButtonReference	
	{
	public:
		UCommonButtonBase* Button; // 0x0(0x8)
		unsigned char UnknownData00_7[0x10]; // 0x8(0x10) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.FortCreativeServerDisplayOption
	// Inherited from FTableRowBase
	// Size: 0x30 (0x38 - 0x8)
	struct FFortCreativeServerDisplayOption : public FTableRowBase	
	{
	public:
		TWeakObjectPtr<UTexture*> Image; // 0x8(0x20)
		FLinearColor Color; // 0x28(0x10)
	};


	// Struct FortniteUI.CreativeContentBrowserAddItemDefinitionMessage
	// Size: 0x10 (0x10 - 0x0)
	struct FCreativeContentBrowserAddItemDefinitionMessage	
	{
	public:
		TArray<UFortItemDefinition*> ItemDefinitionsToAdd; // 0x0(0x10)
	};


	// Struct FortniteUI.OnDiscoveryHomebarUpdated
	// Size: 0x10 (0x10 - 0x0)
	struct FOnDiscoveryHomebarUpdated	
	{
	public:
		unsigned char UnknownData00_2[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.FortActivityScaleFontData
	// Size: 0x8 (0x8 - 0x0)
	struct FFortActivityScaleFontData	
	{
	public:
		int32_t CharacterCountStart; // 0x0(0x4)
		int32_t FontSize; // 0x4(0x4)
	};


	// Struct FortniteUI.CachedSurfaceData
	// Size: 0x20 (0x20 - 0x0)
	struct FCachedSurfaceData	
	{
	public:
		unsigned char UnknownData00_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		TArray<UFortCreativeDiscoveryActivityProvider*> CachedDataProviders; // 0x8(0x10)
		bool bIsDirty; // 0x18(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x19(0x7) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.FortLeaderboardRequestIds
	// Size: 0x20 (0x20 - 0x0)
	struct FFortLeaderboardRequestIds	
	{
	public:
		unsigned char UnknownData00_2[0x20]; // 0x0(0x20) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.FortStateStyle
	// Size: 0x440 (0x440 - 0x0)
	struct FFortStateStyle	
	{
	public:
		FFortMultiSizeBrush Brush; // 0x0(0x420)
		FLinearColor PrimaryColor; // 0x420(0x10)
		FLinearColor SecondaryColor; // 0x430(0x10)
	};


	// Struct FortniteUI.FortCreativeIslandSelectCollabProperties
	// Size: 0x60 (0x60 - 0x0)
	struct FFortCreativeIslandSelectCollabProperties	
	{
	public:
		TWeakObjectPtr<UTexture2D*> CollabIcon; // 0x0(0x20)
		FText CollabDisabledDisclaimerText; // 0x20(0x10)
		FText CollabEnabledDisclaimerText; // 0x30(0x10)
		TWeakObjectPtr<UClass*> CollabInfoDialog; // 0x40(0x20)
	};


	// Struct FortniteUI.FortCreativeIslandMultipleIPSelectCollabProperties
	// Size: 0xA0 (0xA0 - 0x0)
	struct FFortCreativeIslandMultipleIPSelectCollabProperties	
	{
	public:
		FString GFSName; // 0x0(0x10)
		FText DisplayName; // 0x10(0x10)
		bool bShowCreatorInfo; // 0x20(0x1)
		ECollabIPGatingType IP_GatingType; // 0x21(0x1)
		unsigned char UnknownData00_6[0x6]; // 0x22(0x6) UNKNOWN PROPERTY
		TWeakObjectPtr<UTexture2D*> CollabIcon; // 0x28(0x20)
		FText CollabDisabledDisclaimerText; // 0x48(0x10)
		FText CollabEnabledDisclaimerText; // 0x58(0x10)
		TWeakObjectPtr<UClass*> CollabInfoDialog; // 0x68(0x20)
		UCommonTileView* TileView; // 0x88(0x8)
		TArray<UObject*> ListItems; // 0x90(0x10)
	};


	// Struct FortniteUI.ItemListCategoryArray
	// Size: 0x18 (0x18 - 0x0)
	struct FItemListCategoryArray	
	{
	public:
		TArray<FFortItemEntry> ItemList; // 0x0(0x10)
		FName CategoryID; // 0x10(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.FortCreativeItemListCategoryData
	// Inherited from FTableRowBase
	// Size: 0x8 (0x10 - 0x8)
	struct FFortCreativeItemListCategoryData : public FTableRowBase	
	{
	public:
		EFortItemCardSize CardSize; // 0x8(0x1)
		bool bCollapseCardBorderPad; // 0x9(0x1)
		bool bUseLegacyItemDetailsPanel; // 0xA(0x1)
		unsigned char UnknownData00_7[0x5]; // 0xB(0x5) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.FortItemListOptionBucket
	// Size: 0x20 (0x20 - 0x0)
	struct FFortItemListOptionBucket	
	{
	public:
		unsigned char UnknownData00_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		int32_t ItemIndex; // 0x8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		TArray<UFortItemListOptionProxy*> ItemOptionData; // 0x10(0x10)
	};


	// Struct FortniteUI.FortWeightedObject
	// Size: 0x10 (0x10 - 0x0)
	struct FFortWeightedObject	
	{
	public:
		UObject* Object; // 0x0(0x8)
		int32_t Weight; // 0x8(0x4)
		unsigned char UnknownData00_7[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.ContextPosition
	// Size: 0x20 (0x20 - 0x0)
	struct FContextPosition	
	{
	public:
		EContextPositionPlatform Platform; // 0x0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		FVector2D Position; // 0x8(0x10)
		TEnumAsByte<EHorizontalAlignment> HorizontalAlignment; // 0x18(0x1)
		TEnumAsByte<EVerticalAlignment> VerticalAlignment; // 0x19(0x1)
		unsigned char UnknownData01_7[0x6]; // 0x1A(0x6) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.DirectProgressUpdateData
	// Size: 0x18 (0x18 - 0x0)
	struct FDirectProgressUpdateData	
	{
	public:
		float ProgressPercent; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		UFortItemDefinition* ItemDef; // 0x8(0x8)
		AFortPlayerPawn* OwningPawn; // 0x10(0x8)
	};


	// Struct FortniteUI.MeasuredText
	// Size: 0x28 (0x28 - 0x0)
	struct FMeasuredText	
	{
	public:
		unsigned char UnknownData00_2[0x28]; // 0x0(0x28) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.RadialOptionData
	// Size: 0xE0 (0xE0 - 0x0)
	struct FRadialOptionData	
	{
	public:
		FText Label; // 0x0(0x10)
		FSlateBrush Brush; // 0x10(0xB0)
		TWeakObjectPtr<UTexture2D*> SoftIcon; // 0xC0(0x20)
	};


	// Struct FortniteUI.BuildingCategoryOptionData
	// Inherited from FRadialOptionData
	// Size: 0x10 (0xF0 - 0xE0)
	struct FBuildingCategoryOptionData : public FRadialOptionData	
	{
	public:
		TEnumAsByte<EFortBuildingType> BuildingType; // 0xE0(0x1)
		unsigned char UnknownData00_7[0xF]; // 0xE1(0xF) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.BuildingOptionData
	// Inherited from FRadialOptionData
	// Size: 0x20 (0x100 - 0xE0)
	struct FBuildingOptionData : public FRadialOptionData	
	{
	public:
		FString ClassSuffix; // 0xE0(0x10)
		bool ClassMirrored; // 0xF0(0x1)
		unsigned char UnknownData00_7[0xF]; // 0xF1(0xF) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.ItemCategoryOptionData
	// Inherited from FRadialOptionData
	// Size: 0x20 (0x100 - 0xE0)
	struct FItemCategoryOptionData : public FRadialOptionData	
	{
	public:
		FString TemplatePrefix; // 0xE0(0x10)
		TEnumAsByte<EBuildingAttachmentType> BuildingAttachmentType; // 0xF0(0x1)
		unsigned char UnknownData00_7[0xF]; // 0xF1(0xF) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.ChatOptionData
	// Inherited from FRadialOptionData
	// Size: 0x10 (0xF0 - 0xE0)
	struct FChatOptionData : public FRadialOptionData	
	{
	public:
		FText ChatText; // 0xE0(0x10)
	};


	// Struct FortniteUI.SquadChatOptionData
	// Inherited from FRadialOptionData
	// Size: 0x10 (0xF0 - 0xE0)
	struct FSquadChatOptionData : public FRadialOptionData	
	{
	public:
		FText ChatText; // 0xE0(0x10)
	};


	// Struct FortniteUI.MapNoteOptionData
	// Inherited from FRadialOptionData
	// Size: 0x10 (0xF0 - 0xE0)
	struct FMapNoteOptionData : public FRadialOptionData	
	{
	public:
		FText MapNoteText; // 0xE0(0x10)
	};


	// Struct FortniteUI.EmoteOptionData
	// Inherited from FRadialOptionData
	// Size: 0x10 (0xF0 - 0xE0)
	struct FEmoteOptionData : public FRadialOptionData	
	{
	public:
		FName EmoteCommand; // 0xE0(0x4)
		unsigned char UnknownData00_7[0xC]; // 0xE4(0xC) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.ItemDefOptionData
	// Inherited from FRadialOptionData
	// Size: 0x10 (0xF0 - 0xE0)
	struct FItemDefOptionData : public FRadialOptionData	
	{
	public:
		UObject* ItemDef; // 0xE0(0x8)
		unsigned char UnknownData00_7[0x8]; // 0xE8(0x8) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.SquadQuickChatOptionData
	// Inherited from FRadialOptionData
	// Size: 0x30 (0x110 - 0xE0)
	struct FSquadQuickChatOptionData : public FRadialOptionData	
	{
	public:
		FAthenaQuickChatActiveEntry ChatEntry; // 0xE0(0x28)
		bool bEnabled; // 0x108(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x109(0x7) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.FortRichTextStyleData
	// Inherited from FTableRowBase
	// Size: 0x2F8 (0x300 - 0x8)
	struct FFortRichTextStyleData : public FTableRowBase	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FTextBlockStyle TextStyle; // 0x10(0x2E0)
		bool bHyperlinkStyle; // 0x2F0(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x2F1(0x3) UNKNOWN PROPERTY
		float MobileTextScale; // 0x2F4(0x4)
		unsigned char UnknownData02_7[0x8]; // 0x2F8(0x8) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.PotentialSpectatorTarget
	// Size: 0x10 (0x10 - 0x0)
	struct FPotentialSpectatorTarget	
	{
	public:
		int32_t Rank; // 0x0(0x4)
		TWeakObjectPtr<AFortPlayerStateAthena*> PlayerState; // 0x4(0x8)
		bool bCurrentViewTarget; // 0xC(0x1)
		unsigned char UnknownData00_7[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.StandaloneItemShopTabInfo
	// Size: 0x120 (0x120 - 0x0)
	struct FStandaloneItemShopTabInfo	
	{
	public:
		FText TabTitle; // 0x0(0x10)
		FName TabNameID; // 0x10(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
		UObject* TabIcon; // 0x18(0x8)
		FSlateBrush MobileTabIcon; // 0x20(0xB0)
		bool bOverride_MobileTabIcon; // 0xD0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0xD1(0x7) UNKNOWN PROPERTY
		UCommonActivatableWidget* TabWidget; // 0xD8(0x8)
		TWeakObjectPtr<UClass*> ExternalTabWidget; // 0xE0(0x20)
		EFortUIFeature UIFeature; // 0x100(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x101(0x7) UNKNOWN PROPERTY
		FString EnableWithCVar; // 0x108(0x10)
		int32_t SortOrder; // 0x118(0x4)
		bool bRequiresPocketLevel; // 0x11C(0x1)
		unsigned char UnknownData03_7[0x3]; // 0x11D(0x3) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.OnVirtualWidgetTouchStartedData
	// Size: 0x78 (0x78 - 0x0)
	struct FOnVirtualWidgetTouchStartedData	
	{
	public:
		unsigned char UnknownData00_2[0x78]; // 0x0(0x78) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.OnVirtualWidgetTouchMovedData
	// Size: 0x78 (0x78 - 0x0)
	struct FOnVirtualWidgetTouchMovedData	
	{
	public:
		unsigned char UnknownData00_2[0x78]; // 0x0(0x78) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.OnVirtualWidgetTouchEndedData
	// Size: 0x78 (0x78 - 0x0)
	struct FOnVirtualWidgetTouchEndedData	
	{
	public:
		unsigned char UnknownData00_2[0x78]; // 0x0(0x78) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.TouchMove
	// Size: 0x18 (0x18 - 0x0)
	struct FTouchMove	
	{
	public:
		unsigned char UnknownData00_2[0x18]; // 0x0(0x18) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.StateWidgetEntry
	// Size: 0x28 (0x28 - 0x0)
	struct FStateWidgetEntry	
	{
	public:
		TWeakObjectPtr<UClass*> Class; // 0x0(0x20)
		EFortNamedBundle Bundle; // 0x20(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x21(0x7) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.UINavigationEntry
	// Size: 0x38 (0x38 - 0x0)
	struct FUINavigationEntry	
	{
	public:
		FUINavigationData Data; // 0x0(0x20)
		FDelegateProperty NavigateToDelegate; // 0x20(0xC)
		FDelegateProperty NavigateFromDelegate; // 0x2C(0xC)
	};


	// Struct FortniteUI.FortUINavigationOperation
	// Size: 0x28 (0x28 - 0x0)
	struct FFortUINavigationOperation	
	{
	public:
		EFortUINavigationOp Operation; // 0x0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		FName SquadID; // 0x4(0x4)
		int32_t SquadSlotIndex; // 0x8(0x4)
		FName PageId; // 0xC(0x4)
		FName NodeId; // 0x10(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
		UFortItem* Item; // 0x18(0x8)
		EFortUIFeature Feature; // 0x20(0x1)
		EFortFrontendInventoryFilter ItemManagementFilter; // 0x21(0x1)
		unsigned char UnknownData02_7[0x6]; // 0x22(0x6) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.FortUINavigationRequest
	// Size: 0x10 (0x10 - 0x0)
	struct FFortUINavigationRequest	
	{
	public:
		TArray<FFortUINavigationOperation> Operations; // 0x0(0x10)
	};


	// Struct FortniteUI.BonusInfoMiniTagData
	// Size: 0x18 (0x18 - 0x0)
	struct FBonusInfoMiniTagData	
	{
	public:
		TArray<UFortItemDefinition*> ItemDefs; // 0x0(0x10)
		bool bIsOwned; // 0x10(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.SceneTransitionOptions
	// Size: 0x2 (0x2 - 0x0)
	struct FSceneTransitionOptions	
	{
	public:
		ESceneTransitionType TRANSITION; // 0x0(0x1)
		bool bKeepInputRotation; // 0x1(0x1)
	};


	// Struct FortniteUI.InterpolatedTransitionCamera
	// Size: 0x70 (0x70 - 0x0)
	struct FInterpolatedTransitionCamera	
	{
	public:
		FTransform CameraTransform; // 0x0(0x60)
		float FieldOfView; // 0x60(0x4)
		unsigned char UnknownData00_7[0xC]; // 0x64(0xC) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.CachedComponentMaterials
	// Size: 0x18 (0x18 - 0x0)
	struct FCachedComponentMaterials	
	{
	public:
		unsigned char UnknownData00_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		TArray<UMaterialInterface*> OriginalMaterials; // 0x8(0x10)
	};


	// Struct FortniteUI.PlatformPrefixIcon
	// Size: 0x18 (0x18 - 0x0)
	struct FPlatformPrefixIcon	
	{
	public:
		FString Platform; // 0x0(0x10)
		UTexture2D* PrefixIcon; // 0x10(0x8)
	};


	// Struct FortniteUI.PlatformPrefixIconList
	// Size: 0x10 (0x10 - 0x0)
	struct FPlatformPrefixIconList	
	{
	public:
		TArray<FPlatformPrefixIcon> PlatformPrefixIcons; // 0x0(0x10)
	};


	// Struct FortniteUI.FortUserListHeaderInfo
	// Size: 0x18 (0x18 - 0x0)
	struct FFortUserListHeaderInfo	
	{
	public:
		unsigned char UnknownData00_2[0x18]; // 0x0(0x18) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.OptionsReleaseInfo
	// Size: 0x8 (0x8 - 0x0)
	struct FOptionsReleaseInfo	
	{
	public:
		ESettingType SettingType; // 0x0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		int32_t ReleaseVersion; // 0x4(0x4)
	};


	// Struct FortniteUI.RarityArray
	// Size: 0x10 (0x10 - 0x0)
	struct FRarityArray	
	{
	public:
		TArray<UFortItemDefinition*> Items; // 0x0(0x10)
	};


	// Struct FortniteUI.FortActionBeingUnbound
	// Size: 0x8 (0x8 - 0x0)
	struct FFortActionBeingUnbound	
	{
	public:
		FName ActionName; // 0x0(0x4)
		int32_t InputIndex; // 0x4(0x4)
	};


	// Struct FortniteUI.AthenaSpatialCustomizationCategoryGroup
	// Size: 0x10 (0x10 - 0x0)
	struct FAthenaSpatialCustomizationCategoryGroup	
	{
	public:
		TArray<UAthenaSpatialCustomizationCategoryEntry*> CategoryEntryList; // 0x0(0x10)
	};


	// Struct FortniteUI.SpatialCustomizationCategoryStateData
	// Size: 0x28 (0x28 - 0x0)
	struct FSpatialCustomizationCategoryStateData	
	{
	public:
		ESpatialCustomizationCategoryState State; // 0x0(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		FLinearColor Color; // 0x4(0x10)
		unsigned char UnknownData01_6[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
		FText CategorySelectionHeaderText; // 0x18(0x10)
	};


	// Struct FortniteUI.OfferPopUpData
	// Inherited from FItemShopTableRowBase -> FTableRowBase
	// Size: 0x10 (0x20 - 0x10)
	struct FOfferPopUpData : public FItemShopTableRowBase	
	{
	public:
		FText FormatedText; // 0x10(0x10)
	};


	// Struct FortniteUI.FortPhoenixSeasonDisplayInfoMapRow
	// Inherited from FTableRowBase
	// Size: 0x18 (0x20 - 0x8)
	struct FFortPhoenixSeasonDisplayInfoMapRow : public FTableRowBase	
	{
	public:
		FString EventFlagName; // 0x8(0x10)
		UFortPhoenixSeasonDisplayInfo* DisplayInfo; // 0x18(0x8)
	};


	// Struct FortniteUI.FortPhoenixLevelProgressionRewards
	// Size: 0x20 (0x20 - 0x0)
	struct FFortPhoenixLevelProgressionRewards	
	{
	public:
		int32_t NextRewardLevel; // 0x0(0x4)
		FFortItemQuantityPair NextReward; // 0x4(0xC)
		int32_t NextMajorRewardLevel; // 0x10(0x4)
		FFortItemQuantityPair NextMajorReward; // 0x14(0xC)
	};


	// Struct FortniteUI.AthenaMapLegendEntryData
	// Size: 0x20 (0x20 - 0x0)
	struct FAthenaMapLegendEntryData	
	{
	public:
		FText LegendEntryText; // 0x0(0x10)
		TArray<TWeakObjectPtr> LegendEntryTextures; // 0x10(0x10)
	};


	// Struct FortniteUI.PlacementOverlayOverrideData
	// Size: 0x20 (0x20 - 0x0)
	struct FPlacementOverlayOverrideData	
	{
	public:
		int32_t Priority; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		UPlacementOverlayCondition* PlacementOverlayCondition; // 0x8(0x8)
		UClass* PlacementOverlay; // 0x10(0x8)
		USoundCue* PlacementVictoryStingerCue; // 0x18(0x8)
	};


	// Struct FortniteUI.TagStateWidgetEntry
	// Size: 0x28 (0x28 - 0x0)
	struct FTagStateWidgetEntry	
	{
	public:
		TWeakObjectPtr<UClass*> Class; // 0x0(0x20)
		EFortNamedBundle Bundle; // 0x20(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x21(0x7) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.NotificationWidgetClass
	// Size: 0x20 (0x20 - 0x0)
	struct FNotificationWidgetClass	
	{
	public:
		UClass* NotificationWidgetClass; // 0x0(0x8)
		int32_t InitialPoolSize; // 0x8(0x4)
		bool bCanIncreasePoolSizeAtRunTime; // 0xC(0x1)
		unsigned char UnknownData00_6[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
		TArray<UFortNotificationEntry*> WidgetPool; // 0x10(0x10)
	};


	// Struct FortniteUI.PickupStreamEntry
	// Size: 0x18 (0x18 - 0x0)
	struct FPickupStreamEntry	
	{
	public:
		UUserWidget* PickupWidget; // 0x0(0x8)
		unsigned char UnknownData00_7[0x10]; // 0x8(0x10) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.FortSwipeDetector
	// Size: 0x98 (0x98 - 0x0)
	struct FFortSwipeDetector	
	{
	public:
		FVector2D SwipeThreshold; // 0x0(0x10)
		unsigned char UnknownData00_7[0x88]; // 0x10(0x88) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.AthenaRewardTracker
	// Size: 0x14 (0x14 - 0x0)
	struct FAthenaRewardTracker	
	{
	public:
		unsigned char UnknownData00_2[0x14]; // 0x0(0x14) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.ItemPresentationRestrictionData
	// Size: 0x30 (0x30 - 0x0)
	struct FItemPresentationRestrictionData	
	{
	public:
		FText HeaderText; // 0x0(0x10)
		TWeakObjectPtr<UObject*> Icon; // 0x10(0x20)
	};


	// Struct FortniteUI.CurrencyDataWithGiftBox
	// Size: 0x10 (0x10 - 0x0)
	struct FCurrencyDataWithGiftBox	
	{
	public:
		TArray<FCurrencyData> GiftBoxCurrencyData; // 0x0(0x10)
	};


	// Struct FortniteUI.FortItemFilterDefinition
	// Size: 0x60 (0x60 - 0x0)
	struct FFortItemFilterDefinition	
	{
	public:
		TArray<EFortItemType> ItemTypeFilters; // 0x0(0x10)
		unsigned char UnknownData00_6[0x40]; // 0x10(0x40) UNKNOWN PROPERTY
		bool bRequiresItemDetails; // 0x50(0x1)
		unsigned char UnknownData01_7[0xF]; // 0x51(0xF) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.FortItemListViewConfig
	// Size: 0xC0 (0xC0 - 0x0)
	struct FFortItemListViewConfig	
	{
	public:
		unsigned char UnknownData00_2[0xC0]; // 0x0(0xC0) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.FortItemSorterDefinition
	// Size: 0x50 (0x50 - 0x0)
	struct FFortItemSorterDefinition	
	{
	public:
		unsigned char UnknownData00_2[0x50]; // 0x0(0x50) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.FortItemEntryPreviewData
	// Size: 0x8 (0x8 - 0x0)
	struct FFortItemEntryPreviewData	
	{
	public:
		int32_t Quantity; // 0x0(0x4)
		EFortItemInspectionMode InspectMode; // 0x4(0x1)
		unsigned char UnknownData00_7[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.VideoConfig_Mono
	// Size: 0x58 (0x58 - 0x0)
	struct FVideoConfig_Mono	
	{
	public:
		UFortStreamMediaSource* StreamingMediaSource; // 0x0(0x8)
		FName VideoString; // 0x8(0x4)
		FName StreamingVideoID; // 0xC(0x4)
		FName FallbackVideoID; // 0x10(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
		FString ProdLinkID; // 0x18(0x10)
		FString GamedevLinkID; // 0x28(0x10)
		bool bIsAutoPlay; // 0x38(0x1)
		bool bForceAutoPlay; // 0x39(0x1)
		bool bStreamingEnabled; // 0x3A(0x1)
		unsigned char UnknownData01_6[0x5]; // 0x3B(0x5) UNKNOWN PROPERTY
		FString VideoUID; // 0x40(0x10)
		bool bShouldBeModal; // 0x50(0x1)
		bool bUseSkipBoundaries; // 0x51(0x1)
		bool bHoldToSkip; // 0x52(0x1)
		unsigned char UnknownData02_7[0x5]; // 0x53(0x5) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.FortVideoInfo
	// Size: 0x30 (0x30 - 0x0)
	struct FFortVideoInfo	
	{
	public:
		FName ID; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		UTexture2D* PreviewImage; // 0x8(0x8)
		UMediaSource* VideoSource; // 0x10(0x8)
		ULocalizedOverlays* SubtitleOverlays; // 0x18(0x8)
		FName QuestObjectiveName; // 0x20(0x4)
		FPrimaryAssetId RequiredActiveQuest; // 0x24(0x8)
		unsigned char UnknownData01_7[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.FortConfirmationButtonInfo
	// Size: 0x10 (0x10 - 0x0)
	struct FFortConfirmationButtonInfo	
	{
	public:
		UCommonButtonBase* Button; // 0x0(0x8)
		unsigned char UnknownData00_7[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.ReviewYourSettingsData
	// Size: 0x30 (0x30 - 0x0)
	struct FReviewYourSettingsData	
	{
	public:
		FText Title; // 0x0(0x10)
		FText Description; // 0x10(0x10)
		TArray<UFortSetting*> Settings; // 0x20(0x10)
	};


	// Struct FortniteUI.FortMtxDetailsAttribute
	// Size: 0x20 (0x20 - 0x0)
	struct FFortMtxDetailsAttribute	
	{
	public:
		FText Name; // 0x0(0x10)
		FText Value; // 0x10(0x10)
	};


	// Struct FortniteUI.FortMtxDescriptionAndDetails
	// Size: 0x20 (0x20 - 0x0)
	struct FFortMtxDescriptionAndDetails	
	{
	public:
		FText ShortDescription; // 0x0(0x10)
		TArray<FFortMtxDetailsAttribute> AssociatedDetailsAttributes; // 0x10(0x10)
	};


	// Struct FortniteUI.FortMtxGradient
	// Size: 0x20 (0x20 - 0x0)
	struct FFortMtxGradient	
	{
	public:
		FLinearColor Start; // 0x0(0x10)
		FLinearColor Stop; // 0x10(0x10)
	};


	// Struct FortniteUI.FortItemShopCMSStackRank
	// Size: 0x20 (0x20 - 0x0)
	struct FFortItemShopCMSStackRank	
	{
	public:
		FDateTime StartDate; // 0x0(0x8)
		int32_t StackRankValue; // 0x8(0x4)
		unsigned char UnknownData00_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FString ProductTag; // 0x10(0x10)
	};


	// Struct FortniteUI.FortItemShopCMSOfferGroupMetadataEntry
	// Size: 0x20 (0x20 - 0x0)
	struct FFortItemShopCMSOfferGroupMetadataEntry	
	{
	public:
		FString Key; // 0x0(0x10)
		FString Value; // 0x10(0x10)
	};


	// Struct FortniteUI.FortItemShopCMSOfferGroupMetadata
	// Size: 0x30 (0x30 - 0x0)
	struct FFortItemShopCMSOfferGroupMetadata	
	{
	public:
		TArray<FFortItemShopCMSOfferGroupMetadataEntry> TextureMetadata; // 0x0(0x10)
		TArray<FFortItemShopCMSOfferGroupMetadataEntry> TextMetadata; // 0x10(0x10)
		TArray<FFortItemShopCMSOfferGroupMetadataEntry> StringMetadata; // 0x20(0x10)
	};


	// Struct FortniteUI.FortItemShopCMSOfferGroup
	// Size: 0x58 (0x58 - 0x0)
	struct FFortItemShopCMSOfferGroup	
	{
	public:
		FString OfferGroupId; // 0x0(0x10)
		EFortItemShopOfferDisplayType DisplayType; // 0x10(0x1)
		bool bUseWidePreview; // 0x11(0x1)
		unsigned char UnknownData00_6[0x6]; // 0x12(0x6) UNKNOWN PROPERTY
		TArray<FFortItemShopCMSStackRank> StackRanks; // 0x18(0x10)
		FFortItemShopCMSOfferGroupMetadata MetaData; // 0x28(0x30)
	};


	// Struct FortniteUI.FortItemShopCMSSectionMetadata
	// Size: 0x68 (0x68 - 0x0)
	struct FFortItemShopCMSSectionMetadata	
	{
	public:
		EFortItemShopShowIneligibleOffers ShowIneligibleOffers; // 0x0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		TArray<FFortItemShopCMSOfferGroup> OfferGroups; // 0x8(0x10)
		FFortItemShopCMSBackground Background; // 0x18(0x20)
		TArray<FFortItemShopCMSStackRank> StackRanks; // 0x38(0x10)
		unsigned char UnknownData01_6[0x10]; // 0x48(0x10) UNKNOWN PROPERTY
		TArray<FJsonObjectWrapper> Subsections; // 0x58(0x10)
	};


	// Struct FortniteUI.FortItemShopCMSSection
	// Size: 0x98 (0x98 - 0x0)
	struct FFortItemShopCMSSection	
	{
	public:
		FString SectionId; // 0x0(0x10)
		FString DisplayName; // 0x10(0x10)
		FString category; // 0x20(0x10)
		FFortItemShopCMSSectionMetadata MetaData; // 0x30(0x68)
	};


	// Struct FortniteUI.FortItemShopCMSData
	// Size: 0x20 (0x20 - 0x0)
	struct FFortItemShopCMSData	
	{
	public:
		TArray<FFortItemShopCMSSection> Sections; // 0x0(0x10)
		unsigned char UnknownData00_7[0x10]; // 0x10(0x10) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.FortItemShopCMSMaterialParameterData
	// Size: 0x50 (0x50 - 0x0)
	struct FFortItemShopCMSMaterialParameterData	
	{
	public:
		FString Name; // 0x0(0x10)
		EFortItemShopCMSMaterialParameterType Type; // 0x10(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
		FString TextureValue; // 0x18(0x10)
		float ScalarValue; // 0x28(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
		FVector4 VectorValue; // 0x30(0x20)
	};


	// Struct FortniteUI.FortItemShopCMSMaterialData
	// Size: 0x20 (0x20 - 0x0)
	struct FFortItemShopCMSMaterialData	
	{
	public:
		FString ParentMaterialDataPath; // 0x0(0x10)
		TArray<FFortItemShopCMSMaterialParameterData> Parameters; // 0x10(0x10)
	};


	// Struct FortniteUI.FortItemShopCMSOfferVisualData
	// Size: 0x20 (0x20 - 0x0)
	struct FFortItemShopCMSOfferVisualData	
	{
	public:
		FString VisualId; // 0x0(0x10)
		TArray<FFortItemShopCMSMaterialData> Materials; // 0x10(0x10)
	};


	// Struct FortniteUI.FortItemShopCMSOfferPresentation
	// Size: 0x18 (0x18 - 0x0)
	struct FFortItemShopCMSOfferPresentation	
	{
	public:
		FString RenderImage; // 0x0(0x10)
		FGameplayTag ProductTag; // 0x10(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.FortItemShopCMSOfferPresentationData
	// Size: 0x20 (0x20 - 0x0)
	struct FFortItemShopCMSOfferPresentationData	
	{
	public:
		FString VisualId; // 0x0(0x10)
		TArray<FFortItemShopCMSOfferPresentation> Presentations; // 0x10(0x10)
	};


	// Struct FortniteUI.FortFeedbackDropdownCategoryHotfix_Add
	// Size: 0x8 (0x8 - 0x0)
	struct FFortFeedbackDropdownCategoryHotfix_Add	
	{
	public:
		FName ParentInternalName; // 0x0(0x4)
		FName InternalName; // 0x4(0x4)
	};


	// Struct FortniteUI.FortFeedbackDropdownCategoryHotfix_Modify
	// Size: 0x8 (0x8 - 0x0)
	struct FFortFeedbackDropdownCategoryHotfix_Modify	
	{
	public:
		FName InternalName; // 0x0(0x4)
		bool bAddFlag; // 0x4(0x1)
		EFortPlayerFeedbackFlags Flag; // 0x5(0x1)
		unsigned char UnknownData00_7[0x2]; // 0x6(0x2) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.PluginWidgetInjectionData
	// Size: 0x30 (0x30 - 0x0)
	struct FPluginWidgetInjectionData	
	{
	public:
		FString WidgetId; // 0x0(0x10)
		TWeakObjectPtr<UClass*> WidgetClass; // 0x10(0x20)
	};


	// Struct FortniteUI.TrackCategoryUI
	// Size: 0x40 (0x40 - 0x0)
	struct FTrackCategoryUI	
	{
	public:
		FTrackCategory TrackData; // 0x0(0x38)
		int32_t LastSelectedIndex; // 0x38(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.BattlePassPageData
	// Size: 0x8 (0x8 - 0x0)
	struct FBattlePassPageData	
	{
	public:
		unsigned char UnknownData00_2[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.ExpandedItemVM
	// Size: 0x10 (0x10 - 0x0)
	struct FExpandedItemVM	
	{
	public:
		UFortItemVM* BRItemVM; // 0x0(0x8)
		UFortItemVM* JunoItemVM; // 0x8(0x8)
	};


	// Struct FortniteUI.PreviewRewardData
	// Size: 0x60 (0x60 - 0x0)
	struct FPreviewRewardData	
	{
	public:
		unsigned char UnknownData00_2[0x60]; // 0x0(0x60) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.PreviewUnlockRewardData
	// Size: 0x30 (0x30 - 0x0)
	struct FPreviewUnlockRewardData	
	{
	public:
		int32_t Currency; // 0x0(0x4)
		int32_t NumAdditionalRewards; // 0x4(0x4)
		int32_t TotalRewards; // 0x8(0x4)
		int32_t NumCharacters; // 0xC(0x4)
		TArray<FPreviewRewardData> Characters; // 0x10(0x10)
		TArray<FPreviewRewardData> AdditionalRewards; // 0x20(0x10)
	};


	// Struct FortniteUI.PreviewUnlockData
	// Size: 0x98 (0x98 - 0x0)
	struct FPreviewUnlockData	
	{
	public:
		FPreviewUnlockRewardData InstantRewards; // 0x0(0x30)
		FPreviewUnlockRewardData EarnedRewards; // 0x30(0x30)
		FText ChapterNumberText; // 0x60(0x10)
		FText SeasonNumberText; // 0x70(0x10)
		FText SummaryText; // 0x80(0x10)
		bool bPaysForSelf; // 0x90(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x91(0x7) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.BattlePassCharacterPreviewDisplayData
	// Size: 0x10 (0x10 - 0x0)
	struct FBattlePassCharacterPreviewDisplayData	
	{
	public:
		UAthenaCharacterItemDefinition* CharacterItemDef; // 0x0(0x8)
		UMaterialInstance* PreviewMaterial; // 0x8(0x8)
	};


	// Struct FortniteUI.BattlePassShowRewardParams
	// Size: 0x20 (0x20 - 0x0)
	struct FBattlePassShowRewardParams	
	{
	public:
		unsigned char UnknownData00_2[0x20]; // 0x0(0x20) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.CycledItemPreviewSettings
	// Size: 0xD0 (0xD0 - 0x0)
	struct FCycledItemPreviewSettings	
	{
	public:
		unsigned char UnknownData00_2[0xD0]; // 0x0(0xD0) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.FortBattlePassVideoAnnotation
	// Size: 0x28 (0x28 - 0x0)
	struct FFortBattlePassVideoAnnotation	
	{
	public:
		float StartTime; // 0x0(0x4)
		float EndTime; // 0x4(0x4)
		FVector2D ScreenPosition; // 0x8(0x10)
		int32_t EntryAngle; // 0x18(0x4)
		float EntryMagnitude; // 0x1C(0x4)
		UFortItemDefinition* RewardItemDefinition; // 0x20(0x8)
	};


	// Struct FortniteUI.FortSettingClassExtensions
	// Size: 0x10 (0x10 - 0x0)
	struct FFortSettingClassExtensions	
	{
	public:
		TArray<TWeakObjectPtr> Extensions; // 0x0(0x10)
	};


	// Struct FortniteUI.FortSettingNameExtensions
	// Size: 0x18 (0x18 - 0x0)
	struct FFortSettingNameExtensions	
	{
	public:
		bool bIncludeClassDefaultExtensions; // 0x0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		TArray<TWeakObjectPtr> Extensions; // 0x8(0x10)
	};


	// Struct FortniteUI.CheatMenuEntry
	// Size: 0x40 (0x40 - 0x0)
	struct FCheatMenuEntry	
	{
	public:
		FString DevName; // 0x0(0x10)
		FString DisplayName; // 0x10(0x10)
		FString RichText; // 0x20(0x10)
		TArray<FString> ConsoleCommands; // 0x30(0x10)
	};


	// Struct FortniteUI.CheatMenuSection
	// Size: 0x48 (0x48 - 0x0)
	struct FCheatMenuSection	
	{
	public:
		FString DevName; // 0x0(0x10)
		FString DisplayName; // 0x10(0x10)
		FString MinVersion; // 0x20(0x10)
		TArray<FCheatMenuEntry> Entries; // 0x30(0x10)
		bool bExpanded; // 0x40(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x41(0x7) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.FortShowdownEventBestResultsSummary
	// Size: 0x1C (0x1C - 0x0)
	struct FFortShowdownEventBestResultsSummary	
	{
	public:
		int32_t TotalScore; // 0x0(0x4)
		int32_t MatchesPlayed; // 0x4(0x4)
		int32_t NumVictoryRoyales; // 0x8(0x4)
		int32_t PlacementPoints; // 0xC(0x4)
		int32_t EliminationPoints; // 0x10(0x4)
		int32_t EntryFeePoints; // 0x14(0x4)
		bool bIsValidSummary; // 0x18(0x1)
		unsigned char UnknownData00_7[0x3]; // 0x19(0x3) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.FortTournamentDisplayInfo
	// Inherited from FTableRowBase
	// Size: 0x170 (0x178 - 0x8)
	struct FFortTournamentDisplayInfo : public FTableRowBase	
	{
	public:
		FText TitleLine1; // 0x8(0x10)
		FText TitleLine2; // 0x18(0x10)
		FText ScheduleInfo; // 0x28(0x10)
		FText FlavorDescription; // 0x38(0x10)
		FText DetailsDescription; // 0x48(0x10)
		FText ShortFormatTitle; // 0x58(0x10)
		FText LongFormatTitle; // 0x68(0x10)
		FText BackgroundTitle; // 0x78(0x10)
		int32_t PinScoreRequirement; // 0x88(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x8C(0x4) UNKNOWN PROPERTY
		FText PinEarnedText; // 0x90(0x10)
		FLinearColor BaseColor; // 0xA0(0x10)
		FLinearColor PrimaryColor; // 0xB0(0x10)
		FLinearColor SecondaryColor; // 0xC0(0x10)
		FLinearColor HighlightColor; // 0xD0(0x10)
		FLinearColor TitleColor; // 0xE0(0x10)
		FLinearColor ShadowColor; // 0xF0(0x10)
		FLinearColor BackgroundLeftColor; // 0x100(0x10)
		FLinearColor BackgroundRightColor; // 0x110(0x10)
		FLinearColor BackgroundTextColor; // 0x120(0x10)
		FLinearColor PosterFadeColor; // 0x130(0x10)
		FText AlertText; // 0x140(0x10)
		FText SeriesPointLeaderboardName; // 0x150(0x10)
		EFortTournamentAlertType AlertType; // 0x160(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x161(0x7) UNKNOWN PROPERTY
		TArray<FText> RoundDisplayNames; // 0x168(0x10)
	};


	// Struct FortniteUI.FortEventStyleInfo
	// Inherited from FTableRowBase
	// Size: 0xA0 (0xA8 - 0x8)
	struct FFortEventStyleInfo : public FTableRowBase	
	{
	public:
		FLinearColor BaseColor; // 0x8(0x10)
		FLinearColor PrimaryColor; // 0x18(0x10)
		FLinearColor SecondaryColor; // 0x28(0x10)
		FLinearColor HighlightColor; // 0x38(0x10)
		FLinearColor TitleColor; // 0x48(0x10)
		FLinearColor ShadowColor; // 0x58(0x10)
		FLinearColor BackgroundLeftColor; // 0x68(0x10)
		FLinearColor BackgroundRightColor; // 0x78(0x10)
		FLinearColor BackgroundTextColor; // 0x88(0x10)
		FLinearColor PosterFadeColor; // 0x98(0x10)
	};


	// Struct FortniteUI.ShowdownScreenRegionWrapper
	// Size: 0x20 (0x20 - 0x0)
	struct FShowdownScreenRegionWrapper	
	{
	public:
		FString DisplayName; // 0x0(0x10)
		FString RegionId; // 0x10(0x10)
	};


	// Struct FortniteUI.BundledItemInfo
	// Size: 0x18 (0x18 - 0x0)
	struct FBundledItemInfo	
	{
	public:
		FString TemplateId; // 0x0(0x10)
		int32_t Quantity; // 0x10(0x4)
		bool bOwned; // 0x14(0x1)
		unsigned char UnknownData00_7[0x3]; // 0x15(0x3) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.FortHeroNamesData
	// Inherited from FTableRowBase
	// Size: 0x30 (0x38 - 0x8)
	struct FFortHeroNamesData : public FTableRowBase	
	{
	public:
		FString FirstName; // 0x8(0x10)
		FString NickName; // 0x18(0x10)
		FString LastName; // 0x28(0x10)
	};


	// Struct FortniteUI.FortUIXpInfo
	// Size: 0x2C (0x2C - 0x0)
	struct FFortUIXpInfo	
	{
	public:
		int32_t InitialLevel; // 0x0(0x4)
		int32_t InitialDisplayXp; // 0x4(0x4)
		FFortExperienceDelta ChangeInXp; // 0x8(0x24)
	};


	// Struct FortniteUI.FortWeaponBoardDisplaySlot
	// Size: 0x90 (0x90 - 0x0)
	struct FFortWeaponBoardDisplaySlot	
	{
	public:
		FGameplayTag RequiredTag; // 0x0(0x4)
		unsigned char UnknownData00_6[0xC]; // 0x4(0xC) UNKNOWN PROPERTY
		FTransform MeshRelativeTransform; // 0x10(0x60)
		FVector LocalOffsetMultiplier; // 0x70(0x18)
		unsigned char UnknownData01_7[0x8]; // 0x88(0x8) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.FortWeaponBoardDisplaySlotItem
	// Size: 0xA0 (0xA0 - 0x0)
	struct FFortWeaponBoardDisplaySlotItem	
	{
	public:
		FFortWeaponBoardDisplaySlot DisplaySlot; // 0x0(0x90)
		unsigned char UnknownData00_7[0x10]; // 0x90(0x10) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.ProgressiveStageItemInfo
	// Size: 0x60 (0x60 - 0x0)
	struct FProgressiveStageItemInfo	
	{
	public:
		TArray<UFortItemDefinition*> RewardTokens; // 0x0(0x10)
		unsigned char UnknownData00_6[0x10]; // 0x10(0x10) UNKNOWN PROPERTY
		FText OverrideName; // 0x20(0x10)
		TWeakObjectPtr<UMaterialInterface*> TileMaterial; // 0x30(0x20)
		bool bHidden; // 0x50(0x1)
		bool bAllowPreviewStyles; // 0x51(0x1)
		bool bIsLocked; // 0x52(0x1)
		unsigned char UnknownData01_6[0x1]; // 0x53(0x1) UNKNOWN PROPERTY
		int32_t AdditionalMonthsRequired; // 0x54(0x4)
		int32_t StageIndex; // 0x58(0x4)
		unsigned char UnknownData02_7[0x4]; // 0x5C(0x4) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.ProgressiveSetInfo
	// Size: 0x58 (0x58 - 0x0)
	struct FProgressiveSetInfo	
	{
	public:
		FText SetName; // 0x0(0x10)
		TWeakObjectPtr<UMaterialInterface*> TileMaterial; // 0x10(0x20)
		EProgressiveSetProgress SetProgress; // 0x30(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x31(0x3) UNKNOWN PROPERTY
		int32_t UnlockedStagesCount; // 0x34(0x4)
		int32_t TotalStagesCount; // 0x38(0x4)
		unsigned char UnknownData01_7[0x1C]; // 0x3C(0x1C) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.RewardsDataIds
	// Size: 0x20 (0x20 - 0x0)
	struct FRewardsDataIds	
	{
	public:
		TArray<UFortTournamentPayoutThresholdEntry*> ThresholdEntries; // 0x0(0x10)
		unsigned char UnknownData00_7[0x10]; // 0x10(0x10) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.FortAthenaTutorialHighlightInfo
	// Size: 0x40 (0x40 - 0x0)
	struct FFortAthenaTutorialHighlightInfo	
	{
	public:
		FGameplayTag WidgetToHighlight; // 0x0(0x4)
		FGameplayTag ItemHighlightTag; // 0x4(0x4)
		FMargin HighlightMargin; // 0x8(0x10)
		TWeakObjectPtr<UClass*> HighlightWidgetOverride; // 0x18(0x20)
		bool bIsLegacyHighlight; // 0x38(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x39(0x7) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.FortAthenaTutorialScreenInfo
	// Size: 0xE8 (0xE8 - 0x0)
	struct FFortAthenaTutorialScreenInfo	
	{
	public:
		EFortAthenaTutorialSubstep Substep; // 0x0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		FVector2D TextPromptPosition; // 0x8(0x10)
		FVector2D TextPromptPosition_AthenaHUD; // 0x18(0x10)
		FAnchors TextPromptAnchors; // 0x28(0x20)
		FAnchors TextPromptAnchors_AthenaHUD; // 0x48(0x20)
		FText TextPromptText_Touch; // 0x68(0x10)
		FText TextPromptText_Gamepad; // 0x78(0x10)
		FText TextPromptText_TouchLegacy; // 0x88(0x10)
		FDataTableRowHandle ActionWidget_DataTableRow; // 0x98(0x10)
		TArray<FName> KeybindWidget_NameArray; // 0xA8(0x10)
		TArray<FName> KeybindWidget_GamepadNameArray; // 0xB8(0x10)
		bool ForceSingleInputKeybind; // 0xC8(0x1)
		unsigned char UnknownData01_6[0x7]; // 0xC9(0x7) UNKNOWN PROPERTY
		TArray<FFortAthenaTutorialHighlightInfo> HighlightInfo; // 0xD0(0x10)
		bool DisplayNextButton; // 0xE0(0x1)
		bool DisplayTextPromptTarget; // 0xE1(0x1)
		EFortAthenaTutorialScreenExtraWidget ExtraWidget; // 0xE2(0x1)
		unsigned char UnknownData02_7[0x5]; // 0xE3(0x5) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.FortAthenaTutorialStepInfo
	// Size: 0x18 (0x18 - 0x0)
	struct FFortAthenaTutorialStepInfo	
	{
	public:
		EFortAthenaTutorialStep TutorialStep; // 0x0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		TArray<FFortAthenaTutorialScreenInfo> StepScreenInfo; // 0x8(0x10)
	};


	// Struct FortniteUI.FortAthenaTutorialStandaloneStepInfo
	// Size: 0xF0 (0xF0 - 0x0)
	struct FFortAthenaTutorialStandaloneStepInfo	
	{
	public:
		EFortAthenaTutorial_StandaloneStep StandaloneStep; // 0x0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		FFortAthenaTutorialScreenInfo StepScreenInfo; // 0x8(0xE8)
	};


	// Struct FortniteUI.FortAthenaStandaloneTutorialStepInfo
	// Size: 0x10 (0x10 - 0x0)
	struct FFortAthenaStandaloneTutorialStepInfo	
	{
	public:
		TArray<FFortAthenaTutorialScreenInfo> StepScreenInfo; // 0x0(0x10)
	};


	// Struct FortniteUI.UIKitContextMenuActionInfo
	// Size: 0x60 (0x60 - 0x0)
	struct FUIKitContextMenuActionInfo	
	{
	public:
		FText DisplayName; // 0x0(0x10)
		TWeakObjectPtr<UTexture2D*> IconTexture; // 0x10(0x20)
		int32_t SortPriority; // 0x30(0x4)
		bool bIsAvailable; // 0x34(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x35(0x3) UNKNOWN PROPERTY
		FName InteractionNameID; // 0x38(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY
		FDataTableRowHandle Interaction; // 0x40(0x10)
		FDelegateProperty InteractionDelegate; // 0x50(0xC)
		unsigned char UnknownData02_7[0x4]; // 0x5C(0x4) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.PluginUIStateWidgetEntry
	// Size: 0x28 (0x28 - 0x0)
	struct FPluginUIStateWidgetEntry	
	{
	public:
		FName EntryName; // 0x0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr<UClass*> WidgetClass; // 0x8(0x20)
	};


	// Struct FortniteUI.LoadedUIManagerEntry
	// Size: 0x20 (0x20 - 0x0)
	struct FLoadedUIManagerEntry	
	{
	public:
		unsigned char UnknownData00_7[0x18]; // 0x0(0x18) UNKNOWN PROPERTY
		UClass* UIManagerClass; // 0x18(0x8)
	};


	// Struct FortniteUI.RegisteredUIManagerEntry
	// Size: 0x28 (0x28 - 0x0)
	struct FRegisteredUIManagerEntry	
	{
	public:
		unsigned char UnknownData00_7[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
		TWeakObjectPtr<UClass*> UIManagerClass; // 0x8(0x20)
	};


	// Struct FortniteUI.FortRootViewportLayoutInfo
	// Size: 0x18 (0x18 - 0x0)
	struct FFortRootViewportLayoutInfo	
	{
	public:
		TWeakObjectPtr<UFortLocalPlayer*> LocalPlayer; // 0x0(0x8)
		UUserWidget* RootLayout; // 0x8(0x8)
		unsigned char UnknownData00_7[0x8]; // 0x10(0x8) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.FortUIManager_Campaign_Player
	// Size: 0x18 (0x18 - 0x0)
	struct FFortUIManager_Campaign_Player	
	{
	public:
		UFortLocalPlayer* Player; // 0x0(0x8)
		TScriptInterface<Class> Manager; // 0x8(0x10)
	};


	// Struct FortniteUI.LoginStepId
	// Size: 0x20 (0x20 - 0x0)
	struct FLoginStepId	
	{
	public:
		FString StepSource; // 0x0(0x10)
		FString StepName; // 0x10(0x10)
	};


	// Struct FortniteUI.LoginStepHangLimitDefinition
	// Size: 0x28 (0x28 - 0x0)
	struct FLoginStepHangLimitDefinition	
	{
	public:
		FLoginStepId LoginStepId; // 0x0(0x20)
		double HangLimitSec; // 0x20(0x8)
	};


	// Struct FortniteUI.FortVariantFilterContext
	// Size: 0x30 (0x30 - 0x0)
	struct FFortVariantFilterContext	
	{
	public:
		unsigned char UnknownData00_2[0x30]; // 0x0(0x30) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.ItemCachedStrings
	// Size: 0x10 (0x10 - 0x0)
	struct FItemCachedStrings	
	{
	public:
		unsigned char UnknownData00_2[0x10]; // 0x0(0x10) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.HackSearchData
	// Inherited from FTableRowBase
	// Size: 0x10 (0x18 - 0x8)
	struct FHackSearchData : public FTableRowBase	
	{
	public:
		TArray<FString> Tags; // 0x8(0x10)
	};


	// Struct FortniteUI.FortTypedModularLoadoutsCachedItemCount
	// Size: 0x18 (0x18 - 0x0)
	struct FFortTypedModularLoadoutsCachedItemCount	
	{
	public:
		UFortLockerCategoryVM* category; // 0x0(0x8)
		unsigned char UnknownData00_7[0x10]; // 0x8(0x10) UNKNOWN PROPERTY
	};


	// Struct FortniteUI.FortSocialUserNamePackage
	// Size: 0x30 (0x30 - 0x0)
	struct FFortSocialUserNamePackage	
	{
	public:
		FString DisplayName; // 0x0(0x10)
		FString NickName; // 0x10(0x10)
		FString PlatformIconTag; // 0x20(0x10)
	};


	// Struct FortniteUI.ContentPushState
	// Size: 0x3 (0x3 - 0x0)
	struct FContentPushState	
	{
	public:
		bool bHideHeader; // 0x0(0x1)
		bool bHideFooter; // 0x1(0x1)
		bool bHideChatWidget; // 0x2(0x1)
	};

}
