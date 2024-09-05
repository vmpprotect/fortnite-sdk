#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.00-CL-35447195
// Package: HomerUI
// Current Base + Text VA: 0x0
// WARNING: Memory::va_text is 0, ufunctions will show current addresses

namespace SDK
{

	// Class HomerUI.FortHomerComponent
	// Inherited from UActorComponent -> UObject
	// Size: 0x88 (0x128 - 0xA0)
	class UFortHomerComponent : public UActorComponent	
	{
	public:
		unsigned char UnknownData01_1[0x88]; // 0xA0(0x88) UNKNOWN PROPERTY

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Script/HomerUI.FortHomerComponent");
			return ret;
		}

		void HandlePawnEmoteStopped(UFortItemDefinition MontageItemDef, AFortPawn PawnEmoting); // Flags: Final|Native|Private 0x7FF414CFDA18
		void HandleLocalPlayerEliminatedPlayer(AFortPlayerStateAthena Player); // Flags: Final|Native|Private 0x7FF414CFD938
	};

}
