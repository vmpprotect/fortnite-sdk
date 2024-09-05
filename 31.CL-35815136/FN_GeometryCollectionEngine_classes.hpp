#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: GeometryCollectionEngine
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class GeometryCollectionEngine.GeometryCollectionBlueprintLibrary
	// Inherited from UBlueprintFunctionLibrary -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UGeometryCollectionBlueprintLibrary : public UBlueprintFunctionLibrary	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GeometryCollectionEngine.GeometryCollectionBlueprintLibrary");
			return ret;
		}

		void SetISMPoolCustomInstanceData(UGeometryCollectionComponent* GeometryCollectionComponent, int32_t CustomDataIndex, float CustomDataValue); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74C129338(relative to base address)
		void SetCustomInstanceDataByName(UGeometryCollectionComponent* GeometryCollectionComponent, FName CustomDataName, float CustomDataValue); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74C129470(relative to base address)
		void SetCustomInstanceDataByIndex(UGeometryCollectionComponent* GeometryCollectionComponent, int32_t CustomDataIndex, float CustomDataValue); // Flags: Final|Native|Static|Public|BlueprintCallable, Memory Exec: 0x7FF74C129338(relative to base address)
	};


	// Class GeometryCollectionEngine.GeometryCollectionExternalRenderInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UGeometryCollectionExternalRenderInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GeometryCollectionEngine.GeometryCollectionExternalRenderInterface");
			return ret;
		}
	};


	// Class GeometryCollectionEngine.GeometryCollectionCustomDataInterface
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UGeometryCollectionCustomDataInterface : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GeometryCollectionEngine.GeometryCollectionCustomDataInterface");
			return ret;
		}
	};


	// Class GeometryCollectionEngine.GeometryCollectionISMPoolSubSystem
	// Inherited from UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x50 (0x80 - 0x30)
	class UGeometryCollectionISMPoolSubSystem : public UWorldSubsystem	
	{
	public:
		unsigned char UnknownData00_1[0x50]; // 0x30(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GeometryCollectionEngine.GeometryCollectionISMPoolSubSystem");
			return ret;
		}

		void OnActorEndPlay(AActor* InSource, TEnumAsByte<EEndPlayReason> Reason); // Flags: Final|Native|Protected, Memory Exec: 0x7FF74C128328(relative to base address)
	};


	// Class GeometryCollectionEngine.ChaosDestructionListener
	// Inherited from USceneComponent -> UActorComponent -> UObject
	// Size: 0x2B0 (0x4D0 - 0x220)
	class UChaosDestructionListener : public USceneComponent	
	{
	public:
		bool bIsCollisionEventListeningEnabled : 1; // 0x220:0(0x1)
		bool bIsBreakingEventListeningEnabled : 1; // 0x220:1(0x1)
		bool bIsTrailingEventListeningEnabled : 1; // 0x220:2(0x1)
		bool bIsRemovalEventListeningEnabled : 1; // 0x220:3(0x1)
		unsigned char UnknownData00_5[0x3]; // 0x221(0x3) UNKNOWN PROPERTY
		FChaosCollisionEventRequestSettings CollisionEventRequestSettings; // 0x224(0x18)
		FChaosBreakingEventRequestSettings BreakingEventRequestSettings; // 0x23C(0x18)
		FChaosTrailingEventRequestSettings TrailingEventRequestSettings; // 0x254(0x18)
		FChaosRemovalEventRequestSettings RemovalEventRequestSettings; // 0x26C(0x10)
		unsigned char UnknownData01_6[0x4]; // 0x27C(0x4) UNKNOWN PROPERTY
		TSet<AChaosSolverActor*> ChaosSolverActors; // 0x280(0x50)
		TSet<AGeometryCollectionActor*> GeometryCollectionActors; // 0x2D0(0x50)
		FMulticastInlineDelegate OnCollisionEvents; // 0x320(0x10)
		FMulticastInlineDelegate OnBreakingEvents; // 0x330(0x10)
		FMulticastInlineDelegate OnTrailingEvents; // 0x340(0x10)
		FMulticastInlineDelegate OnRemovalEvents; // 0x350(0x10)
		unsigned char UnknownData02_7[0x170]; // 0x360(0x170) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GeometryCollectionEngine.ChaosDestructionListener");
			return ret;
		}

		void SortTrailingEvents(TArray<FChaosTrailingEventData>& TrailingEvents, EChaosTrailingSortMethod SortMethod); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C12AFD8(relative to base address)
		void SortRemovalEvents(TArray<FChaosRemovalEventData>& RemovalEvents, EChaosRemovalSortMethod SortMethod); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C12AE48(relative to base address)
		void SortCollisionEvents(TArray<FChaosCollisionEventData>& CollisionEvents, EChaosCollisionSortMethod SortMethod); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C12ACB8(relative to base address)
		void SortBreakingEvents(TArray<FChaosBreakingEventData>& BreakingEvents, EChaosBreakingSortMethod SortMethod); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C12AB28(relative to base address)
		void SetTrailingEventRequestSettings(FChaosTrailingEventRequestSettings& InSettings); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C12A95C(relative to base address)
		void SetTrailingEventEnabled(bool bIsEnabled); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C12A8C8(relative to base address)
		void SetRemovalEventRequestSettings(FChaosRemovalEventRequestSettings& InSettings); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C12A3A4(relative to base address)
		void SetRemovalEventEnabled(bool bIsEnabled); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C12A310(relative to base address)
		void SetCollisionEventRequestSettings(FChaosCollisionEventRequestSettings& InSettings); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C129204(relative to base address)
		void SetCollisionEventEnabled(bool bIsEnabled); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C129174(relative to base address)
		void SetBreakingEventRequestSettings(FChaosBreakingEventRequestSettings& InSettings); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C1290C8(relative to base address)
		void SetBreakingEventEnabled(bool bIsEnabled); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C129034(relative to base address)
		void RemoveGeometryCollectionActor(AGeometryCollectionActor* GeometryCollectionActor); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C12872C(relative to base address)
		void RemoveChaosSolverActor(AChaosSolverActor* ChaosSolverActor); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C088608(relative to base address)
		bool IsEventListening(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C1282F4(relative to base address)
		void AddGeometryCollectionActor(AGeometryCollectionActor* GeometryCollectionActor); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C126C64(relative to base address)
		void AddChaosSolverActor(AChaosSolverActor* ChaosSolverActor); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C088608(relative to base address)
	};


	// Class GeometryCollectionEngine.GeometryCollectionActor
	// Inherited from AActor -> UObject
	// Size: 0x10 (0x2A0 - 0x290)
	class AGeometryCollectionActor : public AActor	
	{
	public:
		UGeometryCollectionComponent* GeometryCollectionComponent; // 0x290(0x8)
		UGeometryCollectionDebugDrawComponent* GeometryCollectionDebugDrawComponent; // 0x298(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GeometryCollectionEngine.GeometryCollectionActor");
			return ret;
		}

		bool RaycastSingle(FVector Start, FVector End, FHitResult& OutHit); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C128428(relative to base address)
	};


	// Class GeometryCollectionEngine.GeometryCollectionCache
	// Inherited from UObject
	// Size: 0x28 (0x50 - 0x28)
	class UGeometryCollectionCache : public UObject	
	{
	public:
		FRecordedTransformTrack RecordedData; // 0x28(0x10)
		UGeometryCollection* SupportedCollection; // 0x38(0x8)
		FGuid CompatibleCollectionState; // 0x40(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GeometryCollectionEngine.GeometryCollectionCache");
			return ret;
		}
	};


	// Class GeometryCollectionEngine.GeometryCollectionComponent
	// Inherited from UMeshComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x498 (0x990 - 0x4F8)
	class UGeometryCollectionComponent : public UMeshComponent	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x4F8(0x8) UNKNOWN PROPERTY
		AChaosSolverActor* ChaosSolverActor; // 0x500(0x8)
		UGeometryCollection* RestCollection; // 0x508(0x8)
		TArray<AFieldSystemActor*> InitializationFields; // 0x510(0x10)
		bool Simulating; // 0x520(0x1)
		unsigned char UnknownData01_6[0x1]; // 0x521(0x1) UNKNOWN PROPERTY
		EObjectStateTypeEnum ObjectType; // 0x522(0x1)
		unsigned char UnknownData02_6[0x1]; // 0x523(0x1) UNKNOWN PROPERTY
		int32_t GravityGroupIndex; // 0x524(0x4)
		int32_t OneWayInteractionLevel; // 0x528(0x4)
		bool bDensityFromPhysicsMaterial; // 0x52C(0x1)
		bool bForceMotionBlur; // 0x52D(0x1)
		bool EnableClustering; // 0x52E(0x1)
		unsigned char UnknownData03_6[0x1]; // 0x52F(0x1) UNKNOWN PROPERTY
		int32_t ClusterGroupIndex; // 0x530(0x4)
		int32_t MaxClusterLevel; // 0x534(0x4)
		int32_t MaxSimulatedLevel; // 0x538(0x4)
		EDamageModelTypeEnum DamageModel; // 0x53C(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x53D(0x3) UNKNOWN PROPERTY
		TArray<float> DamageThreshold; // 0x540(0x10)
		bool bUseSizeSpecificDamageThreshold; // 0x550(0x1)
		bool bUseMaterialDamageModifiers; // 0x551(0x1)
		unsigned char UnknownData05_6[0x2]; // 0x552(0x2) UNKNOWN PROPERTY
		FGeometryCollectionDamagePropagationData DamagePropagationData; // 0x554(0xC)
		bool bEnableDamageFromCollision; // 0x560(0x1)
		bool bAllowRemovalOnSleep; // 0x561(0x1)
		bool bAllowRemovalOnBreak; // 0x562(0x1)
		EClusterConnectionTypeEnum ClusterConnectionType; // 0x563(0x1)
		int32_t CollisionGroup; // 0x564(0x4)
		float CollisionSampleFraction; // 0x568(0x4)
		float LinearEtherDrag; // 0x56C(0x4)
		UChaosPhysicalMaterial* PhysicalMaterial; // 0x570(0x8)
		EInitialVelocityTypeEnum InitialVelocityType; // 0x578(0x1)
		unsigned char UnknownData06_6[0x7]; // 0x579(0x7) UNKNOWN PROPERTY
		FVector InitialLinearVelocity; // 0x580(0x18)
		FVector InitialAngularVelocity; // 0x598(0x18)
		UPhysicalMaterial* PhysicalMaterialOverride; // 0x5B0(0x8)
		FGeomComponentCacheParameters CacheParameters; // 0x5B8(0x50)
		TArray<FTransform> RestTransforms; // 0x608(0x10)
		FMulticastInlineDelegate NotifyGeometryCollectionPhysicsStateChange; // 0x618(0x10)
		FMulticastInlineDelegate NotifyGeometryCollectionPhysicsLoadingStateChange; // 0x628(0x10)
		unsigned char UnknownData07_6[0x18]; // 0x638(0x18) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnChaosBreakEvent; // 0x650(0x10)
		FMulticastInlineDelegate OnChaosRemovalEvent; // 0x660(0x10)
		FMulticastInlineDelegate OnChaosCrumblingEvent; // 0x670(0x10)
		unsigned char UnknownData08_6[0x48]; // 0x680(0x48) UNKNOWN PROPERTY
		float DesiredCacheTime; // 0x6C8(0x4)
		bool CachePlayback; // 0x6CC(0x1)
		unsigned char UnknownData09_6[0x3]; // 0x6CD(0x3) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnChaosPhysicsCollision; // 0x6D0(0x10)
		bool bNotifyBreaks; // 0x6E0(0x1)
		bool bNotifyCollisions; // 0x6E1(0x1)
		bool bNotifyTrailing; // 0x6E2(0x1)
		bool bNotifyRemovals; // 0x6E3(0x1)
		bool bNotifyCrumblings; // 0x6E4(0x1)
		bool bCrumblingEventIncludesChildren; // 0x6E5(0x1)
		bool bNotifyGlobalBreaks; // 0x6E6(0x1)
		bool bNotifyGlobalCollisions; // 0x6E7(0x1)
		bool bNotifyGlobalRemovals; // 0x6E8(0x1)
		bool bNotifyGlobalCrumblings; // 0x6E9(0x1)
		bool bGlobalCrumblingEventIncludesChildren; // 0x6EA(0x1)
		bool bStoreVelocities; // 0x6EB(0x1)
		bool bIsCurrentlyNavigationRelevant; // 0x6EC(0x1)
		bool bShowBoneColors; // 0x6ED(0x1)
		bool bUpdateComponentTransformToRootBone; // 0x6EE(0x1)
		bool bUseRootProxyForNavigation; // 0x6EF(0x1)
		bool bUpdateNavigationInTick; // 0x6F0(0x1)
		unsigned char UnknownData10_6[0x1]; // 0x6F1(0x1) UNKNOWN PROPERTY
		bool bEnableReplication; // 0x6F2(0x1)
		bool bEnableAbandonAfterLevel; // 0x6F3(0x1)
		FName AbandonedCollisionProfileName; // 0x6F4(0x4)
		AGeometryCollectionISMPoolActor* ISMPool; // 0x6F8(0x8)
		UClass* CustomRendererType; // 0x700(0x8)
		bool bOverrideCustomRenderer; // 0x708(0x1)
		bool bAutoAssignISMPool; // 0x709(0x1)
		unsigned char UnknownData11_6[0x1]; // 0x70A(0x1) UNKNOWN PROPERTY
		bool bUseStaticMeshCollisionForTraces; // 0x70B(0x1)
		int32_t ReplicationAbandonClusterLevel; // 0x70C(0x4)
		TScriptInterface<Class> CustomRenderer; // 0x710(0x10)
		TArray<FName> CollisionProfilePerLevel; // 0x720(0x10)
		unsigned char UnknownData12_6[0x10]; // 0x730(0x10) UNKNOWN PROPERTY
		int32_t ReplicationAbandonAfterLevel; // 0x740(0x4)
		int32_t ReplicationMaxPositionAndVelocityCorrectionLevel; // 0x744(0x4)
		FGeometryCollectionRepData RepData; // 0x748(0x38)
		FGeometryCollectionRepStateData RepStateData; // 0x780(0x40)
		FGeometryCollectionRepDynamicData RepDynamicData; // 0x7C0(0x18)
		unsigned char UnknownData13_6[0x110]; // 0x7D8(0x110) UNKNOWN PROPERTY
		UBodySetup* DummyBodySetup; // 0x8E8(0x8)
		UChaosGameplayEventDispatcher* EventDispatcher; // 0x8F0(0x8)
		TArray<UInstancedStaticMeshComponent*> EmbeddedGeometryComponents; // 0x8F8(0x10)
		unsigned char UnknownData14_6[0x14]; // 0x908(0x14) UNKNOWN PROPERTY
		float AngularEtherDrag; // 0x91C(0x4)
		unsigned char UnknownData15_7[0x70]; // 0x920(0x70) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GeometryCollectionEngine.GeometryCollectionComponent");
			return ret;
		}

		void SetUseStaticMeshCollisionForTraces(bool bInUseStaticMeshCollisionForTraces); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C12AA88(relative to base address)
		void SetUseMaterialDamageModifiers(bool bInUseMaterialDamageModifiers); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C12AA08(relative to base address)
		void SetRootProxyComponentSpaceTransform(int32_t Index, FTransform& RootProxyTransform); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74C12A784(relative to base address)
		void SetRestCollection(UGeometryCollection* RestCollectionIn, bool bApplyAssetDefaults); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C12A444(relative to base address)
		void SetPerParticleCollisionProfileName(TArray<int32_t>& BoneIds, FName ProfileName); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C12A178(relative to base address)
		void SetPerLevelCollisionProfileNames(TArray<FName>& ProfileNames); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C12A09C(relative to base address)
		void SetOneWayInteractionLevel(int32_t InOneWayInteractionLevel); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C12A01C(relative to base address)
		void SetNotifyRemovals(bool bNewNotifyRemovals); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C129F8C(relative to base address)
		void SetNotifyGlobalRemovals(bool bNewNotifyGlobalRemovals); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C129EDC(relative to base address)
		void SetNotifyGlobalCrumblings(bool bNewNotifyGlobalCrumblings, bool bGlobalNewCrumblingEventIncludesChildren); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C129DD8(relative to base address)
		void SetNotifyGlobalCollision(bool bNewNotifyGlobalCollisions); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C129D28(relative to base address)
		void SetNotifyGlobalBreaks(bool bNewNotifyGlobalBreaks); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C129CA8(relative to base address)
		void SetNotifyCrumblings(bool bNewNotifyCrumblings, bool bNewCrumblingEventIncludesChildren); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C129BE4(relative to base address)
		void SetNotifyBreaks(bool bNewNotifyBreaks); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C129B28(relative to base address)
		void SetLocalRestTransforms(TArray<FTransform>& Transforms, bool bOnlyLeaves); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C1299A4(relative to base address)
		void SetGravityGroupIndex(int32_t InGravityGroupIndex); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C129924(relative to base address)
		void SetEnableDamageFromCollision(bool bValue); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C12981C(relative to base address)
		void SetDensityFromPhysicsMaterial(bool bInDensityFromPhysicsMaterial); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C12979C(relative to base address)
		void SetDamageThreshold(TArray<float>& InDamageThreshold); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C1296C0(relative to base address)
		void SetDamagePropagationData(FGeometryCollectionDamagePropagationData& InDamagePropagationData); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable, Memory Exec: 0x7FF74C129628(relative to base address)
		void SetDamageModel(EDamageModelTypeEnum InDamageModel); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C1295A8(relative to base address)
		void SetAnchoredByTransformedBox(FBox Box, FTransform Transform, bool bAnchored, int32_t MaxLevel); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74C128C14(relative to base address)
		void SetAnchoredByIndex(int32_t Index, bool bAnchored); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C128B2C(relative to base address)
		void SetAnchoredByBox(FBox WorldSpaceBox, bool bAnchored, int32_t MaxLevel); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74C12886C(relative to base address)
		void SetAbandonedParticleCollisionProfileName(FName CollisionProfile); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C1287E0(relative to base address)
		void RemoveAllAnchors(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C128718(relative to base address)
		void ReceivePhysicsCollision(FChaosPhysicsCollisionInfo& CollisionInfo); // Flags: RequiredAPI|Event|Public|HasOutParms|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void OnRep_RepStateData(); // Flags: Final|RequiredAPI|Native|Protected, Memory Exec: 0x7FF74C128414(relative to base address)
		void OnRep_RepDynamicData(); // Flags: Final|RequiredAPI|Native|Protected, Memory Exec: 0x7FF74C128400(relative to base address)
		void OnRep_RepData(); // Flags: Final|RequiredAPI|Native|Protected, Memory Exec: 0x7FF74C1283EC(relative to base address)
		void NotifyGeometryCollectionPhysicsStateChange__DelegateSignature(UGeometryCollectionComponent* FracturedComponent); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature(UGeometryCollectionComponent* FracturedComponent); // Flags: MulticastDelegate|Public|Delegate, Memory Exec: 0x7FF7471BBE78(relative to base address)
		bool IsRootBroken(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C128310(relative to base address)
		bool GetUseStaticMeshCollisionForTraces(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C1282DC(relative to base address)
		FTransform GetRootInitialTransform(); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C128280(relative to base address)
		int32_t GetRootIndex(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C128260(relative to base address)
		FTransform GetRootCurrentTransform(); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C128204(relative to base address)
		void GetMassAndExtents(int32_t ItemIndex, float& OutMass, FBox& OutExtents); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74C1280E4(relative to base address)
		FBox GetLocalBounds(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C1280A4(relative to base address)
		TArray GetInitialLocalRestTransforms(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C128064(relative to base address)
		int32_t GetInitialLevel(int32_t ItemIndex); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C127FD8(relative to base address)
		FString GetDebugInfo(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C127F98(relative to base address)
		TArray GetDamageThreshold(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF74C127F58(relative to base address)
		void ForceBrokenForCustomRenderer(bool bForceBroken); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C127ED8(relative to base address)
		void EnableRootProxyForCustomRenderer(bool bEnable); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C127E58(relative to base address)
		void CrumbleCluster(int32_t ItemIndex); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C127DA4(relative to base address)
		void CrumbleActiveClusters(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C127D90(relative to base address)
		void ApplyPhysicsField(bool Enabled, EGeometryCollectionPhysicsTypeEnum Target, UFieldSystemMetaData* MetaData, UFieldNodeBase* Field); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C127A10(relative to base address)
		void ApplyLinearVelocity(int32_t ItemIndex, FVector& LinearVelocity); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74C1278D8(relative to base address)
		void ApplyKinematicField(float Radius, FVector Position); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74C127770(relative to base address)
		void ApplyInternalStrain(int32_t ItemIndex, FVector& Location, float Radius, int32_t PropagationDepth, float PropagationFactor, float Strain); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74C12743C(relative to base address)
		void ApplyExternalStrain(int32_t ItemIndex, FVector& Location, float Radius, int32_t PropagationDepth, float PropagationFactor, float Strain); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74C127120(relative to base address)
		void ApplyBreakingLinearVelocity(int32_t ItemIndex, FVector& LinearVelocity); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74C127018(relative to base address)
		void ApplyBreakingAngularVelocity(int32_t ItemIndex, FVector& AngularVelocity); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74C126EDC(relative to base address)
		void ApplyAssetDefaults(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C126EC8(relative to base address)
		void ApplyAngularVelocity(int32_t ItemIndex, FVector& AngularVelocity); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable, Memory Exec: 0x7FF74C126D90(relative to base address)
	};


	// Class GeometryCollectionEngine.GeometryCollectionDebugDrawActor
	// Inherited from AActor -> UObject
	// Size: 0xC0 (0x350 - 0x290)
	class AGeometryCollectionDebugDrawActor : public AActor	
	{
	public:
		FGeometryCollectionDebugDrawWarningMessage WarningMessage; // 0x290(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x291(0x7) UNKNOWN PROPERTY
		FGeometryCollectionDebugDrawActorSelectedRigidBody SelectedRigidBody; // 0x298(0x18)
		bool bDebugDrawWholeCollection; // 0x2B0(0x1)
		bool bDebugDrawHierarchy; // 0x2B1(0x1)
		bool bDebugDrawClustering; // 0x2B2(0x1)
		EGeometryCollectionDebugDrawActorHideGeometry HideGeometry; // 0x2B3(0x1)
		bool bShowRigidBodyId; // 0x2B4(0x1)
		bool bShowRigidBodyCollision; // 0x2B5(0x1)
		bool bCollisionAtOrigin; // 0x2B6(0x1)
		bool bShowRigidBodyTransform; // 0x2B7(0x1)
		bool bShowRigidBodyInertia; // 0x2B8(0x1)
		bool bShowRigidBodyVelocity; // 0x2B9(0x1)
		bool bShowRigidBodyForce; // 0x2BA(0x1)
		bool bShowRigidBodyInfos; // 0x2BB(0x1)
		bool bShowTransformIndex; // 0x2BC(0x1)
		bool bShowTransform; // 0x2BD(0x1)
		bool bShowParent; // 0x2BE(0x1)
		bool bShowLevel; // 0x2BF(0x1)
		bool bShowConnectivityEdges; // 0x2C0(0x1)
		bool bShowGeometryIndex; // 0x2C1(0x1)
		bool bShowGeometryTransform; // 0x2C2(0x1)
		bool bShowBoundingBox; // 0x2C3(0x1)
		bool bShowFaces; // 0x2C4(0x1)
		bool bShowFaceIndices; // 0x2C5(0x1)
		bool bShowFaceNormals; // 0x2C6(0x1)
		bool bShowSingleFace; // 0x2C7(0x1)
		int32_t SingleFaceIndex; // 0x2C8(0x4)
		bool bShowVertices; // 0x2CC(0x1)
		bool bShowVertexIndices; // 0x2CD(0x1)
		bool bShowVertexNormals; // 0x2CE(0x1)
		bool bUseActiveVisualization; // 0x2CF(0x1)
		float PointThickness; // 0x2D0(0x4)
		float LineThickness; // 0x2D4(0x4)
		bool bTextShadow; // 0x2D8(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x2D9(0x3) UNKNOWN PROPERTY
		float TextScale; // 0x2DC(0x4)
		float NormalScale; // 0x2E0(0x4)
		float AxisScale; // 0x2E4(0x4)
		float ArrowScale; // 0x2E8(0x4)
		FColor RigidBodyIdColor; // 0x2EC(0x4)
		float RigidBodyTransformScale; // 0x2F0(0x4)
		FColor RigidBodyCollisionColor; // 0x2F4(0x4)
		FColor RigidBodyInertiaColor; // 0x2F8(0x4)
		FColor RigidBodyVelocityColor; // 0x2FC(0x4)
		FColor RigidBodyForceColor; // 0x300(0x4)
		FColor RigidBodyInfoColor; // 0x304(0x4)
		FColor TransformIndexColor; // 0x308(0x4)
		float TransformScale; // 0x30C(0x4)
		FColor LevelColor; // 0x310(0x4)
		FColor ParentColor; // 0x314(0x4)
		float ConnectivityEdgeThickness; // 0x318(0x4)
		FColor GeometryIndexColor; // 0x31C(0x4)
		float GeometryTransformScale; // 0x320(0x4)
		FColor BoundingBoxColor; // 0x324(0x4)
		FColor FaceColor; // 0x328(0x4)
		FColor FaceIndexColor; // 0x32C(0x4)
		FColor FaceNormalColor; // 0x330(0x4)
		FColor SingleFaceColor; // 0x334(0x4)
		FColor VertexColor; // 0x338(0x4)
		FColor VertexIndexColor; // 0x33C(0x4)
		FColor VertexNormalColor; // 0x340(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x344(0x4) UNKNOWN PROPERTY
		UBillboardComponent* SpriteComponent; // 0x348(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GeometryCollectionEngine.GeometryCollectionDebugDrawActor");
			return ret;
		}
	};


	// Class GeometryCollectionEngine.GeometryCollectionDebugDrawComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x18 (0xB8 - 0xA0)
	class UGeometryCollectionDebugDrawComponent : public UActorComponent	
	{
	public:
		AGeometryCollectionDebugDrawActor* GeometryCollectionDebugDrawActor; // 0xA0(0x8)
		AGeometryCollectionRenderLevelSetActor* GeometryCollectionRenderLevelSetActor; // 0xA8(0x8)
		unsigned char UnknownData00_7[0x8]; // 0xB0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GeometryCollectionEngine.GeometryCollectionDebugDrawComponent");
			return ret;
		}
	};


	// Class GeometryCollectionEngine.GeometryCollectionISMPoolActor
	// Inherited from AActor -> UObject
	// Size: 0x10 (0x2A0 - 0x290)
	class AGeometryCollectionISMPoolActor : public AActor	
	{
	public:
		UGeometryCollectionISMPoolComponent* ISMPoolComp; // 0x290(0x8)
		UGeometryCollectionISMPoolDebugDrawComponent* ISMPoolDebugDrawComp; // 0x298(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GeometryCollectionEngine.GeometryCollectionISMPoolActor");
			return ret;
		}
	};


	// Class GeometryCollectionEngine.GeometryCollectionISMPoolComponent
	// Inherited from USceneComponent -> UActorComponent -> UObject
	// Size: 0x130 (0x350 - 0x220)
	class UGeometryCollectionISMPoolComponent : public USceneComponent	
	{
	public:
		unsigned char UnknownData00_1[0x130]; // 0x220(0x130) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GeometryCollectionEngine.GeometryCollectionISMPoolComponent");
			return ret;
		}
	};


	// Class GeometryCollectionEngine.GeometryCollectionISMPoolRenderer
	// Inherited from UObject
	// Size: 0xB8 (0xE0 - 0x28)
	class UGeometryCollectionISMPoolRenderer : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		UGeometryCollectionISMPoolComponent* CachedISMPoolComponent; // 0x30(0x8)
		UGeometryCollectionISMPoolComponent* LocalISMPoolComponent; // 0x38(0x8)
		unsigned char UnknownData01_7[0xA0]; // 0x40(0xA0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GeometryCollectionEngine.GeometryCollectionISMPoolRenderer");
			return ret;
		}
	};


	// Class GeometryCollectionEngine.GeometryCollection
	// Inherited from UObject
	// Size: 0x208 (0x230 - 0x28)
	class UGeometryCollection : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x30]; // 0x28(0x30) UNKNOWN PROPERTY
		bool EnableClustering; // 0x58(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x59(0x3) UNKNOWN PROPERTY
		int32_t ClusterGroupIndex; // 0x5C(0x4)
		int32_t MaxClusterLevel; // 0x60(0x4)
		EDamageModelTypeEnum DamageModel; // 0x64(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x65(0x3) UNKNOWN PROPERTY
		TArray<float> DamageThreshold; // 0x68(0x10)
		bool bUseSizeSpecificDamageThreshold; // 0x78(0x1)
		bool bUseMaterialDamageModifiers; // 0x79(0x1)
		bool PerClusterOnlyDamageThreshold; // 0x7A(0x1)
		unsigned char UnknownData03_6[0x1]; // 0x7B(0x1) UNKNOWN PROPERTY
		FGeometryCollectionDamagePropagationData DamagePropagationData; // 0x7C(0xC)
		EClusterConnectionTypeEnum ClusterConnectionType; // 0x88(0x1)
		unsigned char UnknownData04_6[0x3]; // 0x89(0x3) UNKNOWN PROPERTY
		float ConnectionGraphBoundsFilteringMargin; // 0x8C(0x4)
		TArray<UMaterialInterface*> Materials; // 0x90(0x10)
		TArray<FGeometryCollectionEmbeddedExemplar> EmbeddedGeometryExemplar; // 0xA0(0x10)
		bool bUseFullPrecisionUVs; // 0xB0(0x1)
		bool bStripOnCook; // 0xB1(0x1)
		bool bStripRenderDataOnCook; // 0xB2(0x1)
		unsigned char UnknownData05_6[0x5]; // 0xB3(0x5) UNKNOWN PROPERTY
		UClass* CustomRendererType; // 0xB8(0x8)
		FGeometryCollectionProxyMeshData RootProxyData; // 0xC0(0x10)
		TArray<FGeometryCollectionAutoInstanceMesh> AutoInstanceMeshes; // 0xD0(0x10)
		bool EnableNanite; // 0xE0(0x1)
		bool bConvertVertexColorsToSRGB; // 0xE1(0x1)
		unsigned char UnknownData06_6[0x6]; // 0xE2(0x6) UNKNOWN PROPERTY
		UPhysicalMaterial* PhysicsMaterial; // 0xE8(0x8)
		bool bDensityFromPhysicsMaterial; // 0xF0(0x1)
		unsigned char UnknownData07_6[0x3]; // 0xF1(0x3) UNKNOWN PROPERTY
		float CachedDensityFromPhysicsMaterialInGCm3; // 0xF4(0x4)
		bool bMassAsDensity; // 0xF8(0x1)
		unsigned char UnknownData08_6[0x3]; // 0xF9(0x3) UNKNOWN PROPERTY
		float Mass; // 0xFC(0x4)
		float MinimumMassClamp; // 0x100(0x4)
		bool bImportCollisionFromSource; // 0x104(0x1)
		bool bOptimizeConvexes; // 0x105(0x1)
		bool bScaleOnRemoval; // 0x106(0x1)
		bool bRemoveOnMaxSleep; // 0x107(0x1)
		FVector2D MaximumSleepTime; // 0x108(0x10)
		FVector2D RemovalDuration; // 0x118(0x10)
		bool bSlowMovingAsSleeping; // 0x128(0x1)
		unsigned char UnknownData09_6[0x3]; // 0x129(0x3) UNKNOWN PROPERTY
		float SlowMovingVelocityThreshold; // 0x12C(0x4)
		TArray<FGeometryCollectionSizeSpecificData> SizeSpecificData; // 0x130(0x10)
		bool EnableRemovePiecesOnFracture; // 0x140(0x1)
		unsigned char UnknownData10_6[0x7]; // 0x141(0x7) UNKNOWN PROPERTY
		TArray<UMaterialInterface*> RemoveOnFractureMaterials; // 0x148(0x10)
		UDataflow* DataflowAsset; // 0x158(0x8)
		FString DataflowTerminal; // 0x160(0x10)
		TMap<FString, FString> Overrides; // 0x170(0x50)
		FGuid PersistentGuid; // 0x1C0(0x10)
		FGuid StateGuid; // 0x1D0(0x10)
		int32_t RootIndex; // 0x1E0(0x4)
		unsigned char UnknownData11_6[0x4]; // 0x1E4(0x4) UNKNOWN PROPERTY
		TArray<int32_t> BreadthFirstTransformIndices; // 0x1E8(0x10)
		TArray<int32_t> AutoInstanceTransformRemapIndices; // 0x1F8(0x10)
		int32_t BoneSelectedMaterialIndex; // 0x208(0x4)
		unsigned char UnknownData12_6[0x14]; // 0x20C(0x14) UNKNOWN PROPERTY
		TArray<UAssetUserData*> AssetUserData; // 0x220(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GeometryCollectionEngine.GeometryCollection");
			return ret;
		}

		void SetEnableNanite(bool bValue); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C12989C(relative to base address)
		void SetConvertVertexColorsToSRGB(bool bValue); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable, Memory Exec: 0x7FF74C1292B0(relative to base address)
	};


	// Class GeometryCollectionEngine.GeometryCollectionRenderLevelSetActor
	// Inherited from AActor -> UObject
	// Size: 0xF0 (0x380 - 0x290)
	class AGeometryCollectionRenderLevelSetActor : public AActor	
	{
	public:
		UVolumeTexture* TargetVolumeTexture; // 0x290(0x8)
		UMaterial* RayMarchMaterial; // 0x298(0x8)
		float SurfaceTolerance; // 0x2A0(0x4)
		float Isovalue; // 0x2A4(0x4)
		bool Enabled; // 0x2A8(0x1)
		bool RenderVolumeBoundingBox; // 0x2A9(0x1)
		unsigned char UnknownData00_7[0xD6]; // 0x2AA(0xD6) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GeometryCollectionEngine.GeometryCollectionRenderLevelSetActor");
			return ret;
		}
	};


	// Class GeometryCollectionEngine.GeometryCollectionRootProxyRenderer
	// Inherited from UObject
	// Size: 0x20 (0x48 - 0x28)
	class UGeometryCollectionRootProxyRenderer : public UObject	
	{
	public:
		unsigned char UnknownData00_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		TArray<UStaticMeshComponent*> StaticMeshComponents; // 0x30(0x10)
		unsigned char UnknownData01_7[0x8]; // 0x40(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GeometryCollectionEngine.GeometryCollectionRootProxyRenderer");
			return ret;
		}
	};


	// Class GeometryCollectionEngine.GeometryCollectionISMPoolDebugDrawComponent
	// Inherited from UDebugDrawComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x18 (0x530 - 0x518)
	class UGeometryCollectionISMPoolDebugDrawComponent : public UDebugDrawComponent	
	{
	public:
		bool bShowGlobalStats; // 0x518(0x1)
		bool bShowStats; // 0x519(0x1)
		bool bShowBounds; // 0x51A(0x1)
		unsigned char UnknownData00_6[0x5]; // 0x51B(0x5) UNKNOWN PROPERTY
		UInstancedStaticMeshComponent* SelectedComponent; // 0x520(0x8)
		unsigned char UnknownData01_7[0x8]; // 0x528(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GeometryCollectionEngine.GeometryCollectionISMPoolDebugDrawComponent");
			return ret;
		}
	};

}
