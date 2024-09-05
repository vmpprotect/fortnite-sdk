#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: PapayaPickupManagement
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /PapayaHub/PapayaPickupManagement.PapayaPickupManagement_C
	// Inherited from UFortGameStateComponent_PickupManagement -> UGameStateComponent -> UGameFrameworkComponent -> UActorComponent -> UObject
	// Size: 0x0 (0x170 - 0x170)
	class UPapayaPickupManagement_C : public UFortGameStateComponent_PickupManagement	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/PapayaHub/PapayaPickupManagement.PapayaPickupManagement_C");
			return ret;
		}
	};

}
