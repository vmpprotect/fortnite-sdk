#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: CowCatcherModCodeRuntime
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class CowCatcherModCodeRuntime.CowCatcherBarricadeBase
	// Inherited from ABuildingGameplayActor -> ABuildingActor -> AActor -> UObject
	// Size: 0x8 (0x990 - 0x988)
	class ACowCatcherBarricadeBase : public ABuildingGameplayActor	
	{
	public:
		unsigned char UnknownData00_1[0x8]; // 0x988(0x8) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/CowCatcherModCodeRuntime.CowCatcherBarricadeBase");
			return ret;
		}

		void OnPlacementBlockedByPawnChanged(bool bBlockedByPawn); // Flags: Event|Protected|BlueprintEvent, Memory Exec: 0x7FF7471BBE78(relative to base address)
		void BeginCheckingForTouchingPawns(); // Flags: Final|BlueprintAuthorityOnly|Native|Protected|BlueprintCallable, Memory Exec: 0x7FF7511EC19C(relative to base address)
	};

}
