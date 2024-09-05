#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: LearningAgentsTraining
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Enum /Script/LearningAgentsTraining.ELearningAgentsCompletion
	enum ELearningAgentsCompletion
	{
		ELearningAgentsCompletion__Running = 0,
		ELearningAgentsCompletion__Truncation = 1,
		ELearningAgentsCompletion__Termination = 2,
	};


	// Enum /Script/LearningAgentsTraining.ELearningAgentsTrainingDevice
	enum ELearningAgentsTrainingDevice
	{
		ELearningAgentsTrainingDevice__CPU = 0,
		ELearningAgentsTrainingDevice__GPU = 1,
	};

}
