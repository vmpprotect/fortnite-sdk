#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: NavigationSystem
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class NavigationSystem.BaseGeneratedNavLinksProxy
	// Inherited from UObject
	// Size: 0x18 (0x40 - 0x28)
	class UBaseGeneratedNavLinksProxy : public UObject	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		FNavLinkId LinkProxyId; // 0x30(0x8)
		UObject Owner; // 0x38(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NavigationSystem.BaseGeneratedNavLinksProxy");
			return ret;
		}
	};


	// Class NavigationSystem.CrowdManagerBase
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UCrowdManagerBase : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NavigationSystem.CrowdManagerBase");
			return ret;
		}
	};


	// Class NavigationSystem.NavigationGraphNode
	// Inherited from AActor -> UObject
	// Size: 0x0 (0x290 - 0x290)
	class ANavigationGraphNode : public AActor	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NavigationSystem.NavigationGraphNode");
			return ret;
		}
	};


	// Class NavigationSystem.NavigationGraphNodeComponent
	// Inherited from USceneComponent -> UActorComponent -> UObject
	// Size: 0x30 (0x250 - 0x220)
	class UNavigationGraphNodeComponent : public USceneComponent	
	{
	public:
		FNavGraphNode Node; // 0x220(0x18)
		UNavigationGraphNodeComponent NextNodeComponent; // 0x238(0x8)
		UNavigationGraphNodeComponent PrevNodeComponent; // 0x240(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x248(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NavigationSystem.NavigationGraphNodeComponent");
			return ret;
		}
	};


	// Class NavigationSystem.NavigationObjectRepository
	// Inherited from UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x60 (0x90 - 0x30)
	class UNavigationObjectRepository : public UWorldSubsystem	
	{
	public:
		unsigned char UnknownData01_1[0x60]; // 0x30(0x60) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NavigationSystem.NavigationObjectRepository");
			return ret;
		}
	};


	// Class NavigationSystem.NavigationPathGenerator
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UNavigationPathGenerator : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NavigationSystem.NavigationPathGenerator");
			return ret;
		}
	};


	// Class NavigationSystem.NavLinkCustomInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UNavLinkCustomInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NavigationSystem.NavLinkCustomInterface");
			return ret;
		}
	};


	// Class NavigationSystem.NavLinkHostInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UNavLinkHostInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NavigationSystem.NavLinkHostInterface");
			return ret;
		}
	};


	// Class NavigationSystem.NavLinkTrivial
	// Inherited from UNavLinkDefinition -> UObject
	// Size: 0x0 (0x50 - 0x50)
	class UNavLinkTrivial : public UNavLinkDefinition	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NavigationSystem.NavLinkTrivial");
			return ret;
		}
	};


	// Class NavigationSystem.NavNodeInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UNavNodeInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NavigationSystem.NavNodeInterface");
			return ret;
		}
	};


	// Class NavigationSystem.NavigationData
	// Inherited from AActor -> UObject
	// Size: 0x200 (0x490 - 0x290)
	class ANavigationData : public AActor	
	{
	public:
		unsigned char UnknownData05_3[0x8]; // 0x290(0x8) UNKNOWN PROPERTY
		UPrimitiveComponent RenderingComp; // 0x298(0x8)
		FNavDataConfig NavDataConfig; // 0x2A0(0x70)
		bool bEnableDrawing : 1; // 0x310:0(0x1)
		bool bForceRebuildOnLoad : 1; // 0x310:1(0x1)
		bool bAutoDestroyWhenNoNavigation : 1; // 0x310:2(0x1)
		bool bCanBeMainNavData : 1; // 0x310:3(0x1)
		bool bCanSpawnOnRebuild : 1; // 0x310:4(0x1)
		bool bRebuildAtRuntime : 1; // 0x310:5(0x1)
		unsigned char UnknownData06_5[0x3]; // 0x311(0x3) UNKNOWN PROPERTY
		ERuntimeGenerationType RuntimeGeneration; // 0x314(0x1)
		unsigned char UnknownData07_6[0x3]; // 0x315(0x3) UNKNOWN PROPERTY
		float ObservedPathsTickInterval; // 0x318(0x4)
		uint32_t DataVersion; // 0x31C(0x4)
		unsigned char UnknownData08_6[0x108]; // 0x320(0x108) UNKNOWN PROPERTY
		TArray SupportedAreas; // 0x428(0x10)
		unsigned char UnknownData09_7[0x58]; // 0x438(0x58) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NavigationSystem.NavigationData");
			return ret;
		}
	};


	// Class NavigationSystem.AbstractNavData
	// Inherited from ANavigationData -> AActor -> UObject
	// Size: 0x0 (0x490 - 0x490)
	class AAbstractNavData : public ANavigationData	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NavigationSystem.AbstractNavData");
			return ret;
		}
	};


	// Class NavigationSystem.NavArea
	// Inherited from UNavAreaBase -> UObject
	// Size: 0x18 (0x48 - 0x30)
	class UNavArea : public UNavAreaBase	
	{
	public:
		float DefaultCost; // 0x30(0x4)
		float FixedAreaEnteringCost; // 0x34(0x4)
		FColor DrawColor; // 0x38(0x4)
		FNavAgentSelector SupportedAgents; // 0x3C(0x4)
		bool bSupportsAgent0 : 1; // 0x40:0(0x1)
		bool bSupportsAgent1 : 1; // 0x40:1(0x1)
		bool bSupportsAgent2 : 1; // 0x40:2(0x1)
		bool bSupportsAgent3 : 1; // 0x40:3(0x1)
		bool bSupportsAgent4 : 1; // 0x40:4(0x1)
		bool bSupportsAgent5 : 1; // 0x40:5(0x1)
		bool bSupportsAgent6 : 1; // 0x40:6(0x1)
		bool bSupportsAgent7 : 1; // 0x40:7(0x1)
		bool bSupportsAgent8 : 1; // 0x41:0(0x1)
		bool bSupportsAgent9 : 1; // 0x41:1(0x1)
		bool bSupportsAgent10 : 1; // 0x41:2(0x1)
		bool bSupportsAgent11 : 1; // 0x41:3(0x1)
		bool bSupportsAgent12 : 1; // 0x41:4(0x1)
		bool bSupportsAgent13 : 1; // 0x41:5(0x1)
		bool bSupportsAgent14 : 1; // 0x41:6(0x1)
		bool bSupportsAgent15 : 1; // 0x41:7(0x1)
		unsigned char UnknownData01_7[0x6]; // 0x42(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NavigationSystem.NavArea");
			return ret;
		}
	};


	// Class NavigationSystem.NavAreaMeta
	// Inherited from UNavArea -> UNavAreaBase -> UObject
	// Size: 0x0 (0x48 - 0x48)
	class UNavAreaMeta : public UNavArea	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NavigationSystem.NavAreaMeta");
			return ret;
		}
	};


	// Class NavigationSystem.NavAreaMeta_SwitchByAgent
	// Inherited from UNavAreaMeta -> UNavArea -> UNavAreaBase -> UObject
	// Size: 0x80 (0xC8 - 0x48)
	class UNavAreaMeta_SwitchByAgent : public UNavAreaMeta	
	{
	public:
		UClass Agent0Area; // 0x48(0x8)
		UClass Agent1Area; // 0x50(0x8)
		UClass Agent2Area; // 0x58(0x8)
		UClass Agent3Area; // 0x60(0x8)
		UClass Agent4Area; // 0x68(0x8)
		UClass Agent5Area; // 0x70(0x8)
		UClass Agent6Area; // 0x78(0x8)
		UClass Agent7Area; // 0x80(0x8)
		UClass Agent8Area; // 0x88(0x8)
		UClass Agent9Area; // 0x90(0x8)
		UClass Agent10Area; // 0x98(0x8)
		UClass Agent11Area; // 0xA0(0x8)
		UClass Agent12Area; // 0xA8(0x8)
		UClass Agent13Area; // 0xB0(0x8)
		UClass Agent14Area; // 0xB8(0x8)
		UClass Agent15Area; // 0xC0(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NavigationSystem.NavAreaMeta_SwitchByAgent");
			return ret;
		}
	};


	// Class NavigationSystem.NavArea_Default
	// Inherited from UNavArea -> UNavAreaBase -> UObject
	// Size: 0x0 (0x48 - 0x48)
	class UNavArea_Default : public UNavArea	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NavigationSystem.NavArea_Default");
			return ret;
		}
	};


	// Class NavigationSystem.NavArea_LowHeight
	// Inherited from UNavArea -> UNavAreaBase -> UObject
	// Size: 0x0 (0x48 - 0x48)
	class UNavArea_LowHeight : public UNavArea	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NavigationSystem.NavArea_LowHeight");
			return ret;
		}
	};


	// Class NavigationSystem.NavArea_Null
	// Inherited from UNavArea -> UNavAreaBase -> UObject
	// Size: 0x0 (0x48 - 0x48)
	class UNavArea_Null : public UNavArea	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NavigationSystem.NavArea_Null");
			return ret;
		}
	};


	// Class NavigationSystem.NavArea_Obstacle
	// Inherited from UNavArea -> UNavAreaBase -> UObject
	// Size: 0x0 (0x48 - 0x48)
	class UNavArea_Obstacle : public UNavArea	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NavigationSystem.NavArea_Obstacle");
			return ret;
		}
	};


	// Class NavigationSystem.NavCollision
	// Inherited from UNavCollisionBase -> UObject
	// Size: 0x98 (0x108 - 0x70)
	class UNavCollision : public UNavCollisionBase	
	{
	public:
		unsigned char UnknownData02_3[0x48]; // 0x70(0x48) UNKNOWN PROPERTY
		TArray CylinderCollision; // 0xB8(0x10)
		TArray BoxCollision; // 0xC8(0x10)
		UClass AreaClass; // 0xD8(0x8)
		bool bGatherConvexGeometry : 1; // 0xE0:0(0x1)
		bool bCreateOnClient : 1; // 0xE0:1(0x1)
		unsigned char UnknownData03_7[0x27]; // 0xE1(0x27) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NavigationSystem.NavCollision");
			return ret;
		}
	};


	// Class NavigationSystem.NavigationQueryFilter
	// Inherited from UObject
	// Size: 0x20 (0x48 - 0x28)
	class UNavigationQueryFilter : public UObject	
	{
	public:
		TArray Areas; // 0x28(0x10)
		FNavigationFilterFlags IncludeFlags; // 0x38(0x4)
		FNavigationFilterFlags ExcludeFlags; // 0x3C(0x4)
		unsigned char UnknownData01_7[0x8]; // 0x40(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NavigationSystem.NavigationQueryFilter");
			return ret;
		}
	};


	// Class NavigationSystem.RecastFilter_UseDefaultArea
	// Inherited from UNavigationQueryFilter -> UObject
	// Size: 0x0 (0x48 - 0x48)
	class URecastFilter_UseDefaultArea : public UNavigationQueryFilter	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NavigationSystem.RecastFilter_UseDefaultArea");
			return ret;
		}
	};


	// Class NavigationSystem.NavigationGraph
	// Inherited from ANavigationData -> AActor -> UObject
	// Size: 0x0 (0x490 - 0x490)
	class ANavigationGraph : public ANavigationData	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NavigationSystem.NavigationGraph");
			return ret;
		}
	};


	// Class NavigationSystem.NavigationInvokerComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x10 (0xB0 - 0xA0)
	class UNavigationInvokerComponent : public UActorComponent	
	{
	public:
		float TileGenerationRadius; // 0xA0(0x4)
		float TileRemovalRadius; // 0xA4(0x4)
		FNavAgentSelector SupportedAgents; // 0xA8(0x4)
		ENavigationInvokerPriority Priority; // 0xAC(0x1)
		unsigned char UnknownData01_7[0x3]; // 0xAD(0x3) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NavigationSystem.NavigationInvokerComponent");
			return ret;
		}
	};


	// Class NavigationSystem.NavigationPath
	// Inherited from UObject
	// Size: 0x60 (0x88 - 0x28)
	class UNavigationPath : public UObject	
	{
	public:
		FMulticastInlineDelegate PathUpdatedNotifier; // 0x28(0x10)
		TArray PathPoints; // 0x38(0x10)
		TEnumAsByte RecalculateOnInvalidation; // 0x48(0x1)
		unsigned char UnknownData01_7[0x3F]; // 0x49(0x3F) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NavigationSystem.NavigationPath");
			return ret;
		}

		bool IsValid(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414595718
		bool IsStringPulled(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414595638
		bool IsPartial(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414595558
		double GetPathLength(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414595478
		double GetPathCost(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF414595398
		FString GetDebugString(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4145952B8
		void EnableRecalculationOnInvalidation(TEnumAsByte DoRecalculation); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4145951D8
		void EnableDebugDrawing(bool bShouldDrawDebugData, FLinearColor PathColor); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 0x7FF4145950F8
	};


	// Class NavigationSystem.NavigationSystemV1
	// Inherited from UNavigationSystemBase -> UObject
	// Size: 0x1588 (0x15B0 - 0x28)
	class UNavigationSystemV1 : public UNavigationSystemBase	
	{
	public:
		ANavigationData MainNavData; // 0x28(0x8)
		ANavigationData AbstractNavData; // 0x30(0x8)
		FName DefaultAgentName; // 0x38(0x4)
		unsigned char UnknownData10_6[0x4]; // 0x3C(0x4) UNKNOWN PROPERTY
		TWeakObjectPtr CrowdManagerClass; // 0x40(0x20)
		bool bAutoCreateNavigationData : 1; // 0x60:0(0x1)
		bool bSpawnNavDataInNavBoundsLevel : 1; // 0x60:1(0x1)
		bool bAllowClientSideNavigation : 1; // 0x60:2(0x1)
		bool bShouldDiscardSubLevelNavData : 1; // 0x60:3(0x1)
		bool bTickWhilePaused : 1; // 0x60:4(0x1)
		bool bSupportRebuilding : 1; // 0x60:5(0x1)
		bool bInitialBuildingLocked : 1; // 0x60:6(0x1)
		unsigned char UnknownBit11 : 1; // 0x60:7(0x1) UNKNOWN PROPERTY
		bool bSkipAgentHeightCheckWhenPickingNavData : 1; // 0x61:0(0x1)
		unsigned char UnknownData12_5[0x2]; // 0x62(0x2) UNKNOWN PROPERTY
		int32_t GeometryExportTriangleCountWarningThreshold; // 0x64(0x4)
		bool bGenerateNavigationOnlyAroundNavigationInvokers : 1; // 0x68:0(0x1)
		unsigned char UnknownData13_5[0x3]; // 0x69(0x3) UNKNOWN PROPERTY
		float ActiveTilesUpdateInterval; // 0x6C(0x4)
		double InvokersMaximumDistanceFromSeed; // 0x70(0x8)
		ENavDataGatheringModeConfig DataGatheringMode; // 0x78(0x1)
		unsigned char UnknownData14_6[0x3]; // 0x79(0x3) UNKNOWN PROPERTY
		float DirtyAreaWarningSizeThreshold; // 0x7C(0x4)
		float GatheringNavModifiersWarningLimitTime; // 0x80(0x4)
		unsigned char UnknownData15_6[0x4]; // 0x84(0x4) UNKNOWN PROPERTY
		TArray SupportedAgents; // 0x88(0x10)
		FNavAgentSelector SupportedAgentsMask; // 0x98(0x4)
		unsigned char UnknownData16_6[0x4]; // 0x9C(0x4) UNKNOWN PROPERTY
		FBox BuildBounds; // 0xA0(0x38)
		TArray NavDataSet; // 0xD8(0x10)
		TArray NavDataRegistrationQueue; // 0xE8(0x10)
		unsigned char UnknownData17_6[0x10]; // 0xF8(0x10) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnNavDataRegisteredEvent; // 0x108(0x10)
		FMulticastInlineDelegate OnNavigationGenerationFinishedDelegate; // 0x118(0x10)
		unsigned char UnknownData18_6[0xF0]; // 0x128(0xF0) UNKNOWN PROPERTY
		FNavigationSystemRunMode OperationMode; // 0x218(0x1)
		unsigned char UnknownData19_7[0x1397]; // 0x219(0x1397) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NavigationSystem.NavigationSystemV1");
			return ret;
		}

		void UnregisterNavigationInvoker(AActor Invoker); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4145967B8
		void SetMaxSimultaneousTileGenerationJobsCount(int32_t MaxNumberOfJobs); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4145966D8
		void SetGeometryGatheringMode(ENavDataGatheringModeConfig NewMode); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4145965F8
		void ResetMaxSimultaneousTileGenerationJobsCount(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414596518
		void RegisterNavigationInvoker(AActor Invoker, float TileGenerationRadius, float TileRemovalRadius); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414596438
		void OnNavigationBoundsUpdated(ANavMeshBoundsVolume NavVolume); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414596358
		bool NavigationRaycast(UObject WorldContextObject, FVector& RayStart, FVector& RayEnd, FVector& HitLocation, UClass FilterClass, AController Querier); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414596278
		bool K2_ReplaceAreaInOctreeData(UObject Object, UClass OldArea, UClass NewArea); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414596198
		bool K2_ProjectPointToNavigation(UObject WorldContextObject, FVector& Point, FVector& ProjectedLocation, ANavigationData NavData, UClass FilterClass, FVector QueryExtent); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF4145960B8
		bool K2_GetRandomReachablePointInRadius(UObject WorldContextObject, FVector& Origin, FVector& RandomLocation, float Radius, ANavigationData NavData, UClass FilterClass); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414595FD8
		bool K2_GetRandomPointInNavigableRadius(UObject WorldContextObject, FVector& Origin, FVector& RandomLocation, float Radius, ANavigationData NavData, UClass FilterClass); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414595EF8
		bool K2_GetRandomLocationInNavigableRadius(UObject WorldContextObject, FVector& Origin, FVector& RandomLocation, float Radius, ANavigationData NavData, UClass FilterClass); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF414595E18
		bool IsNavigationBeingBuiltOrLocked(UObject WorldContextObject); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414595D38
		bool IsNavigationBeingBuilt(UObject WorldContextObject); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF414595C58
		TEnumAsByte GetPathLength(UObject WorldContextObject, FVector& PathStart, FVector& PathEnd, double& PathLength, ANavigationData NavData, UClass FilterClass); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414595B78
		TEnumAsByte GetPathCost(UObject WorldContextObject, FVector& PathStart, FVector& PathEnd, double& PathCost, ANavigationData NavData, UClass FilterClass); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 0x7FF414595A98
		UNavigationSystemV1 GetNavigationSystem(UObject WorldContextObject); // Flags: Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure 0x7FF4145959B8
		UNavigationPath FindPathToLocationSynchronously(UObject WorldContextObject, FVector& PathStart, FVector& PathEnd, AActor PathfindingContext, UClass FilterClass); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF4145958D8
		UNavigationPath FindPathToActorSynchronously(UObject WorldContextObject, FVector& PathStart, AActor GoalActor, float TetherDistance, AActor PathfindingContext, UClass FilterClass); // Flags: Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF4145957F8
	};


	// Class NavigationSystem.NavigationSystemModuleConfig
	// Inherited from UNavigationSystemConfig -> UObject
	// Size: 0x8 (0x58 - 0x50)
	class UNavigationSystemModuleConfig : public UNavigationSystemConfig	
	{
	public:
		bool bStrictlyStatic : 1; // 0x50:0(0x1)
		bool bCreateOnClient : 1; // 0x50:1(0x1)
		bool bAutoSpawnMissingNavData : 1; // 0x50:2(0x1)
		bool bSpawnNavDataInNavBoundsLevel : 1; // 0x50:3(0x1)
		unsigned char UnknownData01_7[0x7]; // 0x51(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NavigationSystem.NavigationSystemModuleConfig");
			return ret;
		}
	};


	// Class NavigationSystem.NavigationTestingActor
	// Inherited from AActor -> UObject
	// Size: 0x150 (0x3E0 - 0x290)
	class ANavigationTestingActor : public AActor	
	{
	public:
		unsigned char UnknownData09_3[0x10]; // 0x290(0x10) UNKNOWN PROPERTY
		UCapsuleComponent CapsuleComponent; // 0x2A0(0x8)
		UNavigationInvokerComponent InvokerComponent; // 0x2A8(0x8)
		bool bActAsNavigationInvoker : 1; // 0x2B0:0(0x1)
		unsigned char UnknownData10_5[0x7]; // 0x2B1(0x7) UNKNOWN PROPERTY
		FNavAgentProperties NavAgentProps; // 0x2B8(0x30)
		FVector QueryingExtent; // 0x2E8(0x18)
		ANavigationData MyNavData; // 0x300(0x8)
		FVector ProjectedLocation; // 0x308(0x18)
		bool bProjectedLocationValid : 1; // 0x320:0(0x1)
		bool bSearchStart : 1; // 0x320:1(0x1)
		unsigned char UnknownData11_5[0x3]; // 0x321(0x3) UNKNOWN PROPERTY
		float CostLimitFactor; // 0x324(0x4)
		float MinimumCostLimit; // 0x328(0x4)
		bool bBacktracking : 1; // 0x32C:0(0x1)
		bool bUseHierarchicalPathfinding : 1; // 0x32C:1(0x1)
		bool bGatherDetailedInfo : 1; // 0x32C:2(0x1)
		bool bRequireNavigableEndLocation : 1; // 0x32C:3(0x1)
		bool bDrawDistanceToWall : 1; // 0x32C:4(0x1)
		bool bDrawIfNavDataIsReadyInRadius : 1; // 0x32C:5(0x1)
		bool bDrawIfNavDataIsReadyToQueryTargetActor : 1; // 0x32C:6(0x1)
		bool bDrawRaycastToQueryTargetActor : 1; // 0x32C:7(0x1)
		unsigned char UnknownData12_5[0x3]; // 0x32D(0x3) UNKNOWN PROPERTY
		AActor QueryTargetActor; // 0x330(0x8)
		bool bShowNodePool : 1; // 0x338:0(0x1)
		bool bShowBestPath : 1; // 0x338:1(0x1)
		bool bShowDiffWithPreviousStep : 1; // 0x338:2(0x1)
		bool bShouldBeVisibleInGame : 1; // 0x338:3(0x1)
		unsigned char UnknownData13_5[0x3]; // 0x339(0x3) UNKNOWN PROPERTY
		float RadiusUsedToValidateNavData; // 0x33C(0x4)
		TEnumAsByte CostDisplayMode; // 0x340(0x1)
		unsigned char UnknownData14_6[0x7]; // 0x341(0x7) UNKNOWN PROPERTY
		FVector2D TextCanvasOffset; // 0x348(0x10)
		bool bPathExist : 1; // 0x358:0(0x1)
		bool bPathIsPartial : 1; // 0x358:1(0x1)
		bool bPathSearchOutOfNodes : 1; // 0x358:2(0x1)
		unsigned char UnknownData15_5[0x3]; // 0x359(0x3) UNKNOWN PROPERTY
		float PathfindingTime; // 0x35C(0x4)
		double PathCost; // 0x360(0x8)
		int32_t PathfindingSteps; // 0x368(0x4)
		unsigned char UnknownData16_6[0x4]; // 0x36C(0x4) UNKNOWN PROPERTY
		ANavigationTestingActor OtherActor; // 0x370(0x8)
		UClass FilterClass; // 0x378(0x8)
		int32_t ShowStepIndex; // 0x380(0x4)
		float OffsetFromCornersDistance; // 0x384(0x4)
		unsigned char UnknownData17_7[0x58]; // 0x388(0x58) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NavigationSystem.NavigationTestingActor");
			return ret;
		}
	};


	// Class NavigationSystem.NavLinkComponent
	// Inherited from UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x18 (0x4E0 - 0x4C8)
	class UNavLinkComponent : public UPrimitiveComponent	
	{
	public:
		unsigned char UnknownData01_3[0x8]; // 0x4C8(0x8) UNKNOWN PROPERTY
		TArray Links; // 0x4D0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NavigationSystem.NavLinkComponent");
			return ret;
		}
	};


	// Class NavigationSystem.NavRelevantComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x50 (0xF0 - 0xA0)
	class UNavRelevantComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData02_3[0x40]; // 0xA0(0x40) UNKNOWN PROPERTY
		bool bAttachToOwnersRoot : 1; // 0xE0:0(0x1)
		unsigned char UnknownData03_5[0x7]; // 0xE1(0x7) UNKNOWN PROPERTY
		UObject CachedNavParent; // 0xE8(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NavigationSystem.NavRelevantComponent");
			return ret;
		}

		void SetNavigationRelevancy(bool bRelevant); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414596898
	};


	// Class NavigationSystem.NavLinkCustomComponent
	// Inherited from UNavRelevantComponent -> UActorComponent -> UObject
	// Size: 0xF0 (0x1E0 - 0xF0)
	class UNavLinkCustomComponent : public UNavRelevantComponent	
	{
	public:
		unsigned char UnknownData06_3[0x8]; // 0xF0(0x8) UNKNOWN PROPERTY
		uint32_t NavLinkUserId; // 0xF8(0x4)
		unsigned char UnknownData07_6[0x4]; // 0xFC(0x4) UNKNOWN PROPERTY
		FNavLinkId CustomLinkId; // 0x100(0x8)
		FNavLinkAuxiliaryId AuxiliaryCustomLinkId; // 0x108(0x8)
		UClass EnabledAreaClass; // 0x110(0x8)
		UClass DisabledAreaClass; // 0x118(0x8)
		FNavAgentSelector SupportedAgents; // 0x120(0x4)
		unsigned char UnknownData08_6[0x4]; // 0x124(0x4) UNKNOWN PROPERTY
		FVector LinkRelativeStart; // 0x128(0x18)
		FVector LinkRelativeEnd; // 0x140(0x18)
		TEnumAsByte LinkDirection; // 0x158(0x1)
		unsigned char UnknownData09_6[0x3]; // 0x159(0x3) UNKNOWN PROPERTY
		bool bLinkEnabled : 1; // 0x15C:0(0x1)
		bool bNotifyWhenEnabled : 1; // 0x15C:1(0x1)
		bool bNotifyWhenDisabled : 1; // 0x15C:2(0x1)
		bool bCreateBoxObstacle : 1; // 0x15C:3(0x1)
		unsigned char UnknownData10_5[0x3]; // 0x15D(0x3) UNKNOWN PROPERTY
		FVector ObstacleOffset; // 0x160(0x18)
		FVector ObstacleExtent; // 0x178(0x18)
		UClass ObstacleAreaClass; // 0x190(0x8)
		float BroadcastRadius; // 0x198(0x4)
		float BroadcastInterval; // 0x19C(0x4)
		TEnumAsByte BroadcastChannel; // 0x1A0(0x1)
		unsigned char UnknownData11_7[0x3F]; // 0x1A1(0x3F) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NavigationSystem.NavLinkCustomComponent");
			return ret;
		}
	};


	// Class NavigationSystem.NavLinkRenderingComponent
	// Inherited from UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x8 (0x4D0 - 0x4C8)
	class UNavLinkRenderingComponent : public UPrimitiveComponent	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x4C8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NavigationSystem.NavLinkRenderingComponent");
			return ret;
		}
	};


	// Class NavigationSystem.NavMeshBoundsVolume
	// Inherited from AVolume -> ABrush -> AActor -> UObject
	// Size: 0x8 (0x2D0 - 0x2C8)
	class ANavMeshBoundsVolume : public AVolume	
	{
	public:
		FNavAgentSelector SupportedAgents; // 0x2C8(0x4)
		unsigned char UnknownData01_7[0x4]; // 0x2CC(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NavigationSystem.NavMeshBoundsVolume");
			return ret;
		}
	};


	// Class NavigationSystem.NavMeshRenderingComponent
	// Inherited from UDebugDrawComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x18 (0x530 - 0x518)
	class UNavMeshRenderingComponent : public UDebugDrawComponent	
	{
	public:
		unsigned char UnknownData01_1[0x18]; // 0x518(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NavigationSystem.NavMeshRenderingComponent");
			return ret;
		}
	};


	// Class NavigationSystem.RecastNavMesh
	// Inherited from ANavigationData -> AActor -> UObject
	// Size: 0x248 (0x6D8 - 0x490)
	class ARecastNavMesh : public ANavigationData	
	{
	public:
		bool bDrawTriangleEdges : 1; // 0x490:0(0x1)
		bool bDrawPolyEdges : 1; // 0x490:1(0x1)
		bool bDrawFilledPolys : 1; // 0x490:2(0x1)
		bool bDrawNavMeshEdges : 1; // 0x490:3(0x1)
		bool bDrawTileBounds : 1; // 0x490:4(0x1)
		bool bDrawTileResolutions : 1; // 0x490:5(0x1)
		bool bDrawPathCollidingGeometry : 1; // 0x490:6(0x1)
		bool bDrawTileLabels : 1; // 0x490:7(0x1)
		bool bDrawTileBuildTimes : 1; // 0x491:0(0x1)
		bool bDrawTileBuildTimesHeatMap : 1; // 0x491:1(0x1)
		bool bDrawPolygonLabels : 1; // 0x491:2(0x1)
		bool bDrawDefaultPolygonCost : 1; // 0x491:3(0x1)
		bool bDrawPolygonFlags : 1; // 0x491:4(0x1)
		bool bDrawLabelsOnPathNodes : 1; // 0x491:5(0x1)
		bool bDrawNavLinks : 1; // 0x491:6(0x1)
		bool bDrawFailedNavLinks : 1; // 0x491:7(0x1)
		bool bDrawClusters : 1; // 0x492:0(0x1)
		bool bDrawOctree : 1; // 0x492:1(0x1)
		bool bDrawOctreeDetails : 1; // 0x492:2(0x1)
		bool bDrawMarkedForbiddenPolys : 1; // 0x492:3(0x1)
		bool bDistinctlyDrawTilesBeingBuilt : 1; // 0x492:4(0x1)
		unsigned char UnknownData08_5[0x1]; // 0x493(0x1) UNKNOWN PROPERTY
		float DrawOffset; // 0x494(0x4)
		FRecastNavMeshTileGenerationDebug TileGenerationDebug; // 0x498(0x24)
		bool bFixedTilePoolSize : 1; // 0x4BC:0(0x1)
		unsigned char UnknownData09_5[0x3]; // 0x4BD(0x3) UNKNOWN PROPERTY
		int32_t TilePoolSize; // 0x4C0(0x4)
		float TileSizeUU; // 0x4C4(0x4)
		float CellSize; // 0x4C8(0x4)
		float CellHeight; // 0x4CC(0x4)
		FNavMeshResolutionParam NavMeshResolutionParams; // 0x4D0(0x24)
		float AgentRadius; // 0x4F4(0x4)
		float AgentHeight; // 0x4F8(0x4)
		float AgentMaxSlope; // 0x4FC(0x4)
		float AgentMaxStepHeight; // 0x500(0x4)
		float MinRegionArea; // 0x504(0x4)
		float MergeRegionSize; // 0x508(0x4)
		int32_t MaxVerticalMergeError; // 0x50C(0x4)
		float MaxSimplificationError; // 0x510(0x4)
		float SimplificationElevationRatio; // 0x514(0x4)
		int32_t MaxSimultaneousTileGenerationJobsCount; // 0x518(0x4)
		int32_t TileNumberHardLimit; // 0x51C(0x4)
		int32_t PolyRefTileBits; // 0x520(0x4)
		int32_t PolyRefNavPolyBits; // 0x524(0x4)
		int32_t PolyRefSaltBits; // 0x528(0x4)
		unsigned char UnknownData10_6[0x4]; // 0x52C(0x4) UNKNOWN PROPERTY
		FVector NavMeshOriginOffset; // 0x530(0x18)
		float DefaultDrawDistance; // 0x548(0x4)
		float DefaultMaxSearchNodes; // 0x54C(0x4)
		float DefaultMaxHierarchicalSearchNodes; // 0x550(0x4)
		ENavigationLedgeSlopeFilterMode LedgeSlopeFilterMode; // 0x554(0x1)
		TEnumAsByte RegionPartitioning; // 0x555(0x1)
		TEnumAsByte LayerPartitioning; // 0x556(0x1)
		unsigned char UnknownData11_6[0x1]; // 0x557(0x1) UNKNOWN PROPERTY
		int32_t RegionChunkSplits; // 0x558(0x4)
		int32_t LayerChunkSplits; // 0x55C(0x4)
		bool bSortNavigationAreasByCost : 1; // 0x560:0(0x1)
		bool bIsWorldPartitioned : 1; // 0x560:1(0x1)
		bool bGenerateNavLinks : 1; // 0x560:2(0x1)
		bool bPerformVoxelFiltering : 1; // 0x560:3(0x1)
		bool bMarkLowHeightAreas : 1; // 0x560:4(0x1)
		bool bUseExtraTopCellWhenMarkingAreas : 1; // 0x560:5(0x1)
		bool bFilterLowSpanSequences : 1; // 0x560:6(0x1)
		bool bFilterLowSpanFromTileCache : 1; // 0x560:7(0x1)
		bool bDoFullyAsyncNavDataGathering : 1; // 0x561:0(0x1)
		bool bUseBetterOffsetsFromCorners : 1; // 0x561:1(0x1)
		bool bStoreEmptyTileLayers : 1; // 0x561:2(0x1)
		bool bUseVirtualFilters : 1; // 0x561:3(0x1)
		bool bUseVirtualGeometryFilteringAndDirtying : 1; // 0x561:4(0x1)
		bool bAllowNavLinkAsPathEnd : 1; // 0x561:5(0x1)
		unsigned char UnknownData12_5[0x2]; // 0x562(0x2) UNKNOWN PROPERTY
		int32_t TimeSliceFilterLedgeSpansMaxYProcess; // 0x564(0x4)
		double TimeSliceLongDurationDebug; // 0x568(0x8)
		uint32_t InvokerTilePriorityBumpDistanceThresholdInTileUnits; // 0x570(0x4)
		char InvokerTilePriorityBumpIncrease; // 0x574(0x1)
		unsigned char UnknownData13_6[0x3]; // 0x575(0x3) UNKNOWN PROPERTY
		FNavLinkGenerationJumpDownConfig NavLinkJumpDownConfig; // 0x578(0x40)
		FNavLinkGenerationJumpOverConfig NavLinkJumpOverConfig; // 0x5B8(0x20)
		bool bUseVoxelCache : 1; // 0x5D8:0(0x1)
		unsigned char UnknownData14_5[0x3]; // 0x5D9(0x3) UNKNOWN PROPERTY
		float TileSetUpdateInterval; // 0x5DC(0x4)
		float HeuristicScale; // 0x5E0(0x4)
		float VerticalDeviationFromGroundCompensation; // 0x5E4(0x4)
		unsigned char UnknownData15_7[0xF0]; // 0x5E8(0xF0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NavigationSystem.RecastNavMesh");
			return ret;
		}

		bool K2_ReplaceAreaInTileBounds(FBox Bounds, UClass OldArea, UClass NewArea, bool ReplaceLinks); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 0x7FF414596978
	};


	// Class NavigationSystem.RecastNavMeshDataChunk
	// Inherited from UNavigationDataChunk -> UObject
	// Size: 0x10 (0x40 - 0x30)
	class URecastNavMeshDataChunk : public UNavigationDataChunk	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0x30(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NavigationSystem.RecastNavMeshDataChunk");
			return ret;
		}
	};


	// Class NavigationSystem.NavModifierComponent
	// Inherited from UNavRelevantComponent -> UActorComponent -> UObject
	// Size: 0xA0 (0x190 - 0xF0)
	class UNavModifierComponent : public UNavRelevantComponent	
	{
	public:
		UClass AreaClass; // 0xF0(0x8)
		FVector FailsafeExtent; // 0xF8(0x18)
		ENavigationDataResolution NavMeshResolution; // 0x110(0x1)
		bool bIncludeAgentHeight : 1; // 0x111:0(0x1)
		unsigned char UnknownData01_7[0x7E]; // 0x112(0x7E) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NavigationSystem.NavModifierComponent");
			return ret;
		}

		void SetAreaClass(UClass NewAreaClass); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414596A58
	};


	// Class NavigationSystem.NavModifierVolume
	// Inherited from AVolume -> ABrush -> AActor -> UObject
	// Size: 0x18 (0x2E0 - 0x2C8)
	class ANavModifierVolume : public AVolume	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x2C8(0x8) UNKNOWN PROPERTY
		UClass AreaClass; // 0x2D0(0x8)
		bool bMaskFillCollisionUnderneathForNavmesh; // 0x2D8(0x1)
		ENavigationDataResolution NavMeshResolution; // 0x2D9(0x1)
		unsigned char UnknownData03_7[0x6]; // 0x2DA(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NavigationSystem.NavModifierVolume");
			return ret;
		}

		void SetAreaClass(UClass NewAreaClass); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF414596B38
	};


	// Class NavigationSystem.NavSystemConfigOverride
	// Inherited from AActor -> UObject
	// Size: 0x10 (0x2A0 - 0x290)
	class ANavSystemConfigOverride : public AActor	
	{
	public:
		UNavigationSystemConfig NavigationSystemConfig; // 0x290(0x8)
		ENavSystemOverridePolicy OverridePolicy; // 0x298(0x1)
		bool bLoadOnClient : 1; // 0x299:0(0x1)
		unsigned char UnknownData01_7[0x6]; // 0x29A(0x6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NavigationSystem.NavSystemConfigOverride");
			return ret;
		}
	};


	// Class NavigationSystem.SplineNavModifierComponent
	// Inherited from UNavModifierComponent -> UNavRelevantComponent -> UActorComponent -> UObject
	// Size: 0xB0 (0x240 - 0x190)
	class USplineNavModifierComponent : public UNavModifierComponent	
	{
	public:
		bool bUpdateNavDataOnSplineChange; // 0x190(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x191(0x7) UNKNOWN PROPERTY
		FComponentReference AttachedSpline; // 0x198(0x28)
		double StrokeWidth; // 0x1C0(0x8)
		double StrokeHeight; // 0x1C8(0x8)
		ESubdivisionLOD SubdivisionLOD; // 0x1D0(0x4)
		unsigned char UnknownData03_7[0x6C]; // 0x1D4(0x6C) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/NavigationSystem.SplineNavModifierComponent");
			return ret;
		}

		void UpdateNavigationWithComponentData(); // Flags: Final|RequiredAPI|Native|Private 0x7FF414596C18
	};

}
