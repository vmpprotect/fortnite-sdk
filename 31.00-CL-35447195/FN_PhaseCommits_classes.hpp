#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: PhaseCommits
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class PhaseCommits.PhaseCommitFlow_Coordinator
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UPhaseCommitFlow_Coordinator : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PhaseCommits.PhaseCommitFlow_Coordinator");
			return ret;
		}
	};


	// Class PhaseCommits.PhaseCommitFlow_Participant
	// Inherited from UInterface -> UObject
	// Size: 0x0 (0x28 - 0x28)
	class UPhaseCommitFlow_Participant : public UInterface	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/PhaseCommits.PhaseCommitFlow_Participant");
			return ret;
		}
	};

}
