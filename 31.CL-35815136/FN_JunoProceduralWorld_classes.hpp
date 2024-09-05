#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: JunoProceduralWorld
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class JunoProceduralWorld.InstancedActorSmartObjectComponent
	// Inherited from UInstancedActorsComponent -> UActorComponent -> UObject
	// Size: 0x10 (0xC0 - 0xB0)
	class UInstancedActorSmartObjectComponent : public UInstancedActorsComponent	
	{
	public:
		UClass* ComponentClass; // 0xB0(0x8)
		USmartObjectDefinition* DefinitionAsset; // 0xB8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.InstancedActorSmartObjectComponent");
			return ret;
		}
	};


	// Class JunoProceduralWorld.JunoBridgePOISelectorComponent
	// Inherited from UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x28 (0xC8 - 0xA0)
	class UJunoBridgePOISelectorComponent : public UGameFrameworkComponent	
	{
	public:
		FJunoBridgePOISelectorParams Params; // 0xA0(0x18)
		FDataRegistryType DataRegistryType; // 0xB8(0x4)
		unsigned char UnknownData00_7[0xC]; // 0xBC(0xC) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoBridgePOISelectorComponent");
			return ret;
		}

		void DoSelection(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751B2ABB8(relative to base address)
		void BeginBridgeSelection(FJunoBridgePOISelectorParams& Params); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751B2AB20(relative to base address)
	};


	// Class JunoProceduralWorld.JunoCaveGeneratorDataMergerInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoCaveGeneratorDataMergerInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoCaveGeneratorDataMergerInterface");
			return ret;
		}

		void MergeCaveData(FJunoCaveGeneratorData& CaveData); // Flags: Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class JunoProceduralWorld.JunoCaveGeneratorPlayspaceComponent
	// Inherited from UFortPlayspaceComponent -> UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0xB0 (0x1A8 - 0xF8)
	class UJunoCaveGeneratorPlayspaceComponent : public UFortPlayspaceComponent	
	{
	public:
		FDataRegistryType CaveGeneratorRegistry; // 0xF8(0x4)
		FDataRegistryType CaveGeneratorShellsRegistry; // 0xFC(0x4)
		FDataRegistryType CaveGeneratorRulesRegistry; // 0x100(0x4)
		FDataRegistryType CaveGeneratorThemesRegistry; // 0x104(0x4)
		FDataRegistryType CaveGeneratorTypesRegistry; // 0x108(0x4)
		bool bUseSplitDataRegistries; // 0x10C(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x10D(0x3) UNKNOWN PROPERTY
		FDataRegistryType POIDataRegistry; // 0x110(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x114(0x4) UNKNOWN PROPERTY
		FJunoCaveGeneratorData MergedData; // 0x118(0x38)
		unsigned char UnknownData02_6[0x50]; // 0x150(0x50) UNKNOWN PROPERTY
		bool bWasDataMerged; // 0x1A0(0x1)
		unsigned char UnknownData03_7[0x7]; // 0x1A1(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoCaveGeneratorPlayspaceComponent");
			return ret;
		}

		void SortCaveGeneratorTypes(TArray<FJunoCaveGeneratorTypeData>& Types, TArray<FJunoCaveGeneratorTypeData>& SortedTypes); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751B2CDF0(relative to base address)
		void SortCaveGeneratorThemes(TArray<FJunoCaveGeneratorThemeEntry>& Themes, TArray<FJunoCaveGeneratorThemeEntry>& SortedThemes); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751B2CCE4(relative to base address)
		void SortCaveGeneratorShells(TArray<FJunoCaveGeneratorShellData>& Shells, TArray<FJunoCaveGeneratorShellData>& SortedShells); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751B2CBD8(relative to base address)
		void SortCaveGeneratorRules(TArray<FJunoCaveGeneratorRule>& Rules, TArray<FJunoCaveGeneratorRule>& SortedRules); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751B2CACC(relative to base address)
		void SetMergedData(FJunoCaveGeneratorData& Data); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751B2CA10(relative to base address)
		bool IsNativeCaveGeneratorEnabled(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751B2C9F8(relative to base address)
		UJunoCaveGeneratorPlayspaceComponent GetRootCaveGeneratorComponent(UObject* WorldContextObject); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF751B2C978(relative to base address)
		void GetMergedMultiCaveDataRegistryData(FDataRegistryType& ShellRegistry, FDataRegistryType& ThemeRegistry, FDataRegistryType& TypeRegistry, FDataRegistryType& RuleRegistry, FJunoCaveGeneratorData& ResourceData, EJunoGetMergedCaveDataRegistryDataResult& Result); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751B2C6E0(relative to base address)
		void GetMergedCaveDataRegistryData(FDataRegistryType& CaveGeneratorDataRegistry, FJunoCaveGeneratorData& ResourceData, EJunoGetMergedCaveDataRegistryDataResult& Result); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751B2C53C(relative to base address)
		void GenerateCaveWithSlotTags(AActor* WorldActor, FRandomStream& RandomStream, FJunoCaveSurfaceData& CaveSurfaceData, EJunoBiome Biome, FGameplayTagContainer& SlotTags, FBox& Bounds, UClass* SurfaceTeleporterClass, FName LayerName, FName CaveTypeName, FName CaveRuleName); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF751B2BFCC(relative to base address)
		bool GenerateCaveDataWithSlotTags(FJunoCaveGeneratorData& ResourceData, FDataRegistryType& POIDataRegistry, FRandomStream& RandomStream, FJunoCaveSurfaceData& CaveSurfaceData, EJunoBiome Biome, FGameplayTagContainer& SlotTags, FBox& Bounds, UClass* SurfaceTeleporterClass, TArray<FJunoGeneratedCaveShellData>& Shells, TArray<FJunoPOIData>& POIs, FName CaveTypeName, FName CaveRuleName); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF751B2B988(relative to base address)
		bool GenerateCaveDataWithExtendedResults(FJunoCaveGeneratorData& ResourceData, FDataRegistryType& POIDataRegistry, FRandomStream& RandomStream, FJunoCaveSurfaceData& CaveSurfaceData, EJunoBiome Biome, FGameplayTagContainer& SlotTags, FBox& Bounds, UClass* SurfaceTeleporterClass, FJunoCaveGeneratorResult& Results, FName CaveTypeName, FName CaveRuleName); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF751B2B364(relative to base address)
		bool GenerateCaveData(FJunoCaveGeneratorData& ResourceData, FDataRegistryType& POIDataRegistry, FRandomStream& RandomStream, FJunoCaveSurfaceData& CaveSurfaceData, EJunoBiome Biome, FBox& Bounds, UClass* SurfaceTeleporterClass, TArray<FJunoGeneratedCaveShellData>& Shells, TArray<FJunoPOIData>& POIs); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF751B2AF24(relative to base address)
		void GenerateCave(AActor* WorldActor, FRandomStream& RandomStream, FJunoCaveSurfaceData& CaveSurfaceData, EJunoBiome Biome, FBox& Bounds, UClass* SurfaceTeleporterClass, FName LayerName); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF751B2ABCC(relative to base address)
	};


	// Class JunoProceduralWorld.JunoCaveInternalTeleporterComponent
	// Inherited from UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x10 (0xB0 - 0xA0)
	class UJunoCaveInternalTeleporterComponent : public UGameFrameworkComponent	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY
		FName MatchID; // 0xA8(0x4)
		unsigned char UnknownData01_7[0x4]; // 0xAC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoCaveInternalTeleporterComponent");
			return ret;
		}
	};


	// Class JunoProceduralWorld.JunoLivingWorldStaticPointProvider
	// Inherited from AFortAthenaLivingWorldStaticPointProvider -> AActor -> UObject
	// Size: 0x58 (0x3E0 - 0x388)
	class AJunoLivingWorldStaticPointProvider : public AFortAthenaLivingWorldStaticPointProvider	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0x388(0x10) UNKNOWN PROPERTY
		FJunoLivingWorldPointProviderEventLimiter EventLimiter; // 0x398(0x20)
		FGuid SavedActorGuid; // 0x3B8(0x10)
		unsigned char UnknownData01_7[0x18]; // 0x3C8(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoLivingWorldStaticPointProvider");
			return ret;
		}

		void AppendFiltersTags(FGameplayTagContainer& Container); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751B6FB20(relative to base address)
	};


	// Class JunoProceduralWorld.JunoCaveLivingWorldStaticPointProvider
	// Inherited from AJunoLivingWorldStaticPointProvider -> AFortAthenaLivingWorldStaticPointProvider -> AActor -> UObject
	// Size: 0x50 (0x430 - 0x3E0)
	class AJunoCaveLivingWorldStaticPointProvider : public AJunoLivingWorldStaticPointProvider	
	{
	public:
		FName CaveShellID; // 0x3E0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x3E4(0x4) UNKNOWN PROPERTY
		TArray<FJunoCaveConditionalTags> ConditionalTags; // 0x3E8(0x10)
		FScalableFloat AssignLeashVolume; // 0x3F8(0x28)
		TWeakObjectPtr<UCaveShellSpawnEntry*> CaveShellEntry; // 0x420(0x8)
		bool bNeverEnable; // 0x428(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x429(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoCaveLivingWorldStaticPointProvider");
			return ret;
		}

		void GetCaveShellInstanceData(FJunoCaveShellInstanceData& Data, EJunoGetCaveShellInstanceDataResult& Result); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751B2EC34(relative to base address)
	};


	// Class JunoProceduralWorld.JunoCaveReturnToEntranceTeleporter
	// Inherited from UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x8 (0xA8 - 0xA0)
	class UJunoCaveReturnToEntranceTeleporter : public UGameFrameworkComponent	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoCaveReturnToEntranceTeleporter");
			return ret;
		}
	};


	// Class JunoProceduralWorld.JunoStreamingGameplayVolume
	// Inherited from AGameplayVolume -> AActor -> UObject
	// Size: 0x80 (0x3B0 - 0x330)
	class AJunoStreamingGameplayVolume : public AGameplayVolume	
	{
	public:
		unsigned char UnknownData00_3[0x20]; // 0x330(0x20) UNKNOWN PROPERTY
		FGuid SavedActorGuid; // 0x350(0x10)
		bool bSpawnedByLevelSaveRecord; // 0x360(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x361(0x7) UNKNOWN PROPERTY
		FVector BoundsExtent; // 0x368(0x18)
		FVector BoundsOffset; // 0x380(0x18)
		unsigned char UnknownData02_6[0x8]; // 0x398(0x8) UNKNOWN PROPERTY
		TArray<TWeakObjectPtr> LevelsToLoad; // 0x3A0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoStreamingGameplayVolume");
			return ret;
		}

		void Unload(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C4C5790(relative to base address)
		void SetBounds(FVector& Offset, FVector& Extent); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF751B36CD0(relative to base address)
		void Load(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF7475A8C1C(relative to base address)
	};


	// Class JunoProceduralWorld.JunoCaveShellGameplayVolume
	// Inherited from AJunoStreamingGameplayVolume -> AGameplayVolume -> AActor -> UObject
	// Size: 0x128 (0x4D8 - 0x3B0)
	class AJunoCaveShellGameplayVolume : public AJunoStreamingGameplayVolume	
	{
	public:
		FJunoCaveShellInstanceData InstanceData; // 0x3B0(0x60)
		FName ShellID; // 0x410(0x4)
		FGuid CaveGuid; // 0x414(0x10)
		unsigned char UnknownData00_6[0x4]; // 0x424(0x4) UNKNOWN PROPERTY
		TArray<FJunoCaveShellGameplayVolumeTeleporterLink> Teleporters; // 0x428(0x10)
		TArray<FJunoWorldTileStreamingLevel> LevelsToInject; // 0x438(0x10)
		int32_t PersistenceVersion; // 0x448(0x4)
		unsigned char UnknownData01_7[0x8C]; // 0x44C(0x8C) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoCaveShellGameplayVolume");
			return ret;
		}
	};


	// Class JunoProceduralWorld.JunoStreamingPlayspace
	// Inherited from AJunoPersistentPlayspace -> AFortPlayspace -> APlayspace -> AInfo -> AActor -> UObject
	// Size: 0x0 (0x808 - 0x808)
	class AJunoStreamingPlayspace : public AJunoPersistentPlayspace	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoStreamingPlayspace");
			return ret;
		}
	};


	// Class JunoProceduralWorld.JunoCaveShellPlayspace
	// Inherited from AJunoStreamingPlayspace -> AJunoPersistentPlayspace -> AFortPlayspace -> APlayspace -> AInfo -> AActor -> UObject
	// Size: 0x0 (0x808 - 0x808)
	class AJunoCaveShellPlayspace : public AJunoStreamingPlayspace	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoCaveShellPlayspace");
			return ret;
		}
	};


	// Class JunoProceduralWorld.JunoCaveBlueprintLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoCaveBlueprintLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoCaveBlueprintLibrary");
			return ret;
		}

		void SetCaveSurfaceData(AActor* Actor, TArray<FJunoCaveSurfaceData>& CaveSurfaceData, FName LayerName); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751B3068C(relative to base address)
		void SetCaveShellGateActors(AActor* ActorInShell, FName& ShellID, TArray<AActor*>& GateActors); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751B3056C(relative to base address)
		void QueryCaveSurfaceDataState(AActor* Actor, EJunoQueryCaveSurfaceDataStateResult& Result, FName LayerName); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751B303E8(relative to base address)
		EJunoQueryCaveDataResult QueryCaveShellInstanceDataState(AActor* CaveSlotActor, FGuid& CaveSlotGuid); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751B30314(relative to base address)
		void QueryCaveDataStateFromSurfaceData(AActor* POISlotActor, FJunoCaveSurfaceData& SurfaceData, EJunoQueryCaveDataResult& Result, FBox& WorldTileBounds, TArray<FJunoCaveTeleporterLink>& Teleporters); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF751B2FF28(relative to base address)
		void QueryCaveDataStateFromActor(AActor* CaveSlotActor, FGuid& CaveSlotGuid, EJunoQueryCaveDataResult& Result, FBox& WorldTileBounds, TArray<FJunoCaveTeleporterLink>& Teleporters); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF751B2FB78(relative to base address)
		bool NeedsCaveShellInstanceData(AActor* CaveSlotActor, FGuid& CaveSlotGuid); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751B2F8A8(relative to base address)
		bool IsBitSet(int32_t BitMask, int32_t Bit); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751B2F7E8(relative to base address)
		void GetCaveSurfaceDataForEntrance(AActor* Actor, FGuid& EntranceGuid, FJunoCaveSurfaceData& CaveSurfaceData, int32_t& CaveIndex, EJunoGetCaveSurfaceDataForEntranceResult& Result, bool bWorldTeleporterTransforms, FName LayerName); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF751B2F430(relative to base address)
		AJunoCaveShellGameplayVolume GetCaveShellVolumeFromArea(UObject* WorldContextObject, FBox& Area, FName ShellID); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF751B2F22C(relative to base address)
		void GetCaveShellInstanceDataFromArea(UObject* WorldContextObject, FBox& Area, FName ShellID, FJunoCaveShellInstanceData& Data, EJunoGetCaveShellInstanceDataResult& Result); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF751B2EFF4(relative to base address)
		void GetCaveShellInstanceDataFromActor(AActor* CaveShellChildActor, FName ShellID, FJunoCaveShellInstanceData& Data, EJunoGetCaveShellInstanceDataResult& Result); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751B2EE90(relative to base address)
		FJunoCaveShellInstanceData GetCaveShellInstanceData(AActor* CaveShellChildActor, FName ShellID, bool& Success); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751B2ED40(relative to base address)
		void GetCaveShellGateActors(AActor* ActorInShell, TArray<AActor*>& GateActors); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751B2EB5C(relative to base address)
		void GetCaveDataCollectionsFromRegistry(FDataRegistryType& DataRegistry, TArray<TWeakObjectPtr>& Array, EJunoGetCaveDataCollectionsFromRegistryResult& Result); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751B2EA28(relative to base address)
		void GetBestCaveShellFromArea(UObject* WorldContextObject, FBox& Area, FJunoCave& Cave, FGuid& CaveGuid, FName& ShellID, EJunoGetBestCaveResult& Result); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF751B2E7D0(relative to base address)
		TArray ExitsUsedMaskToArray(int32_t ExitsUsedMask); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751B2E65C(relative to base address)
		int32_t CreateExitsUsedMaskFromArray(TArray<int32_t>& ExitsUsed); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751B2E5A8(relative to base address)
		void CreateCaveInstanceDataForSurfaceData(AActor* POISlotActor, FJunoCaveSurfaceData& SurfaceData, TArray<FJunoGeneratedCaveShellData>& CaveShellData, EJunoCreateCaveResult& Result, FName LayerName); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751B2E33C(relative to base address)
		void CreateCaveInstanceData(AActor* CaveSlotActor, FGuid& CaveSlotGuid, TArray<FJunoGeneratedCaveShellData>& CaveShellData, EJunoCreateCaveResult& Result, FName LayerName); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF751B2E10C(relative to base address)
		void CalculateCaveShellDistance(FJunoCave& Cave, FName ShellID_A, FName ShellID_B, int32_t& Distance, EJunoCalculateCaveDistanceResult& Result); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751B2DE18(relative to base address)
		void AddCaveStateTagQuery(AActor* ActorInCave, FDelegateProperty& CaveStateQuery, bool bFireImmediately); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751B2DCC0(relative to base address)
		void AddCaveStateTag(AActor* ActorInCave, FGameplayTag StateTag); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF751B2DB80(relative to base address)
	};


	// Class JunoProceduralWorld.JunoCaveShellGateComponent
	// Inherited from UFortPlayspaceComponent -> UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x10 (0x108 - 0xF8)
	class UJunoCaveShellGateComponent : public UFortPlayspaceComponent	
	{
	public:
		TArray<TWeakObjectPtr> GateActors; // 0xF8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoCaveShellGateComponent");
			return ret;
		}
	};


	// Class JunoProceduralWorld.JunoCaveVolumePlayspaceComponent
	// Inherited from UFortPlayspaceComponent -> UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x0 (0xF8 - 0xF8)
	class UJunoCaveVolumePlayspaceComponent : public UFortPlayspaceComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoCaveVolumePlayspaceComponent");
			return ret;
		}

		void OnPlayerLeavingCaveVolume(AFortPlayerPawnAthena* PlayerPawn); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPlayerEnteringCaveVolume(AFortPlayerPawnAthena* PlayerPawn); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void NotifyActorEndOverlap(AActor* OverlappedActor, AActor* OtherActor); // Flags: Final|Native|Private, Memory Exec: 0x7FF751B2FA7C(relative to base address)
		void NotifyActorBeginOverlap(AActor* OverlappedActor, AActor* OtherActor); // Flags: Final|Native|Private, Memory Exec: 0x7FF751B2F980(relative to base address)
	};


	// Class JunoProceduralWorld.JunoCheatManager_ProceduralWorld
	// Inherited from UChildCheatManager -> UCheatManagerExtension -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoCheatManager_ProceduralWorld : public UChildCheatManager	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoCheatManager_ProceduralWorld");
			return ret;
		}

		void JunoSaveProfileGoBiomeGridScenario(FString DestFilePath); // Flags: Final|Exec|Native|Private, Memory Exec: 0x7FF74EC51B44(relative to base address)
		void JunoPOIVolumeDumpAll(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Private, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void JunoPOIVolumeDump(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Private, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void JunoPOIRerollEncounter(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Private, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void JunoPOIForceRerollEncounter(bool bForceSuccess); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Private, Memory Exec: 0x7FF74C079284(relative to base address)
		void JunoMarkWorldTilePersistenceDirty(); // Flags: Final|Exec|Native|Private, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void JunoLogStreamingVolumesDebugInfo(); // Flags: Final|BlueprintAuthorityOnly|Exec|Native|Private, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void JunoGoPOI(FName Name); // Flags: Final|Exec|Native|Private, Memory Exec: 0x7FF74DBCEC98(relative to base address)
		void JunoGoNearActor(FString ActorClassName); // Flags: Final|Exec|Native|Private, Memory Exec: 0x7FF74EC51B44(relative to base address)
		void JunoGoEvent(FName EventName); // Flags: Final|Exec|Native|Private, Memory Exec: 0x7FF74DBCEC98(relative to base address)
		void JunoGoBiome(FName Biome); // Flags: Final|Exec|Native|Private, Memory Exec: 0x7FF74DBCEC98(relative to base address)
		void JunoGoActor(FString ActorClassName); // Flags: Final|Exec|Native|Private, Memory Exec: 0x7FF74EC51B44(relative to base address)
		void JunoDumpMapTileImages(); // Flags: Final|Exec|Native|Private, Memory Exec: 0x7FF74921B8F8(relative to base address)
	};


	// Class JunoProceduralWorld.JunoGenerateTileInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoGenerateTileInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoGenerateTileInterface");
			return ret;
		}

		void GenerateTile(FJunoGenerateTileParams& Params); // Flags: Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF751B2E734(relative to base address)
	};


	// Class JunoProceduralWorld.JunoGenerateTileCommandlet
	// Inherited from UCommandlet -> UObject
	// Size: 0x8 (0x88 - 0x80)
	class UJunoGenerateTileCommandlet : public UCommandlet	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x80(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoGenerateTileCommandlet");
			return ret;
		}

		void FinishedGenerating(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74921B8F8(relative to base address)
	};


	// Class JunoProceduralWorld.JunoHLODMapActorRedirectors
	// Inherited from UObject
	// Size: 0x60 (0x88 - 0x28)
	class UJunoHLODMapActorRedirectors : public UObject	
	{
	public:
		TArray<FJunoHLODMapActorRedirectorsEntry> DefaultMapActorRedirectors; // 0x28(0x10)
		TMap<FName, FJunoActorRedirectors> MapActorRedirectorsLookup; // 0x38(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoHLODMapActorRedirectors");
			return ret;
		}
	};


	// Class JunoProceduralWorld.PCGJunoStreamingGameplayVolumePersistenceMigration
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UPCGJunoStreamingGameplayVolumePersistenceMigration : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.PCGJunoStreamingGameplayVolumePersistenceMigration");
			return ret;
		}
	};


	// Class JunoProceduralWorld.JunoHLODMapActorsPersistenceMigration
	// Inherited from UPCGJunoStreamingGameplayVolumePersistenceMigration -> UObject
	// Size: 0x18 (0x40 - 0x28)
	class UJunoHLODMapActorsPersistenceMigration : public UPCGJunoStreamingGameplayVolumePersistenceMigration	
	{
	public:
		TArray<UClass*> Classes; // 0x28(0x10)
		EJunoHLODMapActorsPersistenceMigrationLevel TargetLevel; // 0x38(0x1)
		unsigned char UnknownData00_7[0x7]; // 0x39(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoHLODMapActorsPersistenceMigration");
			return ret;
		}
	};


	// Class JunoProceduralWorld.JunoPOIIAMMigrationToHLOD
	// Inherited from UJunoHLODMapActorsPersistenceMigration -> UPCGJunoStreamingGameplayVolumePersistenceMigration -> UObject
	// Size: 0x0 (0x40 - 0x40)
	class UJunoPOIIAMMigrationToHLOD : public UJunoHLODMapActorsPersistenceMigration	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoPOIIAMMigrationToHLOD");
			return ret;
		}
	};


	// Class JunoProceduralWorld.JunoPOIIAMMigrationToNonHLOD
	// Inherited from UJunoHLODMapActorsPersistenceMigration -> UPCGJunoStreamingGameplayVolumePersistenceMigration -> UObject
	// Size: 0x0 (0x40 - 0x40)
	class UJunoPOIIAMMigrationToNonHLOD : public UJunoHLODMapActorsPersistenceMigration	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoPOIIAMMigrationToNonHLOD");
			return ret;
		}
	};


	// Class JunoProceduralWorld.JunoInstancedActorData
	// Inherited from UInstancedActorsData -> UObject
	// Size: 0x238 (0x530 - 0x2F8)
	class UJunoInstancedActorData : public UInstancedActorsData	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x2F8(0x8) UNKNOWN PROPERTY
		FJunoCompressedTransforms CompressedInstanceTransforms; // 0x300(0x230)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoInstancedActorData");
			return ret;
		}

		AJunoInstancedActorManager GetJunoManager(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7486CEC98(relative to base address)
	};


	// Class JunoProceduralWorld.JunoInstancedActorManager
	// Inherited from AInstancedActorsManager -> APartitionActor -> AActor -> UObject
	// Size: 0x30 (0x710 - 0x6E0)
	class AJunoInstancedActorManager : public AInstancedActorsManager	
	{
	public:
		unsigned char UnknownData00_3[0x28]; // 0x6E0(0x28) UNKNOWN PROPERTY
		bool bPersistentDataRestored; // 0x708(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x709(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoInstancedActorManager");
			return ret;
		}
	};


	// Class JunoProceduralWorld.JunoInstancedActorManagerHLODClonerComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x8 (0xA8 - 0xA0)
	class UJunoInstancedActorManagerHLODClonerComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoInstancedActorManagerHLODClonerComponent");
			return ret;
		}
	};


	// Class JunoProceduralWorld.JunoInstancedActorRemovalModifierVolume
	// Inherited from AInstancedActorsModifierVolume -> AActor -> UObject
	// Size: 0x0 (0x298 - 0x298)
	class AJunoInstancedActorRemovalModifierVolume : public AInstancedActorsModifierVolume	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoInstancedActorRemovalModifierVolume");
			return ret;
		}
	};


	// Class JunoProceduralWorld.JunoInstancedActorModifierVolumeComponent
	// Inherited from UInstancedActorsModifierVolumeComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x0 (0x540 - 0x540)
	class UJunoInstancedActorModifierVolumeComponent : public UInstancedActorsModifierVolumeComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoInstancedActorModifierVolumeComponent");
			return ret;
		}
	};


	// Class JunoProceduralWorld.JunoRemoveInstancesModifierVolumeComponent
	// Inherited from UJunoInstancedActorModifierVolumeComponent -> UInstancedActorsModifierVolumeComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x0 (0x540 - 0x540)
	class UJunoRemoveInstancesModifierVolumeComponent : public UJunoInstancedActorModifierVolumeComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoRemoveInstancesModifierVolumeComponent");
			return ret;
		}
	};


	// Class JunoProceduralWorld.JunoInstancedActorRepresentationActorManagement
	// Inherited from UInstancedActorsRepresentationActorManagement -> UMassRepresentationActorManagement -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoInstancedActorRepresentationActorManagement : public UInstancedActorsRepresentationActorManagement	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoInstancedActorRepresentationActorManagement");
			return ret;
		}
	};


	// Class JunoProceduralWorld.JunoInstancedActorSubsystem
	// Inherited from UInstancedActorsSubsystem -> UTickableWorldSubsystem -> UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x0 (0x330 - 0x330)
	class UJunoInstancedActorSubsystem : public UInstancedActorsSubsystem	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoInstancedActorSubsystem");
			return ret;
		}
	};


	// Class JunoProceduralWorld.JunoInstancedActorVisualizationTrait
	// Inherited from UInstancedActorsVisualizationTrait -> UMassStationaryDistanceVisualizationTrait -> UMassDistanceVisualizationTrait -> UMassEntityTraitBase -> UObject
	// Size: 0x0 (0x120 - 0x120)
	class UJunoInstancedActorVisualizationTrait : public UInstancedActorsVisualizationTrait	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoInstancedActorVisualizationTrait");
			return ret;
		}
	};


	// Class JunoProceduralWorld.JunoLifecycleComponent
	// Inherited from UInstancedActorsComponent -> UActorComponent -> UObject
	// Size: 0x60 (0x110 - 0xB0)
	class UJunoLifecycleComponent : public UInstancedActorsComponent	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0xB0(0x10) UNKNOWN PROPERTY
		TArray<FJunoLifecyclePhase> LifecyclePhases; // 0xC0(0x10)
		bool bAutoAddFinalLifecyclePhase; // 0xD0(0x1)
		bool bRepeatLifecyclePhases; // 0xD1(0x1)
		unsigned char UnknownData01_6[0x6]; // 0xD2(0x6) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnLifecyclePhaseChangedDelegate; // 0xD8(0x10)
		FMulticastInlineDelegate OnLifecycleCompletedDelegate; // 0xE8(0x10)
		UStaticMeshComponent* MeshComponent; // 0xF8(0x8)
		char StartingPhaseIndex; // 0x100(0x1)
		char CurrentPhaseIndex; // 0x101(0x1)
		unsigned char UnknownData02_7[0xE]; // 0x102(0xE) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoLifecycleComponent");
			return ret;
		}

		bool SetCurrentPhaseByIndex(char NewCurrentPhaseIndex, float TimeElapsedInNewPhase, bool bUpdateMass); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751B33068(relative to base address)
		void OnRep_CurrentPhaseIndex(char PreviousLifecyclePhaseIndex); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751B32CE8(relative to base address)
		bool HasCompletedLifecycle(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751B32C54(relative to base address)
		float GetCurrentPhaseTimeElapsed(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751B32C2C(relative to base address)
		char GetCurrentPhaseIndex(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751B32C00(relative to base address)
		bool BP_GetCurrentPhase(FJunoLifecyclePhase& OutCurrentPhase); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751B329EC(relative to base address)
		void ApplyCurrentPhaseOverrides(); // Flags: Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751B329D8(relative to base address)
	};


	// Class JunoProceduralWorld.JunoLifecycleProcessor
	// Inherited from UMassProcessor -> UObject
	// Size: 0x320 (0x3E0 - 0xC0)
	class UJunoLifecycleProcessor : public UMassProcessor	
	{
	public:
		unsigned char UnknownData00_1[0x320]; // 0xC0(0x320) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoLifecycleProcessor");
			return ret;
		}
	};


	// Class JunoProceduralWorld.JunoLifecycleVisualizationProcessor
	// Inherited from UMassProcessor -> UObject
	// Size: 0x320 (0x3E0 - 0xC0)
	class UJunoLifecycleVisualizationProcessor : public UMassProcessor	
	{
	public:
		unsigned char UnknownData00_1[0x320]; // 0xC0(0x320) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoLifecycleVisualizationProcessor");
			return ret;
		}
	};


	// Class JunoProceduralWorld.JunoLightWeightBuildingProp
	// Inherited from AActor -> UObject
	// Size: 0x0 (0x290 - 0x290)
	class AJunoLightWeightBuildingProp : public AActor	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoLightWeightBuildingProp");
			return ret;
		}
	};


	// Class JunoProceduralWorld.JunoLightWeightBuildingGameplayActor
	// Inherited from AActor -> UObject
	// Size: 0x0 (0x290 - 0x290)
	class AJunoLightWeightBuildingGameplayActor : public AActor	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoLightWeightBuildingGameplayActor");
			return ret;
		}
	};


	// Class JunoProceduralWorld.JunoLightWeightFortStaticMeshActor
	// Inherited from AActor -> UObject
	// Size: 0x0 (0x290 - 0x290)
	class AJunoLightWeightFortStaticMeshActor : public AActor	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoLightWeightFortStaticMeshActor");
			return ret;
		}
	};


	// Class JunoProceduralWorld.JunoMassHydrationSignalProcessorBase
	// Inherited from UMassSignalProcessorBase -> UMassProcessor -> UObject
	// Size: 0x0 (0x4A0 - 0x4A0)
	class UJunoMassHydrationSignalProcessorBase : public UMassSignalProcessorBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoMassHydrationSignalProcessorBase");
			return ret;
		}
	};


	// Class JunoProceduralWorld.JunoMassHydrationSignalProcessor
	// Inherited from UJunoMassHydrationSignalProcessorBase -> UMassSignalProcessorBase -> UMassProcessor -> UObject
	// Size: 0x0 (0x4A0 - 0x4A0)
	class UJunoMassHydrationSignalProcessor : public UJunoMassHydrationSignalProcessorBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoMassHydrationSignalProcessor");
			return ret;
		}
	};


	// Class JunoProceduralWorld.JunoMassDehydrationSignalProcessor
	// Inherited from UJunoMassHydrationSignalProcessorBase -> UMassSignalProcessorBase -> UMassProcessor -> UObject
	// Size: 0x0 (0x4A0 - 0x4A0)
	class UJunoMassDehydrationSignalProcessor : public UJunoMassHydrationSignalProcessorBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoMassDehydrationSignalProcessor");
			return ret;
		}
	};


	// Class JunoProceduralWorld.JunoMinimapGenerator
	// Inherited from AActor -> UObject
	// Size: 0x10 (0x2A0 - 0x290)
	class AJunoMinimapGenerator : public AActor	
	{
	public:
		FMulticastInlineDelegate OnTexture2DPackageCreatedDelegate; // 0x290(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoMinimapGenerator");
			return ret;
		}

		UPackage CreatePackageAndSaveTexture2D(UTextureRenderTarget2D* RenderTarget, FString PackageName); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751B32B1C(relative to base address)
	};


	// Class JunoProceduralWorld.JunoOutOfBoundsTile
	// Inherited from AActor -> UObject
	// Size: 0x0 (0x290 - 0x290)
	class AJunoOutOfBoundsTile : public AActor	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoOutOfBoundsTile");
			return ret;
		}
	};


	// Class JunoProceduralWorld.JunoPawnComponent_StreamingSourcesProvider
	// Inherited from UJunoPawnComponent -> UFortPawnComponent -> UPawnComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x68 (0x118 - 0xB0)
	class UJunoPawnComponent_StreamingSourcesProvider : public UJunoPawnComponent	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0xB0(0x8) UNKNOWN PROPERTY
		FVector AboveGroundLocation; // 0xB8(0x18)
		FRotator AboveGroundRotation; // 0xD0(0x18)
		FVector BelowGroundLocation; // 0xE8(0x18)
		FRotator BelowGroundRotation; // 0x100(0x18)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoPawnComponent_StreamingSourcesProvider");
			return ret;
		}
	};


	// Class JunoProceduralWorld.JunoPCGVolume
	// Inherited from AActor -> UObject
	// Size: 0x70 (0x300 - 0x290)
	class AJunoPCGVolume : public AActor	
	{
	public:
		TMap<FName, FJunoCompressedPointList> CompressedData; // 0x290(0x50)
		bool bIsCompressedDataValid; // 0x2E0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x2E1(0x7) UNKNOWN PROPERTY
		UBoxComponent* SceneRootComponent; // 0x2E8(0x8)
		UPCGComponent* GeneratorComponent; // 0x2F0(0x8)
		UPCGComponent* SpawnerComponent; // 0x2F8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoPCGVolume");
			return ret;
		}

		bool IsSpawnerBusy(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751B32CB4(relative to base address)
		bool IsGeneratorBusy(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751B32C80(relative to base address)
		int32_t CalculateCompressedDataSize(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751B32AF8(relative to base address)
		int32_t CalcCompressedObjectCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751B32AD4(relative to base address)
	};


	// Class JunoProceduralWorld.JunoPOIPreselectorModifierInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoPOIPreselectorModifierInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoPOIPreselectorModifierInterface");
			return ret;
		}
	};


	// Class JunoProceduralWorld.JunoPOIPreselectorComponent
	// Inherited from UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x130 (0x1D0 - 0xA0)
	class UJunoPOIPreselectorComponent : public UGameFrameworkComponent	
	{
	public:
		TArray<FJunoPOIManagerSlot> WorldTileSlots; // 0xA0(0x10)
		unsigned char UnknownData00_6[0x48]; // 0xB0(0x48) UNKNOWN PROPERTY
		TArray<FPCGJunoWorldTilePOI> DebugSpawnPOIs; // 0xF8(0x10)
		FDataRegistryType POIDataRegistry; // 0x108(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x10C(0x4) UNKNOWN PROPERTY
		AJunoWorldTile* WorldTile; // 0x110(0x8)
		FDataTableRowHandle TuningParams; // 0x118(0x10)
		unsigned char UnknownData02_7[0xA8]; // 0x128(0xA8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoPOIPreselectorComponent");
			return ret;
		}

		void OnWorldTileReady(FVector WorldOwnerStartLocation, FVector SessionStartLocation); // Flags: Final|Native|Protected|HasDefaults, Memory Exec: 0x7FF751B32E60(relative to base address)
		void OnWorldTilePersistenceAvailable(AJunoPersistentPlayspace* PersistentPlayspace, bool bSuccess); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751B32D98(relative to base address)
		void OnWorldTileContentsAvailable(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751B32D84(relative to base address)
		void BeginPreselection(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751B32AC0(relative to base address)
	};


	// Class JunoProceduralWorld.JunoCaveGeneratorInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoCaveGeneratorInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoCaveGeneratorInterface");
			return ret;
		}

		void GenerateCave(FJunoCaveSurfaceData& CaveSurfaceData, EJunoBiome Biome, int32_t CaveIndex, FBox& Bounds); // Flags: Event|Public|HasOutParms|HasDefaults|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class JunoProceduralWorld.JunoPOISelectorComponent
	// Inherited from UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x1B0 (0x250 - 0xA0)
	class UJunoPOISelectorComponent : public UGameFrameworkComponent	
	{
	public:
		FDataRegistryType DataRegistryType; // 0xA0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0xA4(0x4) UNKNOWN PROPERTY
		TArray<FJunoPOISelectorTeleporterClass> TeleporterClasses; // 0xA8(0x10)
		unsigned char UnknownData01_6[0x78]; // 0xB8(0x78) UNKNOWN PROPERTY
		TSet<EJunoWorldTilePOIType> POITypes; // 0x130(0x50)
		FGameplayTagContainer CaveGenerationTags; // 0x180(0x20)
		FGameplayTagContainer RequiredPOITags; // 0x1A0(0x20)
		bool bRandomizeRotation; // 0x1C0(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x1C1(0x7) UNKNOWN PROPERTY
		FJunoPOISelectorParams Params; // 0x1C8(0x30)
		TWeakObjectPtr<UJunoPOIPreselectorComponent*> PreSelectorComponent; // 0x1F8(0x8)
		unsigned char UnknownData03_6[0x8]; // 0x200(0x8) UNKNOWN PROPERTY
		FJunoCaveSurfaceData CaveSurfaceData; // 0x208(0x38)
		unsigned char UnknownData04_7[0x10]; // 0x240(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoPOISelectorComponent");
			return ret;
		}

		void TriggerCaveGeneration(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751B36FF0(relative to base address)
		bool IsPOIPreselectorActorReady(AActor* Actor); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF751B36944(relative to base address)
		bool IsNativePOISelectorEnabled(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751B3692C(relative to base address)
		void DoSelection(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF751B35D10(relative to base address)
		int32_t CaveGridResolution(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751B350C0(relative to base address)
		void BeginPOISelection(FJunoPOISelectorParams& Params); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751B34F70(relative to base address)
	};


	// Class JunoProceduralWorld.JunoProceduralWorldBlueprintLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoProceduralWorldBlueprintLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoProceduralWorldBlueprintLibrary");
			return ret;
		}

		FBox UnionActorBounds(TArray<AActor*>& Actors); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF751B37004(relative to base address)
		void SetNanitePositionPrecision(ALandscape* Landscape, int32_t NanitePrecision); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74E2480A4(relative to base address)
		void SetGridCellSize(AActor* WorldContextObject, FName GridName, float CellSize, float LoadingRange, FVector2D Origin); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF751B36E30(relative to base address)
		void SetBoxBrushSize(AActor* Volume, FVector& Size); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74F16CFD0(relative to base address)
		bool SaveCurrentLevelAs(FString NewPackageName); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74E2124F8(relative to base address)
		void RunParallelCommandlets(FText& DialogueTitle, TArray<FString>& Commands, int32_t MaxProcesses); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751B36B18(relative to base address)
		void JunoCreateLevel(FJunoCreateLevelParams& Params, TWeakObjectPtr<UWorld*>& CreatedLevel, EJunoCreateLevelResult& Result); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751B369D0(relative to base address)
		UJunoWorldRegistryManager GetJunoWorldRegistry(UObject* WorldContextObject); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751B368AC(relative to base address)
		void FindNextMatchingPOIResourceEx(FJunoRandomTableKeysIterator& Iterator, UDataTable* DataTable, EJunoPOISize Size, EJunoBiome Biome, FPCGJunoWorldTilePOI& FoundPOI, EJunoFindNextMatchingPOIResourceResult& Result); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751B364CC(relative to base address)
		void FindNextMatchingPOIResource(FJunoRandomTableKeysIterator& Iterator, UDataTable* DataTable, EJunoPOISize SlotPOISize, TArray<FName>& SlotTags, FPCGJunoWorldTilePOI& FoundPOI, EJunoFindNextMatchingPOIResourceResult& Result, bool bRemoveFromIterator); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751B36068(relative to base address)
		void FindAllResourcesInFolder(FString Folder, UClass* AssetClass, TArray<FSoftObjectPath>& OutPaths); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751B35F14(relative to base address)
		void EnableLandscapeNaniteSkirts(ALandscape* Landscape, bool bEnable, float SkirtDepth); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF751B35E30(relative to base address)
		bool DoesOverlapAnyActorsOfClass(ABuildingActor* InBuildingActor, UClass* ClassToTest, bool bTestActorsIfSpawned); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751B35D24(relative to base address)
		void DisableLandscapeEditLayers(ALandscape* Landscape); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74C088608(relative to base address)
		TArray DeterministicShuffleKeys(FRandomStream& RandomSource, TArray<FName>& Array); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF751B35B88(relative to base address)
		void CreateJunoWPLevelFromActors(FString LevelPackageName, TArray<AActor*>& Actors, TWeakObjectPtr<UWorld*>& CreatedLevel, bool bUseWorldPartition, FName GridName, float LoadingRange, int32_t WorldPartitionGridCellSize, FVector2D WorldPartitionGridCellOrigin, UHLODLayer* DefaultHLODLayer, EWorldPartitionServerStreamingMode ServerStreamingMode, EWorldPartitionServerStreamingOutMode ServerStreamingOutMode); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF751B354B8(relative to base address)
		FJunoRandomTableKeysIterator CreateJunoRandomTableKeysIterator(FRandomStream& RandomStream, TArray<FName>& Keys); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF751B3534C(relative to base address)
		void CompareTagSets(TSet<FName>& Source, TSet<FName>& Target, EJunoCompareTagSetsResult& Result); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751B350E4(relative to base address)
		FVector CalcPOISizeExtent(EJunoPOISize Size); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751B3502C(relative to base address)
		void ApplyMaterialToLandscape(ALandscapeProxy* Landscape, ULandscapeMaterialInstanceConstant* MaterialBase); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF751B34E90(relative to base address)
		void ApplyLandscapeTileSettings(ALandscape* LandscapeTile, float LODBlendRange, bool bUseCompressedHeightmapStorage, bool bDisableRuntimeGrassMapGeneration); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF751B34D70(relative to base address)
	};


	// Class JunoProceduralWorld.JunoProceduralWorldDeveloperSettings
	// Inherited from UDeveloperSettings -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UJunoProceduralWorldDeveloperSettings : public UDeveloperSettings	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoProceduralWorldDeveloperSettings");
			return ret;
		}
	};


	// Class JunoProceduralWorld.JunoProceduralWorldSettings
	// Inherited from UFortPlayspaceComponent -> UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0xF0 (0x1E8 - 0xF8)
	class UJunoProceduralWorldSettings : public UFortPlayspaceComponent	
	{
	public:
		bool bEnableTiledWorldsInPIE; // 0xF8(0x1)
		EJunoLevelInstanceMode Caves_LevelInstanceMode; // 0xF9(0x1)
		EJunoLevelInstanceMode POI_LevelInstanceMode; // 0xFA(0x1)
		bool bEnablePOI_HLODs; // 0xFB(0x1)
		int32_t MaxPOIsPerTile; // 0xFC(0x4)
		FName InjectedPOI_GridName; // 0x100(0x4)
		FName InjectedPOI_HLODGridName; // 0x104(0x4)
		FName InjectedCave_GridName; // 0x108(0x4)
		FName InjectedCave_HLODGridName; // 0x10C(0x4)
		int32_t POIStreamingPriority; // 0x110(0x4)
		int32_t CaveStreamingPriority; // 0x114(0x4)
		int64_t TileSize; // 0x118(0x8)
		int64_t WorldSize; // 0x120(0x8)
		int64_t GenerateWorldDiameter; // 0x128(0x8)
		FIntVector WorldOriginTileOffset; // 0x130(0xC)
		unsigned char UnknownData00_6[0x4]; // 0x13C(0x4) UNKNOWN PROPERTY
		int64_t DynamicGridLevels; // 0x140(0x8)
		float DynamicGridWorldMaxExtent; // 0x148(0x4)
		float DynamicGridLoadingRange; // 0x14C(0x4)
		FVector OffsetTerrain; // 0x150(0x18)
		UClass* TileSelectionClass; // 0x168(0x8)
		UClass* WorldTileClass; // 0x170(0x8)
		UClass* OutOfBoundsTileActor; // 0x178(0x8)
		float TerrainElevationMinimum; // 0x180(0x4)
		float TerrainElevationMaximum; // 0x184(0x4)
		UClass* CaveVolumeClass; // 0x188(0x8)
		UClass* POIVolumeClass; // 0x190(0x8)
		TWeakObjectPtr<UDataTable*> POIResourcesTable; // 0x198(0x20)
		FDataRegistryType POIRegistryType; // 0x1B8(0x4)
		FDataRegistryType TileSelectorRegistryType; // 0x1BC(0x4)
		TWeakObjectPtr<UWorld*> TestOverlayLevel; // 0x1C0(0x20)
		FName TileSelectorOverride; // 0x1E0(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x1E4(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoProceduralWorldSettings");
			return ret;
		}
	};


	// Class JunoProceduralWorld.JunoResetPlayspacePersistenceMigration
	// Inherited from UPCGJunoStreamingGameplayVolumePersistenceMigration -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoResetPlayspacePersistenceMigration : public UPCGJunoStreamingGameplayVolumePersistenceMigration	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoResetPlayspacePersistenceMigration");
			return ret;
		}
	};


	// Class JunoProceduralWorld.JunoServerInstancedActorSpawnerSubsystem
	// Inherited from UServerInstancedActorsSpawnerSubsystem -> UMassActorSpawnerSubsystem -> UMassSubsystemBase -> UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x0 (0x118 - 0x118)
	class UJunoServerInstancedActorSpawnerSubsystem : public UServerInstancedActorsSpawnerSubsystem	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoServerInstancedActorSpawnerSubsystem");
			return ret;
		}
	};


	// Class JunoProceduralWorld.JunoStaticMeshPoolSubsystem
	// Inherited from UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x8 (0x38 - 0x30)
	class UJunoStaticMeshPoolSubsystem : public UWorldSubsystem	
	{
	public:
		AJunoStaticMeshPoolActor* StaticMeshPoolActor; // 0x30(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoStaticMeshPoolSubsystem");
			return ret;
		}
	};


	// Class JunoProceduralWorld.JunoStreamingGameplayVolumeDebugger
	// Inherited from UTickableWorldSubsystem -> UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x0 (0x40 - 0x40)
	class UJunoStreamingGameplayVolumeDebugger : public UTickableWorldSubsystem	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoStreamingGameplayVolumeDebugger");
			return ret;
		}
	};


	// Class JunoProceduralWorld.JunoSurfaceTargetTeleporterComponent
	// Inherited from UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x8 (0xA8 - 0xA0)
	class UJunoSurfaceTargetTeleporterComponent : public UGameFrameworkComponent	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoSurfaceTargetTeleporterComponent");
			return ret;
		}
	};


	// Class JunoProceduralWorld.JunoTerrainCachedComponentData
	// Inherited from UJunoLandscapeCachedComponentData -> UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x0 (0xF0 - 0xF0)
	class UJunoTerrainCachedComponentData : public UJunoLandscapeCachedComponentData	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoTerrainCachedComponentData");
			return ret;
		}
	};


	// Class JunoProceduralWorld.JunoTerrainGenerationSystem
	// Inherited from UTickableWorldSubsystem -> UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x7A8 (0x7E8 - 0x40)
	class UJunoTerrainGenerationSystem : public UTickableWorldSubsystem	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x40(0x8) UNKNOWN PROPERTY
		TSet<ALandscapeProxy*> TrackedLandscapes; // 0x48(0x50)
		TSet<UJunoLandscapeComponent*> TrackedLandscapeComponents; // 0x98(0x50)
		UJunoLandscapeManager* JunoLandscapeManager; // 0xE8(0x8)
		TMap<FName, UJunoLandscapeLayersData*> PluginLayerData; // 0xF0(0x50)
		TMap<FName, UJunoLandscapeCachedComponentData*> PluginCachedComponentData; // 0x140(0x50)
		unsigned char UnknownData01_6[0x2A8]; // 0x190(0x2A8) UNKNOWN PROPERTY
		FJunoTerrainGenerationConfiguration VisualsConfiguration; // 0x438(0x70)
		FJunoTerrainGenerationConfiguration HeightmapConfiguration; // 0x4A8(0x70)
		FJunoTerrainGenerationConfiguration GrassConfiguration; // 0x518(0x70)
		FJunoTerrainGenerationConfiguration CollisionConfiguration; // 0x588(0x70)
		FJunoTerrainGenerationConfiguration WeightmapConfiguration; // 0x5F8(0x70)
		FJunoTerrainGenerationConfiguration WaterConfiguration; // 0x668(0x70)
		unsigned char UnknownData02_6[0x10]; // 0x6D8(0x10) UNKNOWN PROPERTY
		TArray<FName> WeightmapsToGather; // 0x6E8(0x10)
		bool bEnablePhysicsAndGrassStripping; // 0x6F8(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x6F9(0x7) UNKNOWN PROPERTY
		TArray<FString> ExcludePhysicsAndGrassStrippingPlatforms; // 0x700(0x10)
		bool bEnablePCGCacheStripping; // 0x710(0x1)
		unsigned char UnknownData04_6[0x7]; // 0x711(0x7) UNKNOWN PROPERTY
		TArray<FString> ExcludePCGCacheStrippingPlatforms; // 0x718(0x10)
		UJunoLandscapeCustomMaterial* WaterNavigationMaterial; // 0x728(0x8)
		UJunoLandscapeCustomMaterial* WaterIdentificationMaterial; // 0x730(0x8)
		UJunoLandscapeDynamicCustomMaterial* WaterIdentificationMaterialDynamic; // 0x738(0x8)
		UJunoLandscapeDynamicCustomMaterial* WaterNavigationMaterialDynamic; // 0x740(0x8)
		UJunoLandscapeCustomMaterial* RiverIdentificationMaterial; // 0x748(0x8)
		UJunoLandscapeCustomMaterial* LakeIdentificationMaterial; // 0x750(0x8)
		UTextureRenderTarget2D* WaterBodyIdentificationTexture; // 0x758(0x8)
		UTextureRenderTarget2D* WaterIdentificationFinal; // 0x760(0x8)
		unsigned char UnknownData05_7[0x80]; // 0x768(0x80) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoTerrainGenerationSystem");
			return ret;
		}

		void ValidateSavedTiles(); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void OnProxyDestroyed(AActor* DestroyedActor); // Flags: Final|Native|Private, Memory Exec: 0x7FF751B3A650(relative to base address)
		FJunoTerrainWaterInformation GetWaterInformationInDirection(FVector Location, FVector Direction); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751B3A220(relative to base address)
		FJunoTerrainWaterInformation GetWaterInformationAtLocation(FVector Location); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751B3A0C8(relative to base address)
		TArray GetInterpolatedWaterInformation(FVector Location, bool& OutLocationIsWater); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751B39CE8(relative to base address)
		TArray GetInterpolatedOceanInformation(FVector Location, bool& OutLocationIsOcean); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751B39B0C(relative to base address)
		void GenerateServerPrecachedData(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void ForceSaveForMissingLayers(); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void FixupWorldLandscapeWeightmapLayers(UObject* WorldContextObject); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74C088608(relative to base address)
		void FixupAllJunoLandscapeWeightmapLayers(); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74921B8F8(relative to base address)
	};


	// Class JunoProceduralWorld.JunoTerrainSystemAssets
	// Inherited from UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x20 (0x50 - 0x30)
	class UJunoTerrainSystemAssets : public UPrimaryDataAsset	
	{
	public:
		UJunoLandscapeCustomMaterial* WaterNavigationMaterial; // 0x30(0x8)
		UJunoLandscapeCustomMaterial* WaterIdentificationMaterial; // 0x38(0x8)
		UJunoLandscapeCustomMaterial* RiverIdentificationMaterial; // 0x40(0x8)
		UJunoLandscapeCustomMaterial* LakeIdentificationMaterial; // 0x48(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoTerrainSystemAssets");
			return ret;
		}
	};


	// Class JunoProceduralWorld.JunoTerrainMaterialCollector
	// Inherited from UJunoLandscapeExternalMaterialsCollector -> UObject
	// Size: 0x70 (0x98 - 0x28)
	class UJunoTerrainMaterialCollector : public UJunoLandscapeExternalMaterialsCollector	
	{
	public:
		TArray<FName> Biomes; // 0x28(0x10)
		TArray<FName> BorderNames; // 0x38(0x10)
		TMap<FName, FName> SwappableBiomeNames; // 0x48(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoTerrainMaterialCollector");
			return ret;
		}
	};


	// Class JunoProceduralWorld.JunoTileGridPersistenceFeatureData
	// Inherited from UJunoBasePFWPersistenceFeatureData -> UObject
	// Size: 0x148 (0x1A0 - 0x58)
	class UJunoTileGridPersistenceFeatureData : public UJunoBasePFWPersistenceFeatureData	
	{
	public:
		TMap<FName, FPersistenceFrameworkLevelSaveSpawnablePtr> Tiles; // 0x58(0x50)
		FJunoTileGridSaveData TileSaveData; // 0xA8(0xF8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoTileGridPersistenceFeatureData");
			return ret;
		}
	};


	// Class JunoProceduralWorld.JunoTileGridPersistenceFeatureModule
	// Inherited from UPersistenceFrameworkModule -> UObject
	// Size: 0x0 (0xE0 - 0xE0)
	class UJunoTileGridPersistenceFeatureModule : public UPersistenceFrameworkModule	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoTileGridPersistenceFeatureModule");
			return ret;
		}
	};


	// Class JunoProceduralWorld.JunoTileGridPersistenceFeatureData_Container
	// Inherited from UJunoBasePFWPersistenceFeatureDataContainer -> UJunoBasePFWContainer -> UPersistenceFrameworkContainer -> UObject
	// Size: 0x0 (0x1E0 - 0x1E0)
	class UJunoTileGridPersistenceFeatureData_Container : public UJunoBasePFWPersistenceFeatureDataContainer	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoTileGridPersistenceFeatureData_Container");
			return ret;
		}
	};


	// Class JunoProceduralWorld.JunoTilePOIStreamingComponent
	// Inherited from UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x20 (0xC0 - 0xA0)
	class UJunoTilePOIStreamingComponent : public UGameFrameworkComponent	
	{
	public:
		unsigned char UnknownData00_1[0x20]; // 0xA0(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoTilePOIStreamingComponent");
			return ret;
		}

		void OnPOISelectionComplete(AJunoWorldTile* WorldTile); // Flags: Final|Native|Private, Memory Exec: 0x7FF751B3A5D0(relative to base address)
		void GetPOILocationFromTile(FVector& TileLocation, FName POILayerName, FName POIRegistryName, FDelegateProperty& OnFinished); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF751B39EC4(relative to base address)
	};


	// Class JunoProceduralWorld.JunoTilesetSubsystem
	// Inherited from UEngineSubsystem -> UDynamicSubsystem -> USubsystem -> UObject
	// Size: 0xF0 (0x120 - 0x30)
	class UJunoTilesetSubsystem : public UEngineSubsystem	
	{
	public:
		unsigned char UnknownData00_1[0xF0]; // 0x30(0xF0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoTilesetSubsystem");
			return ret;
		}
	};


	// Class JunoProceduralWorld.JunoTileSubsystem
	// Inherited from UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x158 (0x188 - 0x30)
	class UJunoTileSubsystem : public UWorldSubsystem	
	{
	public:
		unsigned char UnknownData00_3[0x18]; // 0x30(0x18) UNKNOWN PROPERTY
		UJunoPlayspacePersistenceFeatureHelper* TileGridPersistenceFeatureHelper; // 0x48(0x8)
		UJunoWorldTileSelectionBase* TileSelectionInterfaceObject; // 0x50(0x8)
		TMap<FName, AActor*> OutOfBoundsActors; // 0x58(0x50)
		unsigned char UnknownData01_7[0xE0]; // 0xA8(0xE0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoTileSubsystem");
			return ret;
		}

		void OnSpawnPositionSet(FJunoPlayerSpawnLocationInfo& Info); // Flags: Final|Native|Public|HasOutParms, Memory Exec: 0x7FF751B3A708(relative to base address)
		void HandlePossessedPawnChanged(APawn* OldPawn, APawn* Pawn); // Flags: Final|Native|Private, Memory Exec: 0x7FF751B3A44C(relative to base address)
	};


	// Class JunoProceduralWorld.JunoTileTrackingSubsystem
	// Inherited from UWorldSubsystem -> USubsystem -> UObject
	// Size: 0xE8 (0x118 - 0x30)
	class UJunoTileTrackingSubsystem : public UWorldSubsystem	
	{
	public:
		unsigned char UnknownData00_1[0xE8]; // 0x30(0xE8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoTileTrackingSubsystem");
			return ret;
		}
	};


	// Class JunoProceduralWorld.JunoTransitionCaveEntranceTeleporterComponent
	// Inherited from UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x28 (0xC8 - 0xA0)
	class UJunoTransitionCaveEntranceTeleporterComponent : public UGameFrameworkComponent	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY
		FDataRegistryId AdditionalPOI; // 0xA8(0x8)
		FName TransitionId; // 0xB0(0x4)
		FName PreselectorLayerName; // 0xB4(0x4)
		unsigned char UnknownData01_7[0x10]; // 0xB8(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoTransitionCaveEntranceTeleporterComponent");
			return ret;
		}

		void OnWorldTilePreselectionFinished(AJunoWorldTile* WorldTile); // Flags: Final|Native|Public, Memory Exec: 0x7FF751B3A7CC(relative to base address)
	};


	// Class JunoProceduralWorld.JunoTransitionCaveExitTeleporterComponent
	// Inherited from UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x38 (0xD8 - 0xA0)
	class UJunoTransitionCaveExitTeleporterComponent : public UGameFrameworkComponent	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY
		FDataRegistryId AdditionalPOI; // 0xA8(0x8)
		FName TransitionId; // 0xB0(0x4)
		FName PreselectorLayerName; // 0xB4(0x4)
		TArray<TWeakObjectPtr> PlayerControllers; // 0xB8(0x10)
		unsigned char UnknownData01_7[0x10]; // 0xC8(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoTransitionCaveExitTeleporterComponent");
			return ret;
		}

		void OnWorldTilePreselectionFinished(AJunoWorldTile* WorldTile); // Flags: Final|Native|Public, Memory Exec: 0x7FF751B3A84C(relative to base address)
	};


	// Class JunoProceduralWorld.JunoWaterSplineInjector
	// Inherited from UActorComponent -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UJunoWaterSplineInjector : public UActorComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoWaterSplineInjector");
			return ret;
		}

		void InjectSplineGuideIntoWaterBody(FJunoWaterSplineInjectorParams& Params); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751B3A50C(relative to base address)
		void ForceWaterUpdate(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74921B8F8(relative to base address)
	};


	// Class JunoProceduralWorld.JunoWorldLocalEnvironmentComponent
	// Inherited from UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x178 (0x218 - 0xA0)
	class UJunoWorldLocalEnvironmentComponent : public UGameFrameworkComponent	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0xA0(0x8) UNKNOWN PROPERTY
		FJunoBiomeInfoQueryResult LocalBiome; // 0xA8(0x48)
		FJunoBiomeInfoQueryResult ServerBiome; // 0xF0(0x48)
		TArray<FJunoWaterLocationResult> WaterDirectionInformation; // 0x138(0x10)
		FJunoWaterLocationResult LookDirectionWaterInformation; // 0x148(0x50)
		bool bShouldUpdateWaterLocation; // 0x198(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x199(0x3) UNKNOWN PROPERTY
		TWeakObjectPtr<AJunoWorldTile*> WorldTile; // 0x19C(0x8)
		unsigned char UnknownData02_6[0x4]; // 0x1A4(0x4) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnJunoEnvironmentChanged; // 0x1A8(0x10)
		unsigned char UnknownData03_6[0x38]; // 0x1B8(0x38) UNKNOWN PROPERTY
		FGuid CaveGuid; // 0x1F0(0x10)
		TWeakObjectPtr<UJunoWorldRegistryManager*> WeakRegistryManager; // 0x200(0x8)
		unsigned char UnknownData04_7[0x10]; // 0x208(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoWorldLocalEnvironmentComponent");
			return ret;
		}

		void OnRep_ServerBiome(); // Flags: Final|Native|Private, Memory Exec: 0x7FF751B3A6D0(relative to base address)
	};


	// Class JunoProceduralWorld.JunoWorldTilePlayspaceComponent
	// Inherited from UFortPlayspaceComponent -> UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x0 (0xF8 - 0xF8)
	class UJunoWorldTilePlayspaceComponent : public UFortPlayspaceComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoWorldTilePlayspaceComponent");
			return ret;
		}
	};


	// Class JunoProceduralWorld.JunoWorldTile
	// Inherited from AJunoStreamingGameplayVolume -> AGameplayVolume -> AActor -> UObject
	// Size: 0x3F0 (0x7A0 - 0x3B0)
	class AJunoWorldTile : public AJunoStreamingGameplayVolume	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x3B0(0x8) UNKNOWN PROPERTY
		FPCGJunoWorldTile TileInformation; // 0x3B8(0x130)
		FJunoWorldPartitionPersistentDataHandler WorldPartitionPersistentDataHandler; // 0x4E8(0x50)
		FJunoWorldTileStreamingLevelFastArray InjectedLevels; // 0x538(0x120)
		unsigned char UnknownData01_6[0x10]; // 0x658(0x10) UNKNOWN PROPERTY
		int32_t InjectedLevelCount; // 0x668(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x66C(0x4) UNKNOWN PROPERTY
		UWorldPartition* InjectedObjectsWorldPartition; // 0x670(0x8)
		unsigned char UnknownData03_6[0x10]; // 0x678(0x10) UNKNOWN PROPERTY
		TMap<FGuid, AJunoTeleporter*> POITeleporters; // 0x688(0x50)
		unsigned char UnknownData04_7[0xC8]; // 0x6D8(0xC8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoWorldTile");
			return ret;
		}

		void OnUnloadBegin(ULevel* Level); // Flags: Final|Native|Private, Memory Exec: 0x7FF751B471B8(relative to base address)
		bool IsTestLevelWorldTile(); // Flags: Final|Native|Private|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF748CDD424(relative to base address)
		bool IsEventTile(FName EventName); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751B46AB4(relative to base address)
		void GetJunoWorldTileTransform(AActor* ActorInWorldTile, FTransform& Transform, EJunoGetWorldTileTransformResult& Result); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF751B46864(relative to base address)
		void GetJunoWorldTileBounds(AActor* ActorInWorldTile, FBox& TileBounds, EJunoGetWorldTileBoundsResult& Result); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF751B46708(relative to base address)
		FName GetEvent(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751B465F4(relative to base address)
		void ClientOnAllLevelsLoaded(); // Flags: Final|Native|Private, Memory Exec: 0x7FF7486C1414(relative to base address)
		bool AreWorldTileContentsReady(); // Flags: Final|Native|Private|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751B45874(relative to base address)
		bool ArePositionsInSameWorldTile(UObject* WorldContextObject, FVector& LocationA, FVector& LocationB); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF751B456C0(relative to base address)
		void AddTileInformationTags(FGameplayTagContainer& InTags); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74E311514(relative to base address)
	};


	// Class JunoProceduralWorld.JunoWorldTileDebugger
	// Inherited from UTickableWorldSubsystem -> UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x0 (0x40 - 0x40)
	class UJunoWorldTileDebugger : public UTickableWorldSubsystem	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoWorldTileDebugger");
			return ret;
		}
	};


	// Class JunoProceduralWorld.JunoTestPOIMarker
	// Inherited from AActor -> UObject
	// Size: 0x8 (0x298 - 0x290)
	class AJunoTestPOIMarker : public AActor	
	{
	public:
		float DebugBoxSize; // 0x290(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x294(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoTestPOIMarker");
			return ret;
		}
	};


	// Class JunoProceduralWorld.JunoWorldTileControllerComponent
	// Inherited from UFortControllerComponent -> UControllerComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x0 (0xA8 - 0xA8)
	class UJunoWorldTileControllerComponent : public UFortControllerComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoWorldTileControllerComponent");
			return ret;
		}

		void ServerCheckWorldTileState(); // Flags: Net|NetReliableNative|Event|Public|NetServer, Memory Exec: 0x7FF74E4851A4(relative to base address)
		void ClientCheckWorldTileState(TArray<FJunoDebugWorldTileState> WorldTileState); // Flags: Final|Net|NetReliableNative|Event|Private|NetClient, Memory Exec: 0x7FF751B4589C(relative to base address)
	};


	// Class JunoProceduralWorld.JunoCaveDataCollectionBase
	// Inherited from UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UJunoCaveDataCollectionBase : public UPrimaryDataAsset	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoCaveDataCollectionBase");
			return ret;
		}
	};


	// Class JunoProceduralWorld.JunoWorldTileLayoutInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoWorldTileLayoutInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoWorldTileLayoutInterface");
			return ret;
		}

		bool IsTileOutOfBounds(FIntPoint TileCoord); // Flags: Native|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF751B47098(relative to base address)
		bool IsLocationOutOfBounds(FVector2D Location); // Flags: Native|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF751B46B40(relative to base address)
		int32_t GetWorldSize(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF751B46A90(relative to base address)
		FIntPoint GetWorldOriginTileOffset(); // Flags: Native|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF751B46A60(relative to base address)
		int32_t GetTileSize(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF751B46A3C(relative to base address)
		bool GetShouldDebugDrawDetailedTiles(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF750DCD6E8(relative to base address)
		int32_t GetRandomStreamInitialSeed(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF74C37692C(relative to base address)
		TMap GetExistingEventTiles(FName EventName); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF751B46644(relative to base address)
		int32_t GetEventDebugDrawIndex(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF751B46620(relative to base address)
		TArray GetAllValidCoordinates(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF751B465B0(relative to base address)
		TMap GetAllExistingTiles(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF751B46550(relative to base address)
		void DrawDebugSphere(FVector& Center, float Radius, int32_t Segments, FColor& Color, float Thickness); // Flags: Native|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF751B4629C(relative to base address)
		void DrawDebugRectangle(FVector& Min, FVector2D& Size, FColor& Color, float Thickness); // Flags: Native|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF751B46074(relative to base address)
		void DrawDebugLine(FVector& LineStart, FVector& LineEnd, FColor& Color, float Thickness); // Flags: Native|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF751B45E10(relative to base address)
		void DrawDebugCircle(FVector& Center, float Radius, int32_t Segments, FColor& Color, float Thickness); // Flags: Native|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF751B45B48(relative to base address)
		void ClearDebugLines(); // Flags: Native|Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF74D071C18(relative to base address)
	};


	// Class JunoProceduralWorld.JunoWorldTileLayoutInterfaceBlueprintLibary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoWorldTileLayoutInterfaceBlueprintLibary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoWorldTileLayoutInterfaceBlueprintLibary");
			return ret;
		}

		FVector2D WorldLocationToTileLocation(TScriptInterface<Class> Interface, FVector2D WorldLocation); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751B47CBC(relative to base address)
		FIntPoint WorldLocationToTileCoord(TScriptInterface<Class> Interface, FVector2D WorldLocation); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751B47A94(relative to base address)
		FIntPoint WorldCoordToTileCoord(TScriptInterface<Class> Interface, FIntPoint WorldCoord); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751B4788C(relative to base address)
		FVector2D TileLocationToWorldLocation(TScriptInterface<Class> Interface, FVector2D TileLocation); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751B4765C(relative to base address)
		FVector2D TileCoordToWorldLocation(TScriptInterface<Class> Interface, FIntPoint TileCoord); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751B47440(relative to base address)
		FIntPoint TileCoordToWorldCoord(TScriptInterface<Class> Interface, FIntPoint TileCoord); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751B47238(relative to base address)
		bool IsTileLocationOutOfBounds(TScriptInterface<Class> Interface, FVector2D TileLocation); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751B46E78(relative to base address)
		bool IsTileCoordOutOfBounds(TScriptInterface<Class> Interface, FIntPoint TileCoord); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751B46C68(relative to base address)
		FVector2D CoordToLocation(TScriptInterface<Class> Interface, FIntPoint Coord); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751B4592C(relative to base address)
	};


	// Class JunoProceduralWorld.JunoWorldTilePersistenceFeatureModule
	// Inherited from UPersistenceFrameworkModule -> UObject
	// Size: 0x0 (0xE0 - 0xE0)
	class UJunoWorldTilePersistenceFeatureModule : public UPersistenceFrameworkModule	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoWorldTilePersistenceFeatureModule");
			return ret;
		}
	};


	// Class JunoProceduralWorld.JunoWorldTileSaveData_Container
	// Inherited from UJunoBasePFWPersistenceFeatureDataContainer -> UJunoBasePFWContainer -> UPersistenceFrameworkContainer -> UObject
	// Size: 0x0 (0x1E0 - 0x1E0)
	class UJunoWorldTileSaveData_Container : public UJunoBasePFWPersistenceFeatureDataContainer	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoWorldTileSaveData_Container");
			return ret;
		}
	};


	// Class JunoProceduralWorld.JunoWorldTileSelectionBase
	// Inherited from UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x80 (0xB0 - 0x30)
	class UJunoWorldTileSelectionBase : public UPrimaryDataAsset	
	{
	public:
		FDataRegistryType TileRegistryType; // 0x30(0x4)
		float TileExtent; // 0x34(0x4)
		int32_t WorldGridCount; // 0x38(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY
		int64_t WorldSize; // 0x40(0x8)
		FGameplayTagQuery BaseTileQuery; // 0x48(0x48)
		bool bRequiresDebugArea; // 0x90(0x1)
		bool bEnableBiomeSwaps; // 0x91(0x1)
		bool bEnableBorderPermutations; // 0x92(0x1)
		unsigned char UnknownData01_6[0x1]; // 0x93(0x1) UNKNOWN PROPERTY
		FName WaterTileName; // 0x94(0x4)
		UObject* JunoWorldTileLayoutInterface; // 0x98(0x8)
		UJunoNamedRandomStreamGenerator* RandomStreamGenerator; // 0xA0(0x8)
		unsigned char UnknownData02_7[0x8]; // 0xA8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoWorldTileSelectionBase");
			return ret;
		}

		bool UseReservedArea(FName& AreaName, TMap<FName, FBox2D>& AreaTiles, TArray<FPCGJunoWorldTile>& OutNewTiles); // Flags: RequiredAPI|Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF751B4C154(relative to base address)
		bool UpdateTileForEvent(FName& EventName, AJunoWorldTileEventBuilder* EventBuilder, FName& CellName, FIntPoint& CellCoords, FBox2D& CellBounds, FPCGJunoWorldTile& OutSelectedTile); // Flags: RequiredAPI|Native|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF751B4BEF8(relative to base address)
		bool UpdateTile(FPCGJunoWorldTile& CurrentTile, FPCGJunoWorldTile& OutUpdatedTile); // Flags: RequiredAPI|Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF751B4BDC8(relative to base address)
		void SetupForEvents(FVector& PlayerPosition, TArray<FName>& OutNewEvents, TMap<FName, AJunoWorldTileEventBuilder*>& OutAllBuilders); // Flags: RequiredAPI|Native|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF751B4BBBC(relative to base address)
		void Setup(TScriptInterface<Class>& InJunoWorldTileLayoutInterface); // Flags: RequiredAPI|Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF751B4BB28(relative to base address)
		bool ModifyTileInformation(FPCGJunoWorldTile& CurrentTile, FPCGJunoWorldTile& OutTile); // Flags: RequiredAPI|Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF751B4B9F8(relative to base address)
		bool GetEventTileDefinition(FName& EventName, FJunoWorldEventTileDefinition& OutTileEventDefinition); // Flags: RequiredAPI|Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF751B4B2F8(relative to base address)
		TArray GetEventDefinitions(); // Flags: RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF751B4B258(relative to base address)
		TArray GetEligibleTilesForEvent(FJunoWorldEventTileDefinition& Event); // Flags: RequiredAPI|Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF751B4B108(relative to base address)
		FVector GetDebugLevelLocation(); // Flags: RequiredAPI|Native|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF751B4B0CC(relative to base address)
		void ChooseTile(FVector& Position, FPCGJunoWorldTile& OutSelectedTile); // Flags: RequiredAPI|Native|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF751B4A800(relative to base address)
		bool ChooseStartTile(FVector& StartTileLocation); // Flags: RequiredAPI|Native|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF751B4A728(relative to base address)
		void ChooseOutOfBoundsTile(FPCGJunoWorldTile& OutSelectedTile); // Flags: RequiredAPI|Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF751B4A680(relative to base address)
		void ChooseDebugTile(FVector& Position, FPCGJunoWorldTile& OutSelectedTile); // Flags: RequiredAPI|Native|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF751B4A53C(relative to base address)
	};


	// Class JunoProceduralWorld.JunoWorldTileSelectionForced
	// Inherited from UJunoWorldTileSelectionBase -> UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x10 (0xC0 - 0xB0)
	class UJunoWorldTileSelectionForced : public UJunoWorldTileSelectionBase	
	{
	public:
		int32_t RandomTileSeed; // 0xB0(0x4)
		unsigned char UnknownData00_6[0x4]; // 0xB4(0x4) UNKNOWN PROPERTY
		UDataTable* WorldTilesDataTable; // 0xB8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoWorldTileSelectionForced");
			return ret;
		}
	};


	// Class JunoProceduralWorld.JunoWorldTileSelectionAgatha
	// Inherited from UJunoWorldTileSelectionBase -> UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x38 (0xE8 - 0xB0)
	class UJunoWorldTileSelectionAgatha : public UJunoWorldTileSelectionBase	
	{
	public:
		UDataTable* WorldTilesDataTable; // 0xB0(0x8)
		TArray<EJunoBiome> ScatteredLandBiomes; // 0xB8(0x10)
		float WaterLevel; // 0xC8(0x4)
		float TileNoiseFrequency; // 0xCC(0x4)
		int32_t NumberOfDarklandsIslands; // 0xD0(0x4)
		unsigned char UnknownData00_7[0x14]; // 0xD4(0x14) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoWorldTileSelectionAgatha");
			return ret;
		}
	};


	// Class JunoProceduralWorld.JunoWorldTileEventBuilder
	// Inherited from AActor -> UObject
	// Size: 0xE8 (0x378 - 0x290)
	class AJunoWorldTileEventBuilder : public AActor	
	{
	public:
		FIntPoint EventTileSize; // 0x290(0x8)
		bool bIsBespokeEvent; // 0x298(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x299(0x7) UNKNOWN PROPERTY
		double TileExtent; // 0x2A0(0x8)
		double TileSize; // 0x2A8(0x8)
		double WorldRadius; // 0x2B0(0x8)
		FRandomStream EventRandomStream; // 0x2B8(0x8)
		unsigned char UnknownData01_7[0xB8]; // 0x2C0(0xB8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoWorldTileEventBuilder");
			return ret;
		}

		void Initialize(FJunoWorldEventTileDefinition& Event); // Flags: Native|Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF751B4B744(relative to base address)
		double GetWorldRadius(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74EA4AE60(relative to base address)
		double GetTileExent(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C2DA7CC(relative to base address)
		TArray GetAdditionalEventLocationRestrictions(); // Flags: Native|Event|Protected|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF751B4AF40(relative to base address)
		void FinalizeTilesForEventServer(TMap<FIntPoint, AJunoWorldTile*>& EventTiles, FBox2D& EventBounds); // Flags: Native|Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF751B4ACEC(relative to base address)
		void FinalizeTilesForEventRPC(TArray<FIntPoint> TileCoords, TArray<AJunoWorldTile*> EventTiles, FBox2D EventBounds); // Flags: Final|Net|NetReliableNative|Event|NetMulticast|Private|HasDefaults, Memory Exec: 0x7FF751B4AB2C(relative to base address)
		void FinalizeTilesForEventClient(TMap<FIntPoint, AJunoWorldTile*>& EventTiles, FBox2D& EventBounds); // Flags: Native|Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF751B4AA00(relative to base address)
		UJunoWorldEventTileLayout CreateEmptyLayout(EJunoBiome DefaultCornerBiome); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751B4A944(relative to base address)
		TMap BuildEventTiles(TArray<FPCGJunoWorldEventTile>& EligibleTiles); // Flags: Native|Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const, Memory Exec: 0x7FF751B4A45C(relative to base address)
	};


	// Class JunoProceduralWorld.JunoWorldEventTileLayout
	// Inherited from UObject
	// Size: 0xA8 (0xD0 - 0x28)
	class UJunoWorldEventTileLayout : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0xA8]; // 0x28(0xA8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoWorldEventTileLayout");
			return ret;
		}

		void InitializeLayout(FIntPoint Size, EJunoBiome DefaultBiome); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF751B4B828(relative to base address)
		EJunoBiome GetCornerBiome(FIntPoint Corner); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF751B4AFB0(relative to base address)
		TMap GenerateLayout(FRandomStream& RandomStream, TArray<FPCGJunoWorldEventTile>& EligibleTiles); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF751B4AE18(relative to base address)
		void FinalizeLayout(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751B4A9EC(relative to base address)
		void AssignCornerValue(FIntPoint Corner, EJunoBiome Biome); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF751B4A28C(relative to base address)
	};


	// Class JunoProceduralWorld.JunoWorldTileSelectionBeryl
	// Inherited from UJunoWorldTileSelectionBase -> UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x108 (0x1B8 - 0xB0)
	class UJunoWorldTileSelectionBeryl : public UJunoWorldTileSelectionBase	
	{
	public:
		TArray<EJunoBiome> ScatteredLandBiomes; // 0xB0(0x10)
		TArray<EJunoBiome> StartTileRequiredBiomes; // 0xC0(0x10)
		float WaterLevel; // 0xD0(0x4)
		float TileNoiseFrequency; // 0xD4(0x4)
		int32_t NumBigAlpineBiomes; // 0xD8(0x4)
		int32_t BigAlpineMaxSize; // 0xDC(0x4)
		TArray<EJunoBiome> ScatteredAlpineBiomes; // 0xE0(0x10)
		int32_t NumSmallAlpineBiomes; // 0xF0(0x4)
		int32_t NumberOfReservedAreas; // 0xF4(0x4)
		TMap<FName, EJunoBiome> AreasToUpdate; // 0xF8(0x50)
		unsigned char UnknownData00_7[0x70]; // 0x148(0x70) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoWorldTileSelectionBeryl");
			return ret;
		}
	};


	// Class JunoProceduralWorld.JunoWorldTileSelectionCynthia
	// Inherited from UJunoWorldTileSelectionBase -> UPrimaryDataAsset -> UDataAsset -> UObject
	// Size: 0x168 (0x218 - 0xB0)
	class UJunoWorldTileSelectionCynthia : public UJunoWorldTileSelectionBase	
	{
	public:
		TArray<EJunoBiome> ScatteredLandBiomes; // 0xB0(0x10)
		TArray<EJunoBiome> StartTileRequiredBiomes; // 0xC0(0x10)
		float WaterLevel; // 0xD0(0x4)
		float TileNoiseFrequency; // 0xD4(0x4)
		int32_t NumberOfAlpineRanges; // 0xD8(0x4)
		int32_t AlpineRangeLength; // 0xDC(0x4)
		TArray<EJunoBiome> ScatteredAlpineBiomes; // 0xE0(0x10)
		int32_t NumberOfReservedAreas; // 0xF0(0x4)
		bool bLimitReservedAreasToPerimeter; // 0xF4(0x1)
		unsigned char UnknownData00_6[0x3]; // 0xF5(0x3) UNKNOWN PROPERTY
		TMap<FName, EJunoBiome> AreasToUpdate; // 0xF8(0x50)
		FDataRegistryType EventUpdatesRegistryType; // 0x148(0x4)
		unsigned char UnknownData01_7[0xCC]; // 0x14C(0xCC) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoWorldTileSelectionCynthia");
			return ret;
		}
	};


	// Class JunoProceduralWorld.JunoWorldWeatherLocationComponent
	// Inherited from UJunoWeatherLocationComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x0 (0xB8 - 0xB8)
	class UJunoWorldWeatherLocationComponent : public UJunoWeatherLocationComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoWorldWeatherLocationComponent");
			return ret;
		}

		void HandleEnvironmentChanged(AActor* Actor, FJunoBiomeInfoQueryResult& PreviousEnvironmentResult, FJunoBiomeInfoQueryResult& NewEnvironmentResult, AJunoWorldTile* PreviousWorldTile, AJunoWorldTile* NewWorldTile); // Flags: Final|Native|Private|HasOutParms, Memory Exec: 0x7FF751B4B438(relative to base address)
	};


	// Class JunoProceduralWorld.LandmassPathfinder
	// Inherited from UObject
	// Size: 0x260 (0x288 - 0x28)
	class ULandmassPathfinder : public UObject	
	{
	public:
		ALandscapeProxy* LandscapeProxy; // 0x28(0x8)
		ALandmassProceduralRoute* RouteSystem; // 0x30(0x8)
		TArray<ULandmassPathfinder*> BackStopPaths; // 0x38(0x10)
		ALandmassProceduralRoute* BlockingRoute; // 0x48(0x8)
		unsigned char UnknownData00_6[0x158]; // 0x50(0x158) UNKNOWN PROPERTY
		TWeakObjectPtr<UPCGSpatialData*> PCGSampler; // 0x1A8(0x8)
		unsigned char UnknownData01_6[0x10]; // 0x1B0(0x10) UNKNOWN PROPERTY
		FMulticastInlineDelegate PathfinderSpawnWarpingActorDelegate; // 0x1C0(0x10)
		FPathfinderHistory PathfinderHistory; // 0x1D0(0x48)
		int32_t MaxNodesPerCell; // 0x218(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x21C(0x4) UNKNOWN PROPERTY
		bool bUsePCGSamplerIfAvailable; // 0x220(0x1)
		bool bVisualizeHeuristicSteps; // 0x221(0x1)
		bool bVisualizeBacktracedPathOfHeuristicSteps; // 0x222(0x1)
		bool bVisualizeValidLocationSearching; // 0x223(0x1)
		unsigned char UnknownData03_7[0x64]; // 0x224(0x64) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.LandmassPathfinder");
			return ret;
		}

		void StartPathfinder(FVector A, FVector B, bool bFindNearestValidLocationForA, bool bFindNearestValidLocationForB); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF751B5048C(relative to base address)
		void SetDestinationActuallyReached(FVector Location); // Flags: Final|Native|Protected|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF751B5036C(relative to base address)
		void SetDestination(FVector Location); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF751B50254(relative to base address)
		FVector ProjectLocation(FVector Location, bool& bOutIsValidLocation); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751B4FB78(relative to base address)
		void OnStartPathfinder(FVector A, FVector B); // Flags: Event|Public|HasDefaults|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnInitialize(ALandscapeProxy* InLandscapeProxy, ALandmassProceduralRoute* InRoute, FLandmassPathfinderRules Rules, ALandmassProceduralRoute* InBlockingRoute); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		EPushFrontierResult K2_StepPathfinder(TArray<FVector>& OutLocations, TArray<float>& OutCosts, TArray<bool>& bOutIsSnapped, TArray<EPathfinderNodeState>& OutNodeStates); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751B4F874(relative to base address)
		void K2_GetPriorityList(TArray<FVector>& Locations, TArray<float>& Costs); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751B4F724(relative to base address)
		bool IsTargetLocationValid(FVector TargetLocation); // Flags: Native|Event|Public|HasDefaults|BlueprintEvent, Memory Exec: 0x7FF751B4F5EC(relative to base address)
		bool Initialize(ALandscapeProxy* LandscapeProxy, ALandmassProceduralRoute* InRoute, FLandmassPathfinderRules Rules, TArray<ULandmassPathfinder*> InBackStopPaths, ALandmassProceduralRoute* InBlockingRoute); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751B4F254(relative to base address)
		FBox GetLandscapeBox(); // Flags: Final|Native|Protected|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751B4F090(relative to base address)
		bool GetIsInitialized(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751B4F078(relative to base address)
		bool FindNearestValidLocation(FVector InLocation, FVector& OutValidLocation, bool bShouldProject); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF751B4EDBC(relative to base address)
		void ExecutePathfinderSync(FVector A, FVector B, TArray<FVector>& Locations, TArray<float>& Costs); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF751B4EB24(relative to base address)
		EPushFrontierResult AdditionalPushFrontierResultCondition(EPushFrontierResult ResultFromLastPush, FLandmassPathfinderRules InCurrentRules, FVector InHome, FVector InDestination, FVector InCurrentLocation, int32_t InCurrentPushSteps, float InCurrentCost, bool& bShouldUseBestNodeInsteadOfMostRecentNode); // Flags: Native|Event|Protected|HasOutParms|HasDefaults|BlueprintEvent, Memory Exec: 0x7FF751B4E48C(relative to base address)
	};


	// Class JunoProceduralWorld.PathfinderGuideSetsDataAsset
	// Inherited from UDataAsset -> UObject
	// Size: 0x10 (0x40 - 0x30)
	class UPathfinderGuideSetsDataAsset : public UDataAsset	
	{
	public:
		TArray<FPathfinderGuideSet> GuideSets; // 0x30(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.PathfinderGuideSetsDataAsset");
			return ret;
		}

		void SaveCurveSetFromSplintComponents(TArray<USplineComponent*> SourceComponents, int32_t Index); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751B4FD58(relative to base address)
		bool LoadCurveSetAndAddSplineComponentsToActor(AActor* InActor, int32_t Index); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751B4FA9C(relative to base address)
		FPathfinderGuideSet GetRandomGuideSetFromSeed(int32_t Seed); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751B4F170(relative to base address)
		FPathfinderGuideSet GetRandomGuideSet(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751B4F0D8(relative to base address)
	};


	// Class JunoProceduralWorld.PCGJunoActorBoundsToPointSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x0 (0xA8 - 0xA8)
	class UPCGJunoActorBoundsToPointSettings : public UPCGSettings	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.PCGJunoActorBoundsToPointSettings");
			return ret;
		}
	};


	// Class JunoProceduralWorld.PCGJunoFindFoundationSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class UPCGJunoFindFoundationSettings : public UPCGSettings	
	{
	public:
		float DistanceToSample; // 0xA8(0x4)
		unsigned char UnknownData00_7[0x4]; // 0xAC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.PCGJunoFindFoundationSettings");
			return ret;
		}
	};


	// Class JunoProceduralWorld.PCGJunoMaskData
	// Inherited from UPCGData -> UObject
	// Size: 0x58 (0x90 - 0x38)
	class UPCGJunoMaskData : public UPCGData	
	{
	public:
		unsigned char UnknownData00_1[0x58]; // 0x38(0x58) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.PCGJunoMaskData");
			return ret;
		}
	};


	// Class JunoProceduralWorld.PCGJunoCreateMaskDataNodeSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class UPCGJunoCreateMaskDataNodeSettings : public UPCGSettings	
	{
	public:
		bool bIs2D; // 0xA8(0x1)
		unsigned char UnknownData00_6[0x3]; // 0xA9(0x3) UNKNOWN PROPERTY
		int32_t Resolution; // 0xAC(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.PCGJunoCreateMaskDataNodeSettings");
			return ret;
		}
	};


	// Class JunoProceduralWorld.PCGJunoApplyMaskNodeSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class UPCGJunoApplyMaskNodeSettings : public UPCGSettings	
	{
	public:
		PCGJunoApplyMaskNodeMode Mode; // 0xA8(0x1)
		unsigned char UnknownData00_7[0x7]; // 0xA9(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.PCGJunoApplyMaskNodeSettings");
			return ret;
		}
	};


	// Class JunoProceduralWorld.PCGJunoUnionMasksNodeSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class UPCGJunoUnionMasksNodeSettings : public UPCGSettings	
	{
	public:
		bool bIs2D; // 0xA8(0x1)
		unsigned char UnknownData00_6[0x3]; // 0xA9(0x3) UNKNOWN PROPERTY
		int32_t Resolution; // 0xAC(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.PCGJunoUnionMasksNodeSettings");
			return ret;
		}
	};


	// Class JunoProceduralWorld.PCGJunoProjectPositionSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class UPCGJunoProjectPositionSettings : public UPCGSettings	
	{
	public:
		bool bProjectLandscapeMetadata; // 0xA8(0x1)
		bool bProjectPositions; // 0xA9(0x1)
		bool bProjectRotations; // 0xAA(0x1)
		unsigned char UnknownData00_7[0x5]; // 0xAB(0x5) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.PCGJunoProjectPositionSettings");
			return ret;
		}
	};


	// Class JunoProceduralWorld.JunoProjectPositionTestShape
	// Inherited from UPCGSpatialData -> UPCGData -> UObject
	// Size: 0x0 (0x80 - 0x80)
	class UJunoProjectPositionTestShape : public UPCGSpatialData	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoProjectPositionTestShape");
			return ret;
		}
	};


	// Class JunoProceduralWorld.PCGJunoStoreDataSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x10 (0xB8 - 0xA8)
	class UPCGJunoStoreDataSettings : public UPCGSettings	
	{
	public:
		TArray<FPCGJunoStoreDataPin> ExpectedPins; // 0xA8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.PCGJunoStoreDataSettings");
			return ret;
		}
	};


	// Class JunoProceduralWorld.PCGJunoLoadDataSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x38 (0xE0 - 0xA8)
	class UPCGJunoLoadDataSettings : public UPCGSettings	
	{
	public:
		TArray<FName> Pins; // 0xA8(0x10)
		EJunoPCGVolumeSource Source; // 0xB8(0x1)
		unsigned char UnknownData00_6[0x7]; // 0xB9(0x7) UNKNOWN PROPERTY
		FVector AdditionalExtents; // 0xC0(0x18)
		FName Tag; // 0xD8(0x4)
		unsigned char UnknownData01_7[0x4]; // 0xDC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.PCGJunoLoadDataSettings");
			return ret;
		}
	};


	// Class JunoProceduralWorld.ProceduralRiverGenRulesAsset
	// Inherited from UDataAsset -> UObject
	// Size: 0x58 (0x88 - 0x30)
	class UProceduralRiverGenRulesAsset : public UDataAsset	
	{
	public:
		TMap<ELandmassRiverTier, FProceduralRiverGenRules> RuleSet; // 0x30(0x50)
		float RiverGridGridSize; // 0x80(0x4)
		int32_t RasterizeToRiverGridExtent; // 0x84(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.ProceduralRiverGenRulesAsset");
			return ret;
		}
	};


	// Class JunoProceduralWorld.JunoCaveVolume
	// Inherited from ATriggerBox -> ATriggerBase -> AActor -> UObject
	// Size: 0x0 (0x298 - 0x298)
	class AJunoCaveVolume : public ATriggerBox	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoCaveVolume");
			return ret;
		}

		void OnPlayerLeavingCaveVolume(AFortPlayerPawnAthena* PlayerPawn); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnPlayerEnteringCaveVolume(AFortPlayerPawnAthena* PlayerPawn); // Flags: Event|Public|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
	};


	// Class JunoProceduralWorld.JunoGameFeatureAction_AddTileSet
	// Inherited from UGameFeatureAction -> UObject
	// Size: 0x90 (0xB8 - 0x28)
	class UJunoGameFeatureAction_AddTileSet : public UGameFeatureAction	
	{
	public:
		TWeakObjectPtr<UJunoLandscapeLayersData*> JunoLandscapeLayers; // 0x28(0x20)
		TWeakObjectPtr<UJunoLandscapeCachedComponentData*> CachedComponentLayers; // 0x48(0x20)
		TWeakObjectPtr<UJunoLandscapeCachedComponentData*> CachedComponentData; // 0x68(0x20)
		TWeakObjectPtr<UDataTable*> TileAssetMetaData; // 0x88(0x20)
		TArray<FString> TerrainDirectories; // 0xA8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoGameFeatureAction_AddTileSet");
			return ret;
		}
	};


	// Class JunoProceduralWorld.JunoLevelInstance
	// Inherited from ABuildingLevelInstance -> ABuildingActor -> AActor -> UObject
	// Size: 0x10 (0x7C8 - 0x7B8)
	class AJunoLevelInstance : public ABuildingLevelInstance	
	{
	public:
		FMulticastInlineDelegate OnLevelLoaded; // 0x7B8(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoLevelInstance");
			return ret;
		}
	};


	// Class JunoProceduralWorld.JunoLivingWorldStaticPointProviderCluster
	// Inherited from AActor -> UObject
	// Size: 0x180 (0x410 - 0x290)
	class AJunoLivingWorldStaticPointProviderCluster : public AActor	
	{
	public:
		FGameplayTagContainer GlobalTags; // 0x290(0x20)
		TArray<FJunoLivingWorldStaticPointProviderClusterEntry> Entries; // 0x2B0(0x10)
		TArray<FLWMClusterPointInfo> PointInfos; // 0x2C0(0x10)
		FScalableFloat PartitionnerCellSize; // 0x2D0(0x28)
		unsigned char UnknownData00_6[0x4]; // 0x2F8(0x4) UNKNOWN PROPERTY
		float HysteresisSize; // 0x2FC(0x4)
		float MaxPlayerQueryRange; // 0x300(0x4)
		unsigned char UnknownData01_7[0x10C]; // 0x304(0x10C) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoLivingWorldStaticPointProviderCluster");
			return ret;
		}

		void OnCurrentPlaylistLoaded(FName PlaylistName, FGameplayTagContainer& PlaylistContextTags); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF751B71298(relative to base address)
		void AppendGlobalTags(FGameplayTagContainer& Container); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751B6FBDC(relative to base address)
	};


	// Class JunoProceduralWorld.JunoPOIGameplayVolume
	// Inherited from AJunoStreamingGameplayVolume -> AGameplayVolume -> AActor -> UObject
	// Size: 0xA8 (0x458 - 0x3B0)
	class AJunoPOIGameplayVolume : public AJunoStreamingGameplayVolume	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x3B0(0x8) UNKNOWN PROPERTY
		FJunoPOIInstanceData InstanceData; // 0x3B8(0x20)
		FGuid POIGuid; // 0x3D8(0x10)
		FGameplayTagContainer EncounterCapabilities; // 0x3E8(0x20)
		int32_t EncounterVariantCount; // 0x408(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x40C(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr<UDataTable*> EncounterCategoryTable; // 0x410(0x20)
		TArray<FJunoWorldTileStreamingLevel> LevelsToInject; // 0x430(0x10)
		FName RegistryItemName; // 0x440(0x4)
		int32_t PersistenceVersion; // 0x444(0x4)
		TArray<FJunoPOITeleporter> Teleporters; // 0x448(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoPOIGameplayVolume");
			return ret;
		}
	};


	// Class JunoProceduralWorld.JunoPOISlot
	// Inherited from AActor -> UObject
	// Size: 0x48 (0x2D8 - 0x290)
	class AJunoPOISlot : public AActor	
	{
	public:
		TWeakObjectPtr<UDataTable*> PotentialPOIs; // 0x290(0x20)
		EJunoPOISize SlotSize; // 0x2B0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x2B1(0x7) UNKNOWN PROPERTY
		TWeakObjectPtr<UTexture2D*> TerrainHeightTexture; // 0x2B8(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoPOISlot");
			return ret;
		}
	};


	// Class JunoProceduralWorld.JunoPOIBlueprintLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UJunoPOIBlueprintLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoPOIBlueprintLibrary");
			return ret;
		}

		void SetPOISlotMetaDatas(AActor* POISlotActor, TArray<FJunoPOIManagerSlot>& POISlots, FJunoPOISlotMetaData& POISlotMetaData, EJunoSetSlotPOIMetaDataResult& Result); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751B71840(relative to base address)
		void QueryPOIState(AActor* POISlotActor, FGuid& POISlotGuid, EQueryPOIStateResult& Result, FJunoPOISlotMetaData& POISlotMetaData, FBox& WorldTileBounds); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF751B7167C(relative to base address)
		void QueryCavePOIState(AActor* CaveSlotActor, FGuid& CaveSlotGuid, FGuid& CaveShellGuid, EQueryPOIStateResult& Result, FBox& WorldTileBounds); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF751B71490(relative to base address)
		void MarkPOISlotUnused(AActor* POISlotActor, FGuid& POISlotGuid, EJunoMarkSlotPOIUnusedResult& Result); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF751B71188(relative to base address)
		void MarkCavePOISlotUnused(AActor* CaveSlotActor, FGuid& CaveSlotGuid, FGuid& CaveShellGuid, EJunoMarkSlotPOIUnusedResult& Result); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF751B71018(relative to base address)
		void GetMatchingPOIsFromDataRegistry(FDataRegistryType& DataRegistry, TSet<FName>& Tags, TSet<EJunoPOISize>& Sizes, TSet<EJunoBiome>& Biomes, TArray<FPCGJunoWorldTilePOI>& Array, EJunoGetMatchingPOIsFromDataRegistryResult& Result, EJunoWorldTilePOIType Type); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751B70BB0(relative to base address)
		void FindBestPOISlots(TArray<FJunoPOIManagerSlot>& PotentialSlots, TArray<FJunoPOIManagerSlot>& AdditionalCompareSlots, int32_t DesiredNumber, double DesiredMinDistance, TArray<FJunoPOIManagerSlot>& Result, TArray<FJunoPOIManagerSlot>& Remainder, FBox& WorldTileBounds, EJunoBiome Biome, bool bEnforceMinDistance); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF751B7048C(relative to base address)
		void CreateRarePOIs(AActor* Actor, FRandomStream& RandomStream, FDataRegistryType& DataRegistry, TArray<FJunoPOIManagerSlot>& PotentialSlots, TArray<FJunoPOIManagerSlot>& UsedSlots, EGeneratePOIResult& Result); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF751B7025C(relative to base address)
		void CreatePOI(AActor* POISlotActor, FGuid& POISlotGuid, FJunoPOIData& Data, EGeneratePOIResult& Result); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF751B700A4(relative to base address)
		void CreateCavePOI(AActor* CaveSlotActor, FGuid& CaveSlotGuid, FGuid& CaveShellGuid, FJunoPOIData& Data, EGeneratePOIResult& Result); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF751B6FE88(relative to base address)
	};


	// Class JunoProceduralWorld.JunoProceduralFoundation
	// Inherited from ABuildingFoundation -> ABuildingSMActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x0 (0x1030 - 0x1030)
	class AJunoProceduralFoundation : public ABuildingFoundation	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoProceduralFoundation");
			return ret;
		}

		void AddAdditionalWorld(TWeakObjectPtr<UWorld*>& World); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751B6FA78(relative to base address)
	};


	// Class JunoProceduralWorld.JunoRoadAINavigationCluster
	// Inherited from AActor -> UObject
	// Size: 0x280 (0x510 - 0x290)
	class AJunoRoadAINavigationCluster : public AActor	
	{
	public:
		FGameplayTagContainer GlobalTags; // 0x290(0x20)
		TArray<FJunoRoadAINavigationClusterEntry> Entries; // 0x2B0(0x10)
		TArray<FJunoRoadAINavigationClusterSharedPointsEntry> SharedPoints; // 0x2C0(0x10)
		TArray<FRoadPatrolPathInfo> PatrolInfos; // 0x2D0(0x10)
		TArray<FRoadPatrolPointInfo> PointInfos; // 0x2E0(0x10)
		FScalableFloat PartitionnerCellSize; // 0x2F0(0x28)
		FScalableFloat NavInvokationRange; // 0x318(0x28)
		FScalableFloat NavMeshGenerationRadius; // 0x340(0x28)
		FNavAgentSelector NavInvokationSupportedAgents; // 0x368(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x36C(0x4) UNKNOWN PROPERTY
		FScalableFloat LeashExtraWidth; // 0x370(0x28)
		FScalableFloat LeashHeight; // 0x398(0x28)
		FScalableFloat InnerLeashExtraWidth; // 0x3C0(0x28)
		FScalableFloat InnerLeashHeight; // 0x3E8(0x28)
		FScalableFloat EnableCampTagging; // 0x410(0x28)
		FGameplayTagContainer CampTags; // 0x438(0x20)
		FScalableFloat CampDistanceThreshold; // 0x458(0x28)
		unsigned char UnknownData01_7[0x90]; // 0x480(0x90) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoRoadAINavigationCluster");
			return ret;
		}

		void OnCurrentPlaylistLoaded(FName PlaylistName, FGameplayTagContainer& PlaylistContextTags); // Flags: Final|Native|Protected|HasOutParms, Memory Exec: 0x7FF751B71394(relative to base address)
		TArray FindConnectedPatrolPaths(AFortAthenaPatrolPoint* PatrolPoint, AFortAthenaPatrolPath* PatrolPathToExclude); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF751B70974(relative to base address)
		bool ChangePatrolToFollow(AAIController* Controller, AFortAthenaPatrolPath* PatrolPath, AFortAthenaPatrolPoint* FirstPatrolPoint); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF751B6FC98(relative to base address)
		void AppendGlobalTags(FGameplayTagContainer& Container); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751B6FBDC(relative to base address)
	};


	// Class JunoProceduralWorld.JunoStaticMeshPoolActor
	// Inherited from AActor -> UObject
	// Size: 0x18 (0x2A8 - 0x290)
	class AJunoStaticMeshPoolActor : public AActor	
	{
	public:
		unsigned char UnknownData00_1[0x18]; // 0x290(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoStaticMeshPoolActor");
			return ret;
		}
	};


	// Class JunoProceduralWorld.JunoLivingWorldCaveSpawnLimiterComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x78 (0x118 - 0xA0)
	class UJunoLivingWorldCaveSpawnLimiterComponent : public UActorComponent	
	{
	public:
		FCaveShellSpawnLimitData SpawnLimitData; // 0xA0(0x78)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoLivingWorldCaveSpawnLimiterComponent");
			return ret;
		}
	};


	// Class JunoProceduralWorld.CaveShellSpawnEntry
	// Inherited from UObject
	// Size: 0x38 (0x60 - 0x28)
	class UCaveShellSpawnEntry : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0x38]; // 0x28(0x38) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.CaveShellSpawnEntry");
			return ret;
		}
	};


	// Class JunoProceduralWorld.JunoLivingWorldCaveSpawnManager
	// Inherited from UGameStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0xA0 (0x140 - 0xA0)
	class UJunoLivingWorldCaveSpawnManager : public UGameStateComponent	
	{
	public:
		TMap<FCaveShellID, FJunoLWMCaveShellInfo> ShellInfos; // 0xA0(0x50)
		TMap<FCaveShellID, FJunoLWMCaveShellPointProviders> UnprocessedPointProviders; // 0xF0(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoLivingWorldCaveSpawnManager");
			return ret;
		}
	};


	// Class JunoProceduralWorld.JunoLivingWorldStaticPointProviderClusterRenderComponent
	// Inherited from UDebugDrawComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x18 (0x530 - 0x518)
	class UJunoLivingWorldStaticPointProviderClusterRenderComponent : public UDebugDrawComponent	
	{
	public:
		unsigned char UnknownData00_1[0x18]; // 0x518(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoLivingWorldStaticPointProviderClusterRenderComponent");
			return ret;
		}
	};


	// Class JunoProceduralWorld.JunoRoadAINavigationClusterRenderComponent
	// Inherited from UDebugDrawComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x8 (0x520 - 0x518)
	class UJunoRoadAINavigationClusterRenderComponent : public UDebugDrawComponent	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x518(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoRoadAINavigationClusterRenderComponent");
			return ret;
		}
	};


	// Class JunoProceduralWorld.JunoRoadLivingWorldRuntimePointProviderComponent
	// Inherited from UFortAthenaLivingWorldRuntimePointProviderComponent -> UActorComponent -> UObject
	// Size: 0x98 (0x138 - 0xA0)
	class UJunoRoadLivingWorldRuntimePointProviderComponent : public UFortAthenaLivingWorldRuntimePointProviderComponent	
	{
	public:
		bool bUseSpawnLimitFromPatrol; // 0xA0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0xA1(0x7) UNKNOWN PROPERTY
		FFortAthenaLivingWorldPointProviderSpawnLimiter SpawnLimiter; // 0xA8(0x68)
		bool bUseTagsFromPatrol; // 0x110(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x111(0x7) UNKNOWN PROPERTY
		FGameplayTagContainer Tags; // 0x118(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoRoadLivingWorldRuntimePointProviderComponent");
			return ret;
		}
	};


	// Class JunoProceduralWorld.JunoProceduralWorldSystem
	// Inherited from UEngineSubsystem -> UDynamicSubsystem -> USubsystem -> UObject
	// Size: 0x0 (0x30 - 0x30)
	class UJunoProceduralWorldSystem : public UEngineSubsystem	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoProceduralWorldSystem");
			return ret;
		}
	};


	// Class JunoProceduralWorld.LandmassCluster
	// Inherited from UObject
	// Size: 0x30 (0x58 - 0x28)
	class ULandmassCluster : public UObject	
	{
	public:
		bool bInitialized; // 0x28(0x1)
		unsigned char UnknownData00_6[0x17]; // 0x29(0x17) UNKNOWN PROPERTY
		TArray<AActor*> Actors; // 0x40(0x10)
		unsigned char UnknownData01_7[0x8]; // 0x50(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.LandmassCluster");
			return ret;
		}

		bool K2_AddConnection(AActor* LeafActorA, AActor* LeafActorB); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751BD3CB0(relative to base address)
		void InitializeDentrogram(TArray<AActor*> InActors, TArray<FDendrogramLeafAttributes>& InAttributes); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751BD3344(relative to base address)
		int32_t GetTopLevel(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751BD2F64(relative to base address)
		int32_t GetLeafCount(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF748BA0724(relative to base address)
		TArray GetClustersAtLevel(int32_t InLevel); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751BD22BC(relative to base address)
	};


	// Class JunoProceduralWorld.LandmassFunctionLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class ULandmassFunctionLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.LandmassFunctionLibrary");
			return ret;
		}

		void SetStaticMeshAffectDistanceField(UStaticMeshComponent* Mesh, bool bNewValue); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF751BD4AD0(relative to base address)
		void SetControlPointWidth(ULandscapeSplineControlPoint* InControlPoint, float InWidth); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF751BD4760(relative to base address)
		void SetControlPointSideFalloff(ULandscapeSplineControlPoint* InControlPoint, float InSideFalloff); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF751BD46AC(relative to base address)
		void SetControlPointRotation(ULandscapeSplineControlPoint* InControlPoint, FRotator InRotation); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF751BD4558(relative to base address)
		void SetControlPointLocation(ULandscapeSplineControlPoint* InControlPoint, FVector InLocation); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF751BD4404(relative to base address)
		void SetControlPointLayerWidthRatio(ULandscapeSplineControlPoint* InControlPoint, float InLayerWidthRatio); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF751BD4350(relative to base address)
		FVector ProjectLocationOnLandscape(ALandscapeProxy* LandscapeProxy, FVector Location, bool& bIsValidLocation); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751BD3F98(relative to base address)
		void LevelInstanceSetAndUpdateWorldAsset(ALevelInstance* LevelInstance, TWeakObjectPtr<UWorld*>& WorldAsset); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751BD3EB8(relative to base address)
		float GetLandscapeHeightAtLocation(ALandscapeProxy* LandscapeProxy, FVector Location, bool& bIsValidLocation); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751BD2B84(relative to base address)
		FVector2D GetLandscapeGradientAtLocation(ALandscapeProxy* LandscapeProxy, FVector Location); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751BD2A14(relative to base address)
		float GetControlPointWidth(ULandscapeSplineControlPoint* InControlPoint); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751BD2568(relative to base address)
		float GetControlPointSideFalloff(ULandscapeSplineControlPoint* InControlPoint); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751BD24EC(relative to base address)
		FRotator GetControlPointRotation(ULandscapeSplineControlPoint* InControlPoint); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751BD2464(relative to base address)
		FVector GetControlPointLocation(ULandscapeSplineControlPoint* InControlPoint); // Flags: Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751BD23DC(relative to base address)
		float GetControlPointLayerWidthRatio(ULandscapeSplineControlPoint* InControlPoint); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751BD2360(relative to base address)
		bool CreateSplineComponentsFromGuideSetAndAddToActor(AActor* InActor, FPathfinderGuideSet& GuideSet); // Flags: Final|Native|Static|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751BD1784(relative to base address)
	};


	// Class JunoProceduralWorld.LandmassProceduralRoadGenRules
	// Inherited from UDataAsset -> UObject
	// Size: 0x58 (0x88 - 0x30)
	class ULandmassProceduralRoadGenRules : public UDataAsset	
	{
	public:
		TMap<ELandmassRoadTier, FProceduralRoadGenRules> RuleSet; // 0x30(0x50)
		float RoadGridGridSize; // 0x80(0x4)
		int32_t RasterizeToRoadGridExtent; // 0x84(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.LandmassProceduralRoadGenRules");
			return ret;
		}
	};


	// Class JunoProceduralWorld.ProceduralRouteDefinition
	// Inherited from UObject
	// Size: 0x8 (0x30 - 0x28)
	class UProceduralRouteDefinition : public UObject	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x28(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.ProceduralRouteDefinition");
			return ret;
		}

		FVector FindLocationClosestToWorldLocation(FVector& WorldLocation, float& OutDistanceSqr); // Flags: Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751BD1BDC(relative to base address)
	};


	// Class JunoProceduralWorld.LandmassProceduralRoute
	// Inherited from AActor -> UObject
	// Size: 0xC8 (0x358 - 0x290)
	class ALandmassProceduralRoute : public AActor	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x290(0x8) UNKNOWN PROPERTY
		bool EditorTickIsEnabled; // 0x298(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x299(0x3) UNKNOWN PROPERTY
		TWeakObjectPtr<UPCGSpatialData*> PCGSampler; // 0x29C(0x8)
		bool bRunFromPCG; // 0x2A4(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x2A5(0x3) UNKNOWN PROPERTY
		ALandscapeProxy* LandscapeProxy; // 0x2A8(0x8)
		int32_t TickFrequency; // 0x2B0(0x4)
		FProceduralRouteJunoTileInfo JunoTileInfo; // 0x2B4(0xC)
		UClass* Pathfinder; // 0x2C0(0x8)
		TArray<AWaterBody*> Lakes; // 0x2C8(0x10)
		unsigned char UnknownData03_6[0x10]; // 0x2D8(0x10) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnGenerationFinishedMulticastDelegate; // 0x2E8(0x10)
		unsigned char UnknownData04_6[0x20]; // 0x2F8(0x20) UNKNOWN PROPERTY
		TArray<UProceduralRouteDefinition*> PendingRoutesToAddToRouteGrid; // 0x318(0x10)
		unsigned char UnknownData05_6[0x20]; // 0x328(0x20) UNKNOWN PROPERTY
		ULandmassCluster* LandmassCluster; // 0x348(0x8)
		bool bEnableDebugInfo; // 0x350(0x1)
		unsigned char UnknownData06_7[0x7]; // 0x351(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.LandmassProceduralRoute");
			return ret;
		}

		bool WakeUpDormantRoute(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74F8DBC84(relative to base address)
		void StartRoute(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74D8E21E8(relative to base address)
		void SetWidthForLastAddedPoint(float NewWidth); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF751BD4D24(relative to base address)
		void SetWidthAtPointIndex(int32_t Index, float NewWidth); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF751BD4C5C(relative to base address)
		void SetEditorTickEnabled(bool bEnabled); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751BD4958(relative to base address)
		void SetCurrentRouteGenerationState(ERouteGenerationState InState); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751BD4814(relative to base address)
		bool ResetAllAndInitialize(bool bResetAllLandscapeSplines); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF751BD4220(relative to base address)
		void RasterizeAllPendingRoutesToRouteGrid(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751BD41BC(relative to base address)
		bool PutIntoDormancy(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF751BD4194(relative to base address)
		void OnGenerationFinished(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751BD3F84(relative to base address)
		bool IsInsideOcean(FVector Location); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751BD3BA8(relative to base address)
		bool IsInsideLake(FVector Location, AWaterBody* InLake, float Dilation); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751BD37D0(relative to base address)
		bool IsInsideAnyLakeAccurate(FVector Location); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751BD36A0(relative to base address)
		bool IsInsideAnyLake(FVector Location, float Tolerance); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751BD34AC(relative to base address)
		void InitLandmassClusterLeavesOnly(TArray<FDendrogramLeafAttributes>& InLeafAttributes); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751BD3280(relative to base address)
		void InitLandmassCluster(TArray<AActor*> InActors, TArray<FDendrogramLeafAttributes>& InLeafAttributes); // Flags: Final|Native|Protected|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751BD311C(relative to base address)
		TArray GetRouteDefinitions(); // Flags: Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751BD2EF4(relative to base address)
		ULandmassCluster GetLandmassCluster(); // Flags: Final|Native|Protected|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF748BE1784(relative to base address)
		ERouteGenerationState GetCurrentRouteGenerationState(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751BD25E4(relative to base address)
		bool GenerateCluster(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751BD1FB4(relative to base address)
		bool FinishRoute(int32_t& OutRouteIndex); // Flags: Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751BD1ED8(relative to base address)
		void CustomTick(float DeltaSeconds); // Flags: Event|Public|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool ClearCreatedLandscapeSplines(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF751BD175C(relative to base address)
		void BeginGeneratePCG(TArray<FLandmassPCGRouteInput>& Inputs); // Flags: Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF751BD16C0(relative to base address)
		bool AddControlPoint(FVector WorldPosition); // Flags: Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF751BD1040(relative to base address)
		bool AddConnection(AActor* LeafActorA, AActor* LeafActorB); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751BD0F78(relative to base address)
		void AddAvoidancePrimitive(FRouteAvoidancePrimitive InPrimitive); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751BD0E24(relative to base address)
	};


	// Class JunoProceduralWorld.ProceduralRiverDefinition
	// Inherited from UProceduralRouteDefinition -> UObject
	// Size: 0x18 (0x48 - 0x30)
	class UProceduralRiverDefinition : public UProceduralRouteDefinition	
	{
	public:
		UProceduralRiverGenRulesAsset* GenRulesAsset; // 0x30(0x8)
		ELandmassRiverTier RiverTier; // 0x38(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x39(0x7) UNKNOWN PROPERTY
		AWaterBody* WaterBody; // 0x40(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.ProceduralRiverDefinition");
			return ret;
		}

		UWaterSplineComponent GetWaterSpline(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751BD30DC(relative to base address)
		AWaterBody GetWaterBodyActor(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C0DFB98(relative to base address)
	};


	// Class JunoProceduralWorld.ProceduralRivers
	// Inherited from ALandmassProceduralRoute -> AActor -> UObject
	// Size: 0x778 (0xAD0 - 0x358)
	class AProceduralRivers : public ALandmassProceduralRoute	
	{
	public:
		UClass* WaterClass; // 0x358(0x8)
		UProceduralRiverGenRulesAsset* GenRulesAsset; // 0x360(0x8)
		TArray<FProceduralRiverAnchor> AnchorsInput; // 0x368(0x10)
		TArray<UProceduralRiverDefinition*> OutRivers; // 0x378(0x10)
		UProceduralRiverDefinition* CurrentRoute; // 0x388(0x8)
		bool bEnableDebug; // 0x390(0x1)
		unsigned char UnknownData00_7[0x73F]; // 0x391(0x73F) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.ProceduralRivers");
			return ret;
		}

		void VisualizeAnchors(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74921B8F8(relative to base address)
		FVector SurfaceLocationOverride(FVector InLocation, bool& bOutIsOverriden); // Flags: Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void StartRiverGeneration(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751BD4E84(relative to base address)
		void StartPCGRoute(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C9D53A0(relative to base address)
		void SetWidthInterpCurveModeAtPointIndex(int32_t Index, TEnumAsByte<EInterpCurveMode> NewInterpCurveMode); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751BD4DA8(relative to base address)
		void SetVelocityAtPointIndex(int32_t Index, float NewVelocity); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF751BD4B94(relative to base address)
		void SetRiverTier(ELandmassRiverTier InRiverTier); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751BD49D8(relative to base address)
		void SetDepthAtPointIndex(int32_t Index, float NewDepth); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF751BD4890(relative to base address)
		void RebuildLastRiver(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751BD41D0(relative to base address)
		bool InitializeNeighborGrid(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751BD3464(relative to base address)
		void HaltRiverGeneration(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751BD3104(relative to base address)
		float GetVelocityScalarAtDistanceAlongSpline(UWaterSplineComponent* WaterSplineComponent, float DistanceAlongSpline); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751BD2FD4(relative to base address)
		float GetRiverMergeSearchNeighborGridSize(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751BD2EB4(relative to base address)
		TArray GetRiverDefinitions(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751BD2E48(relative to base address)
		FName GetProceduralRiverActorTag(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751BD2D6C(relative to base address)
		float GetHalfWidthAtDistanceAlongSpline(UWaterSplineComponent* WaterSplineComponent, float DistanceAlongSpline); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751BD290C(relative to base address)
		bool GetGenerationRules(ELandmassRiverTier InRiverTier, FProceduralRiverGenRules& OutRules); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751BD2704(relative to base address)
		float GetDepthAtDistanceAlongSpline(UWaterSplineComponent* WaterSplineComponent, float DistanceAlongSpline); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751BD25FC(relative to base address)
		TArray GetAvailableTargetAnchors(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751BD222C(relative to base address)
		TArray GetAvailableSourceAnchors(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751BD219C(relative to base address)
		float GetAudioIntensityAtDistanceAlongSpline(UWaterSplineComponent* WaterSplineComponent, float DistanceAlongSpline); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751BD2094(relative to base address)
		bool FinishPCGRoute(int32_t& OutRouteIndex); // Flags: Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751BD1D20(relative to base address)
		void AddSplinePoint(FVector& Position, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUpdateSpline, TEnumAsByte<EInterpCurveMode> NewInterpCurveMode); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF751BD1470(relative to base address)
		bool AddControlPointWithInterpCurveMode(FVector WorldPosition, TEnumAsByte<EInterpCurveMode> NewInterpCurveMode); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF751BD1178(relative to base address)
	};


	// Class JunoProceduralWorld.ProceduralRoadDefinition
	// Inherited from UProceduralRouteDefinition -> UObject
	// Size: 0xA0 (0xD0 - 0x30)
	class UProceduralRoadDefinition : public UProceduralRouteDefinition	
	{
	public:
		ULandmassProceduralRoadGenRules* GenRulesAsset; // 0x30(0x8)
		ELandmassRoadTier RoadTier; // 0x38(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x39(0x7) UNKNOWN PROPERTY
		FTransform Transform; // 0x40(0x60)
		TArray<FInterpSegment> OutInterpSegments; // 0xA0(0x10)
		float Length; // 0xB0(0x4)
		float LUTGridSize; // 0xB4(0x4)
		TArray<int32_t> LUT; // 0xB8(0x10)
		float LUTResolution; // 0xC8(0x4)
		unsigned char UnknownData01_7[0x4]; // 0xCC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.ProceduralRoadDefinition");
			return ret;
		}
	};


	// Class JunoProceduralWorld.ProceduralRoads
	// Inherited from ALandmassProceduralRoute -> AActor -> UObject
	// Size: 0x348 (0x6A0 - 0x358)
	class AProceduralRoads : public ALandmassProceduralRoute	
	{
	public:
		bool bDoesAffectLandscape; // 0x358(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x359(0x7) UNKNOWN PROPERTY
		ULandscapeSplinesComponent* SplinesComponent; // 0x360(0x8)
		int32_t SplineLayerIndex; // 0x368(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x36C(0x4) UNKNOWN PROPERTY
		ULandmassProceduralRoadGenRules* GenRulesAsset; // 0x370(0x8)
		TArray<UProceduralRoadDefinition*> OutRoads; // 0x378(0x10)
		UProceduralRoadDefinition* CurrentRoute; // 0x388(0x8)
		unsigned char UnknownData02_6[0x60]; // 0x390(0x60) UNKNOWN PROPERTY
		TArray<ULandscapeSplineControlPoint*> SelectedSplineControlPoints; // 0x3F0(0x10)
		unsigned char UnknownData03_6[0x278]; // 0x400(0x278) UNKNOWN PROPERTY
		TArray<ULandscapeSplineControlPoint*> ControlPoints; // 0x678(0x10)
		TArray<ULandscapeSplineSegment*> Segments; // 0x688(0x10)
		unsigned char UnknownData04_7[0x8]; // 0x698(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.ProceduralRoads");
			return ret;
		}

		void UpdateLandscapeSplines(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF74921B8F8(relative to base address)
		void StartPCGRoute(); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF751BD4E6C(relative to base address)
		void SetRoadTier(ELandmassRoadTier InRoadTier); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751BD4A54(relative to base address)
		bool ResetAllAndInitializePCG(bool bResetAllLandscapeSplines); // Flags: Native|Public|BlueprintCallable, Memory Exec: 0x7FF751BD42B8(relative to base address)
		void RemoveHardTurnControlPoint(); // Flags: Final|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF751BD41E8(relative to base address)
		TArray K2_GetRoadGridDataAtLocation(FVector InLocation); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF751BD3D74(relative to base address)
		bool InitializeNeighborGrid(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751BD3488(relative to base address)
		float GetRoadMergeSearchNeighborGridSize(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751BD2ED4(relative to base address)
		TArray GetRoadDefinitions(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751BD2E48(relative to base address)
		FName GetProceduralRoadLoopAnchorTag(int32_t LoopIndex); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751BD2DC4(relative to base address)
		FName GetProceduralRoadActorTag(); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751BD2D98(relative to base address)
		bool GetGenerationRules(ELandmassRoadTier InRoadTier, FProceduralRoadGenRules& OutRules); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751BD2810(relative to base address)
		TArray GetAllControlPoints(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751BD1FE0(relative to base address)
		bool FinishPCGRoute(int32_t& OutRouteIndex); // Flags: Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751BD1DFC(relative to base address)
		FSegmentInterpResult EvaluateRouteAtLength(UProceduralRoadDefinition* InRoute, float InLength, bool bTransformToWorld); // Flags: Final|Native|Static|Public|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751BD19C8(relative to base address)
		void EnableOverrideGenRules(FProceduralRoadGenRules InOverrideGenRules); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751BD187C(relative to base address)
		void DisableOverrideGenRules(); // Flags: Final|Native|Public|BlueprintCallable, Memory Exec: 0x7FF751BD1864(relative to base address)
		bool AddPCGControlPoint(FVector WorldPosition); // Flags: Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF751BD1338(relative to base address)
	};


	// Class JunoProceduralWorld.PCGAddLandscapeLayerWeightsSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x0 (0xA8 - 0xA8)
	class UPCGAddLandscapeLayerWeightsSettings : public UPCGSettings	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.PCGAddLandscapeLayerWeightsSettings");
			return ret;
		}
	};


	// Class JunoProceduralWorld.PCGJunoFilterPointsBasedOnLandscapeSlopeSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x18 (0xC0 - 0xA8)
	class UPCGJunoFilterPointsBasedOnLandscapeSlopeSettings : public UPCGSettings	
	{
	public:
		float Radius; // 0xA8(0x4)
		int32_t DirectionCount; // 0xAC(0x4)
		int32_t SampleOnEachDirectionCount; // 0xB0(0x4)
		float BaseDistanceThreshold; // 0xB4(0x4)
		float MaxSlopeAngleDegree; // 0xB8(0x4)
		int32_t RequiredValidConsecutiveDirectionsCount; // 0xBC(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.PCGJunoFilterPointsBasedOnLandscapeSlopeSettings");
			return ret;
		}
	};


	// Class JunoProceduralWorld.PCGJunoFractalNoise2DSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0xB0 (0x158 - 0xA8)
	class UPCGJunoFractalNoise2DSettings : public UPCGSettings	
	{
	public:
		FVector2D TilingFactor; // 0xA8(0x10)
		float Brightness; // 0xB8(0x4)
		float Contrast; // 0xBC(0x4)
		int32_t Iterations; // 0xC0(0x4)
		PCGJunoFractalNoise2DMode Mode; // 0xC4(0x4)
		FName AttributeName; // 0xC8(0x4)
		FName VoronoiIDAttributeName; // 0xCC(0x4)
		bool bVoronoiOrientSamplesToCellEdge; // 0xD0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0xD1(0x7) UNKNOWN PROPERTY
		double VoronoiDistortion; // 0xD8(0x8)
		FVector2D VoronoiDistortionTiling; // 0xE0(0x10)
		int32_t TiledVoronoiResolution; // 0xF0(0x4)
		PCGJunoFractalDensityMode DensityMode; // 0xF4(0x4)
		FVector2D Offset; // 0xF8(0x10)
		FVector2D RandomizedOffset; // 0x108(0x10)
		float EdgeBlendDistance; // 0x118(0x4)
		float EdgeNoiseBrightness; // 0x11C(0x4)
		float EdgeNoiseContrast; // 0x120(0x4)
		float EdgeBlendCurve; // 0x124(0x4)
		float EdgeBlendCurveOffset; // 0x128(0x4)
		float EdgeBlendNoise; // 0x12C(0x4)
		bool EdgeBlendFadeOut; // 0x130(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x131(0x7) UNKNOWN PROPERTY
		FVector2D EdgeBlendNoiseTilingFactor; // 0x138(0x10)
		PCGJunoFractalNoise2DEdgeMode EdgeNoiseMode; // 0x148(0x4)
		int32_t EdgeNoiseIterations; // 0x14C(0x4)
		int32_t EdgeBlendCellCount; // 0x150(0x4)
		unsigned char UnknownData02_7[0x4]; // 0x154(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.PCGJunoFractalNoise2DSettings");
			return ret;
		}
	};


	// Class JunoProceduralWorld.PCGJunoPathfindSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x28 (0xD0 - 0xA8)
	class UPCGJunoPathfindSettings : public UPCGSettings	
	{
	public:
		FName ProceduralRouteTag; // 0xA8(0x4)
		unsigned char UnknownData00_6[0x4]; // 0xAC(0x4) UNKNOWN PROPERTY
		TArray<FName> InputPins; // 0xB0(0x10)
		TArray<FName> OutputPins; // 0xC0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.PCGJunoPathfindSettings");
			return ret;
		}
	};


	// Class JunoProceduralWorld.PCGJunoReadProceduralSplinesSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x18 (0xC0 - 0xA8)
	class UPCGJunoReadProceduralSplinesSettings : public UPCGSettings	
	{
	public:
		FName ProceduralRouteTag; // 0xA8(0x4)
		unsigned char UnknownData00_6[0x4]; // 0xAC(0x4) UNKNOWN PROPERTY
		TArray<FName> OutputPins; // 0xB0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.PCGJunoReadProceduralSplinesSettings");
			return ret;
		}
	};


	// Class JunoProceduralWorld.PCGJunoReadLandscapeSplinesSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x20 (0xC8 - 0xA8)
	class UPCGJunoReadLandscapeSplinesSettings : public UPCGSettings	
	{
	public:
		FVector ExtraSearchExtents; // 0xA8(0x18)
		bool bPerformBoundsCheck; // 0xC0(0x1)
		unsigned char UnknownData00_7[0x7]; // 0xC1(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.PCGJunoReadLandscapeSplinesSettings");
			return ret;
		}
	};


	// Class JunoProceduralWorld.PCGJunoRoadAINavigationSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x110 (0x1B8 - 0xA8)
	class UPCGJunoRoadAINavigationSettings : public UPCGSettings	
	{
	public:
		TWeakObjectPtr<UClass*> RoadClusterClass; // 0xA8(0x20)
		TWeakObjectPtr<UClass*> PatrolPathClass; // 0xC8(0x20)
		TWeakObjectPtr<UClass*> PatrolPointClass; // 0xE8(0x20)
		FJunoRoadGraphGeneratorSettings GraphSettings; // 0x108(0xB0)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.PCGJunoRoadAINavigationSettings");
			return ret;
		}
	};


	// Class JunoProceduralWorld.PCGJunoSpawnLivingWorldStaticPointSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x88 (0x130 - 0xA8)
	class UPCGJunoSpawnLivingWorldStaticPointSettings : public UPCGSettings	
	{
	public:
		FGameplayTagContainer FiltersTags; // 0xA8(0x20)
		TArray<FPCGJunoSpawnLivingWorldStaticPointTag> ConditionalTags; // 0xC8(0x10)
		TArray<FPCGJunoSpawnLivingWorldStaticPointTagConditionSet> ConditionalTagsSets; // 0xD8(0x10)
		bool bExclusiveConditionalTags; // 0xE8(0x1)
		unsigned char UnknownData00_6[0x7]; // 0xE9(0x7) UNKNOWN PROPERTY
		TWeakObjectPtr<UClass*> StaticPointClass; // 0xF0(0x20)
		TWeakObjectPtr<UClass*> PointClusterClass; // 0x110(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.PCGJunoSpawnLivingWorldStaticPointSettings");
			return ret;
		}
	};


	// Class JunoProceduralWorld.PCGResolveAudioBankSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x10 (0xB8 - 0xA8)
	class UPCGResolveAudioBankSettings : public UPCGSettings	
	{
	public:
		FName AttributeNameForBiomeDataTable; // 0xA8(0x4)
		FName AttributeNameForResolvedActorPath; // 0xAC(0x4)
		FName AttributeNameForResolvedAudioBankPath; // 0xB0(0x4)
		unsigned char UnknownData00_7[0x4]; // 0xB4(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.PCGResolveAudioBankSettings");
			return ret;
		}
	};


	// Class JunoProceduralWorld.PCGResolveBiomeSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x48 (0xF0 - 0xA8)
	class UPCGResolveBiomeSettings : public UPCGSettings	
	{
	public:
		FPCGJunoBiomeEntry DefaultBiome; // 0xA8(0x28)
		TArray<FPCGJunoBiomeEntry> Biomes; // 0xD0(0x10)
		FName AttributeNameForResolvedBiome; // 0xE0(0x4)
		FName AttributeNameForResolvedBiomeEnum; // 0xE4(0x4)
		FName AttributeNameForResolvedBiomeDataTable; // 0xE8(0x4)
		unsigned char UnknownData00_7[0x4]; // 0xEC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.PCGResolveBiomeSettings");
			return ret;
		}
	};


	// Class JunoProceduralWorld.PCGResolveBiomeIngredientsSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x20 (0xC8 - 0xA8)
	class UPCGResolveBiomeIngredientsSettings : public UPCGSettings	
	{
	public:
		FName AttributeNameForBiomeTypeFilter; // 0xA8(0x4)
		FName AttributeNameForBiomeDataTable; // 0xAC(0x4)
		FName AttributeNameForBiomeLayer; // 0xB0(0x4)
		FName AttributeNameForResolvedActorPath; // 0xB4(0x4)
		FName AttributeNameForRepresentation; // 0xB8(0x4)
		FName AttributeNameForResolvedRowName; // 0xBC(0x4)
		bool bApplyBlendToVertical; // 0xC0(0x1)
		bool bApplyRandomLeanAmount; // 0xC1(0x1)
		unsigned char UnknownData00_7[0x6]; // 0xC2(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.PCGResolveBiomeIngredientsSettings");
			return ret;
		}
	};


	// Class JunoProceduralWorld.PCGResolveBiomePOISettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x18 (0xC0 - 0xA8)
	class UPCGResolveBiomePOISettings : public UPCGSettings	
	{
	public:
		FName AttributeNameForBiomeDataTable; // 0xA8(0x4)
		FName AttributeNameForResolvedActorPath; // 0xAC(0x4)
		FName AttributeNameForResolvedPOIPath; // 0xB0(0x4)
		FName AttributeNameForBoundsMultiplier; // 0xB4(0x4)
		FName AttributeNameForRepresentation; // 0xB8(0x4)
		FName AttributeNameForResolvedRowName; // 0xBC(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.PCGResolveBiomePOISettings");
			return ret;
		}
	};


	// Class JunoProceduralWorld.PCGResolvePOISlotsSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x18 (0xC0 - 0xA8)
	class UPCGResolvePOISlotsSettings : public UPCGSettings	
	{
	public:
		FName AttributeNameForBiomeDataTable; // 0xA8(0x4)
		FName AttributeNameForPotentialPIOsDataTable; // 0xAC(0x4)
		FName AttributeNameForResolvedActorPath; // 0xB0(0x4)
		FName AttributeNameForResolvedPOIPath; // 0xB4(0x4)
		FName AttributeNameForResolvedSlotSize; // 0xB8(0x4)
		FName AttributeNameForResolvedTerrainHeightPatch; // 0xBC(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.PCGResolvePOISlotsSettings");
			return ret;
		}
	};


	// Class JunoProceduralWorld.PCGSetAudioBankSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class UPCGSetAudioBankSettings : public UPCGSettings	
	{
	public:
		FName AttributeNameForResolvedAudioBankPath; // 0xA8(0x4)
		FName AttributeNameForSpawnedActorPtr; // 0xAC(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.PCGSetAudioBankSettings");
			return ret;
		}
	};


	// Class JunoProceduralWorld.PCGSetFoundationLevelSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class UPCGSetFoundationLevelSettings : public UPCGSettings	
	{
	public:
		FName AttributeNameForResolvedPOIPath; // 0xA8(0x4)
		FName AttributeNameForSpawnedActorPtr; // 0xAC(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.PCGSetFoundationLevelSettings");
			return ret;
		}
	};


	// Class JunoProceduralWorld.PCGSetLevelInstanceLevelSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x8 (0xB0 - 0xA8)
	class UPCGSetLevelInstanceLevelSettings : public UPCGSettings	
	{
	public:
		FName AttributeNameForResolvedPOIPath; // 0xA8(0x4)
		FName AttributeNameForSpawnedActorPtr; // 0xAC(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.PCGSetLevelInstanceLevelSettings");
			return ret;
		}
	};


	// Class JunoProceduralWorld.PCGSetPOISlotPropertiesSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x18 (0xC0 - 0xA8)
	class UPCGSetPOISlotPropertiesSettings : public UPCGSettings	
	{
	public:
		FName AttributeNameForSpawnedActorPtr; // 0xA8(0x4)
		FName AttributeNameForPotentialPIOsDataTable; // 0xAC(0x4)
		FName AttributeNameForResolvedPOIPath; // 0xB0(0x4)
		FName AttributeNameForResolvedSlotSize; // 0xB4(0x4)
		FName AttributeNameForResolvedTerrainHeightPatch; // 0xB8(0x4)
		unsigned char UnknownData00_7[0x4]; // 0xBC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.PCGSetPOISlotPropertiesSettings");
			return ret;
		}
	};


	// Class JunoProceduralWorld.PCGSpawnActorForPathSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x48 (0xF0 - 0xA8)
	class UPCGSpawnActorForPathSettings : public UPCGSettings	
	{
	public:
		bool bUseLightWeightInstances; // 0xA8(0x1)
		unsigned char UnknownData00_6[0x7]; // 0xA9(0x7) UNKNOWN PROPERTY
		FGameplayTagContainer InstanceTags; // 0xB0(0x20)
		TArray<FName> TagsToAddOnActors; // 0xD0(0x10)
		bool bAddSpawnedActorAttribute; // 0xE0(0x1)
		unsigned char UnknownData01_6[0x3]; // 0xE1(0x3) UNKNOWN PROPERTY
		FName AttributeNameForSpawnedActorPtr; // 0xE4(0x4)
		FName PathAttributeName; // 0xE8(0x4)
		FName AttributeNameForRepresentation; // 0xEC(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.PCGSpawnActorForPathSettings");
			return ret;
		}
	};


	// Class JunoProceduralWorld.PCGManageLightweightInstances
	// Inherited from UPCGManagedActors -> UPCGManagedResource -> UObject
	// Size: 0x50 (0xD8 - 0x88)
	class UPCGManageLightweightInstances : public UPCGManagedActors	
	{
	public:
		TSet<FActorInstanceHandle> GeneratedLWIs; // 0x88(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.PCGManageLightweightInstances");
			return ret;
		}
	};


	// Class JunoProceduralWorld.PCGManagedActorInstances
	// Inherited from UPCGManagedActors -> UPCGManagedResource -> UObject
	// Size: 0x50 (0xD8 - 0x88)
	class UPCGManagedActorInstances : public UPCGManagedActors	
	{
	public:
		TSet<FInstancedActorsInstanceHandle> GeneratedInstances; // 0x88(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.PCGManagedActorInstances");
			return ret;
		}
	};


	// Class JunoProceduralWorld.PCGSpawnJunoBiomeSettings
	// Inherited from UPCGSettings -> UPCGSettingsInterface -> UPCGData -> UObject
	// Size: 0x38 (0xE0 - 0xA8)
	class UPCGSpawnJunoBiomeSettings : public UPCGSettings	
	{
	public:
		FPCGJunoBiomeEntry DefaultBiome; // 0xA8(0x28)
		TArray<FPCGJunoBiomeEntry> Biomes; // 0xD0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.PCGSpawnJunoBiomeSettings");
			return ret;
		}
	};


	// Class JunoProceduralWorld.JunoWorldTilePersistenceFeatureData
	// Inherited from UJunoBasePFWPersistenceFeatureData -> UObject
	// Size: 0x290 (0x2E8 - 0x58)
	class UJunoWorldTilePersistenceFeatureData : public UJunoBasePFWPersistenceFeatureData	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x58(0x8) UNKNOWN PROPERTY
		TMap<FGuid, FJunoCave> Caves; // 0x60(0x50)
		TMap<FGuid, FPersistenceFrameworkLevelSaveSpawnablePtr> POIs; // 0xB0(0x50)
		FJunoWorldTileSaveData SaveData; // 0x100(0x1E8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoWorldTilePersistenceFeatureData");
			return ret;
		}
	};


	// Class JunoProceduralWorld.JunoProfileGo
	// Inherited from UFortProfileGo -> UObject
	// Size: 0x8 (0x610 - 0x608)
	class UJunoProfileGo : public UFortProfileGo	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x608(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoProfileGo");
			return ret;
		}
	};


	// Class JunoProceduralWorld.JunoLandscapeClampingHelper
	// Inherited from UFortLandscapeClampingHelperBase -> UObject
	// Size: 0x8 (0x30 - 0x28)
	class UJunoLandscapeClampingHelper : public UFortLandscapeClampingHelperBase	
	{
	public:
		TWeakObjectPtr<UJunoTerrainGenerationSystem*> CachedTerrainGenerationSystem; // 0x28(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoLandscapeClampingHelper");
			return ret;
		}
	};


	// Class JunoProceduralWorld.JunoLivingWorldLightStaticPointProvider
	// Inherited from UFortAthenaLivingWorldLightStaticPointProvider -> UObject
	// Size: 0x40 (0x1A0 - 0x160)
	class UJunoLivingWorldLightStaticPointProvider : public UFortAthenaLivingWorldLightStaticPointProvider	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x160(0x8) UNKNOWN PROPERTY
		FJunoLivingWorldPointProviderEventLimiter EventLimiter; // 0x168(0x20)
		FGuid SavedActorGuid; // 0x188(0x10)
		unsigned char UnknownData01_7[0x8]; // 0x198(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoLivingWorldLightStaticPointProvider");
			return ret;
		}

		void AppendFiltersTags(FGameplayTagContainer& Container); // Flags: Final|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF751C1A1A4(relative to base address)
	};


	// Class JunoProceduralWorld.JunoWorldRegistryActorComponent
	// Inherited from UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x48 (0xE8 - 0xA0)
	class UJunoWorldRegistryActorComponent : public UGameFrameworkComponent	
	{
	public:
		FGameplayTagContainer WorldRegistryEntryTags; // 0xA0(0x20)
		EJunoWorldRegistryType WorldRegistryType; // 0xC0(0x1)
		unsigned char UnknownData00_6[0x7]; // 0xC1(0x7) UNKNOWN PROPERTY
		FGameplayTagContainer VisitedTags; // 0xC8(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoWorldRegistryActorComponent");
			return ret;
		}
	};


	// Class JunoProceduralWorld.JunoWorldRegistryManager
	// Inherited from UFortPlayspaceComponent -> UPlayspaceComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x28 (0x120 - 0xF8)
	class UJunoWorldRegistryManager : public UFortPlayspaceComponent	
	{
	public:
		unsigned char UnknownData00_1[0x28]; // 0xF8(0x28) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/JunoProceduralWorld.JunoWorldRegistryManager");
			return ret;
		}

		void GetWorldDebugInfoText(AFortPlayerPawn* PlayerPawn, FJunoDebugWorldInfoResult& WorldDebugInfo); // Flags: Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751C233F8(relative to base address)
		FBoxSphereBounds GetWorldBounds(); // Flags: Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751C233A8(relative to base address)
		void GetWorldAnalyticsInfo(UObject* WorldContextObject, FVector& WorldLocation, FJunoWorldAnalyticsInfoResult& WorldAnalyticsInfo); // Flags: Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751C2321C(relative to base address)
		void GetWaterInformationInDirection(FVector& Location, FVector& Direction, FJunoWaterLocationResult& OutResult); // Flags: Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751C23034(relative to base address)
		void GetWaterDirectionInformationAtLocation(FVector& Location, bool bIncludeNearMisses, bool& OutInWater, TArray<FJunoWaterLocationResult>& OutResult); // Flags: Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751C22E58(relative to base address)
		FGameplayTagContainer GetTileTagsForLocation(FVector& WorldLocation); // Flags: Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751C22D68(relative to base address)
		AJunoWorldTile GetTileForLocation(UObject* WorldContextObject, FVector& WorldLocation); // Flags: Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751C22C60(relative to base address)
		AJunoWorldTile GetTileAtLocation(FVector& WorldLocation); // Flags: Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751C22B88(relative to base address)
		bool GetNormalizedTileLocation(UObject* WorldContextObject, FVector& WorldLocation, FVector& OutResult); // Flags: Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751C229E0(relative to base address)
		void GetGlobalPOIs(UObject* WorldContextObject, TArray<FJunoGlobalPOIInfo>& OutGlobalPOIs, FName EventName, FName POIName); // Flags: Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751C2276C(relative to base address)
		bool GetEventTilesAverageLocation(UObject* WorldContextObject, FName& EventName, FVector& OutLocation); // Flags: Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751C225FC(relative to base address)
		FJunoWorldRegistryEntry GetClosestEntryUsingTagQuery(EJunoWorldRegistryType EntryType, FGameplayTagQuery& TagQuery, FVector& QueryLocation); // Flags: Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure, Memory Exec: 0x7FF751C223B4(relative to base address)
		void GetBiomeAtLocation(FVector& Location, FJunoBiomeInfoQueryResult& OutResult); // Flags: Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF751C22238(relative to base address)
	};

}
