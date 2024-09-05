#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: LearningTraining
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class LearningTraining.LearningSocketImitationTrainerServerCommandlet
	// Inherited from UCommandlet -> UObject
	// Size: 0x0 (0x80 - 0x80)
	class ULearningSocketImitationTrainerServerCommandlet : public UCommandlet	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LearningTraining.LearningSocketImitationTrainerServerCommandlet");
			return ret;
		}
	};


	// Class LearningTraining.LearningSocketPPOTrainerServerCommandlet
	// Inherited from UCommandlet -> UObject
	// Size: 0x0 (0x80 - 0x80)
	class ULearningSocketPPOTrainerServerCommandlet : public UCommandlet	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/LearningTraining.LearningSocketPPOTrainerServerCommandlet");
			return ret;
		}
	};

}
