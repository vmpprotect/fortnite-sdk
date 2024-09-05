#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: CosmeticsEarlyQRP
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class CosmeticsEarlyQRP.CosmeticsEarlyQRPComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0xC0 (0x160 - 0xA0)
	class UCosmeticsEarlyQRPComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData01_1[0xC0]; // 0xA0(0xC0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CosmeticsEarlyQRP.CosmeticsEarlyQRPComponent");
			return ret;
		}
	};

}
