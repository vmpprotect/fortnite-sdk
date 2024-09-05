#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: WaveTable
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class WaveTable.WaveTableBank
	// Inherited from UObject
	// Size: 0x38 (0x60 - 0x28)
	class UWaveTableBank : public UObject	
	{
	public:
		unsigned char UnknownData04_3[0x8]; // 0x28(0x8) UNKNOWN PROPERTY
		EWaveTableSamplingMode SampleMode; // 0x30(0x1)
		EWaveTableResolution Resolution; // 0x31(0x1)
		unsigned char UnknownData05_6[0x2]; // 0x32(0x2) UNKNOWN PROPERTY
		int32_t SampleRate; // 0x34(0x4)
		bool bBipolar; // 0x38(0x1)
		unsigned char UnknownData06_6[0x7]; // 0x39(0x7) UNKNOWN PROPERTY
		TArray Entries; // 0x40(0x10)
		unsigned char UnknownData07_7[0x10]; // 0x50(0x10) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/WaveTable.WaveTableBank");
			return ret;
		}
	};

}
