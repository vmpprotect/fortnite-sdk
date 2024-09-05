#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: VerseSimulation
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class VerseSimulation.VerseAgent
	// Inherited from UVersePersistentVarWeakMapKey -> UObject
	// Size: 0x8 (0x30 - 0x28)
	class UVerseAgent : public UVersePersistentVarWeakMapKey	
	{
	public:
		TWeakObjectPtr Controller; // 0x28(0x8)

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
		TMap TrackedAgents; // 0x30(0x50)
		unsigned char UnknownData01_7[0x10]; // 0x80(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/VerseSimulation.VerseSimulationSubsystem");
			return ret;
		}
	};

}
