#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: OodleNetworkHandlerComponent
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class OodleNetworkHandlerComponent.OodleNetworkTrainerCommandlet
	// Inherited from UCommandlet -> UObject
	// Size: 0x20 (0xA0 - 0x80)
	class UOodleNetworkTrainerCommandlet : public UCommandlet	
	{
	public:
		bool bCompressionTest; // 0x80(0x1)
		bool bWriteV5Dictionaries; // 0x81(0x1)
		unsigned char UnknownData02_6[0x2]; // 0x82(0x2) UNKNOWN PROPERTY
		int32_t HashTableSize; // 0x84(0x4)
		int32_t DictionarySize; // 0x88(0x4)
		int32_t DictionaryTrials; // 0x8C(0x4)
		int32_t TrialRandomness; // 0x90(0x4)
		int32_t TrialGenerations; // 0x94(0x4)
		bool bNoTrials; // 0x98(0x1)
		unsigned char UnknownData03_7[0x7]; // 0x99(0x7) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/OodleNetworkHandlerComponent.OodleNetworkTrainerCommandlet");
			return ret;
		}
	};

}
