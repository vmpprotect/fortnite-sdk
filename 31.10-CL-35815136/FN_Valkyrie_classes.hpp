#pragma once

// Dumped with <3 by android1337
// Version: ++Fortnite+Release-31.10-CL-35815136
// Package: Valkyrie
// Current Base: 0x7FF745A60000, UFunctions offsets will be relative to this base address

namespace SDK
{

	// Class /Game/Valkyrie/UMG/UEFN_TextBlock.UEFN_TextBlock_C
	// Inherited from UUEFNTextBlockBase -> UTextBlock -> UTextLayoutWidget -> UWidget -> UVisual -> UObject
	// Size: 0x0 (0x300 - 0x300)
	class UUEFN_TextBlock_C : public UUEFNTextBlockBase	
	{
	public:

		static UClass* StaticClass() const {
			static auto ret = SDK::Utils::StaticFindObject<UClass>("/Game/Valkyrie/UMG/UEFN_TextBlock.UEFN_TextBlock_C");
			return ret;
		}
	};

}
