#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: MassGameplayDebug
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class MassGameplayDebug.AssignDebugVisProcessor
	// Inherited from UMassObserverProcessor -> UMassProcessor -> UObject
	// Size: 0x328 (0x400 - 0xD8)
	class UAssignDebugVisProcessor : public UMassObserverProcessor	
	{
	public:
		unsigned char UnknownData01_1[0x328]; // 0xD8(0x328) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassGameplayDebug.AssignDebugVisProcessor");
			return ret;
		}
	};


	// Class MassGameplayDebug.DebugVisLocationProcessor
	// Inherited from UMassProcessor -> UObject
	// Size: 0x320 (0x3E0 - 0xC0)
	class UDebugVisLocationProcessor : public UMassProcessor	
	{
	public:
		unsigned char UnknownData01_1[0x320]; // 0xC0(0x320) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassGameplayDebug.DebugVisLocationProcessor");
			return ret;
		}
	};


	// Class MassGameplayDebug.MassProcessor_UpdateDebugVis
	// Inherited from UMassProcessor -> UObject
	// Size: 0x320 (0x3E0 - 0xC0)
	class UMassProcessor_UpdateDebugVis : public UMassProcessor	
	{
	public:
		unsigned char UnknownData01_1[0x320]; // 0xC0(0x320) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassGameplayDebug.MassProcessor_UpdateDebugVis");
			return ret;
		}
	};


	// Class MassGameplayDebug.MassDebuggerSubsystem
	// Inherited from UMassSubsystemBase -> UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x98 (0xD0 - 0x38)
	class UMassDebuggerSubsystem : public UMassSubsystemBase	
	{
	public:
		unsigned char UnknownData02_3[0x80]; // 0x38(0x80) UNKNOWN PROPERTY
		UMassDebugVisualizationComponent VisualizationComponent; // 0xB8(0x8)
		AMassDebugVisualizer DebugVisualizer; // 0xC0(0x8)
		unsigned char UnknownData03_7[0x8]; // 0xC8(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassGameplayDebug.MassDebuggerSubsystem");
			return ret;
		}
	};


	// Class MassGameplayDebug.MassDebugVisualizationComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x0 (0xA0 - 0xA0)
	class UMassDebugVisualizationComponent : public UActorComponent	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassGameplayDebug.MassDebugVisualizationComponent");
			return ret;
		}
	};


	// Class MassGameplayDebug.MassDebugVisualizationTrait
	// Inherited from UMassEntityTraitBase -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMassDebugVisualizationTrait : public UMassEntityTraitBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassGameplayDebug.MassDebugVisualizationTrait");
			return ret;
		}
	};


	// Class MassGameplayDebug.MassDebugVisualizer
	// Inherited from AActor -> UObject
	// Size: 0x0 (0x290 - 0x290)
	class AMassDebugVisualizer : public AActor	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassGameplayDebug.MassDebugVisualizer");
			return ret;
		}
	};

}
