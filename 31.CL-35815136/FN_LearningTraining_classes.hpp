#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: LearningTraining
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

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
