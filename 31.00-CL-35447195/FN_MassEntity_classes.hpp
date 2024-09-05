#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: MassEntity
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class MassEntity.MassSubsystemBase
	// Inherited from UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x8 (0x38 - 0x30)
	class UMassSubsystemBase : public UWorldSubsystem	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x30(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassEntity.MassSubsystemBase");
			return ret;
		}
	};


	// Class MassEntity.MassTickableSubsystemBase
	// Inherited from UTickableWorldSubsystem -> UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x8 (0x48 - 0x40)
	class UMassTickableSubsystemBase : public UTickableWorldSubsystem	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x40(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassEntity.MassTickableSubsystemBase");
			return ret;
		}
	};


	// Class MassEntity.MassModuleSettings
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMassModuleSettings : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassEntity.MassModuleSettings");
			return ret;
		}
	};


	// Class MassEntity.MassEntitySettings
	// Inherited from UMassModuleSettings -> UObject
	// Size: 0x108 (0x130 - 0x28)
	class UMassEntitySettings : public UMassModuleSettings	
	{
	public:
		int32_t ChunkMemorySize; // 0x28(0x4)
		unsigned char UnknownData02_6[0x4]; // 0x2C(0x4) UNKNOWN PROPERTY
		FString DumpDependencyGraphFileName; // 0x30(0x10)
		FMassProcessingPhaseConfig ProcessingPhasesConfig; // 0x40(0xC0)
		TArray ProcessorCDOs; // 0x100(0x10)
		unsigned char UnknownData03_7[0x20]; // 0x110(0x20) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassEntity.MassEntitySettings");
			return ret;
		}
	};


	// Class MassEntity.MassEntitySubsystem
	// Inherited from UMassSubsystemBase -> UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x10 (0x48 - 0x38)
	class UMassEntitySubsystem : public UMassSubsystemBase	
	{
	public:
		unsigned char UnknownData01_1[0x10]; // 0x38(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassEntity.MassEntitySubsystem");
			return ret;
		}
	};


	// Class MassEntity.MassProcessor
	// Inherited from UObject
	// Size: 0x98 (0xC0 - 0x28)
	class UMassProcessor : public UObject	
	{
	public:
		int32_t ExecutionFlags; // 0x28(0x4)
		EMassProcessingPhase ProcessingPhase; // 0x2C(0x1)
		unsigned char UnknownData03_6[0x3]; // 0x2D(0x3) UNKNOWN PROPERTY
		FMassProcessorExecutionOrder ExecutionOrder; // 0x30(0x28)
		bool bAutoRegisterWithProcessingPhases; // 0x58(0x1)
		unsigned char UnknownData04_6[0x2]; // 0x59(0x2) UNKNOWN PROPERTY
		bool bRequiresGameThreadExecution; // 0x5B(0x1)
		unsigned char UnknownData05_7[0x64]; // 0x5C(0x64) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassEntity.MassProcessor");
			return ret;
		}
	};


	// Class MassEntity.MassObserverProcessor
	// Inherited from UMassProcessor -> UObject
	// Size: 0x18 (0xD8 - 0xC0)
	class UMassObserverProcessor : public UMassProcessor	
	{
	public:
		bool bAutoRegisterWithObserverRegistry; // 0xC0(0x1)
		unsigned char UnknownData02_6[0x7]; // 0xC1(0x7) UNKNOWN PROPERTY
		UScriptStruct ObservedType; // 0xC8(0x8)
		unsigned char UnknownData03_7[0x8]; // 0xD0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassEntity.MassObserverProcessor");
			return ret;
		}
	};


	// Class MassEntity.MassObserverRegistry
	// Inherited from UObject
	// Size: 0x140 (0x168 - 0x28)
	class UMassObserverRegistry : public UObject	
	{
	public:
		FMassEntityObserverClassesMap FragmentObservers; // 0x28(0xA0)
		FMassEntityObserverClassesMap TagObservers; // 0xC8(0xA0)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassEntity.MassObserverRegistry");
			return ret;
		}
	};


	// Class MassEntity.MassCompositeProcessor
	// Inherited from UMassProcessor -> UObject
	// Size: 0x40 (0x100 - 0xC0)
	class UMassCompositeProcessor : public UMassProcessor	
	{
	public:
		FMassRuntimePipeline ChildPipeline; // 0xC0(0x18)
		FName GroupName; // 0xD8(0x4)
		unsigned char UnknownData01_7[0x24]; // 0xDC(0x24) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassEntity.MassCompositeProcessor");
			return ret;
		}
	};


	// Class MassEntity.MassSettings
	// Inherited from UDeveloperSettings -> UObject
	// Size: 0x50 (0x80 - 0x30)
	class UMassSettings : public UDeveloperSettings	
	{
	public:
		TMap ModuleSettings; // 0x30(0x50)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassEntity.MassSettings");
			return ret;
		}
	};

}
