#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: Learning
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class Learning.LearningNeuralNetworkData
	// Inherited from UObject
	// Size: 0x38 (0x60 - 0x28)
	class ULearningNeuralNetworkData : public UObject	
	{
	public:
		int32_t InputSize; // 0x28(0x4)
		int32_t OutputSize; // 0x2C(0x4)
		int32_t CompatibilityHash; // 0x30(0x4)
		unsigned char UnknownData00_6[0x4]; // 0x34(0x4) UNKNOWN PROPERTY
		TArray<char> FileData; // 0x38(0x10)
		UNNEModelData* ModelData; // 0x48(0x8)
		unsigned char UnknownData01_7[0x10]; // 0x50(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/Learning.LearningNeuralNetworkData");
			return ret;
		}
	};

}
