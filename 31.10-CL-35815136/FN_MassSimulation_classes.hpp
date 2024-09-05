#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: MassSimulation
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class MassSimulation.MassSimulationSettings
	// Inherited from UMassModuleSettings -> UObject
	// Size: 0x28 (0x50 - 0x28)
	class UMassSimulationSettings : public UMassModuleSettings	
	{
	public:
		double DesiredActorSpawningTimeSlicePerTick; // 0x28(0x8)
		double DesiredActorDestructionTimeSlicePerTick; // 0x30(0x8)
		bool bEntityCompactionEnabled; // 0x38(0x1)
		unsigned char UnknownData00_6[0x7]; // 0x39(0x7) UNKNOWN PROPERTY
		double DesiredEntityCompactionTimeSlicePerTick; // 0x40(0x8)
		float DesiredActorFailedSpawningRetryTimeInterval; // 0x48(0x4)
		float DesiredActorFailedSpawningRetryMoveDistance; // 0x4C(0x4)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassSimulation.MassSimulationSettings");
			return ret;
		}
	};


	// Class MassSimulation.MassSimulationSubsystem
	// Inherited from UMassSubsystemBase -> UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x480 (0x4B8 - 0x38)
	class UMassSimulationSubsystem : public UMassSubsystemBase	
	{
	public:
		unsigned char UnknownData00_3[0x460]; // 0x38(0x460) UNKNOWN PROPERTY
		FMassRuntimePipeline RuntimePipeline; // 0x498(0x18)
		unsigned char UnknownData01_7[0x8]; // 0x4B0(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/MassSimulation.MassSimulationSubsystem");
			return ret;
		}
	};

}
