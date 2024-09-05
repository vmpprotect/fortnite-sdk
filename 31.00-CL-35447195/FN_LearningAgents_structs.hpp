#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: LearningAgents
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Struct LearningAgents.LearningAgentsActionSchemaElement
	// Size: 0x8 (0x8 - 0x0)
	struct FLearningAgentsActionSchemaElement	
	{
	public:
		unsigned char UnknownData01_2[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct LearningAgents.LearningAgentsActionObjectElement
	// Size: 0x8 (0x8 - 0x0)
	struct FLearningAgentsActionObjectElement	
	{
	public:
		unsigned char UnknownData01_2[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct LearningAgents.LearningAgentsCriticSettings
	// Size: 0xC (0xC - 0x0)
	struct FLearningAgentsCriticSettings	
	{
	public:
		int32_t HiddenLayerNum; // 0x0(0x4)
		int32_t HiddenLayerSize; // 0x4(0x4)
		ELearningAgentsActivationFunction ActivationFunction; // 0x8(0x1)
		unsigned char UnknownData01_7[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
	};


	// Struct LearningAgents.LearningAgentsObservationSchemaElement
	// Size: 0x8 (0x8 - 0x0)
	struct FLearningAgentsObservationSchemaElement	
	{
	public:
		unsigned char UnknownData01_2[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct LearningAgents.LearningAgentsObservationObjectElement
	// Size: 0x8 (0x8 - 0x0)
	struct FLearningAgentsObservationObjectElement	
	{
	public:
		unsigned char UnknownData01_2[0x8]; // 0x0(0x8) UNKNOWN PROPERTY
	};


	// Struct LearningAgents.LearningAgentsPolicySettings
	// Size: 0x18 (0x18 - 0x0)
	struct FLearningAgentsPolicySettings	
	{
	public:
		int32_t HiddenLayerNum; // 0x0(0x4)
		int32_t HiddenLayerSize; // 0x4(0x4)
		bool bUseMemory; // 0x8(0x1)
		unsigned char UnknownData02_6[0x3]; // 0x9(0x3) UNKNOWN PROPERTY
		int32_t MemoryStateSize; // 0xC(0x4)
		float InitialEncodedActionScale; // 0x10(0x4)
		ELearningAgentsActivationFunction ActivationFunction; // 0x14(0x1)
		unsigned char UnknownData03_7[0x3]; // 0x15(0x3) UNKNOWN PROPERTY
	};

}
