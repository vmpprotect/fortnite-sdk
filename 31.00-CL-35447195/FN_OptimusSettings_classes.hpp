#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: OptimusSettings
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class OptimusSettings.OptimusSettings
	// Inherited from UDeveloperSettings -> UObject
	// Size: 0x48 (0x78 - 0x30)
	class UOptimusSettings : public UDeveloperSettings	
	{
	public:
		EOptimusDefaultDeformerMode DefaultMode; // 0x30(0x1)
		unsigned char UnknownData01_6[0x7]; // 0x31(0x7) UNKNOWN PROPERTY
		TWeakObjectPtr DefaultDeformer; // 0x38(0x20)
		TWeakObjectPtr DefaultRecomputeTangentDeformer; // 0x58(0x20)

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/OptimusSettings.OptimusSettings");
			return ret;
		}
	};

}
