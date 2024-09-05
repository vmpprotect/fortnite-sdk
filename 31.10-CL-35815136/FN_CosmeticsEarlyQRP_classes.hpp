#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: CosmeticsEarlyQRP
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class CosmeticsEarlyQRP.CosmeticsEarlyQRPComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0xC0 (0x160 - 0xA0)
	class UCosmeticsEarlyQRPComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData00_1[0xC0]; // 0xA0(0xC0) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CosmeticsEarlyQRP.CosmeticsEarlyQRPComponent");
			return ret;
		}
	};

}
