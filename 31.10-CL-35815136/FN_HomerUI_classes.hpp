#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: HomerUI
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class HomerUI.FortHomerComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x88 (0x128 - 0xA0)
	class UFortHomerComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData00_1[0x88]; // 0xA0(0x88) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/HomerUI.FortHomerComponent");
			return ret;
		}

		void HandlePawnEmoteStopped(UFortItemDefinition* MontageItemDef, AFortPawn* PawnEmoting); // Flags: Final|Native|Private, Memory Exec: 0x7FF75139A178(relative to base address)
		void HandleLocalPlayerEliminatedPlayer(AFortPlayerStateAthena* Player); // Flags: Final|Native|Private, Memory Exec: 0x7FF75139A0FC(relative to base address)
	};

}
