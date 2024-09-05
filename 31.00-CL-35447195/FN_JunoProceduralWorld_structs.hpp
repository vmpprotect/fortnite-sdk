#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: JunoProceduralWorld
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct JunoProceduralWorld.JunoBridgePOISelectorParams
	// Size: 0x18 (0x18 - 0x0)
	struct FJunoBridgePOISelectorParams	
	{
	public:
		FGuid Guid; // 0x0(0x10)
		double RiverWidth; // 0x10(0x8)
	};


	// Struct JunoProceduralWorld.JunoCaveGeneratorWorldsList
	// Size: 0x10 (0x10 - 0x0)
	struct FJunoCaveGeneratorWorldsList	
	{
	public:
		TArray Worlds; // 0x0(0x10)
	};


	// Struct JunoProceduralWorld.JunoCaveGeneratorResourceWorlds
	// Size: 0xB0 (0xB0 - 0x0)
	struct FJunoCaveGeneratorResourceWorlds	
	{
	public:
		TSet ValidBiomes; // 0x0(0x50)
		FGameplayTagQuery SlotTagQuery; // 0x50(0x48)
		TArray Worlds; // 0x98(0x10)
		bool bAlwaysValid; // 0xA8(0x1)
		unsigned char UnknownData01_7[0x7]; // 0xA9(0x7) UNKNOWN PROPERTY
	};


	// Struct JunoProceduralWorld.JunoCaveGeneratorPOIMarker
	// Size: 0x110 (0x110 - 0x0)
	struct FJunoCaveGeneratorPOIMarker	
	{
	public:
		TSet ValidSizes; // 0x0(0x50)
		FGameplayTagQuery POIQuery; // 0x50(0x48)
		float SpawnChance; // 0x98(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x9C(0x4) UNKNOWN PROPERTY
		FTransform Transform; // 0xA0(0x60)
		bool bRandomizeRotation; // 0x100(0x1)
		bool bCenterBounds; // 0x101(0x1)
		unsigned char UnknownData03_7[0xE]; // 0x102(0xE) UNKNOWN PROPERTY
	};


	// Struct JunoProceduralWorld.JunoCaveGeneratorTeleporterMarker
	// Size: 0x80 (0x80 - 0x0)
	struct FJunoCaveGeneratorTeleporterMarker	
	{
	public:
		FTransform Transform; // 0x0(0x60)
		FGameplayTagContainer Tags; // 0x60(0x20)
	};


	// Struct JunoProceduralWorld.JunoCaveGeneratorShellData
	// Inherited from FTableRowBase
	// Size: 0x1E0 (0x1E8 - 0x8)
	struct FJunoCaveGeneratorShellData : public FTableRowBase	
	{
	public:
		FName Name; // 0x8(0x4)
		unsigned char UnknownData07_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FSoftObjectPath World; // 0x10(0x18)
		TSet ValidBiomes; // 0x28(0x50)
		TSet ShellTags; // 0x78(0x50)
		FGameplayTagContainer Tags; // 0xC8(0x20)
		EJunoCaveGeneratorShellType ShellType; // 0xE8(0x1)
		EJunoCaveGeneratorShellSize ShellSize; // 0xE9(0x1)
		unsigned char UnknownData08_6[0x2]; // 0xEA(0x2) UNKNOWN PROPERTY
		int32_t MinDepth; // 0xEC(0x4)
		int32_t MaxDepth; // 0xF0(0x4)
		bool bEnabled; // 0xF4(0x1)
		unsigned char UnknownData09_6[0x3]; // 0xF5(0x3) UNKNOWN PROPERTY
		int32_t Version; // 0xF8(0x4)
		unsigned char UnknownData10_6[0x4]; // 0xFC(0x4) UNKNOWN PROPERTY
		TArray ResourceLevels; // 0x100(0x10)
		TArray VariationResourceLevels; // 0x110(0x10)
		FVector ShellBoundsSize; // 0x120(0x18)
		FVector ShellBoundsCenter; // 0x138(0x18)
		TArray ExitLocations; // 0x150(0x10)
		int32_t NumOfSpawners; // 0x160(0x4)
		unsigned char UnknownData11_6[0x4]; // 0x164(0x4) UNKNOWN PROPERTY
		TArray POIMarkers; // 0x168(0x10)
		TArray TeleporterMarkers; // 0x178(0x10)
		int32_t NumOfAIPointProviders; // 0x188(0x4)
		unsigned char UnknownData12_6[0x4]; // 0x18C(0x4) UNKNOWN PROPERTY
		TMap SupportedLayouts; // 0x190(0x50)
		bool bHasFixedEntrance; // 0x1E0(0x1)
		unsigned char UnknownData13_6[0x3]; // 0x1E1(0x3) UNKNOWN PROPERTY
		int32_t PersistenceVersion; // 0x1E4(0x4)
	};


	// Struct JunoProceduralWorld.JunoCaveRuleChainShell
	// Size: 0x50 (0x50 - 0x0)
	struct FJunoCaveRuleChainShell	
	{
	public:
		FGameplayTagQuery ShellQuery; // 0x0(0x48)
		bool bCanHaveTeleporterExit; // 0x48(0x1)
		bool bCanHavePOIs; // 0x49(0x1)
		bool bCanHaveSecondaryChains; // 0x4A(0x1)
		unsigned char UnknownData01_7[0x5]; // 0x4B(0x5) UNKNOWN PROPERTY
	};


	// Struct JunoProceduralWorld.JunoCaveRuleChain
	// Size: 0x18 (0x18 - 0x0)
	struct FJunoCaveRuleChain	
	{
	public:
		TArray Shells; // 0x0(0x10)
		float SelectionWeight; // 0x10(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct JunoProceduralWorld.JunoCaveRuleChainStage
	// Size: 0x20 (0x20 - 0x0)
	struct FJunoCaveRuleChainStage	
	{
	public:
		TArray PrimaryChains; // 0x0(0x10)
		TArray SecondaryChains; // 0x10(0x10)
	};


	// Struct JunoProceduralWorld.JunoCaveGeneratorRule
	// Inherited from FTableRowBase
	// Size: 0x68 (0x70 - 0x8)
	struct FJunoCaveGeneratorRule : public FTableRowBase	
	{
	public:
		FName Name; // 0x8(0x4)
		int32_t SelectionWeight; // 0xC(0x4)
		bool bEnabled; // 0x10(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x11(0x3) UNKNOWN PROPERTY
		int32_t DepthAttemptThreshold; // 0x14(0x4)
		int32_t MaxNumberOfTeleporters; // 0x18(0x4)
		EJunoCaveGeneratorRuleMode Mode; // 0x1C(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x1D(0x3) UNKNOWN PROPERTY
		int32_t MinPrimaryChainLength; // 0x20(0x4)
		int32_t MaxPrimaryChainLength; // 0x24(0x4)
		UClass SpecialEndingTeleporterClass; // 0x28(0x8)
		float PrimaryChainHallwayChance; // 0x30(0x4)
		int32_t MinNumberOfSecondaryChains; // 0x34(0x4)
		int32_t MaxNumberOfSecondaryChains; // 0x38(0x4)
		int32_t MinSecondaryChainLength; // 0x3C(0x4)
		int32_t MaxSecondaryChainLength; // 0x40(0x4)
		int32_t MinStartingDepthOfSecondaryChains; // 0x44(0x4)
		int32_t MaxStartingDepthOfSecondaryChains; // 0x48(0x4)
		float SecondaryChainHallwayChance; // 0x4C(0x4)
		TArray Stages; // 0x50(0x10)
		int32_t MaxNumberOfPOIs; // 0x60(0x4)
		float BasePOISpawnChance; // 0x64(0x4)
		bool bAllowPOIsInTeleporterRooms; // 0x68(0x1)
		unsigned char UnknownData05_7[0x7]; // 0x69(0x7) UNKNOWN PROPERTY
	};


	// Struct JunoProceduralWorld.JunoCaveGeneratorTypeEntrancePOI
	// Size: 0x50 (0x50 - 0x0)
	struct FJunoCaveGeneratorTypeEntrancePOI	
	{
	public:
		FGameplayTagQuery POIQuery; // 0x0(0x48)
		FName RuleName; // 0x48(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x4C(0x4) UNKNOWN PROPERTY
	};


	// Struct JunoProceduralWorld.JunoCaveGeneratorTypeTeleporterRule
	// Size: 0x60 (0x60 - 0x0)
	struct FJunoCaveGeneratorTypeTeleporterRule	
	{
	public:
		EJunoCaveGeneratorTypeTeleporterRuleType Type; // 0x0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		FGameplayTagQuery MarkerQuery; // 0x8(0x48)
		UClass StartTeleporterClass; // 0x50(0x8)
		UClass EndTeleporterClass; // 0x58(0x8)
	};


	// Struct JunoProceduralWorld.JunoCaveGeneratorTypeData
	// Inherited from FTableRowBase
	// Size: 0x1D0 (0x1D8 - 0x8)
	struct FJunoCaveGeneratorTypeData : public FTableRowBase	
	{
	public:
		FName TypeName; // 0x8(0x4)
		bool bEnabled; // 0xC(0x1)
		unsigned char UnknownData02_6[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
		TArray Rules; // 0x10(0x10)
		TArray SharedRuleIds; // 0x20(0x10)
		EJunoCaveType Type; // 0x30(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x31(0x7) UNKNOWN PROPERTY
		TSet ValidBiomes; // 0x38(0x50)
		FGameplayTagQuery SlotTagQuery; // 0x88(0x48)
		TSet ShellTags; // 0xD0(0x50)
		FGameplayTagQuery ShellQuery; // 0x120(0x48)
		TSet LayoutTags; // 0x168(0x50)
		TArray EntrancePOIs; // 0x1B8(0x10)
		TArray TeleporterRules; // 0x1C8(0x10)
	};


	// Struct JunoProceduralWorld.JunoCaveGeneratorPCGResourceMap
	// Size: 0x50 (0x50 - 0x0)
	struct FJunoCaveGeneratorPCGResourceMap	
	{
	public:
		TMap ResourceWeight; // 0x0(0x50)
	};


	// Struct JunoProceduralWorld.JunoCaveGeneratorThemeEntry
	// Inherited from FTableRowBase
	// Size: 0x1A0 (0x1A8 - 0x8)
	struct FJunoCaveGeneratorThemeEntry : public FTableRowBase	
	{
	public:
		TWeakObjectPtr CaveMaterial; // 0x8(0x20)
		TWeakObjectPtr DestructibleCaveMaterial; // 0x28(0x20)
		TWeakObjectPtr ThemeResourceDataTable; // 0x48(0x20)
		TWeakObjectPtr POIDataTable; // 0x68(0x20)
		TMap PCGTypeWeights; // 0x88(0x50)
		bool bEnabled; // 0xD8(0x1)
		unsigned char UnknownData03_6[0x3]; // 0xD9(0x3) UNKNOWN PROPERTY
		FName Name; // 0xDC(0x4)
		TSet Biomes; // 0xE0(0x50)
		FGameplayTagQuery SlotTagQuery; // 0x130(0x48)
		bool bExportTheme; // 0x178(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x179(0x3) UNKNOWN PROPERTY
		FName ThemeExportName; // 0x17C(0x4)
		FName ThemeExportPath; // 0x180(0x4)
		unsigned char UnknownData05_6[0x4]; // 0x184(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr TeleporterClass; // 0x188(0x20)
	};


	// Struct JunoProceduralWorld.JunoCaveGeneratorData
	// Inherited from FTableRowBase
	// Size: 0x30 (0x38 - 0x8)
	struct FJunoCaveGeneratorData : public FTableRowBase	
	{
	public:
		TArray Shells; // 0x8(0x10)
		TArray Themes; // 0x18(0x10)
		TArray Types; // 0x28(0x10)
	};


	// Struct JunoProceduralWorld.JunoCaveGeneratorShellMetadata
	// Size: 0x8 (0x8 - 0x0)
	struct FJunoCaveGeneratorShellMetadata	
	{
	public:
		unsigned char UnknownData01_2[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct JunoProceduralWorld.JunoCaveGeneratorResult
	// Size: 0x68 (0x68 - 0x0)
	struct FJunoCaveGeneratorResult	
	{
	public:
		TArray Shells; // 0x0(0x10)
		unsigned char UnknownData02_6[0x20]; // 0x10(0x20) UNKNOWN PROPERTY
		TArray POIs; // 0x30(0x10)
		FName RuleName; // 0x40(0x4)
		FName ThemeName; // 0x44(0x4)
		FName TypeName; // 0x48(0x4)
		FDataRegistryId CaveEntrancePOI; // 0x4C(0x8)
		int32_t PrimaryChainDepth; // 0x54(0x4)
		int32_t NumSecondaryChainsCreated; // 0x58(0x4)
		int32_t SecondaryChainMaxDepth; // 0x5C(0x4)
		int32_t NumPOIsCreated; // 0x60(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x64(0x4) UNKNOWN PROPERTY
	};


	// Struct JunoProceduralWorld.JunoPOIData
	// Size: 0x140 (0x140 - 0x0)
	struct FJunoPOIData	
	{
	public:
		FTransform Transform; // 0x0(0x60)
		FVector Extent; // 0x60(0x18)
		FVector BoundsOffset; // 0x78(0x18)
		TArray Levels; // 0x90(0x10)
		TArray HLODLevels; // 0xA0(0x10)
		FJunoPOIInstanceData InstanceData; // 0xB0(0x20)
		FGameplayTagContainer EncounterCapabilities; // 0xD0(0x20)
		int32_t EncounterVariantCount; // 0xF0(0x4)
		unsigned char UnknownData02_6[0x4]; // 0xF4(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr EncounterCategoryTable; // 0xF8(0x20)
		FName RegistryItemName; // 0x118(0x4)
		int32_t PersistenceVersion; // 0x11C(0x4)
		TArray Teleporters; // 0x120(0x10)
		EJunoPOISlotState SlotState; // 0x130(0x1)
		unsigned char UnknownData03_7[0xF]; // 0x131(0xF) UNKNOWN PROPERTY
	};


	// Struct JunoProceduralWorld.PCGJunoWorldTilePOITeleporter
	// Size: 0x70 (0x70 - 0x0)
	struct FPCGJunoWorldTilePOITeleporter	
	{
	public:
		UClass TeleporterClass; // 0x0(0x8)
		unsigned char UnknownData01_6[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FTransform Offset; // 0x10(0x60)
	};


	// Struct JunoProceduralWorld.JunoPOIInstanceData
	// Size: 0x20 (0x20 - 0x0)
	struct FJunoPOIInstanceData	
	{
	public:
		TArray Tags; // 0x0(0x10)
		EJunoBiome SlotBiome; // 0x10(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x11(0x3) UNKNOWN PROPERTY
		FName CaveTypeName; // 0x14(0x4)
		FName CaveRuleName; // 0x18(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x1C(0x4) UNKNOWN PROPERTY
	};


	// Struct JunoProceduralWorld.JunoGeneratedCaveShellData
	// Size: 0x110 (0x110 - 0x0)
	struct FJunoGeneratedCaveShellData	
	{
	public:
		FTransform Transform; // 0x0(0x60)
		FVector Extent; // 0x60(0x18)
		FVector BoundsOffset; // 0x78(0x18)
		FName ShellID; // 0x90(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x94(0x4) UNKNOWN PROPERTY
		TArray Levels; // 0x98(0x10)
		FJunoCaveShellInstanceData InstanceData; // 0xA8(0x60)
		int32_t PersistenceVersion; // 0x108(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x10C(0x4) UNKNOWN PROPERTY
	};


	// Struct JunoProceduralWorld.JunoCaveShellInstanceData
	// Size: 0x60 (0x60 - 0x0)
	struct FJunoCaveShellInstanceData	
	{
	public:
		int32_t ExitsUsedMask; // 0x0(0x4)
		int32_t Depth; // 0x4(0x4)
		int32_t Tier; // 0x8(0x4)
		int32_t ChainID; // 0xC(0x4)
		EJunoCaveType Type; // 0x10(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x11(0x3) UNKNOWN PROPERTY
		FName ThemeName; // 0x14(0x4)
		TWeakObjectPtr ThemeObject; // 0x18(0x20)
		FName BranchParentShellID; // 0x38(0x4)
		unsigned char UnknownData04_6[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY
		double EntranceZ; // 0x40(0x8)
		EJunoBiome EntranceBiome; // 0x48(0x1)
		unsigned char UnknownData05_6[0x7]; // 0x49(0x7) UNKNOWN PROPERTY
		TArray Teleporters; // 0x50(0x10)
	};


	// Struct JunoProceduralWorld.JunoCaveTeleporterLink
	// Size: 0xE0 (0xE0 - 0x0)
	struct FJunoCaveTeleporterLink	
	{
	public:
		FTransform SurfaceTransform; // 0x0(0x60)
		FTransform CaveTransform; // 0x60(0x60)
		UClass SurfaceTeleporterClass; // 0xC0(0x8)
		UClass CaveTeleporterClass; // 0xC8(0x8)
		FGuid SurfacePOISlotGuid; // 0xD0(0x10)
	};


	// Struct JunoProceduralWorld.JunoCaveConditionalTags
	// Size: 0x28 (0x28 - 0x0)
	struct FJunoCaveConditionalTags	
	{
	public:
		EJunoCaveType Type; // 0x0(0x1)
		EJunoBiome Biome; // 0x1(0x1)
		unsigned char UnknownData01_6[0x6]; // 0x2(0x6) UNKNOWN PROPERTY
		FGameplayTagContainer TagsToApply; // 0x8(0x20)
	};


	// Struct JunoProceduralWorld.JunoCaveShellGameplayVolumeTeleporterLink
	// Size: 0x10 (0x10 - 0x0)
	struct FJunoCaveShellGameplayVolumeTeleporterLink	
	{
	public:
		AJunoTeleporter SurfaceTeleporter; // 0x0(0x8)
		AJunoTeleporter CaveTeleporter; // 0x8(0x8)
	};


	// Struct JunoProceduralWorld.JunoCompressedTransforms
	// Size: 0x230 (0x230 - 0x0)
	struct FJunoCompressedTransforms	
	{
	public:
		unsigned char UnknownData01_2[0x230]; // 0x0(0x230) UNKNOWN PROPERTY
	};


	// Struct JunoProceduralWorld.JunoGenerateTileParams
	// Size: 0x18 (0x18 - 0x0)
	struct FJunoGenerateTileParams	
	{
	public:
		FString TilesToGenerate; // 0x0(0x10)
		TWeakObjectPtr Commandlet; // 0x10(0x8)
	};


	// Struct JunoProceduralWorld.JunoHLODMapActorRedirectorsEntry
	// Size: 0x58 (0x58 - 0x0)
	struct FJunoHLODMapActorRedirectorsEntry	
	{
	public:
		FName MapName; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FJunoActorRedirectors ActorRedirectors; // 0x8(0x50)
	};


	// Struct JunoProceduralWorld.JunoInstancedActorSettings
	// Inherited from FInstancedActorsSettings -> FTableRowBase
	// Size: 0x8 (0xA8 - 0xA0)
	struct FJunoInstancedActorSettings : public FInstancedActorsSettings	
	{
	public:
		bool bOverride_bCanBeBuiltUpon : 1; // 0xA0:0(0x1)
		bool bCanBeBuiltUpon; // 0xA1(0x1)
		unsigned char UnknownData01_7[0x6]; // 0xA2(0x6) UNKNOWN PROPERTY
	};


	// Struct JunoProceduralWorld.JunoInstancedActorClassSettings
	// Inherited from FInstancedActorsClassSettingsBase -> FTableRowBase
	// Size: 0xA8 (0xC0 - 0x18)
	struct FJunoInstancedActorClassSettings : public FInstancedActorsClassSettingsBase	
	{
	public:
		FJunoInstancedActorSettings OverrideSettings; // 0x18(0xA8)
	};


	// Struct JunoProceduralWorld.JunoLifecyclePhase
	// Size: 0xB0 (0xB0 - 0x0)
	struct FJunoLifecyclePhase	
	{
	public:
		FScalableFloat duration; // 0x0(0x28)
		bool bOverrideMesh; // 0x28(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x29(0x7) UNKNOWN PROPERTY
		TWeakObjectPtr Mesh; // 0x30(0x20)
		bool bOverrideMaterials; // 0x50(0x1)
		unsigned char UnknownData05_6[0x7]; // 0x51(0x7) UNKNOWN PROPERTY
		TArray Materials; // 0x58(0x10)
		bool bOverrideCollisionEnabled; // 0x68(0x1)
		TEnumAsByte CollisionEnabled; // 0x69(0x1)
		bool bOverrideHealth; // 0x6A(0x1)
		unsigned char UnknownData06_6[0x5]; // 0x6B(0x5) UNKNOWN PROPERTY
		FScalableFloat Health; // 0x70(0x28)
		FGameplayTag tag; // 0x98(0x4)
		unsigned char UnknownData07_6[0x4]; // 0x9C(0x4) UNKNOWN PROPERTY
		FInstancedStruct CustomData; // 0xA0(0x10)
	};


	// Struct JunoProceduralWorld.JunoLifecyclePhaseFragment
	// Inherited from FMassFragment
	// Size: 0x2 (0x2 - 0x0)
	struct FJunoLifecyclePhaseFragment : public FMassFragment	
	{
	public:
		char PrevPhaseIndex; // 0x0(0x1)
		char CurrentPhaseIndex; // 0x1(0x1)
	};


	// Struct JunoProceduralWorld.JunoLifecyclePhaseTimeFragment
	// Inherited from FMassFragment
	// Size: 0x4 (0x4 - 0x0)
	struct FJunoLifecyclePhaseTimeFragment : public FMassFragment	
	{
	public:
		float CurrentPhaseTimeElapsed; // 0x0(0x4)
	};


	// Struct JunoProceduralWorld.JunoLifecycleParameters
	// Inherited from FMassConstSharedFragment
	// Size: 0x18 (0x18 - 0x0)
	struct FJunoLifecycleParameters : public FMassConstSharedFragment	
	{
	public:
		TArray LifecyclePhases; // 0x0(0x10)
		unsigned char UnknownData02_6[0x1]; // 0x10(0x1) UNKNOWN PROPERTY
		bool bRepeatLifecyclePhases; // 0x11(0x1)
		unsigned char UnknownData03_7[0x6]; // 0x12(0x6) UNKNOWN PROPERTY
	};


	// Struct JunoProceduralWorld.JunoLifecycleVisualizationsSharedFragment
	// Inherited from FMassSharedFragment
	// Size: 0x10 (0x10 - 0x0)
	struct FJunoLifecycleVisualizationsSharedFragment : public FMassSharedFragment	
	{
	public:
		TArray LifecyclePhaseVisualizations; // 0x0(0x10)
	};


	// Struct JunoProceduralWorld.JunoPCGVolumePointDataFeatures
	// Size: 0xC (0xC - 0x0)
	struct FJunoPCGVolumePointDataFeatures	
	{
	public:
		bool bRotationX; // 0x0(0x1)
		bool bRotationY; // 0x1(0x1)
		bool bRotationZ; // 0x2(0x1)
		bool bSpawnActorPathAttribute; // 0x3(0x1)
		FName SpawnActorPathAttributeName; // 0x4(0x4)
		FName SpawnActorRepresentationAttributeName; // 0x8(0x4)
	};


	// Struct JunoProceduralWorld.JunoCompressedPoint
	// Size: 0xC (0xC - 0x0)
	struct FJunoCompressedPoint	
	{
	public:
		uint16_t X; // 0x0(0x2)
		uint16_t Y; // 0x2(0x2)
		uint16_t Z; // 0x4(0x2)
		char RotationX; // 0x6(0x1)
		char RotationY; // 0x7(0x1)
		char RotationZ; // 0x8(0x1)
		unsigned char UnknownData01_6[0x1]; // 0x9(0x1) UNKNOWN PROPERTY
		uint16_t ActorSpawnInfoIndex; // 0xA(0x2)
	};


	// Struct JunoProceduralWorld.JunoCompressedActorSpawnInfo
	// Size: 0x18 (0x18 - 0x0)
	struct FJunoCompressedActorSpawnInfo	
	{
	public:
		FString ActorToSpawn; // 0x0(0x10)
		EJunoRepresentation Representation; // 0x10(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x11(0x7) UNKNOWN PROPERTY
	};


	// Struct JunoProceduralWorld.JunoCompressedPointList
	// Size: 0x80 (0x80 - 0x0)
	struct FJunoCompressedPointList	
	{
	public:
		FVector BoundsMin; // 0x0(0x18)
		FVector BoundsMax; // 0x18(0x18)
		FVector3f RotationMin; // 0x30(0xC)
		FVector3f RotationMax; // 0x3C(0xC)
		TArray Points; // 0x48(0x10)
		uint16_t HighResPosCount; // 0x58(0x2)
		unsigned char UnknownData02_6[0x2]; // 0x5A(0x2) UNKNOWN PROPERTY
		int32_t Seed; // 0x5C(0x4)
		TArray ActorSpawnInfo; // 0x60(0x10)
		FJunoPCGVolumePointDataFeatures Features; // 0x70(0xC)
		unsigned char UnknownData03_7[0x4]; // 0x7C(0x4) UNKNOWN PROPERTY
	};


	// Struct JunoProceduralWorld.JunoPOIBucketWeightEntry
	// Size: 0xC (0xC - 0x0)
	struct FJunoPOIBucketWeightEntry	
	{
	public:
		FGameplayTag POITag; // 0x0(0x4)
		float EncounterWeight; // 0x4(0x4)
		float CosmeticWeight; // 0x8(0x4)
	};


	// Struct JunoProceduralWorld.JunoPOIPreselectorParams
	// Inherited from FTableRowBase
	// Size: 0xC0 (0xC8 - 0x8)
	struct FJunoPOIPreselectorParams : public FTableRowBase	
	{
	public:
		float NearWorldStartCullNormalDistance; // 0x8(0x4)
		float NearWorldStartCullCosmeticDistance; // 0xC(0x4)
		float NearWorldStartCullCaveEntranceDistance; // 0x10(0x4)
		float NearWorldStartCullRareDistance; // 0x14(0x4)
		int32_t MaxPOIs; // 0x18(0x4)
		float POISlotDensity; // 0x1C(0x4)
		float CaveEntranceSlotDensity; // 0x20(0x4)
		int32_t MaxCaveEntrances; // 0x24(0x4)
		int32_t MaxOneEntranceCaves; // 0x28(0x4)
		int32_t MaxTwoEntranceCaves; // 0x2C(0x4)
		int32_t MaxThreeEntranceCaves; // 0x30(0x4)
		float OneEntranceCaveSelectionWeight; // 0x34(0x4)
		float TwoEntranceCaveSelectionWeight; // 0x38(0x4)
		float ThreeEntranceCaveSelectionWeight; // 0x3C(0x4)
		float MinDistanceBetweenCaveEntrances; // 0x40(0x4)
		float MinDistanceBetweenNormalPOIs; // 0x44(0x4)
		float MinDistanceBetweenCosmeticPOIs; // 0x48(0x4)
		int32_t MinDesired8x8NonCosmeticSlots; // 0x4C(0x4)
		int32_t PreselectionAttempts; // 0x50(0x4)
		bool bCheckForUGC; // 0x54(0x1)
		bool bEnabled; // 0x55(0x1)
		unsigned char UnknownData02_6[0x2]; // 0x56(0x2) UNKNOWN PROPERTY
		TArray BucketWeights; // 0x58(0x10)
		int32_t BucketWeightSelectionPriority; // 0x68(0x4)
		int32_t WeightedPOISelectionDepth; // 0x6C(0x4)
		TSet ValidCaveSlotBiomes; // 0x70(0x50)
		bool bMaximizeCaveBiomeVariety; // 0xC0(0x1)
		unsigned char UnknownData03_7[0x7]; // 0xC1(0x7) UNKNOWN PROPERTY
	};


	// Struct JunoProceduralWorld.JunoPOISelectorTeleporterClass
	// Size: 0x10 (0x10 - 0x0)
	struct FJunoPOISelectorTeleporterClass	
	{
	public:
		EJunoBiome Biome; // 0x0(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		UClass Teleporter; // 0x8(0x8)
	};


	// Struct JunoProceduralWorld.JunoPOISelectorParams
	// Size: 0x30 (0x30 - 0x0)
	struct FJunoPOISelectorParams	
	{
	public:
		FGuid Guid; // 0x0(0x10)
		EJunoPOISize Size; // 0x10(0x1)
		EJunoBiome Biome; // 0x11(0x1)
		unsigned char UnknownData01_6[0x6]; // 0x12(0x6) UNKNOWN PROPERTY
		TArray SlotTags; // 0x18(0x10)
		AActor PoiManager; // 0x28(0x8)
	};


	// Struct JunoProceduralWorld.JunoPOIRegistryItem
	// Size: 0x208 (0x208 - 0x0)
	struct FJunoPOIRegistryItem	
	{
	public:
		FName Key; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FPCGJunoWorldTilePOI Value; // 0x8(0x200)
	};


	// Struct JunoProceduralWorld.PCGJunoWorldTilePOI
	// Inherited from FTableRowBase
	// Size: 0x1F8 (0x200 - 0x8)
	struct FPCGJunoWorldTilePOI : public FTableRowBase	
	{
	public:
		TWeakObjectPtr WorldAsset; // 0x8(0x20)
		TWeakObjectPtr HLODWorldAsset; // 0x28(0x20)
		bool bEnabled; // 0x48(0x1)
		EJunoPOISize Size; // 0x49(0x1)
		unsigned char UnknownData05_6[0x6]; // 0x4A(0x6) UNKNOWN PROPERTY
		TSet SlotSizes; // 0x50(0x50)
		FVector BoundsSize; // 0xA0(0x18)
		TSet Biomes; // 0xB8(0x50)
		TSet Tags; // 0x108(0x50)
		EJunoWorldTilePOIType Type; // 0x158(0x1)
		unsigned char UnknownData06_6[0x7]; // 0x159(0x7) UNKNOWN PROPERTY
		FGameplayTagContainer EncounterCapabilities; // 0x160(0x20)
		bool bCanRerollEncounters; // 0x180(0x1)
		unsigned char UnknownData07_6[0x7]; // 0x181(0x7) UNKNOWN PROPERTY
		FScalableFloat RerollCooldownTimeOverride; // 0x188(0x28)
		int32_t EncounterVariantCount; // 0x1B0(0x4)
		unsigned char UnknownData08_6[0x4]; // 0x1B4(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr EncounterCategoryTable; // 0x1B8(0x20)
		TArray Teleporters; // 0x1D8(0x10)
		TArray PersistenceMigrations; // 0x1E8(0x10)
		EJunoPOIDistributionMethod DistributionMethod; // 0x1F8(0x1)
		unsigned char UnknownData09_7[0x7]; // 0x1F9(0x7) UNKNOWN PROPERTY
	};


	// Struct JunoProceduralWorld.JunoRandomTableKeysIterator
	// Size: 0x18 (0x18 - 0x0)
	struct FJunoRandomTableKeysIterator	
	{
	public:
		unsigned char UnknownData01_2[0x18]; // 0x0(0x18) UNKNOWN PROPERTY
	};


	// Struct JunoProceduralWorld.JunoCreateLevelWorldPartitionGrid
	// Size: 0x38 (0x38 - 0x0)
	struct FJunoCreateLevelWorldPartitionGrid	
	{
	public:
		FName Name; // 0x0(0x4)
		int32_t CellSize; // 0x4(0x4)
		float LoadingRange; // 0x8(0x4)
		bool bBlockOnSlowStreaming; // 0xC(0x1)
		unsigned char UnknownData02_6[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
		FVector2D Origin; // 0x10(0x10)
		FLinearColor DebugColor; // 0x20(0x10)
		int32_t Priority; // 0x30(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
	};


	// Struct JunoProceduralWorld.JunoCreateLevelParams
	// Size: 0x60 (0x60 - 0x0)
	struct FJunoCreateLevelParams	
	{
	public:
		FString LevelPackageName; // 0x0(0x10)
		TArray Actors; // 0x10(0x10)
		TArray WorldPartitionGrids; // 0x20(0x10)
		UHLODLayer WorldPartitionDefaultHLODLayer; // 0x30(0x8)
		EWorldPartitionServerStreamingMode WorldPartitionServerStreamingMode; // 0x38(0x1)
		EWorldPartitionServerStreamingOutMode WorldPartitionServerStreamingOutMode; // 0x39(0x1)
		unsigned char UnknownData01_6[0x6]; // 0x3A(0x6) UNKNOWN PROPERTY
		TWeakObjectPtr TemplateWorld; // 0x40(0x20)
	};


	// Struct JunoProceduralWorld.JunoTerrainGenerationConfiguration
	// Size: 0x70 (0x70 - 0x0)
	struct FJunoTerrainGenerationConfiguration	
	{
	public:
		float GenerateStart; // 0x0(0x4)
		float GenerateRemove; // 0x4(0x4)
		unsigned char UnknownData02_6[0x20]; // 0x8(0x20) UNKNOWN PROPERTY
		double GenerationFlushDistance; // 0x28(0x8)
		bool InfiniteRange; // 0x30(0x1)
		bool EnabledServer; // 0x31(0x1)
		bool EnabledClient; // 0x32(0x1)
		unsigned char UnknownData03_7[0x3D]; // 0x33(0x3D) UNKNOWN PROPERTY
	};


	// Struct JunoProceduralWorld.JunoTerrainWaterInformation
	// Size: 0xC0 (0xC0 - 0x0)
	struct FJunoTerrainWaterInformation	
	{
	public:
		FVector Location; // 0x0(0x18)
		float WaterSurfaceHeight; // 0x18(0x4)
		float TerrainHeight; // 0x1C(0x4)
		float WaterDepth; // 0x20(0x4)
		unsigned char UnknownData03_6[0x64]; // 0x24(0x64) UNKNOWN PROPERTY
		EJunoBiomeHabitat WaterType; // 0x88(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x89(0x7) UNKNOWN PROPERTY
		FVector Direction; // 0x90(0x18)
		float Distance; // 0xA8(0x4)
		int32_t DirectionMaskIndex; // 0xAC(0x4)
		bool bWasNearMiss; // 0xB0(0x1)
		bool bFoundWater; // 0xB1(0x1)
		unsigned char UnknownData05_6[0x2]; // 0xB2(0x2) UNKNOWN PROPERTY
		float NearMissEstimatedDistance; // 0xB4(0x4)
		AWaterBody FoundWaterBody; // 0xB8(0x8)
	};


	// Struct JunoProceduralWorld.EventTilesArray
	// Size: 0x10 (0x10 - 0x0)
	struct FEventTilesArray	
	{
	public:
		TArray Tiles; // 0x0(0x10)
	};


	// Struct JunoProceduralWorld.JunoTileGridPersistenceFeatureData_InGameClass_PersistentInfo_v0
	// Size: 0x190 (0x190 - 0x0)
	struct FJunoTileGridPersistenceFeatureData_InGameClass_PersistentInfo_v0	
	{
	public:
		TMap Tiles; // 0x0(0x50)
		TMap Events; // 0x50(0x50)
		TMap ReservedAreas; // 0xA0(0x50)
		TMap PerCellRarePOICounts; // 0xF0(0x50)
		TMap PerCellAdditionalPOIs; // 0x140(0x50)
	};


	// Struct JunoProceduralWorld.JunoAdditionalPOIAssignmentData
	// Size: 0x10 (0x10 - 0x0)
	struct FJunoAdditionalPOIAssignmentData	
	{
	public:
		TArray AdditionalPOIs; // 0x0(0x10)
	};


	// Struct JunoProceduralWorld.JunoPOICellDistributionPersistentData
	// Size: 0x50 (0x50 - 0x0)
	struct FJunoPOICellDistributionPersistentData	
	{
	public:
		TMap POICount; // 0x0(0x50)
	};


	// Struct JunoProceduralWorld.JunoReservedAreaPersistentData
	// Size: 0x50 (0x50 - 0x0)
	struct FJunoReservedAreaPersistentData	
	{
	public:
		TMap Tiles; // 0x0(0x50)
	};


	// Struct JunoProceduralWorld.JunoTileGridPersistenceFeatureData_InGameClass_PersistentInfo_v1
	// Size: 0x198 (0x198 - 0x0)
	struct FJunoTileGridPersistenceFeatureData_InGameClass_PersistentInfo_v1	
	{
	public:
		TMap Tiles; // 0x0(0x50)
		TMap Events; // 0x50(0x50)
		FJunoTileGridSaveData_v1 TileGridSaveData; // 0xA0(0xF8)
	};


	// Struct JunoProceduralWorld.JunoTileGridSaveData_v1
	// Size: 0xF8 (0xF8 - 0x0)
	struct FJunoTileGridSaveData_v1	
	{
	public:
		TMap ReservedAreas; // 0x0(0x50)
		TMap PerCellRarePOICounts; // 0x50(0x50)
		TMap PerCellAdditionalPOIs; // 0xA0(0x50)
		bool bHasAssignedNewGamePOIs; // 0xF0(0x1)
		unsigned char UnknownData01_7[0x7]; // 0xF1(0x7) UNKNOWN PROPERTY
	};


	// Struct JunoProceduralWorld.JunoTileGridPersistenceFeatureData_InGameClass_PersistentInfo
	// Size: 0x198 (0x198 - 0x0)
	struct FJunoTileGridPersistenceFeatureData_InGameClass_PersistentInfo	
	{
	public:
		TMap Tiles; // 0x0(0x50)
		TMap Events; // 0x50(0x50)
		FJunoTileGridSaveData TileGridSaveData; // 0xA0(0xF8)
	};


	// Struct JunoProceduralWorld.JunoTileGridSaveData
	// Size: 0xF8 (0xF8 - 0x0)
	struct FJunoTileGridSaveData	
	{
	public:
		TMap ReservedAreas; // 0x0(0x50)
		TMap PerCellLayerDistribution; // 0x50(0x50)
		TMap PerCellAdditionalPOIs; // 0xA0(0x50)
		bool bHasAssignedNewGamePOIs; // 0xF0(0x1)
		unsigned char UnknownData01_7[0x7]; // 0xF1(0x7) UNKNOWN PROPERTY
	};


	// Struct JunoProceduralWorld.JunoPOILayerDistributionData
	// Size: 0x50 (0x50 - 0x0)
	struct FJunoPOILayerDistributionData	
	{
	public:
		TMap Layers; // 0x0(0x50)
	};


	// Struct JunoProceduralWorld.JunoTileSelector
	// Inherited from FTableRowBase
	// Size: 0x38 (0x40 - 0x8)
	struct FJunoTileSelector : public FTableRowBase	
	{
	public:
		int64_t Priority; // 0x8(0x8)
		int64_t TileSize; // 0x10(0x8)
		int64_t WorldSize; // 0x18(0x8)
		int64_t GenerateWorldDiameter; // 0x20(0x8)
		FIntVector WorldOriginTileOffset; // 0x28(0xC)
		unsigned char UnknownData01_6[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
		UClass TileSelector; // 0x38(0x8)
	};


	// Struct JunoProceduralWorld.JunoWaterSplineInjectorParams
	// Size: 0x130 (0x130 - 0x0)
	struct FJunoWaterSplineInjectorParams	
	{
	public:
		FSplineGuide SplineGuide; // 0x0(0x110)
		int32_t Seed; // 0x110(0x4)
		bool bAllowRandomYaw; // 0x114(0x1)
		bool bAllowRandomScale; // 0x115(0x1)
		unsigned char UnknownData02_6[0x2]; // 0x116(0x2) UNKNOWN PROPERTY
		FVector2D ScaleRange; // 0x118(0x10)
		unsigned char UnknownData03_7[0x8]; // 0x128(0x8) UNKNOWN PROPERTY
	};


	// Struct JunoProceduralWorld.SplineGuide
	// Size: 0x110 (0x110 - 0x0)
	struct FSplineGuide	
	{
	public:
		FSplineCurves SplineCurves; // 0x0(0x68)
		bool bIsClosedLoop; // 0x68(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x69(0x7) UNKNOWN PROPERTY
		FTransform Transform; // 0x70(0x60)
		FSplineCurvesInfo SplineCurvesInfo; // 0xD0(0x18)
		bool bAllowRandomYaw; // 0xE8(0x1)
		bool bAllowRandomScaleVariation; // 0xE9(0x1)
		unsigned char UnknownData04_6[0x6]; // 0xEA(0x6) UNKNOWN PROPERTY
		FVector2D ScaleVariation; // 0xF0(0x10)
		UClass GuideClass; // 0x100(0x8)
		unsigned char UnknownData05_7[0x8]; // 0x108(0x8) UNKNOWN PROPERTY
	};


	// Struct JunoProceduralWorld.SplineCurvesInfo
	// Size: 0x18 (0x18 - 0x0)
	struct FSplineCurvesInfo	
	{
	public:
		FString Name; // 0x0(0x10)
		uint32_t PointsNum; // 0x10(0x4)
		float Length; // 0x14(0x4)
	};


	// Struct JunoProceduralWorld.JunoWorldPartitionRuntimeHashType
	// Size: 0x4 (0x4 - 0x0)
	struct FJunoWorldPartitionRuntimeHashType	
	{
	public:
		unsigned char UnknownData01_2[0x4]; // 0x0(0x4) UNKNOWN PROPERTY
	};


	// Struct JunoProceduralWorld.JunoWorldPartitionLevelPersistentData
	// Size: 0x58 (0x58 - 0x0)
	struct FJunoWorldPartitionLevelPersistentData	
	{
	public:
		FJunoWorldPartitionRuntimeHashType RuntimeHashType; // 0x0(0x4)
		FJunoWorldPartitionRuntimeHashType RuntimeHashMigrationType; // 0x4(0x4)
		TSet RuntimeHashMigrationUpgradedCellNames; // 0x8(0x50)
	};


	// Struct JunoProceduralWorld.JunoWorldPartitionPersistentDataHandler
	// Size: 0x50 (0x50 - 0x0)
	struct FJunoWorldPartitionPersistentDataHandler	
	{
	public:
		TMap WPLevelPersistentDatas; // 0x0(0x50)
	};


	// Struct JunoProceduralWorld.JunoWorldTileStreamingLevelEntry
	// Inherited from FFastArraySerializerItem
	// Size: 0xAC (0xB8 - 0xC)
	struct FJunoWorldTileStreamingLevelEntry : public FFastArraySerializerItem	
	{
	public:
		unsigned char UnknownData01_3[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		FJunoWorldTileStreamingLevel Value; // 0x10(0xA8)
	};


	// Struct JunoProceduralWorld.JunoWorldTileStreamingLevel
	// Size: 0xA8 (0xA8 - 0x0)
	struct FJunoWorldTileStreamingLevel	
	{
	public:
		TWeakObjectPtr WorldAsset; // 0x0(0x20)
		TWeakObjectPtr HLODWorldAsset; // 0x20(0x20)
		FVector Position; // 0x40(0x18)
		FVector3f BoundsOffset; // 0x58(0xC)
		FVector3f BoundsExtent; // 0x64(0xC)
		FGuid Guid; // 0x70(0x10)
		FGuid PlayspaceGuid; // 0x80(0x10)
		FGuid WorldTileGuid; // 0x90(0x10)
		int32_t PlayspaceLevelKey; // 0xA0(0x4)
		EJunoWorldTileInjectedLevelType Type; // 0xA4(0x1)
		char RotationBits; // 0xA5(0x1)
		unsigned char UnknownData01_7[0x2]; // 0xA6(0x2) UNKNOWN PROPERTY
	};


	// Struct JunoProceduralWorld.JunoWorldTileStreamingLevelFastArray
	// Inherited from FFastArraySerializer
	// Size: 0x18 (0x120 - 0x108)
	struct FJunoWorldTileStreamingLevelFastArray : public FFastArraySerializer	
	{
	public:
		TArray Entries; // 0x108(0x10)
		AJunoWorldTile WorldTile; // 0x118(0x8)
	};


	// Struct JunoProceduralWorld.JunoDebugWorldTileState
	// Size: 0x20 (0x20 - 0x0)
	struct FJunoDebugWorldTileState	
	{
	public:
		FString TileName; // 0x0(0x10)
		TArray Levels; // 0x10(0x10)
	};


	// Struct JunoProceduralWorld.JunoLayerSwap
	// Size: 0x8 (0x8 - 0x0)
	struct FJunoLayerSwap	
	{
	public:
		FName SwapFrom; // 0x0(0x4)
		FName SwapTo; // 0x4(0x4)
	};


	// Struct JunoProceduralWorld.PCGJunoWorldTilePOISlot
	// Inherited from FTableRowBase
	// Size: 0x40 (0x48 - 0x8)
	struct FPCGJunoWorldTilePOISlot : public FTableRowBase	
	{
	public:
		FVector Position; // 0x8(0x18)
		TArray Tags; // 0x20(0x10)
		EJunoPOISize Size; // 0x30(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x31(0x3) UNKNOWN PROPERTY
		FGuid POISlotGuid; // 0x34(0x10)
		unsigned char UnknownData03_7[0x4]; // 0x44(0x4) UNKNOWN PROPERTY
	};


	// Struct JunoProceduralWorld.PCGJunoCaveDataRegistryRow
	// Inherited from FTableRowBase
	// Size: 0x20 (0x28 - 0x8)
	struct FPCGJunoCaveDataRegistryRow : public FTableRowBase	
	{
	public:
		TWeakObjectPtr CaveDataCollection; // 0x8(0x20)
	};


	// Struct JunoProceduralWorld.PCGJunoWorldTile
	// Inherited from FTableRowBase
	// Size: 0x128 (0x130 - 0x8)
	struct FPCGJunoWorldTile : public FTableRowBase	
	{
	public:
		EJunoTileStatus Status; // 0x8(0x1)
		EJunoTileGenerationType GenerationType; // 0x9(0x1)
		bool bIsDebugTile; // 0xA(0x1)
		unsigned char UnknownData04_6[0x1]; // 0xB(0x1) UNKNOWN PROPERTY
		int32_t Version; // 0xC(0x4)
		FDataRegistryId OriginRegistryId; // 0x10(0x8)
		TWeakObjectPtr Terrain; // 0x18(0x20)
		TWeakObjectPtr MiniMapTexture; // 0x38(0x20)
		TWeakObjectPtr StaticBiomeDecorations; // 0x58(0x20)
		TArray Overlays; // 0x78(0x10)
		TArray PrimaryBiomeResourceVariations; // 0x88(0x10)
		TWeakObjectPtr PrimaryBiomeResource; // 0x98(0x20)
		TArray SlotBiomes; // 0xB8(0x10)
		EJunoBiome NWBiome; // 0xC8(0x1)
		EJunoBiome NEBiome; // 0xC9(0x1)
		EJunoBiome SEBiome; // 0xCA(0x1)
		EJunoBiome SWBiome; // 0xCB(0x1)
		unsigned char UnknownData05_6[0x4]; // 0xCC(0x4) UNKNOWN PROPERTY
		TArray LayerSwaps; // 0xD0(0x10)
		TWeakObjectPtr POISlots; // 0xE0(0x20)
		FName ReservedAreaName; // 0x100(0x4)
		unsigned char UnknownData06_6[0x4]; // 0x104(0x4) UNKNOWN PROPERTY
		FGameplayTagContainer GameplayTags; // 0x108(0x20)
		bool bIsReplaceable; // 0x128(0x1)
		unsigned char UnknownData07_7[0x7]; // 0x129(0x7) UNKNOWN PROPERTY
	};


	// Struct JunoProceduralWorld.JunoWorldTileMetaData
	// Inherited from FTableRowBase
	// Size: 0x40 (0x48 - 0x8)
	struct FJunoWorldTileMetaData : public FTableRowBase	
	{
	public:
		TWeakObjectPtr TileWorld; // 0x8(0x20)
		FGameplayTagContainer GameplayTags; // 0x28(0x20)
	};


	// Struct JunoProceduralWorld.JunoWorldEventTileDefinition
	// Inherited from FTableRowBase
	// Size: 0x60 (0x68 - 0x8)
	struct FJunoWorldEventTileDefinition : public FTableRowBase	
	{
	public:
		bool bEnabled; // 0x8(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
		FName EventName; // 0xC(0x4)
		int64_t Priority; // 0x10(0x8)
		FGameplayTagQuery EventTileQuery; // 0x18(0x48)
		UClass EventBuilderClass; // 0x60(0x8)
	};


	// Struct JunoProceduralWorld.PCGJunoWorldEventTile
	// Inherited from FPCGJunoWorldTile -> FTableRowBase
	// Size: 0x8 (0x138 - 0x130)
	struct FPCGJunoWorldEventTile : public FPCGJunoWorldTile	
	{
	public:
		FName EventTileName; // 0x130(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x134(0x4) UNKNOWN PROPERTY
	};


	// Struct JunoProceduralWorld.JunoWorldTileAdditionalPOI
	// Inherited from FTableRowBase
	// Size: 0x180 (0x188 - 0x8)
	struct FJunoWorldTileAdditionalPOI : public FTableRowBase	
	{
	public:
		unsigned char UnknownData10_3[0x4]; // 0x8(0x4) UNKNOWN PROPERTY
		bool bEnabled; // 0xC(0x1)
		unsigned char UnknownData11_6[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
		FName LayerName; // 0x10(0x4)
		unsigned char UnknownData12_6[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
		FGameplayTagQuery POIQuery; // 0x18(0x48)
		FDataRegistryId RarePOI; // 0x60(0x8)
		int32_t RareCount; // 0x68(0x4)
		EJunoWorldTileAdditionalPOIType Type; // 0x6C(0x1)
		unsigned char UnknownData13_6[0x3]; // 0x6D(0x3) UNKNOWN PROPERTY
		FGameplayTagContainer CaveGeneratorTags; // 0x70(0x20)
		EJunoBiome CaveGeneratorBiomeOverride; // 0x90(0x1)
		unsigned char UnknownData14_6[0x3]; // 0x91(0x3) UNKNOWN PROPERTY
		FGuid CaveGuid; // 0x94(0x10)
		FGameplayTag TaggedTileAndSlotTag; // 0xA4(0x4)
		FGameplayTagQuery TileTagQuery; // 0xA8(0x48)
		int32_t PreferredBiomePriority; // 0xF0(0x4)
		unsigned char UnknownData15_6[0x4]; // 0xF4(0x4) UNKNOWN PROPERTY
		TSet PreferredBiomes; // 0xF8(0x50)
		FName EventName; // 0x148(0x4)
		EJunoWorldTileAdditionalPOIPlacement WorldTilePlacement; // 0x14C(0x1)
		unsigned char UnknownData16_6[0x3]; // 0x14D(0x3) UNKNOWN PROPERTY
		float MinimumDistance; // 0x150(0x4)
		EJunoAdditionalPOIWorldMode WorldMode; // 0x154(0x1)
		unsigned char UnknownData17_6[0x3]; // 0x155(0x3) UNKNOWN PROPERTY
		FGameplayTag WorldLocationInfoTag; // 0x158(0x4)
		unsigned char UnknownData18_6[0x4]; // 0x15C(0x4) UNKNOWN PROPERTY
		FGameplayTagContainer WorldLocationGameplayTags; // 0x160(0x20)
		bool bAllowedInCozyMode; // 0x180(0x1)
		bool bAllowedInSandboxMode; // 0x181(0x1)
		bool bAllowedInHardcoreMode; // 0x182(0x1)
		EJunoAdditionalPOIOrientation orientation; // 0x183(0x1)
		unsigned char UnknownData19_7[0x4]; // 0x184(0x4) UNKNOWN PROPERTY
	};


	// Struct JunoProceduralWorld.JunoPOISlotMetaData
	// Size: 0x1 (0x1 - 0x0)
	struct FJunoPOISlotMetaData	
	{
	public:
		EJunoPOISlotState State; // 0x0(0x1)
	};


	// Struct JunoProceduralWorld.JunoCaveSurfaceData
	// Size: 0x38 (0x38 - 0x0)
	struct FJunoCaveSurfaceData	
	{
	public:
		FGuid CaveGuid; // 0x0(0x10)
		TArray Entrances; // 0x10(0x10)
		TArray EntranceTeleporterTransforms; // 0x20(0x10)
		int32_t SlotIndex; // 0x30(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
	};


	// Struct JunoProceduralWorld.JunoCave
	// Size: 0x10 (0x10 - 0x0)
	struct FJunoCave	
	{
	public:
		TArray Shells; // 0x0(0x10)
	};


	// Struct JunoProceduralWorld.JunoWorldTilePOILimitBucket
	// Size: 0x8 (0x8 - 0x0)
	struct FJunoWorldTilePOILimitBucket	
	{
	public:
		uint32_t PlacedCount; // 0x0(0x4)
		uint32_t Limit; // 0x4(0x4)
	};


	// Struct JunoProceduralWorld.JunoWorldTileSaveData_Cave_PersistentInfo
	// Size: 0x20 (0x20 - 0x0)
	struct FJunoWorldTileSaveData_Cave_PersistentInfo	
	{
	public:
		FGuid Guid; // 0x0(0x10)
		TArray GameplayVolumes; // 0x10(0x10)
	};


	// Struct JunoProceduralWorld.JunoWorldTileSaveData_POI_PersistentInfo
	// Size: 0x30 (0x30 - 0x0)
	struct FJunoWorldTileSaveData_POI_PersistentInfo	
	{
	public:
		FGuid Guid; // 0x0(0x10)
		FPersistenceFrameworkLevelSaveSpawnablePtr GameplayVolume; // 0x10(0x20)
	};


	// Struct JunoProceduralWorld.JunoWorldTileSaveData_InGameClass_PersistentInfo_v0
	// Size: 0x88 (0x88 - 0x0)
	struct FJunoWorldTileSaveData_InGameClass_PersistentInfo_v0	
	{
	public:
		FJunoWorldTileSaveData_v0 SaveData; // 0x0(0x68)
		TArray Caves; // 0x68(0x10)
		TArray POIs; // 0x78(0x10)
	};


	// Struct JunoProceduralWorld.JunoWorldTileSaveData_v0
	// Size: 0x68 (0x68 - 0x0)
	struct FJunoWorldTileSaveData_v0	
	{
	public:
		TMap POISlotMetaDatas; // 0x0(0x50)
		TArray CaveSurfaceData; // 0x50(0x10)
		bool bIsCaveSurfaceDataValid; // 0x60(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x61(0x7) UNKNOWN PROPERTY
	};


	// Struct JunoProceduralWorld.JunoWorldTileSaveData_InGameClass_PersistentInfo_v1
	// Size: 0x208 (0x208 - 0x0)
	struct FJunoWorldTileSaveData_InGameClass_PersistentInfo_v1	
	{
	public:
		FJunoWorldTileSaveData SaveData; // 0x0(0x1E8)
		TArray Caves; // 0x1E8(0x10)
		TArray POIs; // 0x1F8(0x10)
	};


	// Struct JunoProceduralWorld.JunoWorldTileSaveData
	// Size: 0x1E8 (0x1E8 - 0x0)
	struct FJunoWorldTileSaveData	
	{
	public:
		TMap POISlotMetaDatas; // 0x0(0x50)
		TMap CaveSurfaceLayerData; // 0x50(0x50)
		int32_t UsedCaveSlotCount; // 0xA0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xA4(0x4) UNKNOWN PROPERTY
		TMap AppliedOverlayRules; // 0xA8(0x50)
		TMap EncounterPOIBuckets; // 0xF8(0x50)
		TMap CosmeticPOIBuckets; // 0x148(0x50)
		TMap CaveStates; // 0x198(0x50)
	};


	// Struct JunoProceduralWorld.JunoCaveStateSaveData
	// Size: 0x30 (0x30 - 0x0)
	struct FJunoCaveStateSaveData	
	{
	public:
		FGameplayTagContainer StateTags; // 0x0(0x20)
		unsigned char UnknownData01_7[0x10]; // 0x20(0x10) UNKNOWN PROPERTY
	};


	// Struct JunoProceduralWorld.JunoWorldTileOverlayPOIInfo
	// Size: 0x10 (0x10 - 0x0)
	struct FJunoWorldTileOverlayPOIInfo	
	{
	public:
		FGuid SlotGuid; // 0x0(0x10)
	};


	// Struct JunoProceduralWorld.JunoWorldTileCaveSurfaceSaveData
	// Size: 0x10 (0x10 - 0x0)
	struct FJunoWorldTileCaveSurfaceSaveData	
	{
	public:
		TArray CaveSurfaceData; // 0x0(0x10)
	};


	// Struct JunoProceduralWorld.JunoWorldTileSaveData_InGameClass_PersistentInfo
	// Size: 0x208 (0x208 - 0x0)
	struct FJunoWorldTileSaveData_InGameClass_PersistentInfo	
	{
	public:
		FJunoWorldTileSaveData SaveData; // 0x0(0x1E8)
		TArray Caves; // 0x1E8(0x10)
		TArray POIs; // 0x1F8(0x10)
	};


	// Struct JunoProceduralWorld.JunoWorldTileEventCircleBounds
	// Size: 0x18 (0x18 - 0x0)
	struct FJunoWorldTileEventCircleBounds	
	{
	public:
		double Radius; // 0x0(0x8)
		FVector2D Center; // 0x8(0x10)
	};


	// Struct JunoProceduralWorld.JunoWorldTileEventBuilderRestriction
	// Size: 0x48 (0x48 - 0x0)
	struct FJunoWorldTileEventBuilderRestriction	
	{
	public:
		EJunoWorldTileEventBuilderRestrictionType Type; // 0x0(0x1)
		EJunoWorldTileEventBuilderRestrictionShape ShapeType; // 0x1(0x1)
		unsigned char UnknownData01_6[0x6]; // 0x2(0x6) UNKNOWN PROPERTY
		FJunoWorldTileEventCircleBounds Circle; // 0x8(0x18)
		FBox2D Box; // 0x20(0x28)
	};


	// Struct JunoProceduralWorld.PathfinderHistory
	// Size: 0x48 (0x48 - 0x0)
	struct FPathfinderHistory	
	{
	public:
		FVector NearestLocationToDestination; // 0x0(0x18)
		float NearestLocationToDestinationDistance; // 0x18(0x4)
		unsigned char UnknownData02_6[0x24]; // 0x1C(0x24) UNKNOWN PROPERTY
		int32_t TotalPushSteps; // 0x40(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x44(0x4) UNKNOWN PROPERTY
	};


	// Struct JunoProceduralWorld.ControlPointParameters
	// Size: 0x60 (0x60 - 0x0)
	struct FControlPointParameters	
	{
	public:
		float Width; // 0x0(0x4)
		float LayerWidthRatio; // 0x4(0x4)
		float SideFalloff; // 0x8(0x4)
		float LeftSideFalloffFactor; // 0xC(0x4)
		float RightSideFalloffFactor; // 0x10(0x4)
		float LeftSideLayerFalloffFactor; // 0x14(0x4)
		float RightSideLayerFalloffFactor; // 0x18(0x4)
		float EndFalloff; // 0x1C(0x4)
		float SegmentMeshOffset; // 0x20(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
		UStaticMesh Mesh; // 0x28(0x8)
		TArray MaterialOverrides; // 0x30(0x10)
		FVector MeshScale; // 0x40(0x18)
		bool bCastShadow; // 0x58(0x1)
		unsigned char UnknownData03_7[0x7]; // 0x59(0x7) UNKNOWN PROPERTY
	};


	// Struct JunoProceduralWorld.SegmentParameters
	// Size: 0x30 (0x30 - 0x0)
	struct FSegmentParameters	
	{
	public:
		FName LayerName; // 0x0(0x4)
		bool bRaiseTerrain; // 0x4(0x1)
		bool bLowerTerrain; // 0x5(0x1)
		unsigned char UnknownData03_6[0x2]; // 0x6(0x2) UNKNOWN PROPERTY
		TArray SplineMeshes; // 0x8(0x10)
		bool bCastShadow; // 0x18(0x1)
		bool bHiddenInGame; // 0x19(0x1)
		bool bPlaceSplineMeshesInStreamingLevels; // 0x1A(0x1)
		unsigned char UnknownData04_6[0x1]; // 0x1B(0x1) UNKNOWN PROPERTY
		int32_t RandomSeed; // 0x1C(0x4)
		float LDMaxDrawDistance; // 0x20(0x4)
		int32_t TranslucencySortPriority; // 0x24(0x4)
		char bRenderCustomDepth; // 0x28(0x1)
		ERendererStencilMask CustomDepthStencilWriteMask; // 0x29(0x1)
		unsigned char UnknownData05_6[0x2]; // 0x2A(0x2) UNKNOWN PROPERTY
		int32_t CustomDepthStencilValue; // 0x2C(0x4)
	};


	// Struct JunoProceduralWorld.PathfinderGuideSet
	// Size: 0x10 (0x10 - 0x0)
	struct FPathfinderGuideSet	
	{
	public:
		TArray Guides; // 0x0(0x10)
	};


	// Struct JunoProceduralWorld.PCGJunoBiomeElementRow
	// Inherited from FTableRowBase
	// Size: 0x58 (0x60 - 0x8)
	struct FPCGJunoBiomeElementRow : public FTableRowBase	
	{
	public:
		float Weight; // 0x8(0x4)
		FName Type; // 0xC(0x4)
		TArray LayerWeights; // 0x10(0x10)
		FVector PositionOffset; // 0x20(0x18)
		FVector2D ScaleMinMax; // 0x38(0x10)
		float BlendToVertical; // 0x48(0x4)
		float RandomLeanAmount; // 0x4C(0x4)
		EJunoRepresentation Representation; // 0x50(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x51(0x7) UNKNOWN PROPERTY
		UClass Actor; // 0x58(0x8)
	};


	// Struct JunoProceduralWorld.PCGJunoPOIElementRow
	// Inherited from FTableRowBase
	// Size: 0x38 (0x40 - 0x8)
	struct FPCGJunoPOIElementRow : public FTableRowBase	
	{
	public:
		float Weight; // 0x8(0x4)
		float BoundsMultiplier; // 0xC(0x4)
		UClass POIActor; // 0x10(0x8)
		UClass BuildingFoundation; // 0x18(0x8)
		TWeakObjectPtr Level; // 0x20(0x20)
	};


	// Struct JunoProceduralWorld.PCGJunoPOISlotElementRow
	// Inherited from FTableRowBase
	// Size: 0x50 (0x58 - 0x8)
	struct FPCGJunoPOISlotElementRow : public FTableRowBase	
	{
	public:
		float Weight; // 0x8(0x4)
		EJunoPOISize Size; // 0xC(0x1)
		unsigned char UnknownData01_6[0x3]; // 0xD(0x3) UNKNOWN PROPERTY
		UClass POISlotActor; // 0x10(0x8)
		TWeakObjectPtr PotentialPOIs; // 0x18(0x20)
		TWeakObjectPtr TerrainHeightPatch; // 0x38(0x20)
	};


	// Struct JunoProceduralWorld.PCGJunoAudioElementRow
	// Inherited from FTableRowBase
	// Size: 0x30 (0x38 - 0x8)
	struct FPCGJunoAudioElementRow : public FTableRowBase	
	{
	public:
		float Weight; // 0x8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
		UClass AudioActorToSpawn; // 0x10(0x8)
		TWeakObjectPtr Level; // 0x18(0x20)
	};


	// Struct JunoProceduralWorld.PCGJunoBiomeEntry
	// Size: 0x28 (0x28 - 0x0)
	struct FPCGJunoBiomeEntry	
	{
	public:
		FName Name; // 0x0(0x4)
		float Density; // 0x4(0x4)
		TWeakObjectPtr BiomeElements; // 0x8(0x20)
	};


	// Struct JunoProceduralWorld.PCGJunoCullDistanceGameplayTagRow
	// Inherited from FTableRowBase
	// Size: 0x10 (0x18 - 0x8)
	struct FPCGJunoCullDistanceGameplayTagRow : public FTableRowBase	
	{
	public:
		FGameplayTag CullDistanceTag; // 0x8(0x4)
		int32_t EndCullDistance; // 0xC(0x4)
		float LODInstanceScale; // 0x10(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
	};


	// Struct JunoProceduralWorld.PCGJunoStoreDataPin
	// Size: 0x10 (0x10 - 0x0)
	struct FPCGJunoStoreDataPin	
	{
	public:
		FName Name; // 0x0(0x4)
		FJunoPCGVolumePointDataFeatures Features; // 0x4(0xC)
	};


	// Struct JunoProceduralWorld.ProceduralRiverAnchorConnectionRules
	// Size: 0x368 (0x368 - 0x0)
	struct FProceduralRiverAnchorConnectionRules	
	{
	public:
		float MaxConnectionSlope; // 0x0(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		FRuntimeFloatCurve CarveDownNearSourceAnchor; // 0x8(0x88)
		FRuntimeFloatCurve CarveDownNearTargetAnchor; // 0x90(0x88)
		FRuntimeFloatCurve WidthMultNearSourceAnchor; // 0x118(0x88)
		FRuntimeFloatCurve WidthMultNearTargetAnchor; // 0x1A0(0x88)
		FRuntimeFloatCurve VelocityMultNearSourceAnchor; // 0x228(0x88)
		FRuntimeFloatCurve VelocityMultNearTargetAnchor; // 0x2B0(0x88)
		FVector2D CoastlineAnchorZRange; // 0x338(0x10)
		float CoastlineProbeAboveZeroPercent; // 0x348(0x4)
		float CoastlineProbeBelowZeroPercent; // 0x34C(0x4)
		FVector2D DeepSeaAnchorZRange; // 0x350(0x10)
		float DeepSeaAnchorMinDistanceToCoastline; // 0x360(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x364(0x4) UNKNOWN PROPERTY
	};


	// Struct JunoProceduralWorld.ProceduralRiverShapeRules
	// Size: 0x220 (0x220 - 0x0)
	struct FProceduralRiverShapeRules	
	{
	public:
		FRuntimeFloatCurve DepthCurve; // 0x0(0x88)
		FRuntimeFloatCurve WidthCurve; // 0x88(0x88)
		FRuntimeFloatCurve VelocityCurve; // 0x110(0x88)
		FRuntimeFloatCurve VelocityBySlope; // 0x198(0x88)
	};


	// Struct JunoProceduralWorld.ProceduralRiverGenRules
	// Size: 0x630 (0x630 - 0x0)
	struct FProceduralRiverGenRules	
	{
	public:
		FProceduralRiverAnchorConnectionRules AnchorConnectionRules; // 0x0(0x368)
		FProceduralRiverShapeRules ProceduralRiverShapeRules; // 0x368(0x220)
		FLandmassPathfinderRules PathfinderRules; // 0x588(0xA8)
	};


	// Struct JunoProceduralWorld.LandmassPathfinderRules
	// Size: 0xA8 (0xA8 - 0x0)
	struct FLandmassPathfinderRules	
	{
	public:
		EVerticalDirection VerticalDirection; // 0x0(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x1(0x3) UNKNOWN PROPERTY
		float MaxSlopeWhileGoingAgainstLegalVerticalDirection; // 0x4(0x4)
		bool bFavorGoingDown; // 0x8(0x1)
		unsigned char UnknownData05_6[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
		float FavorGoingDownWeight; // 0xC(0x4)
		bool bUseGravitationalPotentialEnergy; // 0x10(0x1)
		unsigned char UnknownData06_6[0x3]; // 0x11(0x3) UNKNOWN PROPERTY
		float StartingGravitationalPotentialEnergy; // 0x14(0x4)
		float MaxSlope; // 0x18(0x4)
		float VerticalCostMultiplier; // 0x1C(0x4)
		float SideRollCostMultiplier; // 0x20(0x4)
		float SearchRadius; // 0x24(0x4)
		FVector2D SearchConeInDegrees; // 0x28(0x10)
		float BackStop; // 0x38(0x4)
		int32_t SearchPointsNum; // 0x3C(0x4)
		float DestinationRadius; // 0x40(0x4)
		float MinimalViableDistance; // 0x44(0x4)
		float SnapDistance; // 0x48(0x4)
		float MaxCost; // 0x4C(0x4)
		int32_t MaxSteps; // 0x50(0x4)
		float TooCloseDistanceRatio; // 0x54(0x4)
		float HeuristicToDestinationWeight; // 0x58(0x4)
		float MaxBoostDistance; // 0x5C(0x4)
		float BoostIntensity; // 0x60(0x4)
		float SnappedSpeedMultiplier; // 0x64(0x4)
		TArray RouteClassesAvoidances; // 0x68(0x10)
		float WarpFixedCost; // 0x78(0x4)
		float WarpAngleConstraint; // 0x7C(0x4)
		float MaxWarpingDistance; // 0x80(0x4)
		float MaxWarpingZDelta; // 0x84(0x4)
		float MinPercentageOfLandOnEachSide; // 0x88(0x4)
		float WarpZoneApproximatedGreaterHalfWidth; // 0x8C(0x4)
		float WarpZoneApproximatedLesserHalfWidth; // 0x90(0x4)
		bool bUseWarpZoneDifficultTerrain; // 0x94(0x1)
		unsigned char UnknownData07_6[0x3]; // 0x95(0x3) UNKNOWN PROPERTY
		float WarpZoneDifficultTerrainWidth; // 0x98(0x4)
		float WarpZoneDifficultTerrainCostMult; // 0x9C(0x4)
		float TileDimension; // 0xA0(0x4)
		float TileEdgeAvoidanceDistance; // 0xA4(0x4)
	};


	// Struct JunoProceduralWorld.RouteClassAvoidance
	// Size: 0x10 (0x10 - 0x0)
	struct FRouteClassAvoidance	
	{
	public:
		UClass RouteClassesToAvoid; // 0x0(0x8)
		float Distance; // 0x8(0x4)
		unsigned char UnknownData01_7[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
	};


	// Struct JunoProceduralWorld.JunoLivingWorldStaticPointProviderClusterEntryData
	// Size: 0x38 (0x38 - 0x0)
	struct FJunoLivingWorldStaticPointProviderClusterEntryData	
	{
	public:
		FVector Location; // 0x0(0x18)
		FGameplayTagContainer Tags; // 0x18(0x20)
	};


	// Struct JunoProceduralWorld.JunoLivingWorldStaticPointProviderClusterEntry
	// Size: 0x18 (0x18 - 0x0)
	struct FJunoLivingWorldStaticPointProviderClusterEntry	
	{
	public:
		UClass PointProviderTemplate; // 0x0(0x8)
		TArray DataList; // 0x8(0x10)
	};


	// Struct JunoProceduralWorld.LWMClusterPointInfo
	// Size: 0x18 (0x18 - 0x0)
	struct FLWMClusterPointInfo	
	{
	public:
		UJunoLivingWorldLightStaticPointProvider PointProvider; // 0x0(0x8)
		FNavAgentSelector SupportedAgents; // 0x8(0x4)
		unsigned char UnknownData01_7[0xC]; // 0xC(0xC) UNKNOWN PROPERTY
	};


	// Struct JunoProceduralWorld.JunoPOITeleporter
	// Size: 0x90 (0x90 - 0x0)
	struct FJunoPOITeleporter	
	{
	public:
		UClass TeleporterClass; // 0x0(0x8)
		unsigned char UnknownData01_6[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
		FTransform Transform; // 0x10(0x60)
		FGameplayTagContainer CaveGenerationTags; // 0x70(0x20)
	};


	// Struct JunoProceduralWorld.JunoPOIManagerSlot
	// Size: 0x68 (0x68 - 0x0)
	struct FJunoPOIManagerSlot	
	{
	public:
		FVector Location; // 0x0(0x18)
		FGuid Guid; // 0x18(0x10)
		EJunoBiome Biome; // 0x28(0x1)
		EJunoPOISize Size; // 0x29(0x1)
		unsigned char UnknownData02_6[0x6]; // 0x2A(0x6) UNKNOWN PROPERTY
		TArray Tags; // 0x30(0x10)
		EJunoPOISlotSelectionMode SelectionMode; // 0x40(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x41(0x7) UNKNOWN PROPERTY
		FGameplayTagContainer GameplayTags; // 0x48(0x20)
	};


	// Struct JunoProceduralWorld.JunoRoadAINavigationClusterEntry
	// Size: 0x50 (0x50 - 0x0)
	struct FJunoRoadAINavigationClusterEntry	
	{
	public:
		UClass PatrolPathTemplate; // 0x0(0x8)
		int32_t SharedPointEntryIndex; // 0x8(0x4)
		int32_t StartSharedPointIndex; // 0xC(0x4)
		int32_t EndSharedPointIndex; // 0x10(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
		TArray InternalPoints; // 0x18(0x10)
		float Width; // 0x28(0x4)
		unsigned char UnknownData03_6[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
		FGameplayTagContainer Tags; // 0x30(0x20)
	};


	// Struct JunoProceduralWorld.JunoRoadAINavigationClusterSharedPointsEntry
	// Size: 0x28 (0x28 - 0x0)
	struct FJunoRoadAINavigationClusterSharedPointsEntry	
	{
	public:
		UClass PatrolPointTemplate; // 0x0(0x8)
		TArray Points; // 0x8(0x10)
		TArray SpawnedPointsIndex; // 0x18(0x10)
	};


	// Struct JunoProceduralWorld.RoadPatrolPathInfo
	// Size: 0x10 (0x10 - 0x0)
	struct FRoadPatrolPathInfo	
	{
	public:
		AFortAthenaPatrolPath PatrolPath; // 0x0(0x8)
		int32_t EntryIndex; // 0x8(0x4)
		unsigned char UnknownData01_7[0x4]; // 0xC(0x4) UNKNOWN PROPERTY
	};


	// Struct JunoProceduralWorld.RoadPatrolPointInfo
	// Size: 0x8 (0x8 - 0x0)
	struct FRoadPatrolPointInfo	
	{
	public:
		AFortAthenaPatrolPoint PatrolPoint; // 0x0(0x8)
	};


	// Struct JunoProceduralWorld.CaveShellSpawnLimitData
	// Size: 0x78 (0x78 - 0x0)
	struct FCaveShellSpawnLimitData	
	{
	public:
		FScalableFloat MaxNumberOfSpawn; // 0x0(0x28)
		FScalableFloat EventMemoryResetDurationsHours; // 0x28(0x28)
		FScalableFloat MinDistanceToTeleporter; // 0x50(0x28)
	};


	// Struct JunoProceduralWorld.CaveSpawnEvent
	// Size: 0x1C (0x1C - 0x0)
	struct FCaveSpawnEvent	
	{
	public:
		unsigned char UnknownData01_2[0x1C]; // 0x0(0x1C) UNKNOWN PROPERTY
	};


	// Struct JunoProceduralWorld.CaveSpawnPointProviderMemory
	// Size: 0x28 (0x28 - 0x0)
	struct FCaveSpawnPointProviderMemory	
	{
	public:
		unsigned char UnknownData01_2[0x28]; // 0x0(0x28) UNKNOWN PROPERTY
	};


	// Struct JunoProceduralWorld.CaveShellID
	// Size: 0x14 (0x14 - 0x0)
	struct FCaveShellID	
	{
	public:
		unsigned char UnknownData01_2[0x14]; // 0x0(0x14) UNKNOWN PROPERTY
	};


	// Struct JunoProceduralWorld.JunoLWMCaveShellPointProviders
	// Size: 0x10 (0x10 - 0x0)
	struct FJunoLWMCaveShellPointProviders	
	{
	public:
		TArray PointProviders; // 0x0(0x10)
	};


	// Struct JunoProceduralWorld.JunoLWMCaveShellInfo
	// Size: 0x10 (0x10 - 0x0)
	struct FJunoLWMCaveShellInfo	
	{
	public:
		UCaveShellSpawnEntry SpawnEntry; // 0x0(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x8(0x8) UNKNOWN PROPERTY
	};


	// Struct JunoProceduralWorld.DendrogramLeafAttributes
	// Size: 0x20 (0x20 - 0x0)
	struct FDendrogramLeafAttributes	
	{
	public:
		FVector Location; // 0x0(0x18)
		float DistanceScale; // 0x18(0x4)
		FName LeafTypeName; // 0x1C(0x4)
	};


	// Struct JunoProceduralWorld.DendrogramClusterOutput
	// Size: 0x68 (0x68 - 0x0)
	struct FDendrogramClusterOutput	
	{
	public:
		int32_t NodeLevel; // 0x0(0x4)
		bool bIsLeaf; // 0x4(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x5(0x3) UNKNOWN PROPERTY
		TArray Actors; // 0x8(0x10)
		AActor ConnectedActorA; // 0x18(0x8)
		AActor ConnectedActorB; // 0x20(0x8)
		FDendrogramLeafAttributes LeafAAttributes; // 0x28(0x20)
		FDendrogramLeafAttributes LeafBAttributes; // 0x48(0x20)
	};


	// Struct JunoProceduralWorld.ProceduralRoadGenRules
	// Size: 0x138 (0x138 - 0x0)
	struct FProceduralRoadGenRules	
	{
	public:
		FLandmassPathfinderRules PathfinderRules; // 0x0(0xA8)
		FControlPointParameters ControlPointParams; // 0xA8(0x60)
		FSegmentParameters SegmentParams; // 0x108(0x30)
	};


	// Struct JunoProceduralWorld.LandmassPCGRouteInput
	// Size: 0x18 (0x18 - 0x0)
	struct FLandmassPCGRouteInput	
	{
	public:
		FName Name; // 0x0(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4(0x4) UNKNOWN PROPERTY
		TArray Data; // 0x8(0x10)
	};


	// Struct JunoProceduralWorld.RouteAvoidancePrimitive
	// Size: 0x30 (0x30 - 0x0)
	struct FRouteAvoidancePrimitive	
	{
	public:
		ERouteAvoidancePrimitiveType Type; // 0x0(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x1(0x7) UNKNOWN PROPERTY
		FVector2D DiscLocation; // 0x8(0x10)
		USplineComponent SplineComponent; // 0x18(0x8)
		ALandmassProceduralRoute ProceduralRoutes; // 0x20(0x8)
		float Distance; // 0x28(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
	};


	// Struct JunoProceduralWorld.ProceduralRouteJunoTileInfo
	// Size: 0xC (0xC - 0x0)
	struct FProceduralRouteJunoTileInfo	
	{
	public:
		int32_t TileIndex; // 0x0(0x4)
		int32_t TileId; // 0x4(0x4)
		EProceduralRouteGuideSetSelectMethod GuideSetSelectMethod; // 0x8(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
	};


	// Struct JunoProceduralWorld.ProceduralRiverAnchor
	// Size: 0x18 (0x18 - 0x0)
	struct FProceduralRiverAnchor	
	{
	public:
		FVector2D Location2D; // 0x0(0x10)
		EProceduralRiverAnchorType Type; // 0x10(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x11(0x3) UNKNOWN PROPERTY
		int32_t GroupId; // 0x14(0x4)
	};


	// Struct JunoProceduralWorld.SegmentInterpResult
	// Size: 0x138 (0x138 - 0x0)
	struct FSegmentInterpResult	
	{
	public:
		float Time; // 0x0(0x4)
		float CosInterp; // 0x4(0x4)
		float Width; // 0x8(0x4)
		float LayerWidth; // 0xC(0x4)
		float LeftFalloff; // 0x10(0x4)
		float RightFalloff; // 0x14(0x4)
		float LeftLayerFalloff; // 0x18(0x4)
		float RightLayerFalloff; // 0x1C(0x4)
		float Roll; // 0x20(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
		FVector Pos; // 0x28(0x18)
		FVector Tangent; // 0x40(0x18)
		FVector Binormal; // 0x58(0x18)
		FVector LeftPos; // 0x70(0x18)
		FVector RightPos; // 0x88(0x18)
		FVector FalloffLeftPos; // 0xA0(0x18)
		FVector FalloffRightPos; // 0xB8(0x18)
		FVector LayerLeftPos; // 0xD0(0x18)
		FVector LayerRightPos; // 0xE8(0x18)
		FVector LayerFalloffLeftPos; // 0x100(0x18)
		FVector LayerFalloffRightPos; // 0x118(0x18)
		float StartEndFalloff; // 0x130(0x4)
		unsigned char UnknownData03_7[0x4]; // 0x134(0x4) UNKNOWN PROPERTY
	};


	// Struct JunoProceduralWorld.InterpSegment
	// Size: 0x70 (0x70 - 0x0)
	struct FInterpSegment	
	{
	public:
		FInterpCurveVector SplineInfo; // 0x0(0x18)
		float SplineLength; // 0x18(0x4)
		float SplineLengthBeforeThis; // 0x1C(0x4)
		float StartFalloffFraction; // 0x20(0x4)
		float EndFalloffFraction; // 0x24(0x4)
		float StartWidth; // 0x28(0x4)
		float EndWidth; // 0x2C(0x4)
		float StartLayerWidth; // 0x30(0x4)
		float EndLayerWidth; // 0x34(0x4)
		float FalloffStartLeftSide; // 0x38(0x4)
		float FalloffEndLeftSide; // 0x3C(0x4)
		float FalloffStartRightSide; // 0x40(0x4)
		float FalloffEndRightSide; // 0x44(0x4)
		float FalloffStartLeftSideLayer; // 0x48(0x4)
		float FalloffEndLeftSideLayer; // 0x4C(0x4)
		float FalloffStartRightSideLayer; // 0x50(0x4)
		float FalloffEndRightSideLayer; // 0x54(0x4)
		float StartRollDegrees; // 0x58(0x4)
		float EndRollDegrees; // 0x5C(0x4)
		float StartRoll; // 0x60(0x4)
		float EndRoll; // 0x64(0x4)
		float StartMeshOffset; // 0x68(0x4)
		float EndMeshOffset; // 0x6C(0x4)
	};


	// Struct JunoProceduralWorld.BridgeSpawnInfo
	// Size: 0x30 (0x30 - 0x0)
	struct FBridgeSpawnInfo	
	{
	public:
		FVector Start; // 0x0(0x18)
		FVector End; // 0x18(0x18)
	};


	// Struct JunoProceduralWorld.PCGJunoFilterPointsBasedOnLandscapeSlopeContext
	// Inherited from FPCGContext
	// Size: 0x8 (0x198 - 0x190)
	struct FPCGJunoFilterPointsBasedOnLandscapeSlopeContext : public FPCGContext	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x190(0x8) UNKNOWN PROPERTY
	};


	// Struct JunoProceduralWorld.PCGJunoPathfindContext
	// Inherited from FPCGContext
	// Size: 0x10 (0x1A0 - 0x190)
	struct FPCGJunoPathfindContext : public FPCGContext	
	{
	public:
		TWeakObjectPtr LandmassProceduralRoute; // 0x190(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x198(0x8) UNKNOWN PROPERTY
	};


	// Struct JunoProceduralWorld.PCGJunoRoadAINavigationContext
	// Inherited from FPCGContext
	// Size: 0x30 (0x1C0 - 0x190)
	struct FPCGJunoRoadAINavigationContext : public FPCGContext	
	{
	public:
		unsigned char UnknownData01_3[0x10]; // 0x190(0x10) UNKNOWN PROPERTY
		UClass RoadClusterClass; // 0x1A0(0x8)
		UClass PatrolPathClass; // 0x1A8(0x8)
		UClass PatrolPointClass; // 0x1B0(0x8)
		UPCGManagedActors ManagedActors; // 0x1B8(0x8)
	};


	// Struct JunoProceduralWorld.PCGJunoSpawnLivingWorldStaticPointTag
	// Size: 0x38 (0x38 - 0x0)
	struct FPCGJunoSpawnLivingWorldStaticPointTag	
	{
	public:
		FGameplayTagContainer Tags; // 0x0(0x20)
		FName AttributeName; // 0x20(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x24(0x4) UNKNOWN PROPERTY
		double MinValue; // 0x28(0x8)
		double MaxValue; // 0x30(0x8)
	};


	// Struct JunoProceduralWorld.PCGJunoSpawnLivingWorldStaticPointTagConditionSet
	// Size: 0x18 (0x18 - 0x0)
	struct FPCGJunoSpawnLivingWorldStaticPointTagConditionSet	
	{
	public:
		bool bOverridePreviousTags; // 0x0(0x1)
		bool bExclusiveConditionalTags; // 0x1(0x1)
		unsigned char UnknownData01_6[0x6]; // 0x2(0x6) UNKNOWN PROPERTY
		TArray ConditionalTags; // 0x8(0x10)
	};


	// Struct JunoProceduralWorld.PCGJunoSpawnLivingWorldStaticPointContext
	// Inherited from FPCGContext
	// Size: 0x28 (0x1B8 - 0x190)
	struct FPCGJunoSpawnLivingWorldStaticPointContext : public FPCGContext	
	{
	public:
		unsigned char UnknownData01_3[0x10]; // 0x190(0x10) UNKNOWN PROPERTY
		UClass StaticPointClass; // 0x1A0(0x8)
		UClass PointClusterClass; // 0x1A8(0x8)
		UPCGManagedActors ManagedActors; // 0x1B0(0x8)
	};


	// Struct JunoProceduralWorld.GraphRoadLengthTags
	// Size: 0x28 (0x28 - 0x0)
	struct FGraphRoadLengthTags	
	{
	public:
		float MinLength; // 0x0(0x4)
		float MaxLength; // 0x4(0x4)
		FGameplayTagContainer Tags; // 0x8(0x20)
	};


	// Struct JunoProceduralWorld.JunoRoadGraphGeneratorDebugSettings
	// Size: 0x14 (0x14 - 0x0)
	struct FJunoRoadGraphGeneratorDebugSettings	
	{
	public:
		float VerticalOffset; // 0x0(0x4)
		float EdgeThickness; // 0x4(0x4)
		float NodeRadius; // 0x8(0x4)
		bool bDumpOnCreation; // 0xC(0x1)
		bool bDumpOnExtremitiesConnection; // 0xD(0x1)
		bool bDumpOnSplitIntersection; // 0xE(0x1)
		bool bDumpOnEnd; // 0xF(0x1)
		bool bValidateAtEachStep; // 0x10(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x11(0x3) UNKNOWN PROPERTY
	};


	// Struct JunoProceduralWorld.JunoRoadGraphGeneratorSettings
	// Size: 0xB0 (0xB0 - 0x0)
	struct FJunoRoadGraphGeneratorSettings	
	{
	public:
		float StepLength; // 0x0(0x4)
		float MinRoadLength; // 0x4(0x4)
		float LineDeviationTolerance; // 0x8(0x4)
		float GraphNodeConnectionDistance; // 0xC(0x4)
		float DeadEndShrinkDistance; // 0x10(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x14(0x4) UNKNOWN PROPERTY
		FGameplayTagContainer DefaultTags; // 0x18(0x20)
		TArray ConditionalTagsSets; // 0x38(0x10)
		TArray LengthTags; // 0x48(0x10)
		FGameplayTagContainer DeadEndTags; // 0x58(0x20)
		FGameplayTagContainer IsolatedRoadTags; // 0x78(0x20)
		FJunoRoadGraphGeneratorDebugSettings Debug; // 0x98(0x14)
		unsigned char UnknownData03_7[0x4]; // 0xAC(0x4) UNKNOWN PROPERTY
	};


	// Struct JunoProceduralWorld.JunoWorldConditionBiome
	// Inherited from FWorldConditionCommonActorBase -> FWorldConditionBase
	// Size: 0x38 (0x48 - 0x10)
	struct FJunoWorldConditionBiome : public FWorldConditionCommonActorBase	
	{
	public:
		FWorldConditionContextDataRef ActorRef; // 0x10(0x8)
		TArray AllowedBiomes; // 0x18(0x10)
		bool bCanBeSecondaryBiome; // 0x28(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x29(0x7) UNKNOWN PROPERTY
		TArray AllowedHabitats; // 0x30(0x10)
		bool bCanBeSecondaryHabitat; // 0x40(0x1)
		unsigned char UnknownData03_7[0x7]; // 0x41(0x7) UNKNOWN PROPERTY
	};


	// Struct JunoProceduralWorld.JunoWorldConditionWorldTile
	// Inherited from FWorldConditionCommonActorBase -> FWorldConditionBase
	// Size: 0x58 (0x68 - 0x10)
	struct FJunoWorldConditionWorldTile : public FWorldConditionCommonActorBase	
	{
	public:
		FWorldConditionContextDataRef ActorRef; // 0x10(0x8)
		FGameplayTagQuery TileQuery; // 0x18(0x48)
		FName EventName; // 0x60(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x64(0x4) UNKNOWN PROPERTY
	};


	// Struct JunoProceduralWorld.JunoWorldRegistryEntry
	// Size: 0x40 (0x40 - 0x0)
	struct FJunoWorldRegistryEntry	
	{
	public:
		FVector Location; // 0x0(0x18)
		FGameplayTagContainer GameplayTags; // 0x18(0x20)
		unsigned char UnknownData01_7[0x8]; // 0x38(0x8) UNKNOWN PROPERTY
	};

}
