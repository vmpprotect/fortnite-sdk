#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: MassSmartObjects
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class MassSmartObjects.SmartObjectMassBehaviorDefinition
	// Inherited from USmartObjectBehaviorDefinition -> UObject
	// Size: 0x8 (0x30 - 0x28)
	class USmartObjectMassBehaviorDefinition : public USmartObjectBehaviorDefinition	
	{
	public:
		float UseTime; // 0x28(0x4)
		unsigned char UnknownData00_7[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassSmartObjects.SmartObjectMassBehaviorDefinition");
			return ret;
		}
	};


	// Class MassSmartObjects.MassSmartObjectCandidatesFinderProcessor
	// Inherited from UMassProcessor -> UObject
	// Size: 0x650 (0x710 - 0xC0)
	class UMassSmartObjectCandidatesFinderProcessor : public UMassProcessor	
	{
	public:
		float SearchExtents; // 0xC0(0x4)
		unsigned char UnknownData00_7[0x64C]; // 0xC4(0x64C) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassSmartObjects.MassSmartObjectCandidatesFinderProcessor");
			return ret;
		}
	};


	// Class MassSmartObjects.MassSmartObjectTimedBehaviorProcessor
	// Inherited from UMassProcessor -> UObject
	// Size: 0x320 (0x3E0 - 0xC0)
	class UMassSmartObjectTimedBehaviorProcessor : public UMassProcessor	
	{
	public:
		unsigned char UnknownData00_1[0x320]; // 0xC0(0x320) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassSmartObjects.MassSmartObjectTimedBehaviorProcessor");
			return ret;
		}
	};


	// Class MassSmartObjects.MassSmartObjectUserFragmentDeinitializer
	// Inherited from UMassObserverProcessor -> UMassProcessor -> UObject
	// Size: 0x328 (0x400 - 0xD8)
	class UMassSmartObjectUserFragmentDeinitializer : public UMassObserverProcessor	
	{
	public:
		unsigned char UnknownData00_1[0x328]; // 0xD8(0x328) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassSmartObjects.MassSmartObjectUserFragmentDeinitializer");
			return ret;
		}
	};


	// Class MassSmartObjects.MassSmartObjectInitializerBase
	// Inherited from UMassObserverProcessor -> UMassProcessor -> UObject
	// Size: 0x338 (0x410 - 0xD8)
	class UMassSmartObjectInitializerBase : public UMassObserverProcessor	
	{
	public:
		unsigned char UnknownData00_1[0x338]; // 0xD8(0x338) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassSmartObjects.MassSmartObjectInitializerBase");
			return ret;
		}
	};


	// Class MassSmartObjects.MassSmartObjectDeinitializerBase
	// Inherited from UMassObserverProcessor -> UMassProcessor -> UObject
	// Size: 0x338 (0x410 - 0xD8)
	class UMassSmartObjectDeinitializerBase : public UMassObserverProcessor	
	{
	public:
		unsigned char UnknownData00_1[0x338]; // 0xD8(0x338) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassSmartObjects.MassSmartObjectDeinitializerBase");
			return ret;
		}
	};


	// Class MassSmartObjects.MassActiveSmartObjectInitializer
	// Inherited from UMassSmartObjectInitializerBase -> UMassObserverProcessor -> UMassProcessor -> UObject
	// Size: 0x0 (0x410 - 0x410)
	class UMassActiveSmartObjectInitializer : public UMassSmartObjectInitializerBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassSmartObjects.MassActiveSmartObjectInitializer");
			return ret;
		}
	};


	// Class MassSmartObjects.MassActiveSmartObjectDeinitializer
	// Inherited from UMassSmartObjectDeinitializerBase -> UMassObserverProcessor -> UMassProcessor -> UObject
	// Size: 0x0 (0x410 - 0x410)
	class UMassActiveSmartObjectDeinitializer : public UMassSmartObjectDeinitializerBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassSmartObjects.MassActiveSmartObjectDeinitializer");
			return ret;
		}
	};


	// Class MassSmartObjects.MassActorInstanceHandleInitializer
	// Inherited from UMassSmartObjectInitializerBase -> UMassObserverProcessor -> UMassProcessor -> UObject
	// Size: 0x0 (0x410 - 0x410)
	class UMassActorInstanceHandleInitializer : public UMassSmartObjectInitializerBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassSmartObjects.MassActorInstanceHandleInitializer");
			return ret;
		}
	};


	// Class MassSmartObjects.MassActorInstanceHandleDeinitializer
	// Inherited from UMassSmartObjectDeinitializerBase -> UMassObserverProcessor -> UMassProcessor -> UObject
	// Size: 0x0 (0x410 - 0x410)
	class UMassActorInstanceHandleDeinitializer : public UMassSmartObjectDeinitializerBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassSmartObjects.MassActorInstanceHandleDeinitializer");
			return ret;
		}
	};


	// Class MassSmartObjects.MassActiveSmartObjectSignalProcessor
	// Inherited from UMassSignalProcessorBase -> UMassProcessor -> UObject
	// Size: 0x640 (0xAE0 - 0x4A0)
	class UMassActiveSmartObjectSignalProcessor : public UMassSignalProcessorBase	
	{
	public:
		unsigned char UnknownData00_1[0x640]; // 0x4A0(0x640) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassSmartObjects.MassActiveSmartObjectSignalProcessor");
			return ret;
		}
	};


	// Class MassSmartObjects.MassSmartObjectSettings
	// Inherited from UMassModuleSettings -> UObject
	// Size: 0x8 (0x30 - 0x28)
	class UMassSmartObjectSettings : public UMassModuleSettings	
	{
	public:
		FZoneGraphTag SmartObjectTag; // 0x28(0x1)
		unsigned char UnknownData00_6[0x3]; // 0x29(0x3) UNKNOWN PROPERTY
		float SearchExtents; // 0x2C(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassSmartObjects.MassSmartObjectSettings");
			return ret;
		}
	};


	// Class MassSmartObjects.MassSmartObjectUserTrait
	// Inherited from UMassEntityTraitBase -> UObject
	// Size: 0x20 (0x48 - 0x28)
	class UMassSmartObjectUserTrait : public UMassEntityTraitBase	
	{
	public:
		FGameplayTagContainer UserTags; // 0x28(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassSmartObjects.MassSmartObjectUserTrait");
			return ret;
		}
	};


	// Class MassSmartObjects.SmartObjectZoneAnnotations
	// Inherited from UZoneGraphAnnotationComponent -> UDebugDrawComponent -> UPrimitiveComponent -> USceneComponent -> UActorComponent -> UObject
	// Size: 0x38 (0x570 - 0x538)
	class USmartObjectZoneAnnotations : public UZoneGraphAnnotationComponent	
	{
	public:
		FZoneGraphTagFilter AffectedLaneTags; // 0x538(0xC)
		unsigned char UnknownData00_6[0x4]; // 0x544(0x4) UNKNOWN PROPERTY
		TArray<FSmartObjectAnnotationData> SmartObjectAnnotationDataArray; // 0x548(0x10)
		FZoneGraphTag BehaviorTag; // 0x558(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x559(0x7) UNKNOWN PROPERTY
		USmartObjectSubsystem* SmartObjectSubsystem; // 0x560(0x8)
		unsigned char UnknownData02_7[0x8]; // 0x568(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassSmartObjects.SmartObjectZoneAnnotations");
			return ret;
		}
	};

}
