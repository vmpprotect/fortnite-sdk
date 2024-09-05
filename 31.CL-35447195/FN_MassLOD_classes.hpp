#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: MassLOD
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class MassLOD.MassLODCollectorProcessor
	// Inherited from UMassProcessor -> UObject
	// Size: 0xCA0 (0xD60 - 0xC0)
	class UMassLODCollectorProcessor : public UMassProcessor	
	{
	public:
		unsigned char UnknownData01_1[0xCA0]; // 0xC0(0xCA0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassLOD.MassLODCollectorProcessor");
			return ret;
		}
	};


	// Class MassLOD.MassLODDistanceCollectorProcessor
	// Inherited from UMassProcessor -> UObject
	// Size: 0xCA0 (0xD60 - 0xC0)
	class UMassLODDistanceCollectorProcessor : public UMassProcessor	
	{
	public:
		unsigned char UnknownData01_1[0xCA0]; // 0xC0(0xCA0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassLOD.MassLODDistanceCollectorProcessor");
			return ret;
		}
	};


	// Class MassLOD.MassLODSubsystem
	// Inherited from UMassSubsystemBase -> UWorldSubsystem -> USubsystem -> UObject
	// Size: 0xC8 (0x100 - 0x38)
	class UMassLODSubsystem : public UMassSubsystemBase	
	{
	public:
		bool bGatherPlayerControllers : 1; // 0x38:0(0x1)
		bool bGatherStreamingSources : 1; // 0x38:1(0x1)
		bool bAllowNonPlayerViwerActors : 1; // 0x38:2(0x1)
		bool bUsePlayerPawnLocationInsteadOfCamera : 1; // 0x38:3(0x1)
		unsigned char UnknownData02_5[0x7]; // 0x39(0x7) UNKNOWN PROPERTY
		TArray Viewers; // 0x40(0x10)
		TMap ViewerMap; // 0x50(0x50)
		TArray RegisteredActorViewers; // 0xA0(0x10)
		unsigned char UnknownData03_7[0x50]; // 0xB0(0x50) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassLOD.MassLODSubsystem");
			return ret;
		}

		void OnPlayerControllerEndPlay(AActor Actor, TEnumAsByte EndPlayReason); // Flags: Final|Native|Protected 0x7FF414BA6678
	};


	// Class MassLOD.MassLODCollectorTrait
	// Inherited from UMassEntityTraitBase -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMassLODCollectorTrait : public UMassEntityTraitBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassLOD.MassLODCollectorTrait");
			return ret;
		}
	};


	// Class MassLOD.MassDistanceLODCollectorTrait
	// Inherited from UMassEntityTraitBase -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UMassDistanceLODCollectorTrait : public UMassEntityTraitBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassLOD.MassDistanceLODCollectorTrait");
			return ret;
		}
	};


	// Class MassLOD.MassSimulationLODTrait
	// Inherited from UMassEntityTraitBase -> UObject
	// Size: 0x40 (0x68 - 0x28)
	class UMassSimulationLODTrait : public UMassEntityTraitBase	
	{
	public:
		FMassSimulationLODParameters Params; // 0x28(0x28)
		bool bEnableVariableTicking; // 0x50(0x1)
		unsigned char UnknownData01_6[0x3]; // 0x51(0x3) UNKNOWN PROPERTY
		FMassSimulationVariableTickParameters VariableTickParams; // 0x54(0x14)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassLOD.MassSimulationLODTrait");
			return ret;
		}
	};


	// Class MassLOD.MassSimulationLODProcessor
	// Inherited from UMassProcessor -> UObject
	// Size: 0xFB0 (0x1070 - 0xC0)
	class UMassSimulationLODProcessor : public UMassProcessor	
	{
	public:
		unsigned char UnknownData02_3[0xFA0]; // 0xC0(0xFA0) UNKNOWN PROPERTY
		bool bDoAdjustmentFromCount; // 0x1060(0x1)
		unsigned char UnknownData03_7[0xF]; // 0x1061(0xF) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassLOD.MassSimulationLODProcessor");
			return ret;
		}
	};

}
