#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: GeometryCollectionEngine
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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

		void SetISMPoolCustomInstanceData(UGeometryCollectionComponent GeometryCollectionComponent, int32_t CustomDataIndex, float CustomDataValue); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4144A5CD8
		void SetCustomInstanceDataByName(UGeometryCollectionComponent GeometryCollectionComponent, FName CustomDataName, float CustomDataValue); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4144A5BF8
		void SetCustomInstanceDataByIndex(UGeometryCollectionComponent GeometryCollectionComponent, int32_t CustomDataIndex, float CustomDataValue); // Flags: Final|Native|Static|Public|BlueprintCallable 0x7FF4144A5B18
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
		unsigned char UnknownData01_1[0x50]; // 0x30(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GeometryCollectionEngine.GeometryCollectionISMPoolSubSystem");
			return ret;
		}

		void OnActorEndPlay(AActor InSource, TEnumAsByte Reason); // Flags: Final|Native|Protected 0x7FF4144A5DB8
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
		unsigned char UnknownData03_5[0x3]; // 0x221(0x3) UNKNOWN PROPERTY
		FChaosCollisionEventRequestSettings CollisionEventRequestSettings; // 0x224(0x18)
		FChaosBreakingEventRequestSettings BreakingEventRequestSettings; // 0x23C(0x18)
		FChaosTrailingEventRequestSettings TrailingEventRequestSettings; // 0x254(0x18)
		FChaosRemovalEventRequestSettings RemovalEventRequestSettings; // 0x26C(0x10)
		unsigned char UnknownData04_6[0x4]; // 0x27C(0x4) UNKNOWN PROPERTY
		TSet ChaosSolverActors; // 0x280(0x50)
		TSet GeometryCollectionActors; // 0x2D0(0x50)
		FMulticastInlineDelegate OnCollisionEvents; // 0x320(0x10)
		FMulticastInlineDelegate OnBreakingEvents; // 0x330(0x10)
		FMulticastInlineDelegate OnTrailingEvents; // 0x340(0x10)
		FMulticastInlineDelegate OnRemovalEvents; // 0x350(0x10)
		unsigned char UnknownData05_7[0x170]; // 0x360(0x170) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GeometryCollectionEngine.ChaosDestructionListener");
			return ret;
		}

		void SortTrailingEvents(TArray& TrailingEvents, EChaosTrailingSortMethod SortMethod); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF4144A6C98
		void SortRemovalEvents(TArray& RemovalEvents, EChaosRemovalSortMethod SortMethod); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF4144A6BB8
		void SortCollisionEvents(TArray& CollisionEvents, EChaosCollisionSortMethod SortMethod); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF4144A6AD8
		void SortBreakingEvents(TArray& BreakingEvents, EChaosBreakingSortMethod SortMethod); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF4144A69F8
		void SetTrailingEventRequestSettings(FChaosTrailingEventRequestSettings& InSettings); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF4144A6918
		void SetTrailingEventEnabled(bool bIsEnabled); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144A6838
		void SetRemovalEventRequestSettings(FChaosRemovalEventRequestSettings& InSettings); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF4144A6758
		void SetRemovalEventEnabled(bool bIsEnabled); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144A6678
		void SetCollisionEventRequestSettings(FChaosCollisionEventRequestSettings& InSettings); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF4144A6598
		void SetCollisionEventEnabled(bool bIsEnabled); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144A64B8
		void SetBreakingEventRequestSettings(FChaosBreakingEventRequestSettings& InSettings); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF4144A63D8
		void SetBreakingEventEnabled(bool bIsEnabled); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144A62F8
		void RemoveGeometryCollectionActor(AGeometryCollectionActor GeometryCollectionActor); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144A6218
		void RemoveChaosSolverActor(AChaosSolverActor ChaosSolverActor); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144A6138
		bool IsEventListening(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4144A6058
		void AddGeometryCollectionActor(AGeometryCollectionActor GeometryCollectionActor); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144A5F78
		void AddChaosSolverActor(AChaosSolverActor ChaosSolverActor); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144A5E98
	};


	// Class GeometryCollectionEngine.GeometryCollectionActor
	// Inherited from AActor -> UObject
	// Size: 0x10 (0x2A0 - 0x290)
	class AGeometryCollectionActor : public AActor	
	{
	public:
		UGeometryCollectionComponent GeometryCollectionComponent; // 0x290(0x8)
		UGeometryCollectionDebugDrawComponent GeometryCollectionDebugDrawComponent; // 0x298(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GeometryCollectionEngine.GeometryCollectionActor");
			return ret;
		}

		bool RaycastSingle(FVector Start, FVector End, FHitResult& OutHit); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF4144A6D78
	};


	// Class GeometryCollectionEngine.GeometryCollectionCache
	// Inherited from UObject
	// Size: 0x28 (0x50 - 0x28)
	class UGeometryCollectionCache : public UObject	
	{
	public:
		FRecordedTransformTrack RecordedData; // 0x28(0x10)
		UGeometryCollection SupportedCollection; // 0x38(0x8)
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
		unsigned char UnknownData16_3[0x8]; // 0x4F8(0x8) UNKNOWN PROPERTY
		AChaosSolverActor ChaosSolverActor; // 0x500(0x8)
		UGeometryCollection RestCollection; // 0x508(0x8)
		TArray InitializationFields; // 0x510(0x10)
		bool Simulating; // 0x520(0x1)
		unsigned char UnknownData17_6[0x1]; // 0x521(0x1) UNKNOWN PROPERTY
		EObjectStateTypeEnum ObjectType; // 0x522(0x1)
		unsigned char UnknownData18_6[0x1]; // 0x523(0x1) UNKNOWN PROPERTY
		int32_t GravityGroupIndex; // 0x524(0x4)
		int32_t OneWayInteractionLevel; // 0x528(0x4)
		bool bDensityFromPhysicsMaterial; // 0x52C(0x1)
		bool bForceMotionBlur; // 0x52D(0x1)
		bool EnableClustering; // 0x52E(0x1)
		unsigned char UnknownData19_6[0x1]; // 0x52F(0x1) UNKNOWN PROPERTY
		int32_t ClusterGroupIndex; // 0x530(0x4)
		int32_t MaxClusterLevel; // 0x534(0x4)
		int32_t MaxSimulatedLevel; // 0x538(0x4)
		EDamageModelTypeEnum DamageModel; // 0x53C(0x1)
		unsigned char UnknownData20_6[0x3]; // 0x53D(0x3) UNKNOWN PROPERTY
		TArray DamageThreshold; // 0x540(0x10)
		bool bUseSizeSpecificDamageThreshold; // 0x550(0x1)
		bool bUseMaterialDamageModifiers; // 0x551(0x1)
		unsigned char UnknownData21_6[0x2]; // 0x552(0x2) UNKNOWN PROPERTY
		FGeometryCollectionDamagePropagationData DamagePropagationData; // 0x554(0xC)
		bool bEnableDamageFromCollision; // 0x560(0x1)
		bool bAllowRemovalOnSleep; // 0x561(0x1)
		bool bAllowRemovalOnBreak; // 0x562(0x1)
		EClusterConnectionTypeEnum ClusterConnectionType; // 0x563(0x1)
		int32_t CollisionGroup; // 0x564(0x4)
		float CollisionSampleFraction; // 0x568(0x4)
		float LinearEtherDrag; // 0x56C(0x4)
		UChaosPhysicalMaterial PhysicalMaterial; // 0x570(0x8)
		EInitialVelocityTypeEnum InitialVelocityType; // 0x578(0x1)
		unsigned char UnknownData22_6[0x7]; // 0x579(0x7) UNKNOWN PROPERTY
		FVector InitialLinearVelocity; // 0x580(0x18)
		FVector InitialAngularVelocity; // 0x598(0x18)
		UPhysicalMaterial PhysicalMaterialOverride; // 0x5B0(0x8)
		FGeomComponentCacheParameters CacheParameters; // 0x5B8(0x50)
		TArray RestTransforms; // 0x608(0x10)
		FMulticastInlineDelegate NotifyGeometryCollectionPhysicsStateChange; // 0x618(0x10)
		FMulticastInlineDelegate NotifyGeometryCollectionPhysicsLoadingStateChange; // 0x628(0x10)
		unsigned char UnknownData23_6[0x18]; // 0x638(0x18) UNKNOWN PROPERTY
		FMulticastInlineDelegate OnChaosBreakEvent; // 0x650(0x10)
		FMulticastInlineDelegate OnChaosRemovalEvent; // 0x660(0x10)
		FMulticastInlineDelegate OnChaosCrumblingEvent; // 0x670(0x10)
		unsigned char UnknownData24_6[0x48]; // 0x680(0x48) UNKNOWN PROPERTY
		float DesiredCacheTime; // 0x6C8(0x4)
		bool CachePlayback; // 0x6CC(0x1)
		unsigned char UnknownData25_6[0x3]; // 0x6CD(0x3) UNKNOWN PROPERTY
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
		unsigned char UnknownData26_6[0x1]; // 0x6F1(0x1) UNKNOWN PROPERTY
		bool bEnableReplication; // 0x6F2(0x1)
		bool bEnableAbandonAfterLevel; // 0x6F3(0x1)
		FName AbandonedCollisionProfileName; // 0x6F4(0x4)
		AGeometryCollectionISMPoolActor ISMPool; // 0x6F8(0x8)
		UClass CustomRendererType; // 0x700(0x8)
		bool bOverrideCustomRenderer; // 0x708(0x1)
		bool bAutoAssignISMPool; // 0x709(0x1)
		unsigned char UnknownData27_6[0x1]; // 0x70A(0x1) UNKNOWN PROPERTY
		bool bUseStaticMeshCollisionForTraces; // 0x70B(0x1)
		int32_t ReplicationAbandonClusterLevel; // 0x70C(0x4)
		TScriptInterface CustomRenderer; // 0x710(0x10)
		TArray CollisionProfilePerLevel; // 0x720(0x10)
		unsigned char UnknownData28_6[0x10]; // 0x730(0x10) UNKNOWN PROPERTY
		int32_t ReplicationAbandonAfterLevel; // 0x740(0x4)
		int32_t ReplicationMaxPositionAndVelocityCorrectionLevel; // 0x744(0x4)
		FGeometryCollectionRepData RepData; // 0x748(0x38)
		FGeometryCollectionRepStateData RepStateData; // 0x780(0x40)
		FGeometryCollectionRepDynamicData RepDynamicData; // 0x7C0(0x18)
		unsigned char UnknownData29_6[0x110]; // 0x7D8(0x110) UNKNOWN PROPERTY
		UBodySetup DummyBodySetup; // 0x8E8(0x8)
		UChaosGameplayEventDispatcher EventDispatcher; // 0x8F0(0x8)
		TArray EmbeddedGeometryComponents; // 0x8F8(0x10)
		unsigned char UnknownData30_6[0x14]; // 0x908(0x14) UNKNOWN PROPERTY
		float AngularEtherDrag; // 0x91C(0x4)
		unsigned char UnknownData31_7[0x70]; // 0x920(0x70) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GeometryCollectionEngine.GeometryCollectionComponent");
			return ret;
		}

		void SetUseStaticMeshCollisionForTraces(bool bInUseStaticMeshCollisionForTraces); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4110324F8
		void SetUseMaterialDamageModifiers(bool bInUseMaterialDamageModifiers); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF411032418
		void SetRestCollection(UGeometryCollection RestCollectionIn, bool bApplyAssetDefaults); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF411032338
		void SetPerParticleCollisionProfileName(TArray& BoneIds, FName ProfileName); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF411032258
		void SetPerLevelCollisionProfileNames(TArray& ProfileNames); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF411032178
		void SetOneWayInteractionLevel(int32_t InOneWayInteractionLevel); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF411032098
		void SetNotifyRemovals(bool bNewNotifyRemovals); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF411031FB8
		void SetNotifyGlobalRemovals(bool bNewNotifyGlobalRemovals); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF411031ED8
		void SetNotifyGlobalCrumblings(bool bNewNotifyGlobalCrumblings, bool bGlobalNewCrumblingEventIncludesChildren); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF411031DF8
		void SetNotifyGlobalCollision(bool bNewNotifyGlobalCollisions); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF411031D18
		void SetNotifyGlobalBreaks(bool bNewNotifyGlobalBreaks); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF411031C38
		void SetNotifyCrumblings(bool bNewNotifyCrumblings, bool bNewCrumblingEventIncludesChildren); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF411031B58
		void SetNotifyBreaks(bool bNewNotifyBreaks); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF411031A78
		void SetLocalRestTransforms(TArray& Transforms, bool bOnlyLeaves); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF411031998
		void SetGravityGroupIndex(int32_t InGravityGroupIndex); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4110318B8
		void SetEnableDamageFromCollision(bool bValue); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4110317D8
		void SetDensityFromPhysicsMaterial(bool bInDensityFromPhysicsMaterial); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4110316F8
		void SetDamageThreshold(TArray& InDamageThreshold); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF411031618
		void SetDamagePropagationData(FGeometryCollectionDamagePropagationData& InDamagePropagationData); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 0x7FF411031478
		void SetDamageModel(EDamageModelTypeEnum InDamageModel); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF411031398
		void SetAnchoredByTransformedBox(FBox Box, FTransform Transform, bool bAnchored, int32_t MaxLevel); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 0x7FF4110312B8
		void SetAnchoredByIndex(int32_t Index, bool bAnchored); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4110311D8
		void SetAnchoredByBox(FBox WorldSpaceBox, bool bAnchored, int32_t MaxLevel); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 0x7FF4110310F8
		void SetAbandonedParticleCollisionProfileName(FName CollisionProfile); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF411031018
		void RemoveAllAnchors(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF411030F38
		void ReceivePhysicsCollision(FChaosPhysicsCollisionInfo& CollisionInfo); // Flags: RequiredAPI|Event|Public|HasOutParms|BlueprintEvent 0x7FF411030E58
		void OnRep_RepStateData(); // Flags: Final|RequiredAPI|Native|Protected 0x7FF411030D78
		void OnRep_RepDynamicData(); // Flags: Final|RequiredAPI|Native|Protected 0x7FF411030C98
		void OnRep_RepData(); // Flags: Final|RequiredAPI|Native|Protected 0x7FF411030BB8
		void NotifyGeometryCollectionPhysicsStateChange__DelegateSignature(UGeometryCollectionComponent FracturedComponent); // Flags: MulticastDelegate|Public|Delegate 0x7FF411030AD8
		void NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature(UGeometryCollectionComponent FracturedComponent); // Flags: MulticastDelegate|Public|Delegate 0x7FF4110309F8
		bool IsRootBroken(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF411030918
		bool GetUseStaticMeshCollisionForTraces(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF411030838
		FTransform GetRootInitialTransform(); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF411030758
		int32_t GetRootIndex(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF411030678
		FTransform GetRootCurrentTransform(); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF411030598
		void GetMassAndExtents(int32_t ItemIndex, float& OutMass, FBox& OutExtents); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF4110304B8
		FBox GetLocalBounds(); // Flags: Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 0x7FF4110303D8
		TArray GetInitialLocalRestTransforms(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF4110302F8
		int32_t GetInitialLevel(int32_t ItemIndex); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF411030218
		FString GetDebugInfo(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF411030138
		TArray GetDamageThreshold(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const 0x7FF411030058
		void ForceBrokenForCustomRenderer(bool bForceBroken); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF41102FF78
		void EnableRootProxyForCustomRenderer(bool bEnable); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF41102FE98
		void CrumbleCluster(int32_t ItemIndex); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF41102FDB8
		void CrumbleActiveClusters(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF41102FCD8
		void ApplyPhysicsField(bool Enabled, EGeometryCollectionPhysicsTypeEnum Target, UFieldSystemMetaData MetaData, UFieldNodeBase Field); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF41102FBF8
		void ApplyLinearVelocity(int32_t ItemIndex, FVector& LinearVelocity); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF41102FB18
		void ApplyKinematicField(float Radius, FVector Position); // Flags: Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 0x7FF41102FA38
		void ApplyInternalStrain(int32_t ItemIndex, FVector& Location, float Radius, int32_t PropagationDepth, float PropagationFactor, float Strain); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF41102F958
		void ApplyExternalStrain(int32_t ItemIndex, FVector& Location, float Radius, int32_t PropagationDepth, float PropagationFactor, float Strain); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF41102F878
		void ApplyBreakingLinearVelocity(int32_t ItemIndex, FVector& LinearVelocity); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF41102F798
		void ApplyBreakingAngularVelocity(int32_t ItemIndex, FVector& AngularVelocity); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF41102F6B8
		void ApplyAssetDefaults(); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF41102F5D8
		void ApplyAngularVelocity(int32_t ItemIndex, FVector& AngularVelocity); // Flags: Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 0x7FF41102F4F8
	};


	// Class GeometryCollectionEngine.GeometryCollectionDebugDrawActor
	// Inherited from AActor -> UObject
	// Size: 0xC0 (0x350 - 0x290)
	class AGeometryCollectionDebugDrawActor : public AActor	
	{
	public:
		FGeometryCollectionDebugDrawWarningMessage WarningMessage; // 0x290(0x1)
		unsigned char UnknownData03_6[0x7]; // 0x291(0x7) UNKNOWN PROPERTY
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
		unsigned char UnknownData04_6[0x3]; // 0x2D9(0x3) UNKNOWN PROPERTY
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
		unsigned char UnknownData05_6[0x4]; // 0x344(0x4) UNKNOWN PROPERTY
		UBillboardComponent SpriteComponent; // 0x348(0x8)

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
		AGeometryCollectionDebugDrawActor GeometryCollectionDebugDrawActor; // 0xA0(0x8)
		AGeometryCollectionRenderLevelSetActor GeometryCollectionRenderLevelSetActor; // 0xA8(0x8)
		unsigned char UnknownData01_7[0x8]; // 0xB0(0x8) UNKNOWN PROPERTY

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
		UGeometryCollectionISMPoolComponent ISMPoolComp; // 0x290(0x8)
		UGeometryCollectionISMPoolDebugDrawComponent ISMPoolDebugDrawComp; // 0x298(0x8)

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
		unsigned char UnknownData01_1[0x130]; // 0x220(0x130) UNKNOWN PROPERTY

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
		unsigned char UnknownData02_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		UGeometryCollectionISMPoolComponent CachedISMPoolComponent; // 0x30(0x8)
		UGeometryCollectionISMPoolComponent LocalISMPoolComponent; // 0x38(0x8)
		unsigned char UnknownData03_7[0xA0]; // 0x40(0xA0) UNKNOWN PROPERTY

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
		unsigned char UnknownData13_3[0x30]; // 0x28(0x30) UNKNOWN PROPERTY
		bool EnableClustering; // 0x58(0x1)
		unsigned char UnknownData14_6[0x3]; // 0x59(0x3) UNKNOWN PROPERTY
		int32_t ClusterGroupIndex; // 0x5C(0x4)
		int32_t MaxClusterLevel; // 0x60(0x4)
		EDamageModelTypeEnum DamageModel; // 0x64(0x1)
		unsigned char UnknownData15_6[0x3]; // 0x65(0x3) UNKNOWN PROPERTY
		TArray DamageThreshold; // 0x68(0x10)
		bool bUseSizeSpecificDamageThreshold; // 0x78(0x1)
		bool bUseMaterialDamageModifiers; // 0x79(0x1)
		bool PerClusterOnlyDamageThreshold; // 0x7A(0x1)
		unsigned char UnknownData16_6[0x1]; // 0x7B(0x1) UNKNOWN PROPERTY
		FGeometryCollectionDamagePropagationData DamagePropagationData; // 0x7C(0xC)
		EClusterConnectionTypeEnum ClusterConnectionType; // 0x88(0x1)
		unsigned char UnknownData17_6[0x3]; // 0x89(0x3) UNKNOWN PROPERTY
		float ConnectionGraphBoundsFilteringMargin; // 0x8C(0x4)
		TArray Materials; // 0x90(0x10)
		TArray EmbeddedGeometryExemplar; // 0xA0(0x10)
		bool bUseFullPrecisionUVs; // 0xB0(0x1)
		bool bStripOnCook; // 0xB1(0x1)
		bool bStripRenderDataOnCook; // 0xB2(0x1)
		unsigned char UnknownData18_6[0x5]; // 0xB3(0x5) UNKNOWN PROPERTY
		UClass CustomRendererType; // 0xB8(0x8)
		FGeometryCollectionProxyMeshData RootProxyData; // 0xC0(0x10)
		TArray AutoInstanceMeshes; // 0xD0(0x10)
		bool EnableNanite; // 0xE0(0x1)
		bool bConvertVertexColorsToSRGB; // 0xE1(0x1)
		unsigned char UnknownData19_6[0x6]; // 0xE2(0x6) UNKNOWN PROPERTY
		UPhysicalMaterial PhysicsMaterial; // 0xE8(0x8)
		bool bDensityFromPhysicsMaterial; // 0xF0(0x1)
		unsigned char UnknownData20_6[0x3]; // 0xF1(0x3) UNKNOWN PROPERTY
		float CachedDensityFromPhysicsMaterialInGCm3; // 0xF4(0x4)
		bool bMassAsDensity; // 0xF8(0x1)
		unsigned char UnknownData21_6[0x3]; // 0xF9(0x3) UNKNOWN PROPERTY
		float Mass; // 0xFC(0x4)
		float MinimumMassClamp; // 0x100(0x4)
		bool bImportCollisionFromSource; // 0x104(0x1)
		bool bOptimizeConvexes; // 0x105(0x1)
		bool bScaleOnRemoval; // 0x106(0x1)
		bool bRemoveOnMaxSleep; // 0x107(0x1)
		FVector2D MaximumSleepTime; // 0x108(0x10)
		FVector2D RemovalDuration; // 0x118(0x10)
		bool bSlowMovingAsSleeping; // 0x128(0x1)
		unsigned char UnknownData22_6[0x3]; // 0x129(0x3) UNKNOWN PROPERTY
		float SlowMovingVelocityThreshold; // 0x12C(0x4)
		TArray SizeSpecificData; // 0x130(0x10)
		bool EnableRemovePiecesOnFracture; // 0x140(0x1)
		unsigned char UnknownData23_6[0x7]; // 0x141(0x7) UNKNOWN PROPERTY
		TArray RemoveOnFractureMaterials; // 0x148(0x10)
		UDataflow DataflowAsset; // 0x158(0x8)
		FString DataflowTerminal; // 0x160(0x10)
		TMap Overrides; // 0x170(0x50)
		FGuid PersistentGuid; // 0x1C0(0x10)
		FGuid StateGuid; // 0x1D0(0x10)
		int32_t RootIndex; // 0x1E0(0x4)
		unsigned char UnknownData24_6[0x4]; // 0x1E4(0x4) UNKNOWN PROPERTY
		TArray BreadthFirstTransformIndices; // 0x1E8(0x10)
		TArray AutoInstanceTransformRemapIndices; // 0x1F8(0x10)
		int32_t BoneSelectedMaterialIndex; // 0x208(0x4)
		unsigned char UnknownData25_6[0x14]; // 0x20C(0x14) UNKNOWN PROPERTY
		TArray AssetUserData; // 0x220(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GeometryCollectionEngine.GeometryCollection");
			return ret;
		}

		void SetEnableNanite(bool bValue); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144A6F38
		void SetConvertVertexColorsToSRGB(bool bValue); // Flags: Final|RequiredAPI|Native|Public|BlueprintCallable 0x7FF4144A6E58
	};


	// Class GeometryCollectionEngine.GeometryCollectionRenderLevelSetActor
	// Inherited from AActor -> UObject
	// Size: 0xF0 (0x380 - 0x290)
	class AGeometryCollectionRenderLevelSetActor : public AActor	
	{
	public:
		UVolumeTexture TargetVolumeTexture; // 0x290(0x8)
		UMaterial RayMarchMaterial; // 0x298(0x8)
		float SurfaceTolerance; // 0x2A0(0x4)
		float Isovalue; // 0x2A4(0x4)
		bool Enabled; // 0x2A8(0x1)
		bool RenderVolumeBoundingBox; // 0x2A9(0x1)
		unsigned char UnknownData01_7[0xD6]; // 0x2AA(0xD6) UNKNOWN PROPERTY

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
		unsigned char UnknownData02_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		TArray StaticMeshComponents; // 0x30(0x10)
		unsigned char UnknownData03_7[0x8]; // 0x40(0x8) UNKNOWN PROPERTY

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
		unsigned char UnknownData02_6[0x5]; // 0x51B(0x5) UNKNOWN PROPERTY
		UInstancedStaticMeshComponent SelectedComponent; // 0x520(0x8)
		unsigned char UnknownData03_7[0x8]; // 0x528(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/GeometryCollectionEngine.GeometryCollectionISMPoolDebugDrawComponent");
			return ret;
		}
	};

}
