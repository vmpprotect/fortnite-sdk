#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: DataflowCore
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

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
		TMap<FName, FNodeColors> NodeColorsMap; // 0x70(0x50)
		unsigned char UnknownData00_7[0x18]; // 0xC0(0x18) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/DataflowCore.DataflowSettings");
			return ret;
		}
	};

}
