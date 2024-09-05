#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: VerseSimulation
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class VerseSimulation.VerseAgent
	// Inherited from UVersePersistentVarWeakMapKey -> UObject
	// Size: 0x8 (0x30 - 0x28)
	class UVerseAgent : public UVersePersistentVarWeakMapKey	
	{
	public:
		TWeakObjectPtr<AController*> Controller; // 0x28(0x8)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseSimulation.VerseAgent");
			return ret;
		}
	};


	// Class VerseSimulation.VerseTeam
	// Inherited from UObject
	// Size: 0x0 (0x28 - 0x28)
	class UVerseTeam : public UObject	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseSimulation.VerseTeam");
			return ret;
		}
	};


	// Class VerseSimulation.VerseSimulationSubsystem
	// Inherited from UWorldSubsystem -> USubsystem -> UObject
	// Size: 0x60 (0x90 - 0x30)
	class UVerseSimulationSubsystem : public UWorldSubsystem	
	{
	public:
		TMap<TWeakObjectPtr, UVerseAgent*> TrackedAgents; // 0x30(0x50)
		unsigned char UnknownData00_7[0x10]; // 0x80(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseSimulation.VerseSimulationSubsystem");
			return ret;
		}
	};

}
