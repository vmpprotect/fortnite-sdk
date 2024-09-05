#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: DataflowCore
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class DataflowCore.DataflowSettings
	// Inherited from UDeveloperSettings -> UObject
	// Size: 0xA8 (0xD8 - 0x30)
	class UDataflowSettings : public UDeveloperSettings	
	{
	public:
		FLinearColor ArrayPinTypeColor; // 0x30(0x10)
		FLinearColor ManagedArrayCollectionPinTypeColor; // 0x40(0x10)
		FLinearColor BoxPinTypeColor; // 0x50(0x10)
		FLinearColor SpherePinTypeColor; // 0x60(0x10)
		TMap NodeColorsMap; // 0x70(0x50)
		unsigned char UnknownData01_7[0x18]; // 0xC0(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DataflowCore.DataflowSettings");
			return ret;
		}
	};

}
