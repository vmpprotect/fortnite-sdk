#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: CowCatcherModCodeRuntime
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class CowCatcherModCodeRuntime.CowCatcherBarricadeBase
	// Inherited from ABuildingGameplayActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x8 (0x990 - 0x988)
	class ACowCatcherBarricadeBase : public ABuildingGameplayActor	
	{
	public:
		unsigned char UnknownData01_1[0x8]; // 0x988(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CowCatcherModCodeRuntime.CowCatcherBarricadeBase");
			return ret;
		}

		void OnPlacementBlockedByPawnChanged(bool bBlockedByPawn); // Flags: Event|Protected|BlueprintEvent 0x7FF414CC8B18
		void BeginCheckingForTouchingPawns(); // Flags: Final|BlueprintAuthorityOnly|Native|Protected|BlueprintCallable 0x7FF414CC8A38
	};

}
