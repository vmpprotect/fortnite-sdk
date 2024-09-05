#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: InstancedActors
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class InstancedActors.ClientInstancedActorsSpawnerSubsystem
	// Inherited from UMassActorSpawnerSubsystem -> UMassSubsystemBase -> UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x0 (0xF0 - 0xF0)
	class UClientInstancedActorsSpawnerSubsystem : public UMassActorSpawnerSubsystem	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InstancedActors.ClientInstancedActorsSpawnerSubsystem");
			return ret;
		}
	};


	// Class InstancedActors.GameFeatureAction_ConfigureInstancedActors
	// Inherited from UGameFeatureAction -> UObject
	// Size: 0x20 (0x48 - 0x28)
	class UGameFeatureAction_ConfigureInstancedActors : public UGameFeatureAction	
	{
	public:
		FInstancedActorsConfig ConfigOverride; // 0x28(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InstancedActors.GameFeatureAction_ConfigureInstancedActors");
			return ret;
		}
	};


	// Class InstancedActors.InstancedActorsComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x10 (0xB0 - 0xA0)
	class UInstancedActorsComponent : public UActorComponent	
	{
	public:
		FInstancedActorsInstanceHandle InstanceHandle; // 0xA0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InstancedActors.InstancedActorsComponent");
			return ret;
		}

		void OnRep_InstanceHandle(); // Flags: Final|Native|Protected, Memory Exec: 0x7FF750CA34E8(relative to base address)
		bool HasMassEntity(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF750CA34B0(relative to base address)
	};


	// Class InstancedActors.InstancedActorsData
	// Inherited from UObject
	// Size: 0x2D0 (0x2F8 - 0x28)
	class UInstancedActorsData : public UObject	
	{
	public:
		uint16_t ID; // 0x28(0x2)
		unsigned char UnknownData00_6[0x6]; // 0x2A(0x6) UNKNOWN PROPERTY
		UClass* ActorClass; // 0x30(0x8)
		FInstancedActorsTagSet Tags; // 0x38(0x28)
		unsigned char UnknownData01_6[0x10]; // 0x60(0x10) UNKNOWN PROPERTY
		TArray<FTransform> InstanceTransforms; // 0x70(0x10)
		uint16_t NumValidInstances; // 0x80(0x2)
		unsigned char UnknownData02_6[0x6]; // 0x82(0x6) UNKNOWN PROPERTY
		FBox Bounds; // 0x88(0x38)
		uint16_t NumInstances; // 0xC0(0x2)
		unsigned char UnknownData03_6[0x6]; // 0xC2(0x6) UNKNOWN PROPERTY
		TArray<FMassEntityHandle> Entities; // 0xC8(0x10)
		unsigned char UnknownData04_6[0x30]; // 0xD8(0x30) UNKNOWN PROPERTY
		TArray<FInstancedActorsVisualizationInfo> InstanceVisualizations; // 0x108(0x10)
		unsigned char UnknownData05_6[0x20]; // 0x118(0x20) UNKNOWN PROPERTY
		FBox CachedLocalBounds; // 0x138(0x38)
		unsigned char UnknownData06_6[0x10]; // 0x170(0x10) UNKNOWN PROPERTY
		FInstancedActorsDeltaList InstanceDeltas; // 0x180(0x178)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InstancedActors.InstancedActorsData");
			return ret;
		}

		AInstancedActorsManager GetManager(); // Flags: Final|Native|Public|BlueprintCallable|BlueprintPure|Const, Memory Exec: 0x7FF7486CEC98(relative to base address)
	};


	// Class InstancedActors.InstancedActorsDebugProcessor
	// Inherited from UMassProcessor -> UObject
	// Size: 0x0 (0xC0 - 0xC0)
	class UInstancedActorsDebugProcessor : public UMassProcessor	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InstancedActors.InstancedActorsDebugProcessor");
			return ret;
		}
	};


	// Class InstancedActors.InstancedActorsInitializerProcessor
	// Inherited from UMassProcessor -> UObject
	// Size: 0x320 (0x3E0 - 0xC0)
	class UInstancedActorsInitializerProcessor : public UMassProcessor	
	{
	public:
		unsigned char UnknownData00_1[0x320]; // 0xC0(0x320) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InstancedActors.InstancedActorsInitializerProcessor");
			return ret;
		}
	};


	// Class InstancedActors.InstancedActorsManager
	// Inherited from APartitionActor -> AActor -> UObject
	// Size: 0x450 (0x6E0 - 0x290)
	class AInstancedActorsManager : public APartitionActor	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0x290(0x10) UNKNOWN PROPERTY
		UInstancedActorsSubsystem* InstancedActorSubsystem; // 0x2A0(0x8)
		FInstancedActorsManagerHandle ManagerHandle; // 0x2A8(0x4)
		unsigned char UnknownData01_6[0x14]; // 0x2AC(0x14) UNKNOWN PROPERTY
		FGuid SavedActorGuid; // 0x2C0(0x10)
		bool bHasSpawnedEntities; // 0x2D0(0x1)
		unsigned char UnknownData02_6[0x1]; // 0x2D1(0x1) UNKNOWN PROPERTY
		uint16_t NextInstanceDataID; // 0x2D2(0x2)
		unsigned char UnknownData03_6[0x4]; // 0x2D4(0x4) UNKNOWN PROPERTY
		TArray<UInstancedActorsData*> PerActorClassInstanceData; // 0x2D8(0x10)
		FBox InstanceBounds; // 0x2E8(0x38)
		unsigned char UnknownData04_6[0x40]; // 0x320(0x40) UNKNOWN PROPERTY
		TMap<UInstancedStaticMeshComponent*, int32_t> ISMComponentToInstanceDataMap; // 0x360(0x50)
		UClass* InstancedActorsDataClass; // 0x3B0(0x8)
		unsigned char UnknownData05_7[0x328]; // 0x3B8(0x328) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InstancedActors.InstancedActorsManager");
			return ret;
		}
	};


	// Class InstancedActors.InstancedActorsModifierBase
	// Inherited from UObject
	// Size: 0x50 (0x78 - 0x28)
	class UInstancedActorsModifierBase : public UObject	
	{
	public:
		FGameplayTagQuery InstanceTagsQuery; // 0x28(0x48)
		unsigned char UnknownData00_7[0x8]; // 0x70(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InstancedActors.InstancedActorsModifierBase");
			return ret;
		}
	};


	// Class InstancedActors.RemoveInstancedActorsModifier
	// Inherited from UInstancedActorsModifierBase -> UObject
	// Size: 0x0 (0x78 - 0x78)
	class URemoveInstancedActorsModifier : public UInstancedActorsModifierBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InstancedActors.RemoveInstancedActorsModifier");
			return ret;
		}
	};


	// Class InstancedActors.InstancedActorsModifierVolume
	// Inherited from AActor -> UObject
	// Size: 0x8 (0x298 - 0x290)
	class AInstancedActorsModifierVolume : public AActor	
	{
	public:
		UInstancedActorsModifierVolumeComponent* ModifierVolumeComponent; // 0x290(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InstancedActors.InstancedActorsModifierVolume");
			return ret;
		}
	};


	// Class InstancedActors.InstancedActorsRemovalModifierVolume
	// Inherited from AInstancedActorsModifierVolume -> AActor -> UObject
	// Size: 0x0 (0x298 - 0x298)
	class AInstancedActorsRemovalModifierVolume : public AInstancedActorsModifierVolume	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InstancedActors.InstancedActorsRemovalModifierVolume");
			return ret;
		}
	};


	// Class InstancedActors.InstancedActorsModifierVolumeComponent
	// Inherited from UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x78 (0x540 - 0x4C8)
	class UInstancedActorsModifierVolumeComponent : public UPrimitiveComponent	
	{
	public:
		EInstancedActorsVolumeShape Shape; // 0x4C8(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x4C9(0x7) UNKNOWN PROPERTY
		FVector Extent; // 0x4D0(0x18)
		float Radius; // 0x4E8(0x4)
		unsigned char UnknownData01_6[0x4]; // 0x4EC(0x4) UNKNOWN PROPERTY
		TArray<UInstancedActorsModifierBase*> Modifiers; // 0x4F0(0x10)
		bool bIgnoreOwnLevelsInstances; // 0x500(0x1)
		unsigned char UnknownData02_6[0x7]; // 0x501(0x7) UNKNOWN PROPERTY
		TArray<TWeakObjectPtr> LevelsToIgnore; // 0x508(0x10)
		FColor Color; // 0x518(0x4)
		bool bDrawOnlyIfSelected; // 0x51C(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x51D(0x3) UNKNOWN PROPERTY
		float LineThickness; // 0x520(0x4)
		FInstancedActorsModifierVolumeHandle ModifierVolumeHandle; // 0x524(0x4)
		TArray<TWeakObjectPtr> ModifiedManagers; // 0x528(0x10)
		unsigned char UnknownData04_7[0x8]; // 0x538(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InstancedActors.InstancedActorsModifierVolumeComponent");
			return ret;
		}
	};


	// Class InstancedActors.RemoveInstancesModifierVolumeComponent
	// Inherited from UInstancedActorsModifierVolumeComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x0 (0x540 - 0x540)
	class URemoveInstancesModifierVolumeComponent : public UInstancedActorsModifierVolumeComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InstancedActors.RemoveInstancesModifierVolumeComponent");
			return ret;
		}
	};


	// Class InstancedActors.InstancedActorsRepresentationActorManagement
	// Inherited from UMassRepresentationActorManagement -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UInstancedActorsRepresentationActorManagement : public UMassRepresentationActorManagement	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InstancedActors.InstancedActorsRepresentationActorManagement");
			return ret;
		}
	};


	// Class InstancedActors.InstancedActorsRepresentationSubsystem
	// Inherited from UMassRepresentationSubsystem -> UMassSubsystemBase -> UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x8 (0xD8 - 0xD0)
	class UInstancedActorsRepresentationSubsystem : public UMassRepresentationSubsystem	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0xD0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InstancedActors.InstancedActorsRepresentationSubsystem");
			return ret;
		}
	};


	// Class InstancedActors.InstancedActorsProjectSettings
	// Inherited from UDeveloperSettings -> UObject
	// Size: 0x80 (0xB0 - 0x30)
	class UInstancedActorsProjectSettings : public UDeveloperSettings	
	{
	public:
		int32_t GridSize; // 0x30(0x4)
		FDataRegistryType NamedSettingsRegistryType; // 0x34(0x4)
		FDataRegistryType ActorClassSettingsRegistryType; // 0x38(0x4)
		FName DefaultBaseSettingsName; // 0x3C(0x4)
		FName EnforcedSettingsName; // 0x40(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x44(0x4) UNKNOWN PROPERTY
		FInstancedActorsConfig DefaultConfig; // 0x48(0x20)
		unsigned char UnknownData01_6[0x18]; // 0x68(0x18) UNKNOWN PROPERTY
		FInstancedActorsConfig CompiledActiveConfig; // 0x80(0x20)
		TArray<FClassConfigOverrideEntry> ClassConfigOverrides; // 0xA0(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InstancedActors.InstancedActorsProjectSettings");
			return ret;
		}
	};


	// Class InstancedActors.InstancedActorsStationaryLODBatchProcessor
	// Inherited from UMassProcessor -> UObject
	// Size: 0x660 (0x720 - 0xC0)
	class UInstancedActorsStationaryLODBatchProcessor : public UMassProcessor	
	{
	public:
		unsigned char UnknownData00_3[0x640]; // 0xC0(0x640) UNKNOWN PROPERTY
		double DelayPerBulkLOD; // 0x700(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InstancedActors.InstancedActorsStationaryLODBatchProcessor");
			return ret;
		}
	};


	// Class InstancedActors.InstancedActorsSubsystem
	// Inherited from UTickableWorldSubsystem -> UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x2F0 (0x330 - 0x40)
	class UInstancedActorsSubsystem : public UTickableWorldSubsystem	
	{
	public:
		unsigned char UnknownData00_3[0x20]; // 0x40(0x20) UNKNOWN PROPERTY
		UInstancedActorsProjectSettings* ProjectSettings; // 0x60(0x8)
		UDataRegistrySubsystem* DataRegistrySubsystem; // 0x68(0x8)
		UActorPartitionSubsystem* ActorPartitionSubsystem; // 0x70(0x8)
		UClass* InstancedActorsManagerClass; // 0x78(0x8)
		unsigned char UnknownData01_6[0x250]; // 0x80(0x250) UNKNOWN PROPERTY
		UWorld* ExemplarActorWorld; // 0x2D0(0x8)
		unsigned char UnknownData02_6[0x50]; // 0x2D8(0x50) UNKNOWN PROPERTY
		UScriptStruct* SettingsType; // 0x328(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InstancedActors.InstancedActorsSubsystem");
			return ret;
		}
	};


	// Class InstancedActors.InstancedActorsVisualizationSwitcherProcessor
	// Inherited from UMassProcessor -> UObject
	// Size: 0x320 (0x3E0 - 0xC0)
	class UInstancedActorsVisualizationSwitcherProcessor : public UMassProcessor	
	{
	public:
		unsigned char UnknownData00_1[0x320]; // 0xC0(0x320) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InstancedActors.InstancedActorsVisualizationSwitcherProcessor");
			return ret;
		}
	};


	// Class InstancedActors.InstancedActorsVisualizationTrait
	// Inherited from UMassStationaryDistanceVisualizationTrait -> UMassDistanceVisualizationTrait -> UMassEntityTraitBase -> UObject
	// Size: 0x8 (0x120 - 0x118)
	class UInstancedActorsVisualizationTrait : public UMassStationaryDistanceVisualizationTrait	
	{
	public:
		TWeakObjectPtr<UInstancedActorsData*> InstanceData; // 0x118(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InstancedActors.InstancedActorsVisualizationTrait");
			return ret;
		}
	};


	// Class InstancedActors.ServerInstancedActorsSpawnerSubsystem
	// Inherited from UMassActorSpawnerSubsystem -> UMassSubsystemBase -> UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x28 (0x118 - 0xF0)
	class UServerInstancedActorsSpawnerSubsystem : public UMassActorSpawnerSubsystem	
	{
	public:
		unsigned char UnknownData00_3[0x10]; // 0xF0(0x10) UNKNOWN PROPERTY
		AActor* TransientActorBeingSpawned; // 0x100(0x8)
		FInstancedActorsInstanceHandle TransientActorSpawningInstance; // 0x108(0x10)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/InstancedActors.ServerInstancedActorsSpawnerSubsystem");
			return ret;
		}
	};

}
