#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: PapayaPickupManagement
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

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
