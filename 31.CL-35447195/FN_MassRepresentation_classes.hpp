#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: MassRepresentation
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class MassRepresentation.MassDistanceLODProcessor
	// Inherited from UMassProcessor -> UObject
	// Size: 0x970 (0xA30 - 0xC0)
	class UMassDistanceLODProcessor : public UMassProcessor	
	{
	public:
		unsigned char UnknownData01_3[0x968]; // 0xC0(0x968) UNKNOWN PROPERTY
		UScriptStruct FilterTag; // 0xA28(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassRepresentation.MassDistanceLODProcessor");
			return ret;
		}
	};


	// Class MassRepresentation.MassDistanceVisualizationTrait
	// Inherited from UMassEntityTraitBase -> UObject
	// Size: 0xF8 (0x120 - 0x28)
	class UMassDistanceVisualizationTrait : public UMassEntityTraitBase	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		FStaticMeshInstanceVisualizationDesc StaticMeshInstanceDesc; // 0x30(0x80)
		UClass HighResTemplateActor; // 0xB0(0x8)
		UClass LowResTemplateActor; // 0xB8(0x8)
		UClass RepresentationSubsystemClass; // 0xC0(0x8)
		FMassRepresentationParameters Params; // 0xC8(0x28)
		FMassDistanceLODParameters LODParams; // 0xF0(0x20)
		bool bAllowServerSideVisualization; // 0x110(0x1)
		unsigned char UnknownData03_7[0x7]; // 0x111(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassRepresentation.MassDistanceVisualizationTrait");
			return ret;
		}
	};


	// Class MassRepresentation.MassVisualizationTrait
	// Inherited from UMassEntityTraitBase -> UObject
	// Size: 0x118 (0x140 - 0x28)
	class UMassVisualizationTrait : public UMassEntityTraitBase	
	{
	public:
		unsigned char UnknownData02_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		FStaticMeshInstanceVisualizationDesc StaticMeshInstanceDesc; // 0x30(0x80)
		UClass HighResTemplateActor; // 0xB0(0x8)
		UClass LowResTemplateActor; // 0xB8(0x8)
		UClass RepresentationSubsystemClass; // 0xC0(0x8)
		FMassRepresentationParameters Params; // 0xC8(0x28)
		FMassVisualizationLODParameters LODParams; // 0xF0(0x48)
		bool bAllowServerSideVisualization; // 0x138(0x1)
		unsigned char UnknownData03_7[0x7]; // 0x139(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassRepresentation.MassVisualizationTrait");
			return ret;
		}
	};


	// Class MassRepresentation.MassMovableVisualizationTrait
	// Inherited from UMassVisualizationTrait -> UMassEntityTraitBase -> UObject
	// Size: 0x0 (0x140 - 0x140)
	class UMassMovableVisualizationTrait : public UMassVisualizationTrait	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassRepresentation.MassMovableVisualizationTrait");
			return ret;
		}
	};


	// Class MassRepresentation.MassRepresentationActorManagement
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMassRepresentationActorManagement : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassRepresentation.MassRepresentationActorManagement");
			return ret;
		}
	};


	// Class MassRepresentation.MassRepresentationProcessor
	// Inherited from UMassProcessor -> UObject
	// Size: 0x330 (0x3F0 - 0xC0)
	class UMassRepresentationProcessor : public UMassProcessor	
	{
	public:
		unsigned char UnknownData02_3[0x320]; // 0xC0(0x320) UNKNOWN PROPERTY
		FMassRepresentationUpdateParams UpdateParams; // 0x3E0(0x1)
		unsigned char UnknownData03_7[0xF]; // 0x3E1(0xF) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassRepresentation.MassRepresentationProcessor");
			return ret;
		}
	};


	// Class MassRepresentation.MassVisualizationProcessor
	// Inherited from UMassRepresentationProcessor -> UMassProcessor -> UObject
	// Size: 0x0 (0x3F0 - 0x3F0)
	class UMassVisualizationProcessor : public UMassRepresentationProcessor	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassRepresentation.MassVisualizationProcessor");
			return ret;
		}
	};


	// Class MassRepresentation.MassRepresentationFragmentDestructor
	// Inherited from UMassObserverProcessor -> UMassProcessor -> UObject
	// Size: 0x328 (0x400 - 0xD8)
	class UMassRepresentationFragmentDestructor : public UMassObserverProcessor	
	{
	public:
		unsigned char UnknownData01_1[0x328]; // 0xD8(0x328) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassRepresentation.MassRepresentationFragmentDestructor");
			return ret;
		}
	};


	// Class MassRepresentation.MassRepresentationSubsystem
	// Inherited from UMassSubsystemBase -> UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x98 (0xD0 - 0x38)
	class UMassRepresentationSubsystem : public UMassSubsystemBase	
	{
	public:
		TArray TemplateActors; // 0x38(0x10)
		UMassVisualizationComponent VisualizationComponent; // 0x48(0x8)
		AMassVisualizer Visualizer; // 0x50(0x8)
		UMassActorSpawnerSubsystem ActorSpawnerSubsystem; // 0x58(0x8)
		unsigned char UnknownData02_6[0x10]; // 0x60(0x10) UNKNOWN PROPERTY
		UWorldPartitionSubsystem WorldPartitionSubsystem; // 0x70(0x8)
		unsigned char UnknownData03_7[0x58]; // 0x78(0x58) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassRepresentation.MassRepresentationSubsystem");
			return ret;
		}
	};


	// Class MassRepresentation.MassStationaryDistanceVisualizationTrait
	// Inherited from UMassDistanceVisualizationTrait -> UMassEntityTraitBase -> UObject
	// Size: 0x8 (0x120 - 0x118)
	class UMassStationaryDistanceVisualizationTrait : public UMassDistanceVisualizationTrait	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassRepresentation.MassStationaryDistanceVisualizationTrait");
			return ret;
		}
	};


	// Class MassRepresentation.MassStationaryISMRepresentationFragmentDestructor
	// Inherited from UMassObserverProcessor -> UMassProcessor -> UObject
	// Size: 0x328 (0x400 - 0xD8)
	class UMassStationaryISMRepresentationFragmentDestructor : public UMassObserverProcessor	
	{
	public:
		unsigned char UnknownData01_1[0x328]; // 0xD8(0x328) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassRepresentation.MassStationaryISMRepresentationFragmentDestructor");
			return ret;
		}
	};


	// Class MassRepresentation.MassStationaryISMSwitcherProcessor
	// Inherited from UMassProcessor -> UObject
	// Size: 0x320 (0x3E0 - 0xC0)
	class UMassStationaryISMSwitcherProcessor : public UMassProcessor	
	{
	public:
		unsigned char UnknownData01_1[0x320]; // 0xC0(0x320) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassRepresentation.MassStationaryISMSwitcherProcessor");
			return ret;
		}
	};


	// Class MassRepresentation.MassStationaryVisualizationTrait
	// Inherited from UMassVisualizationTrait -> UMassEntityTraitBase -> UObject
	// Size: 0x0 (0x140 - 0x140)
	class UMassStationaryVisualizationTrait : public UMassVisualizationTrait	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassRepresentation.MassStationaryVisualizationTrait");
			return ret;
		}
	};


	// Class MassRepresentation.MassUpdateISMProcessor
	// Inherited from UMassProcessor -> UObject
	// Size: 0x320 (0x3E0 - 0xC0)
	class UMassUpdateISMProcessor : public UMassProcessor	
	{
	public:
		unsigned char UnknownData01_1[0x320]; // 0xC0(0x320) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassRepresentation.MassUpdateISMProcessor");
			return ret;
		}
	};


	// Class MassRepresentation.MassVisualizationComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x160 (0x200 - 0xA0)
	class UMassVisualizationComponent : public UActorComponent	
	{
	public:
		TArray InstancedStaticMeshInfos; // 0xA0(0x10)
		unsigned char UnknownData01_7[0x150]; // 0xB0(0x150) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassRepresentation.MassVisualizationComponent");
			return ret;
		}
	};


	// Class MassRepresentation.MassVisualizationLODProcessor
	// Inherited from UMassProcessor -> UObject
	// Size: 0xCA0 (0xD60 - 0xC0)
	class UMassVisualizationLODProcessor : public UMassProcessor	
	{
	public:
		unsigned char UnknownData02_3[0xC88]; // 0xC0(0xC88) UNKNOWN PROPERTY
		UScriptStruct FilterTag; // 0xD48(0x8)
		bool bDoAdjustmentFromCount; // 0xD50(0x1)
		unsigned char UnknownData03_7[0xF]; // 0xD51(0xF) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassRepresentation.MassVisualizationLODProcessor");
			return ret;
		}
	};


	// Class MassRepresentation.MassVisualizer
	// Inherited from AActor -> UObject
	// Size: 0x8 (0x298 - 0x290)
	class AMassVisualizer : public AActor	
	{
	public:
		UMassVisualizationComponent VisComponent; // 0x290(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassRepresentation.MassVisualizer");
			return ret;
		}
	};

}
